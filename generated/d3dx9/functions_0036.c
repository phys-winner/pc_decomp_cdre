#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_12147B40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12147B40u);

L_12147B40:
    edi = edi; /* 0x12147B40: mov edi, edi */
    PUSH32(esp, esi); /* 0x12147B42: push esi */
    PUSH32(esp, 0x8000u); /* 0x12147B43: push 0x8000 */
    esi = ecx; /* 0x12147B48: mov esi, ecx */
    RECOMP_CALL(sub_121BF524); /* 0x12147B4A: call 0x121bf524 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x12147B4F: pop ecx */
    MEM32(esi + 0x4) = eax; /* 0x12147B50: mov dword ptr [esi + 4], eax */
    /* test eax, eax */ /* 0x12147B53: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12147B59; /* 0x12147B55: jne 0x12147b59 */
L_12147B57:
    esi = POP32_VAL(esp); /* 0x12147B57: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x12147B58: ret  */
L_12147B59:
    PUSH32(esp, 0x12147588u); /* 0x12147B59: push 0x12147588 */
    RECOMP_CALL(sub_1214F222); /* 0x12147B5E: call 0x1214f222 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x12147B63: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x12147B65: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(ecx, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x12147B67: setne cl */
    MEM32(esi) = eax; /* 0x12147B6A: mov dword ptr [esi], eax */
    esi = POP32_VAL(esp); /* 0x12147B6C: pop esi */
    eax = ecx; /* 0x12147B6D: mov eax, ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x12147B6F: ret  */
    RECOMP_REGS_OUT();
}

void sub_12147B75(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12147B75u);

L_12147B75:
    edi = edi; /* 0x12147B75: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12147B77: push ebp */
    ebp = esp; /* 0x12147B78: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x12147B7A: push ecx */
    eax = MEM32(ebp + 0x14); /* 0x12147B7B: mov eax, dword ptr [ebp + 0x14] */
    PUSH32(esp, ebx); /* 0x12147B7E: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x12147B7F: mov ebx, dword ptr [ebp + 8] */
    edx = MEM32(ebx + 0x10); /* 0x12147B82: mov edx, dword ptr [ebx + 0x10] */
    PUSH32(esp, edx); /* 0x12147B85: push edx */
    MEM32(ebp + (-0x4)) = ecx; /* 0x12147B86: mov dword ptr [ebp - 4], ecx */
    MEM32(eax) = edx; /* 0x12147B89: mov dword ptr [eax], edx */
    RECOMP_CALL(sub_121BF524); /* 0x12147B8B: call 0x121bf524 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x12147B90: pop ecx */
    ecx = MEM32(ebp + 0x10); /* 0x12147B91: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(ecx) = eax; /* 0x12147B94: mov dword ptr [ecx], eax */
    /* test eax, eax */ /* 0x12147B96: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12147BA4; /* 0x12147B98: jne 0x12147ba4 */
L_12147B9A:
    eax = 0x8007000Eu; /* 0x12147B9A: mov eax, 0x8007000e */
    goto L_12147C5B; /* 0x12147B9F: jmp 0x12147c5b */
L_12147BA4:
    PUSH32(esp, esi); /* 0x12147BA4: push esi */
    PUSH32(esp, edi); /* 0x12147BA5: push edi */
    esi = ebx; /* 0x12147BA6: mov esi, ebx */
    edi = eax; /* 0x12147BA8: mov edi, eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12147BAA: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12147BAB: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12147BAC: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12147BAD: movsd dword ptr es:[edi], dword ptr [esi] */
    /* cmp MEM32(eax + 0x8), 0x70697A62u */ /* 0x12147BAE: cmp dword ptr [eax + 8], 0x70697a62 */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(0x70697A62u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12147BC0; /* 0x12147BB5: jne 0x12147bc0 */
L_12147BB7:
    MEM32(eax + 0x8) = 0x206E6962u; /* 0x12147BB7: mov dword ptr [eax + 8], 0x206e6962 */
    goto L_12147BD0; /* 0x12147BBE: jmp 0x12147bd0 */
L_12147BC0:
    /* cmp MEM32(eax + 0x8), 0x70697A74u */ /* 0x12147BC0: cmp dword ptr [eax + 8], 0x70697a74 */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(0x70697A74u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12147BD0; /* 0x12147BC7: jne 0x12147bd0 */
L_12147BC9:
    MEM32(eax + 0x8) = 0x20747874u; /* 0x12147BC9: mov dword ptr [eax + 8], 0x20747874 */
L_12147BD0:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x12147BD0: add eax, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = eax; /* 0x12147BD3: mov dword ptr [ebp + 8], eax */
    eax = MEM32(ebp + 0xC); /* 0x12147BD6: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x12147BD9: add eax, ebx */
    _flag_k = FK_ADD;
    esi = ebx + 0x14; /* 0x12147BDB: lea esi, [ebx + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x12147BDE: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0xC) = eax; /* 0x12147BE0: mov dword ptr [ebp + 0xc], eax */
    /* cmp esi, eax */ /* 0x12147BE3: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_12147C57; /* 0x12147BE5: jae 0x12147c57 */
L_12147BE7:
    ebx = MEM32(ebp + (-0x4)); /* 0x12147BE7: mov ebx, dword ptr [ebp - 4] */
L_12147BEA:
    eax = (uint32_t)MEM16(esi + 0x2); /* 0x12147BEA: movzx eax, word ptr [esi + 2] */
    PUSH32(esp, 0x8000u); /* 0x12147BEE: push 0x8000 */
    PUSH32(esp, MEM32(ebx + 0x4)); /* 0x12147BF3: push dword ptr [ebx + 4] */
    PUSH32(esp, eax); /* 0x12147BF6: push eax */
    eax = esi + 0x4; /* 0x12147BF7: lea eax, [esi + 4] */
    PUSH32(esp, eax); /* 0x12147BFA: push eax */
    PUSH32(esp, MEM32(ebx)); /* 0x12147BFB: push dword ptr [ebx] */
    RECOMP_CALL(sub_1214F127); /* 0x12147BFD: call 0x1214f127 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12147C02: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12147C47; /* 0x12147C04: jne 0x12147c47 */
L_12147C06:
    eax = (uint32_t)MEM16(esi); /* 0x12147C06: movzx eax, word ptr [esi] */
    MEM32(ebp + 0x14) = eax; /* 0x12147C09: mov dword ptr [ebp + 0x14], eax */
    eax = ebp + 0x14; /* 0x12147C0C: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x12147C0F: push eax */
    PUSH32(esp, MEM32(ebx)); /* 0x12147C10: push dword ptr [ebx] */
    RECOMP_CALL(sub_1214F17E); /* 0x12147C12: call 0x1214f17e */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12147C17: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12147C47; /* 0x12147C19: jne 0x12147c47 */
L_12147C1B:
    eax = (uint32_t)MEM16(esi); /* 0x12147C1B: movzx eax, word ptr [esi] */
    /* cmp MEM32(ebp + 0x14), eax */ /* 0x12147C1E: cmp dword ptr [ebp + 0x14], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12147C47; /* 0x12147C21: jne 0x12147c47 */
L_12147C23:
    PUSH32(esp, eax); /* 0x12147C23: push eax */
    PUSH32(esp, MEM32(ebx + 0x4)); /* 0x12147C24: push dword ptr [ebx + 4] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x12147C27: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_121BF440); /* 0x12147C2A: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    eax = (uint32_t)MEM16(esi); /* 0x12147C2F: movzx eax, word ptr [esi] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + eax; /* 0x12147C32: add dword ptr [ebp + 8], eax */
    _flag_k = FK_ADD;
    eax = (uint32_t)MEM16(esi + 0x2); /* 0x12147C35: movzx eax, word ptr [esi + 2] */
    esi = esi + eax + 0x4; /* 0x12147C39: lea esi, [esi + eax + 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x12147C3D: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp esi, MEM32(ebp + 0xC) */ /* 0x12147C40: cmp esi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_12147BEA; /* 0x12147C43: jb 0x12147bea */
L_12147C45:
    goto L_12147C57; /* 0x12147C45: jmp 0x12147c57 */
L_12147C47:
    eax = MEM32(ebp + 0x10); /* 0x12147C47: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(eax)); /* 0x12147C4A: push dword ptr [eax] */
    edi = 0x80004005u; /* 0x12147C4C: mov edi, 0x80004005 */
    RECOMP_CALL(sub_121BF586); /* 0x12147C51: call 0x121bf586 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x12147C56: pop ecx */
L_12147C57:
    eax = edi; /* 0x12147C57: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x12147C59: pop edi */
    esi = POP32_VAL(esp); /* 0x12147C5A: pop esi */
L_12147C5B:
    ebx = POP32_VAL(esp); /* 0x12147C5B: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12147C5C: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x12147C5D: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_12147C65(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12147C65u);

L_12147C65:
    edi = edi; /* 0x12147C65: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12147C67: push ebp */
    ebp = esp; /* 0x12147C68: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x12147C6A: sub esp, 0x14 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x14)) = MEM32(ebp + (-0x14)) & 0; /* 0x12147C6D: and dword ptr [ebp - 0x14], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & 0; /* 0x12147C71: and dword ptr [ebp - 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x12147C75: push esi */
    ecx = ebp + (-0x14); /* 0x12147C76: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_12147B40); /* 0x12147C79: call 0x12147b40 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12147C7E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12147C9E; /* 0x12147C80: je 0x12147c9e */
L_12147C82:
    ecx = MEM32(ebp + 0x8); /* 0x12147C82: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ecx); /* 0x12147C85: mov eax, dword ptr [ecx] */
    edx = ebp + (-0x4); /* 0x12147C87: lea edx, [ebp - 4] */
    PUSH32(esp, edx); /* 0x12147C8A: push edx */
    edx = ebp + (-0x8); /* 0x12147C8B: lea edx, [ebp - 8] */
    PUSH32(esp, edx); /* 0x12147C8E: push edx */
    RECOMP_ICALL(MEM32(eax + 0x20)); /* 0x12147C8F: call dword ptr [eax + 0x20] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x12147C92: mov esi, eax */
    /* test esi, esi */ /* 0x12147C94: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_12147CF3; /* 0x12147C96: js 0x12147cf3 */
L_12147C98:
    /* cmp MEM32(ebp + (-0x4)), 0xFFFFFFFFu */ /* 0x12147C98: cmp dword ptr [ebp - 4], -1 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_12147CA5; /* 0x12147C9C: jbe 0x12147ca5 */
L_12147C9E:
    esi = 0x8007000Eu; /* 0x12147C9E: mov esi, 0x8007000e */
    goto L_12147CF3; /* 0x12147CA3: jmp 0x12147cf3 */
L_12147CA5:
    eax = ebp + 0x8; /* 0x12147CA5: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x12147CA8: push eax */
    eax = ebp + (-0xC); /* 0x12147CA9: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x12147CAC: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x12147CAD: push dword ptr [ebp - 4] */
    ecx = ebp + (-0x14); /* 0x12147CB0: lea ecx, [ebp - 0x14] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x12147CB3: push dword ptr [ebp - 8] */
    RECOMP_CALL(sub_12147B75); /* 0x12147CB6: call 0x12147b75 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x12147CBB: mov esi, eax */
    /* test esi, esi */ /* 0x12147CBD: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_12147CF3; /* 0x12147CBF: js 0x12147cf3 */
L_12147CC1:
    PUSH32(esp, 0x120014BCu); /* 0x12147CC1: push 0x120014bc */
    PUSH32(esp, 0x18u); /* 0x12147CC6: push 0x18 */
    RECOMP_CALL(sub_12018970); /* 0x12147CC8: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x12147CCD: pop ecx */
    ecx = POP32_VAL(esp); /* 0x12147CCE: pop ecx */
    /* test eax, eax */ /* 0x12147CCF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12147CE6; /* 0x12147CD1: je 0x12147ce6 */
L_12147CD3:
    PUSH32(esp, 1); /* 0x12147CD3: push 1 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x12147CD5: push dword ptr [ebp + 8] */
    ecx = eax; /* 0x12147CD8: mov ecx, eax */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x12147CDA: push dword ptr [ebp - 0xc] */
    RECOMP_CALL(sub_12147E78); /* 0x12147CDD: call 0x12147e78 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x12147CE2: mov ecx, eax */
    goto L_12147CE8; /* 0x12147CE4: jmp 0x12147ce8 */
L_12147CE6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x12147CE6: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_12147CE8:
    eax = MEM32(ebp + 0xC); /* 0x12147CE8: mov eax, dword ptr [ebp + 0xc] */
    MEM32(eax) = ecx; /* 0x12147CEB: mov dword ptr [eax], ecx */
    /* test ecx, ecx */ /* 0x12147CED: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_12147C9E; /* 0x12147CEF: je 0x12147c9e */
L_12147CF1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x12147CF1: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_12147CF3:
    ecx = ebp + (-0x14); /* 0x12147CF3: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_12147B14); /* 0x12147CF6: call 0x12147b14 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x12147CFB: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x12147CFD: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12147CFE: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x12147CFF: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_12147D07(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12147D07u);

L_12147D07:
    edi = edi; /* 0x12147D07: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12147D09: push ebp */
    ebp = esp; /* 0x12147D0A: mov ebp, esp */
    edx = ecx + 0x10; /* 0x12147D0C: lea edx, [ecx + 0x10] */
    PUSH32(esp, esi); /* 0x12147D0F: push esi */
    esi = MEM32(edx); /* 0x12147D10: mov esi, dword ptr [edx] */
    eax = esi + 0x1; /* 0x12147D12: lea eax, [esi + 1] */
    /* cmp eax, MEM32(ecx + 0xC) */ /* 0x12147D15: cmp eax, dword ptr [ecx + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_12147D28; /* 0x12147D18: ja 0x12147d28 */
L_12147D1A:
    SET_LO8(ecx, MEM8(esi)); /* 0x12147D1A: mov cl, byte ptr [esi] */
    eax = MEM32(ebp + 0x8); /* 0x12147D1C: mov eax, dword ptr [ebp + 8] */
    MEM8(eax) = (uint8_t)(LO8(ecx)); /* 0x12147D1F: mov byte ptr [eax], cl */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(1);
    MEM32(edx) = MEM32(edx) + 1; /* 0x12147D21: inc dword ptr [edx] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12147D23: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x12147D25: inc eax */
    _flag_k = FK_INC;
    goto L_12147D2A; /* 0x12147D26: jmp 0x12147d2a */
L_12147D28:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12147D28: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_12147D2A:
    esi = POP32_VAL(esp); /* 0x12147D2A: pop esi */
    ebp = POP32_VAL(esp); /* 0x12147D2B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12147D2C: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12147D34(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12147D34u);

L_12147D34:
    edi = edi; /* 0x12147D34: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12147D36: push ebp */
    ebp = esp; /* 0x12147D37: mov ebp, esp */
    edx = ecx + 0x10; /* 0x12147D39: lea edx, [ecx + 0x10] */
    PUSH32(esp, esi); /* 0x12147D3C: push esi */
    esi = MEM32(edx); /* 0x12147D3D: mov esi, dword ptr [edx] */
    eax = esi + 0x2; /* 0x12147D3F: lea eax, [esi + 2] */
    /* cmp eax, MEM32(ecx + 0xC) */ /* 0x12147D42: cmp eax, dword ptr [ecx + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_12147D58; /* 0x12147D45: ja 0x12147d58 */
L_12147D47:
    SET_LO16(ecx, MEM16(esi)); /* 0x12147D47: mov cx, word ptr [esi] */
    eax = MEM32(ebp + 0x8); /* 0x12147D4A: mov eax, dword ptr [ebp + 8] */
    MEM16(eax) = (uint16_t)(LO16(ecx)); /* 0x12147D4D: mov word ptr [eax], cx */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edx) = MEM32(edx) + 2; /* 0x12147D50: add dword ptr [edx], 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12147D53: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x12147D55: inc eax */
    _flag_k = FK_INC;
    goto L_12147D5A; /* 0x12147D56: jmp 0x12147d5a */
L_12147D58:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12147D58: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_12147D5A:
    esi = POP32_VAL(esp); /* 0x12147D5A: pop esi */
    ebp = POP32_VAL(esp); /* 0x12147D5B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12147D5C: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12147D64(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12147D64u);

L_12147D64:
    edi = edi; /* 0x12147D64: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12147D66: push ebp */
    ebp = esp; /* 0x12147D67: mov ebp, esp */
    edx = ecx + 0x10; /* 0x12147D69: lea edx, [ecx + 0x10] */
    PUSH32(esp, esi); /* 0x12147D6C: push esi */
    esi = MEM32(edx); /* 0x12147D6D: mov esi, dword ptr [edx] */
    eax = esi + 0x4; /* 0x12147D6F: lea eax, [esi + 4] */
    /* cmp eax, MEM32(ecx + 0xC) */ /* 0x12147D72: cmp eax, dword ptr [ecx + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_12147D86; /* 0x12147D75: ja 0x12147d86 */
L_12147D77:
    ecx = MEM32(esi); /* 0x12147D77: mov ecx, dword ptr [esi] */
    eax = MEM32(ebp + 0x8); /* 0x12147D79: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = ecx; /* 0x12147D7C: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edx) = MEM32(edx) + 4; /* 0x12147D7E: add dword ptr [edx], 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12147D81: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x12147D83: inc eax */
    _flag_k = FK_INC;
    goto L_12147D88; /* 0x12147D84: jmp 0x12147d88 */
L_12147D86:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12147D86: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_12147D88:
    esi = POP32_VAL(esp); /* 0x12147D88: pop esi */
    ebp = POP32_VAL(esp); /* 0x12147D89: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12147D8A: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12147D92(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12147D92u);

L_12147D92:
    edi = edi; /* 0x12147D92: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12147D94: push ebp */
    ebp = esp; /* 0x12147D95: mov ebp, esp */
    PUSH32(esp, esi); /* 0x12147D97: push esi */
    esi = MEM32(ecx + 0x10); /* 0x12147D98: mov esi, dword ptr [ecx + 0x10] */
    eax = esi + 0x4; /* 0x12147D9B: lea eax, [esi + 4] */
    /* cmp eax, MEM32(ecx + 0xC) */ /* 0x12147D9E: cmp eax, dword ptr [ecx + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_12147DB3; /* 0x12147DA1: ja 0x12147db3 */
L_12147DA3:
    fp_push(*(float*)&MEM32(esi)); /* 0x12147DA3: fld dword ptr [esi] */
    eax = MEM32(ebp + 0x8); /* 0x12147DA5: mov eax, dword ptr [ebp + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x12147DA8: fstp dword ptr [eax] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx + 0x10) = MEM32(ecx + 0x10) + 4; /* 0x12147DAA: add dword ptr [ecx + 0x10], 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12147DAE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x12147DB0: inc eax */
    _flag_k = FK_INC;
    goto L_12147DB5; /* 0x12147DB1: jmp 0x12147db5 */
L_12147DB3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12147DB3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_12147DB5:
    esi = POP32_VAL(esp); /* 0x12147DB5: pop esi */
    ebp = POP32_VAL(esp); /* 0x12147DB6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12147DB7: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12147DBF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12147DBFu);

L_12147DBF:
    edi = edi; /* 0x12147DBF: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12147DC1: push ebp */
    ebp = esp; /* 0x12147DC2: mov ebp, esp */
    PUSH32(esp, esi); /* 0x12147DC4: push esi */
    esi = MEM32(ecx + 0x10); /* 0x12147DC5: mov esi, dword ptr [ecx + 0x10] */
    eax = esi + 0x8; /* 0x12147DC8: lea eax, [esi + 8] */
    /* cmp eax, MEM32(ecx + 0xC) */ /* 0x12147DCB: cmp eax, dword ptr [ecx + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_12147DE0; /* 0x12147DCE: ja 0x12147de0 */
L_12147DD0:
    fp_push(*(double*)ADDR(esi)); /* 0x12147DD0: fld qword ptr [esi] */
    eax = MEM32(ebp + 0x8); /* 0x12147DD2: mov eax, dword ptr [ebp + 8] */
    { double _v = fp_pop(); *(double*)ADDR(eax) = _v; } /* 0x12147DD5: fstp qword ptr [eax] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx + 0x10) = MEM32(ecx + 0x10) + 8; /* 0x12147DD7: add dword ptr [ecx + 0x10], 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12147DDB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x12147DDD: inc eax */
    _flag_k = FK_INC;
    goto L_12147DE2; /* 0x12147DDE: jmp 0x12147de2 */
L_12147DE0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12147DE0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_12147DE2:
    esi = POP32_VAL(esp); /* 0x12147DE2: pop esi */
    ebp = POP32_VAL(esp); /* 0x12147DE3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12147DE4: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12147DEC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12147DECu);

L_12147DEC:
    edi = edi; /* 0x12147DEC: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12147DEE: push ebp */
    ebp = esp; /* 0x12147DEF: mov ebp, esp */
    eax = MEM32(ecx + 0x8); /* 0x12147DF1: mov eax, dword ptr [ecx + 8] */
    /* cmp MEM32(ebp + 0xC), eax */ /* 0x12147DF4: cmp dword ptr [ebp + 0xc], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_12147E00; /* 0x12147DF7: jb 0x12147e00 */
L_12147DF9:
    eax = 0x88760394u; /* 0x12147DF9: mov eax, 0x88760394 */
    goto L_12147E28; /* 0x12147DFE: jmp 0x12147e28 */
L_12147E00:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + 0xC); /* 0x12147E00: sub eax, dword ptr [ebp + 0xc] */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x12147E03: push esi */
    esi = MEM32(ebp + 0x10); /* 0x12147E04: mov esi, dword ptr [ebp + 0x10] */
    /* cmp esi, eax */ /* 0x12147E07: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_12147E0D; /* 0x12147E09: jbe 0x12147e0d */
L_12147E0B:
    esi = eax; /* 0x12147E0B: mov esi, eax */
L_12147E0D:
    eax = MEM32(ecx + 0x4); /* 0x12147E0D: mov eax, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + 0xC); /* 0x12147E10: add eax, dword ptr [ebp + 0xc] */
    _flag_k = FK_ADD;
    PUSH32(esp, esi); /* 0x12147E13: push esi */
    PUSH32(esp, eax); /* 0x12147E14: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x12147E15: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_121BF440); /* 0x12147E18: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x14); /* 0x12147E1D: mov eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x12147E20: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(eax) = esi; /* 0x12147E23: mov dword ptr [eax], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12147E25: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x12147E27: pop esi */
L_12147E28:
    ebp = POP32_VAL(esp); /* 0x12147E28: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x12147E29: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_12147E31(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12147E31u);

L_12147E31:
    edi = edi; /* 0x12147E31: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12147E33: push ebp */
    ebp = esp; /* 0x12147E34: mov ebp, esp */
    edx = MEM32(ecx + 0x4); /* 0x12147E36: mov edx, dword ptr [ecx + 4] */
    eax = MEM32(ebp + 0x8); /* 0x12147E39: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = edx; /* 0x12147E3C: mov dword ptr [eax], edx */
    eax = MEM32(ebp + 0xC); /* 0x12147E3E: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ecx + 0x8); /* 0x12147E41: mov ecx, dword ptr [ecx + 8] */
    MEM32(eax) = ecx; /* 0x12147E44: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12147E46: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x12147E48: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x12147E49: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_12147E51(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12147E51u);

L_12147E51:
    edi = edi; /* 0x12147E51: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12147E53: push ebp */
    ebp = esp; /* 0x12147E54: mov ebp, esp */
    /* test MEM8(ebp + 0x8), 1 */ /* 0x12147E56: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, esi); /* 0x12147E5A: push esi */
    esi = ecx; /* 0x12147E5B: mov esi, ecx */
    MEM32(esi) = 0x12011204u; /* 0x12147E5D: mov dword ptr [esi], 0x12011204 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_12147E6C; /* 0x12147E63: je 0x12147e6c */
L_12147E65:
    PUSH32(esp, esi); /* 0x12147E65: push esi */
    RECOMP_CALL(sub_121BF388); /* 0x12147E66: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x12147E6B: pop ecx */
