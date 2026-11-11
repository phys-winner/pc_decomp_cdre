#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_170378A7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170378A7u);

L_170378A7:
    edi = edi; /* 0x170378A7: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170378A9: push ebp */
    ebp = esp; /* 0x170378AA: mov ebp, esp */
    edx = MEM32(ebp + 0x10); /* 0x170378AC: mov edx, dword ptr [ebp + 0x10] */
    /* test edx, edx */ /* 0x170378AF: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170378DB; /* 0x170378B1: je 0x170378db */
L_170378B3:
    eax = MEM32(ebp + 0xC); /* 0x170378B3: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x8); /* 0x170378B6: mov ecx, dword ptr [ebp + 8] */
    /* cmp eax, MEM32(ecx + 0x24) */ /* 0x170378B9: cmp eax, dword ptr [ecx + 0x24] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x24));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_170378DB; /* 0x170378BC: jae 0x170378db */
L_170378BE:
    PUSH32(esp, esi); /* 0x170378BE: push esi */
    esi = MEM32(ecx + 0x2C); /* 0x170378BF: mov esi, dword ptr [ecx + 0x2c] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x170378C2: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x170378C2: shl eax, 2 */
    esi = MEM32(eax + esi); /* 0x170378C5: mov esi, dword ptr [eax + esi] */
    MEM32(edx) = esi; /* 0x170378C8: mov dword ptr [edx], esi */
    ecx = MEM32(ecx + 0x2C); /* 0x170378CA: mov ecx, dword ptr [ecx + 0x2c] */
    eax = MEM32(eax + ecx); /* 0x170378CD: mov eax, dword ptr [eax + ecx] */
    ecx = MEM32(eax); /* 0x170378D0: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x170378D2: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x4)); /* 0x170378D3: call dword ptr [ecx + 4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170378D6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x170378D8: pop esi */
    goto L_170378E0; /* 0x170378D9: jmp 0x170378e0 */
L_170378DB:
    eax = 0x8876086Cu; /* 0x170378DB: mov eax, 0x8876086c */
L_170378E0:
    ebp = POP32_VAL(esp); /* 0x170378E0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x170378E1: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_170378E9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170378E9u);

L_170378E9:
    edi = edi; /* 0x170378E9: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170378EB: push ebp */
    ebp = esp; /* 0x170378EC: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x170378EE: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x170378EF: mov ebx, dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x170378F2: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x170378F3: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ebx, edi */ /* 0x170378F5: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170378FE; /* 0x170378F7: je 0x170378fe */
L_170378F9:
    /* cmp MEM32(ebp + 0xC), edi */ /* 0x170378F9: cmp dword ptr [ebp + 0xc], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17037905; /* 0x170378FC: jne 0x17037905 */
L_170378FE:
    eax = 0x8876086Cu; /* 0x170378FE: mov eax, 0x8876086c */
    goto L_17037935; /* 0x17037903: jmp 0x17037935 */
L_17037905:
    PUSH32(esp, esi); /* 0x17037905: push esi */
    esi = MEM32(ebp + 0x8); /* 0x17037906: mov esi, dword ptr [ebp + 8] */
    /* cmp MEM32(esi + 0x24), edi */ /* 0x17037909: cmp dword ptr [esi + 0x24], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x24)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1703792F; /* 0x1703790C: jbe 0x1703792f */
L_1703790E:
    eax = MEM32(esi + 0x2C); /* 0x1703790E: mov eax, dword ptr [esi + 0x2c] */
    eax = MEM32(eax + edi * 4); /* 0x17037911: mov eax, dword ptr [eax + edi*4] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x17037914: push dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x17037917: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x17037919: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xC)); /* 0x1703791A: call dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1703791D: push eax */
    RECOMP_CALL(sub_1721B106); /* 0x1703791E: call 0x1721b106 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17037923: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x17037925: pop ecx */
    ecx = POP32_VAL(esp); /* 0x17037926: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703793B; /* 0x17037927: je 0x1703793b */
L_17037929:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x17037929: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(esi + 0x24) */ /* 0x1703792A: cmp edi, dword ptr [esi + 0x24] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x24));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1703790E; /* 0x1703792D: jb 0x1703790e */
L_1703792F:
    eax = 0x88760866u; /* 0x1703792F: mov eax, 0x88760866 */
L_17037934:
    esi = POP32_VAL(esp); /* 0x17037934: pop esi */
L_17037935:
    edi = POP32_VAL(esp); /* 0x17037935: pop edi */
    ebx = POP32_VAL(esp); /* 0x17037936: pop ebx */
    ebp = POP32_VAL(esp); /* 0x17037937: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x17037938: ret 0xc */
L_1703793B:
    eax = MEM32(esi + 0x2C); /* 0x1703793B: mov eax, dword ptr [esi + 0x2c] */
    eax = MEM32(eax + edi * 4); /* 0x1703793E: mov eax, dword ptr [eax + edi*4] */
    MEM32(ebx) = eax; /* 0x17037941: mov dword ptr [ebx], eax */
    ecx = MEM32(eax); /* 0x17037943: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x17037945: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x4)); /* 0x17037946: call dword ptr [ecx + 4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17037949: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_17037934; /* 0x1703794B: jmp 0x17037934 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_17037952(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17037952u);

L_17037952:
    edi = edi; /* 0x17037952: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17037954: push ebp */
    ebp = esp; /* 0x17037955: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x17037957: push ecx */
    PUSH32(esp, ecx); /* 0x17037958: push ecx */
    PUSH32(esp, ebx); /* 0x17037959: push ebx */
    PUSH32(esp, edi); /* 0x1703795A: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1703795B: mov edi, dword ptr [ebp + 8] */
    fp_push(*(double*)ADDR(edi + 0x8)); /* 0x1703795E: fld qword ptr [edi + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x17037961: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edi + 0x4C), ebx */ /* 0x17037963: cmp dword ptr [edi + 0x4c], ebx */
    _flag_a = (uint32_t)(MEM32(edi + 0x4C)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    _st[0] += *(double*)ADDR(edi + 0x10); /* 0x17037966: fadd qword ptr [edi + 0x10] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x8)) = _v; } /* 0x17037969: fstp qword ptr [ebp - 8] */
    if (CMP_BE(_flag_a, _flag_b)) goto L_170379DB; /* 0x1703796C: jbe 0x170379db */
L_1703796E:
    MEM32(ebp + 0x8) = ebx; /* 0x1703796E: mov dword ptr [ebp + 8], ebx */
    PUSH32(esp, esi); /* 0x17037971: push esi */
L_17037972:
    esi = MEM32(edi + 0x54); /* 0x17037972: mov esi, dword ptr [edi + 0x54] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + 0x8); /* 0x17037975: add esi, dword ptr [ebp + 8] */
    _flag_k = FK_ADD;
    eax = MEM32(esi + 0x30); /* 0x17037978: mov eax, dword ptr [esi + 0x30] */
    goto L_17037989; /* 0x1703797B: jmp 0x17037989 */
L_1703797D:
    fp_push(*(double*)ADDR(eax + 0x8)); /* 0x1703797D: fld qword ptr [eax + 8] */
    _st[0] -= *(double*)ADDR(ebp + (-0x8)); /* 0x17037980: fsub qword ptr [ebp - 8] */
    { double _v = fp_pop(); *(double*)ADDR(eax + 0x8) = _v; } /* 0x17037983: fstp qword ptr [eax + 8] */
    eax = MEM32(eax + 0x30); /* 0x17037986: mov eax, dword ptr [eax + 0x30] */
L_17037989:
    /* test eax, eax */ /* 0x17037989: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1703797D; /* 0x1703798B: jne 0x1703797d */
L_1703798D:
    PUSH32(esp, 4); /* 0x1703798D: push 4 */
    eax = esi + 0x34; /* 0x1703798F: lea eax, [esi + 0x34] */
    edx = POP32_VAL(esp); /* 0x17037992: pop edx */
L_17037993:
    ecx = MEM32(eax); /* 0x17037993: mov ecx, dword ptr [eax] */
    /* test ecx, ecx */ /* 0x17037995: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170379A2; /* 0x17037997: je 0x170379a2 */
L_17037999:
    fp_push(*(double*)ADDR(ecx + 0x8)); /* 0x17037999: fld qword ptr [ecx + 8] */
    _st[0] -= *(double*)ADDR(ebp + (-0x8)); /* 0x1703799C: fsub qword ptr [ebp - 8] */
    { double _v = fp_pop(); *(double*)ADDR(ecx + 0x8) = _v; } /* 0x1703799F: fstp qword ptr [ecx + 8] */
L_170379A2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x170379A2: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x170379A5: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_17037993; /* 0x170379A6: jne 0x17037993 */
L_170379A8:
    eax = MEM32(esi + 0x20); /* 0x170379A8: mov eax, dword ptr [esi + 0x20] */
    ecx = MEM32(edi + 0x2C); /* 0x170379AB: mov ecx, dword ptr [edi + 0x2c] */
    eax = ecx + eax * 4; /* 0x170379AE: lea eax, [ecx + eax*4] */
    /* cmp MEM32(eax), 0 */ /* 0x170379B1: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170379C9; /* 0x170379B4: je 0x170379c9 */
L_170379B6:
    eax = MEM32(eax); /* 0x170379B6: mov eax, dword ptr [eax] */
    fp_push(*(double*)ADDR(esi + 0x10)); /* 0x170379B8: fld qword ptr [esi + 0x10] */
    ecx = MEM32(eax); /* 0x170379BB: mov ecx, dword ptr [eax] */
    PUSH32(esp, ecx); /* 0x170379BD: push ecx */
    PUSH32(esp, ecx); /* 0x170379BE: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x170379BF: fstp qword ptr [esp] */
    PUSH32(esp, eax); /* 0x170379C2: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x14)); /* 0x170379C3: call dword ptr [ecx + 0x14] */
    RECOMP_FLAGS_IN();
    { double _v = fp_pop(); *(double*)ADDR(esi + 0x10) = _v; } /* 0x170379C6: fstp qword ptr [esi + 0x10] */
L_170379C9:
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0x58u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + 0x58u; /* 0x170379C9: add dword ptr [ebp + 8], 0x58 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x170379CD: inc ebx */
    _flag_k = FK_INC;
    MEM32(esi + 0x54) = 1; /* 0x170379CE: mov dword ptr [esi + 0x54], 1 */
    /* cmp ebx, MEM32(edi + 0x4C) */ /* 0x170379D5: cmp ebx, dword ptr [edi + 0x4c] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(edi + 0x4C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17037972; /* 0x170379D8: jb 0x17037972 */
L_170379DA:
    esi = POP32_VAL(esp); /* 0x170379DA: pop esi */
L_170379DB:
    eax = MEM32(edi + 0x44); /* 0x170379DB: mov eax, dword ptr [edi + 0x44] */
    goto L_170379EC; /* 0x170379DE: jmp 0x170379ec */
L_170379E0:
    fp_push(*(double*)ADDR(eax + 0x8)); /* 0x170379E0: fld qword ptr [eax + 8] */
    _st[0] -= *(double*)ADDR(ebp + (-0x8)); /* 0x170379E3: fsub qword ptr [ebp - 8] */
    { double _v = fp_pop(); *(double*)ADDR(eax + 0x8) = _v; } /* 0x170379E6: fstp qword ptr [eax + 8] */
    eax = MEM32(eax + 0x30); /* 0x170379E9: mov eax, dword ptr [eax + 0x30] */
L_170379EC:
    /* test eax, eax */ /* 0x170379EC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170379E0; /* 0x170379EE: jne 0x170379e0 */
L_170379F0:
    eax = MEM32(edi + 0x48); /* 0x170379F0: mov eax, dword ptr [edi + 0x48] */
    /* test eax, eax */ /* 0x170379F3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17037A00; /* 0x170379F5: je 0x17037a00 */
L_170379F7:
    fp_push(*(double*)ADDR(eax + 0x8)); /* 0x170379F7: fld qword ptr [eax + 8] */
    _st[0] -= *(double*)ADDR(ebp + (-0x8)); /* 0x170379FA: fsub qword ptr [ebp - 8] */
    { double _v = fp_pop(); *(double*)ADDR(eax + 0x8) = _v; } /* 0x170379FD: fstp qword ptr [eax + 8] */
L_17037A00:
    fp_push(0.0); /* 0x17037A00: fldz  */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17037A02: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    { double _v = fp_pop(); *(double*)ADDR(edi + 0x10) = _v; } /* 0x17037A04: fstp qword ptr [edi + 0x10] */
    fp_push(0.0); /* 0x17037A07: fldz  */
    { double _v = fp_pop(); *(double*)ADDR(edi + 0x8) = _v; } /* 0x17037A09: fstp qword ptr [edi + 8] */
    edi = POP32_VAL(esp); /* 0x17037A0C: pop edi */
    ebx = POP32_VAL(esp); /* 0x17037A0D: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17037A0E: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x17037A0F: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_17037A17(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17037A17u);

L_17037A17:
    edi = edi; /* 0x17037A17: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17037A19: push ebp */
    ebp = esp; /* 0x17037A1A: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x17037A1C: mov eax, dword ptr [ebp + 8] */
    fp_push(*(double*)ADDR(eax + 0x10)); /* 0x17037A1F: fld qword ptr [eax + 0x10] */
    _st[0] += *(double*)ADDR(eax + 0x8); /* 0x17037A22: fadd qword ptr [eax + 8] */
    ebp = POP32_VAL(esp); /* 0x17037A25: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x17037A26: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_17037A2E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17037A2Eu);

L_17037A2E:
    edi = edi; /* 0x17037A2E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17037A30: push ebp */
    ebp = esp; /* 0x17037A31: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x17037A33: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x17037A34: mov ebx, dword ptr [ebp + 0x10] */
    /* test ebx, ebx */ /* 0x17037A37: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x17037A39: push esi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17037A8A; /* 0x17037A3A: je 0x17037a8a */
L_17037A3C:
    ecx = MEM32(ebp + 0xC); /* 0x17037A3C: mov ecx, dword ptr [ebp + 0xc] */
    eax = MEM32(ebp + 0x8); /* 0x17037A3F: mov eax, dword ptr [ebp + 8] */
    /* cmp ecx, MEM32(eax + 0x50) */ /* 0x17037A42: cmp ecx, dword ptr [eax + 0x50] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x50));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_17037A8A; /* 0x17037A45: jae 0x17037a8a */
L_17037A47:
    PUSH32(esp, edi); /* 0x17037A47: push edi */
    edi = MEM32(eax + 0x24); /* 0x17037A48: mov edi, dword ptr [eax + 0x24] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x17037A4B: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x17037A4D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17037A61; /* 0x17037A4F: jbe 0x17037a61 */
L_17037A51:
    esi = MEM32(eax + 0x2C); /* 0x17037A51: mov esi, dword ptr [eax + 0x2c] */
L_17037A54:
    /* cmp MEM32(esi), ebx */ /* 0x17037A54: cmp dword ptr [esi], ebx */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17037A61; /* 0x17037A56: je 0x17037a61 */
L_17037A58:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x17037A58: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x17037A59: add esi, 4 */
    _flag_k = FK_ADD;
    /* cmp edx, MEM32(eax + 0x24) */ /* 0x17037A5C: cmp edx, dword ptr [eax + 0x24] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(eax + 0x24));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17037A54; /* 0x17037A5F: jb 0x17037a54 */
L_17037A61:
    /* cmp edx, edi */ /* 0x17037A61: cmp edx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = POP32_VAL(esp); /* 0x17037A63: pop edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17037A8A; /* 0x17037A64: je 0x17037a8a */
L_17037A66:
    /* cmp MEM32(eax + 0x4C), ecx */ /* 0x17037A66: cmp dword ptr [eax + 0x4c], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4C)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_17037A71; /* 0x17037A69: ja 0x17037a71 */
L_17037A6B:
    esi = ecx + 0x1; /* 0x17037A6B: lea esi, [ecx + 1] */
    MEM32(eax + 0x4C) = esi; /* 0x17037A6E: mov dword ptr [eax + 0x4c], esi */
L_17037A71:
    esi = MEM32(eax + 0x54); /* 0x17037A71: mov esi, dword ptr [eax + 0x54] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x58u); /* 0x17037A74: imul ecx, ecx, 0x58 */
    MEM32(ecx + esi + 0x20) = edx; /* 0x17037A77: mov dword ptr [ecx + esi + 0x20], edx */
    eax = MEM32(eax + 0x54); /* 0x17037A7B: mov eax, dword ptr [eax + 0x54] */
    MEM32(ecx + eax + 0x54) = 1; /* 0x17037A7E: mov dword ptr [ecx + eax + 0x54], 1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17037A86: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_17037A8F; /* 0x17037A88: jmp 0x17037a8f */
L_17037A8A:
    eax = 0x8876086Cu; /* 0x17037A8A: mov eax, 0x8876086c */
L_17037A8F:
    esi = POP32_VAL(esp); /* 0x17037A8F: pop esi */
    ebx = POP32_VAL(esp); /* 0x17037A90: pop ebx */
    ebp = POP32_VAL(esp); /* 0x17037A91: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x17037A92: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_17037A9A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17037A9Au);

L_17037A9A:
    edi = edi; /* 0x17037A9A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17037A9C: push ebp */
    ebp = esp; /* 0x17037A9D: mov ebp, esp */
    edx = MEM32(ebp + 0x10); /* 0x17037A9F: mov edx, dword ptr [ebp + 0x10] */
    /* test edx, edx */ /* 0x17037AA2: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17037AEE; /* 0x17037AA4: je 0x17037aee */
L_17037AA6:
    ecx = MEM32(ebp + 0xC); /* 0x17037AA6: mov ecx, dword ptr [ebp + 0xc] */
    eax = MEM32(ebp + 0x8); /* 0x17037AA9: mov eax, dword ptr [ebp + 8] */
    /* cmp ecx, MEM32(eax + 0x50) */ /* 0x17037AAC: cmp ecx, dword ptr [eax + 0x50] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x50));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_17037AEE; /* 0x17037AAF: jae 0x17037aee */
L_17037AB1:
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x58u); /* 0x17037AB1: imul ecx, ecx, 0x58 */
    PUSH32(esp, esi); /* 0x17037AB4: push esi */
    esi = MEM32(eax + 0x54); /* 0x17037AB5: mov esi, dword ptr [eax + 0x54] */
    esi = MEM32(esi + ecx + 0x20); /* 0x17037AB8: mov esi, dword ptr [esi + ecx + 0x20] */
    PUSH32(esp, edi); /* 0x17037ABC: push edi */
    edi = MEM32(eax + 0x2C); /* 0x17037ABD: mov edi, dword ptr [eax + 0x2c] */
    esi = MEM32(edi + esi * 4); /* 0x17037AC0: mov esi, dword ptr [edi + esi*4] */
    MEM32(edx) = esi; /* 0x17037AC3: mov dword ptr [edx], esi */
    edx = MEM32(eax + 0x54); /* 0x17037AC5: mov edx, dword ptr [eax + 0x54] */
    esi = MEM32(eax + 0x2C); /* 0x17037AC8: mov esi, dword ptr [eax + 0x2c] */
    edx = MEM32(edx + ecx + 0x20); /* 0x17037ACB: mov edx, dword ptr [edx + ecx + 0x20] */
    /* cmp MEM32(esi + edx * 4), 0 */ /* 0x17037ACF: cmp dword ptr [esi + edx*4], 0 */
    _flag_a = (uint32_t)(MEM32(esi + edx * 4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = POP32_VAL(esp); /* 0x17037AD3: pop edi */
    esi = POP32_VAL(esp); /* 0x17037AD4: pop esi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17037AEA; /* 0x17037AD5: je 0x17037aea */
L_17037AD7:
    edx = MEM32(eax + 0x54); /* 0x17037AD7: mov edx, dword ptr [eax + 0x54] */
    ecx = MEM32(edx + ecx + 0x20); /* 0x17037ADA: mov ecx, dword ptr [edx + ecx + 0x20] */
    eax = MEM32(eax + 0x2C); /* 0x17037ADE: mov eax, dword ptr [eax + 0x2c] */
    eax = MEM32(eax + ecx * 4); /* 0x17037AE1: mov eax, dword ptr [eax + ecx*4] */
    ecx = MEM32(eax); /* 0x17037AE4: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x17037AE6: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x4)); /* 0x17037AE7: call dword ptr [ecx + 4] */
    RECOMP_FLAGS_IN();
L_17037AEA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17037AEA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_17037AF3; /* 0x17037AEC: jmp 0x17037af3 */
L_17037AEE:
    eax = 0x8876086Cu; /* 0x17037AEE: mov eax, 0x8876086c */
L_17037AF3:
    ebp = POP32_VAL(esp); /* 0x17037AF3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x17037AF4: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_17037AFC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17037AFCu);

L_17037AFC:
    edi = edi; /* 0x17037AFC: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17037AFE: push ebp */
    ebp = esp; /* 0x17037AFF: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x17037B01: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x8); /* 0x17037B04: mov ecx, dword ptr [ebp + 8] */
    /* cmp eax, MEM32(ecx + 0x50) */ /* 0x17037B07: cmp eax, dword ptr [ecx + 0x50] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x50));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_17037B18; /* 0x17037B0A: jae 0x17037b18 */
L_17037B0C:
    edx = MEM32(ebp + 0x10); /* 0x17037B0C: mov edx, dword ptr [ebp + 0x10] */
    /* test edx, edx */ /* 0x17037B0F: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17037B1F; /* 0x17037B11: je 0x17037b1f */
L_17037B13:
    /* cmp edx, 1 */ /* 0x17037B13: cmp edx, 1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17037B1F; /* 0x17037B16: je 0x17037b1f */
L_17037B18:
    eax = 0x8876086Cu; /* 0x17037B18: mov eax, 0x8876086c */
    goto L_17037B2A; /* 0x17037B1D: jmp 0x17037b2a */
L_17037B1F:
    ecx = MEM32(ecx + 0x54); /* 0x17037B1F: mov ecx, dword ptr [ecx + 0x54] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x58u); /* 0x17037B22: imul eax, eax, 0x58 */
    MEM32(eax + ecx) = edx; /* 0x17037B25: mov dword ptr [eax + ecx], edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17037B28: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_17037B2A:
    ebp = POP32_VAL(esp); /* 0x17037B2A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x17037B2B: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_17037B33(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17037B33u);

L_17037B33:
    edi = edi; /* 0x17037B33: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17037B35: push ebp */
    ebp = esp; /* 0x17037B36: mov ebp, esp */
    PUSH32(esp, esi); /* 0x17037B38: push esi */
    PUSH32(esp, edi); /* 0x17037B39: push edi */
    edi = MEM32(ebp + 0x10); /* 0x17037B3A: mov edi, dword ptr [ebp + 0x10] */
    /* test edi, edi */ /* 0x17037B3D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17037B5B; /* 0x17037B3F: je 0x17037b5b */
L_17037B41:
    esi = MEM32(ebp + 0xC); /* 0x17037B41: mov esi, dword ptr [ebp + 0xc] */
    eax = MEM32(ebp + 0x8); /* 0x17037B44: mov eax, dword ptr [ebp + 8] */
    /* cmp esi, MEM32(eax + 0x50) */ /* 0x17037B47: cmp esi, dword ptr [eax + 0x50] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(eax + 0x50));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_17037B5B; /* 0x17037B4A: jae 0x17037b5b */
L_17037B4C:
    esi = (uint32_t)((int32_t)esi * (int32_t)0x58u); /* 0x17037B4C: imul esi, esi, 0x58 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(eax + 0x54));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(eax + 0x54); /* 0x17037B4F: add esi, dword ptr [eax + 0x54] */
    _flag_k = FK_ADD;
    PUSH32(esp, 8); /* 0x17037B52: push 8 */
    ecx = POP32_VAL(esp); /* 0x17037B54: pop ecx */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x17037B55: rep movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17037B57: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_17037B60; /* 0x17037B59: jmp 0x17037b60 */
L_17037B5B:
    eax = 0x8876086Cu; /* 0x17037B5B: mov eax, 0x8876086c */
L_17037B60:
    edi = POP32_VAL(esp); /* 0x17037B60: pop edi */
    esi = POP32_VAL(esp); /* 0x17037B61: pop esi */
    ebp = POP32_VAL(esp); /* 0x17037B62: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x17037B63: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_17037B6B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17037B6Bu);

L_17037B6B:
    edi = edi; /* 0x17037B6B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17037B6D: push ebp */
    ebp = esp; /* 0x17037B6E: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x17037B70: mov eax, dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(eax + 0x40)); /* 0x17037B73: fld dword ptr [eax + 0x40] */
    ebp = POP32_VAL(esp); /* 0x17037B76: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x17037B77: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_17037B7F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17037B7Fu);

L_17037B7F:
    edi = edi; /* 0x17037B7F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17037B81: push ebp */
    ebp = esp; /* 0x17037B82: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x17037B84: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x8); /* 0x17037B87: mov ecx, dword ptr [ebp + 8] */
    /* cmp eax, MEM32(ecx + 0x50) */ /* 0x17037B8A: cmp eax, dword ptr [ecx + 0x50] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x50));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_17037BAB; /* 0x17037B8D: jae 0x17037bab */
L_17037B8F:
    /* cmp MEM32(ebp + 0x10), 4 */ /* 0x17037B8F: cmp dword ptr [ebp + 0x10], 4 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_17037BAB; /* 0x17037B93: jge 0x17037bab */
L_17037B95:
    edx = MEM32(ecx + 0x54); /* 0x17037B95: mov edx, dword ptr [ecx + 0x54] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x16u); /* 0x17037B98: imul eax, eax, 0x16 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + 0x10); /* 0x17037B9B: add eax, dword ptr [ebp + 0x10] */
    _flag_k = FK_ADD;
    eax = eax * 4 + 0x34; /* 0x17037B9E: lea eax, [eax*4 + 0x34] */
    /* cmp MEM32(eax + edx), 0 */ /* 0x17037BA5: cmp dword ptr [eax + edx], 0 */
    _flag_a = (uint32_t)(MEM32(eax + edx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17037BAF; /* 0x17037BA9: jne 0x17037baf */
L_17037BAB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17037BAB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_17037BCD; /* 0x17037BAD: jmp 0x17037bcd */
L_17037BAF:
    edx = MEM32(ecx + 0x54); /* 0x17037BAF: mov edx, dword ptr [ecx + 0x54] */
    PUSH32(esp, esi); /* 0x17037BB2: push esi */
    esi = MEM32(eax + edx); /* 0x17037BB3: mov esi, dword ptr [eax + edx] */
    eax = esi; /* 0x17037BB6: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x38));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ecx + 0x38); /* 0x17037BB8: sub eax, dword ptr [ecx + 0x38] */
    _flag_k = FK_CMP;
    PUSH32(esp, 0x38u); /* 0x17037BBB: push 0x38 */
    ecx = POP32_VAL(esp); /* 0x17037BBD: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x17037BBE: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x17037BC0: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    ecx = MEM32(esi + 0x2C); /* 0x17037BC2: mov ecx, dword ptr [esi + 0x2c] */
    if (16u) _cf = (((ecx) >> 16) & 1u); /* 0x17037BC5: shl ecx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ecx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 16u; /* 0x17037BC5: shl ecx, 0x10 */
    esi = POP32_VAL(esp); /* 0x17037BC8: pop esi */
    eax = eax + ecx + 0x1; /* 0x17037BC9: lea eax, [eax + ecx + 1] */
L_17037BCD:
    ebp = POP32_VAL(esp); /* 0x17037BCD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x17037BCE: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_17037BD6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17037BD6u);

L_17037BD6:
    edi = edi; /* 0x17037BD6: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17037BD8: push ebp */
    ebp = esp; /* 0x17037BD9: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x17037BDB: mov edx, dword ptr [ebp + 8] */
    ecx = MEM32(edx + 0x48); /* 0x17037BDE: mov ecx, dword ptr [edx + 0x48] */
    /* test ecx, ecx */ /* 0x17037BE1: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17037BE9; /* 0x17037BE3: jne 0x17037be9 */
L_17037BE5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17037BE5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_17037C01; /* 0x17037BE7: jmp 0x17037c01 */
L_17037BE9:
    PUSH32(esp, esi); /* 0x17037BE9: push esi */
    eax = ecx; /* 0x17037BEA: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x38));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(edx + 0x38); /* 0x17037BEC: sub eax, dword ptr [edx + 0x38] */
    _flag_k = FK_CMP;
    PUSH32(esp, 0x38u); /* 0x17037BEF: push 0x38 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x17037BF1: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x17037BF3: pop esi */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)esi; /* 0x17037BF4: div esi */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    ecx = MEM32(ecx + 0x2C); /* 0x17037BF6: mov ecx, dword ptr [ecx + 0x2c] */
    if (16u) _cf = (((ecx) >> 16) & 1u); /* 0x17037BF9: shl ecx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ecx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 16u; /* 0x17037BF9: shl ecx, 0x10 */
    esi = POP32_VAL(esp); /* 0x17037BFC: pop esi */
    eax = eax + ecx + 0x1; /* 0x17037BFD: lea eax, [eax + ecx + 1] */
L_17037C01:
    ebp = POP32_VAL(esp); /* 0x17037C01: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x17037C02: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_17037C0A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17037C0Au);

L_17037C0A:
    edi = edi; /* 0x17037C0A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17037C0C: push ebp */
    ebp = esp; /* 0x17037C0D: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x17037C0F: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x8); /* 0x17037C12: mov ecx, dword ptr [ebp + 8] */
    /* cmp eax, MEM32(ecx + 0x50) */ /* 0x17037C15: cmp eax, dword ptr [ecx + 0x50] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x50));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_17037C1E; /* 0x17037C18: jb 0x17037c1e */
L_17037C1A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17037C1A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_17037C80; /* 0x17037C1C: jmp 0x17037c80 */
L_17037C1E:
    edx = MEM32(ebp + 0x10); /* 0x17037C1E: mov edx, dword ptr [ebp + 0x10] */
    /* test edx, edx */ /* 0x17037C21: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x17037C23: push esi */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17037C4F; /* 0x17037C24: jne 0x17037c4f */
L_17037C26:
    edx = MEM32(ecx + 0x54); /* 0x17037C26: mov edx, dword ptr [ecx + 0x54] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x58u); /* 0x17037C29: imul eax, eax, 0x58 */
    /* cmp MEM32(edx + eax + 0x30), 0 */ /* 0x17037C2C: cmp dword ptr [edx + eax + 0x30], 0 */
    _flag_a = (uint32_t)(MEM32(edx + eax + 0x30)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17037C7D; /* 0x17037C31: je 0x17037c7d */
L_17037C33:
    esi = MEM32(edx + eax + 0x30); /* 0x17037C33: mov esi, dword ptr [edx + eax + 0x30] */
    eax = esi; /* 0x17037C37: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x38));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ecx + 0x38); /* 0x17037C39: sub eax, dword ptr [ecx + 0x38] */
    _flag_k = FK_CMP;
L_17037C3C:
    PUSH32(esp, 0x38u); /* 0x17037C3C: push 0x38 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x17037C3E: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x17037C40: pop ecx */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x17037C41: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    ecx = MEM32(esi + 0x2C); /* 0x17037C43: mov ecx, dword ptr [esi + 0x2c] */
    if (16u) _cf = (((ecx) >> 16) & 1u); /* 0x17037C46: shl ecx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ecx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 16u; /* 0x17037C46: shl ecx, 0x10 */
    eax = eax + ecx + 0x1; /* 0x17037C49: lea eax, [eax + ecx + 1] */
    goto L_17037C7F; /* 0x17037C4D: jmp 0x17037c7f */
L_17037C4F:
    eax = edx; /* 0x17037C4F: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFu);
    eax = eax & 0xFFFFu; /* 0x17037C51: and eax, 0xffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 1 */ /* 0x17037C56: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_17037C7D; /* 0x17037C59: jbe 0x17037c7d */
L_17037C5B:
    /* cmp eax, MEM32(ecx + 0x34) */ /* 0x17037C5B: cmp eax, dword ptr [ecx + 0x34] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x34));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_17037C7D; /* 0x17037C5E: ja 0x17037c7d */
L_17037C60:
    ecx = MEM32(ecx + 0x38); /* 0x17037C60: mov ecx, dword ptr [ecx + 0x38] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38u); /* 0x17037C63: imul eax, eax, 0x38 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x17037C66: add eax, ecx */
    _flag_k = FK_ADD;
    if (16u) _cf = (((edx) >> 15) & 1u); /* 0x17037C68: shr edx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((edx >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 16u; /* 0x17037C68: shr edx, 0x10 */
    /* cmp edx, MEM32(eax + (-0xC)) */ /* 0x17037C6B: cmp edx, dword ptr [eax - 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(eax + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17037C7D; /* 0x17037C6E: jne 0x17037c7d */
L_17037C70:
    esi = MEM32(eax + (-0x8)); /* 0x17037C70: mov esi, dword ptr [eax - 8] */
    /* test esi, esi */ /* 0x17037C73: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17037C7D; /* 0x17037C75: je 0x17037c7d */
L_17037C77:
    eax = esi; /* 0x17037C77: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x17037C79: sub eax, ecx */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    goto L_17037C3C; /* 0x17037C7B: jmp 0x17037c3c */
L_17037C7D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17037C7D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_17037C7F:
    esi = POP32_VAL(esp); /* 0x17037C7F: pop esi */
L_17037C80:
    ebp = POP32_VAL(esp); /* 0x17037C80: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x17037C81: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_17037C89(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17037C89u);

L_17037C89:
    edi = edi; /* 0x17037C89: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17037C8B: push ebp */
    ebp = esp; /* 0x17037C8C: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x17037C8E: mov ecx, dword ptr [ebp + 0xc] */
    /* test ecx, ecx */ /* 0x17037C91: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x17037C93: push esi */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17037CA7; /* 0x17037C94: jne 0x17037ca7 */
L_17037C96:
    edx = MEM32(ebp + 0x8); /* 0x17037C96: mov edx, dword ptr [ebp + 8] */
    ecx = MEM32(edx + 0x44); /* 0x17037C99: mov ecx, dword ptr [edx + 0x44] */
    /* test ecx, ecx */ /* 0x17037C9C: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17037CE9; /* 0x17037C9E: je 0x17037ce9 */
L_17037CA0:
    eax = ecx; /* 0x17037CA0: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x38));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(edx + 0x38); /* 0x17037CA2: sub eax, dword ptr [edx + 0x38] */
    _flag_k = FK_CMP;
    goto L_17037CD6; /* 0x17037CA5: jmp 0x17037cd6 */
L_17037CA7:
    eax = ecx; /* 0x17037CA7: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFu);
    eax = eax & 0xFFFFu; /* 0x17037CA9: and eax, 0xffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 1 */ /* 0x17037CAE: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_17037CE9; /* 0x17037CB1: jbe 0x17037ce9 */
L_17037CB3:
    edx = MEM32(ebp + 0x8); /* 0x17037CB3: mov edx, dword ptr [ebp + 8] */
    /* cmp eax, MEM32(edx + 0x34) */ /* 0x17037CB6: cmp eax, dword ptr [edx + 0x34] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x34));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_17037CE9; /* 0x17037CB9: ja 0x17037ce9 */
L_17037CBB:
    edx = MEM32(edx + 0x38); /* 0x17037CBB: mov edx, dword ptr [edx + 0x38] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38u); /* 0x17037CBE: imul eax, eax, 0x38 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x17037CC1: add eax, edx */
    _flag_k = FK_ADD;
    if (16u) _cf = (((ecx) >> 15) & 1u); /* 0x17037CC3: shr ecx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ecx >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 16u; /* 0x17037CC3: shr ecx, 0x10 */
    /* cmp ecx, MEM32(eax + (-0xC)) */ /* 0x17037CC6: cmp ecx, dword ptr [eax - 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17037CE9; /* 0x17037CC9: jne 0x17037ce9 */
L_17037CCB:
    ecx = MEM32(eax + (-0x8)); /* 0x17037CCB: mov ecx, dword ptr [eax - 8] */
    /* test ecx, ecx */ /* 0x17037CCE: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17037CE9; /* 0x17037CD0: je 0x17037ce9 */
L_17037CD2:
    eax = ecx; /* 0x17037CD2: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x17037CD4: sub eax, edx */
    _flag_k = FK_CMP;
L_17037CD6:
    PUSH32(esp, 0x38u); /* 0x17037CD6: push 0x38 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x17037CD8: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x17037CDA: pop esi */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)esi; /* 0x17037CDB: div esi */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    ecx = MEM32(ecx + 0x2C); /* 0x17037CDD: mov ecx, dword ptr [ecx + 0x2c] */
    if (16u) _cf = (((ecx) >> 16) & 1u); /* 0x17037CE0: shl ecx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ecx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 16u; /* 0x17037CE0: shl ecx, 0x10 */
    eax = eax + ecx + 0x1; /* 0x17037CE3: lea eax, [eax + ecx + 1] */
    goto L_17037CEB; /* 0x17037CE7: jmp 0x17037ceb */
L_17037CE9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17037CE9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_17037CEB:
    esi = POP32_VAL(esp); /* 0x17037CEB: pop esi */
    ebp = POP32_VAL(esp); /* 0x17037CEC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x17037CED: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_17037CF5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17037CF5u);

L_17037CF5:
    edi = edi; /* 0x17037CF5: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17037CF7: push ebp */
    ebp = esp; /* 0x17037CF8: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x17037CFA: mov ecx, dword ptr [ebp + 0xc] */
    eax = ecx; /* 0x17037CFD: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFu);
    eax = eax & 0xFFFFu; /* 0x17037CFF: and eax, 0xffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 1 */ /* 0x17037D04: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_17037D24; /* 0x17037D07: jbe 0x17037d24 */
L_17037D09:
    edx = MEM32(ebp + 0x8); /* 0x17037D09: mov edx, dword ptr [ebp + 8] */
    /* cmp eax, MEM32(edx + 0x34) */ /* 0x17037D0C: cmp eax, dword ptr [edx + 0x34] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x34));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_17037D24; /* 0x17037D0F: ja 0x17037d24 */
L_17037D11:
    edx = MEM32(edx + 0x38); /* 0x17037D11: mov edx, dword ptr [edx + 0x38] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38u); /* 0x17037D14: imul eax, eax, 0x38 */
    if (16u) _cf = (((ecx) >> 15) & 1u); /* 0x17037D17: shr ecx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ecx >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 16u; /* 0x17037D17: shr ecx, 0x10 */
    /* cmp ecx, MEM32(eax + edx + (-0xC)) */ /* 0x17037D1A: cmp ecx, dword ptr [eax + edx - 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + edx + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17037D24; /* 0x17037D1E: jne 0x17037d24 */
L_17037D20:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17037D20: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_17037D29; /* 0x17037D22: jmp 0x17037d29 */
L_17037D24:
    eax = 0x80004005u; /* 0x17037D24: mov eax, 0x80004005 */
L_17037D29:
    ebp = POP32_VAL(esp); /* 0x17037D29: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x17037D2A: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_17037D32(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17037D32u);

L_17037D32:
    edi = edi; /* 0x17037D32: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17037D34: push ebp */
    ebp = esp; /* 0x17037D35: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x17037D37: mov ecx, dword ptr [ebp + 0xc] */
    eax = ecx; /* 0x17037D3A: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFu);
    eax = eax & 0xFFFFu; /* 0x17037D3C: and eax, 0xffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 1 */ /* 0x17037D41: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_17037D71; /* 0x17037D44: jbe 0x17037d71 */
L_17037D46:
    edx = MEM32(ebp + 0x8); /* 0x17037D46: mov edx, dword ptr [ebp + 8] */
    /* cmp eax, MEM32(edx + 0x34) */ /* 0x17037D49: cmp eax, dword ptr [edx + 0x34] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x34));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_17037D71; /* 0x17037D4C: ja 0x17037d71 */
L_17037D4E:
    edx = MEM32(edx + 0x38); /* 0x17037D4E: mov edx, dword ptr [edx + 0x38] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38u); /* 0x17037D51: imul eax, eax, 0x38 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x17037D54: add eax, edx */
    _flag_k = FK_ADD;
    if (16u) _cf = (((ecx) >> 15) & 1u); /* 0x17037D56: shr ecx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ecx >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 16u; /* 0x17037D56: shr ecx, 0x10 */
    /* cmp ecx, MEM32(eax + (-0xC)) */ /* 0x17037D59: cmp ecx, dword ptr [eax - 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17037D71; /* 0x17037D5C: jne 0x17037d71 */
L_17037D5E:
    PUSH32(esp, esi); /* 0x17037D5E: push esi */
    PUSH32(esp, edi); /* 0x17037D5F: push edi */
    edi = MEM32(ebp + 0x10); /* 0x17037D60: mov edi, dword ptr [ebp + 0x10] */
    PUSH32(esp, 0xAu); /* 0x17037D63: push 0xa */
    ecx = POP32_VAL(esp); /* 0x17037D65: pop ecx */
    esi = eax + (-0x38); /* 0x17037D66: lea esi, [eax - 0x38] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x17037D69: rep movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x17037D6B: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17037D6C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x17037D6E: pop esi */
    goto L_17037D76; /* 0x17037D6F: jmp 0x17037d76 */
L_17037D71:
    eax = 0x8876086Cu; /* 0x17037D71: mov eax, 0x8876086c */
L_17037D76:
    ebp = POP32_VAL(esp); /* 0x17037D76: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x17037D77: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_17037D7F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17037D7Fu);

L_17037D7F:
    edi = edi; /* 0x17037D7F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17037D81: push ebp */
    ebp = esp; /* 0x17037D82: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x17037D84: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x28); /* 0x17037D87: mov eax, dword ptr [eax + 0x28] */
    ebp = POP32_VAL(esp); /* 0x17037D8A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x17037D8B: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_17037D93(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17037D93u);

L_17037D93:
    edi = edi; /* 0x17037D93: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17037D95: push ebp */
    ebp = esp; /* 0x17037D96: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x17037D98: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x50); /* 0x17037D9B: mov eax, dword ptr [eax + 0x50] */
    ebp = POP32_VAL(esp); /* 0x17037D9E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x17037D9F: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_17037DA7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17037DA7u);

L_17037DA7:
    edi = edi; /* 0x17037DA7: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17037DA9: push ebp */
    ebp = esp; /* 0x17037DAA: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x17037DAC: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x4) = MEM32(ecx + 0x4) - 1; /* 0x17037DAF: dec dword ptr [ecx + 4] */
    _flag_k = FK_DEC;
    eax = MEM32(ecx + 0x4); /* 0x17037DB2: mov eax, dword ptr [ecx + 4] */
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_17037DC0; /* 0x17037DB5: jne 0x17037dc0 */
L_17037DB7:
    PUSH32(esp, 1); /* 0x17037DB7: push 1 */
    RECOMP_CALL(sub_17037478); /* 0x17037DB9: call 0x17037478 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17037DBE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_17037DC0:
    ebp = POP32_VAL(esp); /* 0x17037DC0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x17037DC1: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_17038EC1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17038EC1u);

L_17038EC1:
    edi = edi; /* 0x17038EC1: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17038EC3: push ebp */
    ebp = esp; /* 0x17038EC4: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x17038EC6: mov ecx, dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + 0x8); /* 0x17038EC9: mov edx, dword ptr [ebp + 8] */
    /* cmp ecx, MEM32(edx + 0x50) */ /* 0x17038ECC: cmp ecx, dword ptr [edx + 0x50] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edx + 0x50));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_17038ED8; /* 0x17038ECF: jb 0x17038ed8 */
L_17038ED1:
    eax = 0x8876086Cu; /* 0x17038ED1: mov eax, 0x8876086c */
    goto L_17038F0D; /* 0x17038ED6: jmp 0x17038f0d */
L_17038ED8:
    eax = MEM32(edx + 0x54); /* 0x17038ED8: mov eax, dword ptr [edx + 0x54] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x17038EDB: fld dword ptr [ebp + 0x10] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x58u); /* 0x17038EDE: imul ecx, ecx, 0x58 */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + ecx + 0x8) = _v; } /* 0x17038EE1: fstp dword ptr [eax + ecx + 8] */
    eax = MEM32(edx + 0x54); /* 0x17038EE5: mov eax, dword ptr [edx + 0x54] */
    eax = MEM32(eax + ecx + 0x34); /* 0x17038EE8: mov eax, dword ptr [eax + ecx + 0x34] */
    /* test eax, eax */ /* 0x17038EEC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17038F0B; /* 0x17038EEE: je 0x17038f0b */
L_17038EF0:
    _flag_a = (uint32_t)(MEM32(eax + 0x2C)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x2C) = MEM32(eax + 0x2C) + 1; /* 0x17038EF0: inc dword ptr [eax + 0x2c] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM16(eax + 0x2E)) << 16; _flag_b = (uint32_t)(0) << 16;
    MEM16(eax + 0x2E) = (uint16_t)(MEM16(eax + 0x2E) & 0); /* 0x17038EF3: and word ptr [eax + 0x2e], 0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    PUSH32(esp, esi); /* 0x17038EF8: push esi */
    esi = MEM32(edx + 0x3C); /* 0x17038EF9: mov esi, dword ptr [edx + 0x3c] */
    MEM32(eax + 0x30) = esi; /* 0x17038EFC: mov dword ptr [eax + 0x30], esi */
    MEM32(edx + 0x3C) = eax; /* 0x17038EFF: mov dword ptr [edx + 0x3c], eax */
    eax = MEM32(edx + 0x54); /* 0x17038F02: mov eax, dword ptr [edx + 0x54] */
    _flag_a = (uint32_t)(MEM32(eax + ecx + 0x34)); _flag_b = (uint32_t)(0);
    MEM32(eax + ecx + 0x34) = MEM32(eax + ecx + 0x34) & 0; /* 0x17038F05: and dword ptr [eax + ecx + 0x34], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x17038F0A: pop esi */
L_17038F0B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17038F0B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_17038F0D:
    ebp = POP32_VAL(esp); /* 0x17038F0D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x17038F0E: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_17038F16(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17038F16u);

L_17038F16:
    edi = edi; /* 0x17038F16: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17038F18: push ebp */
    ebp = esp; /* 0x17038F19: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x17038F1B: mov ecx, dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + 0x8); /* 0x17038F1E: mov edx, dword ptr [ebp + 8] */
    /* cmp ecx, MEM32(edx + 0x50) */ /* 0x17038F21: cmp ecx, dword ptr [edx + 0x50] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edx + 0x50));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_17038F2D; /* 0x17038F24: jb 0x17038f2d */
L_17038F26:
    eax = 0x8876086Cu; /* 0x17038F26: mov eax, 0x8876086c */
    goto L_17038F62; /* 0x17038F2B: jmp 0x17038f62 */
L_17038F2D:
    eax = MEM32(edx + 0x54); /* 0x17038F2D: mov eax, dword ptr [edx + 0x54] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x17038F30: fld dword ptr [ebp + 0x10] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x58u); /* 0x17038F33: imul ecx, ecx, 0x58 */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + ecx + 0x4) = _v; } /* 0x17038F36: fstp dword ptr [eax + ecx + 4] */
    eax = MEM32(edx + 0x54); /* 0x17038F3A: mov eax, dword ptr [edx + 0x54] */
    eax = MEM32(eax + ecx + 0x38); /* 0x17038F3D: mov eax, dword ptr [eax + ecx + 0x38] */
    /* test eax, eax */ /* 0x17038F41: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17038F60; /* 0x17038F43: je 0x17038f60 */
L_17038F45:
    _flag_a = (uint32_t)(MEM32(eax + 0x2C)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x2C) = MEM32(eax + 0x2C) + 1; /* 0x17038F45: inc dword ptr [eax + 0x2c] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM16(eax + 0x2E)) << 16; _flag_b = (uint32_t)(0) << 16;
    MEM16(eax + 0x2E) = (uint16_t)(MEM16(eax + 0x2E) & 0); /* 0x17038F48: and word ptr [eax + 0x2e], 0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    PUSH32(esp, esi); /* 0x17038F4D: push esi */
    esi = MEM32(edx + 0x3C); /* 0x17038F4E: mov esi, dword ptr [edx + 0x3c] */
    MEM32(eax + 0x30) = esi; /* 0x17038F51: mov dword ptr [eax + 0x30], esi */
    MEM32(edx + 0x3C) = eax; /* 0x17038F54: mov dword ptr [edx + 0x3c], eax */
    eax = MEM32(edx + 0x54); /* 0x17038F57: mov eax, dword ptr [edx + 0x54] */
    _flag_a = (uint32_t)(MEM32(eax + ecx + 0x38)); _flag_b = (uint32_t)(0);
    MEM32(eax + ecx + 0x38) = MEM32(eax + ecx + 0x38) & 0; /* 0x17038F5A: and dword ptr [eax + ecx + 0x38], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x17038F5F: pop esi */
L_17038F60:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17038F60: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_17038F62:
    ebp = POP32_VAL(esp); /* 0x17038F62: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x17038F63: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_17038F6B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17038F6Bu);

L_17038F6B:
    edi = edi; /* 0x17038F6B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17038F6D: push ebp */
    ebp = esp; /* 0x17038F6E: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x17038F70: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x8); /* 0x17038F73: mov ecx, dword ptr [ebp + 8] */
    /* cmp eax, MEM32(ecx + 0x50) */ /* 0x17038F76: cmp eax, dword ptr [ecx + 0x50] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x50));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_17038F82; /* 0x17038F79: jb 0x17038f82 */
L_17038F7B:
    eax = 0x8876086Cu; /* 0x17038F7B: mov eax, 0x8876086c */
    goto L_17038FC2; /* 0x17038F80: jmp 0x17038fc2 */
L_17038F82:
    edx = MEM32(ecx + 0x54); /* 0x17038F82: mov edx, dword ptr [ecx + 0x54] */
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x17038F85: fld qword ptr [ebp + 0x10] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x58u); /* 0x17038F88: imul eax, eax, 0x58 */
    { double _v = fp_pop(); *(double*)ADDR(edx + eax + 0x10) = _v; } /* 0x17038F8B: fstp qword ptr [edx + eax + 0x10] */
    edx = MEM32(ecx + 0x54); /* 0x17038F8F: mov edx, dword ptr [ecx + 0x54] */
    MEM32(edx + eax + 0x54) = 1; /* 0x17038F92: mov dword ptr [edx + eax + 0x54], 1 */
    edx = MEM32(ecx + 0x54); /* 0x17038F9A: mov edx, dword ptr [ecx + 0x54] */
    edx = MEM32(edx + eax + 0x3C); /* 0x17038F9D: mov edx, dword ptr [edx + eax + 0x3c] */
    /* test edx, edx */ /* 0x17038FA1: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17038FC0; /* 0x17038FA3: je 0x17038fc0 */
L_17038FA5:
    _flag_a = (uint32_t)(MEM32(edx + 0x2C)); _flag_b = (uint32_t)(1);
    MEM32(edx + 0x2C) = MEM32(edx + 0x2C) + 1; /* 0x17038FA5: inc dword ptr [edx + 0x2c] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM16(edx + 0x2E)) << 16; _flag_b = (uint32_t)(0) << 16;
    MEM16(edx + 0x2E) = (uint16_t)(MEM16(edx + 0x2E) & 0); /* 0x17038FA8: and word ptr [edx + 0x2e], 0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    PUSH32(esp, esi); /* 0x17038FAD: push esi */
    esi = MEM32(ecx + 0x3C); /* 0x17038FAE: mov esi, dword ptr [ecx + 0x3c] */
    MEM32(edx + 0x30) = esi; /* 0x17038FB1: mov dword ptr [edx + 0x30], esi */
    MEM32(ecx + 0x3C) = edx; /* 0x17038FB4: mov dword ptr [ecx + 0x3c], edx */
    ecx = MEM32(ecx + 0x54); /* 0x17038FB7: mov ecx, dword ptr [ecx + 0x54] */
    _flag_a = (uint32_t)(MEM32(ecx + eax + 0x3C)); _flag_b = (uint32_t)(0);
    MEM32(ecx + eax + 0x3C) = MEM32(ecx + eax + 0x3C) & 0; /* 0x17038FBA: and dword ptr [ecx + eax + 0x3c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x17038FBF: pop esi */
L_17038FC0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17038FC0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_17038FC2:
    ebp = POP32_VAL(esp); /* 0x17038FC2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x17038FC3: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_17038FCB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17038FCBu);

L_17038FCB:
    edi = edi; /* 0x17038FCB: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17038FCD: push ebp */
    ebp = esp; /* 0x17038FCE: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x17038FD0: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x8); /* 0x17038FD3: mov ecx, dword ptr [ebp + 8] */
    /* cmp eax, MEM32(ecx + 0x50) */ /* 0x17038FD6: cmp eax, dword ptr [ecx + 0x50] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x50));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_17038FE2; /* 0x17038FD9: jb 0x17038fe2 */
L_17038FDB:
    eax = 0x8876086Cu; /* 0x17038FDB: mov eax, 0x8876086c */
    goto L_17039022; /* 0x17038FE0: jmp 0x17039022 */
L_17038FE2:
    edx = MEM32(ecx + 0x54); /* 0x17038FE2: mov edx, dword ptr [ecx + 0x54] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x58u); /* 0x17038FE5: imul eax, eax, 0x58 */
    PUSH32(esp, esi); /* 0x17038FE8: push esi */
    esi = MEM32(ebp + 0x10); /* 0x17038FE9: mov esi, dword ptr [ebp + 0x10] */
    MEM32(edx + eax + 0x18) = esi; /* 0x17038FEC: mov dword ptr [edx + eax + 0x18], esi */
    edx = MEM32(ecx + 0x54); /* 0x17038FF0: mov edx, dword ptr [ecx + 0x54] */
    MEM32(edx + eax + 0x54) = 1; /* 0x17038FF3: mov dword ptr [edx + eax + 0x54], 1 */
    edx = MEM32(ecx + 0x54); /* 0x17038FFB: mov edx, dword ptr [ecx + 0x54] */
    edx = MEM32(edx + eax + 0x40); /* 0x17038FFE: mov edx, dword ptr [edx + eax + 0x40] */
    /* test edx, edx */ /* 0x17039002: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703901F; /* 0x17039004: je 0x1703901f */
L_17039006:
    _flag_a = (uint32_t)(MEM32(edx + 0x2C)); _flag_b = (uint32_t)(1);
    MEM32(edx + 0x2C) = MEM32(edx + 0x2C) + 1; /* 0x17039006: inc dword ptr [edx + 0x2c] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM16(edx + 0x2E)) << 16; _flag_b = (uint32_t)(0) << 16;
    MEM16(edx + 0x2E) = (uint16_t)(MEM16(edx + 0x2E) & 0); /* 0x17039009: and word ptr [edx + 0x2e], 0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    esi = MEM32(ecx + 0x3C); /* 0x1703900E: mov esi, dword ptr [ecx + 0x3c] */
    MEM32(edx + 0x30) = esi; /* 0x17039011: mov dword ptr [edx + 0x30], esi */
    MEM32(ecx + 0x3C) = edx; /* 0x17039014: mov dword ptr [ecx + 0x3c], edx */
    ecx = MEM32(ecx + 0x54); /* 0x17039017: mov ecx, dword ptr [ecx + 0x54] */
    _flag_a = (uint32_t)(MEM32(ecx + eax + 0x40)); _flag_b = (uint32_t)(0);
    MEM32(ecx + eax + 0x40) = MEM32(ecx + eax + 0x40) & 0; /* 0x1703901A: and dword ptr [ecx + eax + 0x40], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1703901F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1703901F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x17039021: pop esi */
L_17039022:
    ebp = POP32_VAL(esp); /* 0x17039022: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x17039023: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1703902B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1703902Bu);

L_1703902B:
    edi = edi; /* 0x1703902B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1703902D: push ebp */
    ebp = esp; /* 0x1703902E: mov ebp, esp */
    PUSH32(esp, esi); /* 0x17039030: push esi */
    esi = MEM32(ebp + 0x10); /* 0x17039031: mov esi, dword ptr [ebp + 0x10] */
    /* test esi, esi */ /* 0x17039034: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703908F; /* 0x17039036: je 0x1703908f */
L_17039038:
    eax = MEM32(ebp + 0xC); /* 0x17039038: mov eax, dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + 0x8); /* 0x1703903B: mov edx, dword ptr [ebp + 8] */
    /* cmp eax, MEM32(edx + 0x50) */ /* 0x1703903E: cmp eax, dword ptr [edx + 0x50] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x50));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1703908F; /* 0x17039041: jae 0x1703908f */
L_17039043:
    eax = (uint32_t)((int32_t)eax * (int32_t)0x58u); /* 0x17039043: imul eax, eax, 0x58 */
    PUSH32(esp, edi); /* 0x17039046: push edi */
    edi = MEM32(edx + 0x54); /* 0x17039047: mov edi, dword ptr [edx + 0x54] */
    PUSH32(esp, 8); /* 0x1703904A: push 8 */
    ecx = POP32_VAL(esp); /* 0x1703904C: pop ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x1703904D: add edi, eax */
    _flag_k = FK_ADD;
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1703904F: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = MEM32(edx + 0x54); /* 0x17039051: mov ecx, dword ptr [edx + 0x54] */
    PUSH32(esp, 4); /* 0x17039054: push 4 */
    MEM32(ecx + eax + 0x54) = 1; /* 0x17039056: mov dword ptr [ecx + eax + 0x54], 1 */
    ecx = eax + 0x34; /* 0x1703905E: lea ecx, [eax + 0x34] */
    esi = POP32_VAL(esp); /* 0x17039061: pop esi */
L_17039062:
    eax = MEM32(edx + 0x54); /* 0x17039062: mov eax, dword ptr [edx + 0x54] */
    eax = MEM32(ecx + eax); /* 0x17039065: mov eax, dword ptr [ecx + eax] */
    /* test eax, eax */ /* 0x17039068: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17039084; /* 0x1703906A: je 0x17039084 */
L_1703906C:
    _flag_a = (uint32_t)(MEM32(eax + 0x2C)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x2C) = MEM32(eax + 0x2C) + 1; /* 0x1703906C: inc dword ptr [eax + 0x2c] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM16(eax + 0x2E)) << 16; _flag_b = (uint32_t)(0) << 16;
    MEM16(eax + 0x2E) = (uint16_t)(MEM16(eax + 0x2E) & 0); /* 0x1703906F: and word ptr [eax + 0x2e], 0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    edi = MEM32(edx + 0x3C); /* 0x17039074: mov edi, dword ptr [edx + 0x3c] */
    MEM32(eax + 0x30) = edi; /* 0x17039077: mov dword ptr [eax + 0x30], edi */
    MEM32(edx + 0x3C) = eax; /* 0x1703907A: mov dword ptr [edx + 0x3c], eax */
    eax = MEM32(edx + 0x54); /* 0x1703907D: mov eax, dword ptr [edx + 0x54] */
    _flag_a = (uint32_t)(MEM32(ecx + eax)); _flag_b = (uint32_t)(0);
    MEM32(ecx + eax) = MEM32(ecx + eax) & 0; /* 0x17039080: and dword ptr [ecx + eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_17039084:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x17039084: add ecx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x17039087: dec esi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_17039062; /* 0x17039088: jne 0x17039062 */
L_1703908A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1703908A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x1703908C: pop edi */
    goto L_17039094; /* 0x1703908D: jmp 0x17039094 */
L_1703908F:
    eax = 0x8876086Cu; /* 0x1703908F: mov eax, 0x8876086c */
L_17039094:
    esi = POP32_VAL(esp); /* 0x17039094: pop esi */
    ebp = POP32_VAL(esp); /* 0x17039095: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x17039096: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1703909E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1703909Eu);

L_1703909E:
    edi = edi; /* 0x1703909E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170390A0: push ebp */
    ebp = esp; /* 0x170390A1: mov ebp, esp */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x170390A3: fld dword ptr [ebp + 0xc] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(0x17001424)); /* 0x170390A6: fcomp dword ptr [0x17001424] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x170390AC: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x170390AE: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_170390EC; /* 0x170390B1: je 0x170390ec */
L_170390B3:
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x170390B3: fld dword ptr [ebp + 0xc] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(0x17001430)); /* 0x170390B6: fcomp dword ptr [0x17001430] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x170390BC: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x170390BE: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_170390EC; /* 0x170390C1: jnp 0x170390ec */
L_170390C3:
    ecx = MEM32(ebp + 0x8); /* 0x170390C3: mov ecx, dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x170390C6: fld dword ptr [ebp + 0xc] */
    eax = MEM32(ecx + 0x48); /* 0x170390C9: mov eax, dword ptr [ecx + 0x48] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x40) = _v; } /* 0x170390CC: fstp dword ptr [ecx + 0x40] */
    /* test eax, eax */ /* 0x170390CF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170390E8; /* 0x170390D1: je 0x170390e8 */
L_170390D3:
    _flag_a = (uint32_t)(MEM32(eax + 0x2C)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x2C) = MEM32(eax + 0x2C) + 1; /* 0x170390D3: inc dword ptr [eax + 0x2c] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM16(eax + 0x2E)) << 16; _flag_b = (uint32_t)(0) << 16;
    MEM16(eax + 0x2E) = (uint16_t)(MEM16(eax + 0x2E) & 0); /* 0x170390D6: and word ptr [eax + 0x2e], 0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    edx = MEM32(ecx + 0x3C); /* 0x170390DB: mov edx, dword ptr [ecx + 0x3c] */
    MEM32(eax + 0x30) = edx; /* 0x170390DE: mov dword ptr [eax + 0x30], edx */
    _flag_a = (uint32_t)(MEM32(ecx + 0x48)); _flag_b = (uint32_t)(0);
    MEM32(ecx + 0x48) = MEM32(ecx + 0x48) & 0; /* 0x170390E1: and dword ptr [ecx + 0x48], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx + 0x3C) = eax; /* 0x170390E5: mov dword ptr [ecx + 0x3c], eax */
L_170390E8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170390E8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_170390F1; /* 0x170390EA: jmp 0x170390f1 */
L_170390EC:
    eax = 0x8876086Cu; /* 0x170390EC: mov eax, 0x8876086c */
L_170390F1:
    ebp = POP32_VAL(esp); /* 0x170390F1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x170390F2: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_170390FA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170390FAu);

L_170390FA:
    edi = edi; /* 0x170390FA: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170390FC: push ebp */
    ebp = esp; /* 0x170390FD: mov ebp, esp */
    fp_push(0.0); /* 0x170390FF: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ebp + 0x18)); /* 0x17039101: fcomp qword ptr [ebp + 0x18] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17039104: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x17039106: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17039112; /* 0x17039109: jne 0x17039112 */
L_1703910B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1703910B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_17039240; /* 0x1703910D: jmp 0x17039240 */
L_17039112:
    PUSH32(esp, esi); /* 0x17039112: push esi */
    PUSH32(esp, edi); /* 0x17039113: push edi */
    edi = MEM32(ebp + 0x8); /* 0x17039114: mov edi, dword ptr [ebp + 8] */
    esi = MEM32(edi + 0x3C); /* 0x17039117: mov esi, dword ptr [edi + 0x3c] */
    /* test esi, esi */ /* 0x1703911A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703919C; /* 0x1703911C: je 0x1703919c */
L_1703911E:
    eax = MEM32(esi + 0x30); /* 0x1703911E: mov eax, dword ptr [esi + 0x30] */
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x17039121: fld qword ptr [ebp + 0x10] */
    MEM32(edi + 0x3C) = eax; /* 0x17039124: mov dword ptr [edi + 0x3c], eax */
    { double _v = fp_pop(); *(double*)ADDR(esi + 0x8) = _v; } /* 0x17039127: fstp qword ptr [esi + 8] */
    eax = MEM32(ebp + 0x20); /* 0x1703912A: mov eax, dword ptr [ebp + 0x20] */
    fp_push(*(double*)ADDR(ebp + 0x18)); /* 0x1703912D: fld qword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)((MEM32(esi + 0x4) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(esi + 0x4) | 0xFFFFFFFFu));
    MEM32(esi + 0x4) = MEM32(esi + 0x4) | 0xFFFFFFFFu; /* 0x17039130: or dword ptr [esi + 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    { double _v = fp_pop(); *(double*)ADDR(esi + 0x10) = _v; } /* 0x17039134: fstp qword ptr [esi + 0x10] */
    MEM32(esi + 0x18) = eax; /* 0x17039137: mov dword ptr [esi + 0x18], eax */
    eax = MEM32(ebp + 0xC); /* 0x1703913A: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x1703913D: push ebx */
    MEM32(esi + 0x20) = eax; /* 0x1703913E: mov dword ptr [esi + 0x20], eax */
    PUSH32(esp, 0x38u); /* 0x17039141: push 0x38 */
    ecx = POP32_VAL(esp); /* 0x17039143: pop ecx */
    MEM32(esi) = 4; /* 0x17039144: mov dword ptr [esi], 4 */
    eax = esi; /* 0x1703914A: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x38));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(edi + 0x38); /* 0x1703914C: sub eax, dword ptr [edi + 0x38] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1703914F: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x17039151: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    ecx = MEM32(esi + 0x2C); /* 0x17039153: mov ecx, dword ptr [esi + 0x2c] */
    if (16u) _cf = (((ecx) >> 16) & 1u); /* 0x17039156: shl ecx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ecx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 16u; /* 0x17039156: shl ecx, 0x10 */
    ebx = edi + 0x44; /* 0x17039159: lea ebx, [edi + 0x44] */
    PUSH32(esp, ebx); /* 0x1703915C: push ebx */
    PUSH32(esp, esi); /* 0x1703915D: push esi */
    eax = eax + ecx + 0x1; /* 0x1703915E: lea eax, [eax + ecx + 1] */
    ecx = edi; /* 0x17039162: mov ecx, edi */
    MEM32(ebp + 0x8) = eax; /* 0x17039164: mov dword ptr [ebp + 8], eax */
    RECOMP_CALL(sub_1703749E); /* 0x17039167: call 0x1703749e */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi + 0x48); /* 0x1703916C: mov ecx, dword ptr [edi + 0x48] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1703916F: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, edx */ /* 0x17039171: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17039198; /* 0x17039173: je 0x17039198 */
L_17039175:
    fp_push(*(double*)ADDR(ecx + 0x10)); /* 0x17039175: fld qword ptr [ecx + 0x10] */
    _st[0] += *(double*)ADDR(ecx + 0x8); /* 0x17039178: fadd qword ptr [ecx + 8] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(esi + 0x8)); /* 0x1703917B: fcomp qword ptr [esi + 8] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1703917E: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x17039180: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17039198; /* 0x17039183: jne 0x17039198 */
L_17039185:
    _flag_a = (uint32_t)(MEM32(ecx + 0x2C)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x2C) = MEM32(ecx + 0x2C) + 1; /* 0x17039185: inc dword ptr [ecx + 0x2c] */
    _flag_k = FK_INC;
    MEM16(ecx + 0x2E) = (uint16_t)(LO16(edx)); /* 0x17039188: mov word ptr [ecx + 0x2e], dx */
    eax = MEM32(edi + 0x3C); /* 0x1703918C: mov eax, dword ptr [edi + 0x3c] */
    MEM32(ecx + 0x30) = eax; /* 0x1703918F: mov dword ptr [ecx + 0x30], eax */
    MEM32(edi + 0x3C) = ecx; /* 0x17039192: mov dword ptr [edi + 0x3c], ecx */
    MEM32(edi + 0x48) = edx; /* 0x17039195: mov dword ptr [edi + 0x48], edx */
L_17039198:
    ecx = MEM32(ebx); /* 0x17039198: mov ecx, dword ptr [ebx] */
    goto L_170391CA; /* 0x1703919A: jmp 0x170391ca */
L_1703919C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1703919C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1703923E; /* 0x1703919E: jmp 0x1703923e */
L_170391A3:
    fp_push(*(double*)ADDR(ecx + 0x8)); /* 0x170391A3: fld qword ptr [ecx + 8] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(esi + 0x8)); /* 0x170391A6: fcomp qword ptr [esi + 8] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x170391A9: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x170391AB: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_170391EF; /* 0x170391AE: je 0x170391ef */
L_170391B0:
    /* cmp MEM32(ecx), 4 */ /* 0x170391B0: cmp dword ptr [ecx], 4 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170391C5; /* 0x170391B3: jne 0x170391c5 */
L_170391B5:
    fp_push(*(double*)ADDR(ecx + 0x10)); /* 0x170391B5: fld qword ptr [ecx + 0x10] */
    _st[0] += *(double*)ADDR(ecx + 0x8); /* 0x170391B8: fadd qword ptr [ecx + 8] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(esi + 0x8)); /* 0x170391BB: fcomp qword ptr [esi + 8] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x170391BE: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x170391C0: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_170391D0; /* 0x170391C3: je 0x170391d0 */
L_170391C5:
    edx = ecx; /* 0x170391C5: mov edx, ecx */
    ecx = MEM32(ecx + 0x30); /* 0x170391C7: mov ecx, dword ptr [ecx + 0x30] */
L_170391CA:
    /* cmp ecx, esi */ /* 0x170391CA: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_170391A3; /* 0x170391CC: jne 0x170391a3 */
L_170391CE:
    goto L_170391EF; /* 0x170391CE: jmp 0x170391ef */
L_170391D0:
    /* test edx, edx */ /* 0x170391D0: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx + 0x30); /* 0x170391D2: mov eax, dword ptr [ecx + 0x30] */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170391DB; /* 0x170391D5: jne 0x170391db */
L_170391D7:
    MEM32(ebx) = eax; /* 0x170391D7: mov dword ptr [ebx], eax */
    goto L_170391DE; /* 0x170391D9: jmp 0x170391de */
L_170391DB:
    MEM32(edx + 0x30) = eax; /* 0x170391DB: mov dword ptr [edx + 0x30], eax */
L_170391DE:
    _flag_a = (uint32_t)(MEM32(ecx + 0x2C)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x2C) = MEM32(ecx + 0x2C) + 1; /* 0x170391DE: inc dword ptr [ecx + 0x2c] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM16(ecx + 0x2E)) << 16; _flag_b = (uint32_t)(0) << 16;
    MEM16(ecx + 0x2E) = (uint16_t)(MEM16(ecx + 0x2E) & 0); /* 0x170391E1: and word ptr [ecx + 0x2e], 0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    eax = MEM32(edi + 0x3C); /* 0x170391E6: mov eax, dword ptr [edi + 0x3c] */
    MEM32(ecx + 0x30) = eax; /* 0x170391E9: mov dword ptr [ecx + 0x30], eax */
    MEM32(edi + 0x3C) = ecx; /* 0x170391EC: mov dword ptr [edi + 0x3c], ecx */
L_170391EF:
    ecx = MEM32(esi + 0x30); /* 0x170391EF: mov ecx, dword ptr [esi + 0x30] */
    ebx = esi; /* 0x170391F2: mov ebx, esi */
    goto L_1703921D; /* 0x170391F4: jmp 0x1703921d */
L_170391F6:
    fp_push(*(double*)ADDR(ecx + 0x8)); /* 0x170391F6: fld qword ptr [ecx + 8] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(esi + 0x8)); /* 0x170391F9: fcomp qword ptr [esi + 8] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x170391FC: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x170391FE: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703923A; /* 0x17039201: je 0x1703923a */
L_17039203:
    /* cmp MEM32(ecx), 4 */ /* 0x17039203: cmp dword ptr [ecx], 4 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17039218; /* 0x17039206: jne 0x17039218 */
L_17039208:
    fp_push(*(double*)ADDR(esi + 0x10)); /* 0x17039208: fld qword ptr [esi + 0x10] */
    _st[0] += *(double*)ADDR(esi + 0x8); /* 0x1703920B: fadd qword ptr [esi + 8] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ecx + 0x8)); /* 0x1703920E: fcomp qword ptr [ecx + 8] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17039211: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x17039213: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_17039223; /* 0x17039216: je 0x17039223 */
L_17039218:
    ebx = ecx; /* 0x17039218: mov ebx, ecx */
    ecx = MEM32(ecx + 0x30); /* 0x1703921A: mov ecx, dword ptr [ecx + 0x30] */
L_1703921D:
    /* test ecx, ecx */ /* 0x1703921D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170391F6; /* 0x1703921F: jne 0x170391f6 */
L_17039221:
    goto L_1703923A; /* 0x17039221: jmp 0x1703923a */
L_17039223:
    eax = MEM32(ecx + 0x30); /* 0x17039223: mov eax, dword ptr [ecx + 0x30] */
    MEM32(ebx + 0x30) = eax; /* 0x17039226: mov dword ptr [ebx + 0x30], eax */
    _flag_a = (uint32_t)(MEM32(ecx + 0x2C)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x2C) = MEM32(ecx + 0x2C) + 1; /* 0x17039229: inc dword ptr [ecx + 0x2c] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM16(ecx + 0x2E)) << 16; _flag_b = (uint32_t)(0) << 16;
    MEM16(ecx + 0x2E) = (uint16_t)(MEM16(ecx + 0x2E) & 0); /* 0x1703922C: and word ptr [ecx + 0x2e], 0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    eax = MEM32(edi + 0x3C); /* 0x17039231: mov eax, dword ptr [edi + 0x3c] */
    MEM32(ecx + 0x30) = eax; /* 0x17039234: mov dword ptr [ecx + 0x30], eax */
    MEM32(edi + 0x3C) = ecx; /* 0x17039237: mov dword ptr [edi + 0x3c], ecx */
L_1703923A:
    eax = MEM32(ebp + 0x8); /* 0x1703923A: mov eax, dword ptr [ebp + 8] */
    ebx = POP32_VAL(esp); /* 0x1703923D: pop ebx */
L_1703923E:
    edi = POP32_VAL(esp); /* 0x1703923E: pop edi */
    esi = POP32_VAL(esp); /* 0x1703923F: pop esi */
L_17039240:
    ebp = POP32_VAL(esp); /* 0x17039240: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x17039241: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_17039249(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17039249u);

L_17039249:
    edi = edi; /* 0x17039249: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1703924B: push ebp */
    ebp = esp; /* 0x1703924C: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1703924E: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x1703924F: mov ebx, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x17039252: push edi */
    edi = MEM32(ebp + 0x8); /* 0x17039253: mov edi, dword ptr [ebp + 8] */
    /* cmp ebx, MEM32(edi + 0x50) */ /* 0x17039256: cmp ebx, dword ptr [edi + 0x50] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(edi + 0x50));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_17039262; /* 0x17039259: jb 0x17039262 */
L_1703925B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1703925B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_170393A3; /* 0x1703925D: jmp 0x170393a3 */
L_17039262:
    PUSH32(esp, esi); /* 0x17039262: push esi */
    esi = MEM32(edi + 0x3C); /* 0x17039263: mov esi, dword ptr [edi + 0x3c] */
    /* test esi, esi */ /* 0x17039266: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17039301; /* 0x17039268: je 0x17039301 */
L_1703926E:
    eax = MEM32(esi + 0x30); /* 0x1703926E: mov eax, dword ptr [esi + 0x30] */
    fp_push(*(double*)ADDR(ebp + 0x14)); /* 0x17039271: fld qword ptr [ebp + 0x14] */
    MEM32(edi + 0x3C) = eax; /* 0x17039274: mov dword ptr [edi + 0x3c], eax */
    { double _v = fp_pop(); *(double*)ADDR(esi + 0x8) = _v; } /* 0x17039277: fstp qword ptr [esi + 8] */
    eax = MEM32(ebp + 0x24); /* 0x1703927A: mov eax, dword ptr [ebp + 0x24] */
    fp_push(*(double*)ADDR(ebp + 0x1C)); /* 0x1703927D: fld qword ptr [ebp + 0x1c] */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x17039280: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    { double _v = fp_pop(); *(double*)ADDR(esi + 0x10) = _v; } /* 0x17039283: fstp qword ptr [esi + 0x10] */
    MEM32(esi + 0x18) = eax; /* 0x17039286: mov dword ptr [esi + 0x18], eax */
    eax = MEM32(ebp + 0x10); /* 0x17039289: mov eax, dword ptr [ebp + 0x10] */
    MEM32(esi + 0x20) = eax; /* 0x1703928C: mov dword ptr [esi + 0x20], eax */
    MEM32(esi + 0x4) = ebx; /* 0x1703928F: mov dword ptr [esi + 4], ebx */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x58u); /* 0x17039292: imul ebx, ebx, 0x58 */
    PUSH32(esp, 0x38u); /* 0x17039295: push 0x38 */
    ecx = POP32_VAL(esp); /* 0x17039297: pop ecx */
    eax = esi; /* 0x17039298: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x38));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(edi + 0x38); /* 0x1703929A: sub eax, dword ptr [edi + 0x38] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1703929D: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x1703929F: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    ecx = MEM32(esi + 0x2C); /* 0x170392A1: mov ecx, dword ptr [esi + 0x2c] */
    if (16u) _cf = (((ecx) >> 16) & 1u); /* 0x170392A4: shl ecx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ecx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 16u; /* 0x170392A4: shl ecx, 0x10 */
    eax = eax + ecx + 0x1; /* 0x170392A7: lea eax, [eax + ecx + 1] */
    MEM32(ebp + 0xC) = eax; /* 0x170392AB: mov dword ptr [ebp + 0xc], eax */
    eax = MEM32(edi + 0x54); /* 0x170392AE: mov eax, dword ptr [edi + 0x54] */
    eax = eax + ebx + 0x30; /* 0x170392B1: lea eax, [eax + ebx + 0x30] */
    PUSH32(esp, eax); /* 0x170392B5: push eax */
    PUSH32(esp, esi); /* 0x170392B6: push esi */
    ecx = edi; /* 0x170392B7: mov ecx, edi */
    RECOMP_CALL(sub_1703749E); /* 0x170392B9: call 0x1703749e */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0x54); /* 0x170392BE: mov eax, dword ptr [edi + 0x54] */
    eax = eax + ebx + 0x34; /* 0x170392C1: lea eax, [eax + ebx + 0x34] */
    ecx = MEM32(eax); /* 0x170392C5: mov ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x170392C7: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, edx */ /* 0x170392C9: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170392F6; /* 0x170392CB: je 0x170392f6 */
L_170392CD:
    eax = ecx; /* 0x170392CD: mov eax, ecx */
    fp_push(*(double*)ADDR(eax + 0x10)); /* 0x170392CF: fld qword ptr [eax + 0x10] */
    _st[0] += *(double*)ADDR(eax + 0x8); /* 0x170392D2: fadd qword ptr [eax + 8] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(esi + 0x8)); /* 0x170392D5: fcomp qword ptr [esi + 8] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x170392D8: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x170392DA: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170392F6; /* 0x170392DD: jne 0x170392f6 */
L_170392DF:
    _flag_a = (uint32_t)(MEM32(ecx + 0x2C)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x2C) = MEM32(ecx + 0x2C) + 1; /* 0x170392DF: inc dword ptr [ecx + 0x2c] */
    _flag_k = FK_INC;
    MEM16(ecx + 0x2E) = (uint16_t)(LO16(edx)); /* 0x170392E2: mov word ptr [ecx + 0x2e], dx */
    eax = MEM32(edi + 0x3C); /* 0x170392E6: mov eax, dword ptr [edi + 0x3c] */
    MEM32(ecx + 0x30) = eax; /* 0x170392E9: mov dword ptr [ecx + 0x30], eax */
    eax = MEM32(edi + 0x54); /* 0x170392EC: mov eax, dword ptr [edi + 0x54] */
    MEM32(edi + 0x3C) = ecx; /* 0x170392EF: mov dword ptr [edi + 0x3c], ecx */
    MEM32(eax + ebx + 0x34) = edx; /* 0x170392F2: mov dword ptr [eax + ebx + 0x34], edx */
L_170392F6:
    eax = MEM32(edi + 0x54); /* 0x170392F6: mov eax, dword ptr [edi + 0x54] */
    ebx = eax + ebx + 0x30; /* 0x170392F9: lea ebx, [eax + ebx + 0x30] */
    ecx = MEM32(ebx); /* 0x170392FD: mov ecx, dword ptr [ebx] */
    goto L_1703932F; /* 0x170392FF: jmp 0x1703932f */
L_17039301:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17039301: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_170393A2; /* 0x17039303: jmp 0x170393a2 */
L_17039308:
    fp_push(*(double*)ADDR(ecx + 0x8)); /* 0x17039308: fld qword ptr [ecx + 8] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(esi + 0x8)); /* 0x1703930B: fcomp qword ptr [esi + 8] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1703930E: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x17039310: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_17039354; /* 0x17039313: je 0x17039354 */
L_17039315:
    /* cmp MEM32(ecx), 0 */ /* 0x17039315: cmp dword ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1703932A; /* 0x17039318: jne 0x1703932a */
L_1703931A:
    fp_push(*(double*)ADDR(ecx + 0x10)); /* 0x1703931A: fld qword ptr [ecx + 0x10] */
    _st[0] += *(double*)ADDR(ecx + 0x8); /* 0x1703931D: fadd qword ptr [ecx + 8] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(esi + 0x8)); /* 0x17039320: fcomp qword ptr [esi + 8] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17039323: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x17039325: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_17039335; /* 0x17039328: je 0x17039335 */
L_1703932A:
    edx = ecx; /* 0x1703932A: mov edx, ecx */
    ecx = MEM32(ecx + 0x30); /* 0x1703932C: mov ecx, dword ptr [ecx + 0x30] */
L_1703932F:
    /* cmp ecx, esi */ /* 0x1703932F: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_17039308; /* 0x17039331: jne 0x17039308 */
L_17039333:
    goto L_17039354; /* 0x17039333: jmp 0x17039354 */
L_17039335:
    /* test edx, edx */ /* 0x17039335: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx + 0x30); /* 0x17039337: mov eax, dword ptr [ecx + 0x30] */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17039340; /* 0x1703933A: jne 0x17039340 */
L_1703933C:
    MEM32(ebx) = eax; /* 0x1703933C: mov dword ptr [ebx], eax */
    goto L_17039343; /* 0x1703933E: jmp 0x17039343 */
L_17039340:
    MEM32(edx + 0x30) = eax; /* 0x17039340: mov dword ptr [edx + 0x30], eax */
L_17039343:
    _flag_a = (uint32_t)(MEM32(ecx + 0x2C)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x2C) = MEM32(ecx + 0x2C) + 1; /* 0x17039343: inc dword ptr [ecx + 0x2c] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM16(ecx + 0x2E)) << 16; _flag_b = (uint32_t)(0) << 16;
    MEM16(ecx + 0x2E) = (uint16_t)(MEM16(ecx + 0x2E) & 0); /* 0x17039346: and word ptr [ecx + 0x2e], 0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    eax = MEM32(edi + 0x3C); /* 0x1703934B: mov eax, dword ptr [edi + 0x3c] */
    MEM32(ecx + 0x30) = eax; /* 0x1703934E: mov dword ptr [ecx + 0x30], eax */
    MEM32(edi + 0x3C) = ecx; /* 0x17039351: mov dword ptr [edi + 0x3c], ecx */
L_17039354:
    ecx = MEM32(esi + 0x30); /* 0x17039354: mov ecx, dword ptr [esi + 0x30] */
    ebx = esi; /* 0x17039357: mov ebx, esi */
    goto L_17039382; /* 0x17039359: jmp 0x17039382 */
L_1703935B:
    fp_push(*(double*)ADDR(ecx + 0x8)); /* 0x1703935B: fld qword ptr [ecx + 8] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(esi + 0x8)); /* 0x1703935E: fcomp qword ptr [esi + 8] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17039361: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x17039363: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703939F; /* 0x17039366: je 0x1703939f */
L_17039368:
    /* cmp MEM32(ecx), 0 */ /* 0x17039368: cmp dword ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1703937D; /* 0x1703936B: jne 0x1703937d */
L_1703936D:
    fp_push(*(double*)ADDR(esi + 0x10)); /* 0x1703936D: fld qword ptr [esi + 0x10] */
    _st[0] += *(double*)ADDR(esi + 0x8); /* 0x17039370: fadd qword ptr [esi + 8] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ecx + 0x8)); /* 0x17039373: fcomp qword ptr [ecx + 8] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17039376: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x17039378: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_17039388; /* 0x1703937B: je 0x17039388 */
L_1703937D:
    ebx = ecx; /* 0x1703937D: mov ebx, ecx */
    ecx = MEM32(ecx + 0x30); /* 0x1703937F: mov ecx, dword ptr [ecx + 0x30] */
L_17039382:
    /* test ecx, ecx */ /* 0x17039382: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1703935B; /* 0x17039384: jne 0x1703935b */
L_17039386:
    goto L_1703939F; /* 0x17039386: jmp 0x1703939f */
L_17039388:
    eax = MEM32(ecx + 0x30); /* 0x17039388: mov eax, dword ptr [ecx + 0x30] */
    MEM32(ebx + 0x30) = eax; /* 0x1703938B: mov dword ptr [ebx + 0x30], eax */
    _flag_a = (uint32_t)(MEM32(ecx + 0x2C)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x2C) = MEM32(ecx + 0x2C) + 1; /* 0x1703938E: inc dword ptr [ecx + 0x2c] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM16(ecx + 0x2E)) << 16; _flag_b = (uint32_t)(0) << 16;
    MEM16(ecx + 0x2E) = (uint16_t)(MEM16(ecx + 0x2E) & 0); /* 0x17039391: and word ptr [ecx + 0x2e], 0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    eax = MEM32(edi + 0x3C); /* 0x17039396: mov eax, dword ptr [edi + 0x3c] */
    MEM32(ecx + 0x30) = eax; /* 0x17039399: mov dword ptr [ecx + 0x30], eax */
    MEM32(edi + 0x3C) = ecx; /* 0x1703939C: mov dword ptr [edi + 0x3c], ecx */
L_1703939F:
    eax = MEM32(ebp + 0xC); /* 0x1703939F: mov eax, dword ptr [ebp + 0xc] */
L_170393A2:
    esi = POP32_VAL(esp); /* 0x170393A2: pop esi */
L_170393A3:
    edi = POP32_VAL(esp); /* 0x170393A3: pop edi */
    ebx = POP32_VAL(esp); /* 0x170393A4: pop ebx */
    ebp = POP32_VAL(esp); /* 0x170393A5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x170393A6: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_170393AE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170393AEu);

L_170393AE:
    edi = edi; /* 0x170393AE: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170393B0: push ebp */
    ebp = esp; /* 0x170393B1: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x170393B3: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x170393B4: mov ebx, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x170393B7: push edi */
    edi = MEM32(ebp + 0x8); /* 0x170393B8: mov edi, dword ptr [ebp + 8] */
    /* cmp ebx, MEM32(edi + 0x50) */ /* 0x170393BB: cmp ebx, dword ptr [edi + 0x50] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(edi + 0x50));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_170393C7; /* 0x170393BE: jb 0x170393c7 */
L_170393C0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170393C0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1703950B; /* 0x170393C2: jmp 0x1703950b */
L_170393C7:
    PUSH32(esp, esi); /* 0x170393C7: push esi */
    esi = MEM32(edi + 0x3C); /* 0x170393C8: mov esi, dword ptr [edi + 0x3c] */
    /* test esi, esi */ /* 0x170393CB: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17039469; /* 0x170393CD: je 0x17039469 */
L_170393D3:
    eax = MEM32(esi + 0x30); /* 0x170393D3: mov eax, dword ptr [esi + 0x30] */
    fp_push(*(double*)ADDR(ebp + 0x14)); /* 0x170393D6: fld qword ptr [ebp + 0x14] */
    MEM32(edi + 0x3C) = eax; /* 0x170393D9: mov dword ptr [edi + 0x3c], eax */
    { double _v = fp_pop(); *(double*)ADDR(esi + 0x8) = _v; } /* 0x170393DC: fstp qword ptr [esi + 8] */
    eax = MEM32(ebp + 0x24); /* 0x170393DF: mov eax, dword ptr [ebp + 0x24] */
    fp_push(*(double*)ADDR(ebp + 0x1C)); /* 0x170393E2: fld qword ptr [ebp + 0x1c] */
    MEM32(esi + 0x18) = eax; /* 0x170393E5: mov dword ptr [esi + 0x18], eax */
    { double _v = fp_pop(); *(double*)ADDR(esi + 0x10) = _v; } /* 0x170393E8: fstp qword ptr [esi + 0x10] */
    eax = MEM32(ebp + 0x10); /* 0x170393EB: mov eax, dword ptr [ebp + 0x10] */
    MEM32(esi + 0x20) = eax; /* 0x170393EE: mov dword ptr [esi + 0x20], eax */
    MEM32(esi + 0x4) = ebx; /* 0x170393F1: mov dword ptr [esi + 4], ebx */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x58u); /* 0x170393F4: imul ebx, ebx, 0x58 */
    PUSH32(esp, 0x38u); /* 0x170393F7: push 0x38 */
    MEM32(esi) = 1; /* 0x170393F9: mov dword ptr [esi], 1 */
    ecx = POP32_VAL(esp); /* 0x170393FF: pop ecx */
    eax = esi; /* 0x17039400: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x38));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(edi + 0x38); /* 0x17039402: sub eax, dword ptr [edi + 0x38] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x17039405: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x17039407: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    ecx = MEM32(esi + 0x2C); /* 0x17039409: mov ecx, dword ptr [esi + 0x2c] */
    if (16u) _cf = (((ecx) >> 16) & 1u); /* 0x1703940C: shl ecx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ecx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 16u; /* 0x1703940C: shl ecx, 0x10 */
    eax = eax + ecx + 0x1; /* 0x1703940F: lea eax, [eax + ecx + 1] */
    MEM32(ebp + 0xC) = eax; /* 0x17039413: mov dword ptr [ebp + 0xc], eax */
    eax = MEM32(edi + 0x54); /* 0x17039416: mov eax, dword ptr [edi + 0x54] */
    eax = eax + ebx + 0x30; /* 0x17039419: lea eax, [eax + ebx + 0x30] */
    PUSH32(esp, eax); /* 0x1703941D: push eax */
    PUSH32(esp, esi); /* 0x1703941E: push esi */
    ecx = edi; /* 0x1703941F: mov ecx, edi */
    RECOMP_CALL(sub_1703749E); /* 0x17039421: call 0x1703749e */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0x54); /* 0x17039426: mov eax, dword ptr [edi + 0x54] */
    eax = eax + ebx + 0x38; /* 0x17039429: lea eax, [eax + ebx + 0x38] */
    ecx = MEM32(eax); /* 0x1703942D: mov ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1703942F: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, edx */ /* 0x17039431: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703945E; /* 0x17039433: je 0x1703945e */
L_17039435:
    eax = ecx; /* 0x17039435: mov eax, ecx */
    fp_push(*(double*)ADDR(eax + 0x10)); /* 0x17039437: fld qword ptr [eax + 0x10] */
    _st[0] += *(double*)ADDR(eax + 0x8); /* 0x1703943A: fadd qword ptr [eax + 8] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(esi + 0x8)); /* 0x1703943D: fcomp qword ptr [esi + 8] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17039440: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x17039442: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1703945E; /* 0x17039445: jne 0x1703945e */
L_17039447:
    _flag_a = (uint32_t)(MEM32(ecx + 0x2C)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x2C) = MEM32(ecx + 0x2C) + 1; /* 0x17039447: inc dword ptr [ecx + 0x2c] */
    _flag_k = FK_INC;
    MEM16(ecx + 0x2E) = (uint16_t)(LO16(edx)); /* 0x1703944A: mov word ptr [ecx + 0x2e], dx */
    eax = MEM32(edi + 0x3C); /* 0x1703944E: mov eax, dword ptr [edi + 0x3c] */
    MEM32(ecx + 0x30) = eax; /* 0x17039451: mov dword ptr [ecx + 0x30], eax */
    eax = MEM32(edi + 0x54); /* 0x17039454: mov eax, dword ptr [edi + 0x54] */
    MEM32(edi + 0x3C) = ecx; /* 0x17039457: mov dword ptr [edi + 0x3c], ecx */
    MEM32(eax + ebx + 0x38) = edx; /* 0x1703945A: mov dword ptr [eax + ebx + 0x38], edx */
L_1703945E:
    eax = MEM32(edi + 0x54); /* 0x1703945E: mov eax, dword ptr [edi + 0x54] */
    ebx = eax + ebx + 0x30; /* 0x17039461: lea ebx, [eax + ebx + 0x30] */
    ecx = MEM32(ebx); /* 0x17039465: mov ecx, dword ptr [ebx] */
    goto L_17039497; /* 0x17039467: jmp 0x17039497 */
L_17039469:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17039469: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1703950A; /* 0x1703946B: jmp 0x1703950a */
L_17039470:
    fp_push(*(double*)ADDR(ecx + 0x8)); /* 0x17039470: fld qword ptr [ecx + 8] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(esi + 0x8)); /* 0x17039473: fcomp qword ptr [esi + 8] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17039476: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x17039478: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_170394BC; /* 0x1703947B: je 0x170394bc */
L_1703947D:
    /* cmp MEM32(ecx), 1 */ /* 0x1703947D: cmp dword ptr [ecx], 1 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17039492; /* 0x17039480: jne 0x17039492 */
L_17039482:
    fp_push(*(double*)ADDR(ecx + 0x10)); /* 0x17039482: fld qword ptr [ecx + 0x10] */
    _st[0] += *(double*)ADDR(ecx + 0x8); /* 0x17039485: fadd qword ptr [ecx + 8] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(esi + 0x8)); /* 0x17039488: fcomp qword ptr [esi + 8] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1703948B: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1703948D: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703949D; /* 0x17039490: je 0x1703949d */
L_17039492:
    edx = ecx; /* 0x17039492: mov edx, ecx */
    ecx = MEM32(ecx + 0x30); /* 0x17039494: mov ecx, dword ptr [ecx + 0x30] */
L_17039497:
    /* cmp ecx, esi */ /* 0x17039497: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_17039470; /* 0x17039499: jne 0x17039470 */
L_1703949B:
    goto L_170394BC; /* 0x1703949B: jmp 0x170394bc */
L_1703949D:
    /* test edx, edx */ /* 0x1703949D: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx + 0x30); /* 0x1703949F: mov eax, dword ptr [ecx + 0x30] */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170394A8; /* 0x170394A2: jne 0x170394a8 */
L_170394A4:
    MEM32(ebx) = eax; /* 0x170394A4: mov dword ptr [ebx], eax */
    goto L_170394AB; /* 0x170394A6: jmp 0x170394ab */
L_170394A8:
    MEM32(edx + 0x30) = eax; /* 0x170394A8: mov dword ptr [edx + 0x30], eax */
L_170394AB:
    _flag_a = (uint32_t)(MEM32(ecx + 0x2C)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x2C) = MEM32(ecx + 0x2C) + 1; /* 0x170394AB: inc dword ptr [ecx + 0x2c] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM16(ecx + 0x2E)) << 16; _flag_b = (uint32_t)(0) << 16;
    MEM16(ecx + 0x2E) = (uint16_t)(MEM16(ecx + 0x2E) & 0); /* 0x170394AE: and word ptr [ecx + 0x2e], 0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    eax = MEM32(edi + 0x3C); /* 0x170394B3: mov eax, dword ptr [edi + 0x3c] */
    MEM32(ecx + 0x30) = eax; /* 0x170394B6: mov dword ptr [ecx + 0x30], eax */
    MEM32(edi + 0x3C) = ecx; /* 0x170394B9: mov dword ptr [edi + 0x3c], ecx */
L_170394BC:
    ecx = MEM32(esi + 0x30); /* 0x170394BC: mov ecx, dword ptr [esi + 0x30] */
    ebx = esi; /* 0x170394BF: mov ebx, esi */
    goto L_170394EA; /* 0x170394C1: jmp 0x170394ea */
L_170394C3:
    fp_push(*(double*)ADDR(ecx + 0x8)); /* 0x170394C3: fld qword ptr [ecx + 8] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(esi + 0x8)); /* 0x170394C6: fcomp qword ptr [esi + 8] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x170394C9: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x170394CB: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_17039507; /* 0x170394CE: je 0x17039507 */
L_170394D0:
    /* cmp MEM32(ecx), 1 */ /* 0x170394D0: cmp dword ptr [ecx], 1 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170394E5; /* 0x170394D3: jne 0x170394e5 */
L_170394D5:
    fp_push(*(double*)ADDR(esi + 0x10)); /* 0x170394D5: fld qword ptr [esi + 0x10] */
    _st[0] += *(double*)ADDR(esi + 0x8); /* 0x170394D8: fadd qword ptr [esi + 8] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ecx + 0x8)); /* 0x170394DB: fcomp qword ptr [ecx + 8] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x170394DE: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x170394E0: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_170394F0; /* 0x170394E3: je 0x170394f0 */
L_170394E5:
    ebx = ecx; /* 0x170394E5: mov ebx, ecx */
    ecx = MEM32(ecx + 0x30); /* 0x170394E7: mov ecx, dword ptr [ecx + 0x30] */
L_170394EA:
    /* test ecx, ecx */ /* 0x170394EA: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170394C3; /* 0x170394EC: jne 0x170394c3 */
L_170394EE:
    goto L_17039507; /* 0x170394EE: jmp 0x17039507 */
L_170394F0:
    eax = MEM32(ecx + 0x30); /* 0x170394F0: mov eax, dword ptr [ecx + 0x30] */
    MEM32(ebx + 0x30) = eax; /* 0x170394F3: mov dword ptr [ebx + 0x30], eax */
    _flag_a = (uint32_t)(MEM32(ecx + 0x2C)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x2C) = MEM32(ecx + 0x2C) + 1; /* 0x170394F6: inc dword ptr [ecx + 0x2c] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM16(ecx + 0x2E)) << 16; _flag_b = (uint32_t)(0) << 16;
    MEM16(ecx + 0x2E) = (uint16_t)(MEM16(ecx + 0x2E) & 0); /* 0x170394F9: and word ptr [ecx + 0x2e], 0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    eax = MEM32(edi + 0x3C); /* 0x170394FE: mov eax, dword ptr [edi + 0x3c] */
    MEM32(ecx + 0x30) = eax; /* 0x17039501: mov dword ptr [ecx + 0x30], eax */
    MEM32(edi + 0x3C) = ecx; /* 0x17039504: mov dword ptr [edi + 0x3c], ecx */
L_17039507:
    eax = MEM32(ebp + 0xC); /* 0x17039507: mov eax, dword ptr [ebp + 0xc] */
L_1703950A:
    esi = POP32_VAL(esp); /* 0x1703950A: pop esi */
L_1703950B:
    edi = POP32_VAL(esp); /* 0x1703950B: pop edi */
    ebx = POP32_VAL(esp); /* 0x1703950C: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1703950D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x1703950E: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_17039516(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17039516u);

L_17039516:
    edi = edi; /* 0x17039516: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17039518: push ebp */
    ebp = esp; /* 0x17039519: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x1703951B: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1703951E: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1703951F: mov edi, dword ptr [ebp + 8] */
    /* cmp ecx, MEM32(edi + 0x50) */ /* 0x17039522: cmp ecx, dword ptr [edi + 0x50] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + 0x50));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1703952E; /* 0x17039525: jb 0x1703952e */
L_17039527:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17039527: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_170395D6; /* 0x17039529: jmp 0x170395d6 */
L_1703952E:
    PUSH32(esp, esi); /* 0x1703952E: push esi */
    esi = MEM32(edi + 0x3C); /* 0x1703952F: mov esi, dword ptr [edi + 0x3c] */
    /* test esi, esi */ /* 0x17039532: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703958B; /* 0x17039534: je 0x1703958b */
L_17039536:
    eax = MEM32(esi + 0x30); /* 0x17039536: mov eax, dword ptr [esi + 0x30] */
    fp_push(*(double*)ADDR(ebp + 0x18)); /* 0x17039539: fld qword ptr [ebp + 0x18] */
    MEM32(edi + 0x3C) = eax; /* 0x1703953C: mov dword ptr [edi + 0x3c], eax */
    { double _v = fp_pop(); *(double*)ADDR(esi + 0x8) = _v; } /* 0x1703953F: fstp qword ptr [esi + 8] */
    _flag_a = (uint32_t)(MEM32(esi + 0x18)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x18) = MEM32(esi + 0x18) & 0; /* 0x17039542: and dword ptr [esi + 0x18], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    fp_push(0.0); /* 0x17039546: fldz  */
    { double _v = fp_pop(); *(double*)ADDR(esi + 0x10) = _v; } /* 0x17039548: fstp qword ptr [esi + 0x10] */
    PUSH32(esp, ebx); /* 0x1703954B: push ebx */
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x1703954C: fld qword ptr [ebp + 0x10] */
    MEM32(esi + 0x4) = ecx; /* 0x1703954F: mov dword ptr [esi + 4], ecx */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x58u); /* 0x17039552: imul ecx, ecx, 0x58 */
    { double _v = fp_pop(); *(double*)ADDR(esi + 0x20) = _v; } /* 0x17039555: fstp qword ptr [esi + 0x20] */
    PUSH32(esp, 0x38u); /* 0x17039558: push 0x38 */
    MEM32(esi) = 2; /* 0x1703955A: mov dword ptr [esi], 2 */
    ebx = POP32_VAL(esp); /* 0x17039560: pop ebx */
    eax = esi; /* 0x17039561: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x38));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(edi + 0x38); /* 0x17039563: sub eax, dword ptr [edi + 0x38] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x17039566: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ebx; /* 0x17039568: div ebx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    edx = MEM32(esi + 0x2C); /* 0x1703956A: mov edx, dword ptr [esi + 0x2c] */
    if (16u) _cf = (((edx) >> 16) & 1u); /* 0x1703956D: shl edx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((edx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 16u; /* 0x1703956D: shl edx, 0x10 */
    ebx = eax + edx + 0x1; /* 0x17039570: lea ebx, [eax + edx + 1] */
    eax = MEM32(edi + 0x54); /* 0x17039574: mov eax, dword ptr [edi + 0x54] */
    eax = ecx + eax + 0x30; /* 0x17039577: lea eax, [ecx + eax + 0x30] */
    PUSH32(esp, eax); /* 0x1703957B: push eax */
    PUSH32(esp, esi); /* 0x1703957C: push esi */
    ecx = edi; /* 0x1703957D: mov ecx, edi */
    RECOMP_CALL(sub_1703749E); /* 0x1703957F: call 0x1703749e */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x30); /* 0x17039584: mov ecx, dword ptr [esi + 0x30] */
    edx = esi; /* 0x17039587: mov edx, esi */
    goto L_170395B5; /* 0x17039589: jmp 0x170395b5 */
L_1703958B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1703958B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_170395D5; /* 0x1703958D: jmp 0x170395d5 */
L_1703958F:
    fp_push(*(double*)ADDR(ecx + 0x8)); /* 0x1703958F: fld qword ptr [ecx + 8] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(esi + 0x8)); /* 0x17039592: fcomp qword ptr [esi + 8] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17039595: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x17039597: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_170395D2; /* 0x1703959A: je 0x170395d2 */
L_1703959C:
    /* cmp MEM32(ecx), 2 */ /* 0x1703959C: cmp dword ptr [ecx], 2 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170395B0; /* 0x1703959F: jne 0x170395b0 */
L_170395A1:
    fp_push(*(double*)ADDR(esi + 0x8)); /* 0x170395A1: fld qword ptr [esi + 8] */
    fp_push(*(double*)ADDR(ecx + 0x8)); /* 0x170395A4: fld qword ptr [ecx + 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x170395A7: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x170395A9: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x170395AB: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_170395BB; /* 0x170395AE: jnp 0x170395bb */
L_170395B0:
    edx = ecx; /* 0x170395B0: mov edx, ecx */
    ecx = MEM32(ecx + 0x30); /* 0x170395B2: mov ecx, dword ptr [ecx + 0x30] */
L_170395B5:
    /* test ecx, ecx */ /* 0x170395B5: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1703958F; /* 0x170395B7: jne 0x1703958f */
L_170395B9:
    goto L_170395D2; /* 0x170395B9: jmp 0x170395d2 */
L_170395BB:
    eax = MEM32(ecx + 0x30); /* 0x170395BB: mov eax, dword ptr [ecx + 0x30] */
    MEM32(edx + 0x30) = eax; /* 0x170395BE: mov dword ptr [edx + 0x30], eax */
    _flag_a = (uint32_t)(MEM32(ecx + 0x2C)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x2C) = MEM32(ecx + 0x2C) + 1; /* 0x170395C1: inc dword ptr [ecx + 0x2c] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM16(ecx + 0x2E)) << 16; _flag_b = (uint32_t)(0) << 16;
    MEM16(ecx + 0x2E) = (uint16_t)(MEM16(ecx + 0x2E) & 0); /* 0x170395C4: and word ptr [ecx + 0x2e], 0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    eax = MEM32(edi + 0x3C); /* 0x170395C9: mov eax, dword ptr [edi + 0x3c] */
    MEM32(ecx + 0x30) = eax; /* 0x170395CC: mov dword ptr [ecx + 0x30], eax */
    MEM32(edi + 0x3C) = ecx; /* 0x170395CF: mov dword ptr [edi + 0x3c], ecx */
L_170395D2:
    eax = ebx; /* 0x170395D2: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x170395D4: pop ebx */
L_170395D5:
    esi = POP32_VAL(esp); /* 0x170395D5: pop esi */
L_170395D6:
    edi = POP32_VAL(esp); /* 0x170395D6: pop edi */
    ebp = POP32_VAL(esp); /* 0x170395D7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x170395D8: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_170395E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170395E0u);

L_170395E0:
    edi = edi; /* 0x170395E0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170395E2: push ebp */
    ebp = esp; /* 0x170395E3: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x170395E5: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x170395E8: push edi */
    edi = MEM32(ebp + 0x8); /* 0x170395E9: mov edi, dword ptr [ebp + 8] */
    /* cmp ecx, MEM32(edi + 0x50) */ /* 0x170395EC: cmp ecx, dword ptr [edi + 0x50] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + 0x50));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_170395F8; /* 0x170395EF: jb 0x170395f8 */
L_170395F1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170395F1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_170396A0; /* 0x170395F3: jmp 0x170396a0 */
L_170395F8:
    PUSH32(esp, esi); /* 0x170395F8: push esi */
    esi = MEM32(edi + 0x3C); /* 0x170395F9: mov esi, dword ptr [edi + 0x3c] */
    /* test esi, esi */ /* 0x170395FC: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17039655; /* 0x170395FE: je 0x17039655 */
L_17039600:
    eax = MEM32(esi + 0x30); /* 0x17039600: mov eax, dword ptr [esi + 0x30] */
    fp_push(*(double*)ADDR(ebp + 0x14)); /* 0x17039603: fld qword ptr [ebp + 0x14] */
    MEM32(edi + 0x3C) = eax; /* 0x17039606: mov dword ptr [edi + 0x3c], eax */
    { double _v = fp_pop(); *(double*)ADDR(esi + 0x8) = _v; } /* 0x17039609: fstp qword ptr [esi + 8] */
    eax = MEM32(ebp + 0x10); /* 0x1703960C: mov eax, dword ptr [ebp + 0x10] */
    fp_push(0.0); /* 0x1703960F: fldz  */
    _flag_a = (uint32_t)(MEM32(esi + 0x18)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x18) = MEM32(esi + 0x18) & 0; /* 0x17039611: and dword ptr [esi + 0x18], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    { double _v = fp_pop(); *(double*)ADDR(esi + 0x10) = _v; } /* 0x17039615: fstp qword ptr [esi + 0x10] */
    PUSH32(esp, ebx); /* 0x17039618: push ebx */
    MEM32(esi + 0x20) = eax; /* 0x17039619: mov dword ptr [esi + 0x20], eax */
    MEM32(esi + 0x4) = ecx; /* 0x1703961C: mov dword ptr [esi + 4], ecx */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x58u); /* 0x1703961F: imul ecx, ecx, 0x58 */
    PUSH32(esp, 0x38u); /* 0x17039622: push 0x38 */
    MEM32(esi) = 3; /* 0x17039624: mov dword ptr [esi], 3 */
    ebx = POP32_VAL(esp); /* 0x1703962A: pop ebx */
    eax = esi; /* 0x1703962B: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x38));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(edi + 0x38); /* 0x1703962D: sub eax, dword ptr [edi + 0x38] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x17039630: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ebx; /* 0x17039632: div ebx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    edx = MEM32(esi + 0x2C); /* 0x17039634: mov edx, dword ptr [esi + 0x2c] */
    if (16u) _cf = (((edx) >> 16) & 1u); /* 0x17039637: shl edx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((edx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 16u; /* 0x17039637: shl edx, 0x10 */
    ebx = eax + edx + 0x1; /* 0x1703963A: lea ebx, [eax + edx + 1] */
    eax = MEM32(edi + 0x54); /* 0x1703963E: mov eax, dword ptr [edi + 0x54] */
    eax = ecx + eax + 0x30; /* 0x17039641: lea eax, [ecx + eax + 0x30] */
    PUSH32(esp, eax); /* 0x17039645: push eax */
    PUSH32(esp, esi); /* 0x17039646: push esi */
    ecx = edi; /* 0x17039647: mov ecx, edi */
    RECOMP_CALL(sub_1703749E); /* 0x17039649: call 0x1703749e */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x30); /* 0x1703964E: mov ecx, dword ptr [esi + 0x30] */
    edx = esi; /* 0x17039651: mov edx, esi */
    goto L_1703967F; /* 0x17039653: jmp 0x1703967f */
L_17039655:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17039655: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1703969F; /* 0x17039657: jmp 0x1703969f */
L_17039659:
    fp_push(*(double*)ADDR(ecx + 0x8)); /* 0x17039659: fld qword ptr [ecx + 8] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(esi + 0x8)); /* 0x1703965C: fcomp qword ptr [esi + 8] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1703965F: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x17039661: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703969C; /* 0x17039664: je 0x1703969c */
L_17039666:
    /* cmp MEM32(ecx), 3 */ /* 0x17039666: cmp dword ptr [ecx], 3 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1703967A; /* 0x17039669: jne 0x1703967a */
L_1703966B:
    fp_push(*(double*)ADDR(esi + 0x8)); /* 0x1703966B: fld qword ptr [esi + 8] */
    fp_push(*(double*)ADDR(ecx + 0x8)); /* 0x1703966E: fld qword ptr [ecx + 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x17039671: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17039673: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x17039675: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_17039685; /* 0x17039678: jnp 0x17039685 */
L_1703967A:
    edx = ecx; /* 0x1703967A: mov edx, ecx */
    ecx = MEM32(ecx + 0x30); /* 0x1703967C: mov ecx, dword ptr [ecx + 0x30] */
L_1703967F:
    /* test ecx, ecx */ /* 0x1703967F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17039659; /* 0x17039681: jne 0x17039659 */
L_17039683:
    goto L_1703969C; /* 0x17039683: jmp 0x1703969c */
L_17039685:
    eax = MEM32(ecx + 0x30); /* 0x17039685: mov eax, dword ptr [ecx + 0x30] */
    MEM32(edx + 0x30) = eax; /* 0x17039688: mov dword ptr [edx + 0x30], eax */
    _flag_a = (uint32_t)(MEM32(ecx + 0x2C)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x2C) = MEM32(ecx + 0x2C) + 1; /* 0x1703968B: inc dword ptr [ecx + 0x2c] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM16(ecx + 0x2E)) << 16; _flag_b = (uint32_t)(0) << 16;
    MEM16(ecx + 0x2E) = (uint16_t)(MEM16(ecx + 0x2E) & 0); /* 0x1703968E: and word ptr [ecx + 0x2e], 0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    eax = MEM32(edi + 0x3C); /* 0x17039693: mov eax, dword ptr [edi + 0x3c] */
    MEM32(ecx + 0x30) = eax; /* 0x17039696: mov dword ptr [ecx + 0x30], eax */
    MEM32(edi + 0x3C) = ecx; /* 0x17039699: mov dword ptr [edi + 0x3c], ecx */
L_1703969C:
    eax = ebx; /* 0x1703969C: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x1703969E: pop ebx */
L_1703969F:
    esi = POP32_VAL(esp); /* 0x1703969F: pop esi */
L_170396A0:
    edi = POP32_VAL(esp); /* 0x170396A0: pop edi */
    ebp = POP32_VAL(esp); /* 0x170396A1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x170396A2: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_170396AA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170396AAu);

L_170396AA:
    edi = edi; /* 0x170396AA: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170396AC: push ebp */
    ebp = esp; /* 0x170396AD: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x170396AF: push ecx */
    eax = MEM32(ebp + 0xC); /* 0x170396B0: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x170396B3: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = eax; /* 0x170396B7: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFu);
    ecx = ecx & 0xFFFFu; /* 0x170396B9: and ecx, 0xffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, 1 */ /* 0x170396BF: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x170396C2: push esi */
    PUSH32(esp, edi); /* 0x170396C3: push edi */
    if (CMP_BE(_flag_a, _flag_b)) goto L_17039784; /* 0x170396C4: jbe 0x17039784 */
L_170396CA:
    edi = MEM32(ebp + 0x8); /* 0x170396CA: mov edi, dword ptr [ebp + 8] */
    /* cmp ecx, MEM32(edi + 0x34) */ /* 0x170396CD: cmp ecx, dword ptr [edi + 0x34] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + 0x34));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_17039784; /* 0x170396D0: ja 0x17039784 */
L_170396D6:
    edx = MEM32(edi + 0x38); /* 0x170396D6: mov edx, dword ptr [edi + 0x38] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x38u); /* 0x170396D9: imul ecx, ecx, 0x38 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x170396DC: add ecx, edx */
    _flag_k = FK_ADD;
    if (16u) _cf = (((eax) >> 15) & 1u); /* 0x170396DE: shr eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 16u; /* 0x170396DE: shr eax, 0x10 */
    /* cmp eax, MEM32(ecx + (-0xC)) */ /* 0x170396E1: cmp eax, dword ptr [ecx - 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17039784; /* 0x170396E4: jne 0x17039784 */
L_170396EA:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFC8u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xFFFFFFC8u; /* 0x170396EA: add ecx, -0x38 */
    _flag_k = FK_ADD;
    eax = MEM32(ecx); /* 0x170396ED: mov eax, dword ptr [ecx] */
    /* cmp eax, 4 */ /* 0x170396EF: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17039721; /* 0x170396F2: jne 0x17039721 */
L_170396F4:
    /* cmp MEM32(edi + 0x48), ecx */ /* 0x170396F4: cmp dword ptr [edi + 0x48], ecx */
    _flag_a = (uint32_t)(MEM32(edi + 0x48)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170396FF; /* 0x170396F7: jne 0x170396ff */
L_170396F9:
    _flag_a = (uint32_t)(MEM32(edi + 0x48)); _flag_b = (uint32_t)(0);
    MEM32(edi + 0x48) = MEM32(edi + 0x48) & 0; /* 0x170396F9: and dword ptr [edi + 0x48], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1703976E; /* 0x170396FD: jmp 0x1703976e */
L_170396FF:
    eax = MEM32(edi + 0x44); /* 0x170396FF: mov eax, dword ptr [edi + 0x44] */
    /* cmp ecx, eax */ /* 0x17039702: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1703970E; /* 0x17039704: jne 0x1703970e */
L_17039706:
    eax = MEM32(ecx + 0x30); /* 0x17039706: mov eax, dword ptr [ecx + 0x30] */
    MEM32(edi + 0x44) = eax; /* 0x17039709: mov dword ptr [edi + 0x44], eax */
    goto L_1703976E; /* 0x1703970C: jmp 0x1703976e */
L_1703970E:
    /* test eax, eax */ /* 0x1703970E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17039784; /* 0x17039710: je 0x17039784 */
L_17039712:
    edx = MEM32(eax + 0x30); /* 0x17039712: mov edx, dword ptr [eax + 0x30] */
    /* cmp ecx, edx */ /* 0x17039715: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17039764; /* 0x17039717: je 0x17039764 */
L_17039719:
    eax = edx; /* 0x17039719: mov eax, edx */
    /* test eax, eax */ /* 0x1703971B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17039712; /* 0x1703971D: jne 0x17039712 */
L_1703971F:
    goto L_17039764; /* 0x1703971F: jmp 0x17039764 */
L_17039721:
    edx = MEM32(ecx + 0x4); /* 0x17039721: mov edx, dword ptr [ecx + 4] */
    esi = MEM32(edi + 0x54); /* 0x17039724: mov esi, dword ptr [edi + 0x54] */
    PUSH32(esp, ebx); /* 0x17039727: push ebx */
    ebx = edx; /* 0x17039728: mov ebx, edx */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x16u); /* 0x1703972A: imul ebx, ebx, 0x16 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x1703972D: add ebx, eax */
    _flag_k = FK_ADD;
    eax = esi + ebx * 4 + 0x34; /* 0x1703972F: lea eax, [esi + ebx*4 + 0x34] */
    /* cmp MEM32(eax), ecx */ /* 0x17039733: cmp dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = POP32_VAL(esp); /* 0x17039735: pop ebx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1703973D; /* 0x17039736: jne 0x1703973d */
L_17039738:
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x17039738: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1703976E; /* 0x1703973B: jmp 0x1703976e */
L_1703973D:
    edx = (uint32_t)((int32_t)edx * (int32_t)0x58u); /* 0x1703973D: imul edx, edx, 0x58 */
    eax = edx + esi + 0x30; /* 0x17039740: lea eax, [edx + esi + 0x30] */
    edx = MEM32(eax); /* 0x17039744: mov edx, dword ptr [eax] */
    /* cmp ecx, edx */ /* 0x17039746: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17039751; /* 0x17039748: jne 0x17039751 */
L_1703974A:
    edx = MEM32(ecx + 0x30); /* 0x1703974A: mov edx, dword ptr [ecx + 0x30] */
    MEM32(eax) = edx; /* 0x1703974D: mov dword ptr [eax], edx */
    goto L_1703976E; /* 0x1703974F: jmp 0x1703976e */
L_17039751:
    eax = edx; /* 0x17039751: mov eax, edx */
    /* test eax, eax */ /* 0x17039753: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17039784; /* 0x17039755: je 0x17039784 */
L_17039757:
    edx = MEM32(eax + 0x30); /* 0x17039757: mov edx, dword ptr [eax + 0x30] */
    /* cmp ecx, edx */ /* 0x1703975A: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17039764; /* 0x1703975C: je 0x17039764 */
L_1703975E:
    eax = edx; /* 0x1703975E: mov eax, edx */
    /* test eax, eax */ /* 0x17039760: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17039757; /* 0x17039762: jne 0x17039757 */
L_17039764:
    /* test eax, eax */ /* 0x17039764: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17039784; /* 0x17039766: je 0x17039784 */
L_17039768:
    edx = MEM32(ecx + 0x30); /* 0x17039768: mov edx, dword ptr [ecx + 0x30] */
    MEM32(eax + 0x30) = edx; /* 0x1703976B: mov dword ptr [eax + 0x30], edx */
L_1703976E:
    _flag_a = (uint32_t)(MEM32(ecx + 0x2C)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x2C) = MEM32(ecx + 0x2C) + 1; /* 0x1703976E: inc dword ptr [ecx + 0x2c] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM16(ecx + 0x2E)) << 16; _flag_b = (uint32_t)(0) << 16;
    MEM16(ecx + 0x2E) = (uint16_t)(MEM16(ecx + 0x2E) & 0); /* 0x17039771: and word ptr [ecx + 0x2e], 0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    eax = MEM32(edi + 0x3C); /* 0x17039776: mov eax, dword ptr [edi + 0x3c] */
    MEM32(ecx + 0x30) = eax; /* 0x17039779: mov dword ptr [ecx + 0x30], eax */
    eax = MEM32(ebp + (-0x4)); /* 0x1703977C: mov eax, dword ptr [ebp - 4] */
    MEM32(edi + 0x3C) = ecx; /* 0x1703977F: mov dword ptr [edi + 0x3c], ecx */
    goto L_17039789; /* 0x17039782: jmp 0x17039789 */
L_17039784:
    eax = 0x8876086Cu; /* 0x17039784: mov eax, 0x8876086c */
L_17039789:
    edi = POP32_VAL(esp); /* 0x17039789: pop edi */
    esi = POP32_VAL(esp); /* 0x1703978A: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1703978B: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1703978C: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_17039794(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17039794u);

L_17039794:
    edi = edi; /* 0x17039794: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17039796: push ebp */
    ebp = esp; /* 0x17039797: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x17039799: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1703979C: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1703979D: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x170397A0: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x170397A1: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp esi, 0xFFFFFFFFu */ /* 0x170397A3: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170397AF; /* 0x170397A6: jne 0x170397af */
L_170397A8:
    ecx = MEM32(eax + 0x50); /* 0x170397A8: mov ecx, dword ptr [eax + 0x50] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x170397AB: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_170397BE; /* 0x170397AD: jmp 0x170397be */
L_170397AF:
    /* cmp esi, MEM32(eax + 0x50) */ /* 0x170397AF: cmp esi, dword ptr [eax + 0x50] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(eax + 0x50));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_170397BB; /* 0x170397B2: jb 0x170397bb */
L_170397B4:
    eax = 0x8876086Cu; /* 0x170397B4: mov eax, 0x8876086c */
    goto L_17039836; /* 0x170397B9: jmp 0x17039836 */
L_170397BB:
    ecx = esi + 0x1; /* 0x170397BB: lea ecx, [esi + 1] */
L_170397BE:
    /* cmp esi, ecx */ /* 0x170397BE: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_17039834; /* 0x170397C0: jae 0x17039834 */
L_170397C2:
    edx = esi; /* 0x170397C2: mov edx, esi */
    edx = (uint32_t)((int32_t)edx * (int32_t)0x58u); /* 0x170397C4: imul edx, edx, 0x58 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x170397C7: sub ecx, esi */
    _flag_k = FK_CMP;
    MEM32(ebp + 0xC) = ecx; /* 0x170397C9: mov dword ptr [ebp + 0xc], ecx */
    PUSH32(esp, ebx); /* 0x170397CC: push ebx */
    goto L_170397F0; /* 0x170397CD: jmp 0x170397f0 */
L_170397CF:
    ecx = MEM32(eax + 0x54); /* 0x170397CF: mov ecx, dword ptr [eax + 0x54] */
    ecx = MEM32(edx + ecx + 0x30); /* 0x170397D2: mov ecx, dword ptr [edx + ecx + 0x30] */
    esi = MEM32(ecx + 0x30); /* 0x170397D6: mov esi, dword ptr [ecx + 0x30] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x2C)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x2C) = MEM32(ecx + 0x2C) + 1; /* 0x170397D9: inc dword ptr [ecx + 0x2c] */
    _flag_k = FK_INC;
    MEM16(ecx + 0x2E) = (uint16_t)(LO16(edi)); /* 0x170397DC: mov word ptr [ecx + 0x2e], di */
    ebx = MEM32(eax + 0x3C); /* 0x170397E0: mov ebx, dword ptr [eax + 0x3c] */
    MEM32(ecx + 0x30) = ebx; /* 0x170397E3: mov dword ptr [ecx + 0x30], ebx */
    MEM32(eax + 0x3C) = ecx; /* 0x170397E6: mov dword ptr [eax + 0x3c], ecx */
    ecx = MEM32(eax + 0x54); /* 0x170397E9: mov ecx, dword ptr [eax + 0x54] */
    MEM32(edx + ecx + 0x30) = esi; /* 0x170397EC: mov dword ptr [edx + ecx + 0x30], esi */
L_170397F0:
    ecx = MEM32(eax + 0x54); /* 0x170397F0: mov ecx, dword ptr [eax + 0x54] */
    /* cmp MEM32(edx + ecx + 0x30), edi */ /* 0x170397F3: cmp dword ptr [edx + ecx + 0x30], edi */
    _flag_a = (uint32_t)(MEM32(edx + ecx + 0x30)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_170397CF; /* 0x170397F7: jne 0x170397cf */
L_170397F9:
    esi = edx + 0x34; /* 0x170397F9: lea esi, [edx + 0x34] */
    MEM32(ebp + 0x8) = 4; /* 0x170397FC: mov dword ptr [ebp + 8], 4 */
L_17039803:
    ecx = MEM32(eax + 0x54); /* 0x17039803: mov ecx, dword ptr [eax + 0x54] */
    ecx = MEM32(esi + ecx); /* 0x17039806: mov ecx, dword ptr [esi + ecx] */
    /* cmp ecx, edi */ /* 0x17039809: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17039823; /* 0x1703980B: je 0x17039823 */
L_1703980D:
    _flag_a = (uint32_t)(MEM32(ecx + 0x2C)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x2C) = MEM32(ecx + 0x2C) + 1; /* 0x1703980D: inc dword ptr [ecx + 0x2c] */
    _flag_k = FK_INC;
    MEM16(ecx + 0x2E) = (uint16_t)(LO16(edi)); /* 0x17039810: mov word ptr [ecx + 0x2e], di */
    ebx = MEM32(eax + 0x3C); /* 0x17039814: mov ebx, dword ptr [eax + 0x3c] */
    MEM32(ecx + 0x30) = ebx; /* 0x17039817: mov dword ptr [ecx + 0x30], ebx */
    MEM32(eax + 0x3C) = ecx; /* 0x1703981A: mov dword ptr [eax + 0x3c], ecx */
    ecx = MEM32(eax + 0x54); /* 0x1703981D: mov ecx, dword ptr [eax + 0x54] */
    MEM32(esi + ecx) = edi; /* 0x17039820: mov dword ptr [esi + ecx], edi */
L_17039823:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x17039823: add esi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) - 1; /* 0x17039826: dec dword ptr [ebp + 8] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_17039803; /* 0x17039829: jne 0x17039803 */
L_1703982B:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x58u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x58u; /* 0x1703982B: add edx, 0x58 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - 1; /* 0x1703982E: dec dword ptr [ebp + 0xc] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_170397F0; /* 0x17039831: jne 0x170397f0 */
L_17039833:
    ebx = POP32_VAL(esp); /* 0x17039833: pop ebx */
L_17039834:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17039834: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_17039836:
    edi = POP32_VAL(esp); /* 0x17039836: pop edi */
    esi = POP32_VAL(esp); /* 0x17039837: pop esi */
    ebp = POP32_VAL(esp); /* 0x17039838: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x17039839: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_17039841(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17039841u);

L_17039841:
    edi = edi; /* 0x17039841: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17039843: push ebp */
    ebp = esp; /* 0x17039844: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x17039846: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x17039849: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1703984A: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(eax + 0x44), esi */ /* 0x1703984C: cmp dword ptr [eax + 0x44], esi */
    _flag_a = (uint32_t)(MEM32(eax + 0x44)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17039870; /* 0x1703984F: je 0x17039870 */
L_17039851:
    PUSH32(esp, edi); /* 0x17039851: push edi */
L_17039852:
    ecx = MEM32(eax + 0x44); /* 0x17039852: mov ecx, dword ptr [eax + 0x44] */
    edx = MEM32(ecx + 0x30); /* 0x17039855: mov edx, dword ptr [ecx + 0x30] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x2C)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x2C) = MEM32(ecx + 0x2C) + 1; /* 0x17039858: inc dword ptr [ecx + 0x2c] */
    _flag_k = FK_INC;
    /* cmp edx, esi */ /* 0x1703985B: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM16(ecx + 0x2E) = (uint16_t)(LO16(esi)); /* 0x1703985D: mov word ptr [ecx + 0x2e], si */
    edi = MEM32(eax + 0x3C); /* 0x17039861: mov edi, dword ptr [eax + 0x3c] */
    MEM32(ecx + 0x30) = edi; /* 0x17039864: mov dword ptr [ecx + 0x30], edi */
    MEM32(eax + 0x3C) = ecx; /* 0x17039867: mov dword ptr [eax + 0x3c], ecx */
    MEM32(eax + 0x44) = edx; /* 0x1703986A: mov dword ptr [eax + 0x44], edx */
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_17039852; /* 0x1703986D: jne 0x17039852 */
L_1703986F:
    edi = POP32_VAL(esp); /* 0x1703986F: pop edi */
L_17039870:
    ecx = MEM32(eax + 0x48); /* 0x17039870: mov ecx, dword ptr [eax + 0x48] */
    /* cmp ecx, esi */ /* 0x17039873: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17039887; /* 0x17039875: je 0x17039887 */
L_17039877:
    _flag_a = (uint32_t)(MEM32(ecx + 0x2C)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x2C) = MEM32(ecx + 0x2C) + 1; /* 0x17039877: inc dword ptr [ecx + 0x2c] */
    _flag_k = FK_INC;
    MEM16(ecx + 0x2E) = (uint16_t)(LO16(esi)); /* 0x1703987A: mov word ptr [ecx + 0x2e], si */
    edx = MEM32(eax + 0x3C); /* 0x1703987E: mov edx, dword ptr [eax + 0x3c] */
    MEM32(ecx + 0x30) = edx; /* 0x17039881: mov dword ptr [ecx + 0x30], edx */
    MEM32(eax + 0x3C) = ecx; /* 0x17039884: mov dword ptr [eax + 0x3c], ecx */
L_17039887:
    MEM32(eax + 0x48) = esi; /* 0x17039887: mov dword ptr [eax + 0x48], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1703988A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1703988C: pop esi */
    ebp = POP32_VAL(esp); /* 0x1703988D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1703988E: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_17039896(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17039896u);

L_17039896:
    eax = ecx; /* 0x17039896: mov eax, ecx */
    fp_push(0.0); /* 0x17039898: fldz  */
    _flag_a = (uint32_t)(MEM32(eax + 0x58)); _flag_b = (uint32_t)(0xFFFFFFFEu);
    MEM32(eax + 0x58) = MEM32(eax + 0x58) & 0xFFFFFFFEu; /* 0x1703989A: and dword ptr [eax + 0x58], 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    { double _v = fp_pop(); *(double*)ADDR(eax + 0x8) = _v; } /* 0x1703989E: fstp qword ptr [eax + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x170398A1: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    fp_push(0.0); /* 0x170398A3: fldz  */
    { double _v = fp_pop(); *(double*)ADDR(eax + 0x10) = _v; } /* 0x170398A5: fstp qword ptr [eax + 0x10] */
    MEM32(eax) = 0x17001CE0u; /* 0x170398A8: mov dword ptr [eax], 0x17001ce0 */
    fp_push(0.0); /* 0x170398AE: fldz  */
    MEM32(eax + 0x20) = ecx; /* 0x170398B0: mov dword ptr [eax + 0x20], ecx */
    MEM32(eax + 0x18) = ecx; /* 0x170398B3: mov dword ptr [eax + 0x18], ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x40) = _v; } /* 0x170398B6: fstp dword ptr [eax + 0x40] */
    MEM32(eax + 0x1C) = ecx; /* 0x170398B9: mov dword ptr [eax + 0x1c], ecx */
    MEM32(eax + 0x24) = ecx; /* 0x170398BC: mov dword ptr [eax + 0x24], ecx */
    MEM32(eax + 0x28) = ecx; /* 0x170398BF: mov dword ptr [eax + 0x28], ecx */
    MEM32(eax + 0x2C) = ecx; /* 0x170398C2: mov dword ptr [eax + 0x2c], ecx */
    MEM32(eax + 0x30) = ecx; /* 0x170398C5: mov dword ptr [eax + 0x30], ecx */
    MEM32(eax + 0x54) = ecx; /* 0x170398C8: mov dword ptr [eax + 0x54], ecx */
    MEM32(eax + 0x4C) = ecx; /* 0x170398CB: mov dword ptr [eax + 0x4c], ecx */
    MEM32(eax + 0x50) = ecx; /* 0x170398CE: mov dword ptr [eax + 0x50], ecx */
    MEM32(eax + 0x4) = 1; /* 0x170398D1: mov dword ptr [eax + 4], 1 */
    MEM32(eax + 0x3C) = ecx; /* 0x170398D8: mov dword ptr [eax + 0x3c], ecx */
    MEM32(eax + 0x38) = ecx; /* 0x170398DB: mov dword ptr [eax + 0x38], ecx */
    MEM32(eax + 0x34) = ecx; /* 0x170398DE: mov dword ptr [eax + 0x34], ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x170398E1: ret  */
    RECOMP_REGS_OUT();
}

void sub_170398E7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170398E7u);

L_170398E7:
    edi = edi; /* 0x170398E7: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170398E9: push ebp */
    ebp = esp; /* 0x170398EA: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x170398EC: push ecx */
    PUSH32(esp, ecx); /* 0x170398ED: push ecx */
    PUSH32(esp, edi); /* 0x170398EE: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x170398EF: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x1C), edi */ /* 0x170398F1: cmp dword ptr [ebp + 0x1c], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = edi; /* 0x170398F4: mov dword ptr [ebp - 4], edi */
    MEM32(ebp + (-0x8)) = edi; /* 0x170398F7: mov dword ptr [ebp - 8], edi */
    eax = 0x8876086Cu; /* 0x170398FA: mov eax, 0x8876086c */
    if (CMP_NE(_flag_a, _flag_b)) goto L_17039904; /* 0x170398FF: jne 0x17039904 */
L_17039901:
    MEM32(ebp + (-0x4)) = eax; /* 0x17039901: mov dword ptr [ebp - 4], eax */
L_17039904:
    /* cmp MEM32(ebp + 0xC), edi */ /* 0x17039904: cmp dword ptr [ebp + 0xc], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1703990C; /* 0x17039907: jne 0x1703990c */
L_17039909:
    MEM32(ebp + (-0x4)) = eax; /* 0x17039909: mov dword ptr [ebp - 4], eax */
L_1703990C:
    /* cmp MEM32(ebp + 0x10), edi */ /* 0x1703990C: cmp dword ptr [ebp + 0x10], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17039914; /* 0x1703990F: jne 0x17039914 */
L_17039911:
    MEM32(ebp + (-0x4)) = eax; /* 0x17039911: mov dword ptr [ebp - 4], eax */
L_17039914:
    /* cmp MEM32(ebp + 0x14), edi */ /* 0x17039914: cmp dword ptr [ebp + 0x14], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1703991C; /* 0x17039917: jne 0x1703991c */
L_17039919:
    MEM32(ebp + (-0x4)) = eax; /* 0x17039919: mov dword ptr [ebp - 4], eax */
L_1703991C:
    /* cmp MEM32(ebp + 0x18), edi */ /* 0x1703991C: cmp dword ptr [ebp + 0x18], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17039924; /* 0x1703991F: jne 0x17039924 */
L_17039921:
    MEM32(ebp + (-0x4)) = eax; /* 0x17039921: mov dword ptr [ebp - 4], eax */
L_17039924:
    /* cmp MEM32(ebp + (-0x4)), edi */ /* 0x17039924: cmp dword ptr [ebp - 4], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_17039C62; /* 0x17039927: jl 0x17039c62 */
L_1703992D:
    PUSH32(esp, ebx); /* 0x1703992D: push ebx */
    PUSH32(esp, 0x60u); /* 0x1703992E: push 0x60 */
    RECOMP_CALL(sub_1721B01C); /* 0x17039930: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* cmp eax, edi */ /* 0x17039935: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x17039937: pop ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17039945; /* 0x17039938: je 0x17039945 */
L_1703993A:
    ecx = eax; /* 0x1703993A: mov ecx, eax */
    RECOMP_CALL(sub_17039896); /* 0x1703993C: call 0x17039896 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x17039941: mov ebx, eax */
    goto L_17039947; /* 0x17039943: jmp 0x17039947 */
L_17039945:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x17039945: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_17039947:
    /* cmp ebx, edi */ /* 0x17039947: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17039957; /* 0x17039949: jne 0x17039957 */
L_1703994B:
    MEM32(ebp + (-0x4)) = 0x8007000Eu; /* 0x1703994B: mov dword ptr [ebp - 4], 0x8007000e */
    goto L_17039C61; /* 0x17039952: jmp 0x17039c61 */
L_17039957:
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x17039957: push dword ptr [ebp + 0x18] */
    ecx = ebx; /* 0x1703995A: mov ecx, ebx */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1703995C: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1703995F: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x17039962: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1703723B); /* 0x17039965: call 0x1703723b */
    RECOMP_FLAGS_IN();
    /* cmp eax, edi */ /* 0x1703996A: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = eax; /* 0x1703996C: mov dword ptr [ebp - 4], eax */
    if (CMP_L(_flag_a, _flag_b)) goto L_17039C57; /* 0x1703996F: jl 0x17039c57 */
L_17039975:
    _flag_a = (uint32_t)(MEM32(ebx + 0x58)); _flag_b = (uint32_t)(0xFFFFFFFEu);
    MEM32(ebx + 0x58) = MEM32(ebx + 0x58) & 0xFFFFFFFEu; /* 0x17039975: and dword ptr [ebx + 0x58], 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + 0x8); /* 0x17039979: mov eax, dword ptr [ebp + 8] */
    fp_push(*(double*)ADDR(eax + 0x10)); /* 0x1703997C: fld qword ptr [eax + 0x10] */
    edx = MEM32(ebx + 0x50); /* 0x1703997F: mov edx, dword ptr [ebx + 0x50] */
    { double _v = fp_pop(); *(double*)ADDR(ebx + 0x10) = _v; } /* 0x17039982: fstp qword ptr [ebx + 0x10] */
    fp_push(*(double*)ADDR(eax + 0x8)); /* 0x17039985: fld qword ptr [eax + 8] */
    { double _v = fp_pop(); *(double*)ADDR(ebx + 0x8) = _v; } /* 0x17039988: fstp qword ptr [ebx + 8] */
    ecx = MEM32(eax + 0x4C); /* 0x1703998B: mov ecx, dword ptr [eax + 0x4c] */
    /* cmp ecx, edx */ /* 0x1703998E: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_17039994; /* 0x17039990: jb 0x17039994 */
L_17039992:
    ecx = edx; /* 0x17039992: mov ecx, edx */
L_17039994:
    edx = MEM32(ebx + 0x28); /* 0x17039994: mov edx, dword ptr [ebx + 0x28] */
    MEM32(ebx + 0x4C) = ecx; /* 0x17039997: mov dword ptr [ebx + 0x4c], ecx */
    ecx = MEM32(eax + 0x24); /* 0x1703999A: mov ecx, dword ptr [eax + 0x24] */
    /* cmp ecx, edx */ /* 0x1703999D: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_170399A3; /* 0x1703999F: jb 0x170399a3 */
L_170399A1:
    ecx = edx; /* 0x170399A1: mov ecx, edx */
L_170399A3:
    edx = MEM32(ebx + 0x1C); /* 0x170399A3: mov edx, dword ptr [ebx + 0x1c] */
    MEM32(ebx + 0x24) = ecx; /* 0x170399A6: mov dword ptr [ebx + 0x24], ecx */
    ecx = MEM32(eax + 0x18); /* 0x170399A9: mov ecx, dword ptr [eax + 0x18] */
    /* cmp ecx, edx */ /* 0x170399AC: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_170399B2; /* 0x170399AE: jb 0x170399b2 */
L_170399B0:
    ecx = edx; /* 0x170399B0: mov ecx, edx */
L_170399B2:
    /* cmp ecx, edi */ /* 0x170399B2: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x170399B4: push esi */
    MEM32(ebx + 0x18) = ecx; /* 0x170399B5: mov dword ptr [ebx + 0x18], ecx */
    MEM32(ebp + 0x18) = edi; /* 0x170399B8: mov dword ptr [ebp + 0x18], edi */
    if (CMP_BE(_flag_a, _flag_b)) goto L_17039A6F; /* 0x170399BB: jbe 0x17039a6f */
L_170399C1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x170399C1: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x14) = esi; /* 0x170399C3: mov dword ptr [ebp + 0x14], esi */
L_170399C6:
    ecx = MEM32(eax + 0x20); /* 0x170399C6: mov ecx, dword ptr [eax + 0x20] */
    ecx = MEM32(esi + ecx); /* 0x170399C9: mov ecx, dword ptr [esi + ecx] */
    /* cmp ecx, edi */ /* 0x170399CC: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17039A14; /* 0x170399CE: je 0x17039a14 */
L_170399D0:
    eax = ecx; /* 0x170399D0: mov eax, ecx */
    edx = eax + 0x1; /* 0x170399D2: lea edx, [eax + 1] */
L_170399D5:
    SET_LO8(ecx, MEM8(eax)); /* 0x170399D5: mov cl, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x170399D7: inc eax */
    _flag_k = FK_INC;
    /* test LO8(ecx), LO8(ecx) */ /* 0x170399D8: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170399D5; /* 0x170399DA: jne 0x170399d5 */
L_170399DC:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x170399DC: sub eax, edx */
    _flag_k = FK_CMP;
    edi = eax + 0x1; /* 0x170399DE: lea edi, [eax + 1] */
    PUSH32(esp, edi); /* 0x170399E1: push edi */
    RECOMP_CALL(sub_1721B01C); /* 0x170399E2: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170399E7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x170399E9: pop ecx */
    MEM32(ebp + (-0x8)) = eax; /* 0x170399EA: mov dword ptr [ebp - 8], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17039C6A; /* 0x170399ED: je 0x17039c6a */
L_170399F3:
    edx = MEM32(ebp + 0x8); /* 0x170399F3: mov edx, dword ptr [ebp + 8] */
    edx = MEM32(edx + 0x20); /* 0x170399F6: mov edx, dword ptr [edx + 0x20] */
    esi = MEM32(esi + edx); /* 0x170399F9: mov esi, dword ptr [esi + edx] */
    ecx = edi; /* 0x170399FC: mov ecx, edi */
    edi = eax; /* 0x170399FE: mov edi, eax */
    eax = ecx; /* 0x17039A00: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x17039A02: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x17039A02: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x17039A05: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x17039A07: mov ecx, eax */
    eax = MEM32(ebp + 0x8); /* 0x17039A09: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x17039A0C: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x17039A0F: rep movsb byte ptr es:[edi], byte ptr [esi] */
    esi = MEM32(ebp + 0x14); /* 0x17039A11: mov esi, dword ptr [ebp + 0x14] */
L_17039A14:
    ecx = MEM32(ebx + 0x20); /* 0x17039A14: mov ecx, dword ptr [ebx + 0x20] */
    edx = MEM32(ebp + (-0x8)); /* 0x17039A17: mov edx, dword ptr [ebp - 8] */
    MEM32(esi + ecx) = edx; /* 0x17039A1A: mov dword ptr [esi + ecx], edx */
    ecx = MEM32(eax + 0x20); /* 0x17039A1D: mov ecx, dword ptr [eax + 0x20] */
    ecx = MEM32(esi + ecx + 0x4); /* 0x17039A20: mov ecx, dword ptr [esi + ecx + 4] */
    edx = MEM32(ebx + 0x20); /* 0x17039A24: mov edx, dword ptr [ebx + 0x20] */
    MEM32(esi + edx + 0x4) = ecx; /* 0x17039A27: mov dword ptr [esi + edx + 4], ecx */
    ecx = MEM32(eax + 0x20); /* 0x17039A2B: mov ecx, dword ptr [eax + 0x20] */
    ecx = MEM32(esi + ecx + 0x8); /* 0x17039A2E: mov ecx, dword ptr [esi + ecx + 8] */
    edx = MEM32(ebx + 0x20); /* 0x17039A32: mov edx, dword ptr [ebx + 0x20] */
    MEM32(esi + edx + 0x8) = ecx; /* 0x17039A35: mov dword ptr [esi + edx + 8], ecx */
    ecx = MEM32(eax + 0x20); /* 0x17039A39: mov ecx, dword ptr [eax + 0x20] */
    ecx = MEM32(esi + ecx + 0xC); /* 0x17039A3C: mov ecx, dword ptr [esi + ecx + 0xc] */
    edx = MEM32(ebx + 0x20); /* 0x17039A40: mov edx, dword ptr [ebx + 0x20] */
    MEM32(esi + edx + 0xC) = ecx; /* 0x17039A43: mov dword ptr [esi + edx + 0xc], ecx */
    ecx = MEM32(eax + 0x20); /* 0x17039A47: mov ecx, dword ptr [eax + 0x20] */
    ecx = MEM32(esi + ecx + 0x10); /* 0x17039A4A: mov ecx, dword ptr [esi + ecx + 0x10] */
    edx = MEM32(ebx + 0x20); /* 0x17039A4E: mov edx, dword ptr [ebx + 0x20] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x17039A51: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) + 1; /* 0x17039A53: inc dword ptr [ebp + 0x18] */
    _flag_k = FK_INC;
    MEM32(esi + edx + 0x10) = ecx; /* 0x17039A56: mov dword ptr [esi + edx + 0x10], ecx */
    ecx = MEM32(ebp + 0x18); /* 0x17039A5A: mov ecx, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x14u; /* 0x17039A5D: add esi, 0x14 */
    _flag_k = FK_ADD;
    /* cmp ecx, MEM32(ebx + 0x18) */ /* 0x17039A60: cmp ecx, dword ptr [ebx + 0x18] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebx + 0x18));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x8)) = edi; /* 0x17039A63: mov dword ptr [ebp - 8], edi */
    MEM32(ebp + 0x14) = esi; /* 0x17039A66: mov dword ptr [ebp + 0x14], esi */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170399C6; /* 0x17039A69: jb 0x170399c6 */
L_17039A6F:
    /* cmp MEM32(ebx + 0x24), edi */ /* 0x17039A6F: cmp dword ptr [ebx + 0x24], edi */
    _flag_a = (uint32_t)(MEM32(ebx + 0x24)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x18) = edi; /* 0x17039A72: mov dword ptr [ebp + 0x18], edi */
    if (CMP_BE(_flag_a, _flag_b)) goto L_17039ACB; /* 0x17039A75: jbe 0x17039acb */
L_17039A77:
    edi = MEM32(ebp + 0x18); /* 0x17039A77: mov edi, dword ptr [ebp + 0x18] */
    ecx = MEM32(eax + 0x2C); /* 0x17039A7A: mov ecx, dword ptr [eax + 0x2c] */
    edx = MEM32(ebx + 0x2C); /* 0x17039A7D: mov edx, dword ptr [ebx + 0x2c] */
    if (2u) _cf = (((edi) >> 30) & 1u); /* 0x17039A80: shl edi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edi << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 2u; /* 0x17039A80: shl edi, 2 */
    ecx = MEM32(edi + ecx); /* 0x17039A83: mov ecx, dword ptr [edi + ecx] */
    MEM32(edi + edx) = ecx; /* 0x17039A86: mov dword ptr [edi + edx], ecx */
    ecx = MEM32(eax + 0x2C); /* 0x17039A89: mov ecx, dword ptr [eax + 0x2c] */
    /* cmp MEM32(edi + ecx), 0 */ /* 0x17039A8C: cmp dword ptr [edi + ecx], 0 */
    _flag_a = (uint32_t)(MEM32(edi + ecx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17039AA0; /* 0x17039A90: je 0x17039aa0 */
L_17039A92:
    eax = ecx; /* 0x17039A92: mov eax, ecx */
    eax = MEM32(edi + eax); /* 0x17039A94: mov eax, dword ptr [edi + eax] */
    ecx = MEM32(eax); /* 0x17039A97: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x17039A99: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x4)); /* 0x17039A9A: call dword ptr [ecx + 4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x17039A9D: mov eax, dword ptr [ebp + 8] */
L_17039AA0:
    edx = MEM32(eax + 0x30); /* 0x17039AA0: mov edx, dword ptr [eax + 0x30] */
    esi = MEM32(edx + edi); /* 0x17039AA3: mov esi, dword ptr [edx + edi] */
    ecx = MEM32(ebx + 0x18); /* 0x17039AA6: mov ecx, dword ptr [ebx + 0x18] */
    edx = MEM32(ebx + 0x30); /* 0x17039AA9: mov edx, dword ptr [ebx + 0x30] */
    edi = MEM32(edi + edx); /* 0x17039AAC: mov edi, dword ptr [edi + edx] */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x17039AAF: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x17039AAF: shl ecx, 2 */
    edx = ecx; /* 0x17039AB2: mov edx, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x17039AB4: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x17039AB4: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x17039AB7: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = edx; /* 0x17039AB9: mov ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x17039ABB: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) + 1; /* 0x17039ABE: inc dword ptr [ebp + 0x18] */
    _flag_k = FK_INC;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x17039AC1: rep movsb byte ptr es:[edi], byte ptr [esi] */
    ecx = MEM32(ebp + 0x18); /* 0x17039AC3: mov ecx, dword ptr [ebp + 0x18] */
    /* cmp ecx, MEM32(ebx + 0x24) */ /* 0x17039AC6: cmp ecx, dword ptr [ebx + 0x24] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebx + 0x24));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17039A77; /* 0x17039AC9: jb 0x17039a77 */
L_17039ACB:
    ecx = MEM32(ebx + 0x4C); /* 0x17039ACB: mov ecx, dword ptr [ebx + 0x4c] */
    esi = MEM32(eax + 0x54); /* 0x17039ACE: mov esi, dword ptr [eax + 0x54] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x58u); /* 0x17039AD1: imul ecx, ecx, 0x58 */
    edi = MEM32(ebx + 0x54); /* 0x17039AD4: mov edi, dword ptr [ebx + 0x54] */
    edx = ecx; /* 0x17039AD7: mov edx, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x17039AD9: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x17039AD9: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x17039ADC: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = edx; /* 0x17039ADE: mov ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x17039AE0: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x17039AE3: rep movsb byte ptr es:[edi], byte ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x17039AE5: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebx + 0x4C), edi */ /* 0x17039AE7: cmp dword ptr [ebx + 0x4c], edi */
    _flag_a = (uint32_t)(MEM32(ebx + 0x4C)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x10) = edi; /* 0x17039AEA: mov dword ptr [ebp + 0x10], edi */
    if (CMP_BE(_flag_a, _flag_b)) goto L_17039BEA; /* 0x17039AED: jbe 0x17039bea */
L_17039AF3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x17039AF3: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x14) = edx; /* 0x17039AF5: mov dword ptr [ebp + 0x14], edx */
L_17039AF8:
    ecx = MEM32(ebx + 0x54); /* 0x17039AF8: mov ecx, dword ptr [ebx + 0x54] */
    MEM32(edx + ecx + 0x30) = edi; /* 0x17039AFB: mov dword ptr [edx + ecx + 0x30], edi */
    ecx = MEM32(ebx + 0x54); /* 0x17039AFF: mov ecx, dword ptr [ebx + 0x54] */
    MEM32(edx + ecx + 0x34) = edi; /* 0x17039B02: mov dword ptr [edx + ecx + 0x34], edi */
    ecx = MEM32(ebx + 0x54); /* 0x17039B06: mov ecx, dword ptr [ebx + 0x54] */
    MEM32(edx + ecx + 0x38) = edi; /* 0x17039B09: mov dword ptr [edx + ecx + 0x38], edi */
    ecx = MEM32(ebx + 0x54); /* 0x17039B0D: mov ecx, dword ptr [ebx + 0x54] */
    MEM32(edx + ecx + 0x3C) = edi; /* 0x17039B10: mov dword ptr [edx + ecx + 0x3c], edi */
    ecx = MEM32(ebx + 0x54); /* 0x17039B14: mov ecx, dword ptr [ebx + 0x54] */
    MEM32(edx + ecx + 0x40) = edi; /* 0x17039B17: mov dword ptr [edx + ecx + 0x40], edi */
    ecx = MEM32(ebx + 0x54); /* 0x17039B1B: mov ecx, dword ptr [ebx + 0x54] */
    MEM32(edx + ecx + 0x54) = 1; /* 0x17039B1E: mov dword ptr [edx + ecx + 0x54], 1 */
    ecx = MEM32(ebx + 0x54); /* 0x17039B26: mov ecx, dword ptr [ebx + 0x54] */
    esi = MEM32(ebx + 0x28); /* 0x17039B29: mov esi, dword ptr [ebx + 0x28] */
    ecx = edx + ecx + 0x20; /* 0x17039B2C: lea ecx, [edx + ecx + 0x20] */
    /* cmp MEM32(ecx), esi */ /* 0x17039B30: cmp dword ptr [ecx], esi */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_17039B36; /* 0x17039B32: jb 0x17039b36 */
L_17039B34:
    MEM32(ecx) = esi; /* 0x17039B34: mov dword ptr [ecx], esi */
L_17039B36:
    ecx = MEM32(eax + 0x54); /* 0x17039B36: mov ecx, dword ptr [eax + 0x54] */
    ecx = MEM32(ecx + edx + 0x30); /* 0x17039B39: mov ecx, dword ptr [ecx + edx + 0x30] */
    /* cmp ecx, edi */ /* 0x17039B3D: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x18) = ecx; /* 0x17039B3F: mov dword ptr [ebp + 0x18], ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17039B86; /* 0x17039B42: je 0x17039b86 */
L_17039B44:
    eax = MEM32(ebx + 0x3C); /* 0x17039B44: mov eax, dword ptr [ebx + 0x3c] */
    /* test eax, eax */ /* 0x17039B47: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17039C73; /* 0x17039B49: je 0x17039c73 */
L_17039B4F:
    ecx = MEM32(eax + 0x30); /* 0x17039B4F: mov ecx, dword ptr [eax + 0x30] */
    esi = MEM32(ebp + 0x18); /* 0x17039B52: mov esi, dword ptr [ebp + 0x18] */
    MEM32(ebx + 0x3C) = ecx; /* 0x17039B55: mov dword ptr [ebx + 0x3c], ecx */
    PUSH32(esp, 0xEu); /* 0x17039B58: push 0xe */
    ecx = POP32_VAL(esp); /* 0x17039B5A: pop ecx */
    edi = eax; /* 0x17039B5B: mov edi, eax */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x17039B5D: rep movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)(MEM32(eax + 0x30)); _flag_b = (uint32_t)(0);
    MEM32(eax + 0x30) = MEM32(eax + 0x30) & 0; /* 0x17039B5F: and dword ptr [eax + 0x30], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebx + 0x54); /* 0x17039B63: mov ecx, dword ptr [ebx + 0x54] */
    ecx = edx + ecx + 0x30; /* 0x17039B66: lea ecx, [edx + ecx + 0x30] */
    PUSH32(esp, ecx); /* 0x17039B6A: push ecx */
    PUSH32(esp, eax); /* 0x17039B6B: push eax */
    ecx = ebx; /* 0x17039B6C: mov ecx, ebx */
    RECOMP_CALL(sub_1703749E); /* 0x17039B6E: call 0x1703749e */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x18); /* 0x17039B73: mov eax, dword ptr [ebp + 0x18] */
    eax = MEM32(eax + 0x30); /* 0x17039B76: mov eax, dword ptr [eax + 0x30] */
    /* test eax, eax */ /* 0x17039B79: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(ebp + 0x14); /* 0x17039B7B: mov edx, dword ptr [ebp + 0x14] */
    MEM32(ebp + 0x18) = eax; /* 0x17039B7E: mov dword ptr [ebp + 0x18], eax */
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17039B44; /* 0x17039B81: jne 0x17039b44 */
L_17039B83:
    eax = MEM32(ebp + 0x8); /* 0x17039B83: mov eax, dword ptr [ebp + 8] */
L_17039B86:
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) & 0; /* 0x17039B86: and dword ptr [ebp + 0x14], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = edx + 0x34; /* 0x17039B8A: lea ecx, [edx + 0x34] */
    MEM32(ebp + 0x18) = ecx; /* 0x17039B8D: mov dword ptr [ebp + 0x18], ecx */
L_17039B90:
    ecx = MEM32(eax + 0x54); /* 0x17039B90: mov ecx, dword ptr [eax + 0x54] */
    esi = MEM32(ebp + 0x18); /* 0x17039B93: mov esi, dword ptr [ebp + 0x18] */
    esi = MEM32(esi + ecx); /* 0x17039B96: mov esi, dword ptr [esi + ecx] */
    /* test esi, esi */ /* 0x17039B99: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17039BC6; /* 0x17039B9B: je 0x17039bc6 */
L_17039B9D:
    edi = MEM32(ebx + 0x3C); /* 0x17039B9D: mov edi, dword ptr [ebx + 0x3c] */
    /* test edi, edi */ /* 0x17039BA0: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0xC) = edi; /* 0x17039BA2: mov dword ptr [ebp + 0xc], edi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17039C73; /* 0x17039BA5: je 0x17039c73 */
L_17039BAB:
    ecx = MEM32(edi + 0x30); /* 0x17039BAB: mov ecx, dword ptr [edi + 0x30] */
    MEM32(ebx + 0x3C) = ecx; /* 0x17039BAE: mov dword ptr [ebx + 0x3c], ecx */
    PUSH32(esp, 0xEu); /* 0x17039BB1: push 0xe */
    ecx = POP32_VAL(esp); /* 0x17039BB3: pop ecx */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x17039BB4: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = MEM32(ebp + 0xC); /* 0x17039BB6: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x30)); _flag_b = (uint32_t)(0);
    MEM32(ecx + 0x30) = MEM32(ecx + 0x30) & 0; /* 0x17039BB9: and dword ptr [ecx + 0x30], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(ebx + 0x54); /* 0x17039BBD: mov esi, dword ptr [ebx + 0x54] */
    edi = MEM32(ebp + 0x18); /* 0x17039BC0: mov edi, dword ptr [ebp + 0x18] */
    MEM32(edi + esi) = ecx; /* 0x17039BC3: mov dword ptr [edi + esi], ecx */
L_17039BC6:
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) + 1; /* 0x17039BC6: inc dword ptr [ebp + 0x14] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) + 4; /* 0x17039BC9: add dword ptr [ebp + 0x18], 4 */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + 0x14), 4 */ /* 0x17039BCD: cmp dword ptr [ebp + 0x14], 4 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17039B90; /* 0x17039BD1: jb 0x17039b90 */
L_17039BD3:
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 1; /* 0x17039BD3: inc dword ptr [ebp + 0x10] */
    _flag_k = FK_INC;
    ecx = MEM32(ebp + 0x10); /* 0x17039BD6: mov ecx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x58u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x58u; /* 0x17039BD9: add edx, 0x58 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x17039BDC: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, MEM32(ebx + 0x4C) */ /* 0x17039BDE: cmp ecx, dword ptr [ebx + 0x4c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebx + 0x4C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x14) = edx; /* 0x17039BE1: mov dword ptr [ebp + 0x14], edx */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17039AF8; /* 0x17039BE4: jb 0x17039af8 */
L_17039BEA:
    ecx = MEM32(eax + 0x44); /* 0x17039BEA: mov ecx, dword ptr [eax + 0x44] */
    /* cmp ecx, edi */ /* 0x17039BED: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x18) = ecx; /* 0x17039BEF: mov dword ptr [ebp + 0x18], ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17039C2B; /* 0x17039BF2: je 0x17039c2b */
L_17039BF4:
    eax = MEM32(ebx + 0x3C); /* 0x17039BF4: mov eax, dword ptr [ebx + 0x3c] */
    /* test eax, eax */ /* 0x17039BF7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17039C73; /* 0x17039BF9: je 0x17039c73 */
L_17039BFB:
    ecx = MEM32(eax + 0x30); /* 0x17039BFB: mov ecx, dword ptr [eax + 0x30] */
    esi = MEM32(ebp + 0x18); /* 0x17039BFE: mov esi, dword ptr [ebp + 0x18] */
    MEM32(ebx + 0x3C) = ecx; /* 0x17039C01: mov dword ptr [ebx + 0x3c], ecx */
    PUSH32(esp, 0xEu); /* 0x17039C04: push 0xe */
    ecx = POP32_VAL(esp); /* 0x17039C06: pop ecx */
    edi = eax; /* 0x17039C07: mov edi, eax */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x17039C09: rep movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)(MEM32(eax + 0x30)); _flag_b = (uint32_t)(0);
    MEM32(eax + 0x30) = MEM32(eax + 0x30) & 0; /* 0x17039C0B: and dword ptr [eax + 0x30], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebx + 0x44; /* 0x17039C0F: lea ecx, [ebx + 0x44] */
    PUSH32(esp, ecx); /* 0x17039C12: push ecx */
    PUSH32(esp, eax); /* 0x17039C13: push eax */
    ecx = ebx; /* 0x17039C14: mov ecx, ebx */
    RECOMP_CALL(sub_1703749E); /* 0x17039C16: call 0x1703749e */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x18); /* 0x17039C1B: mov eax, dword ptr [ebp + 0x18] */
    eax = MEM32(eax + 0x30); /* 0x17039C1E: mov eax, dword ptr [eax + 0x30] */
    /* test eax, eax */ /* 0x17039C21: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x18) = eax; /* 0x17039C23: mov dword ptr [ebp + 0x18], eax */
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17039BF4; /* 0x17039C26: jne 0x17039bf4 */
L_17039C28:
    eax = MEM32(ebp + 0x8); /* 0x17039C28: mov eax, dword ptr [ebp + 8] */
L_17039C2B:
    eax = MEM32(eax + 0x48); /* 0x17039C2B: mov eax, dword ptr [eax + 0x48] */
    /* test eax, eax */ /* 0x17039C2E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17039C4F; /* 0x17039C30: je 0x17039c4f */
L_17039C32:
    edx = MEM32(ebx + 0x3C); /* 0x17039C32: mov edx, dword ptr [ebx + 0x3c] */
    /* test edx, edx */ /* 0x17039C35: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17039C73; /* 0x17039C37: je 0x17039c73 */
L_17039C39:
    ecx = MEM32(edx + 0x30); /* 0x17039C39: mov ecx, dword ptr [edx + 0x30] */
    MEM32(ebx + 0x3C) = ecx; /* 0x17039C3C: mov dword ptr [ebx + 0x3c], ecx */
    PUSH32(esp, 0xEu); /* 0x17039C3F: push 0xe */
    ecx = POP32_VAL(esp); /* 0x17039C41: pop ecx */
    esi = eax; /* 0x17039C42: mov esi, eax */
    edi = edx; /* 0x17039C44: mov edi, edx */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x17039C46: rep movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)(MEM32(edx + 0x30)); _flag_b = (uint32_t)(0);
    MEM32(edx + 0x30) = MEM32(edx + 0x30) & 0; /* 0x17039C48: and dword ptr [edx + 0x30], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebx + 0x48) = edx; /* 0x17039C4C: mov dword ptr [ebx + 0x48], edx */
L_17039C4F:
    eax = MEM32(ebp + 0x1C); /* 0x17039C4F: mov eax, dword ptr [ebp + 0x1c] */
    MEM32(eax) = ebx; /* 0x17039C52: mov dword ptr [eax], ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x17039C54: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_17039C56:
    esi = POP32_VAL(esp); /* 0x17039C56: pop esi */
L_17039C57:
    /* test ebx, ebx */ /* 0x17039C57: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17039C61; /* 0x17039C59: je 0x17039c61 */
L_17039C5B:
    eax = MEM32(ebx); /* 0x17039C5B: mov eax, dword ptr [ebx] */
    PUSH32(esp, ebx); /* 0x17039C5D: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x17039C5E: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_17039C61:
    ebx = POP32_VAL(esp); /* 0x17039C61: pop ebx */
L_17039C62:
    eax = MEM32(ebp + (-0x4)); /* 0x17039C62: mov eax, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x17039C65: pop edi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17039C66: leave  */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x17039C67: ret 0x18 */
L_17039C6A:
    MEM32(ebp + (-0x4)) = 0x8007000Eu; /* 0x17039C6A: mov dword ptr [ebp - 4], 0x8007000e */
    RECOMP_BACKEDGE();
    goto L_17039C56; /* 0x17039C71: jmp 0x17039c56 */
L_17039C73:
    MEM32(ebp + (-0x4)) = 0x8876086Cu; /* 0x17039C73: mov dword ptr [ebp - 4], 0x8876086c */
    RECOMP_BACKEDGE();
    goto L_17039C56; /* 0x17039C7A: jmp 0x17039c56 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_17039C81(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17039C81u);

L_17039C81:
    edi = edi; /* 0x17039C81: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17039C83: push ebp */
    ebp = esp; /* 0x17039C84: mov ebp, esp */
    PUSH32(esp, edi); /* 0x17039C86: push edi */
    edi = MEM32(ebp + 0x18); /* 0x17039C87: mov edi, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x17039C8A: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x17039C8C: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = 0x8876086Cu; /* 0x17039C8E: mov eax, 0x8876086c */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17039C97; /* 0x17039C93: jne 0x17039c97 */
L_17039C95:
    ecx = eax; /* 0x17039C95: mov ecx, eax */
L_17039C97:
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x17039C97: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17039C9F; /* 0x17039C9B: jne 0x17039c9f */
L_17039C9D:
    ecx = eax; /* 0x17039C9D: mov ecx, eax */
L_17039C9F:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x17039C9F: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17039CA7; /* 0x17039CA3: jne 0x17039ca7 */
L_17039CA5:
    ecx = eax; /* 0x17039CA5: mov ecx, eax */
L_17039CA7:
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x17039CA7: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17039CAF; /* 0x17039CAB: jne 0x17039caf */
L_17039CAD:
    ecx = eax; /* 0x17039CAD: mov ecx, eax */
L_17039CAF:
    /* cmp MEM32(ebp + 0x14), 0 */ /* 0x17039CAF: cmp dword ptr [ebp + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17039CB7; /* 0x17039CB3: jne 0x17039cb7 */
L_17039CB5:
    ecx = eax; /* 0x17039CB5: mov ecx, eax */
L_17039CB7:
    /* test ecx, ecx */ /* 0x17039CB7: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17039CFF; /* 0x17039CB9: jl 0x17039cff */
L_17039CBB:
    PUSH32(esp, esi); /* 0x17039CBB: push esi */
    PUSH32(esp, 0x60u); /* 0x17039CBC: push 0x60 */
    RECOMP_CALL(sub_1721B01C); /* 0x17039CBE: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17039CC3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x17039CC5: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17039CD3; /* 0x17039CC6: je 0x17039cd3 */
L_17039CC8:
    ecx = eax; /* 0x17039CC8: mov ecx, eax */
    RECOMP_CALL(sub_17039896); /* 0x17039CCA: call 0x17039896 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x17039CCF: mov esi, eax */
    goto L_17039CD5; /* 0x17039CD1: jmp 0x17039cd5 */
L_17039CD3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x17039CD3: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_17039CD5:
    /* test esi, esi */ /* 0x17039CD5: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17039CFE; /* 0x17039CD7: je 0x17039cfe */
L_17039CD9:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x17039CD9: push dword ptr [ebp + 0x14] */
    ecx = esi; /* 0x17039CDC: mov ecx, esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x17039CDE: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x17039CE1: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x17039CE4: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1703723B); /* 0x17039CE7: call 0x1703723b */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17039CEC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17039CF4; /* 0x17039CEE: jl 0x17039cf4 */
L_17039CF0:
    MEM32(edi) = esi; /* 0x17039CF0: mov dword ptr [edi], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x17039CF2: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_17039CF4:
    /* test esi, esi */ /* 0x17039CF4: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17039CFE; /* 0x17039CF6: je 0x17039cfe */
L_17039CF8:
    eax = MEM32(esi); /* 0x17039CF8: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x17039CFA: push esi */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x17039CFB: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_17039CFE:
    esi = POP32_VAL(esp); /* 0x17039CFE: pop esi */
L_17039CFF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17039CFF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x17039D01: pop edi */
    ebp = POP32_VAL(esp); /* 0x17039D02: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x17039D03: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_17039D0B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17039D0Bu);

L_17039D0B:
    edi = edi; /* 0x17039D0B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17039D0D: push ebp */
    ebp = esp; /* 0x17039D0E: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x17039D10: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x17039D13: push esi */
    esi = MEM32(eax); /* 0x17039D14: mov esi, dword ptr [eax] */
    eax = MEM32(ebp + 0x8); /* 0x17039D16: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax); /* 0x17039D19: mov eax, dword ptr [eax] */
L_17039D1B:
    SET_LO8(edx, MEM8(eax)); /* 0x17039D1B: mov dl, byte ptr [eax] */
    SET_LO8(ecx, LO8(edx)); /* 0x17039D1D: mov cl, dl */
    /* cmp LO8(edx), MEM8(esi) */ /* 0x17039D1F: cmp dl, byte ptr [esi] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(esi)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17039D3D; /* 0x17039D21: jne 0x17039d3d */
L_17039D23:
    /* test LO8(ecx), LO8(ecx) */ /* 0x17039D23: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_17039D39; /* 0x17039D25: je 0x17039d39 */
L_17039D27:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x17039D27: mov dl, byte ptr [eax + 1] */
    SET_LO8(ecx, LO8(edx)); /* 0x17039D2A: mov cl, dl */
    /* cmp LO8(edx), MEM8(esi + 0x1) */ /* 0x17039D2C: cmp dl, byte ptr [esi + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(esi + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17039D3D; /* 0x17039D2F: jne 0x17039d3d */
L_17039D31:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17039D31: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17039D32: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x17039D33: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x17039D34: inc esi */
    _flag_k = FK_INC;
    /* test LO8(ecx), LO8(ecx) */ /* 0x17039D35: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17039D1B; /* 0x17039D37: jne 0x17039d1b */
L_17039D39:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17039D39: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_17039D42; /* 0x17039D3B: jmp 0x17039d42 */
L_17039D3D:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17039D3D: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17039D3F: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_17039D42:
    esi = POP32_VAL(esp); /* 0x17039D42: pop esi */
    ebp = POP32_VAL(esp); /* 0x17039D43: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x17039D44: ret  */
    RECOMP_REGS_OUT();
}

void sub_17039D4A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17039D4Au);

L_17039D4A:
    edi = edi; /* 0x17039D4A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17039D4C: push ebp */
    ebp = esp; /* 0x17039D4D: mov ebp, esp */
    PUSH32(esp, esi); /* 0x17039D4F: push esi */
    esi = MEM32(ebp + 0xC); /* 0x17039D50: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x17039D53: push edi */
    PUSH32(esp, 4); /* 0x17039D54: push 4 */
    ecx = POP32_VAL(esp); /* 0x17039D56: pop ecx */
    edi = 0x17001960u; /* 0x17039D57: mov edi, 0x17001960 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17039D5C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x17039D5E: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_17039D84; /* 0x17039D60: je 0x17039d84 */
L_17039D62:
    esi = MEM32(ebp + 0xC); /* 0x17039D62: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, 4); /* 0x17039D65: push 4 */
    ecx = POP32_VAL(esp); /* 0x17039D67: pop ecx */
    edi = 0x17001980u; /* 0x17039D68: mov edi, 0x17001980 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17039D6D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x17039D6F: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_17039D84; /* 0x17039D71: je 0x17039d84 */
L_17039D73:
    esi = MEM32(ebp + 0xC); /* 0x17039D73: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, 4); /* 0x17039D76: push 4 */
    ecx = POP32_VAL(esp); /* 0x17039D78: pop ecx */
    edi = 0x1702AA2Cu; /* 0x17039D79: mov edi, 0x1702aa2c */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17039D7E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x17039D80: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_17039D96; /* 0x17039D82: jne 0x17039d96 */
L_17039D84:
    eax = MEM32(ebp + 0x8); /* 0x17039D84: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0x10); /* 0x17039D87: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(ecx) = eax; /* 0x17039D8A: mov dword ptr [ecx], eax */
    ecx = MEM32(eax); /* 0x17039D8C: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x17039D8E: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x4)); /* 0x17039D8F: call dword ptr [ecx + 4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17039D92: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_17039D9B; /* 0x17039D94: jmp 0x17039d9b */
L_17039D96:
    eax = 0x80004002u; /* 0x17039D96: mov eax, 0x80004002 */
L_17039D9B:
    edi = POP32_VAL(esp); /* 0x17039D9B: pop edi */
    esi = POP32_VAL(esp); /* 0x17039D9C: pop esi */
    ebp = POP32_VAL(esp); /* 0x17039D9D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x17039D9E: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_17039DA6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17039DA6u);

L_17039DA6:
    edi = edi; /* 0x17039DA6: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17039DA8: push ebp */
    ebp = esp; /* 0x17039DA9: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x17039DAB: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(eax + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x10) = MEM32(eax + 0x10) + 1; /* 0x17039DAE: inc dword ptr [eax + 0x10] */
    _flag_k = FK_INC;
    eax = MEM32(eax + 0x10); /* 0x17039DB1: mov eax, dword ptr [eax + 0x10] */
    ebp = POP32_VAL(esp); /* 0x17039DB4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x17039DB5: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_17039DBD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17039DBDu);

L_17039DBD:
    edi = edi; /* 0x17039DBD: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17039DBF: push ebp */
    ebp = esp; /* 0x17039DC0: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x17039DC2: mov eax, dword ptr [ebp + 8] */
    fp_push(*(double*)ADDR(eax + 0x18)); /* 0x17039DC5: fld qword ptr [eax + 0x18] */
    ebp = POP32_VAL(esp); /* 0x17039DC8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x17039DC9: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_17039DD1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17039DD1u);

L_17039DD1:
    edi = edi; /* 0x17039DD1: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17039DD3: push ebp */
    ebp = esp; /* 0x17039DD4: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x17039DD6: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x38); /* 0x17039DD9: mov eax, dword ptr [eax + 0x38] */
    ebp = POP32_VAL(esp); /* 0x17039DDC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x17039DDD: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_17039DE5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17039DE5u);

L_17039DE5:
    edi = edi; /* 0x17039DE5: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17039DE7: push ebp */
    ebp = esp; /* 0x17039DE8: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x17039DEA: push dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0x8); /* 0x17039DED: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x17039DF0: push dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x17039DF3: add eax, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x17039DF6: push eax */
    RECOMP_CALL(sub_170402D2); /* 0x17039DF7: call 0x170402d2 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x17039DFC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x17039DFD: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_17039E05(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17039E05u);

L_17039E05:
    edi = edi; /* 0x17039E05: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17039E07: push ebp */
    ebp = esp; /* 0x17039E08: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x17039E0A: push dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0x8); /* 0x17039E0D: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x17039E10: push dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x17039E13: add eax, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x17039E16: push eax */
    RECOMP_CALL(sub_17040306); /* 0x17039E17: call 0x17040306 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x17039E1C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x17039E1D: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_17039E25(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17039E25u);

L_17039E25:
    edi = edi; /* 0x17039E25: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17039E27: push ebp */
    ebp = esp; /* 0x17039E28: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x17039E2A: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x17039E2D: push edi */
    edi = MEM32(ebp + 0xC); /* 0x17039E2E: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x17039E31: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17039E42; /* 0x17039E33: jne 0x17039e42 */
L_17039E35:
    /* cmp MEM32(eax + 0x2C), 0 */ /* 0x17039E35: cmp dword ptr [eax + 0x2c], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x2C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_17039E42; /* 0x17039E39: jbe 0x17039e42 */
L_17039E3B:
    eax = 0x8876086Cu; /* 0x17039E3B: mov eax, 0x8876086c */
    goto L_17039E5D; /* 0x17039E40: jmp 0x17039e5d */
L_17039E42:
    ecx = MEM32(eax + 0x2C); /* 0x17039E42: mov ecx, dword ptr [eax + 0x2c] */
    if (3u) _cf = (((ecx) >> 29) & 1u); /* 0x17039E45: shl ecx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((ecx << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 3u; /* 0x17039E45: shl ecx, 3 */
    PUSH32(esp, esi); /* 0x17039E48: push esi */
    esi = MEM32(eax + 0x30); /* 0x17039E49: mov esi, dword ptr [eax + 0x30] */
    eax = ecx; /* 0x17039E4C: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x17039E4E: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x17039E4E: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x17039E51: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x17039E53: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x17039E55: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x17039E58: rep movsb byte ptr es:[edi], byte ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17039E5A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x17039E5C: pop esi */
L_17039E5D:
    edi = POP32_VAL(esp); /* 0x17039E5D: pop edi */
    ebp = POP32_VAL(esp); /* 0x17039E5E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x17039E5F: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_17039E67(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17039E67u);

L_17039E67:
    edi = edi; /* 0x17039E67: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17039E69: push ebp */
    ebp = esp; /* 0x17039E6A: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x17039E6C: push dword ptr [ebp + 0x1c] */
    fp_push(*(double*)ADDR(ebp + 0xC)); /* 0x17039E6F: fld qword ptr [ebp + 0xc] */
    eax = MEM32(ebp + 0x8); /* 0x17039E72: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x17039E75: push dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x17039E78: add eax, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x17039E7B: push dword ptr [ebp + 0x14] */
    PUSH32(esp, ecx); /* 0x17039E7E: push ecx */
    PUSH32(esp, ecx); /* 0x17039E7F: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x17039E80: fstp qword ptr [esp] */
    PUSH32(esp, eax); /* 0x17039E83: push eax */
    RECOMP_CALL(sub_170403AE); /* 0x17039E84: call 0x170403ae */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x17039E89: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x17039E8A: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_17039E92(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17039E92u);

L_17039E92:
    edi = edi; /* 0x17039E92: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17039E94: push ebp */
    ebp = esp; /* 0x17039E95: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x17039E97: push ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x17039E98: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x17039E9C: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x17039E9D: mov ebx, dword ptr [ebp + 0xc] */
    /* test ebx, ebx */ /* 0x17039EA0: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17039EAD; /* 0x17039EA2: jne 0x17039ead */
L_17039EA4:
    MEM32(ebp + 0xC) = 0x8876086Cu; /* 0x17039EA4: mov dword ptr [ebp + 0xc], 0x8876086c */
    goto L_17039F02; /* 0x17039EAB: jmp 0x17039f02 */
L_17039EAD:
    PUSH32(esp, esi); /* 0x17039EAD: push esi */
    esi = MEM32(ebp + 0x8); /* 0x17039EAE: mov esi, dword ptr [ebp + 8] */
    eax = ebp + (-0x4); /* 0x17039EB1: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x17039EB4: push eax */
    PUSH32(esp, MEM32(esi + 0x48)); /* 0x17039EB5: push dword ptr [esi + 0x48] */
    RECOMP_CALL(sub_1702BAA3); /* 0x17039EB8: call 0x1702baa3 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17039EBD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0xC) = eax; /* 0x17039EBF: mov dword ptr [ebp + 0xc], eax */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17039EF4; /* 0x17039EC2: jl 0x17039ef4 */
L_17039EC4:
    eax = MEM32(esi + 0x48); /* 0x17039EC4: mov eax, dword ptr [esi + 0x48] */
    esi = MEM32(esi + 0x4C); /* 0x17039EC7: mov esi, dword ptr [esi + 0x4c] */
    MEM32(ebp + 0x8) = eax; /* 0x17039ECA: mov dword ptr [ebp + 8], eax */
    eax = MEM32(ebp + (-0x4)); /* 0x17039ECD: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(eax); /* 0x17039ED0: mov ecx, dword ptr [eax] */
    PUSH32(esp, edi); /* 0x17039ED2: push edi */
    PUSH32(esp, eax); /* 0x17039ED3: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xC)); /* 0x17039ED4: call dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x17039ED7: mov edi, eax */
    eax = MEM32(ebp + 0x8); /* 0x17039ED9: mov eax, dword ptr [ebp + 8] */
    ecx = eax; /* 0x17039EDC: mov ecx, eax */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x17039EDE: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x17039EDE: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x17039EE1: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x17039EE3: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x17039EE5: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x17039EE8: rep movsb byte ptr es:[edi], byte ptr [esi] */
    eax = MEM32(ebp + (-0x4)); /* 0x17039EEA: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x17039EED: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebx) = eax; /* 0x17039EF1: mov dword ptr [ebx], eax */
    edi = POP32_VAL(esp); /* 0x17039EF3: pop edi */
L_17039EF4:
    eax = MEM32(ebp + (-0x4)); /* 0x17039EF4: mov eax, dword ptr [ebp - 4] */
    /* test eax, eax */ /* 0x17039EF7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x17039EF9: pop esi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17039F02; /* 0x17039EFA: je 0x17039f02 */
L_17039EFC:
    ecx = MEM32(eax); /* 0x17039EFC: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x17039EFE: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x17039EFF: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
L_17039F02:
    eax = MEM32(ebp + 0xC); /* 0x17039F02: mov eax, dword ptr [ebp + 0xc] */
    ebx = POP32_VAL(esp); /* 0x17039F05: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17039F06: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x17039F07: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_17039F0F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17039F0Fu);

L_17039F0F:
    edi = edi; /* 0x17039F0F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17039F11: push ebp */
    ebp = esp; /* 0x17039F12: mov ebp, esp */
    eax = MEM32(ebp + 0x10); /* 0x17039F14: mov eax, dword ptr [ebp + 0x10] */
    ecx = MEM32(ebp + 0xC); /* 0x17039F17: mov ecx, dword ptr [ebp + 0xc] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax); /* 0x17039F1A: imul ecx, eax */
    PUSH32(esp, edi); /* 0x17039F1D: push edi */
    edi = MEM32(ebp + 0x8); /* 0x17039F1E: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + ecx; /* 0x17039F21: add edi, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x17039F23: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_S(_flag_a, _flag_b)) goto L_17039F36; /* 0x17039F24: js 0x17039f36 */
L_17039F26:
    PUSH32(esp, esi); /* 0x17039F26: push esi */
    esi = eax + 0x1; /* 0x17039F27: lea esi, [eax + 1] */
L_17039F2A:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - MEM32(ebp + 0xC); /* 0x17039F2A: sub edi, dword ptr [ebp + 0xc] */
    _flag_k = FK_CMP;
    ecx = edi; /* 0x17039F2D: mov ecx, edi */
    RECOMP_ICALL(MEM32(ebp + 0x14)); /* 0x17039F2F: call dword ptr [ebp + 0x14] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x17039F32: dec esi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_17039F2A; /* 0x17039F33: jne 0x17039f2a */
L_17039F35:
    esi = POP32_VAL(esp); /* 0x17039F35: pop esi */
L_17039F36:
    edi = POP32_VAL(esp); /* 0x17039F36: pop edi */
    ebp = POP32_VAL(esp); /* 0x17039F37: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x17039F38: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_17039F40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17039F40u);

L_17039F40:
    edi = edi; /* 0x17039F40: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17039F42: push ebp */
    ebp = esp; /* 0x17039F43: mov ebp, esp */
    /* test MEM8(ebp + 0x8), 2 */ /* 0x17039F45: test byte ptr [ebp + 8], 2 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, edi); /* 0x17039F49: push edi */
    edi = ecx; /* 0x17039F4A: mov edi, ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17039F73; /* 0x17039F4C: je 0x17039f73 */
L_17039F4E:
    PUSH32(esp, esi); /* 0x17039F4E: push esi */
    PUSH32(esp, 0x1703A697u); /* 0x17039F4F: push 0x1703a697 */
    esi = edi + (-0x4); /* 0x17039F54: lea esi, [edi - 4] */
    PUSH32(esp, MEM32(esi)); /* 0x17039F57: push dword ptr [esi] */
    PUSH32(esp, 0x44u); /* 0x17039F59: push 0x44 */
    PUSH32(esp, edi); /* 0x17039F5B: push edi */
    RECOMP_CALL(sub_17039F0F); /* 0x17039F5C: call 0x17039f0f */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x17039F61: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_17039F6E; /* 0x17039F65: je 0x17039f6e */
L_17039F67:
    PUSH32(esp, esi); /* 0x17039F67: push esi */
    RECOMP_CALL(sub_1721B010); /* 0x17039F68: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x17039F6D: pop ecx */
L_17039F6E:
    eax = esi; /* 0x17039F6E: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x17039F70: pop esi */
    goto L_17039F89; /* 0x17039F71: jmp 0x17039f89 */
L_17039F73:
    ecx = edi; /* 0x17039F73: mov ecx, edi */
    RECOMP_CALL(sub_1703A697); /* 0x17039F75: call 0x1703a697 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x17039F7A: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_17039F87; /* 0x17039F7E: je 0x17039f87 */
L_17039F80:
    PUSH32(esp, edi); /* 0x17039F80: push edi */
    RECOMP_CALL(sub_1721B010); /* 0x17039F81: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x17039F86: pop ecx */
L_17039F87:
    eax = edi; /* 0x17039F87: mov eax, edi */
L_17039F89:
    edi = POP32_VAL(esp); /* 0x17039F89: pop edi */
    ebp = POP32_VAL(esp); /* 0x17039F8A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x17039F8B: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_17039F93(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17039F93u);

L_17039F93:
    edi = edi; /* 0x17039F93: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17039F95: push ebp */
    ebp = esp; /* 0x17039F96: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x44u; /* 0x17039F98: sub esp, 0x44 */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x8); /* 0x17039F9B: mov eax, dword ptr [ebp + 8] */
    fp_push(0.0); /* 0x17039F9E: fldz  */
    PUSH32(esp, ebx); /* 0x17039FA0: push ebx */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x17039FA1: fstp dword ptr [ebp - 0xc] */
    ebx = ecx; /* 0x17039FA4: mov ebx, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x17039FA6: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ecx */ /* 0x17039FA8: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x17039FAA: push esi */
    PUSH32(esp, edi); /* 0x17039FAB: push edi */
    MEM32(ebp + (-0x4)) = ecx; /* 0x17039FAC: mov dword ptr [ebp - 4], ecx */
    MEM32(ebp + (-0x8)) = ecx; /* 0x17039FAF: mov dword ptr [ebp - 8], ecx */
    MEM32(ebp + (-0x20)) = ecx; /* 0x17039FB2: mov dword ptr [ebp - 0x20], ecx */
    MEM32(ebp + (-0x10)) = ecx; /* 0x17039FB5: mov dword ptr [ebp - 0x10], ecx */
    MEM32(ebp + (-0x14)) = ecx; /* 0x17039FB8: mov dword ptr [ebp - 0x14], ecx */
    MEM32(ebp + (-0x24)) = ecx; /* 0x17039FBB: mov dword ptr [ebp - 0x24], ecx */
    MEM32(ebp + (-0x18)) = ecx; /* 0x17039FBE: mov dword ptr [ebp - 0x18], ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17039FF9; /* 0x17039FC1: je 0x17039ff9 */
L_17039FC3:
    edx = eax + 0x1; /* 0x17039FC3: lea edx, [eax + 1] */
L_17039FC6:
    SET_LO8(ecx, MEM8(eax)); /* 0x17039FC6: mov cl, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17039FC8: inc eax */
    _flag_k = FK_INC;
    /* test LO8(ecx), LO8(ecx) */ /* 0x17039FC9: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17039FC6; /* 0x17039FCB: jne 0x17039fc6 */
L_17039FCD:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x17039FCD: sub eax, edx */
    _flag_k = FK_CMP;
    esi = eax + 0x1; /* 0x17039FCF: lea esi, [eax + 1] */
    PUSH32(esp, esi); /* 0x17039FD2: push esi */
    RECOMP_CALL(sub_1721B01C); /* 0x17039FD3: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x17039FD8: mov edi, eax */
    /* test edi, edi */ /* 0x17039FDA: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x17039FDC: pop ecx */
    MEM32(ebp + (-0x20)) = edi; /* 0x17039FDD: mov dword ptr [ebp - 0x20], edi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703A36B; /* 0x17039FE0: je 0x1703a36b */
L_17039FE6:
    ecx = esi; /* 0x17039FE6: mov ecx, esi */
    esi = MEM32(ebp + 0x8); /* 0x17039FE8: mov esi, dword ptr [ebp + 8] */
    eax = ecx; /* 0x17039FEB: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x17039FED: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x17039FED: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x17039FF0: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x17039FF2: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x17039FF4: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x17039FF7: rep movsb byte ptr es:[edi], byte ptr [esi] */
L_17039FF9:
    eax = MEM32(ebp + 0x20); /* 0x17039FF9: mov eax, dword ptr [ebp + 0x20] */
    /* test eax, eax */ /* 0x17039FFC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703A046; /* 0x17039FFE: jbe 0x1703a046 */
L_1703A000:
    esi = eax; /* 0x1703A000: mov esi, eax */
    if (3u) _cf = (((esi) >> 29) & 1u); /* 0x1703A002: shl esi, 3 */
    if (3u) { _flag_a = recomp_flags_pack((esi << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 3u; /* 0x1703A002: shl esi, 3 */
    PUSH32(esp, esi); /* 0x1703A005: push esi */
    RECOMP_CALL(sub_1721B01C); /* 0x1703A006: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1703A00B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1703A00D: pop ecx */
    MEM32(ebp + (-0x24)) = eax; /* 0x1703A00E: mov dword ptr [ebp - 0x24], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703A36B; /* 0x1703A011: je 0x1703a36b */
L_1703A017:
    ecx = esi; /* 0x1703A017: mov ecx, esi */
    fp_push(0.0); /* 0x1703A019: fldz  */
    esi = MEM32(ebp + 0x24); /* 0x1703A01B: mov esi, dword ptr [ebp + 0x24] */
    edx = ecx; /* 0x1703A01E: mov edx, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1703A020: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1703A020: shr ecx, 2 */
    edi = eax; /* 0x1703A023: mov edi, eax */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1703A025: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = edx; /* 0x1703A027: mov ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1703A029: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x1703A02C: rep movsb byte ptr es:[edi], byte ptr [esi] */
    ecx = MEM32(ebp + 0x20); /* 0x1703A02E: mov ecx, dword ptr [ebp + 0x20] */
    if (3u) _cf = (((ecx) >> 29) & 1u); /* 0x1703A031: shl ecx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((ecx << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 3u; /* 0x1703A031: shl ecx, 3 */
    ecx = ecx + eax + (-0x8); /* 0x1703A034: lea ecx, [ecx + eax - 8] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ecx)); /* 0x1703A038: fcomp dword ptr [ecx] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1703A03A: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1703A03C: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703A046; /* 0x1703A03F: je 0x1703a046 */
L_1703A041:
    eax = MEM32(ecx); /* 0x1703A041: mov eax, dword ptr [ecx] */
    MEM32(ebp + (-0xC)) = eax; /* 0x1703A043: mov dword ptr [ebp - 0xc], eax */
L_1703A046:
    /* cmp MEM32(ebp + 0x1C), 0 */ /* 0x1703A046: cmp dword ptr [ebp + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1703A058; /* 0x1703A04A: jne 0x1703a058 */
L_1703A04C:
    MEM32(ebp + (-0x4)) = 0x8876086Cu; /* 0x1703A04C: mov dword ptr [ebp - 4], 0x8876086c */
    goto L_1703A372; /* 0x1703A053: jmp 0x1703a372 */
L_1703A058:
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1703A058: push dword ptr [ebp + 0x1c] */
    RECOMP_CALL(sub_1721B01C); /* 0x1703A05B: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1703A060: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1703A062: pop ecx */
    MEM32(ebp + (-0x8)) = eax; /* 0x1703A063: mov dword ptr [ebp - 8], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703A36B; /* 0x1703A066: je 0x1703a36b */
L_1703A06C:
    ecx = MEM32(ebp + 0x1C); /* 0x1703A06C: mov ecx, dword ptr [ebp + 0x1c] */
    esi = MEM32(ebp + 0x18); /* 0x1703A06F: mov esi, dword ptr [ebp + 0x18] */
    edx = ecx; /* 0x1703A072: mov edx, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1703A074: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1703A074: shr ecx, 2 */
    edi = eax; /* 0x1703A077: mov edi, eax */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1703A079: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = edx; /* 0x1703A07B: mov ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1703A07D: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 8); /* 0x1703A080: push 8 */
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x1703A082: rep movsb byte ptr es:[edi], byte ptr [esi] */
    edi = POP32_VAL(esp); /* 0x1703A084: pop edi */
    /* cmp edx, edi */ /* 0x1703A085: cmp edx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1703A04C; /* 0x1703A087: jb 0x1703a04c */
L_1703A089:
    esi = MEM32(eax); /* 0x1703A089: mov esi, dword ptr [eax] */
    /* test esi, esi */ /* 0x1703A08B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x1703A08D: mov eax, dword ptr [eax + 4] */
    MEM32(ebp + (-0x44)) = esi; /* 0x1703A090: mov dword ptr [ebp - 0x44], esi */
    MEM32(ebp + (-0x34)) = eax; /* 0x1703A093: mov dword ptr [ebp - 0x34], eax */
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703A04C; /* 0x1703A096: je 0x1703a04c */
L_1703A098:
    eax = esi; /* 0x1703A098: mov eax, esi */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1703A09A: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1703A09A: shl eax, 2 */
    PUSH32(esp, eax); /* 0x1703A09D: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1703A09E: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1703A0A3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1703A0A5: pop ecx */
    MEM32(ebp + (-0x18)) = eax; /* 0x1703A0A6: mov dword ptr [ebp - 0x18], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703A36B; /* 0x1703A0A9: je 0x1703a36b */
L_1703A0AF:
    eax = esi; /* 0x1703A0AF: mov eax, esi */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x44u); /* 0x1703A0B1: imul eax, eax, 0x44 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1703A0B4: add eax, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1703A0B7: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1703A0B8: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1703A0BD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1703A0BF: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703A0E0; /* 0x1703A0C0: je 0x1703a0e0 */
L_1703A0C2:
    PUSH32(esp, 0x1703A656u); /* 0x1703A0C2: push 0x1703a656 */
    PUSH32(esp, esi); /* 0x1703A0C7: push esi */
    MEM32(eax) = esi; /* 0x1703A0C8: mov dword ptr [eax], esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1703A0CA: add eax, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0x44u); /* 0x1703A0CD: push 0x44 */
    PUSH32(esp, eax); /* 0x1703A0CF: push eax */
    MEM32(ebp + 0x8) = eax; /* 0x1703A0D0: mov dword ptr [ebp + 8], eax */
    RECOMP_CALL(sub_1702C116); /* 0x1703A0D3: call 0x1702c116 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1703A0D8: mov eax, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x10)) = eax; /* 0x1703A0DB: mov dword ptr [ebp - 0x10], eax */
    goto L_1703A0E4; /* 0x1703A0DE: jmp 0x1703a0e4 */
L_1703A0E0:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & 0; /* 0x1703A0E0: and dword ptr [ebp - 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1703A0E4:
    /* cmp MEM32(ebp + (-0x10)), 0 */ /* 0x1703A0E4: cmp dword ptr [ebp - 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703A36B; /* 0x1703A0E8: je 0x1703a36b */
L_1703A0EE:
    eax = esi; /* 0x1703A0EE: mov eax, esi */
    if (3u) _cf = (((eax) >> 29) & 1u); /* 0x1703A0F0: shl eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 3u; /* 0x1703A0F0: shl eax, 3 */
    PUSH32(esp, eax); /* 0x1703A0F3: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1703A0F4: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1703A0F9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1703A0FB: pop ecx */
    MEM32(ebp + (-0x14)) = eax; /* 0x1703A0FC: mov dword ptr [ebp - 0x14], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703A36B; /* 0x1703A0FF: je 0x1703a36b */
L_1703A105:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x3C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x3C)) = MEM32(ebp + (-0x3C)) & 0; /* 0x1703A105: and dword ptr [ebp - 0x3c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x1703A109: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703A2D0; /* 0x1703A10B: jbe 0x1703a2d0 */
L_1703A111:
    ecx = MEM32(ebp + (-0x10)); /* 0x1703A111: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x10u; /* 0x1703A114: add ecx, 0x10 */
    _flag_k = FK_ADD;
    goto L_1703A11C; /* 0x1703A117: jmp 0x1703a11c */
L_1703A119:
    edi = MEM32(ebp + (-0x1C)); /* 0x1703A119: mov edi, dword ptr [ebp - 0x1c] */
L_1703A11C:
    eax = edi + 0x10; /* 0x1703A11C: lea eax, [edi + 0x10] */
    /* cmp MEM32(ebp + 0x1C), eax */ /* 0x1703A11F: cmp dword ptr [ebp + 0x1c], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1703A04C; /* 0x1703A122: jb 0x1703a04c */
L_1703A128:
    eax = MEM32(ebp + (-0x8)); /* 0x1703A128: mov eax, dword ptr [ebp - 8] */
    edx = MEM32(edi + eax); /* 0x1703A12B: mov edx, dword ptr [edi + eax] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x1703A12E: add edi, 4 */
    _flag_k = FK_ADD;
    esi = MEM32(edi + eax); /* 0x1703A131: mov esi, dword ptr [edi + eax] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x1703A134: add edi, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = esi; /* 0x1703A137: mov dword ptr [ebp + 8], esi */
    esi = MEM32(edi + eax); /* 0x1703A13A: mov esi, dword ptr [edi + eax] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x1703A13D: add edi, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x24) = esi; /* 0x1703A140: mov dword ptr [ebp + 0x24], esi */
    esi = MEM32(edi + eax); /* 0x1703A143: mov esi, dword ptr [edi + eax] */
    MEM32(ebp + 0x18) = esi; /* 0x1703A146: mov dword ptr [ebp + 0x18], esi */
    esi = MEM32(ebp + (-0x34)); /* 0x1703A149: mov esi, dword ptr [ebp - 0x34] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x1703A14C: add edi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edx; /* 0x1703A14F: add esi, edx */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + 0x1C), esi */ /* 0x1703A151: cmp dword ptr [ebp + 0x1c], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x1C)) = edi; /* 0x1703A154: mov dword ptr [ebp - 0x1c], edi */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1703A04C; /* 0x1703A157: jb 0x1703a04c */
L_1703A15D:
    esi = MEM32(ebp + (-0x34)); /* 0x1703A15D: mov esi, dword ptr [ebp - 0x34] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + esi; /* 0x1703A160: add edx, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x1703A162: add edx, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1703A164: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, MEM32(ebp + 0x8) */ /* 0x1703A166: cmp eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x40)) = edx; /* 0x1703A169: mov dword ptr [ebp - 0x40], edx */
    { uint32_t _sa = esi, _sb = esi, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1703A16C: sbb esi, esi */
      esi = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(esi);
    _cf = (esi) != 0;
    esi = (uint32_t)(-(int32_t)esi); /* 0x1703A16E: neg esi */
    _flag_k = FK_CMP;
    /* cmp eax, MEM32(ebp + 0x24) */ /* 0x1703A170: cmp eax, dword ptr [ebp + 0x24] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x24));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1703A173: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1703A175: neg eax */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x38)) = eax; /* 0x1703A177: mov dword ptr [ebp - 0x38], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1703A17A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, MEM32(ebp + 0x18) */ /* 0x1703A17C: cmp eax, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x18));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { uint32_t _sa = edx, _sb = edx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1703A17F: sbb edx, edx */
      edx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(edx);
    _cf = (edx) != 0;
    edx = (uint32_t)(-(int32_t)edx); /* 0x1703A181: neg edx */
    _flag_k = FK_CMP;
    /* test esi, esi */ /* 0x1703A183: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703A19C; /* 0x1703A185: je 0x1703a19c */
L_1703A187:
    eax = MEM32(ebp + (-0x8)); /* 0x1703A187: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x1703A18A: add eax, edi */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x28)) = eax; /* 0x1703A18C: mov dword ptr [ebp - 0x28], eax */
    eax = MEM32(ebp + 0x8); /* 0x1703A18F: mov eax, dword ptr [ebp + 8] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x1703A192: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x1703A192: shl eax, 4 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x1703A195: add edi, eax */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x1C)) = edi; /* 0x1703A197: mov dword ptr [ebp - 0x1c], edi */
    goto L_1703A1AA; /* 0x1703A19A: jmp 0x1703a1aa */
L_1703A19C:
    MEM32(ebp + 0x8) = 1; /* 0x1703A19C: mov dword ptr [ebp + 8], 1 */
    MEM32(ebp + (-0x28)) = 0x1723C91Cu; /* 0x1703A1A3: mov dword ptr [ebp - 0x28], 0x1723c91c */
L_1703A1AA:
    /* cmp MEM32(ebp + (-0x38)), 0 */ /* 0x1703A1AA: cmp dword ptr [ebp - 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x38))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703A1C6; /* 0x1703A1AE: je 0x1703a1c6 */
L_1703A1B0:
    eax = MEM32(ebp + (-0x8)); /* 0x1703A1B0: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x1703A1B3: add eax, edi */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x2C)) = eax; /* 0x1703A1B5: mov dword ptr [ebp - 0x2c], eax */
    eax = MEM32(ebp + 0x24); /* 0x1703A1B8: mov eax, dword ptr [ebp + 0x24] */
    eax = eax + eax * 4; /* 0x1703A1BB: lea eax, [eax + eax*4] */
    edi = edi + eax * 4; /* 0x1703A1BE: lea edi, [edi + eax*4] */
    MEM32(ebp + (-0x1C)) = edi; /* 0x1703A1C1: mov dword ptr [ebp - 0x1c], edi */
    goto L_1703A1D4; /* 0x1703A1C4: jmp 0x1703a1d4 */
L_1703A1C6:
    MEM32(ebp + 0x24) = 1; /* 0x1703A1C6: mov dword ptr [ebp + 0x24], 1 */
    MEM32(ebp + (-0x2C)) = 0x1723C92Cu; /* 0x1703A1CD: mov dword ptr [ebp - 0x2c], 0x1723c92c */
L_1703A1D4:
    /* test edx, edx */ /* 0x1703A1D4: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703A1ED; /* 0x1703A1D6: je 0x1703a1ed */
L_1703A1D8:
    eax = MEM32(ebp + (-0x8)); /* 0x1703A1D8: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x1703A1DB: add eax, edi */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x30)) = eax; /* 0x1703A1DD: mov dword ptr [ebp - 0x30], eax */
    eax = MEM32(ebp + 0x18); /* 0x1703A1E0: mov eax, dword ptr [ebp + 0x18] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x1703A1E3: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x1703A1E3: shl eax, 4 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x1703A1E6: add edi, eax */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x1C)) = edi; /* 0x1703A1E8: mov dword ptr [ebp - 0x1c], edi */
    goto L_1703A1FB; /* 0x1703A1EB: jmp 0x1703a1fb */
L_1703A1ED:
    MEM32(ebp + 0x18) = 1; /* 0x1703A1ED: mov dword ptr [ebp + 0x18], 1 */
    MEM32(ebp + (-0x30)) = 0x1723C940u; /* 0x1703A1F4: mov dword ptr [ebp - 0x30], 0x1723c940 */
L_1703A1FB:
    /* cmp MEM32(ebp + 0x1C), edi */ /* 0x1703A1FB: cmp dword ptr [ebp + 0x1c], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1703A04C; /* 0x1703A1FE: jb 0x1703a04c */
L_1703A204:
    eax = MEM32(ebp + 0x8); /* 0x1703A204: mov eax, dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x1703A207: fld dword ptr [ebp - 0xc] */
    edi = MEM32(ebp + (-0x28)); /* 0x1703A20A: mov edi, dword ptr [ebp - 0x28] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x1703A20D: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x1703A20D: shl eax, 4 */
    edi = eax + edi + (-0x10); /* 0x1703A210: lea edi, [eax + edi - 0x10] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(edi)); /* 0x1703A214: fcomp dword ptr [edi] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1703A216: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1703A218: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703A222; /* 0x1703A21B: je 0x1703a222 */
L_1703A21D:
    eax = MEM32(edi); /* 0x1703A21D: mov eax, dword ptr [edi] */
    MEM32(ebp + (-0xC)) = eax; /* 0x1703A21F: mov dword ptr [ebp - 0xc], eax */
L_1703A222:
    eax = MEM32(ebp + 0x24); /* 0x1703A222: mov eax, dword ptr [ebp + 0x24] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x1703A225: fld dword ptr [ebp - 0xc] */
    edi = MEM32(ebp + (-0x2C)); /* 0x1703A228: mov edi, dword ptr [ebp - 0x2c] */
    eax = eax + eax * 4; /* 0x1703A22B: lea eax, [eax + eax*4] */
    edi = edi + eax * 4 + (-0x14); /* 0x1703A22E: lea edi, [edi + eax*4 - 0x14] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(edi)); /* 0x1703A232: fcomp dword ptr [edi] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1703A234: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1703A236: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703A240; /* 0x1703A239: je 0x1703a240 */
L_1703A23B:
    eax = MEM32(edi); /* 0x1703A23B: mov eax, dword ptr [edi] */
    MEM32(ebp + (-0xC)) = eax; /* 0x1703A23D: mov dword ptr [ebp - 0xc], eax */
L_1703A240:
    eax = MEM32(ebp + 0x18); /* 0x1703A240: mov eax, dword ptr [ebp + 0x18] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x1703A243: fld dword ptr [ebp - 0xc] */
    edi = MEM32(ebp + (-0x30)); /* 0x1703A246: mov edi, dword ptr [ebp - 0x30] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x1703A249: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x1703A249: shl eax, 4 */
    edi = eax + edi + (-0x10); /* 0x1703A24C: lea edi, [eax + edi - 0x10] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(edi)); /* 0x1703A250: fcomp dword ptr [edi] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1703A252: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1703A254: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703A25E; /* 0x1703A257: je 0x1703a25e */
L_1703A259:
    eax = MEM32(edi); /* 0x1703A259: mov eax, dword ptr [edi] */
    MEM32(ebp + (-0xC)) = eax; /* 0x1703A25B: mov dword ptr [ebp - 0xc], eax */
L_1703A25E:
    eax = MEM32(ebp + 0x8); /* 0x1703A25E: mov eax, dword ptr [ebp + 8] */
    MEM32(ecx + (-0xC)) = eax; /* 0x1703A261: mov dword ptr [ecx - 0xc], eax */
    eax = MEM32(ebp + (-0x28)); /* 0x1703A264: mov eax, dword ptr [ebp - 0x28] */
    MEM32(ecx) = eax; /* 0x1703A267: mov dword ptr [ecx], eax */
    eax = MEM32(ebp + 0x24); /* 0x1703A269: mov eax, dword ptr [ebp + 0x24] */
    MEM32(ecx + (-0x8)) = eax; /* 0x1703A26C: mov dword ptr [ecx - 8], eax */
    eax = MEM32(ebp + (-0x2C)); /* 0x1703A26F: mov eax, dword ptr [ebp - 0x2c] */
    edi = MEM32(ebp + (-0x40)); /* 0x1703A272: mov edi, dword ptr [ebp - 0x40] */
    MEM32(ecx + 0x4) = eax; /* 0x1703A275: mov dword ptr [ecx + 4], eax */
    eax = MEM32(ebp + (-0x38)); /* 0x1703A278: mov eax, dword ptr [ebp - 0x38] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx & 1; /* 0x1703A27B: and edx, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x1703A27E: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (1u) _cf = (((edx) >> 31) & 1u); /* 0x1703A281: shl edx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((edx << 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 1u; /* 0x1703A281: shl edx, 1 */
    _flag_a = (uint32_t)((edx | eax)); _flag_b = (uint32_t)((edx | eax));
    edx = edx | eax; /* 0x1703A283: or edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx + 0x30); /* 0x1703A285: mov eax, dword ptr [ecx + 0x30] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFF0u);
    eax = eax & 0xFFFFFFF0u; /* 0x1703A288: and eax, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (1u) _cf = (((edx) >> 31) & 1u); /* 0x1703A28B: shl edx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((edx << 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 1u; /* 0x1703A28B: shl edx, 1 */
    _flag_a = (uint32_t)((edx | eax)); _flag_b = (uint32_t)((edx | eax));
    edx = edx | eax; /* 0x1703A28D: or edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + 0x18); /* 0x1703A28F: mov eax, dword ptr [ebp + 0x18] */
    MEM32(ecx + (-0x4)) = eax; /* 0x1703A292: mov dword ptr [ecx - 4], eax */
    eax = MEM32(ebp + (-0x30)); /* 0x1703A295: mov eax, dword ptr [ebp - 0x30] */
    MEM32(ecx + 0x8) = eax; /* 0x1703A298: mov dword ptr [ecx + 8], eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi & 1; /* 0x1703A29B: and esi, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1703A29E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edx | esi)); _flag_b = (uint32_t)((edx | esi));
    edx = edx | esi; /* 0x1703A2A0: or edx, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(ebp + (-0x44)); /* 0x1703A2A2: mov esi, dword ptr [ebp - 0x44] */
    MEM32(ecx + 0x24) = eax; /* 0x1703A2A5: mov dword ptr [ecx + 0x24], eax */
    MEM32(ecx + 0x28) = eax; /* 0x1703A2A8: mov dword ptr [ecx + 0x28], eax */
    MEM32(ecx + 0x2C) = eax; /* 0x1703A2AB: mov dword ptr [ecx + 0x2c], eax */
    eax = MEM32(ebp + (-0x3C)); /* 0x1703A2AE: mov eax, dword ptr [ebp - 0x3c] */
    MEM32(ecx + 0x30) = edx; /* 0x1703A2B1: mov dword ptr [ecx + 0x30], edx */
    edx = MEM32(ebp + (-0x14)); /* 0x1703A2B4: mov edx, dword ptr [ebp - 0x14] */
    MEM32(ecx + (-0x10)) = edi; /* 0x1703A2B7: mov dword ptr [ecx - 0x10], edi */
    MEM32(edx + eax * 8) = edi; /* 0x1703A2BA: mov dword ptr [edx + eax*8], edi */
    MEM32(edx + eax * 8 + 0x4) = eax; /* 0x1703A2BD: mov dword ptr [edx + eax*8 + 4], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1703A2C1: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x44u; /* 0x1703A2C2: add ecx, 0x44 */
    _flag_k = FK_ADD;
    /* cmp eax, esi */ /* 0x1703A2C5: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x3C)) = eax; /* 0x1703A2C7: mov dword ptr [ebp - 0x3c], eax */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1703A119; /* 0x1703A2CA: jb 0x1703a119 */
L_1703A2D0:
    eax = MEM32(ebp + 0x1C); /* 0x1703A2D0: mov eax, dword ptr [ebp + 0x1c] */
    edi = MEM32(ebp + (-0x8)); /* 0x1703A2D3: mov edi, dword ptr [ebp - 8] */
    PUSH32(esp, 0x17039D0Bu); /* 0x1703A2D6: push 0x17039d0b */
    PUSH32(esp, 8); /* 0x1703A2DB: push 8 */
    PUSH32(esp, esi); /* 0x1703A2DD: push esi */
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x1703A2DE: push dword ptr [ebp - 0x14] */
    MEM8(edi + eax + (-0x1)) = (uint8_t)(0); /* 0x1703A2E1: mov byte ptr [edi + eax - 1], 0 */
    RECOMP_CALL(sub_1721B12A); /* 0x1703A2E6: call 0x1721b12a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1703A2EB: add esp, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1703A2EE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x1703A2F0: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703A311; /* 0x1703A2F2: jbe 0x1703a311 */
L_1703A2F4:
    ecx = MEM32(ebp + (-0x14)); /* 0x1703A2F4: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x1703A2F7: add ecx, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = ecx; /* 0x1703A2FA: mov dword ptr [ebp + 8], ecx */
L_1703A2FD:
    ecx = MEM32(ebp + 0x8); /* 0x1703A2FD: mov ecx, dword ptr [ebp + 8] */
    ecx = MEM32(ecx); /* 0x1703A300: mov ecx, dword ptr [ecx] */
    edx = MEM32(ebp + (-0x18)); /* 0x1703A302: mov edx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + 8; /* 0x1703A305: add dword ptr [ebp + 8], 8 */
    _flag_k = FK_ADD;
    MEM32(edx + eax * 4) = ecx; /* 0x1703A309: mov dword ptr [edx + eax*4], ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1703A30C: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, esi */ /* 0x1703A30D: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1703A2FD; /* 0x1703A30F: jb 0x1703a2fd */
L_1703A311:
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x1703A311: fld dword ptr [ebp - 0xc] */
    _st[0] /= *(double*)ADDR(ebp + 0xC); /* 0x1703A314: fdiv qword ptr [ebp + 0xc] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x17001DA8)); /* 0x1703A317: fcom qword ptr [0x17001da8] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1703A31D: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1703A31F: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1703A328; /* 0x1703A322: jp 0x1703a328 */
L_1703A324:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1703A324: fstp st(0) */
    fp_push(1.0); /* 0x1703A326: fld1  */
L_1703A328:
    eax = MEM32(ebp + (-0x20)); /* 0x1703A328: mov eax, dword ptr [ebp - 0x20] */
    fp_push(*(double*)ADDR(ebp + 0xC)); /* 0x1703A32B: fld qword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(MEM32(ebx + 0x34)); _flag_b = (uint32_t)(0);
    MEM32(ebx + 0x34) = MEM32(ebx + 0x34) & 0; /* 0x1703A32E: and dword ptr [ebx + 0x34], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    { double _v = fp_pop(); *(double*)ADDR(ebx + 0x18) = _v; } /* 0x1703A332: fstp qword ptr [ebx + 0x18] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x1703A335: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebx + 0x14) = eax; /* 0x1703A339: mov dword ptr [ebx + 0x14], eax */
    { double _v = fp_pop(); *(double*)ADDR(ebx + 0x20) = _v; } /* 0x1703A33C: fstp qword ptr [ebx + 0x20] */
    eax = MEM32(ebp + (-0x10)); /* 0x1703A33F: mov eax, dword ptr [ebp - 0x10] */
    MEM32(ebx + 0x3C) = eax; /* 0x1703A342: mov dword ptr [ebx + 0x3c], eax */
    eax = MEM32(ebp + (-0x18)); /* 0x1703A345: mov eax, dword ptr [ebp - 0x18] */
    MEM32(ebx + 0x40) = eax; /* 0x1703A348: mov dword ptr [ebx + 0x40], eax */
    eax = MEM32(ebp + 0x14); /* 0x1703A34B: mov eax, dword ptr [ebp + 0x14] */
    MEM32(ebx + 0x28) = eax; /* 0x1703A34E: mov dword ptr [ebx + 0x28], eax */
    eax = MEM32(ebp + 0x20); /* 0x1703A351: mov eax, dword ptr [ebp + 0x20] */
    MEM32(ebx + 0x2C) = eax; /* 0x1703A354: mov dword ptr [ebx + 0x2c], eax */
    eax = MEM32(ebp + (-0x24)); /* 0x1703A357: mov eax, dword ptr [ebp - 0x24] */
    MEM32(ebx + 0x30) = eax; /* 0x1703A35A: mov dword ptr [ebx + 0x30], eax */
    eax = MEM32(ebp + 0x1C); /* 0x1703A35D: mov eax, dword ptr [ebp + 0x1c] */
    MEM32(ebx + 0x38) = esi; /* 0x1703A360: mov dword ptr [ebx + 0x38], esi */
    MEM32(ebx + 0x48) = eax; /* 0x1703A363: mov dword ptr [ebx + 0x48], eax */
    MEM32(ebx + 0x4C) = edi; /* 0x1703A366: mov dword ptr [ebx + 0x4c], edi */
    goto L_1703A3AC; /* 0x1703A369: jmp 0x1703a3ac */
L_1703A36B:
    MEM32(ebp + (-0x4)) = 0x8007000Eu; /* 0x1703A36B: mov dword ptr [ebp - 4], 0x8007000e */
L_1703A372:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1703A372: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x20)), esi */ /* 0x1703A374: cmp dword ptr [ebp - 0x20], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703A382; /* 0x1703A377: je 0x1703a382 */
L_1703A379:
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x1703A379: push dword ptr [ebp - 0x20] */
    RECOMP_CALL(sub_1721B010); /* 0x1703A37C: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1703A381: pop ecx */
L_1703A382:
    ecx = MEM32(ebp + (-0x10)); /* 0x1703A382: mov ecx, dword ptr [ebp - 0x10] */
    /* cmp ecx, esi */ /* 0x1703A385: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703A390; /* 0x1703A387: je 0x1703a390 */
L_1703A389:
    PUSH32(esp, 3); /* 0x1703A389: push 3 */
    RECOMP_CALL(sub_17039F40); /* 0x1703A38B: call 0x17039f40 */
    RECOMP_FLAGS_IN();
L_1703A390:
    /* cmp MEM32(ebp + (-0x18)), esi */ /* 0x1703A390: cmp dword ptr [ebp - 0x18], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703A39E; /* 0x1703A393: je 0x1703a39e */
L_1703A395:
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x1703A395: push dword ptr [ebp - 0x18] */
    RECOMP_CALL(sub_1721B010); /* 0x1703A398: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1703A39D: pop ecx */
L_1703A39E:
    /* cmp MEM32(ebp + (-0x24)), esi */ /* 0x1703A39E: cmp dword ptr [ebp - 0x24], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703A3AC; /* 0x1703A3A1: je 0x1703a3ac */
L_1703A3A3:
    PUSH32(esp, MEM32(ebp + (-0x24))); /* 0x1703A3A3: push dword ptr [ebp - 0x24] */
    RECOMP_CALL(sub_1721B010); /* 0x1703A3A6: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1703A3AB: pop ecx */
L_1703A3AC:
    /* cmp MEM32(ebp + (-0x14)), 0 */ /* 0x1703A3AC: cmp dword ptr [ebp - 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = POP32_VAL(esp); /* 0x1703A3B0: pop edi */
    esi = POP32_VAL(esp); /* 0x1703A3B1: pop esi */
    ebx = POP32_VAL(esp); /* 0x1703A3B2: pop ebx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703A3BE; /* 0x1703A3B3: je 0x1703a3be */
L_1703A3B5:
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x1703A3B5: push dword ptr [ebp - 0x14] */
    RECOMP_CALL(sub_1721B010); /* 0x1703A3B8: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1703A3BD: pop ecx */
L_1703A3BE:
    /* cmp MEM32(ebp + (-0x8)), 0 */ /* 0x1703A3BE: cmp dword ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703A3CD; /* 0x1703A3C2: je 0x1703a3cd */
L_1703A3C4:
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x1703A3C4: push dword ptr [ebp - 8] */
    RECOMP_CALL(sub_1721B010); /* 0x1703A3C7: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1703A3CC: pop ecx */
L_1703A3CD:
    eax = MEM32(ebp + (-0x4)); /* 0x1703A3CD: mov eax, dword ptr [ebp - 4] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1703A3D0: leave  */
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x1703A3D1: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_1703A3D9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1703A3D9u);

L_1703A3D9:
    edi = edi; /* 0x1703A3D9: mov edi, edi */
    PUSH32(esp, esi); /* 0x1703A3DB: push esi */
    esi = ecx; /* 0x1703A3DC: mov esi, ecx */
    eax = MEM32(esi + 0x14); /* 0x1703A3DE: mov eax, dword ptr [esi + 0x14] */
    PUSH32(esp, edi); /* 0x1703A3E1: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1703A3E2: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, edi */ /* 0x1703A3E4: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi) = 0x17001DC8u; /* 0x1703A3E6: mov dword ptr [esi], 0x17001dc8 */
    MEM32(esi + 0x8) = 0x17001E08u; /* 0x1703A3EC: mov dword ptr [esi + 8], 0x17001e08 */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703A3FF; /* 0x1703A3F3: je 0x1703a3ff */
L_1703A3F5:
    PUSH32(esp, eax); /* 0x1703A3F5: push eax */
    RECOMP_CALL(sub_1721B010); /* 0x1703A3F6: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1703A3FB: pop ecx */
    MEM32(esi + 0x14) = edi; /* 0x1703A3FC: mov dword ptr [esi + 0x14], edi */
L_1703A3FF:
    ecx = MEM32(esi + 0x3C); /* 0x1703A3FF: mov ecx, dword ptr [esi + 0x3c] */
    /* cmp ecx, edi */ /* 0x1703A402: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703A410; /* 0x1703A404: je 0x1703a410 */
L_1703A406:
    PUSH32(esp, 3); /* 0x1703A406: push 3 */
    RECOMP_CALL(sub_17039F40); /* 0x1703A408: call 0x17039f40 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x3C) = edi; /* 0x1703A40D: mov dword ptr [esi + 0x3c], edi */
L_1703A410:
    eax = MEM32(esi + 0x40); /* 0x1703A410: mov eax, dword ptr [esi + 0x40] */
    /* cmp eax, edi */ /* 0x1703A413: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703A421; /* 0x1703A415: je 0x1703a421 */
L_1703A417:
    PUSH32(esp, eax); /* 0x1703A417: push eax */
    RECOMP_CALL(sub_1721B010); /* 0x1703A418: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1703A41D: pop ecx */
    MEM32(esi + 0x40) = edi; /* 0x1703A41E: mov dword ptr [esi + 0x40], edi */
L_1703A421:
    eax = MEM32(esi + 0x30); /* 0x1703A421: mov eax, dword ptr [esi + 0x30] */
    /* cmp eax, edi */ /* 0x1703A424: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703A432; /* 0x1703A426: je 0x1703a432 */
L_1703A428:
    PUSH32(esp, eax); /* 0x1703A428: push eax */
    RECOMP_CALL(sub_1721B010); /* 0x1703A429: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1703A42E: pop ecx */
    MEM32(esi + 0x30) = edi; /* 0x1703A42F: mov dword ptr [esi + 0x30], edi */
L_1703A432:
    eax = MEM32(esi + 0x4C); /* 0x1703A432: mov eax, dword ptr [esi + 0x4c] */
    /* cmp eax, edi */ /* 0x1703A435: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703A443; /* 0x1703A437: je 0x1703a443 */
L_1703A439:
    PUSH32(esp, eax); /* 0x1703A439: push eax */
    RECOMP_CALL(sub_1721B010); /* 0x1703A43A: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1703A43F: pop ecx */
    MEM32(esi + 0x4C) = edi; /* 0x1703A440: mov dword ptr [esi + 0x4c], edi */
L_1703A443:
    edi = POP32_VAL(esp); /* 0x1703A443: pop edi */
    esi = POP32_VAL(esp); /* 0x1703A444: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1703A445: ret  */
    RECOMP_REGS_OUT();
}

void sub_1703A44B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1703A44Bu);

L_1703A44B:
    edi = edi; /* 0x1703A44B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1703A44D: push ebp */
    ebp = esp; /* 0x1703A44E: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1703A450: push esi */
    esi = ecx; /* 0x1703A451: mov esi, ecx */
    RECOMP_CALL(sub_1703A3D9); /* 0x1703A453: call 0x1703a3d9 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1703A458: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703A465; /* 0x1703A45C: je 0x1703a465 */
L_1703A45E:
    PUSH32(esp, esi); /* 0x1703A45E: push esi */
    RECOMP_CALL(sub_1721B010); /* 0x1703A45F: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1703A464: pop ecx */
L_1703A465:
    eax = esi; /* 0x1703A465: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1703A467: pop esi */
    ebp = POP32_VAL(esp); /* 0x1703A468: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1703A469: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1703A471(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1703A471u);

L_1703A471:
    eax = ecx; /* 0x1703A471: mov eax, ecx */
    fp_push(1.0); /* 0x1703A473: fld1  */
    MEM32(eax + 0x8) = 0x17001DB8u; /* 0x1703A475: mov dword ptr [eax + 8], 0x17001db8 */
    { double _v = fp_pop(); *(double*)ADDR(eax + 0x18) = _v; } /* 0x1703A47C: fstp qword ptr [eax + 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1703A47F: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    fp_push(1.0); /* 0x1703A481: fld1  */
    { double _v = fp_pop(); *(double*)ADDR(eax + 0x20) = _v; } /* 0x1703A483: fstp qword ptr [eax + 0x20] */
    MEM32(eax) = 0x17001DC8u; /* 0x1703A486: mov dword ptr [eax], 0x17001dc8 */
    MEM32(eax + 0x8) = 0x17001E08u; /* 0x1703A48C: mov dword ptr [eax + 8], 0x17001e08 */
    MEM32(eax + 0x10) = 1; /* 0x1703A493: mov dword ptr [eax + 0x10], 1 */
    MEM32(eax + 0x14) = ecx; /* 0x1703A49A: mov dword ptr [eax + 0x14], ecx */
    MEM32(eax + 0x4C) = ecx; /* 0x1703A49D: mov dword ptr [eax + 0x4c], ecx */
    MEM32(eax + 0x38) = ecx; /* 0x1703A4A0: mov dword ptr [eax + 0x38], ecx */
    MEM32(eax + 0x3C) = ecx; /* 0x1703A4A3: mov dword ptr [eax + 0x3c], ecx */
    MEM32(eax + 0x40) = ecx; /* 0x1703A4A6: mov dword ptr [eax + 0x40], ecx */
    MEM32(eax + 0x2C) = ecx; /* 0x1703A4A9: mov dword ptr [eax + 0x2c], ecx */
    MEM32(eax + 0x30) = ecx; /* 0x1703A4AC: mov dword ptr [eax + 0x30], ecx */
    MEM32(eax + 0x34) = ecx; /* 0x1703A4AF: mov dword ptr [eax + 0x34], ecx */
    MEM32(eax + 0x28) = ecx; /* 0x1703A4B2: mov dword ptr [eax + 0x28], ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1703A4B5: ret  */
    RECOMP_REGS_OUT();
}

void sub_1703A4BB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1703A4BBu);

L_1703A4BB:
    edi = edi; /* 0x1703A4BB: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1703A4BD: push ebp */
    ebp = esp; /* 0x1703A4BE: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x1703A4C0: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x10) = MEM32(ecx + 0x10) - 1; /* 0x1703A4C3: dec dword ptr [ecx + 0x10] */
    _flag_k = FK_DEC;
    eax = MEM32(ecx + 0x10); /* 0x1703A4C6: mov eax, dword ptr [ecx + 0x10] */
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1703A4D4; /* 0x1703A4C9: jne 0x1703a4d4 */
L_1703A4CB:
    PUSH32(esp, 1); /* 0x1703A4CB: push 1 */
    RECOMP_CALL(sub_1703A44B); /* 0x1703A4CD: call 0x1703a44b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1703A4D2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1703A4D4:
    ebp = POP32_VAL(esp); /* 0x1703A4D4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1703A4D5: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1703A4DD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1703A4DDu);

L_1703A4DD:
    edi = edi; /* 0x1703A4DD: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1703A4DF: push ebp */
    ebp = esp; /* 0x1703A4E0: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1703A4E2: push ebx */
    PUSH32(esp, esi); /* 0x1703A4E3: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1703A4E4: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1703A4E6: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x24), esi */ /* 0x1703A4E8: cmp dword ptr [ebp + 0x24], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x24)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x1703A4EB: push edi */
    ecx = 0x8876086Cu; /* 0x1703A4EC: mov ecx, 0x8876086c */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1703A4F5; /* 0x1703A4F1: jne 0x1703a4f5 */
L_1703A4F3:
    ebx = ecx; /* 0x1703A4F3: mov ebx, ecx */
L_1703A4F5:
    edi = MEM32(ebp + 0x18); /* 0x1703A4F5: mov edi, dword ptr [ebp + 0x18] */
    /* cmp edi, esi */ /* 0x1703A4F8: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1703A4FE; /* 0x1703A4FA: jne 0x1703a4fe */
L_1703A4FC:
    ebx = ecx; /* 0x1703A4FC: mov ebx, ecx */
L_1703A4FE:
    /* cmp MEM32(ebp + 0x20), esi */ /* 0x1703A4FE: cmp dword ptr [ebp + 0x20], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x20)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1703A50A; /* 0x1703A501: jne 0x1703a50a */
L_1703A503:
    /* cmp MEM32(ebp + 0x1C), esi */ /* 0x1703A503: cmp dword ptr [ebp + 0x1c], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1703A50A; /* 0x1703A506: jbe 0x1703a50a */
L_1703A508:
    ebx = ecx; /* 0x1703A508: mov ebx, ecx */
L_1703A50A:
    /* cmp MEM32(ebp + 0x14), esi */ /* 0x1703A50A: cmp dword ptr [ebp + 0x14], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703A51D; /* 0x1703A50D: je 0x1703a51d */
L_1703A50F:
    /* cmp MEM32(ebp + 0x14), 1 */ /* 0x1703A50F: cmp dword ptr [ebp + 0x14], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703A51D; /* 0x1703A513: je 0x1703a51d */
L_1703A515:
    /* cmp MEM32(ebp + 0x14), 2 */ /* 0x1703A515: cmp dword ptr [ebp + 0x14], 2 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703A51D; /* 0x1703A519: je 0x1703a51d */
L_1703A51B:
    ebx = ecx; /* 0x1703A51B: mov ebx, ecx */
L_1703A51D:
    fp_push(*(double*)ADDR(ebp + 0xC)); /* 0x1703A51D: fld qword ptr [ebp + 0xc] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x17001DA8)); /* 0x1703A520: fcomp qword ptr [0x17001da8] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1703A526: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1703A528: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1703A52F; /* 0x1703A52B: jp 0x1703a52f */
L_1703A52D:
    ebx = ecx; /* 0x1703A52D: mov ebx, ecx */
L_1703A52F:
    /* cmp ebx, esi */ /* 0x1703A52F: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1703A593; /* 0x1703A531: jl 0x1703a593 */
L_1703A533:
    PUSH32(esp, 0x50u); /* 0x1703A533: push 0x50 */
    RECOMP_CALL(sub_1721B01C); /* 0x1703A535: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* cmp eax, esi */ /* 0x1703A53A: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x1703A53C: pop ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703A548; /* 0x1703A53D: je 0x1703a548 */
L_1703A53F:
    ecx = eax; /* 0x1703A53F: mov ecx, eax */
    RECOMP_CALL(sub_1703A471); /* 0x1703A541: call 0x1703a471 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1703A546: mov esi, eax */
L_1703A548:
    /* test esi, esi */ /* 0x1703A548: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1703A553; /* 0x1703A54A: jne 0x1703a553 */
L_1703A54C:
    ebx = 0x8007000Eu; /* 0x1703A54C: mov ebx, 0x8007000e */
    goto L_1703A593; /* 0x1703A551: jmp 0x1703a593 */
L_1703A553:
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x1703A553: push dword ptr [ebp + 0x20] */
    eax = MEM32(edi); /* 0x1703A556: mov eax, dword ptr [edi] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1703A558: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, edi); /* 0x1703A55B: push edi */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x1703A55C: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1703A55F: push eax */
    eax = MEM32(edi); /* 0x1703A560: mov eax, dword ptr [edi] */
    PUSH32(esp, edi); /* 0x1703A562: push edi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x1703A563: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + 0xC)); /* 0x1703A566: fld qword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x1703A569: push eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1703A56A: push dword ptr [ebp + 0x14] */
    PUSH32(esp, ecx); /* 0x1703A56D: push ecx */
    PUSH32(esp, ecx); /* 0x1703A56E: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x1703A56F: fstp qword ptr [esp] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1703A572: push dword ptr [ebp + 8] */
    ecx = esi; /* 0x1703A575: mov ecx, esi */
    RECOMP_CALL(sub_17039F93); /* 0x1703A577: call 0x17039f93 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1703A57C: mov ebx, eax */
    /* test ebx, ebx */ /* 0x1703A57E: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1703A589; /* 0x1703A580: jl 0x1703a589 */
L_1703A582:
    eax = MEM32(ebp + 0x24); /* 0x1703A582: mov eax, dword ptr [ebp + 0x24] */
    MEM32(eax) = esi; /* 0x1703A585: mov dword ptr [eax], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1703A587: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1703A589:
    /* test esi, esi */ /* 0x1703A589: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703A593; /* 0x1703A58B: je 0x1703a593 */
L_1703A58D:
    eax = MEM32(esi); /* 0x1703A58D: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x1703A58F: push esi */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1703A590: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_1703A593:
    edi = POP32_VAL(esp); /* 0x1703A593: pop edi */
    esi = POP32_VAL(esp); /* 0x1703A594: pop esi */
    eax = ebx; /* 0x1703A595: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x1703A597: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1703A598: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x1703A599: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_1703A5A1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1703A5A1u);

L_1703A5A1:
    edi = edi; /* 0x1703A5A1: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1703A5A3: push ebp */
    ebp = esp; /* 0x1703A5A4: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1703A5A6: sub esp, 0x10 */
    _flag_k = FK_CMP;
    /* cmp ecx, eax */ /* 0x1703A5A9: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703A5D5; /* 0x1703A5AB: je 0x1703a5d5 */
L_1703A5AD:
    PUSH32(esp, esi); /* 0x1703A5AD: push esi */
    PUSH32(esp, edi); /* 0x1703A5AE: push edi */
    if (4u) _cf = (((ecx) >> 28) & 1u); /* 0x1703A5AF: shl ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ecx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 4u; /* 0x1703A5AF: shl ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x1703A5B2: add ecx, edx */
    _flag_k = FK_ADD;
    esi = ecx; /* 0x1703A5B4: mov esi, ecx */
    edi = ebp + (-0x10); /* 0x1703A5B6: lea edi, [ebp - 0x10] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703A5B9: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703A5BA: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703A5BB: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703A5BC: movsd dword ptr es:[edi], dword ptr [esi] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x1703A5BD: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x1703A5BD: shl eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1703A5C0: add eax, edx */
    _flag_k = FK_ADD;
    esi = eax; /* 0x1703A5C2: mov esi, eax */
    edi = ecx; /* 0x1703A5C4: mov edi, ecx */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703A5C6: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703A5C7: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703A5C8: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703A5C9: movsd dword ptr es:[edi], dword ptr [esi] */
    esi = ebp + (-0x10); /* 0x1703A5CA: lea esi, [ebp - 0x10] */
    edi = eax; /* 0x1703A5CD: mov edi, eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703A5CF: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703A5D0: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703A5D1: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703A5D2: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x1703A5D3: pop edi */
    esi = POP32_VAL(esp); /* 0x1703A5D4: pop esi */
L_1703A5D5:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1703A5D5: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1703A5D6: ret  */
    RECOMP_REGS_OUT();
}

void sub_1703A5DC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1703A5DCu);

L_1703A5DC:
    edi = edi; /* 0x1703A5DC: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1703A5DE: push ebp */
    ebp = esp; /* 0x1703A5DF: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x1703A5E1: sub esp, 0x18 */
    _flag_k = FK_CMP;
    /* cmp MEM32(ebp + 0x8), ebx */ /* 0x1703A5E4: cmp dword ptr [ebp + 8], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703A64D; /* 0x1703A5E7: je 0x1703a64d */
L_1703A5E9:
    ecx = MEM32(ebp + 0x8); /* 0x1703A5E9: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1703A5EC: push esi */
    PUSH32(esp, edi); /* 0x1703A5ED: push edi */
    if (4u) _cf = (((ecx) >> 28) & 1u); /* 0x1703A5EE: shl ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ecx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 4u; /* 0x1703A5EE: shl ecx, 4 */
    edi = ecx + eax; /* 0x1703A5F1: lea edi, [ecx + eax] */
    ecx = MEM32(edi + 0x4); /* 0x1703A5F4: mov ecx, dword ptr [edi + 4] */
    MEM32(ebp + (-0x4)) = edi; /* 0x1703A5F7: mov dword ptr [ebp - 4], edi */
    edi = MEM32(edi + 0x8); /* 0x1703A5FA: mov edi, dword ptr [edi + 8] */
    if (4u) _cf = (((edi) >> 28) & 1u); /* 0x1703A5FD: shl edi, 4 */
    if (4u) { _flag_a = recomp_flags_pack((edi << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 4u; /* 0x1703A5FD: shl edi, 4 */
    edx = ebx; /* 0x1703A600: mov edx, ebx */
    if (4u) _cf = (((edx) >> 28) & 1u); /* 0x1703A602: shl edx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((edx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 4u; /* 0x1703A602: shl edx, 4 */
    esi = edx + eax; /* 0x1703A605: lea esi, [edx + eax] */
    edx = MEM32(esi + 0x8); /* 0x1703A608: mov edx, dword ptr [esi + 8] */
    MEM32(ebp + (-0x8)) = esi; /* 0x1703A60B: mov dword ptr [ebp - 8], esi */
    esi = MEM32(esi + 0x4); /* 0x1703A60E: mov esi, dword ptr [esi + 4] */
    MEM32(edi + eax + 0x4) = ebx; /* 0x1703A611: mov dword ptr [edi + eax + 4], ebx */
    if (4u) _cf = (((ecx) >> 28) & 1u); /* 0x1703A615: shl ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ecx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 4u; /* 0x1703A615: shl ecx, 4 */
    MEM32(ecx + eax + 0x8) = ebx; /* 0x1703A618: mov dword ptr [ecx + eax + 8], ebx */
    ecx = MEM32(ebp + 0x8); /* 0x1703A61C: mov ecx, dword ptr [ebp + 8] */
    if (4u) _cf = (((edx) >> 28) & 1u); /* 0x1703A61F: shl edx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((edx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 4u; /* 0x1703A61F: shl edx, 4 */
    if (4u) _cf = (((esi) >> 28) & 1u); /* 0x1703A622: shl esi, 4 */
    if (4u) { _flag_a = recomp_flags_pack((esi << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 4u; /* 0x1703A622: shl esi, 4 */
    MEM32(edx + eax + 0x4) = ecx; /* 0x1703A625: mov dword ptr [edx + eax + 4], ecx */
    MEM32(esi + eax + 0x8) = ecx; /* 0x1703A629: mov dword ptr [esi + eax + 8], ecx */
    esi = MEM32(ebp + (-0x4)); /* 0x1703A62D: mov esi, dword ptr [ebp - 4] */
    edi = ebp + (-0x18); /* 0x1703A630: lea edi, [ebp - 0x18] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703A633: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703A634: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703A635: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703A636: movsd dword ptr es:[edi], dword ptr [esi] */
    esi = MEM32(ebp + (-0x8)); /* 0x1703A637: mov esi, dword ptr [ebp - 8] */
    edi = MEM32(ebp + (-0x4)); /* 0x1703A63A: mov edi, dword ptr [ebp - 4] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703A63D: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703A63E: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703A63F: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703A640: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = MEM32(ebp + (-0x8)); /* 0x1703A641: mov edi, dword ptr [ebp - 8] */
    esi = ebp + (-0x18); /* 0x1703A644: lea esi, [ebp - 0x18] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703A647: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703A648: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703A649: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703A64A: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x1703A64B: pop edi */
    esi = POP32_VAL(esp); /* 0x1703A64C: pop esi */
L_1703A64D:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1703A64D: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1703A64E: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1703A656(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1703A656u);

L_1703A656:
    eax = ecx; /* 0x1703A656: mov eax, ecx */
    _flag_a = (uint32_t)((MEM32(eax + 0x40) | 8)); _flag_b = (uint32_t)((MEM32(eax + 0x40) | 8));
    MEM32(eax + 0x40) = MEM32(eax + 0x40) | 8; /* 0x1703A658: or dword ptr [eax + 0x40], 8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1703A65C: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1703A65D: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 2); /* 0x1703A65F: push 2 */
    MEM32(eax) = edx; /* 0x1703A661: mov dword ptr [eax], edx */
    MEM32(eax + 0x10) = edx; /* 0x1703A663: mov dword ptr [eax + 0x10], edx */
    MEM32(eax + 0x14) = edx; /* 0x1703A666: mov dword ptr [eax + 0x14], edx */
    MEM32(eax + 0x18) = edx; /* 0x1703A669: mov dword ptr [eax + 0x18], edx */
    ecx = eax + 0x24; /* 0x1703A66C: lea ecx, [eax + 0x24] */
    esi = POP32_VAL(esp); /* 0x1703A66F: pop esi */
L_1703A670:
    MEM32(ecx + (-0x8)) = edx; /* 0x1703A670: mov dword ptr [ecx - 8], edx */
    MEM32(ecx) = edx; /* 0x1703A673: mov dword ptr [ecx], edx */
    MEM32(ecx + 0x8) = edx; /* 0x1703A675: mov dword ptr [ecx + 8], edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x1703A678: add ecx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1703A67B: dec esi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1703A670; /* 0x1703A67C: jne 0x1703a670 */
L_1703A67E:
    MEM32(eax + 0x4) = edx; /* 0x1703A67E: mov dword ptr [eax + 4], edx */
    MEM32(eax + 0x8) = edx; /* 0x1703A681: mov dword ptr [eax + 8], edx */
    MEM32(eax + 0xC) = edx; /* 0x1703A684: mov dword ptr [eax + 0xc], edx */
    MEM32(eax + 0x34) = edx; /* 0x1703A687: mov dword ptr [eax + 0x34], edx */
    MEM32(eax + 0x38) = edx; /* 0x1703A68A: mov dword ptr [eax + 0x38], edx */
    MEM32(eax + 0x3C) = edx; /* 0x1703A68D: mov dword ptr [eax + 0x3c], edx */
    esi = POP32_VAL(esp); /* 0x1703A690: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1703A691: ret  */
    RECOMP_REGS_OUT();
}

void sub_1703A697(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1703A697u);

L_1703A697:
    edi = edi; /* 0x1703A697: mov edi, edi */
    PUSH32(esp, esi); /* 0x1703A699: push esi */
    esi = ecx; /* 0x1703A69A: mov esi, ecx */
    /* test MEM8(esi + 0x40), 8 */ /* 0x1703A69C: test byte ptr [esi + 0x40], 8 */
    _flag_a = (uint32_t)(MEM8(esi + 0x40)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703A72B; /* 0x1703A6A0: je 0x1703a72b */
L_1703A6A6:
    eax = MEM32(esi); /* 0x1703A6A6: mov eax, dword ptr [esi] */
    PUSH32(esp, ebx); /* 0x1703A6A8: push ebx */
    PUSH32(esp, edi); /* 0x1703A6A9: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1703A6AA: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, edi */ /* 0x1703A6AC: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703A6B9; /* 0x1703A6AE: je 0x1703a6b9 */
L_1703A6B0:
    PUSH32(esp, eax); /* 0x1703A6B0: push eax */
    RECOMP_CALL(sub_1721B010); /* 0x1703A6B1: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1703A6B6: pop ecx */
    MEM32(esi) = edi; /* 0x1703A6B7: mov dword ptr [esi], edi */
L_1703A6B9:
    eax = MEM32(esi + 0x10); /* 0x1703A6B9: mov eax, dword ptr [esi + 0x10] */
    /* cmp eax, edi */ /* 0x1703A6BC: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703A6CA; /* 0x1703A6BE: je 0x1703a6ca */
L_1703A6C0:
    PUSH32(esp, eax); /* 0x1703A6C0: push eax */
    RECOMP_CALL(sub_1721B010); /* 0x1703A6C1: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1703A6C6: pop ecx */
    MEM32(esi + 0x10) = edi; /* 0x1703A6C7: mov dword ptr [esi + 0x10], edi */
L_1703A6CA:
    eax = MEM32(esi + 0x14); /* 0x1703A6CA: mov eax, dword ptr [esi + 0x14] */
    /* cmp eax, edi */ /* 0x1703A6CD: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703A6DB; /* 0x1703A6CF: je 0x1703a6db */
L_1703A6D1:
    PUSH32(esp, eax); /* 0x1703A6D1: push eax */
    RECOMP_CALL(sub_1721B010); /* 0x1703A6D2: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1703A6D7: pop ecx */
    MEM32(esi + 0x14) = edi; /* 0x1703A6D8: mov dword ptr [esi + 0x14], edi */
L_1703A6DB:
    eax = MEM32(esi + 0x18); /* 0x1703A6DB: mov eax, dword ptr [esi + 0x18] */
    /* cmp eax, edi */ /* 0x1703A6DE: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703A6EC; /* 0x1703A6E0: je 0x1703a6ec */
L_1703A6E2:
    PUSH32(esp, eax); /* 0x1703A6E2: push eax */
    RECOMP_CALL(sub_1721B010); /* 0x1703A6E3: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1703A6E8: pop ecx */
    MEM32(esi + 0x18) = edi; /* 0x1703A6E9: mov dword ptr [esi + 0x18], edi */
L_1703A6EC:
    PUSH32(esp, 2); /* 0x1703A6EC: push 2 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x24u; /* 0x1703A6EE: add esi, 0x24 */
    _flag_k = FK_ADD;
    ebx = POP32_VAL(esp); /* 0x1703A6F1: pop ebx */
L_1703A6F2:
    eax = MEM32(esi + (-0x8)); /* 0x1703A6F2: mov eax, dword ptr [esi - 8] */
    /* cmp eax, edi */ /* 0x1703A6F5: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703A703; /* 0x1703A6F7: je 0x1703a703 */
L_1703A6F9:
    PUSH32(esp, eax); /* 0x1703A6F9: push eax */
    RECOMP_CALL(sub_1721B010); /* 0x1703A6FA: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1703A6FF: pop ecx */
    MEM32(esi + (-0x8)) = edi; /* 0x1703A700: mov dword ptr [esi - 8], edi */
L_1703A703:
    eax = MEM32(esi); /* 0x1703A703: mov eax, dword ptr [esi] */
    /* cmp eax, edi */ /* 0x1703A705: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703A712; /* 0x1703A707: je 0x1703a712 */
L_1703A709:
    PUSH32(esp, eax); /* 0x1703A709: push eax */
    RECOMP_CALL(sub_1721B010); /* 0x1703A70A: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1703A70F: pop ecx */
    MEM32(esi) = edi; /* 0x1703A710: mov dword ptr [esi], edi */
L_1703A712:
    eax = MEM32(esi + 0x8); /* 0x1703A712: mov eax, dword ptr [esi + 8] */
    /* cmp eax, edi */ /* 0x1703A715: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703A723; /* 0x1703A717: je 0x1703a723 */
L_1703A719:
    PUSH32(esp, eax); /* 0x1703A719: push eax */
    RECOMP_CALL(sub_1721B010); /* 0x1703A71A: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1703A71F: pop ecx */
    MEM32(esi + 0x8) = edi; /* 0x1703A720: mov dword ptr [esi + 8], edi */
L_1703A723:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x1703A723: add esi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x1703A726: dec ebx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1703A6F2; /* 0x1703A727: jne 0x1703a6f2 */
L_1703A729:
    edi = POP32_VAL(esp); /* 0x1703A729: pop edi */
    ebx = POP32_VAL(esp); /* 0x1703A72A: pop ebx */
L_1703A72B:
    esi = POP32_VAL(esp); /* 0x1703A72B: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1703A72C: ret  */
    RECOMP_REGS_OUT();
}

void sub_1703A732(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1703A732u);

L_1703A732:
    edi = edi; /* 0x1703A732: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1703A734: push ebp */
    ebp = esp; /* 0x1703A735: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1703A737: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1703A738: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1703A73B: push edi */
    PUSH32(esp, 4); /* 0x1703A73C: push 4 */
    ecx = POP32_VAL(esp); /* 0x1703A73E: pop ecx */
    edi = 0x17001970u; /* 0x1703A73F: mov edi, 0x17001970 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1703A744: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x1703A746: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_1703A76C; /* 0x1703A748: je 0x1703a76c */
L_1703A74A:
    esi = MEM32(ebp + 0xC); /* 0x1703A74A: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, 4); /* 0x1703A74D: push 4 */
    ecx = POP32_VAL(esp); /* 0x1703A74F: pop ecx */
    edi = 0x17001980u; /* 0x1703A750: mov edi, 0x17001980 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1703A755: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x1703A757: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_1703A76C; /* 0x1703A759: je 0x1703a76c */
L_1703A75B:
    esi = MEM32(ebp + 0xC); /* 0x1703A75B: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, 4); /* 0x1703A75E: push 4 */
    ecx = POP32_VAL(esp); /* 0x1703A760: pop ecx */
    edi = 0x1702AA2Cu; /* 0x1703A761: mov edi, 0x1702aa2c */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1703A766: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x1703A768: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_1703A77E; /* 0x1703A76A: jne 0x1703a77e */
L_1703A76C:
    eax = MEM32(ebp + 0x8); /* 0x1703A76C: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0x10); /* 0x1703A76F: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(ecx) = eax; /* 0x1703A772: mov dword ptr [ecx], eax */
    ecx = MEM32(eax); /* 0x1703A774: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1703A776: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x4)); /* 0x1703A777: call dword ptr [ecx + 4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1703A77A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1703A783; /* 0x1703A77C: jmp 0x1703a783 */
L_1703A77E:
    eax = 0x80004002u; /* 0x1703A77E: mov eax, 0x80004002 */
L_1703A783:
    edi = POP32_VAL(esp); /* 0x1703A783: pop edi */
    esi = POP32_VAL(esp); /* 0x1703A784: pop esi */
    ebp = POP32_VAL(esp); /* 0x1703A785: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1703A786: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1703A78E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1703A78Eu);

L_1703A78E:
    edi = edi; /* 0x1703A78E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1703A790: push ebp */
    ebp = esp; /* 0x1703A791: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1703A793: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax + 0x28); /* 0x1703A796: mov ecx, dword ptr [eax + 0x28] */
    /* test ecx, ecx */ /* 0x1703A799: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703A7B6; /* 0x1703A79B: je 0x1703a7b6 */
L_1703A79D:
    /* cmp ecx, 1 */ /* 0x1703A79D: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703A7B6; /* 0x1703A7A0: je 0x1703a7b6 */
L_1703A7A2:
    /* cmp ecx, 2 */ /* 0x1703A7A2: cmp ecx, 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1703A7AE; /* 0x1703A7A5: jne 0x1703a7ae */
L_1703A7A7:
    fp_push(*(double*)ADDR(eax + 0x20)); /* 0x1703A7A7: fld qword ptr [eax + 0x20] */
    _st[0] += _st[0]; /* 0x1703A7AA: fadd st(0), st(0) */
    goto L_1703A7B9; /* 0x1703A7AC: jmp 0x1703a7b9 */
L_1703A7AE:
    fp_push(*(double*)ADDR(0x17001D98)); /* 0x1703A7AE: fld qword ptr [0x17001d98] */
    goto L_1703A7B9; /* 0x1703A7B4: jmp 0x1703a7b9 */
L_1703A7B6:
    fp_push(*(double*)ADDR(eax + 0x20)); /* 0x1703A7B6: fld qword ptr [eax + 0x20] */
L_1703A7B9:
    ebp = POP32_VAL(esp); /* 0x1703A7B9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1703A7BA: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1703A7C2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1703A7C2u);

L_1703A7C2:
    edi = edi; /* 0x1703A7C2: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1703A7C4: push ebp */
    ebp = esp; /* 0x1703A7C5: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1703A7C7: push ecx */
    PUSH32(esp, ecx); /* 0x1703A7C8: push ecx */
    PUSH32(esp, esi); /* 0x1703A7C9: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1703A7CA: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(esi + 0x28); /* 0x1703A7CD: mov eax, dword ptr [esi + 0x28] */
    /* test eax, eax */ /* 0x1703A7D0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1703A7F5; /* 0x1703A7D2: jne 0x1703a7f5 */
L_1703A7D4:
    fp_push(*(double*)ADDR(ebp + 0xC)); /* 0x1703A7D4: fld qword ptr [ebp + 0xc] */
    fp_push(*(double*)ADDR(esi + 0x20)); /* 0x1703A7D7: fld qword ptr [esi + 0x20] */
    RECOMP_CALL(sub_1721B11E); /* 0x1703A7DA: call 0x1721b11e */
    RECOMP_FLAGS_IN();
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x17001D90)); /* 0x1703A7DF: fcom qword ptr [0x17001d90] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1703A7E5: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1703A7E7: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1703A85D; /* 0x1703A7EA: jp 0x1703a85d */
L_1703A7EC:
    fp_push(_st[0]); /* 0x1703A7EC: fld st(0) */
    _st[0] += *(double*)ADDR(esi + 0x20); /* 0x1703A7EE: fadd qword ptr [esi + 0x20] */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x1703A7F1: fstp st(1) */
    goto L_1703A85D; /* 0x1703A7F3: jmp 0x1703a85d */
L_1703A7F5:
    /* cmp eax, 1 */ /* 0x1703A7F5: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1703A830; /* 0x1703A7F8: jne 0x1703a830 */
L_1703A7FA:
    fp_push(*(double*)ADDR(ebp + 0xC)); /* 0x1703A7FA: fld qword ptr [ebp + 0xc] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(esi + 0x20)); /* 0x1703A7FD: fcom qword ptr [esi + 0x20] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1703A800: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1703A802: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1703A80B; /* 0x1703A805: jp 0x1703a80b */
L_1703A807:
    fp_push(_st[0]); /* 0x1703A807: fld st(0) */
    goto L_1703A80E; /* 0x1703A809: jmp 0x1703a80e */
L_1703A80B:
    fp_push(*(double*)ADDR(esi + 0x20)); /* 0x1703A80B: fld qword ptr [esi + 0x20] */
L_1703A80E:
    fp_push(0.0); /* 0x1703A80E: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1703A810: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1703A812: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1703A814: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1703A81F; /* 0x1703A817: jne 0x1703a81f */
L_1703A819:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1703A819: fstp st(0) */
    fp_push(0.0); /* 0x1703A81B: fldz  */
    goto L_1703A85D; /* 0x1703A81D: jmp 0x1703a85d */
L_1703A81F:
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(esi + 0x20)); /* 0x1703A81F: fcom qword ptr [esi + 0x20] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1703A822: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1703A824: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_1703A85D; /* 0x1703A827: jnp 0x1703a85d */
L_1703A829:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1703A829: fstp st(0) */
    fp_push(*(double*)ADDR(esi + 0x20)); /* 0x1703A82B: fld qword ptr [esi + 0x20] */
    goto L_1703A85D; /* 0x1703A82E: jmp 0x1703a85d */
L_1703A830:
    /* cmp eax, 2 */ /* 0x1703A830: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1703A85A; /* 0x1703A833: jne 0x1703a85a */
L_1703A835:
    fp_push(*(double*)ADDR(esi + 0x20)); /* 0x1703A835: fld qword ptr [esi + 0x20] */
    _st[0] += _st[0]; /* 0x1703A838: fadd st(0), st(0) */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x8)) = _v; } /* 0x1703A83A: fstp qword ptr [ebp - 8] */
    fp_push(*(double*)ADDR(ebp + 0xC)); /* 0x1703A83D: fld qword ptr [ebp + 0xc] */
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x1703A840: fld qword ptr [ebp - 8] */
    RECOMP_CALL(sub_1721B11E); /* 0x1703A843: call 0x1721b11e */
    RECOMP_FLAGS_IN();
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x17001D90)); /* 0x1703A848: fcom qword ptr [0x17001d90] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1703A84E: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1703A850: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1703A85D; /* 0x1703A853: jp 0x1703a85d */
L_1703A855:
    _st[0] += *(double*)ADDR(ebp + (-0x8)); /* 0x1703A855: fadd qword ptr [ebp - 8] */
    goto L_1703A85D; /* 0x1703A858: jmp 0x1703a85d */
L_1703A85A:
    fp_push(*(double*)ADDR(ebp + 0xC)); /* 0x1703A85A: fld qword ptr [ebp + 0xc] */
L_1703A85D:
    esi = POP32_VAL(esp); /* 0x1703A85D: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1703A85E: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1703A85F: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1703A867(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1703A867u);

L_1703A867:
    edi = edi; /* 0x1703A867: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1703A869: push ebp */
    ebp = esp; /* 0x1703A86A: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x1703A86C: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x8); /* 0x1703A86F: mov ecx, dword ptr [ebp + 8] */
    /* cmp eax, MEM32(ecx + 0x2C) */ /* 0x1703A872: cmp eax, dword ptr [ecx + 0x2c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x2C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1703A87E; /* 0x1703A875: jb 0x1703a87e */
L_1703A877:
    eax = 0x8876086Cu; /* 0x1703A877: mov eax, 0x8876086c */
    goto L_1703A894; /* 0x1703A87C: jmp 0x1703a894 */
L_1703A87E:
    edx = MEM32(ecx + 0x30); /* 0x1703A87E: mov edx, dword ptr [ecx + 0x30] */
    ecx = MEM32(ebp + 0x10); /* 0x1703A881: mov ecx, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x1703A884: push esi */
    esi = MEM32(edx + eax * 8); /* 0x1703A885: mov esi, dword ptr [edx + eax*8] */
    MEM32(ecx) = esi; /* 0x1703A888: mov dword ptr [ecx], esi */
    eax = MEM32(edx + eax * 8 + 0x4); /* 0x1703A88A: mov eax, dword ptr [edx + eax*8 + 4] */
    MEM32(ecx + 0x4) = eax; /* 0x1703A88E: mov dword ptr [ecx + 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1703A891: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1703A893: pop esi */
L_1703A894:
    ebp = POP32_VAL(esp); /* 0x1703A894: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1703A895: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1703A89D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1703A89Du);

L_1703A89D:
    edi = edi; /* 0x1703A89D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1703A89F: push ebp */
    ebp = esp; /* 0x1703A8A0: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x1703A8A2: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x8); /* 0x1703A8A5: mov ecx, dword ptr [ebp + 8] */
    /* cmp eax, MEM32(ecx + 0x2C) */ /* 0x1703A8A8: cmp eax, dword ptr [ecx + 0x2c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x2C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1703A8B4; /* 0x1703A8AB: jb 0x1703a8b4 */
L_1703A8AD:
    eax = 0x8876086Cu; /* 0x1703A8AD: mov eax, 0x8876086c */
    goto L_1703A8CA; /* 0x1703A8B2: jmp 0x1703a8ca */
L_1703A8B4:
    edx = MEM32(ecx + 0x30); /* 0x1703A8B4: mov edx, dword ptr [ecx + 0x30] */
    ecx = MEM32(ebp + 0x10); /* 0x1703A8B7: mov ecx, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x1703A8BA: push esi */
    esi = MEM32(ecx); /* 0x1703A8BB: mov esi, dword ptr [ecx] */
    MEM32(edx + eax * 8) = esi; /* 0x1703A8BD: mov dword ptr [edx + eax*8], esi */
    ecx = MEM32(ecx + 0x4); /* 0x1703A8C0: mov ecx, dword ptr [ecx + 4] */
    MEM32(edx + eax * 8 + 0x4) = ecx; /* 0x1703A8C3: mov dword ptr [edx + eax*8 + 4], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1703A8C7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1703A8C9: pop esi */
L_1703A8CA:
    ebp = POP32_VAL(esp); /* 0x1703A8CA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1703A8CB: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1703A8D3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1703A8D3u);

L_1703A8D3:
    edi = edi; /* 0x1703A8D3: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1703A8D5: push ebp */
    ebp = esp; /* 0x1703A8D6: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x1703A8D8: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x8); /* 0x1703A8DB: mov ecx, dword ptr [ebp + 8] */
    /* cmp eax, MEM32(ecx + 0x38) */ /* 0x1703A8DE: cmp eax, dword ptr [ecx + 0x38] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x38));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1703A8F6; /* 0x1703A8E1: jae 0x1703a8f6 */
L_1703A8E3:
    ecx = MEM32(ecx + 0x3C); /* 0x1703A8E3: mov ecx, dword ptr [ecx + 0x3c] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x44u); /* 0x1703A8E6: imul eax, eax, 0x44 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1703A8E9: add eax, ecx */
    _flag_k = FK_ADD;
    /* test MEM8(eax + 0x40), 1 */ /* 0x1703A8EB: test byte ptr [eax + 0x40], 1 */
    _flag_a = (uint32_t)(MEM8(eax + 0x40)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703A8F6; /* 0x1703A8EF: je 0x1703a8f6 */
L_1703A8F1:
    eax = MEM32(eax + 0x4); /* 0x1703A8F1: mov eax, dword ptr [eax + 4] */
    goto L_1703A8F8; /* 0x1703A8F4: jmp 0x1703a8f8 */
L_1703A8F6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1703A8F6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1703A8F8:
    ebp = POP32_VAL(esp); /* 0x1703A8F8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1703A8F9: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1703A901(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1703A901u);

L_1703A901:
    edi = edi; /* 0x1703A901: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1703A903: push ebp */
    ebp = esp; /* 0x1703A904: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x1703A906: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x8); /* 0x1703A909: mov ecx, dword ptr [ebp + 8] */
    /* cmp eax, MEM32(ecx + 0x38) */ /* 0x1703A90C: cmp eax, dword ptr [ecx + 0x38] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x38));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1703A918; /* 0x1703A90F: jb 0x1703a918 */
L_1703A911:
    eax = 0x8876086Cu; /* 0x1703A911: mov eax, 0x8876086c */
    goto L_1703A955; /* 0x1703A916: jmp 0x1703a955 */
L_1703A918:
    edx = MEM32(ecx + 0x3C); /* 0x1703A918: mov edx, dword ptr [ecx + 0x3c] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x44u); /* 0x1703A91B: imul eax, eax, 0x44 */
    /* test MEM8(edx + eax + 0x40), 1 */ /* 0x1703A91E: test byte ptr [edx + eax + 0x40], 1 */
    _flag_a = (uint32_t)(MEM8(edx + eax + 0x40)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, edi); /* 0x1703A923: push edi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703A952; /* 0x1703A924: je 0x1703a952 */
L_1703A926:
    edi = MEM32(ebp + 0x10); /* 0x1703A926: mov edi, dword ptr [ebp + 0x10] */
    /* test edi, edi */ /* 0x1703A929: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1703A934; /* 0x1703A92B: jne 0x1703a934 */
L_1703A92D:
    eax = 0x8876086Cu; /* 0x1703A92D: mov eax, 0x8876086c */
    goto L_1703A954; /* 0x1703A932: jmp 0x1703a954 */
L_1703A934:
    ecx = MEM32(ecx + 0x3C); /* 0x1703A934: mov ecx, dword ptr [ecx + 0x3c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1703A937: add eax, ecx */
    _flag_k = FK_ADD;
    ecx = MEM32(eax + 0x4); /* 0x1703A939: mov ecx, dword ptr [eax + 4] */
    if (4u) _cf = (((ecx) >> 28) & 1u); /* 0x1703A93C: shl ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ecx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 4u; /* 0x1703A93C: shl ecx, 4 */
    PUSH32(esp, esi); /* 0x1703A93F: push esi */
    esi = MEM32(eax + 0x10); /* 0x1703A940: mov esi, dword ptr [eax + 0x10] */
    eax = ecx; /* 0x1703A943: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1703A945: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1703A945: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1703A948: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x1703A94A: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1703A94C: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x1703A94F: rep movsb byte ptr es:[edi], byte ptr [esi] */
    esi = POP32_VAL(esp); /* 0x1703A951: pop esi */
L_1703A952:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1703A952: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1703A954:
    edi = POP32_VAL(esp); /* 0x1703A954: pop edi */
L_1703A955:
    ebp = POP32_VAL(esp); /* 0x1703A955: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1703A956: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1703A95E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1703A95Eu);

L_1703A95E:
    edi = edi; /* 0x1703A95E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1703A960: push ebp */
    ebp = esp; /* 0x1703A961: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x1703A963: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x8); /* 0x1703A966: mov ecx, dword ptr [ebp + 8] */
    /* cmp eax, MEM32(ecx + 0x38) */ /* 0x1703A969: cmp eax, dword ptr [ecx + 0x38] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x38));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1703A97C; /* 0x1703A96C: jae 0x1703a97c */
L_1703A96E:
    eax = (uint32_t)((int32_t)eax * (int32_t)0x44u); /* 0x1703A96E: imul eax, eax, 0x44 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x3C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + 0x3C); /* 0x1703A971: add eax, dword ptr [ecx + 0x3c] */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + 0x10); /* 0x1703A974: mov ecx, dword ptr [ebp + 0x10] */
    /* cmp ecx, MEM32(eax + 0x4) */ /* 0x1703A977: cmp ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1703A983; /* 0x1703A97A: jb 0x1703a983 */
L_1703A97C:
    eax = 0x8876086Cu; /* 0x1703A97C: mov eax, 0x8876086c */
    goto L_1703A998; /* 0x1703A981: jmp 0x1703a998 */
L_1703A983:
    PUSH32(esp, esi); /* 0x1703A983: push esi */
    esi = MEM32(eax + 0x10); /* 0x1703A984: mov esi, dword ptr [eax + 0x10] */
    PUSH32(esp, edi); /* 0x1703A987: push edi */
    edi = MEM32(ebp + 0x14); /* 0x1703A988: mov edi, dword ptr [ebp + 0x14] */
    if (4u) _cf = (((ecx) >> 28) & 1u); /* 0x1703A98B: shl ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ecx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 4u; /* 0x1703A98B: shl ecx, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ecx; /* 0x1703A98E: add esi, ecx */
    _flag_k = FK_ADD;
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703A990: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703A991: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703A992: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703A993: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x1703A994: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1703A995: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1703A997: pop esi */
L_1703A998:
    ebp = POP32_VAL(esp); /* 0x1703A998: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1703A999: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1703A9A1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1703A9A1u);

L_1703A9A1:
    edi = edi; /* 0x1703A9A1: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1703A9A3: push ebp */
    ebp = esp; /* 0x1703A9A4: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x1703A9A6: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x8); /* 0x1703A9A9: mov ecx, dword ptr [ebp + 8] */
    /* cmp eax, MEM32(ecx + 0x38) */ /* 0x1703A9AC: cmp eax, dword ptr [ecx + 0x38] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x38));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1703A9C4; /* 0x1703A9AF: jae 0x1703a9c4 */
L_1703A9B1:
    ecx = MEM32(ecx + 0x3C); /* 0x1703A9B1: mov ecx, dword ptr [ecx + 0x3c] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x44u); /* 0x1703A9B4: imul eax, eax, 0x44 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1703A9B7: add eax, ecx */
    _flag_k = FK_ADD;
    /* test MEM8(eax + 0x40), 2 */ /* 0x1703A9B9: test byte ptr [eax + 0x40], 2 */
    _flag_a = (uint32_t)(MEM8(eax + 0x40)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703A9C4; /* 0x1703A9BD: je 0x1703a9c4 */
L_1703A9BF:
    eax = MEM32(eax + 0x8); /* 0x1703A9BF: mov eax, dword ptr [eax + 8] */
    goto L_1703A9C6; /* 0x1703A9C2: jmp 0x1703a9c6 */
L_1703A9C4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1703A9C4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1703A9C6:
    ebp = POP32_VAL(esp); /* 0x1703A9C6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1703A9C7: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1703A9CF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1703A9CFu);

L_1703A9CF:
    edi = edi; /* 0x1703A9CF: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1703A9D1: push ebp */
    ebp = esp; /* 0x1703A9D2: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x1703A9D4: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x8); /* 0x1703A9D7: mov ecx, dword ptr [ebp + 8] */
    /* cmp eax, MEM32(ecx + 0x38) */ /* 0x1703A9DA: cmp eax, dword ptr [ecx + 0x38] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x38));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1703A9E6; /* 0x1703A9DD: jb 0x1703a9e6 */
L_1703A9DF:
    eax = 0x8876086Cu; /* 0x1703A9DF: mov eax, 0x8876086c */
    goto L_1703AA26; /* 0x1703A9E4: jmp 0x1703aa26 */
L_1703A9E6:
    edx = MEM32(ecx + 0x3C); /* 0x1703A9E6: mov edx, dword ptr [ecx + 0x3c] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x44u); /* 0x1703A9E9: imul eax, eax, 0x44 */
    /* test MEM8(edx + eax + 0x40), 2 */ /* 0x1703A9EC: test byte ptr [edx + eax + 0x40], 2 */
    _flag_a = (uint32_t)(MEM8(edx + eax + 0x40)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, edi); /* 0x1703A9F1: push edi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703AA23; /* 0x1703A9F2: je 0x1703aa23 */
L_1703A9F4:
    edi = MEM32(ebp + 0x10); /* 0x1703A9F4: mov edi, dword ptr [ebp + 0x10] */
    /* test edi, edi */ /* 0x1703A9F7: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1703AA02; /* 0x1703A9F9: jne 0x1703aa02 */
L_1703A9FB:
    eax = 0x8876086Cu; /* 0x1703A9FB: mov eax, 0x8876086c */
    goto L_1703AA25; /* 0x1703AA00: jmp 0x1703aa25 */
L_1703AA02:
    ecx = MEM32(ecx + 0x3C); /* 0x1703AA02: mov ecx, dword ptr [ecx + 0x3c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1703AA05: add eax, ecx */
    _flag_k = FK_ADD;
    ecx = MEM32(eax + 0x8); /* 0x1703AA07: mov ecx, dword ptr [eax + 8] */
    ecx = ecx + ecx * 4; /* 0x1703AA0A: lea ecx, [ecx + ecx*4] */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x1703AA0D: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x1703AA0D: shl ecx, 2 */
    PUSH32(esp, esi); /* 0x1703AA10: push esi */
    esi = MEM32(eax + 0x14); /* 0x1703AA11: mov esi, dword ptr [eax + 0x14] */
    eax = ecx; /* 0x1703AA14: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1703AA16: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1703AA16: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1703AA19: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x1703AA1B: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1703AA1D: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x1703AA20: rep movsb byte ptr es:[edi], byte ptr [esi] */
    esi = POP32_VAL(esp); /* 0x1703AA22: pop esi */
L_1703AA23:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1703AA23: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1703AA25:
    edi = POP32_VAL(esp); /* 0x1703AA25: pop edi */
L_1703AA26:
    ebp = POP32_VAL(esp); /* 0x1703AA26: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1703AA27: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1703AA2F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1703AA2Fu);

L_1703AA2F:
    edi = edi; /* 0x1703AA2F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1703AA31: push ebp */
    ebp = esp; /* 0x1703AA32: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x1703AA34: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x8); /* 0x1703AA37: mov ecx, dword ptr [ebp + 8] */
    /* cmp eax, MEM32(ecx + 0x38) */ /* 0x1703AA3A: cmp eax, dword ptr [ecx + 0x38] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x38));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1703AA4D; /* 0x1703AA3D: jae 0x1703aa4d */
L_1703AA3F:
    eax = (uint32_t)((int32_t)eax * (int32_t)0x44u); /* 0x1703AA3F: imul eax, eax, 0x44 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x3C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + 0x3C); /* 0x1703AA42: add eax, dword ptr [ecx + 0x3c] */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + 0x10); /* 0x1703AA45: mov ecx, dword ptr [ebp + 0x10] */
    /* cmp ecx, MEM32(eax + 0x8) */ /* 0x1703AA48: cmp ecx, dword ptr [eax + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1703AA54; /* 0x1703AA4B: jb 0x1703aa54 */
L_1703AA4D:
    eax = 0x8876086Cu; /* 0x1703AA4D: mov eax, 0x8876086c */
    goto L_1703AA6B; /* 0x1703AA52: jmp 0x1703aa6b */
L_1703AA54:
    eax = MEM32(eax + 0x14); /* 0x1703AA54: mov eax, dword ptr [eax + 0x14] */
    PUSH32(esp, esi); /* 0x1703AA57: push esi */
    PUSH32(esp, edi); /* 0x1703AA58: push edi */
    edi = MEM32(ebp + 0x14); /* 0x1703AA59: mov edi, dword ptr [ebp + 0x14] */
    ecx = ecx + ecx * 4; /* 0x1703AA5C: lea ecx, [ecx + ecx*4] */
    PUSH32(esp, 5); /* 0x1703AA5F: push 5 */
    esi = eax + ecx * 4; /* 0x1703AA61: lea esi, [eax + ecx*4] */
    ecx = POP32_VAL(esp); /* 0x1703AA64: pop ecx */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1703AA65: rep movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x1703AA67: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1703AA68: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1703AA6A: pop esi */
L_1703AA6B:
    ebp = POP32_VAL(esp); /* 0x1703AA6B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1703AA6C: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1703AA74(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1703AA74u);

L_1703AA74:
    edi = edi; /* 0x1703AA74: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1703AA76: push ebp */
    ebp = esp; /* 0x1703AA77: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x1703AA79: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x8); /* 0x1703AA7C: mov ecx, dword ptr [ebp + 8] */
    /* cmp eax, MEM32(ecx + 0x38) */ /* 0x1703AA7F: cmp eax, dword ptr [ecx + 0x38] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x38));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1703AA97; /* 0x1703AA82: jae 0x1703aa97 */
L_1703AA84:
    ecx = MEM32(ecx + 0x3C); /* 0x1703AA84: mov ecx, dword ptr [ecx + 0x3c] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x44u); /* 0x1703AA87: imul eax, eax, 0x44 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1703AA8A: add eax, ecx */
    _flag_k = FK_ADD;
    /* test MEM8(eax + 0x40), 4 */ /* 0x1703AA8C: test byte ptr [eax + 0x40], 4 */
    _flag_a = (uint32_t)(MEM8(eax + 0x40)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703AA97; /* 0x1703AA90: je 0x1703aa97 */
L_1703AA92:
    eax = MEM32(eax + 0xC); /* 0x1703AA92: mov eax, dword ptr [eax + 0xc] */
    goto L_1703AA99; /* 0x1703AA95: jmp 0x1703aa99 */
L_1703AA97:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1703AA97: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1703AA99:
    ebp = POP32_VAL(esp); /* 0x1703AA99: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1703AA9A: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1703AAA2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1703AAA2u);

L_1703AAA2:
    edi = edi; /* 0x1703AAA2: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1703AAA4: push ebp */
    ebp = esp; /* 0x1703AAA5: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x1703AAA7: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x8); /* 0x1703AAAA: mov ecx, dword ptr [ebp + 8] */
    /* cmp eax, MEM32(ecx + 0x38) */ /* 0x1703AAAD: cmp eax, dword ptr [ecx + 0x38] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x38));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1703AAB9; /* 0x1703AAB0: jb 0x1703aab9 */
L_1703AAB2:
    eax = 0x8876086Cu; /* 0x1703AAB2: mov eax, 0x8876086c */
    goto L_1703AAF6; /* 0x1703AAB7: jmp 0x1703aaf6 */
L_1703AAB9:
    edx = MEM32(ecx + 0x3C); /* 0x1703AAB9: mov edx, dword ptr [ecx + 0x3c] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x44u); /* 0x1703AABC: imul eax, eax, 0x44 */
    /* test MEM8(edx + eax + 0x40), 4 */ /* 0x1703AABF: test byte ptr [edx + eax + 0x40], 4 */
    _flag_a = (uint32_t)(MEM8(edx + eax + 0x40)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, edi); /* 0x1703AAC4: push edi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703AAF3; /* 0x1703AAC5: je 0x1703aaf3 */
L_1703AAC7:
    edi = MEM32(ebp + 0x10); /* 0x1703AAC7: mov edi, dword ptr [ebp + 0x10] */
    /* test edi, edi */ /* 0x1703AACA: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1703AAD5; /* 0x1703AACC: jne 0x1703aad5 */
L_1703AACE:
    eax = 0x8876086Cu; /* 0x1703AACE: mov eax, 0x8876086c */
    goto L_1703AAF5; /* 0x1703AAD3: jmp 0x1703aaf5 */
L_1703AAD5:
    ecx = MEM32(ecx + 0x3C); /* 0x1703AAD5: mov ecx, dword ptr [ecx + 0x3c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1703AAD8: add eax, ecx */
    _flag_k = FK_ADD;
    ecx = MEM32(eax + 0xC); /* 0x1703AADA: mov ecx, dword ptr [eax + 0xc] */
    if (4u) _cf = (((ecx) >> 28) & 1u); /* 0x1703AADD: shl ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ecx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 4u; /* 0x1703AADD: shl ecx, 4 */
    PUSH32(esp, esi); /* 0x1703AAE0: push esi */
    esi = MEM32(eax + 0x18); /* 0x1703AAE1: mov esi, dword ptr [eax + 0x18] */
    eax = ecx; /* 0x1703AAE4: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1703AAE6: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1703AAE6: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1703AAE9: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x1703AAEB: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1703AAED: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x1703AAF0: rep movsb byte ptr es:[edi], byte ptr [esi] */
    esi = POP32_VAL(esp); /* 0x1703AAF2: pop esi */
L_1703AAF3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1703AAF3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1703AAF5:
    edi = POP32_VAL(esp); /* 0x1703AAF5: pop edi */
L_1703AAF6:
    ebp = POP32_VAL(esp); /* 0x1703AAF6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1703AAF7: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1703AAFF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1703AAFFu);

L_1703AAFF:
    edi = edi; /* 0x1703AAFF: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1703AB01: push ebp */
    ebp = esp; /* 0x1703AB02: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x1703AB04: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x8); /* 0x1703AB07: mov ecx, dword ptr [ebp + 8] */
    /* cmp eax, MEM32(ecx + 0x38) */ /* 0x1703AB0A: cmp eax, dword ptr [ecx + 0x38] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x38));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1703AB1D; /* 0x1703AB0D: jae 0x1703ab1d */
L_1703AB0F:
    eax = (uint32_t)((int32_t)eax * (int32_t)0x44u); /* 0x1703AB0F: imul eax, eax, 0x44 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x3C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + 0x3C); /* 0x1703AB12: add eax, dword ptr [ecx + 0x3c] */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + 0x10); /* 0x1703AB15: mov ecx, dword ptr [ebp + 0x10] */
    /* cmp ecx, MEM32(eax + 0xC) */ /* 0x1703AB18: cmp ecx, dword ptr [eax + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1703AB24; /* 0x1703AB1B: jb 0x1703ab24 */
L_1703AB1D:
    eax = 0x8876086Cu; /* 0x1703AB1D: mov eax, 0x8876086c */
    goto L_1703AB39; /* 0x1703AB22: jmp 0x1703ab39 */
L_1703AB24:
    PUSH32(esp, esi); /* 0x1703AB24: push esi */
    esi = MEM32(eax + 0x18); /* 0x1703AB25: mov esi, dword ptr [eax + 0x18] */
    PUSH32(esp, edi); /* 0x1703AB28: push edi */
    edi = MEM32(ebp + 0x14); /* 0x1703AB29: mov edi, dword ptr [ebp + 0x14] */
    if (4u) _cf = (((ecx) >> 28) & 1u); /* 0x1703AB2C: shl ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ecx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 4u; /* 0x1703AB2C: shl ecx, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ecx; /* 0x1703AB2F: add esi, ecx */
    _flag_k = FK_ADD;
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703AB31: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703AB32: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703AB33: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703AB34: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x1703AB35: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1703AB36: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1703AB38: pop esi */
L_1703AB39:
    ebp = POP32_VAL(esp); /* 0x1703AB39: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1703AB3A: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1703AB42(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1703AB42u);

L_1703AB42:
    edi = edi; /* 0x1703AB42: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1703AB44: push ebp */
    ebp = esp; /* 0x1703AB45: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1703AB47: push esi */
    esi = ecx; /* 0x1703AB48: mov esi, ecx */
    RECOMP_CALL(sub_1703A697); /* 0x1703AB4A: call 0x1703a697 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1703AB4F: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703AB5C; /* 0x1703AB53: je 0x1703ab5c */
L_1703AB55:
    PUSH32(esp, esi); /* 0x1703AB55: push esi */
    RECOMP_CALL(sub_1721B010); /* 0x1703AB56: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1703AB5B: pop ecx */
L_1703AB5C:
    eax = esi; /* 0x1703AB5C: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1703AB5E: pop esi */
    ebp = POP32_VAL(esp); /* 0x1703AB5F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1703AB60: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1703AB68(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1703AB68u);

L_1703AB68:
    edi = edi; /* 0x1703AB68: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1703AB6A: push ebp */
    ebp = esp; /* 0x1703AB6B: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1703AB6D: push ecx */
    eax = MEM32(ebp + 0x8); /* 0x1703AB6E: mov eax, dword ptr [ebp + 8] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x44u); /* 0x1703AB71: imul eax, eax, 0x44 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x3C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + 0x3C); /* 0x1703AB74: add eax, dword ptr [ecx + 0x3c] */
    _flag_k = FK_ADD;
    PUSH32(esp, esi); /* 0x1703AB77: push esi */
    edx = MEM32(eax + 0x4); /* 0x1703AB78: mov edx, dword ptr [eax + 4] */
    esi = MEM32(eax + 0x10); /* 0x1703AB7B: mov esi, dword ptr [eax + 0x10] */
    if (4u) _cf = (((edx) >> 28) & 1u); /* 0x1703AB7E: shl edx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((edx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 4u; /* 0x1703AB7E: shl edx, 4 */
    fp_push(*(float*)&MEM32(edx + esi + (-0x10))); /* 0x1703AB81: fld dword ptr [edx + esi - 0x10] */
    edx = MEM32(eax + 0x8); /* 0x1703AB85: mov edx, dword ptr [eax + 8] */
    esi = MEM32(eax + 0x14); /* 0x1703AB88: mov esi, dword ptr [eax + 0x14] */
    _st[0] = fabs(_st[0]); /* 0x1703AB8B: fabs  */
    edx = edx + edx * 4; /* 0x1703AB8D: lea edx, [edx + edx*4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x1703AB90: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(esi + edx * 4 + (-0x14))); /* 0x1703AB93: fld dword ptr [esi + edx*4 - 0x14] */
    edx = MEM32(eax + 0xC); /* 0x1703AB97: mov edx, dword ptr [eax + 0xc] */
    eax = MEM32(eax + 0x18); /* 0x1703AB9A: mov eax, dword ptr [eax + 0x18] */
    _st[0] = fabs(_st[0]); /* 0x1703AB9D: fabs  */
    if (4u) _cf = (((edx) >> 28) & 1u); /* 0x1703AB9F: shl edx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((edx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 4u; /* 0x1703AB9F: shl edx, 4 */
    fp_push(*(float*)&MEM32(edx + eax + (-0x10))); /* 0x1703ABA2: fld dword ptr [edx + eax - 0x10] */
    _st[0] = fabs(_st[0]); /* 0x1703ABA6: fabs  */
    esi = POP32_VAL(esp); /* 0x1703ABA8: pop esi */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x1703ABA9: fst dword ptr [ebp - 4] */
    fp_push(_st[1]); /* 0x1703ABAC: fld st(1) */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1703ABAE: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1703ABB0: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1703ABB2: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1703ABBB; /* 0x1703ABB5: jne 0x1703abbb */
L_1703ABB7:
    fp_push(_st[1]); /* 0x1703ABB7: fld st(1) */
    goto L_1703ABBD; /* 0x1703ABB9: jmp 0x1703abbd */
L_1703ABBB:
    fp_push(_st[0]); /* 0x1703ABBB: fld st(0) */
L_1703ABBD:
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x1703ABBD: fld dword ptr [ebp + 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1703ABC0: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1703ABC2: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1703ABC4: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1703ABD2; /* 0x1703ABC7: jne 0x1703abd2 */
L_1703ABC9:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1703ABC9: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1703ABCB: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x1703ABCD: fld dword ptr [ebp + 8] */
    goto L_1703ABE2; /* 0x1703ABD0: jmp 0x1703abe2 */
L_1703ABD2:
    fp_push(_st[1]); /* 0x1703ABD2: fld st(1) */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1703ABD4: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1703ABD6: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1703ABD8: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703ABE2; /* 0x1703ABDB: je 0x1703abe2 */
L_1703ABDD:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1703ABDD: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x1703ABDF: fld dword ptr [ebp - 4] */
L_1703ABE2:
    _st[0] /= *(double*)ADDR(ecx + 0x18); /* 0x1703ABE2: fdiv qword ptr [ecx + 0x18] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ecx + 0x20)); /* 0x1703ABE5: fcom qword ptr [ecx + 0x20] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1703ABE8: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1703ABEA: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1703ABF4; /* 0x1703ABED: jp 0x1703abf4 */
L_1703ABEF:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1703ABEF: fstp st(0) */
    fp_push(*(double*)ADDR(ecx + 0x20)); /* 0x1703ABF1: fld qword ptr [ecx + 0x20] */
L_1703ABF4:
    *(double*)ADDR(ecx + 0x20) = _st[0]; /* 0x1703ABF4: fst qword ptr [ecx + 0x20] */
    fp_push(*(double*)ADDR(0x17001DA8)); /* 0x1703ABF7: fld qword ptr [0x17001da8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1703ABFD: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1703ABFF: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1703AC01: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1703AC0B; /* 0x1703AC04: jne 0x1703ac0b */
L_1703AC06:
    fp_push(1.0); /* 0x1703AC06: fld1  */
    { double _v = fp_pop(); *(double*)ADDR(ecx + 0x20) = _v; } /* 0x1703AC08: fstp qword ptr [ecx + 0x20] */
L_1703AC0B:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1703AC0B: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1703AC0C: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1703AC14(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1703AC14u);

L_1703AC14:
    edi = edi; /* 0x1703AC14: mov edi, edi */
    PUSH32(esp, esi); /* 0x1703AC16: push esi */
    fp_push(0.0); /* 0x1703AC17: fldz  */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1703AC19: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    { double _v = fp_pop(); *(double*)ADDR(ecx + 0x20) = _v; } /* 0x1703AC1B: fstp qword ptr [ecx + 0x20] */
    /* cmp MEM32(ecx + 0x38), esi */ /* 0x1703AC1E: cmp dword ptr [ecx + 0x38], esi */
    _flag_a = (uint32_t)(MEM32(ecx + 0x38)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1703AC2F; /* 0x1703AC21: jbe 0x1703ac2f */
L_1703AC23:
    PUSH32(esp, esi); /* 0x1703AC23: push esi */
    RECOMP_CALL(sub_1703AB68); /* 0x1703AC24: call 0x1703ab68 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1703AC29: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(ecx + 0x38) */ /* 0x1703AC2A: cmp esi, dword ptr [ecx + 0x38] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ecx + 0x38));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1703AC23; /* 0x1703AC2D: jb 0x1703ac23 */
L_1703AC2F:
    esi = POP32_VAL(esp); /* 0x1703AC2F: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1703AC30: ret  */
    RECOMP_REGS_OUT();
}

void sub_1703AC36(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1703AC36u);

L_1703AC36:
    edi = edi; /* 0x1703AC36: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1703AC38: push ebp */
    ebp = esp; /* 0x1703AC39: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1703AC3B: push ecx */
    PUSH32(esp, ebx); /* 0x1703AC3C: push ebx */
    PUSH32(esp, esi); /* 0x1703AC3D: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1703AC3E: mov esi, dword ptr [ebp + 0xc] */
    eax = MEM32(esi); /* 0x1703AC41: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x1703AC43: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1703AC44: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1703AC47: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edi, eax */ /* 0x1703AC49: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = ecx; /* 0x1703AC4B: mov dword ptr [ebp - 4], ecx */
    if (CMP_B(_flag_a, _flag_b)) goto L_1703AC57; /* 0x1703AC4E: jb 0x1703ac57 */
L_1703AC50:
    ebx = 0x8876086Cu; /* 0x1703AC50: mov ebx, 0x8876086c */
    goto L_1703AC8F; /* 0x1703AC55: jmp 0x1703ac8f */
L_1703AC57:
    /* cmp eax, 1 */ /* 0x1703AC57: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1703AC63; /* 0x1703AC5A: jne 0x1703ac63 */
L_1703AC5C:
    ebx = 0x88760B5Cu; /* 0x1703AC5C: mov ebx, 0x88760b5c */
    goto L_1703AC8F; /* 0x1703AC61: jmp 0x1703ac8f */
L_1703AC63:
    edx = MEM32(ebp + 0x10); /* 0x1703AC63: mov edx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1703AC66: dec eax */
    _flag_k = FK_DEC;
    MEM32(esi) = eax; /* 0x1703AC67: mov dword ptr [esi], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x1703AC69: sub eax, edi */
    _flag_k = FK_CMP;
    ecx = edi; /* 0x1703AC6B: mov ecx, edi */
    if (4u) _cf = (((ecx) >> 28) & 1u); /* 0x1703AC6D: shl ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ecx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 4u; /* 0x1703AC6D: shl ecx, 4 */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x1703AC70: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x1703AC70: shl eax, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x1703AC73: add ecx, edx */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1703AC75: push eax */
    eax = ecx + 0x10; /* 0x1703AC76: lea eax, [ecx + 0x10] */
    PUSH32(esp, eax); /* 0x1703AC79: push eax */
    PUSH32(esp, ecx); /* 0x1703AC7A: push ecx */
    RECOMP_CALL(sub_1721B136); /* 0x1703AC7B: call 0x1721b136 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1703AC80: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp edi, MEM32(esi) */ /* 0x1703AC83: cmp edi, dword ptr [esi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1703AC8F; /* 0x1703AC85: jne 0x1703ac8f */
L_1703AC87:
    ecx = MEM32(ebp + (-0x4)); /* 0x1703AC87: mov ecx, dword ptr [ebp - 4] */
    RECOMP_CALL(sub_1703AC14); /* 0x1703AC8A: call 0x1703ac14 */
    RECOMP_FLAGS_IN();
L_1703AC8F:
    edi = POP32_VAL(esp); /* 0x1703AC8F: pop edi */
    esi = POP32_VAL(esp); /* 0x1703AC90: pop esi */
    eax = ebx; /* 0x1703AC91: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x1703AC93: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1703AC94: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1703AC95: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1703AC9D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1703AC9Du);

L_1703AC9D:
    edi = edi; /* 0x1703AC9D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1703AC9F: push ebp */
    ebp = esp; /* 0x1703ACA0: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1703ACA2: push ecx */
    PUSH32(esp, ebx); /* 0x1703ACA3: push ebx */
    PUSH32(esp, esi); /* 0x1703ACA4: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1703ACA5: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1703ACA8: push edi */
    edi = MEM32(ebp + 0xC); /* 0x1703ACA9: mov edi, dword ptr [ebp + 0xc] */
    eax = MEM32(edi); /* 0x1703ACAC: mov eax, dword ptr [edi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1703ACAE: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp esi, eax */ /* 0x1703ACB0: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = ecx; /* 0x1703ACB2: mov dword ptr [ebp - 4], ecx */
    if (CMP_B(_flag_a, _flag_b)) goto L_1703ACBE; /* 0x1703ACB5: jb 0x1703acbe */
L_1703ACB7:
    ebx = 0x8876086Cu; /* 0x1703ACB7: mov ebx, 0x8876086c */
    goto L_1703ACF8; /* 0x1703ACBC: jmp 0x1703acf8 */
L_1703ACBE:
    /* cmp eax, 1 */ /* 0x1703ACBE: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1703ACCA; /* 0x1703ACC1: jne 0x1703acca */
L_1703ACC3:
    ebx = 0x88760B5Cu; /* 0x1703ACC3: mov ebx, 0x88760b5c */
    goto L_1703ACF8; /* 0x1703ACC8: jmp 0x1703acf8 */
L_1703ACCA:
    edx = MEM32(ebp + 0x10); /* 0x1703ACCA: mov edx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1703ACCD: dec eax */
    _flag_k = FK_DEC;
    MEM32(edi) = eax; /* 0x1703ACCE: mov dword ptr [edi], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x1703ACD0: sub eax, esi */
    _flag_k = FK_CMP;
    eax = eax + eax * 4; /* 0x1703ACD2: lea eax, [eax + eax*4] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1703ACD5: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1703ACD5: shl eax, 2 */
    ecx = esi + esi * 4; /* 0x1703ACD8: lea ecx, [esi + esi*4] */
    ecx = edx + ecx * 4; /* 0x1703ACDB: lea ecx, [edx + ecx*4] */
    PUSH32(esp, eax); /* 0x1703ACDE: push eax */
    eax = ecx + 0x14; /* 0x1703ACDF: lea eax, [ecx + 0x14] */
    PUSH32(esp, eax); /* 0x1703ACE2: push eax */
    PUSH32(esp, ecx); /* 0x1703ACE3: push ecx */
    RECOMP_CALL(sub_1721B136); /* 0x1703ACE4: call 0x1721b136 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1703ACE9: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp esi, MEM32(edi) */ /* 0x1703ACEC: cmp esi, dword ptr [edi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1703ACF8; /* 0x1703ACEE: jne 0x1703acf8 */
L_1703ACF0:
    ecx = MEM32(ebp + (-0x4)); /* 0x1703ACF0: mov ecx, dword ptr [ebp - 4] */
    RECOMP_CALL(sub_1703AC14); /* 0x1703ACF3: call 0x1703ac14 */
    RECOMP_FLAGS_IN();
L_1703ACF8:
    edi = POP32_VAL(esp); /* 0x1703ACF8: pop edi */
    esi = POP32_VAL(esp); /* 0x1703ACF9: pop esi */
    eax = ebx; /* 0x1703ACFA: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x1703ACFC: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1703ACFD: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1703ACFE: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1703AD06(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1703AD06u);

L_1703AD06:
    edi = edi; /* 0x1703AD06: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1703AD08: push ebp */
    ebp = esp; /* 0x1703AD09: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1703AD0B: push ebx */
    PUSH32(esp, esi); /* 0x1703AD0C: push esi */
    PUSH32(esp, edi); /* 0x1703AD0D: push edi */
L_1703AD0E:
    esi = ecx + ecx + 0x1; /* 0x1703AD0E: lea esi, [ecx + ecx + 1] */
    /* cmp esi, MEM32(ebp + 0x8) */ /* 0x1703AD12: cmp esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = ecx; /* 0x1703AD15: mov edi, ecx */
    if (CMP_AE(_flag_a, _flag_b)) goto L_1703AD34; /* 0x1703AD17: jae 0x1703ad34 */
L_1703AD19:
    eax = ecx; /* 0x1703AD19: mov eax, ecx */
    if (5u) _cf = (((eax) >> 27) & 1u); /* 0x1703AD1B: shl eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack((eax << 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 5u; /* 0x1703AD1B: shl eax, 5 */
    fp_push(*(float*)&MEM32(eax + edx + 0x1C)); /* 0x1703AD1E: fld dword ptr [eax + edx + 0x1c] */
    ebx = ecx; /* 0x1703AD22: mov ebx, ecx */
    if (4u) _cf = (((ebx) >> 28) & 1u); /* 0x1703AD24: shl ebx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ebx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 4u; /* 0x1703AD24: shl ebx, 4 */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebx + edx + 0xC)); /* 0x1703AD27: fcomp dword ptr [ebx + edx + 0xc] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1703AD2B: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1703AD2D: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1703AD34; /* 0x1703AD30: jne 0x1703ad34 */
L_1703AD32:
    edi = esi; /* 0x1703AD32: mov edi, esi */
L_1703AD34:
    esi = ecx + ecx + 0x2; /* 0x1703AD34: lea esi, [ecx + ecx + 2] */
    /* cmp esi, MEM32(ebp + 0x8) */ /* 0x1703AD38: cmp esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1703AD58; /* 0x1703AD3B: jae 0x1703ad58 */
L_1703AD3D:
    eax = ecx; /* 0x1703AD3D: mov eax, ecx */
    if (5u) _cf = (((eax) >> 27) & 1u); /* 0x1703AD3F: shl eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack((eax << 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 5u; /* 0x1703AD3F: shl eax, 5 */
    fp_push(*(float*)&MEM32(eax + edx + 0x2C)); /* 0x1703AD42: fld dword ptr [eax + edx + 0x2c] */
    ebx = edi; /* 0x1703AD46: mov ebx, edi */
    if (4u) _cf = (((ebx) >> 28) & 1u); /* 0x1703AD48: shl ebx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ebx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 4u; /* 0x1703AD48: shl ebx, 4 */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebx + edx + 0xC)); /* 0x1703AD4B: fcomp dword ptr [ebx + edx + 0xc] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1703AD4F: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1703AD51: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1703AD58; /* 0x1703AD54: jne 0x1703ad58 */
L_1703AD56:
    edi = esi; /* 0x1703AD56: mov edi, esi */
L_1703AD58:
    /* cmp edi, ecx */ /* 0x1703AD58: cmp edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703AD67; /* 0x1703AD5A: je 0x1703ad67 */
L_1703AD5C:
    eax = edi; /* 0x1703AD5C: mov eax, edi */
    RECOMP_CALL(sub_1703A5A1); /* 0x1703AD5E: call 0x1703a5a1 */
    RECOMP_FLAGS_IN();
    ecx = edi; /* 0x1703AD63: mov ecx, edi */
    RECOMP_BACKEDGE();
    goto L_1703AD0E; /* 0x1703AD65: jmp 0x1703ad0e */
L_1703AD67:
    edi = POP32_VAL(esp); /* 0x1703AD67: pop edi */
    esi = POP32_VAL(esp); /* 0x1703AD68: pop esi */
    eax = ecx; /* 0x1703AD69: mov eax, ecx */
    ebx = POP32_VAL(esp); /* 0x1703AD6B: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1703AD6C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1703AD6D: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1703AD75(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1703AD75u);

L_1703AD75:
    /* test ecx, ecx */ /* 0x1703AD75: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703ADA8; /* 0x1703AD77: jbe 0x1703ada8 */
L_1703AD79:
    PUSH32(esp, esi); /* 0x1703AD79: push esi */
    PUSH32(esp, edi); /* 0x1703AD7A: push edi */
L_1703AD7B:
    esi = ecx + (-0x1); /* 0x1703AD7B: lea esi, [ecx - 1] */
    if (1u) _cf = (((esi) >> 0) & 1u); /* 0x1703AD7E: shr esi, 1 */
    if (1u) { _flag_a = recomp_flags_pack((esi >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 1u; /* 0x1703AD7E: shr esi, 1 */
    eax = ecx; /* 0x1703AD80: mov eax, ecx */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x1703AD82: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x1703AD82: shl eax, 4 */
    fp_push(*(float*)&MEM32(eax + edx + 0xC)); /* 0x1703AD85: fld dword ptr [eax + edx + 0xc] */
    edi = esi; /* 0x1703AD89: mov edi, esi */
    if (4u) _cf = (((edi) >> 28) & 1u); /* 0x1703AD8B: shl edi, 4 */
    if (4u) { _flag_a = recomp_flags_pack((edi << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 4u; /* 0x1703AD8B: shl edi, 4 */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(edi + edx + 0xC)); /* 0x1703AD8E: fcomp dword ptr [edi + edx + 0xc] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1703AD92: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1703AD94: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1703ADA6; /* 0x1703AD97: jne 0x1703ada6 */
L_1703AD99:
    eax = esi; /* 0x1703AD99: mov eax, esi */
    RECOMP_CALL(sub_1703A5A1); /* 0x1703AD9B: call 0x1703a5a1 */
    RECOMP_FLAGS_IN();
    ecx = esi; /* 0x1703ADA0: mov ecx, esi */
    /* test ecx, ecx */ /* 0x1703ADA2: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1703AD7B; /* 0x1703ADA4: ja 0x1703ad7b */
L_1703ADA6:
    edi = POP32_VAL(esp); /* 0x1703ADA6: pop edi */
    esi = POP32_VAL(esp); /* 0x1703ADA7: pop esi */
L_1703ADA8:
    eax = ecx; /* 0x1703ADA8: mov eax, ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1703ADAA: ret  */
    RECOMP_REGS_OUT();
}

void sub_1703ADB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1703ADB0u);

L_1703ADB0:
    /* test ecx, ecx */ /* 0x1703ADB0: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703ADE2; /* 0x1703ADB2: jbe 0x1703ade2 */
L_1703ADB4:
    PUSH32(esp, ebx); /* 0x1703ADB4: push ebx */
L_1703ADB5:
    ebx = ecx + (-0x1); /* 0x1703ADB5: lea ebx, [ecx - 1] */
    if (1u) _cf = (((ebx) >> 0) & 1u); /* 0x1703ADB8: shr ebx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((ebx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx >> 1u; /* 0x1703ADB8: shr ebx, 1 */
    eax = ecx; /* 0x1703ADBA: mov eax, ecx */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x1703ADBC: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x1703ADBC: shl eax, 4 */
    fp_push(*(float*)&MEM32(eax + esi + 0xC)); /* 0x1703ADBF: fld dword ptr [eax + esi + 0xc] */
    edx = ebx; /* 0x1703ADC3: mov edx, ebx */
    if (4u) _cf = (((edx) >> 28) & 1u); /* 0x1703ADC5: shl edx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((edx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 4u; /* 0x1703ADC5: shl edx, 4 */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(edx + esi + 0xC)); /* 0x1703ADC8: fcomp dword ptr [edx + esi + 0xc] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1703ADCC: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1703ADCE: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1703ADE1; /* 0x1703ADD1: jp 0x1703ade1 */
L_1703ADD3:
    PUSH32(esp, ecx); /* 0x1703ADD3: push ecx */
    eax = esi; /* 0x1703ADD4: mov eax, esi */
    RECOMP_CALL(sub_1703A5DC); /* 0x1703ADD6: call 0x1703a5dc */
    RECOMP_FLAGS_IN();
    ecx = ebx; /* 0x1703ADDB: mov ecx, ebx */
    /* test ecx, ecx */ /* 0x1703ADDD: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1703ADB5; /* 0x1703ADDF: ja 0x1703adb5 */
L_1703ADE1:
    ebx = POP32_VAL(esp); /* 0x1703ADE1: pop ebx */
L_1703ADE2:
    eax = ecx; /* 0x1703ADE2: mov eax, ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1703ADE4: ret  */
    RECOMP_REGS_OUT();
}

void sub_1703ADEA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1703ADEAu);

L_1703ADEA:
    edi = edi; /* 0x1703ADEA: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1703ADEC: push ebp */
    ebp = esp; /* 0x1703ADED: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1703ADEF: push ebx */
    PUSH32(esp, edi); /* 0x1703ADF0: push edi */
L_1703ADF1:
    edx = ecx + ecx + 0x1; /* 0x1703ADF1: lea edx, [ecx + ecx + 1] */
    /* cmp edx, MEM32(ebp + 0x8) */ /* 0x1703ADF5: cmp edx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = ecx; /* 0x1703ADF8: mov ebx, ecx */
    if (CMP_AE(_flag_a, _flag_b)) goto L_1703AE17; /* 0x1703ADFA: jae 0x1703ae17 */
L_1703ADFC:
    eax = ecx; /* 0x1703ADFC: mov eax, ecx */
    if (5u) _cf = (((eax) >> 27) & 1u); /* 0x1703ADFE: shl eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack((eax << 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 5u; /* 0x1703ADFE: shl eax, 5 */
    fp_push(*(float*)&MEM32(eax + esi + 0x1C)); /* 0x1703AE01: fld dword ptr [eax + esi + 0x1c] */
    edi = ecx; /* 0x1703AE05: mov edi, ecx */
    if (4u) _cf = (((edi) >> 28) & 1u); /* 0x1703AE07: shl edi, 4 */
    if (4u) { _flag_a = recomp_flags_pack((edi << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 4u; /* 0x1703AE07: shl edi, 4 */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(edi + esi + 0xC)); /* 0x1703AE0A: fcomp dword ptr [edi + esi + 0xc] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1703AE0E: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1703AE10: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1703AE17; /* 0x1703AE13: jp 0x1703ae17 */
L_1703AE15:
    ebx = edx; /* 0x1703AE15: mov ebx, edx */
L_1703AE17:
    edx = ecx + ecx + 0x2; /* 0x1703AE17: lea edx, [ecx + ecx + 2] */
    /* cmp edx, MEM32(ebp + 0x8) */ /* 0x1703AE1B: cmp edx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1703AE3B; /* 0x1703AE1E: jae 0x1703ae3b */
L_1703AE20:
    eax = ecx; /* 0x1703AE20: mov eax, ecx */
    if (5u) _cf = (((eax) >> 27) & 1u); /* 0x1703AE22: shl eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack((eax << 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 5u; /* 0x1703AE22: shl eax, 5 */
    fp_push(*(float*)&MEM32(eax + esi + 0x2C)); /* 0x1703AE25: fld dword ptr [eax + esi + 0x2c] */
    edi = ebx; /* 0x1703AE29: mov edi, ebx */
    if (4u) _cf = (((edi) >> 28) & 1u); /* 0x1703AE2B: shl edi, 4 */
    if (4u) { _flag_a = recomp_flags_pack((edi << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 4u; /* 0x1703AE2B: shl edi, 4 */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(edi + esi + 0xC)); /* 0x1703AE2E: fcomp dword ptr [edi + esi + 0xc] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1703AE32: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1703AE34: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1703AE3B; /* 0x1703AE37: jp 0x1703ae3b */
L_1703AE39:
    ebx = edx; /* 0x1703AE39: mov ebx, edx */
L_1703AE3B:
    /* cmp ebx, ecx */ /* 0x1703AE3B: cmp ebx, ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703AE4B; /* 0x1703AE3D: je 0x1703ae4b */
L_1703AE3F:
    PUSH32(esp, ecx); /* 0x1703AE3F: push ecx */
    eax = esi; /* 0x1703AE40: mov eax, esi */
    RECOMP_CALL(sub_1703A5DC); /* 0x1703AE42: call 0x1703a5dc */
    RECOMP_FLAGS_IN();
    ecx = ebx; /* 0x1703AE47: mov ecx, ebx */
    RECOMP_BACKEDGE();
    goto L_1703ADF1; /* 0x1703AE49: jmp 0x1703adf1 */
L_1703AE4B:
    edi = POP32_VAL(esp); /* 0x1703AE4B: pop edi */
    eax = ecx; /* 0x1703AE4C: mov eax, ecx */
    ebx = POP32_VAL(esp); /* 0x1703AE4E: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1703AE4F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1703AE50: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1703AE58(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1703AE58u);

L_1703AE58:
    edi = edi; /* 0x1703AE58: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1703AE5A: push ebp */
    ebp = esp; /* 0x1703AE5B: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x1703AE5D: sub esp, 0x28 */
    _flag_k = FK_CMP;
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x1703AE60: fld qword ptr [ebp + 8] */
    edx = MEM32(ebp + 0x18); /* 0x1703AE63: mov edx, dword ptr [ebp + 0x18] */
    fp_push(*(float*)&MEM32(edx)); /* 0x1703AE66: fld dword ptr [edx] */
    PUSH32(esp, ebx); /* 0x1703AE68: push ebx */
    ebx = MEM32(ebp + 0x14); /* 0x1703AE69: mov ebx, dword ptr [ebp + 0x14] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1703AE6C: fcomp st(1) */
    fp_pop();
    PUSH32(esp, esi); /* 0x1703AE6E: push esi */
    PUSH32(esp, edi); /* 0x1703AE6F: push edi */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1703AE70: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1703AE72: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1703AF40; /* 0x1703AE75: jp 0x1703af40 */
L_1703AE7B:
    eax = ebx + ebx * 4; /* 0x1703AE7B: lea eax, [ebx + ebx*4] */
    fp_push(*(float*)&MEM32(edx + eax * 4 + (-0x14))); /* 0x1703AE7E: fld dword ptr [edx + eax*4 - 0x14] */
    fp_push(_st[1]); /* 0x1703AE82: fld st(1) */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1703AE84: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1703AE86: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1703AE88: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1703AF40; /* 0x1703AE8B: jp 0x1703af40 */
L_1703AE91:
    /* cmp ebx, 1 */ /* 0x1703AE91: cmp ebx, 1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1703AF40; /* 0x1703AE94: jbe 0x1703af40 */
L_1703AE9A:
    eax = MEM32(ebp + 0x1C); /* 0x1703AE9A: mov eax, dword ptr [ebp + 0x1c] */
    ecx = MEM32(eax); /* 0x1703AE9D: mov ecx, dword ptr [eax] */
    eax = ecx + ecx * 4; /* 0x1703AE9F: lea eax, [ecx + ecx*4] */
    esi = edx + eax * 4; /* 0x1703AEA2: lea esi, [edx + eax*4] */
    fp_push(*(float*)&MEM32(esi + 0x14)); /* 0x1703AEA5: fld dword ptr [esi + 0x14] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1703AEA8: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1703AEAA: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1703AEAC: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1703AEC9; /* 0x1703AEAF: jp 0x1703aec9 */
L_1703AEB1:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1703AEB1: inc ecx */
    _flag_k = FK_INC;
    eax = ecx + ecx * 4 + 0x5; /* 0x1703AEB2: lea eax, [ecx + ecx*4 + 5] */
    fp_push(*(float*)&MEM32(edx + eax * 4)); /* 0x1703AEB6: fld dword ptr [edx + eax*4] */
    edi = ecx; /* 0x1703AEB9: mov edi, ecx */
    fp_push(_st[1]); /* 0x1703AEBB: fld st(1) */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1703AEBD: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1703AEBF: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1703AEC1: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_1703AF1F; /* 0x1703AEC4: jnp 0x1703af1f */
L_1703AEC6:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x1703AEC6: dec ebx */
    _flag_k = FK_DEC;
    goto L_1703AF1B; /* 0x1703AEC7: jmp 0x1703af1b */
L_1703AEC9:
    fp_push(*(float*)&MEM32(esi)); /* 0x1703AEC9: fld dword ptr [esi] */
    ebx = ecx; /* 0x1703AECB: mov ebx, ecx */
    fp_push(_st[1]); /* 0x1703AECD: fld st(1) */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1703AECF: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1703AED1: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1703AED3: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1703AEEC; /* 0x1703AED6: jp 0x1703aeec */
L_1703AED8:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1703AED8: dec ecx */
    _flag_k = FK_DEC;
    eax = ecx + ecx * 4; /* 0x1703AED9: lea eax, [ecx + ecx*4] */
    fp_push(*(float*)&MEM32(edx + eax * 4)); /* 0x1703AEDC: fld dword ptr [edx + eax*4] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1703AEDF: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1703AEE1: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1703AEE3: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_1703AF1F; /* 0x1703AEE6: jnp 0x1703af1f */
L_1703AEE8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1703AEE8: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1703AF1B; /* 0x1703AEEA: jmp 0x1703af1b */
L_1703AEEC:
    edi = ecx; /* 0x1703AEEC: mov edi, ecx */
    goto L_1703AF1B; /* 0x1703AEEE: jmp 0x1703af1b */
L_1703AEF0:
    ecx = ebx + edi; /* 0x1703AEF0: lea ecx, [ebx + edi] */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x1703AEF3: shr ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((ecx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 1u; /* 0x1703AEF3: shr ecx, 1 */
    eax = ecx + ecx * 4; /* 0x1703AEF5: lea eax, [ecx + ecx*4] */
    esi = edx + eax * 4; /* 0x1703AEF8: lea esi, [edx + eax*4] */
    fp_push(*(float*)&MEM32(esi)); /* 0x1703AEFB: fld dword ptr [esi] */
    fp_push(_st[1]); /* 0x1703AEFD: fld st(1) */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1703AEFF: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1703AF01: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1703AF03: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1703AF0C; /* 0x1703AF06: jp 0x1703af0c */
L_1703AF08:
    ebx = ecx; /* 0x1703AF08: mov ebx, ecx */
    goto L_1703AF1B; /* 0x1703AF0A: jmp 0x1703af1b */
L_1703AF0C:
    fp_push(*(float*)&MEM32(esi + 0x14)); /* 0x1703AF0C: fld dword ptr [esi + 0x14] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1703AF0F: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1703AF11: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1703AF13: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1703AF1F; /* 0x1703AF16: jp 0x1703af1f */
L_1703AF18:
    edi = ecx + 0x1; /* 0x1703AF18: lea edi, [ecx + 1] */
L_1703AF1B:
    /* cmp edi, ebx */ /* 0x1703AF1B: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1703AEF0; /* 0x1703AF1D: jb 0x1703aef0 */
L_1703AF1F:
    eax = MEM32(ebp + 0x1C); /* 0x1703AF1F: mov eax, dword ptr [ebp + 0x1c] */
    MEM32(eax) = ecx; /* 0x1703AF22: mov dword ptr [eax], ecx */
    eax = ecx + ecx * 4; /* 0x1703AF24: lea eax, [ecx + ecx*4] */
    eax = edx + eax * 4; /* 0x1703AF27: lea eax, [edx + eax*4] */
    fp_push(*(float*)&MEM32(eax + 0x14)); /* 0x1703AF2A: fld dword ptr [eax + 0x14] */
    _st[0] -= (double)*(float*)ADDR(eax); /* 0x1703AF2D: fsub dword ptr [eax] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + 0x8) = _v; } /* 0x1703AF2F: fstp qword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(eax)); /* 0x1703AF32: fld dword ptr [eax] */
    eax = ecx; /* 0x1703AF34: mov eax, ecx */
    _st[0] = _st[1] - _st[0]; /* 0x1703AF36: fsubr st(1) */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1703AF38: inc ecx */
    _flag_k = FK_INC;
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x8)) = _v; } /* 0x1703AF39: fstp qword ptr [ebp - 8] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1703AF3C: fstp st(0) */
    goto L_1703AF5F; /* 0x1703AF3E: jmp 0x1703af5f */
L_1703AF40:
    fp_push(*(float*)&MEM32(edx)); /* 0x1703AF40: fld dword ptr [edx] */
    fp_push(_st[1]); /* 0x1703AF42: fld st(1) */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1703AF44: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1703AF46: fnstsw ax */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1703AF48: fstp st(0) */
    /* test HI8(eax), 0x41u */ /* 0x1703AF4A: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1703AF55; /* 0x1703AF4D: jp 0x1703af55 */
L_1703AF4F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1703AF4F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1703AF51: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1703AF5A; /* 0x1703AF53: jmp 0x1703af5a */
L_1703AF55:
    eax = ebx + (-0x1); /* 0x1703AF55: lea eax, [ebx - 1] */
    ecx = eax; /* 0x1703AF58: mov ecx, eax */
L_1703AF5A:
    fp_push(0.0); /* 0x1703AF5A: fldz  */
    { double _v = fp_pop(); *(double*)ADDR(ebp + 0x8) = _v; } /* 0x1703AF5C: fstp qword ptr [ebp + 8] */
L_1703AF5F:
    eax = eax + eax * 4; /* 0x1703AF5F: lea eax, [eax + eax*4] */
    eax = edx + eax * 4; /* 0x1703AF62: lea eax, [edx + eax*4] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x1703AF65: fld dword ptr [eax + 4] */
    _st[0] = -_st[0]; /* 0x1703AF68: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x1703AF6A: fstp dword ptr [ebp - 0x18] */
    fp_push(*(float*)&MEM32(eax + 0x8)); /* 0x1703AF6D: fld dword ptr [eax + 8] */
    _st[0] = -_st[0]; /* 0x1703AF70: fchs  */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x1703AF72: fst dword ptr [ebp - 0x14] */
    fp_push(*(float*)&MEM32(eax + 0xC)); /* 0x1703AF75: fld dword ptr [eax + 0xc] */
    _st[0] = -_st[0]; /* 0x1703AF78: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x1703AF7A: fstp dword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(eax + 0x10)); /* 0x1703AF7D: fld dword ptr [eax + 0x10] */
    eax = ecx + ecx * 4; /* 0x1703AF80: lea eax, [ecx + ecx*4] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x1703AF83: fst dword ptr [ebp - 0xc] */
    eax = edx + eax * 4; /* 0x1703AF86: lea eax, [edx + eax*4] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x1703AF89: fld dword ptr [eax + 4] */
    _st[0] = -_st[0]; /* 0x1703AF8C: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x1703AF8E: fstp dword ptr [ebp - 0x28] */
    fp_push(*(float*)&MEM32(eax + 0x8)); /* 0x1703AF91: fld dword ptr [eax + 8] */
    _st[0] = -_st[0]; /* 0x1703AF94: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x1703AF96: fstp dword ptr [ebp - 0x24] */
    fp_push(*(float*)&MEM32(eax + 0xC)); /* 0x1703AF99: fld dword ptr [eax + 0xc] */
    eax = MEM32(eax + 0x10); /* 0x1703AF9C: mov eax, dword ptr [eax + 0x10] */
    _st[0] = -_st[0]; /* 0x1703AF9F: fchs  */
    MEM32(ebp + (-0x1C)) = eax; /* 0x1703AFA1: mov dword ptr [ebp - 0x1c], eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x1703AFA4: fstp dword ptr [ebp - 0x20] */
    fp_push(*(double*)ADDR(0x17001DA8)); /* 0x1703AFA7: fld qword ptr [0x17001da8] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ebp + 0x8)); /* 0x1703AFAD: fcomp qword ptr [ebp + 8] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1703AFB0: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1703AFB2: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1703B02F; /* 0x1703AFB5: jp 0x1703b02f */
L_1703AFB7:
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x1703AFB7: fld qword ptr [ebp - 8] */
    _st[0] /= *(double*)ADDR(ebp + 0x8); /* 0x1703AFBA: fdiv qword ptr [ebp + 8] */
    fp_push(0.0); /* 0x1703AFBD: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1703AFBF: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1703AFC1: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1703AFC3: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703AFDB; /* 0x1703AFC6: je 0x1703afdb */
L_1703AFC8:
    fp_push(_st[0]); /* 0x1703AFC8: fld st(0) */
    fp_push(1.0); /* 0x1703AFCA: fld1  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1703AFCC: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1703AFCE: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1703AFD0: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1703AFDB; /* 0x1703AFD3: jp 0x1703afdb */
L_1703AFD5:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1703AFD5: fstp st(0) */
    fp_push(1.0); /* 0x1703AFD7: fld1  */
    goto L_1703AFEA; /* 0x1703AFD9: jmp 0x1703afea */
L_1703AFDB:
    fp_push(0.0); /* 0x1703AFDB: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1703AFDD: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1703AFDF: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1703AFE1: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1703AFEA; /* 0x1703AFE4: jne 0x1703afea */
L_1703AFE6:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1703AFE6: fstp st(0) */
    fp_push(0.0); /* 0x1703AFE8: fldz  */
L_1703AFEA:
    fp_push(*(float*)&MEM32(ebp + (-0x28))); /* 0x1703AFEA: fld dword ptr [ebp - 0x28] */
    eax = MEM32(ebp + 0x20); /* 0x1703AFED: mov eax, dword ptr [ebp + 0x20] */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x18)); /* 0x1703AFF0: fsub dword ptr [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x1703AFF3: push eax */
    PUSH32(esp, eax); /* 0x1703AFF4: push eax */
    _st[0] *= _st[1]; /* 0x1703AFF5: fmul st(1) */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x18)); /* 0x1703AFF7: fadd dword ptr [ebp - 0x18] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x1703AFFA: fstp dword ptr [eax] */
    fp_push(*(float*)&MEM32(ebp + (-0x24))); /* 0x1703AFFC: fld dword ptr [ebp - 0x24] */
    _st[0] -= _st[3]; /* 0x1703AFFF: fsub st(3) */
    _st[0] *= _st[1]; /* 0x1703B001: fmul st(1) */
    _st[0] += _st[3]; /* 0x1703B003: fadd st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x4) = _v; } /* 0x1703B005: fstp dword ptr [eax + 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x20))); /* 0x1703B008: fld dword ptr [ebp - 0x20] */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x10)); /* 0x1703B00B: fsub dword ptr [ebp - 0x10] */
    _st[0] *= _st[1]; /* 0x1703B00E: fmul st(1) */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x10)); /* 0x1703B010: fadd dword ptr [ebp - 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x8) = _v; } /* 0x1703B013: fstp dword ptr [eax + 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x1C))); /* 0x1703B016: fld dword ptr [ebp - 0x1c] */
    _st[0] -= _st[2]; /* 0x1703B019: fsub st(2) */
    _st[0] *= _st[1]; /* 0x1703B01B: fmul st(1) */
    _st[0] += _st[2]; /* 0x1703B01D: fadd st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xC) = _v; } /* 0x1703B01F: fstp dword ptr [eax + 0xc] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1703B022: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1703B024: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1703B026: fstp st(0) */
    RECOMP_CALL(sub_1704119F); /* 0x1703B028: call 0x1704119f */
    RECOMP_FLAGS_IN();
    goto L_1703B046; /* 0x1703B02D: jmp 0x1703b046 */
L_1703B02F:
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x1703B02F: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1703B033: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1703B035: fstp st(0) */
    esi = ebp + (-0x18); /* 0x1703B037: lea esi, [ebp - 0x18] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1703B03F; /* 0x1703B03A: jne 0x1703b03f */
L_1703B03C:
    esi = ebp + (-0x28); /* 0x1703B03C: lea esi, [ebp - 0x28] */
L_1703B03F:
    edi = MEM32(ebp + 0x20); /* 0x1703B03F: mov edi, dword ptr [ebp + 0x20] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703B042: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703B043: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703B044: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703B045: movsd dword ptr es:[edi], dword ptr [esi] */
L_1703B046:
    edi = POP32_VAL(esp); /* 0x1703B046: pop edi */
    esi = POP32_VAL(esp); /* 0x1703B047: pop esi */
    ebx = POP32_VAL(esp); /* 0x1703B048: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1703B049: leave  */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x1703B04A: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_1703B052(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1703B052u);

L_1703B052:
    edi = edi; /* 0x1703B052: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1703B054: push ebp */
    ebp = esp; /* 0x1703B055: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1703B057: push ecx */
    PUSH32(esp, ecx); /* 0x1703B058: push ecx */
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x1703B059: fld qword ptr [ebp + 8] */
    edx = MEM32(ebp + 0x18); /* 0x1703B05C: mov edx, dword ptr [ebp + 0x18] */
    fp_push(*(float*)&MEM32(edx)); /* 0x1703B05F: fld dword ptr [edx] */
    PUSH32(esp, ebx); /* 0x1703B061: push ebx */
    ebx = MEM32(ebp + 0x14); /* 0x1703B062: mov ebx, dword ptr [ebp + 0x14] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1703B065: fcomp st(1) */
    fp_pop();
    PUSH32(esp, esi); /* 0x1703B067: push esi */
    PUSH32(esp, edi); /* 0x1703B068: push edi */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1703B069: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1703B06B: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1703B147; /* 0x1703B06E: jp 0x1703b147 */
L_1703B074:
    eax = ebx; /* 0x1703B074: mov eax, ebx */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x1703B076: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x1703B076: shl eax, 4 */
    fp_push(*(float*)&MEM32(eax + edx + (-0x10))); /* 0x1703B079: fld dword ptr [eax + edx - 0x10] */
    fp_push(_st[1]); /* 0x1703B07D: fld st(1) */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1703B07F: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1703B081: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1703B083: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1703B147; /* 0x1703B086: jp 0x1703b147 */
L_1703B08C:
    /* cmp ebx, 1 */ /* 0x1703B08C: cmp ebx, 1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1703B147; /* 0x1703B08F: jbe 0x1703b147 */
L_1703B095:
    eax = MEM32(ebp + 0x1C); /* 0x1703B095: mov eax, dword ptr [ebp + 0x1c] */
    ecx = MEM32(eax); /* 0x1703B098: mov ecx, dword ptr [eax] */
    eax = ecx; /* 0x1703B09A: mov eax, ecx */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x1703B09C: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x1703B09C: shl eax, 4 */
    esi = eax + edx; /* 0x1703B09F: lea esi, [eax + edx] */
    fp_push(*(float*)&MEM32(esi + 0x10)); /* 0x1703B0A2: fld dword ptr [esi + 0x10] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1703B0A5: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1703B0A7: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1703B0A9: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1703B0C8; /* 0x1703B0AC: jp 0x1703b0c8 */
L_1703B0AE:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1703B0AE: inc ecx */
    _flag_k = FK_INC;
    eax = ecx + 0x1; /* 0x1703B0AF: lea eax, [ecx + 1] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x1703B0B2: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x1703B0B2: shl eax, 4 */
    fp_push(*(float*)&MEM32(eax + edx)); /* 0x1703B0B5: fld dword ptr [eax + edx] */
    edi = ecx; /* 0x1703B0B8: mov edi, ecx */
    fp_push(_st[1]); /* 0x1703B0BA: fld st(1) */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1703B0BC: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1703B0BE: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1703B0C0: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_1703B122; /* 0x1703B0C3: jnp 0x1703b122 */
L_1703B0C5:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x1703B0C5: dec ebx */
    _flag_k = FK_DEC;
    goto L_1703B11E; /* 0x1703B0C6: jmp 0x1703b11e */
L_1703B0C8:
    fp_push(*(float*)&MEM32(esi)); /* 0x1703B0C8: fld dword ptr [esi] */
    ebx = ecx; /* 0x1703B0CA: mov ebx, ecx */
    fp_push(_st[1]); /* 0x1703B0CC: fld st(1) */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1703B0CE: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1703B0D0: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1703B0D2: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1703B0ED; /* 0x1703B0D5: jp 0x1703b0ed */
L_1703B0D7:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1703B0D7: dec ecx */
    _flag_k = FK_DEC;
    eax = ecx; /* 0x1703B0D8: mov eax, ecx */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x1703B0DA: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x1703B0DA: shl eax, 4 */
    fp_push(*(float*)&MEM32(eax + edx)); /* 0x1703B0DD: fld dword ptr [eax + edx] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1703B0E0: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1703B0E2: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1703B0E4: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_1703B122; /* 0x1703B0E7: jnp 0x1703b122 */
L_1703B0E9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1703B0E9: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1703B11E; /* 0x1703B0EB: jmp 0x1703b11e */
L_1703B0ED:
    edi = ecx; /* 0x1703B0ED: mov edi, ecx */
    goto L_1703B11E; /* 0x1703B0EF: jmp 0x1703b11e */
L_1703B0F1:
    ecx = ebx + edi; /* 0x1703B0F1: lea ecx, [ebx + edi] */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x1703B0F4: shr ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((ecx >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 1u; /* 0x1703B0F4: shr ecx, 1 */
    eax = ecx; /* 0x1703B0F6: mov eax, ecx */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x1703B0F8: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x1703B0F8: shl eax, 4 */
    esi = eax + edx; /* 0x1703B0FB: lea esi, [eax + edx] */
    fp_push(*(float*)&MEM32(esi)); /* 0x1703B0FE: fld dword ptr [esi] */
    fp_push(_st[1]); /* 0x1703B100: fld st(1) */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1703B102: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1703B104: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1703B106: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1703B10F; /* 0x1703B109: jp 0x1703b10f */
L_1703B10B:
    ebx = ecx; /* 0x1703B10B: mov ebx, ecx */
    goto L_1703B11E; /* 0x1703B10D: jmp 0x1703b11e */
L_1703B10F:
    fp_push(*(float*)&MEM32(esi + 0x10)); /* 0x1703B10F: fld dword ptr [esi + 0x10] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1703B112: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1703B114: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1703B116: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1703B122; /* 0x1703B119: jp 0x1703b122 */
L_1703B11B:
    edi = ecx + 0x1; /* 0x1703B11B: lea edi, [ecx + 1] */
L_1703B11E:
    /* cmp edi, ebx */ /* 0x1703B11E: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1703B0F1; /* 0x1703B120: jb 0x1703b0f1 */
L_1703B122:
    eax = MEM32(ebp + 0x1C); /* 0x1703B122: mov eax, dword ptr [ebp + 0x1c] */
    MEM32(eax) = ecx; /* 0x1703B125: mov dword ptr [eax], ecx */
    eax = ecx; /* 0x1703B127: mov eax, ecx */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x1703B129: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x1703B129: shl eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1703B12C: add eax, edx */
    _flag_k = FK_ADD;
    fp_push(*(float*)&MEM32(eax + 0x10)); /* 0x1703B12E: fld dword ptr [eax + 0x10] */
    esi = ecx; /* 0x1703B131: mov esi, ecx */
    _st[0] -= (double)*(float*)ADDR(eax); /* 0x1703B133: fsub dword ptr [eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1703B135: inc ecx */
    _flag_k = FK_INC;
    { double _v = fp_pop(); *(double*)ADDR(ebp + 0x8) = _v; } /* 0x1703B136: fstp qword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(eax)); /* 0x1703B139: fld dword ptr [eax] */
    _st[0] = _st[1] - _st[0]; /* 0x1703B13B: fsubr st(1) */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x8)) = _v; } /* 0x1703B13D: fstp qword ptr [ebp - 8] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1703B140: fstp st(0) */
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x1703B142: fld qword ptr [ebp + 8] */
    goto L_1703B163; /* 0x1703B145: jmp 0x1703b163 */
L_1703B147:
    fp_push(*(float*)&MEM32(edx)); /* 0x1703B147: fld dword ptr [edx] */
    fp_push(_st[1]); /* 0x1703B149: fld st(1) */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1703B14B: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1703B14D: fnstsw ax */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1703B14F: fstp st(0) */
    /* test HI8(eax), 0x41u */ /* 0x1703B151: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1703B15C; /* 0x1703B154: jp 0x1703b15c */
L_1703B156:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1703B156: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1703B158: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1703B161; /* 0x1703B15A: jmp 0x1703b161 */
L_1703B15C:
    esi = ebx + (-0x1); /* 0x1703B15C: lea esi, [ebx - 1] */
    ecx = esi; /* 0x1703B15F: mov ecx, esi */
L_1703B161:
    fp_push(0.0); /* 0x1703B161: fldz  */
L_1703B163:
    fp_push(*(double*)ADDR(0x17001DA8)); /* 0x1703B163: fld qword ptr [0x17001da8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1703B169: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1703B16B: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1703B16D: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1703B1DD; /* 0x1703B170: jp 0x1703b1dd */
L_1703B172:
    _st[0] = *(double*)ADDR(ebp + (-0x8)) / _st[0]; /* 0x1703B172: fdivr qword ptr [ebp - 8] */
    fp_push(0.0); /* 0x1703B175: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1703B177: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1703B179: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1703B17B: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703B193; /* 0x1703B17E: je 0x1703b193 */
L_1703B180:
    fp_push(_st[0]); /* 0x1703B180: fld st(0) */
    fp_push(1.0); /* 0x1703B182: fld1  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1703B184: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1703B186: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1703B188: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1703B193; /* 0x1703B18B: jp 0x1703b193 */
L_1703B18D:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1703B18D: fstp st(0) */
    fp_push(1.0); /* 0x1703B18F: fld1  */
    goto L_1703B1A2; /* 0x1703B191: jmp 0x1703b1a2 */
L_1703B193:
    fp_push(0.0); /* 0x1703B193: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1703B195: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1703B197: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1703B199: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1703B1A2; /* 0x1703B19C: jne 0x1703b1a2 */
L_1703B19E:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1703B19E: fstp st(0) */
    fp_push(0.0); /* 0x1703B1A0: fldz  */
L_1703B1A2:
    if (4u) _cf = (((ecx) >> 28) & 1u); /* 0x1703B1A2: shl ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ecx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 4u; /* 0x1703B1A2: shl ecx, 4 */
    ecx = ecx + edx + 0x4; /* 0x1703B1A5: lea ecx, [ecx + edx + 4] */
    fp_push(*(float*)&MEM32(ecx)); /* 0x1703B1A9: fld dword ptr [ecx] */
    if (4u) _cf = (((esi) >> 28) & 1u); /* 0x1703B1AB: shl esi, 4 */
    if (4u) { _flag_a = recomp_flags_pack((esi << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 4u; /* 0x1703B1AB: shl esi, 4 */
    eax = esi + edx + 0x4; /* 0x1703B1AE: lea eax, [esi + edx + 4] */
    _st[0] -= (double)*(float*)ADDR(eax); /* 0x1703B1B2: fsub dword ptr [eax] */
    edx = MEM32(ebp + 0x20); /* 0x1703B1B4: mov edx, dword ptr [ebp + 0x20] */
    _st[0] *= _st[1]; /* 0x1703B1B7: fmul st(1) */
    _st[0] += (double)*(float*)ADDR(eax); /* 0x1703B1B9: fadd dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx) = _v; } /* 0x1703B1BB: fstp dword ptr [edx] */
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x1703B1BD: fld dword ptr [ecx + 4] */
    _st[0] -= (double)*(float*)ADDR(eax + 0x4); /* 0x1703B1C0: fsub dword ptr [eax + 4] */
    _st[0] *= _st[1]; /* 0x1703B1C3: fmul st(1) */
    _st[0] += (double)*(float*)ADDR(eax + 0x4); /* 0x1703B1C5: fadd dword ptr [eax + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx + 0x4) = _v; } /* 0x1703B1C8: fstp dword ptr [edx + 4] */
    fp_push(*(float*)&MEM32(ecx + 0x8)); /* 0x1703B1CB: fld dword ptr [ecx + 8] */
    _st[0] -= (double)*(float*)ADDR(eax + 0x8); /* 0x1703B1CE: fsub dword ptr [eax + 8] */
    _st[0] *= _st[1]; /* 0x1703B1D1: fmul st(1) */
    _st[0] += (double)*(float*)ADDR(eax + 0x8); /* 0x1703B1D3: fadd dword ptr [eax + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx + 0x8) = _v; } /* 0x1703B1D6: fstp dword ptr [edx + 8] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1703B1D9: fstp st(0) */
    goto L_1703B1F4; /* 0x1703B1DB: jmp 0x1703b1f4 */
L_1703B1DD:
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x1703B1DD: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1703B1E1: fstp st(0) */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703B1E7; /* 0x1703B1E3: je 0x1703b1e7 */
L_1703B1E5:
    ecx = esi; /* 0x1703B1E5: mov ecx, esi */
L_1703B1E7:
    edi = MEM32(ebp + 0x20); /* 0x1703B1E7: mov edi, dword ptr [ebp + 0x20] */
    if (4u) _cf = (((ecx) >> 28) & 1u); /* 0x1703B1EA: shl ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ecx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 4u; /* 0x1703B1EA: shl ecx, 4 */
    esi = ecx + edx + 0x4; /* 0x1703B1ED: lea esi, [ecx + edx + 4] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703B1F1: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703B1F2: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703B1F3: movsd dword ptr es:[edi], dword ptr [esi] */
L_1703B1F4:
    edi = POP32_VAL(esp); /* 0x1703B1F4: pop edi */
    esi = POP32_VAL(esp); /* 0x1703B1F5: pop esi */
    ebx = POP32_VAL(esp); /* 0x1703B1F6: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1703B1F7: leave  */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x1703B1F8: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_1703B200(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1703B200u);

L_1703B200:
    edi = edi; /* 0x1703B200: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1703B202: push ebp */
    ebp = esp; /* 0x1703B203: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1703B205: sub esp, 0xc */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x14); /* 0x1703B208: mov eax, dword ptr [ebp + 0x14] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x1703B20B: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x1703B20B: shl eax, 4 */
    PUSH32(esp, ebx); /* 0x1703B20E: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x1703B20F: mov ebx, dword ptr [ebp + 8] */
    edx = eax + ebx; /* 0x1703B212: lea edx, [eax + ebx] */
    eax = MEM32(ebp + 0x10); /* 0x1703B215: mov eax, dword ptr [ebp + 0x10] */
    fp_push(*(float*)&MEM32(edx)); /* 0x1703B218: fld dword ptr [edx] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x1703B21A: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x1703B21A: shl eax, 4 */
    ecx = eax + ebx; /* 0x1703B21D: lea ecx, [eax + ebx] */
    _st[0] -= (double)*(float*)ADDR(ecx); /* 0x1703B220: fsub dword ptr [ecx] */
    PUSH32(esp, esi); /* 0x1703B222: push esi */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x17001DA8)); /* 0x1703B223: fcomp qword ptr [0x17001da8] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1703B229: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1703B22B: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = MEM32(ebp + 0xC); /* 0x1703B22E: mov eax, dword ptr [ebp + 0xc] */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1703B271; /* 0x1703B231: jne 0x1703b271 */
L_1703B233:
    esi = eax; /* 0x1703B233: mov esi, eax */
    if (4u) _cf = (((esi) >> 28) & 1u); /* 0x1703B235: shl esi, 4 */
    if (4u) { _flag_a = recomp_flags_pack((esi << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 4u; /* 0x1703B235: shl esi, 4 */
    fp_push(*(float*)&MEM32(esi + ebx)); /* 0x1703B238: fld dword ptr [esi + ebx] */
    _st[0] -= (double)*(float*)ADDR(ecx); /* 0x1703B23B: fsub dword ptr [ecx] */
    fp_push(*(float*)&MEM32(edx)); /* 0x1703B23D: fld dword ptr [edx] */
    _st[0] -= (double)*(float*)ADDR(ecx); /* 0x1703B23F: fsub dword ptr [ecx] */
    { double _v = fp_pop(); _st[0] = _v == 0.0 ? _st[0] : _st[0] / _v; } /* 0x1703B241: fdivp st(1) */
    fp_push(*(float*)&MEM32(edx + 0x4)); /* 0x1703B243: fld dword ptr [edx + 4] */
    _st[0] -= (double)*(float*)ADDR(ecx + 0x4); /* 0x1703B246: fsub dword ptr [ecx + 4] */
    _st[0] *= _st[1]; /* 0x1703B249: fmul st(1) */
    _st[0] += (double)*(float*)ADDR(ecx + 0x4); /* 0x1703B24B: fadd dword ptr [ecx + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x1703B24E: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(edx + 0x8)); /* 0x1703B251: fld dword ptr [edx + 8] */
    _st[0] -= (double)*(float*)ADDR(ecx + 0x8); /* 0x1703B254: fsub dword ptr [ecx + 8] */
    _st[0] *= _st[1]; /* 0x1703B257: fmul st(1) */
    _st[0] += (double)*(float*)ADDR(ecx + 0x8); /* 0x1703B259: fadd dword ptr [ecx + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x1703B25C: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(edx + 0xC)); /* 0x1703B25F: fld dword ptr [edx + 0xc] */
    _st[0] -= (double)*(float*)ADDR(ecx + 0xC); /* 0x1703B262: fsub dword ptr [ecx + 0xc] */
    _st[0] *= _st[1]; /* 0x1703B265: fmul st(1) */
    _st[0] += (double)*(float*)ADDR(ecx + 0xC); /* 0x1703B267: fadd dword ptr [ecx + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x1703B26A: fstp dword ptr [ebp - 4] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1703B26D: fstp st(0) */
    goto L_1703B27C; /* 0x1703B26F: jmp 0x1703b27c */
L_1703B271:
    PUSH32(esp, edi); /* 0x1703B271: push edi */
    esi = ecx + 0x4; /* 0x1703B272: lea esi, [ecx + 4] */
    edi = ebp + (-0xC); /* 0x1703B275: lea edi, [ebp - 0xc] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703B278: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703B279: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703B27A: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x1703B27B: pop edi */
L_1703B27C:
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x1703B27C: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x1703B27C: shl eax, 4 */
    eax = eax + ebx + 0x4; /* 0x1703B27F: lea eax, [eax + ebx + 4] */
    fp_push(*(float*)&MEM32(eax)); /* 0x1703B283: fld dword ptr [eax] */
    esi = POP32_VAL(esp); /* 0x1703B285: pop esi */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0xC)); /* 0x1703B286: fsub dword ptr [ebp - 0xc] */
    ebx = POP32_VAL(esp); /* 0x1703B289: pop ebx */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x1703B28A: fld dword ptr [eax + 4] */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x8)); /* 0x1703B28D: fsub dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(eax + 0x8)); /* 0x1703B290: fld dword ptr [eax + 8] */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x1703B293: fsub dword ptr [ebp - 4] */
    fp_push(_st[0]); /* 0x1703B296: fld st(0) */
    _st[0] *= _st[1]; /* 0x1703B298: fmul st(1) */
    fp_push(_st[2]); /* 0x1703B29A: fld st(2) */
    _st[0] *= _st[3]; /* 0x1703B29C: fmul st(3) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1703B29E: faddp st(1) */
    fp_push(_st[3]); /* 0x1703B2A0: fld st(3) */
    _st[0] *= _st[4]; /* 0x1703B2A2: fmul st(4) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1703B2A4: faddp st(1) */
    { _st[3] = _st[0]; g_st_i64[3] = g_st_i64[0]; fp_pop(); } /* 0x1703B2A6: fstp st(3) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1703B2A8: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1703B2AA: fstp st(0) */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1703B2AC: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1703B2AD: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1703B2B5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1703B2B5u);

L_1703B2B5:
    edi = edi; /* 0x1703B2B5: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1703B2B7: push ebp */
    ebp = esp; /* 0x1703B2B8: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1703B2BA: sub esp, 0x10 */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x14); /* 0x1703B2BD: mov eax, dword ptr [ebp + 0x14] */
    eax = eax + eax * 4; /* 0x1703B2C0: lea eax, [eax + eax*4] */
    PUSH32(esp, ebx); /* 0x1703B2C3: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x1703B2C4: mov ebx, dword ptr [ebp + 8] */
    edx = ebx + eax * 4; /* 0x1703B2C7: lea edx, [ebx + eax*4] */
    eax = MEM32(ebp + 0x10); /* 0x1703B2CA: mov eax, dword ptr [ebp + 0x10] */
    fp_push(*(float*)&MEM32(edx)); /* 0x1703B2CD: fld dword ptr [edx] */
    eax = eax + eax * 4; /* 0x1703B2CF: lea eax, [eax + eax*4] */
    ecx = ebx + eax * 4; /* 0x1703B2D2: lea ecx, [ebx + eax*4] */
    _st[0] -= (double)*(float*)ADDR(ecx); /* 0x1703B2D5: fsub dword ptr [ecx] */
    PUSH32(esp, esi); /* 0x1703B2D7: push esi */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x17001DA8)); /* 0x1703B2D8: fcomp qword ptr [0x17001da8] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1703B2DE: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1703B2E0: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1703B33C; /* 0x1703B2E3: jne 0x1703b33c */
L_1703B2E5:
    esi = MEM32(ebp + 0xC); /* 0x1703B2E5: mov esi, dword ptr [ebp + 0xc] */
    eax = esi + esi * 4; /* 0x1703B2E8: lea eax, [esi + esi*4] */
    fp_push(*(float*)&MEM32(ebx + eax * 4)); /* 0x1703B2EB: fld dword ptr [ebx + eax*4] */
    eax = ebp + (-0x10); /* 0x1703B2EE: lea eax, [ebp - 0x10] */
    _st[0] -= (double)*(float*)ADDR(ecx); /* 0x1703B2F1: fsub dword ptr [ecx] */
    PUSH32(esp, eax); /* 0x1703B2F3: push eax */
    fp_push(*(float*)&MEM32(edx)); /* 0x1703B2F4: fld dword ptr [edx] */
    PUSH32(esp, eax); /* 0x1703B2F6: push eax */
    _st[0] -= (double)*(float*)ADDR(ecx); /* 0x1703B2F7: fsub dword ptr [ecx] */
    { double _v = fp_pop(); _st[0] = _v == 0.0 ? _st[0] : _st[0] / _v; } /* 0x1703B2F9: fdivp st(1) */
    fp_push(*(float*)&MEM32(edx + 0x4)); /* 0x1703B2FB: fld dword ptr [edx + 4] */
    _st[0] -= (double)*(float*)ADDR(ecx + 0x4); /* 0x1703B2FE: fsub dword ptr [ecx + 4] */
    _st[0] *= _st[1]; /* 0x1703B301: fmul st(1) */
    _st[0] += (double)*(float*)ADDR(ecx + 0x4); /* 0x1703B303: fadd dword ptr [ecx + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x1703B306: fstp dword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(edx + 0x8)); /* 0x1703B309: fld dword ptr [edx + 8] */
    _st[0] -= (double)*(float*)ADDR(ecx + 0x8); /* 0x1703B30C: fsub dword ptr [ecx + 8] */
    _st[0] *= _st[1]; /* 0x1703B30F: fmul st(1) */
    _st[0] += (double)*(float*)ADDR(ecx + 0x8); /* 0x1703B311: fadd dword ptr [ecx + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x1703B314: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(edx + 0xC)); /* 0x1703B317: fld dword ptr [edx + 0xc] */
    _st[0] -= (double)*(float*)ADDR(ecx + 0xC); /* 0x1703B31A: fsub dword ptr [ecx + 0xc] */
    _st[0] *= _st[1]; /* 0x1703B31D: fmul st(1) */
    _st[0] += (double)*(float*)ADDR(ecx + 0xC); /* 0x1703B31F: fadd dword ptr [ecx + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x1703B322: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(edx + 0x10)); /* 0x1703B325: fld dword ptr [edx + 0x10] */
    _st[0] -= (double)*(float*)ADDR(ecx + 0x10); /* 0x1703B328: fsub dword ptr [ecx + 0x10] */
    _st[0] *= _st[1]; /* 0x1703B32B: fmul st(1) */
    _st[0] += (double)*(float*)ADDR(ecx + 0x10); /* 0x1703B32D: fadd dword ptr [ecx + 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x1703B330: fstp dword ptr [ebp - 4] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1703B333: fstp st(0) */
    RECOMP_CALL(sub_1704119F); /* 0x1703B335: call 0x1704119f */
    RECOMP_FLAGS_IN();
    goto L_1703B34B; /* 0x1703B33A: jmp 0x1703b34b */
L_1703B33C:
    PUSH32(esp, edi); /* 0x1703B33C: push edi */
    esi = ecx + 0x4; /* 0x1703B33D: lea esi, [ecx + 4] */
    edi = ebp + (-0x10); /* 0x1703B340: lea edi, [ebp - 0x10] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703B343: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703B344: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703B345: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703B346: movsd dword ptr es:[edi], dword ptr [esi] */
    esi = MEM32(ebp + 0xC); /* 0x1703B347: mov esi, dword ptr [ebp + 0xc] */
    edi = POP32_VAL(esp); /* 0x1703B34A: pop edi */
L_1703B34B:
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x1703B34B: fld dword ptr [ebp - 4] */
    eax = esi + esi * 4; /* 0x1703B34E: lea eax, [esi + esi*4] */
    ebx = ebx + eax * 4 + 0x4; /* 0x1703B351: lea ebx, [ebx + eax*4 + 4] */
    _st[0] *= (double)*(float*)ADDR(ebx + 0xC); /* 0x1703B355: fmul dword ptr [ebx + 0xc] */
    esi = POP32_VAL(esp); /* 0x1703B358: pop esi */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x1703B359: fld dword ptr [ebp - 8] */
    _st[0] *= (double)*(float*)ADDR(ebx + 0x8); /* 0x1703B35C: fmul dword ptr [ebx + 8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1703B35F: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x1703B361: fld dword ptr [ebp - 0xc] */
    _st[0] *= (double)*(float*)ADDR(ebx + 0x4); /* 0x1703B364: fmul dword ptr [ebx + 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1703B367: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x1703B369: fld dword ptr [ebp - 0x10] */
    _st[0] *= (double)*(float*)ADDR(ebx); /* 0x1703B36C: fmul dword ptr [ebx] */
    ebx = POP32_VAL(esp); /* 0x1703B36E: pop ebx */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1703B36F: faddp st(1) */
    fp_push(1.0); /* 0x1703B371: fld1  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1703B373: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1703B375: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1703B377: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_1703B395; /* 0x1703B37A: jnp 0x1703b395 */
L_1703B37C:
    fp_push(*(float*)&MEM32(0x170018D8)); /* 0x1703B37C: fld dword ptr [0x170018d8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1703B382: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1703B384: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1703B386: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1703B395; /* 0x1703B389: jne 0x1703b395 */
L_1703B38B:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1703B38B: fstp st(0) */
    fp_push(*(float*)&MEM32(0x170018D8)); /* 0x1703B38D: fld dword ptr [0x170018d8] */
    goto L_1703B3A4; /* 0x1703B393: jmp 0x1703b3a4 */
L_1703B395:
    fp_push(1.0); /* 0x1703B395: fld1  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1703B397: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1703B399: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1703B39B: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1703B3A4; /* 0x1703B39E: jp 0x1703b3a4 */
L_1703B3A0:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1703B3A0: fstp st(0) */
    fp_push(1.0); /* 0x1703B3A2: fld1  */
L_1703B3A4:
    fp_push(_st[0]); /* 0x1703B3A4: fld st(0) */
    _st[0] *= _st[1]; /* 0x1703B3A6: fmul st(1) */
    _st[0] = (double)*(float*)ADDR(0x17001424) - _st[0]; /* 0x1703B3A8: fsubr dword ptr [0x17001424] */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x1703B3AE: fstp st(1) */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1703B3B0: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1703B3B1: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1703B3B9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1703B3B9u);

L_1703B3B9:
    edi = edi; /* 0x1703B3B9: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1703B3BB: push ebp */
    ebp = esp; /* 0x1703B3BC: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x1703B3BE: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1703B3C1: push ebx */
    PUSH32(esp, esi); /* 0x1703B3C2: push esi */
    PUSH32(esp, edi); /* 0x1703B3C3: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1703B3C4: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x8), edi */ /* 0x1703B3C6: cmp dword ptr [ebp + 8], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = ecx; /* 0x1703B3C9: mov ebx, ecx */
    MEM32(ebp + (-0x10)) = edi; /* 0x1703B3CB: mov dword ptr [ebp - 0x10], edi */
    MEM32(ebp + (-0x8)) = edi; /* 0x1703B3CE: mov dword ptr [ebp - 8], edi */
    MEM32(ebp + (-0x4)) = edi; /* 0x1703B3D1: mov dword ptr [ebp - 4], edi */
    MEM32(ebp + (-0xC)) = edi; /* 0x1703B3D4: mov dword ptr [ebp - 0xc], edi */
    MEM32(ebp + (-0x14)) = edi; /* 0x1703B3D7: mov dword ptr [ebp - 0x14], edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703B417; /* 0x1703B3DA: je 0x1703b417 */
L_1703B3DC:
    eax = MEM32(ebp + 0x8); /* 0x1703B3DC: mov eax, dword ptr [ebp + 8] */
    edx = eax + 0x1; /* 0x1703B3DF: lea edx, [eax + 1] */
L_1703B3E2:
    SET_LO8(ecx, MEM8(eax)); /* 0x1703B3E2: mov cl, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1703B3E4: inc eax */
    _flag_k = FK_INC;
    /* test LO8(ecx), LO8(ecx) */ /* 0x1703B3E5: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1703B3E2; /* 0x1703B3E7: jne 0x1703b3e2 */
L_1703B3E9:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x1703B3E9: sub eax, edx */
    _flag_k = FK_CMP;
    esi = eax + 0x1; /* 0x1703B3EB: lea esi, [eax + 1] */
    PUSH32(esp, esi); /* 0x1703B3EE: push esi */
    RECOMP_CALL(sub_1721B01C); /* 0x1703B3EF: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* cmp eax, edi */ /* 0x1703B3F4: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x1703B3F6: pop ecx */
    MEM32(ebp + (-0x8)) = eax; /* 0x1703B3F7: mov dword ptr [ebp - 8], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703B4FA; /* 0x1703B3FA: je 0x1703b4fa */
L_1703B400:
    ecx = esi; /* 0x1703B400: mov ecx, esi */
    esi = MEM32(ebp + 0x8); /* 0x1703B402: mov esi, dword ptr [ebp + 8] */
    edi = eax; /* 0x1703B405: mov edi, eax */
    eax = ecx; /* 0x1703B407: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1703B409: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1703B409: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1703B40C: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x1703B40E: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1703B410: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x1703B413: rep movsb byte ptr es:[edi], byte ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1703B415: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1703B417:
    esi = MEM32(ebp + 0xC); /* 0x1703B417: mov esi, dword ptr [ebp + 0xc] */
    eax = esi; /* 0x1703B41A: mov eax, esi */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x44u); /* 0x1703B41C: imul eax, eax, 0x44 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1703B41F: add eax, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1703B422: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1703B423: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* cmp eax, edi */ /* 0x1703B428: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x1703B42A: pop ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703B447; /* 0x1703B42B: je 0x1703b447 */
L_1703B42D:
    PUSH32(esp, 0x1703A656u); /* 0x1703B42D: push 0x1703a656 */
    PUSH32(esp, esi); /* 0x1703B432: push esi */
    edi = eax + 0x4; /* 0x1703B433: lea edi, [eax + 4] */
    PUSH32(esp, 0x44u); /* 0x1703B436: push 0x44 */
    PUSH32(esp, edi); /* 0x1703B438: push edi */
    MEM32(eax) = esi; /* 0x1703B439: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_1702C116); /* 0x1703B43B: call 0x1702c116 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = edi; /* 0x1703B440: mov dword ptr [ebp - 4], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1703B443: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1703B44A; /* 0x1703B445: jmp 0x1703b44a */
L_1703B447:
    MEM32(ebp + (-0x4)) = edi; /* 0x1703B447: mov dword ptr [ebp - 4], edi */
L_1703B44A:
    /* cmp MEM32(ebp + (-0x4)), edi */ /* 0x1703B44A: cmp dword ptr [ebp - 4], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703B4FA; /* 0x1703B44D: je 0x1703b4fa */
L_1703B453:
    eax = esi; /* 0x1703B453: mov eax, esi */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1703B455: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1703B455: shl eax, 2 */
    PUSH32(esp, eax); /* 0x1703B458: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1703B459: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* cmp eax, edi */ /* 0x1703B45E: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x1703B460: pop ecx */
    MEM32(ebp + (-0xC)) = eax; /* 0x1703B461: mov dword ptr [ebp - 0xc], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703B4FA; /* 0x1703B464: je 0x1703b4fa */
L_1703B46A:
    eax = MEM32(ebp + 0x1C); /* 0x1703B46A: mov eax, dword ptr [ebp + 0x1c] */
    fp_push(1.0); /* 0x1703B46D: fld1  */
    /* cmp eax, edi */ /* 0x1703B46F: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1703B4C2; /* 0x1703B471: jbe 0x1703b4c2 */
L_1703B473:
    esi = eax; /* 0x1703B473: mov esi, eax */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1703B475: fstp st(0) */
    if (3u) _cf = (((esi) >> 29) & 1u); /* 0x1703B477: shl esi, 3 */
    if (3u) { _flag_a = recomp_flags_pack((esi << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 3u; /* 0x1703B477: shl esi, 3 */
    PUSH32(esp, esi); /* 0x1703B47A: push esi */
    RECOMP_CALL(sub_1721B01C); /* 0x1703B47B: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* cmp eax, edi */ /* 0x1703B480: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x1703B482: pop ecx */
    MEM32(ebp + (-0x14)) = eax; /* 0x1703B483: mov dword ptr [ebp - 0x14], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703B4FA; /* 0x1703B486: je 0x1703b4fa */
L_1703B488:
    ecx = esi; /* 0x1703B488: mov ecx, esi */
    esi = MEM32(ebp + 0x20); /* 0x1703B48A: mov esi, dword ptr [ebp + 0x20] */
    edx = ecx; /* 0x1703B48D: mov edx, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1703B48F: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1703B48F: shr ecx, 2 */
    edi = eax; /* 0x1703B492: mov edi, eax */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1703B494: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = edx; /* 0x1703B496: mov ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1703B498: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x1703B49B: rep movsb byte ptr es:[edi], byte ptr [esi] */
    ecx = MEM32(ebp + 0x1C); /* 0x1703B49D: mov ecx, dword ptr [ebp + 0x1c] */
    if (3u) _cf = (((ecx) >> 29) & 1u); /* 0x1703B4A0: shl ecx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((ecx << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 3u; /* 0x1703B4A0: shl ecx, 3 */
    esi = MEM32(ebp + 0xC); /* 0x1703B4A3: mov esi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1703B4A6: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    fp_push(*(float*)&MEM32(ecx + eax + (-0x8))); /* 0x1703B4A8: fld dword ptr [ecx + eax - 8] */
    _st[0] /= *(double*)ADDR(ebp + 0x14); /* 0x1703B4AC: fdiv qword ptr [ebp + 0x14] */
    fp_push(*(double*)ADDR(0x17001DA8)); /* 0x1703B4AF: fld qword ptr [0x17001da8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1703B4B5: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1703B4B7: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1703B4B9: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1703B4C2; /* 0x1703B4BC: jne 0x1703b4c2 */
L_1703B4BE:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1703B4BE: fstp st(0) */
    fp_push(1.0); /* 0x1703B4C0: fld1  */
L_1703B4C2:
    eax = MEM32(ebp + (-0x8)); /* 0x1703B4C2: mov eax, dword ptr [ebp - 8] */
    fp_push(*(double*)ADDR(ebp + 0x14)); /* 0x1703B4C5: fld qword ptr [ebp + 0x14] */
    MEM32(ebx + 0x14) = eax; /* 0x1703B4C8: mov dword ptr [ebx + 0x14], eax */
    { double _v = fp_pop(); *(double*)ADDR(ebx + 0x18) = _v; } /* 0x1703B4CB: fstp qword ptr [ebx + 0x18] */
    eax = MEM32(ebp + (-0x4)); /* 0x1703B4CE: mov eax, dword ptr [ebp - 4] */
    MEM32(ebx + 0x3C) = eax; /* 0x1703B4D1: mov dword ptr [ebx + 0x3c], eax */
    { double _v = fp_pop(); *(double*)ADDR(ebx + 0x20) = _v; } /* 0x1703B4D4: fstp qword ptr [ebx + 0x20] */
    eax = MEM32(ebp + (-0xC)); /* 0x1703B4D7: mov eax, dword ptr [ebp - 0xc] */
    MEM32(ebx + 0x40) = eax; /* 0x1703B4DA: mov dword ptr [ebx + 0x40], eax */
    eax = MEM32(ebp + 0x10); /* 0x1703B4DD: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ebx + 0x28) = eax; /* 0x1703B4E0: mov dword ptr [ebx + 0x28], eax */
    eax = MEM32(ebp + 0x1C); /* 0x1703B4E3: mov eax, dword ptr [ebp + 0x1c] */
    MEM32(ebx + 0x2C) = eax; /* 0x1703B4E6: mov dword ptr [ebx + 0x2c], eax */
    eax = MEM32(ebp + (-0x14)); /* 0x1703B4E9: mov eax, dword ptr [ebp - 0x14] */
    MEM32(ebx + 0x38) = edi; /* 0x1703B4EC: mov dword ptr [ebx + 0x38], edi */
    MEM32(ebx + 0x50) = esi; /* 0x1703B4EF: mov dword ptr [ebx + 0x50], esi */
    MEM32(ebx + 0x30) = eax; /* 0x1703B4F2: mov dword ptr [ebx + 0x30], eax */
    MEM32(ebx + 0x34) = edi; /* 0x1703B4F5: mov dword ptr [ebx + 0x34], edi */
    goto L_1703B52B; /* 0x1703B4F8: jmp 0x1703b52b */
L_1703B4FA:
    /* cmp MEM32(ebp + (-0x8)), edi */ /* 0x1703B4FA: cmp dword ptr [ebp - 8], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x10)) = 0x8007000Eu; /* 0x1703B4FD: mov dword ptr [ebp - 0x10], 0x8007000e */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703B50F; /* 0x1703B504: je 0x1703b50f */
L_1703B506:
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x1703B506: push dword ptr [ebp - 8] */
    RECOMP_CALL(sub_1721B010); /* 0x1703B509: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1703B50E: pop ecx */
L_1703B50F:
    ecx = MEM32(ebp + (-0x4)); /* 0x1703B50F: mov ecx, dword ptr [ebp - 4] */
    /* cmp ecx, edi */ /* 0x1703B512: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703B51D; /* 0x1703B514: je 0x1703b51d */
L_1703B516:
    PUSH32(esp, 3); /* 0x1703B516: push 3 */
    RECOMP_CALL(sub_17039F40); /* 0x1703B518: call 0x17039f40 */
    RECOMP_FLAGS_IN();
L_1703B51D:
    /* cmp MEM32(ebp + (-0xC)), edi */ /* 0x1703B51D: cmp dword ptr [ebp - 0xc], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703B52B; /* 0x1703B520: je 0x1703b52b */
L_1703B522:
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x1703B522: push dword ptr [ebp - 0xc] */
    RECOMP_CALL(sub_1721B010); /* 0x1703B525: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1703B52A: pop ecx */
L_1703B52B:
    eax = MEM32(ebp + (-0x10)); /* 0x1703B52B: mov eax, dword ptr [ebp - 0x10] */
    edi = POP32_VAL(esp); /* 0x1703B52E: pop edi */
    esi = POP32_VAL(esp); /* 0x1703B52F: pop esi */
    ebx = POP32_VAL(esp); /* 0x1703B530: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1703B531: leave  */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x1703B532: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_1703B53A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1703B53Au);

L_1703B53A:
    edi = edi; /* 0x1703B53A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1703B53C: push ebp */
    ebp = esp; /* 0x1703B53D: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x1703B53F: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x8); /* 0x1703B542: mov ecx, dword ptr [ebp + 8] */
    /* cmp eax, MEM32(ecx + 0x38) */ /* 0x1703B545: cmp eax, dword ptr [ecx + 0x38] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x38));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1703B551; /* 0x1703B548: jb 0x1703b551 */
L_1703B54A:
    eax = 0x8876086Cu; /* 0x1703B54A: mov eax, 0x8876086c */
    goto L_1703B566; /* 0x1703B54F: jmp 0x1703b566 */
L_1703B551:
    eax = (uint32_t)((int32_t)eax * (int32_t)0x44u); /* 0x1703B551: imul eax, eax, 0x44 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x3C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + 0x3C); /* 0x1703B554: add eax, dword ptr [ecx + 0x3c] */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(eax + 0x10)); /* 0x1703B557: push dword ptr [eax + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1703B55A: add eax, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1703B55D: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1703B55E: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1703AC36); /* 0x1703B561: call 0x1703ac36 */
    RECOMP_FLAGS_IN();
L_1703B566:
    ebp = POP32_VAL(esp); /* 0x1703B566: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1703B567: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1703B56F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1703B56Fu);

L_1703B56F:
    edi = edi; /* 0x1703B56F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1703B571: push ebp */
    ebp = esp; /* 0x1703B572: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x1703B574: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x8); /* 0x1703B577: mov ecx, dword ptr [ebp + 8] */
    /* cmp eax, MEM32(ecx + 0x38) */ /* 0x1703B57A: cmp eax, dword ptr [ecx + 0x38] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x38));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1703B586; /* 0x1703B57D: jb 0x1703b586 */
L_1703B57F:
    eax = 0x8876086Cu; /* 0x1703B57F: mov eax, 0x8876086c */
    goto L_1703B59B; /* 0x1703B584: jmp 0x1703b59b */
L_1703B586:
    eax = (uint32_t)((int32_t)eax * (int32_t)0x44u); /* 0x1703B586: imul eax, eax, 0x44 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x3C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + 0x3C); /* 0x1703B589: add eax, dword ptr [ecx + 0x3c] */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(eax + 0x18)); /* 0x1703B58C: push dword ptr [eax + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x1703B58F: add eax, 0xc */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1703B592: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1703B593: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1703AC36); /* 0x1703B596: call 0x1703ac36 */
    RECOMP_FLAGS_IN();
L_1703B59B:
    ebp = POP32_VAL(esp); /* 0x1703B59B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1703B59C: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1703B5A4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1703B5A4u);

L_1703B5A4:
    edi = edi; /* 0x1703B5A4: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1703B5A6: push ebp */
    ebp = esp; /* 0x1703B5A7: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x1703B5A9: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x8); /* 0x1703B5AC: mov ecx, dword ptr [ebp + 8] */
    /* cmp eax, MEM32(ecx + 0x38) */ /* 0x1703B5AF: cmp eax, dword ptr [ecx + 0x38] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x38));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1703B5BB; /* 0x1703B5B2: jb 0x1703b5bb */
L_1703B5B4:
    eax = 0x8876086Cu; /* 0x1703B5B4: mov eax, 0x8876086c */
    goto L_1703B5D0; /* 0x1703B5B9: jmp 0x1703b5d0 */
L_1703B5BB:
    eax = (uint32_t)((int32_t)eax * (int32_t)0x44u); /* 0x1703B5BB: imul eax, eax, 0x44 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x3C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + 0x3C); /* 0x1703B5BE: add eax, dword ptr [ecx + 0x3c] */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(eax + 0x14)); /* 0x1703B5C1: push dword ptr [eax + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x1703B5C4: add eax, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1703B5C7: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1703B5C8: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1703AC9D); /* 0x1703B5CB: call 0x1703ac9d */
    RECOMP_FLAGS_IN();
L_1703B5D0:
    ebp = POP32_VAL(esp); /* 0x1703B5D0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1703B5D1: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1703B5D9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1703B5D9u);

L_1703B5D9:
    edi = edi; /* 0x1703B5D9: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1703B5DB: push ebp */
    ebp = esp; /* 0x1703B5DC: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x74u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x74u; /* 0x1703B5DE: sub esp, 0x74 */
    _flag_k = FK_CMP;
    fp_push(0.0); /* 0x1703B5E1: fldz  */
    PUSH32(esp, ebx); /* 0x1703B5E3: push ebx */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x50)) = _v; } /* 0x1703B5E4: fstp dword ptr [ebp - 0x50] */
    PUSH32(esp, esi); /* 0x1703B5E7: push esi */
    PUSH32(esp, edi); /* 0x1703B5E8: push edi */
    fp_push(1.0); /* 0x1703B5E9: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x3C)) = _v; } /* 0x1703B5EB: fstp dword ptr [ebp - 0x3c] */
    esi = ebp + (-0x3C); /* 0x1703B5EE: lea esi, [ebp - 0x3c] */
    fp_push(1.0); /* 0x1703B5F1: fld1  */
    edi = ebp + (-0x4C); /* 0x1703B5F3: lea edi, [ebp - 0x4c] */
    ebx = MEM32(ebp + 0x8); /* 0x1703B5F6: mov ebx, dword ptr [ebp + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x38)) = _v; } /* 0x1703B5F9: fstp dword ptr [ebp - 0x38] */
    eax = MEM32(ebx + 0x38); /* 0x1703B5FC: mov eax, dword ptr [ebx + 0x38] */
    fp_push(1.0); /* 0x1703B5FF: fld1  */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1703B601: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, MEM32(ebx + 0x50) */ /* 0x1703B603: cmp eax, dword ptr [ebx + 0x50] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x50));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x34)) = _v; } /* 0x1703B606: fstp dword ptr [ebp - 0x34] */
    MEM32(ebp + (-0x4)) = edx; /* 0x1703B609: mov dword ptr [ebp - 4], edx */
    fp_push(0.0); /* 0x1703B60C: fldz  */
    MEM32(ebp + (-0x8)) = edx; /* 0x1703B60E: mov dword ptr [ebp - 8], edx */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703B611: movsd dword ptr es:[edi], dword ptr [esi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x74)) = _v; } /* 0x1703B612: fstp dword ptr [ebp - 0x74] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703B615: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_push(0.0); /* 0x1703B616: fldz  */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703B618: movsd dword ptr es:[edi], dword ptr [esi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x40)) = _v; } /* 0x1703B619: fstp dword ptr [ebp - 0x40] */
    fp_push(0.0); /* 0x1703B61C: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x3C)) = _v; } /* 0x1703B61E: fstp dword ptr [ebp - 0x3c] */
    esi = ebp + (-0x40); /* 0x1703B621: lea esi, [ebp - 0x40] */
    fp_push(0.0); /* 0x1703B624: fldz  */
    edi = ebp + (-0x70); /* 0x1703B626: lea edi, [ebp - 0x70] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x38)) = _v; } /* 0x1703B629: fstp dword ptr [ebp - 0x38] */
    MEM32(ebp + (-0xC)) = edx; /* 0x1703B62C: mov dword ptr [ebp - 0xc], edx */
    fp_push(1.0); /* 0x1703B62F: fld1  */
    MEM32(ebp + (-0x10)) = edx; /* 0x1703B631: mov dword ptr [ebp - 0x10], edx */
    ecx = 0x8876086Cu; /* 0x1703B634: mov ecx, 0x8876086c */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x34)) = _v; } /* 0x1703B639: fstp dword ptr [ebp - 0x34] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703B63C: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_push(0.0); /* 0x1703B63D: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x60)) = _v; } /* 0x1703B63F: fstp dword ptr [ebp - 0x60] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703B642: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_push(0.0); /* 0x1703B643: fldz  */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703B645: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703B646: movsd dword ptr es:[edi], dword ptr [esi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x3C)) = _v; } /* 0x1703B647: fstp dword ptr [ebp - 0x3c] */
    fp_push(0.0); /* 0x1703B64A: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x38)) = _v; } /* 0x1703B64C: fstp dword ptr [ebp - 0x38] */
    esi = ebp + (-0x3C); /* 0x1703B64F: lea esi, [ebp - 0x3c] */
    fp_push(0.0); /* 0x1703B652: fldz  */
    edi = ebp + (-0x5C); /* 0x1703B654: lea edi, [ebp - 0x5c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x34)) = _v; } /* 0x1703B657: fstp dword ptr [ebp - 0x34] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703B65A: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703B65B: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703B65C: movsd dword ptr es:[edi], dword ptr [esi] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1703B662; /* 0x1703B65D: jne 0x1703b662 */
L_1703B65F:
    MEM32(ebp + (-0x4)) = ecx; /* 0x1703B65F: mov dword ptr [ebp - 4], ecx */
L_1703B662:
    /* cmp MEM32(ebp + 0xC), edx */ /* 0x1703B662: cmp dword ptr [ebp + 0xc], edx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1703B66A; /* 0x1703B665: jne 0x1703b66a */
L_1703B667:
    MEM32(ebp + (-0x4)) = ecx; /* 0x1703B667: mov dword ptr [ebp - 4], ecx */
L_1703B66A:
    /* cmp MEM32(ebp + 0x1C), edx */ /* 0x1703B66A: cmp dword ptr [ebp + 0x1c], edx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1703B677; /* 0x1703B66D: jne 0x1703b677 */
L_1703B66F:
    /* cmp MEM32(ebp + 0x10), edx */ /* 0x1703B66F: cmp dword ptr [ebp + 0x10], edx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1703B677; /* 0x1703B672: jbe 0x1703b677 */
L_1703B674:
    MEM32(ebp + (-0x4)) = ecx; /* 0x1703B674: mov dword ptr [ebp - 4], ecx */
L_1703B677:
    /* cmp MEM32(ebp + 0x20), edx */ /* 0x1703B677: cmp dword ptr [ebp + 0x20], edx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x20)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1703B684; /* 0x1703B67A: jne 0x1703b684 */
L_1703B67C:
    /* cmp MEM32(ebp + 0x14), edx */ /* 0x1703B67C: cmp dword ptr [ebp + 0x14], edx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1703B684; /* 0x1703B67F: jbe 0x1703b684 */
L_1703B681:
    MEM32(ebp + (-0x4)) = ecx; /* 0x1703B681: mov dword ptr [ebp - 4], ecx */
L_1703B684:
    /* cmp MEM32(ebp + 0x24), edx */ /* 0x1703B684: cmp dword ptr [ebp + 0x24], edx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x24)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1703B691; /* 0x1703B687: jne 0x1703b691 */
L_1703B689:
    /* cmp MEM32(ebp + 0x18), edx */ /* 0x1703B689: cmp dword ptr [ebp + 0x18], edx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1703B691; /* 0x1703B68C: jbe 0x1703b691 */
L_1703B68E:
    MEM32(ebp + (-0x4)) = ecx; /* 0x1703B68E: mov dword ptr [ebp - 4], ecx */
L_1703B691:
    /* cmp MEM32(ebp + (-0x4)), edx */ /* 0x1703B691: cmp dword ptr [ebp - 4], edx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1703BA7B; /* 0x1703B694: jl 0x1703ba7b */
L_1703B69A:
    edi = eax; /* 0x1703B69A: mov edi, eax */
    /* cmp edi, edx */ /* 0x1703B69C: cmp edi, edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x8) = edx; /* 0x1703B69E: mov dword ptr [ebp + 8], edx */
    MEM32(ebp + (-0x14)) = edi; /* 0x1703B6A1: mov dword ptr [ebp - 0x14], edi */
    if (CMP_BE(_flag_a, _flag_b)) goto L_1703B6FD; /* 0x1703B6A4: jbe 0x1703b6fd */
L_1703B6A6:
    eax = MEM32(ebp + 0x8); /* 0x1703B6A6: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebx + 0x40); /* 0x1703B6A9: mov ecx, dword ptr [ebx + 0x40] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x1703B6AC: add edi, eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0xC); /* 0x1703B6AE: mov eax, dword ptr [ebp + 0xc] */
    if (1u) _cf = (((edi) >> 0) & 1u); /* 0x1703B6B1: shr edi, 1 */
    if (1u) { _flag_a = recomp_flags_pack((edi >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 1u; /* 0x1703B6B1: shr edi, 1 */
    edx = MEM32(ecx + edi * 4); /* 0x1703B6B3: mov edx, dword ptr [ecx + edi*4] */
    ecx = MEM32(ebx + 0x3C); /* 0x1703B6B6: mov ecx, dword ptr [ebx + 0x3c] */
    edx = (uint32_t)((int32_t)edx * (int32_t)0x44u); /* 0x1703B6B9: imul edx, edx, 0x44 */
    esi = MEM32(edx + ecx); /* 0x1703B6BC: mov esi, dword ptr [edx + ecx] */
L_1703B6BF:
    SET_LO8(edx, MEM8(esi)); /* 0x1703B6BF: mov dl, byte ptr [esi] */
    SET_LO8(ecx, LO8(edx)); /* 0x1703B6C1: mov cl, dl */
    /* cmp LO8(edx), MEM8(eax) */ /* 0x1703B6C3: cmp dl, byte ptr [eax] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1703B6E1; /* 0x1703B6C5: jne 0x1703b6e1 */
L_1703B6C7:
    /* test LO8(ecx), LO8(ecx) */ /* 0x1703B6C7: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703B6DD; /* 0x1703B6C9: je 0x1703b6dd */
L_1703B6CB:
    SET_LO8(edx, MEM8(esi + 0x1)); /* 0x1703B6CB: mov dl, byte ptr [esi + 1] */
    SET_LO8(ecx, LO8(edx)); /* 0x1703B6CE: mov cl, dl */
    /* cmp LO8(edx), MEM8(eax + 0x1) */ /* 0x1703B6D0: cmp dl, byte ptr [eax + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1703B6E1; /* 0x1703B6D3: jne 0x1703b6e1 */
L_1703B6D5:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1703B6D5: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1703B6D6: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1703B6D7: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1703B6D8: inc eax */
    _flag_k = FK_INC;
    /* test LO8(ecx), LO8(ecx) */ /* 0x1703B6D9: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1703B6BF; /* 0x1703B6DB: jne 0x1703b6bf */
L_1703B6DD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1703B6DD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1703B6E6; /* 0x1703B6DF: jmp 0x1703b6e6 */
L_1703B6E1:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1703B6E1: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1703B6E3: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_1703B6E6:
    /* test eax, eax */ /* 0x1703B6E6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1703B6F0; /* 0x1703B6E8: jge 0x1703b6f0 */
L_1703B6EA:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1703B6EA: inc edi */
    _flag_k = FK_INC;
    MEM32(ebp + 0x8) = edi; /* 0x1703B6EB: mov dword ptr [ebp + 8], edi */
    goto L_1703B6F5; /* 0x1703B6EE: jmp 0x1703b6f5 */
L_1703B6F0:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_LE, _cf)) goto L_1703B746; /* 0x1703B6F0: jle 0x1703b746 */
L_1703B6F2:
    MEM32(ebp + (-0x14)) = edi; /* 0x1703B6F2: mov dword ptr [ebp - 0x14], edi */
L_1703B6F5:
    edi = MEM32(ebp + (-0x14)); /* 0x1703B6F5: mov edi, dword ptr [ebp - 0x14] */
    /* cmp MEM32(ebp + 0x8), edi */ /* 0x1703B6F8: cmp dword ptr [ebp + 8], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1703B6A6; /* 0x1703B6FB: jb 0x1703b6a6 */
L_1703B6FD:
    eax = MEM32(ebp + 0xC); /* 0x1703B6FD: mov eax, dword ptr [ebp + 0xc] */
    esi = eax + 0x1; /* 0x1703B700: lea esi, [eax + 1] */
L_1703B703:
    SET_LO8(ecx, MEM8(eax)); /* 0x1703B703: mov cl, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1703B705: inc eax */
    _flag_k = FK_INC;
    /* test LO8(ecx), LO8(ecx) */ /* 0x1703B706: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1703B703; /* 0x1703B708: jne 0x1703b703 */
L_1703B70A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x1703B70A: sub eax, esi */
    _flag_k = FK_CMP;
    edx = eax + 0x1; /* 0x1703B70C: lea edx, [eax + 1] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1703B70F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, MEM32(ebp + 0x10) */ /* 0x1703B711: cmp eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x20)) = edx; /* 0x1703B714: mov dword ptr [ebp - 0x20], edx */
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1703B717: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1703B719: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1703B71B: neg eax */
    _flag_k = FK_CMP;
    /* cmp ecx, MEM32(ebp + 0x14) */ /* 0x1703B71D: cmp ecx, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x28)) = eax; /* 0x1703B720: mov dword ptr [ebp - 0x28], eax */
    { uint32_t _sa = ecx, _sb = ecx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1703B723: sbb ecx, ecx */
      ecx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1703B725: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1703B727: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp esi, MEM32(ebp + 0x18) */ /* 0x1703B729: cmp esi, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x18));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x2C)) = ecx; /* 0x1703B72C: mov dword ptr [ebp - 0x2c], ecx */
    { uint32_t _sa = edi, _sb = edi, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1703B72F: sbb edi, edi */
      edi = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(edi);
    _cf = (edi) != 0;
    edi = (uint32_t)(-(int32_t)edi); /* 0x1703B731: neg edi */
    _flag_k = FK_CMP;
    /* test eax, eax */ /* 0x1703B733: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x30)) = edi; /* 0x1703B735: mov dword ptr [ebp - 0x30], edi */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1703B752; /* 0x1703B738: jne 0x1703b752 */
L_1703B73A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1703B73A: inc eax */
    _flag_k = FK_INC;
    esi = ebp + (-0x50); /* 0x1703B73B: lea esi, [ebp - 0x50] */
    MEM32(ebp + 0x10) = eax; /* 0x1703B73E: mov dword ptr [ebp + 0x10], eax */
    MEM32(ebp + 0x1C) = esi; /* 0x1703B741: mov dword ptr [ebp + 0x1c], esi */
    goto L_1703B755; /* 0x1703B744: jmp 0x1703b755 */
L_1703B746:
    MEM32(ebp + (-0x4)) = 0x8876086Cu; /* 0x1703B746: mov dword ptr [ebp - 4], 0x8876086c */
    goto L_1703BA7B; /* 0x1703B74D: jmp 0x1703ba7b */
L_1703B752:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1703B752: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1703B754: inc eax */
    _flag_k = FK_INC;
L_1703B755:
    /* test ecx, ecx */ /* 0x1703B755: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1703B762; /* 0x1703B757: jne 0x1703b762 */
L_1703B759:
    ecx = ebp + (-0x74); /* 0x1703B759: lea ecx, [ebp - 0x74] */
    MEM32(ebp + 0x14) = eax; /* 0x1703B75C: mov dword ptr [ebp + 0x14], eax */
    MEM32(ebp + 0x20) = ecx; /* 0x1703B75F: mov dword ptr [ebp + 0x20], ecx */
L_1703B762:
    /* test edi, edi */ /* 0x1703B762: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1703B76F; /* 0x1703B764: jne 0x1703b76f */
L_1703B766:
    MEM32(ebp + 0x18) = eax; /* 0x1703B766: mov dword ptr [ebp + 0x18], eax */
    eax = ebp + (-0x60); /* 0x1703B769: lea eax, [ebp - 0x60] */
    MEM32(ebp + 0x24) = eax; /* 0x1703B76C: mov dword ptr [ebp + 0x24], eax */
L_1703B76F:
    PUSH32(esp, edx); /* 0x1703B76F: push edx */
    RECOMP_CALL(sub_1721B01C); /* 0x1703B770: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1703B775: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1703B777: pop ecx */
    MEM32(ebp + 0x8) = eax; /* 0x1703B778: mov dword ptr [ebp + 8], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703BA3A; /* 0x1703B77B: je 0x1703ba3a */
L_1703B781:
    eax = MEM32(ebp + 0x10); /* 0x1703B781: mov eax, dword ptr [ebp + 0x10] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x1703B784: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x1703B784: shl eax, 4 */
    PUSH32(esp, eax); /* 0x1703B787: push eax */
    MEM32(ebp + (-0x18)) = eax; /* 0x1703B788: mov dword ptr [ebp - 0x18], eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1703B78B: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1703B790: mov edi, eax */
    /* test edi, edi */ /* 0x1703B792: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1703B794: pop ecx */
    esi = 0x1706E47Eu; /* 0x1703B795: mov esi, 0x1706e47e */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703B7AD; /* 0x1703B79A: je 0x1703b7ad */
L_1703B79C:
    PUSH32(esp, esi); /* 0x1703B79C: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1703B79D: push dword ptr [ebp + 0x10] */
    PUSH32(esp, 0x10u); /* 0x1703B7A0: push 0x10 */
    PUSH32(esp, edi); /* 0x1703B7A2: push edi */
    RECOMP_CALL(sub_1702C116); /* 0x1703B7A3: call 0x1702c116 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x8)) = edi; /* 0x1703B7A8: mov dword ptr [ebp - 8], edi */
    goto L_1703B7B1; /* 0x1703B7AB: jmp 0x1703b7b1 */
L_1703B7AD:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x1703B7AD: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1703B7B1:
    /* cmp MEM32(ebp + (-0x8)), 0 */ /* 0x1703B7B1: cmp dword ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703BA3A; /* 0x1703B7B5: je 0x1703ba3a */
L_1703B7BB:
    edi = MEM32(ebp + 0x14); /* 0x1703B7BB: mov edi, dword ptr [ebp + 0x14] */
    eax = edi + edi * 4; /* 0x1703B7BE: lea eax, [edi + edi*4] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1703B7C1: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1703B7C1: shl eax, 2 */
    PUSH32(esp, eax); /* 0x1703B7C4: push eax */
    MEM32(ebp + (-0x1C)) = eax; /* 0x1703B7C5: mov dword ptr [ebp - 0x1c], eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1703B7C8: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1703B7CD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1703B7CF: pop ecx */
    MEM32(ebp + (-0xC)) = eax; /* 0x1703B7D0: mov dword ptr [ebp - 0xc], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703B7EB; /* 0x1703B7D3: je 0x1703b7eb */
L_1703B7D5:
    PUSH32(esp, 0x1706E47Eu); /* 0x1703B7D5: push 0x1706e47e */
    PUSH32(esp, edi); /* 0x1703B7DA: push edi */
    PUSH32(esp, 0x14u); /* 0x1703B7DB: push 0x14 */
    PUSH32(esp, eax); /* 0x1703B7DD: push eax */
    RECOMP_CALL(sub_1702C116); /* 0x1703B7DE: call 0x1702c116 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0xC)); /* 0x1703B7E3: mov eax, dword ptr [ebp - 0xc] */
    MEM32(ebp + (-0xC)) = eax; /* 0x1703B7E6: mov dword ptr [ebp - 0xc], eax */
    goto L_1703B7EF; /* 0x1703B7E9: jmp 0x1703b7ef */
L_1703B7EB:
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) & 0; /* 0x1703B7EB: and dword ptr [ebp - 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1703B7EF:
    /* cmp MEM32(ebp + (-0xC)), 0 */ /* 0x1703B7EF: cmp dword ptr [ebp - 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703BA3A; /* 0x1703B7F3: je 0x1703ba3a */
L_1703B7F9:
    eax = MEM32(ebp + 0x18); /* 0x1703B7F9: mov eax, dword ptr [ebp + 0x18] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x1703B7FC: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x1703B7FC: shl eax, 4 */
    PUSH32(esp, eax); /* 0x1703B7FF: push eax */
    MEM32(ebp + (-0x24)) = eax; /* 0x1703B800: mov dword ptr [ebp - 0x24], eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1703B803: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1703B808: mov edi, eax */
    /* test edi, edi */ /* 0x1703B80A: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1703B80C: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703B820; /* 0x1703B80D: je 0x1703b820 */
L_1703B80F:
    PUSH32(esp, esi); /* 0x1703B80F: push esi */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1703B810: push dword ptr [ebp + 0x18] */
    PUSH32(esp, 0x10u); /* 0x1703B813: push 0x10 */
    PUSH32(esp, edi); /* 0x1703B815: push edi */
    RECOMP_CALL(sub_1702C116); /* 0x1703B816: call 0x1702c116 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x10)) = edi; /* 0x1703B81B: mov dword ptr [ebp - 0x10], edi */
    goto L_1703B824; /* 0x1703B81E: jmp 0x1703b824 */
L_1703B820:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & 0; /* 0x1703B820: and dword ptr [ebp - 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1703B824:
    /* cmp MEM32(ebp + (-0x10)), 0 */ /* 0x1703B824: cmp dword ptr [ebp - 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703BA3A; /* 0x1703B828: je 0x1703ba3a */
L_1703B82E:
    ecx = MEM32(ebp + (-0x20)); /* 0x1703B82E: mov ecx, dword ptr [ebp - 0x20] */
    esi = MEM32(ebp + 0xC); /* 0x1703B831: mov esi, dword ptr [ebp + 0xc] */
    edi = MEM32(ebp + 0x8); /* 0x1703B834: mov edi, dword ptr [ebp + 8] */
    eax = ecx; /* 0x1703B837: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1703B839: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1703B839: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1703B83C: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x1703B83E: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1703B840: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x1703B843: rep movsb byte ptr es:[edi], byte ptr [esi] */
    ecx = MEM32(ebp + (-0x18)); /* 0x1703B845: mov ecx, dword ptr [ebp - 0x18] */
    esi = MEM32(ebp + 0x1C); /* 0x1703B848: mov esi, dword ptr [ebp + 0x1c] */
    edi = MEM32(ebp + (-0x8)); /* 0x1703B84B: mov edi, dword ptr [ebp - 8] */
    eax = ecx; /* 0x1703B84E: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1703B850: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1703B850: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1703B853: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x1703B855: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1703B857: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x1703B85A: rep movsb byte ptr es:[edi], byte ptr [esi] */
    ecx = MEM32(ebp + (-0x1C)); /* 0x1703B85C: mov ecx, dword ptr [ebp - 0x1c] */
    esi = MEM32(ebp + 0x20); /* 0x1703B85F: mov esi, dword ptr [ebp + 0x20] */
    edi = MEM32(ebp + (-0xC)); /* 0x1703B862: mov edi, dword ptr [ebp - 0xc] */
    eax = ecx; /* 0x1703B865: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1703B867: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1703B867: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1703B86A: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x1703B86C: mov ecx, eax */
    eax = MEM32(ebp + (-0x24)); /* 0x1703B86E: mov eax, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1703B871: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x1703B874: rep movsb byte ptr es:[edi], byte ptr [esi] */
    esi = MEM32(ebp + 0x24); /* 0x1703B876: mov esi, dword ptr [ebp + 0x24] */
    edi = MEM32(ebp + (-0x10)); /* 0x1703B879: mov edi, dword ptr [ebp - 0x10] */
    ecx = eax; /* 0x1703B87C: mov ecx, eax */
    edx = ecx; /* 0x1703B87E: mov edx, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1703B880: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1703B880: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1703B883: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = edx; /* 0x1703B885: mov ecx, edx */
    edx = MEM32(ebp + 0x1C); /* 0x1703B887: mov edx, dword ptr [ebp + 0x1c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1703B88A: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x1703B88D: rep movsb byte ptr es:[edi], byte ptr [esi] */
    ecx = MEM32(ebp + (-0x18)); /* 0x1703B88F: mov ecx, dword ptr [ebp - 0x18] */
    fp_push(*(float*)&MEM32(ecx + edx + (-0x10))); /* 0x1703B892: fld dword ptr [ecx + edx - 0x10] */
    ecx = MEM32(ebp + (-0x1C)); /* 0x1703B896: mov ecx, dword ptr [ebp - 0x1c] */
    edx = MEM32(ebp + 0x20); /* 0x1703B899: mov edx, dword ptr [ebp + 0x20] */
    _st[0] = fabs(_st[0]); /* 0x1703B89C: fabs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x1703B89E: fstp dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ecx + edx + (-0x14))); /* 0x1703B8A1: fld dword ptr [ecx + edx - 0x14] */
    ecx = MEM32(ebp + 0x24); /* 0x1703B8A5: mov ecx, dword ptr [ebp + 0x24] */
    _st[0] = fabs(_st[0]); /* 0x1703B8A8: fabs  */
    fp_push(*(float*)&MEM32(eax + ecx + (-0x10))); /* 0x1703B8AA: fld dword ptr [eax + ecx - 0x10] */
    _st[0] = fabs(_st[0]); /* 0x1703B8AE: fabs  */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + 0x1C) = _v; } /* 0x1703B8B0: fst dword ptr [ebp + 0x1c] */
    fp_push(_st[1]); /* 0x1703B8B3: fld st(1) */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1703B8B5: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1703B8B7: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1703B8B9: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1703B8C2; /* 0x1703B8BC: jne 0x1703b8c2 */
L_1703B8BE:
    fp_push(_st[1]); /* 0x1703B8BE: fld st(1) */
    goto L_1703B8C4; /* 0x1703B8C0: jmp 0x1703b8c4 */
L_1703B8C2:
    fp_push(_st[0]); /* 0x1703B8C2: fld st(0) */
L_1703B8C4:
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x1703B8C4: fld dword ptr [ebp + 0xc] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1703B8C7: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1703B8C9: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1703B8CB: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1703B8D9; /* 0x1703B8CE: jne 0x1703b8d9 */
L_1703B8D0:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1703B8D0: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1703B8D2: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x1703B8D4: fld dword ptr [ebp + 0xc] */
    goto L_1703B8E9; /* 0x1703B8D7: jmp 0x1703b8e9 */
L_1703B8D9:
    fp_push(_st[1]); /* 0x1703B8D9: fld st(1) */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1703B8DB: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1703B8DD: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1703B8DF: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703B8E9; /* 0x1703B8E2: je 0x1703b8e9 */
L_1703B8E4:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1703B8E4: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + 0x1C)); /* 0x1703B8E6: fld dword ptr [ebp + 0x1c] */
L_1703B8E9:
    ecx = MEM32(ebx + 0x38); /* 0x1703B8E9: mov ecx, dword ptr [ebx + 0x38] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1703B8EC: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, esi */ /* 0x1703B8EE: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    _st[0] /= *(double*)ADDR(ebx + 0x18); /* 0x1703B8F0: fdiv qword ptr [ebx + 0x18] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1703B8FA; /* 0x1703B8F3: jne 0x1703b8fa */
L_1703B8F5:
    /* cmp MEM32(ebx + 0x2C), esi */ /* 0x1703B8F5: cmp dword ptr [ebx + 0x2c], esi */
    _flag_a = (uint32_t)(MEM32(ebx + 0x2C)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703B909; /* 0x1703B8F8: je 0x1703b909 */
L_1703B8FA:
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ebx + 0x20)); /* 0x1703B8FA: fcom qword ptr [ebx + 0x20] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1703B8FD: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1703B8FF: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1703B909; /* 0x1703B902: jp 0x1703b909 */
L_1703B904:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1703B904: fstp st(0) */
    fp_push(*(double*)ADDR(ebx + 0x20)); /* 0x1703B906: fld qword ptr [ebx + 0x20] */
L_1703B909:
    { double _v = fp_pop(); *(double*)ADDR(ebx + 0x20) = _v; } /* 0x1703B909: fstp qword ptr [ebx + 0x20] */
    fp_push(*(double*)ADDR(0x17001DA8)); /* 0x1703B90C: fld qword ptr [0x17001da8] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ebx + 0x20)); /* 0x1703B912: fcomp qword ptr [ebx + 0x20] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1703B915: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1703B917: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1703B921; /* 0x1703B91A: jne 0x1703b921 */
L_1703B91C:
    fp_push(1.0); /* 0x1703B91C: fld1  */
    { double _v = fp_pop(); *(double*)ADDR(ebx + 0x20) = _v; } /* 0x1703B91E: fstp qword ptr [ebx + 0x20] */
L_1703B921:
    eax = MEM32(ebx + 0x3C); /* 0x1703B921: mov eax, dword ptr [ebx + 0x3c] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x44u); /* 0x1703B924: imul ecx, ecx, 0x44 */
    edx = MEM32(ebp + 0x8); /* 0x1703B927: mov edx, dword ptr [ebp + 8] */
    MEM32(ecx + eax) = edx; /* 0x1703B92A: mov dword ptr [ecx + eax], edx */
    eax = MEM32(ebx + 0x38); /* 0x1703B92D: mov eax, dword ptr [ebx + 0x38] */
    ecx = MEM32(ebx + 0x3C); /* 0x1703B930: mov ecx, dword ptr [ebx + 0x3c] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x44u); /* 0x1703B933: imul eax, eax, 0x44 */
    eax = eax + ecx + 0x40; /* 0x1703B936: lea eax, [eax + ecx + 0x40] */
    ecx = MEM32(eax); /* 0x1703B93A: mov ecx, dword ptr [eax] */
    _flag_a = (uint32_t)((ecx ^ MEM32(ebp + (-0x28)))); _flag_b = (uint32_t)((ecx ^ MEM32(ebp + (-0x28))));
    ecx = ecx ^ MEM32(ebp + (-0x28)); /* 0x1703B93C: xor ecx, dword ptr [ebp - 0x28] */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(ebp + 0x10); /* 0x1703B93F: mov edx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx & 1; /* 0x1703B942: and ecx, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(eax) ^ ecx)); _flag_b = (uint32_t)((MEM32(eax) ^ ecx));
    MEM32(eax) = MEM32(eax) ^ ecx; /* 0x1703B945: xor dword ptr [eax], ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebx + 0x38); /* 0x1703B947: mov eax, dword ptr [ebx + 0x38] */
    ecx = MEM32(ebx + 0x3C); /* 0x1703B94A: mov ecx, dword ptr [ebx + 0x3c] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x44u); /* 0x1703B94D: imul eax, eax, 0x44 */
    MEM32(eax + ecx + 0x4) = edx; /* 0x1703B950: mov dword ptr [eax + ecx + 4], edx */
    eax = MEM32(ebx + 0x38); /* 0x1703B954: mov eax, dword ptr [ebx + 0x38] */
    ecx = MEM32(ebx + 0x3C); /* 0x1703B957: mov ecx, dword ptr [ebx + 0x3c] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x44u); /* 0x1703B95A: imul eax, eax, 0x44 */
    edx = MEM32(ebp + (-0x8)); /* 0x1703B95D: mov edx, dword ptr [ebp - 8] */
    MEM32(eax + ecx + 0x10) = edx; /* 0x1703B960: mov dword ptr [eax + ecx + 0x10], edx */
    eax = MEM32(ebx + 0x38); /* 0x1703B964: mov eax, dword ptr [ebx + 0x38] */
    ecx = MEM32(ebx + 0x3C); /* 0x1703B967: mov ecx, dword ptr [ebx + 0x3c] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x44u); /* 0x1703B96A: imul eax, eax, 0x44 */
    eax = eax + ecx + 0x40; /* 0x1703B96D: lea eax, [eax + ecx + 0x40] */
    ecx = MEM32(ebp + (-0x2C)); /* 0x1703B971: mov ecx, dword ptr [ebp - 0x2c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x1703B974: add ecx, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((ecx ^ MEM32(eax))); _flag_b = (uint32_t)((ecx ^ MEM32(eax)));
    ecx = ecx ^ MEM32(eax); /* 0x1703B976: xor ecx, dword ptr [eax] */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(ebp + 0x14); /* 0x1703B978: mov edx, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    ecx = ecx & 2; /* 0x1703B97B: and ecx, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(eax) ^ ecx)); _flag_b = (uint32_t)((MEM32(eax) ^ ecx));
    MEM32(eax) = MEM32(eax) ^ ecx; /* 0x1703B97E: xor dword ptr [eax], ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebx + 0x38); /* 0x1703B980: mov eax, dword ptr [ebx + 0x38] */
    ecx = MEM32(ebx + 0x3C); /* 0x1703B983: mov ecx, dword ptr [ebx + 0x3c] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x44u); /* 0x1703B986: imul eax, eax, 0x44 */
    MEM32(eax + ecx + 0x8) = edx; /* 0x1703B989: mov dword ptr [eax + ecx + 8], edx */
    eax = MEM32(ebx + 0x38); /* 0x1703B98D: mov eax, dword ptr [ebx + 0x38] */
    ecx = MEM32(ebx + 0x3C); /* 0x1703B990: mov ecx, dword ptr [ebx + 0x3c] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x44u); /* 0x1703B993: imul eax, eax, 0x44 */
    edx = MEM32(ebp + (-0xC)); /* 0x1703B996: mov edx, dword ptr [ebp - 0xc] */
    MEM32(eax + ecx + 0x14) = edx; /* 0x1703B999: mov dword ptr [eax + ecx + 0x14], edx */
    eax = MEM32(ebx + 0x38); /* 0x1703B99D: mov eax, dword ptr [ebx + 0x38] */
    ecx = MEM32(ebx + 0x3C); /* 0x1703B9A0: mov ecx, dword ptr [ebx + 0x3c] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x44u); /* 0x1703B9A3: imul eax, eax, 0x44 */
    eax = eax + ecx + 0x40; /* 0x1703B9A6: lea eax, [eax + ecx + 0x40] */
    ecx = MEM32(ebp + (-0x30)); /* 0x1703B9AA: mov ecx, dword ptr [ebp - 0x30] */
    edx = MEM32(ebp + 0x18); /* 0x1703B9AD: mov edx, dword ptr [ebp + 0x18] */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x1703B9B0: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x1703B9B0: shl ecx, 2 */
    _flag_a = (uint32_t)((ecx ^ MEM32(eax))); _flag_b = (uint32_t)((ecx ^ MEM32(eax)));
    ecx = ecx ^ MEM32(eax); /* 0x1703B9B3: xor ecx, dword ptr [eax] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    ecx = ecx & 4; /* 0x1703B9B5: and ecx, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(eax) ^ ecx)); _flag_b = (uint32_t)((MEM32(eax) ^ ecx));
    MEM32(eax) = MEM32(eax) ^ ecx; /* 0x1703B9B8: xor dword ptr [eax], ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebx + 0x38); /* 0x1703B9BA: mov eax, dword ptr [ebx + 0x38] */
    ecx = MEM32(ebx + 0x3C); /* 0x1703B9BD: mov ecx, dword ptr [ebx + 0x3c] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x44u); /* 0x1703B9C0: imul eax, eax, 0x44 */
    MEM32(eax + ecx + 0xC) = edx; /* 0x1703B9C3: mov dword ptr [eax + ecx + 0xc], edx */
    eax = MEM32(ebx + 0x38); /* 0x1703B9C7: mov eax, dword ptr [ebx + 0x38] */
    ecx = MEM32(ebx + 0x3C); /* 0x1703B9CA: mov ecx, dword ptr [ebx + 0x3c] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x44u); /* 0x1703B9CD: imul eax, eax, 0x44 */
    edx = MEM32(ebp + (-0x10)); /* 0x1703B9D0: mov edx, dword ptr [ebp - 0x10] */
    MEM32(eax + ecx + 0x18) = edx; /* 0x1703B9D3: mov dword ptr [eax + ecx + 0x18], edx */
    eax = MEM32(ebx + 0x38); /* 0x1703B9D7: mov eax, dword ptr [ebx + 0x38] */
    ecx = MEM32(ebx + 0x3C); /* 0x1703B9DA: mov ecx, dword ptr [ebx + 0x3c] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x44u); /* 0x1703B9DD: imul eax, eax, 0x44 */
    MEM32(eax + ecx + 0x34) = esi; /* 0x1703B9E0: mov dword ptr [eax + ecx + 0x34], esi */
    eax = MEM32(ebx + 0x38); /* 0x1703B9E4: mov eax, dword ptr [ebx + 0x38] */
    ecx = MEM32(ebx + 0x3C); /* 0x1703B9E7: mov ecx, dword ptr [ebx + 0x3c] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x44u); /* 0x1703B9EA: imul eax, eax, 0x44 */
    MEM32(eax + ecx + 0x38) = esi; /* 0x1703B9ED: mov dword ptr [eax + ecx + 0x38], esi */
    eax = MEM32(ebx + 0x38); /* 0x1703B9F1: mov eax, dword ptr [ebx + 0x38] */
    ecx = MEM32(ebx + 0x3C); /* 0x1703B9F4: mov ecx, dword ptr [ebx + 0x3c] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x44u); /* 0x1703B9F7: imul eax, eax, 0x44 */
    MEM32(eax + ecx + 0x3C) = esi; /* 0x1703B9FA: mov dword ptr [eax + ecx + 0x3c], esi */
    eax = MEM32(ebp + (-0x14)); /* 0x1703B9FE: mov eax, dword ptr [ebp - 0x14] */
    /* cmp eax, MEM32(ebx + 0x38) */ /* 0x1703BA01: cmp eax, dword ptr [ebx + 0x38] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x38));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = eax; /* 0x1703BA04: mov ecx, eax */
    if (CMP_AE(_flag_a, _flag_b)) goto L_1703BA20; /* 0x1703BA06: jae 0x1703ba20 */
L_1703BA08:
    edx = MEM32(ebx + 0x38); /* 0x1703BA08: mov edx, dword ptr [ebx + 0x38] */
    edi = MEM32(ebx + 0x40); /* 0x1703BA0B: mov edi, dword ptr [ebx + 0x40] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x1703BA0E: sub edx, ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x1703BA10: add edx, eax */
    _flag_k = FK_ADD;
    edx = edi + edx * 4; /* 0x1703BA12: lea edx, [edi + edx*4] */
    edi = MEM32(edx + (-0x4)); /* 0x1703BA15: mov edi, dword ptr [edx - 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1703BA18: inc ecx */
    _flag_k = FK_INC;
    MEM32(edx) = edi; /* 0x1703BA19: mov dword ptr [edx], edi */
    /* cmp ecx, MEM32(ebx + 0x38) */ /* 0x1703BA1B: cmp ecx, dword ptr [ebx + 0x38] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebx + 0x38));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1703BA08; /* 0x1703BA1E: jb 0x1703ba08 */
L_1703BA20:
    ecx = MEM32(ebp + 0x28); /* 0x1703BA20: mov ecx, dword ptr [ebp + 0x28] */
    /* cmp ecx, esi */ /* 0x1703BA23: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703BA2C; /* 0x1703BA25: je 0x1703ba2c */
L_1703BA27:
    edx = MEM32(ebx + 0x38); /* 0x1703BA27: mov edx, dword ptr [ebx + 0x38] */
    MEM32(ecx) = edx; /* 0x1703BA2A: mov dword ptr [ecx], edx */
L_1703BA2C:
    edx = MEM32(ebx + 0x38); /* 0x1703BA2C: mov edx, dword ptr [ebx + 0x38] */
    ecx = MEM32(ebx + 0x40); /* 0x1703BA2F: mov ecx, dword ptr [ebx + 0x40] */
    MEM32(ecx + eax * 4) = edx; /* 0x1703BA32: mov dword ptr [ecx + eax*4], edx */
    _flag_a = (uint32_t)(MEM32(ebx + 0x38)); _flag_b = (uint32_t)(1);
    MEM32(ebx + 0x38) = MEM32(ebx + 0x38) + 1; /* 0x1703BA35: inc dword ptr [ebx + 0x38] */
    _flag_k = FK_INC;
    goto L_1703BA7B; /* 0x1703BA38: jmp 0x1703ba7b */
L_1703BA3A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1703BA3A: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x8), esi */ /* 0x1703BA3C: cmp dword ptr [ebp + 8], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = 0x8007000Eu; /* 0x1703BA3F: mov dword ptr [ebp - 4], 0x8007000e */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703BA51; /* 0x1703BA46: je 0x1703ba51 */
L_1703BA48:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1703BA48: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1721B010); /* 0x1703BA4B: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1703BA50: pop ecx */
L_1703BA51:
    /* cmp MEM32(ebp + (-0x8)), esi */ /* 0x1703BA51: cmp dword ptr [ebp - 8], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703BA5F; /* 0x1703BA54: je 0x1703ba5f */
L_1703BA56:
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x1703BA56: push dword ptr [ebp - 8] */
    RECOMP_CALL(sub_1721B010); /* 0x1703BA59: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1703BA5E: pop ecx */
L_1703BA5F:
    /* cmp MEM32(ebp + (-0xC)), esi */ /* 0x1703BA5F: cmp dword ptr [ebp - 0xc], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703BA6D; /* 0x1703BA62: je 0x1703ba6d */
L_1703BA64:
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x1703BA64: push dword ptr [ebp - 0xc] */
    RECOMP_CALL(sub_1721B010); /* 0x1703BA67: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1703BA6C: pop ecx */
L_1703BA6D:
    /* cmp MEM32(ebp + (-0x10)), esi */ /* 0x1703BA6D: cmp dword ptr [ebp - 0x10], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703BA7B; /* 0x1703BA70: je 0x1703ba7b */
L_1703BA72:
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x1703BA72: push dword ptr [ebp - 0x10] */
    RECOMP_CALL(sub_1721B010); /* 0x1703BA75: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1703BA7A: pop ecx */
L_1703BA7B:
    eax = MEM32(ebp + (-0x4)); /* 0x1703BA7B: mov eax, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x1703BA7E: pop edi */
    esi = POP32_VAL(esp); /* 0x1703BA7F: pop esi */
    ebx = POP32_VAL(esp); /* 0x1703BA80: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1703BA81: leave  */
    RECOMP_FLAGS_OUT(); esp += 40; { RECOMP_REGS_OUT(); return; } /* 0x1703BA82: ret 0x24 */
    RECOMP_REGS_OUT();
}

void sub_1703BA8A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1703BA8Au);

L_1703BA8A:
    edi = edi; /* 0x1703BA8A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1703BA8C: push ebp */
    ebp = esp; /* 0x1703BA8D: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x1703BA8F: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x8); /* 0x1703BA92: mov ecx, dword ptr [ebp + 8] */
    /* cmp eax, MEM32(ecx + 0x38) */ /* 0x1703BA95: cmp eax, dword ptr [ecx + 0x38] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x38));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1703BAA8; /* 0x1703BA98: jae 0x1703baa8 */
L_1703BA9A:
    edx = MEM32(ebp + 0x10); /* 0x1703BA9A: mov edx, dword ptr [ebp + 0x10] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x44u); /* 0x1703BA9D: imul eax, eax, 0x44 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x3C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + 0x3C); /* 0x1703BAA0: add eax, dword ptr [ecx + 0x3c] */
    _flag_k = FK_ADD;
    /* cmp edx, MEM32(eax + 0x4) */ /* 0x1703BAA3: cmp edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(eax + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1703BAAF; /* 0x1703BAA6: jb 0x1703baaf */
L_1703BAA8:
    eax = 0x8876086Cu; /* 0x1703BAA8: mov eax, 0x8876086c */
    goto L_1703BAEA; /* 0x1703BAAD: jmp 0x1703baea */
L_1703BAAF:
    PUSH32(esp, ebx); /* 0x1703BAAF: push ebx */
    ebx = MEM32(ebp + 0x14); /* 0x1703BAB0: mov ebx, dword ptr [ebp + 0x14] */
    PUSH32(esp, esi); /* 0x1703BAB3: push esi */
    PUSH32(esp, edi); /* 0x1703BAB4: push edi */
    edi = MEM32(eax + 0x10); /* 0x1703BAB5: mov edi, dword ptr [eax + 0x10] */
    esi = edx; /* 0x1703BAB8: mov esi, edx */
    if (4u) _cf = (((esi) >> 28) & 1u); /* 0x1703BABA: shl esi, 4 */
    if (4u) { _flag_a = recomp_flags_pack((esi << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 4u; /* 0x1703BABA: shl esi, 4 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + esi; /* 0x1703BABD: add edi, esi */
    _flag_k = FK_ADD;
    esi = ebx; /* 0x1703BABF: mov esi, ebx */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703BAC1: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703BAC2: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703BAC3: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703BAC4: movsd dword ptr es:[edi], dword ptr [esi] */
    eax = MEM32(eax + 0x4); /* 0x1703BAC5: mov eax, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1703BAC8: dec eax */
    _flag_k = FK_DEC;
    /* cmp edx, eax */ /* 0x1703BAC9: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1703BAE5; /* 0x1703BACB: jne 0x1703bae5 */
L_1703BACD:
    fp_push(*(float*)&MEM32(ebx)); /* 0x1703BACD: fld dword ptr [ebx] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ecx + 0x20)); /* 0x1703BACF: fcomp qword ptr [ecx + 0x20] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1703BAD2: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1703BAD4: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1703BAE0; /* 0x1703BAD7: jp 0x1703bae0 */
L_1703BAD9:
    RECOMP_CALL(sub_1703AC14); /* 0x1703BAD9: call 0x1703ac14 */
    RECOMP_FLAGS_IN();
    goto L_1703BAE5; /* 0x1703BADE: jmp 0x1703bae5 */
L_1703BAE0:
    fp_push(*(float*)&MEM32(ebx)); /* 0x1703BAE0: fld dword ptr [ebx] */
    { double _v = fp_pop(); *(double*)ADDR(ecx + 0x20) = _v; } /* 0x1703BAE2: fstp qword ptr [ecx + 0x20] */
L_1703BAE5:
    edi = POP32_VAL(esp); /* 0x1703BAE5: pop edi */
    esi = POP32_VAL(esp); /* 0x1703BAE6: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1703BAE7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1703BAE9: pop ebx */
L_1703BAEA:
    ebp = POP32_VAL(esp); /* 0x1703BAEA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1703BAEB: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1703BAF3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1703BAF3u);

L_1703BAF3:
    edi = edi; /* 0x1703BAF3: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1703BAF5: push ebp */
    ebp = esp; /* 0x1703BAF6: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x1703BAF8: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x1703BAFB: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x1703BAFC: mov ebx, dword ptr [ebp + 8] */
    /* cmp eax, MEM32(ebx + 0x38) */ /* 0x1703BAFF: cmp eax, dword ptr [ebx + 0x38] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x38));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1703BB12; /* 0x1703BB02: jae 0x1703bb12 */
L_1703BB04:
    edx = MEM32(ebp + 0x10); /* 0x1703BB04: mov edx, dword ptr [ebp + 0x10] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x44u); /* 0x1703BB07: imul eax, eax, 0x44 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x3C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebx + 0x3C); /* 0x1703BB0A: add eax, dword ptr [ebx + 0x3c] */
    _flag_k = FK_ADD;
    /* cmp edx, MEM32(eax + 0x8) */ /* 0x1703BB0D: cmp edx, dword ptr [eax + 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(eax + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1703BB19; /* 0x1703BB10: jb 0x1703bb19 */
L_1703BB12:
    eax = 0x8876086Cu; /* 0x1703BB12: mov eax, 0x8876086c */
    goto L_1703BB55; /* 0x1703BB17: jmp 0x1703bb55 */
L_1703BB19:
    PUSH32(esp, esi); /* 0x1703BB19: push esi */
    esi = MEM32(eax + 0x14); /* 0x1703BB1A: mov esi, dword ptr [eax + 0x14] */
    PUSH32(esp, edi); /* 0x1703BB1D: push edi */
    ecx = edx + edx * 4; /* 0x1703BB1E: lea ecx, [edx + edx*4] */
    edi = esi + ecx * 4; /* 0x1703BB21: lea edi, [esi + ecx*4] */
    esi = MEM32(ebp + 0x14); /* 0x1703BB24: mov esi, dword ptr [ebp + 0x14] */
    PUSH32(esp, 5); /* 0x1703BB27: push 5 */
    ecx = POP32_VAL(esp); /* 0x1703BB29: pop ecx */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1703BB2A: rep movsd dword ptr es:[edi], dword ptr [esi] */
    eax = MEM32(eax + 0x8); /* 0x1703BB2C: mov eax, dword ptr [eax + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1703BB2F: dec eax */
    _flag_k = FK_DEC;
    /* cmp edx, eax */ /* 0x1703BB30: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = POP32_VAL(esp); /* 0x1703BB32: pop edi */
    esi = POP32_VAL(esp); /* 0x1703BB33: pop esi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1703BB53; /* 0x1703BB34: jne 0x1703bb53 */
L_1703BB36:
    ecx = MEM32(ebp + 0x14); /* 0x1703BB36: mov ecx, dword ptr [ebp + 0x14] */
    fp_push(*(float*)&MEM32(ecx)); /* 0x1703BB39: fld dword ptr [ecx] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ebx + 0x20)); /* 0x1703BB3B: fcomp qword ptr [ebx + 0x20] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1703BB3E: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1703BB40: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1703BB4E; /* 0x1703BB43: jp 0x1703bb4e */
L_1703BB45:
    ecx = ebx; /* 0x1703BB45: mov ecx, ebx */
    RECOMP_CALL(sub_1703AC14); /* 0x1703BB47: call 0x1703ac14 */
    RECOMP_FLAGS_IN();
    goto L_1703BB53; /* 0x1703BB4C: jmp 0x1703bb53 */
L_1703BB4E:
    fp_push(*(float*)&MEM32(ecx)); /* 0x1703BB4E: fld dword ptr [ecx] */
    { double _v = fp_pop(); *(double*)ADDR(ebx + 0x20) = _v; } /* 0x1703BB50: fstp qword ptr [ebx + 0x20] */
L_1703BB53:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1703BB53: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1703BB55:
    ebx = POP32_VAL(esp); /* 0x1703BB55: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1703BB56: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1703BB57: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1703BB5F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1703BB5Fu);

L_1703BB5F:
    edi = edi; /* 0x1703BB5F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1703BB61: push ebp */
    ebp = esp; /* 0x1703BB62: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x1703BB64: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x8); /* 0x1703BB67: mov ecx, dword ptr [ebp + 8] */
    /* cmp eax, MEM32(ecx + 0x38) */ /* 0x1703BB6A: cmp eax, dword ptr [ecx + 0x38] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x38));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1703BB7D; /* 0x1703BB6D: jae 0x1703bb7d */
L_1703BB6F:
    edx = MEM32(ebp + 0x10); /* 0x1703BB6F: mov edx, dword ptr [ebp + 0x10] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x44u); /* 0x1703BB72: imul eax, eax, 0x44 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x3C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + 0x3C); /* 0x1703BB75: add eax, dword ptr [ecx + 0x3c] */
    _flag_k = FK_ADD;
    /* cmp edx, MEM32(eax + 0xC) */ /* 0x1703BB78: cmp edx, dword ptr [eax + 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(eax + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1703BB84; /* 0x1703BB7B: jb 0x1703bb84 */
L_1703BB7D:
    eax = 0x8876086Cu; /* 0x1703BB7D: mov eax, 0x8876086c */
    goto L_1703BBBF; /* 0x1703BB82: jmp 0x1703bbbf */
L_1703BB84:
    PUSH32(esp, ebx); /* 0x1703BB84: push ebx */
    ebx = MEM32(ebp + 0x14); /* 0x1703BB85: mov ebx, dword ptr [ebp + 0x14] */
    PUSH32(esp, esi); /* 0x1703BB88: push esi */
    PUSH32(esp, edi); /* 0x1703BB89: push edi */
    edi = MEM32(eax + 0x18); /* 0x1703BB8A: mov edi, dword ptr [eax + 0x18] */
    esi = edx; /* 0x1703BB8D: mov esi, edx */
    if (4u) _cf = (((esi) >> 28) & 1u); /* 0x1703BB8F: shl esi, 4 */
    if (4u) { _flag_a = recomp_flags_pack((esi << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 4u; /* 0x1703BB8F: shl esi, 4 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + esi; /* 0x1703BB92: add edi, esi */
    _flag_k = FK_ADD;
    esi = ebx; /* 0x1703BB94: mov esi, ebx */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703BB96: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703BB97: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703BB98: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703BB99: movsd dword ptr es:[edi], dword ptr [esi] */
    eax = MEM32(eax + 0xC); /* 0x1703BB9A: mov eax, dword ptr [eax + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1703BB9D: dec eax */
    _flag_k = FK_DEC;
    /* cmp edx, eax */ /* 0x1703BB9E: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1703BBBA; /* 0x1703BBA0: jne 0x1703bbba */
L_1703BBA2:
    fp_push(*(float*)&MEM32(ebx)); /* 0x1703BBA2: fld dword ptr [ebx] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ecx + 0x20)); /* 0x1703BBA4: fcomp qword ptr [ecx + 0x20] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1703BBA7: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1703BBA9: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1703BBB5; /* 0x1703BBAC: jp 0x1703bbb5 */
L_1703BBAE:
    RECOMP_CALL(sub_1703AC14); /* 0x1703BBAE: call 0x1703ac14 */
    RECOMP_FLAGS_IN();
    goto L_1703BBBA; /* 0x1703BBB3: jmp 0x1703bbba */
L_1703BBB5:
    fp_push(*(float*)&MEM32(ebx)); /* 0x1703BBB5: fld dword ptr [ebx] */
    { double _v = fp_pop(); *(double*)ADDR(ecx + 0x20) = _v; } /* 0x1703BBB7: fstp qword ptr [ecx + 0x20] */
L_1703BBBA:
    edi = POP32_VAL(esp); /* 0x1703BBBA: pop edi */
    esi = POP32_VAL(esp); /* 0x1703BBBB: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1703BBBC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1703BBBE: pop ebx */
L_1703BBBF:
    ebp = POP32_VAL(esp); /* 0x1703BBBF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1703BBC0: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1703BBC8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1703BBC8u);

L_1703BBC8:
    edi = edi; /* 0x1703BBC8: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1703BBCA: push ebp */
    ebp = esp; /* 0x1703BBCB: mov ebp, esp */
    eax = MEM32(ebp + 0x14); /* 0x1703BBCD: mov eax, dword ptr [ebp + 0x14] */
    ecx = MEM32(ebp + 0x8); /* 0x1703BBD0: mov ecx, dword ptr [ebp + 8] */
    /* cmp eax, MEM32(ecx + 0x38) */ /* 0x1703BBD3: cmp eax, dword ptr [ecx + 0x38] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x38));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1703BBE2; /* 0x1703BBD6: jb 0x1703bbe2 */
L_1703BBD8:
    eax = 0x8876086Cu; /* 0x1703BBD8: mov eax, 0x8876086c */
    goto L_1703BC85; /* 0x1703BBDD: jmp 0x1703bc85 */
L_1703BBE2:
    eax = (uint32_t)((int32_t)eax * (int32_t)0x44u); /* 0x1703BBE2: imul eax, eax, 0x44 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x3C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + 0x3C); /* 0x1703BBE5: add eax, dword ptr [ecx + 0x3c] */
    _flag_k = FK_ADD;
    PUSH32(esp, esi); /* 0x1703BBE8: push esi */
    PUSH32(esp, edi); /* 0x1703BBE9: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1703BBEA: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = eax; /* 0x1703BBEC: mov esi, eax */
    eax = MEM32(ecx + 0x28); /* 0x1703BBEE: mov eax, dword ptr [ecx + 0x28] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1703BBF1: inc edi */
    _flag_k = FK_INC;
    /* test eax, eax */ /* 0x1703BBF2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703BC15; /* 0x1703BBF4: je 0x1703bc15 */
L_1703BBF6:
    /* cmp eax, 2 */ /* 0x1703BBF6: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1703BC15; /* 0x1703BBF9: jne 0x1703bc15 */
L_1703BBFB:
    fp_push(*(double*)ADDR(ebp + 0xC)); /* 0x1703BBFB: fld qword ptr [ebp + 0xc] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ecx + 0x20)); /* 0x1703BBFE: fcomp qword ptr [ecx + 0x20] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1703BC01: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1703BC03: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_1703BC15; /* 0x1703BC06: jnp 0x1703bc15 */
L_1703BC08:
    fp_push(*(double*)ADDR(ecx + 0x20)); /* 0x1703BC08: fld qword ptr [ecx + 0x20] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1703BC0B: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _st[0] += _st[0]; /* 0x1703BC0D: fadd st(0), st(0) */
    _st[0] -= *(double*)ADDR(ebp + 0xC); /* 0x1703BC0F: fsub qword ptr [ebp + 0xc] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + 0xC) = _v; } /* 0x1703BC12: fstp qword ptr [ebp + 0xc] */
L_1703BC15:
    /* cmp MEM32(ebp + 0x18), 0 */ /* 0x1703BC15: cmp dword ptr [ebp + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    fp_push(*(double*)ADDR(ebp + 0xC)); /* 0x1703BC19: fld qword ptr [ebp + 0xc] */
    _st[0] *= *(double*)ADDR(ecx + 0x18); /* 0x1703BC1C: fmul qword ptr [ecx + 0x18] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + 0xC) = _v; } /* 0x1703BC1F: fstp qword ptr [ebp + 0xc] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703BC3F; /* 0x1703BC22: je 0x1703bc3f */
L_1703BC24:
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1703BC24: push dword ptr [ebp + 0x18] */
    fp_push(*(double*)ADDR(ebp + 0xC)); /* 0x1703BC27: fld qword ptr [ebp + 0xc] */
    eax = esi + 0x34; /* 0x1703BC2A: lea eax, [esi + 0x34] */
    PUSH32(esp, eax); /* 0x1703BC2D: push eax */
    PUSH32(esp, MEM32(esi + 0x10)); /* 0x1703BC2E: push dword ptr [esi + 0x10] */
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x1703BC31: push dword ptr [esi + 4] */
    PUSH32(esp, edi); /* 0x1703BC34: push edi */
    PUSH32(esp, ecx); /* 0x1703BC35: push ecx */
    PUSH32(esp, ecx); /* 0x1703BC36: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x1703BC37: fstp qword ptr [esp] */
    RECOMP_CALL(sub_1703B052); /* 0x1703BC3A: call 0x1703b052 */
    RECOMP_FLAGS_IN();
L_1703BC3F:
    /* cmp MEM32(ebp + 0x1C), 0 */ /* 0x1703BC3F: cmp dword ptr [ebp + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703BC60; /* 0x1703BC43: je 0x1703bc60 */
L_1703BC45:
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1703BC45: push dword ptr [ebp + 0x1c] */
    fp_push(*(double*)ADDR(ebp + 0xC)); /* 0x1703BC48: fld qword ptr [ebp + 0xc] */
    eax = esi + 0x38; /* 0x1703BC4B: lea eax, [esi + 0x38] */
    PUSH32(esp, eax); /* 0x1703BC4E: push eax */
    PUSH32(esp, MEM32(esi + 0x14)); /* 0x1703BC4F: push dword ptr [esi + 0x14] */
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x1703BC52: push dword ptr [esi + 8] */
    PUSH32(esp, edi); /* 0x1703BC55: push edi */
    PUSH32(esp, ecx); /* 0x1703BC56: push ecx */
    PUSH32(esp, ecx); /* 0x1703BC57: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x1703BC58: fstp qword ptr [esp] */
    RECOMP_CALL(sub_1703AE58); /* 0x1703BC5B: call 0x1703ae58 */
    RECOMP_FLAGS_IN();
L_1703BC60:
    /* cmp MEM32(ebp + 0x20), 0 */ /* 0x1703BC60: cmp dword ptr [ebp + 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x20)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703BC81; /* 0x1703BC64: je 0x1703bc81 */
L_1703BC66:
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x1703BC66: push dword ptr [ebp + 0x20] */
    fp_push(*(double*)ADDR(ebp + 0xC)); /* 0x1703BC69: fld qword ptr [ebp + 0xc] */
    eax = esi + 0x3C; /* 0x1703BC6C: lea eax, [esi + 0x3c] */
    PUSH32(esp, eax); /* 0x1703BC6F: push eax */
    PUSH32(esp, MEM32(esi + 0x18)); /* 0x1703BC70: push dword ptr [esi + 0x18] */
    PUSH32(esp, MEM32(esi + 0xC)); /* 0x1703BC73: push dword ptr [esi + 0xc] */
    PUSH32(esp, edi); /* 0x1703BC76: push edi */
    PUSH32(esp, ecx); /* 0x1703BC77: push ecx */
    PUSH32(esp, ecx); /* 0x1703BC78: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x1703BC79: fstp qword ptr [esp] */
    RECOMP_CALL(sub_1703B052); /* 0x1703BC7C: call 0x1703b052 */
    RECOMP_FLAGS_IN();
L_1703BC81:
    edi = POP32_VAL(esp); /* 0x1703BC81: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1703BC82: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1703BC84: pop esi */
L_1703BC85:
    ebp = POP32_VAL(esp); /* 0x1703BC85: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x1703BC86: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_1703BC8E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1703BC8Eu);

L_1703BC8E:
    edi = edi; /* 0x1703BC8E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1703BC90: push ebp */
    ebp = esp; /* 0x1703BC91: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1703BC93: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1703BC94: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(esi + 0x38); /* 0x1703BC97: mov eax, dword ptr [esi + 0x38] */
    /* cmp eax, 1 */ /* 0x1703BC9A: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1703BCA6; /* 0x1703BC9D: jne 0x1703bca6 */
L_1703BC9F:
    eax = 0x88760B5Cu; /* 0x1703BC9F: mov eax, 0x88760b5c */
    goto L_1703BD01; /* 0x1703BCA4: jmp 0x1703bd01 */
L_1703BCA6:
    /* cmp MEM32(ebp + 0xC), eax */ /* 0x1703BCA6: cmp dword ptr [ebp + 0xc], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1703BCB2; /* 0x1703BCA9: jb 0x1703bcb2 */
L_1703BCAB:
    eax = 0x8876086Cu; /* 0x1703BCAB: mov eax, 0x8876086c */
    goto L_1703BD01; /* 0x1703BCB0: jmp 0x1703bd01 */
L_1703BCB2:
    ecx = MEM32(esi + 0x3C); /* 0x1703BCB2: mov ecx, dword ptr [esi + 0x3c] */
    PUSH32(esp, edi); /* 0x1703BCB5: push edi */
    edi = MEM32(ebp + 0xC); /* 0x1703BCB6: mov edi, dword ptr [ebp + 0xc] */
    edi = (uint32_t)((int32_t)edi * (int32_t)0x44u); /* 0x1703BCB9: imul edi, edi, 0x44 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1703BCBC: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x1703BCBD: add ecx, edi */
    _flag_k = FK_ADD;
    MEM32(esi + 0x38) = eax; /* 0x1703BCBF: mov dword ptr [esi + 0x38], eax */
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_1703BCCB; /* 0x1703BCC2: je 0x1703bccb */
L_1703BCC4:
    PUSH32(esp, 1); /* 0x1703BCC4: push 1 */
    RECOMP_CALL(sub_1703AB42); /* 0x1703BCC6: call 0x1703ab42 */
    RECOMP_FLAGS_IN();
L_1703BCCB:
    ecx = MEM32(esi + 0x38); /* 0x1703BCCB: mov ecx, dword ptr [esi + 0x38] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + 0xC); /* 0x1703BCCE: sub ecx, dword ptr [ebp + 0xc] */
    _flag_k = FK_CMP;
    eax = MEM32(esi + 0x3C); /* 0x1703BCD1: mov eax, dword ptr [esi + 0x3c] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x44u); /* 0x1703BCD4: imul ecx, ecx, 0x44 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x1703BCD7: add eax, edi */
    _flag_k = FK_ADD;
    PUSH32(esp, ecx); /* 0x1703BCD9: push ecx */
    ecx = eax + 0x44; /* 0x1703BCDA: lea ecx, [eax + 0x44] */
    PUSH32(esp, ecx); /* 0x1703BCDD: push ecx */
    PUSH32(esp, eax); /* 0x1703BCDE: push eax */
    RECOMP_CALL(sub_1721B136); /* 0x1703BCDF: call 0x1721b136 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x38); /* 0x1703BCE4: mov eax, dword ptr [esi + 0x38] */
    ecx = MEM32(esi + 0x3C); /* 0x1703BCE7: mov ecx, dword ptr [esi + 0x3c] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x44u); /* 0x1703BCEA: imul eax, eax, 0x44 */
    eax = eax + ecx + 0x40; /* 0x1703BCED: lea eax, [eax + ecx + 0x40] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0xFFFFFFF7u);
    MEM32(eax) = MEM32(eax) & 0xFFFFFFF7u; /* 0x1703BCF1: and dword ptr [eax], 0xfffffff7 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1703BCF4: add esp, 0xc */
    _flag_k = FK_ADD;
    ecx = esi; /* 0x1703BCF7: mov ecx, esi */
    RECOMP_CALL(sub_1703AC14); /* 0x1703BCF9: call 0x1703ac14 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1703BCFE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x1703BD00: pop edi */
L_1703BD01:
    esi = POP32_VAL(esp); /* 0x1703BD01: pop esi */
    ebp = POP32_VAL(esp); /* 0x1703BD02: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1703BD03: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1703BD0B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1703BD0Bu);

L_1703BD0B:
    edi = edi; /* 0x1703BD0B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1703BD0D: push ebp */
    ebp = esp; /* 0x1703BD0E: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x1703BD10: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1703BD13: push esi */
    PUSH32(esp, edi); /* 0x1703BD14: push edi */
    edi = MEM32(ebp + 0xC); /* 0x1703BD15: mov edi, dword ptr [ebp + 0xc] */
    /* cmp edi, 3 */ /* 0x1703BD18: cmp edi, 3 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1703BEF0; /* 0x1703BD1B: jb 0x1703bef0 */
L_1703BD21:
    eax = edi; /* 0x1703BD21: mov eax, edi */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x1703BD23: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x1703BD23: shl eax, 4 */
    PUSH32(esp, eax); /* 0x1703BD26: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1703BD27: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1703BD2C: mov esi, eax */
    /* test esi, esi */ /* 0x1703BD2E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1703BD30: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703BEF0; /* 0x1703BD31: je 0x1703bef0 */
L_1703BD37:
    /* test edi, edi */ /* 0x1703BD37: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x1703BD39: push ebx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703BD70; /* 0x1703BD3A: jbe 0x1703bd70 */
L_1703BD3C:
    MEM32(ebp + (-0x4)) = 1; /* 0x1703BD3C: mov dword ptr [ebp - 4], 1 */
    ecx = esi + 0x8; /* 0x1703BD43: lea ecx, [esi + 8] */
    MEM32(ebp + (-0x8)) = edi; /* 0x1703BD46: mov dword ptr [ebp - 8], edi */
L_1703BD49:
    eax = MEM32(ebp + (-0x4)); /* 0x1703BD49: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1703BD4C: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)edi; /* 0x1703BD4E: div edi */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    eax = MEM32(ebp + (-0x4)); /* 0x1703BD50: mov eax, dword ptr [ebp - 4] */
    eax = edi + eax + (-0x2); /* 0x1703BD53: lea eax, [edi + eax - 2] */
    ebx = edx; /* 0x1703BD57: mov ebx, edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1703BD59: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)edi; /* 0x1703BD5B: div edi */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 1; /* 0x1703BD5D: inc dword ptr [ebp - 4] */
    _flag_k = FK_INC;
    MEM32(ecx + (-0x8)) = ebx; /* 0x1703BD60: mov dword ptr [ecx - 8], ebx */
    MEM32(ecx) = ebx; /* 0x1703BD63: mov dword ptr [ecx], ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x10u; /* 0x1703BD65: add ecx, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) - 1; /* 0x1703BD68: dec dword ptr [ebp - 8] */
    _flag_k = FK_DEC;
    MEM32(ecx + (-0x14)) = edx; /* 0x1703BD6B: mov dword ptr [ecx - 0x14], edx */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1703BD49; /* 0x1703BD6E: jne 0x1703bd49 */
L_1703BD70:
    eax = edi + (-0x2); /* 0x1703BD70: lea eax, [edi - 2] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1703BD73: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x1703BD75: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703BDB3; /* 0x1703BD77: jbe 0x1703bdb3 */
L_1703BD79:
    edi = esi + 0x4; /* 0x1703BD79: lea edi, [esi + 4] */
L_1703BD7C:
    eax = MEM32(edi + 0x4); /* 0x1703BD7C: mov eax, dword ptr [edi + 4] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x1703BD7F: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x1703BD7F: shl eax, 4 */
    PUSH32(esp, MEM32(eax + esi)); /* 0x1703BD82: push dword ptr [eax + esi] */
    eax = MEM32(edi); /* 0x1703BD85: mov eax, dword ptr [edi] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x1703BD87: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x1703BD87: shl eax, 4 */
    PUSH32(esp, MEM32(eax + esi)); /* 0x1703BD8A: push dword ptr [eax + esi] */
    PUSH32(esp, MEM32(edi + (-0x4))); /* 0x1703BD8D: push dword ptr [edi - 4] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1703BD90: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1703B200); /* 0x1703BD93: call 0x1703b200 */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(edi + 0x8) = _v; } /* 0x1703BD98: fstp dword ptr [edi + 8] */
    ecx = ebx; /* 0x1703BD9B: mov ecx, ebx */
    RECOMP_CALL(sub_1703ADB0); /* 0x1703BD9D: call 0x1703adb0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0xC); /* 0x1703BDA2: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1703BDA5: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFFEu; /* 0x1703BDA6: add eax, -2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x10u; /* 0x1703BDA9: add edi, 0x10 */
    _flag_k = FK_ADD;
    /* cmp ebx, eax */ /* 0x1703BDAC: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1703BD7C; /* 0x1703BDAE: jb 0x1703bd7c */
L_1703BDB0:
    edi = MEM32(ebp + 0xC); /* 0x1703BDB0: mov edi, dword ptr [ebp + 0xc] */
L_1703BDB3:
    eax = MEM32(ebp + 0x10); /* 0x1703BDB3: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x1703BDB6: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ebx, ebx */ /* 0x1703BDB9: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax + edi * 4 + (-0x4)) = 1; /* 0x1703BDBB: mov dword ptr [eax + edi*4 - 4], 1 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703BEE6; /* 0x1703BDC3: jbe 0x1703bee6 */
L_1703BDC9:
    eax = ebx; /* 0x1703BDC9: mov eax, ebx */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x1703BDCB: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x1703BDCB: shl eax, 4 */
    edi = eax + esi + 0x8; /* 0x1703BDCE: lea edi, [eax + esi + 8] */
    goto L_1703BDDA; /* 0x1703BDD2: jmp 0x1703bdda */
L_1703BDD4:
    edi = MEM32(ebp + (-0x4)); /* 0x1703BDD4: mov edi, dword ptr [ebp - 4] */
    ebx = MEM32(ebp + 0xC); /* 0x1703BDD7: mov ebx, dword ptr [ebp + 0xc] */
L_1703BDDA:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x1703BDDA: dec ebx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 0x10u; /* 0x1703BDDB: sub edi, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, 0); /* 0x1703BDDE: push 0 */
    eax = esi; /* 0x1703BDE0: mov eax, esi */
    MEM32(ebp + 0xC) = ebx; /* 0x1703BDE2: mov dword ptr [ebp + 0xc], ebx */
    MEM32(ebp + (-0x4)) = edi; /* 0x1703BDE5: mov dword ptr [ebp - 4], edi */
    RECOMP_CALL(sub_1703A5DC); /* 0x1703BDE8: call 0x1703a5dc */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x1703BDED: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1703BDEE: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1703ADEA); /* 0x1703BDF0: call 0x1703adea */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + (-0x8)); /* 0x1703BDF5: mov eax, dword ptr [edi - 8] */
    ecx = MEM32(ebp + 0x10); /* 0x1703BDF8: mov ecx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 2; /* 0x1703BDFB: add ebx, 2 */
    _flag_k = FK_ADD;
    MEM32(ecx + eax * 4) = ebx; /* 0x1703BDFE: mov dword ptr [ecx + eax*4], ebx */
    eax = MEM32(edi + (-0x4)); /* 0x1703BE01: mov eax, dword ptr [edi - 4] */
    ecx = MEM32(edi); /* 0x1703BE04: mov ecx, dword ptr [edi] */
    edx = eax; /* 0x1703BE06: mov edx, eax */
    if (4u) _cf = (((edx) >> 28) & 1u); /* 0x1703BE08: shl edx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((edx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 4u; /* 0x1703BE08: shl edx, 4 */
    ebx = edx + esi; /* 0x1703BE0B: lea ebx, [edx + esi] */
    edx = ecx; /* 0x1703BE0E: mov edx, ecx */
    if (4u) _cf = (((edx) >> 28) & 1u); /* 0x1703BE10: shl edx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((edx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 4u; /* 0x1703BE10: shl edx, 4 */
    /* cmp eax, MEM32(ebp + 0xC) */ /* 0x1703BE13: cmp eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = edx + esi; /* 0x1703BE16: lea edi, [edx + esi] */
    MEM32(ebx + 0x8) = ecx; /* 0x1703BE19: mov dword ptr [ebx + 8], ecx */
    MEM32(ebp + (-0x14)) = eax; /* 0x1703BE1C: mov dword ptr [ebp - 0x14], eax */
    MEM32(ebp + (-0x8)) = ecx; /* 0x1703BE1F: mov dword ptr [ebp - 8], ecx */
    MEM32(edi + 0x4) = eax; /* 0x1703BE22: mov dword ptr [edi + 4], eax */
    if (CMP_AE(_flag_a, _flag_b)) goto L_1703BE83; /* 0x1703BE25: jae 0x1703be83 */
L_1703BE27:
    eax = MEM32(ebx + 0x8); /* 0x1703BE27: mov eax, dword ptr [ebx + 8] */
    ecx = MEM32(ebx + 0x4); /* 0x1703BE2A: mov ecx, dword ptr [ebx + 4] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x1703BE2D: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x1703BE2D: shl eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x1703BE30: add eax, esi */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(eax)); /* 0x1703BE32: push dword ptr [eax] */
    if (4u) _cf = (((ecx) >> 28) & 1u); /* 0x1703BE34: shl ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ecx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 4u; /* 0x1703BE34: shl ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1703BE37: add ecx, esi */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(ecx)); /* 0x1703BE39: push dword ptr [ecx] */
    MEM32(ebp + (-0xC)) = eax; /* 0x1703BE3B: mov dword ptr [ebp - 0xc], eax */
    PUSH32(esp, MEM32(ebx)); /* 0x1703BE3E: push dword ptr [ebx] */
    MEM32(ebp + (-0x10)) = ecx; /* 0x1703BE40: mov dword ptr [ebp - 0x10], ecx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1703BE43: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1703B200); /* 0x1703BE46: call 0x1703b200 */
    RECOMP_FLAGS_IN();
    { float _v = (float)_st[0]; *(float*)ADDR(ebx + 0xC) = _v; } /* 0x1703BE4B: fst dword ptr [ebx + 0xc] */
    eax = MEM32(ebp + (-0xC)); /* 0x1703BE4E: mov eax, dword ptr [ebp - 0xc] */
    ecx = MEM32(eax); /* 0x1703BE51: mov ecx, dword ptr [eax] */
    eax = MEM32(ebp + (-0x10)); /* 0x1703BE53: mov eax, dword ptr [ebp - 0x10] */
    edx = MEM32(eax); /* 0x1703BE56: mov edx, dword ptr [eax] */
    eax = MEM32(ebp + 0x8); /* 0x1703BE58: mov eax, dword ptr [ebp + 8] */
    if (4u) _cf = (((ecx) >> 28) & 1u); /* 0x1703BE5B: shl ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ecx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 4u; /* 0x1703BE5B: shl ecx, 4 */
    fp_push(*(float*)&MEM32(ecx + eax)); /* 0x1703BE5E: fld dword ptr [ecx + eax] */
    ecx = MEM32(ebp + (-0x14)); /* 0x1703BE61: mov ecx, dword ptr [ebp - 0x14] */
    if (4u) _cf = (((edx) >> 28) & 1u); /* 0x1703BE64: shl edx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((edx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 4u; /* 0x1703BE64: shl edx, 4 */
    _st[0] -= (double)*(float*)ADDR(edx + eax); /* 0x1703BE67: fsub dword ptr [edx + eax] */
    _st[0] *= _st[1]; /* 0x1703BE6A: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx + 0xC) = _v; } /* 0x1703BE6C: fstp dword ptr [ebx + 0xc] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1703BE6F: fstp st(0) */
    RECOMP_CALL(sub_1703ADB0); /* 0x1703BE71: call 0x1703adb0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1703BE76: push dword ptr [ebp + 0xc] */
    ecx = eax; /* 0x1703BE79: mov ecx, eax */
    RECOMP_CALL(sub_1703ADEA); /* 0x1703BE7B: call 0x1703adea */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x8)); /* 0x1703BE80: mov ecx, dword ptr [ebp - 8] */
L_1703BE83:
    /* cmp ecx, MEM32(ebp + 0xC) */ /* 0x1703BE83: cmp ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1703BEDC; /* 0x1703BE86: jae 0x1703bedc */
L_1703BE88:
    eax = MEM32(edi + 0x8); /* 0x1703BE88: mov eax, dword ptr [edi + 8] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x1703BE8B: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x1703BE8B: shl eax, 4 */
    ebx = eax + esi; /* 0x1703BE8E: lea ebx, [eax + esi] */
    eax = MEM32(edi + 0x4); /* 0x1703BE91: mov eax, dword ptr [edi + 4] */
    PUSH32(esp, MEM32(ebx)); /* 0x1703BE94: push dword ptr [ebx] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x1703BE96: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x1703BE96: shl eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x1703BE99: add eax, esi */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(eax)); /* 0x1703BE9B: push dword ptr [eax] */
    MEM32(ebp + (-0x14)) = eax; /* 0x1703BE9D: mov dword ptr [ebp - 0x14], eax */
    PUSH32(esp, MEM32(edi)); /* 0x1703BEA0: push dword ptr [edi] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1703BEA2: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1703B200); /* 0x1703BEA5: call 0x1703b200 */
    RECOMP_FLAGS_IN();
    { float _v = (float)_st[0]; *(float*)ADDR(edi + 0xC) = _v; } /* 0x1703BEAA: fst dword ptr [edi + 0xc] */
    ecx = MEM32(ebx); /* 0x1703BEAD: mov ecx, dword ptr [ebx] */
    eax = MEM32(ebp + (-0x14)); /* 0x1703BEAF: mov eax, dword ptr [ebp - 0x14] */
    edx = MEM32(eax); /* 0x1703BEB2: mov edx, dword ptr [eax] */
    eax = MEM32(ebp + 0x8); /* 0x1703BEB4: mov eax, dword ptr [ebp + 8] */
    if (4u) _cf = (((ecx) >> 28) & 1u); /* 0x1703BEB7: shl ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ecx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 4u; /* 0x1703BEB7: shl ecx, 4 */
    fp_push(*(float*)&MEM32(ecx + eax)); /* 0x1703BEBA: fld dword ptr [ecx + eax] */
    ecx = MEM32(ebp + (-0x8)); /* 0x1703BEBD: mov ecx, dword ptr [ebp - 8] */
    if (4u) _cf = (((edx) >> 28) & 1u); /* 0x1703BEC0: shl edx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((edx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 4u; /* 0x1703BEC0: shl edx, 4 */
    _st[0] -= (double)*(float*)ADDR(edx + eax); /* 0x1703BEC3: fsub dword ptr [edx + eax] */
    _st[0] *= _st[1]; /* 0x1703BEC6: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(edi + 0xC) = _v; } /* 0x1703BEC8: fstp dword ptr [edi + 0xc] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1703BECB: fstp st(0) */
    RECOMP_CALL(sub_1703ADB0); /* 0x1703BECD: call 0x1703adb0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1703BED2: push dword ptr [ebp + 0xc] */
    ecx = eax; /* 0x1703BED5: mov ecx, eax */
    RECOMP_CALL(sub_1703ADEA); /* 0x1703BED7: call 0x1703adea */
    RECOMP_FLAGS_IN();
L_1703BEDC:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x1703BEDC: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_1703BDD4; /* 0x1703BEE0: ja 0x1703bdd4 */
L_1703BEE6:
    PUSH32(esp, esi); /* 0x1703BEE6: push esi */
    RECOMP_CALL(sub_1721B010); /* 0x1703BEE7: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1703BEEC: pop ecx */
    ebx = POP32_VAL(esp); /* 0x1703BEED: pop ebx */
    goto L_1703BF01; /* 0x1703BEEE: jmp 0x1703bf01 */
L_1703BEF0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1703BEF0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x1703BEF2: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703BF01; /* 0x1703BEF4: jbe 0x1703bf01 */
L_1703BEF6:
    ecx = MEM32(ebp + 0x10); /* 0x1703BEF6: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(ecx + eax * 4) = eax; /* 0x1703BEF9: mov dword ptr [ecx + eax*4], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1703BEFC: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, edi */ /* 0x1703BEFD: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1703BEF6; /* 0x1703BEFF: jb 0x1703bef6 */
L_1703BF01:
    edi = POP32_VAL(esp); /* 0x1703BF01: pop edi */
    esi = POP32_VAL(esp); /* 0x1703BF02: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1703BF03: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1703BF04: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1703BF0C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1703BF0Cu);

L_1703BF0C:
    edi = edi; /* 0x1703BF0C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1703BF0E: push ebp */
    ebp = esp; /* 0x1703BF0F: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1703BF11: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1703BF14: push esi */
    PUSH32(esp, edi); /* 0x1703BF15: push edi */
    edi = MEM32(ebp + 0xC); /* 0x1703BF16: mov edi, dword ptr [ebp + 0xc] */
    /* cmp edi, 3 */ /* 0x1703BF19: cmp edi, 3 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1703C0F4; /* 0x1703BF1C: jb 0x1703c0f4 */
L_1703BF22:
    eax = edi; /* 0x1703BF22: mov eax, edi */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x1703BF24: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x1703BF24: shl eax, 4 */
    PUSH32(esp, eax); /* 0x1703BF27: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1703BF28: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1703BF2D: mov esi, eax */
    /* test esi, esi */ /* 0x1703BF2F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1703BF31: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703C0F4; /* 0x1703BF32: je 0x1703c0f4 */
L_1703BF38:
    /* test edi, edi */ /* 0x1703BF38: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x1703BF3A: push ebx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703BF71; /* 0x1703BF3B: jbe 0x1703bf71 */
L_1703BF3D:
    MEM32(ebp + (-0x4)) = 1; /* 0x1703BF3D: mov dword ptr [ebp - 4], 1 */
    ecx = esi + 0x8; /* 0x1703BF44: lea ecx, [esi + 8] */
    MEM32(ebp + (-0x8)) = edi; /* 0x1703BF47: mov dword ptr [ebp - 8], edi */
L_1703BF4A:
    eax = MEM32(ebp + (-0x4)); /* 0x1703BF4A: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1703BF4D: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)edi; /* 0x1703BF4F: div edi */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    eax = MEM32(ebp + (-0x4)); /* 0x1703BF51: mov eax, dword ptr [ebp - 4] */
    eax = edi + eax + (-0x2); /* 0x1703BF54: lea eax, [edi + eax - 2] */
    ebx = edx; /* 0x1703BF58: mov ebx, edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1703BF5A: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)edi; /* 0x1703BF5C: div edi */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 1; /* 0x1703BF5E: inc dword ptr [ebp - 4] */
    _flag_k = FK_INC;
    MEM32(ecx + (-0x8)) = ebx; /* 0x1703BF61: mov dword ptr [ecx - 8], ebx */
    MEM32(ecx) = ebx; /* 0x1703BF64: mov dword ptr [ecx], ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x10u; /* 0x1703BF66: add ecx, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) - 1; /* 0x1703BF69: dec dword ptr [ebp - 8] */
    _flag_k = FK_DEC;
    MEM32(ecx + (-0x14)) = edx; /* 0x1703BF6C: mov dword ptr [ecx - 0x14], edx */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1703BF4A; /* 0x1703BF6F: jne 0x1703bf4a */
L_1703BF71:
    eax = edi + (-0x2); /* 0x1703BF71: lea eax, [edi - 2] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1703BF74: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x1703BF76: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703BFB4; /* 0x1703BF78: jbe 0x1703bfb4 */
L_1703BF7A:
    edi = esi + 0x4; /* 0x1703BF7A: lea edi, [esi + 4] */
L_1703BF7D:
    eax = MEM32(edi + 0x4); /* 0x1703BF7D: mov eax, dword ptr [edi + 4] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x1703BF80: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x1703BF80: shl eax, 4 */
    PUSH32(esp, MEM32(eax + esi)); /* 0x1703BF83: push dword ptr [eax + esi] */
    eax = MEM32(edi); /* 0x1703BF86: mov eax, dword ptr [edi] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x1703BF88: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x1703BF88: shl eax, 4 */
    PUSH32(esp, MEM32(eax + esi)); /* 0x1703BF8B: push dword ptr [eax + esi] */
    PUSH32(esp, MEM32(edi + (-0x4))); /* 0x1703BF8E: push dword ptr [edi - 4] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1703BF91: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1703B2B5); /* 0x1703BF94: call 0x1703b2b5 */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(edi + 0x8) = _v; } /* 0x1703BF99: fstp dword ptr [edi + 8] */
    ecx = ebx; /* 0x1703BF9C: mov ecx, ebx */
    RECOMP_CALL(sub_1703ADB0); /* 0x1703BF9E: call 0x1703adb0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0xC); /* 0x1703BFA3: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1703BFA6: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFFEu; /* 0x1703BFA7: add eax, -2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x10u; /* 0x1703BFAA: add edi, 0x10 */
    _flag_k = FK_ADD;
    /* cmp ebx, eax */ /* 0x1703BFAD: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1703BF7D; /* 0x1703BFAF: jb 0x1703bf7d */
L_1703BFB1:
    edi = MEM32(ebp + 0xC); /* 0x1703BFB1: mov edi, dword ptr [ebp + 0xc] */
L_1703BFB4:
    eax = MEM32(ebp + 0x10); /* 0x1703BFB4: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x1703BFB7: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ebx, ebx */ /* 0x1703BFBA: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax + edi * 4 + (-0x4)) = 1; /* 0x1703BFBC: mov dword ptr [eax + edi*4 - 4], 1 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703C0EA; /* 0x1703BFC4: jbe 0x1703c0ea */
L_1703BFCA:
    eax = ebx; /* 0x1703BFCA: mov eax, ebx */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x1703BFCC: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x1703BFCC: shl eax, 4 */
    edi = eax + esi + 0x8; /* 0x1703BFCF: lea edi, [eax + esi + 8] */
    goto L_1703BFDB; /* 0x1703BFD3: jmp 0x1703bfdb */
L_1703BFD5:
    edi = MEM32(ebp + (-0x4)); /* 0x1703BFD5: mov edi, dword ptr [ebp - 4] */
    ebx = MEM32(ebp + 0xC); /* 0x1703BFD8: mov ebx, dword ptr [ebp + 0xc] */
L_1703BFDB:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x1703BFDB: dec ebx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 0x10u; /* 0x1703BFDC: sub edi, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, 0); /* 0x1703BFDF: push 0 */
    eax = esi; /* 0x1703BFE1: mov eax, esi */
    MEM32(ebp + 0xC) = ebx; /* 0x1703BFE3: mov dword ptr [ebp + 0xc], ebx */
    MEM32(ebp + (-0x4)) = edi; /* 0x1703BFE6: mov dword ptr [ebp - 4], edi */
    RECOMP_CALL(sub_1703A5DC); /* 0x1703BFE9: call 0x1703a5dc */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x1703BFEE: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1703BFEF: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1703ADEA); /* 0x1703BFF1: call 0x1703adea */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + (-0x8)); /* 0x1703BFF6: mov eax, dword ptr [edi - 8] */
    ecx = MEM32(ebp + 0x10); /* 0x1703BFF9: mov ecx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 2; /* 0x1703BFFC: add ebx, 2 */
    _flag_k = FK_ADD;
    MEM32(ecx + eax * 4) = ebx; /* 0x1703BFFF: mov dword ptr [ecx + eax*4], ebx */
    eax = MEM32(edi + (-0x4)); /* 0x1703C002: mov eax, dword ptr [edi - 4] */
    ecx = MEM32(edi); /* 0x1703C005: mov ecx, dword ptr [edi] */
    edx = eax; /* 0x1703C007: mov edx, eax */
    if (4u) _cf = (((edx) >> 28) & 1u); /* 0x1703C009: shl edx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((edx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 4u; /* 0x1703C009: shl edx, 4 */
    ebx = edx + esi; /* 0x1703C00C: lea ebx, [edx + esi] */
    edx = ecx; /* 0x1703C00F: mov edx, ecx */
    if (4u) _cf = (((edx) >> 28) & 1u); /* 0x1703C011: shl edx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((edx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 4u; /* 0x1703C011: shl edx, 4 */
    /* cmp eax, MEM32(ebp + 0xC) */ /* 0x1703C014: cmp eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = edx + esi; /* 0x1703C017: lea edi, [edx + esi] */
    MEM32(ebx + 0x8) = ecx; /* 0x1703C01A: mov dword ptr [ebx + 8], ecx */
    MEM32(ebp + (-0xC)) = eax; /* 0x1703C01D: mov dword ptr [ebp - 0xc], eax */
    MEM32(ebp + (-0x8)) = ecx; /* 0x1703C020: mov dword ptr [ebp - 8], ecx */
    MEM32(edi + 0x4) = eax; /* 0x1703C023: mov dword ptr [edi + 4], eax */
    if (CMP_AE(_flag_a, _flag_b)) goto L_1703C084; /* 0x1703C026: jae 0x1703c084 */
L_1703C028:
    eax = MEM32(ebx + 0x8); /* 0x1703C028: mov eax, dword ptr [ebx + 8] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x1703C02B: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x1703C02B: shl eax, 4 */
    PUSH32(esp, MEM32(eax + esi)); /* 0x1703C02E: push dword ptr [eax + esi] */
    eax = MEM32(ebx + 0x4); /* 0x1703C031: mov eax, dword ptr [ebx + 4] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x1703C034: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x1703C034: shl eax, 4 */
    PUSH32(esp, MEM32(eax + esi)); /* 0x1703C037: push dword ptr [eax + esi] */
    PUSH32(esp, MEM32(ebx)); /* 0x1703C03A: push dword ptr [ebx] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1703C03C: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1703B2B5); /* 0x1703C03F: call 0x1703b2b5 */
    RECOMP_FLAGS_IN();
    { float _v = (float)_st[0]; *(float*)ADDR(ebx + 0xC) = _v; } /* 0x1703C044: fst dword ptr [ebx + 0xc] */
    eax = MEM32(ebx + 0x8); /* 0x1703C047: mov eax, dword ptr [ebx + 8] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x1703C04A: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x1703C04A: shl eax, 4 */
    eax = MEM32(eax + esi); /* 0x1703C04D: mov eax, dword ptr [eax + esi] */
    ecx = eax + eax * 4; /* 0x1703C050: lea ecx, [eax + eax*4] */
    eax = MEM32(ebx + 0x4); /* 0x1703C053: mov eax, dword ptr [ebx + 4] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x1703C056: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x1703C056: shl eax, 4 */
    eax = MEM32(eax + esi); /* 0x1703C059: mov eax, dword ptr [eax + esi] */
    edx = eax + eax * 4; /* 0x1703C05C: lea edx, [eax + eax*4] */
    eax = MEM32(ebp + 0x8); /* 0x1703C05F: mov eax, dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(eax + ecx * 4)); /* 0x1703C062: fld dword ptr [eax + ecx*4] */
    ecx = MEM32(ebp + (-0xC)); /* 0x1703C065: mov ecx, dword ptr [ebp - 0xc] */
    _st[0] -= (double)*(float*)ADDR(eax + edx * 4); /* 0x1703C068: fsub dword ptr [eax + edx*4] */
    _st[0] *= _st[1]; /* 0x1703C06B: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx + 0xC) = _v; } /* 0x1703C06D: fstp dword ptr [ebx + 0xc] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1703C070: fstp st(0) */
    RECOMP_CALL(sub_1703ADB0); /* 0x1703C072: call 0x1703adb0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1703C077: push dword ptr [ebp + 0xc] */
    ecx = eax; /* 0x1703C07A: mov ecx, eax */
    RECOMP_CALL(sub_1703ADEA); /* 0x1703C07C: call 0x1703adea */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x8)); /* 0x1703C081: mov ecx, dword ptr [ebp - 8] */
L_1703C084:
    /* cmp ecx, MEM32(ebp + 0xC) */ /* 0x1703C084: cmp ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1703C0E0; /* 0x1703C087: jae 0x1703c0e0 */
L_1703C089:
    eax = MEM32(edi + 0x8); /* 0x1703C089: mov eax, dword ptr [edi + 8] */
    ebx = MEM32(ebp + 0x8); /* 0x1703C08C: mov ebx, dword ptr [ebp + 8] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x1703C08F: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x1703C08F: shl eax, 4 */
    PUSH32(esp, MEM32(eax + esi)); /* 0x1703C092: push dword ptr [eax + esi] */
    eax = MEM32(edi + 0x4); /* 0x1703C095: mov eax, dword ptr [edi + 4] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x1703C098: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x1703C098: shl eax, 4 */
    PUSH32(esp, MEM32(eax + esi)); /* 0x1703C09B: push dword ptr [eax + esi] */
    PUSH32(esp, MEM32(edi)); /* 0x1703C09E: push dword ptr [edi] */
    PUSH32(esp, ebx); /* 0x1703C0A0: push ebx */
    RECOMP_CALL(sub_1703B2B5); /* 0x1703C0A1: call 0x1703b2b5 */
    RECOMP_FLAGS_IN();
    { float _v = (float)_st[0]; *(float*)ADDR(edi + 0xC) = _v; } /* 0x1703C0A6: fst dword ptr [edi + 0xc] */
    eax = MEM32(edi + 0x8); /* 0x1703C0A9: mov eax, dword ptr [edi + 8] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x1703C0AC: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x1703C0AC: shl eax, 4 */
    eax = MEM32(eax + esi); /* 0x1703C0AF: mov eax, dword ptr [eax + esi] */
    ecx = eax + eax * 4; /* 0x1703C0B2: lea ecx, [eax + eax*4] */
    eax = MEM32(edi + 0x4); /* 0x1703C0B5: mov eax, dword ptr [edi + 4] */
    fp_push(*(float*)&MEM32(ebx + ecx * 4)); /* 0x1703C0B8: fld dword ptr [ebx + ecx*4] */
    ecx = MEM32(ebp + (-0x8)); /* 0x1703C0BB: mov ecx, dword ptr [ebp - 8] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x1703C0BE: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x1703C0BE: shl eax, 4 */
    eax = MEM32(eax + esi); /* 0x1703C0C1: mov eax, dword ptr [eax + esi] */
    eax = eax + eax * 4; /* 0x1703C0C4: lea eax, [eax + eax*4] */
    _st[0] -= (double)*(float*)ADDR(ebx + eax * 4); /* 0x1703C0C7: fsub dword ptr [ebx + eax*4] */
    _st[0] *= _st[1]; /* 0x1703C0CA: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(edi + 0xC) = _v; } /* 0x1703C0CC: fstp dword ptr [edi + 0xc] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1703C0CF: fstp st(0) */
    RECOMP_CALL(sub_1703ADB0); /* 0x1703C0D1: call 0x1703adb0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1703C0D6: push dword ptr [ebp + 0xc] */
    ecx = eax; /* 0x1703C0D9: mov ecx, eax */
    RECOMP_CALL(sub_1703ADEA); /* 0x1703C0DB: call 0x1703adea */
    RECOMP_FLAGS_IN();
L_1703C0E0:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x1703C0E0: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_1703BFD5; /* 0x1703C0E4: ja 0x1703bfd5 */
L_1703C0EA:
    PUSH32(esp, esi); /* 0x1703C0EA: push esi */
    RECOMP_CALL(sub_1721B010); /* 0x1703C0EB: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1703C0F0: pop ecx */
    ebx = POP32_VAL(esp); /* 0x1703C0F1: pop ebx */
    goto L_1703C105; /* 0x1703C0F2: jmp 0x1703c105 */
L_1703C0F4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1703C0F4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x1703C0F6: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703C105; /* 0x1703C0F8: jbe 0x1703c105 */
L_1703C0FA:
    ecx = MEM32(ebp + 0x10); /* 0x1703C0FA: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(ecx + eax * 4) = eax; /* 0x1703C0FD: mov dword ptr [ecx + eax*4], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1703C100: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, edi */ /* 0x1703C101: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1703C0FA; /* 0x1703C103: jb 0x1703c0fa */
L_1703C105:
    edi = POP32_VAL(esp); /* 0x1703C105: pop edi */
    esi = POP32_VAL(esp); /* 0x1703C106: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1703C107: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1703C108: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1703C110(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1703C110u);

L_1703C110:
    edi = edi; /* 0x1703C110: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1703C112: push ebp */
    ebp = esp; /* 0x1703C113: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1703C115: push ebx */
    PUSH32(esp, esi); /* 0x1703C116: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1703C117: mov esi, dword ptr [ebp + 0xc] */
    ebx = MEM32(esi + 0x4); /* 0x1703C11A: mov ebx, dword ptr [esi + 4] */
    PUSH32(esp, edi); /* 0x1703C11D: push edi */
    edi = MEM32(esi); /* 0x1703C11E: mov edi, dword ptr [esi] */
    eax = edi + 0x1; /* 0x1703C120: lea eax, [edi + 1] */
    /* cmp eax, ebx */ /* 0x1703C123: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi + 0xC) = 0xBF800000u; /* 0x1703C125: mov dword ptr [esi + 0xc], 0xbf800000 */
    MEM32(esi + 0x8) = eax; /* 0x1703C12C: mov dword ptr [esi + 8], eax */
    MEM32(ebp + 0xC) = eax; /* 0x1703C12F: mov dword ptr [ebp + 0xc], eax */
    if (CMP_AE(_flag_a, _flag_b)) goto L_1703C163; /* 0x1703C132: jae 0x1703c163 */
L_1703C134:
    PUSH32(esp, ebx); /* 0x1703C134: push ebx */
    PUSH32(esp, edi); /* 0x1703C135: push edi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1703C136: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1703C139: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1703B200); /* 0x1703C13C: call 0x1703b200 */
    RECOMP_FLAGS_IN();
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(esi + 0xC)); /* 0x1703C141: fcom dword ptr [esi + 0xc] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1703C144: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1703C146: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1703C156; /* 0x1703C149: jne 0x1703c156 */
L_1703C14B:
    eax = MEM32(ebp + 0xC); /* 0x1703C14B: mov eax, dword ptr [ebp + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0xC) = _v; } /* 0x1703C14E: fstp dword ptr [esi + 0xc] */
    MEM32(esi + 0x8) = eax; /* 0x1703C151: mov dword ptr [esi + 8], eax */
    goto L_1703C158; /* 0x1703C154: jmp 0x1703c158 */
L_1703C156:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1703C156: fstp st(0) */
L_1703C158:
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 1; /* 0x1703C158: inc dword ptr [ebp + 0xc] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + 0xC); /* 0x1703C15B: mov eax, dword ptr [ebp + 0xc] */
    /* cmp eax, MEM32(esi + 0x4) */ /* 0x1703C15E: cmp eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1703C134; /* 0x1703C161: jb 0x1703c134 */
L_1703C163:
    eax = MEM32(ebp + 0x8); /* 0x1703C163: mov eax, dword ptr [ebp + 8] */
    if (4u) _cf = (((ebx) >> 28) & 1u); /* 0x1703C166: shl ebx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ebx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 4u; /* 0x1703C166: shl ebx, 4 */
    fp_push(*(float*)&MEM32(ebx + eax)); /* 0x1703C169: fld dword ptr [ebx + eax] */
    if (4u) _cf = (((edi) >> 28) & 1u); /* 0x1703C16C: shl edi, 4 */
    if (4u) { _flag_a = recomp_flags_pack((edi << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 4u; /* 0x1703C16C: shl edi, 4 */
    _st[0] -= (double)*(float*)ADDR(edi + eax); /* 0x1703C16F: fsub dword ptr [edi + eax] */
    edi = POP32_VAL(esp); /* 0x1703C172: pop edi */
    _st[0] *= (double)*(float*)ADDR(esi + 0xC); /* 0x1703C173: fmul dword ptr [esi + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0xC) = _v; } /* 0x1703C176: fstp dword ptr [esi + 0xc] */
    esi = POP32_VAL(esp); /* 0x1703C179: pop esi */
    ebx = POP32_VAL(esp); /* 0x1703C17A: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1703C17B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1703C17C: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1703C184(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1703C184u);

L_1703C184:
    edi = edi; /* 0x1703C184: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1703C186: push ebp */
    ebp = esp; /* 0x1703C187: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1703C189: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x1703C18A: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1703C18D: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1703C18E: mov esi, dword ptr [ebp + 0xc] */
    eax = MEM32(esi); /* 0x1703C191: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x1703C193: push edi */
    edi = eax + 0x1; /* 0x1703C194: lea edi, [eax + 1] */
    MEM32(esi + 0xC) = 0xBF800000u; /* 0x1703C197: mov dword ptr [esi + 0xc], 0xbf800000 */
    MEM32(esi + 0x8) = edi; /* 0x1703C19E: mov dword ptr [esi + 8], edi */
    goto L_1703C1C4; /* 0x1703C1A1: jmp 0x1703c1c4 */
L_1703C1A3:
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x1703C1A3: push dword ptr [esi + 4] */
    PUSH32(esp, MEM32(esi)); /* 0x1703C1A6: push dword ptr [esi] */
    PUSH32(esp, edi); /* 0x1703C1A8: push edi */
    PUSH32(esp, ebx); /* 0x1703C1A9: push ebx */
    RECOMP_CALL(sub_1703B2B5); /* 0x1703C1AA: call 0x1703b2b5 */
    RECOMP_FLAGS_IN();
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(esi + 0xC)); /* 0x1703C1AF: fcom dword ptr [esi + 0xc] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1703C1B2: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1703C1B4: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1703C1C1; /* 0x1703C1B7: jne 0x1703c1c1 */
L_1703C1B9:
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0xC) = _v; } /* 0x1703C1B9: fstp dword ptr [esi + 0xc] */
    MEM32(esi + 0x8) = edi; /* 0x1703C1BC: mov dword ptr [esi + 8], edi */
    goto L_1703C1C3; /* 0x1703C1BF: jmp 0x1703c1c3 */
L_1703C1C1:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1703C1C1: fstp st(0) */
L_1703C1C3:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1703C1C3: inc edi */
    _flag_k = FK_INC;
L_1703C1C4:
    /* cmp edi, MEM32(esi + 0x4) */ /* 0x1703C1C4: cmp edi, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1703C1A3; /* 0x1703C1C7: jb 0x1703c1a3 */
L_1703C1C9:
    eax = MEM32(esi + 0x4); /* 0x1703C1C9: mov eax, dword ptr [esi + 4] */
    ecx = eax + eax * 4; /* 0x1703C1CC: lea ecx, [eax + eax*4] */
    eax = MEM32(esi); /* 0x1703C1CF: mov eax, dword ptr [esi] */
    fp_push(*(float*)&MEM32(ebx + ecx * 4)); /* 0x1703C1D1: fld dword ptr [ebx + ecx*4] */
    eax = eax + eax * 4; /* 0x1703C1D4: lea eax, [eax + eax*4] */
    _st[0] -= (double)*(float*)ADDR(ebx + eax * 4); /* 0x1703C1D7: fsub dword ptr [ebx + eax*4] */
    edi = POP32_VAL(esp); /* 0x1703C1DA: pop edi */
    _st[0] *= (double)*(float*)ADDR(esi + 0xC); /* 0x1703C1DB: fmul dword ptr [esi + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0xC) = _v; } /* 0x1703C1DE: fstp dword ptr [esi + 0xc] */
    esi = POP32_VAL(esp); /* 0x1703C1E1: pop esi */
    ebx = POP32_VAL(esp); /* 0x1703C1E2: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1703C1E3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1703C1E4: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1703C1EC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1703C1ECu);

L_1703C1EC:
    edi = edi; /* 0x1703C1EC: mov edi, edi */
    PUSH32(esp, esi); /* 0x1703C1EE: push esi */
    esi = ecx; /* 0x1703C1EF: mov esi, ecx */
    eax = MEM32(esi + 0x14); /* 0x1703C1F1: mov eax, dword ptr [esi + 0x14] */
    /* test eax, eax */ /* 0x1703C1F4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = 0x17001E18u; /* 0x1703C1F6: mov dword ptr [esi], 0x17001e18 */
    MEM32(esi + 0x8) = 0x17001E08u; /* 0x1703C1FC: mov dword ptr [esi + 8], 0x17001e08 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703C210; /* 0x1703C203: je 0x1703c210 */
L_1703C205:
    PUSH32(esp, eax); /* 0x1703C205: push eax */
    RECOMP_CALL(sub_1721B010); /* 0x1703C206: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x14) = MEM32(esi + 0x14) & 0; /* 0x1703C20B: and dword ptr [esi + 0x14], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1703C20F: pop ecx */
L_1703C210:
    ecx = MEM32(esi + 0x3C); /* 0x1703C210: mov ecx, dword ptr [esi + 0x3c] */
    /* test ecx, ecx */ /* 0x1703C213: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703C222; /* 0x1703C215: je 0x1703c222 */
L_1703C217:
    PUSH32(esp, 3); /* 0x1703C217: push 3 */
    RECOMP_CALL(sub_17039F40); /* 0x1703C219: call 0x17039f40 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0x3C)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x3C) = MEM32(esi + 0x3C) & 0; /* 0x1703C21E: and dword ptr [esi + 0x3c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1703C222:
    eax = MEM32(esi + 0x40); /* 0x1703C222: mov eax, dword ptr [esi + 0x40] */
    /* test eax, eax */ /* 0x1703C225: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703C234; /* 0x1703C227: je 0x1703c234 */
L_1703C229:
    PUSH32(esp, eax); /* 0x1703C229: push eax */
    RECOMP_CALL(sub_1721B010); /* 0x1703C22A: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0x40)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x40) = MEM32(esi + 0x40) & 0; /* 0x1703C22F: and dword ptr [esi + 0x40], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1703C233: pop ecx */
L_1703C234:
    eax = MEM32(esi + 0x30); /* 0x1703C234: mov eax, dword ptr [esi + 0x30] */
    /* test eax, eax */ /* 0x1703C237: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703C246; /* 0x1703C239: je 0x1703c246 */
L_1703C23B:
    PUSH32(esp, eax); /* 0x1703C23B: push eax */
    RECOMP_CALL(sub_1721B010); /* 0x1703C23C: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0x30)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x30) = MEM32(esi + 0x30) & 0; /* 0x1703C241: and dword ptr [esi + 0x30], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1703C245: pop ecx */
L_1703C246:
    esi = POP32_VAL(esp); /* 0x1703C246: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1703C247: ret  */
    RECOMP_REGS_OUT();
}

void sub_1703C24D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1703C24Du);

    goto L_1703C24D;
L_17039DE5:
    edi = edi; /* 0x17039DE5: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17039DE7: push ebp */
    ebp = esp; /* 0x17039DE8: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x17039DEA: push dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0x8); /* 0x17039DED: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x17039DF0: push dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x17039DF3: add eax, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x17039DF6: push eax */
    RECOMP_CALL(sub_170402D2); /* 0x17039DF7: call 0x170402d2 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x17039DFC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x17039DFD: ret 0xc */
L_1703C24D:
    _flag_a = (uint32_t)(MEM32(esp + 0x4)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(esp + 0x4) = MEM32(esp + 0x4) - 8; /* 0x1703C24D: sub dword ptr [esp + 4], 8 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    goto L_17039DE5; /* 0x1703C252: jmp 0x17039de5 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}