L_12147E6C:
    eax = esi; /* 0x12147E6C: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x12147E6E: pop esi */
    ebp = POP32_VAL(esp); /* 0x12147E6F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12147E70: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12147E78(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12147E78u);

L_12147E78:
    edi = edi; /* 0x12147E78: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12147E7A: push ebp */
    ebp = esp; /* 0x12147E7B: mov ebp, esp */
    eax = MEM32(ebp + 0x10); /* 0x12147E7D: mov eax, dword ptr [ebp + 0x10] */
    edx = MEM32(ebp + 0xC); /* 0x12147E80: mov edx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x12147E83: push esi */
    esi = MEM32(ebp + 0x8); /* 0x12147E84: mov esi, dword ptr [ebp + 8] */
    MEM32(ecx + 0x14) = eax; /* 0x12147E87: mov dword ptr [ecx + 0x14], eax */
    eax = esi + edx; /* 0x12147E8A: lea eax, [esi + edx] */
    MEM32(ecx + 0x4) = esi; /* 0x12147E8D: mov dword ptr [ecx + 4], esi */
    MEM32(ecx + 0x10) = esi; /* 0x12147E90: mov dword ptr [ecx + 0x10], esi */
    MEM32(ecx + 0xC) = eax; /* 0x12147E93: mov dword ptr [ecx + 0xc], eax */
    MEM32(ecx) = 0x12011228u; /* 0x12147E96: mov dword ptr [ecx], 0x12011228 */
    MEM32(ecx + 0x8) = edx; /* 0x12147E9C: mov dword ptr [ecx + 8], edx */
    eax = ecx; /* 0x12147E9F: mov eax, ecx */
    esi = POP32_VAL(esp); /* 0x12147EA1: pop esi */
    ebp = POP32_VAL(esp); /* 0x12147EA2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x12147EA3: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_12147EB4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12147EB4u);

L_12147EB4:
    edi = edi; /* 0x12147EB4: mov edi, edi */
    PUSH32(esp, esi); /* 0x12147EB6: push esi */
    esi = ecx; /* 0x12147EB7: mov esi, ecx */
    /* cmp MEM32(esi + 0x14), 0 */ /* 0x12147EB9: cmp dword ptr [esi + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi) = 0x12011228u; /* 0x12147EBD: mov dword ptr [esi], 0x12011228 */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12147ECE; /* 0x12147EC3: je 0x12147ece */
L_12147EC5:
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x12147EC5: push dword ptr [esi + 4] */
    RECOMP_CALL(sub_121BF586); /* 0x12147EC8: call 0x121bf586 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x12147ECD: pop ecx */
L_12147ECE:
    MEM32(esi) = 0x12011204u; /* 0x12147ECE: mov dword ptr [esi], 0x12011204 */
    esi = POP32_VAL(esp); /* 0x12147ED4: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x12147ED5: ret  */
    RECOMP_REGS_OUT();
}

void sub_12147EDB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12147EDBu);

L_12147EDB:
    edi = edi; /* 0x12147EDB: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12147EDD: push ebp */
    ebp = esp; /* 0x12147EDE: mov ebp, esp */
    edx = MEM32(ebp + 0xC); /* 0x12147EE0: mov edx, dword ptr [ebp + 0xc] */
    eax = MEM32(ebp + 0x10); /* 0x12147EE3: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x14)); _flag_b = (uint32_t)(0);
    MEM32(ecx + 0x14) = MEM32(ecx + 0x14) & 0; /* 0x12147EE6: and dword ptr [ecx + 0x14], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx + 0x8) = eax; /* 0x12147EEA: mov dword ptr [ecx + 8], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x12147EED: add eax, edx */
    _flag_k = FK_ADD;
    MEM32(ecx + 0xC) = eax; /* 0x12147EEF: mov dword ptr [ecx + 0xc], eax */
    eax = MEM32(ebp + 0x8); /* 0x12147EF2: mov eax, dword ptr [ebp + 8] */
    MEM32(ecx + 0x18) = eax; /* 0x12147EF5: mov dword ptr [ecx + 0x18], eax */
    MEM32(ecx + 0x4) = edx; /* 0x12147EF8: mov dword ptr [ecx + 4], edx */
    MEM32(ecx + 0x10) = edx; /* 0x12147EFB: mov dword ptr [ecx + 0x10], edx */
    MEM32(ecx) = 0x1201124Cu; /* 0x12147EFE: mov dword ptr [ecx], 0x1201124c */
    eax = ecx; /* 0x12147F04: mov eax, ecx */
    ebp = POP32_VAL(esp); /* 0x12147F06: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x12147F07: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_12147F0F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12147F0Fu);

    goto L_12147F0F;
L_12147EB4:
    edi = edi; /* 0x12147EB4: mov edi, edi */
    PUSH32(esp, esi); /* 0x12147EB6: push esi */
    esi = ecx; /* 0x12147EB7: mov esi, ecx */
    /* cmp MEM32(esi + 0x14), 0 */ /* 0x12147EB9: cmp dword ptr [esi + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi) = 0x12011228u; /* 0x12147EBD: mov dword ptr [esi], 0x12011228 */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12147ECE; /* 0x12147EC3: je 0x12147ece */
L_12147EC5:
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x12147EC5: push dword ptr [esi + 4] */
    RECOMP_CALL(sub_121BF586); /* 0x12147EC8: call 0x121bf586 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x12147ECD: pop ecx */
L_12147ECE:
    MEM32(esi) = 0x12011204u; /* 0x12147ECE: mov dword ptr [esi], 0x12011204 */
    esi = POP32_VAL(esp); /* 0x12147ED4: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x12147ED5: ret  */
L_12147F0F:
    edi = edi; /* 0x12147F0F: mov edi, edi */
    PUSH32(esp, esi); /* 0x12147F11: push esi */
    esi = ecx; /* 0x12147F12: mov esi, ecx */
    PUSH32(esp, MEM32(esi + 0x18)); /* 0x12147F14: push dword ptr [esi + 0x18] */
    MEM32(esi) = 0x1201124Cu; /* 0x12147F17: mov dword ptr [esi], 0x1201124c */
    RECOMP_ICALL(MEM32(0x120010A8)); /* 0x12147F1D: call dword ptr [0x120010a8] */
    RECOMP_FLAGS_IN();
    ecx = esi; /* 0x12147F23: mov ecx, esi */
    esi = POP32_VAL(esp); /* 0x12147F25: pop esi */
    RECOMP_BACKEDGE();
    goto L_12147EB4; /* 0x12147F26: jmp 0x12147eb4 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_12147F30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12147F30u);

L_12147F30:
    edi = edi; /* 0x12147F30: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12147F32: push ebp */
    ebp = esp; /* 0x12147F33: mov ebp, esp */
    edx = MEM32(ebp + 0x10); /* 0x12147F35: mov edx, dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0x14); /* 0x12147F38: mov eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x14)); _flag_b = (uint32_t)(0);
    MEM32(ecx + 0x14) = MEM32(ecx + 0x14) & 0; /* 0x12147F3B: and dword ptr [ecx + 0x14], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx + 0x8) = eax; /* 0x12147F3F: mov dword ptr [ecx + 8], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x12147F42: add eax, edx */
    _flag_k = FK_ADD;
    MEM32(ecx + 0xC) = eax; /* 0x12147F44: mov dword ptr [ecx + 0xc], eax */
    eax = MEM32(ebp + 0x8); /* 0x12147F47: mov eax, dword ptr [ebp + 8] */
    MEM32(ecx + 0x18) = eax; /* 0x12147F4A: mov dword ptr [ecx + 0x18], eax */
    eax = MEM32(ebp + 0xC); /* 0x12147F4D: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ecx + 0x1C) = eax; /* 0x12147F50: mov dword ptr [ecx + 0x1c], eax */
    MEM32(ecx + 0x4) = edx; /* 0x12147F53: mov dword ptr [ecx + 4], edx */
    MEM32(ecx + 0x10) = edx; /* 0x12147F56: mov dword ptr [ecx + 0x10], edx */
    MEM32(ecx) = 0x12011270u; /* 0x12147F59: mov dword ptr [ecx], 0x12011270 */
    MEM32(ecx + 0x20) = edx; /* 0x12147F5F: mov dword ptr [ecx + 0x20], edx */
    eax = ecx; /* 0x12147F62: mov eax, ecx */
    ebp = POP32_VAL(esp); /* 0x12147F64: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x12147F65: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_12147F6D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12147F6Du);

    goto L_12147F6D;
L_12147EB4:
    edi = edi; /* 0x12147EB4: mov edi, edi */
    PUSH32(esp, esi); /* 0x12147EB6: push esi */
    esi = ecx; /* 0x12147EB7: mov esi, ecx */
    /* cmp MEM32(esi + 0x14), 0 */ /* 0x12147EB9: cmp dword ptr [esi + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi) = 0x12011228u; /* 0x12147EBD: mov dword ptr [esi], 0x12011228 */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12147ECE; /* 0x12147EC3: je 0x12147ece */
L_12147EC5:
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x12147EC5: push dword ptr [esi + 4] */
    RECOMP_CALL(sub_121BF586); /* 0x12147EC8: call 0x121bf586 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x12147ECD: pop ecx */
L_12147ECE:
    MEM32(esi) = 0x12011204u; /* 0x12147ECE: mov dword ptr [esi], 0x12011204 */
    esi = POP32_VAL(esp); /* 0x12147ED4: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x12147ED5: ret  */
L_12147F6D:
    edi = edi; /* 0x12147F6D: mov edi, edi */
    PUSH32(esp, edi); /* 0x12147F6F: push edi */
    edi = ecx; /* 0x12147F70: mov edi, ecx */
    PUSH32(esp, MEM32(edi + 0x20)); /* 0x12147F72: push dword ptr [edi + 0x20] */
    MEM32(edi) = 0x12011270u; /* 0x12147F75: mov dword ptr [edi], 0x12011270 */
    RECOMP_ICALL(MEM32(0x12001094)); /* 0x12147F7B: call dword ptr [0x12001094] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(edi + 0x1C)); /* 0x12147F81: push dword ptr [edi + 0x1c] */
    RECOMP_ICALL(MEM32(0x120010F0)); /* 0x12147F84: call dword ptr [0x120010f0] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(edi + 0x18)); /* 0x12147F8A: push dword ptr [edi + 0x18] */
    RECOMP_ICALL(MEM32(0x120010F0)); /* 0x12147F8D: call dword ptr [0x120010f0] */
    RECOMP_FLAGS_IN();
    ecx = edi; /* 0x12147F93: mov ecx, edi */
    edi = POP32_VAL(esp); /* 0x12147F95: pop edi */
    RECOMP_BACKEDGE();
    goto L_12147EB4; /* 0x12147F96: jmp 0x12147eb4 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_12147FA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12147FA0u);

L_12147FA0:
    edi = edi; /* 0x12147FA0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12147FA2: push ebp */
    ebp = esp; /* 0x12147FA3: mov ebp, esp */
    PUSH32(esp, esi); /* 0x12147FA5: push esi */
    esi = ecx; /* 0x12147FA6: mov esi, ecx */
    RECOMP_CALL(sub_12147EB4); /* 0x12147FA8: call 0x12147eb4 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x12147FAD: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12147FBA; /* 0x12147FB1: je 0x12147fba */
L_12147FB3:
    PUSH32(esp, esi); /* 0x12147FB3: push esi */
    RECOMP_CALL(sub_121BF388); /* 0x12147FB4: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x12147FB9: pop ecx */
L_12147FBA:
    eax = esi; /* 0x12147FBA: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x12147FBC: pop esi */
    ebp = POP32_VAL(esp); /* 0x12147FBD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12147FBE: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12147FC6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12147FC6u);

L_12147FC6:
    edi = edi; /* 0x12147FC6: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12147FC8: push ebp */
    ebp = esp; /* 0x12147FC9: mov ebp, esp */
    PUSH32(esp, esi); /* 0x12147FCB: push esi */
    esi = ecx; /* 0x12147FCC: mov esi, ecx */
    RECOMP_CALL(sub_12147F0F); /* 0x12147FCE: call 0x12147f0f */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x12147FD3: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12147FE0; /* 0x12147FD7: je 0x12147fe0 */
L_12147FD9:
    PUSH32(esp, esi); /* 0x12147FD9: push esi */
    RECOMP_CALL(sub_121BF388); /* 0x12147FDA: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x12147FDF: pop ecx */
L_12147FE0:
    eax = esi; /* 0x12147FE0: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x12147FE2: pop esi */
    ebp = POP32_VAL(esp); /* 0x12147FE3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12147FE4: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12147FEC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12147FECu);

L_12147FEC:
    edi = edi; /* 0x12147FEC: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12147FEE: push ebp */
    ebp = esp; /* 0x12147FEF: mov ebp, esp */
    PUSH32(esp, esi); /* 0x12147FF1: push esi */
    esi = ecx; /* 0x12147FF2: mov esi, ecx */
    RECOMP_CALL(sub_12147F6D); /* 0x12147FF4: call 0x12147f6d */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x12147FF9: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12148006; /* 0x12147FFD: je 0x12148006 */
L_12147FFF:
    PUSH32(esp, esi); /* 0x12147FFF: push esi */
    RECOMP_CALL(sub_121BF388); /* 0x12148000: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x12148005: pop ecx */
L_12148006:
    eax = esi; /* 0x12148006: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x12148008: pop esi */
    ebp = POP32_VAL(esp); /* 0x12148009: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1214800A: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12148012(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12148012u);

L_12148012:
    edi = edi; /* 0x12148012: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12148014: push ebp */
    ebp = esp; /* 0x12148015: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x12148017: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x4); /* 0x1214801A: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax); /* 0x1214801D: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1214801F: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x4)); /* 0x12148020: call dword ptr [ecx + 4] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x12148023: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12148024: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1214802C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214802Cu);

L_1214802C:
    edi = edi; /* 0x1214802C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1214802E: push ebp */
    ebp = esp; /* 0x1214802F: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x12148031: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x4); /* 0x12148034: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax); /* 0x12148037: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x12148039: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1214803A: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1214803D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1214803E: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12148046(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12148046u);

L_12148046:
    edi = edi; /* 0x12148046: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12148048: push ebp */
    ebp = esp; /* 0x12148049: mov ebp, esp */
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x1214804B: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12148066; /* 0x1214804F: je 0x12148066 */
L_12148051:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x12148051: push dword ptr [ebp + 0xc] */
    eax = MEM32(ebp + 0x8); /* 0x12148054: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x4); /* 0x12148057: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax); /* 0x1214805A: mov ecx, dword ptr [eax] */
    PUSH32(esp, 0x12001B38u); /* 0x1214805C: push 0x12001b38 */
    PUSH32(esp, eax); /* 0x12148061: push eax */
    RECOMP_ICALL(MEM32(ecx)); /* 0x12148062: call dword ptr [ecx] */
    RECOMP_FLAGS_IN();
    goto L_1214806B; /* 0x12148064: jmp 0x1214806b */
L_12148066:
    eax = 0x88760385u; /* 0x12148066: mov eax, 0x88760385 */
L_1214806B:
    ebp = POP32_VAL(esp); /* 0x1214806B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1214806C: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_12148074(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12148074u);

L_12148074:
    edi = edi; /* 0x12148074: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12148076: push ebp */
    ebp = esp; /* 0x12148077: mov ebp, esp */
    PUSH32(esp, esi); /* 0x12148079: push esi */
    esi = MEM32(ebp + 0x10); /* 0x1214807A: mov esi, dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x1214807D: push edi */
    /* test esi, esi */ /* 0x1214807E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121480C6; /* 0x12148080: je 0x121480c6 */
L_12148082:
    edi = MEM32(ebp + 0x8); /* 0x12148082: mov edi, dword ptr [ebp + 8] */
    ecx = MEM32(edi + 0x8); /* 0x12148085: mov ecx, dword ptr [edi + 8] */
    eax = MEM32(edi + 0xC); /* 0x12148088: mov eax, dword ptr [edi + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x38u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x38u; /* 0x1214808B: add ecx, 0x38 */
    _flag_k = FK_ADD;
    /* cmp eax, 1 */ /* 0x1214808E: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_121480A6; /* 0x12148091: jne 0x121480a6 */
L_12148093:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x12148093: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi), ecx */ /* 0x12148095: cmp dword ptr [esi], ecx */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_121480A2; /* 0x12148097: jbe 0x121480a2 */
L_12148099:
    eax = MEM32(ebp + 0xC); /* 0x12148099: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x1214809C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121480A2; /* 0x1214809E: je 0x121480a2 */
L_121480A0:
    MEM8(eax) = (uint8_t)(LO8(ecx)); /* 0x121480A0: mov byte ptr [eax], cl */
L_121480A2:
    MEM32(esi) = ecx; /* 0x121480A2: mov dword ptr [esi], ecx */
    goto L_121480C2; /* 0x121480A4: jmp 0x121480c2 */
L_121480A6:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x121480A6: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121480BD; /* 0x121480AA: je 0x121480bd */
L_121480AC:
    /* cmp eax, MEM32(esi) */ /* 0x121480AC: cmp eax, dword ptr [esi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_121480C6; /* 0x121480AE: ja 0x121480c6 */
L_121480B0:
    PUSH32(esp, eax); /* 0x121480B0: push eax */
    PUSH32(esp, ecx); /* 0x121480B1: push ecx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x121480B2: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_121BF440); /* 0x121480B5: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x121480BA: add esp, 0xc */
    _flag_k = FK_ADD;
L_121480BD:
    eax = MEM32(edi + 0xC); /* 0x121480BD: mov eax, dword ptr [edi + 0xc] */
    MEM32(esi) = eax; /* 0x121480C0: mov dword ptr [esi], eax */
L_121480C2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x121480C2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_121480CB; /* 0x121480C4: jmp 0x121480cb */
L_121480C6:
    eax = 0x88760385u; /* 0x121480C6: mov eax, 0x88760385 */
L_121480CB:
    edi = POP32_VAL(esp); /* 0x121480CB: pop edi */
    esi = POP32_VAL(esp); /* 0x121480CC: pop esi */
    ebp = POP32_VAL(esp); /* 0x121480CD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x121480CE: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_121480D6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121480D6u);

L_121480D6:
    edi = edi; /* 0x121480D6: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121480D8: push ebp */
    ebp = esp; /* 0x121480D9: mov ebp, esp */
    PUSH32(esp, edi); /* 0x121480DB: push edi */
    edi = MEM32(ebp + 0xC); /* 0x121480DC: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x121480DF: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121480F6; /* 0x121480E1: je 0x121480f6 */
L_121480E3:
    eax = MEM32(ebp + 0x8); /* 0x121480E3: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x121480E6: push esi */
    esi = MEM32(eax + 0x8); /* 0x121480E7: mov esi, dword ptr [eax + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x20u; /* 0x121480EA: add esi, 0x20 */
    _flag_k = FK_ADD;
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121480ED: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121480EE: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121480EF: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121480F0: movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x121480F1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x121480F3: pop esi */
    goto L_121480FB; /* 0x121480F4: jmp 0x121480fb */
L_121480F6:
    eax = 0x88760385u; /* 0x121480F6: mov eax, 0x88760385 */
L_121480FB:
    edi = POP32_VAL(esp); /* 0x121480FB: pop edi */
    ebp = POP32_VAL(esp); /* 0x121480FC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x121480FD: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1214810F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214810Fu);

L_1214810F:
    edi = edi; /* 0x1214810F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12148111: push ebp */
    ebp = esp; /* 0x12148112: mov ebp, esp */
    eax = MEM32(ebp + 0x10); /* 0x12148114: mov eax, dword ptr [ebp + 0x10] */
    /* test eax, eax */ /* 0x12148117: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214815D; /* 0x12148119: je 0x1214815d */
L_1214811B:
    PUSH32(esp, ebx); /* 0x1214811B: push ebx */
    PUSH32(esp, esi); /* 0x1214811C: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1214811D: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x12148120: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x12148121: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 4); /* 0x12148123: push 4 */
    ecx = POP32_VAL(esp); /* 0x12148125: pop ecx */
    edi = 0x12018314u; /* 0x12148126: mov edi, 0x12018314 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1214812B: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = ebx; /* 0x1214812D: mov dword ptr [eax], ebx */
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x1214812F: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_1214814B; /* 0x12148131: je 0x1214814b */
L_12148133:
    esi = MEM32(ebp + 0xC); /* 0x12148133: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, 4); /* 0x12148136: push 4 */
    ecx = POP32_VAL(esp); /* 0x12148138: pop ecx */
    edi = 0x12001B48u; /* 0x12148139: mov edi, 0x12001b48 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1214813E: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x12148140: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_1214814B; /* 0x12148142: je 0x1214814b */
L_12148144:
    ebx = 0x80004002u; /* 0x12148144: mov ebx, 0x80004002 */
    goto L_12148156; /* 0x12148149: jmp 0x12148156 */
L_1214814B:
    edx = MEM32(ebp + 0x8); /* 0x1214814B: mov edx, dword ptr [ebp + 8] */
    MEM32(eax) = edx; /* 0x1214814E: mov dword ptr [eax], edx */
    ecx = MEM32(edx); /* 0x12148150: mov ecx, dword ptr [edx] */
    PUSH32(esp, edx); /* 0x12148152: push edx */
    RECOMP_ICALL(MEM32(ecx + 0x4)); /* 0x12148153: call dword ptr [ecx + 4] */
    RECOMP_FLAGS_IN();
L_12148156:
    edi = POP32_VAL(esp); /* 0x12148156: pop edi */
    esi = POP32_VAL(esp); /* 0x12148157: pop esi */
    eax = ebx; /* 0x12148158: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x1214815A: pop ebx */
    goto L_12148162; /* 0x1214815B: jmp 0x12148162 */
L_1214815D:
    eax = 0x80004003u; /* 0x1214815D: mov eax, 0x80004003 */
L_12148162:
    ebp = POP32_VAL(esp); /* 0x12148162: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x12148163: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1214816B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214816Bu);

L_1214816B:
    edi = edi; /* 0x1214816B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1214816D: push ebp */
    ebp = esp; /* 0x1214816E: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x12148170: push dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0x8); /* 0x12148173: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x4); /* 0x12148176: mov eax, dword ptr [eax + 4] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x12148179: push dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x1214817C: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1214817E: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x10)); /* 0x1214817F: call dword ptr [ecx + 0x10] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x12148182: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x12148183: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1214818B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214818Bu);

L_1214818B:
    edi = edi; /* 0x1214818B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1214818D: push ebp */
    ebp = esp; /* 0x1214818E: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x12148190: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x4); /* 0x12148193: mov eax, dword ptr [eax + 4] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x12148196: push dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x12148199: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1214819B: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x14)); /* 0x1214819C: call dword ptr [ecx + 0x14] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1214819F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x121481A0: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_121481A8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121481A8u);

L_121481A8:
    edi = edi; /* 0x121481A8: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121481AA: push ebp */
    ebp = esp; /* 0x121481AB: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x121481AD: push dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0x8); /* 0x121481B0: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x4); /* 0x121481B3: mov eax, dword ptr [eax + 4] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x121481B6: push dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x121481B9: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x121481BB: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x18)); /* 0x121481BC: call dword ptr [ecx + 0x18] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x121481BF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x121481C0: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_121481C8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121481C8u);

L_121481C8:
    edi = edi; /* 0x121481C8: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121481CA: push ebp */
    ebp = esp; /* 0x121481CB: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x121481CD: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x4); /* 0x121481D0: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax); /* 0x121481D3: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x121481D5: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x1C)); /* 0x121481D6: call dword ptr [ecx + 0x1c] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x121481D9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x121481DA: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_121481E2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121481E2u);

L_121481E2:
    edi = edi; /* 0x121481E2: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121481E4: push ebp */
    ebp = esp; /* 0x121481E5: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x121481E7: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x4); /* 0x121481EA: mov eax, dword ptr [eax + 4] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x121481ED: push dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x121481F0: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x121481F2: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x20)); /* 0x121481F3: call dword ptr [ecx + 0x20] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x121481F6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x121481F7: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1214820A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214820Au);

L_1214820A:
    edi = edi; /* 0x1214820A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1214820C: push ebp */
    ebp = esp; /* 0x1214820D: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1214820F: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x4); /* 0x12148212: mov eax, dword ptr [eax + 4] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x12148215: push dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x12148218: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1214821A: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x28)); /* 0x1214821B: call dword ptr [ecx + 0x28] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1214821E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1214821F: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_12148227(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12148227u);

L_12148227:
    edi = edi; /* 0x12148227: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12148229: push ebp */
    ebp = esp; /* 0x1214822A: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1214822C: push dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0x8); /* 0x1214822F: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x4); /* 0x12148232: mov eax, dword ptr [eax + 4] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x12148235: push dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x12148238: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1214823A: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x2C)); /* 0x1214823B: call dword ptr [ecx + 0x2c] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1214823E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1214823F: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_12148247(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12148247u);

L_12148247:
    edi = edi; /* 0x12148247: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12148249: push ebp */
    ebp = esp; /* 0x1214824A: mov ebp, esp */
    eax = MEM32(ebp + 0x10); /* 0x1214824C: mov eax, dword ptr [ebp + 0x10] */
    /* test eax, eax */ /* 0x1214824F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121482B3; /* 0x12148251: je 0x121482b3 */
L_12148253:
    PUSH32(esp, ebx); /* 0x12148253: push ebx */
    PUSH32(esp, esi); /* 0x12148254: push esi */
    esi = MEM32(ebp + 0xC); /* 0x12148255: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x12148258: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x12148259: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 4); /* 0x1214825B: push 4 */
    ecx = POP32_VAL(esp); /* 0x1214825D: pop ecx */
    edi = 0x12018314u; /* 0x1214825E: mov edi, 0x12018314 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x12148263: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = ebx; /* 0x12148265: mov dword ptr [eax], ebx */
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x12148267: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_121482A1; /* 0x12148269: je 0x121482a1 */
L_1214826B:
    esi = MEM32(ebp + 0xC); /* 0x1214826B: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, 4); /* 0x1214826E: push 4 */
    ecx = POP32_VAL(esp); /* 0x12148270: pop ecx */
    edi = 0x12001B38u; /* 0x12148271: mov edi, 0x12001b38 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x12148276: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x12148278: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_121482A1; /* 0x1214827A: je 0x121482a1 */
L_1214827C:
    esi = MEM32(ebp + 0xC); /* 0x1214827C: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, 4); /* 0x1214827F: push 4 */
    ecx = POP32_VAL(esp); /* 0x12148281: pop ecx */
    edi = 0x12001B68u; /* 0x12148282: mov edi, 0x12001b68 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x12148287: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x12148289: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_1214829A; /* 0x1214828B: jne 0x1214829a */
L_1214828D:
    ecx = MEM32(ebp + 0x8); /* 0x1214828D: mov ecx, dword ptr [ebp + 8] */
    MEM32(eax) = ecx; /* 0x12148290: mov dword ptr [eax], ecx */
    eax = MEM32(ecx); /* 0x12148292: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x12148294: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x12148295: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    goto L_121482AC; /* 0x12148298: jmp 0x121482ac */
L_1214829A:
    ebx = 0x80004002u; /* 0x1214829A: mov ebx, 0x80004002 */
    goto L_121482AC; /* 0x1214829F: jmp 0x121482ac */
L_121482A1:
    edx = MEM32(ebp + 0x8); /* 0x121482A1: mov edx, dword ptr [ebp + 8] */
    MEM32(eax) = edx; /* 0x121482A4: mov dword ptr [eax], edx */
    ecx = MEM32(edx); /* 0x121482A6: mov ecx, dword ptr [edx] */
    PUSH32(esp, edx); /* 0x121482A8: push edx */
    RECOMP_ICALL(MEM32(ecx + 0x4)); /* 0x121482A9: call dword ptr [ecx + 4] */
    RECOMP_FLAGS_IN();
L_121482AC:
    edi = POP32_VAL(esp); /* 0x121482AC: pop edi */
    esi = POP32_VAL(esp); /* 0x121482AD: pop esi */
    eax = ebx; /* 0x121482AE: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x121482B0: pop ebx */
    goto L_121482B8; /* 0x121482B1: jmp 0x121482b8 */
L_121482B3:
    eax = 0x80004003u; /* 0x121482B3: mov eax, 0x80004003 */
L_121482B8:
    ebp = POP32_VAL(esp); /* 0x121482B8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x121482B9: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_121482C1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121482C1u);

L_121482C1:
    edi = edi; /* 0x121482C1: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121482C3: push ebp */
    ebp = esp; /* 0x121482C4: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x121482C6: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x4) = MEM32(ecx + 0x4) - 1; /* 0x121482C9: dec dword ptr [ecx + 4] */
    _flag_k = FK_DEC;
    PUSH32(esp, esi); /* 0x121482CC: push esi */
    esi = MEM32(ecx + 0x4); /* 0x121482CD: mov esi, dword ptr [ecx + 4] */
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_121482D9; /* 0x121482D0: jne 0x121482d9 */
L_121482D2:
    edx = MEM32(ecx); /* 0x121482D2: mov edx, dword ptr [ecx] */
    PUSH32(esp, 1); /* 0x121482D4: push 1 */
    RECOMP_ICALL(MEM32(edx + 0x20)); /* 0x121482D6: call dword ptr [edx + 0x20] */
    RECOMP_FLAGS_IN();
L_121482D9:
    eax = esi; /* 0x121482D9: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x121482DB: pop esi */
    ebp = POP32_VAL(esp); /* 0x121482DC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x121482DD: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_121482E5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121482E5u);

L_121482E5:
    edi = edi; /* 0x121482E5: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121482E7: push ebp */
    ebp = esp; /* 0x121482E8: mov ebp, esp */
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x121482EA: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12148305; /* 0x121482EE: je 0x12148305 */
L_121482F0:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x121482F0: push dword ptr [ebp + 0xc] */
    eax = MEM32(ebp + 0x8); /* 0x121482F3: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x8); /* 0x121482F6: mov eax, dword ptr [eax + 8] */
    ecx = MEM32(eax); /* 0x121482F9: mov ecx, dword ptr [eax] */
    PUSH32(esp, 0x12001B08u); /* 0x121482FB: push 0x12001b08 */
    PUSH32(esp, eax); /* 0x12148300: push eax */
    RECOMP_ICALL(MEM32(ecx)); /* 0x12148301: call dword ptr [ecx] */
    RECOMP_FLAGS_IN();
    goto L_1214830A; /* 0x12148303: jmp 0x1214830a */
L_12148305:
    eax = 0x88760385u; /* 0x12148305: mov eax, 0x88760385 */
L_1214830A:
    ebp = POP32_VAL(esp); /* 0x1214830A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1214830B: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_12148313(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12148313u);

L_12148313:
    edi = edi; /* 0x12148313: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12148315: push ebp */
    ebp = esp; /* 0x12148316: mov ebp, esp */
    PUSH32(esp, esi); /* 0x12148318: push esi */
    PUSH32(esp, edi); /* 0x12148319: push edi */
    edi = ecx; /* 0x1214831A: mov edi, ecx */
    eax = MEM32(edi + 0x8); /* 0x1214831C: mov eax, dword ptr [edi + 8] */
    ecx = MEM32(ebp + 0x8); /* 0x1214831F: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x38u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x38u; /* 0x12148322: add eax, 0x38 */
    _flag_k = FK_ADD;
L_12148325:
    SET_LO8(edx, MEM8(eax)); /* 0x12148325: mov dl, byte ptr [eax] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x12148327: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x12148329: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_12148347; /* 0x1214832B: jne 0x12148347 */
L_1214832D:
    /* test LO8(edx), LO8(edx) */ /* 0x1214832D: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12148343; /* 0x1214832F: je 0x12148343 */
L_12148331:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x12148331: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x12148334: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_12148347; /* 0x12148337: jne 0x12148347 */
L_12148339:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x12148339: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x1214833C: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x1214833F: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12148325; /* 0x12148341: jne 0x12148325 */
L_12148343:
    eax = esi; /* 0x12148343: mov eax, esi */
    goto L_1214834C; /* 0x12148345: jmp 0x1214834c */
L_12148347:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x12148347: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x12148349: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_1214834C:
    /* test eax, eax */ /* 0x1214834C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12148359; /* 0x1214834E: jne 0x12148359 */
L_12148350:
    eax = MEM32(ebp + 0xC); /* 0x12148350: mov eax, dword ptr [ebp + 0xc] */
    MEM32(eax) = edi; /* 0x12148353: mov dword ptr [eax], edi */
L_12148355:
    SET_LO8(eax, 1); /* 0x12148355: mov al, 1 */
    goto L_1214837B; /* 0x12148357: jmp 0x1214837b */
L_12148359:
    /* cmp MEM32(edi + 0x14), esi */ /* 0x12148359: cmp dword ptr [edi + 0x14], esi */
    _flag_a = (uint32_t)(MEM32(edi + 0x14)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_12148379; /* 0x1214835C: jbe 0x12148379 */
L_1214835E:
    eax = MEM32(edi + 0x20); /* 0x1214835E: mov eax, dword ptr [edi + 0x20] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x12148361: push dword ptr [ebp + 0xc] */
    ecx = MEM32(eax + esi * 4); /* 0x12148364: mov ecx, dword ptr [eax + esi*4] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x12148367: push dword ptr [ebp + 8] */
    eax = MEM32(ecx); /* 0x1214836A: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x3C)); /* 0x1214836C: call dword ptr [eax + 0x3c] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1214836F: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12148355; /* 0x12148371: jne 0x12148355 */
L_12148373:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x12148373: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(edi + 0x14) */ /* 0x12148374: cmp esi, dword ptr [edi + 0x14] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edi + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1214835E; /* 0x12148377: jb 0x1214835e */
L_12148379:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x12148379: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_1214837B:
    edi = POP32_VAL(esp); /* 0x1214837B: pop edi */
    esi = POP32_VAL(esp); /* 0x1214837C: pop esi */
    ebp = POP32_VAL(esp); /* 0x1214837D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1214837E: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_12148386(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12148386u);

L_12148386:
    edi = edi; /* 0x12148386: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12148388: push ebp */
    ebp = esp; /* 0x12148389: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x1214838B: sub esp, 0x1c */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x1214838E: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x12148393: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x12148395: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x12148398: mov eax, dword ptr [ebp + 8] */
    edx = MEM32(ebp + 0xC); /* 0x1214839B: mov edx, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x1214839E: push ebx */
    PUSH32(esp, esi); /* 0x1214839F: push esi */
    PUSH32(esp, edi); /* 0x121483A0: push edi */
    ebx = ecx; /* 0x121483A1: mov ebx, ecx */
    esi = MEM32(ebx + 0x8); /* 0x121483A3: mov esi, dword ptr [ebx + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x20u; /* 0x121483A6: add esi, 0x20 */
    _flag_k = FK_ADD;
    edi = ebp + (-0x14); /* 0x121483A9: lea edi, [ebp - 0x14] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121483AC: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121483AD: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121483AE: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121483AF: movsd dword ptr es:[edi], dword ptr [esi] */
    PUSH32(esp, 4); /* 0x121483B0: push 4 */
    edi = eax; /* 0x121483B2: mov edi, eax */
    MEM32(ebp + (-0x1C)) = eax; /* 0x121483B4: mov dword ptr [ebp - 0x1c], eax */
    ecx = POP32_VAL(esp); /* 0x121483B7: pop ecx */
    esi = ebp + (-0x14); /* 0x121483B8: lea esi, [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x121483BB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x121483BD: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    MEM32(ebp + (-0x18)) = edx; /* 0x121483BF: mov dword ptr [ebp - 0x18], edx */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_121483CA; /* 0x121483C2: jne 0x121483ca */
L_121483C4:
    MEM32(edx) = ebx; /* 0x121483C4: mov dword ptr [edx], ebx */
L_121483C6:
    SET_LO8(eax, 1); /* 0x121483C6: mov al, 1 */
    goto L_121483F0; /* 0x121483C8: jmp 0x121483f0 */
L_121483CA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x121483CA: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebx + 0x14), esi */ /* 0x121483CC: cmp dword ptr [ebx + 0x14], esi */
    _flag_a = (uint32_t)(MEM32(ebx + 0x14)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_121483EE; /* 0x121483CF: jbe 0x121483ee */
L_121483D1:
    edi = MEM32(ebp + (-0x1C)); /* 0x121483D1: mov edi, dword ptr [ebp - 0x1c] */
L_121483D4:
    eax = MEM32(ebx + 0x20); /* 0x121483D4: mov eax, dword ptr [ebx + 0x20] */
    ecx = MEM32(eax + esi * 4); /* 0x121483D7: mov ecx, dword ptr [eax + esi*4] */
    eax = MEM32(ecx); /* 0x121483DA: mov eax, dword ptr [ecx] */
    PUSH32(esp, edx); /* 0x121483DC: push edx */
    PUSH32(esp, edi); /* 0x121483DD: push edi */
    RECOMP_ICALL(MEM32(eax + 0x38)); /* 0x121483DE: call dword ptr [eax + 0x38] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x121483E1: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121483C6; /* 0x121483E3: jne 0x121483c6 */
L_121483E5:
    edx = MEM32(ebp + (-0x18)); /* 0x121483E5: mov edx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x121483E8: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(ebx + 0x14) */ /* 0x121483E9: cmp esi, dword ptr [ebx + 0x14] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebx + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_121483D4; /* 0x121483EC: jb 0x121483d4 */
L_121483EE:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x121483EE: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_121483F0:
    ecx = MEM32(ebp + (-0x4)); /* 0x121483F0: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x121483F3: pop edi */
    esi = POP32_VAL(esp); /* 0x121483F4: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x121483F5: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x121483F7: pop ebx */
    RECOMP_CALL(sub_121BECF5); /* 0x121483F8: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x121483FD: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x121483FE: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_12148406(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12148406u);

L_12148406:
    edi = edi; /* 0x12148406: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12148408: push ebp */
    ebp = esp; /* 0x12148409: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1214840B: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x1214840C: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1214840F: push esi */
    esi = ecx; /* 0x12148410: mov esi, ecx */
    /* cmp MEM32(esi + 0x8), ebx */ /* 0x12148412: cmp dword ptr [esi + 8], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12148420; /* 0x12148415: jne 0x12148420 */
L_12148417:
    eax = MEM32(ebp + 0xC); /* 0x12148417: mov eax, dword ptr [ebp + 0xc] */
    MEM32(eax) = esi; /* 0x1214841A: mov dword ptr [eax], esi */
    SET_LO8(eax, 1); /* 0x1214841C: mov al, 1 */
    goto L_12148444; /* 0x1214841E: jmp 0x12148444 */
L_12148420:
    PUSH32(esp, edi); /* 0x12148420: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x12148421: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x14), edi */ /* 0x12148423: cmp dword ptr [esi + 0x14], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_12148441; /* 0x12148426: jbe 0x12148441 */
L_12148428:
    eax = MEM32(esi + 0x20); /* 0x12148428: mov eax, dword ptr [esi + 0x20] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1214842B: push dword ptr [ebp + 0xc] */
    ecx = MEM32(eax + edi * 4); /* 0x1214842E: mov ecx, dword ptr [eax + edi*4] */
    eax = MEM32(ecx); /* 0x12148431: mov eax, dword ptr [ecx] */
    PUSH32(esp, ebx); /* 0x12148433: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x34)); /* 0x12148434: call dword ptr [eax + 0x34] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x12148437: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214844A; /* 0x12148439: jne 0x1214844a */
L_1214843B:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1214843B: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(esi + 0x14) */ /* 0x1214843C: cmp edi, dword ptr [esi + 0x14] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_12148428; /* 0x1214843F: jb 0x12148428 */
L_12148441:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x12148441: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_12148443:
    edi = POP32_VAL(esp); /* 0x12148443: pop edi */
L_12148444:
    esi = POP32_VAL(esp); /* 0x12148444: pop esi */
    ebx = POP32_VAL(esp); /* 0x12148445: pop ebx */
    ebp = POP32_VAL(esp); /* 0x12148446: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x12148447: ret 8 */
L_1214844A:
    SET_LO8(eax, 1); /* 0x1214844A: mov al, 1 */
    RECOMP_BACKEDGE();
    goto L_12148443; /* 0x1214844C: jmp 0x12148443 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_12148453(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12148453u);

L_12148453:
    edi = edi; /* 0x12148453: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12148455: push ebp */
    ebp = esp; /* 0x12148456: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x12148458: push ecx */
    PUSH32(esp, ecx); /* 0x12148459: push ecx */
    PUSH32(esp, ebx); /* 0x1214845A: push ebx */
    PUSH32(esp, edi); /* 0x1214845B: push edi */
    edi = MEM32(ebp + 0xC); /* 0x1214845C: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x1214845F: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214848D; /* 0x12148461: je 0x1214848d */
L_12148463:
    ebx = MEM32(ebp + 0x10); /* 0x12148463: mov ebx, dword ptr [ebp + 0x10] */
    /* test ebx, ebx */ /* 0x12148466: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214848D; /* 0x12148468: je 0x1214848d */
L_1214846A:
    edx = MEM32(ebp + 0x8); /* 0x1214846A: mov edx, dword ptr [ebp + 8] */
    ecx = MEM32(edx + 0x8); /* 0x1214846D: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(ecx + 0x4); /* 0x12148470: mov eax, dword ptr [ecx + 4] */
    MEM32(ebp + (-0x4)) = eax; /* 0x12148473: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ecx + 0x8); /* 0x12148476: mov eax, dword ptr [ecx + 8] */
    PUSH32(esp, esi); /* 0x12148479: push esi */
    esi = MEM32(ecx); /* 0x1214847A: mov esi, dword ptr [ecx] */
    MEM32(edi) = eax; /* 0x1214847C: mov dword ptr [edi], eax */
    eax = MEM32(edx + 0x4); /* 0x1214847E: mov eax, dword ptr [edx + 4] */
    eax = MEM32(eax + 0x20); /* 0x12148481: mov eax, dword ptr [eax + 0x20] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x12148484: add eax, esi */
    _flag_k = FK_ADD;
    MEM32(ebx) = eax; /* 0x12148486: mov dword ptr [ebx], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12148488: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1214848A: pop esi */
    goto L_12148492; /* 0x1214848B: jmp 0x12148492 */
L_1214848D:
    eax = 0x88760385u; /* 0x1214848D: mov eax, 0x88760385 */
L_12148492:
    edi = POP32_VAL(esp); /* 0x12148492: pop edi */
    ebx = POP32_VAL(esp); /* 0x12148493: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12148494: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x12148495: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1214849D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214849Du);

L_1214849D:
    edi = edi; /* 0x1214849D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1214849F: push ebp */
    ebp = esp; /* 0x121484A0: mov ebp, esp */
    PUSH32(esp, edi); /* 0x121484A2: push edi */
    edi = MEM32(ebp + 0xC); /* 0x121484A3: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x121484A6: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121484BD; /* 0x121484A8: je 0x121484bd */
L_121484AA:
    eax = MEM32(ebp + 0x8); /* 0x121484AA: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x121484AD: push esi */
    esi = MEM32(eax + 0x10); /* 0x121484AE: mov esi, dword ptr [eax + 0x10] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 8; /* 0x121484B1: add esi, 8 */
    _flag_k = FK_ADD;
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121484B4: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121484B5: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121484B6: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121484B7: movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x121484B8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x121484BA: pop esi */
    goto L_121484C2; /* 0x121484BB: jmp 0x121484c2 */
L_121484BD:
    eax = 0x88760385u; /* 0x121484BD: mov eax, 0x88760385 */
L_121484C2:
    edi = POP32_VAL(esp); /* 0x121484C2: pop edi */
    ebp = POP32_VAL(esp); /* 0x121484C3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x121484C4: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_121484CC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121484CCu);

L_121484CC:
    edi = edi; /* 0x121484CC: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121484CE: push ebp */
    ebp = esp; /* 0x121484CF: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x121484D1: mov ecx, dword ptr [ebp + 0xc] */
    /* test ecx, ecx */ /* 0x121484D4: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121484E4; /* 0x121484D6: je 0x121484e4 */
L_121484D8:
    eax = MEM32(ebp + 0x8); /* 0x121484D8: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x14); /* 0x121484DB: mov eax, dword ptr [eax + 0x14] */
    MEM32(ecx) = eax; /* 0x121484DE: mov dword ptr [ecx], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x121484E0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_121484E9; /* 0x121484E2: jmp 0x121484e9 */
L_121484E4:
    eax = 0x88760385u; /* 0x121484E4: mov eax, 0x88760385 */
L_121484E9:
    ebp = POP32_VAL(esp); /* 0x121484E9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x121484EA: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_121484F2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121484F2u);

L_121484F2:
    edi = edi; /* 0x121484F2: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121484F4: push ebp */
    ebp = esp; /* 0x121484F5: mov ebp, esp */
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x121484F7: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12148526; /* 0x121484FB: je 0x12148526 */
L_121484FD:
    ecx = MEM32(ebp + 0xC); /* 0x121484FD: mov ecx, dword ptr [ebp + 0xc] */
    eax = MEM32(ebp + 0x8); /* 0x12148500: mov eax, dword ptr [ebp + 8] */
    /* cmp ecx, MEM32(eax + 0x14) */ /* 0x12148503: cmp ecx, dword ptr [eax + 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1214851F; /* 0x12148506: jae 0x1214851f */
L_12148508:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x12148508: push dword ptr [ebp + 0x10] */
    eax = MEM32(eax + 0x20); /* 0x1214850B: mov eax, dword ptr [eax + 0x20] */
    eax = MEM32(eax + ecx * 4); /* 0x1214850E: mov eax, dword ptr [eax + ecx*4] */
    ecx = MEM32(eax); /* 0x12148511: mov ecx, dword ptr [eax] */
    PUSH32(esp, 0x12001B48u); /* 0x12148513: push 0x12001b48 */
    PUSH32(esp, eax); /* 0x12148518: push eax */
    RECOMP_ICALL(MEM32(ecx)); /* 0x12148519: call dword ptr [ecx] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1214851B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1214852B; /* 0x1214851D: jmp 0x1214852b */
L_1214851F:
    eax = 0x88760393u; /* 0x1214851F: mov eax, 0x88760393 */
    goto L_1214852B; /* 0x12148524: jmp 0x1214852b */
L_12148526:
    eax = 0x88760385u; /* 0x12148526: mov eax, 0x88760385 */
L_1214852B:
    ebp = POP32_VAL(esp); /* 0x1214852B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1214852C: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_12148534(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12148534u);

L_12148534:
    edi = edi; /* 0x12148534: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12148536: push ebp */
    ebp = esp; /* 0x12148537: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x12148539: mov ecx, dword ptr [ebp + 0xc] */
    /* test ecx, ecx */ /* 0x1214853C: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214854C; /* 0x1214853E: je 0x1214854c */
L_12148540:
    eax = MEM32(ebp + 0x8); /* 0x12148540: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x44); /* 0x12148543: mov eax, dword ptr [eax + 0x44] */
    MEM32(ecx) = eax; /* 0x12148546: mov dword ptr [ecx], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12148548: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_12148551; /* 0x1214854A: jmp 0x12148551 */
L_1214854C:
    eax = 0x88760385u; /* 0x1214854C: mov eax, 0x88760385 */
L_12148551:
    ebp = POP32_VAL(esp); /* 0x12148551: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x12148552: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1214855A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214855Au);

L_1214855A:
    edi = edi; /* 0x1214855A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1214855C: push ebp */
    ebp = esp; /* 0x1214855D: mov ebp, esp */
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x1214855F: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214858E; /* 0x12148563: je 0x1214858e */
L_12148565:
    ecx = MEM32(ebp + 0xC); /* 0x12148565: mov ecx, dword ptr [ebp + 0xc] */
    eax = MEM32(ebp + 0x8); /* 0x12148568: mov eax, dword ptr [ebp + 8] */
    /* cmp ecx, MEM32(eax + 0x44) */ /* 0x1214856B: cmp ecx, dword ptr [eax + 0x44] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x44));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_12148587; /* 0x1214856E: jae 0x12148587 */
L_12148570:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x12148570: push dword ptr [ebp + 0x10] */
    eax = MEM32(eax + 0x50); /* 0x12148573: mov eax, dword ptr [eax + 0x50] */
    eax = MEM32(eax + ecx * 4); /* 0x12148576: mov eax, dword ptr [eax + ecx*4] */
    ecx = MEM32(eax); /* 0x12148579: mov ecx, dword ptr [eax] */
    PUSH32(esp, 0x12001B48u); /* 0x1214857B: push 0x12001b48 */
    PUSH32(esp, eax); /* 0x12148580: push eax */
    RECOMP_ICALL(MEM32(ecx)); /* 0x12148581: call dword ptr [ecx] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12148583: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_12148593; /* 0x12148585: jmp 0x12148593 */
L_12148587:
    eax = 0x88760393u; /* 0x12148587: mov eax, 0x88760393 */
    goto L_12148593; /* 0x1214858C: jmp 0x12148593 */
L_1214858E:
    eax = 0x88760385u; /* 0x1214858E: mov eax, 0x88760385 */
L_12148593:
    ebp = POP32_VAL(esp); /* 0x12148593: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x12148594: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1214859C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214859Cu);

L_1214859C:
    edi = edi; /* 0x1214859C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1214859E: push ebp */
    ebp = esp; /* 0x1214859F: mov ebp, esp */
    PUSH32(esp, esi); /* 0x121485A1: push esi */
    PUSH32(esp, edi); /* 0x121485A2: push edi */
    edi = ecx; /* 0x121485A3: mov edi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x121485A5: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edi + 0x44), esi */ /* 0x121485A7: cmp dword ptr [edi + 0x44], esi */
    _flag_a = (uint32_t)(MEM32(edi + 0x44)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_121485C7; /* 0x121485AA: jbe 0x121485c7 */
L_121485AC:
    eax = MEM32(edi + 0x50); /* 0x121485AC: mov eax, dword ptr [edi + 0x50] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x121485AF: push dword ptr [ebp + 0xc] */
    ecx = MEM32(eax + esi * 4); /* 0x121485B2: mov ecx, dword ptr [eax + esi*4] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x121485B5: push dword ptr [ebp + 8] */
    eax = MEM32(ecx); /* 0x121485B8: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x3C)); /* 0x121485BA: call dword ptr [eax + 0x3c] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x121485BD: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121485CF; /* 0x121485BF: jne 0x121485cf */
L_121485C1:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x121485C1: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(edi + 0x44) */ /* 0x121485C2: cmp esi, dword ptr [edi + 0x44] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edi + 0x44));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_121485AC; /* 0x121485C5: jb 0x121485ac */
L_121485C7:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x121485C7: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_121485C9:
    edi = POP32_VAL(esp); /* 0x121485C9: pop edi */
    esi = POP32_VAL(esp); /* 0x121485CA: pop esi */
    ebp = POP32_VAL(esp); /* 0x121485CB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x121485CC: ret 8 */
L_121485CF:
    SET_LO8(eax, 1); /* 0x121485CF: mov al, 1 */
    RECOMP_BACKEDGE();
    goto L_121485C9; /* 0x121485D1: jmp 0x121485c9 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_121485D8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121485D8u);

L_121485D8:
    edi = edi; /* 0x121485D8: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121485DA: push ebp */
    ebp = esp; /* 0x121485DB: mov ebp, esp */
    PUSH32(esp, esi); /* 0x121485DD: push esi */
    PUSH32(esp, edi); /* 0x121485DE: push edi */
    edi = ecx; /* 0x121485DF: mov edi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x121485E1: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edi + 0x44), esi */ /* 0x121485E3: cmp dword ptr [edi + 0x44], esi */
    _flag_a = (uint32_t)(MEM32(edi + 0x44)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_12148603; /* 0x121485E6: jbe 0x12148603 */
L_121485E8:
    eax = MEM32(edi + 0x50); /* 0x121485E8: mov eax, dword ptr [edi + 0x50] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x121485EB: push dword ptr [ebp + 0xc] */
    ecx = MEM32(eax + esi * 4); /* 0x121485EE: mov ecx, dword ptr [eax + esi*4] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x121485F1: push dword ptr [ebp + 8] */
    eax = MEM32(ecx); /* 0x121485F4: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x38)); /* 0x121485F6: call dword ptr [eax + 0x38] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x121485F9: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214860B; /* 0x121485FB: jne 0x1214860b */
L_121485FD:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x121485FD: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(edi + 0x44) */ /* 0x121485FE: cmp esi, dword ptr [edi + 0x44] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edi + 0x44));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_121485E8; /* 0x12148601: jb 0x121485e8 */
L_12148603:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x12148603: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_12148605:
    edi = POP32_VAL(esp); /* 0x12148605: pop edi */
    esi = POP32_VAL(esp); /* 0x12148606: pop esi */
    ebp = POP32_VAL(esp); /* 0x12148607: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x12148608: ret 8 */
L_1214860B:
    SET_LO8(eax, 1); /* 0x1214860B: mov al, 1 */
    RECOMP_BACKEDGE();
    goto L_12148605; /* 0x1214860D: jmp 0x12148605 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_12148614(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12148614u);

L_12148614:
    edi = edi; /* 0x12148614: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12148616: push ebp */
    ebp = esp; /* 0x12148617: mov ebp, esp */
    PUSH32(esp, esi); /* 0x12148619: push esi */
    esi = MEM32(ebp + 0x10); /* 0x1214861A: mov esi, dword ptr [ebp + 0x10] */
    /* test esi, esi */ /* 0x1214861D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12148650; /* 0x1214861F: je 0x12148650 */
L_12148621:
    ecx = MEM32(ebp + 0x8); /* 0x12148621: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x12148624: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + 0x10; /* 0x12148627: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x1214862A: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1214862B: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_121485D8); /* 0x1214862E: call 0x121485d8 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x12148633: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214863E; /* 0x12148635: jne 0x1214863e */
L_12148637:
    eax = 0x88760387u; /* 0x12148637: mov eax, 0x88760387 */
    goto L_12148655; /* 0x1214863C: jmp 0x12148655 */
L_1214863E:
    eax = MEM32(ebp + 0x10); /* 0x1214863E: mov eax, dword ptr [ebp + 0x10] */
    ecx = MEM32(eax); /* 0x12148641: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x12148643: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x4)); /* 0x12148644: call dword ptr [ecx + 4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x10); /* 0x12148647: mov eax, dword ptr [ebp + 0x10] */
    MEM32(esi) = eax; /* 0x1214864A: mov dword ptr [esi], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1214864C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_12148655; /* 0x1214864E: jmp 0x12148655 */
L_12148650:
    eax = 0x88760385u; /* 0x12148650: mov eax, 0x88760385 */
L_12148655:
    esi = POP32_VAL(esp); /* 0x12148655: pop esi */
    ebp = POP32_VAL(esp); /* 0x12148656: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x12148657: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1214865F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214865Fu);

L_1214865F:
    edi = edi; /* 0x1214865F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12148661: push ebp */
    ebp = esp; /* 0x12148662: mov ebp, esp */
    PUSH32(esp, esi); /* 0x12148664: push esi */
    esi = MEM32(ebp + 0x10); /* 0x12148665: mov esi, dword ptr [ebp + 0x10] */
    /* test esi, esi */ /* 0x12148668: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214869B; /* 0x1214866A: je 0x1214869b */
L_1214866C:
    ecx = MEM32(ebp + 0x8); /* 0x1214866C: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x1214866F: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + 0x10; /* 0x12148672: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x12148675: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x12148676: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1214859C); /* 0x12148679: call 0x1214859c */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1214867E: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12148689; /* 0x12148680: jne 0x12148689 */
L_12148682:
    eax = 0x88760387u; /* 0x12148682: mov eax, 0x88760387 */
    goto L_121486A0; /* 0x12148687: jmp 0x121486a0 */
L_12148689:
    eax = MEM32(ebp + 0x10); /* 0x12148689: mov eax, dword ptr [ebp + 0x10] */
    ecx = MEM32(eax); /* 0x1214868C: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1214868E: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x4)); /* 0x1214868F: call dword ptr [ecx + 4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x10); /* 0x12148692: mov eax, dword ptr [ebp + 0x10] */
    MEM32(esi) = eax; /* 0x12148695: mov dword ptr [esi], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12148697: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_121486A0; /* 0x12148699: jmp 0x121486a0 */
L_1214869B:
    eax = 0x88760385u; /* 0x1214869B: mov eax, 0x88760385 */
L_121486A0:
    esi = POP32_VAL(esp); /* 0x121486A0: pop esi */
    ebp = POP32_VAL(esp); /* 0x121486A1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x121486A2: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_121486AA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121486AAu);

L_121486AA:
    edi = edi; /* 0x121486AA: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121486AC: push ebp */
    ebp = esp; /* 0x121486AD: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x121486AF: push ecx */
    PUSH32(esp, esi); /* 0x121486B0: push esi */
    esi = MEM32(ecx + 0x8); /* 0x121486B1: mov esi, dword ptr [ecx + 8] */
    edx = MEM32(esi + 0x30); /* 0x121486B4: mov edx, dword ptr [esi + 0x30] */
    eax = MEM32(esi + 0x34); /* 0x121486B7: mov eax, dword ptr [esi + 0x34] */
    /* test edx, edx */ /* 0x121486BA: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121486C2; /* 0x121486BC: jne 0x121486c2 */
L_121486BE:
    /* test eax, eax */ /* 0x121486BE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121486F1; /* 0x121486C0: je 0x121486f1 */
L_121486C2:
    PUSH32(esp, edi); /* 0x121486C2: push edi */
    edi = MEM32(ecx + 0x4); /* 0x121486C3: mov edi, dword ptr [ecx + 4] */
    /* test eax, eax */ /* 0x121486C6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (0) goto L_121486D8; /* 0x121486C8: jb 0x121486d8 */
L_121486CA:
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121486D1; /* 0x121486CA: ja 0x121486d1 */
L_121486CC:
    /* cmp edx, MEM32(edi + 0x28) */ /* 0x121486CC: cmp edx, dword ptr [edi + 0x28] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(edi + 0x28));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_121486D8; /* 0x121486CF: jbe 0x121486d8 */
L_121486D1:
    eax = 0x8876038Fu; /* 0x121486D1: mov eax, 0x8876038f */
    goto L_121486F0; /* 0x121486D6: jmp 0x121486f0 */
L_121486D8:
    eax = esi + edx; /* 0x121486D8: lea eax, [esi + edx] */
    MEM32(ebp + (-0x4)) = eax; /* 0x121486DB: mov dword ptr [ebp - 4], eax */
    eax = ecx + 0x14; /* 0x121486DE: lea eax, [ecx + 0x14] */
    PUSH32(esp, eax); /* 0x121486E1: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x121486E2: push dword ptr [ebp + 8] */
    eax = ebp + (-0x4); /* 0x121486E5: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x121486E8: push eax */
    ecx = edi; /* 0x121486E9: mov ecx, edi */
    RECOMP_CALL(sub_12144FE3); /* 0x121486EB: call 0x12144fe3 */
    RECOMP_FLAGS_IN();
L_121486F0:
    edi = POP32_VAL(esp); /* 0x121486F0: pop edi */
L_121486F1:
    esi = POP32_VAL(esp); /* 0x121486F1: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x121486F2: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x121486F3: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_121486FB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121486FBu);

L_121486FB:
    edi = edi; /* 0x121486FB: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121486FD: push ebp */
    ebp = esp; /* 0x121486FE: mov ebp, esp */
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x12148700: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214871B; /* 0x12148704: je 0x1214871b */
L_12148706:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x12148706: push dword ptr [ebp + 0xc] */
    eax = MEM32(ebp + 0x8); /* 0x12148709: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x24); /* 0x1214870C: mov eax, dword ptr [eax + 0x24] */
    ecx = MEM32(eax); /* 0x1214870F: mov ecx, dword ptr [eax] */
    PUSH32(esp, 0x12001B18u); /* 0x12148711: push 0x12001b18 */
    PUSH32(esp, eax); /* 0x12148716: push eax */
    RECOMP_ICALL(MEM32(ecx)); /* 0x12148717: call dword ptr [ecx] */
    RECOMP_FLAGS_IN();
    goto L_12148720; /* 0x12148719: jmp 0x12148720 */
L_1214871B:
    eax = 0x88760385u; /* 0x1214871B: mov eax, 0x88760385 */
L_12148720:
    ebp = POP32_VAL(esp); /* 0x12148720: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x12148721: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_12148729(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12148729u);

L_12148729:
    edi = edi; /* 0x12148729: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1214872B: push ebp */
    ebp = esp; /* 0x1214872C: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1214872E: push ebx */
    PUSH32(esp, esi); /* 0x1214872F: push esi */
    ebx = ecx; /* 0x12148730: mov ebx, ecx */
    eax = MEM32(ebx + 0x3C); /* 0x12148732: mov eax, dword ptr [ebx + 0x3c] */
    PUSH32(esp, edi); /* 0x12148735: push edi */
    edi = MEM32(ebp + 0xC); /* 0x12148736: mov edi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x12148739: add eax, edi */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1214873B: push eax */
    PUSH32(esp, MEM32(ebx + 0x40)); /* 0x1214873C: push dword ptr [ebx + 0x40] */
    RECOMP_CALL(sub_121BF5B6); /* 0x1214873F: call 0x121bf5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x12148744: pop ecx */
    ecx = POP32_VAL(esp); /* 0x12148745: pop ecx */
    ecx = eax; /* 0x12148746: mov ecx, eax */
    /* test ecx, ecx */ /* 0x12148748: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12148753; /* 0x1214874A: jne 0x12148753 */
L_1214874C:
    eax = 0x8007000Eu; /* 0x1214874C: mov eax, 0x8007000e */
    goto L_1214876D; /* 0x12148751: jmp 0x1214876d */
L_12148753:
    eax = MEM32(ebx + 0x3C); /* 0x12148753: mov eax, dword ptr [ebx + 0x3c] */
    PUSH32(esp, edi); /* 0x12148756: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x12148757: push dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1214875A: add eax, ecx */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1214875C: push eax */
    MEM32(ebx + 0x40) = ecx; /* 0x1214875D: mov dword ptr [ebx + 0x40], ecx */
    RECOMP_CALL(sub_121BF440); /* 0x12148760: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebx + 0x3C)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebx + 0x3C) = MEM32(ebx + 0x3C) + edi; /* 0x12148765: add dword ptr [ebx + 0x3c], edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x12148768: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1214876B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1214876D:
    edi = POP32_VAL(esp); /* 0x1214876D: pop edi */
    esi = POP32_VAL(esp); /* 0x1214876E: pop esi */
    ebx = POP32_VAL(esp); /* 0x1214876F: pop ebx */
    ebp = POP32_VAL(esp); /* 0x12148770: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x12148771: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_12148779(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12148779u);

L_12148779:
    edi = edi; /* 0x12148779: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1214877B: push ebp */
    ebp = esp; /* 0x1214877C: mov ebp, esp */
    edx = MEM32(ebp + 0xC); /* 0x1214877E: mov edx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x12148781: push esi */
    /* test edx, edx */ /* 0x12148782: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214879E; /* 0x12148784: je 0x1214879e */
L_12148786:
    esi = MEM32(ebp + 0x10); /* 0x12148786: mov esi, dword ptr [ebp + 0x10] */
    /* test esi, esi */ /* 0x12148789: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214879E; /* 0x1214878B: je 0x1214879e */
L_1214878D:
    ecx = MEM32(ebp + 0x8); /* 0x1214878D: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ecx + 0x3C); /* 0x12148790: mov eax, dword ptr [ecx + 0x3c] */
    MEM32(edx) = eax; /* 0x12148793: mov dword ptr [edx], eax */
    eax = MEM32(ecx + 0x40); /* 0x12148795: mov eax, dword ptr [ecx + 0x40] */
    MEM32(esi) = eax; /* 0x12148798: mov dword ptr [esi], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1214879A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_121487A3; /* 0x1214879C: jmp 0x121487a3 */
L_1214879E:
    eax = 0x88760385u; /* 0x1214879E: mov eax, 0x88760385 */
L_121487A3:
    esi = POP32_VAL(esp); /* 0x121487A3: pop esi */
    ebp = POP32_VAL(esp); /* 0x121487A4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x121487A5: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_121487AD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121487ADu);

L_121487AD:
    edi = edi; /* 0x121487AD: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121487AF: push ebp */
    ebp = esp; /* 0x121487B0: mov ebp, esp */
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x121487B2: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121487CD; /* 0x121487B6: je 0x121487cd */
L_121487B8:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x121487B8: push dword ptr [ebp + 0xc] */
    eax = MEM32(ebp + 0x8); /* 0x121487BB: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x20); /* 0x121487BE: mov eax, dword ptr [eax + 0x20] */
    ecx = MEM32(eax); /* 0x121487C1: mov ecx, dword ptr [eax] */
    PUSH32(esp, 0x12001B38u); /* 0x121487C3: push 0x12001b38 */
    PUSH32(esp, eax); /* 0x121487C8: push eax */
    RECOMP_ICALL(MEM32(ecx)); /* 0x121487C9: call dword ptr [ecx] */
    RECOMP_FLAGS_IN();
    goto L_121487D2; /* 0x121487CB: jmp 0x121487d2 */
L_121487CD:
    eax = 0x88760385u; /* 0x121487CD: mov eax, 0x88760385 */
L_121487D2:
    ebp = POP32_VAL(esp); /* 0x121487D2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x121487D3: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_121487DB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121487DBu);

L_121487DB:
    edi = edi; /* 0x121487DB: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121487DD: push ebp */
    ebp = esp; /* 0x121487DE: mov ebp, esp */
    eax = MEM32(ebp + 0x10); /* 0x121487E0: mov eax, dword ptr [ebp + 0x10] */
    /* test eax, eax */ /* 0x121487E3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12148829; /* 0x121487E5: je 0x12148829 */
L_121487E7:
    PUSH32(esp, ebx); /* 0x121487E7: push ebx */
    PUSH32(esp, esi); /* 0x121487E8: push esi */
    esi = MEM32(ebp + 0xC); /* 0x121487E9: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x121487EC: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x121487ED: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 4); /* 0x121487EF: push 4 */
    ecx = POP32_VAL(esp); /* 0x121487F1: pop ecx */
    edi = 0x12018314u; /* 0x121487F2: mov edi, 0x12018314 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x121487F7: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = ebx; /* 0x121487F9: mov dword ptr [eax], ebx */
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x121487FB: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_12148817; /* 0x121487FD: je 0x12148817 */
L_121487FF:
    esi = MEM32(ebp + 0xC); /* 0x121487FF: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, 4); /* 0x12148802: push 4 */
    ecx = POP32_VAL(esp); /* 0x12148804: pop ecx */
    edi = 0x12001B48u; /* 0x12148805: mov edi, 0x12001b48 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1214880A: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x1214880C: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_12148817; /* 0x1214880E: je 0x12148817 */
L_12148810:
    ebx = 0x80004002u; /* 0x12148810: mov ebx, 0x80004002 */
    goto L_12148822; /* 0x12148815: jmp 0x12148822 */
L_12148817:
    edx = MEM32(ebp + 0x8); /* 0x12148817: mov edx, dword ptr [ebp + 8] */
    MEM32(eax) = edx; /* 0x1214881A: mov dword ptr [eax], edx */
    ecx = MEM32(edx); /* 0x1214881C: mov ecx, dword ptr [edx] */
    PUSH32(esp, edx); /* 0x1214881E: push edx */
    RECOMP_ICALL(MEM32(ecx + 0x4)); /* 0x1214881F: call dword ptr [ecx + 4] */
    RECOMP_FLAGS_IN();
L_12148822:
    edi = POP32_VAL(esp); /* 0x12148822: pop edi */
    esi = POP32_VAL(esp); /* 0x12148823: pop esi */
    eax = ebx; /* 0x12148824: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x12148826: pop ebx */
    goto L_1214882E; /* 0x12148827: jmp 0x1214882e */
L_12148829:
    eax = 0x80070057u; /* 0x12148829: mov eax, 0x80070057 */
L_1214882E:
    ebp = POP32_VAL(esp); /* 0x1214882E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1214882F: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_12148837(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12148837u);

L_12148837:
    /* cmp MEM32(ecx + 0x4), 0 */ /* 0x12148837: cmp dword ptr [ecx + 4], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ecx) = 0x12011294u; /* 0x1214883B: mov dword ptr [ecx], 0x12011294 */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214884C; /* 0x12148841: je 0x1214884c */
L_12148843:
    PUSH32(esp, MEM32(ecx + 0x4)); /* 0x12148843: push dword ptr [ecx + 4] */
    RECOMP_CALL(sub_121BF586); /* 0x12148846: call 0x121bf586 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1214884B: pop ecx */
L_1214884C:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1214884C: ret  */
    RECOMP_REGS_OUT();
}

void sub_12148852(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12148852u);

L_12148852:
    edi = edi; /* 0x12148852: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12148854: push ebp */
    ebp = esp; /* 0x12148855: mov ebp, esp */
    PUSH32(esp, esi); /* 0x12148857: push esi */
    esi = ecx; /* 0x12148858: mov esi, ecx */
    RECOMP_CALL(sub_12148837); /* 0x1214885A: call 0x12148837 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1214885F: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214886C; /* 0x12148863: je 0x1214886c */
L_12148865:
    PUSH32(esp, esi); /* 0x12148865: push esi */
    RECOMP_CALL(sub_121BF388); /* 0x12148866: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1214886B: pop ecx */
L_1214886C:
    eax = esi; /* 0x1214886C: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1214886E: pop esi */
    ebp = POP32_VAL(esp); /* 0x1214886F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12148870: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12148878(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12148878u);

L_12148878:
    edi = edi; /* 0x12148878: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1214887A: push ebp */
    ebp = esp; /* 0x1214887B: mov ebp, esp */
    eax = MEM32(ebp + 0x10); /* 0x1214887D: mov eax, dword ptr [ebp + 0x10] */
    /* test eax, eax */ /* 0x12148880: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121488C6; /* 0x12148882: je 0x121488c6 */
L_12148884:
    PUSH32(esp, ebx); /* 0x12148884: push ebx */
    PUSH32(esp, esi); /* 0x12148885: push esi */
    esi = MEM32(ebp + 0xC); /* 0x12148886: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x12148889: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1214888A: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 4); /* 0x1214888C: push 4 */
    ecx = POP32_VAL(esp); /* 0x1214888E: pop ecx */
    edi = 0x12018314u; /* 0x1214888F: mov edi, 0x12018314 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x12148894: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = ebx; /* 0x12148896: mov dword ptr [eax], ebx */
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x12148898: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_121488B4; /* 0x1214889A: je 0x121488b4 */
L_1214889C:
    esi = MEM32(ebp + 0xC); /* 0x1214889C: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, 4); /* 0x1214889F: push 4 */
    ecx = POP32_VAL(esp); /* 0x121488A1: pop ecx */
    edi = 0x12001B28u; /* 0x121488A2: mov edi, 0x12001b28 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x121488A7: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x121488A9: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_121488B4; /* 0x121488AB: je 0x121488b4 */
L_121488AD:
    ebx = 0x80004002u; /* 0x121488AD: mov ebx, 0x80004002 */
    goto L_121488BF; /* 0x121488B2: jmp 0x121488bf */
L_121488B4:
    edx = MEM32(ebp + 0x8); /* 0x121488B4: mov edx, dword ptr [ebp + 8] */
    MEM32(eax) = edx; /* 0x121488B7: mov dword ptr [eax], edx */
    ecx = MEM32(edx); /* 0x121488B9: mov ecx, dword ptr [edx] */
    PUSH32(esp, edx); /* 0x121488BB: push edx */
    RECOMP_ICALL(MEM32(ecx + 0x4)); /* 0x121488BC: call dword ptr [ecx + 4] */
    RECOMP_FLAGS_IN();
L_121488BF:
    edi = POP32_VAL(esp); /* 0x121488BF: pop edi */
    esi = POP32_VAL(esp); /* 0x121488C0: pop esi */
    eax = ebx; /* 0x121488C1: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x121488C3: pop ebx */
    goto L_121488CB; /* 0x121488C4: jmp 0x121488cb */
L_121488C6:
    eax = 0x80070057u; /* 0x121488C6: mov eax, 0x80070057 */
L_121488CB:
    ebp = POP32_VAL(esp); /* 0x121488CB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x121488CC: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_121488D4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121488D4u);

L_121488D4:
    edi = edi; /* 0x121488D4: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121488D6: push ebp */
    ebp = esp; /* 0x121488D7: mov ebp, esp */
    PUSH32(esp, edi); /* 0x121488D9: push edi */
    edi = MEM32(ebp + 0xC); /* 0x121488DA: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x121488DD: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121488FF; /* 0x121488DF: je 0x121488ff */
L_121488E1:
    eax = MEM32(ebp + 0x8); /* 0x121488E1: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x121488E4: push esi */
    esi = MEM32(eax + 0x20); /* 0x121488E5: mov esi, dword ptr [eax + 0x20] */
    /* test esi, esi */ /* 0x121488E8: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121488F7; /* 0x121488EA: je 0x121488f7 */
L_121488EC:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 8; /* 0x121488EC: add esi, 8 */
    _flag_k = FK_ADD;
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121488EF: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121488F0: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121488F1: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121488F2: movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x121488F3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_121488FC; /* 0x121488F5: jmp 0x121488fc */
L_121488F7:
    eax = 0x88760384u; /* 0x121488F7: mov eax, 0x88760384 */
L_121488FC:
    esi = POP32_VAL(esp); /* 0x121488FC: pop esi */
    goto L_12148904; /* 0x121488FD: jmp 0x12148904 */
L_121488FF:
    eax = 0x88760385u; /* 0x121488FF: mov eax, 0x88760385 */
L_12148904:
    edi = POP32_VAL(esp); /* 0x12148904: pop edi */
    ebp = POP32_VAL(esp); /* 0x12148905: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x12148906: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1214890E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214890Eu);

L_1214890E:
    edi = edi; /* 0x1214890E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12148910: push ebp */
    ebp = esp; /* 0x12148911: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x12148913: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x12148916: push ebx */
    PUSH32(esp, esi); /* 0x12148917: push esi */
    esi = ecx; /* 0x12148918: mov esi, ecx */
    eax = MEM32(esi + 0x38); /* 0x1214891A: mov eax, dword ptr [esi + 0x38] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1214891D: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x3C) = ebx; /* 0x1214891F: mov dword ptr [esi + 0x3c], ebx */
    MEM32(esi + 0x40) = ebx; /* 0x12148922: mov dword ptr [esi + 0x40], ebx */
    /* test eax, eax */ /* 0x12148925: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12148994; /* 0x12148927: je 0x12148994 */
L_12148929:
    PUSH32(esp, edi); /* 0x12148929: push edi */
    edi = ebx; /* 0x1214892A: mov edi, ebx */
    /* cmp MEM32(eax), ebx */ /* 0x1214892C: cmp dword ptr [eax], ebx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_12148947; /* 0x1214892E: jbe 0x12148947 */
L_12148930:
    eax = MEM32(esi + 0x38); /* 0x12148930: mov eax, dword ptr [esi + 0x38] */
    eax = MEM32(eax + 0xC); /* 0x12148933: mov eax, dword ptr [eax + 0xc] */
    ecx = MEM32(eax + edi * 4); /* 0x12148936: mov ecx, dword ptr [eax + edi*4] */
    eax = MEM32(ecx); /* 0x12148939: mov eax, dword ptr [ecx] */
    PUSH32(esp, esi); /* 0x1214893B: push esi */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1214893C: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x38); /* 0x1214893F: mov eax, dword ptr [esi + 0x38] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x12148942: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(eax) */ /* 0x12148943: cmp edi, dword ptr [eax] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_12148930; /* 0x12148945: jb 0x12148930 */
L_12148947:
    eax = MEM32(esi + 0x40); /* 0x12148947: mov eax, dword ptr [esi + 0x40] */
    ecx = MEM32(esi + 0x24); /* 0x1214894A: mov ecx, dword ptr [esi + 0x24] */
    MEM32(ebp + (-0xC)) = eax; /* 0x1214894D: mov dword ptr [ebp - 0xc], eax */
    eax = MEM32(esi + 0x3C); /* 0x12148950: mov eax, dword ptr [esi + 0x3c] */
    MEM32(ebp + (-0x8)) = ebx; /* 0x12148953: mov dword ptr [ebp - 8], ebx */
    MEM32(ebp + (-0x10)) = eax; /* 0x12148956: mov dword ptr [ebp - 0x10], eax */
    MEM32(ebp + (-0x4)) = ebx; /* 0x12148959: mov dword ptr [ebp - 4], ebx */
    /* cmp MEM32(ecx + 0x28), ebx */ /* 0x1214895C: cmp dword ptr [ecx + 0x28], ebx */
    _flag_a = (uint32_t)(MEM32(ecx + 0x28)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12148998; /* 0x1214895F: je 0x12148998 */
L_12148961:
    eax = ebp + (-0x8); /* 0x12148961: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x12148964: push eax */
    eax = ebp + (-0x10); /* 0x12148965: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x12148968: push eax */
    eax = ebp + (-0x4); /* 0x12148969: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x1214896C: push eax */
    eax = ebp + (-0xC); /* 0x1214896D: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x12148970: push eax */
    RECOMP_CALL(sub_12147027); /* 0x12148971: call 0x12147027 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x12148976: mov edi, eax */
    /* test edi, edi */ /* 0x12148978: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_12148991; /* 0x1214897A: js 0x12148991 */
L_1214897C:
    PUSH32(esp, MEM32(esi + 0x40)); /* 0x1214897C: push dword ptr [esi + 0x40] */
    RECOMP_CALL(sub_121BF586); /* 0x1214897F: call 0x121bf586 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x12148984: pop ecx */
    ecx = MEM32(ebp + (-0x4)); /* 0x12148985: mov ecx, dword ptr [ebp - 4] */
    MEM32(esi + 0x3C) = ecx; /* 0x12148988: mov dword ptr [esi + 0x3c], ecx */
    ecx = MEM32(ebp + (-0x8)); /* 0x1214898B: mov ecx, dword ptr [ebp - 8] */
    MEM32(esi + 0x40) = ecx; /* 0x1214898E: mov dword ptr [esi + 0x40], ecx */
L_12148991:
    eax = edi; /* 0x12148991: mov eax, edi */
L_12148993:
    edi = POP32_VAL(esp); /* 0x12148993: pop edi */
L_12148994:
    esi = POP32_VAL(esp); /* 0x12148994: pop esi */
    ebx = POP32_VAL(esp); /* 0x12148995: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12148996: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x12148997: ret  */
L_12148998:
    PUSH32(esp, eax); /* 0x12148998: push eax */
    eax = ebp + (-0x4); /* 0x12148999: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x1214899C: push eax */
    eax = ebp + (-0xC); /* 0x1214899D: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x121489A0: push eax */
    RECOMP_CALL(sub_12146FD2); /* 0x121489A1: call 0x12146fd2 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x121489A6: mov edi, eax */
    /* test edi, edi */ /* 0x121489A8: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_12148991; /* 0x121489AA: js 0x12148991 */
L_121489AC:
    eax = MEM32(ebp + (-0x4)); /* 0x121489AC: mov eax, dword ptr [ebp - 4] */
    /* cmp eax, MEM32(esi + 0x3C) */ /* 0x121489AF: cmp eax, dword ptr [esi + 0x3c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x3C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12148991; /* 0x121489B2: je 0x12148991 */
L_121489B4:
    PUSH32(esp, MEM32(esi + 0x40)); /* 0x121489B4: push dword ptr [esi + 0x40] */
    RECOMP_CALL(sub_121BF586); /* 0x121489B7: call 0x121bf586 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x121489BC: pop ecx */
    MEM32(esi + 0x40) = ebx; /* 0x121489BD: mov dword ptr [esi + 0x40], ebx */
    eax = 0x88760394u; /* 0x121489C0: mov eax, 0x88760394 */
    RECOMP_BACKEDGE();
    goto L_12148993; /* 0x121489C5: jmp 0x12148993 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_121489CC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121489CCu);

L_121489CC:
    edi = edi; /* 0x121489CC: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121489CE: push ebp */
    ebp = esp; /* 0x121489CF: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x121489D1: push ecx */
    PUSH32(esp, ebx); /* 0x121489D2: push ebx */
    PUSH32(esp, esi); /* 0x121489D3: push esi */
    esi = MEM32(ecx + 0x24); /* 0x121489D4: mov esi, dword ptr [ecx + 0x24] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x121489D7: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x24), ebx */ /* 0x121489D9: cmp dword ptr [esi + 0x24], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x24)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_121489E3; /* 0x121489DC: jne 0x121489e3 */
L_121489DE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x121489DE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x121489E0: inc eax */
    _flag_k = FK_INC;
    goto L_12148A3D; /* 0x121489E1: jmp 0x12148a3d */
L_121489E3:
    esi = MEM32(esi + 0x20); /* 0x121489E3: mov esi, dword ptr [esi + 0x20] */
    PUSH32(esp, edi); /* 0x121489E6: push edi */
    MEM32(ebp + (-0x4)) = esi; /* 0x121489E7: mov dword ptr [ebp - 4], esi */
    /* test esi, esi */ /* 0x121489EA: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12148A3A; /* 0x121489EC: je 0x12148a3a */
L_121489EE:
    /* cmp MEM32(esi), ebx */ /* 0x121489EE: cmp dword ptr [esi], ebx */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_12148A3A; /* 0x121489F0: jbe 0x12148a3a */
L_121489F2:
    edi = MEM32(ebp + 0x8); /* 0x121489F2: mov edi, dword ptr [ebp + 8] */
L_121489F5:
    eax = MEM32(esi + 0xC); /* 0x121489F5: mov eax, dword ptr [esi + 0xc] */
    eax = MEM32(eax + ebx * 4); /* 0x121489F8: mov eax, dword ptr [eax + ebx*4] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x121489FB: push -1 */
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x121489FD: push dword ptr [edi + 4] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x12148A00: push -1 */
    PUSH32(esp, MEM32(eax)); /* 0x12148A02: push dword ptr [eax] */
    PUSH32(esp, 1); /* 0x12148A04: push 1 */
    PUSH32(esp, 0x409u); /* 0x12148A06: push 0x409 */
    RECOMP_ICALL(MEM32(0x120010AC)); /* 0x12148A0B: call dword ptr [0x120010ac] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 2); /* 0x12148A11: push 2 */
    ecx = POP32_VAL(esp); /* 0x12148A13: pop ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x12148A14: sub ecx, eax */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_12148A35; /* 0x12148A16: jne 0x12148a35 */
L_12148A18:
    eax = MEM32(esi + 0xC); /* 0x12148A18: mov eax, dword ptr [esi + 0xc] */
    edi = MEM32(eax + ebx * 4); /* 0x12148A1B: mov edi, dword ptr [eax + ebx*4] */
    esi = MEM32(ebp + 0x8); /* 0x12148A1E: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, 4); /* 0x12148A21: push 4 */
    ecx = POP32_VAL(esp); /* 0x12148A23: pop ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + ecx; /* 0x12148A24: add edi, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 8; /* 0x12148A26: add esi, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12148A29: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x12148A2B: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_12148A43; /* 0x12148A2D: je 0x12148a43 */
L_12148A2F:
    esi = MEM32(ebp + (-0x4)); /* 0x12148A2F: mov esi, dword ptr [ebp - 4] */
    edi = MEM32(ebp + 0x8); /* 0x12148A32: mov edi, dword ptr [ebp + 8] */
L_12148A35:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x12148A35: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, MEM32(esi) */ /* 0x12148A36: cmp ebx, dword ptr [esi] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_121489F5; /* 0x12148A38: jb 0x121489f5 */
L_12148A3A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12148A3A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_12148A3C:
    edi = POP32_VAL(esp); /* 0x12148A3C: pop edi */
L_12148A3D:
    esi = POP32_VAL(esp); /* 0x12148A3D: pop esi */
    ebx = POP32_VAL(esp); /* 0x12148A3E: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12148A3F: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12148A40: ret 4 */
L_12148A43:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12148A43: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x12148A45: inc eax */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_12148A3C; /* 0x12148A46: jmp 0x12148a3c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_12148A4D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12148A4Du);

L_12148A4D:
    edi = edi; /* 0x12148A4D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12148A4F: push ebp */
    ebp = esp; /* 0x12148A50: mov ebp, esp */
    eax = ebp + 0x8; /* 0x12148A52: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x12148A55: push eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x28u; /* 0x12148A56: add ecx, 0x28 */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1214AE6F); /* 0x12148A59: call 0x1214ae6f */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12148A5E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_12148A69; /* 0x12148A60: jns 0x12148a69 */
L_12148A62:
    eax = 0x8007000Eu; /* 0x12148A62: mov eax, 0x8007000e */
    goto L_12148A74; /* 0x12148A67: jmp 0x12148a74 */
L_12148A69:
    eax = MEM32(ebp + 0x8); /* 0x12148A69: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax); /* 0x12148A6C: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x12148A6E: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x10)); /* 0x12148A6F: call dword ptr [ecx + 0x10] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12148A72: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_12148A74:
    ebp = POP32_VAL(esp); /* 0x12148A74: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12148A75: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12148A7D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12148A7Du);

L_12148A7D:
    edi = edi; /* 0x12148A7D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12148A7F: push ebp */
    ebp = esp; /* 0x12148A80: mov ebp, esp */
    PUSH32(esp, esi); /* 0x12148A82: push esi */
    PUSH32(esp, edi); /* 0x12148A83: push edi */
    edi = ecx; /* 0x12148A84: mov edi, ecx */
    eax = MEM32(edi + 0x4); /* 0x12148A86: mov eax, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x12148A89: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x12148A8B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12148AC0; /* 0x12148A8D: je 0x12148ac0 */
L_12148A8F:
    ecx = MEM32(ebp + 0x8); /* 0x12148A8F: mov ecx, dword ptr [ebp + 8] */
L_12148A92:
    SET_LO8(edx, MEM8(eax)); /* 0x12148A92: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x12148A94: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_12148AB2; /* 0x12148A96: jne 0x12148ab2 */
L_12148A98:
    /* test LO8(edx), LO8(edx) */ /* 0x12148A98: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12148AAE; /* 0x12148A9A: je 0x12148aae */
L_12148A9C:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x12148A9C: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x12148A9F: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_12148AB2; /* 0x12148AA2: jne 0x12148ab2 */
L_12148AA4:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x12148AA4: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x12148AA7: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x12148AAA: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12148A92; /* 0x12148AAC: jne 0x12148a92 */
L_12148AAE:
    eax = esi; /* 0x12148AAE: mov eax, esi */
    goto L_12148AB7; /* 0x12148AB0: jmp 0x12148ab7 */
L_12148AB2:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x12148AB2: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x12148AB4: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_12148AB7:
    /* test eax, eax */ /* 0x12148AB7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12148AC0; /* 0x12148AB9: jne 0x12148ac0 */
L_12148ABB:
    eax = edi + (-0x4); /* 0x12148ABB: lea eax, [edi - 4] */
    goto L_12148ADF; /* 0x12148ABE: jmp 0x12148adf */
L_12148AC0:
    /* cmp MEM32(edi + 0x24), esi */ /* 0x12148AC0: cmp dword ptr [edi + 0x24], esi */
    _flag_a = (uint32_t)(MEM32(edi + 0x24)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_12148ADD; /* 0x12148AC3: jbe 0x12148add */
L_12148AC5:
    eax = MEM32(edi + 0x30); /* 0x12148AC5: mov eax, dword ptr [edi + 0x30] */
    ecx = MEM32(eax + esi * 4); /* 0x12148AC8: mov ecx, dword ptr [eax + esi*4] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x12148ACB: push dword ptr [ebp + 8] */
    eax = MEM32(ecx); /* 0x12148ACE: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x20)); /* 0x12148AD0: call dword ptr [eax + 0x20] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12148AD3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12148ADF; /* 0x12148AD5: jne 0x12148adf */
L_12148AD7:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x12148AD7: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(edi + 0x24) */ /* 0x12148AD8: cmp esi, dword ptr [edi + 0x24] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edi + 0x24));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_12148AC5; /* 0x12148ADB: jb 0x12148ac5 */
L_12148ADD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12148ADD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_12148ADF:
    edi = POP32_VAL(esp); /* 0x12148ADF: pop edi */
    esi = POP32_VAL(esp); /* 0x12148AE0: pop esi */
    ebp = POP32_VAL(esp); /* 0x12148AE1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12148AE2: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12148AEA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12148AEAu);

L_12148AEA:
    edi = edi; /* 0x12148AEA: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12148AEC: push ebp */
    ebp = esp; /* 0x12148AED: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x12148AEF: push ebx */
    PUSH32(esp, esi); /* 0x12148AF0: push esi */
    PUSH32(esp, edi); /* 0x12148AF1: push edi */
    edi = MEM32(ebp + 0x8); /* 0x12148AF2: mov edi, dword ptr [ebp + 8] */
    ebx = ecx; /* 0x12148AF5: mov ebx, ecx */
    PUSH32(esp, 4); /* 0x12148AF7: push 4 */
    ecx = POP32_VAL(esp); /* 0x12148AF9: pop ecx */
    esi = ebx + 0x8; /* 0x12148AFA: lea esi, [ebx + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12148AFD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x12148AFF: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_12148B08; /* 0x12148B01: jne 0x12148b08 */
L_12148B03:
    eax = ebx + (-0x4); /* 0x12148B03: lea eax, [ebx - 4] */
    goto L_12148B29; /* 0x12148B06: jmp 0x12148b29 */
L_12148B08:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x12148B08: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebx + 0x24), esi */ /* 0x12148B0A: cmp dword ptr [ebx + 0x24], esi */
    _flag_a = (uint32_t)(MEM32(ebx + 0x24)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_12148B27; /* 0x12148B0D: jbe 0x12148b27 */
L_12148B0F:
    eax = MEM32(ebx + 0x30); /* 0x12148B0F: mov eax, dword ptr [ebx + 0x30] */
    ecx = MEM32(eax + esi * 4); /* 0x12148B12: mov ecx, dword ptr [eax + esi*4] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x12148B15: push dword ptr [ebp + 8] */
    eax = MEM32(ecx); /* 0x12148B18: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x1C)); /* 0x12148B1A: call dword ptr [eax + 0x1c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12148B1D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12148B29; /* 0x12148B1F: jne 0x12148b29 */
L_12148B21:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x12148B21: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(ebx + 0x24) */ /* 0x12148B22: cmp esi, dword ptr [ebx + 0x24] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebx + 0x24));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_12148B0F; /* 0x12148B25: jb 0x12148b0f */
L_12148B27:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12148B27: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_12148B29:
    edi = POP32_VAL(esp); /* 0x12148B29: pop edi */
    esi = POP32_VAL(esp); /* 0x12148B2A: pop esi */
    ebx = POP32_VAL(esp); /* 0x12148B2B: pop ebx */
    ebp = POP32_VAL(esp); /* 0x12148B2C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12148B2D: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12148B35(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12148B35u);

L_12148B35:
    edi = edi; /* 0x12148B35: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12148B37: push ebp */
    ebp = esp; /* 0x12148B38: mov ebp, esp */
    PUSH32(esp, edi); /* 0x12148B3A: push edi */
    edi = MEM32(ebp + 0xC); /* 0x12148B3B: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x12148B3E: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12148B60; /* 0x12148B40: je 0x12148b60 */
L_12148B42:
    eax = MEM32(ebp + 0x8); /* 0x12148B42: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x12148B45: push esi */
    esi = MEM32(eax + 0x24); /* 0x12148B46: mov esi, dword ptr [eax + 0x24] */
    /* test esi, esi */ /* 0x12148B49: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12148B58; /* 0x12148B4B: je 0x12148b58 */
L_12148B4D:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 8; /* 0x12148B4D: add esi, 8 */
    _flag_k = FK_ADD;
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12148B50: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12148B51: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12148B52: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12148B53: movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12148B54: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_12148B5D; /* 0x12148B56: jmp 0x12148b5d */
L_12148B58:
    eax = 0x88760384u; /* 0x12148B58: mov eax, 0x88760384 */
L_12148B5D:
    esi = POP32_VAL(esp); /* 0x12148B5D: pop esi */
    goto L_12148B65; /* 0x12148B5E: jmp 0x12148b65 */
L_12148B60:
    eax = 0x88760385u; /* 0x12148B60: mov eax, 0x88760385 */
L_12148B65:
    edi = POP32_VAL(esp); /* 0x12148B65: pop edi */
    ebp = POP32_VAL(esp); /* 0x12148B66: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x12148B67: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_12148B6F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12148B6Fu);

L_12148B6F:
    edi = edi; /* 0x12148B6F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12148B71: push ebp */
    ebp = esp; /* 0x12148B72: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x12148B74: mov ecx, dword ptr [ebp + 0xc] */
    /* test ecx, ecx */ /* 0x12148B77: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12148B87; /* 0x12148B79: je 0x12148b87 */
L_12148B7B:
    eax = MEM32(ebp + 0x8); /* 0x12148B7B: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x28); /* 0x12148B7E: mov eax, dword ptr [eax + 0x28] */
    MEM32(ecx) = eax; /* 0x12148B81: mov dword ptr [ecx], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12148B83: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_12148B8C; /* 0x12148B85: jmp 0x12148b8c */
L_12148B87:
    eax = 0x88760385u; /* 0x12148B87: mov eax, 0x88760385 */
L_12148B8C:
    ebp = POP32_VAL(esp); /* 0x12148B8C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x12148B8D: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_12148B95(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12148B95u);

L_12148B95:
    edi = edi; /* 0x12148B95: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12148B97: push ebp */
    ebp = esp; /* 0x12148B98: mov ebp, esp */
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x12148B9A: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12148BC8; /* 0x12148B9E: je 0x12148bc8 */
L_12148BA0:
    ecx = MEM32(ebp + 0xC); /* 0x12148BA0: mov ecx, dword ptr [ebp + 0xc] */
    eax = MEM32(ebp + 0x8); /* 0x12148BA3: mov eax, dword ptr [ebp + 8] */
    /* cmp ecx, MEM32(eax + 0x28) */ /* 0x12148BA6: cmp ecx, dword ptr [eax + 0x28] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x28));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_12148BC1; /* 0x12148BA9: jae 0x12148bc1 */
L_12148BAB:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x12148BAB: push dword ptr [ebp + 0x10] */
    eax = MEM32(eax + 0x34); /* 0x12148BAE: mov eax, dword ptr [eax + 0x34] */
    eax = MEM32(eax + ecx * 4); /* 0x12148BB1: mov eax, dword ptr [eax + ecx*4] */
    ecx = MEM32(eax); /* 0x12148BB4: mov ecx, dword ptr [eax] */
    PUSH32(esp, 0x12001B48u); /* 0x12148BB6: push 0x12001b48 */
    PUSH32(esp, eax); /* 0x12148BBB: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xC)); /* 0x12148BBC: call dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_IN();
    goto L_12148BCD; /* 0x12148BBF: jmp 0x12148bcd */
L_12148BC1:
    eax = 0x88760393u; /* 0x12148BC1: mov eax, 0x88760393 */
    goto L_12148BCD; /* 0x12148BC6: jmp 0x12148bcd */
L_12148BC8:
    eax = 0x88760385u; /* 0x12148BC8: mov eax, 0x88760385 */
L_12148BCD:
    ebp = POP32_VAL(esp); /* 0x12148BCD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x12148BCE: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_12148BD6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12148BD6u);

    goto L_12148BD6;
L_12148837:
    /* cmp MEM32(ecx + 0x4), 0 */ /* 0x12148837: cmp dword ptr [ecx + 4], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ecx) = 0x12011294u; /* 0x1214883B: mov dword ptr [ecx], 0x12011294 */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214884C; /* 0x12148841: je 0x1214884c */
L_12148843:
    PUSH32(esp, MEM32(ecx + 0x4)); /* 0x12148843: push dword ptr [ecx + 4] */
    RECOMP_CALL(sub_121BF586); /* 0x12148846: call 0x121bf586 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1214884B: pop ecx */
L_1214884C:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1214884C: ret  */
L_12148BD6:
    edi = edi; /* 0x12148BD6: mov edi, edi */
    PUSH32(esp, esi); /* 0x12148BD8: push esi */
    esi = ecx; /* 0x12148BD9: mov esi, ecx */
    /* cmp MEM32(esi + 0x20), 0 */ /* 0x12148BDB: cmp dword ptr [esi + 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x20)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x12148BDF: push edi */
    MEM32(esi) = 0x120112ECu; /* 0x12148BE0: mov dword ptr [esi], 0x120112ec */
    MEM32(esi + 0x4) = 0x120112C0u; /* 0x12148BE6: mov dword ptr [esi + 4], 0x120112c0 */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12148BF8; /* 0x12148BED: je 0x12148bf8 */
L_12148BEF:
    PUSH32(esp, MEM32(esi + 0x20)); /* 0x12148BEF: push dword ptr [esi + 0x20] */
    RECOMP_CALL(sub_121BF586); /* 0x12148BF2: call 0x121bf586 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x12148BF7: pop ecx */
L_12148BF8:
    edx = MEM32(esi + 0x34); /* 0x12148BF8: mov edx, dword ptr [esi + 0x34] */
    /* test edx, edx */ /* 0x12148BFB: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12148C05; /* 0x12148BFD: je 0x12148c05 */
L_12148BFF:
    eax = MEM32(edx); /* 0x12148BFF: mov eax, dword ptr [edx] */
    PUSH32(esp, edx); /* 0x12148C01: push edx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x12148C02: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_12148C05:
    edi = POP32_VAL(esp); /* 0x12148C05: pop edi */
    ecx = esi + 0x4; /* 0x12148C06: lea ecx, [esi + 4] */
    esi = POP32_VAL(esp); /* 0x12148C09: pop esi */
    RECOMP_BACKEDGE();
    goto L_12148837; /* 0x12148C0A: jmp 0x12148837 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_12148C30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12148C30u);

L_12148C30:
    edi = edi; /* 0x12148C30: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12148C32: push ebp */
    ebp = esp; /* 0x12148C33: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x12148C35: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax + 0x24); /* 0x12148C38: mov ecx, dword ptr [eax + 0x24] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12148C3B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ecx + 0x24), 1 */ /* 0x12148C3D: cmp dword ptr [ecx + 0x24], 1 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x24)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x12148C41: setne al */
    ebp = POP32_VAL(esp); /* 0x12148C44: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12148C45: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12148C4D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12148C4Du);

L_12148C4D:
    edi = edi; /* 0x12148C4D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12148C4F: push ebp */
    ebp = esp; /* 0x12148C50: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x12148C52: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x34); /* 0x12148C55: mov eax, dword ptr [eax + 0x34] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x12148C58: push dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x12148C5B: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x12148C5D: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xC)); /* 0x12148C5E: call dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x12148C61: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x12148C62: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_12148C6A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12148C6Au);

L_12148C6A:
    edi = edi; /* 0x12148C6A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12148C6C: push ebp */
    ebp = esp; /* 0x12148C6D: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x12148C6F: push dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0x8); /* 0x12148C72: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x34); /* 0x12148C75: mov eax, dword ptr [eax + 0x34] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x12148C78: push dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x12148C7B: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x12148C7D: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x10)); /* 0x12148C7E: call dword ptr [ecx + 0x10] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x12148C81: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x12148C82: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_12148C8A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12148C8Au);

L_12148C8A:
    edi = edi; /* 0x12148C8A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12148C8C: push ebp */
    ebp = esp; /* 0x12148C8D: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x12148C8F: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x34); /* 0x12148C92: mov eax, dword ptr [eax + 0x34] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x12148C95: push dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x12148C98: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x12148C9A: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x14)); /* 0x12148C9B: call dword ptr [ecx + 0x14] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x12148C9E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x12148C9F: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_12148CA7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12148CA7u);

L_12148CA7:
    edi = edi; /* 0x12148CA7: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12148CA9: push ebp */
    ebp = esp; /* 0x12148CAA: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x12148CAC: push dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0x8); /* 0x12148CAF: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x34); /* 0x12148CB2: mov eax, dword ptr [eax + 0x34] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x12148CB5: push dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x12148CB8: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x12148CBA: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x18)); /* 0x12148CBB: call dword ptr [ecx + 0x18] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x12148CBE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x12148CBF: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_12148CC7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12148CC7u);

L_12148CC7:
    edi = edi; /* 0x12148CC7: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12148CC9: push ebp */
    ebp = esp; /* 0x12148CCA: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x12148CCC: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x34); /* 0x12148CCF: mov eax, dword ptr [eax + 0x34] */
    ecx = MEM32(eax); /* 0x12148CD2: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x12148CD4: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x1C)); /* 0x12148CD5: call dword ptr [ecx + 0x1c] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x12148CD8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12148CD9: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12148CE1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12148CE1u);

L_12148CE1:
    edi = edi; /* 0x12148CE1: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12148CE3: push ebp */
    ebp = esp; /* 0x12148CE4: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x12148CE6: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x34); /* 0x12148CE9: mov eax, dword ptr [eax + 0x34] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x12148CEC: push dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x12148CEF: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x12148CF1: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x20)); /* 0x12148CF2: call dword ptr [ecx + 0x20] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x12148CF5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x12148CF6: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_12148CFE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12148CFEu);

L_12148CFE:
    edi = edi; /* 0x12148CFE: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12148D00: push ebp */
    ebp = esp; /* 0x12148D01: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x12148D03: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x34); /* 0x12148D06: mov eax, dword ptr [eax + 0x34] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x12148D09: push dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x12148D0C: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x12148D0E: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x28)); /* 0x12148D0F: call dword ptr [ecx + 0x28] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x12148D12: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x12148D13: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_12148D1B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12148D1Bu);

L_12148D1B:
    edi = edi; /* 0x12148D1B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12148D1D: push ebp */
    ebp = esp; /* 0x12148D1E: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x12148D20: push dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0x8); /* 0x12148D23: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x34); /* 0x12148D26: mov eax, dword ptr [eax + 0x34] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x12148D29: push dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x12148D2C: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x12148D2E: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x2C)); /* 0x12148D2F: call dword ptr [ecx + 0x2c] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x12148D32: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x12148D33: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_12148D3B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12148D3Bu);

L_12148D3B:
    edi = edi; /* 0x12148D3B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12148D3D: push ebp */
    ebp = esp; /* 0x12148D3E: mov ebp, esp */
    PUSH32(esp, esi); /* 0x12148D40: push esi */
    esi = MEM32(ebp + 0x8); /* 0x12148D41: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x12148D44: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x12148D45: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x4), edi */ /* 0x12148D47: cmp dword ptr [esi + 4], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_12148D5E; /* 0x12148D4A: jbe 0x12148d5e */
L_12148D4C:
    eax = MEM32(esi + 0x10); /* 0x12148D4C: mov eax, dword ptr [esi + 0x10] */
    PUSH32(esp, MEM32(eax + edi * 4)); /* 0x12148D4F: push dword ptr [eax + edi*4] */
    RECOMP_CALL(sub_121BF586); /* 0x12148D52: call 0x121bf586 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x12148D57: inc edi */
    _flag_k = FK_INC;
    ecx = POP32_VAL(esp); /* 0x12148D58: pop ecx */
    /* cmp edi, MEM32(esi + 0x4) */ /* 0x12148D59: cmp edi, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_12148D4C; /* 0x12148D5C: jb 0x12148d4c */
L_12148D5E:
    eax = MEM32(esi); /* 0x12148D5E: mov eax, dword ptr [esi] */
    PUSH32(esp, 1); /* 0x12148D60: push 1 */
    ecx = esi; /* 0x12148D62: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x12148D64: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x12148D67: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12148D68: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x12148D6A: pop esi */
    ebp = POP32_VAL(esp); /* 0x12148D6B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12148D6C: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12148D74(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12148D74u);

L_12148D74:
    edi = edi; /* 0x12148D74: mov edi, edi */
    PUSH32(esp, ebx); /* 0x12148D76: push ebx */
    PUSH32(esp, esi); /* 0x12148D77: push esi */
    esi = ecx; /* 0x12148D78: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x12148D7A: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0xC), ebx */ /* 0x12148D7C: cmp dword ptr [esi + 0xc], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12148DA4; /* 0x12148D7F: je 0x12148da4 */
L_12148D81:
    PUSH32(esp, edi); /* 0x12148D81: push edi */
    edi = ebx; /* 0x12148D82: mov edi, ebx */
    /* cmp MEM32(esi), ebx */ /* 0x12148D84: cmp dword ptr [esi], ebx */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_12148DA3; /* 0x12148D86: jbe 0x12148da3 */
L_12148D88:
    eax = MEM32(esi + 0xC); /* 0x12148D88: mov eax, dword ptr [esi + 0xc] */
    /* cmp MEM32(eax + edi * 4), ebx */ /* 0x12148D8B: cmp dword ptr [eax + edi*4], ebx */
    _flag_a = (uint32_t)(MEM32(eax + edi * 4)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12148D9E; /* 0x12148D8E: je 0x12148d9e */
L_12148D90:
    eax = MEM32(eax + edi * 4); /* 0x12148D90: mov eax, dword ptr [eax + edi*4] */
    ecx = MEM32(eax); /* 0x12148D93: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x12148D95: push eax */
    RECOMP_ICALL(MEM32(ecx)); /* 0x12148D96: call dword ptr [ecx] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xC); /* 0x12148D98: mov eax, dword ptr [esi + 0xc] */
    MEM32(eax + edi * 4) = ebx; /* 0x12148D9B: mov dword ptr [eax + edi*4], ebx */
L_12148D9E:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x12148D9E: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(esi) */ /* 0x12148D9F: cmp edi, dword ptr [esi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_12148D88; /* 0x12148DA1: jb 0x12148d88 */
L_12148DA3:
    edi = POP32_VAL(esp); /* 0x12148DA3: pop edi */
L_12148DA4:
    PUSH32(esp, MEM32(esi + 0xC)); /* 0x12148DA4: push dword ptr [esi + 0xc] */
    RECOMP_CALL(sub_121BF586); /* 0x12148DA7: call 0x121bf586 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x12148DAC: pop ecx */
    esi = POP32_VAL(esp); /* 0x12148DAD: pop esi */
    ebx = POP32_VAL(esp); /* 0x12148DAE: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x12148DAF: ret  */
    RECOMP_REGS_OUT();
}

void sub_12148DD3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12148DD3u);

L_12148DD3:
    edi = edi; /* 0x12148DD3: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12148DD5: push ebp */
    ebp = esp; /* 0x12148DD6: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x12148DD8: push ecx */
    PUSH32(esp, ebx); /* 0x12148DD9: push ebx */
    PUSH32(esp, esi); /* 0x12148DDA: push esi */
    PUSH32(esp, edi); /* 0x12148DDB: push edi */
    edi = MEM32(ebp + 0x10); /* 0x12148DDC: mov edi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0);
    MEM32(edi) = MEM32(edi) & 0; /* 0x12148DDF: and dword ptr [edi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ecx; /* 0x12148DE2: mov eax, ecx */
    MEM32(ebp + (-0x4)) = eax; /* 0x12148DE4: mov dword ptr [ebp - 4], eax */
    eax = MEM32(eax + 0x2C); /* 0x12148DE7: mov eax, dword ptr [eax + 0x2c] */
    /* test eax, eax */ /* 0x12148DEA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12148E49; /* 0x12148DEC: je 0x12148e49 */
L_12148DEE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x12148DEE: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(eax), esi */ /* 0x12148DF0: cmp dword ptr [eax], esi */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_12148E49; /* 0x12148DF2: jbe 0x12148e49 */
L_12148DF4:
    eax = MEM32(eax + 0xC); /* 0x12148DF4: mov eax, dword ptr [eax + 0xc] */
    ecx = MEM32(eax + esi * 4); /* 0x12148DF7: mov ecx, dword ptr [eax + esi*4] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x12148DFA: push dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x12148DFD: add ecx, 4 */
    _flag_k = FK_ADD;
    eax = MEM32(ecx); /* 0x12148E00: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x1C)); /* 0x12148E02: call dword ptr [eax + 0x1c] */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x12148E05: mov ecx, eax */
    /* test ecx, ecx */ /* 0x12148E07: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12148E3E; /* 0x12148E09: je 0x12148e3e */
L_12148E0B:
    eax = MEM32(ecx + 0x8); /* 0x12148E0B: mov eax, dword ptr [ecx + 8] */
    /* test eax, eax */ /* 0x12148E0E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12148E3E; /* 0x12148E10: je 0x12148e3e */
L_12148E12:
    edx = MEM32(ebp + 0x8); /* 0x12148E12: mov edx, dword ptr [ebp + 8] */
L_12148E15:
    SET_LO8(ebx, MEM8(edx)); /* 0x12148E15: mov bl, byte ptr [edx] */
    /* cmp LO8(ebx), MEM8(eax) */ /* 0x12148E17: cmp bl, byte ptr [eax] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_12148E35; /* 0x12148E19: jne 0x12148e35 */
L_12148E1B:
    /* test LO8(ebx), LO8(ebx) */ /* 0x12148E1B: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12148E31; /* 0x12148E1D: je 0x12148e31 */
L_12148E1F:
    SET_LO8(ebx, MEM8(edx + 0x1)); /* 0x12148E1F: mov bl, byte ptr [edx + 1] */
    /* cmp LO8(ebx), MEM8(eax + 0x1) */ /* 0x12148E22: cmp bl, byte ptr [eax + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(eax + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_12148E35; /* 0x12148E25: jne 0x12148e35 */
L_12148E27:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x12148E27: add edx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x12148E2A: add eax, 2 */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x12148E2D: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12148E15; /* 0x12148E2F: jne 0x12148e15 */
L_12148E31:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12148E31: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_12148E3A; /* 0x12148E33: jmp 0x12148e3a */
L_12148E35:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x12148E35: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x12148E37: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_12148E3A:
    /* test eax, eax */ /* 0x12148E3A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12148E55; /* 0x12148E3C: je 0x12148e55 */
L_12148E3E:
    eax = MEM32(ebp + (-0x4)); /* 0x12148E3E: mov eax, dword ptr [ebp - 4] */
    eax = MEM32(eax + 0x2C); /* 0x12148E41: mov eax, dword ptr [eax + 0x2c] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x12148E44: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(eax) */ /* 0x12148E45: cmp esi, dword ptr [eax] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_12148DF4; /* 0x12148E47: jb 0x12148df4 */
L_12148E49:
    eax = 0x88760387u; /* 0x12148E49: mov eax, 0x88760387 */
L_12148E4E:
    edi = POP32_VAL(esp); /* 0x12148E4E: pop edi */
    esi = POP32_VAL(esp); /* 0x12148E4F: pop esi */
    ebx = POP32_VAL(esp); /* 0x12148E50: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12148E51: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x12148E52: ret 0xc */
L_12148E55:
    MEM32(edi) = ecx; /* 0x12148E55: mov dword ptr [edi], ecx */
    eax = MEM32(ecx); /* 0x12148E57: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x12148E59: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x12148E5A: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12148E5D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_12148E4E; /* 0x12148E5F: jmp 0x12148e4e */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_12148E66(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12148E66u);

L_12148E66:
    edi = edi; /* 0x12148E66: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12148E68: push ebp */
    ebp = esp; /* 0x12148E69: mov ebp, esp */
    eax = MEM32(ebp + 0x10); /* 0x12148E6B: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ecx + 0x8) = eax; /* 0x12148E6E: mov dword ptr [ecx + 8], eax */
    eax = MEM32(ebp + 0x8); /* 0x12148E71: mov eax, dword ptr [ebp + 8] */
    MEM32(ecx + 0x4) = 0x12011294u; /* 0x12148E74: mov dword ptr [ecx + 4], 0x12011294 */
    PUSH32(esp, esi); /* 0x12148E7B: push esi */
    esi = MEM32(ebp + 0x14); /* 0x12148E7C: mov esi, dword ptr [ebp + 0x14] */
    PUSH32(esp, edi); /* 0x12148E7F: push edi */
    edi = ecx + 0xC; /* 0x12148E80: lea edi, [ecx + 0xc] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12148E83: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12148E84: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12148E85: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12148E86: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(ecx + 0x1C) = 1; /* 0x12148E87: mov dword ptr [ecx + 0x1c], 1 */
    MEM32(ecx + 0x20) = eax; /* 0x12148E8E: mov dword ptr [ecx + 0x20], eax */
    eax = MEM32(ebp + 0xC); /* 0x12148E91: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ecx + 0x24) = eax; /* 0x12148E94: mov dword ptr [ecx + 0x24], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12148E97: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx) = 0x12011348u; /* 0x12148E99: mov dword ptr [ecx], 0x12011348 */
    MEM32(ecx + 0x4) = 0x1201131Cu; /* 0x12148E9F: mov dword ptr [ecx + 4], 0x1201131c */
    MEM32(ecx + 0x28) = eax; /* 0x12148EA6: mov dword ptr [ecx + 0x28], eax */
    MEM32(ecx + 0x2C) = eax; /* 0x12148EA9: mov dword ptr [ecx + 0x2c], eax */
    MEM32(ecx + 0x34) = eax; /* 0x12148EAC: mov dword ptr [ecx + 0x34], eax */
    eax = MEM32(ebp + 0x18); /* 0x12148EAF: mov eax, dword ptr [ebp + 0x18] */
    MEM32(ecx + 0x30) = 0xAu; /* 0x12148EB2: mov dword ptr [ecx + 0x30], 0xa */
    MEM32(ecx + 0x38) = eax; /* 0x12148EB9: mov dword ptr [ecx + 0x38], eax */
    eax = MEM32(ebp + 0x1C); /* 0x12148EBC: mov eax, dword ptr [ebp + 0x1c] */
    edi = POP32_VAL(esp); /* 0x12148EBF: pop edi */
    MEM32(ecx + 0x3C) = eax; /* 0x12148EC0: mov dword ptr [ecx + 0x3c], eax */
    eax = ecx; /* 0x12148EC3: mov eax, ecx */
    esi = POP32_VAL(esp); /* 0x12148EC5: pop esi */
    ebp = POP32_VAL(esp); /* 0x12148EC6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x12148EC7: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_12148EDC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12148EDCu);

L_12148EDC:
    edi = edi; /* 0x12148EDC: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12148EDE: push ebp */
    ebp = esp; /* 0x12148EDF: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x12148EE1: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x12148EE4: add eax, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x12148EE7: push eax */
    RECOMP_CALL(sub_1214F281); /* 0x12148EE8: call 0x1214f281 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x12148EED: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12148EEE: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12148EF6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12148EF6u);

L_12148EF6:
    edi = edi; /* 0x12148EF6: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12148EF8: push ebp */
    ebp = esp; /* 0x12148EF9: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x12148EFB: push dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0x8); /* 0x12148EFE: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x12148F01: push dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x12148F04: add eax, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x12148F07: push eax */
    RECOMP_CALL(sub_1214F2A5); /* 0x12148F08: call 0x1214f2a5 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x12148F0D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x12148F0E: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_12148F16(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12148F16u);

L_12148F16:
    edi = edi; /* 0x12148F16: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12148F18: push ebp */
    ebp = esp; /* 0x12148F19: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x12148F1B: push dword ptr [ebp + 0xc] */
    eax = MEM32(ebp + 0x8); /* 0x12148F1E: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x12148F21: add eax, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x12148F24: push eax */
    RECOMP_CALL(sub_1214F30E); /* 0x12148F25: call 0x1214f30e */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x12148F2A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x12148F2B: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_12148F6F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12148F6Fu);

L_12148F6F:
    edi = edi; /* 0x12148F6F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12148F71: push ebp */
    ebp = esp; /* 0x12148F72: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x12148F74: push ebx */
    ebx = MEM32(ebp + 0x1C); /* 0x12148F75: mov ebx, dword ptr [ebp + 0x1c] */
    PUSH32(esp, esi); /* 0x12148F78: push esi */
    esi = MEM32(ebp + 0x18); /* 0x12148F79: mov esi, dword ptr [ebp + 0x18] */
    /* test esi, esi */ /* 0x12148F7C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12148FD3; /* 0x12148F7E: jne 0x12148fd3 */
L_12148F80:
    /* test ebx, ebx */ /* 0x12148F80: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12148FD7; /* 0x12148F82: jne 0x12148fd7 */
L_12148F84:
    PUSH32(esp, edi); /* 0x12148F84: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x12148F85: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x12148F87: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12148FA7; /* 0x12148F89: je 0x12148fa7 */
L_12148F8B:
    PUSH32(esp, esi); /* 0x12148F8B: push esi */
    RECOMP_CALL(sub_121BF524); /* 0x12148F8C: call 0x121bf524 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x12148F91: mov edi, eax */
    ecx = POP32_VAL(esp); /* 0x12148F93: pop ecx */
    /* test edi, edi */ /* 0x12148F94: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12149053; /* 0x12148F96: je 0x12149053 */
L_12148F9C:
    PUSH32(esp, esi); /* 0x12148F9C: push esi */
    PUSH32(esp, ebx); /* 0x12148F9D: push ebx */
    PUSH32(esp, edi); /* 0x12148F9E: push edi */
    RECOMP_CALL(sub_121BF440); /* 0x12148F9F: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x12148FA4: add esp, 0xc */
    _flag_k = FK_ADD;
L_12148FA7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x12148FA7: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x10), ebx */ /* 0x12148FA9: cmp dword ptr [ebp + 0x10], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12148FED; /* 0x12148FAC: je 0x12148fed */
L_12148FAE:
    ecx = MEM32(ebp + 0x10); /* 0x12148FAE: mov ecx, dword ptr [ebp + 0x10] */
    edx = ecx + 0x1; /* 0x12148FB1: lea edx, [ecx + 1] */
L_12148FB4:
    SET_LO8(eax, MEM8(ecx)); /* 0x12148FB4: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x12148FB6: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x12148FB7: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12148FB4; /* 0x12148FB9: jne 0x12148fb4 */
L_12148FBB:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x12148FBB: sub ecx, edx */
    _flag_k = FK_CMP;
    eax = ecx + 0x1; /* 0x12148FBD: lea eax, [ecx + 1] */
    PUSH32(esp, eax); /* 0x12148FC0: push eax */
    MEM32(ebp + 0x1C) = eax; /* 0x12148FC1: mov dword ptr [ebp + 0x1c], eax */
    RECOMP_CALL(sub_121BF524); /* 0x12148FC4: call 0x121bf524 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x12148FC9: mov ebx, eax */
    ecx = POP32_VAL(esp); /* 0x12148FCB: pop ecx */
    /* test ebx, ebx */ /* 0x12148FCC: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12148FDE; /* 0x12148FCE: jne 0x12148fde */
L_12148FD0:
    PUSH32(esp, edi); /* 0x12148FD0: push edi */
    goto L_1214902F; /* 0x12148FD1: jmp 0x1214902f */
L_12148FD3:
    /* test ebx, ebx */ /* 0x12148FD3: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12148F84; /* 0x12148FD5: jne 0x12148f84 */
L_12148FD7:
    eax = 0x88760385u; /* 0x12148FD7: mov eax, 0x88760385 */
    goto L_1214905D; /* 0x12148FDC: jmp 0x1214905d */
L_12148FDE:
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x12148FDE: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x12148FE1: push dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x12148FE4: push ebx */
    RECOMP_CALL(sub_121BF440); /* 0x12148FE5: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x12148FEA: add esp, 0xc */
    _flag_k = FK_ADD;
L_12148FED:
    PUSH32(esp, 0x120014BCu); /* 0x12148FED: push 0x120014bc */
    PUSH32(esp, 0x40u); /* 0x12148FF2: push 0x40 */
    RECOMP_CALL(sub_12018970); /* 0x12148FF4: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x12148FF9: pop ecx */
    ecx = POP32_VAL(esp); /* 0x12148FFA: pop ecx */
    /* test eax, eax */ /* 0x12148FFB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12149014; /* 0x12148FFD: je 0x12149014 */
L_12148FFF:
    PUSH32(esp, edi); /* 0x12148FFF: push edi */
    PUSH32(esp, esi); /* 0x12149000: push esi */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x12149001: push dword ptr [ebp + 0x14] */
    ecx = eax; /* 0x12149004: mov ecx, eax */
    PUSH32(esp, ebx); /* 0x12149006: push ebx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x12149007: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1214900A: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_12148E66); /* 0x1214900D: call 0x12148e66 */
    RECOMP_FLAGS_IN();
    goto L_12149016; /* 0x12149012: jmp 0x12149016 */
L_12149014:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12149014: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_12149016:
    ecx = MEM32(ebp + 0x20); /* 0x12149016: mov ecx, dword ptr [ebp + 0x20] */
    MEM32(ecx) = eax; /* 0x12149019: mov dword ptr [ecx], eax */
    /* test eax, eax */ /* 0x1214901B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12149037; /* 0x1214901D: jne 0x12149037 */
L_1214901F:
    /* test esi, esi */ /* 0x1214901F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214902A; /* 0x12149021: je 0x1214902a */
L_12149023:
    PUSH32(esp, edi); /* 0x12149023: push edi */
    RECOMP_CALL(sub_121BF586); /* 0x12149024: call 0x121bf586 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x12149029: pop ecx */
L_1214902A:
    /* test ebx, ebx */ /* 0x1214902A: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12149053; /* 0x1214902C: je 0x12149053 */
L_1214902E:
    PUSH32(esp, ebx); /* 0x1214902E: push ebx */
L_1214902F:
    RECOMP_CALL(sub_121BF586); /* 0x1214902F: call 0x121bf586 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x12149034: pop ecx */
    goto L_12149053; /* 0x12149035: jmp 0x12149053 */
L_12149037:
    /* cmp MEM32(eax + 0x38), 0 */ /* 0x12149037: cmp dword ptr [eax + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214905A; /* 0x1214903B: je 0x1214905a */
L_1214903D:
    /* cmp MEM32(eax + 0x3C), 0 */ /* 0x1214903D: cmp dword ptr [eax + 0x3c], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x3C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1214905A; /* 0x12149041: jne 0x1214905a */
L_12149043:
    ecx = eax + 0x4; /* 0x12149043: lea ecx, [eax + 4] */
    eax = MEM32(ecx); /* 0x12149046: mov eax, dword ptr [ecx] */
    PUSH32(esp, 1); /* 0x12149048: push 1 */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1214904A: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x20); /* 0x1214904D: mov eax, dword ptr [ebp + 0x20] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x12149050: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_12149053:
    eax = 0x8007000Eu; /* 0x12149053: mov eax, 0x8007000e */
    goto L_1214905C; /* 0x12149058: jmp 0x1214905c */
L_1214905A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1214905A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1214905C:
    edi = POP32_VAL(esp); /* 0x1214905C: pop edi */
L_1214905D:
    esi = POP32_VAL(esp); /* 0x1214905D: pop esi */
    ebx = POP32_VAL(esp); /* 0x1214905E: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1214905F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x12149060: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_12149068(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12149068u);

    goto L_12149068;
L_12148837:
    /* cmp MEM32(ecx + 0x4), 0 */ /* 0x12148837: cmp dword ptr [ecx + 4], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ecx) = 0x12011294u; /* 0x1214883B: mov dword ptr [ecx], 0x12011294 */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214884C; /* 0x12148841: je 0x1214884c */
L_12148843:
    PUSH32(esp, MEM32(ecx + 0x4)); /* 0x12148843: push dword ptr [ecx + 4] */
    RECOMP_CALL(sub_121BF586); /* 0x12148846: call 0x121bf586 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1214884B: pop ecx */
L_1214884C:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1214884C: ret  */
L_12149068:
    edi = edi; /* 0x12149068: mov edi, edi */
    PUSH32(esp, esi); /* 0x1214906A: push esi */
    esi = ecx; /* 0x1214906B: mov esi, ecx */
    /* cmp MEM32(esi + 0x38), 0 */ /* 0x1214906D: cmp dword ptr [esi + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x12149071: push edi */
    MEM32(esi) = 0x12011348u; /* 0x12149072: mov dword ptr [esi], 0x12011348 */
    MEM32(esi + 0x4) = 0x1201131Cu; /* 0x12149078: mov dword ptr [esi + 4], 0x1201131c */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214908A; /* 0x1214907F: je 0x1214908a */
L_12149081:
    PUSH32(esp, MEM32(esi + 0x3C)); /* 0x12149081: push dword ptr [esi + 0x3c] */
    RECOMP_CALL(sub_121BF586); /* 0x12149084: call 0x121bf586 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x12149089: pop ecx */
L_1214908A:
    ecx = esi + 0x28; /* 0x1214908A: lea ecx, [esi + 0x28] */
    RECOMP_CALL(sub_12148D74); /* 0x1214908D: call 0x12148d74 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x12149092: pop edi */
    ecx = esi + 0x4; /* 0x12149093: lea ecx, [esi + 4] */
    esi = POP32_VAL(esp); /* 0x12149096: pop esi */
    RECOMP_BACKEDGE();
    goto L_12148837; /* 0x12149097: jmp 0x12148837 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_121490A1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121490A1u);

L_121490A1:
    edi = edi; /* 0x121490A1: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121490A3: push ebp */
    ebp = esp; /* 0x121490A4: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x121490A6: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x121490A7: mov ebx, dword ptr [ebp + 8] */
    ecx = MEM32(ebx + 0x24); /* 0x121490AA: mov ecx, dword ptr [ebx + 0x24] */
    /* cmp MEM8(ecx + 0x5D), 0 */ /* 0x121490AD: cmp byte ptr [ecx + 0x5d], 0 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x5D)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121490BD; /* 0x121490B1: je 0x121490bd */
L_121490B3:
    eax = 0x88760384u; /* 0x121490B3: mov eax, 0x88760384 */
    goto L_12149142; /* 0x121490B8: jmp 0x12149142 */
L_121490BD:
    /* cmp MEM32(ebp + 0x20), 0 */ /* 0x121490BD: cmp dword ptr [ebp + 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x20)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214913D; /* 0x121490C1: je 0x1214913d */
L_121490C3:
    eax = ebp + 0x8; /* 0x121490C3: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x121490C6: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x121490C7: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1214349D); /* 0x121490CA: call 0x1214349d */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x121490CF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_12149142; /* 0x121490D1: js 0x12149142 */
L_121490D3:
    eax = MEM32(ebp + 0x14); /* 0x121490D3: mov eax, dword ptr [ebp + 0x14] */
    /* test eax, eax */ /* 0x121490D6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121490DF; /* 0x121490D8: jne 0x121490df */
L_121490DA:
    eax = 0x12018324u; /* 0x121490DA: mov eax, 0x12018324 */
L_121490DF:
    ecx = ebp + 0xC; /* 0x121490DF: lea ecx, [ebp + 0xc] */
    PUSH32(esp, ecx); /* 0x121490E2: push ecx */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x121490E3: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x121490E6: push dword ptr [ebp + 0x18] */
    PUSH32(esp, eax); /* 0x121490E9: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x121490EA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebx + 0x24)); /* 0x121490ED: push dword ptr [ebx + 0x24] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x121490F0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_12148F6F); /* 0x121490F3: call 0x12148f6f */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x121490F8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_12149142; /* 0x121490FA: js 0x12149142 */
L_121490FC:
    PUSH32(esp, esi); /* 0x121490FC: push esi */
    esi = MEM32(ebp + 0xC); /* 0x121490FD: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x12149100: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x12149101: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x12149103: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214910F; /* 0x12149105: je 0x1214910f */
L_12149107:
    eax = esi + 0x4; /* 0x12149107: lea eax, [esi + 4] */
    MEM32(ebp + 0x8) = eax; /* 0x1214910A: mov dword ptr [ebp + 8], eax */
    goto L_12149112; /* 0x1214910D: jmp 0x12149112 */
L_1214910F:
    MEM32(ebp + 0x8) = edi; /* 0x1214910F: mov dword ptr [ebp + 8], edi */
L_12149112:
    eax = ebp + 0x8; /* 0x12149112: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x12149115: push eax */
    ecx = ebx + 0x28; /* 0x12149116: lea ecx, [ebx + 0x28] */
    RECOMP_CALL(sub_1214AE6F); /* 0x12149119: call 0x1214ae6f */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1214911E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(esi); /* 0x12149120: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x12149122: push esi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214912F; /* 0x12149123: je 0x1214912f */
L_12149125:
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x12149125: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x20); /* 0x12149128: mov eax, dword ptr [ebp + 0x20] */
    MEM32(eax) = esi; /* 0x1214912B: mov dword ptr [eax], esi */
    goto L_12149137; /* 0x1214912D: jmp 0x12149137 */
L_1214912F:
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1214912F: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    edi = 0x8007000Eu; /* 0x12149132: mov edi, 0x8007000e */
L_12149137:
    eax = edi; /* 0x12149137: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x12149139: pop edi */
    esi = POP32_VAL(esp); /* 0x1214913A: pop esi */
    goto L_12149142; /* 0x1214913B: jmp 0x12149142 */
L_1214913D:
    eax = 0x88760385u; /* 0x1214913D: mov eax, 0x88760385 */
L_12149142:
    ebx = POP32_VAL(esp); /* 0x12149142: pop ebx */
    ebp = POP32_VAL(esp); /* 0x12149143: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x12149144: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_1214914C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214914Cu);

L_1214914C:
    edi = edi; /* 0x1214914C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1214914E: push ebp */
    ebp = esp; /* 0x1214914F: mov ebp, esp */
    eax = MEM32(ebp + 0x10); /* 0x12149151: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ecx + 0x8) = eax; /* 0x12149154: mov dword ptr [ecx + 8], eax */
    eax = MEM32(ebp + 0x8); /* 0x12149157: mov eax, dword ptr [ebp + 8] */
    MEM32(ecx + 0x4) = 0x12011294u; /* 0x1214915A: mov dword ptr [ecx + 4], 0x12011294 */
    PUSH32(esp, esi); /* 0x12149161: push esi */
    esi = MEM32(ebp + 0x14); /* 0x12149162: mov esi, dword ptr [ebp + 0x14] */
    PUSH32(esp, edi); /* 0x12149165: push edi */
    edi = ecx + 0xC; /* 0x12149166: lea edi, [ecx + 0xc] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12149169: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1214916A: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1214916B: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1214916C: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(ecx + 0x1C) = 1; /* 0x1214916D: mov dword ptr [ecx + 0x1c], 1 */
    MEM32(ecx + 0x20) = eax; /* 0x12149174: mov dword ptr [ecx + 0x20], eax */
    eax = MEM32(ebp + 0xC); /* 0x12149177: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ecx + 0x24) = eax; /* 0x1214917A: mov dword ptr [ecx + 0x24], eax */
    eax = MEM32(ebp + 0x18); /* 0x1214917D: mov eax, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x12149180: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx) = 0x12011398u; /* 0x12149182: mov dword ptr [ecx], 0x12011398 */
    MEM32(ecx + 0x4) = 0x1201136Cu; /* 0x12149188: mov dword ptr [ecx + 4], 0x1201136c */
    MEM32(ecx + 0x28) = edx; /* 0x1214918F: mov dword ptr [ecx + 0x28], edx */
    MEM32(ecx + 0x2C) = edx; /* 0x12149192: mov dword ptr [ecx + 0x2c], edx */
    MEM32(ecx + 0x30) = 0xAu; /* 0x12149195: mov dword ptr [ecx + 0x30], 0xa */
    MEM32(ecx + 0x34) = edx; /* 0x1214919C: mov dword ptr [ecx + 0x34], edx */
    edi = POP32_VAL(esp); /* 0x1214919F: pop edi */
    MEM32(ecx + 0x38) = eax; /* 0x121491A0: mov dword ptr [ecx + 0x38], eax */
    MEM32(ecx + 0x3C) = edx; /* 0x121491A3: mov dword ptr [ecx + 0x3c], edx */
    MEM32(ecx + 0x40) = edx; /* 0x121491A6: mov dword ptr [ecx + 0x40], edx */
    eax = ecx; /* 0x121491A9: mov eax, ecx */
    esi = POP32_VAL(esp); /* 0x121491AB: pop esi */
    ebp = POP32_VAL(esp); /* 0x121491AC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x121491AD: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_121491C2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121491C2u);

L_121491C2:
    edi = edi; /* 0x121491C2: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121491C4: push ebp */
    ebp = esp; /* 0x121491C5: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x121491C7: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x121491CA: add eax, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x121491CD: push eax */
    RECOMP_CALL(sub_1214F26A); /* 0x121491CE: call 0x1214f26a */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x121491D3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x121491D4: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_121491EB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121491EBu);

L_121491EB:
    edi = edi; /* 0x121491EB: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121491ED: push ebp */
    ebp = esp; /* 0x121491EE: mov ebp, esp */
    PUSH32(esp, MEM32(ecx + 0x20)); /* 0x121491F0: push dword ptr [ecx + 0x20] */
    ecx = MEM32(ebp + 0x8); /* 0x121491F3: mov ecx, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_121489CC); /* 0x121491F6: call 0x121489cc */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x121491FB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x121491FC: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12149204(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12149204u);

    goto L_12149204;
L_12148837:
    /* cmp MEM32(ecx + 0x4), 0 */ /* 0x12148837: cmp dword ptr [ecx + 4], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ecx) = 0x12011294u; /* 0x1214883B: mov dword ptr [ecx], 0x12011294 */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214884C; /* 0x12148841: je 0x1214884c */
L_12148843:
    PUSH32(esp, MEM32(ecx + 0x4)); /* 0x12148843: push dword ptr [ecx + 4] */
    RECOMP_CALL(sub_121BF586); /* 0x12148846: call 0x121bf586 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1214884B: pop ecx */
L_1214884C:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1214884C: ret  */
L_12149204:
    edi = edi; /* 0x12149204: mov edi, edi */
    PUSH32(esp, ebx); /* 0x12149206: push ebx */
    PUSH32(esp, esi); /* 0x12149207: push esi */
    esi = ecx; /* 0x12149208: mov esi, ecx */
    PUSH32(esp, edi); /* 0x1214920A: push edi */
    edi = MEM32(esi + 0x38); /* 0x1214920B: mov edi, dword ptr [esi + 0x38] */
    MEM32(esi) = 0x12011398u; /* 0x1214920E: mov dword ptr [esi], 0x12011398 */
    MEM32(esi + 0x4) = 0x1201136Cu; /* 0x12149214: mov dword ptr [esi + 4], 0x1201136c */
    /* test edi, edi */ /* 0x1214921B: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214922D; /* 0x1214921D: je 0x1214922d */
L_1214921F:
    ecx = edi; /* 0x1214921F: mov ecx, edi */
    RECOMP_CALL(sub_12148D74); /* 0x12149221: call 0x12148d74 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x12149226: push edi */
    RECOMP_CALL(sub_121BF388); /* 0x12149227: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1214922C: pop ecx */
L_1214922D:
    _flag_a = (uint32_t)(MEM32(esi + 0x38)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x38) = MEM32(esi + 0x38) & 0; /* 0x1214922D: and dword ptr [esi + 0x38], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x40), 0 */ /* 0x12149231: cmp dword ptr [esi + 0x40], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x40)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12149244; /* 0x12149235: je 0x12149244 */
L_12149237:
    PUSH32(esp, MEM32(esi + 0x40)); /* 0x12149237: push dword ptr [esi + 0x40] */
    RECOMP_CALL(sub_121BF586); /* 0x1214923A: call 0x121bf586 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0x40)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x40) = MEM32(esi + 0x40) & 0; /* 0x1214923F: and dword ptr [esi + 0x40], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x12149243: pop ecx */
L_12149244:
    ecx = esi + 0x28; /* 0x12149244: lea ecx, [esi + 0x28] */
    RECOMP_CALL(sub_12148D74); /* 0x12149247: call 0x12148d74 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x1214924C: pop edi */
    ecx = esi + 0x4; /* 0x1214924D: lea ecx, [esi + 4] */
    esi = POP32_VAL(esp); /* 0x12149250: pop esi */
    ebx = POP32_VAL(esp); /* 0x12149251: pop ebx */
    RECOMP_BACKEDGE();
    goto L_12148837; /* 0x12149252: jmp 0x12148837 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1214925C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214925Cu);

L_1214925C:
    edi = edi; /* 0x1214925C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1214925E: push ebp */
    ebp = esp; /* 0x1214925F: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x12149261: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x12149264: push ebx */
    PUSH32(esp, esi); /* 0x12149265: push esi */
    ebx = ecx; /* 0x12149266: mov ebx, ecx */
    _flag_a = (uint32_t)(MEM32(ebx + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(ebx + 0x8) = MEM32(ebx + 0x8) & 0; /* 0x12149268: and dword ptr [ebx + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1214926C: push edi */
    MEM32(ebx + 0x4) = 0x12011294u; /* 0x1214926D: mov dword ptr [ebx + 4], 0x12011294 */
    edi = ebx + 0xC; /* 0x12149274: lea edi, [ebx + 0xc] */
    esi = 0x12018324u; /* 0x12149277: mov esi, 0x12018324 */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1214927C: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1214927D: movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = MEM32(ebp + 0x10); /* 0x1214927E: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12149281: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12149282: movsd dword ptr es:[edi], dword ptr [esi] */
    esi = MEM32(ebp + 0xC); /* 0x12149283: mov esi, dword ptr [ebp + 0xc] */
    MEM32(ebx + 0x1C) = 1; /* 0x12149286: mov dword ptr [ebx + 0x1c], 1 */
    MEM32(ebx) = 0x120112ECu; /* 0x1214928D: mov dword ptr [ebx], 0x120112ec */
    MEM32(ebx + 0x4) = 0x120112C0u; /* 0x12149293: mov dword ptr [ebx + 4], 0x120112c0 */
    MEM32(ebx + 0x20) = eax; /* 0x1214929A: mov dword ptr [ebx + 0x20], eax */
    edi = ebx + 0x24; /* 0x1214929D: lea edi, [ebx + 0x24] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121492A0: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121492A1: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121492A2: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x121492A3: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(ebx + 0x34) = ecx; /* 0x121492A4: mov dword ptr [ebx + 0x34], ecx */
    /* test ecx, ecx */ /* 0x121492A7: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121492B1; /* 0x121492A9: je 0x121492b1 */
L_121492AB:
    eax = MEM32(ecx); /* 0x121492AB: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x121492AD: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x121492AE: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_121492B1:
    edi = POP32_VAL(esp); /* 0x121492B1: pop edi */
    esi = POP32_VAL(esp); /* 0x121492B2: pop esi */
    eax = ebx; /* 0x121492B3: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x121492B5: pop ebx */
    ebp = POP32_VAL(esp); /* 0x121492B6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x121492B7: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_121492BF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121492BFu);

L_121492BF:
    edi = edi; /* 0x121492BF: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121492C1: push ebp */
    ebp = esp; /* 0x121492C2: mov ebp, esp */
    PUSH32(esp, esi); /* 0x121492C4: push esi */
    esi = ecx; /* 0x121492C5: mov esi, ecx */
    RECOMP_CALL(sub_12148BD6); /* 0x121492C7: call 0x12148bd6 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x121492CC: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_121492D9; /* 0x121492D0: je 0x121492d9 */
L_121492D2:
    PUSH32(esp, esi); /* 0x121492D2: push esi */
    RECOMP_CALL(sub_121BF388); /* 0x121492D3: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x121492D8: pop ecx */
L_121492D9:
    eax = esi; /* 0x121492D9: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x121492DB: pop esi */
    ebp = POP32_VAL(esp); /* 0x121492DC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x121492DD: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_121492E5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121492E5u);

L_121492E5:
    edi = edi; /* 0x121492E5: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121492E7: push ebp */
    ebp = esp; /* 0x121492E8: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x121492EA: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x121492ED: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x121492EE: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x121492F1: push esi */
    PUSH32(esp, edi); /* 0x121492F2: push edi */
    PUSH32(esp, 4); /* 0x121492F3: push 4 */
    edi = 0x12018324u; /* 0x121492F5: mov edi, 0x12018324 */
    ecx = POP32_VAL(esp); /* 0x121492FA: pop ecx */
    esi = eax; /* 0x121492FB: mov esi, eax */
    /* test ebx, ebx */ /* 0x121492FD: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12149326; /* 0x121492FF: je 0x12149326 */
L_12149301:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x12149301: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x12149303: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_12149316; /* 0x12149305: jne 0x12149316 */
L_12149307:
    ecx = MEM32(ebp + 0x10); /* 0x12149307: mov ecx, dword ptr [ebp + 0x10] */
    eax = ebp + 0x8; /* 0x1214930A: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x1214930D: push eax */
    PUSH32(esp, ebx); /* 0x1214930E: push ebx */
    RECOMP_CALL(sub_121431AB); /* 0x1214930F: call 0x121431ab */
    RECOMP_FLAGS_IN();
    goto L_1214933D; /* 0x12149314: jmp 0x1214933d */
L_12149316:
    ecx = ebp + 0x8; /* 0x12149316: lea ecx, [ebp + 8] */
    PUSH32(esp, ecx); /* 0x12149319: push ecx */
    ecx = MEM32(ebp + 0x10); /* 0x1214931A: mov ecx, dword ptr [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x1214931D: push eax */
    PUSH32(esp, ebx); /* 0x1214931E: push ebx */
    RECOMP_CALL(sub_12148DD3); /* 0x1214931F: call 0x12148dd3 */
    RECOMP_FLAGS_IN();
    goto L_1214933D; /* 0x12149324: jmp 0x1214933d */
L_12149326:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x12149326: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x12149328: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_121493E2; /* 0x1214932A: je 0x121493e2 */
L_12149330:
    ecx = ebp + 0x8; /* 0x12149330: lea ecx, [ebp + 8] */
    PUSH32(esp, ecx); /* 0x12149333: push ecx */
    ecx = MEM32(ebp + 0x10); /* 0x12149334: mov ecx, dword ptr [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x12149337: push eax */
    RECOMP_CALL(sub_12143153); /* 0x12149338: call 0x12143153 */
    RECOMP_FLAGS_IN();
L_1214933D:
    esi = eax; /* 0x1214933D: mov esi, eax */
    /* test esi, esi */ /* 0x1214933F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_12149346; /* 0x12149341: jns 0x12149346 */
L_12149343:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x12149343: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x12149345: inc esi */
    _flag_k = FK_INC;
L_12149346:
    /* cmp esi, 1 */ /* 0x12149346: cmp esi, 1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12149359; /* 0x12149349: jne 0x12149359 */
L_1214934B:
    ecx = MEM32(ebp + 0x14); /* 0x1214934B: mov ecx, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0);
    MEM32(ecx) = MEM32(ecx) & 0; /* 0x1214934E: and dword ptr [ecx], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12149351: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x12149353: inc eax */
    _flag_k = FK_INC;
    goto L_121493E7; /* 0x12149354: jmp 0x121493e7 */
L_12149359:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x12149359: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ebx, ebx */ /* 0x1214935B: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12149394; /* 0x1214935D: je 0x12149394 */
L_1214935F:
    ecx = ebx; /* 0x1214935F: mov ecx, ebx */
    edx = ecx + 0x1; /* 0x12149361: lea edx, [ecx + 1] */
L_12149364:
    SET_LO8(eax, MEM8(ecx)); /* 0x12149364: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x12149366: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x12149367: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12149364; /* 0x12149369: jne 0x12149364 */
L_1214936B:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x1214936B: sub ecx, edx */
    _flag_k = FK_CMP;
    eax = ecx + 0x1; /* 0x1214936D: lea eax, [ecx + 1] */
    PUSH32(esp, eax); /* 0x12149370: push eax */
    MEM32(ebp + 0x10) = eax; /* 0x12149371: mov dword ptr [ebp + 0x10], eax */
    RECOMP_CALL(sub_121BF524); /* 0x12149374: call 0x121bf524 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x12149379: mov edi, eax */
    ecx = POP32_VAL(esp); /* 0x1214937B: pop ecx */
    /* test edi, edi */ /* 0x1214937C: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12149387; /* 0x1214937E: jne 0x12149387 */
L_12149380:
    eax = 0x8007000Eu; /* 0x12149380: mov eax, 0x8007000e */
    goto L_121493E7; /* 0x12149385: jmp 0x121493e7 */
L_12149387:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x12149387: push dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x1214938A: push ebx */
    PUSH32(esp, edi); /* 0x1214938B: push edi */
    RECOMP_CALL(sub_121BF440); /* 0x1214938C: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x12149391: add esp, 0xc */
    _flag_k = FK_ADD;
L_12149394:
    PUSH32(esp, 0x120014BCu); /* 0x12149394: push 0x120014bc */
    PUSH32(esp, 0x38u); /* 0x12149399: push 0x38 */
    RECOMP_CALL(sub_12018970); /* 0x1214939B: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + 0x8); /* 0x121493A0: mov ebx, dword ptr [ebp + 8] */
    ecx = POP32_VAL(esp); /* 0x121493A3: pop ecx */
    ecx = POP32_VAL(esp); /* 0x121493A4: pop ecx */
    /* test eax, eax */ /* 0x121493A5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121493B9; /* 0x121493A7: je 0x121493b9 */
L_121493A9:
    PUSH32(esp, ebx); /* 0x121493A9: push ebx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x121493AA: push dword ptr [ebp + 0xc] */
    ecx = eax; /* 0x121493AD: mov ecx, eax */
    PUSH32(esp, edi); /* 0x121493AF: push edi */
    RECOMP_CALL(sub_1214925C); /* 0x121493B0: call 0x1214925c */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x121493B5: mov ecx, eax */
    goto L_121493BB; /* 0x121493B7: jmp 0x121493bb */
L_121493B9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x121493B9: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_121493BB:
    eax = MEM32(ebp + 0x14); /* 0x121493BB: mov eax, dword ptr [ebp + 0x14] */
    MEM32(eax) = ecx; /* 0x121493BE: mov dword ptr [eax], ecx */
    /* test ecx, ecx */ /* 0x121493C0: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121493D4; /* 0x121493C2: jne 0x121493d4 */
L_121493C4:
    /* test edi, edi */ /* 0x121493C4: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121493CF; /* 0x121493C6: je 0x121493cf */
L_121493C8:
    PUSH32(esp, edi); /* 0x121493C8: push edi */
    RECOMP_CALL(sub_121BF586); /* 0x121493C9: call 0x121bf586 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x121493CE: pop ecx */
L_121493CF:
    esi = 0x8007000Eu; /* 0x121493CF: mov esi, 0x8007000e */
L_121493D4:
    /* test ebx, ebx */ /* 0x121493D4: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121493DE; /* 0x121493D6: je 0x121493de */
L_121493D8:
    eax = MEM32(ebx); /* 0x121493D8: mov eax, dword ptr [ebx] */
    PUSH32(esp, ebx); /* 0x121493DA: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x121493DB: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_121493DE:
    eax = esi; /* 0x121493DE: mov eax, esi */
    goto L_121493E7; /* 0x121493E0: jmp 0x121493e7 */
L_121493E2:
    eax = 0x88760384u; /* 0x121493E2: mov eax, 0x88760384 */
L_121493E7:
    edi = POP32_VAL(esp); /* 0x121493E7: pop edi */
    esi = POP32_VAL(esp); /* 0x121493E8: pop esi */
    ebx = POP32_VAL(esp); /* 0x121493E9: pop ebx */
    ebp = POP32_VAL(esp); /* 0x121493EA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x121493EB: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_121493F3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121493F3u);

L_121493F3:
    edi = edi; /* 0x121493F3: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121493F5: push ebp */
    ebp = esp; /* 0x121493F6: mov ebp, esp */
    PUSH32(esp, esi); /* 0x121493F8: push esi */
    esi = ecx; /* 0x121493F9: mov esi, ecx */
    RECOMP_CALL(sub_12149068); /* 0x121493FB: call 0x12149068 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x12149400: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214940D; /* 0x12149404: je 0x1214940d */
L_12149406:
    PUSH32(esp, esi); /* 0x12149406: push esi */
    RECOMP_CALL(sub_121BF388); /* 0x12149407: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1214940C: pop ecx */
L_1214940D:
    eax = esi; /* 0x1214940D: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1214940F: pop esi */
    ebp = POP32_VAL(esp); /* 0x12149410: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12149411: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12149419(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12149419u);

L_12149419:
    edi = edi; /* 0x12149419: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1214941B: push ebp */
    ebp = esp; /* 0x1214941C: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1214941E: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x24); /* 0x12149421: mov eax, dword ptr [eax + 0x24] */
    /* cmp MEM8(eax + 0x5D), 0 */ /* 0x12149424: cmp byte ptr [eax + 0x5d], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0x5D)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12149434; /* 0x12149428: je 0x12149434 */
L_1214942A:
    eax = 0x88760384u; /* 0x1214942A: mov eax, 0x88760384 */
    goto L_12149503; /* 0x1214942F: jmp 0x12149503 */
L_12149434:
    PUSH32(esp, ebx); /* 0x12149434: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x12149435: mov ebx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x12149438: push esi */
    PUSH32(esp, edi); /* 0x12149439: push edi */
    /* test ebx, ebx */ /* 0x1214943A: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12149443; /* 0x1214943C: je 0x12149443 */
L_1214943E:
    /* cmp MEM8(ebx), 0 */ /* 0x1214943E: cmp byte ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_12149460; /* 0x12149441: jne 0x12149460 */
L_12149443:
    esi = MEM32(ebp + 0x10); /* 0x12149443: mov esi, dword ptr [ebp + 0x10] */
    /* test esi, esi */ /* 0x12149446: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121494FB; /* 0x12149448: je 0x121494fb */
L_1214944E:
    PUSH32(esp, 4); /* 0x1214944E: push 4 */
    ecx = POP32_VAL(esp); /* 0x12149450: pop ecx */
    edi = 0x12018324u; /* 0x12149451: mov edi, 0x12018324 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12149456: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x12149458: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_121494FB; /* 0x1214945A: je 0x121494fb */
L_12149460:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x12149460: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = esi; /* 0x12149462: mov edi, esi */
    /* test ebx, ebx */ /* 0x12149464: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12149496; /* 0x12149466: je 0x12149496 */
L_12149468:
    ecx = ebx; /* 0x12149468: mov ecx, ebx */
    edx = ecx + 0x1; /* 0x1214946A: lea edx, [ecx + 1] */
L_1214946D:
    SET_LO8(eax, MEM8(ecx)); /* 0x1214946D: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1214946F: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x12149470: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214946D; /* 0x12149472: jne 0x1214946d */
L_12149474:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x12149474: sub ecx, edx */
    _flag_k = FK_CMP;
    eax = ecx + 0x1; /* 0x12149476: lea eax, [ecx + 1] */
    PUSH32(esp, eax); /* 0x12149479: push eax */
    MEM32(ebp + 0xC) = eax; /* 0x1214947A: mov dword ptr [ebp + 0xc], eax */
    RECOMP_CALL(sub_121BF524); /* 0x1214947D: call 0x121bf524 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x12149482: mov edi, eax */
    ecx = POP32_VAL(esp); /* 0x12149484: pop ecx */
    /* test edi, edi */ /* 0x12149485: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121494F4; /* 0x12149487: je 0x121494f4 */
L_12149489:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x12149489: push dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x1214948C: push ebx */
    PUSH32(esp, edi); /* 0x1214948D: push edi */
    RECOMP_CALL(sub_121BF440); /* 0x1214948E: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x12149493: add esp, 0xc */
    _flag_k = FK_ADD;
L_12149496:
    PUSH32(esp, 0x120014BCu); /* 0x12149496: push 0x120014bc */
    PUSH32(esp, 0x38u); /* 0x1214949B: push 0x38 */
    RECOMP_CALL(sub_12018970); /* 0x1214949D: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x121494A2: pop ecx */
    ecx = POP32_VAL(esp); /* 0x121494A3: pop ecx */
    ecx = eax; /* 0x121494A4: mov ecx, eax */
    /* test ecx, ecx */ /* 0x121494A6: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121494C0; /* 0x121494A8: je 0x121494c0 */
L_121494AA:
    eax = MEM32(ebp + 0x10); /* 0x121494AA: mov eax, dword ptr [ebp + 0x10] */
    /* test eax, eax */ /* 0x121494AD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121494B6; /* 0x121494AF: jne 0x121494b6 */
L_121494B1:
    eax = 0x12018324u; /* 0x121494B1: mov eax, 0x12018324 */
L_121494B6:
    PUSH32(esp, esi); /* 0x121494B6: push esi */
    PUSH32(esp, eax); /* 0x121494B7: push eax */
    PUSH32(esp, edi); /* 0x121494B8: push edi */
    RECOMP_CALL(sub_1214925C); /* 0x121494B9: call 0x1214925c */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x121494BE: mov esi, eax */
L_121494C0:
    /* test esi, esi */ /* 0x121494C0: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121494D1; /* 0x121494C2: jne 0x121494d1 */
L_121494C4:
    /* test edi, edi */ /* 0x121494C4: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121494F4; /* 0x121494C6: je 0x121494f4 */
L_121494C8:
    PUSH32(esp, edi); /* 0x121494C8: push edi */
    RECOMP_CALL(sub_121BF586); /* 0x121494C9: call 0x121bf586 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x121494CE: pop ecx */
    goto L_121494F4; /* 0x121494CF: jmp 0x121494f4 */
L_121494D1:
    ecx = MEM32(ebp + 0x8); /* 0x121494D1: mov ecx, dword ptr [ebp + 8] */
    eax = esi + 0x4; /* 0x121494D4: lea eax, [esi + 4] */
    MEM32(ebp + 0x10) = eax; /* 0x121494D7: mov dword ptr [ebp + 0x10], eax */
    eax = ebp + 0x10; /* 0x121494DA: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x121494DD: push eax */
    ecx = ecx + 0x28; /* 0x121494DE: lea ecx, [ecx + 0x28] */
    RECOMP_CALL(sub_1214AE6F); /* 0x121494E1: call 0x1214ae6f */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x121494E6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121494EE; /* 0x121494E8: je 0x121494ee */
L_121494EA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x121494EA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_12149500; /* 0x121494EC: jmp 0x12149500 */
L_121494EE:
    eax = MEM32(esi); /* 0x121494EE: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x121494F0: push esi */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x121494F1: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_121494F4:
    eax = 0x8007000Eu; /* 0x121494F4: mov eax, 0x8007000e */
    goto L_12149500; /* 0x121494F9: jmp 0x12149500 */
L_121494FB:
    eax = 0x88760385u; /* 0x121494FB: mov eax, 0x88760385 */
L_12149500:
    edi = POP32_VAL(esp); /* 0x12149500: pop edi */
    esi = POP32_VAL(esp); /* 0x12149501: pop esi */
    ebx = POP32_VAL(esp); /* 0x12149502: pop ebx */
L_12149503:
    ebp = POP32_VAL(esp); /* 0x12149503: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x12149504: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1214950C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214950Cu);

L_1214950C:
    edi = edi; /* 0x1214950C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1214950E: push ebp */
    ebp = esp; /* 0x1214950F: mov ebp, esp */
    PUSH32(esp, esi); /* 0x12149511: push esi */
    esi = ecx; /* 0x12149512: mov esi, ecx */
    RECOMP_CALL(sub_12149204); /* 0x12149514: call 0x12149204 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x12149519: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12149526; /* 0x1214951D: je 0x12149526 */
L_1214951F:
    PUSH32(esp, esi); /* 0x1214951F: push esi */
    RECOMP_CALL(sub_121BF388); /* 0x12149520: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x12149525: pop ecx */
L_12149526:
    eax = esi; /* 0x12149526: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x12149528: pop esi */
    ebp = POP32_VAL(esp); /* 0x12149529: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1214952A: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12149532(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12149532u);

L_12149532:
    edi = edi; /* 0x12149532: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12149534: push ebp */
    ebp = esp; /* 0x12149535: mov ebp, esp */
    PUSH32(esp, esi); /* 0x12149537: push esi */
    esi = MEM32(ebp + 0x18); /* 0x12149538: mov esi, dword ptr [ebp + 0x18] */
    PUSH32(esp, edi); /* 0x1214953B: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1214953C: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x1214953E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12149551; /* 0x12149540: jne 0x12149551 */
L_12149542:
    eax = MEM32(ebp + 0xC); /* 0x12149542: mov eax, dword ptr [ebp + 0xc] */
    /* cmp MEM32(eax + 0x1C), edi */ /* 0x12149545: cmp dword ptr [eax + 0x1c], edi */
    _flag_a = (uint32_t)(MEM32(eax + 0x1C)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12149551; /* 0x12149548: je 0x12149551 */
L_1214954A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1214954A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_121495FE; /* 0x1214954C: jmp 0x121495fe */
L_12149551:
    PUSH32(esp, ebx); /* 0x12149551: push ebx */
    ebx = edi; /* 0x12149552: mov ebx, edi */
    /* cmp MEM32(ebp + 0x10), ebx */ /* 0x12149554: cmp dword ptr [ebp + 0x10], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1214959D; /* 0x12149557: je 0x1214959d */
L_12149559:
    ecx = MEM32(ebp + 0x10); /* 0x12149559: mov ecx, dword ptr [ebp + 0x10] */
    edx = ecx + 0x1; /* 0x1214955C: lea edx, [ecx + 1] */
L_1214955F:
    SET_LO8(eax, MEM8(ecx)); /* 0x1214955F: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x12149561: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x12149562: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214955F; /* 0x12149564: jne 0x1214955f */
L_12149566:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x12149566: sub ecx, edx */
    _flag_k = FK_CMP;
    eax = ecx + 0x1; /* 0x12149568: lea eax, [ecx + 1] */
    PUSH32(esp, eax); /* 0x1214956B: push eax */
    MEM32(ebp + 0x18) = eax; /* 0x1214956C: mov dword ptr [ebp + 0x18], eax */
    RECOMP_CALL(sub_121BF524); /* 0x1214956F: call 0x121bf524 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x12149574: mov ebx, eax */
    ecx = POP32_VAL(esp); /* 0x12149576: pop ecx */
    /* test ebx, ebx */ /* 0x12149577: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214958E; /* 0x12149579: jne 0x1214958e */
L_1214957B:
    /* test esi, esi */ /* 0x1214957B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121495F7; /* 0x1214957D: je 0x121495f7 */
L_1214957F:
    ecx = esi; /* 0x1214957F: mov ecx, esi */
    RECOMP_CALL(sub_12148D74); /* 0x12149581: call 0x12148d74 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x12149586: push esi */
    RECOMP_CALL(sub_121BF388); /* 0x12149587: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    goto L_121495E3; /* 0x1214958C: jmp 0x121495e3 */
L_1214958E:
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1214958E: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x12149591: push dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x12149594: push ebx */
    RECOMP_CALL(sub_121BF440); /* 0x12149595: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1214959A: add esp, 0xc */
    _flag_k = FK_ADD;
L_1214959D:
    PUSH32(esp, 0x120014BCu); /* 0x1214959D: push 0x120014bc */
    PUSH32(esp, 0x44u); /* 0x121495A2: push 0x44 */
    RECOMP_CALL(sub_12018970); /* 0x121495A4: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x121495A9: pop ecx */
    ecx = POP32_VAL(esp); /* 0x121495AA: pop ecx */
    /* test eax, eax */ /* 0x121495AB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121495C3; /* 0x121495AD: je 0x121495c3 */
L_121495AF:
    PUSH32(esp, esi); /* 0x121495AF: push esi */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x121495B0: push dword ptr [ebp + 0x14] */
    ecx = eax; /* 0x121495B3: mov ecx, eax */
    PUSH32(esp, ebx); /* 0x121495B5: push ebx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x121495B6: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x121495B9: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1214914C); /* 0x121495BC: call 0x1214914c */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x121495C1: mov edi, eax */
L_121495C3:
    /* test edi, edi */ /* 0x121495C3: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121495E6; /* 0x121495C5: jne 0x121495e6 */
L_121495C7:
    /* test esi, esi */ /* 0x121495C7: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121495D9; /* 0x121495C9: je 0x121495d9 */
L_121495CB:
    ecx = esi; /* 0x121495CB: mov ecx, esi */
    RECOMP_CALL(sub_12148D74); /* 0x121495CD: call 0x12148d74 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x121495D2: push esi */
    RECOMP_CALL(sub_121BF388); /* 0x121495D3: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x121495D8: pop ecx */
L_121495D9:
    /* test ebx, ebx */ /* 0x121495D9: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121495F7; /* 0x121495DB: je 0x121495f7 */
L_121495DD:
    PUSH32(esp, ebx); /* 0x121495DD: push ebx */
    RECOMP_CALL(sub_121BF586); /* 0x121495DE: call 0x121bf586 */
    RECOMP_FLAGS_IN();
L_121495E3:
    ecx = POP32_VAL(esp); /* 0x121495E3: pop ecx */
    goto L_121495F7; /* 0x121495E4: jmp 0x121495f7 */
L_121495E6:
    ecx = edi; /* 0x121495E6: mov ecx, edi */
    RECOMP_CALL(sub_1214890E); /* 0x121495E8: call 0x1214890e */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x121495ED: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121495FB; /* 0x121495EF: je 0x121495fb */
L_121495F1:
    eax = MEM32(edi); /* 0x121495F1: mov eax, dword ptr [edi] */
    PUSH32(esp, edi); /* 0x121495F3: push edi */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x121495F4: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_121495F7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x121495F7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_121495FD; /* 0x121495F9: jmp 0x121495fd */
L_121495FB:
    eax = edi; /* 0x121495FB: mov eax, edi */
L_121495FD:
    ebx = POP32_VAL(esp); /* 0x121495FD: pop ebx */
L_121495FE:
    edi = POP32_VAL(esp); /* 0x121495FE: pop edi */
    esi = POP32_VAL(esp); /* 0x121495FF: pop esi */
    ebp = POP32_VAL(esp); /* 0x12149600: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x12149601: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_12149609(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12149609u);

L_12149609:
    edi = edi; /* 0x12149609: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1214960B: push ebp */
    ebp = esp; /* 0x1214960C: mov ebp, esp */
    eax = MEM32(ebp + 0x10); /* 0x1214960E: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x12149611: push ebx */
    PUSH32(esp, esi); /* 0x12149612: push esi */
    PUSH32(esp, edi); /* 0x12149613: push edi */
    ebx = ecx; /* 0x12149614: mov ebx, ecx */
    /* test eax, eax */ /* 0x12149616: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214962E; /* 0x12149618: je 0x1214962e */
L_1214961A:
    PUSH32(esp, 4); /* 0x1214961A: push 4 */
    ecx = POP32_VAL(esp); /* 0x1214961C: pop ecx */
    edi = 0x12018324u; /* 0x1214961D: mov edi, 0x12018324 */
    esi = eax; /* 0x12149622: mov esi, eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x12149624: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x12149626: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_1214962E; /* 0x12149628: je 0x1214962e */
L_1214962A:
    edi = eax; /* 0x1214962A: mov edi, eax */
    goto L_12149630; /* 0x1214962C: jmp 0x12149630 */
L_1214962E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1214962E: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_12149630:
    eax = MEM32(ebx + 0x40); /* 0x12149630: mov eax, dword ptr [ebx + 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x12149633: sub eax, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_121496AE; /* 0x12149636: je 0x121496ae */
L_12149638:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x12149638: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_121496FD; /* 0x12149639: jne 0x121496fd */
L_1214963F:
    PUSH32(esp, 0x120110A8u); /* 0x1214963F: push 0x120110a8 */
    PUSH32(esp, ebx); /* 0x12149644: push ebx */
    RECOMP_CALL(sub_12143315); /* 0x12149645: call 0x12143315 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1214964A: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1214964B: pop ecx */
    PUSH32(esp, MEM32(ebx + 0x58)); /* 0x1214964C: push dword ptr [ebx + 0x58] */
    ecx = ebx; /* 0x1214964F: mov ecx, ebx */
    RECOMP_CALL(sub_12143B43); /* 0x12149651: call 0x12143b43 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x12149656: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12149672; /* 0x1214965A: je 0x12149672 */
L_1214965C:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1214965C: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1214965F: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x120113D0u); /* 0x12149662: push 0x120113d0 */
    PUSH32(esp, ebx); /* 0x12149667: push ebx */
    RECOMP_CALL(sub_12143315); /* 0x12149668: call 0x12143315 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1214966D: add esp, 0x10 */
    _flag_k = FK_ADD;
    goto L_12149683; /* 0x12149670: jmp 0x12149683 */
L_12149672:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x12149672: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x120113C8u); /* 0x12149675: push 0x120113c8 */
    PUSH32(esp, ebx); /* 0x1214967A: push ebx */
    RECOMP_CALL(sub_12143315); /* 0x1214967B: call 0x12143315 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x12149680: add esp, 0xc */
    _flag_k = FK_ADD;
L_12149683:
    /* test edi, edi */ /* 0x12149683: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1214969D; /* 0x12149685: je 0x1214969d */
L_12149687:
    eax = MEM32(ebx + 0x58); /* 0x12149687: mov eax, dword ptr [ebx + 0x58] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1214968A: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x1214968B: push eax */
    ecx = ebx; /* 0x1214968C: mov ecx, ebx */
    RECOMP_CALL(sub_12143B43); /* 0x1214968E: call 0x12143b43 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x12149693: push dword ptr [ebp + 0x10] */
    ecx = ebx; /* 0x12149696: mov ecx, ebx */
    RECOMP_CALL(sub_12143BA5); /* 0x12149698: call 0x12143ba5 */
    RECOMP_FLAGS_IN();
L_1214969D:
    eax = MEM32(ebx + 0x58); /* 0x1214969D: mov eax, dword ptr [ebx + 0x58] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x121496A0: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x121496A1: push eax */
    ecx = ebx; /* 0x121496A2: mov ecx, ebx */
    RECOMP_CALL(sub_12143B43); /* 0x121496A4: call 0x12143b43 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebx + 0x58)); _flag_b = (uint32_t)(1);
    MEM32(ebx + 0x58) = MEM32(ebx + 0x58) + 1; /* 0x121496A9: inc dword ptr [ebx + 0x58] */
    _flag_k = FK_INC;
    goto L_121496FD; /* 0x121496AC: jmp 0x121496fd */
L_121496AE:
    ecx = ebx; /* 0x121496AE: mov ecx, ebx */
    RECOMP_CALL(sub_12146E33); /* 0x121496B0: call 0x12146e33 */
    RECOMP_FLAGS_IN();
    ecx = ebx; /* 0x121496B5: mov ecx, ebx */
    RECOMP_CALL(sub_12146DF4); /* 0x121496B7: call 0x12146df4 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x121496BC: push dword ptr [ebp + 8] */
    ecx = ebx; /* 0x121496BF: mov ecx, ebx */
    RECOMP_CALL(sub_1214324E); /* 0x121496C1: call 0x1214324e */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x121496C6: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121496D6; /* 0x121496CA: je 0x121496d6 */
L_121496CC:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x121496CC: push dword ptr [ebp + 0xc] */
    ecx = ebx; /* 0x121496CF: mov ecx, ebx */
    RECOMP_CALL(sub_1214324E); /* 0x121496D1: call 0x1214324e */
    RECOMP_FLAGS_IN();
L_121496D6:
    eax = ebp + 0x8; /* 0x121496D6: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x121496D9: push eax */
    PUSH32(esp, 2); /* 0x121496DA: push 2 */
    eax = ebp + 0xC; /* 0x121496DC: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x121496DF: push eax */
    ecx = ebx + 0x30; /* 0x121496E0: lea ecx, [ebx + 0x30] */
    MEM32(ebp + 0xC) = 0xAu; /* 0x121496E3: mov dword ptr [ebp + 0xc], 0xa */
    RECOMP_CALL(sub_12146502); /* 0x121496EA: call 0x12146502 */
    RECOMP_FLAGS_IN();
    /* test edi, edi */ /* 0x121496EF: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121496FD; /* 0x121496F1: je 0x121496fd */
L_121496F3:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x121496F3: push dword ptr [ebp + 0x10] */
    ecx = ebx; /* 0x121496F6: mov ecx, ebx */
    RECOMP_CALL(sub_121432AE); /* 0x121496F8: call 0x121432ae */
    RECOMP_FLAGS_IN();
L_121496FD:
    edi = POP32_VAL(esp); /* 0x121496FD: pop edi */
    esi = POP32_VAL(esp); /* 0x121496FE: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x121496FF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x12149701: pop ebx */
    ebp = POP32_VAL(esp); /* 0x12149702: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x12149703: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1214970B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1214970Bu);

L_1214970B:
    edi = edi; /* 0x1214970B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1214970D: push ebp */
    ebp = esp; /* 0x1214970E: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x12149710: push ecx */
    PUSH32(esp, ecx); /* 0x12149711: push ecx */
    PUSH32(esp, esi); /* 0x12149712: push esi */
    esi = ecx; /* 0x12149713: mov esi, ecx */
    eax = MEM32(esi + 0x40); /* 0x12149715: mov eax, dword ptr [esi + 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x12149718: sub eax, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_12149746; /* 0x1214971B: je 0x12149746 */
L_1214971D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1214971D: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1214976B; /* 0x1214971E: jne 0x1214976b */
L_12149720:
    eax = MEM32(esi + 0x58); /* 0x12149720: mov eax, dword ptr [esi + 0x58] */
    /* test eax, eax */ /* 0x12149723: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1214972E; /* 0x12149725: jne 0x1214972e */
L_12149727:
    eax = 0x8876038Fu; /* 0x12149727: mov eax, 0x8876038f */
    goto L_1214976D; /* 0x1214972C: jmp 0x1214976d */
L_1214972E:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1214972E: dec eax */
    _flag_k = FK_DEC;
    PUSH32(esp, eax); /* 0x1214972F: push eax */
    MEM32(esi + 0x58) = eax; /* 0x12149730: mov dword ptr [esi + 0x58], eax */
    RECOMP_CALL(sub_12143B43); /* 0x12149733: call 0x12143b43 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x12008810u); /* 0x12149738: push 0x12008810 */
    ecx = esi; /* 0x1214973D: mov ecx, esi */
    RECOMP_CALL(sub_121427C5); /* 0x1214973F: call 0x121427c5 */
    RECOMP_FLAGS_IN();
    goto L_1214976B; /* 0x12149744: jmp 0x1214976b */
L_12149746:
    RECOMP_CALL(sub_12146E33); /* 0x12149746: call 0x12146e33 */
    RECOMP_FLAGS_IN();
    ecx = esi; /* 0x1214974B: mov ecx, esi */
    RECOMP_CALL(sub_12146DF4); /* 0x1214974D: call 0x12146df4 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x8); /* 0x12149752: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x12149755: push eax */
    PUSH32(esp, 2); /* 0x12149756: push 2 */
    eax = ebp + (-0x4); /* 0x12149758: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x1214975B: push eax */
    ecx = esi + 0x30; /* 0x1214975C: lea ecx, [esi + 0x30] */
    MEM32(ebp + (-0x4)) = 0xBu; /* 0x1214975F: mov dword ptr [ebp - 4], 0xb */
    RECOMP_CALL(sub_12146502); /* 0x12149766: call 0x12146502 */
    RECOMP_FLAGS_IN();
L_1214976B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1214976B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1214976D:
    esi = POP32_VAL(esp); /* 0x1214976D: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1214976E: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1214976F: ret  */
    RECOMP_REGS_OUT();
}
