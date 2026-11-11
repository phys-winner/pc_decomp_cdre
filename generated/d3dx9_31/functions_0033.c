#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_17175D54(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17175D54u);

L_17175D54:
    eax = 0x1721BFD7u; /* 0x17175D54: mov eax, 0x1721bfd7 */
    RECOMP_CALL(sub_1721B168); /* 0x17175D59: call 0x1721b168 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x17175D5E: push ecx */
    PUSH32(esp, ebx); /* 0x17175D5F: push ebx */
    PUSH32(esp, esi); /* 0x17175D60: push esi */
    esi = MEM32(ebp + 0x8); /* 0x17175D61: mov esi, dword ptr [ebp + 8] */
    eax = esi + esi * 2; /* 0x17175D64: lea eax, [esi + esi*2] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x17175D67: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x17175D67: shl eax, 2 */
    PUSH32(esp, edi); /* 0x17175D6A: push edi */
    PUSH32(esp, eax); /* 0x17175D6B: push eax */
    ebx = ecx; /* 0x17175D6C: mov ebx, ecx */
    RECOMP_CALL(sub_1721B01C); /* 0x17175D6E: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x17175D73: mov edi, eax */
    ecx = POP32_VAL(esp); /* 0x17175D75: pop ecx */
    MEM32(ebp + (-0x10)) = edi; /* 0x17175D76: mov dword ptr [ebp - 0x10], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x17175D79: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x17175D7D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17175D94; /* 0x17175D7F: je 0x17175d94 */
L_17175D81:
    PUSH32(esp, 0x1706E47Eu); /* 0x17175D81: push 0x1706e47e */
    PUSH32(esp, esi); /* 0x17175D86: push esi */
    PUSH32(esp, 0xCu); /* 0x17175D87: push 0xc */
    PUSH32(esp, edi); /* 0x17175D89: push edi */
    RECOMP_CALL(sub_1702C116); /* 0x17175D8A: call 0x1702c116 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x10)) = edi; /* 0x17175D8F: mov dword ptr [ebp - 0x10], edi */
    goto L_17175D98; /* 0x17175D92: jmp 0x17175d98 */
L_17175D94:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & 0; /* 0x17175D94: and dword ptr [ebp - 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_17175D98:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x17175D98: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x17175D9C: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x10)), ecx */ /* 0x17175D9E: cmp dword ptr [ebp - 0x10], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17175DAA; /* 0x17175DA1: jne 0x17175daa */
L_17175DA3:
    eax = 0x8007000Eu; /* 0x17175DA3: mov eax, 0x8007000e */
    goto L_17175DEB; /* 0x17175DA8: jmp 0x17175deb */
L_17175DAA:
    /* cmp MEM32(ebx), ecx */ /* 0x17175DAA: cmp dword ptr [ebx], ecx */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17175DE1; /* 0x17175DAC: je 0x17175de1 */
L_17175DAE:
    eax = MEM32(ebx + 0x4); /* 0x17175DAE: mov eax, dword ptr [ebx + 4] */
    /* cmp eax, ecx */ /* 0x17175DB1: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_17175DD4; /* 0x17175DB3: jbe 0x17175dd4 */
L_17175DB5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17175DB5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_17175DB7:
    /* cmp ecx, esi */ /* 0x17175DB7: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_17175DD4; /* 0x17175DB9: jae 0x17175dd4 */
L_17175DBB:
    esi = MEM32(ebx); /* 0x17175DBB: mov esi, dword ptr [ebx] */
    edx = MEM32(ebp + (-0x10)); /* 0x17175DBD: mov edx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x17175DC0: add esi, eax */
    _flag_k = FK_ADD;
    edi = eax + edx; /* 0x17175DC2: lea edi, [eax + edx] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17175DC5: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17175DC6: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17175DC7: movsd dword ptr es:[edi], dword ptr [esi] */
    esi = MEM32(ebp + 0x8); /* 0x17175DC8: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x17175DCB: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x17175DCC: add eax, 0xc */
    _flag_k = FK_ADD;
    /* cmp ecx, MEM32(ebx + 0x4) */ /* 0x17175DCF: cmp ecx, dword ptr [ebx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebx + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17175DB7; /* 0x17175DD2: jb 0x17175db7 */
L_17175DD4:
    eax = MEM32(ebx); /* 0x17175DD4: mov eax, dword ptr [ebx] */
    /* test eax, eax */ /* 0x17175DD6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17175DE1; /* 0x17175DD8: je 0x17175de1 */
L_17175DDA:
    PUSH32(esp, eax); /* 0x17175DDA: push eax */
    RECOMP_CALL(sub_1721B010); /* 0x17175DDB: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x17175DE0: pop ecx */
L_17175DE1:
    eax = MEM32(ebp + (-0x10)); /* 0x17175DE1: mov eax, dword ptr [ebp - 0x10] */
    MEM32(ebx) = eax; /* 0x17175DE4: mov dword ptr [ebx], eax */
    MEM32(ebx + 0x8) = esi; /* 0x17175DE6: mov dword ptr [ebx + 8], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17175DE9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_17175DEB:
    ecx = MEM32(ebp + (-0xC)); /* 0x17175DEB: mov ecx, dword ptr [ebp - 0xc] */
    edi = POP32_VAL(esp); /* 0x17175DEE: pop edi */
    esi = POP32_VAL(esp); /* 0x17175DEF: pop esi */
    ebx = POP32_VAL(esp); /* 0x17175DF0: pop ebx */
    MEM32(FS_BASE + (0)) = ecx; /* 0x17175DF1: mov dword ptr fs:[0], ecx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17175DF8: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x17175DF9: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_17175E01(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17175E01u);

L_17175E01:
    eax = 0x1721BFD7u; /* 0x17175E01: mov eax, 0x1721bfd7 */
    RECOMP_CALL(sub_1721B168); /* 0x17175E06: call 0x1721b168 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x17175E0B: push ecx */
    PUSH32(esp, ebx); /* 0x17175E0C: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x17175E0D: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x17175E10: push esi */
    eax = ebx; /* 0x17175E11: mov eax, ebx */
    if (3u) _cf = (((eax) >> 29) & 1u); /* 0x17175E13: shl eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 3u; /* 0x17175E13: shl eax, 3 */
    PUSH32(esp, edi); /* 0x17175E16: push edi */
    PUSH32(esp, eax); /* 0x17175E17: push eax */
    esi = ecx; /* 0x17175E18: mov esi, ecx */
    RECOMP_CALL(sub_1721B01C); /* 0x17175E1A: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x17175E1F: mov edi, eax */
    ecx = POP32_VAL(esp); /* 0x17175E21: pop ecx */
    MEM32(ebp + (-0x10)) = edi; /* 0x17175E22: mov dword ptr [ebp - 0x10], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x17175E25: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x17175E29: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17175E3D; /* 0x17175E2B: je 0x17175e3d */
L_17175E2D:
    PUSH32(esp, 0x1706E47Eu); /* 0x17175E2D: push 0x1706e47e */
    PUSH32(esp, ebx); /* 0x17175E32: push ebx */
    PUSH32(esp, 8); /* 0x17175E33: push 8 */
    PUSH32(esp, edi); /* 0x17175E35: push edi */
    RECOMP_CALL(sub_1702C116); /* 0x17175E36: call 0x1702c116 */
    RECOMP_FLAGS_IN();
    goto L_17175E3F; /* 0x17175E3B: jmp 0x17175e3f */
L_17175E3D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x17175E3D: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_17175E3F:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x17175E3F: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x17175E43: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edi, ecx */ /* 0x17175E45: cmp edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17175E50; /* 0x17175E47: jne 0x17175e50 */
L_17175E49:
    eax = 0x8007000Eu; /* 0x17175E49: mov eax, 0x8007000e */
    goto L_17175E92; /* 0x17175E4E: jmp 0x17175e92 */
L_17175E50:
    /* cmp MEM32(esi), ecx */ /* 0x17175E50: cmp dword ptr [esi], ecx */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17175E88; /* 0x17175E52: je 0x17175e88 */
L_17175E54:
    eax = MEM32(esi + 0x4); /* 0x17175E54: mov eax, dword ptr [esi + 4] */
    /* cmp eax, ecx */ /* 0x17175E57: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_17175E7B; /* 0x17175E59: jbe 0x17175e7b */
L_17175E5B:
    /* cmp ecx, MEM32(ebp + 0x8) */ /* 0x17175E5B: cmp ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_17175E7B; /* 0x17175E5E: jae 0x17175e7b */
L_17175E60:
    edx = MEM32(esi); /* 0x17175E60: mov edx, dword ptr [esi] */
    eax = ecx; /* 0x17175E62: mov eax, ecx */
    if (3u) _cf = (((eax) >> 29) & 1u); /* 0x17175E64: shl eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 3u; /* 0x17175E64: shl eax, 3 */
    ebx = MEM32(eax + edx); /* 0x17175E67: mov ebx, dword ptr [eax + edx] */
    MEM32(eax + edi) = ebx; /* 0x17175E6A: mov dword ptr [eax + edi], ebx */
    edx = MEM32(eax + edx + 0x4); /* 0x17175E6D: mov edx, dword ptr [eax + edx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x17175E71: inc ecx */
    _flag_k = FK_INC;
    MEM32(eax + edi + 0x4) = edx; /* 0x17175E72: mov dword ptr [eax + edi + 4], edx */
    /* cmp ecx, MEM32(esi + 0x4) */ /* 0x17175E76: cmp ecx, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17175E5B; /* 0x17175E79: jb 0x17175e5b */
L_17175E7B:
    eax = MEM32(esi); /* 0x17175E7B: mov eax, dword ptr [esi] */
    /* test eax, eax */ /* 0x17175E7D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17175E88; /* 0x17175E7F: je 0x17175e88 */
L_17175E81:
    PUSH32(esp, eax); /* 0x17175E81: push eax */
    RECOMP_CALL(sub_1721B010); /* 0x17175E82: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x17175E87: pop ecx */
L_17175E88:
    eax = MEM32(ebp + 0x8); /* 0x17175E88: mov eax, dword ptr [ebp + 8] */
    MEM32(esi + 0x8) = eax; /* 0x17175E8B: mov dword ptr [esi + 8], eax */
    MEM32(esi) = edi; /* 0x17175E8E: mov dword ptr [esi], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17175E90: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_17175E92:
    ecx = MEM32(ebp + (-0xC)); /* 0x17175E92: mov ecx, dword ptr [ebp - 0xc] */
    edi = POP32_VAL(esp); /* 0x17175E95: pop edi */
    esi = POP32_VAL(esp); /* 0x17175E96: pop esi */
    ebx = POP32_VAL(esp); /* 0x17175E97: pop ebx */
    MEM32(FS_BASE + (0)) = ecx; /* 0x17175E98: mov dword ptr fs:[0], ecx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17175E9F: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x17175EA0: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_17175EA8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17175EA8u);

L_17175EA8:
    edi = edi; /* 0x17175EA8: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17175EAA: push ebp */
    ebp = esp; /* 0x17175EAB: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x17175EAD: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ecx + 0x24); /* 0x17175EB0: mov ecx, dword ptr [ecx + 0x24] */
    eax = eax + eax * 2; /* 0x17175EB3: lea eax, [eax + eax*2] */
    eax = ecx + eax * 4; /* 0x17175EB6: lea eax, [ecx + eax*4] */
    ebp = POP32_VAL(esp); /* 0x17175EB9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x17175EBA: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_17175EC2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17175EC2u);

L_17175EC2:
    edi = edi; /* 0x17175EC2: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17175EC4: push ebp */
    ebp = esp; /* 0x17175EC5: mov ebp, esp */
    PUSH32(esp, esi); /* 0x17175EC7: push esi */
    esi = ecx; /* 0x17175EC8: mov esi, ecx */
    RECOMP_CALL(sub_171750EF); /* 0x17175ECA: call 0x171750ef */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x17175ECF: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_17175EDC; /* 0x17175ED3: je 0x17175edc */
L_17175ED5:
    PUSH32(esp, esi); /* 0x17175ED5: push esi */
    RECOMP_CALL(sub_1721B010); /* 0x17175ED6: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x17175EDB: pop ecx */
L_17175EDC:
    eax = esi; /* 0x17175EDC: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x17175EDE: pop esi */
    ebp = POP32_VAL(esp); /* 0x17175EDF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x17175EE0: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_17175EE8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17175EE8u);

L_17175EE8:
    edi = edi; /* 0x17175EE8: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17175EEA: push ebp */
    ebp = esp; /* 0x17175EEB: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x17175EED: sub esp, 0x20 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x17175EF0: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x17175EF1: mov ebx, dword ptr [ebp + 0xc] */
    eax = MEM32(ebx); /* 0x17175EF4: mov eax, dword ptr [ebx] */
    PUSH32(esp, esi); /* 0x17175EF6: push esi */
    esi = MEM32(ebp + 0x8); /* 0x17175EF7: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x17175EFA: push edi */
    edi = ebp + (-0x20); /* 0x17175EFB: lea edi, [ebp - 0x20] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17175EFE: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17175EFF: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17175F00: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(ebp + (-0x8)) = ecx; /* 0x17175F01: mov dword ptr [ebp - 8], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x17175F04: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebx; /* 0x17175F06: mov ecx, ebx */
    MEM32(ebp + (-0x4)) = esi; /* 0x17175F08: mov dword ptr [ebp - 4], esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x17175F0B: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + 0xC) = eax; /* 0x17175F0E: mov dword ptr [ebp + 0xc], eax */
    eax = MEM32(ebx); /* 0x17175F11: mov eax, dword ptr [ebx] */
    ecx = ebx; /* 0x17175F13: mov ecx, ebx */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x17175F15: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17175F18: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x8) = esi; /* 0x17175F1A: mov dword ptr [ebp + 8], esi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17175F62; /* 0x17175F1D: je 0x17175f62 */
L_17175F1F:
    /* cmp MEM32(ebp + 0xC), esi */ /* 0x17175F1F: cmp dword ptr [ebp + 0xc], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_17175FA1; /* 0x17175F22: jbe 0x17175fa1 */
L_17175F24:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x17175F24: push dword ptr [ebp + 8] */
    eax = MEM32(ebx); /* 0x17175F27: mov eax, dword ptr [ebx] */
    ecx = ebx; /* 0x17175F29: mov ecx, ebx */
    RECOMP_ICALL(MEM32(eax)); /* 0x17175F2B: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x8)); /* 0x17175F2D: mov ecx, dword ptr [ebp - 8] */
    esi = eax; /* 0x17175F30: mov esi, eax */
    eax = MEM32(ecx); /* 0x17175F32: mov eax, dword ptr [ecx] */
    edi = ebp + (-0x14); /* 0x17175F34: lea edi, [ebp - 0x14] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17175F37: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17175F38: movsd dword ptr es:[edi], dword ptr [esi] */
    edx = ebp + (-0x20); /* 0x17175F39: lea edx, [ebp - 0x20] */
    PUSH32(esp, edx); /* 0x17175F3C: push edx */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17175F3D: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x17175F3E: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17175F41: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17175F4E; /* 0x17175F43: jne 0x17175f4e */
L_17175F45:
    eax = MEM32(ebx); /* 0x17175F45: mov eax, dword ptr [ebx] */
    ecx = ebx; /* 0x17175F47: mov ecx, ebx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x17175F49: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    goto L_17175F55; /* 0x17175F4C: jmp 0x17175f55 */
L_17175F4E:
    MEM32(ebp + (-0x4)) = 1; /* 0x17175F4E: mov dword ptr [ebp - 4], 1 */
L_17175F55:
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + 1; /* 0x17175F55: inc dword ptr [ebp + 8] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + 0x8); /* 0x17175F58: mov eax, dword ptr [ebp + 8] */
    /* cmp eax, MEM32(ebp + 0xC) */ /* 0x17175F5B: cmp eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17175F24; /* 0x17175F5E: jb 0x17175f24 */
L_17175F60:
    goto L_17175FA1; /* 0x17175F60: jmp 0x17175fa1 */
L_17175F62:
    /* cmp MEM32(ebp + 0xC), esi */ /* 0x17175F62: cmp dword ptr [ebp + 0xc], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_17175FA1; /* 0x17175F65: jbe 0x17175fa1 */
L_17175F67:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x17175F67: push dword ptr [ebp + 8] */
    eax = MEM32(ebx); /* 0x17175F6A: mov eax, dword ptr [ebx] */
    ecx = ebx; /* 0x17175F6C: mov ecx, ebx */
    RECOMP_ICALL(MEM32(eax)); /* 0x17175F6E: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x8)); /* 0x17175F70: mov ecx, dword ptr [ebp - 8] */
    esi = eax; /* 0x17175F73: mov esi, eax */
    eax = MEM32(ecx); /* 0x17175F75: mov eax, dword ptr [ecx] */
    edi = ebp + (-0x14); /* 0x17175F77: lea edi, [ebp - 0x14] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17175F7A: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17175F7B: movsd dword ptr es:[edi], dword ptr [esi] */
    edx = ebp + (-0x20); /* 0x17175F7C: lea edx, [ebp - 0x20] */
    PUSH32(esp, edx); /* 0x17175F7F: push edx */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17175F80: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x17175F81: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17175F84: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17175F96; /* 0x17175F86: je 0x17175f96 */
L_17175F88:
    eax = MEM32(ebx); /* 0x17175F88: mov eax, dword ptr [ebx] */
    ecx = ebx; /* 0x17175F8A: mov ecx, ebx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x17175F8C: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 1; /* 0x17175F8F: mov dword ptr [ebp - 4], 1 */
L_17175F96:
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + 1; /* 0x17175F96: inc dword ptr [ebp + 8] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + 0x8); /* 0x17175F99: mov eax, dword ptr [ebp + 8] */
    /* cmp eax, MEM32(ebp + 0xC) */ /* 0x17175F9C: cmp eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17175F67; /* 0x17175F9F: jb 0x17175f67 */
L_17175FA1:
    eax = MEM32(ebp + (-0x4)); /* 0x17175FA1: mov eax, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x17175FA4: pop edi */
    esi = POP32_VAL(esp); /* 0x17175FA5: pop esi */
    ebx = POP32_VAL(esp); /* 0x17175FA6: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17175FA7: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x17175FA8: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_17175FB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17175FB0u);

L_17175FB0:
    edi = edi; /* 0x17175FB0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17175FB2: push ebp */
    ebp = esp; /* 0x17175FB3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xBCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xBCu; /* 0x17175FB5: sub esp, 0xbc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x17175FBB: push ebx */
    PUSH32(esp, esi); /* 0x17175FBC: push esi */
    esi = MEM32(ebp + 0xC); /* 0x17175FBD: mov esi, dword ptr [ebp + 0xc] */
    eax = MEM32(esi); /* 0x17175FC0: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x17175FC2: push edi */
    ebx = ecx; /* 0x17175FC3: mov ebx, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x17175FC5: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi; /* 0x17175FC7: mov ecx, esi */
    MEM32(ebp + (-0x10)) = edi; /* 0x17175FC9: mov dword ptr [ebp - 0x10], edi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x17175FCC: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x70)) = eax; /* 0x17175FCF: mov dword ptr [ebp - 0x70], eax */
    eax = MEM32(esi); /* 0x17175FD2: mov eax, dword ptr [esi] */
    ecx = esi; /* 0x17175FD4: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x17175FD6: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebx + 0x104); /* 0x17175FD9: mov edx, dword ptr [ebx + 0x104] */
    MEM32(ebp + (-0x74)) = eax; /* 0x17175FDF: mov dword ptr [ebp - 0x74], eax */
    eax = MEM32(ebx + 0xFC); /* 0x17175FE2: mov eax, dword ptr [ebx + 0xfc] */
    MEM32(ebp + (-0x78)) = eax; /* 0x17175FE8: mov dword ptr [ebp - 0x78], eax */
    eax = MEM32(edx + 0x1C); /* 0x17175FEB: mov eax, dword ptr [edx + 0x1c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x17175FEE: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1FFFFFFFu);
    eax = eax & 0x1FFFFFFFu; /* 0x17175FF0: and eax, 0x1fffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = eax; /* 0x17175FF5: mov dword ptr [ebp - 0x14], eax */
    eax = MEM32(ebx + 0x98); /* 0x17175FF8: mov eax, dword ptr [ebx + 0x98] */
    MEM32(ebx + 0xCC) = edi; /* 0x17175FFE: mov dword ptr [ebx + 0xcc], edi */
    MEM32(ebx + 0xDC) = edi; /* 0x17176004: mov dword ptr [ebx + 0xdc], edi */
    MEM32(ebp + (-0x60)) = eax; /* 0x1717600A: mov dword ptr [ebp - 0x60], eax */
    eax = MEM32(ebx + 0x9C); /* 0x1717600D: mov eax, dword ptr [ebx + 0x9c] */
    MEM32(ebp + (-0x58)) = eax; /* 0x17176013: mov dword ptr [ebp - 0x58], eax */
    eax = MEM32(ebp + 0x8); /* 0x17176016: mov eax, dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(eax)); /* 0x17176019: fld dword ptr [eax] */
    MEM32(ebp + (-0x5C)) = edi; /* 0x1717601B: mov dword ptr [ebp - 0x5c], edi */
    _st[0] -= (double)*(float*)ADDR(ebx + 0x6C); /* 0x1717601E: fsub dword ptr [ebx + 0x6c] */
    esi = ebp + (-0x20); /* 0x17176021: lea esi, [ebp - 0x20] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x17176024: fld dword ptr [eax + 4] */
    edi = ebp + (-0x50); /* 0x17176027: lea edi, [ebp - 0x50] */
    _st[0] -= (double)*(float*)ADDR(ebx + 0x70); /* 0x1717602A: fsub dword ptr [ebx + 0x70] */
    MEM32(ebp + (-0x64)) = edx; /* 0x1717602D: mov dword ptr [ebp - 0x64], edx */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x88)) = _v; } /* 0x17176030: fstp dword ptr [ebp - 0x88] */
    fp_push(*(float*)&MEM32(eax + 0x8)); /* 0x17176036: fld dword ptr [eax + 8] */
    _st[0] -= (double)*(float*)ADDR(ebx + 0x74); /* 0x17176039: fsub dword ptr [ebx + 0x74] */
    fp_push(*(float*)&MEM32(ebx + 0x90)); /* 0x1717603C: fld dword ptr [ebx + 0x90] */
    fp_push(_st[2]); /* 0x17176042: fld st(2) */
    _st[0] *= _st[1]; /* 0x17176044: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x17176046: fstp dword ptr [ebp - 0x20] */
    fp_push(*(float*)&MEM32(ebp + (-0x88))); /* 0x17176049: fld dword ptr [ebp - 0x88] */
    _st[0] *= _st[1]; /* 0x1717604F: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x17176051: fstp dword ptr [ebp - 0x1c] */
    fp_push(_st[1]); /* 0x17176054: fld st(1) */
    _st[0] *= _st[1]; /* 0x17176056: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x17176058: fstp dword ptr [ebp - 0x18] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1717605B: movsd dword ptr es:[edi], dword ptr [esi] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1717605C: fstp st(0) */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1717605E: movsd dword ptr es:[edi], dword ptr [esi] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1717605F: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17176061: fstp st(0) */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17176063: movsd dword ptr es:[edi], dword ptr [esi] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17176166; /* 0x17176064: jbe 0x17176166 */
L_1717606A:
    goto L_1717606F; /* 0x1717606A: jmp 0x1717606f */
L_1717606C:
    edx = MEM32(ebp + (-0x64)); /* 0x1717606C: mov edx, dword ptr [ebp - 0x64] */
L_1717606F:
    eax = ecx; /* 0x1717606F: mov eax, ecx */
    if (5u) _cf = (((eax) >> 27) & 1u); /* 0x17176071: shl eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack((eax << 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 5u; /* 0x17176071: shl eax, 5 */
    esi = eax + edx; /* 0x17176074: lea esi, [eax + edx] */
    eax = MEM32(esi + 0x1C); /* 0x17176077: mov eax, dword ptr [esi + 0x1c] */
    fp_push(*(float*)&MEM32(esi)); /* 0x1717607A: fld dword ptr [esi] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + (-0x50))); /* 0x1717607C: fcomp dword ptr [ebp - 0x50] */
    fp_pop();
    edx = eax; /* 0x1717607F: mov edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x1FFFFFFFu);
    edx = edx & 0x1FFFFFFFu; /* 0x17176081: and edx, 0x1fffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, 0xE0000000u */ /* 0x17176087: test eax, 0xe0000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xE0000000u);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1717608C: fnstsw ax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171760FC; /* 0x1717608E: je 0x171760fc */
L_17176090:
    /* test HI8(eax), 0x41u */ /* 0x17176090: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_17176145; /* 0x17176093: jp 0x17176145 */
L_17176099:
    fp_push(*(float*)&MEM32(esi + 0xC)); /* 0x17176099: fld dword ptr [esi + 0xc] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + (-0x50))); /* 0x1717609C: fcomp dword ptr [ebp - 0x50] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1717609F: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x171760A1: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17176145; /* 0x171760A4: jne 0x17176145 */
L_171760AA:
    fp_push(*(float*)&MEM32(esi + 0x4)); /* 0x171760AA: fld dword ptr [esi + 4] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + (-0x4C))); /* 0x171760AD: fcomp dword ptr [ebp - 0x4c] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171760B0: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x171760B2: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_17176145; /* 0x171760B5: jp 0x17176145 */
L_171760BB:
    fp_push(*(float*)&MEM32(esi + 0x10)); /* 0x171760BB: fld dword ptr [esi + 0x10] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + (-0x4C))); /* 0x171760BE: fcomp dword ptr [ebp - 0x4c] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171760C1: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x171760C3: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17176145; /* 0x171760C6: jne 0x17176145 */
L_171760C8:
    fp_push(*(float*)&MEM32(esi + 0x8)); /* 0x171760C8: fld dword ptr [esi + 8] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + (-0x48))); /* 0x171760CB: fcomp dword ptr [ebp - 0x48] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171760CE: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x171760D0: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_17176145; /* 0x171760D3: jp 0x17176145 */
L_171760D5:
    fp_push(*(float*)&MEM32(esi + 0x14)); /* 0x171760D5: fld dword ptr [esi + 0x14] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + (-0x48))); /* 0x171760D8: fcomp dword ptr [ebp - 0x48] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171760DB: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x171760DD: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17176145; /* 0x171760E0: jne 0x17176145 */
L_171760E2:
    edi = ecx + 0x1; /* 0x171760E2: lea edi, [ecx + 1] */
    /* cmp edx, edi */ /* 0x171760E5: cmp edx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17176145; /* 0x171760E7: je 0x17176145 */
L_171760E9:
    PUSH32(esp, ecx); /* 0x171760E9: push ecx */
    ecx = ebx + 0xD8; /* 0x171760EA: lea ecx, [ebx + 0xd8] */
    RECOMP_CALL(sub_17175CCD); /* 0x171760F0: call 0x17175ccd */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x5C))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x5C)) = MEM32(ebp + (-0x5C)) + 1; /* 0x171760F5: inc dword ptr [ebp - 0x5c] */
    _flag_k = FK_INC;
    ecx = edi; /* 0x171760F8: mov ecx, edi */
    goto L_1717615D; /* 0x171760FA: jmp 0x1717615d */
L_171760FC:
    /* test HI8(eax), 0x41u */ /* 0x171760FC: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_17176145; /* 0x171760FF: jp 0x17176145 */
L_17176101:
    fp_push(*(float*)&MEM32(esi + 0xC)); /* 0x17176101: fld dword ptr [esi + 0xc] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + (-0x50))); /* 0x17176104: fcomp dword ptr [ebp - 0x50] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17176107: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x17176109: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17176145; /* 0x1717610C: jne 0x17176145 */
L_1717610E:
    fp_push(*(float*)&MEM32(esi + 0x4)); /* 0x1717610E: fld dword ptr [esi + 4] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + (-0x4C))); /* 0x17176111: fcomp dword ptr [ebp - 0x4c] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17176114: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x17176116: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_17176145; /* 0x17176119: jp 0x17176145 */
L_1717611B:
    fp_push(*(float*)&MEM32(esi + 0x10)); /* 0x1717611B: fld dword ptr [esi + 0x10] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + (-0x4C))); /* 0x1717611E: fcomp dword ptr [ebp - 0x4c] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17176121: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x17176123: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17176145; /* 0x17176126: jne 0x17176145 */
L_17176128:
    fp_push(*(float*)&MEM32(esi + 0x8)); /* 0x17176128: fld dword ptr [esi + 8] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + (-0x48))); /* 0x1717612B: fcomp dword ptr [ebp - 0x48] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1717612E: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x17176130: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_17176145; /* 0x17176133: jp 0x17176145 */
L_17176135:
    fp_push(*(float*)&MEM32(esi + 0x14)); /* 0x17176135: fld dword ptr [esi + 0x14] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + (-0x48))); /* 0x17176138: fcomp dword ptr [ebp - 0x48] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1717613B: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x1717613D: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17176145; /* 0x17176140: jne 0x17176145 */
L_17176142:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x17176142: inc ecx */
    _flag_k = FK_INC;
    goto L_1717615D; /* 0x17176143: jmp 0x1717615d */
L_17176145:
    PUSH32(esp, ecx); /* 0x17176145: push ecx */
    ecx = ebx + 0xC8; /* 0x17176146: lea ecx, [ebx + 0xc8] */
    RECOMP_CALL(sub_17175CCD); /* 0x1717614C: call 0x17175ccd */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x1C); /* 0x17176151: mov ecx, dword ptr [esi + 0x1c] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) + 1; /* 0x17176154: inc dword ptr [ebp - 0x10] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1FFFFFFFu);
    ecx = ecx & 0x1FFFFFFFu; /* 0x17176157: and ecx, 0x1fffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1717615D:
    /* cmp ecx, MEM32(ebp + (-0x14)) */ /* 0x1717615D: cmp ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x14)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1717606C; /* 0x17176160: jb 0x1717606c */
L_17176166:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17176166: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x70)), eax */ /* 0x17176168: cmp dword ptr [ebp - 0x70], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x70))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x14)) = eax; /* 0x1717616B: mov dword ptr [ebp - 0x14], eax */
    MEM32(ebp + (-0x54)) = eax; /* 0x1717616E: mov dword ptr [ebp - 0x54], eax */
    if (CMP_BE(_flag_a, _flag_b)) goto L_1717637F; /* 0x17176171: jbe 0x1717637f */
L_17176177:
    ecx = MEM32(ebp + 0xC); /* 0x17176177: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + (-0x54))); /* 0x1717617A: push dword ptr [ebp - 0x54] */
    eax = MEM32(ecx); /* 0x1717617D: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax)); /* 0x1717617F: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    fp_push(1.0); /* 0x17176181: fld1  */
    esi = eax; /* 0x17176183: mov esi, eax */
    edi = ebp + (-0x44); /* 0x17176185: lea edi, [ebp - 0x44] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17176188: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17176189: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1717618A: movsd dword ptr es:[edi], dword ptr [esi] */
    _st[0] /= (double)*(float*)ADDR(ebp + (-0x44)); /* 0x1717618B: fdiv dword ptr [ebp - 0x44] */
    esi = ebp + (-0xA4); /* 0x1717618E: lea esi, [ebp - 0xa4] */
    edi = ebp + (-0x38); /* 0x17176194: lea edi, [ebp - 0x38] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x17176197: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xA4)) = _v; } /* 0x17176199: fstp dword ptr [ebp - 0xa4] */
    fp_push(1.0); /* 0x1717619F: fld1  */
    _st[0] /= (double)*(float*)ADDR(ebp + (-0x40)); /* 0x171761A1: fdiv dword ptr [ebp - 0x40] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xA0)) = _v; } /* 0x171761A4: fstp dword ptr [ebp - 0xa0] */
    fp_push(1.0); /* 0x171761AA: fld1  */
    _st[0] /= (double)*(float*)ADDR(ebp + (-0x3C)); /* 0x171761AC: fdiv dword ptr [ebp - 0x3c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x9C)) = _v; } /* 0x171761AF: fstp dword ptr [ebp - 0x9c] */
    fp_push(*(float*)&MEM32(0x17001430)); /* 0x171761B5: fld dword ptr [0x17001430] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171761BB: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171761BC: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171761BD: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_push(*(float*)&MEM32(ebp + (-0x44))); /* 0x171761BE: fld dword ptr [ebp - 0x44] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171761C1: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171761C3: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x171761C5: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171761D0; /* 0x171761C8: jne 0x171761d0 */
L_171761CA:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(ecx);
    MEM32(ebp + (-0x2C)) = MEM32(ebp + (-0x2C)) & ecx; /* 0x171761CA: and dword ptr [ebp - 0x2c], ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171761CD: inc ecx */
    _flag_k = FK_INC;
    goto L_171761D4; /* 0x171761CE: jmp 0x171761d4 */
L_171761D0:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171761D0: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x2C)) = ecx; /* 0x171761D1: mov dword ptr [ebp - 0x2c], ecx */
L_171761D4:
    fp_push(*(float*)&MEM32(ebp + (-0x40))); /* 0x171761D4: fld dword ptr [ebp - 0x40] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171761D7: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171761D9: fcomp st(1) */
    fp_pop();
    MEM32(ebp + (-0x28)) = edi; /* 0x171761DB: mov dword ptr [ebp - 0x28], edi */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171761DE: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x171761E0: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171761E8; /* 0x171761E3: je 0x171761e8 */
L_171761E5:
    MEM32(ebp + (-0x28)) = ecx; /* 0x171761E5: mov dword ptr [ebp - 0x28], ecx */
L_171761E8:
    fp_push(*(float*)&MEM32(ebp + (-0x3C))); /* 0x171761E8: fld dword ptr [ebp - 0x3c] */
    MEM32(ebp + (-0x24)) = edi; /* 0x171761EB: mov dword ptr [ebp - 0x24], edi */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171761EE: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171761F0: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x171761F2: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171761FA; /* 0x171761F5: je 0x171761fa */
L_171761F7:
    MEM32(ebp + (-0x24)) = ecx; /* 0x171761F7: mov dword ptr [ebp - 0x24], ecx */
L_171761FA:
    /* cmp MEM32(ebp + (-0x5C)), edi */ /* 0x171761FA: cmp dword ptr [ebp - 0x5c], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x5C))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    fp_push(*(float*)&MEM32(0x17021EC8)); /* 0x171761FD: fld dword ptr [0x17021ec8] */
    MEM32(ebp + (-0x6C)) = edi; /* 0x17176203: mov dword ptr [ebp - 0x6c], edi */
    MEM32(ebp + (-0xC)) = edi; /* 0x17176206: mov dword ptr [ebp - 0xc], edi */
    if (CMP_BE(_flag_a, _flag_b)) goto L_171763B1; /* 0x17176209: jbe 0x171763b1 */
L_1717620F:
    eax = MEM32(ebx + 0xD8); /* 0x1717620F: mov eax, dword ptr [ebx + 0xd8] */
    MEM32(ebp + (-0x4)) = eax; /* 0x17176215: mov dword ptr [ebp - 4], eax */
L_17176218:
    eax = MEM32(ebp + (-0x4)); /* 0x17176218: mov eax, dword ptr [ebp - 4] */
    eax = MEM32(eax); /* 0x1717621B: mov eax, dword ptr [eax] */
    ecx = MEM32(ebp + (-0x64)); /* 0x1717621D: mov ecx, dword ptr [ebp - 0x64] */
    if (5u) _cf = (((eax) >> 27) & 1u); /* 0x17176220: shl eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack((eax << 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 5u; /* 0x17176220: shl eax, 5 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x17176223: add eax, ecx */
    _flag_k = FK_ADD;
    ecx = MEM32(eax + 0x1C); /* 0x17176225: mov ecx, dword ptr [eax + 0x1c] */
    if (29u) _cf = (((ecx) >> 28) & 1u); /* 0x17176228: shr ecx, 0x1d */
    if (29u) { _flag_a = recomp_flags_pack((ecx >> 29u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 29u; /* 0x17176228: shr ecx, 0x1d */
    MEM32(ebp + 0x8) = edi; /* 0x1717622B: mov dword ptr [ebp + 8], edi */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_1717639E; /* 0x1717622E: je 0x1717639e */
L_17176234:
    eax = MEM32(eax + 0x18); /* 0x17176234: mov eax, dword ptr [eax + 0x18] */
    edx = MEM32(ebp + (-0x78)); /* 0x17176237: mov edx, dword ptr [ebp - 0x78] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x34u); /* 0x1717623A: imul eax, eax, 0x34 */
    edx = eax + edx + 0x8; /* 0x1717623D: lea edx, [eax + edx + 8] */
L_17176241:
    fp_push(*(float*)&MEM32(ebp + (-0x48))); /* 0x17176241: fld dword ptr [ebp - 0x48] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x4); /* 0x17176244: fmul dword ptr [edx + 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x50))); /* 0x17176247: fld dword ptr [ebp - 0x50] */
    _st[0] *= (double)*(float*)ADDR(edx + (-0x4)); /* 0x1717624A: fmul dword ptr [edx - 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1717624D: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x4C))); /* 0x1717624F: fld dword ptr [ebp - 0x4c] */
    _st[0] *= (double)*(float*)ADDR(edx); /* 0x17176252: fmul dword ptr [edx] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17176254: faddp st(1) */
    _st[0] += (double)*(float*)ADDR(edx + 0x8); /* 0x17176256: fadd dword ptr [edx + 8] */
    _st[0] = -_st[0]; /* 0x17176259: fchs  */
    fp_push(*(float*)&MEM32(ebp + (-0x3C))); /* 0x1717625B: fld dword ptr [ebp - 0x3c] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x4); /* 0x1717625E: fmul dword ptr [edx + 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x44))); /* 0x17176261: fld dword ptr [ebp - 0x44] */
    _st[0] *= (double)*(float*)ADDR(edx + (-0x4)); /* 0x17176264: fmul dword ptr [edx - 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17176267: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x40))); /* 0x17176269: fld dword ptr [ebp - 0x40] */
    _st[0] *= (double)*(float*)ADDR(edx); /* 0x1717626C: fmul dword ptr [edx] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1717626E: faddp st(1) */
    { double _v = fp_pop(); _st[0] = _v == 0.0 ? _st[0] : _st[0] / _v; } /* 0x17176270: fdivp st(1) */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + (-0x60))); /* 0x17176272: fcom dword ptr [ebp - 0x60] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17176275: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x17176277: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1717638B; /* 0x1717627A: jne 0x1717638b */
L_17176280:
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + (-0x58))); /* 0x17176280: fcom dword ptr [ebp - 0x58] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17176283: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x17176285: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1717638B; /* 0x17176288: jp 0x1717638b */
L_1717628E:
    fp_push(*(float*)&MEM32(ebp + (-0x44))); /* 0x1717628E: fld dword ptr [ebp - 0x44] */
    esi = ebp + (-0xBC); /* 0x17176291: lea esi, [ebp - 0xbc] */
    _st[0] *= _st[1]; /* 0x17176297: fmul st(1) */
    edi = ebp + (-0x20); /* 0x17176299: lea edi, [ebp - 0x20] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x98)) = _v; } /* 0x1717629C: fstp dword ptr [ebp - 0x98] */
    fp_push(*(float*)&MEM32(ebp + (-0x40))); /* 0x171762A2: fld dword ptr [ebp - 0x40] */
    _st[0] *= _st[1]; /* 0x171762A5: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x94)) = _v; } /* 0x171762A7: fstp dword ptr [ebp - 0x94] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x3C)); /* 0x171762AD: fmul dword ptr [ebp - 0x3c] */
    fp_push(*(float*)&MEM32(ebp + (-0x98))); /* 0x171762B0: fld dword ptr [ebp - 0x98] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x50)); /* 0x171762B6: fadd dword ptr [ebp - 0x50] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xBC)) = _v; } /* 0x171762B9: fstp dword ptr [ebp - 0xbc] */
    fp_push(*(float*)&MEM32(ebp + (-0x94))); /* 0x171762BF: fld dword ptr [ebp - 0x94] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x4C)); /* 0x171762C5: fadd dword ptr [ebp - 0x4c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xB8)) = _v; } /* 0x171762C8: fstp dword ptr [ebp - 0xb8] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x48)); /* 0x171762CE: fadd dword ptr [ebp - 0x48] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xB4)) = _v; } /* 0x171762D1: fstp dword ptr [ebp - 0xb4] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171762D7: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171762D8: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171762D9: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_push(*(float*)&MEM32(ebp + (-0x1C))); /* 0x171762DA: fld dword ptr [ebp - 0x1c] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x10); /* 0x171762DD: fmul dword ptr [edx + 0x10] */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x171762E0: fld dword ptr [ebp - 0x18] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x14); /* 0x171762E3: fmul dword ptr [edx + 0x14] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x171762E6: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x20))); /* 0x171762E8: fld dword ptr [ebp - 0x20] */
    _st[0] *= (double)*(float*)ADDR(edx + 0xC); /* 0x171762EB: fmul dword ptr [edx + 0xc] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x171762EE: faddp st(1) */
    _st[0] += (double)*(float*)ADDR(edx + 0x18); /* 0x171762F0: fadd dword ptr [edx + 0x18] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(0x17021ECC)); /* 0x171762F3: fcom dword ptr [0x17021ecc] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171762F9: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x171762FB: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_1717638B; /* 0x171762FE: jnp 0x1717638b */
L_17176304:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x17176304: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17176306: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x17176308: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1717638B; /* 0x1717630B: je 0x1717638b */
L_1717630D:
    fp_push(*(float*)&MEM32(ebp + (-0x1C))); /* 0x1717630D: fld dword ptr [ebp - 0x1c] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x20); /* 0x17176310: fmul dword ptr [edx + 0x20] */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x17176313: fld dword ptr [ebp - 0x18] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x24); /* 0x17176316: fmul dword ptr [edx + 0x24] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17176319: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x20))); /* 0x1717631B: fld dword ptr [ebp - 0x20] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x1C); /* 0x1717631E: fmul dword ptr [edx + 0x1c] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17176321: faddp st(1) */
    _st[0] += (double)*(float*)ADDR(edx + 0x28); /* 0x17176323: fadd dword ptr [edx + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(0x17021ECC)); /* 0x17176326: fcom dword ptr [0x17021ecc] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1717632C: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1717632E: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_17176389; /* 0x17176331: jnp 0x17176389 */
L_17176333:
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x17176333: fcom st(2) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17176335: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x17176337: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_17176389; /* 0x1717633A: je 0x17176389 */
L_1717633C:
    fp_push(_st[1]); /* 0x1717633C: fld st(1) */
    _st[0] += _st[1]; /* 0x1717633E: fadd st(1) */
    _fpu_cmp = FPU_CMP(_st[0], _st[3]); /* 0x17176340: fcomp st(3) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17176342: fnstsw ax */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17176344: fstp st(0) */
    /* test HI8(eax), 0x41u */ /* 0x17176346: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17176349: fstp st(0) */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1717638D; /* 0x1717634B: je 0x1717638d */
L_1717634D:
    /* cmp MEM32(ebp + (-0x74)), 0 */ /* 0x1717634D: cmp dword ptr [ebp - 0x74], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x74))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17176351: fstp st(0) */
    MEM32(ebp + (-0x6C)) = 1; /* 0x17176353: mov dword ptr [ebp - 0x6c], 1 */
    if (CMP_NE(_flag_a, _flag_b)) goto L_17176364; /* 0x1717635A: jne 0x17176364 */
L_1717635C:
    ecx = MEM32(ebp + 0xC); /* 0x1717635C: mov ecx, dword ptr [ebp + 0xc] */
    eax = MEM32(ecx); /* 0x1717635F: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x17176361: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_17176364:
    /* cmp MEM32(ebp + (-0x14)), 0 */ /* 0x17176364: cmp dword ptr [ebp - 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17176370; /* 0x17176368: jne 0x17176370 */
L_1717636A:
    eax = MEM32(ebp + (-0x6C)); /* 0x1717636A: mov eax, dword ptr [ebp - 0x6c] */
    MEM32(ebp + (-0x14)) = eax; /* 0x1717636D: mov dword ptr [ebp - 0x14], eax */
L_17176370:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x54))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x54)) = MEM32(ebp + (-0x54)) + 1; /* 0x17176370: inc dword ptr [ebp - 0x54] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + (-0x54)); /* 0x17176373: mov eax, dword ptr [ebp - 0x54] */
    /* cmp eax, MEM32(ebp + (-0x70)) */ /* 0x17176376: cmp eax, dword ptr [ebp - 0x70] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x70)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17176177; /* 0x17176379: jb 0x17176177 */
L_1717637F:
    eax = MEM32(ebp + (-0x14)); /* 0x1717637F: mov eax, dword ptr [ebp - 0x14] */
    edi = POP32_VAL(esp); /* 0x17176382: pop edi */
    esi = POP32_VAL(esp); /* 0x17176383: pop esi */
    ebx = POP32_VAL(esp); /* 0x17176384: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17176385: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x17176386: ret 8 */
L_17176389:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17176389: fstp st(0) */
L_1717638B:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1717638B: fstp st(0) */
L_1717638D:
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + 1; /* 0x1717638D: inc dword ptr [ebp + 8] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x34u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x34u; /* 0x17176390: add edx, 0x34 */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + 0x8), ecx */ /* 0x17176393: cmp dword ptr [ebp + 8], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17176241; /* 0x17176396: jb 0x17176241 */
L_1717639C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1717639C: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1717639E:
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) + 1; /* 0x1717639E: inc dword ptr [ebp - 0xc] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + (-0xC)); /* 0x171763A1: mov eax, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 4; /* 0x171763A4: add dword ptr [ebp - 4], 4 */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(ebp + (-0x5C)) */ /* 0x171763A8: cmp eax, dword ptr [ebp - 0x5c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x5C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17176218; /* 0x171763AB: jb 0x17176218 */
L_171763B1:
    /* cmp MEM32(ebp + (-0x10)), edi */ /* 0x171763B1: cmp dword ptr [ebp - 0x10], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0xC)) = edi; /* 0x171763B4: mov dword ptr [ebp - 0xc], edi */
    if (CMP_BE(_flag_a, _flag_b)) goto L_17176677; /* 0x171763B7: jbe 0x17176677 */
L_171763BD:
    eax = MEM32(ebx + 0xC8); /* 0x171763BD: mov eax, dword ptr [ebx + 0xc8] */
    MEM32(ebp + (-0x68)) = eax; /* 0x171763C3: mov dword ptr [ebp - 0x68], eax */
L_171763C6:
    eax = MEM32(ebp + (-0x68)); /* 0x171763C6: mov eax, dword ptr [ebp - 0x68] */
    edx = MEM32(eax); /* 0x171763C9: mov edx, dword ptr [eax] */
    ecx = MEM32(ebp + (-0x64)); /* 0x171763CB: mov ecx, dword ptr [ebp - 0x64] */
    eax = edx; /* 0x171763CE: mov eax, edx */
    if (5u) _cf = (((eax) >> 27) & 1u); /* 0x171763D0: shl eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack((eax << 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 5u; /* 0x171763D0: shl eax, 5 */
    esi = MEM32(eax + ecx + 0x1C); /* 0x171763D3: mov esi, dword ptr [eax + ecx + 0x1c] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x1FFFFFFFu);
    esi = esi & 0x1FFFFFFFu; /* 0x171763D7: and esi, 0x1fffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, esi */ /* 0x171763DD: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x80)) = esi; /* 0x171763DF: mov dword ptr [ebp - 0x80], esi */
    if (CMP_AE(_flag_a, _flag_b)) goto L_17176664; /* 0x171763E2: jae 0x17176664 */
L_171763E8:
    eax = MEM32(ebp + (-0x2C)); /* 0x171763E8: mov eax, dword ptr [ebp - 0x2c] */
    eax = eax + eax * 2; /* 0x171763EB: lea eax, [eax + eax*2] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x171763EE: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x171763EE: shl eax, 2 */
    MEM32(ebp + (-0x7C)) = eax; /* 0x171763F1: mov dword ptr [ebp - 0x7c], eax */
    goto L_171763F9; /* 0x171763F4: jmp 0x171763f9 */
L_171763F6:
    eax = MEM32(ebp + (-0x7C)); /* 0x171763F6: mov eax, dword ptr [ebp - 0x7c] */
L_171763F9:
    edi = MEM32(ebp + (-0x64)); /* 0x171763F9: mov edi, dword ptr [ebp - 0x64] */
    fp_push(*(float*)&MEM32(ebp + (-0x60))); /* 0x171763FC: fld dword ptr [ebp - 0x60] */
    ecx = edx; /* 0x171763FF: mov ecx, edx */
    if (5u) _cf = (((ecx) >> 27) & 1u); /* 0x17176401: shl ecx, 5 */
    if (5u) { _flag_a = recomp_flags_pack((ecx << 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 5u; /* 0x17176401: shl ecx, 5 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x17176404: add ecx, edi */
    _flag_k = FK_ADD;
    fp_push(*(float*)&MEM32(eax + ecx)); /* 0x17176406: fld dword ptr [eax + ecx] */
    edi = MEM32(ebp + (-0x58)); /* 0x17176409: mov edi, dword ptr [ebp - 0x58] */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x50)); /* 0x1717640C: fsub dword ptr [ebp - 0x50] */
    MEM32(ebp + (-0x8)) = edi; /* 0x1717640F: mov dword ptr [ebp - 8], edi */
    edi = ecx; /* 0x17176412: mov edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - eax; /* 0x17176414: sub edi, eax */
    _flag_k = FK_CMP;
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x38)); /* 0x17176416: fmul dword ptr [ebp - 0x38] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x17176419: fst dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(edi + 0xC)); /* 0x1717641C: fld dword ptr [edi + 0xc] */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x50)); /* 0x1717641F: fsub dword ptr [ebp - 0x50] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x38)); /* 0x17176422: fmul dword ptr [ebp - 0x38] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x17176425: fstp dword ptr [ebp + 8] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + (-0x60))); /* 0x17176428: fcomp dword ptr [ebp - 0x60] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1717642B: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1717642D: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17176437; /* 0x17176430: jne 0x17176437 */
L_17176432:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17176432: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x17176434: fld dword ptr [ebp - 4] */
L_17176437:
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x17176437: fld dword ptr [ebp + 8] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + (-0x58))); /* 0x1717643A: fcomp dword ptr [ebp - 0x58] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1717643D: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1717643F: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1717644A; /* 0x17176442: jp 0x1717644a */
L_17176444:
    eax = MEM32(ebp + 0x8); /* 0x17176444: mov eax, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x8)) = eax; /* 0x17176447: mov dword ptr [ebp - 8], eax */
L_1717644A:
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + (-0x8))); /* 0x1717644A: fcom dword ptr [ebp - 8] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1717644D: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1717644F: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1717664F; /* 0x17176452: je 0x1717664f */
L_17176458:
    eax = MEM32(ebp + (-0x28)); /* 0x17176458: mov eax, dword ptr [ebp - 0x28] */
    eax = eax + eax * 2; /* 0x1717645B: lea eax, [eax + eax*2] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1717645E: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1717645E: shl eax, 2 */
    fp_push(*(float*)&MEM32(eax + ecx + 0x4)); /* 0x17176461: fld dword ptr [eax + ecx + 4] */
    edi = ecx; /* 0x17176465: mov edi, ecx */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x4C)); /* 0x17176467: fsub dword ptr [ebp - 0x4c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - eax; /* 0x1717646A: sub edi, eax */
    _flag_k = FK_CMP;
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x34)); /* 0x1717646C: fmul dword ptr [ebp - 0x34] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x1717646F: fst dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(edi + 0x10)); /* 0x17176472: fld dword ptr [edi + 0x10] */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x4C)); /* 0x17176475: fsub dword ptr [ebp - 0x4c] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x34)); /* 0x17176478: fmul dword ptr [ebp - 0x34] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x1717647B: fstp dword ptr [ebp + 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1717647E: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17176480: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x17176482: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1717648C; /* 0x17176485: jne 0x1717648c */
L_17176487:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17176487: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x17176489: fld dword ptr [ebp - 4] */
L_1717648C:
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x1717648C: fld dword ptr [ebp + 8] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + (-0x8))); /* 0x1717648F: fcomp dword ptr [ebp - 8] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17176492: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x17176494: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1717649F; /* 0x17176497: jp 0x1717649f */
L_17176499:
    eax = MEM32(ebp + 0x8); /* 0x17176499: mov eax, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x8)) = eax; /* 0x1717649C: mov dword ptr [ebp - 8], eax */
L_1717649F:
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + (-0x8))); /* 0x1717649F: fcom dword ptr [ebp - 8] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171764A2: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x171764A4: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1717664F; /* 0x171764A7: je 0x1717664f */
L_171764AD:
    eax = MEM32(ebp + (-0x24)); /* 0x171764AD: mov eax, dword ptr [ebp - 0x24] */
    eax = eax + eax * 2; /* 0x171764B0: lea eax, [eax + eax*2] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x171764B3: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x171764B3: shl eax, 2 */
    fp_push(*(float*)&MEM32(eax + ecx + 0x8)); /* 0x171764B6: fld dword ptr [eax + ecx + 8] */
    edi = ecx; /* 0x171764BA: mov edi, ecx */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x48)); /* 0x171764BC: fsub dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - eax; /* 0x171764BF: sub edi, eax */
    _flag_k = FK_CMP;
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x30)); /* 0x171764C1: fmul dword ptr [ebp - 0x30] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x171764C4: fst dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(edi + 0x14)); /* 0x171764C7: fld dword ptr [edi + 0x14] */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x48)); /* 0x171764CA: fsub dword ptr [ebp - 0x48] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x30)); /* 0x171764CD: fmul dword ptr [ebp - 0x30] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x171764D0: fstp dword ptr [ebp + 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171764D3: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171764D5: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x171764D7: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171764E1; /* 0x171764DA: jne 0x171764e1 */
L_171764DC:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171764DC: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x171764DE: fld dword ptr [ebp - 4] */
L_171764E1:
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x171764E1: fld dword ptr [ebp + 8] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + (-0x8))); /* 0x171764E4: fcomp dword ptr [ebp - 8] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171764E7: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x171764E9: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171764F4; /* 0x171764EC: jp 0x171764f4 */
L_171764EE:
    eax = MEM32(ebp + 0x8); /* 0x171764EE: mov eax, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x8)) = eax; /* 0x171764F1: mov dword ptr [ebp - 8], eax */
L_171764F4:
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + (-0x8))); /* 0x171764F4: fcomp dword ptr [ebp - 8] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171764F7: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x171764F9: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_17176651; /* 0x171764FC: jp 0x17176651 */
L_17176502:
    eax = MEM32(ecx + 0x1C); /* 0x17176502: mov eax, dword ptr [ecx + 0x1c] */
    if (29u) _cf = (((eax) >> 28) & 1u); /* 0x17176505: shr eax, 0x1d */
    if (29u) { _flag_a = recomp_flags_pack((eax >> 29u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 29u; /* 0x17176505: shr eax, 0x1d */
    MEM32(ebp + (-0x4)) = eax; /* 0x17176508: mov dword ptr [ebp - 4], eax */
    MEM32(ebp + 0x8) = 0; /* 0x1717650B: mov dword ptr [ebp + 8], 0 */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_1717664C; /* 0x17176512: je 0x1717664c */
L_17176518:
    eax = MEM32(ecx + 0x18); /* 0x17176518: mov eax, dword ptr [ecx + 0x18] */
    ecx = MEM32(ebp + (-0x78)); /* 0x1717651B: mov ecx, dword ptr [ebp - 0x78] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x34u); /* 0x1717651E: imul eax, eax, 0x34 */
    ecx = eax + ecx + 0x8; /* 0x17176521: lea ecx, [eax + ecx + 8] */
L_17176525:
    fp_push(*(float*)&MEM32(ebp + (-0x48))); /* 0x17176525: fld dword ptr [ebp - 0x48] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x4); /* 0x17176528: fmul dword ptr [ecx + 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x50))); /* 0x1717652B: fld dword ptr [ebp - 0x50] */
    _st[0] *= (double)*(float*)ADDR(ecx + (-0x4)); /* 0x1717652E: fmul dword ptr [ecx - 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17176531: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x4C))); /* 0x17176533: fld dword ptr [ebp - 0x4c] */
    _st[0] *= (double)*(float*)ADDR(ecx); /* 0x17176536: fmul dword ptr [ecx] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17176538: faddp st(1) */
    _st[0] += (double)*(float*)ADDR(ecx + 0x8); /* 0x1717653A: fadd dword ptr [ecx + 8] */
    _st[0] = -_st[0]; /* 0x1717653D: fchs  */
    fp_push(*(float*)&MEM32(ebp + (-0x3C))); /* 0x1717653F: fld dword ptr [ebp - 0x3c] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x4); /* 0x17176542: fmul dword ptr [ecx + 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x44))); /* 0x17176545: fld dword ptr [ebp - 0x44] */
    _st[0] *= (double)*(float*)ADDR(ecx + (-0x4)); /* 0x17176548: fmul dword ptr [ecx - 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1717654B: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x40))); /* 0x1717654D: fld dword ptr [ebp - 0x40] */
    _st[0] *= (double)*(float*)ADDR(ecx); /* 0x17176550: fmul dword ptr [ecx] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17176552: faddp st(1) */
    { double _v = fp_pop(); _st[0] = _v == 0.0 ? _st[0] : _st[0] / _v; } /* 0x17176554: fdivp st(1) */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + (-0x60))); /* 0x17176556: fcom dword ptr [ebp - 0x60] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17176559: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1717655B: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17176635; /* 0x1717655E: jne 0x17176635 */
L_17176564:
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + (-0x58))); /* 0x17176564: fcom dword ptr [ebp - 0x58] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17176567: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x17176569: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_17176635; /* 0x1717656C: jp 0x17176635 */
L_17176572:
    fp_push(*(float*)&MEM32(ebp + (-0x44))); /* 0x17176572: fld dword ptr [ebp - 0x44] */
    esi = ebp + (-0x8C); /* 0x17176575: lea esi, [ebp - 0x8c] */
    _st[0] *= _st[1]; /* 0x1717657B: fmul st(1) */
    edi = ebp + (-0x20); /* 0x1717657D: lea edi, [ebp - 0x20] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xB0)) = _v; } /* 0x17176580: fstp dword ptr [ebp - 0xb0] */
    fp_push(*(float*)&MEM32(ebp + (-0x40))); /* 0x17176586: fld dword ptr [ebp - 0x40] */
    _st[0] *= _st[1]; /* 0x17176589: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xAC)) = _v; } /* 0x1717658B: fstp dword ptr [ebp - 0xac] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x3C)); /* 0x17176591: fmul dword ptr [ebp - 0x3c] */
    fp_push(*(float*)&MEM32(ebp + (-0xB0))); /* 0x17176594: fld dword ptr [ebp - 0xb0] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x50)); /* 0x1717659A: fadd dword ptr [ebp - 0x50] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8C)) = _v; } /* 0x1717659D: fstp dword ptr [ebp - 0x8c] */
    fp_push(*(float*)&MEM32(ebp + (-0xAC))); /* 0x171765A3: fld dword ptr [ebp - 0xac] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x4C)); /* 0x171765A9: fadd dword ptr [ebp - 0x4c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x88)) = _v; } /* 0x171765AC: fstp dword ptr [ebp - 0x88] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x48)); /* 0x171765B2: fadd dword ptr [ebp - 0x48] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x84)) = _v; } /* 0x171765B5: fstp dword ptr [ebp - 0x84] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171765BB: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171765BC: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171765BD: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_push(*(float*)&MEM32(ebp + (-0x20))); /* 0x171765BE: fld dword ptr [ebp - 0x20] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0xC); /* 0x171765C1: fmul dword ptr [ecx + 0xc] */
    fp_push(*(float*)&MEM32(ebp + (-0x1C))); /* 0x171765C4: fld dword ptr [ebp - 0x1c] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x10); /* 0x171765C7: fmul dword ptr [ecx + 0x10] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x171765CA: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x171765CC: fld dword ptr [ebp - 0x18] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x14); /* 0x171765CF: fmul dword ptr [ecx + 0x14] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x171765D2: faddp st(1) */
    _st[0] += (double)*(float*)ADDR(ecx + 0x18); /* 0x171765D4: fadd dword ptr [ecx + 0x18] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(0x17021ECC)); /* 0x171765D7: fcom dword ptr [0x17021ecc] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171765DD: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x171765DF: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_17176635; /* 0x171765E2: jnp 0x17176635 */
L_171765E4:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171765E4: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171765E6: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x171765E8: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_17176635; /* 0x171765EB: je 0x17176635 */
L_171765ED:
    fp_push(*(float*)&MEM32(ebp + (-0x20))); /* 0x171765ED: fld dword ptr [ebp - 0x20] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x1C); /* 0x171765F0: fmul dword ptr [ecx + 0x1c] */
    fp_push(*(float*)&MEM32(ebp + (-0x1C))); /* 0x171765F3: fld dword ptr [ebp - 0x1c] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x20); /* 0x171765F6: fmul dword ptr [ecx + 0x20] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x171765F9: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x171765FB: fld dword ptr [ebp - 0x18] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x24); /* 0x171765FE: fmul dword ptr [ecx + 0x24] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17176601: faddp st(1) */
    _st[0] += (double)*(float*)ADDR(ecx + 0x28); /* 0x17176603: fadd dword ptr [ecx + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(0x17021ECC)); /* 0x17176606: fcom dword ptr [0x17021ecc] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1717660C: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1717660E: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_17176633; /* 0x17176611: jnp 0x17176633 */
L_17176613:
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x17176613: fcom st(2) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17176615: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x17176617: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_17176633; /* 0x1717661A: je 0x17176633 */
L_1717661C:
    fp_push(_st[1]); /* 0x1717661C: fld st(1) */
    _st[0] += _st[1]; /* 0x1717661E: fadd st(1) */
    _fpu_cmp = FPU_CMP(_st[0], _st[3]); /* 0x17176620: fcomp st(3) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17176622: fnstsw ax */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17176624: fstp st(0) */
    /* test HI8(eax), 0x41u */ /* 0x17176626: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17176629: fstp st(0) */
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1717634D; /* 0x1717662B: jne 0x1717634d */
L_17176631:
    goto L_17176637; /* 0x17176631: jmp 0x17176637 */
L_17176633:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17176633: fstp st(0) */
L_17176635:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17176635: fstp st(0) */
L_17176637:
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + 1; /* 0x17176637: inc dword ptr [ebp + 8] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + 0x8); /* 0x1717663A: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x34u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x34u; /* 0x1717663D: add ecx, 0x34 */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(ebp + (-0x4)) */ /* 0x17176640: cmp eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17176525; /* 0x17176643: jb 0x17176525 */
L_17176649:
    esi = MEM32(ebp + (-0x80)); /* 0x17176649: mov esi, dword ptr [ebp - 0x80] */
L_1717664C:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1717664C: inc edx */
    _flag_k = FK_INC;
    goto L_1717665A; /* 0x1717664D: jmp 0x1717665a */
L_1717664F:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1717664F: fstp st(0) */
L_17176651:
    edx = MEM32(ecx + 0x1C); /* 0x17176651: mov edx, dword ptr [ecx + 0x1c] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x1FFFFFFFu);
    edx = edx & 0x1FFFFFFFu; /* 0x17176654: and edx, 0x1fffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1717665A:
    /* cmp edx, esi */ /* 0x1717665A: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171763F6; /* 0x1717665C: jb 0x171763f6 */
L_17176662:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x17176662: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_17176664:
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) + 1; /* 0x17176664: inc dword ptr [ebp - 0xc] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + (-0xC)); /* 0x17176667: mov eax, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x68))); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x68)) = MEM32(ebp + (-0x68)) + 4; /* 0x1717666A: add dword ptr [ebp - 0x68], 4 */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(ebp + (-0x10)) */ /* 0x1717666E: cmp eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171763C6; /* 0x17176671: jb 0x171763c6 */
L_17176677:
    /* cmp MEM32(ebp + (-0x74)), edi */ /* 0x17176677: cmp dword ptr [ebp - 0x74], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x74))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1717667A: fstp st(0) */
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1717635C; /* 0x1717667C: jne 0x1717635c */
L_17176682:
    RECOMP_BACKEDGE();
    goto L_17176364; /* 0x17176682: jmp 0x17176364 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1717668C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1717668Cu);

L_1717668C:
    edi = edi; /* 0x1717668C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1717668E: push ebp */
    ebp = esp; /* 0x1717668F: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xD4u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xD4u; /* 0x17176691: sub esp, 0xd4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x17176697: push ebx */
    PUSH32(esp, esi); /* 0x17176698: push esi */
    ebx = ecx; /* 0x17176699: mov ebx, ecx */
    ecx = MEM32(ebp + 0xC); /* 0x1717669B: mov ecx, dword ptr [ebp + 0xc] */
    eax = MEM32(ecx); /* 0x1717669E: mov eax, dword ptr [ecx] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x171766A0: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x171766A2: push edi */
    MEM32(ebp + (-0x28)) = esi; /* 0x171766A3: mov dword ptr [ebp - 0x28], esi */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x171766A6: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x78)) = eax; /* 0x171766A9: mov dword ptr [ebp - 0x78], eax */
    eax = MEM32(ebx + 0x104); /* 0x171766AC: mov eax, dword ptr [ebx + 0x104] */
    MEM32(ebp + (-0x60)) = eax; /* 0x171766B2: mov dword ptr [ebp - 0x60], eax */
    eax = MEM32(eax + 0x1C); /* 0x171766B5: mov eax, dword ptr [eax + 0x1c] */
    MEM32(ebx + 0xCC) = esi; /* 0x171766B8: mov dword ptr [ebx + 0xcc], esi */
    MEM32(ebx + 0xDC) = esi; /* 0x171766BE: mov dword ptr [ebx + 0xdc], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171766C4: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1FFFFFFFu);
    eax = eax & 0x1FFFFFFFu; /* 0x171766C6: and eax, 0x1fffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x171766CB: mov dword ptr [ebp - 0x10], eax */
    eax = MEM32(ebx + 0x40); /* 0x171766CE: mov eax, dword ptr [ebx + 0x40] */
    MEM32(ebp + (-0xA0)) = eax; /* 0x171766D1: mov dword ptr [ebp - 0xa0], eax */
    eax = MEM32(ebp + 0x8); /* 0x171766D7: mov eax, dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(eax)); /* 0x171766DA: fld dword ptr [eax] */
    edx = MEM32(ebx + 0xFC); /* 0x171766DC: mov edx, dword ptr [ebx + 0xfc] */
    _st[0] -= (double)*(float*)ADDR(ebx + 0x6C); /* 0x171766E2: fsub dword ptr [ebx + 0x6c] */
    MEM32(ebp + (-0x70)) = esi; /* 0x171766E5: mov dword ptr [ebp - 0x70], esi */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x171766E8: fld dword ptr [eax + 4] */
    esi = ebp + (-0x24); /* 0x171766EB: lea esi, [ebp - 0x24] */
    _st[0] -= (double)*(float*)ADDR(ebx + 0x70); /* 0x171766EE: fsub dword ptr [ebx + 0x70] */
    edi = ebp + (-0x58); /* 0x171766F1: lea edi, [ebp - 0x58] */
    MEM32(ebp + (-0x74)) = edx; /* 0x171766F4: mov dword ptr [ebp - 0x74], edx */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x94)) = _v; } /* 0x171766F7: fstp dword ptr [ebp - 0x94] */
    fp_push(*(float*)&MEM32(eax + 0x8)); /* 0x171766FD: fld dword ptr [eax + 8] */
    _st[0] -= (double)*(float*)ADDR(ebx + 0x74); /* 0x17176700: fsub dword ptr [ebx + 0x74] */
    fp_push(*(float*)&MEM32(ebx + 0x90)); /* 0x17176703: fld dword ptr [ebx + 0x90] */
    fp_push(_st[2]); /* 0x17176709: fld st(2) */
    _st[0] *= _st[1]; /* 0x1717670B: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x1717670D: fstp dword ptr [ebp - 0x24] */
    fp_push(*(float*)&MEM32(ebp + (-0x94))); /* 0x17176710: fld dword ptr [ebp - 0x94] */
    _st[0] *= _st[1]; /* 0x17176716: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x17176718: fstp dword ptr [ebp - 0x20] */
    fp_push(_st[1]); /* 0x1717671B: fld st(1) */
    _st[0] *= _st[1]; /* 0x1717671D: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x1717671F: fstp dword ptr [ebp - 0x1c] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17176722: movsd dword ptr es:[edi], dword ptr [esi] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17176723: fstp st(0) */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17176725: movsd dword ptr es:[edi], dword ptr [esi] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17176726: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17176728: fstp st(0) */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1717672A: movsd dword ptr es:[edi], dword ptr [esi] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17176830; /* 0x1717672B: jbe 0x17176830 */
L_17176731:
    edi = 0x1FFFFFFFu; /* 0x17176731: mov edi, 0x1fffffff */
L_17176736:
    edx = MEM32(ebp + (-0x60)); /* 0x17176736: mov edx, dword ptr [ebp - 0x60] */
    eax = ecx; /* 0x17176739: mov eax, ecx */
    if (5u) _cf = (((eax) >> 27) & 1u); /* 0x1717673B: shl eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack((eax << 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 5u; /* 0x1717673B: shl eax, 5 */
    esi = eax + edx; /* 0x1717673E: lea esi, [eax + edx] */
    eax = MEM32(esi + 0x1C); /* 0x17176741: mov eax, dword ptr [esi + 0x1c] */
    fp_push(*(float*)&MEM32(esi)); /* 0x17176744: fld dword ptr [esi] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + (-0x58))); /* 0x17176746: fcomp dword ptr [ebp - 0x58] */
    fp_pop();
    edx = eax; /* 0x17176749: mov edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    edx = edx & edi; /* 0x1717674B: and edx, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, 0xE0000000u */ /* 0x1717674D: test eax, 0xe0000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xE0000000u);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17176752: fnstsw ax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171767CA; /* 0x17176754: je 0x171767ca */
L_17176756:
    /* test HI8(eax), 0x41u */ /* 0x17176756: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_17176813; /* 0x17176759: jp 0x17176813 */
L_1717675F:
    fp_push(*(float*)&MEM32(esi + 0xC)); /* 0x1717675F: fld dword ptr [esi + 0xc] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + (-0x58))); /* 0x17176762: fcomp dword ptr [ebp - 0x58] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17176765: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x17176767: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17176813; /* 0x1717676A: jne 0x17176813 */
L_17176770:
    fp_push(*(float*)&MEM32(esi + 0x4)); /* 0x17176770: fld dword ptr [esi + 4] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + (-0x54))); /* 0x17176773: fcomp dword ptr [ebp - 0x54] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17176776: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x17176778: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_17176813; /* 0x1717677B: jp 0x17176813 */
L_17176781:
    fp_push(*(float*)&MEM32(esi + 0x10)); /* 0x17176781: fld dword ptr [esi + 0x10] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + (-0x54))); /* 0x17176784: fcomp dword ptr [ebp - 0x54] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17176787: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x17176789: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17176813; /* 0x1717678C: jne 0x17176813 */
L_17176792:
    fp_push(*(float*)&MEM32(esi + 0x8)); /* 0x17176792: fld dword ptr [esi + 8] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + (-0x50))); /* 0x17176795: fcomp dword ptr [ebp - 0x50] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17176798: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1717679A: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_17176813; /* 0x1717679D: jp 0x17176813 */
L_1717679F:
    fp_push(*(float*)&MEM32(esi + 0x14)); /* 0x1717679F: fld dword ptr [esi + 0x14] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + (-0x50))); /* 0x171767A2: fcomp dword ptr [ebp - 0x50] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171767A5: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x171767A7: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17176813; /* 0x171767AA: jne 0x17176813 */
L_171767AC:
    eax = ecx + 0x1; /* 0x171767AC: lea eax, [ecx + 1] */
    /* cmp edx, eax */ /* 0x171767AF: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x8) = eax; /* 0x171767B1: mov dword ptr [ebp + 8], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17176813; /* 0x171767B4: je 0x17176813 */
L_171767B6:
    PUSH32(esp, ecx); /* 0x171767B6: push ecx */
    ecx = ebx + 0xD8; /* 0x171767B7: lea ecx, [ebx + 0xd8] */
    RECOMP_CALL(sub_17175CCD); /* 0x171767BD: call 0x17175ccd */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x70))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x70)) = MEM32(ebp + (-0x70)) + 1; /* 0x171767C2: inc dword ptr [ebp - 0x70] */
    _flag_k = FK_INC;
    ecx = MEM32(ebp + 0x8); /* 0x171767C5: mov ecx, dword ptr [ebp + 8] */
    goto L_17176827; /* 0x171767C8: jmp 0x17176827 */
L_171767CA:
    /* test HI8(eax), 0x41u */ /* 0x171767CA: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_17176813; /* 0x171767CD: jp 0x17176813 */
L_171767CF:
    fp_push(*(float*)&MEM32(esi + 0xC)); /* 0x171767CF: fld dword ptr [esi + 0xc] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + (-0x58))); /* 0x171767D2: fcomp dword ptr [ebp - 0x58] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171767D5: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x171767D7: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17176813; /* 0x171767DA: jne 0x17176813 */
L_171767DC:
    fp_push(*(float*)&MEM32(esi + 0x4)); /* 0x171767DC: fld dword ptr [esi + 4] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + (-0x54))); /* 0x171767DF: fcomp dword ptr [ebp - 0x54] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171767E2: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x171767E4: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_17176813; /* 0x171767E7: jp 0x17176813 */
L_171767E9:
    fp_push(*(float*)&MEM32(esi + 0x10)); /* 0x171767E9: fld dword ptr [esi + 0x10] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + (-0x54))); /* 0x171767EC: fcomp dword ptr [ebp - 0x54] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171767EF: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x171767F1: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17176813; /* 0x171767F4: jne 0x17176813 */
L_171767F6:
    fp_push(*(float*)&MEM32(esi + 0x8)); /* 0x171767F6: fld dword ptr [esi + 8] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + (-0x50))); /* 0x171767F9: fcomp dword ptr [ebp - 0x50] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171767FC: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x171767FE: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_17176813; /* 0x17176801: jp 0x17176813 */
L_17176803:
    fp_push(*(float*)&MEM32(esi + 0x14)); /* 0x17176803: fld dword ptr [esi + 0x14] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + (-0x50))); /* 0x17176806: fcomp dword ptr [ebp - 0x50] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17176809: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x1717680B: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17176813; /* 0x1717680E: jne 0x17176813 */
L_17176810:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x17176810: inc ecx */
    _flag_k = FK_INC;
    goto L_17176827; /* 0x17176811: jmp 0x17176827 */
L_17176813:
    PUSH32(esp, ecx); /* 0x17176813: push ecx */
    ecx = ebx + 0xC8; /* 0x17176814: lea ecx, [ebx + 0xc8] */
    RECOMP_CALL(sub_17175CCD); /* 0x1717681A: call 0x17175ccd */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x1C); /* 0x1717681F: mov ecx, dword ptr [esi + 0x1c] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x28))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x28)) = MEM32(ebp + (-0x28)) + 1; /* 0x17176822: inc dword ptr [ebp - 0x28] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    ecx = ecx & edi; /* 0x17176825: and ecx, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_17176827:
    /* cmp ecx, MEM32(ebp + (-0x10)) */ /* 0x17176827: cmp ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17176736; /* 0x1717682A: jb 0x17176736 */
L_17176830:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17176830: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x78)), eax */ /* 0x17176832: cmp dword ptr [ebp - 0x78], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x78))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x68)) = eax; /* 0x17176835: mov dword ptr [ebp - 0x68], eax */
    MEM32(ebp + (-0x5C)) = eax; /* 0x17176838: mov dword ptr [ebp - 0x5c], eax */
    if (CMP_BE(_flag_a, _flag_b)) goto L_17176DC3; /* 0x1717683B: jbe 0x17176dc3 */
L_17176841:
    ecx = MEM32(ebp + 0xC); /* 0x17176841: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + (-0x5C))); /* 0x17176844: push dword ptr [ebp - 0x5c] */
    eax = MEM32(ecx); /* 0x17176847: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x17176849: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    fp_push(1.0); /* 0x1717684C: fld1  */
    esi = eax; /* 0x1717684E: mov esi, eax */
    edi = ebp + (-0x4C); /* 0x17176850: lea edi, [ebp - 0x4c] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17176853: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17176854: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17176855: movsd dword ptr es:[edi], dword ptr [esi] */
    _st[0] /= (double)*(float*)ADDR(ebp + (-0x4C)); /* 0x17176856: fdiv dword ptr [ebp - 0x4c] */
    esi = ebp + (-0xB0); /* 0x17176859: lea esi, [ebp - 0xb0] */
    edi = ebp + (-0x40); /* 0x1717685F: lea edi, [ebp - 0x40] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xB0)) = _v; } /* 0x17176862: fstp dword ptr [ebp - 0xb0] */
    fp_push(1.0); /* 0x17176868: fld1  */
    _st[0] /= (double)*(float*)ADDR(ebp + (-0x48)); /* 0x1717686A: fdiv dword ptr [ebp - 0x48] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xAC)) = _v; } /* 0x1717686D: fstp dword ptr [ebp - 0xac] */
    fp_push(1.0); /* 0x17176873: fld1  */
    _st[0] /= (double)*(float*)ADDR(ebp + (-0x44)); /* 0x17176875: fdiv dword ptr [ebp - 0x44] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xA8)) = _v; } /* 0x17176878: fstp dword ptr [ebp - 0xa8] */
    fp_push(*(float*)&MEM32(0x17001430)); /* 0x1717687E: fld dword ptr [0x17001430] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17176884: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17176885: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17176886: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_push(*(float*)&MEM32(ebp + (-0x4C))); /* 0x17176887: fld dword ptr [ebp - 0x4c] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1717688A: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1717688C: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x1717688E: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17176899; /* 0x17176891: jne 0x17176899 */
L_17176893:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x34))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x34)) = MEM32(ebp + (-0x34)) & 0; /* 0x17176893: and dword ptr [ebp - 0x34], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_171768A0; /* 0x17176897: jmp 0x171768a0 */
L_17176899:
    MEM32(ebp + (-0x34)) = 1; /* 0x17176899: mov dword ptr [ebp - 0x34], 1 */
L_171768A0:
    fp_push(*(float*)&MEM32(ebp + (-0x48))); /* 0x171768A0: fld dword ptr [ebp - 0x48] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171768A3: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171768A5: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x171768A7: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171768B2; /* 0x171768AA: jne 0x171768b2 */
L_171768AC:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x30))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x30)) = MEM32(ebp + (-0x30)) & 0; /* 0x171768AC: and dword ptr [ebp - 0x30], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_171768B9; /* 0x171768B0: jmp 0x171768b9 */
L_171768B2:
    MEM32(ebp + (-0x30)) = 1; /* 0x171768B2: mov dword ptr [ebp - 0x30], 1 */
L_171768B9:
    fp_push(*(float*)&MEM32(ebp + (-0x44))); /* 0x171768B9: fld dword ptr [ebp - 0x44] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171768BC: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171768BE: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x171768C0: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171768CB; /* 0x171768C3: jne 0x171768cb */
L_171768C5:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x2C)) = MEM32(ebp + (-0x2C)) & 0; /* 0x171768C5: and dword ptr [ebp - 0x2c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_171768D2; /* 0x171768C9: jmp 0x171768d2 */
L_171768CB:
    MEM32(ebp + (-0x2C)) = 1; /* 0x171768CB: mov dword ptr [ebp - 0x2c], 1 */
L_171768D2:
    eax = MEM32(ebx + 0x9C); /* 0x171768D2: mov eax, dword ptr [ebx + 0x9c] */
    fp_push(*(float*)&MEM32(ebx + 0x98)); /* 0x171768D8: fld dword ptr [ebx + 0x98] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x64))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x64)) = MEM32(ebp + (-0x64)) & 0; /* 0x171768DE: and dword ptr [ebp - 0x64], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    fp_push(*(float*)&MEM32(ebp + (-0x50))); /* 0x171768E2: fld dword ptr [ebp - 0x50] */
    fp_push(*(float*)&MEM32(0x17021EC8)); /* 0x171768E5: fld dword ptr [0x17021ec8] */
    MEM32(ebp + (-0x18)) = eax; /* 0x171768EB: mov dword ptr [ebp - 0x18], eax */
    eax = MEM32(ebp + (-0x70)); /* 0x171768EE: mov eax, dword ptr [ebp - 0x70] */
    fp_push(*(float*)&MEM32(0x17021ECC)); /* 0x171768F1: fld dword ptr [0x17021ecc] */
    /* test eax, eax */ /* 0x171768F7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17176A8A; /* 0x171768F9: jbe 0x17176a8a */
L_171768FF:
    ecx = MEM32(ebx + 0xD8); /* 0x171768FF: mov ecx, dword ptr [ebx + 0xd8] */
    MEM32(ebp + (-0x8)) = ecx; /* 0x17176905: mov dword ptr [ebp - 8], ecx */
    MEM32(ebp + (-0x14)) = eax; /* 0x17176908: mov dword ptr [ebp - 0x14], eax */
L_1717690B:
    eax = MEM32(ebp + (-0x8)); /* 0x1717690B: mov eax, dword ptr [ebp - 8] */
    eax = MEM32(eax); /* 0x1717690E: mov eax, dword ptr [eax] */
    ecx = MEM32(ebp + (-0x60)); /* 0x17176910: mov ecx, dword ptr [ebp - 0x60] */
    if (5u) _cf = (((eax) >> 27) & 1u); /* 0x17176913: shl eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack((eax << 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 5u; /* 0x17176913: shl eax, 5 */
    edx = eax + ecx; /* 0x17176916: lea edx, [eax + ecx] */
    eax = MEM32(edx + 0x1C); /* 0x17176919: mov eax, dword ptr [edx + 0x1c] */
    if (29u) _cf = (((eax) >> 28) & 1u); /* 0x1717691C: shr eax, 0x1d */
    if (29u) { _flag_a = recomp_flags_pack((eax >> 29u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 29u; /* 0x1717691C: shr eax, 0x1d */
    MEM32(ebp + (-0x10)) = eax; /* 0x1717691F: mov dword ptr [ebp - 0x10], eax */
    MEM32(ebp + 0x8) = 0; /* 0x17176922: mov dword ptr [ebp + 8], 0 */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_17176A7D; /* 0x17176929: je 0x17176a7d */
L_1717692F:
    ecx = MEM32(edx + 0x18); /* 0x1717692F: mov ecx, dword ptr [edx + 0x18] */
    fp_push(_st[2]); /* 0x17176932: fld st(2) */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + 0x8); /* 0x17176934: add ecx, dword ptr [ebp + 8] */
    _flag_k = FK_ADD;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x34u); /* 0x17176937: imul ecx, ecx, 0x34 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x74)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + (-0x74)); /* 0x1717693A: add ecx, dword ptr [ebp - 0x74] */
    _flag_k = FK_ADD;
    _st[0] *= (double)*(float*)ADDR(ecx + 0xC); /* 0x1717693D: fmul dword ptr [ecx + 0xc] */
    fp_push(*(float*)&MEM32(ebp + (-0x54))); /* 0x17176940: fld dword ptr [ebp - 0x54] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x8); /* 0x17176943: fmul dword ptr [ecx + 8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17176946: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x58))); /* 0x17176948: fld dword ptr [ebp - 0x58] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x4); /* 0x1717694B: fmul dword ptr [ecx + 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1717694E: faddp st(1) */
    _st[0] += (double)*(float*)ADDR(ecx + 0x10); /* 0x17176950: fadd dword ptr [ecx + 0x10] */
    _st[0] = -_st[0]; /* 0x17176953: fchs  */
    fp_push(*(float*)&MEM32(ebp + (-0x48))); /* 0x17176955: fld dword ptr [ebp - 0x48] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x8); /* 0x17176958: fmul dword ptr [ecx + 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x44))); /* 0x1717695B: fld dword ptr [ebp - 0x44] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0xC); /* 0x1717695E: fmul dword ptr [ecx + 0xc] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17176961: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x4C))); /* 0x17176963: fld dword ptr [ebp - 0x4c] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x4); /* 0x17176966: fmul dword ptr [ecx + 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17176969: faddp st(1) */
    { double _v = fp_pop(); _st[0] = _v == 0.0 ? _st[0] : _st[0] / _v; } /* 0x1717696B: fdivp st(1) */
    _fpu_cmp = FPU_CMP(_st[0], _st[4]); /* 0x1717696D: fcom st(4) */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x6C)) = _v; } /* 0x1717696F: fst dword ptr [ebp - 0x6c] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17176972: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x17176974: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17176A6C; /* 0x17176977: jne 0x17176a6c */
L_1717697D:
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + (-0x18))); /* 0x1717697D: fcom dword ptr [ebp - 0x18] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17176980: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x17176982: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_17176A6C; /* 0x17176985: jp 0x17176a6c */
L_1717698B:
    fp_push(*(float*)&MEM32(ebp + (-0x4C))); /* 0x1717698B: fld dword ptr [ebp - 0x4c] */
    esi = ebp + (-0xBC); /* 0x1717698E: lea esi, [ebp - 0xbc] */
    _st[0] *= _st[1]; /* 0x17176994: fmul st(1) */
    edi = ebp + (-0x24); /* 0x17176996: lea edi, [ebp - 0x24] */
    fp_push(*(float*)&MEM32(ebp + (-0x48))); /* 0x17176999: fld dword ptr [ebp - 0x48] */
    _st[0] *= _st[2]; /* 0x1717699C: fmul st(2) */
    fp_push(*(float*)&MEM32(ebp + (-0x44))); /* 0x1717699E: fld dword ptr [ebp - 0x44] */
    _st[0] *= _st[3]; /* 0x171769A1: fmul st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC0)) = _v; } /* 0x171769A3: fstp dword ptr [ebp - 0xc0] */
    fp_push(_st[1]); /* 0x171769A9: fld st(1) */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x58)); /* 0x171769AB: fadd dword ptr [ebp - 0x58] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xBC)) = _v; } /* 0x171769AE: fstp dword ptr [ebp - 0xbc] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x54)); /* 0x171769B4: fadd dword ptr [ebp - 0x54] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xB8)) = _v; } /* 0x171769B7: fstp dword ptr [ebp - 0xb8] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171769BD: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171769BF: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0xC0))); /* 0x171769C1: fld dword ptr [ebp - 0xc0] */
    _st[0] += _st[3]; /* 0x171769C7: fadd st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xB4)) = _v; } /* 0x171769C9: fstp dword ptr [ebp - 0xb4] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171769CF: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171769D0: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171769D1: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_push(*(float*)&MEM32(ebp + (-0x20))); /* 0x171769D2: fld dword ptr [ebp - 0x20] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x18); /* 0x171769D5: fmul dword ptr [ecx + 0x18] */
    fp_push(*(float*)&MEM32(ebp + (-0x1C))); /* 0x171769D8: fld dword ptr [ebp - 0x1c] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x1C); /* 0x171769DB: fmul dword ptr [ecx + 0x1c] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x171769DE: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x24))); /* 0x171769E0: fld dword ptr [ebp - 0x24] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x14); /* 0x171769E3: fmul dword ptr [ecx + 0x14] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x171769E6: faddp st(1) */
    _st[0] += (double)*(float*)ADDR(ecx + 0x20); /* 0x171769E8: fadd dword ptr [ecx + 0x20] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171769EB: fcom st(1) */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x171769ED: fst dword ptr [ebp - 4] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171769F0: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x171769F2: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_17176A6C; /* 0x171769F5: jnp 0x17176a6c */
L_171769F7:
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x171769F7: fcomp st(2) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171769F9: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x171769FB: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_17176A6E; /* 0x171769FE: je 0x17176a6e */
L_17176A00:
    fp_push(*(float*)&MEM32(ebp + (-0x20))); /* 0x17176A00: fld dword ptr [ebp - 0x20] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x28); /* 0x17176A03: fmul dword ptr [ecx + 0x28] */
    fp_push(*(float*)&MEM32(ebp + (-0x1C))); /* 0x17176A06: fld dword ptr [ebp - 0x1c] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x2C); /* 0x17176A09: fmul dword ptr [ecx + 0x2c] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17176A0C: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x24))); /* 0x17176A0E: fld dword ptr [ebp - 0x24] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x24); /* 0x17176A11: fmul dword ptr [ecx + 0x24] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17176A14: faddp st(1) */
    _st[0] += (double)*(float*)ADDR(ecx + 0x30); /* 0x17176A16: fadd dword ptr [ecx + 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x17176A19: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17176A1B: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x17176A1D: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_17176A6C; /* 0x17176A20: jnp 0x17176a6c */
L_17176A22:
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x17176A22: fcom st(2) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17176A24: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x17176A26: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_17176A6C; /* 0x17176A29: je 0x17176a6c */
L_17176A2B:
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x17176A2B: fld dword ptr [ebp - 4] */
    _st[0] += _st[1]; /* 0x17176A2E: fadd st(1) */
    _fpu_cmp = FPU_CMP(_st[0], _st[3]); /* 0x17176A30: fcomp st(3) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17176A32: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x17176A34: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_17176A6C; /* 0x17176A37: je 0x17176a6c */
L_17176A39:
    fp_push(*(float*)&MEM32(ebp + (-0x6C))); /* 0x17176A39: fld dword ptr [ebp - 0x6c] */
    eax = MEM32(ebp + (-0x4)); /* 0x17176A3C: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(ebx + 0xB8); /* 0x17176A3F: mov ecx, dword ptr [ebx + 0xb8] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x17176A45: fst dword ptr [ebp - 0x18] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x88)) = _v; } /* 0x17176A48: fstp dword ptr [ebp - 0x88] */
    MEM32(ebp + (-0x80)) = eax; /* 0x17176A4E: mov dword ptr [ebp - 0x80], eax */
    MEM32(ebp + (-0x64)) = 1; /* 0x17176A51: mov dword ptr [ebp - 0x64], 1 */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x7C)) = _v; } /* 0x17176A58: fstp dword ptr [ebp - 0x7c] */
    eax = MEM32(edx + 0x18); /* 0x17176A5B: mov eax, dword ptr [edx + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + 0x8); /* 0x17176A5E: add eax, dword ptr [ebp + 8] */
    _flag_k = FK_ADD;
    eax = MEM32(ecx + eax * 4); /* 0x17176A61: mov eax, dword ptr [ecx + eax*4] */
    MEM32(ebp + (-0x84)) = eax; /* 0x17176A64: mov dword ptr [ebp - 0x84], eax */
    goto L_17176A6E; /* 0x17176A6A: jmp 0x17176a6e */
L_17176A6C:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17176A6C: fstp st(0) */
L_17176A6E:
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + 1; /* 0x17176A6E: inc dword ptr [ebp + 8] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + 0x8); /* 0x17176A71: mov eax, dword ptr [ebp + 8] */
    /* cmp eax, MEM32(ebp + (-0x10)) */ /* 0x17176A74: cmp eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1717692F; /* 0x17176A77: jb 0x1717692f */
L_17176A7D:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) + 4; /* 0x17176A7D: add dword ptr [ebp - 8], 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x14)) = MEM32(ebp + (-0x14)) - 1; /* 0x17176A81: dec dword ptr [ebp - 0x14] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1717690B; /* 0x17176A84: jne 0x1717690b */
L_17176A8A:
    eax = MEM32(ebp + (-0x28)); /* 0x17176A8A: mov eax, dword ptr [ebp - 0x28] */
    /* test eax, eax */ /* 0x17176A8D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17176D7D; /* 0x17176A8F: jbe 0x17176d7d */
L_17176A95:
    ecx = MEM32(ebx + 0xC8); /* 0x17176A95: mov ecx, dword ptr [ebx + 0xc8] */
    MEM32(ebp + (-0x14)) = ecx; /* 0x17176A9B: mov dword ptr [ebp - 0x14], ecx */
    MEM32(ebp + (-0x10)) = eax; /* 0x17176A9E: mov dword ptr [ebp - 0x10], eax */
L_17176AA1:
    eax = MEM32(ebp + (-0x14)); /* 0x17176AA1: mov eax, dword ptr [ebp - 0x14] */
    ecx = MEM32(eax); /* 0x17176AA4: mov ecx, dword ptr [eax] */
    edx = MEM32(ebp + (-0x60)); /* 0x17176AA6: mov edx, dword ptr [ebp - 0x60] */
    eax = ecx; /* 0x17176AA9: mov eax, ecx */
    if (5u) _cf = (((eax) >> 27) & 1u); /* 0x17176AAB: shl eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack((eax << 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 5u; /* 0x17176AAB: shl eax, 5 */
    eax = MEM32(eax + edx + 0x1C); /* 0x17176AAE: mov eax, dword ptr [eax + edx + 0x1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1FFFFFFFu);
    eax = eax & 0x1FFFFFFFu; /* 0x17176AB2: and eax, 0x1fffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, eax */ /* 0x17176AB7: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x8)) = ecx; /* 0x17176AB9: mov dword ptr [ebp - 8], ecx */
    MEM32(ebp + (-0xA4)) = eax; /* 0x17176ABC: mov dword ptr [ebp - 0xa4], eax */
    if (CMP_AE(_flag_a, _flag_b)) goto L_17176D70; /* 0x17176AC2: jae 0x17176d70 */
L_17176AC8:
    eax = MEM32(ebp + (-0x34)); /* 0x17176AC8: mov eax, dword ptr [ebp - 0x34] */
    eax = eax + eax * 2; /* 0x17176ACB: lea eax, [eax + eax*2] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x17176ACE: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x17176ACE: shl eax, 2 */
    MEM32(ebp + (-0x8C)) = eax; /* 0x17176AD1: mov dword ptr [ebp - 0x8c], eax */
L_17176AD7:
    eax = MEM32(ebp + (-0x8)); /* 0x17176AD7: mov eax, dword ptr [ebp - 8] */
    fp_push(_st[3]); /* 0x17176ADA: fld st(3) */
    ecx = MEM32(ebp + (-0x60)); /* 0x17176ADC: mov ecx, dword ptr [ebp - 0x60] */
    if (5u) _cf = (((eax) >> 27) & 1u); /* 0x17176ADF: shl eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack((eax << 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 5u; /* 0x17176ADF: shl eax, 5 */
    edx = eax + ecx; /* 0x17176AE2: lea edx, [eax + ecx] */
    eax = MEM32(ebp + (-0x18)); /* 0x17176AE5: mov eax, dword ptr [ebp - 0x18] */
    MEM32(ebp + (-0xC)) = eax; /* 0x17176AE8: mov dword ptr [ebp - 0xc], eax */
    eax = MEM32(ebp + (-0x8C)); /* 0x17176AEB: mov eax, dword ptr [ebp - 0x8c] */
    fp_push(*(float*)&MEM32(eax + edx)); /* 0x17176AF1: fld dword ptr [eax + edx] */
    ecx = edx; /* 0x17176AF4: mov ecx, edx */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x58)); /* 0x17176AF6: fsub dword ptr [ebp - 0x58] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x17176AF9: sub ecx, eax */
    _flag_k = FK_CMP;
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x40)); /* 0x17176AFB: fmul dword ptr [ebp - 0x40] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x17176AFE: fst dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ecx + 0xC)); /* 0x17176B01: fld dword ptr [ecx + 0xc] */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x58)); /* 0x17176B04: fsub dword ptr [ebp - 0x58] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x40)); /* 0x17176B07: fmul dword ptr [ebp - 0x40] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x17176B0A: fstp dword ptr [ebp + 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[5]); /* 0x17176B0D: fcomp st(5) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17176B0F: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x17176B11: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17176B1B; /* 0x17176B14: jne 0x17176b1b */
L_17176B16:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17176B16: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x17176B18: fld dword ptr [ebp - 4] */
L_17176B1B:
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x17176B1B: fld dword ptr [ebp + 8] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + (-0x18))); /* 0x17176B1E: fcomp dword ptr [ebp - 0x18] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17176B21: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x17176B23: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_17176B2E; /* 0x17176B26: jp 0x17176b2e */
L_17176B28:
    eax = MEM32(ebp + 0x8); /* 0x17176B28: mov eax, dword ptr [ebp + 8] */
    MEM32(ebp + (-0xC)) = eax; /* 0x17176B2B: mov dword ptr [ebp - 0xc], eax */
L_17176B2E:
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + (-0xC))); /* 0x17176B2E: fcom dword ptr [ebp - 0xc] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17176B31: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x17176B33: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_17176D53; /* 0x17176B36: je 0x17176d53 */
L_17176B3C:
    eax = MEM32(ebp + (-0x30)); /* 0x17176B3C: mov eax, dword ptr [ebp - 0x30] */
    eax = eax + eax * 2; /* 0x17176B3F: lea eax, [eax + eax*2] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x17176B42: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x17176B42: shl eax, 2 */
    fp_push(*(float*)&MEM32(eax + edx + 0x4)); /* 0x17176B45: fld dword ptr [eax + edx + 4] */
    ecx = edx; /* 0x17176B49: mov ecx, edx */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x54)); /* 0x17176B4B: fsub dword ptr [ebp - 0x54] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x17176B4E: sub ecx, eax */
    _flag_k = FK_CMP;
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x3C)); /* 0x17176B50: fmul dword ptr [ebp - 0x3c] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x17176B53: fst dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ecx + 0x10)); /* 0x17176B56: fld dword ptr [ecx + 0x10] */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x54)); /* 0x17176B59: fsub dword ptr [ebp - 0x54] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x3C)); /* 0x17176B5C: fmul dword ptr [ebp - 0x3c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x17176B5F: fstp dword ptr [ebp + 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x17176B62: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17176B64: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x17176B66: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17176B70; /* 0x17176B69: jne 0x17176b70 */
L_17176B6B:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17176B6B: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x17176B6D: fld dword ptr [ebp - 4] */
L_17176B70:
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x17176B70: fld dword ptr [ebp + 8] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + (-0xC))); /* 0x17176B73: fcomp dword ptr [ebp - 0xc] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17176B76: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x17176B78: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_17176B83; /* 0x17176B7B: jp 0x17176b83 */
L_17176B7D:
    eax = MEM32(ebp + 0x8); /* 0x17176B7D: mov eax, dword ptr [ebp + 8] */
    MEM32(ebp + (-0xC)) = eax; /* 0x17176B80: mov dword ptr [ebp - 0xc], eax */
L_17176B83:
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + (-0xC))); /* 0x17176B83: fcom dword ptr [ebp - 0xc] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17176B86: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x17176B88: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_17176D53; /* 0x17176B8B: je 0x17176d53 */
L_17176B91:
    eax = MEM32(ebp + (-0x2C)); /* 0x17176B91: mov eax, dword ptr [ebp - 0x2c] */
    eax = eax + eax * 2; /* 0x17176B94: lea eax, [eax + eax*2] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x17176B97: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x17176B97: shl eax, 2 */
    fp_push(*(float*)&MEM32(eax + edx + 0x8)); /* 0x17176B9A: fld dword ptr [eax + edx + 8] */
    ecx = edx; /* 0x17176B9E: mov ecx, edx */
    _st[0] -= _st[4]; /* 0x17176BA0: fsub st(4) */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x17176BA2: sub ecx, eax */
    _flag_k = FK_CMP;
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x38)); /* 0x17176BA4: fmul dword ptr [ebp - 0x38] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x17176BA7: fst dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ecx + 0x14)); /* 0x17176BAA: fld dword ptr [ecx + 0x14] */
    _st[0] -= _st[5]; /* 0x17176BAD: fsub st(5) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x38)); /* 0x17176BAF: fmul dword ptr [ebp - 0x38] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x17176BB2: fstp dword ptr [ebp + 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x17176BB5: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17176BB7: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x17176BB9: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17176BC3; /* 0x17176BBC: jne 0x17176bc3 */
L_17176BBE:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17176BBE: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x17176BC0: fld dword ptr [ebp - 4] */
L_17176BC3:
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x17176BC3: fld dword ptr [ebp + 8] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + (-0xC))); /* 0x17176BC6: fcomp dword ptr [ebp - 0xc] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17176BC9: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x17176BCB: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_17176BD6; /* 0x17176BCE: jp 0x17176bd6 */
L_17176BD0:
    eax = MEM32(ebp + 0x8); /* 0x17176BD0: mov eax, dword ptr [ebp + 8] */
    MEM32(ebp + (-0xC)) = eax; /* 0x17176BD3: mov dword ptr [ebp - 0xc], eax */
L_17176BD6:
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + (-0xC))); /* 0x17176BD6: fcomp dword ptr [ebp - 0xc] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17176BD9: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x17176BDB: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_17176D55; /* 0x17176BDE: jp 0x17176d55 */
L_17176BE4:
    eax = MEM32(edx + 0x1C); /* 0x17176BE4: mov eax, dword ptr [edx + 0x1c] */
    if (29u) _cf = (((eax) >> 28) & 1u); /* 0x17176BE7: shr eax, 0x1d */
    if (29u) { _flag_a = recomp_flags_pack((eax >> 29u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 29u; /* 0x17176BE7: shr eax, 0x1d */
    MEM32(ebp + (-0x9C)) = eax; /* 0x17176BEA: mov dword ptr [ebp - 0x9c], eax */
    MEM32(ebp + 0x8) = 0; /* 0x17176BF0: mov dword ptr [ebp + 8], 0 */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_17176D4E; /* 0x17176BF7: je 0x17176d4e */
L_17176BFD:
    ecx = MEM32(edx + 0x18); /* 0x17176BFD: mov ecx, dword ptr [edx + 0x18] */
    fp_push(_st[2]); /* 0x17176C00: fld st(2) */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + 0x8); /* 0x17176C02: add ecx, dword ptr [ebp + 8] */
    _flag_k = FK_ADD;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x34u); /* 0x17176C05: imul ecx, ecx, 0x34 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x74)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + (-0x74)); /* 0x17176C08: add ecx, dword ptr [ebp - 0x74] */
    _flag_k = FK_ADD;
    _st[0] *= (double)*(float*)ADDR(ecx + 0xC); /* 0x17176C0B: fmul dword ptr [ecx + 0xc] */
    fp_push(*(float*)&MEM32(ebp + (-0x54))); /* 0x17176C0E: fld dword ptr [ebp - 0x54] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x8); /* 0x17176C11: fmul dword ptr [ecx + 8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17176C14: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x58))); /* 0x17176C16: fld dword ptr [ebp - 0x58] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x4); /* 0x17176C19: fmul dword ptr [ecx + 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17176C1C: faddp st(1) */
    _st[0] += (double)*(float*)ADDR(ecx + 0x10); /* 0x17176C1E: fadd dword ptr [ecx + 0x10] */
    _st[0] = -_st[0]; /* 0x17176C21: fchs  */
    fp_push(*(float*)&MEM32(ebp + (-0x44))); /* 0x17176C23: fld dword ptr [ebp - 0x44] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0xC); /* 0x17176C26: fmul dword ptr [ecx + 0xc] */
    fp_push(*(float*)&MEM32(ebp + (-0x48))); /* 0x17176C29: fld dword ptr [ebp - 0x48] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x8); /* 0x17176C2C: fmul dword ptr [ecx + 8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17176C2F: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x4C))); /* 0x17176C31: fld dword ptr [ebp - 0x4c] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x4); /* 0x17176C34: fmul dword ptr [ecx + 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17176C37: faddp st(1) */
    { double _v = fp_pop(); _st[0] = _v == 0.0 ? _st[0] : _st[0] / _v; } /* 0x17176C39: fdivp st(1) */
    _fpu_cmp = FPU_CMP(_st[0], _st[4]); /* 0x17176C3B: fcom st(4) */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x6C)) = _v; } /* 0x17176C3D: fst dword ptr [ebp - 0x6c] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17176C40: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x17176C42: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17176D3A; /* 0x17176C45: jne 0x17176d3a */
L_17176C4B:
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + (-0x18))); /* 0x17176C4B: fcom dword ptr [ebp - 0x18] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17176C4E: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x17176C50: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_17176D3A; /* 0x17176C53: jp 0x17176d3a */
L_17176C59:
    fp_push(*(float*)&MEM32(ebp + (-0x4C))); /* 0x17176C59: fld dword ptr [ebp - 0x4c] */
    esi = ebp + (-0x98); /* 0x17176C5C: lea esi, [ebp - 0x98] */
    _st[0] *= _st[1]; /* 0x17176C62: fmul st(1) */
    edi = ebp + (-0x24); /* 0x17176C64: lea edi, [ebp - 0x24] */
    fp_push(*(float*)&MEM32(ebp + (-0x48))); /* 0x17176C67: fld dword ptr [ebp - 0x48] */
    _st[0] *= _st[2]; /* 0x17176C6A: fmul st(2) */
    fp_push(*(float*)&MEM32(ebp + (-0x44))); /* 0x17176C6C: fld dword ptr [ebp - 0x44] */
    _st[0] *= _st[3]; /* 0x17176C6F: fmul st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xCC)) = _v; } /* 0x17176C71: fstp dword ptr [ebp - 0xcc] */
    fp_push(_st[1]); /* 0x17176C77: fld st(1) */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x58)); /* 0x17176C79: fadd dword ptr [ebp - 0x58] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x98)) = _v; } /* 0x17176C7C: fstp dword ptr [ebp - 0x98] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x54)); /* 0x17176C82: fadd dword ptr [ebp - 0x54] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x94)) = _v; } /* 0x17176C85: fstp dword ptr [ebp - 0x94] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17176C8B: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17176C8D: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0xCC))); /* 0x17176C8F: fld dword ptr [ebp - 0xcc] */
    _st[0] += _st[3]; /* 0x17176C95: fadd st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x90)) = _v; } /* 0x17176C97: fstp dword ptr [ebp - 0x90] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17176C9D: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17176C9E: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17176C9F: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_push(*(float*)&MEM32(ebp + (-0x20))); /* 0x17176CA0: fld dword ptr [ebp - 0x20] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x18); /* 0x17176CA3: fmul dword ptr [ecx + 0x18] */
    fp_push(*(float*)&MEM32(ebp + (-0x1C))); /* 0x17176CA6: fld dword ptr [ebp - 0x1c] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x1C); /* 0x17176CA9: fmul dword ptr [ecx + 0x1c] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17176CAC: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x24))); /* 0x17176CAE: fld dword ptr [ebp - 0x24] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x14); /* 0x17176CB1: fmul dword ptr [ecx + 0x14] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17176CB4: faddp st(1) */
    _st[0] += (double)*(float*)ADDR(ecx + 0x20); /* 0x17176CB6: fadd dword ptr [ecx + 0x20] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x17176CB9: fcom st(1) */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x17176CBB: fst dword ptr [ebp - 4] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17176CBE: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x17176CC0: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_17176D3A; /* 0x17176CC3: jnp 0x17176d3a */
L_17176CC5:
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x17176CC5: fcomp st(2) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17176CC7: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x17176CC9: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_17176D3C; /* 0x17176CCC: je 0x17176d3c */
L_17176CCE:
    fp_push(*(float*)&MEM32(ebp + (-0x20))); /* 0x17176CCE: fld dword ptr [ebp - 0x20] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x28); /* 0x17176CD1: fmul dword ptr [ecx + 0x28] */
    fp_push(*(float*)&MEM32(ebp + (-0x1C))); /* 0x17176CD4: fld dword ptr [ebp - 0x1c] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x2C); /* 0x17176CD7: fmul dword ptr [ecx + 0x2c] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17176CDA: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x24))); /* 0x17176CDC: fld dword ptr [ebp - 0x24] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x24); /* 0x17176CDF: fmul dword ptr [ecx + 0x24] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17176CE2: faddp st(1) */
    _st[0] += (double)*(float*)ADDR(ecx + 0x30); /* 0x17176CE4: fadd dword ptr [ecx + 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x17176CE7: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17176CE9: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x17176CEB: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_17176D3A; /* 0x17176CEE: jnp 0x17176d3a */
L_17176CF0:
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x17176CF0: fcom st(2) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17176CF2: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x17176CF4: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_17176D3A; /* 0x17176CF7: je 0x17176d3a */
L_17176CF9:
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x17176CF9: fld dword ptr [ebp - 4] */
    _st[0] += _st[1]; /* 0x17176CFC: fadd st(1) */
    _fpu_cmp = FPU_CMP(_st[0], _st[3]); /* 0x17176CFE: fcomp st(3) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17176D00: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x17176D02: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_17176D3A; /* 0x17176D05: je 0x17176d3a */
L_17176D07:
    fp_push(*(float*)&MEM32(ebp + (-0x6C))); /* 0x17176D07: fld dword ptr [ebp - 0x6c] */
    eax = MEM32(ebp + (-0x4)); /* 0x17176D0A: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(ebx + 0xB8); /* 0x17176D0D: mov ecx, dword ptr [ebx + 0xb8] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x17176D13: fst dword ptr [ebp - 0x18] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x88)) = _v; } /* 0x17176D16: fstp dword ptr [ebp - 0x88] */
    MEM32(ebp + (-0x80)) = eax; /* 0x17176D1C: mov dword ptr [ebp - 0x80], eax */
    MEM32(ebp + (-0x64)) = 1; /* 0x17176D1F: mov dword ptr [ebp - 0x64], 1 */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x7C)) = _v; } /* 0x17176D26: fstp dword ptr [ebp - 0x7c] */
    eax = MEM32(edx + 0x18); /* 0x17176D29: mov eax, dword ptr [edx + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + 0x8); /* 0x17176D2C: add eax, dword ptr [ebp + 8] */
    _flag_k = FK_ADD;
    eax = MEM32(ecx + eax * 4); /* 0x17176D2F: mov eax, dword ptr [ecx + eax*4] */
    MEM32(ebp + (-0x84)) = eax; /* 0x17176D32: mov dword ptr [ebp - 0x84], eax */
    goto L_17176D3C; /* 0x17176D38: jmp 0x17176d3c */
L_17176D3A:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17176D3A: fstp st(0) */
L_17176D3C:
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + 1; /* 0x17176D3C: inc dword ptr [ebp + 8] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + 0x8); /* 0x17176D3F: mov eax, dword ptr [ebp + 8] */
    /* cmp eax, MEM32(ebp + (-0x9C)) */ /* 0x17176D42: cmp eax, dword ptr [ebp - 0x9c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x9C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17176BFD; /* 0x17176D48: jb 0x17176bfd */
L_17176D4E:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) + 1; /* 0x17176D4E: inc dword ptr [ebp - 8] */
    _flag_k = FK_INC;
    goto L_17176D61; /* 0x17176D51: jmp 0x17176d61 */
L_17176D53:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17176D53: fstp st(0) */
L_17176D55:
    edx = MEM32(edx + 0x1C); /* 0x17176D55: mov edx, dword ptr [edx + 0x1c] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x1FFFFFFFu);
    edx = edx & 0x1FFFFFFFu; /* 0x17176D58: and edx, 0x1fffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = edx; /* 0x17176D5E: mov dword ptr [ebp - 8], edx */
L_17176D61:
    eax = MEM32(ebp + (-0x8)); /* 0x17176D61: mov eax, dword ptr [ebp - 8] */
    /* cmp eax, MEM32(ebp + (-0xA4)) */ /* 0x17176D64: cmp eax, dword ptr [ebp - 0xa4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0xA4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17176AD7; /* 0x17176D6A: jb 0x17176ad7 */
L_17176D70:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x14)) = MEM32(ebp + (-0x14)) + 4; /* 0x17176D70: add dword ptr [ebp - 0x14], 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) - 1; /* 0x17176D74: dec dword ptr [ebp - 0x10] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_17176AA1; /* 0x17176D77: jne 0x17176aa1 */
L_17176D7D:
    /* cmp MEM32(ebp + (-0x64)), 0 */ /* 0x17176D7D: cmp dword ptr [ebp - 0x64], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x64))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17176D81: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17176D83: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17176D85: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17176D87: fstp st(0) */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17176DA8; /* 0x17176D89: je 0x17176da8 */
L_17176D8B:
    eax = MEM32(ebp + (-0x84)); /* 0x17176D8B: mov eax, dword ptr [ebp - 0x84] */
    /* cmp eax, MEM32(ebp + (-0xA0)) */ /* 0x17176D91: cmp eax, dword ptr [ebp - 0xa0] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0xA0)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_17176DA8; /* 0x17176D97: jb 0x17176da8 */
L_17176D99:
    ecx = MEM32(ebp + 0xC); /* 0x17176D99: mov ecx, dword ptr [ebp + 0xc] */
    eax = MEM32(ecx); /* 0x17176D9C: mov eax, dword ptr [ecx] */
    edx = ebp + (-0x88); /* 0x17176D9E: lea edx, [ebp - 0x88] */
    PUSH32(esp, edx); /* 0x17176DA4: push edx */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x17176DA5: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
L_17176DA8:
    /* cmp MEM32(ebp + (-0x68)), 0 */ /* 0x17176DA8: cmp dword ptr [ebp - 0x68], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x68))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17176DB4; /* 0x17176DAC: jne 0x17176db4 */
L_17176DAE:
    eax = MEM32(ebp + (-0x64)); /* 0x17176DAE: mov eax, dword ptr [ebp - 0x64] */
    MEM32(ebp + (-0x68)) = eax; /* 0x17176DB1: mov dword ptr [ebp - 0x68], eax */
L_17176DB4:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x5C))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x5C)) = MEM32(ebp + (-0x5C)) + 1; /* 0x17176DB4: inc dword ptr [ebp - 0x5c] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + (-0x5C)); /* 0x17176DB7: mov eax, dword ptr [ebp - 0x5c] */
    /* cmp eax, MEM32(ebp + (-0x78)) */ /* 0x17176DBA: cmp eax, dword ptr [ebp - 0x78] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x78)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17176841; /* 0x17176DBD: jb 0x17176841 */
L_17176DC3:
    eax = MEM32(ebp + (-0x68)); /* 0x17176DC3: mov eax, dword ptr [ebp - 0x68] */
    edi = POP32_VAL(esp); /* 0x17176DC6: pop edi */
    esi = POP32_VAL(esp); /* 0x17176DC7: pop esi */
    ebx = POP32_VAL(esp); /* 0x17176DC8: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17176DC9: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x17176DCA: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_17176DD2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17176DD2u);

L_17176DD2:
    eax = MEM32(ecx + 0x4); /* 0x17176DD2: mov eax, dword ptr [ecx + 4] */
    /* test eax, eax */ /* 0x17176DD5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17176DED; /* 0x17176DD7: je 0x17176ded */
L_17176DD9:
    /* cmp MEM32(eax + 0x8), 0 */ /* 0x17176DD9: cmp dword ptr [eax + 8], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17176DE4; /* 0x17176DDD: je 0x17176de4 */
L_17176DDF:
    eax = MEM32(eax + 0x4); /* 0x17176DDF: mov eax, dword ptr [eax + 4] */
    goto L_17176DE6; /* 0x17176DE2: jmp 0x17176de6 */
L_17176DE4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17176DE4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_17176DE6:
    /* test eax, eax */ /* 0x17176DE6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17176DED; /* 0x17176DE8: je 0x17176ded */
L_17176DEA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17176DEA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x17176DEC: ret  */
L_17176DED:
    eax = 0x8876086Cu; /* 0x17176DED: mov eax, 0x8876086c */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x17176DF2: ret  */
    RECOMP_REGS_OUT();
}

void sub_17176DF8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17176DF8u);

L_17176DF8:
    eax = 0x1721C002u; /* 0x17176DF8: mov eax, 0x1721c002 */
    RECOMP_CALL(sub_1721B168); /* 0x17176DFD: call 0x1721b168 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x17176E02: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x17176E05: push ebx */
    PUSH32(esp, edi); /* 0x17176E06: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x17176E07: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0xC), edi */ /* 0x17176E09: cmp dword ptr [ebp + 0xc], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = ecx; /* 0x17176E0C: mov ebx, ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17176FD5; /* 0x17176E0E: je 0x17176fd5 */
L_17176E14:
    /* cmp MEM32(ebp + 0x10), edi */ /* 0x17176E14: cmp dword ptr [ebp + 0x10], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17176FD5; /* 0x17176E17: je 0x17176fd5 */
L_17176E1D:
    /* cmp MEM8(ebp + 0x18), 0 */ /* 0x17176E1D: cmp byte ptr [ebp + 0x18], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x18)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    PUSH32(esp, esi); /* 0x17176E21: push esi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17176E58; /* 0x17176E22: je 0x17176e58 */
L_17176E24:
    /* cmp MEM8(ebx + 0x120), 0 */ /* 0x17176E24: cmp byte ptr [ebx + 0x120], 0 */
    _flag_a = (uint32_t)(MEM8(ebx + 0x120)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17176E31; /* 0x17176E2B: jne 0x17176e31 */
L_17176E2D:
    MEM8(ebp + 0x18) = (uint8_t)(0); /* 0x17176E2D: mov byte ptr [ebp + 0x18], 0 */
L_17176E31:
    /* cmp MEM8(ebp + 0x18), 0 */ /* 0x17176E31: cmp byte ptr [ebp + 0x18], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x18)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17176E58; /* 0x17176E35: je 0x17176e58 */
L_17176E37:
    eax = MEM32(ebx); /* 0x17176E37: mov eax, dword ptr [ebx] */
    PUSH32(esp, ebx); /* 0x17176E39: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x30)); /* 0x17176E3A: call dword ptr [eax + 0x30] */
    RECOMP_FLAGS_IN();
    ecx = ebx; /* 0x17176E3D: mov ecx, ebx */
    esi = eax; /* 0x17176E3F: mov esi, eax */
    RECOMP_CALL(sub_1717CCD0); /* 0x17176E41: call 0x1717ccd0 */
    RECOMP_FLAGS_IN();
    /* cmp eax, esi */ /* 0x17176E46: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17176E4E; /* 0x17176E48: jne 0x17176e4e */
L_17176E4A:
    MEM8(ebp + 0x18) = (uint8_t)(0); /* 0x17176E4A: mov byte ptr [ebp + 0x18], 0 */
L_17176E4E:
    /* cmp MEM8(ebp + 0x18), 0 */ /* 0x17176E4E: cmp byte ptr [ebp + 0x18], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x18)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17176F06; /* 0x17176E52: jne 0x17176f06 */
L_17176E58:
    eax = MEM32(ebp + 0x8); /* 0x17176E58: mov eax, dword ptr [ebp + 8] */
    /* cmp eax, edi */ /* 0x17176E5B: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = MEM32(ebp + 0x14); /* 0x17176E5D: mov esi, dword ptr [ebp + 0x14] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17176E67; /* 0x17176E60: je 0x17176e67 */
L_17176E62:
    eax = MEM32(eax + 0x8); /* 0x17176E62: mov eax, dword ptr [eax + 8] */
    MEM32(esi) = eax; /* 0x17176E65: mov dword ptr [esi], eax */
L_17176E67:
    eax = MEM32(esi); /* 0x17176E67: mov eax, dword ptr [esi] */
    /* cmp eax, edi */ /* 0x17176E69: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17176E78; /* 0x17176E6B: je 0x17176e78 */
L_17176E6D:
    ecx = MEM32(eax); /* 0x17176E6D: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x17176E6F: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x4)); /* 0x17176E70: call dword ptr [ecx + 4] */
    RECOMP_FLAGS_IN();
    goto L_17176FCE; /* 0x17176E73: jmp 0x17176fce */
L_17176E78:
    PUSH32(esp, 0x20u); /* 0x17176E78: push 0x20 */
    RECOMP_CALL(sub_1721B01C); /* 0x17176E7A: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x17176E7F: pop ecx */
    MEM32(ebp + 0x18) = eax; /* 0x17176E80: mov dword ptr [ebp + 0x18], eax */
    /* cmp eax, edi */ /* 0x17176E83: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = edi; /* 0x17176E85: mov dword ptr [ebp - 4], edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17176E93; /* 0x17176E88: je 0x17176e93 */
L_17176E8A:
    ecx = eax; /* 0x17176E8A: mov ecx, eax */
    RECOMP_CALL(sub_17183A8F); /* 0x17176E8C: call 0x17183a8f */
    RECOMP_FLAGS_IN();
    goto L_17176E95; /* 0x17176E91: jmp 0x17176e95 */
L_17176E93:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17176E93: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_17176E95:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x17176E95: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, edi */ /* 0x17176E99: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi) = eax; /* 0x17176E9B: mov dword ptr [esi], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17176F45; /* 0x17176E9D: je 0x17176f45 */
L_17176EA3:
    eax = MEM32(ebx + 0x4); /* 0x17176EA3: mov eax, dword ptr [ebx + 4] */
    /* cmp MEM32(eax + 0x8), 0 */ /* 0x17176EA6: cmp dword ptr [eax + 8], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(eax + 0x40); /* 0x17176EAA: mov ecx, dword ptr [eax + 0x40] */
    edx = MEM32(eax + 0x24); /* 0x17176EAD: mov edx, dword ptr [eax + 0x24] */
    ecx = ecx + ecx * 2; /* 0x17176EB0: lea ecx, [ecx + ecx*2] */
    edi = edx + ecx * 4; /* 0x17176EB3: lea edi, [edx + ecx*4] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17176EC0; /* 0x17176EB6: je 0x17176ec0 */
L_17176EB8:
    eax = MEM32(eax + 0x4); /* 0x17176EB8: mov eax, dword ptr [eax + 4] */
    MEM32(ebp + 0x18) = eax; /* 0x17176EBB: mov dword ptr [ebp + 0x18], eax */
    goto L_17176EC4; /* 0x17176EBE: jmp 0x17176ec4 */
L_17176EC0:
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) & 0; /* 0x17176EC0: and dword ptr [ebp + 0x18], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_17176EC4:
    fp_push(*(float*)&MEM32(0x170018CC)); /* 0x17176EC4: fld dword ptr [0x170018cc] */
    PUSH32(esp, ecx); /* 0x17176ECA: push ecx */
    ecx = ebx; /* 0x17176ECB: mov ecx, ebx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x17176ECD: fstp dword ptr [esp] */
    RECOMP_CALL(sub_1717CCD0); /* 0x17176ED0: call 0x1717ccd0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi); /* 0x17176ED5: mov ecx, dword ptr [esi] */
    PUSH32(esp, eax); /* 0x17176ED7: push eax */
    PUSH32(esp, edi); /* 0x17176ED8: push edi */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x17176ED9: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x17176EDC: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x17176EDF: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_17182DC5); /* 0x17176EE2: call 0x17182dc5 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x17176EE7: mov edi, eax */
    /* test edi, edi */ /* 0x17176EE9: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_17176FCE; /* 0x17176EEB: jge 0x17176fce */
L_17176EF1:
    ecx = MEM32(esi); /* 0x17176EF1: mov ecx, dword ptr [esi] */
    /* test ecx, ecx */ /* 0x17176EF3: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17176EFE; /* 0x17176EF5: je 0x17176efe */
L_17176EF7:
    PUSH32(esp, 1); /* 0x17176EF7: push 1 */
    RECOMP_CALL(sub_17174E91); /* 0x17176EF9: call 0x17174e91 */
    RECOMP_FLAGS_IN();
L_17176EFE:
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x17176EFE: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_17176FD0; /* 0x17176F01: jmp 0x17176fd0 */
L_17176F06:
    ecx = ebx; /* 0x17176F06: mov ecx, ebx */
    RECOMP_CALL(sub_17174E5D); /* 0x17176F08: call 0x17174e5d */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x17176F0D: mov edi, eax */
    /* test edi, edi */ /* 0x17176F0F: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17176FD0; /* 0x17176F11: jl 0x17176fd0 */
L_17176F17:
    PUSH32(esp, 0x20u); /* 0x17176F17: push 0x20 */
    RECOMP_CALL(sub_1721B01C); /* 0x17176F19: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x17176F1E: pop ecx */
    MEM32(ebp + 0x18) = eax; /* 0x17176F1F: mov dword ptr [ebp + 0x18], eax */
    /* test eax, eax */ /* 0x17176F22: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 1; /* 0x17176F24: mov dword ptr [ebp - 4], 1 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17176F36; /* 0x17176F2B: je 0x17176f36 */
L_17176F2D:
    ecx = eax; /* 0x17176F2D: mov ecx, eax */
    RECOMP_CALL(sub_17183A8F); /* 0x17176F2F: call 0x17183a8f */
    RECOMP_FLAGS_IN();
    goto L_17176F38; /* 0x17176F34: jmp 0x17176f38 */
L_17176F36:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17176F36: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_17176F38:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x17176F38: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x17176F3C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(ebp + 0x14); /* 0x17176F3E: mov esi, dword ptr [ebp + 0x14] */
    MEM32(esi) = eax; /* 0x17176F41: mov dword ptr [esi], eax */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17176F4F; /* 0x17176F43: jne 0x17176f4f */
L_17176F45:
    edi = 0x8007000Eu; /* 0x17176F45: mov edi, 0x8007000e */
    goto L_17176FD0; /* 0x17176F4A: jmp 0x17176fd0 */
L_17176F4F:
    ecx = ebp + (-0x1C); /* 0x17176F4F: lea ecx, [ebp - 0x1c] */
    RECOMP_CALL(sub_17175D0B); /* 0x17176F52: call 0x17175d0b */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x1C); /* 0x17176F57: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x17176F5A: push eax */
    ecx = ebx + 0x74; /* 0x17176F5B: lea ecx, [ebx + 0x74] */
    MEM32(ebp + (-0x4)) = 2; /* 0x17176F5E: mov dword ptr [ebp - 4], 2 */
    RECOMP_CALL(sub_17188822); /* 0x17176F65: call 0x17188822 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x17176F6A: mov edi, eax */
    /* test edi, edi */ /* 0x17176F6C: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17176FA4; /* 0x17176F6E: jl 0x17176fa4 */
L_17176F70:
    eax = MEM32(ebx + 0x4); /* 0x17176F70: mov eax, dword ptr [ebx + 4] */
    /* cmp MEM32(eax + 0x8), 0 */ /* 0x17176F73: cmp dword ptr [eax + 8], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17176F7E; /* 0x17176F77: je 0x17176f7e */
L_17176F79:
    eax = MEM32(eax + 0x4); /* 0x17176F79: mov eax, dword ptr [eax + 4] */
    goto L_17176F80; /* 0x17176F7C: jmp 0x17176f80 */
L_17176F7E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17176F7E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_17176F80:
    fp_push(*(float*)&MEM32(0x170018CC)); /* 0x17176F80: fld dword ptr [0x170018cc] */
    PUSH32(esp, ecx); /* 0x17176F86: push ecx */
    ecx = MEM32(esi); /* 0x17176F87: mov ecx, dword ptr [esi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x17176F89: fstp dword ptr [esp] */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x17176F8C: push dword ptr [ebp - 0x18] */
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x17176F8F: push dword ptr [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x17176F92: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x17176F93: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x17176F96: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_17182DC5); /* 0x17176F99: call 0x17182dc5 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x17176F9E: mov edi, eax */
    /* test edi, edi */ /* 0x17176FA0: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_17176FC2; /* 0x17176FA2: jge 0x17176fc2 */
L_17176FA4:
    ecx = MEM32(esi); /* 0x17176FA4: mov ecx, dword ptr [esi] */
    /* test ecx, ecx */ /* 0x17176FA6: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17176FB1; /* 0x17176FA8: je 0x17176fb1 */
L_17176FAA:
    PUSH32(esp, 1); /* 0x17176FAA: push 1 */
    RECOMP_CALL(sub_17174E91); /* 0x17176FAC: call 0x17174e91 */
    RECOMP_FLAGS_IN();
L_17176FB1:
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x17176FB1: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x17176FB4: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x1C); /* 0x17176FB8: lea ecx, [ebp - 0x1c] */
    RECOMP_CALL(sub_1717AF06); /* 0x17176FBB: call 0x1717af06 */
    RECOMP_FLAGS_IN();
    goto L_17176FD0; /* 0x17176FC0: jmp 0x17176fd0 */
L_17176FC2:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x17176FC2: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x1C); /* 0x17176FC6: lea ecx, [ebp - 0x1c] */
    RECOMP_CALL(sub_1717AF06); /* 0x17176FC9: call 0x1717af06 */
    RECOMP_FLAGS_IN();
L_17176FCE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x17176FCE: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_17176FD0:
    eax = edi; /* 0x17176FD0: mov eax, edi */
    esi = POP32_VAL(esp); /* 0x17176FD2: pop esi */
    goto L_17176FDA; /* 0x17176FD3: jmp 0x17176fda */
L_17176FD5:
    eax = 0x8876086Cu; /* 0x17176FD5: mov eax, 0x8876086c */
L_17176FDA:
    ecx = MEM32(ebp + (-0xC)); /* 0x17176FDA: mov ecx, dword ptr [ebp - 0xc] */
    edi = POP32_VAL(esp); /* 0x17176FDD: pop edi */
    ebx = POP32_VAL(esp); /* 0x17176FDE: pop ebx */
    MEM32(FS_BASE + (0)) = ecx; /* 0x17176FDF: mov dword ptr fs:[0], ecx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17176FE6: leave  */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x17176FE7: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_17177C1E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17177C1Eu);

L_17177C1E:
    edi = edi; /* 0x17177C1E: mov edi, edi */
    PUSH32(esp, esi); /* 0x17177C20: push esi */
    esi = ecx; /* 0x17177C21: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17177C23: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 8); /* 0x17177C25: push 8 */
    MEM32(esi) = eax; /* 0x17177C27: mov dword ptr [esi], eax */
    MEM32(esi + 0x4) = eax; /* 0x17177C29: mov dword ptr [esi + 4], eax */
    MEM32(esi + 0x8) = eax; /* 0x17177C2C: mov dword ptr [esi + 8], eax */
    RECOMP_CALL(sub_17175D54); /* 0x17177C2F: call 0x17175d54 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0xC) = eax; /* 0x17177C34: mov dword ptr [esi + 0xc], eax */
    eax = esi; /* 0x17177C37: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x17177C39: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x17177C3A: ret  */
    RECOMP_REGS_OUT();
}

void sub_17177C40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17177C40u);

L_17177C40:
    edi = edi; /* 0x17177C40: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17177C42: push ebp */
    ebp = esp; /* 0x17177C43: mov ebp, esp */
    PUSH32(esp, esi); /* 0x17177C45: push esi */
    PUSH32(esp, edi); /* 0x17177C46: push edi */
    edi = MEM32(ebp + 0x8); /* 0x17177C47: mov edi, dword ptr [ebp + 8] */
    esi = ecx; /* 0x17177C4A: mov esi, ecx */
    /* cmp edi, MEM32(esi + 0x8) */ /* 0x17177C4C: cmp edi, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17177C55; /* 0x17177C4F: jne 0x17177c55 */
L_17177C51:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17177C51: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_17177C61; /* 0x17177C53: jmp 0x17177c61 */
L_17177C55:
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0; /* 0x17177C55: and dword ptr [esi + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x17177C59: push edi */
    ecx = esi; /* 0x17177C5A: mov ecx, esi */
    RECOMP_CALL(sub_17175D54); /* 0x17177C5C: call 0x17175d54 */
    RECOMP_FLAGS_IN();
L_17177C61:
    MEM32(esi + 0x4) = edi; /* 0x17177C61: mov dword ptr [esi + 4], edi */
    edi = POP32_VAL(esp); /* 0x17177C64: pop edi */
    esi = POP32_VAL(esp); /* 0x17177C65: pop esi */
    ebp = POP32_VAL(esp); /* 0x17177C66: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x17177C67: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_17177C6F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17177C6Fu);

L_17177C6F:
    edi = edi; /* 0x17177C6F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17177C71: push ebp */
    ebp = esp; /* 0x17177C72: mov ebp, esp */
    PUSH32(esp, esi); /* 0x17177C74: push esi */
    PUSH32(esp, edi); /* 0x17177C75: push edi */
    edi = MEM32(ebp + 0x8); /* 0x17177C76: mov edi, dword ptr [ebp + 8] */
    esi = ecx; /* 0x17177C79: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17177C7B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x8), edi */ /* 0x17177C7D: cmp dword ptr [esi + 8], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_17177C88; /* 0x17177C80: jae 0x17177c88 */
L_17177C82:
    PUSH32(esp, edi); /* 0x17177C82: push edi */
    RECOMP_CALL(sub_17175D54); /* 0x17177C83: call 0x17175d54 */
    RECOMP_FLAGS_IN();
L_17177C88:
    MEM32(esi + 0x4) = edi; /* 0x17177C88: mov dword ptr [esi + 4], edi */
    edi = POP32_VAL(esp); /* 0x17177C8B: pop edi */
    esi = POP32_VAL(esp); /* 0x17177C8C: pop esi */
    ebp = POP32_VAL(esp); /* 0x17177C8D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x17177C8E: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_17177C96(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17177C96u);

L_17177C96:
    edi = edi; /* 0x17177C96: mov edi, edi */
    PUSH32(esp, esi); /* 0x17177C98: push esi */
    esi = ecx; /* 0x17177C99: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17177C9B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 8); /* 0x17177C9D: push 8 */
    MEM32(esi) = eax; /* 0x17177C9F: mov dword ptr [esi], eax */
    MEM32(esi + 0x4) = eax; /* 0x17177CA1: mov dword ptr [esi + 4], eax */
    MEM32(esi + 0x8) = eax; /* 0x17177CA4: mov dword ptr [esi + 8], eax */
    RECOMP_CALL(sub_17175E01); /* 0x17177CA7: call 0x17175e01 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0xC) = eax; /* 0x17177CAC: mov dword ptr [esi + 0xc], eax */
    eax = esi; /* 0x17177CAF: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x17177CB1: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x17177CB2: ret  */
    RECOMP_REGS_OUT();
}

void sub_17177CB8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17177CB8u);

L_17177CB8:
    edi = edi; /* 0x17177CB8: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17177CBA: push ebp */
    ebp = esp; /* 0x17177CBB: mov ebp, esp */
    PUSH32(esp, esi); /* 0x17177CBD: push esi */
    PUSH32(esp, edi); /* 0x17177CBE: push edi */
    edi = MEM32(ebp + 0x8); /* 0x17177CBF: mov edi, dword ptr [ebp + 8] */
    esi = ecx; /* 0x17177CC2: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17177CC4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x8), edi */ /* 0x17177CC6: cmp dword ptr [esi + 8], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_17177CD1; /* 0x17177CC9: jae 0x17177cd1 */
L_17177CCB:
    PUSH32(esp, edi); /* 0x17177CCB: push edi */
    RECOMP_CALL(sub_17175E01); /* 0x17177CCC: call 0x17175e01 */
    RECOMP_FLAGS_IN();
L_17177CD1:
    MEM32(esi + 0x4) = edi; /* 0x17177CD1: mov dword ptr [esi + 4], edi */
    edi = POP32_VAL(esp); /* 0x17177CD4: pop edi */
    esi = POP32_VAL(esp); /* 0x17177CD5: pop esi */
    ebp = POP32_VAL(esp); /* 0x17177CD6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x17177CD7: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_17177CDF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17177CDFu);

L_17177CDF:
    eax = 0x1721C027u; /* 0x17177CDF: mov eax, 0x1721c027 */
    RECOMP_CALL(sub_1721B168); /* 0x17177CE4: call 0x1721b168 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x17177CE9: push ecx */
    PUSH32(esp, esi); /* 0x17177CEA: push esi */
    esi = ecx; /* 0x17177CEB: mov esi, ecx */
    ecx = esi + 0x4; /* 0x17177CED: lea ecx, [esi + 4] */
    MEM32(ebp + (-0x10)) = esi; /* 0x17177CF0: mov dword ptr [ebp - 0x10], esi */
    MEM32(esi) = 0x17021ED0u; /* 0x17177CF3: mov dword ptr [esi], 0x17021ed0 */
    RECOMP_CALL(sub_17177C96); /* 0x17177CF9: call 0x17177c96 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x17177CFE: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi + 0x14; /* 0x17177D02: lea ecx, [esi + 0x14] */
    RECOMP_CALL(sub_17177C1E); /* 0x17177D05: call 0x17177c1e */
    RECOMP_FLAGS_IN();
    ecx = esi + 0x24; /* 0x17177D0A: lea ecx, [esi + 0x24] */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x17177D0D: mov byte ptr [ebp - 4], 1 */
    RECOMP_CALL(sub_17175D0B); /* 0x17177D11: call 0x17175d0b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0x34)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x34) = MEM32(esi + 0x34) & 0; /* 0x17177D16: and dword ptr [esi + 0x34], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0xC)); /* 0x17177D1A: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(esi + 0x98) = 0x358637BDu; /* 0x17177D1D: mov dword ptr [esi + 0x98], 0x358637bd */
    MEM32(esi + 0x9C) = 0x43480000u; /* 0x17177D27: mov dword ptr [esi + 0x9c], 0x43480000 */
    eax = esi; /* 0x17177D31: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x17177D33: pop esi */
    MEM32(FS_BASE + (0)) = ecx; /* 0x17177D34: mov dword ptr fs:[0], ecx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17177D3B: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x17177D3C: ret  */
    RECOMP_REGS_OUT();
}

void sub_17177D42(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17177D42u);

L_17177D42:
    edi = edi; /* 0x17177D42: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17177D44: push ebp */
    ebp = esp; /* 0x17177D45: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x370u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x370u; /* 0x17177D47: sub esp, 0x370 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x17177D4D: push ebx */
    PUSH32(esp, esi); /* 0x17177D4E: push esi */
    ebx = ecx; /* 0x17177D4F: mov ebx, ecx */
    PUSH32(esp, edi); /* 0x17177D51: push edi */
    PUSH32(esp, MEM32(ebx + 0x34)); /* 0x17177D52: push dword ptr [ebx + 0x34] */
    RECOMP_CALL(sub_1721B010); /* 0x17177D55: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    fp_push(0.0); /* 0x17177D5A: fldz  */
    esi = MEM32(ebp + 0x8); /* 0x17177D5C: mov esi, dword ptr [ebp + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx + 0x90) = _v; } /* 0x17177D5F: fstp dword ptr [ebx + 0x90] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x17177D65: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp esi, edi */ /* 0x17177D67: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x17177D69: pop ecx */
    MEM32(ebx + 0x18) = edi; /* 0x17177D6A: mov dword ptr [ebx + 0x18], edi */
    MEM32(ebx + 0x28) = edi; /* 0x17177D6D: mov dword ptr [ebx + 0x28], edi */
    MEM32(ebx + 0x8) = edi; /* 0x17177D70: mov dword ptr [ebx + 8], edi */
    MEM32(ebx + 0x3C) = edi; /* 0x17177D73: mov dword ptr [ebx + 0x3c], edi */
    MEM32(ebx + 0x40) = edi; /* 0x17177D76: mov dword ptr [ebx + 0x40], edi */
    MEM32(ebp + (-0x4)) = edi; /* 0x17177D79: mov dword ptr [ebp - 4], edi */
    MEM32(ebp + (-0x18)) = edi; /* 0x17177D7C: mov dword ptr [ebp - 0x18], edi */
    MEM32(ebp + (-0x2C)) = edi; /* 0x17177D7F: mov dword ptr [ebp - 0x2c], edi */
    MEM32(ebp + (-0x3C)) = edi; /* 0x17177D82: mov dword ptr [ebp - 0x3c], edi */
    MEM32(ebx + 0x34) = edi; /* 0x17177D85: mov dword ptr [ebx + 0x34], edi */
    MEM32(ebp + (-0x28)) = edi; /* 0x17177D88: mov dword ptr [ebp - 0x28], edi */
    MEM32(ebp + (-0x40)) = edi; /* 0x17177D8B: mov dword ptr [ebp - 0x40], edi */
    MEM32(ebp + (-0x44)) = edi; /* 0x17177D8E: mov dword ptr [ebp - 0x44], edi */
    MEM32(ebx + 0x38) = 1; /* 0x17177D91: mov dword ptr [ebx + 0x38], 1 */
    MEM8(ebp + (-0x1A)) = (uint8_t)(0); /* 0x17177D98: mov byte ptr [ebp - 0x1a], 0 */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171786A2; /* 0x17177D9C: je 0x171786a2 */
L_17177DA2:
    eax = MEM32(esi); /* 0x17177DA2: mov eax, dword ptr [esi] */
    ecx = ebp + (-0x44); /* 0x17177DA4: lea ecx, [ebp - 0x44] */
    PUSH32(esp, ecx); /* 0x17177DA7: push ecx */
    PUSH32(esp, edi); /* 0x17177DA8: push edi */
    PUSH32(esp, esi); /* 0x17177DA9: push esi */
    RECOMP_ICALL(MEM32(eax + 0x4C)); /* 0x17177DAA: call dword ptr [eax + 0x4c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17177DAD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_17177DB7; /* 0x17177DAF: jge 0x17177db7 */
L_17177DB1:
    eax = MEM32(ebp + (-0x44)); /* 0x17177DB1: mov eax, dword ptr [ebp - 0x44] */
    MEM32(ebx + 0x38) = eax; /* 0x17177DB4: mov dword ptr [ebx + 0x38], eax */
L_17177DB7:
    eax = MEM32(esi); /* 0x17177DB7: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x17177DB9: push esi */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x17177DBA: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x8)) = eax; /* 0x17177DBD: mov dword ptr [ebp - 8], eax */
    eax = MEM32(esi); /* 0x17177DC0: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x17177DC2: push esi */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x17177DC3: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x20)) = eax; /* 0x17177DC6: mov dword ptr [ebp - 0x20], eax */
    eax = MEM32(esi); /* 0x17177DC9: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x17177DCB: push esi */
    RECOMP_ICALL(MEM32(eax + 0x24)); /* 0x17177DCC: call dword ptr [eax + 0x24] */
    RECOMP_FLAGS_IN();
    /* test LO16(eax), 0x440u */ /* 0x17177DCF: test ax, 0x440 */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(0x440u) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171786A2; /* 0x17177DD3: jne 0x171786a2 */
L_17177DD9:
    eax = MEM32(esi); /* 0x17177DD9: mov eax, dword ptr [esi] */
    ecx = ebp + (-0x370); /* 0x17177DDB: lea ecx, [ebp - 0x370] */
    PUSH32(esp, ecx); /* 0x17177DE1: push ecx */
    PUSH32(esp, esi); /* 0x17177DE2: push esi */
    RECOMP_ICALL(MEM32(eax + 0x1C)); /* 0x17177DE3: call dword ptr [eax + 0x1c] */
    RECOMP_FLAGS_IN();
    /* cmp eax, edi */ /* 0x17177DE6: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_171786A7; /* 0x17177DE8: jl 0x171786a7 */
L_17177DEE:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(edx, 0); /* 0x17177DEE: xor dl, dl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(ebp + (-0x21)) = (uint8_t)(LO8(edx)); /* 0x17177DF0: mov byte ptr [ebp - 0x21], dl */
    MEM8(ebp + (-0x19)) = (uint8_t)(LO8(edx)); /* 0x17177DF3: mov byte ptr [ebp - 0x19], dl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x17177DF6: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_17177DF8:
    eax = esi; /* 0x17177DF8: mov eax, esi */
    if (3u) _cf = (((eax) >> 29) & 1u); /* 0x17177DFA: shl eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 3u; /* 0x17177DFA: shl eax, 3 */
    /* cmp MEM16(ebp + eax + (-0x370)), 0xFFu */ /* 0x17177DFD: cmp word ptr [ebp + eax - 0x370], 0xff */
    _flag_a = (uint32_t)(MEM16(ebp + eax + (-0x370))) << 16; _flag_b = (uint32_t)(0xFFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17177E0E; /* 0x17177E07: jne 0x17177e0e */
L_17177E09:
    PUSH32(esp, 0x41u); /* 0x17177E09: push 0x41 */
    esi = POP32_VAL(esp); /* 0x17177E0B: pop esi */
    goto L_17177E4E; /* 0x17177E0C: jmp 0x17177e4e */
L_17177E0E:
    SET_LO8(ecx, MEM8(ebp + eax + (-0x36A))); /* 0x17177E0E: mov cl, byte ptr [ebp + eax - 0x36a] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x17177E15: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17177E26; /* 0x17177E17: jne 0x17177e26 */
L_17177E19:
    /* cmp MEM8(ebp + eax + (-0x369)), LO8(ecx) */ /* 0x17177E19: cmp byte ptr [ebp + eax - 0x369], cl */
    _flag_a = (uint32_t)(MEM8(ebp + eax + (-0x369))) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17177E26; /* 0x17177E20: jne 0x17177e26 */
L_17177E22:
    SET_LO8(edx, 1); /* 0x17177E22: mov dl, 1 */
    goto L_17177E4E; /* 0x17177E24: jmp 0x17177e4e */
L_17177E26:
    /* cmp LO8(ecx), 3 */ /* 0x17177E26: cmp cl, 3 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17177E3B; /* 0x17177E29: jne 0x17177e3b */
L_17177E2B:
    /* cmp MEM8(ebp + eax + (-0x369)), 0 */ /* 0x17177E2B: cmp byte ptr [ebp + eax - 0x369], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + eax + (-0x369))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17177E3B; /* 0x17177E33: jne 0x17177e3b */
L_17177E35:
    MEM8(ebp + (-0x21)) = (uint8_t)(1); /* 0x17177E35: mov byte ptr [ebp - 0x21], 1 */
    goto L_17177E4E; /* 0x17177E39: jmp 0x17177e4e */
L_17177E3B:
    /* cmp LO8(ecx), 5 */ /* 0x17177E3B: cmp cl, 5 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17177E4E; /* 0x17177E3E: jne 0x17177e4e */
L_17177E40:
    /* cmp MEM8(ebp + eax + (-0x369)), 0 */ /* 0x17177E40: cmp byte ptr [ebp + eax - 0x369], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + eax + (-0x369))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17177E4E; /* 0x17177E48: jne 0x17177e4e */
L_17177E4A:
    MEM8(ebp + (-0x19)) = (uint8_t)(1); /* 0x17177E4A: mov byte ptr [ebp - 0x19], 1 */
L_17177E4E:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x17177E4E: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, 0x41u */ /* 0x17177E4F: cmp esi, 0x41 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x41u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17177DF8; /* 0x17177E52: jb 0x17177df8 */
L_17177E54:
    /* test LO8(edx), LO8(edx) */ /* 0x17177E54: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171786A2; /* 0x17177E56: je 0x171786a2 */
L_17177E5C:
    /* cmp MEM8(ebp + (-0x21)), 0 */ /* 0x17177E5C: cmp byte ptr [ebp - 0x21], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x21))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171786A2; /* 0x17177E60: je 0x171786a2 */
L_17177E66:
    /* cmp MEM32(ebp + 0xC), edi */ /* 0x17177E66: cmp dword ptr [ebp + 0xc], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17177E75; /* 0x17177E69: je 0x17177e75 */
L_17177E6B:
    /* cmp MEM8(ebp + (-0x19)), 0 */ /* 0x17177E6B: cmp byte ptr [ebp - 0x19], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x19))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171786A2; /* 0x17177E6F: je 0x171786a2 */
L_17177E75:
    /* cmp MEM32(ebp + (-0x8)), edi */ /* 0x17177E75: cmp dword ptr [ebp - 8], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171786A2; /* 0x17177E78: je 0x171786a2 */
L_17177E7E:
    /* cmp MEM32(ebp + (-0x20)), edi */ /* 0x17177E7E: cmp dword ptr [ebp - 0x20], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171786A2; /* 0x17177E81: je 0x171786a2 */
L_17177E87:
    esi = MEM32(ebp + 0x10); /* 0x17177E87: mov esi, dword ptr [ebp + 0x10] */
    /* test esi, esi */ /* 0x17177E8A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x20)); /* 0x17177E8C: mov eax, dword ptr [ebp - 0x20] */
    edi = MEM32(ebp + (-0x8)); /* 0x17177E8F: mov edi, dword ptr [ebp - 8] */
    MEM32(ebp + (-0x30)) = eax; /* 0x17177E92: mov dword ptr [ebp - 0x30], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17177F22; /* 0x17177E95: je 0x17177f22 */
L_17177E9B:
    eax = MEM32(esi); /* 0x17177E9B: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x17177E9D: push esi */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x17177E9E: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x17177EA1: mov edi, eax */
    eax = MEM32(esi); /* 0x17177EA3: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ebp + (-0x8)); /* 0x17177EA5: add edi, dword ptr [ebp - 8] */
    _flag_k = FK_ADD;
    PUSH32(esp, esi); /* 0x17177EA8: push esi */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x17177EA9: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x20)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x20)); /* 0x17177EAC: add eax, dword ptr [ebp - 0x20] */
    _flag_k = FK_ADD;
    PUSH32(esp, esi); /* 0x17177EAF: push esi */
    MEM32(ebp + (-0x30)) = eax; /* 0x17177EB0: mov dword ptr [ebp - 0x30], eax */
    eax = MEM32(esi); /* 0x17177EB3: mov eax, dword ptr [esi] */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x17177EB5: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
    MEM32(ebx + 0x3C) = eax; /* 0x17177EB8: mov dword ptr [ebx + 0x3c], eax */
    eax = MEM32(esi); /* 0x17177EBB: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x17177EBD: push esi */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x17177EBE: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    MEM32(ebx + 0x40) = eax; /* 0x17177EC1: mov dword ptr [ebx + 0x40], eax */
    eax = MEM32(esi); /* 0x17177EC4: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x17177EC6: push esi */
    RECOMP_ICALL(MEM32(eax + 0x24)); /* 0x17177EC7: call dword ptr [eax + 0x24] */
    RECOMP_FLAGS_IN();
    /* test LO16(eax), 0x440u */ /* 0x17177ECA: test ax, 0x440 */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(0x440u) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171786A2; /* 0x17177ECE: jne 0x171786a2 */
L_17177ED4:
    eax = MEM32(esi); /* 0x17177ED4: mov eax, dword ptr [esi] */
    ecx = ebp + (-0x370); /* 0x17177ED6: lea ecx, [ebp - 0x370] */
    PUSH32(esp, ecx); /* 0x17177EDC: push ecx */
    PUSH32(esp, esi); /* 0x17177EDD: push esi */
    RECOMP_ICALL(MEM32(eax + 0x1C)); /* 0x17177EDE: call dword ptr [eax + 0x1c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17177EE1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171786A7; /* 0x17177EE3: jl 0x171786a7 */
L_17177EE9:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(ecx, 0); /* 0x17177EE9: xor cl, cl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17177EEB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_17177EED:
    /* cmp MEM16(ebp + eax * 8 + (-0x370)), 0xFFu */ /* 0x17177EED: cmp word ptr [ebp + eax*8 - 0x370], 0xff */
    _flag_a = (uint32_t)(MEM16(ebp + eax * 8 + (-0x370))) << 16; _flag_b = (uint32_t)(0xFFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17177EFE; /* 0x17177EF7: jne 0x17177efe */
L_17177EF9:
    PUSH32(esp, 0x41u); /* 0x17177EF9: push 0x41 */
    eax = POP32_VAL(esp); /* 0x17177EFB: pop eax */
    goto L_17177F14; /* 0x17177EFC: jmp 0x17177f14 */
L_17177EFE:
    /* cmp MEM8(ebp + eax * 8 + (-0x36A)), 0 */ /* 0x17177EFE: cmp byte ptr [ebp + eax*8 - 0x36a], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + eax * 8 + (-0x36A))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17177F14; /* 0x17177F06: jne 0x17177f14 */
L_17177F08:
    /* cmp MEM8(ebp + eax * 8 + (-0x369)), 0 */ /* 0x17177F08: cmp byte ptr [ebp + eax*8 - 0x369], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + eax * 8 + (-0x369))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17177F14; /* 0x17177F10: jne 0x17177f14 */
L_17177F12:
    SET_LO8(ecx, 1); /* 0x17177F12: mov cl, 1 */
L_17177F14:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17177F14: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, 0x41u */ /* 0x17177F15: cmp eax, 0x41 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x41u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17177EED; /* 0x17177F18: jb 0x17177eed */
L_17177F1A:
    /* test LO8(ecx), LO8(ecx) */ /* 0x17177F1A: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171786A2; /* 0x17177F1C: je 0x171786a2 */
L_17177F22:
    eax = edi + edi; /* 0x17177F22: lea eax, [edi + edi] */
    ecx = ebx + 0x14; /* 0x17177F25: lea ecx, [ebx + 0x14] */
    PUSH32(esp, eax); /* 0x17177F28: push eax */
    RECOMP_CALL(sub_17177C6F); /* 0x17177F29: call 0x17177c6f */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x17177F2E: mov edi, eax */
    /* test edi, edi */ /* 0x17177F30: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17178666; /* 0x17177F32: jl 0x17178666 */
L_17177F38:
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x17177F38: push dword ptr [ebp - 0x30] */
    ecx = ebx + 0x24; /* 0x17177F3B: lea ecx, [ebx + 0x24] */
    RECOMP_CALL(sub_17175D2D); /* 0x17177F3E: call 0x17175d2d */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x17177F43: mov edi, eax */
    /* test edi, edi */ /* 0x17177F45: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17178666; /* 0x17177F47: jl 0x17178666 */
L_17177F4D:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x17177F4D: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17177F68; /* 0x17177F51: je 0x17177f68 */
L_17177F53:
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x17177F53: push dword ptr [ebp - 8] */
    ecx = ebx + 0x4; /* 0x17177F56: lea ecx, [ebx + 4] */
    RECOMP_CALL(sub_17177CB8); /* 0x17177F59: call 0x17177cb8 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x17177F5E: mov edi, eax */
    /* test edi, edi */ /* 0x17177F60: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17178666; /* 0x17177F62: jl 0x17178666 */
L_17177F68:
    /* test esi, esi */ /* 0x17177F68: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1717819A; /* 0x17177F6A: je 0x1717819a */
L_17177F70:
    eax = MEM32(esi); /* 0x17177F70: mov eax, dword ptr [esi] */
    ecx = ebp + (-0x370); /* 0x17177F72: lea ecx, [ebp - 0x370] */
    PUSH32(esp, ecx); /* 0x17177F78: push ecx */
    PUSH32(esp, esi); /* 0x17177F79: push esi */
    RECOMP_ICALL(MEM32(eax + 0x1C)); /* 0x17177F7A: call dword ptr [eax + 0x1c] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x17177F7D: mov edi, eax */
    /* test edi, edi */ /* 0x17177F7F: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17178666; /* 0x17177F81: jl 0x17178666 */
L_17177F87:
    ecx = ebp + (-0x168); /* 0x17177F87: lea ecx, [ebp - 0x168] */
    RECOMP_CALL(sub_170B7D30); /* 0x17177F8D: call 0x170b7d30 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x370); /* 0x17177F92: lea eax, [ebp - 0x370] */
    PUSH32(esp, eax); /* 0x17177F98: push eax */
    ecx = ebp + (-0x168); /* 0x17177F99: lea ecx, [ebp - 0x168] */
    RECOMP_CALL(sub_170B7D48); /* 0x17177F9F: call 0x170b7d48 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x17177FA4: mov eax, dword ptr [esi] */
    ecx = ebp + (-0x18); /* 0x17177FA6: lea ecx, [ebp - 0x18] */
    PUSH32(esp, ecx); /* 0x17177FA9: push ecx */
    PUSH32(esp, esi); /* 0x17177FAA: push esi */
    RECOMP_ICALL(MEM32(eax + 0x34)); /* 0x17177FAB: call dword ptr [eax + 0x34] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x17177FAE: mov edi, eax */
    /* test edi, edi */ /* 0x17177FB0: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17178666; /* 0x17177FB2: jl 0x17178666 */
L_17177FB8:
    eax = MEM32(ebp + (-0x18)); /* 0x17177FB8: mov eax, dword ptr [ebp - 0x18] */
    ecx = MEM32(eax); /* 0x17177FBB: mov ecx, dword ptr [eax] */
    PUSH32(esp, 0x10u); /* 0x17177FBD: push 0x10 */
    edx = ebp + (-0x3C); /* 0x17177FBF: lea edx, [ebp - 0x3c] */
    PUSH32(esp, edx); /* 0x17177FC2: push edx */
    PUSH32(esp, 0); /* 0x17177FC3: push 0 */
    PUSH32(esp, 0); /* 0x17177FC5: push 0 */
    PUSH32(esp, eax); /* 0x17177FC7: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x2C)); /* 0x17177FC8: call dword ptr [ecx + 0x2c] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x17177FCB: mov edi, eax */
    /* test edi, edi */ /* 0x17177FCD: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17178666; /* 0x17177FCF: jl 0x17178666 */
L_17177FD5:
    eax = MEM32(esi); /* 0x17177FD5: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x17177FD7: push esi */
    RECOMP_ICALL(MEM32(eax + 0x20)); /* 0x17177FD8: call dword ptr [eax + 0x20] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x17177FDB: mov edi, eax */
    eax = MEM32(esi); /* 0x17177FDD: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x17177FDF: push esi */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x17177FE0: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x17177FE3: push edi */
    PUSH32(esp, MEM32(ebp + (-0x3C))); /* 0x17177FE4: push dword ptr [ebp - 0x3c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x17177FE7: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x17177FE9: push esi */
    ecx = ebp + (-0x168); /* 0x17177FEA: lea ecx, [ebp - 0x168] */
    MEM32(ebp + (-0x20)) = eax; /* 0x17177FF0: mov dword ptr [ebp - 0x20], eax */
    RECOMP_CALL(sub_170B7D6A); /* 0x17177FF3: call 0x170b7d6a */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x20)), esi */ /* 0x17177FF8: cmp dword ptr [ebp - 0x20], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x8)) = esi; /* 0x17177FFB: mov dword ptr [ebp - 8], esi */
    if (CMP_BE(_flag_a, _flag_b)) goto L_171780A6; /* 0x17177FFE: jbe 0x171780a6 */
L_17178004:
    fp_push(0.0); /* 0x17178004: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x17178006: fstp dword ptr [ebp - 0x14] */
    fp_push(0.0); /* 0x17178009: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x1717800B: fstp dword ptr [ebp - 0x10] */
    fp_push(0.0); /* 0x1717800E: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x17178010: fstp dword ptr [ebp - 0xc] */
L_17178013:
    eax = MEM32(ebp + (-0x8)); /* 0x17178013: mov eax, dword ptr [ebp - 8] */
    ecx = MEM32(ebx + 0x14); /* 0x17178016: mov ecx, dword ptr [ebx + 0x14] */
    esi = eax + eax * 2; /* 0x17178019: lea esi, [eax + eax*2] */
    PUSH32(esp, 3); /* 0x1717801C: push 3 */
    if (3u) _cf = (((esi) >> 29) & 1u); /* 0x1717801E: shl esi, 3 */
    if (3u) { _flag_a = recomp_flags_pack((esi << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 3u; /* 0x1717801E: shl esi, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x17178021: add ecx, esi */
    _flag_k = FK_ADD;
    PUSH32(esp, ecx); /* 0x17178023: push ecx */
    PUSH32(esp, eax); /* 0x17178024: push eax */
    PUSH32(esp, 0); /* 0x17178025: push 0 */
    PUSH32(esp, 0); /* 0x17178027: push 0 */
    ecx = ebp + (-0x168); /* 0x17178029: lea ecx, [ebp - 0x168] */
    MEM32(ebp + (-0x30)) = esi; /* 0x1717802F: mov dword ptr [ebp - 0x30], esi */
    RECOMP_CALL(sub_17175093); /* 0x17178032: call 0x17175093 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x8)), 0 */ /* 0x17178037: cmp dword ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebx + 0x14); /* 0x1717803B: mov eax, dword ptr [ebx + 0x14] */
    edi = esi + eax + 0xC; /* 0x1717803E: lea edi, [esi + eax + 0xc] */
    esi = ebp + (-0x14); /* 0x17178042: lea esi, [ebp - 0x14] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17178045: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17178046: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17178047: movsd dword ptr es:[edi], dword ptr [esi] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_17178063; /* 0x17178048: jne 0x17178063 */
L_1717804A:
    eax = MEM32(ebx + 0x14); /* 0x1717804A: mov eax, dword ptr [ebx + 0x14] */
    edi = ebx + 0x54; /* 0x1717804D: lea edi, [ebx + 0x54] */
    esi = eax; /* 0x17178050: mov esi, eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17178052: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17178053: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17178054: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = ebx + 0x48; /* 0x17178055: lea edi, [ebx + 0x48] */
    esi = eax; /* 0x17178058: mov esi, eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1717805A: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1717805B: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM8(ebp + (-0x1A)) = (uint8_t)(1); /* 0x1717805C: mov byte ptr [ebp - 0x1a], 1 */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17178060: movsd dword ptr es:[edi], dword ptr [esi] */
    goto L_17178097; /* 0x17178061: jmp 0x17178097 */
L_17178063:
    edx = MEM32(ebp + (-0x30)); /* 0x17178063: mov edx, dword ptr [ebp - 0x30] */
    PUSH32(esp, 3); /* 0x17178066: push 3 */
    ecx = ebx + 0x54; /* 0x17178068: lea ecx, [ebx + 0x54] */
    esi = POP32_VAL(esp); /* 0x1717806B: pop esi */
L_1717806C:
    eax = MEM32(ebx + 0x14); /* 0x1717806C: mov eax, dword ptr [ebx + 0x14] */
    fp_push(*(float*)&MEM32(edx + eax)); /* 0x1717806F: fld dword ptr [edx + eax] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ecx + (-0xC))); /* 0x17178072: fcom dword ptr [ecx - 0xc] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17178075: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x17178077: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1717807F; /* 0x1717807A: jp 0x1717807f */
L_1717807C:
    { float _v = (float)_st[0]; *(float*)ADDR(ecx + (-0xC)) = _v; } /* 0x1717807C: fst dword ptr [ecx - 0xc] */
L_1717807F:
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ecx)); /* 0x1717807F: fcom dword ptr [ecx] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17178081: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x17178083: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1717808C; /* 0x17178086: jne 0x1717808c */
L_17178088:
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx) = _v; } /* 0x17178088: fstp dword ptr [ecx] */
    goto L_1717808E; /* 0x1717808A: jmp 0x1717808e */
L_1717808C:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1717808C: fstp st(0) */
L_1717808E:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x1717808E: add edx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x17178091: add ecx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x17178094: dec esi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1717806C; /* 0x17178095: jne 0x1717806c */
L_17178097:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) + 1; /* 0x17178097: inc dword ptr [ebp - 8] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + (-0x8)); /* 0x1717809A: mov eax, dword ptr [ebp - 8] */
    /* cmp eax, MEM32(ebp + (-0x20)) */ /* 0x1717809D: cmp eax, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x20)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17178013; /* 0x171780A0: jb 0x17178013 */
L_171780A6:
    eax = MEM32(ebp + (-0x18)); /* 0x171780A6: mov eax, dword ptr [ebp - 0x18] */
    ecx = MEM32(eax); /* 0x171780A9: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x171780AB: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x30)); /* 0x171780AC: call dword ptr [ecx + 0x30] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x18)); /* 0x171780AF: mov eax, dword ptr [ebp - 0x18] */
    ecx = MEM32(eax); /* 0x171780B2: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x171780B4: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x171780B5: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x10); /* 0x171780B8: mov eax, dword ptr [ebp + 0x10] */
    ecx = MEM32(eax); /* 0x171780BB: mov ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x18)) = MEM32(ebp + (-0x18)) & 0; /* 0x171780BD: and dword ptr [ebp - 0x18], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = ebp + (-0x4); /* 0x171780C1: lea edx, [ebp - 4] */
    PUSH32(esp, edx); /* 0x171780C4: push edx */
    PUSH32(esp, eax); /* 0x171780C5: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x38)); /* 0x171780C6: call dword ptr [ecx + 0x38] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x171780C9: mov edi, eax */
    /* test edi, edi */ /* 0x171780CB: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17178666; /* 0x171780CD: jl 0x17178666 */
L_171780D3:
    eax = MEM32(ebp + (-0x4)); /* 0x171780D3: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(eax); /* 0x171780D6: mov ecx, dword ptr [eax] */
    edx = ebp + (-0x58); /* 0x171780D8: lea edx, [ebp - 0x58] */
    PUSH32(esp, edx); /* 0x171780DB: push edx */
    PUSH32(esp, eax); /* 0x171780DC: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x34)); /* 0x171780DD: call dword ptr [ecx + 0x34] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x171780E0: mov edi, eax */
    /* test edi, edi */ /* 0x171780E2: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17178666; /* 0x171780E4: jl 0x17178666 */
L_171780EA:
    /* cmp MEM32(ebp + (-0x58)), 0x65u */ /* 0x171780EA: cmp dword ptr [ebp - 0x58], 0x65 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x58))); _flag_b = (uint32_t)(0x65u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171780FA; /* 0x171780EE: je 0x171780fa */
L_171780F0:
    /* cmp MEM32(ebp + (-0x58)), 0x66u */ /* 0x171780F0: cmp dword ptr [ebp - 0x58], 0x66 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x58))); _flag_b = (uint32_t)(0x66u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17178666; /* 0x171780F4: jne 0x17178666 */
L_171780FA:
    eax = MEM32(ebp + (-0x4)); /* 0x171780FA: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(eax); /* 0x171780FD: mov ecx, dword ptr [eax] */
    PUSH32(esp, 0x10u); /* 0x171780FF: push 0x10 */
    edx = ebp + (-0x2C); /* 0x17178101: lea edx, [ebp - 0x2c] */
    PUSH32(esp, edx); /* 0x17178104: push edx */
    PUSH32(esp, 0); /* 0x17178105: push 0 */
    PUSH32(esp, 0); /* 0x17178107: push 0 */
    PUSH32(esp, eax); /* 0x17178109: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x2C)); /* 0x1717810A: call dword ptr [ecx + 0x2c] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1717810D: mov edi, eax */
    /* test edi, edi */ /* 0x1717810F: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17178666; /* 0x17178111: jl 0x17178666 */
L_17178117:
    eax = MEM32(ebp + 0x10); /* 0x17178117: mov eax, dword ptr [ebp + 0x10] */
    ecx = MEM32(eax); /* 0x1717811A: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1717811C: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x10)); /* 0x1717811D: call dword ptr [ecx + 0x10] */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x58)), 0x65u */ /* 0x17178120: cmp dword ptr [ebp - 0x58], 0x65 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x58))); _flag_b = (uint32_t)(0x65u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = eax; /* 0x17178124: mov esi, eax */
    MEM32(ebp + (-0x30)) = esi; /* 0x17178126: mov dword ptr [ebp - 0x30], esi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_17178158; /* 0x17178129: jne 0x17178158 */
L_1717812B:
    /* test esi, esi */ /* 0x1717812B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1717817B; /* 0x1717812D: jbe 0x1717817b */
L_1717812F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1717812F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x17178131: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x10) = esi; /* 0x17178133: mov dword ptr [ebp + 0x10], esi */
L_17178136:
    PUSH32(esp, 3); /* 0x17178136: push 3 */
    edx = POP32_VAL(esp); /* 0x17178138: pop edx */
L_17178139:
    esi = MEM32(ebp + (-0x2C)); /* 0x17178139: mov esi, dword ptr [ebp - 0x2c] */
    esi = (uint32_t)MEM16(eax + esi); /* 0x1717813C: movzx esi, word ptr [eax + esi] */
    edi = MEM32(ebx + 0x24); /* 0x17178140: mov edi, dword ptr [ebx + 0x24] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17178143: inc eax */
    _flag_k = FK_INC;
    MEM32(ecx + edi) = esi; /* 0x17178144: mov dword ptr [ecx + edi], esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17178147: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x17178148: add ecx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1717814B: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_17178139; /* 0x1717814C: jne 0x17178139 */
L_1717814E:
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - 1; /* 0x1717814E: dec dword ptr [ebp + 0x10] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_17178136; /* 0x17178151: jne 0x17178136 */
L_17178153:
    esi = MEM32(ebp + (-0x30)); /* 0x17178153: mov esi, dword ptr [ebp - 0x30] */
    goto L_1717817B; /* 0x17178156: jmp 0x1717817b */
L_17178158:
    /* test esi, esi */ /* 0x17178158: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1717817B; /* 0x1717815A: jbe 0x1717817b */
L_1717815C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1717815C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x10) = esi; /* 0x1717815E: mov dword ptr [ebp + 0x10], esi */
L_17178161:
    PUSH32(esp, 3); /* 0x17178161: push 3 */
    ecx = POP32_VAL(esp); /* 0x17178163: pop ecx */
L_17178164:
    edi = MEM32(ebp + (-0x2C)); /* 0x17178164: mov edi, dword ptr [ebp - 0x2c] */
    edi = MEM32(eax + edi); /* 0x17178167: mov edi, dword ptr [eax + edi] */
    edx = MEM32(ebx + 0x24); /* 0x1717816A: mov edx, dword ptr [ebx + 0x24] */
    MEM32(eax + edx) = edi; /* 0x1717816D: mov dword ptr [eax + edx], edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x17178170: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x17178173: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_17178164; /* 0x17178174: jne 0x17178164 */
L_17178176:
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - 1; /* 0x17178176: dec dword ptr [ebp + 0x10] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_17178161; /* 0x17178179: jne 0x17178161 */
L_1717817B:
    eax = MEM32(ebp + (-0x4)); /* 0x1717817B: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(eax); /* 0x1717817E: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x17178180: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x30)); /* 0x17178181: call dword ptr [ecx + 0x30] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x17178184: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(eax); /* 0x17178187: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x17178189: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1717818A: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x20)); /* 0x1717818D: mov eax, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x17178190: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x40)) = esi; /* 0x17178194: mov dword ptr [ebp - 0x40], esi */
    MEM32(ebp + (-0x28)) = eax; /* 0x17178197: mov dword ptr [ebp - 0x28], eax */
L_1717819A:
    eax = MEM32(ebp + 0x8); /* 0x1717819A: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax); /* 0x1717819D: mov ecx, dword ptr [eax] */
    edx = ebp + (-0x370); /* 0x1717819F: lea edx, [ebp - 0x370] */
    PUSH32(esp, edx); /* 0x171781A5: push edx */
    PUSH32(esp, eax); /* 0x171781A6: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x1C)); /* 0x171781A7: call dword ptr [ecx + 0x1c] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x171781AA: mov edi, eax */
    /* test edi, edi */ /* 0x171781AC: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17178666; /* 0x171781AE: jl 0x17178666 */
L_171781B4:
    ecx = ebp + (-0xE0); /* 0x171781B4: lea ecx, [ebp - 0xe0] */
    RECOMP_CALL(sub_170B7D30); /* 0x171781BA: call 0x170b7d30 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x370); /* 0x171781BF: lea eax, [ebp - 0x370] */
    PUSH32(esp, eax); /* 0x171781C5: push eax */
    ecx = ebp + (-0xE0); /* 0x171781C6: lea ecx, [ebp - 0xe0] */
    RECOMP_CALL(sub_170B7D48); /* 0x171781CC: call 0x170b7d48 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x171781D1: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax); /* 0x171781D4: mov ecx, dword ptr [eax] */
    edx = ebp + (-0x18); /* 0x171781D6: lea edx, [ebp - 0x18] */
    PUSH32(esp, edx); /* 0x171781D9: push edx */
    PUSH32(esp, eax); /* 0x171781DA: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x34)); /* 0x171781DB: call dword ptr [ecx + 0x34] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x171781DE: mov edi, eax */
    /* test edi, edi */ /* 0x171781E0: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17178666; /* 0x171781E2: jl 0x17178666 */
L_171781E8:
    eax = MEM32(ebp + (-0x18)); /* 0x171781E8: mov eax, dword ptr [ebp - 0x18] */
    ecx = MEM32(eax); /* 0x171781EB: mov ecx, dword ptr [eax] */
    PUSH32(esp, 0x10u); /* 0x171781ED: push 0x10 */
    edx = ebp + (-0x3C); /* 0x171781EF: lea edx, [ebp - 0x3c] */
    PUSH32(esp, edx); /* 0x171781F2: push edx */
    PUSH32(esp, 0); /* 0x171781F3: push 0 */
    PUSH32(esp, 0); /* 0x171781F5: push 0 */
    PUSH32(esp, eax); /* 0x171781F7: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x2C)); /* 0x171781F8: call dword ptr [ecx + 0x2c] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x171781FB: mov edi, eax */
    /* test edi, edi */ /* 0x171781FD: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17178666; /* 0x171781FF: jl 0x17178666 */
L_17178205:
    esi = MEM32(ebp + 0x8); /* 0x17178205: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(esi); /* 0x17178208: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x1717820A: push esi */
    RECOMP_ICALL(MEM32(eax + 0x20)); /* 0x1717820B: call dword ptr [eax + 0x20] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1717820E: mov edi, eax */
    eax = MEM32(esi); /* 0x17178210: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x17178212: push esi */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x17178213: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x17178216: push edi */
    PUSH32(esp, MEM32(ebp + (-0x3C))); /* 0x17178217: push dword ptr [ebp - 0x3c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1717821A: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1717821C: push esi */
    ecx = ebp + (-0xE0); /* 0x1717821D: lea ecx, [ebp - 0xe0] */
    MEM32(ebp + (-0x20)) = eax; /* 0x17178223: mov dword ptr [ebp - 0x20], eax */
    RECOMP_CALL(sub_170B7D6A); /* 0x17178226: call 0x170b7d6a */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x20)), esi */ /* 0x1717822B: cmp dword ptr [ebp - 0x20], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x8)) = esi; /* 0x1717822E: mov dword ptr [ebp - 8], esi */
    if (CMP_BE(_flag_a, _flag_b)) goto L_1717836A; /* 0x17178231: jbe 0x1717836a */
L_17178237:
    eax = MEM32(ebp + (-0x28)); /* 0x17178237: mov eax, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x1717823A: add eax, esi */
    _flag_k = FK_ADD;
    edi = eax + eax * 2; /* 0x1717823C: lea edi, [eax + eax*2] */
    eax = MEM32(ebx + 0x14); /* 0x1717823F: mov eax, dword ptr [ebx + 0x14] */
    PUSH32(esp, 3); /* 0x17178242: push 3 */
    if (3u) _cf = (((edi) >> 29) & 1u); /* 0x17178244: shl edi, 3 */
    if (3u) { _flag_a = recomp_flags_pack((edi << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 3u; /* 0x17178244: shl edi, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x17178247: add eax, edi */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x17178249: push eax */
    PUSH32(esp, esi); /* 0x1717824A: push esi */
    PUSH32(esp, 0); /* 0x1717824B: push 0 */
    PUSH32(esp, 0); /* 0x1717824D: push 0 */
    ecx = ebp + (-0xE0); /* 0x1717824F: lea ecx, [ebp - 0xe0] */
    RECOMP_CALL(sub_17175093); /* 0x17178255: call 0x17175093 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0x14); /* 0x1717825A: mov eax, dword ptr [ebx + 0x14] */
    PUSH32(esp, 3); /* 0x1717825D: push 3 */
    eax = eax + edi + 0xC; /* 0x1717825F: lea eax, [eax + edi + 0xc] */
    PUSH32(esp, eax); /* 0x17178263: push eax */
    PUSH32(esp, esi); /* 0x17178264: push esi */
    PUSH32(esp, 0); /* 0x17178265: push 0 */
    PUSH32(esp, 3); /* 0x17178267: push 3 */
    ecx = ebp + (-0xE0); /* 0x17178269: lea ecx, [ebp - 0xe0] */
    RECOMP_CALL(sub_17175093); /* 0x1717826F: call 0x17175093 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x17178274: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17178301; /* 0x17178278: je 0x17178301 */
L_1717827E:
    ecx = MEM32(ebx + 0x4); /* 0x1717827E: mov ecx, dword ptr [ebx + 4] */
    eax = esi; /* 0x17178281: mov eax, esi */
    PUSH32(esp, 2); /* 0x17178283: push 2 */
    if (3u) _cf = (((eax) >> 29) & 1u); /* 0x17178285: shl eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 3u; /* 0x17178285: shl eax, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x17178288: add ecx, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, ecx); /* 0x1717828A: push ecx */
    PUSH32(esp, esi); /* 0x1717828B: push esi */
    PUSH32(esp, 0); /* 0x1717828C: push 0 */
    PUSH32(esp, 5); /* 0x1717828E: push 5 */
    ecx = ebp + (-0xE0); /* 0x17178290: lea ecx, [ebp - 0xe0] */
    RECOMP_CALL(sub_17175093); /* 0x17178296: call 0x17175093 */
    RECOMP_FLAGS_IN();
    /* test esi, esi */ /* 0x1717829B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171782BA; /* 0x1717829D: jne 0x171782ba */
L_1717829F:
    eax = MEM32(ebx + 0x4); /* 0x1717829F: mov eax, dword ptr [ebx + 4] */
    ecx = MEM32(eax); /* 0x171782A2: mov ecx, dword ptr [eax] */
    MEM32(ebp + (-0x10)) = ecx; /* 0x171782A4: mov dword ptr [ebp - 0x10], ecx */
    ecx = MEM32(eax + 0x4); /* 0x171782A7: mov ecx, dword ptr [eax + 4] */
    MEM32(ebp + (-0xC)) = ecx; /* 0x171782AA: mov dword ptr [ebp - 0xc], ecx */
    ecx = MEM32(eax); /* 0x171782AD: mov ecx, dword ptr [eax] */
    eax = MEM32(eax + 0x4); /* 0x171782AF: mov eax, dword ptr [eax + 4] */
    MEM32(ebp + (-0x34)) = ecx; /* 0x171782B2: mov dword ptr [ebp - 0x34], ecx */
    MEM32(ebp + (-0x30)) = eax; /* 0x171782B5: mov dword ptr [ebp - 0x30], eax */
    goto L_17178305; /* 0x171782B8: jmp 0x17178305 */
L_171782BA:
    ecx = MEM32(ebx + 0x4); /* 0x171782BA: mov ecx, dword ptr [ebx + 4] */
    eax = esi; /* 0x171782BD: mov eax, esi */
    if (3u) _cf = (((eax) >> 29) & 1u); /* 0x171782BF: shl eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 3u; /* 0x171782BF: shl eax, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x171782C2: add ecx, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) & 0; /* 0x171782C4: and dword ptr [ebp + 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_171782C8:
    edx = MEM32(ebp + 0x10); /* 0x171782C8: mov edx, dword ptr [ebp + 0x10] */
    fp_push(*(float*)&MEM32(ecx)); /* 0x171782CB: fld dword ptr [ecx] */
    edx = ebp + edx + (-0x34); /* 0x171782CD: lea edx, [ebp + edx - 0x34] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(edx)); /* 0x171782D1: fcomp dword ptr [edx] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171782D3: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x171782D5: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171782DE; /* 0x171782D8: jp 0x171782de */
L_171782DA:
    eax = MEM32(ecx); /* 0x171782DA: mov eax, dword ptr [ecx] */
    MEM32(edx) = eax; /* 0x171782DC: mov dword ptr [edx], eax */
L_171782DE:
    edx = MEM32(ebp + 0x10); /* 0x171782DE: mov edx, dword ptr [ebp + 0x10] */
    fp_push(*(float*)&MEM32(ecx)); /* 0x171782E1: fld dword ptr [ecx] */
    edx = ebp + edx + (-0x10); /* 0x171782E3: lea edx, [ebp + edx - 0x10] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(edx)); /* 0x171782E7: fcomp dword ptr [edx] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171782E9: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x171782EB: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171782F4; /* 0x171782EE: jne 0x171782f4 */
L_171782F0:
    eax = MEM32(ecx); /* 0x171782F0: mov eax, dword ptr [ecx] */
    MEM32(edx) = eax; /* 0x171782F2: mov dword ptr [edx], eax */
L_171782F4:
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 4; /* 0x171782F4: add dword ptr [ebp + 0x10], 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x171782F8: add ecx, 4 */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + 0x10), 8 */ /* 0x171782FB: cmp dword ptr [ebp + 0x10], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171782C8; /* 0x171782FF: jb 0x171782c8 */
L_17178301:
    /* test esi, esi */ /* 0x17178301: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1717832C; /* 0x17178303: jne 0x1717832c */
L_17178305:
    /* cmp MEM8(ebp + (-0x1A)), 0 */ /* 0x17178305: cmp byte ptr [ebp - 0x1a], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x1A))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1717832C; /* 0x17178309: jne 0x1717832c */
L_1717830B:
    eax = MEM32(ebp + (-0x28)); /* 0x1717830B: mov eax, dword ptr [ebp - 0x28] */
    ecx = MEM32(ebx + 0x14); /* 0x1717830E: mov ecx, dword ptr [ebx + 0x14] */
    eax = eax + eax * 2; /* 0x17178311: lea eax, [eax + eax*2] */
    eax = ecx + eax * 8; /* 0x17178314: lea eax, [ecx + eax*8] */
    edi = ebx + 0x54; /* 0x17178317: lea edi, [ebx + 0x54] */
    esi = eax; /* 0x1717831A: mov esi, eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1717831C: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1717831D: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1717831E: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = ebx + 0x48; /* 0x1717831F: lea edi, [ebx + 0x48] */
    esi = eax; /* 0x17178322: mov esi, eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17178324: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17178325: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17178326: movsd dword ptr es:[edi], dword ptr [esi] */
    esi = MEM32(ebp + (-0x8)); /* 0x17178327: mov esi, dword ptr [ebp - 8] */
    goto L_1717835D; /* 0x1717832A: jmp 0x1717835d */
L_1717832C:
    PUSH32(esp, 3); /* 0x1717832C: push 3 */
    ecx = ebx + 0x54; /* 0x1717832E: lea ecx, [ebx + 0x54] */
    edx = POP32_VAL(esp); /* 0x17178331: pop edx */
L_17178332:
    eax = MEM32(ebx + 0x14); /* 0x17178332: mov eax, dword ptr [ebx + 0x14] */
    fp_push(*(float*)&MEM32(edi + eax)); /* 0x17178335: fld dword ptr [edi + eax] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ecx + (-0xC))); /* 0x17178338: fcom dword ptr [ecx - 0xc] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1717833B: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1717833D: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_17178345; /* 0x17178340: jp 0x17178345 */
L_17178342:
    { float _v = (float)_st[0]; *(float*)ADDR(ecx + (-0xC)) = _v; } /* 0x17178342: fst dword ptr [ecx - 0xc] */
L_17178345:
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ecx)); /* 0x17178345: fcom dword ptr [ecx] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17178347: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x17178349: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17178352; /* 0x1717834C: jne 0x17178352 */
L_1717834E:
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx) = _v; } /* 0x1717834E: fstp dword ptr [ecx] */
    goto L_17178354; /* 0x17178350: jmp 0x17178354 */
L_17178352:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17178352: fstp st(0) */
L_17178354:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x17178354: add edi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x17178357: add ecx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1717835A: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_17178332; /* 0x1717835B: jne 0x17178332 */
L_1717835D:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1717835D: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(ebp + (-0x20)) */ /* 0x1717835E: cmp esi, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x20)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x8)) = esi; /* 0x17178361: mov dword ptr [ebp - 8], esi */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17178237; /* 0x17178364: jb 0x17178237 */
L_1717836A:
    eax = MEM32(ebp + (-0x18)); /* 0x1717836A: mov eax, dword ptr [ebp - 0x18] */
    ecx = MEM32(eax); /* 0x1717836D: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1717836F: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x30)); /* 0x17178370: call dword ptr [ecx + 0x30] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x18)); /* 0x17178373: mov eax, dword ptr [ebp - 0x18] */
    ecx = MEM32(eax); /* 0x17178376: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x17178378: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x17178379: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0x8); /* 0x1717837C: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(esi); /* 0x1717837F: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x18)) = MEM32(ebp + (-0x18)) & 0; /* 0x17178381: and dword ptr [ebp - 0x18], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x4); /* 0x17178385: lea ecx, [ebp - 4] */
    PUSH32(esp, ecx); /* 0x17178388: push ecx */
    PUSH32(esp, esi); /* 0x17178389: push esi */
    RECOMP_ICALL(MEM32(eax + 0x38)); /* 0x1717838A: call dword ptr [eax + 0x38] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1717838D: mov edi, eax */
    /* test edi, edi */ /* 0x1717838F: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17178666; /* 0x17178391: jl 0x17178666 */
L_17178397:
    eax = MEM32(ebp + (-0x4)); /* 0x17178397: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(eax); /* 0x1717839A: mov ecx, dword ptr [eax] */
    edx = ebp + (-0x58); /* 0x1717839C: lea edx, [ebp - 0x58] */
    PUSH32(esp, edx); /* 0x1717839F: push edx */
    PUSH32(esp, eax); /* 0x171783A0: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x34)); /* 0x171783A1: call dword ptr [ecx + 0x34] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x171783A4: mov edi, eax */
    /* test edi, edi */ /* 0x171783A6: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17178666; /* 0x171783A8: jl 0x17178666 */
L_171783AE:
    /* cmp MEM32(ebp + (-0x58)), 0x65u */ /* 0x171783AE: cmp dword ptr [ebp - 0x58], 0x65 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x58))); _flag_b = (uint32_t)(0x65u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171783BE; /* 0x171783B2: je 0x171783be */
L_171783B4:
    /* cmp MEM32(ebp + (-0x58)), 0x66u */ /* 0x171783B4: cmp dword ptr [ebp - 0x58], 0x66 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x58))); _flag_b = (uint32_t)(0x66u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17178666; /* 0x171783B8: jne 0x17178666 */
L_171783BE:
    eax = MEM32(ebp + (-0x4)); /* 0x171783BE: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(eax); /* 0x171783C1: mov ecx, dword ptr [eax] */
    PUSH32(esp, 0x10u); /* 0x171783C3: push 0x10 */
    edx = ebp + (-0x2C); /* 0x171783C5: lea edx, [ebp - 0x2c] */
    PUSH32(esp, edx); /* 0x171783C8: push edx */
    PUSH32(esp, 0); /* 0x171783C9: push 0 */
    PUSH32(esp, 0); /* 0x171783CB: push 0 */
    PUSH32(esp, eax); /* 0x171783CD: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x2C)); /* 0x171783CE: call dword ptr [ecx + 0x2c] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x171783D1: mov edi, eax */
    /* test edi, edi */ /* 0x171783D3: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17178666; /* 0x171783D5: jl 0x17178666 */
L_171783DB:
    eax = MEM32(esi); /* 0x171783DB: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171783DD: push esi */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x171783DE: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x58)), 0x65u */ /* 0x171783E1: cmp dword ptr [ebp - 0x58], 0x65 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x58))); _flag_b = (uint32_t)(0x65u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1717841F; /* 0x171783E5: jne 0x1717841f */
L_171783E7:
    /* test eax, eax */ /* 0x171783E7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17178455; /* 0x171783E9: jbe 0x17178455 */
L_171783EB:
    ecx = MEM32(ebp + (-0x40)); /* 0x171783EB: mov ecx, dword ptr [ebp - 0x40] */
    ecx = ecx + ecx * 2; /* 0x171783EE: lea ecx, [ecx + ecx*2] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171783F1: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x171783F3: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x171783F3: shl ecx, 2 */
    MEM32(ebp + 0x8) = eax; /* 0x171783F6: mov dword ptr [ebp + 8], eax */
L_171783F9:
    PUSH32(esp, 3); /* 0x171783F9: push 3 */
    eax = edx; /* 0x171783FB: mov eax, edx */
    edx = POP32_VAL(esp); /* 0x171783FD: pop edx */
L_171783FE:
    esi = MEM32(ebp + (-0x2C)); /* 0x171783FE: mov esi, dword ptr [ebp - 0x2c] */
    esi = (uint32_t)MEM16(eax + esi); /* 0x17178401: movzx esi, word ptr [eax + esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x28)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + (-0x28)); /* 0x17178405: add esi, dword ptr [ebp - 0x28] */
    _flag_k = FK_ADD;
    edi = MEM32(ebx + 0x24); /* 0x17178408: mov edi, dword ptr [ebx + 0x24] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1717840B: inc eax */
    _flag_k = FK_INC;
    MEM32(ecx + edi) = esi; /* 0x1717840C: mov dword ptr [ecx + edi], esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1717840F: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x17178410: add ecx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x17178413: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171783FE; /* 0x17178414: jne 0x171783fe */
L_17178416:
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) - 1; /* 0x17178416: dec dword ptr [ebp + 8] */
    _flag_k = FK_DEC;
    edx = eax; /* 0x17178419: mov edx, eax */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171783F9; /* 0x1717841B: jne 0x171783f9 */
L_1717841D:
    goto L_17178455; /* 0x1717841D: jmp 0x17178455 */
L_1717841F:
    /* test eax, eax */ /* 0x1717841F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17178455; /* 0x17178421: jbe 0x17178455 */
L_17178423:
    ecx = MEM32(ebp + (-0x40)); /* 0x17178423: mov ecx, dword ptr [ebp - 0x40] */
    ecx = ecx + ecx * 2; /* 0x17178426: lea ecx, [ecx + ecx*2] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x17178429: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x1717842B: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x1717842B: shl ecx, 2 */
    MEM32(ebp + 0x8) = eax; /* 0x1717842E: mov dword ptr [ebp + 8], eax */
L_17178431:
    PUSH32(esp, 3); /* 0x17178431: push 3 */
    eax = edx; /* 0x17178433: mov eax, edx */
    edx = POP32_VAL(esp); /* 0x17178435: pop edx */
L_17178436:
    esi = MEM32(ebp + (-0x2C)); /* 0x17178436: mov esi, dword ptr [ebp - 0x2c] */
    esi = MEM32(eax + esi); /* 0x17178439: mov esi, dword ptr [eax + esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x28)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + (-0x28)); /* 0x1717843C: add esi, dword ptr [ebp - 0x28] */
    _flag_k = FK_ADD;
    edi = MEM32(ebx + 0x24); /* 0x1717843F: mov edi, dword ptr [ebx + 0x24] */
    MEM32(ecx + edi) = esi; /* 0x17178442: mov dword ptr [ecx + edi], esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x17178445: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x17178448: add ecx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1717844B: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_17178436; /* 0x1717844C: jne 0x17178436 */
L_1717844E:
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) - 1; /* 0x1717844E: dec dword ptr [ebp + 8] */
    _flag_k = FK_DEC;
    edx = eax; /* 0x17178451: mov edx, eax */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_17178431; /* 0x17178453: jne 0x17178431 */
L_17178455:
    eax = MEM32(ebp + (-0x4)); /* 0x17178455: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(eax); /* 0x17178458: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1717845A: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x30)); /* 0x1717845B: call dword ptr [ecx + 0x30] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x1717845E: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(eax); /* 0x17178461: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x17178463: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x17178464: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x20)); /* 0x17178467: mov eax, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1717846A: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x28))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x28)) = MEM32(ebp + (-0x28)) + eax; /* 0x1717846E: add dword ptr [ebp - 0x28], eax */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x17178471: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171784C2; /* 0x17178475: je 0x171784c2 */
L_17178477:
    fp_push(*(float*)&MEM32(ebp + (-0x34))); /* 0x17178477: fld dword ptr [ebp - 0x34] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1717847A: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(0x17001430)); /* 0x1717847C: fcomp dword ptr [0x17001430] */
    fp_pop();
    ecx = 0x8876086Cu; /* 0x17178482: mov ecx, 0x8876086c */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17178487: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x17178489: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_1717849A; /* 0x1717848C: jnp 0x1717849a */
L_1717848E:
    fp_push(1.0); /* 0x1717848E: fld1  */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + (-0x10))); /* 0x17178490: fcomp dword ptr [ebp - 0x10] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17178493: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x17178495: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1717849C; /* 0x17178498: jp 0x1717849c */
L_1717849A:
    edi = ecx; /* 0x1717849A: mov edi, ecx */
L_1717849C:
    fp_push(*(float*)&MEM32(ebp + (-0x30))); /* 0x1717849C: fld dword ptr [ebp - 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(0x17001430)); /* 0x1717849F: fcomp dword ptr [0x17001430] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171784A5: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x171784A7: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_171784B8; /* 0x171784AA: jnp 0x171784b8 */
L_171784AC:
    fp_push(1.0); /* 0x171784AC: fld1  */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + (-0xC))); /* 0x171784AE: fcomp dword ptr [ebp - 0xc] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171784B1: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x171784B3: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171784BA; /* 0x171784B6: jp 0x171784ba */
L_171784B8:
    edi = ecx; /* 0x171784B8: mov edi, ecx */
L_171784BA:
    /* test edi, edi */ /* 0x171784BA: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17178666; /* 0x171784BC: jl 0x17178666 */
L_171784C2:
    ecx = ebx + 0x48; /* 0x171784C2: lea ecx, [ebx + 0x48] */
    edx = ebx + 0x54; /* 0x171784C5: lea edx, [ebx + 0x54] */
    fp_push(*(float*)&MEM32(edx)); /* 0x171784C8: fld dword ptr [edx] */
    eax = ebx + 0x60; /* 0x171784CA: lea eax, [ebx + 0x60] */
    _st[0] -= (double)*(float*)ADDR(ecx); /* 0x171784CD: fsub dword ptr [ecx] */
    edi = eax; /* 0x171784CF: mov edi, eax */
    esi = ebp + (-0x14); /* 0x171784D1: lea esi, [ebp - 0x14] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x171784D4: fstp dword ptr [ebp - 0x14] */
    fp_push(*(float*)&MEM32(edx + 0x4)); /* 0x171784D7: fld dword ptr [edx + 4] */
    _st[0] -= (double)*(float*)ADDR(ecx + 0x4); /* 0x171784DA: fsub dword ptr [ecx + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x171784DD: fstp dword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(edx + 0x8)); /* 0x171784E0: fld dword ptr [edx + 8] */
    _st[0] -= (double)*(float*)ADDR(ecx + 0x8); /* 0x171784E3: fsub dword ptr [ecx + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x171784E6: fstp dword ptr [ebp - 0xc] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171784E9: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_push(*(float*)&MEM32(0x1700141C)); /* 0x171784EA: fld dword ptr [0x1700141c] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171784F0: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171784F1: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_push(*(float*)&MEM32(eax)); /* 0x171784F2: fld dword ptr [eax] */
    _st[0] *= _st[1]; /* 0x171784F4: fmul st(1) */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x171784F6: fld dword ptr [eax + 4] */
    edi = ebx + 0x6C; /* 0x171784F9: lea edi, [ebx + 0x6c] */
    _st[0] *= _st[2]; /* 0x171784FC: fmul st(2) */
    esi = ebp + (-0x14); /* 0x171784FE: lea esi, [ebp - 0x14] */
    fp_push(*(float*)&MEM32(eax + 0x8)); /* 0x17178501: fld dword ptr [eax + 8] */
    _st[0] *= _st[3]; /* 0x17178504: fmul st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x30)) = _v; } /* 0x17178506: fstp dword ptr [ebp - 0x30] */
    fp_push(_st[1]); /* 0x17178509: fld st(1) */
    _st[0] += (double)*(float*)ADDR(ecx); /* 0x1717850B: fadd dword ptr [ecx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x1717850D: fstp dword ptr [ebp - 0x14] */
    _st[0] += (double)*(float*)ADDR(ecx + 0x4); /* 0x17178510: fadd dword ptr [ecx + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x17178513: fstp dword ptr [ebp - 0x10] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17178516: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x30))); /* 0x17178518: fld dword ptr [ebp - 0x30] */
    _st[0] += (double)*(float*)ADDR(ecx + 0x8); /* 0x1717851B: fadd dword ptr [ecx + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x1717851E: fstp dword ptr [ebp - 0xc] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17178521: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_push(*(float*)&MEM32(eax)); /* 0x17178522: fld dword ptr [eax] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebx + 0x90) = _v; } /* 0x17178524: fst dword ptr [ebx + 0x90] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1717852A: movsd dword ptr es:[edi], dword ptr [esi] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebx + 0x64)); /* 0x1717852B: fcomp dword ptr [ebx + 0x64] */
    fp_pop();
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1717852E: movsd dword ptr es:[edi], dword ptr [esi] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1717852F: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x17178531: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1717853F; /* 0x17178534: jp 0x1717853f */
L_17178536:
    eax = MEM32(ebx + 0x64); /* 0x17178536: mov eax, dword ptr [ebx + 0x64] */
    MEM32(ebx + 0x90) = eax; /* 0x17178539: mov dword ptr [ebx + 0x90], eax */
L_1717853F:
    fp_push(*(float*)&MEM32(ebx + 0x68)); /* 0x1717853F: fld dword ptr [ebx + 0x68] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebx + 0x90)); /* 0x17178542: fcomp dword ptr [ebx + 0x90] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17178548: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1717854A: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17178558; /* 0x1717854D: jne 0x17178558 */
L_1717854F:
    eax = MEM32(ebx + 0x68); /* 0x1717854F: mov eax, dword ptr [ebx + 0x68] */
    MEM32(ebx + 0x90) = eax; /* 0x17178552: mov dword ptr [ebx + 0x90], eax */
L_17178558:
    fp_push(1.0); /* 0x17178558: fld1  */
    eax = MEM32(ebx + 0x90); /* 0x1717855A: mov eax, dword ptr [ebx + 0x90] */
    _st[0] /= (double)*(float*)ADDR(ebx + 0x90); /* 0x17178560: fdiv dword ptr [ebx + 0x90] */
    edi = ecx; /* 0x17178566: mov edi, ecx */
    esi = ebp + (-0x14); /* 0x17178568: lea esi, [ebp - 0x14] */
    MEM32(ebx + 0x94) = eax; /* 0x1717856B: mov dword ptr [ebx + 0x94], eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx + 0x90) = _v; } /* 0x17178571: fstp dword ptr [ebx + 0x90] */
    fp_push(*(float*)&MEM32(0x1700194C)); /* 0x17178577: fld dword ptr [0x1700194c] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x1717857D: fst dword ptr [ebp - 0x14] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x17178580: fst dword ptr [ebp - 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x17178583: fstp dword ptr [ebp - 0xc] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17178586: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17178587: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17178588: movsd dword ptr es:[edi], dword ptr [esi] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x17178589: fst dword ptr [ebp - 0x14] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x1717858C: fst dword ptr [ebp - 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x1717858F: fstp dword ptr [ebp - 0xc] */
    esi = ebp + (-0x14); /* 0x17178592: lea esi, [ebp - 0x14] */
    edi = edx; /* 0x17178595: mov edi, edx */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17178597: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17178598: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17178599: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_push(*(float*)&MEM32(edx)); /* 0x1717859A: fld dword ptr [edx] */
    _st[0] -= (double)*(float*)ADDR(ecx); /* 0x1717859C: fsub dword ptr [ecx] */
    esi = ecx; /* 0x1717859E: mov esi, ecx */
    edi = ebx + 0x78; /* 0x171785A0: lea edi, [ebx + 0x78] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x171785A3: fstp dword ptr [ebp - 0x14] */
    fp_push(*(float*)&MEM32(edx + 0x4)); /* 0x171785A6: fld dword ptr [edx + 4] */
    _st[0] -= (double)*(float*)ADDR(ecx + 0x4); /* 0x171785A9: fsub dword ptr [ecx + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x171785AC: fstp dword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(edx + 0x8)); /* 0x171785AF: fld dword ptr [edx + 8] */
    _st[0] -= (double)*(float*)ADDR(ecx + 0x8); /* 0x171785B2: fsub dword ptr [ecx + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x171785B5: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(0x17001F4C)); /* 0x171785B8: fld dword ptr [0x17001f4c] */
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x171785BE: fld dword ptr [ebp - 0x14] */
    _st[0] *= _st[1]; /* 0x171785C1: fmul st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x171785C3: fld dword ptr [ebp - 0x10] */
    _st[0] *= _st[2]; /* 0x171785C6: fmul st(2) */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x171785C8: fst dword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x171785CB: fld dword ptr [ebp - 0xc] */
    _st[0] *= _st[3]; /* 0x171785CE: fmul st(3) */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x171785D0: fst dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ecx)); /* 0x171785D3: fld dword ptr [ecx] */
    _st[0] -= _st[3]; /* 0x171785D5: fsub st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx) = _v; } /* 0x171785D7: fstp dword ptr [ecx] */
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x171785D9: fld dword ptr [ecx + 4] */
    _st[0] -= _st[2]; /* 0x171785DC: fsub st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x4) = _v; } /* 0x171785DE: fstp dword ptr [ecx + 4] */
    fp_push(*(float*)&MEM32(ecx + 0x8)); /* 0x171785E1: fld dword ptr [ecx + 8] */
    _st[0] -= _st[1]; /* 0x171785E4: fsub st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x8) = _v; } /* 0x171785E6: fstp dword ptr [ecx + 8] */
    ecx = MEM32(ebp + (-0x28)); /* 0x171785E9: mov ecx, dword ptr [ebp - 0x28] */
    /* test ecx, ecx */ /* 0x171785EC: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171785EE: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171785F0: fstp st(0) */
    _st[0] += (double)*(float*)ADDR(edx); /* 0x171785F2: fadd dword ptr [edx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx) = _v; } /* 0x171785F4: fstp dword ptr [edx] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171785F6: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x171785F8: fld dword ptr [ebp - 0x10] */
    _st[0] += (double)*(float*)ADDR(edx + 0x4); /* 0x171785FB: fadd dword ptr [edx + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx + 0x4) = _v; } /* 0x171785FE: fstp dword ptr [edx + 4] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x17178601: fld dword ptr [ebp - 0xc] */
    _st[0] += (double)*(float*)ADDR(edx + 0x8); /* 0x17178604: fadd dword ptr [edx + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx + 0x8) = _v; } /* 0x17178607: fstp dword ptr [edx + 8] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1717860A: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1717860B: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1717860C: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = ebx + 0x84; /* 0x1717860D: lea edi, [ebx + 0x84] */
    esi = edx; /* 0x17178613: mov esi, edx */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17178615: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17178616: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17178617: movsd dword ptr es:[edi], dword ptr [esi] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17178664; /* 0x17178618: jbe 0x17178664 */
L_1717861A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1717861A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1717861C:
    edx = MEM32(ebx + 0x14); /* 0x1717861C: mov edx, dword ptr [ebx + 0x14] */
    edi = eax + edx; /* 0x1717861F: lea edi, [eax + edx] */
    fp_push(*(float*)&MEM32(edi)); /* 0x17178622: fld dword ptr [edi] */
    esi = ebp + (-0x14); /* 0x17178624: lea esi, [ebp - 0x14] */
    _st[0] -= (double)*(float*)ADDR(ebx + 0x6C); /* 0x17178627: fsub dword ptr [ebx + 0x6c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x18u; /* 0x1717862A: add eax, 0x18 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1717862D: dec ecx */
    _flag_k = FK_DEC;
    fp_push(*(float*)&MEM32(edi + 0x4)); /* 0x1717862E: fld dword ptr [edi + 4] */
    _st[0] -= (double)*(float*)ADDR(ebx + 0x70); /* 0x17178631: fsub dword ptr [ebx + 0x70] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x34)) = _v; } /* 0x17178634: fstp dword ptr [ebp - 0x34] */
    fp_push(*(float*)&MEM32(edi + 0x8)); /* 0x17178637: fld dword ptr [edi + 8] */
    _st[0] -= (double)*(float*)ADDR(ebx + 0x74); /* 0x1717863A: fsub dword ptr [ebx + 0x74] */
    fp_push(*(float*)&MEM32(ebx + 0x90)); /* 0x1717863D: fld dword ptr [ebx + 0x90] */
    fp_push(_st[2]); /* 0x17178643: fld st(2) */
    _st[0] *= _st[1]; /* 0x17178645: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x17178647: fstp dword ptr [ebp - 0x14] */
    fp_push(*(float*)&MEM32(ebp + (-0x34))); /* 0x1717864A: fld dword ptr [ebp - 0x34] */
    _st[0] *= _st[1]; /* 0x1717864D: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x1717864F: fstp dword ptr [ebp - 0x10] */
    fp_push(_st[1]); /* 0x17178652: fld st(1) */
    _st[0] *= _st[1]; /* 0x17178654: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x17178656: fstp dword ptr [ebp - 0xc] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17178659: movsd dword ptr es:[edi], dword ptr [esi] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1717865A: fstp st(0) */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1717865C: movsd dword ptr es:[edi], dword ptr [esi] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1717865D: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1717865F: fstp st(0) */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17178661: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1717861C; /* 0x17178662: jne 0x1717861c */
L_17178664:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x17178664: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_17178666:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x17178666: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edi, esi */ /* 0x17178668: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17178681; /* 0x1717866A: je 0x17178681 */
L_1717866C:
    PUSH32(esp, MEM32(ebx + 0x34)); /* 0x1717866C: push dword ptr [ebx + 0x34] */
    MEM32(ebx + 0x18) = esi; /* 0x1717866F: mov dword ptr [ebx + 0x18], esi */
    MEM32(ebx + 0x28) = esi; /* 0x17178672: mov dword ptr [ebx + 0x28], esi */
    MEM32(ebx + 0x8) = esi; /* 0x17178675: mov dword ptr [ebx + 8], esi */
    RECOMP_CALL(sub_1721B010); /* 0x17178678: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1717867D: pop ecx */
    MEM32(ebx + 0x34) = esi; /* 0x1717867E: mov dword ptr [ebx + 0x34], esi */
L_17178681:
    eax = MEM32(ebp + (-0x4)); /* 0x17178681: mov eax, dword ptr [ebp - 4] */
    /* cmp eax, esi */ /* 0x17178684: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17178691; /* 0x17178686: je 0x17178691 */
L_17178688:
    ecx = MEM32(eax); /* 0x17178688: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1717868A: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1717868B: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = esi; /* 0x1717868E: mov dword ptr [ebp - 4], esi */
L_17178691:
    eax = MEM32(ebp + (-0x18)); /* 0x17178691: mov eax, dword ptr [ebp - 0x18] */
    /* cmp eax, esi */ /* 0x17178694: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1717869E; /* 0x17178696: je 0x1717869e */
L_17178698:
    ecx = MEM32(eax); /* 0x17178698: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1717869A: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1717869B: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
L_1717869E:
    eax = edi; /* 0x1717869E: mov eax, edi */
    goto L_171786A7; /* 0x171786A0: jmp 0x171786a7 */
L_171786A2:
    eax = 0x8876086Cu; /* 0x171786A2: mov eax, 0x8876086c */
L_171786A7:
    edi = POP32_VAL(esp); /* 0x171786A7: pop edi */
    esi = POP32_VAL(esp); /* 0x171786A8: pop esi */
    ebx = POP32_VAL(esp); /* 0x171786A9: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171786AA: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x171786AB: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_171786B3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171786B3u);

L_171786B3:
    eax = 0x1721C03Eu; /* 0x171786B3: mov eax, 0x1721c03e */
    RECOMP_CALL(sub_1721B168); /* 0x171786B8: call 0x1721b168 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x171786BD: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x171786C0: push esi */
    esi = ecx; /* 0x171786C1: mov esi, ecx */
    PUSH32(esp, edi); /* 0x171786C3: push edi */
    ecx = ebp + (-0x1C); /* 0x171786C4: lea ecx, [ebp - 0x1c] */
    RECOMP_CALL(sub_1718BFB4); /* 0x171786C7: call 0x1718bfb4 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x8); /* 0x171786CC: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171786CF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edi, eax */ /* 0x171786D1: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = eax; /* 0x171786D3: mov dword ptr [ebp - 4], eax */
    MEM32(esi + 0xC) = eax; /* 0x171786D6: mov dword ptr [esi + 0xc], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_171786F7; /* 0x171786D9: jne 0x171786f7 */
L_171786DB:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x171786DB: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x18)), eax */ /* 0x171786DF: cmp dword ptr [ebp - 0x18], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171786ED; /* 0x171786E2: je 0x171786ed */
L_171786E4:
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x171786E4: push dword ptr [ebp - 0x18] */
    RECOMP_CALL(sub_1721B010); /* 0x171786E7: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171786EC: pop ecx */
L_171786ED:
    eax = 0x8876086Cu; /* 0x171786ED: mov eax, 0x8876086c */
    goto L_17178816; /* 0x171786F2: jmp 0x17178816 */
L_171786F7:
    PUSH32(esp, ebx); /* 0x171786F7: push ebx */
    ebx = esi + 0x10; /* 0x171786F8: lea ebx, [esi + 0x10] */
    PUSH32(esp, edi); /* 0x171786FB: push edi */
    ecx = ebx; /* 0x171786FC: mov ecx, ebx */
    RECOMP_CALL(sub_17177C40); /* 0x171786FE: call 0x17177c40 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17178703: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x8) = eax; /* 0x17178705: mov dword ptr [ebp + 8], eax */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171787FF; /* 0x17178708: jl 0x171787ff */
L_1717870E:
    eax = MEM32(ebp + (-0x14)); /* 0x1717870E: mov eax, dword ptr [ebp - 0x14] */
    /* test eax, eax */ /* 0x17178711: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x8) = eax; /* 0x17178713: mov dword ptr [ebp + 8], eax */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171787FF; /* 0x17178716: jl 0x171787ff */
L_1717871C:
    PUSH32(esp, edi); /* 0x1717871C: push edi */
    ecx = ebp + (-0x1C); /* 0x1717871D: lea ecx, [ebp - 0x1c] */
    RECOMP_CALL(sub_1718BB08); /* 0x17178720: call 0x1718bb08 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17178725: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x8) = eax; /* 0x17178727: mov dword ptr [ebp + 8], eax */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171787FF; /* 0x1717872A: jl 0x171787ff */
L_17178730:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17178730: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0xC), eax */ /* 0x17178732: cmp dword ptr [ebp + 0xc], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17178772; /* 0x17178735: je 0x17178772 */
L_17178737:
    /* cmp MEM32(ebp + 0x10), eax */ /* 0x17178737: cmp dword ptr [ebp + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17178748; /* 0x1717873A: je 0x17178748 */
L_1717873C:
    MEM32(ebp + 0x8) = 0x8876086Cu; /* 0x1717873C: mov dword ptr [ebp + 8], 0x8876086c */
    goto L_171787FF; /* 0x17178743: jmp 0x171787ff */
L_17178748:
    PUSH32(esp, edi); /* 0x17178748: push edi */
    PUSH32(esp, MEM32(ebx)); /* 0x17178749: push dword ptr [ebx] */
    MEM32(esi + 0x4) = 1; /* 0x1717874B: mov dword ptr [esi + 4], 1 */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x17178752: push dword ptr [ebp - 0x18] */
    RECOMP_CALL(sub_1718BD3E); /* 0x17178755: call 0x1718bd3e */
    RECOMP_FLAGS_IN();
    /* test edi, edi */ /* 0x1717875A: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x8) = edi; /* 0x1717875C: mov dword ptr [ebp + 8], edi */
    fp_push((double)(int32_t)MEM32(ebp + 0x8)); /* 0x1717875F: fild dword ptr [ebp + 8] */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1717876A; /* 0x17178762: jge 0x1717876a */
L_17178764:
    _st[0] += (double)*(float*)ADDR(0x1700142C); /* 0x17178764: fadd dword ptr [0x1700142c] */
L_1717876A:
    _st[0] = (double)*(float*)ADDR(0x17001424) / _st[0]; /* 0x1717876A: fdivr dword ptr [0x17001424] */
    goto L_171787B8; /* 0x17178770: jmp 0x171787b8 */
L_17178772:
    /* cmp MEM32(ebp + 0x10), eax */ /* 0x17178772: cmp dword ptr [ebp + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x17178775: push edi */
    PUSH32(esp, MEM32(ebx)); /* 0x17178776: push dword ptr [ebx] */
    MEM32(esi + 0x4) = eax; /* 0x17178778: mov dword ptr [esi + 4], eax */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x1717877B: push dword ptr [ebp - 0x18] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1717879D; /* 0x1717877E: je 0x1717879d */
L_17178780:
    RECOMP_CALL(sub_1718BBF8); /* 0x17178780: call 0x1718bbf8 */
    RECOMP_FLAGS_IN();
    /* test edi, edi */ /* 0x17178785: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x8) = edi; /* 0x17178787: mov dword ptr [ebp + 8], edi */
    fp_push((double)(int32_t)MEM32(ebp + 0x8)); /* 0x1717878A: fild dword ptr [ebp + 8] */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_17178795; /* 0x1717878D: jge 0x17178795 */
L_1717878F:
    _st[0] += (double)*(float*)ADDR(0x1700142C); /* 0x1717878F: fadd dword ptr [0x1700142c] */
L_17178795:
    _st[0] = (double)*(float*)ADDR(0x17021F04) / _st[0]; /* 0x17178795: fdivr dword ptr [0x17021f04] */
    goto L_171787B8; /* 0x1717879B: jmp 0x171787b8 */
L_1717879D:
    RECOMP_CALL(sub_1718BC99); /* 0x1717879D: call 0x1718bc99 */
    RECOMP_FLAGS_IN();
    /* test edi, edi */ /* 0x171787A2: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x8) = edi; /* 0x171787A4: mov dword ptr [ebp + 8], edi */
    fp_push((double)(int32_t)MEM32(ebp + 0x8)); /* 0x171787A7: fild dword ptr [ebp + 8] */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_171787B2; /* 0x171787AA: jge 0x171787b2 */
L_171787AC:
    _st[0] += (double)*(float*)ADDR(0x1700142C); /* 0x171787AC: fadd dword ptr [0x1700142c] */
L_171787B2:
    _st[0] = (double)*(float*)ADDR(0x1700608C) / _st[0]; /* 0x171787B2: fdivr dword ptr [0x1700608c] */
L_171787B8:
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x171787B8: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x8) = _v; } /* 0x171787BC: fstp dword ptr [esi + 8] */
    PUSH32(esp, 7); /* 0x171787BF: push 7 */
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x171787C1: sete al */
    MEM8(esi + 0x70) = (uint8_t)(LO8(eax)); /* 0x171787C4: mov byte ptr [esi + 0x70], al */
    eax = MEM32(ebx); /* 0x171787C7: mov eax, dword ptr [ebx] */
    ebx = esi + 0x44; /* 0x171787C9: lea ebx, [esi + 0x44] */
    ecx = ebx; /* 0x171787CC: mov ecx, ebx */
    MEM32(ebp + (-0x10)) = eax; /* 0x171787CE: mov dword ptr [ebp - 0x10], eax */
    RECOMP_CALL(sub_1718C77C); /* 0x171787D1: call 0x1718c77c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171787D6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x8) = eax; /* 0x171787D8: mov dword ptr [ebp + 8], eax */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171787FF; /* 0x171787DB: jl 0x171787ff */
L_171787DD:
    eax = esi + 0x20; /* 0x171787DD: lea eax, [esi + 0x20] */
    PUSH32(esp, eax); /* 0x171787E0: push eax */
    PUSH32(esp, edi); /* 0x171787E1: push edi */
    eax = ebp + (-0x10); /* 0x171787E2: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x171787E5: push eax */
    ecx = ebx; /* 0x171787E6: mov ecx, ebx */
    RECOMP_CALL(sub_1718C18F); /* 0x171787E8: call 0x1718c18f */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x10); /* 0x171787ED: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) & 0; /* 0x171787F0: and dword ptr [ebp + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = eax; /* 0x171787F4: mov dword ptr [esi], eax */
    eax = MEM32(ebp + 0xC); /* 0x171787F6: mov eax, dword ptr [ebp + 0xc] */
    MEM32(esi + 0xC) = edi; /* 0x171787F9: mov dword ptr [esi + 0xc], edi */
    MEM32(esi + 0x4) = eax; /* 0x171787FC: mov dword ptr [esi + 4], eax */
L_171787FF:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x171787FF: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x18)), 0 */ /* 0x17178803: cmp dword ptr [ebp - 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = POP32_VAL(esp); /* 0x17178807: pop ebx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17178813; /* 0x17178808: je 0x17178813 */
L_1717880A:
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x1717880A: push dword ptr [ebp - 0x18] */
    RECOMP_CALL(sub_1721B010); /* 0x1717880D: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x17178812: pop ecx */
L_17178813:
    eax = MEM32(ebp + 0x8); /* 0x17178813: mov eax, dword ptr [ebp + 8] */
L_17178816:
    ecx = MEM32(ebp + (-0xC)); /* 0x17178816: mov ecx, dword ptr [ebp - 0xc] */
    edi = POP32_VAL(esp); /* 0x17178819: pop edi */
    esi = POP32_VAL(esp); /* 0x1717881A: pop esi */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1717881B: mov dword ptr fs:[0], ecx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17178822: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x17178823: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1717882B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1717882Bu);

L_1717882B:
    edi = edi; /* 0x1717882B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1717882D: push ebp */
    ebp = esp; /* 0x1717882E: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x17178830: push ecx */
    PUSH32(esp, 0); /* 0x17178831: push 0 */
    PUSH32(esp, 0); /* 0x17178833: push 0 */
    eax = ebp + (-0x4); /* 0x17178835: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x17178838: push eax */
    PUSH32(esp, 0x400u); /* 0x17178839: push 0x400 */
    RECOMP_ICALL(MEM32(0x170010B0)); /* 0x1717883E: call dword ptr [0x170010b0] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x17178844: push eax */
    PUSH32(esp, 0); /* 0x17178845: push 0 */
    PUSH32(esp, 0x1300u); /* 0x17178847: push 0x1300 */
    RECOMP_ICALL(MEM32(0x170010B4)); /* 0x1717884C: call dword ptr [0x170010b4] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17178852: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1717885F; /* 0x17178854: je 0x1717885f */
L_17178856:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x17178856: push dword ptr [ebp - 4] */
    RECOMP_ICALL(MEM32(0x170010B8)); /* 0x17178859: call dword ptr [0x170010b8] */
    RECOMP_FLAGS_IN();
L_1717885F:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1717885F: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x17178860: ret  */
    RECOMP_REGS_OUT();
}

void sub_17178866(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17178866u);

L_17178866:
    edi = edi; /* 0x17178866: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17178868: push ebp */
    ebp = esp; /* 0x17178869: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1717886B: push ecx */
    PUSH32(esp, esi); /* 0x1717886C: push esi */
    PUSH32(esp, edi); /* 0x1717886D: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1717886E: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x10), edi */ /* 0x17178870: cmp dword ptr [ebp + 0x10], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171788B1; /* 0x17178873: je 0x171788b1 */
L_17178875:
    esi = MEM32(ebp + 0x10); /* 0x17178875: mov esi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x17178878: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edi; /* 0x1717887C: sub esi, edi */
    _flag_k = FK_CMP;
    /* cmp esi, 0x00400000u */ /* 0x1717887E: cmp esi, 0x400000 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x00400000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1717888B; /* 0x17178884: jbe 0x1717888b */
L_17178886:
    esi = 0x00400000u; /* 0x17178886: mov esi, 0x400000 */
L_1717888B:
    PUSH32(esp, 0); /* 0x1717888B: push 0 */
    eax = ebp + (-0x4); /* 0x1717888D: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x17178890: push eax */
    eax = MEM32(ebp + 0xC); /* 0x17178891: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x17178894: push esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x17178895: add eax, edi */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x17178897: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x17178898: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x170010E4)); /* 0x1717889B: call dword ptr [0x170010e4] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171788A1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171788B9; /* 0x171788A3: je 0x171788b9 */
L_171788A5:
    /* cmp MEM32(ebp + (-0x4)), esi */ /* 0x171788A5: cmp dword ptr [ebp - 4], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171788BE; /* 0x171788A8: jne 0x171788be */
L_171788AA:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + esi; /* 0x171788AA: add edi, esi */
    _flag_k = FK_ADD;
    /* cmp edi, MEM32(ebp + 0x10) */ /* 0x171788AC: cmp edi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_17178875; /* 0x171788AF: jne 0x17178875 */
L_171788B1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171788B1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171788B3:
    edi = POP32_VAL(esp); /* 0x171788B3: pop edi */
    esi = POP32_VAL(esp); /* 0x171788B4: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171788B5: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x171788B6: ret 0xc */
L_171788B9:
    RECOMP_CALL(sub_1717882B); /* 0x171788B9: call 0x1717882b */
    RECOMP_FLAGS_IN();
L_171788BE:
    eax = 0x80004005u; /* 0x171788BE: mov eax, 0x80004005 */
    RECOMP_BACKEDGE();
    goto L_171788B3; /* 0x171788C3: jmp 0x171788b3 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_171788CA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171788CAu);

L_171788CA:
    edi = edi; /* 0x171788CA: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171788CC: push ebp */
    ebp = esp; /* 0x171788CD: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x171788CF: push ecx */
    PUSH32(esp, esi); /* 0x171788D0: push esi */
    PUSH32(esp, edi); /* 0x171788D1: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171788D2: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x10), edi */ /* 0x171788D4: cmp dword ptr [ebp + 0x10], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1717891B; /* 0x171788D7: je 0x1717891b */
L_171788D9:
    esi = MEM32(ebp + 0x10); /* 0x171788D9: mov esi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x171788DC: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edi; /* 0x171788E0: sub esi, edi */
    _flag_k = FK_CMP;
    /* cmp esi, 0x00400000u */ /* 0x171788E2: cmp esi, 0x400000 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x00400000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_171788EF; /* 0x171788E8: jbe 0x171788ef */
L_171788EA:
    esi = 0x00400000u; /* 0x171788EA: mov esi, 0x400000 */
L_171788EF:
    PUSH32(esp, 0); /* 0x171788EF: push 0 */
    eax = ebp + (-0x4); /* 0x171788F1: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x171788F4: push eax */
    eax = MEM32(ebp + 0xC); /* 0x171788F5: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x171788F8: push esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x171788F9: add eax, edi */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x171788FB: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171788FC: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x170010F4)); /* 0x171788FF: call dword ptr [0x170010f4] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17178905: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17178923; /* 0x17178907: je 0x17178923 */
L_17178909:
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x17178909: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17178928; /* 0x1717890D: je 0x17178928 */
L_1717890F:
    /* cmp MEM32(ebp + (-0x4)), esi */ /* 0x1717890F: cmp dword ptr [ebp - 4], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17178928; /* 0x17178912: jne 0x17178928 */
L_17178914:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + esi; /* 0x17178914: add edi, esi */
    _flag_k = FK_ADD;
    /* cmp edi, MEM32(ebp + 0x10) */ /* 0x17178916: cmp edi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_171788D9; /* 0x17178919: jne 0x171788d9 */
L_1717891B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1717891B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1717891D:
    edi = POP32_VAL(esp); /* 0x1717891D: pop edi */
    esi = POP32_VAL(esp); /* 0x1717891E: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1717891F: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x17178920: ret 0xc */
L_17178923:
    RECOMP_CALL(sub_1717882B); /* 0x17178923: call 0x1717882b */
    RECOMP_FLAGS_IN();
L_17178928:
    eax = 0x80004005u; /* 0x17178928: mov eax, 0x80004005 */
    RECOMP_BACKEDGE();
    goto L_1717891D; /* 0x1717892D: jmp 0x1717891d */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_17178934(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17178934u);

L_17178934:
    PUSH32(esp, MEM32(ecx + 0x18)); /* 0x17178934: push dword ptr [ecx + 0x18] */
    MEM32(ecx) = 0x17021F08u; /* 0x17178937: mov dword ptr [ecx], 0x17021f08 */
    RECOMP_CALL(sub_1721B010); /* 0x1717893D: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x17178942: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x17178943: ret  */
    RECOMP_REGS_OUT();
}

void sub_17178949(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17178949u);

L_17178949:
    edi = edi; /* 0x17178949: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1717894B: push ebp */
    ebp = esp; /* 0x1717894C: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1717894E: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1717894F: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(esi + 0x4); /* 0x17178952: mov eax, dword ptr [esi + 4] */
    /* cmp eax, 1 */ /* 0x17178955: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x17178958: push edi */
    edi = eax + (-0x1); /* 0x17178959: lea edi, [eax - 1] */
    MEM32(esi + 0x4) = edi; /* 0x1717895C: mov dword ptr [esi + 4], edi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_17178970; /* 0x1717895F: jne 0x17178970 */
L_17178961:
    eax = MEM32(esi); /* 0x17178961: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x17178963: push esi */
    RECOMP_ICALL(MEM32(eax + 0x3C)); /* 0x17178964: call dword ptr [eax + 0x3c] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x17178967: mov eax, dword ptr [esi] */
    PUSH32(esp, 1); /* 0x17178969: push 1 */
    ecx = esi; /* 0x1717896B: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax + 0x4C)); /* 0x1717896D: call dword ptr [eax + 0x4c] */
    RECOMP_FLAGS_IN();
L_17178970:
    eax = edi; /* 0x17178970: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x17178972: pop edi */
    esi = POP32_VAL(esp); /* 0x17178973: pop esi */
    ebp = POP32_VAL(esp); /* 0x17178974: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x17178975: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1717897D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1717897Du);

L_1717897D:
    edi = edi; /* 0x1717897D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1717897F: push ebp */
    ebp = esp; /* 0x17178980: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x17178982: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax + 0x20); /* 0x17178985: mov ecx, dword ptr [eax + 0x20] */
    edx = MEM32(ebp + 0xC); /* 0x17178988: mov edx, dword ptr [ebp + 0xc] */
    /* cmp edx, ecx */ /* 0x1717898B: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_171789B9; /* 0x1717898D: jae 0x171789b9 */
L_1717898F:
    PUSH32(esp, esi); /* 0x1717898F: push esi */
    esi = MEM32(ebp + 0x10); /* 0x17178990: mov esi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edx; /* 0x17178993: add esi, edx */
    _flag_k = FK_ADD;
    /* cmp esi, ecx */ /* 0x17178995: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = POP32_VAL(esp); /* 0x17178997: pop esi */
    if (CMP_A(_flag_a, _flag_b)) goto L_171789B9; /* 0x17178998: ja 0x171789b9 */
L_1717899A:
    ecx = MEM32(eax + 0x28); /* 0x1717899A: mov ecx, dword ptr [eax + 0x28] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(eax + 0x24)); /* 0x1717899D: imul ecx, dword ptr [eax + 0x24] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx); /* 0x171789A1: imul ecx, edx */
    edx = MEM32(eax + 0x18); /* 0x171789A4: mov edx, dword ptr [eax + 0x18] */
    ecx = edx + ecx * 4; /* 0x171789A7: lea ecx, [edx + ecx*4] */
    edx = MEM32(ebp + 0x14); /* 0x171789AA: mov edx, dword ptr [ebp + 0x14] */
    MEM32(edx) = ecx; /* 0x171789AD: mov dword ptr [edx], ecx */
    ecx = MEM32(eax); /* 0x171789AF: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x171789B1: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x4)); /* 0x171789B2: call dword ptr [ecx + 4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171789B5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_171789BE; /* 0x171789B7: jmp 0x171789be */
L_171789B9:
    eax = 0x8876086Cu; /* 0x171789B9: mov eax, 0x8876086c */
L_171789BE:
    ebp = POP32_VAL(esp); /* 0x171789BE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x171789BF: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_171789C7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171789C7u);

L_171789C7:
    edi = edi; /* 0x171789C7: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171789C9: push ebp */
    ebp = esp; /* 0x171789CA: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x171789CC: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax); /* 0x171789CF: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x171789D1: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x171789D2: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171789D5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x171789D7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171789D8: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171789E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171789E0u);

L_171789E0:
    edi = edi; /* 0x171789E0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171789E2: push ebp */
    ebp = esp; /* 0x171789E3: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x171789E5: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ecx + 0x28); /* 0x171789E8: mov eax, dword ptr [ecx + 0x28] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ecx + 0x24)); /* 0x171789EB: imul eax, dword ptr [ecx + 0x24] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ecx + 0x20)); /* 0x171789EF: imul eax, dword ptr [ecx + 0x20] */
    ecx = MEM32(ecx + 0x18); /* 0x171789F3: mov ecx, dword ptr [ecx + 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171789F6: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x171789F8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17178A0A; /* 0x171789FA: jbe 0x17178a0a */
L_171789FC:
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x171789FC: fld dword ptr [ebp + 0xc] */
    _st[0] *= (double)*(float*)ADDR(ecx + edx * 4); /* 0x171789FF: fmul dword ptr [ecx + edx*4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + edx * 4) = _v; } /* 0x17178A02: fstp dword ptr [ecx + edx*4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x17178A05: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, eax */ /* 0x17178A06: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171789FC; /* 0x17178A08: jb 0x171789fc */
L_17178A0A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17178A0A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x17178A0C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x17178A0D: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_17178A15(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17178A15u);

L_17178A15:
    edi = edi; /* 0x17178A15: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17178A17: push ebp */
    ebp = esp; /* 0x17178A18: mov ebp, esp */
    PUSH32(esp, edi); /* 0x17178A1A: push edi */
    edi = MEM32(ebp + 0xC); /* 0x17178A1B: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x17178A1E: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17178A2C; /* 0x17178A20: jne 0x17178a2c */
L_17178A22:
    eax = 0x8876086Cu; /* 0x17178A22: mov eax, 0x8876086c */
    goto L_17178AC6; /* 0x17178A27: jmp 0x17178ac6 */
L_17178A2C:
    eax = MEM32(edi); /* 0x17178A2C: mov eax, dword ptr [edi] */
    PUSH32(esp, ebx); /* 0x17178A2E: push ebx */
    PUSH32(esp, esi); /* 0x17178A2F: push esi */
    PUSH32(esp, edi); /* 0x17178A30: push edi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x17178A31: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0x8); /* 0x17178A34: mov esi, dword ptr [ebp + 8] */
    ebx = eax; /* 0x17178A37: mov ebx, eax */
    eax = MEM32(esi); /* 0x17178A39: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x17178A3B: push esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x17178A3C: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x17178A3F: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17178ABF; /* 0x17178A41: jne 0x17178abf */
L_17178A43:
    eax = MEM32(edi); /* 0x17178A43: mov eax, dword ptr [edi] */
    PUSH32(esp, edi); /* 0x17178A45: push edi */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x17178A46: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x17178A49: mov ebx, eax */
    eax = MEM32(esi); /* 0x17178A4B: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x17178A4D: push esi */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x17178A4E: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x17178A51: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17178ABF; /* 0x17178A53: jne 0x17178abf */
L_17178A55:
    eax = MEM32(edi); /* 0x17178A55: mov eax, dword ptr [edi] */
    PUSH32(esp, edi); /* 0x17178A57: push edi */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x17178A58: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x17178A5B: mov ebx, eax */
    eax = MEM32(esi); /* 0x17178A5D: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x17178A5F: push esi */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x17178A60: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x17178A63: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17178ABF; /* 0x17178A65: jne 0x17178abf */
L_17178A67:
    eax = MEM32(edi); /* 0x17178A67: mov eax, dword ptr [edi] */
    PUSH32(esp, edi); /* 0x17178A69: push edi */
    RECOMP_ICALL(MEM32(eax + 0x18)); /* 0x17178A6A: call dword ptr [eax + 0x18] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x17178A6D: mov ebx, eax */
    eax = MEM32(esi); /* 0x17178A6F: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x17178A71: push esi */
    RECOMP_ICALL(MEM32(eax + 0x18)); /* 0x17178A72: call dword ptr [eax + 0x18] */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x17178A75: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17178ABF; /* 0x17178A77: jne 0x17178abf */
L_17178A79:
    eax = MEM32(esi); /* 0x17178A79: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x17178A7B: push esi */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x17178A7C: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x17178A7F: mov ebx, eax */
    eax = MEM32(esi); /* 0x17178A81: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x17178A83: push esi */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x17178A84: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    ebx = (uint32_t)((int32_t)ebx * (int32_t)eax); /* 0x17178A87: imul ebx, eax */
    eax = MEM32(esi + 0x20); /* 0x17178A8A: mov eax, dword ptr [esi + 0x20] */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) & 0; /* 0x17178A8D: and dword ptr [ebp + 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = (uint32_t)((int32_t)eax * (int32_t)ebx); /* 0x17178A91: imul eax, ebx */
    /* test eax, eax */ /* 0x17178A94: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17178ABB; /* 0x17178A96: jbe 0x17178abb */
L_17178A98:
    ecx = MEM32(ebp + 0xC); /* 0x17178A98: mov ecx, dword ptr [ebp + 0xc] */
    eax = MEM32(esi + 0x18); /* 0x17178A9B: mov eax, dword ptr [esi + 0x18] */
    edx = MEM32(edi + 0x18); /* 0x17178A9E: mov edx, dword ptr [edi + 0x18] */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x17178AA1: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x17178AA1: shl ecx, 2 */
    fp_push(*(float*)&MEM32(edx + ecx)); /* 0x17178AA4: fld dword ptr [edx + ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x17178AA7: add eax, ecx */
    _flag_k = FK_ADD;
    _st[0] += (double)*(float*)ADDR(eax); /* 0x17178AA9: fadd dword ptr [eax] */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 1; /* 0x17178AAB: inc dword ptr [ebp + 0xc] */
    _flag_k = FK_INC;
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x17178AAE: fstp dword ptr [eax] */
    eax = MEM32(esi + 0x20); /* 0x17178AB0: mov eax, dword ptr [esi + 0x20] */
    eax = (uint32_t)((int32_t)eax * (int32_t)ebx); /* 0x17178AB3: imul eax, ebx */
    /* cmp MEM32(ebp + 0xC), eax */ /* 0x17178AB6: cmp dword ptr [ebp + 0xc], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17178A98; /* 0x17178AB9: jb 0x17178a98 */
L_17178ABB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17178ABB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_17178AC4; /* 0x17178ABD: jmp 0x17178ac4 */
L_17178ABF:
    eax = 0x8876086Cu; /* 0x17178ABF: mov eax, 0x8876086c */
L_17178AC4:
    esi = POP32_VAL(esp); /* 0x17178AC4: pop esi */
    ebx = POP32_VAL(esp); /* 0x17178AC5: pop ebx */
L_17178AC6:
    edi = POP32_VAL(esp); /* 0x17178AC6: pop edi */
    ebp = POP32_VAL(esp); /* 0x17178AC7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x17178AC8: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_17178AD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17178AD0u);

L_17178AD0:
    edi = edi; /* 0x17178AD0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17178AD2: push ebp */
    ebp = esp; /* 0x17178AD3: mov ebp, esp */
    PUSH32(esp, esi); /* 0x17178AD5: push esi */
    PUSH32(esp, edi); /* 0x17178AD6: push edi */
    edi = MEM32(ebp + 0x8); /* 0x17178AD7: mov edi, dword ptr [ebp + 8] */
    eax = MEM32(edi + 0x8); /* 0x17178ADA: mov eax, dword ptr [edi + 8] */
    /* test eax, eax */ /* 0x17178ADD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17178AE7; /* 0x17178ADF: je 0x17178ae7 */
L_17178AE1:
    ecx = MEM32(eax); /* 0x17178AE1: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x17178AE3: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x17178AE4: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
L_17178AE7:
    esi = MEM32(ebp + 0xC); /* 0x17178AE7: mov esi, dword ptr [ebp + 0xc] */
    /* test esi, esi */ /* 0x17178AEA: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17178AF4; /* 0x17178AEC: je 0x17178af4 */
L_17178AEE:
    eax = MEM32(esi); /* 0x17178AEE: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x17178AF0: push esi */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x17178AF1: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_17178AF4:
    MEM32(edi + 0x8) = esi; /* 0x17178AF4: mov dword ptr [edi + 8], esi */
    edi = POP32_VAL(esp); /* 0x17178AF7: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17178AF8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x17178AFA: pop esi */
    ebp = POP32_VAL(esp); /* 0x17178AFB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x17178AFC: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_17178B04(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17178B04u);

L_17178B04:
    edi = edi; /* 0x17178B04: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17178B06: push ebp */
    ebp = esp; /* 0x17178B07: mov ebp, esp */
    PUSH32(esp, esi); /* 0x17178B09: push esi */
    esi = MEM32(ebp + 0x8); /* 0x17178B0A: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(esi + 0x8); /* 0x17178B0D: mov eax, dword ptr [esi + 8] */
    /* test eax, eax */ /* 0x17178B10: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17178B1E; /* 0x17178B12: je 0x17178b1e */
L_17178B14:
    ecx = MEM32(eax); /* 0x17178B14: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x17178B16: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x17178B17: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x8) = MEM32(esi + 0x8) & 0; /* 0x17178B1A: and dword ptr [esi + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_17178B1E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17178B1E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x17178B20: pop esi */
    ebp = POP32_VAL(esp); /* 0x17178B21: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x17178B22: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_17178B2A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17178B2Au);

L_17178B2A:
    edi = edi; /* 0x17178B2A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17178B2C: push ebp */
    ebp = esp; /* 0x17178B2D: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x17178B2F: mov ecx, dword ptr [ebp + 8] */
    /* cmp MEM32(ecx + 0x8), 0 */ /* 0x17178B32: cmp dword ptr [ecx + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17178B3F; /* 0x17178B36: jne 0x17178b3f */
L_17178B38:
    eax = 0x8876086Cu; /* 0x17178B38: mov eax, 0x8876086c */
    goto L_17178B49; /* 0x17178B3D: jmp 0x17178b49 */
L_17178B3F:
    eax = MEM32(ecx + 0x8); /* 0x17178B3F: mov eax, dword ptr [ecx + 8] */
    edx = MEM32(eax); /* 0x17178B42: mov edx, dword ptr [eax] */
    PUSH32(esp, ecx); /* 0x17178B44: push ecx */
    PUSH32(esp, eax); /* 0x17178B45: push eax */
    RECOMP_ICALL(MEM32(edx + 0x1C)); /* 0x17178B46: call dword ptr [edx + 0x1c] */
    RECOMP_FLAGS_IN();
L_17178B49:
    ebp = POP32_VAL(esp); /* 0x17178B49: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x17178B4A: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_17178B52(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17178B52u);

L_17178B52:
    edi = edi; /* 0x17178B52: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17178B54: push ebp */
    ebp = esp; /* 0x17178B55: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x17178B57: sub esp, 0x1c */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x17178B5A: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x17178B5B: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x8), ebx */ /* 0x17178B5D: cmp dword ptr [ebp + 8], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x17178B60: push esi */
    MEM32(ebp + (-0x4)) = ebx; /* 0x17178B61: mov dword ptr [ebp - 4], ebx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17178C71; /* 0x17178B64: je 0x17178c71 */
L_17178B6A:
    esi = MEM32(ebp + 0xC); /* 0x17178B6A: mov esi, dword ptr [ebp + 0xc] */
    /* cmp esi, ebx */ /* 0x17178B6D: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17178C71; /* 0x17178B6F: je 0x17178c71 */
L_17178B75:
    PUSH32(esp, ebx); /* 0x17178B75: push ebx */
    PUSH32(esp, 0x08000080u); /* 0x17178B76: push 0x8000080 */
    PUSH32(esp, 2); /* 0x17178B7B: push 2 */
    PUSH32(esp, ebx); /* 0x17178B7D: push ebx */
    PUSH32(esp, ebx); /* 0x17178B7E: push ebx */
    PUSH32(esp, 0x40000000u); /* 0x17178B7F: push 0x40000000 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x17178B84: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x170010F0)); /* 0x17178B87: call dword ptr [0x170010f0] */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0xFFFFFFFFu */ /* 0x17178B8D: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x8) = eax; /* 0x17178B90: mov dword ptr [ebp + 8], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_17178BA4; /* 0x17178B93: jne 0x17178ba4 */
L_17178B95:
    RECOMP_CALL(sub_1717882B); /* 0x17178B95: call 0x1717882b */
    RECOMP_FLAGS_IN();
    eax = 0x80004005u; /* 0x17178B9A: mov eax, 0x80004005 */
    goto L_17178C76; /* 0x17178B9F: jmp 0x17178c76 */
L_17178BA4:
    eax = MEM32(esi); /* 0x17178BA4: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x17178BA6: push esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x17178BA7: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x1C)) = eax; /* 0x17178BAA: mov dword ptr [ebp - 0x1c], eax */
    eax = MEM32(esi); /* 0x17178BAD: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x17178BAF: push esi */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x17178BB0: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x18)) = eax; /* 0x17178BB3: mov dword ptr [ebp - 0x18], eax */
    eax = MEM32(esi); /* 0x17178BB6: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x17178BB8: push esi */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x17178BB9: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x14)) = eax; /* 0x17178BBC: mov dword ptr [ebp - 0x14], eax */
    eax = MEM32(esi); /* 0x17178BBF: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x17178BC1: push esi */
    RECOMP_ICALL(MEM32(eax + 0x1C)); /* 0x17178BC2: call dword ptr [eax + 0x1c] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x10)) = eax; /* 0x17178BC5: mov dword ptr [ebp - 0x10], eax */
    eax = MEM32(esi); /* 0x17178BC8: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x17178BCA: push esi */
    RECOMP_ICALL(MEM32(eax + 0x20)); /* 0x17178BCB: call dword ptr [eax + 0x20] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0xC)) = eax; /* 0x17178BCE: mov dword ptr [ebp - 0xc], eax */
    eax = MEM32(esi); /* 0x17178BD1: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x17178BD3: push esi */
    RECOMP_ICALL(MEM32(eax + 0x18)); /* 0x17178BD4: call dword ptr [eax + 0x18] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x8)) = eax; /* 0x17178BD7: mov dword ptr [ebp - 8], eax */
    PUSH32(esp, edi); /* 0x17178BDA: push edi */
L_17178BDB:
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) & 0; /* 0x17178BDB: and dword ptr [ebp + 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x18u); /* 0x17178BDF: push 0x18 */
    edi = POP32_VAL(esp); /* 0x17178BE1: pop edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ebx; /* 0x17178BE2: sub edi, ebx */
    _flag_k = FK_CMP;
    eax = 0x00400000u; /* 0x17178BE4: mov eax, 0x400000 */
    /* cmp edi, eax */ /* 0x17178BE9: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_17178BEF; /* 0x17178BEB: jbe 0x17178bef */
L_17178BED:
    edi = eax; /* 0x17178BED: mov edi, eax */
L_17178BEF:
    PUSH32(esp, 0); /* 0x17178BEF: push 0 */
    eax = ebp + 0xC; /* 0x17178BF1: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x17178BF4: push eax */
    PUSH32(esp, edi); /* 0x17178BF5: push edi */
    eax = ebp + ebx + (-0x1C); /* 0x17178BF6: lea eax, [ebp + ebx - 0x1c] */
    PUSH32(esp, eax); /* 0x17178BFA: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x17178BFB: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x170010E4)); /* 0x17178BFE: call dword ptr [0x170010e4] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17178C04: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17178C65; /* 0x17178C06: je 0x17178c65 */
L_17178C08:
    /* cmp MEM32(ebp + 0xC), edi */ /* 0x17178C08: cmp dword ptr [ebp + 0xc], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17178C6A; /* 0x17178C0B: jne 0x17178c6a */
L_17178C0D:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + edi; /* 0x17178C0D: add ebx, edi */
    _flag_k = FK_ADD;
    /* cmp ebx, 0x18u */ /* 0x17178C0F: cmp ebx, 0x18 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_17178BDB; /* 0x17178C12: jne 0x17178bdb */
L_17178C14:
    eax = MEM32(esi); /* 0x17178C14: mov eax, dword ptr [esi] */
    ecx = ebp + (-0x4); /* 0x17178C16: lea ecx, [ebp - 4] */
    PUSH32(esp, ecx); /* 0x17178C19: push ecx */
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x17178C1A: push dword ptr [ebp - 0x1c] */
    PUSH32(esp, 0); /* 0x17178C1D: push 0 */
    PUSH32(esp, esi); /* 0x17178C1F: push esi */
    RECOMP_ICALL(MEM32(eax + 0x28)); /* 0x17178C20: call dword ptr [eax + 0x28] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x17178C23: mov edi, eax */
    /* test edi, edi */ /* 0x17178C25: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17178C4B; /* 0x17178C27: jl 0x17178c4b */
L_17178C29:
    eax = MEM32(ebp + (-0x14)); /* 0x17178C29: mov eax, dword ptr [ebp - 0x14] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + (-0x18))); /* 0x17178C2C: imul eax, dword ptr [ebp - 0x18] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + (-0x1C))); /* 0x17178C30: imul eax, dword ptr [ebp - 0x1c] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x17178C34: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x17178C34: shl eax, 2 */
    PUSH32(esp, eax); /* 0x17178C37: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x17178C38: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x17178C3B: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_17178866); /* 0x17178C3E: call 0x17178866 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x17178C43: mov edi, eax */
    /* test edi, edi */ /* 0x17178C45: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17178C4B; /* 0x17178C47: jl 0x17178c4b */
L_17178C49:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x17178C49: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_17178C4B:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x17178C4B: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x170010F8)); /* 0x17178C4E: call dword ptr [0x170010f8] */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x17178C54: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17178C60; /* 0x17178C58: je 0x17178c60 */
L_17178C5A:
    eax = MEM32(esi); /* 0x17178C5A: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x17178C5C: push esi */
    RECOMP_ICALL(MEM32(eax + 0x2C)); /* 0x17178C5D: call dword ptr [eax + 0x2c] */
    RECOMP_FLAGS_IN();
L_17178C60:
    eax = edi; /* 0x17178C60: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x17178C62: pop edi */
    goto L_17178C76; /* 0x17178C63: jmp 0x17178c76 */
L_17178C65:
    RECOMP_CALL(sub_1717882B); /* 0x17178C65: call 0x1717882b */
    RECOMP_FLAGS_IN();
L_17178C6A:
    edi = 0x80004005u; /* 0x17178C6A: mov edi, 0x80004005 */
    RECOMP_BACKEDGE();
    goto L_17178C4B; /* 0x17178C6F: jmp 0x17178c4b */
L_17178C71:
    eax = 0x8876086Cu; /* 0x17178C71: mov eax, 0x8876086c */
L_17178C76:
    esi = POP32_VAL(esp); /* 0x17178C76: pop esi */
    ebx = POP32_VAL(esp); /* 0x17178C77: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17178C78: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x17178C79: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_17178C81(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17178C81u);

L_17178C81:
    edi = edi; /* 0x17178C81: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17178C83: push ebp */
    ebp = esp; /* 0x17178C84: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x17178C86: sub esp, 0x1c */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x17178C89: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x17178C8A: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x8), ebx */ /* 0x17178C8C: cmp dword ptr [ebp + 8], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x17178C8F: push esi */
    MEM32(ebp + (-0x4)) = ebx; /* 0x17178C90: mov dword ptr [ebp - 4], ebx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17178DA0; /* 0x17178C93: je 0x17178da0 */
L_17178C99:
    esi = MEM32(ebp + 0xC); /* 0x17178C99: mov esi, dword ptr [ebp + 0xc] */
    /* cmp esi, ebx */ /* 0x17178C9C: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17178DA0; /* 0x17178C9E: je 0x17178da0 */
L_17178CA4:
    PUSH32(esp, ebx); /* 0x17178CA4: push ebx */
    PUSH32(esp, 0x08000080u); /* 0x17178CA5: push 0x8000080 */
    PUSH32(esp, 2); /* 0x17178CAA: push 2 */
    PUSH32(esp, ebx); /* 0x17178CAC: push ebx */
    PUSH32(esp, ebx); /* 0x17178CAD: push ebx */
    PUSH32(esp, 0x40000000u); /* 0x17178CAE: push 0x40000000 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x17178CB3: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x170010AC)); /* 0x17178CB6: call dword ptr [0x170010ac] */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0xFFFFFFFFu */ /* 0x17178CBC: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x8) = eax; /* 0x17178CBF: mov dword ptr [ebp + 8], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_17178CD3; /* 0x17178CC2: jne 0x17178cd3 */
L_17178CC4:
    RECOMP_CALL(sub_1717882B); /* 0x17178CC4: call 0x1717882b */
    RECOMP_FLAGS_IN();
    eax = 0x80004005u; /* 0x17178CC9: mov eax, 0x80004005 */
    goto L_17178DA5; /* 0x17178CCE: jmp 0x17178da5 */
L_17178CD3:
    eax = MEM32(esi); /* 0x17178CD3: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x17178CD5: push esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x17178CD6: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x1C)) = eax; /* 0x17178CD9: mov dword ptr [ebp - 0x1c], eax */
    eax = MEM32(esi); /* 0x17178CDC: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x17178CDE: push esi */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x17178CDF: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x18)) = eax; /* 0x17178CE2: mov dword ptr [ebp - 0x18], eax */
    eax = MEM32(esi); /* 0x17178CE5: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x17178CE7: push esi */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x17178CE8: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x14)) = eax; /* 0x17178CEB: mov dword ptr [ebp - 0x14], eax */
    eax = MEM32(esi); /* 0x17178CEE: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x17178CF0: push esi */
    RECOMP_ICALL(MEM32(eax + 0x1C)); /* 0x17178CF1: call dword ptr [eax + 0x1c] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x10)) = eax; /* 0x17178CF4: mov dword ptr [ebp - 0x10], eax */
    eax = MEM32(esi); /* 0x17178CF7: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x17178CF9: push esi */
    RECOMP_ICALL(MEM32(eax + 0x20)); /* 0x17178CFA: call dword ptr [eax + 0x20] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0xC)) = eax; /* 0x17178CFD: mov dword ptr [ebp - 0xc], eax */
    eax = MEM32(esi); /* 0x17178D00: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x17178D02: push esi */
    RECOMP_ICALL(MEM32(eax + 0x18)); /* 0x17178D03: call dword ptr [eax + 0x18] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x8)) = eax; /* 0x17178D06: mov dword ptr [ebp - 8], eax */
    PUSH32(esp, edi); /* 0x17178D09: push edi */
L_17178D0A:
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) & 0; /* 0x17178D0A: and dword ptr [ebp + 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x18u); /* 0x17178D0E: push 0x18 */
    edi = POP32_VAL(esp); /* 0x17178D10: pop edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ebx; /* 0x17178D11: sub edi, ebx */
    _flag_k = FK_CMP;
    eax = 0x00400000u; /* 0x17178D13: mov eax, 0x400000 */
    /* cmp edi, eax */ /* 0x17178D18: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_17178D1E; /* 0x17178D1A: jbe 0x17178d1e */
L_17178D1C:
    edi = eax; /* 0x17178D1C: mov edi, eax */
L_17178D1E:
    PUSH32(esp, 0); /* 0x17178D1E: push 0 */
    eax = ebp + 0xC; /* 0x17178D20: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x17178D23: push eax */
    PUSH32(esp, edi); /* 0x17178D24: push edi */
    eax = ebp + ebx + (-0x1C); /* 0x17178D25: lea eax, [ebp + ebx - 0x1c] */
    PUSH32(esp, eax); /* 0x17178D29: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x17178D2A: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x170010E4)); /* 0x17178D2D: call dword ptr [0x170010e4] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17178D33: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17178D94; /* 0x17178D35: je 0x17178d94 */
L_17178D37:
    /* cmp MEM32(ebp + 0xC), edi */ /* 0x17178D37: cmp dword ptr [ebp + 0xc], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17178D99; /* 0x17178D3A: jne 0x17178d99 */
L_17178D3C:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + edi; /* 0x17178D3C: add ebx, edi */
    _flag_k = FK_ADD;
    /* cmp ebx, 0x18u */ /* 0x17178D3E: cmp ebx, 0x18 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_17178D0A; /* 0x17178D41: jne 0x17178d0a */
L_17178D43:
    eax = MEM32(esi); /* 0x17178D43: mov eax, dword ptr [esi] */
    ecx = ebp + (-0x4); /* 0x17178D45: lea ecx, [ebp - 4] */
    PUSH32(esp, ecx); /* 0x17178D48: push ecx */
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x17178D49: push dword ptr [ebp - 0x1c] */
    PUSH32(esp, 0); /* 0x17178D4C: push 0 */
    PUSH32(esp, esi); /* 0x17178D4E: push esi */
    RECOMP_ICALL(MEM32(eax + 0x28)); /* 0x17178D4F: call dword ptr [eax + 0x28] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x17178D52: mov edi, eax */
    /* test edi, edi */ /* 0x17178D54: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17178D7A; /* 0x17178D56: jl 0x17178d7a */
L_17178D58:
    eax = MEM32(ebp + (-0x14)); /* 0x17178D58: mov eax, dword ptr [ebp - 0x14] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + (-0x18))); /* 0x17178D5B: imul eax, dword ptr [ebp - 0x18] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + (-0x1C))); /* 0x17178D5F: imul eax, dword ptr [ebp - 0x1c] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x17178D63: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x17178D63: shl eax, 2 */
    PUSH32(esp, eax); /* 0x17178D66: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x17178D67: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x17178D6A: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_17178866); /* 0x17178D6D: call 0x17178866 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x17178D72: mov edi, eax */
    /* test edi, edi */ /* 0x17178D74: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17178D7A; /* 0x17178D76: jl 0x17178d7a */
L_17178D78:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x17178D78: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_17178D7A:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x17178D7A: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x170010F8)); /* 0x17178D7D: call dword ptr [0x170010f8] */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x17178D83: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17178D8F; /* 0x17178D87: je 0x17178d8f */
L_17178D89:
    eax = MEM32(esi); /* 0x17178D89: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x17178D8B: push esi */
    RECOMP_ICALL(MEM32(eax + 0x2C)); /* 0x17178D8C: call dword ptr [eax + 0x2c] */
    RECOMP_FLAGS_IN();
L_17178D8F:
    eax = edi; /* 0x17178D8F: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x17178D91: pop edi */
    goto L_17178DA5; /* 0x17178D92: jmp 0x17178da5 */
L_17178D94:
    RECOMP_CALL(sub_1717882B); /* 0x17178D94: call 0x1717882b */
    RECOMP_FLAGS_IN();
L_17178D99:
    edi = 0x80004005u; /* 0x17178D99: mov edi, 0x80004005 */
    RECOMP_BACKEDGE();
    goto L_17178D7A; /* 0x17178D9E: jmp 0x17178d7a */
L_17178DA0:
    eax = 0x8876086Cu; /* 0x17178DA0: mov eax, 0x8876086c */
L_17178DA5:
    esi = POP32_VAL(esp); /* 0x17178DA5: pop esi */
    ebx = POP32_VAL(esp); /* 0x17178DA6: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17178DA7: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x17178DA8: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_17178DB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17178DB0u);

L_17178DB0:
    edx = MEM32(ecx + 0x20); /* 0x17178DB0: mov edx, dword ptr [ecx + 0x20] */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ecx + 0x24)); /* 0x17178DB3: imul edx, dword ptr [ecx + 0x24] */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ecx + 0x28)); /* 0x17178DB7: imul edx, dword ptr [ecx + 0x28] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17178DBB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edx, edx */ /* 0x17178DBD: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17178DD9; /* 0x17178DBF: jbe 0x17178dd9 */
L_17178DC1:
    edx = MEM32(ecx + 0x18); /* 0x17178DC1: mov edx, dword ptr [ecx + 0x18] */
    fp_push(0.0); /* 0x17178DC4: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx + eax * 4) = _v; } /* 0x17178DC6: fstp dword ptr [edx + eax*4] */
    edx = MEM32(ecx + 0x20); /* 0x17178DC9: mov edx, dword ptr [ecx + 0x20] */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ecx + 0x24)); /* 0x17178DCC: imul edx, dword ptr [ecx + 0x24] */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ecx + 0x28)); /* 0x17178DD0: imul edx, dword ptr [ecx + 0x28] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17178DD4: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, edx */ /* 0x17178DD5: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17178DC1; /* 0x17178DD7: jb 0x17178dc1 */
L_17178DD9:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x17178DD9: ret  */
    RECOMP_REGS_OUT();
}

void sub_17178DDF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17178DDFu);

L_17178DDF:
    edi = edi; /* 0x17178DDF: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17178DE1: push ebp */
    ebp = esp; /* 0x17178DE2: mov ebp, esp */
    PUSH32(esp, esi); /* 0x17178DE4: push esi */
    esi = ecx; /* 0x17178DE5: mov esi, ecx */
    RECOMP_CALL(sub_17178934); /* 0x17178DE7: call 0x17178934 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x17178DEC: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_17178DF9; /* 0x17178DF0: je 0x17178df9 */
L_17178DF2:
    PUSH32(esp, esi); /* 0x17178DF2: push esi */
    RECOMP_CALL(sub_1721B010); /* 0x17178DF3: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x17178DF8: pop ecx */
L_17178DF9:
    eax = esi; /* 0x17178DF9: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x17178DFB: pop esi */
    ebp = POP32_VAL(esp); /* 0x17178DFC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x17178DFD: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_17178E05(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17178E05u);

L_17178E05:
    edi = edi; /* 0x17178E05: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17178E07: push ebp */
    ebp = esp; /* 0x17178E08: mov ebp, esp */
    eax = MEM32(ebp + 0x10); /* 0x17178E0A: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x17178E0D: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x17178E10: push esi */
    esi = MEM32(ebp + 0xC); /* 0x17178E11: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x17178E14: push edi */
    PUSH32(esp, 4); /* 0x17178E15: push 4 */
    ecx = POP32_VAL(esp); /* 0x17178E17: pop ecx */
    edi = 0x1702AA2Cu; /* 0x17178E18: mov edi, 0x1702aa2c */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x17178E1D: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x17178E1F: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_17178E34; /* 0x17178E21: je 0x17178e34 */
L_17178E23:
    esi = MEM32(ebp + 0xC); /* 0x17178E23: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, 4); /* 0x17178E26: push 4 */
    ecx = POP32_VAL(esp); /* 0x17178E28: pop ecx */
    edi = 0x17001B70u; /* 0x17178E29: mov edi, 0x17001b70 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x17178E2E: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x17178E30: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_17178E43; /* 0x17178E32: jne 0x17178e43 */
L_17178E34:
    ecx = MEM32(ebp + 0x8); /* 0x17178E34: mov ecx, dword ptr [ebp + 8] */
    MEM32(eax) = ecx; /* 0x17178E37: mov dword ptr [eax], ecx */
    eax = MEM32(ecx); /* 0x17178E39: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x17178E3B: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x17178E3C: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17178E3F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_17178E48; /* 0x17178E41: jmp 0x17178e48 */
L_17178E43:
    eax = 0x80004002u; /* 0x17178E43: mov eax, 0x80004002 */
L_17178E48:
    edi = POP32_VAL(esp); /* 0x17178E48: pop edi */
    esi = POP32_VAL(esp); /* 0x17178E49: pop esi */
    ebp = POP32_VAL(esp); /* 0x17178E4A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x17178E4B: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_17178E53(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17178E53u);

L_17178E53:
    edi = edi; /* 0x17178E53: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17178E55: push ebp */
    ebp = esp; /* 0x17178E56: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x17178E58: push ecx */
    eax = MEM32(ebp + 0xC); /* 0x17178E59: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x17178E5C: push esi */
    esi = MEM32(ebp + 0x8); /* 0x17178E5D: mov esi, dword ptr [ebp + 8] */
    /* cmp eax, MEM32(esi + 0x1C) */ /* 0x17178E60: cmp eax, dword ptr [esi + 0x1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x1C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x17178E63: push edi */
    if (CMP_A(_flag_a, _flag_b)) goto L_17178E6E; /* 0x17178E64: ja 0x17178e6e */
L_17178E66:
    MEM32(esi + 0x20) = eax; /* 0x17178E66: mov dword ptr [esi + 0x20], eax */
    goto L_17178F8C; /* 0x17178E69: jmp 0x17178f8c */
L_17178E6E:
    ecx = MEM32(esi + 0x18); /* 0x17178E6E: mov ecx, dword ptr [esi + 0x18] */
    edx = 0x80000000u; /* 0x17178E71: mov edx, 0x80000000 */
    /* cmp eax, edx */ /* 0x17178E76: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, 0x1Eu); /* 0x17178E78: push 0x1e */
    MEM32(ebp + (-0x4)) = ecx; /* 0x17178E7A: mov dword ptr [ebp - 4], ecx */
    ecx = POP32_VAL(esp); /* 0x17178E7D: pop ecx */
    if (CMP_BE(_flag_a, _flag_b)) goto L_17178E89; /* 0x17178E7E: jbe 0x17178e89 */
L_17178E80:
    MEM32(ebp + 0x8) = 0x20u; /* 0x17178E80: mov dword ptr [ebp + 8], 0x20 */
    goto L_17178EAA; /* 0x17178E87: jmp 0x17178eaa */
L_17178E89:
    /* cmp eax, 1 */ /* 0x17178E89: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_17178E94; /* 0x17178E8C: ja 0x17178e94 */
L_17178E8E:
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) & 0; /* 0x17178E8E: and dword ptr [ebp + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_17178EAA; /* 0x17178E92: jmp 0x17178eaa */
L_17178E94:
    /* cmp eax, edx */ /* 0x17178E94: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_17178EA6; /* 0x17178E96: jae 0x17178ea6 */
L_17178E98:
    /* test ecx, ecx */ /* 0x17178E98: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17178EA6; /* 0x17178E9A: je 0x17178ea6 */
L_17178E9C:
    PUSH32(esp, 2); /* 0x17178E9C: push 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x17178E9E: dec ecx */
    _flag_k = FK_DEC;
    edi = POP32_VAL(esp); /* 0x17178E9F: pop edi */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edi) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x17178EA0: shl edi, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edi << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << ((LO8(ecx)) & 31); /* 0x17178EA0: shl edi, cl */
    /* cmp edi, eax */ /* 0x17178EA2: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_17178E98; /* 0x17178EA4: ja 0x17178e98 */
L_17178EA6:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x17178EA6: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + 0x8) = ecx; /* 0x17178EA7: mov dword ptr [ebp + 8], ecx */
L_17178EAA:
    edi = MEM32(esi + 0x24); /* 0x17178EAA: mov edi, dword ptr [esi + 0x24] */
    /* cmp edi, edx */ /* 0x17178EAD: cmp edi, edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x17178EAF: push ebx */
    PUSH32(esp, 0x1Eu); /* 0x17178EB0: push 0x1e */
    ecx = POP32_VAL(esp); /* 0x17178EB2: pop ecx */
    if (CMP_BE(_flag_a, _flag_b)) goto L_17178EBA; /* 0x17178EB3: jbe 0x17178eba */
L_17178EB5:
    PUSH32(esp, 0x20u); /* 0x17178EB5: push 0x20 */
    ebx = POP32_VAL(esp); /* 0x17178EB7: pop ebx */
    goto L_17178ED8; /* 0x17178EB8: jmp 0x17178ed8 */
L_17178EBA:
    /* cmp edi, 1 */ /* 0x17178EBA: cmp edi, 1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_17178EC3; /* 0x17178EBD: ja 0x17178ec3 */
L_17178EBF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x17178EBF: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_17178ED8; /* 0x17178EC1: jmp 0x17178ed8 */
L_17178EC3:
    /* cmp edi, edx */ /* 0x17178EC3: cmp edi, edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_17178ED5; /* 0x17178EC5: jae 0x17178ed5 */
L_17178EC7:
    /* test ecx, ecx */ /* 0x17178EC7: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17178ED5; /* 0x17178EC9: je 0x17178ed5 */
L_17178ECB:
    PUSH32(esp, 2); /* 0x17178ECB: push 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x17178ECD: dec ecx */
    _flag_k = FK_DEC;
    eax = POP32_VAL(esp); /* 0x17178ECE: pop eax */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x17178ECF: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x17178ECF: shl eax, cl */
    /* cmp eax, edi */ /* 0x17178ED1: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_17178EC7; /* 0x17178ED3: ja 0x17178ec7 */
L_17178ED5:
    ebx = ecx + 0x1; /* 0x17178ED5: lea ebx, [ecx + 1] */
L_17178ED8:
    eax = MEM32(esi + 0x28); /* 0x17178ED8: mov eax, dword ptr [esi + 0x28] */
    /* cmp eax, edx */ /* 0x17178EDB: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, 0x1Eu); /* 0x17178EDD: push 0x1e */
    ecx = POP32_VAL(esp); /* 0x17178EDF: pop ecx */
    if (CMP_BE(_flag_a, _flag_b)) goto L_17178EE7; /* 0x17178EE0: jbe 0x17178ee7 */
L_17178EE2:
    PUSH32(esp, 0x20u); /* 0x17178EE2: push 0x20 */
    ecx = POP32_VAL(esp); /* 0x17178EE4: pop ecx */
    goto L_17178F03; /* 0x17178EE5: jmp 0x17178f03 */
L_17178EE7:
    /* cmp eax, 1 */ /* 0x17178EE7: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_17178EF0; /* 0x17178EEA: ja 0x17178ef0 */
L_17178EEC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x17178EEC: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_17178F03; /* 0x17178EEE: jmp 0x17178f03 */
L_17178EF0:
    /* cmp eax, edx */ /* 0x17178EF0: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_17178F02; /* 0x17178EF2: jae 0x17178f02 */
L_17178EF4:
    /* test ecx, ecx */ /* 0x17178EF4: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17178F02; /* 0x17178EF6: je 0x17178f02 */
L_17178EF8:
    PUSH32(esp, 2); /* 0x17178EF8: push 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x17178EFA: dec ecx */
    _flag_k = FK_DEC;
    edx = POP32_VAL(esp); /* 0x17178EFB: pop edx */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x17178EFC: shl edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edx << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << ((LO8(ecx)) & 31); /* 0x17178EFC: shl edx, cl */
    /* cmp edx, eax */ /* 0x17178EFE: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_17178EF4; /* 0x17178F00: ja 0x17178ef4 */
L_17178F02:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x17178F02: inc ecx */
    _flag_k = FK_INC;
L_17178F03:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ebx; /* 0x17178F03: add ecx, ebx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + 0x8); /* 0x17178F05: add ecx, dword ptr [ebp + 8] */
    _flag_k = FK_ADD;
    ebx = POP32_VAL(esp); /* 0x17178F08: pop ebx */
    /* cmp ecx, 0x1Fu */ /* 0x17178F09: cmp ecx, 0x1f */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_17178F15; /* 0x17178F0C: jbe 0x17178f15 */
L_17178F0E:
    eax = 0x8876086Cu; /* 0x17178F0E: mov eax, 0x8876086c */
    goto L_17178F8E; /* 0x17178F13: jmp 0x17178f8e */
L_17178F15:
    eax = (uint32_t)((int32_t)eax * (int32_t)edi); /* 0x17178F15: imul eax, edi */
    edi = MEM32(ebp + 0xC); /* 0x17178F18: mov edi, dword ptr [ebp + 0xc] */
    eax = (uint32_t)((int32_t)eax * (int32_t)edi); /* 0x17178F1B: imul eax, edi */
    eax = eax * 4 + 0x4; /* 0x17178F1E: lea eax, [eax*4 + 4] */
    PUSH32(esp, eax); /* 0x17178F25: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x17178F26: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17178F2B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x17178F2D: pop ecx */
    MEM32(esi + 0x18) = eax; /* 0x17178F2E: mov dword ptr [esi + 0x18], eax */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17178F3A; /* 0x17178F31: jne 0x17178f3a */
L_17178F33:
    eax = 0x8007000Eu; /* 0x17178F33: mov eax, 0x8007000e */
    goto L_17178F8E; /* 0x17178F38: jmp 0x17178f8e */
L_17178F3A:
    ecx = MEM32(esi + 0x24); /* 0x17178F3A: mov ecx, dword ptr [esi + 0x24] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(esi + 0x28)); /* 0x17178F3D: imul ecx, dword ptr [esi + 0x28] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(esi + 0x20)); /* 0x17178F41: imul ecx, dword ptr [esi + 0x20] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17178F45: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x17178F47: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17178F67; /* 0x17178F49: jbe 0x17178f67 */
L_17178F4B:
    edx = MEM32(ebp + (-0x4)); /* 0x17178F4B: mov edx, dword ptr [ebp - 4] */
    ecx = MEM32(esi + 0x18); /* 0x17178F4E: mov ecx, dword ptr [esi + 0x18] */
    fp_push(*(float*)&MEM32(edx + eax * 4)); /* 0x17178F51: fld dword ptr [edx + eax*4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + eax * 4) = _v; } /* 0x17178F54: fstp dword ptr [ecx + eax*4] */
    ecx = MEM32(esi + 0x24); /* 0x17178F57: mov ecx, dword ptr [esi + 0x24] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(esi + 0x28)); /* 0x17178F5A: imul ecx, dword ptr [esi + 0x28] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(esi + 0x20)); /* 0x17178F5E: imul ecx, dword ptr [esi + 0x20] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17178F62: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, ecx */ /* 0x17178F63: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17178F4B; /* 0x17178F65: jb 0x17178f4b */
L_17178F67:
    eax = MEM32(esi + 0x24); /* 0x17178F67: mov eax, dword ptr [esi + 0x24] */
    fp_push(*(float*)&MEM32(0x17021F58)); /* 0x17178F6A: fld dword ptr [0x17021f58] */
    ecx = MEM32(esi + 0x18); /* 0x17178F70: mov ecx, dword ptr [esi + 0x18] */
    eax = (uint32_t)((int32_t)eax * (int32_t)edi); /* 0x17178F73: imul eax, edi */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esi + 0x28)); /* 0x17178F76: imul eax, dword ptr [esi + 0x28] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x17178F7A: push dword ptr [ebp - 4] */
    MEM32(esi + 0x20) = edi; /* 0x17178F7D: mov dword ptr [esi + 0x20], edi */
    MEM32(esi + 0x1C) = edi; /* 0x17178F80: mov dword ptr [esi + 0x1c], edi */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + eax * 4) = _v; } /* 0x17178F83: fstp dword ptr [ecx + eax*4] */
    RECOMP_CALL(sub_1721B010); /* 0x17178F86: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x17178F8B: pop ecx */
L_17178F8C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17178F8C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_17178F8E:
    edi = POP32_VAL(esp); /* 0x17178F8E: pop edi */
    esi = POP32_VAL(esp); /* 0x17178F8F: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17178F90: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x17178F91: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_17178F99(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17178F99u);

L_17178F99:
    eax = 0x1721C05Fu; /* 0x17178F99: mov eax, 0x1721c05f */
    RECOMP_CALL(sub_1721B168); /* 0x17178F9E: call 0x1721b168 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xE4u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xE4u; /* 0x17178FA3: sub esp, 0xe4 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x17178FA9: push esi */
    esi = MEM32(ebp + 0x8); /* 0x17178FAA: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(esi + 0x18); /* 0x17178FAD: mov eax, dword ptr [esi + 0x18] */
    PUSH32(esp, edi); /* 0x17178FB0: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x17178FB1: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x7C); /* 0x17178FB3: lea ecx, [ebp - 0x7c] */
    MEM32(ebp + (-0x14)) = eax; /* 0x17178FB6: mov dword ptr [ebp - 0x14], eax */
    MEM32(ebp + (-0x20)) = edi; /* 0x17178FB9: mov dword ptr [ebp - 0x20], edi */
    MEM32(ebp + (-0x18)) = edi; /* 0x17178FBC: mov dword ptr [ebp - 0x18], edi */
    RECOMP_CALL(sub_170D7623); /* 0x17178FBF: call 0x170d7623 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + 0x18), edi */ /* 0x17178FC4: cmp dword ptr [ebp + 0x18], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = edi; /* 0x17178FC7: mov dword ptr [ebp - 4], edi */
    MEM32(ebp + 0x8) = edi; /* 0x17178FCA: mov dword ptr [ebp + 8], edi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_17178FD9; /* 0x17178FCD: jne 0x17178fd9 */
L_17178FCF:
    esi = 0x8876086Cu; /* 0x17178FCF: mov esi, 0x8876086c */
    goto L_1717922D; /* 0x17178FD4: jmp 0x1717922d */
L_17178FD9:
    /* cmp MEM32(esi + 0xC), edi */ /* 0x17178FD9: cmp dword ptr [esi + 0xc], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17178FCF; /* 0x17178FDC: je 0x17178fcf */
L_17178FDE:
    PUSH32(esp, ebx); /* 0x17178FDE: push ebx */
    ebx = MEM32(ebp + 0x14); /* 0x17178FDF: mov ebx, dword ptr [ebp + 0x14] */
    /* cmp ebx, 4 */ /* 0x17178FE2: cmp ebx, 4 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_17179227; /* 0x17178FE5: ja 0x17179227 */
L_17178FEB:
    edi = MEM32(esi + 0x10); /* 0x17178FEB: mov edi, dword ptr [esi + 0x10] */
    ecx = MEM32(esi + 0x28); /* 0x17178FEE: mov ecx, dword ptr [esi + 0x28] */
    eax = MEM32(esi + 0x24); /* 0x17178FF1: mov eax, dword ptr [esi + 0x24] */
    edx = MEM32(ebp + 0x10); /* 0x17178FF4: mov edx, dword ptr [ebp + 0x10] */
    esi = MEM32(esi + 0x14); /* 0x17178FF7: mov esi, dword ptr [esi + 0x14] */
    MEM32(ebp + (-0x10)) = edi; /* 0x17178FFA: mov dword ptr [ebp - 0x10], edi */
    edi = (uint32_t)((int32_t)edi * (int32_t)ecx); /* 0x17178FFD: imul edi, ecx */
    edi = (uint32_t)((int32_t)edi * (int32_t)eax); /* 0x17179000: imul edi, eax */
    /* cmp edx, eax */ /* 0x17179003: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x28)) = eax; /* 0x17179005: mov dword ptr [ebp - 0x28], eax */
    MEM32(ebp + (-0x38)) = ecx; /* 0x17179008: mov dword ptr [ebp - 0x38], ecx */
    if (CMP_AE(_flag_a, _flag_b)) goto L_17179227; /* 0x1717900B: jae 0x17179227 */
L_17179011:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ebx; /* 0x17179011: add edx, ebx */
    _flag_k = FK_ADD;
    /* cmp edx, eax */ /* 0x17179013: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_17179227; /* 0x17179015: ja 0x17179227 */
L_1717901B:
    /* cmp MEM32(ebp + 0xC), ecx */ /* 0x1717901B: cmp dword ptr [ebp + 0xc], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_17179227; /* 0x1717901E: jae 0x17179227 */
L_17179024:
    ebx = MEM32(ebp + 0x18); /* 0x17179024: mov ebx, dword ptr [ebp + 0x18] */
    eax = MEM32(ebx); /* 0x17179027: mov eax, dword ptr [ebx] */
    ecx = ebp + (-0x9C); /* 0x17179029: lea ecx, [ebp - 0x9c] */
    PUSH32(esp, ecx); /* 0x1717902F: push ecx */
    PUSH32(esp, 0); /* 0x17179030: push 0 */
    PUSH32(esp, ebx); /* 0x17179032: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x44)); /* 0x17179033: call dword ptr [eax + 0x44] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17179036: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_17179041; /* 0x17179038: jge 0x17179041 */
L_1717903A:
    esi = eax; /* 0x1717903A: mov esi, eax */
    goto L_1717922C; /* 0x1717903C: jmp 0x1717922c */
L_17179041:
    eax = MEM32(ebp + (-0x80)); /* 0x17179041: mov eax, dword ptr [ebp - 0x80] */
    /* cmp eax, esi */ /* 0x17179044: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + (-0x84)); /* 0x17179046: mov ecx, dword ptr [ebp - 0x84] */
    MEM32(ebp + (-0x34)) = eax; /* 0x1717904C: mov dword ptr [ebp - 0x34], eax */
    MEM32(ebp + (-0x2C)) = ecx; /* 0x1717904F: mov dword ptr [ebp - 0x2c], ecx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_17179227; /* 0x17179052: jne 0x17179227 */
L_17179058:
    /* cmp ecx, MEM32(ebp + (-0x10)) */ /* 0x17179058: cmp ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17179227; /* 0x1717905B: jne 0x17179227 */
L_17179061:
    eax = MEM32(ebx); /* 0x17179061: mov eax, dword ptr [ebx] */
    ecx = ebp + 0x8; /* 0x17179063: lea ecx, [ebp + 8] */
    PUSH32(esp, ecx); /* 0x17179066: push ecx */
    PUSH32(esp, 0); /* 0x17179067: push 0 */
    PUSH32(esp, ebx); /* 0x17179069: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x48)); /* 0x1717906A: call dword ptr [eax + 0x48] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1717906D: mov esi, eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1717906F: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp esi, ebx */ /* 0x17179071: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_171791FE; /* 0x17179073: jl 0x171791fe */
L_17179079:
    PUSH32(esp, 0x00020000u); /* 0x17179079: push 0x20000 */
    PUSH32(esp, ebx); /* 0x1717907E: push ebx */
    PUSH32(esp, ebx); /* 0x1717907F: push ebx */
    PUSH32(esp, ebx); /* 0x17179080: push ebx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x17179081: push dword ptr [ebp + 8] */
    eax = ebp + (-0xF0); /* 0x17179084: lea eax, [ebp - 0xf0] */
    PUSH32(esp, eax); /* 0x1717908A: push eax */
    ecx = ebp + (-0x7C); /* 0x1717908B: lea ecx, [ebp - 0x7c] */
    RECOMP_CALL(sub_170D7815); /* 0x1717908E: call 0x170d7815 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x17179093: mov esi, eax */
    /* cmp esi, ebx */ /* 0x17179095: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_171791FE; /* 0x17179097: jl 0x171791fe */
L_1717909D:
    eax = ebp + (-0xF0); /* 0x1717909D: lea eax, [ebp - 0xf0] */
    PUSH32(esp, eax); /* 0x171790A3: push eax */
    RECOMP_CALL(sub_170CE38C); /* 0x171790A4: call 0x170ce38c */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x171790A9: mov ebx, eax */
    /* test ebx, ebx */ /* 0x171790AB: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x18)) = ebx; /* 0x171790AD: mov dword ptr [ebp - 0x18], ebx */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171790BC; /* 0x171790B0: jne 0x171790bc */
L_171790B2:
    esi = 0x8876086Cu; /* 0x171790B2: mov esi, 0x8876086c */
    goto L_171791FE; /* 0x171790B7: jmp 0x171791fe */
L_171790BC:
    eax = MEM32(ebp + (-0x84)); /* 0x171790BC: mov eax, dword ptr [ebp - 0x84] */
    MEM32(ebp + 0x18) = eax; /* 0x171790C2: mov dword ptr [ebp + 0x18], eax */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x171790C5: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x171790C5: shl eax, 4 */
    PUSH32(esp, eax); /* 0x171790C8: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x171790C9: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x171790CE: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x171790D0: pop ecx */
    MEM32(ebp + (-0x24)) = esi; /* 0x171790D1: mov dword ptr [ebp - 0x24], esi */
    /* test esi, esi */ /* 0x171790D4: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x171790D6: mov byte ptr [ebp - 4], 1 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171790F1; /* 0x171790DA: je 0x171790f1 */
L_171790DC:
    PUSH32(esp, 0x1706E47Eu); /* 0x171790DC: push 0x1706e47e */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x171790E1: push dword ptr [ebp + 0x18] */
    PUSH32(esp, 0x10u); /* 0x171790E4: push 0x10 */
    PUSH32(esp, esi); /* 0x171790E6: push esi */
    RECOMP_CALL(sub_1702C116); /* 0x171790E7: call 0x1702c116 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x1C)) = esi; /* 0x171790EC: mov dword ptr [ebp - 0x1c], esi */
    goto L_171790F5; /* 0x171790EF: jmp 0x171790f5 */
L_171790F1:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) & 0; /* 0x171790F1: and dword ptr [ebp - 0x1c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_171790F5:
    esi = MEM32(ebp + (-0x1C)); /* 0x171790F5: mov esi, dword ptr [ebp - 0x1c] */
    /* test esi, esi */ /* 0x171790F8: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x171790FA: mov byte ptr [ebp - 4], 0 */
    MEM32(ebp + (-0x20)) = esi; /* 0x171790FE: mov dword ptr [ebp - 0x20], esi */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1717910D; /* 0x17179101: jne 0x1717910d */
L_17179103:
    esi = 0x8007000Eu; /* 0x17179103: mov esi, 0x8007000e */
    goto L_171791FE; /* 0x17179108: jmp 0x171791fe */
L_1717910D:
    ecx = ebx; /* 0x1717910D: mov ecx, ebx */
    RECOMP_CALL(sub_170C4D09); /* 0x1717910F: call 0x170c4d09 */
    RECOMP_FLAGS_IN();
    fp_push(0.0); /* 0x17179114: fldz  */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x30))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x30)) = MEM32(ebp + (-0x30)) & 0; /* 0x17179116: and dword ptr [ebp - 0x30], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x48)) = _v; } /* 0x1717911A: fstp dword ptr [ebp - 0x48] */
    /* cmp MEM32(ebp + (-0x34)), 0 */ /* 0x1717911D: cmp dword ptr [ebp - 0x34], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x34))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    fp_push(0.0); /* 0x17179121: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x44)) = _v; } /* 0x17179123: fstp dword ptr [ebp - 0x44] */
    fp_push(0.0); /* 0x17179126: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x40)) = _v; } /* 0x17179128: fstp dword ptr [ebp - 0x40] */
    fp_push(0.0); /* 0x1717912B: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x3C)) = _v; } /* 0x1717912D: fstp dword ptr [ebp - 0x3c] */
    if (CMP_BE(_flag_a, _flag_b)) goto L_171791FC; /* 0x17179130: jbe 0x171791fc */
L_17179136:
    eax = edi; /* 0x17179136: mov eax, edi */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x17179138: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x17179138: shl eax, 2 */
    MEM32(ebp + (-0x24)) = eax; /* 0x1717913B: mov dword ptr [ebp - 0x24], eax */
    eax = MEM32(ebp + (-0x14)); /* 0x1717913E: mov eax, dword ptr [ebp - 0x14] */
    MEM32(ebp + (-0x10)) = eax; /* 0x17179141: mov dword ptr [ebp - 0x10], eax */
L_17179144:
    /* cmp MEM32(ebp + (-0x2C)), 0 */ /* 0x17179144: cmp dword ptr [ebp - 0x2c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x18) = esi; /* 0x17179148: mov dword ptr [ebp + 0x18], esi */
    if (CMP_BE(_flag_a, _flag_b)) goto L_171791D5; /* 0x1717914B: jbe 0x171791d5 */
L_17179151:
    ecx = MEM32(ebp + (-0x38)); /* 0x17179151: mov ecx, dword ptr [ebp - 0x38] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + (-0x28))); /* 0x17179154: imul ecx, dword ptr [ebp - 0x28] */
    edx = MEM32(ebp + (-0x28)); /* 0x17179158: mov edx, dword ptr [ebp - 0x28] */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ebp + 0xC)); /* 0x1717915B: imul edx, dword ptr [ebp + 0xc] */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x1717915F: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x1717915F: shl ecx, 2 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + 0x10); /* 0x17179162: add edx, dword ptr [ebp + 0x10] */
    _flag_k = FK_ADD;
    ebx = eax + edx * 4; /* 0x17179165: lea ebx, [eax + edx*4] */
    eax = MEM32(ebp + (-0x2C)); /* 0x17179168: mov eax, dword ptr [ebp - 0x2c] */
    MEM32(ebp + (-0x14)) = eax; /* 0x1717916B: mov dword ptr [ebp - 0x14], eax */
L_1717916E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1717916E: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x14), esi */ /* 0x17179170: cmp dword ptr [ebp + 0x14], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_171791A5; /* 0x17179173: jbe 0x171791a5 */
L_17179175:
    edi = ebx; /* 0x17179175: mov edi, ebx */
L_17179177:
    fp_push(*(float*)&MEM32(edi)); /* 0x17179177: fld dword ptr [edi] */
    edx = ebp + esi * 4 + (-0x48); /* 0x17179179: lea edx, [ebp + esi*4 - 0x48] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + esi * 4 + (-0x58)) = _v; } /* 0x1717917D: fst dword ptr [ebp + esi*4 - 0x58] */
    fp_push(_st[0]); /* 0x17179181: fld st(0) */
    _st[0] = fabs(_st[0]); /* 0x17179183: fabs  */
    fp_push(_st[0]); /* 0x17179185: fld st(0) */
    fp_push(*(float*)&MEM32(edx)); /* 0x17179187: fld dword ptr [edx] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x17179189: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1717918B: fnstsw ax */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1717918D: fstp st(0) */
    /* test HI8(eax), 5 */ /* 0x1717918F: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1717919A; /* 0x17179192: jp 0x1717919a */
L_17179194:
    _st[0] = fabs(_st[0]); /* 0x17179194: fabs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx) = _v; } /* 0x17179196: fstp dword ptr [edx] */
    goto L_1717919C; /* 0x17179198: jmp 0x1717919c */
L_1717919A:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1717919A: fstp st(0) */
L_1717919C:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1717919C: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x1717919D: add edi, 4 */
    _flag_k = FK_ADD;
    /* cmp esi, MEM32(ebp + 0x14) */ /* 0x171791A0: cmp esi, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17179177; /* 0x171791A3: jb 0x17179177 */
L_171791A5:
    eax = MEM32(ebp + (-0x58)); /* 0x171791A5: mov eax, dword ptr [ebp - 0x58] */
    edi = MEM32(ebp + 0x18); /* 0x171791A8: mov edi, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) + 0x10u; /* 0x171791AB: add dword ptr [ebp + 0x18], 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x68)) = eax; /* 0x171791AF: mov dword ptr [ebp - 0x68], eax */
    eax = MEM32(ebp + (-0x54)); /* 0x171791B2: mov eax, dword ptr [ebp - 0x54] */
    MEM32(ebp + (-0x64)) = eax; /* 0x171791B5: mov dword ptr [ebp - 0x64], eax */
    eax = MEM32(ebp + (-0x50)); /* 0x171791B8: mov eax, dword ptr [ebp - 0x50] */
    MEM32(ebp + (-0x60)) = eax; /* 0x171791BB: mov dword ptr [ebp - 0x60], eax */
    eax = MEM32(ebp + (-0x4C)); /* 0x171791BE: mov eax, dword ptr [ebp - 0x4c] */
    MEM32(ebp + (-0x5C)) = eax; /* 0x171791C1: mov dword ptr [ebp - 0x5c], eax */
    esi = ebp + (-0x68); /* 0x171791C4: lea esi, [ebp - 0x68] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171791C7: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171791C8: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171791C9: movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + ecx; /* 0x171791CA: add ebx, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x14)) = MEM32(ebp + (-0x14)) - 1; /* 0x171791CC: dec dword ptr [ebp - 0x14] */
    _flag_k = FK_DEC;
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171791CF: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1717916E; /* 0x171791D0: jne 0x1717916e */
L_171791D2:
    ebx = MEM32(ebp + (-0x18)); /* 0x171791D2: mov ebx, dword ptr [ebp - 0x18] */
L_171791D5:
    esi = MEM32(ebp + (-0x1C)); /* 0x171791D5: mov esi, dword ptr [ebp - 0x1c] */
    edi = MEM32(ebp + (-0x30)); /* 0x171791D8: mov edi, dword ptr [ebp - 0x30] */
    eax = MEM32(ebx); /* 0x171791DB: mov eax, dword ptr [ebx] */
    PUSH32(esp, esi); /* 0x171791DD: push esi */
    PUSH32(esp, 0); /* 0x171791DE: push 0 */
    PUSH32(esp, edi); /* 0x171791E0: push edi */
    ecx = ebx; /* 0x171791E1: mov ecx, ebx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x171791E3: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x10)); /* 0x171791E6: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x24)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x24)); /* 0x171791E9: add eax, dword ptr [ebp - 0x24] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171791EC: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(ebp + (-0x34)) */ /* 0x171791ED: cmp edi, dword ptr [ebp - 0x34] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x34)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x30)) = edi; /* 0x171791F0: mov dword ptr [ebp - 0x30], edi */
    MEM32(ebp + (-0x10)) = eax; /* 0x171791F3: mov dword ptr [ebp - 0x10], eax */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17179144; /* 0x171791F6: jb 0x17179144 */
L_171791FC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x171791FC: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_171791FE:
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x171791FE: push dword ptr [ebp - 0x20] */
    RECOMP_CALL(sub_1721B010); /* 0x17179201: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x17179206: pop ecx */
    ecx = MEM32(ebp + (-0x18)); /* 0x17179207: mov ecx, dword ptr [ebp - 0x18] */
    /* test ecx, ecx */ /* 0x1717920A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17179214; /* 0x1717920C: je 0x17179214 */
L_1717920E:
    eax = MEM32(ecx); /* 0x1717920E: mov eax, dword ptr [ecx] */
    PUSH32(esp, 1); /* 0x17179210: push 1 */
    RECOMP_ICALL(MEM32(eax)); /* 0x17179212: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_17179214:
    eax = MEM32(ebp + 0x8); /* 0x17179214: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x17179217: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1717922C; /* 0x17179219: je 0x1717922c */
L_1717921B:
    ecx = MEM32(eax); /* 0x1717921B: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1717921D: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1717921E: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) & 0; /* 0x17179221: and dword ptr [ebp + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1717922C; /* 0x17179225: jmp 0x1717922c */
L_17179227:
    esi = 0x8876086Cu; /* 0x17179227: mov esi, 0x8876086c */
L_1717922C:
    ebx = POP32_VAL(esp); /* 0x1717922C: pop ebx */
L_1717922D:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1717922D: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x7C); /* 0x17179231: lea ecx, [ebp - 0x7c] */
    RECOMP_CALL(sub_170D780B); /* 0x17179234: call 0x170d780b */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xC)); /* 0x17179239: mov ecx, dword ptr [ebp - 0xc] */
    edi = POP32_VAL(esp); /* 0x1717923C: pop edi */
    eax = esi; /* 0x1717923D: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1717923F: pop esi */
    MEM32(FS_BASE + (0)) = ecx; /* 0x17179240: mov dword ptr fs:[0], ecx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17179247: leave  */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x17179248: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_17179250(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17179250u);

L_17179250:
    edi = edi; /* 0x17179250: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17179252: push ebp */
    ebp = esp; /* 0x17179253: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2E4u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x2E4u; /* 0x17179255: sub esp, 0x2e4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1717925B: push ebx */
    ecx = ebp + (-0xDC); /* 0x1717925C: lea ecx, [ebp - 0xdc] */
    RECOMP_CALL(sub_1704AC26); /* 0x17179262: call 0x1704ac26 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x17179267: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax + 0x20); /* 0x1717926A: mov ecx, dword ptr [eax + 0x20] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1717926D: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(eax + 0x28), 1 */ /* 0x1717926F: cmp dword ptr [eax + 0x28], 1 */
    _flag_a = (uint32_t)(MEM32(eax + 0x28)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x8)) = ebx; /* 0x17179273: mov dword ptr [ebp - 8], ebx */
    MEM32(ebp + (-0xC)) = ebx; /* 0x17179276: mov dword ptr [ebp - 0xc], ebx */
    MEM32(ebp + (-0x4)) = ecx; /* 0x17179279: mov dword ptr [ebp - 4], ecx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1717928B; /* 0x1717927C: jne 0x1717928b */
L_1717927E:
    /* cmp MEM32(eax + 0xC), ebx */ /* 0x1717927E: cmp dword ptr [eax + 0xc], ebx */
    _flag_a = (uint32_t)(MEM32(eax + 0xC)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1717928B; /* 0x17179281: jne 0x1717928b */
L_17179283:
    ecx = MEM32(ebp + 0xC); /* 0x17179283: mov ecx, dword ptr [ebp + 0xc] */
    /* cmp MEM32(eax + 0x24), ecx */ /* 0x17179286: cmp dword ptr [eax + 0x24], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x24)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_17179295; /* 0x17179289: jae 0x17179295 */
L_1717928B:
    eax = 0x8876086Cu; /* 0x1717928B: mov eax, 0x8876086c */
    goto L_17179417; /* 0x17179290: jmp 0x17179417 */
L_17179295:
    eax = MEM32(eax + 0x18); /* 0x17179295: mov eax, dword ptr [eax + 0x18] */
    PUSH32(esp, esi); /* 0x17179298: push esi */
    esi = MEM32(ebp + 0x18); /* 0x17179299: mov esi, dword ptr [ebp + 0x18] */
    /* cmp esi, ebx */ /* 0x1717929C: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x10)) = eax; /* 0x1717929E: mov dword ptr [ebp - 0x10], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_171792AD; /* 0x171792A1: jne 0x171792ad */
L_171792A3:
    eax = 0x8876086Cu; /* 0x171792A3: mov eax, 0x8876086c */
    goto L_17179416; /* 0x171792A8: jmp 0x17179416 */
L_171792AD:
    eax = MEM32(esi); /* 0x171792AD: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171792AF: push esi */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x171792B0: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171792B3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_171792A3; /* 0x171792B5: je 0x171792a3 */
L_171792B7:
    eax = MEM32(esi); /* 0x171792B7: mov eax, dword ptr [esi] */
    ecx = ebp + (-0x2E4); /* 0x171792B9: lea ecx, [ebp - 0x2e4] */
    PUSH32(esp, ecx); /* 0x171792BF: push ecx */
    PUSH32(esp, esi); /* 0x171792C0: push esi */
    RECOMP_ICALL(MEM32(eax + 0x1C)); /* 0x171792C1: call dword ptr [eax + 0x1c] */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x171792C4: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_17179416; /* 0x171792C6: jl 0x17179416 */
L_171792CC:
    eax = ebp + (-0x2E4); /* 0x171792CC: lea eax, [ebp - 0x2e4] */
    PUSH32(esp, eax); /* 0x171792D2: push eax */
    ecx = ebp + (-0xDC); /* 0x171792D3: lea ecx, [ebp - 0xdc] */
    RECOMP_CALL(sub_1703CC5E); /* 0x171792D9: call 0x1703cc5e */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x171792DE: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_17179416; /* 0x171792E0: jl 0x17179416 */
L_171792E6:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x171792E6: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x14); /* 0x171792EA: mov eax, dword ptr [ebp + 0x14] */
    PUSH32(esp, edi); /* 0x171792ED: push edi */
    PUSH32(esp, 4); /* 0x171792EE: push 4 */
    MEM32(ebp + 0x18) = eax; /* 0x171792F0: mov dword ptr [ebp + 0x18], eax */
    edi = POP32_VAL(esp); /* 0x171792F3: pop edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17179322; /* 0x171792F4: je 0x17179322 */
L_171792F6:
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x171792F6: push dword ptr [ebp + 0x18] */
    ecx = ebp + (-0xDC); /* 0x171792F9: lea ecx, [ebp - 0xdc] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x171792FF: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1704E9C0); /* 0x17179302: call 0x1704e9c0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17179307: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1717933C; /* 0x17179309: je 0x1717933c */
L_1717930B:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + edi; /* 0x1717930B: add ebx, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) + 1; /* 0x1717930D: inc dword ptr [ebp + 0x18] */
    _flag_k = FK_INC;
    eax = edi + ebx; /* 0x17179310: lea eax, [edi + ebx] */
    /* cmp eax, MEM32(ebp + 0xC) */ /* 0x17179313: cmp eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1717931D; /* 0x17179316: jbe 0x1717931d */
L_17179318:
    edi = MEM32(ebp + 0xC); /* 0x17179318: mov edi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ebx; /* 0x1717931B: sub edi, ebx */
    _flag_k = FK_CMP;
L_1717931D:
    /* cmp ebx, MEM32(ebp + 0xC) */ /* 0x1717931D: cmp ebx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_171792F6; /* 0x17179320: jne 0x171792f6 */
L_17179322:
    eax = MEM32(esi); /* 0x17179322: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x17179324: push esi */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x17179325: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x17179328: mov ebx, eax */
    /* cmp ebx, MEM32(ebp + (-0x4)) */ /* 0x1717932A: cmp ebx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x14)) = ebx; /* 0x1717932D: mov dword ptr [ebp - 0x14], ebx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17179346; /* 0x17179330: je 0x17179346 */
L_17179332:
    edi = 0x8876086Cu; /* 0x17179332: mov edi, 0x8876086c */
    goto L_17179406; /* 0x17179337: jmp 0x17179406 */
L_1717933C:
    eax = 0x8876086Cu; /* 0x1717933C: mov eax, 0x8876086c */
    goto L_17179415; /* 0x17179341: jmp 0x17179415 */
L_17179346:
    eax = MEM32(esi); /* 0x17179346: mov eax, dword ptr [esi] */
    ecx = ebp + (-0x8); /* 0x17179348: lea ecx, [ebp - 8] */
    PUSH32(esp, ecx); /* 0x1717934B: push ecx */
    PUSH32(esp, esi); /* 0x1717934C: push esi */
    RECOMP_ICALL(MEM32(eax + 0x34)); /* 0x1717934D: call dword ptr [eax + 0x34] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x17179350: mov edi, eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x17179352: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edi, ecx */ /* 0x17179354: cmp edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_17179406; /* 0x17179356: jl 0x17179406 */
L_1717935C:
    eax = MEM32(ebp + (-0x8)); /* 0x1717935C: mov eax, dword ptr [ebp - 8] */
    edx = MEM32(eax); /* 0x1717935F: mov edx, dword ptr [eax] */
    PUSH32(esp, ecx); /* 0x17179361: push ecx */
    edi = ebp + (-0xC); /* 0x17179362: lea edi, [ebp - 0xc] */
    PUSH32(esp, edi); /* 0x17179365: push edi */
    PUSH32(esp, ecx); /* 0x17179366: push ecx */
    PUSH32(esp, ecx); /* 0x17179367: push ecx */
    PUSH32(esp, eax); /* 0x17179368: push eax */
    RECOMP_ICALL(MEM32(edx + 0x2C)); /* 0x17179369: call dword ptr [edx + 0x2c] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1717936C: mov edi, eax */
    /* test edi, edi */ /* 0x1717936E: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17179406; /* 0x17179370: jl 0x17179406 */
L_17179376:
    eax = MEM32(esi); /* 0x17179376: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x17179378: push esi */
    RECOMP_ICALL(MEM32(eax + 0x20)); /* 0x17179379: call dword ptr [eax + 0x20] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1717937C: push eax */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x1717937D: push dword ptr [ebp - 0xc] */
    ecx = ebp + (-0xDC); /* 0x17179380: lea ecx, [ebp - 0xdc] */
    PUSH32(esp, 0); /* 0x17179386: push 0 */
    RECOMP_CALL(sub_170B7D6A); /* 0x17179388: call 0x170b7d6a */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1717938D: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) & 0; /* 0x17179390: and dword ptr [ebp + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ebx, ebx */ /* 0x17179394: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x24); /* 0x17179396: mov eax, dword ptr [eax + 0x24] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171793FB; /* 0x17179399: jbe 0x171793fb */
L_1717939B:
    edi = MEM32(ebp + (-0x10)); /* 0x1717939B: mov edi, dword ptr [ebp - 0x10] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1717939E: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1717939E: shl eax, 2 */
    MEM32(ebp + (-0x18)) = eax; /* 0x171793A1: mov dword ptr [ebp - 0x18], eax */
    MEM32(ebp + (-0x4)) = edi; /* 0x171793A4: mov dword ptr [ebp - 4], edi */
L_171793A7:
    eax = MEM32(ebp + 0x14); /* 0x171793A7: mov eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x171793AA: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0xC), ebx */ /* 0x171793AC: cmp dword ptr [ebp + 0xc], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, 4); /* 0x171793AF: push 4 */
    MEM32(ebp + 0x18) = eax; /* 0x171793B1: mov dword ptr [ebp + 0x18], eax */
    esi = POP32_VAL(esp); /* 0x171793B4: pop esi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171793E7; /* 0x171793B5: je 0x171793e7 */
L_171793B7:
    PUSH32(esp, esi); /* 0x171793B7: push esi */
    PUSH32(esp, edi); /* 0x171793B8: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171793B9: push dword ptr [ebp + 8] */
    ecx = ebp + (-0xDC); /* 0x171793BC: lea ecx, [ebp - 0xdc] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x171793C2: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x171793C5: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_171750C1); /* 0x171793C8: call 0x171750c1 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + esi; /* 0x171793CD: add ebx, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) + 1; /* 0x171793CF: inc dword ptr [ebp + 0x18] */
    _flag_k = FK_INC;
    eax = esi + ebx; /* 0x171793D2: lea eax, [esi + ebx] */
    /* cmp eax, MEM32(ebp + 0xC) */ /* 0x171793D5: cmp eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = edi + esi * 4; /* 0x171793D8: lea edi, [edi + esi*4] */
    if (CMP_BE(_flag_a, _flag_b)) goto L_171793E2; /* 0x171793DB: jbe 0x171793e2 */
L_171793DD:
    esi = MEM32(ebp + 0xC); /* 0x171793DD: mov esi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ebx; /* 0x171793E0: sub esi, ebx */
    _flag_k = FK_CMP;
L_171793E2:
    /* cmp ebx, MEM32(ebp + 0xC) */ /* 0x171793E2: cmp ebx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_171793B7; /* 0x171793E5: jne 0x171793b7 */
L_171793E7:
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + 1; /* 0x171793E7: inc dword ptr [ebp + 8] */
    _flag_k = FK_INC;
    edi = MEM32(ebp + (-0x4)); /* 0x171793EA: mov edi, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x18)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ebp + (-0x18)); /* 0x171793ED: add edi, dword ptr [ebp - 0x18] */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x8); /* 0x171793F0: mov eax, dword ptr [ebp + 8] */
    /* cmp eax, MEM32(ebp + (-0x14)) */ /* 0x171793F3: cmp eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x14)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = edi; /* 0x171793F6: mov dword ptr [ebp - 4], edi */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171793A7; /* 0x171793F9: jb 0x171793a7 */
L_171793FB:
    eax = MEM32(ebp + (-0x8)); /* 0x171793FB: mov eax, dword ptr [ebp - 8] */
    ecx = MEM32(eax); /* 0x171793FE: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x17179400: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x30)); /* 0x17179401: call dword ptr [ecx + 0x30] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x17179404: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_17179406:
    eax = MEM32(ebp + (-0x8)); /* 0x17179406: mov eax, dword ptr [ebp - 8] */
    /* test eax, eax */ /* 0x17179409: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17179413; /* 0x1717940B: je 0x17179413 */
L_1717940D:
    ecx = MEM32(eax); /* 0x1717940D: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1717940F: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x17179410: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
L_17179413:
    eax = edi; /* 0x17179413: mov eax, edi */
L_17179415:
    edi = POP32_VAL(esp); /* 0x17179415: pop edi */
L_17179416:
    esi = POP32_VAL(esp); /* 0x17179416: pop esi */
L_17179417:
    ebx = POP32_VAL(esp); /* 0x17179417: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17179418: leave  */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x17179419: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_17179421(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17179421u);

L_17179421:
    edi = edi; /* 0x17179421: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17179423: push ebp */
    ebp = esp; /* 0x17179424: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x17179426: push ebx */
    PUSH32(esp, esi); /* 0x17179427: push esi */
    esi = MEM32(ebp + 0x8); /* 0x17179428: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1717942B: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp esi, edx */ /* 0x1717942D: cmp esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x1717942F: push edi */
    edi = ecx; /* 0x17179430: mov edi, ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1717953B; /* 0x17179432: je 0x1717953b */
L_17179438:
    /* cmp MEM32(ebp + 0xC), edx */ /* 0x17179438: cmp dword ptr [ebp + 0xc], edx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1717953B; /* 0x1717943B: je 0x1717953b */
L_17179441:
    /* cmp MEM32(ebp + 0x10), edx */ /* 0x17179441: cmp dword ptr [ebp + 0x10], edx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1717953B; /* 0x17179444: je 0x1717953b */
L_1717944A:
    eax = 0x80000000u; /* 0x1717944A: mov eax, 0x80000000 */
    /* cmp esi, eax */ /* 0x1717944F: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, 0x1Eu); /* 0x17179451: push 0x1e */
    ecx = POP32_VAL(esp); /* 0x17179453: pop ecx */
    if (CMP_BE(_flag_a, _flag_b)) goto L_1717945F; /* 0x17179454: jbe 0x1717945f */
L_17179456:
    MEM32(ebp + 0x8) = 0x20u; /* 0x17179456: mov dword ptr [ebp + 8], 0x20 */
    goto L_1717947F; /* 0x1717945D: jmp 0x1717947f */
L_1717945F:
    /* cmp esi, 1 */ /* 0x1717945F: cmp esi, 1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_17179469; /* 0x17179462: ja 0x17179469 */
L_17179464:
    MEM32(ebp + 0x8) = edx; /* 0x17179464: mov dword ptr [ebp + 8], edx */
    goto L_1717947F; /* 0x17179467: jmp 0x1717947f */
L_17179469:
    /* cmp esi, eax */ /* 0x17179469: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1717947B; /* 0x1717946B: jae 0x1717947b */
L_1717946D:
    /* test ecx, ecx */ /* 0x1717946D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1717947B; /* 0x1717946F: je 0x1717947b */
L_17179471:
    PUSH32(esp, 2); /* 0x17179471: push 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x17179473: dec ecx */
    _flag_k = FK_DEC;
    edx = POP32_VAL(esp); /* 0x17179474: pop edx */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x17179475: shl edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edx << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << ((LO8(ecx)) & 31); /* 0x17179475: shl edx, cl */
    /* cmp edx, esi */ /* 0x17179477: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_1717946D; /* 0x17179479: ja 0x1717946d */
L_1717947B:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1717947B: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + 0x8) = ecx; /* 0x1717947C: mov dword ptr [ebp + 8], ecx */
L_1717947F:
    /* cmp MEM32(ebp + 0xC), eax */ /* 0x1717947F: cmp dword ptr [ebp + 0xc], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, 0x1Eu); /* 0x17179482: push 0x1e */
    ecx = POP32_VAL(esp); /* 0x17179484: pop ecx */
    if (CMP_BE(_flag_a, _flag_b)) goto L_1717948C; /* 0x17179485: jbe 0x1717948c */
L_17179487:
    PUSH32(esp, 0x20u); /* 0x17179487: push 0x20 */
    edx = POP32_VAL(esp); /* 0x17179489: pop edx */
    goto L_171794AD; /* 0x1717948A: jmp 0x171794ad */
L_1717948C:
    /* cmp MEM32(ebp + 0xC), 1 */ /* 0x1717948C: cmp dword ptr [ebp + 0xc], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_17179496; /* 0x17179490: ja 0x17179496 */
L_17179492:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x17179492: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_171794AD; /* 0x17179494: jmp 0x171794ad */
L_17179496:
    /* cmp MEM32(ebp + 0xC), eax */ /* 0x17179496: cmp dword ptr [ebp + 0xc], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_171794AA; /* 0x17179499: jae 0x171794aa */
L_1717949B:
    /* test ecx, ecx */ /* 0x1717949B: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171794AA; /* 0x1717949D: je 0x171794aa */
L_1717949F:
    PUSH32(esp, 2); /* 0x1717949F: push 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x171794A1: dec ecx */
    _flag_k = FK_DEC;
    edx = POP32_VAL(esp); /* 0x171794A2: pop edx */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x171794A3: shl edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edx << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << ((LO8(ecx)) & 31); /* 0x171794A3: shl edx, cl */
    /* cmp edx, MEM32(ebp + 0xC) */ /* 0x171794A5: cmp edx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_1717949B; /* 0x171794A8: ja 0x1717949b */
L_171794AA:
    edx = ecx + 0x1; /* 0x171794AA: lea edx, [ecx + 1] */
L_171794AD:
    ebx = MEM32(ebp + 0x10); /* 0x171794AD: mov ebx, dword ptr [ebp + 0x10] */
    /* cmp ebx, eax */ /* 0x171794B0: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, 0x1Eu); /* 0x171794B2: push 0x1e */
    ecx = POP32_VAL(esp); /* 0x171794B4: pop ecx */
    if (CMP_BE(_flag_a, _flag_b)) goto L_171794BC; /* 0x171794B5: jbe 0x171794bc */
L_171794B7:
    PUSH32(esp, 0x20u); /* 0x171794B7: push 0x20 */
    eax = POP32_VAL(esp); /* 0x171794B9: pop eax */
    goto L_171794DA; /* 0x171794BA: jmp 0x171794da */
L_171794BC:
    /* cmp ebx, 1 */ /* 0x171794BC: cmp ebx, 1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_171794C5; /* 0x171794BF: ja 0x171794c5 */
L_171794C1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171794C1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_171794DA; /* 0x171794C3: jmp 0x171794da */
L_171794C5:
    /* cmp ebx, eax */ /* 0x171794C5: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_171794D7; /* 0x171794C7: jae 0x171794d7 */
L_171794C9:
    /* test ecx, ecx */ /* 0x171794C9: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171794D7; /* 0x171794CB: je 0x171794d7 */
L_171794CD:
    PUSH32(esp, 2); /* 0x171794CD: push 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x171794CF: dec ecx */
    _flag_k = FK_DEC;
    eax = POP32_VAL(esp); /* 0x171794D0: pop eax */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x171794D1: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x171794D1: shl eax, cl */
    /* cmp eax, ebx */ /* 0x171794D3: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_171794C9; /* 0x171794D5: ja 0x171794c9 */
L_171794D7:
    eax = ecx + 0x1; /* 0x171794D7: lea eax, [ecx + 1] */
L_171794DA:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x171794DA: add eax, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + 0x8); /* 0x171794DC: add eax, dword ptr [ebp + 8] */
    _flag_k = FK_ADD;
    /* cmp eax, 0x1Fu */ /* 0x171794DF: cmp eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1717953B; /* 0x171794E2: ja 0x1717953b */
L_171794E4:
    PUSH32(esp, MEM32(edi + 0x18)); /* 0x171794E4: push dword ptr [edi + 0x18] */
    RECOMP_CALL(sub_1721B010); /* 0x171794E7: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + 0xC); /* 0x171794EC: mov ebx, dword ptr [ebp + 0xc] */
    eax = esi; /* 0x171794EF: mov eax, esi */
    eax = (uint32_t)((int32_t)eax * (int32_t)ebx); /* 0x171794F1: imul eax, ebx */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x10)); /* 0x171794F4: imul eax, dword ptr [ebp + 0x10] */
    eax = eax * 4 + 0x4; /* 0x171794F8: lea eax, [eax*4 + 4] */
    PUSH32(esp, eax); /* 0x171794FF: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x17179500: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17179505: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x17179507: pop ecx */
    ecx = POP32_VAL(esp); /* 0x17179508: pop ecx */
    MEM32(edi + 0x18) = eax; /* 0x17179509: mov dword ptr [edi + 0x18], eax */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17179515; /* 0x1717950C: jne 0x17179515 */
L_1717950E:
    eax = 0x8007000Eu; /* 0x1717950E: mov eax, 0x8007000e */
    goto L_17179540; /* 0x17179513: jmp 0x17179540 */
L_17179515:
    ecx = MEM32(ebp + 0x10); /* 0x17179515: mov ecx, dword ptr [ebp + 0x10] */
    fp_push(*(float*)&MEM32(0x17021F58)); /* 0x17179518: fld dword ptr [0x17021f58] */
    MEM32(edi + 0x1C) = esi; /* 0x1717951E: mov dword ptr [edi + 0x1c], esi */
    MEM32(edi + 0x20) = esi; /* 0x17179521: mov dword ptr [edi + 0x20], esi */
    esi = (uint32_t)((int32_t)esi * (int32_t)ebx); /* 0x17179524: imul esi, ebx */
    esi = (uint32_t)((int32_t)esi * (int32_t)ecx); /* 0x17179527: imul esi, ecx */
    MEM32(edi + 0x24) = ebx; /* 0x1717952A: mov dword ptr [edi + 0x24], ebx */
    MEM32(edi + 0x28) = ecx; /* 0x1717952D: mov dword ptr [edi + 0x28], ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + esi * 4) = _v; } /* 0x17179530: fstp dword ptr [eax + esi*4] */
    _flag_a = (uint32_t)(MEM32(edi + 0xC)); _flag_b = (uint32_t)(0);
    MEM32(edi + 0xC) = MEM32(edi + 0xC) & 0; /* 0x17179533: and dword ptr [edi + 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17179537: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_17179540; /* 0x17179539: jmp 0x17179540 */
L_1717953B:
    eax = 0x8876086Cu; /* 0x1717953B: mov eax, 0x8876086c */
L_17179540:
    edi = POP32_VAL(esp); /* 0x17179540: pop edi */
    esi = POP32_VAL(esp); /* 0x17179541: pop esi */
    ebx = POP32_VAL(esp); /* 0x17179542: pop ebx */
    ebp = POP32_VAL(esp); /* 0x17179543: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x17179544: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1717954C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1717954Cu);

L_1717954C:
    edi = edi; /* 0x1717954C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1717954E: push ebp */
    ebp = esp; /* 0x1717954F: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x17179551: push ecx */
    PUSH32(esp, ebx); /* 0x17179552: push ebx */
    PUSH32(esp, esi); /* 0x17179553: push esi */
    PUSH32(esp, edi); /* 0x17179554: push edi */
    edi = MEM32(ebp + 0x8); /* 0x17179555: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x17179558: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edi, edx */ /* 0x1717955A: cmp edi, edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = ecx; /* 0x1717955C: mov esi, ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171796A4; /* 0x1717955E: je 0x171796a4 */
L_17179564:
    ebx = MEM32(ebp + 0xC); /* 0x17179564: mov ebx, dword ptr [ebp + 0xc] */
    /* cmp ebx, edx */ /* 0x17179567: cmp ebx, edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171796A4; /* 0x17179569: je 0x171796a4 */
L_1717956F:
    /* cmp MEM32(ebp + 0x10), edx */ /* 0x1717956F: cmp dword ptr [ebp + 0x10], edx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171796A4; /* 0x17179572: je 0x171796a4 */
L_17179578:
    /* cmp MEM32(ebp + 0x14), edx */ /* 0x17179578: cmp dword ptr [ebp + 0x14], edx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171796A4; /* 0x1717957B: je 0x171796a4 */
L_17179581:
    eax = 0x80000000u; /* 0x17179581: mov eax, 0x80000000 */
    /* cmp edi, eax */ /* 0x17179586: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, 0x1Eu); /* 0x17179588: push 0x1e */
    ecx = POP32_VAL(esp); /* 0x1717958A: pop ecx */
    if (CMP_BE(_flag_a, _flag_b)) goto L_17179596; /* 0x1717958B: jbe 0x17179596 */
L_1717958D:
    MEM32(ebp + (-0x4)) = 0x20u; /* 0x1717958D: mov dword ptr [ebp - 4], 0x20 */
    goto L_171795B6; /* 0x17179594: jmp 0x171795b6 */
L_17179596:
    /* cmp edi, 1 */ /* 0x17179596: cmp edi, 1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_171795A0; /* 0x17179599: ja 0x171795a0 */
L_1717959B:
    MEM32(ebp + (-0x4)) = edx; /* 0x1717959B: mov dword ptr [ebp - 4], edx */
    goto L_171795B6; /* 0x1717959E: jmp 0x171795b6 */
L_171795A0:
    /* cmp edi, eax */ /* 0x171795A0: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_171795B2; /* 0x171795A2: jae 0x171795b2 */
L_171795A4:
    /* test ecx, ecx */ /* 0x171795A4: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171795B2; /* 0x171795A6: je 0x171795b2 */
L_171795A8:
    PUSH32(esp, 2); /* 0x171795A8: push 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x171795AA: dec ecx */
    _flag_k = FK_DEC;
    edx = POP32_VAL(esp); /* 0x171795AB: pop edx */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x171795AC: shl edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edx << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << ((LO8(ecx)) & 31); /* 0x171795AC: shl edx, cl */
    /* cmp edx, edi */ /* 0x171795AE: cmp edx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_171795A4; /* 0x171795B0: ja 0x171795a4 */
L_171795B2:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171795B2: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x4)) = ecx; /* 0x171795B3: mov dword ptr [ebp - 4], ecx */
L_171795B6:
    /* cmp ebx, eax */ /* 0x171795B6: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, 0x1Eu); /* 0x171795B8: push 0x1e */
    ecx = POP32_VAL(esp); /* 0x171795BA: pop ecx */
    if (CMP_BE(_flag_a, _flag_b)) goto L_171795C2; /* 0x171795BB: jbe 0x171795c2 */
L_171795BD:
    PUSH32(esp, 0x20u); /* 0x171795BD: push 0x20 */
    edi = POP32_VAL(esp); /* 0x171795BF: pop edi */
    goto L_171795E0; /* 0x171795C0: jmp 0x171795e0 */
L_171795C2:
    /* cmp ebx, 1 */ /* 0x171795C2: cmp ebx, 1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_171795CB; /* 0x171795C5: ja 0x171795cb */
L_171795C7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171795C7: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_171795E0; /* 0x171795C9: jmp 0x171795e0 */
L_171795CB:
    /* cmp ebx, eax */ /* 0x171795CB: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_171795DD; /* 0x171795CD: jae 0x171795dd */
L_171795CF:
    /* test ecx, ecx */ /* 0x171795CF: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171795DD; /* 0x171795D1: je 0x171795dd */
L_171795D3:
    PUSH32(esp, 2); /* 0x171795D3: push 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x171795D5: dec ecx */
    _flag_k = FK_DEC;
    edx = POP32_VAL(esp); /* 0x171795D6: pop edx */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x171795D7: shl edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edx << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << ((LO8(ecx)) & 31); /* 0x171795D7: shl edx, cl */
    /* cmp edx, ebx */ /* 0x171795D9: cmp edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_171795CF; /* 0x171795DB: ja 0x171795cf */
L_171795DD:
    edi = ecx + 0x1; /* 0x171795DD: lea edi, [ecx + 1] */
L_171795E0:
    edx = MEM32(ebp + 0x10); /* 0x171795E0: mov edx, dword ptr [ebp + 0x10] */
    /* cmp edx, eax */ /* 0x171795E3: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, 0x1Eu); /* 0x171795E5: push 0x1e */
    ecx = POP32_VAL(esp); /* 0x171795E7: pop ecx */
    if (CMP_BE(_flag_a, _flag_b)) goto L_171795EF; /* 0x171795E8: jbe 0x171795ef */
L_171795EA:
    PUSH32(esp, 0x20u); /* 0x171795EA: push 0x20 */
    edx = POP32_VAL(esp); /* 0x171795EC: pop edx */
    goto L_1717960D; /* 0x171795ED: jmp 0x1717960d */
L_171795EF:
    /* cmp edx, 1 */ /* 0x171795EF: cmp edx, 1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_171795F8; /* 0x171795F2: ja 0x171795f8 */
L_171795F4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171795F4: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1717960D; /* 0x171795F6: jmp 0x1717960d */
L_171795F8:
    /* cmp edx, eax */ /* 0x171795F8: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1717960A; /* 0x171795FA: jae 0x1717960a */
L_171795FC:
    /* test ecx, ecx */ /* 0x171795FC: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1717960A; /* 0x171795FE: je 0x1717960a */
L_17179600:
    PUSH32(esp, 2); /* 0x17179600: push 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x17179602: dec ecx */
    _flag_k = FK_DEC;
    ebx = POP32_VAL(esp); /* 0x17179603: pop ebx */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((ebx) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x17179604: shl ebx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((ebx << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << ((LO8(ecx)) & 31); /* 0x17179604: shl ebx, cl */
    /* cmp ebx, edx */ /* 0x17179606: cmp ebx, edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_171795FC; /* 0x17179608: ja 0x171795fc */
L_1717960A:
    edx = ecx + 0x1; /* 0x1717960A: lea edx, [ecx + 1] */
L_1717960D:
    ebx = MEM32(ebp + 0x14); /* 0x1717960D: mov ebx, dword ptr [ebp + 0x14] */
    /* cmp ebx, eax */ /* 0x17179610: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, 0x1Eu); /* 0x17179612: push 0x1e */
    ecx = POP32_VAL(esp); /* 0x17179614: pop ecx */
    if (CMP_BE(_flag_a, _flag_b)) goto L_1717961C; /* 0x17179615: jbe 0x1717961c */
L_17179617:
    PUSH32(esp, 0x20u); /* 0x17179617: push 0x20 */
    eax = POP32_VAL(esp); /* 0x17179619: pop eax */
    goto L_1717963A; /* 0x1717961A: jmp 0x1717963a */
L_1717961C:
    /* cmp ebx, 1 */ /* 0x1717961C: cmp ebx, 1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_17179625; /* 0x1717961F: ja 0x17179625 */
L_17179621:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17179621: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1717963A; /* 0x17179623: jmp 0x1717963a */
L_17179625:
    /* cmp ebx, eax */ /* 0x17179625: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_17179637; /* 0x17179627: jae 0x17179637 */
L_17179629:
    /* test ecx, ecx */ /* 0x17179629: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17179637; /* 0x1717962B: je 0x17179637 */
L_1717962D:
    PUSH32(esp, 2); /* 0x1717962D: push 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1717962F: dec ecx */
    _flag_k = FK_DEC;
    eax = POP32_VAL(esp); /* 0x17179630: pop eax */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x17179631: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x17179631: shl eax, cl */
    /* cmp eax, ebx */ /* 0x17179633: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_17179629; /* 0x17179635: ja 0x17179629 */
L_17179637:
    eax = ecx + 0x1; /* 0x17179637: lea eax, [ecx + 1] */
L_1717963A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1717963A: add eax, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x1717963C: add eax, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x4)); /* 0x1717963E: add eax, dword ptr [ebp - 4] */
    _flag_k = FK_ADD;
    /* cmp eax, 0x1Fu */ /* 0x17179641: cmp eax, 0x1f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_171796A4; /* 0x17179644: ja 0x171796a4 */
L_17179646:
    PUSH32(esp, MEM32(esi + 0x18)); /* 0x17179646: push dword ptr [esi + 0x18] */
    RECOMP_CALL(sub_1721B010); /* 0x17179649: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x8); /* 0x1717964E: mov edi, dword ptr [ebp + 8] */
    edi = (uint32_t)((int32_t)edi * (int32_t)MEM32(ebp + 0xC)); /* 0x17179651: imul edi, dword ptr [ebp + 0xc] */
    ebx = MEM32(ebp + 0x10); /* 0x17179655: mov ebx, dword ptr [ebp + 0x10] */
    eax = edi; /* 0x17179658: mov eax, edi */
    eax = (uint32_t)((int32_t)eax * (int32_t)ebx); /* 0x1717965A: imul eax, ebx */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x14)); /* 0x1717965D: imul eax, dword ptr [ebp + 0x14] */
    eax = eax * 4 + 0x4; /* 0x17179661: lea eax, [eax*4 + 4] */
    PUSH32(esp, eax); /* 0x17179668: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x17179669: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1717966E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x17179670: pop ecx */
    ecx = POP32_VAL(esp); /* 0x17179671: pop ecx */
    MEM32(esi + 0x18) = eax; /* 0x17179672: mov dword ptr [esi + 0x18], eax */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1717967E; /* 0x17179675: jne 0x1717967e */
L_17179677:
    eax = 0x8007000Eu; /* 0x17179677: mov eax, 0x8007000e */
    goto L_171796A9; /* 0x1717967C: jmp 0x171796a9 */
L_1717967E:
    eax = MEM32(ebp + 0x14); /* 0x1717967E: mov eax, dword ptr [ebp + 0x14] */
    MEM32(esi + 0x28) = eax; /* 0x17179681: mov dword ptr [esi + 0x28], eax */
    eax = MEM32(ebp + 0x8); /* 0x17179684: mov eax, dword ptr [ebp + 8] */
    MEM32(esi + 0x10) = eax; /* 0x17179687: mov dword ptr [esi + 0x10], eax */
    eax = MEM32(ebp + 0xC); /* 0x1717968A: mov eax, dword ptr [ebp + 0xc] */
    MEM32(esi + 0x14) = eax; /* 0x1717968D: mov dword ptr [esi + 0x14], eax */
    MEM32(esi + 0x1C) = edi; /* 0x17179690: mov dword ptr [esi + 0x1c], edi */
    MEM32(esi + 0x20) = edi; /* 0x17179693: mov dword ptr [esi + 0x20], edi */
    MEM32(esi + 0x24) = ebx; /* 0x17179696: mov dword ptr [esi + 0x24], ebx */
    MEM32(esi + 0xC) = 1; /* 0x17179699: mov dword ptr [esi + 0xc], 1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171796A0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_171796A9; /* 0x171796A2: jmp 0x171796a9 */
L_171796A4:
    eax = 0x8876086Cu; /* 0x171796A4: mov eax, 0x8876086c */
L_171796A9:
    edi = POP32_VAL(esp); /* 0x171796A9: pop edi */
    esi = POP32_VAL(esp); /* 0x171796AA: pop esi */
    ebx = POP32_VAL(esp); /* 0x171796AB: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171796AC: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x171796AD: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_171796B5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171796B5u);

L_171796B5:
    eax = ecx; /* 0x171796B5: mov eax, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171796B7: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = 0x17021F08u; /* 0x171796B9: mov dword ptr [eax], 0x17021f08 */
    MEM32(eax + 0x4) = 1; /* 0x171796BF: mov dword ptr [eax + 4], 1 */
    MEM32(eax + 0x8) = ecx; /* 0x171796C6: mov dword ptr [eax + 8], ecx */
    MEM32(eax + 0xC) = ecx; /* 0x171796C9: mov dword ptr [eax + 0xc], ecx */
    MEM32(eax + 0x18) = ecx; /* 0x171796CC: mov dword ptr [eax + 0x18], ecx */
    MEM32(eax + 0x20) = ecx; /* 0x171796CF: mov dword ptr [eax + 0x20], ecx */
    MEM32(eax + 0x24) = ecx; /* 0x171796D2: mov dword ptr [eax + 0x24], ecx */
    MEM32(eax + 0x28) = ecx; /* 0x171796D5: mov dword ptr [eax + 0x28], ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171796D8: ret  */
    RECOMP_REGS_OUT();
}

void sub_171796DE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171796DEu);

L_171796DE:
    edi = edi; /* 0x171796DE: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171796E0: push ebp */
    ebp = esp; /* 0x171796E1: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x171796E3: push ebx */
    ebx = MEM32(ebp + 0x14); /* 0x171796E4: mov ebx, dword ptr [ebp + 0x14] */
    /* test ebx, ebx */ /* 0x171796E7: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171796F2; /* 0x171796E9: jne 0x171796f2 */
L_171796EB:
    eax = 0x8876086Cu; /* 0x171796EB: mov eax, 0x8876086c */
    goto L_17179746; /* 0x171796F0: jmp 0x17179746 */
L_171796F2:
    PUSH32(esp, esi); /* 0x171796F2: push esi */
    PUSH32(esp, 0x2Cu); /* 0x171796F3: push 0x2c */
    RECOMP_CALL(sub_1721B01C); /* 0x171796F5: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171796FA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x171796FC: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1717970A; /* 0x171796FD: je 0x1717970a */
L_171796FF:
    ecx = eax; /* 0x171796FF: mov ecx, eax */
    RECOMP_CALL(sub_171796B5); /* 0x17179701: call 0x171796b5 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x17179706: mov esi, eax */
    goto L_1717970C; /* 0x17179708: jmp 0x1717970c */
L_1717970A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1717970A: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1717970C:
    /* test esi, esi */ /* 0x1717970C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17179717; /* 0x1717970E: jne 0x17179717 */
L_17179710:
    eax = 0x8007000Eu; /* 0x17179710: mov eax, 0x8007000e */
    goto L_17179745; /* 0x17179715: jmp 0x17179745 */
L_17179717:
    PUSH32(esp, edi); /* 0x17179717: push edi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x17179718: push dword ptr [ebp + 0x10] */
    ecx = esi; /* 0x1717971B: mov ecx, esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1717971D: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x17179720: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_17179421); /* 0x17179723: call 0x17179421 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x17179728: mov edi, eax */
    /* test edi, edi */ /* 0x1717972A: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi; /* 0x1717972C: mov ecx, esi */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1717973B; /* 0x1717972E: jge 0x1717973b */
L_17179730:
    eax = MEM32(esi); /* 0x17179730: mov eax, dword ptr [esi] */
    PUSH32(esp, 1); /* 0x17179732: push 1 */
    RECOMP_ICALL(MEM32(eax + 0x4C)); /* 0x17179734: call dword ptr [eax + 0x4c] */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x17179737: mov eax, edi */
    goto L_17179744; /* 0x17179739: jmp 0x17179744 */
L_1717973B:
    RECOMP_CALL(sub_17178DB0); /* 0x1717973B: call 0x17178db0 */
    RECOMP_FLAGS_IN();
    MEM32(ebx) = esi; /* 0x17179740: mov dword ptr [ebx], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17179742: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_17179744:
    edi = POP32_VAL(esp); /* 0x17179744: pop edi */
L_17179745:
    esi = POP32_VAL(esp); /* 0x17179745: pop esi */
L_17179746:
    ebx = POP32_VAL(esp); /* 0x17179746: pop ebx */
    ebp = POP32_VAL(esp); /* 0x17179747: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x17179748: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_17179750(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17179750u);

L_17179750:
    edi = edi; /* 0x17179750: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17179752: push ebp */
    ebp = esp; /* 0x17179753: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x17179755: push ebx */
    ebx = MEM32(ebp + 0x18); /* 0x17179756: mov ebx, dword ptr [ebp + 0x18] */
    /* test ebx, ebx */ /* 0x17179759: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17179764; /* 0x1717975B: jne 0x17179764 */
L_1717975D:
    eax = 0x8876086Cu; /* 0x1717975D: mov eax, 0x8876086c */
    goto L_171797BB; /* 0x17179762: jmp 0x171797bb */
L_17179764:
    PUSH32(esp, esi); /* 0x17179764: push esi */
    PUSH32(esp, 0x2Cu); /* 0x17179765: push 0x2c */
    RECOMP_CALL(sub_1721B01C); /* 0x17179767: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1717976C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1717976E: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1717977C; /* 0x1717976F: je 0x1717977c */
L_17179771:
    ecx = eax; /* 0x17179771: mov ecx, eax */
    RECOMP_CALL(sub_171796B5); /* 0x17179773: call 0x171796b5 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x17179778: mov esi, eax */
    goto L_1717977E; /* 0x1717977A: jmp 0x1717977e */
L_1717977C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1717977C: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1717977E:
    /* test esi, esi */ /* 0x1717977E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17179789; /* 0x17179780: jne 0x17179789 */
L_17179782:
    eax = 0x8007000Eu; /* 0x17179782: mov eax, 0x8007000e */
    goto L_171797BA; /* 0x17179787: jmp 0x171797ba */
L_17179789:
    PUSH32(esp, edi); /* 0x17179789: push edi */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1717978A: push dword ptr [ebp + 0x14] */
    ecx = esi; /* 0x1717978D: mov ecx, esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1717978F: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x17179792: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x17179795: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1717954C); /* 0x17179798: call 0x1717954c */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1717979D: mov edi, eax */
    /* test edi, edi */ /* 0x1717979F: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi; /* 0x171797A1: mov ecx, esi */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_171797B0; /* 0x171797A3: jge 0x171797b0 */
L_171797A5:
    eax = MEM32(esi); /* 0x171797A5: mov eax, dword ptr [esi] */
    PUSH32(esp, 1); /* 0x171797A7: push 1 */
    RECOMP_ICALL(MEM32(eax + 0x4C)); /* 0x171797A9: call dword ptr [eax + 0x4c] */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x171797AC: mov eax, edi */
    goto L_171797B9; /* 0x171797AE: jmp 0x171797b9 */
L_171797B0:
    RECOMP_CALL(sub_17178DB0); /* 0x171797B0: call 0x17178db0 */
    RECOMP_FLAGS_IN();
    MEM32(ebx) = esi; /* 0x171797B5: mov dword ptr [ebx], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171797B7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171797B9:
    edi = POP32_VAL(esp); /* 0x171797B9: pop edi */
L_171797BA:
    esi = POP32_VAL(esp); /* 0x171797BA: pop esi */
L_171797BB:
    ebx = POP32_VAL(esp); /* 0x171797BB: pop ebx */
    ebp = POP32_VAL(esp); /* 0x171797BC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x171797BD: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_171797C5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171797C5u);

L_171797C5:
    edi = edi; /* 0x171797C5: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171797C7: push ebp */
    ebp = esp; /* 0x171797C8: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x24u; /* 0x171797CA: sub esp, 0x24 */
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x171797CD: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171797CE: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x8), edi */ /* 0x171797D0: cmp dword ptr [ebp + 8], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0xC)) = edi; /* 0x171797D3: mov dword ptr [ebp - 0xc], edi */
    MEM32(ebp + (-0x4)) = edi; /* 0x171797D6: mov dword ptr [ebp - 4], edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17179951; /* 0x171797D9: je 0x17179951 */
L_171797DF:
    /* cmp MEM32(ebp + 0xC), edi */ /* 0x171797DF: cmp dword ptr [ebp + 0xc], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17179951; /* 0x171797E2: je 0x17179951 */
L_171797E8:
    PUSH32(esp, edi); /* 0x171797E8: push edi */
    PUSH32(esp, 0x08000080u); /* 0x171797E9: push 0x8000080 */
    PUSH32(esp, 3); /* 0x171797EE: push 3 */
    PUSH32(esp, edi); /* 0x171797F0: push edi */
    PUSH32(esp, edi); /* 0x171797F1: push edi */
    PUSH32(esp, 0x80000000u); /* 0x171797F2: push 0x80000000 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171797F7: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x170010F0)); /* 0x171797FA: call dword ptr [0x170010f0] */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0xFFFFFFFFu */ /* 0x17179800: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x8)) = eax; /* 0x17179803: mov dword ptr [ebp - 8], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_17179817; /* 0x17179806: jne 0x17179817 */
L_17179808:
    RECOMP_CALL(sub_1717882B); /* 0x17179808: call 0x1717882b */
    RECOMP_FLAGS_IN();
    eax = 0x80004005u; /* 0x1717980D: mov eax, 0x80004005 */
    goto L_17179956; /* 0x17179812: jmp 0x17179956 */
L_17179817:
    PUSH32(esp, ebx); /* 0x17179817: push ebx */
    PUSH32(esp, esi); /* 0x17179818: push esi */
    ebx = 0x00400000u; /* 0x17179819: mov ebx, 0x400000 */
L_1717981E:
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) & 0; /* 0x1717981E: and dword ptr [ebp + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x18u); /* 0x17179822: push 0x18 */
    esi = POP32_VAL(esp); /* 0x17179824: pop esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edi; /* 0x17179825: sub esi, edi */
    _flag_k = FK_CMP;
    /* cmp esi, ebx */ /* 0x17179827: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1717982D; /* 0x17179829: jbe 0x1717982d */
L_1717982B:
    esi = ebx; /* 0x1717982B: mov esi, ebx */
L_1717982D:
    PUSH32(esp, 0); /* 0x1717982D: push 0 */
    eax = ebp + 0x8; /* 0x1717982F: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x17179832: push eax */
    PUSH32(esp, esi); /* 0x17179833: push esi */
    eax = ebp + edi + (-0x24); /* 0x17179834: lea eax, [ebp + edi - 0x24] */
    PUSH32(esp, eax); /* 0x17179838: push eax */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x17179839: push dword ptr [ebp - 8] */
    RECOMP_ICALL(MEM32(0x170010F4)); /* 0x1717983C: call dword ptr [0x170010f4] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17179842: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171798A1; /* 0x17179844: je 0x171798a1 */
L_17179846:
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x17179846: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171798A6; /* 0x1717984A: je 0x171798a6 */
L_1717984C:
    /* cmp MEM32(ebp + 0x8), esi */ /* 0x1717984C: cmp dword ptr [ebp + 8], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171798A6; /* 0x1717984F: jne 0x171798a6 */
L_17179851:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + esi; /* 0x17179851: add edi, esi */
    _flag_k = FK_ADD;
    /* cmp edi, 0x18u */ /* 0x17179853: cmp edi, 0x18 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1717981E; /* 0x17179856: jne 0x1717981e */
L_17179858:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x17179858: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x24)), ebx */ /* 0x1717985A: cmp dword ptr [ebp - 0x24], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1717992E; /* 0x1717985D: je 0x1717992e */
L_17179863:
    /* cmp MEM32(ebp + (-0x20)), ebx */ /* 0x17179863: cmp dword ptr [ebp - 0x20], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1717992E; /* 0x17179866: je 0x1717992e */
L_1717986C:
    /* cmp MEM32(ebp + (-0x1C)), ebx */ /* 0x1717986C: cmp dword ptr [ebp - 0x1c], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1717992E; /* 0x1717986F: je 0x1717992e */
L_17179875:
    /* cmp MEM32(ebp + (-0x10)), ebx */ /* 0x17179875: cmp dword ptr [ebp - 0x10], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1717988A; /* 0x17179878: je 0x1717988a */
L_1717987A:
    eax = MEM32(ebp + (-0x18)); /* 0x1717987A: mov eax, dword ptr [ebp - 0x18] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + (-0x14))); /* 0x1717987D: imul eax, dword ptr [ebp - 0x14] */
    /* cmp eax, MEM32(ebp + (-0x24)) */ /* 0x17179881: cmp eax, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x24)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1717992E; /* 0x17179884: jne 0x1717992e */
L_1717988A:
    PUSH32(esp, 0x2Cu); /* 0x1717988A: push 0x2c */
    RECOMP_CALL(sub_1721B01C); /* 0x1717988C: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x17179891: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x17179893: pop ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171798B0; /* 0x17179894: je 0x171798b0 */
L_17179896:
    ecx = eax; /* 0x17179896: mov ecx, eax */
    RECOMP_CALL(sub_171796B5); /* 0x17179898: call 0x171796b5 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1717989D: mov esi, eax */
    goto L_171798B2; /* 0x1717989F: jmp 0x171798b2 */
L_171798A1:
    RECOMP_CALL(sub_1717882B); /* 0x171798A1: call 0x1717882b */
    RECOMP_FLAGS_IN();
L_171798A6:
    edi = 0x80004005u; /* 0x171798A6: mov edi, 0x80004005 */
    goto L_17179933; /* 0x171798AB: jmp 0x17179933 */
L_171798B0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x171798B0: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_171798B2:
    /* cmp esi, ebx */ /* 0x171798B2: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0xC)) = esi; /* 0x171798B4: mov dword ptr [ebp - 0xc], esi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_171798C0; /* 0x171798B7: jne 0x171798c0 */
L_171798B9:
    edi = 0x8007000Eu; /* 0x171798B9: mov edi, 0x8007000e */
    goto L_17179933; /* 0x171798BE: jmp 0x17179933 */
L_171798C0:
    /* cmp MEM32(ebp + (-0x10)), ebx */ /* 0x171798C0: cmp dword ptr [ebp - 0x10], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x171798C3: push dword ptr [ebp - 0x1c] */
    ecx = esi; /* 0x171798C6: mov ecx, esi */
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x171798C8: push dword ptr [ebp - 0x20] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171798DA; /* 0x171798CB: je 0x171798da */
L_171798CD:
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x171798CD: push dword ptr [ebp - 0x14] */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x171798D0: push dword ptr [ebp - 0x18] */
    RECOMP_CALL(sub_1717954C); /* 0x171798D3: call 0x1717954c */
    RECOMP_FLAGS_IN();
    goto L_171798E2; /* 0x171798D8: jmp 0x171798e2 */
L_171798DA:
    PUSH32(esp, MEM32(ebp + (-0x24))); /* 0x171798DA: push dword ptr [ebp - 0x24] */
    RECOMP_CALL(sub_17179421); /* 0x171798DD: call 0x17179421 */
    RECOMP_FLAGS_IN();
L_171798E2:
    edi = eax; /* 0x171798E2: mov edi, eax */
    /* cmp edi, ebx */ /* 0x171798E4: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(esi); /* 0x171798E6: mov eax, dword ptr [esi] */
    if (CMP_GE(_flag_a, _flag_b)) goto L_171798F3; /* 0x171798E8: jge 0x171798f3 */
L_171798EA:
    PUSH32(esp, 1); /* 0x171798EA: push 1 */
    ecx = esi; /* 0x171798EC: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax + 0x4C)); /* 0x171798EE: call dword ptr [eax + 0x4c] */
    RECOMP_FLAGS_IN();
    goto L_17179933; /* 0x171798F1: jmp 0x17179933 */
L_171798F3:
    ecx = ebp + (-0x4); /* 0x171798F3: lea ecx, [ebp - 4] */
    PUSH32(esp, ecx); /* 0x171798F6: push ecx */
    PUSH32(esp, MEM32(ebp + (-0x24))); /* 0x171798F7: push dword ptr [ebp - 0x24] */
    PUSH32(esp, ebx); /* 0x171798FA: push ebx */
    PUSH32(esp, esi); /* 0x171798FB: push esi */
    RECOMP_ICALL(MEM32(eax + 0x28)); /* 0x171798FC: call dword ptr [eax + 0x28] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x171798FF: mov edi, eax */
    /* cmp edi, ebx */ /* 0x17179901: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_17179933; /* 0x17179903: jl 0x17179933 */
L_17179905:
    eax = MEM32(ebp + (-0x1C)); /* 0x17179905: mov eax, dword ptr [ebp - 0x1c] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + (-0x20))); /* 0x17179908: imul eax, dword ptr [ebp - 0x20] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + (-0x24))); /* 0x1717990C: imul eax, dword ptr [ebp - 0x24] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x17179910: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x17179910: shl eax, 2 */
    PUSH32(esp, eax); /* 0x17179913: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x17179914: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x17179917: push dword ptr [ebp - 8] */
    RECOMP_CALL(sub_171788CA); /* 0x1717991A: call 0x171788ca */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1717991F: mov edi, eax */
    /* test edi, edi */ /* 0x17179921: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17179933; /* 0x17179923: jl 0x17179933 */
L_17179925:
    eax = MEM32(ebp + 0xC); /* 0x17179925: mov eax, dword ptr [ebp + 0xc] */
    MEM32(eax) = esi; /* 0x17179928: mov dword ptr [eax], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1717992A: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_17179933; /* 0x1717992C: jmp 0x17179933 */
L_1717992E:
    edi = 0x8876086Cu; /* 0x1717992E: mov edi, 0x8876086c */
L_17179933:
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x17179933: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = POP32_VAL(esp); /* 0x17179937: pop esi */
    ebx = POP32_VAL(esp); /* 0x17179938: pop ebx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17179944; /* 0x17179939: je 0x17179944 */
L_1717993B:
    eax = MEM32(ebp + (-0xC)); /* 0x1717993B: mov eax, dword ptr [ebp - 0xc] */
    ecx = MEM32(eax); /* 0x1717993E: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x17179940: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x2C)); /* 0x17179941: call dword ptr [ecx + 0x2c] */
    RECOMP_FLAGS_IN();
L_17179944:
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x17179944: push dword ptr [ebp - 8] */
    RECOMP_ICALL(MEM32(0x170010F8)); /* 0x17179947: call dword ptr [0x170010f8] */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x1717994D: mov eax, edi */
    goto L_17179956; /* 0x1717994F: jmp 0x17179956 */
L_17179951:
    eax = 0x8876086Cu; /* 0x17179951: mov eax, 0x8876086c */
L_17179956:
    edi = POP32_VAL(esp); /* 0x17179956: pop edi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17179957: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x17179958: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_17179960(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17179960u);

L_17179960:
    edi = edi; /* 0x17179960: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17179962: push ebp */
    ebp = esp; /* 0x17179963: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x24u; /* 0x17179965: sub esp, 0x24 */
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x17179968: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x17179969: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x8), edi */ /* 0x1717996B: cmp dword ptr [ebp + 8], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0xC)) = edi; /* 0x1717996E: mov dword ptr [ebp - 0xc], edi */
    MEM32(ebp + (-0x4)) = edi; /* 0x17179971: mov dword ptr [ebp - 4], edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17179AEC; /* 0x17179974: je 0x17179aec */
L_1717997A:
    /* cmp MEM32(ebp + 0xC), edi */ /* 0x1717997A: cmp dword ptr [ebp + 0xc], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17179AEC; /* 0x1717997D: je 0x17179aec */
L_17179983:
    PUSH32(esp, edi); /* 0x17179983: push edi */
    PUSH32(esp, 0x08000080u); /* 0x17179984: push 0x8000080 */
    PUSH32(esp, 3); /* 0x17179989: push 3 */
    PUSH32(esp, edi); /* 0x1717998B: push edi */
    PUSH32(esp, edi); /* 0x1717998C: push edi */
    PUSH32(esp, 0x80000000u); /* 0x1717998D: push 0x80000000 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x17179992: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x170010AC)); /* 0x17179995: call dword ptr [0x170010ac] */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1717999B: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x8)) = eax; /* 0x1717999E: mov dword ptr [ebp - 8], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_171799B2; /* 0x171799A1: jne 0x171799b2 */
L_171799A3:
    RECOMP_CALL(sub_1717882B); /* 0x171799A3: call 0x1717882b */
    RECOMP_FLAGS_IN();
    eax = 0x80004005u; /* 0x171799A8: mov eax, 0x80004005 */
    goto L_17179AF1; /* 0x171799AD: jmp 0x17179af1 */
L_171799B2:
    PUSH32(esp, ebx); /* 0x171799B2: push ebx */
    PUSH32(esp, esi); /* 0x171799B3: push esi */
    ebx = 0x00400000u; /* 0x171799B4: mov ebx, 0x400000 */
L_171799B9:
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) & 0; /* 0x171799B9: and dword ptr [ebp + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x18u); /* 0x171799BD: push 0x18 */
    esi = POP32_VAL(esp); /* 0x171799BF: pop esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edi; /* 0x171799C0: sub esi, edi */
    _flag_k = FK_CMP;
    /* cmp esi, ebx */ /* 0x171799C2: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_171799C8; /* 0x171799C4: jbe 0x171799c8 */
L_171799C6:
    esi = ebx; /* 0x171799C6: mov esi, ebx */
L_171799C8:
    PUSH32(esp, 0); /* 0x171799C8: push 0 */
    eax = ebp + 0x8; /* 0x171799CA: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x171799CD: push eax */
    PUSH32(esp, esi); /* 0x171799CE: push esi */
    eax = ebp + edi + (-0x24); /* 0x171799CF: lea eax, [ebp + edi - 0x24] */
    PUSH32(esp, eax); /* 0x171799D3: push eax */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x171799D4: push dword ptr [ebp - 8] */
    RECOMP_ICALL(MEM32(0x170010F4)); /* 0x171799D7: call dword ptr [0x170010f4] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171799DD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17179A3C; /* 0x171799DF: je 0x17179a3c */
L_171799E1:
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x171799E1: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17179A41; /* 0x171799E5: je 0x17179a41 */
L_171799E7:
    /* cmp MEM32(ebp + 0x8), esi */ /* 0x171799E7: cmp dword ptr [ebp + 8], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17179A41; /* 0x171799EA: jne 0x17179a41 */
L_171799EC:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + esi; /* 0x171799EC: add edi, esi */
    _flag_k = FK_ADD;
    /* cmp edi, 0x18u */ /* 0x171799EE: cmp edi, 0x18 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_171799B9; /* 0x171799F1: jne 0x171799b9 */
L_171799F3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x171799F3: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x24)), ebx */ /* 0x171799F5: cmp dword ptr [ebp - 0x24], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17179AC9; /* 0x171799F8: je 0x17179ac9 */
L_171799FE:
    /* cmp MEM32(ebp + (-0x20)), ebx */ /* 0x171799FE: cmp dword ptr [ebp - 0x20], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17179AC9; /* 0x17179A01: je 0x17179ac9 */
L_17179A07:
    /* cmp MEM32(ebp + (-0x1C)), ebx */ /* 0x17179A07: cmp dword ptr [ebp - 0x1c], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17179AC9; /* 0x17179A0A: je 0x17179ac9 */
L_17179A10:
    /* cmp MEM32(ebp + (-0x10)), ebx */ /* 0x17179A10: cmp dword ptr [ebp - 0x10], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17179A25; /* 0x17179A13: je 0x17179a25 */
L_17179A15:
    eax = MEM32(ebp + (-0x18)); /* 0x17179A15: mov eax, dword ptr [ebp - 0x18] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + (-0x14))); /* 0x17179A18: imul eax, dword ptr [ebp - 0x14] */
    /* cmp eax, MEM32(ebp + (-0x24)) */ /* 0x17179A1C: cmp eax, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x24)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17179AC9; /* 0x17179A1F: jne 0x17179ac9 */
L_17179A25:
    PUSH32(esp, 0x2Cu); /* 0x17179A25: push 0x2c */
    RECOMP_CALL(sub_1721B01C); /* 0x17179A27: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x17179A2C: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x17179A2E: pop ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17179A4B; /* 0x17179A2F: je 0x17179a4b */
L_17179A31:
    ecx = eax; /* 0x17179A31: mov ecx, eax */
    RECOMP_CALL(sub_171796B5); /* 0x17179A33: call 0x171796b5 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x17179A38: mov esi, eax */
    goto L_17179A4D; /* 0x17179A3A: jmp 0x17179a4d */
L_17179A3C:
    RECOMP_CALL(sub_1717882B); /* 0x17179A3C: call 0x1717882b */
    RECOMP_FLAGS_IN();
L_17179A41:
    edi = 0x80004005u; /* 0x17179A41: mov edi, 0x80004005 */
    goto L_17179ACE; /* 0x17179A46: jmp 0x17179ace */
L_17179A4B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x17179A4B: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_17179A4D:
    /* cmp esi, ebx */ /* 0x17179A4D: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0xC)) = esi; /* 0x17179A4F: mov dword ptr [ebp - 0xc], esi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_17179A5B; /* 0x17179A52: jne 0x17179a5b */
L_17179A54:
    edi = 0x8007000Eu; /* 0x17179A54: mov edi, 0x8007000e */
    goto L_17179ACE; /* 0x17179A59: jmp 0x17179ace */
L_17179A5B:
    /* cmp MEM32(ebp + (-0x10)), ebx */ /* 0x17179A5B: cmp dword ptr [ebp - 0x10], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x17179A5E: push dword ptr [ebp - 0x1c] */
    ecx = esi; /* 0x17179A61: mov ecx, esi */
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x17179A63: push dword ptr [ebp - 0x20] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17179A75; /* 0x17179A66: je 0x17179a75 */
L_17179A68:
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x17179A68: push dword ptr [ebp - 0x14] */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x17179A6B: push dword ptr [ebp - 0x18] */
    RECOMP_CALL(sub_1717954C); /* 0x17179A6E: call 0x1717954c */
    RECOMP_FLAGS_IN();
    goto L_17179A7D; /* 0x17179A73: jmp 0x17179a7d */
L_17179A75:
    PUSH32(esp, MEM32(ebp + (-0x24))); /* 0x17179A75: push dword ptr [ebp - 0x24] */
    RECOMP_CALL(sub_17179421); /* 0x17179A78: call 0x17179421 */
    RECOMP_FLAGS_IN();
L_17179A7D:
    edi = eax; /* 0x17179A7D: mov edi, eax */
    /* cmp edi, ebx */ /* 0x17179A7F: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(esi); /* 0x17179A81: mov eax, dword ptr [esi] */
    if (CMP_GE(_flag_a, _flag_b)) goto L_17179A8E; /* 0x17179A83: jge 0x17179a8e */
L_17179A85:
    PUSH32(esp, 1); /* 0x17179A85: push 1 */
    ecx = esi; /* 0x17179A87: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax + 0x4C)); /* 0x17179A89: call dword ptr [eax + 0x4c] */
    RECOMP_FLAGS_IN();
    goto L_17179ACE; /* 0x17179A8C: jmp 0x17179ace */
L_17179A8E:
    ecx = ebp + (-0x4); /* 0x17179A8E: lea ecx, [ebp - 4] */
    PUSH32(esp, ecx); /* 0x17179A91: push ecx */
    PUSH32(esp, MEM32(ebp + (-0x24))); /* 0x17179A92: push dword ptr [ebp - 0x24] */
    PUSH32(esp, ebx); /* 0x17179A95: push ebx */
    PUSH32(esp, esi); /* 0x17179A96: push esi */
    RECOMP_ICALL(MEM32(eax + 0x28)); /* 0x17179A97: call dword ptr [eax + 0x28] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x17179A9A: mov edi, eax */
    /* cmp edi, ebx */ /* 0x17179A9C: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_17179ACE; /* 0x17179A9E: jl 0x17179ace */
L_17179AA0:
    eax = MEM32(ebp + (-0x1C)); /* 0x17179AA0: mov eax, dword ptr [ebp - 0x1c] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + (-0x20))); /* 0x17179AA3: imul eax, dword ptr [ebp - 0x20] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + (-0x24))); /* 0x17179AA7: imul eax, dword ptr [ebp - 0x24] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x17179AAB: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x17179AAB: shl eax, 2 */
    PUSH32(esp, eax); /* 0x17179AAE: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x17179AAF: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x17179AB2: push dword ptr [ebp - 8] */
    RECOMP_CALL(sub_171788CA); /* 0x17179AB5: call 0x171788ca */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x17179ABA: mov edi, eax */
    /* test edi, edi */ /* 0x17179ABC: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17179ACE; /* 0x17179ABE: jl 0x17179ace */
L_17179AC0:
    eax = MEM32(ebp + 0xC); /* 0x17179AC0: mov eax, dword ptr [ebp + 0xc] */
    MEM32(eax) = esi; /* 0x17179AC3: mov dword ptr [eax], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x17179AC5: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_17179ACE; /* 0x17179AC7: jmp 0x17179ace */
L_17179AC9:
    edi = 0x8876086Cu; /* 0x17179AC9: mov edi, 0x8876086c */
L_17179ACE:
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x17179ACE: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = POP32_VAL(esp); /* 0x17179AD2: pop esi */
    ebx = POP32_VAL(esp); /* 0x17179AD3: pop ebx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17179ADF; /* 0x17179AD4: je 0x17179adf */
L_17179AD6:
    eax = MEM32(ebp + (-0xC)); /* 0x17179AD6: mov eax, dword ptr [ebp - 0xc] */
    ecx = MEM32(eax); /* 0x17179AD9: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x17179ADB: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x2C)); /* 0x17179ADC: call dword ptr [ecx + 0x2c] */
    RECOMP_FLAGS_IN();
L_17179ADF:
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x17179ADF: push dword ptr [ebp - 8] */
    RECOMP_ICALL(MEM32(0x170010F8)); /* 0x17179AE2: call dword ptr [0x170010f8] */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x17179AE8: mov eax, edi */
    goto L_17179AF1; /* 0x17179AEA: jmp 0x17179af1 */
L_17179AEC:
    eax = 0x8876086Cu; /* 0x17179AEC: mov eax, 0x8876086c */
L_17179AF1:
    edi = POP32_VAL(esp); /* 0x17179AF1: pop edi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17179AF2: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x17179AF3: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_17179AFB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17179AFBu);

L_17179AFB:
    edi = edi; /* 0x17179AFB: mov edi, edi */
    PUSH32(esp, esi); /* 0x17179AFD: push esi */
    esi = ecx; /* 0x17179AFE: mov esi, ecx */
    PUSH32(esp, MEM32(esi + 0x18)); /* 0x17179B00: push dword ptr [esi + 0x18] */
    MEM32(esi) = 0x17021F60u; /* 0x17179B03: mov dword ptr [esi], 0x17021f60 */
    RECOMP_CALL(sub_1721B010); /* 0x17179B09: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x1C)); /* 0x17179B0E: push dword ptr [esi + 0x1c] */
    RECOMP_CALL(sub_1721B010); /* 0x17179B11: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x20)); /* 0x17179B16: push dword ptr [esi + 0x20] */
    RECOMP_CALL(sub_1721B010); /* 0x17179B19: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x17179B1E: add esp, 0xc */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x17179B21: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x17179B22: ret  */
    RECOMP_REGS_OUT();
}

void sub_17179B28(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17179B28u);

L_17179B28:
    edi = edi; /* 0x17179B28: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17179B2A: push ebp */
    ebp = esp; /* 0x17179B2B: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x17179B2D: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ecx + 0x4); /* 0x17179B30: mov eax, dword ptr [ecx + 4] */
    /* cmp eax, 1 */ /* 0x17179B33: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x17179B36: push esi */
    esi = eax + (-0x1); /* 0x17179B37: lea esi, [eax - 1] */
    MEM32(ecx + 0x4) = esi; /* 0x17179B3A: mov dword ptr [ecx + 4], esi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_17179B46; /* 0x17179B3D: jne 0x17179b46 */
L_17179B3F:
    eax = MEM32(ecx); /* 0x17179B3F: mov eax, dword ptr [ecx] */
    PUSH32(esp, 1); /* 0x17179B41: push 1 */
    RECOMP_ICALL(MEM32(eax + 0x44)); /* 0x17179B43: call dword ptr [eax + 0x44] */
    RECOMP_FLAGS_IN();
L_17179B46:
    eax = esi; /* 0x17179B46: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x17179B48: pop esi */
    ebp = POP32_VAL(esp); /* 0x17179B49: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x17179B4A: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_17179B52(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17179B52u);

L_17179B52:
    edi = edi; /* 0x17179B52: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17179B54: push ebp */
    ebp = esp; /* 0x17179B55: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x17179B57: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x17179B5A: push edi */
    edi = MEM32(ebp + 0xC); /* 0x17179B5B: mov edi, dword ptr [ebp + 0xc] */
    /* cmp edi, MEM32(ecx + 0x10) */ /* 0x17179B5E: cmp edi, dword ptr [ecx + 0x10] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ecx + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_17179B6A; /* 0x17179B61: jbe 0x17179b6a */
L_17179B63:
    eax = 0x8876086Cu; /* 0x17179B63: mov eax, 0x8876086c */
    goto L_17179BA7; /* 0x17179B68: jmp 0x17179ba7 */
L_17179B6A:
    PUSH32(esp, esi); /* 0x17179B6A: push esi */
    esi = MEM32(ebp + 0x10); /* 0x17179B6B: mov esi, dword ptr [ebp + 0x10] */
    /* test esi, esi */ /* 0x17179B6E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17179B79; /* 0x17179B70: jne 0x17179b79 */
L_17179B72:
    eax = 0x8876086Cu; /* 0x17179B72: mov eax, 0x8876086c */
    goto L_17179BA6; /* 0x17179B77: jmp 0x17179ba6 */
L_17179B79:
    eax = MEM32(ecx + 0x14); /* 0x17179B79: mov eax, dword ptr [ecx + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x17179B7C: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17179B7E: inc eax */
    _flag_k = FK_INC;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ecx + 0xC)); /* 0x17179B7F: imul eax, dword ptr [ecx + 0xc] */
    /* test eax, eax */ /* 0x17179B83: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17179BA4; /* 0x17179B85: jbe 0x17179ba4 */
L_17179B87:
    PUSH32(esp, ebx); /* 0x17179B87: push ebx */
L_17179B88:
    ebx = MEM32(ecx + 0x18); /* 0x17179B88: mov ebx, dword ptr [ecx + 0x18] */
    eax = (uint32_t)((int32_t)eax * (int32_t)edi); /* 0x17179B8B: imul eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x17179B8E: add eax, edx */
    _flag_k = FK_ADD;
    fp_push(*(float*)&MEM32(ebx + eax * 4)); /* 0x17179B90: fld dword ptr [ebx + eax*4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + edx * 4) = _v; } /* 0x17179B93: fstp dword ptr [esi + edx*4] */
    eax = MEM32(ecx + 0x14); /* 0x17179B96: mov eax, dword ptr [ecx + 0x14] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x17179B99: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17179B9A: inc eax */
    _flag_k = FK_INC;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ecx + 0xC)); /* 0x17179B9B: imul eax, dword ptr [ecx + 0xc] */
    /* cmp edx, eax */ /* 0x17179B9F: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17179B88; /* 0x17179BA1: jb 0x17179b88 */
L_17179BA3:
    ebx = POP32_VAL(esp); /* 0x17179BA3: pop ebx */
L_17179BA4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17179BA4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_17179BA6:
    esi = POP32_VAL(esp); /* 0x17179BA6: pop esi */
L_17179BA7:
    edi = POP32_VAL(esp); /* 0x17179BA7: pop edi */
    ebp = POP32_VAL(esp); /* 0x17179BA8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x17179BA9: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_17179BB1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17179BB1u);

L_17179BB1:
    edi = edi; /* 0x17179BB1: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17179BB3: push ebp */
    ebp = esp; /* 0x17179BB4: mov ebp, esp */
    PUSH32(esp, esi); /* 0x17179BB6: push esi */
    esi = MEM32(ebp + 0xC); /* 0x17179BB7: mov esi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x17179BBA: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp esi, ecx */ /* 0x17179BBC: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17179BC7; /* 0x17179BBE: jne 0x17179bc7 */
L_17179BC0:
    eax = 0x8876086Cu; /* 0x17179BC0: mov eax, 0x8876086c */
    goto L_17179BF8; /* 0x17179BC5: jmp 0x17179bf8 */
L_17179BC7:
    eax = MEM32(ebp + 0x8); /* 0x17179BC7: mov eax, dword ptr [ebp + 8] */
    /* cmp MEM32(eax + 0x10), 1 */ /* 0x17179BCA: cmp dword ptr [eax + 0x10], 1 */
    _flag_a = (uint32_t)(MEM32(eax + 0x10)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17179BE2; /* 0x17179BCE: jne 0x17179be2 */
L_17179BD0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x17179BD0: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(eax + 0x8), ecx */ /* 0x17179BD2: cmp dword ptr [eax + 8], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_17179BF6; /* 0x17179BD5: jbe 0x17179bf6 */
L_17179BD7:
    MEM32(esi + edx * 4) = ecx; /* 0x17179BD7: mov dword ptr [esi + edx*4], ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x17179BDA: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, MEM32(eax + 0x8) */ /* 0x17179BDB: cmp edx, dword ptr [eax + 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(eax + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17179BD7; /* 0x17179BDE: jb 0x17179bd7 */
L_17179BE0:
    goto L_17179BF6; /* 0x17179BE0: jmp 0x17179bf6 */
L_17179BE2:
    /* cmp MEM32(eax + 0x8), ecx */ /* 0x17179BE2: cmp dword ptr [eax + 8], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_17179BF6; /* 0x17179BE5: jbe 0x17179bf6 */
L_17179BE7:
    edx = MEM32(eax + 0x20); /* 0x17179BE7: mov edx, dword ptr [eax + 0x20] */
    edx = MEM32(edx + ecx * 4); /* 0x17179BEA: mov edx, dword ptr [edx + ecx*4] */
    MEM32(esi + ecx * 4) = edx; /* 0x17179BED: mov dword ptr [esi + ecx*4], edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x17179BF0: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, MEM32(eax + 0x8) */ /* 0x17179BF1: cmp ecx, dword ptr [eax + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17179BE7; /* 0x17179BF4: jb 0x17179be7 */
L_17179BF6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17179BF6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_17179BF8:
    esi = POP32_VAL(esp); /* 0x17179BF8: pop esi */
    ebp = POP32_VAL(esp); /* 0x17179BF9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x17179BFA: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_17179C02(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17179C02u);

L_17179C02:
    edi = edi; /* 0x17179C02: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17179C04: push ebp */
    ebp = esp; /* 0x17179C05: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x17179C07: mov ecx, dword ptr [ebp + 0xc] */
    eax = MEM32(ebp + 0x8); /* 0x17179C0A: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x17179C0D: push esi */
    esi = MEM32(ebp + 0x10); /* 0x17179C0E: mov esi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x17179C11: add ecx, esi */
    _flag_k = FK_ADD;
    /* cmp MEM32(eax + 0x14), ecx */ /* 0x17179C13: cmp dword ptr [eax + 0x14], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_17179C1F; /* 0x17179C16: jb 0x17179c1f */
L_17179C18:
    ecx = MEM32(ebp + 0x14); /* 0x17179C18: mov ecx, dword ptr [ebp + 0x14] */
    /* test ecx, ecx */ /* 0x17179C1B: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17179C26; /* 0x17179C1D: jne 0x17179c26 */
L_17179C1F:
    eax = 0x8876086Cu; /* 0x17179C1F: mov eax, 0x8876086c */
    goto L_17179C71; /* 0x17179C24: jmp 0x17179c71 */
L_17179C26:
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) & 0; /* 0x17179C26: and dword ptr [ebp + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(eax + 0x8), 0 */ /* 0x17179C2A: cmp dword ptr [eax + 8], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_17179C6F; /* 0x17179C2E: jbe 0x17179c6f */
L_17179C30:
    PUSH32(esp, ebx); /* 0x17179C30: push ebx */
    MEM32(ebp + 0x10) = ecx; /* 0x17179C31: mov dword ptr [ebp + 0x10], ecx */
    PUSH32(esp, edi); /* 0x17179C34: push edi */
L_17179C35:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x17179C35: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x17179C37: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17179C5A; /* 0x17179C39: jbe 0x17179c5a */
L_17179C3B:
    ecx = MEM32(ebp + 0x10); /* 0x17179C3B: mov ecx, dword ptr [ebp + 0x10] */
L_17179C3E:
    edi = MEM32(eax + 0x14); /* 0x17179C3E: mov edi, dword ptr [eax + 0x14] */
    edi = (uint32_t)((int32_t)edi * (int32_t)MEM32(ebp + 0x8)); /* 0x17179C41: imul edi, dword ptr [ebp + 8] */
    ebx = MEM32(eax + 0x1C); /* 0x17179C45: mov ebx, dword ptr [eax + 0x1c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + edx; /* 0x17179C48: add edi, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ebp + 0xC); /* 0x17179C4A: add edi, dword ptr [ebp + 0xc] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x17179C4D: inc edx */
    _flag_k = FK_INC;
    fp_push(*(float*)&MEM32(ebx + edi * 4)); /* 0x17179C4E: fld dword ptr [ebx + edi*4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx) = _v; } /* 0x17179C51: fstp dword ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x17179C53: add ecx, 4 */
    _flag_k = FK_ADD;
    /* cmp edx, esi */ /* 0x17179C56: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17179C3E; /* 0x17179C58: jb 0x17179c3e */
L_17179C5A:
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + 1; /* 0x17179C5A: inc dword ptr [ebp + 8] */
    _flag_k = FK_INC;
    ecx = esi; /* 0x17179C5D: mov ecx, esi */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x17179C5F: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x17179C5F: shl ecx, 2 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + ecx; /* 0x17179C62: add dword ptr [ebp + 0x10], ecx */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + 0x8); /* 0x17179C65: mov ecx, dword ptr [ebp + 8] */
    /* cmp ecx, MEM32(eax + 0x8) */ /* 0x17179C68: cmp ecx, dword ptr [eax + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17179C35; /* 0x17179C6B: jb 0x17179c35 */
L_17179C6D:
    edi = POP32_VAL(esp); /* 0x17179C6D: pop edi */
    ebx = POP32_VAL(esp); /* 0x17179C6E: pop ebx */
L_17179C6F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17179C6F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_17179C71:
    esi = POP32_VAL(esp); /* 0x17179C71: pop esi */
    ebp = POP32_VAL(esp); /* 0x17179C72: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x17179C73: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_17179C7B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17179C7Bu);

L_17179C7B:
    edi = edi; /* 0x17179C7B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17179C7D: push ebp */
    ebp = esp; /* 0x17179C7E: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x17179C80: push ecx */
    PUSH32(esp, ebx); /* 0x17179C81: push ebx */
    PUSH32(esp, esi); /* 0x17179C82: push esi */
    esi = ecx; /* 0x17179C83: mov esi, ecx */
    PUSH32(esp, edi); /* 0x17179C85: push edi */
    PUSH32(esp, MEM32(esi + 0x18)); /* 0x17179C86: push dword ptr [esi + 0x18] */
    RECOMP_CALL(sub_1721B010); /* 0x17179C89: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x1C)); /* 0x17179C8E: push dword ptr [esi + 0x1c] */
    RECOMP_CALL(sub_1721B010); /* 0x17179C91: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x20)); /* 0x17179C96: push dword ptr [esi + 0x20] */
    RECOMP_CALL(sub_1721B010); /* 0x17179C99: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x1C); /* 0x17179C9E: mov edi, dword ptr [ebp + 0x1c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x17179CA1: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x17179CA3: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp edi, ebx */ /* 0x17179CA6: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi + 0x18) = ebx; /* 0x17179CA8: mov dword ptr [esi + 0x18], ebx */
    MEM32(esi + 0x1C) = ebx; /* 0x17179CAB: mov dword ptr [esi + 0x1c], ebx */
    MEM32(esi + 0x20) = ebx; /* 0x17179CAE: mov dword ptr [esi + 0x20], ebx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17179D03; /* 0x17179CB1: je 0x17179d03 */
L_17179CB3:
    eax = MEM32(edi); /* 0x17179CB3: mov eax, dword ptr [edi] */
    PUSH32(esp, edi); /* 0x17179CB5: push edi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x17179CB6: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x8) = eax; /* 0x17179CB9: mov dword ptr [esi + 8], eax */
    eax = MEM32(edi); /* 0x17179CBC: mov eax, dword ptr [edi] */
    PUSH32(esp, edi); /* 0x17179CBE: push edi */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x17179CBF: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x24) = eax; /* 0x17179CC2: mov dword ptr [esi + 0x24], eax */
    eax = MEM32(edi); /* 0x17179CC5: mov eax, dword ptr [edi] */
    PUSH32(esp, edi); /* 0x17179CC7: push edi */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x17179CC8: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x28) = eax; /* 0x17179CCB: mov dword ptr [esi + 0x28], eax */
    eax = MEM32(edi); /* 0x17179CCE: mov eax, dword ptr [edi] */
    PUSH32(esp, edi); /* 0x17179CD0: push edi */
    RECOMP_ICALL(MEM32(eax + 0x18)); /* 0x17179CD1: call dword ptr [eax + 0x18] */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x2C) = eax; /* 0x17179CD4: mov dword ptr [esi + 0x2c], eax */
    eax = MEM32(edi); /* 0x17179CD7: mov eax, dword ptr [edi] */
    PUSH32(esp, edi); /* 0x17179CD9: push edi */
    RECOMP_ICALL(MEM32(eax + 0x1C)); /* 0x17179CDA: call dword ptr [eax + 0x1c] */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x30) = eax; /* 0x17179CDD: mov dword ptr [esi + 0x30], eax */
    eax = MEM32(edi); /* 0x17179CE0: mov eax, dword ptr [edi] */
    PUSH32(esp, edi); /* 0x17179CE2: push edi */
    RECOMP_ICALL(MEM32(eax + 0x20)); /* 0x17179CE3: call dword ptr [eax + 0x20] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0xC); /* 0x17179CE6: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(esi + 0x34) = eax; /* 0x17179CE9: mov dword ptr [esi + 0x34], eax */
    eax = MEM32(ebp + 0x10); /* 0x17179CEC: mov eax, dword ptr [ebp + 0x10] */
    MEM32(esi + 0x14) = eax; /* 0x17179CEF: mov dword ptr [esi + 0x14], eax */
    eax = MEM32(esi + 0x28); /* 0x17179CF2: mov eax, dword ptr [esi + 0x28] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esi + 0x24)); /* 0x17179CF5: imul eax, dword ptr [esi + 0x24] */
    /* cmp eax, ebx */ /* 0x17179CF9: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi + 0x10) = ecx; /* 0x17179CFB: mov dword ptr [esi + 0x10], ecx */
    MEM32(esi + 0xC) = eax; /* 0x17179CFE: mov dword ptr [esi + 0xc], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_17179D0D; /* 0x17179D01: jne 0x17179d0d */
L_17179D03:
    eax = 0x8876086Cu; /* 0x17179D03: mov eax, 0x8876086c */
    goto L_17179DA2; /* 0x17179D08: jmp 0x17179da2 */
L_17179D0D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17179D0D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17179D0F: inc eax */
    _flag_k = FK_INC;
    /* cmp ecx, eax */ /* 0x17179D10: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_17179D17; /* 0x17179D12: ja 0x17179d17 */
L_17179D14:
    MEM32(ebp + 0x8) = eax; /* 0x17179D14: mov dword ptr [ebp + 8], eax */
L_17179D17:
    eax = MEM32(edi); /* 0x17179D17: mov eax, dword ptr [edi] */
    ecx = ebp + (-0x4); /* 0x17179D19: lea ecx, [ebp - 4] */
    PUSH32(esp, ecx); /* 0x17179D1C: push ecx */
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x17179D1D: push dword ptr [esi + 8] */
    MEM32(ebp + (-0x4)) = ebx; /* 0x17179D20: mov dword ptr [ebp - 4], ebx */
    PUSH32(esp, ebx); /* 0x17179D23: push ebx */
    PUSH32(esp, edi); /* 0x17179D24: push edi */
    RECOMP_ICALL(MEM32(eax + 0x28)); /* 0x17179D25: call dword ptr [eax + 0x28] */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x17179D28: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_17179DA2; /* 0x17179D2A: jl 0x17179da2 */
L_17179D2C:
    PUSH32(esp, ebx); /* 0x17179D2C: push ebx */
    PUSH32(esp, ebx); /* 0x17179D2D: push ebx */
    RECOMP_CALL(sub_1721B200); /* 0x17179D2E: call 0x1721b200 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x0008001Fu); /* 0x17179D33: push 0x8001f */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x17179D38: push -1 */
    MEM32(ebp + 0x1C) = eax; /* 0x17179D3A: mov dword ptr [ebp + 0x1c], eax */
    RECOMP_CALL(sub_1721B200); /* 0x17179D3D: call 0x1721b200 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x00030000u); /* 0x17179D42: push 0x30000 */
    PUSH32(esp, ebx); /* 0x17179D47: push ebx */
    RECOMP_CALL(sub_1721B200); /* 0x17179D48: call 0x1721b200 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x17179D4D: add esp, 0x18 */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x17179D50: push dword ptr [ebp + 0x18] */
    /* cmp MEM32(ebp + 0x8), 2 */ /* 0x17179D53: cmp dword ptr [ebp + 8], 2 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x17179D57: push dword ptr [ebp + 0x14] */
    eax = esi + 0x20; /* 0x17179D5A: lea eax, [esi + 0x20] */
    PUSH32(esp, eax); /* 0x17179D5D: push eax */
    eax = esi + 0x1C; /* 0x17179D5E: lea eax, [esi + 0x1c] */
    PUSH32(esp, eax); /* 0x17179D61: push eax */
    eax = esi + 0x18; /* 0x17179D62: lea eax, [esi + 0x18] */
    PUSH32(esp, eax); /* 0x17179D65: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x17179D66: push dword ptr [ebp - 4] */
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x17179D69: sete al */
    PUSH32(esp, eax); /* 0x17179D6C: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x17179D6D: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x17179D70: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x17179D73: push dword ptr [esi + 8] */
    PUSH32(esp, MEM32(esi + 0xC)); /* 0x17179D76: push dword ptr [esi + 0xc] */
    RECOMP_CALL(sub_1718E9A4); /* 0x17179D79: call 0x1718e9a4 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x17179D7E: mov esi, eax */
    RECOMP_CALL(sub_1721B218); /* 0x17179D80: call 0x1721b218 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x000B001Fu); /* 0x17179D85: push 0xb001f */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x17179D8A: push dword ptr [ebp + 0x1c] */
    RECOMP_CALL(sub_1721B200); /* 0x17179D8D: call 0x1721b200 */
    RECOMP_FLAGS_IN();
    /* cmp esi, ebx */ /* 0x17179D92: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x17179D94: pop ecx */
    ecx = POP32_VAL(esp); /* 0x17179D95: pop ecx */
    if (CMP_L(_flag_a, _flag_b)) goto L_17179D9A; /* 0x17179D96: jl 0x17179d9a */
L_17179D98:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x17179D98: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_17179D9A:
    eax = MEM32(edi); /* 0x17179D9A: mov eax, dword ptr [edi] */
    PUSH32(esp, edi); /* 0x17179D9C: push edi */
    RECOMP_ICALL(MEM32(eax + 0x2C)); /* 0x17179D9D: call dword ptr [eax + 0x2c] */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x17179DA0: mov eax, esi */
L_17179DA2:
    edi = POP32_VAL(esp); /* 0x17179DA2: pop edi */
    esi = POP32_VAL(esp); /* 0x17179DA3: pop esi */
    ebx = POP32_VAL(esp); /* 0x17179DA4: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17179DA5: leave  */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x17179DA6: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_17179DAE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17179DAEu);

L_17179DAE:
    edi = edi; /* 0x17179DAE: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17179DB0: push ebp */
    ebp = esp; /* 0x17179DB1: mov ebp, esp */
    edx = MEM32(ebp + 0x18); /* 0x17179DB3: mov edx, dword ptr [ebp + 0x18] */
    eax = MEM32(ebp + 0xC); /* 0x17179DB6: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x17179DB9: push ebx */
    ebx = MEM32(ebp + 0x24); /* 0x17179DBA: mov ebx, dword ptr [ebp + 0x24] */
    PUSH32(esp, esi); /* 0x17179DBD: push esi */
    esi = ecx; /* 0x17179DBE: mov esi, ecx */
    ecx = MEM32(ebp + 0x10); /* 0x17179DC0: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(esi + 0x2C) = ebx; /* 0x17179DC3: mov dword ptr [esi + 0x2c], ebx */
    ebx = MEM32(ebp + 0x1C); /* 0x17179DC6: mov ebx, dword ptr [ebp + 0x1c] */
    MEM32(esi + 0x30) = ebx; /* 0x17179DC9: mov dword ptr [esi + 0x30], ebx */
    ebx = MEM32(ebp + 0x20); /* 0x17179DCC: mov ebx, dword ptr [ebp + 0x20] */
    MEM32(esi + 0x8) = ecx; /* 0x17179DCF: mov dword ptr [esi + 8], ecx */
    ecx = MEM32(ebp + 0x14); /* 0x17179DD2: mov ecx, dword ptr [ebp + 0x14] */
    MEM32(esi + 0x14) = eax; /* 0x17179DD5: mov dword ptr [esi + 0x14], eax */
    MEM32(esi + 0x34) = ebx; /* 0x17179DD8: mov dword ptr [esi + 0x34], ebx */
    ebx = ecx; /* 0x17179DDB: mov ebx, ecx */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)edx); /* 0x17179DDD: imul ebx, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17179DE0: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, edi); /* 0x17179DE1: push edi */
    edi = MEM32(ebp + 0x8); /* 0x17179DE2: mov edi, dword ptr [ebp + 8] */
    eax = (uint32_t)((int32_t)eax * (int32_t)edi); /* 0x17179DE5: imul eax, edi */
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx); /* 0x17179DE8: imul eax, ecx */
    eax = (uint32_t)((int32_t)eax * (int32_t)edx); /* 0x17179DEB: imul eax, edx */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x17179DEE: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x17179DEE: shl eax, 2 */
    PUSH32(esp, eax); /* 0x17179DF1: push eax */
    MEM32(esi + 0x10) = edi; /* 0x17179DF2: mov dword ptr [esi + 0x10], edi */
    MEM32(esi + 0x24) = ecx; /* 0x17179DF5: mov dword ptr [esi + 0x24], ecx */
    MEM32(esi + 0x28) = edx; /* 0x17179DF8: mov dword ptr [esi + 0x28], edx */
    MEM32(esi + 0xC) = ebx; /* 0x17179DFB: mov dword ptr [esi + 0xc], ebx */
    RECOMP_CALL(sub_1721B01C); /* 0x17179DFE: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x18) = eax; /* 0x17179E03: mov dword ptr [esi + 0x18], eax */
    eax = MEM32(esi + 0x14); /* 0x17179E06: mov eax, dword ptr [esi + 0x14] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esi + 0x8)); /* 0x17179E09: imul eax, dword ptr [esi + 8] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x17179E0D: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x17179E0D: shl eax, 2 */
    PUSH32(esp, eax); /* 0x17179E10: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x17179E11: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x17179E16: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x18), edi */ /* 0x17179E18: cmp dword ptr [esi + 0x18], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x18)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x17179E1B: pop ecx */
    ecx = POP32_VAL(esp); /* 0x17179E1C: pop ecx */
    MEM32(esi + 0x1C) = eax; /* 0x17179E1D: mov dword ptr [esi + 0x1c], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17179E47; /* 0x17179E20: je 0x17179e47 */
L_17179E22:
    /* cmp eax, edi */ /* 0x17179E22: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17179E47; /* 0x17179E24: je 0x17179e47 */
L_17179E26:
    /* cmp MEM32(esi + 0x10), 1 */ /* 0x17179E26: cmp dword ptr [esi + 0x10], 1 */
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi + 0x20) = edi; /* 0x17179E2A: mov dword ptr [esi + 0x20], edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17179E43; /* 0x17179E2D: je 0x17179e43 */
L_17179E2F:
    eax = MEM32(esi + 0x8); /* 0x17179E2F: mov eax, dword ptr [esi + 8] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x17179E32: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x17179E32: shl eax, 2 */
    PUSH32(esp, eax); /* 0x17179E35: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x17179E36: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* cmp eax, edi */ /* 0x17179E3B: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x17179E3D: pop ecx */
    MEM32(esi + 0x20) = eax; /* 0x17179E3E: mov dword ptr [esi + 0x20], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17179E47; /* 0x17179E41: je 0x17179e47 */
L_17179E43:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x17179E43: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_17179E70; /* 0x17179E45: jmp 0x17179e70 */
L_17179E47:
    PUSH32(esp, MEM32(esi + 0x18)); /* 0x17179E47: push dword ptr [esi + 0x18] */
    ebx = 0x8007000Eu; /* 0x17179E4A: mov ebx, 0x8007000e */
    RECOMP_CALL(sub_1721B010); /* 0x17179E4F: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x1C)); /* 0x17179E54: push dword ptr [esi + 0x1c] */
    RECOMP_CALL(sub_1721B010); /* 0x17179E57: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x20)); /* 0x17179E5C: push dword ptr [esi + 0x20] */
    RECOMP_CALL(sub_1721B010); /* 0x17179E5F: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x17179E64: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(esi + 0x18) = edi; /* 0x17179E67: mov dword ptr [esi + 0x18], edi */
    MEM32(esi + 0x1C) = edi; /* 0x17179E6A: mov dword ptr [esi + 0x1c], edi */
    MEM32(esi + 0x20) = edi; /* 0x17179E6D: mov dword ptr [esi + 0x20], edi */
L_17179E70:
    edi = POP32_VAL(esp); /* 0x17179E70: pop edi */
    esi = POP32_VAL(esp); /* 0x17179E71: pop esi */
    eax = ebx; /* 0x17179E72: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x17179E74: pop ebx */
    ebp = POP32_VAL(esp); /* 0x17179E75: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x17179E76: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_17179E7E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17179E7Eu);

L_17179E7E:
    edi = edi; /* 0x17179E7E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17179E80: push ebp */
    ebp = esp; /* 0x17179E81: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x24u; /* 0x17179E83: sub esp, 0x24 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17179E86: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x8), eax */ /* 0x17179E88: cmp dword ptr [ebp + 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x17179E8B: push esi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17179FB3; /* 0x17179E8C: je 0x17179fb3 */
L_17179E92:
    esi = MEM32(ebp + 0xC); /* 0x17179E92: mov esi, dword ptr [ebp + 0xc] */
    /* cmp esi, eax */ /* 0x17179E95: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17179FB3; /* 0x17179E97: je 0x17179fb3 */
L_17179E9D:
    PUSH32(esp, eax); /* 0x17179E9D: push eax */
    PUSH32(esp, 0x08000080u); /* 0x17179E9E: push 0x8000080 */
    PUSH32(esp, 2); /* 0x17179EA3: push 2 */
    PUSH32(esp, eax); /* 0x17179EA5: push eax */
    PUSH32(esp, eax); /* 0x17179EA6: push eax */
    PUSH32(esp, 0x40000000u); /* 0x17179EA7: push 0x40000000 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x17179EAC: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x170010F0)); /* 0x17179EAF: call dword ptr [0x170010f0] */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0xFFFFFFFFu */ /* 0x17179EB5: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x8) = eax; /* 0x17179EB8: mov dword ptr [ebp + 8], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_17179ECC; /* 0x17179EBB: jne 0x17179ecc */
L_17179EBD:
    RECOMP_CALL(sub_1717882B); /* 0x17179EBD: call 0x1717882b */
    RECOMP_FLAGS_IN();
    eax = 0x80004005u; /* 0x17179EC2: mov eax, 0x80004005 */
    goto L_17179FB8; /* 0x17179EC7: jmp 0x17179fb8 */
L_17179ECC:
    eax = MEM32(esi); /* 0x17179ECC: mov eax, dword ptr [esi] */
    PUSH32(esp, ebx); /* 0x17179ECE: push ebx */
    PUSH32(esp, edi); /* 0x17179ECF: push edi */
    PUSH32(esp, esi); /* 0x17179ED0: push esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x17179ED1: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x24)) = eax; /* 0x17179ED4: mov dword ptr [ebp - 0x24], eax */
    eax = MEM32(esi); /* 0x17179ED7: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x17179ED9: push esi */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x17179EDA: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x20)) = eax; /* 0x17179EDD: mov dword ptr [ebp - 0x20], eax */
    eax = MEM32(esi); /* 0x17179EE0: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x17179EE2: push esi */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x17179EE3: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x1C)) = eax; /* 0x17179EE6: mov dword ptr [ebp - 0x1c], eax */
    eax = MEM32(esi); /* 0x17179EE9: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x17179EEB: push esi */
    RECOMP_ICALL(MEM32(eax + 0x1C)); /* 0x17179EEC: call dword ptr [eax + 0x1c] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x18)) = eax; /* 0x17179EEF: mov dword ptr [ebp - 0x18], eax */
    eax = MEM32(esi); /* 0x17179EF2: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x17179EF4: push esi */
    RECOMP_ICALL(MEM32(eax + 0x20)); /* 0x17179EF5: call dword ptr [eax + 0x20] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x14)) = eax; /* 0x17179EF8: mov dword ptr [ebp - 0x14], eax */
    eax = MEM32(esi); /* 0x17179EFB: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x17179EFD: push esi */
    RECOMP_ICALL(MEM32(eax + 0x18)); /* 0x17179EFE: call dword ptr [eax + 0x18] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x10)) = eax; /* 0x17179F01: mov dword ptr [ebp - 0x10], eax */
    eax = MEM32(esi); /* 0x17179F04: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x17179F06: push esi */
    RECOMP_ICALL(MEM32(eax + 0x24)); /* 0x17179F07: call dword ptr [eax + 0x24] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0xC)) = eax; /* 0x17179F0A: mov dword ptr [ebp - 0xc], eax */
    eax = MEM32(esi); /* 0x17179F0D: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x17179F0F: push esi */
    RECOMP_ICALL(MEM32(eax + 0x28)); /* 0x17179F10: call dword ptr [eax + 0x28] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x8)) = eax; /* 0x17179F13: mov dword ptr [ebp - 8], eax */
    eax = MEM32(esi); /* 0x17179F16: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x17179F18: push esi */
    RECOMP_ICALL(MEM32(eax + 0x28)); /* 0x17179F19: call dword ptr [eax + 0x28] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x17179F1C: mov edi, eax */
    eax = MEM32(esi); /* 0x17179F1E: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x17179F20: push esi */
    RECOMP_ICALL(MEM32(eax + 0x24)); /* 0x17179F21: call dword ptr [eax + 0x24] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + 0xC) = eax; /* 0x17179F24: mov dword ptr [ebp + 0xc], eax */
    PUSH32(esp, 0x20u); /* 0x17179F27: push 0x20 */
    eax = ebp + (-0x24); /* 0x17179F29: lea eax, [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x17179F2C: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x17179F2D: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_17178866); /* 0x17179F30: call 0x17178866 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x17179F35: mov ebx, eax */
    /* test ebx, ebx */ /* 0x17179F37: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17179FA4; /* 0x17179F39: jl 0x17179fa4 */
L_17179F3B:
    ecx = MEM32(esi + 0x1C); /* 0x17179F3B: mov ecx, dword ptr [esi + 0x1c] */
    MEM32(ebp + (-0x4)) = ecx; /* 0x17179F3E: mov dword ptr [ebp - 4], ecx */
    ecx = edi + 0x1; /* 0x17179F41: lea ecx, [edi + 1] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + 0xC)); /* 0x17179F44: imul ecx, dword ptr [ebp + 0xc] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + (-0x1C))); /* 0x17179F48: imul ecx, dword ptr [ebp - 0x1c] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + (-0x20))); /* 0x17179F4C: imul ecx, dword ptr [ebp - 0x20] */
    eax = MEM32(esi + 0x18); /* 0x17179F50: mov eax, dword ptr [esi + 0x18] */
    esi = MEM32(esi + 0x20); /* 0x17179F53: mov esi, dword ptr [esi + 0x20] */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x17179F56: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x17179F56: shl ecx, 2 */
    PUSH32(esp, ecx); /* 0x17179F59: push ecx */
    PUSH32(esp, eax); /* 0x17179F5A: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x17179F5B: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_17178866); /* 0x17179F5E: call 0x17178866 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x17179F63: mov ebx, eax */
    /* test ebx, ebx */ /* 0x17179F65: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17179FA4; /* 0x17179F67: jl 0x17179fa4 */
L_17179F69:
    edi = (uint32_t)((int32_t)edi * (int32_t)MEM32(ebp + (-0x24))); /* 0x17179F69: imul edi, dword ptr [ebp - 0x24] */
    if (2u) _cf = (((edi) >> 30) & 1u); /* 0x17179F6D: shl edi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edi << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 2u; /* 0x17179F6D: shl edi, 2 */
    PUSH32(esp, edi); /* 0x17179F70: push edi */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x17179F71: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x17179F74: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_17178866); /* 0x17179F77: call 0x17178866 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x17179F7C: mov ebx, eax */
    /* test ebx, ebx */ /* 0x17179F7E: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17179FA4; /* 0x17179F80: jl 0x17179fa4 */
L_17179F82:
    /* test esi, esi */ /* 0x17179F82: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17179FA2; /* 0x17179F84: je 0x17179fa2 */
L_17179F86:
    /* cmp MEM32(ebp + (-0xC)), 1 */ /* 0x17179F86: cmp dword ptr [ebp - 0xc], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17179FA2; /* 0x17179F8A: je 0x17179fa2 */
L_17179F8C:
    eax = MEM32(ebp + (-0x24)); /* 0x17179F8C: mov eax, dword ptr [ebp - 0x24] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x17179F8F: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x17179F8F: shl eax, 2 */
    PUSH32(esp, eax); /* 0x17179F92: push eax */
    PUSH32(esp, esi); /* 0x17179F93: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x17179F94: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_17178866); /* 0x17179F97: call 0x17178866 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x17179F9C: mov ebx, eax */
    /* test ebx, ebx */ /* 0x17179F9E: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17179FA4; /* 0x17179FA0: jl 0x17179fa4 */
L_17179FA2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x17179FA2: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_17179FA4:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x17179FA4: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x170010F8)); /* 0x17179FA7: call dword ptr [0x170010f8] */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x17179FAD: pop edi */
    eax = ebx; /* 0x17179FAE: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x17179FB0: pop ebx */
    goto L_17179FB8; /* 0x17179FB1: jmp 0x17179fb8 */
L_17179FB3:
    eax = 0x8876086Cu; /* 0x17179FB3: mov eax, 0x8876086c */
L_17179FB8:
    esi = POP32_VAL(esp); /* 0x17179FB8: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17179FB9: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x17179FBA: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_17179FC2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17179FC2u);

L_17179FC2:
    edi = edi; /* 0x17179FC2: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17179FC4: push ebp */
    ebp = esp; /* 0x17179FC5: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x24u; /* 0x17179FC7: sub esp, 0x24 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17179FCA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x8), eax */ /* 0x17179FCC: cmp dword ptr [ebp + 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x17179FCF: push esi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1717A0F7; /* 0x17179FD0: je 0x1717a0f7 */
L_17179FD6:
    esi = MEM32(ebp + 0xC); /* 0x17179FD6: mov esi, dword ptr [ebp + 0xc] */
    /* cmp esi, eax */ /* 0x17179FD9: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1717A0F7; /* 0x17179FDB: je 0x1717a0f7 */
L_17179FE1:
    PUSH32(esp, eax); /* 0x17179FE1: push eax */
    PUSH32(esp, 0x08000080u); /* 0x17179FE2: push 0x8000080 */
    PUSH32(esp, 2); /* 0x17179FE7: push 2 */
    PUSH32(esp, eax); /* 0x17179FE9: push eax */
    PUSH32(esp, eax); /* 0x17179FEA: push eax */
    PUSH32(esp, 0x40000000u); /* 0x17179FEB: push 0x40000000 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x17179FF0: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x170010AC)); /* 0x17179FF3: call dword ptr [0x170010ac] */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0xFFFFFFFFu */ /* 0x17179FF9: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x8) = eax; /* 0x17179FFC: mov dword ptr [ebp + 8], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1717A010; /* 0x17179FFF: jne 0x1717a010 */
L_1717A001:
    RECOMP_CALL(sub_1717882B); /* 0x1717A001: call 0x1717882b */
    RECOMP_FLAGS_IN();
    eax = 0x80004005u; /* 0x1717A006: mov eax, 0x80004005 */
    goto L_1717A0FC; /* 0x1717A00B: jmp 0x1717a0fc */
L_1717A010:
    eax = MEM32(esi); /* 0x1717A010: mov eax, dword ptr [esi] */
    PUSH32(esp, ebx); /* 0x1717A012: push ebx */
    PUSH32(esp, edi); /* 0x1717A013: push edi */
    PUSH32(esp, esi); /* 0x1717A014: push esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x1717A015: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x24)) = eax; /* 0x1717A018: mov dword ptr [ebp - 0x24], eax */
    eax = MEM32(esi); /* 0x1717A01B: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x1717A01D: push esi */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x1717A01E: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x20)) = eax; /* 0x1717A021: mov dword ptr [ebp - 0x20], eax */
    eax = MEM32(esi); /* 0x1717A024: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x1717A026: push esi */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x1717A027: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x1C)) = eax; /* 0x1717A02A: mov dword ptr [ebp - 0x1c], eax */
    eax = MEM32(esi); /* 0x1717A02D: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x1717A02F: push esi */
    RECOMP_ICALL(MEM32(eax + 0x1C)); /* 0x1717A030: call dword ptr [eax + 0x1c] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x18)) = eax; /* 0x1717A033: mov dword ptr [ebp - 0x18], eax */
    eax = MEM32(esi); /* 0x1717A036: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x1717A038: push esi */
    RECOMP_ICALL(MEM32(eax + 0x20)); /* 0x1717A039: call dword ptr [eax + 0x20] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x14)) = eax; /* 0x1717A03C: mov dword ptr [ebp - 0x14], eax */
    eax = MEM32(esi); /* 0x1717A03F: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x1717A041: push esi */
    RECOMP_ICALL(MEM32(eax + 0x18)); /* 0x1717A042: call dword ptr [eax + 0x18] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x10)) = eax; /* 0x1717A045: mov dword ptr [ebp - 0x10], eax */
    eax = MEM32(esi); /* 0x1717A048: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x1717A04A: push esi */
    RECOMP_ICALL(MEM32(eax + 0x24)); /* 0x1717A04B: call dword ptr [eax + 0x24] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0xC)) = eax; /* 0x1717A04E: mov dword ptr [ebp - 0xc], eax */
    eax = MEM32(esi); /* 0x1717A051: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x1717A053: push esi */
    RECOMP_ICALL(MEM32(eax + 0x28)); /* 0x1717A054: call dword ptr [eax + 0x28] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x8)) = eax; /* 0x1717A057: mov dword ptr [ebp - 8], eax */
    eax = MEM32(esi); /* 0x1717A05A: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x1717A05C: push esi */
    RECOMP_ICALL(MEM32(eax + 0x28)); /* 0x1717A05D: call dword ptr [eax + 0x28] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1717A060: mov edi, eax */
    eax = MEM32(esi); /* 0x1717A062: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x1717A064: push esi */
    RECOMP_ICALL(MEM32(eax + 0x24)); /* 0x1717A065: call dword ptr [eax + 0x24] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + 0xC) = eax; /* 0x1717A068: mov dword ptr [ebp + 0xc], eax */
    PUSH32(esp, 0x20u); /* 0x1717A06B: push 0x20 */
    eax = ebp + (-0x24); /* 0x1717A06D: lea eax, [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x1717A070: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1717A071: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_17178866); /* 0x1717A074: call 0x17178866 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1717A079: mov ebx, eax */
    /* test ebx, ebx */ /* 0x1717A07B: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1717A0E8; /* 0x1717A07D: jl 0x1717a0e8 */
L_1717A07F:
    ecx = MEM32(esi + 0x1C); /* 0x1717A07F: mov ecx, dword ptr [esi + 0x1c] */
    MEM32(ebp + (-0x4)) = ecx; /* 0x1717A082: mov dword ptr [ebp - 4], ecx */
    ecx = edi + 0x1; /* 0x1717A085: lea ecx, [edi + 1] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + 0xC)); /* 0x1717A088: imul ecx, dword ptr [ebp + 0xc] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + (-0x1C))); /* 0x1717A08C: imul ecx, dword ptr [ebp - 0x1c] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + (-0x20))); /* 0x1717A090: imul ecx, dword ptr [ebp - 0x20] */
    eax = MEM32(esi + 0x18); /* 0x1717A094: mov eax, dword ptr [esi + 0x18] */
    esi = MEM32(esi + 0x20); /* 0x1717A097: mov esi, dword ptr [esi + 0x20] */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x1717A09A: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x1717A09A: shl ecx, 2 */
    PUSH32(esp, ecx); /* 0x1717A09D: push ecx */
    PUSH32(esp, eax); /* 0x1717A09E: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1717A09F: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_17178866); /* 0x1717A0A2: call 0x17178866 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1717A0A7: mov ebx, eax */
    /* test ebx, ebx */ /* 0x1717A0A9: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1717A0E8; /* 0x1717A0AB: jl 0x1717a0e8 */
L_1717A0AD:
    edi = (uint32_t)((int32_t)edi * (int32_t)MEM32(ebp + (-0x24))); /* 0x1717A0AD: imul edi, dword ptr [ebp - 0x24] */
    if (2u) _cf = (((edi) >> 30) & 1u); /* 0x1717A0B1: shl edi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edi << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 2u; /* 0x1717A0B1: shl edi, 2 */
    PUSH32(esp, edi); /* 0x1717A0B4: push edi */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1717A0B5: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1717A0B8: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_17178866); /* 0x1717A0BB: call 0x17178866 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1717A0C0: mov ebx, eax */
    /* test ebx, ebx */ /* 0x1717A0C2: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1717A0E8; /* 0x1717A0C4: jl 0x1717a0e8 */
L_1717A0C6:
    /* test esi, esi */ /* 0x1717A0C6: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1717A0E6; /* 0x1717A0C8: je 0x1717a0e6 */
L_1717A0CA:
    /* cmp MEM32(ebp + (-0xC)), 1 */ /* 0x1717A0CA: cmp dword ptr [ebp - 0xc], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1717A0E6; /* 0x1717A0CE: je 0x1717a0e6 */
L_1717A0D0:
    eax = MEM32(ebp + (-0x24)); /* 0x1717A0D0: mov eax, dword ptr [ebp - 0x24] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1717A0D3: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1717A0D3: shl eax, 2 */
    PUSH32(esp, eax); /* 0x1717A0D6: push eax */
    PUSH32(esp, esi); /* 0x1717A0D7: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1717A0D8: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_17178866); /* 0x1717A0DB: call 0x17178866 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1717A0E0: mov ebx, eax */
    /* test ebx, ebx */ /* 0x1717A0E2: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1717A0E8; /* 0x1717A0E4: jl 0x1717a0e8 */
L_1717A0E6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1717A0E6: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1717A0E8:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1717A0E8: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x170010F8)); /* 0x1717A0EB: call dword ptr [0x170010f8] */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x1717A0F1: pop edi */
    eax = ebx; /* 0x1717A0F2: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x1717A0F4: pop ebx */
    goto L_1717A0FC; /* 0x1717A0F5: jmp 0x1717a0fc */
L_1717A0F7:
    eax = 0x8876086Cu; /* 0x1717A0F7: mov eax, 0x8876086c */
L_1717A0FC:
    esi = POP32_VAL(esp); /* 0x1717A0FC: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1717A0FD: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1717A0FE: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1717A106(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1717A106u);

L_1717A106:
    edi = edi; /* 0x1717A106: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1717A108: push ebp */
    ebp = esp; /* 0x1717A109: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1717A10B: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x2C); /* 0x1717A10E: mov eax, dword ptr [eax + 0x2c] */
    ebp = POP32_VAL(esp); /* 0x1717A111: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1717A112: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1717A11A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1717A11Au);

L_1717A11A:
    edi = edi; /* 0x1717A11A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1717A11C: push ebp */
    ebp = esp; /* 0x1717A11D: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1717A11F: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x30); /* 0x1717A122: mov eax, dword ptr [eax + 0x30] */
    ebp = POP32_VAL(esp); /* 0x1717A125: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1717A126: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1717A12E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1717A12Eu);

L_1717A12E:
    edi = edi; /* 0x1717A12E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1717A130: push ebp */
    ebp = esp; /* 0x1717A131: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1717A133: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x34); /* 0x1717A136: mov eax, dword ptr [eax + 0x34] */
    ebp = POP32_VAL(esp); /* 0x1717A139: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1717A13A: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1717A142(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1717A142u);

L_1717A142:
    edi = edi; /* 0x1717A142: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1717A144: push ebp */
    ebp = esp; /* 0x1717A145: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1717A147: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x14); /* 0x1717A14A: mov eax, dword ptr [eax + 0x14] */
    ebp = POP32_VAL(esp); /* 0x1717A14D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1717A14E: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1717A156(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1717A156u);

L_1717A156:
    edi = edi; /* 0x1717A156: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1717A158: push ebp */
    ebp = esp; /* 0x1717A159: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1717A15B: push esi */
    esi = ecx; /* 0x1717A15C: mov esi, ecx */
    RECOMP_CALL(sub_17179AFB); /* 0x1717A15E: call 0x17179afb */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1717A163: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1717A170; /* 0x1717A167: je 0x1717a170 */
L_1717A169:
    PUSH32(esp, esi); /* 0x1717A169: push esi */
    RECOMP_CALL(sub_1721B010); /* 0x1717A16A: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1717A16F: pop ecx */
L_1717A170:
    eax = esi; /* 0x1717A170: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1717A172: pop esi */
    ebp = POP32_VAL(esp); /* 0x1717A173: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1717A174: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1717A17C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1717A17Cu);

L_1717A17C:
    edi = edi; /* 0x1717A17C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1717A17E: push ebp */
    ebp = esp; /* 0x1717A17F: mov ebp, esp */
    eax = MEM32(ebp + 0x10); /* 0x1717A181: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x1717A184: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1717A187: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1717A188: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1717A18B: push edi */
    PUSH32(esp, 4); /* 0x1717A18C: push 4 */
    ecx = POP32_VAL(esp); /* 0x1717A18E: pop ecx */
    edi = 0x1702AA2Cu; /* 0x1717A18F: mov edi, 0x1702aa2c */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1717A194: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x1717A196: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_1717A1AB; /* 0x1717A198: je 0x1717a1ab */
L_1717A19A:
    esi = MEM32(ebp + 0xC); /* 0x1717A19A: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, 4); /* 0x1717A19D: push 4 */
    ecx = POP32_VAL(esp); /* 0x1717A19F: pop ecx */
    edi = 0x17001B60u; /* 0x1717A1A0: mov edi, 0x17001b60 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1717A1A5: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x1717A1A7: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_1717A1BA; /* 0x1717A1A9: jne 0x1717a1ba */
L_1717A1AB:
    ecx = MEM32(ebp + 0x8); /* 0x1717A1AB: mov ecx, dword ptr [ebp + 8] */
    MEM32(eax) = ecx; /* 0x1717A1AE: mov dword ptr [eax], ecx */
    eax = MEM32(ecx); /* 0x1717A1B0: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x1717A1B2: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1717A1B3: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1717A1B6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1717A1BF; /* 0x1717A1B8: jmp 0x1717a1bf */
L_1717A1BA:
    eax = 0x80004002u; /* 0x1717A1BA: mov eax, 0x80004002 */
L_1717A1BF:
    edi = POP32_VAL(esp); /* 0x1717A1BF: pop edi */
    esi = POP32_VAL(esp); /* 0x1717A1C0: pop esi */
    ebp = POP32_VAL(esp); /* 0x1717A1C1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1717A1C2: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1717A1CA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1717A1CAu);

L_1717A1CA:
    edi = edi; /* 0x1717A1CA: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1717A1CC: push ebp */
    ebp = esp; /* 0x1717A1CD: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x1717A1CF: sub esp, 0x1c */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x8); /* 0x1717A1D2: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax + 0x18); /* 0x1717A1D5: mov ecx, dword ptr [eax + 0x18] */
    edx = MEM32(eax + 0x1C); /* 0x1717A1D8: mov edx, dword ptr [eax + 0x1c] */
    MEM32(ebp + (-0x1C)) = ecx; /* 0x1717A1DB: mov dword ptr [ebp - 0x1c], ecx */
    ecx = MEM32(eax + 0x8); /* 0x1717A1DE: mov ecx, dword ptr [eax + 8] */
    PUSH32(esp, esi); /* 0x1717A1E1: push esi */
    esi = MEM32(eax + 0x10); /* 0x1717A1E2: mov esi, dword ptr [eax + 0x10] */
    PUSH32(esp, edi); /* 0x1717A1E5: push edi */
    edi = MEM32(eax + 0xC); /* 0x1717A1E6: mov edi, dword ptr [eax + 0xc] */
    MEM32(ebp + (-0xC)) = ecx; /* 0x1717A1E9: mov dword ptr [ebp - 0xc], ecx */
    ecx = MEM32(eax + 0x14); /* 0x1717A1EC: mov ecx, dword ptr [eax + 0x14] */
    /* cmp ecx, edi */ /* 0x1717A1EF: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x18)) = esi; /* 0x1717A1F1: mov dword ptr [ebp - 0x18], esi */
    if (CMP_A(_flag_a, _flag_b)) goto L_1717A2E9; /* 0x1717A1F4: ja 0x1717a2e9 */
L_1717A1FA:
    /* test esi, esi */ /* 0x1717A1FA: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1717A2E9; /* 0x1717A1FC: je 0x1717a2e9 */
L_1717A202:
    /* test edi, edi */ /* 0x1717A202: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1717A2E9; /* 0x1717A204: je 0x1717a2e9 */
L_1717A20A:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x1717A20A: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x1717A20E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1717A2E5; /* 0x1717A210: jbe 0x1717a2e5 */
L_1717A216:
    PUSH32(esp, ebx); /* 0x1717A216: push ebx */
    ebx = ecx; /* 0x1717A217: mov ebx, ecx */
    if (2u) _cf = (((ebx) >> 30) & 1u); /* 0x1717A219: shl ebx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ebx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 2u; /* 0x1717A219: shl ebx, 2 */
    eax = ebx + edx; /* 0x1717A21C: lea eax, [ebx + edx] */
    MEM32(ebp + (-0x4)) = edx; /* 0x1717A21F: mov dword ptr [ebp - 4], edx */
    MEM32(ebp + (-0x10)) = eax; /* 0x1717A222: mov dword ptr [ebp - 0x10], eax */
L_1717A225:
    /* cmp MEM32(ebp + (-0xC)), 1 */ /* 0x1717A225: cmp dword ptr [ebp - 0xc], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x4)); /* 0x1717A229: mov eax, dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(eax)); /* 0x1717A22C: fld dword ptr [eax] */
    _st[0] = fabs(_st[0]); /* 0x1717A22E: fabs  */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x1717A230: fst dword ptr [ebp - 0x14] */
    if (CMP_BE(_flag_a, _flag_b)) goto L_1717A269; /* 0x1717A233: jbe 0x1717a269 */
L_1717A235:
    edx = MEM32(ebp + (-0xC)); /* 0x1717A235: mov edx, dword ptr [ebp - 0xc] */
    esi = MEM32(ebp + (-0x10)); /* 0x1717A238: mov esi, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1717A23B: dec edx */
    _flag_k = FK_DEC;
L_1717A23C:
    fp_push(*(float*)&MEM32(esi)); /* 0x1717A23C: fld dword ptr [esi] */
    _st[0] = fabs(_st[0]); /* 0x1717A23E: fabs  */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + 0x8) = _v; } /* 0x1717A240: fst dword ptr [ebp + 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1717A243: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1717A245: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1717A247: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1717A251; /* 0x1717A24A: jne 0x1717a251 */
L_1717A24C:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1717A24C: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x1717A24E: fld dword ptr [ebp + 8] */
L_1717A251:
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x1717A251: fld dword ptr [ebp + 8] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + (-0x14))); /* 0x1717A254: fcomp dword ptr [ebp - 0x14] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1717A257: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1717A259: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1717A264; /* 0x1717A25C: jp 0x1717a264 */
L_1717A25E:
    eax = MEM32(ebp + 0x8); /* 0x1717A25E: mov eax, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x14)) = eax; /* 0x1717A261: mov dword ptr [ebp - 0x14], eax */
L_1717A264:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ebx; /* 0x1717A264: add esi, ebx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1717A266: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1717A23C; /* 0x1717A267: jne 0x1717a23c */
L_1717A269:
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(0x17005A98)); /* 0x1717A269: fcom dword ptr [0x17005a98] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1717A26F: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1717A271: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1717A27E; /* 0x1717A274: jp 0x1717a27e */
L_1717A276:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1717A276: fstp st(0) */
    fp_push(*(float*)&MEM32(0x1700141C)); /* 0x1717A278: fld dword ptr [0x1700141c] */
L_1717A27E:
    edx = MEM32(ebp + (-0xC)); /* 0x1717A27E: mov edx, dword ptr [ebp - 0xc] */
    fp_push(1.0); /* 0x1717A281: fld1  */
    /* test edx, edx */ /* 0x1717A283: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    _st[0] /= _st[1]; /* 0x1717A285: fdiv st(1) */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1717A297; /* 0x1717A287: jbe 0x1717a297 */
L_1717A289:
    eax = MEM32(ebp + (-0x4)); /* 0x1717A289: mov eax, dword ptr [ebp - 4] */
L_1717A28C:
    fp_push(_st[0]); /* 0x1717A28C: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x1717A28E: fmul dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x1717A290: fstp dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x1717A292: add eax, ebx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1717A294: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1717A28C; /* 0x1717A295: jne 0x1717a28c */
L_1717A297:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1717A297: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1717A299: fstp st(0) */
    /* cmp MEM32(ebp + (-0x18)), esi */ /* 0x1717A29B: cmp dword ptr [ebp - 0x18], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1717A2CE; /* 0x1717A29E: jbe 0x1717a2ce */
L_1717A2A0:
    /* test edi, edi */ /* 0x1717A2A0: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1717A2C8; /* 0x1717A2A2: jbe 0x1717a2c8 */
L_1717A2A4:
    edx = MEM32(ebp + (-0x8)); /* 0x1717A2A4: mov edx, dword ptr [ebp - 8] */
    eax = ecx + 0x1; /* 0x1717A2A7: lea eax, [ecx + 1] */
    eax = (uint32_t)((int32_t)eax * (int32_t)esi); /* 0x1717A2AA: imul eax, esi */
    eax = eax + edx + 0x1; /* 0x1717A2AD: lea eax, [eax + edx + 1] */
    edx = MEM32(ebp + (-0x1C)); /* 0x1717A2B1: mov edx, dword ptr [ebp - 0x1c] */
    eax = (uint32_t)((int32_t)eax * (int32_t)edi); /* 0x1717A2B4: imul eax, edi */
    eax = edx + eax * 4; /* 0x1717A2B7: lea eax, [edx + eax*4] */
    edx = edi; /* 0x1717A2BA: mov edx, edi */
L_1717A2BC:
    fp_push(_st[0]); /* 0x1717A2BC: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x1717A2BE: fmul dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x1717A2C0: fstp dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1717A2C2: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1717A2C5: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1717A2BC; /* 0x1717A2C6: jne 0x1717a2bc */
L_1717A2C8:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1717A2C8: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(ebp + (-0x18)) */ /* 0x1717A2C9: cmp esi, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x18)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1717A2A0; /* 0x1717A2CC: jb 0x1717a2a0 */
L_1717A2CE:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) + 1; /* 0x1717A2CE: inc dword ptr [ebp - 8] */
    _flag_k = FK_INC;
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1717A2D1: fstp st(0) */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) + 4; /* 0x1717A2D3: add dword ptr [ebp - 0x10], 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 4; /* 0x1717A2D7: add dword ptr [ebp - 4], 4 */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + (-0x8)), ecx */ /* 0x1717A2DB: cmp dword ptr [ebp - 8], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1717A225; /* 0x1717A2DE: jb 0x1717a225 */
L_1717A2E4:
    ebx = POP32_VAL(esp); /* 0x1717A2E4: pop ebx */
L_1717A2E5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1717A2E5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1717A2EE; /* 0x1717A2E7: jmp 0x1717a2ee */
L_1717A2E9:
    eax = 0x8876086Cu; /* 0x1717A2E9: mov eax, 0x8876086c */
L_1717A2EE:
    edi = POP32_VAL(esp); /* 0x1717A2EE: pop edi */
    esi = POP32_VAL(esp); /* 0x1717A2EF: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1717A2F0: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1717A2F1: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1717A2F9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1717A2F9u);

L_1717A2F9:
    eax = 0x1721C080u; /* 0x1717A2F9: mov eax, 0x1721c080 */
    RECOMP_CALL(sub_1721B168); /* 0x1717A2FE: call 0x1721b168 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCCu; /* 0x1717A303: sub esp, 0xcc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1717A309: push ebx */
    PUSH32(esp, esi); /* 0x1717A30A: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1717A30B: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(esi + 0x1C); /* 0x1717A30E: mov eax, dword ptr [esi + 0x1c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1717A311: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1717A313: push edi */
    ecx = ebp + (-0x64); /* 0x1717A314: lea ecx, [ebp - 0x64] */
    MEM32(ebp + (-0x10)) = eax; /* 0x1717A317: mov dword ptr [ebp - 0x10], eax */
    MEM32(ebp + (-0x30)) = ebx; /* 0x1717A31A: mov dword ptr [ebp - 0x30], ebx */
    MEM32(ebp + (-0x18)) = ebx; /* 0x1717A31D: mov dword ptr [ebp - 0x18], ebx */
    RECOMP_CALL(sub_170D7623); /* 0x1717A320: call 0x170d7623 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x14); /* 0x1717A325: mov edi, dword ptr [ebp + 0x14] */
    /* cmp edi, ebx */ /* 0x1717A328: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = ebx; /* 0x1717A32A: mov dword ptr [ebp - 4], ebx */
    MEM32(ebp + (-0x14)) = ebx; /* 0x1717A32D: mov dword ptr [ebp - 0x14], ebx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1717A518; /* 0x1717A330: je 0x1717a518 */
L_1717A336:
    /* cmp MEM32(esi + 0x2C), ebx */ /* 0x1717A336: cmp dword ptr [esi + 0x2c], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x2C)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1717A518; /* 0x1717A339: je 0x1717a518 */
L_1717A33F:
    edx = MEM32(esi + 0x14); /* 0x1717A33F: mov edx, dword ptr [esi + 0x14] */
    eax = MEM32(esi + 0xC); /* 0x1717A342: mov eax, dword ptr [esi + 0xc] */
    /* cmp edx, eax */ /* 0x1717A345: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(esi + 0x10); /* 0x1717A347: mov ecx, dword ptr [esi + 0x10] */
    MEM32(ebp + (-0x28)) = edx; /* 0x1717A34A: mov dword ptr [ebp - 0x28], edx */
    if (CMP_A(_flag_a, _flag_b)) goto L_1717A518; /* 0x1717A34D: ja 0x1717a518 */
L_1717A353:
    /* cmp ecx, ebx */ /* 0x1717A353: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1717A518; /* 0x1717A355: je 0x1717a518 */
L_1717A35B:
    /* cmp eax, ebx */ /* 0x1717A35B: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1717A518; /* 0x1717A35D: je 0x1717a518 */
L_1717A363:
    eax = MEM32(ebp + 0xC); /* 0x1717A363: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x10); /* 0x1717A366: mov ecx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1717A369: add eax, ecx */
    _flag_k = FK_ADD;
    /* cmp edx, eax */ /* 0x1717A36B: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1717A518; /* 0x1717A36D: jb 0x1717a518 */
L_1717A373:
    eax = MEM32(edi); /* 0x1717A373: mov eax, dword ptr [edi] */
    ecx = ebp + (-0x84); /* 0x1717A375: lea ecx, [ebp - 0x84] */
    PUSH32(esp, ecx); /* 0x1717A37B: push ecx */
    PUSH32(esp, ebx); /* 0x1717A37C: push ebx */
    PUSH32(esp, edi); /* 0x1717A37D: push edi */
    RECOMP_ICALL(MEM32(eax + 0x44)); /* 0x1717A37E: call dword ptr [eax + 0x44] */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x1717A381: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1717A38C; /* 0x1717A383: jge 0x1717a38c */
L_1717A385:
    esi = eax; /* 0x1717A385: mov esi, eax */
    goto L_1717A51D; /* 0x1717A387: jmp 0x1717a51d */
L_1717A38C:
    eax = MEM32(ebp + (-0x68)); /* 0x1717A38C: mov eax, dword ptr [ebp - 0x68] */
    /* cmp eax, MEM32(esi + 0x34) */ /* 0x1717A38F: cmp eax, dword ptr [esi + 0x34] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x34));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + (-0x6C)); /* 0x1717A392: mov ecx, dword ptr [ebp - 0x6c] */
    MEM32(ebp + (-0x20)) = eax; /* 0x1717A395: mov dword ptr [ebp - 0x20], eax */
    MEM32(ebp + (-0x24)) = ecx; /* 0x1717A398: mov dword ptr [ebp - 0x24], ecx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1717A518; /* 0x1717A39B: jne 0x1717a518 */
L_1717A3A1:
    /* cmp ecx, MEM32(esi + 0x30) */ /* 0x1717A3A1: cmp ecx, dword ptr [esi + 0x30] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x30));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1717A518; /* 0x1717A3A4: jne 0x1717a518 */
L_1717A3AA:
    eax = MEM32(edi); /* 0x1717A3AA: mov eax, dword ptr [edi] */
    ecx = ebp + (-0x14); /* 0x1717A3AC: lea ecx, [ebp - 0x14] */
    PUSH32(esp, ecx); /* 0x1717A3AF: push ecx */
    PUSH32(esp, ebx); /* 0x1717A3B0: push ebx */
    PUSH32(esp, edi); /* 0x1717A3B1: push edi */
    RECOMP_ICALL(MEM32(eax + 0x48)); /* 0x1717A3B2: call dword ptr [eax + 0x48] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1717A3B5: mov esi, eax */
    /* cmp esi, ebx */ /* 0x1717A3B7: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1717A4F0; /* 0x1717A3B9: jl 0x1717a4f0 */
L_1717A3BF:
    PUSH32(esp, 0x00020000u); /* 0x1717A3BF: push 0x20000 */
    PUSH32(esp, ebx); /* 0x1717A3C4: push ebx */
    PUSH32(esp, ebx); /* 0x1717A3C5: push ebx */
    PUSH32(esp, ebx); /* 0x1717A3C6: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x1717A3C7: push dword ptr [ebp - 0x14] */
    eax = ebp + (-0xD8); /* 0x1717A3CA: lea eax, [ebp - 0xd8] */
    PUSH32(esp, eax); /* 0x1717A3D0: push eax */
    ecx = ebp + (-0x64); /* 0x1717A3D1: lea ecx, [ebp - 0x64] */
    RECOMP_CALL(sub_170D7815); /* 0x1717A3D4: call 0x170d7815 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1717A3D9: mov esi, eax */
    /* cmp esi, ebx */ /* 0x1717A3DB: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1717A4F0; /* 0x1717A3DD: jl 0x1717a4f0 */
L_1717A3E3:
    eax = ebp + (-0xD8); /* 0x1717A3E3: lea eax, [ebp - 0xd8] */
    PUSH32(esp, eax); /* 0x1717A3E9: push eax */
    RECOMP_CALL(sub_170CE38C); /* 0x1717A3EA: call 0x170ce38c */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1717A3EF: mov edi, eax */
    /* cmp edi, ebx */ /* 0x1717A3F1: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x18)) = edi; /* 0x1717A3F3: mov dword ptr [ebp - 0x18], edi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1717A402; /* 0x1717A3F6: jne 0x1717a402 */
L_1717A3F8:
    esi = 0x8876086Cu; /* 0x1717A3F8: mov esi, 0x8876086c */
    goto L_1717A4F0; /* 0x1717A3FD: jmp 0x1717a4f0 */
L_1717A402:
    eax = MEM32(ebp + (-0x6C)); /* 0x1717A402: mov eax, dword ptr [ebp - 0x6c] */
    ebx = eax; /* 0x1717A405: mov ebx, eax */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x1717A407: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x1717A407: shl eax, 4 */
    PUSH32(esp, eax); /* 0x1717A40A: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1717A40B: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1717A410: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x1717A412: pop ecx */
    MEM32(ebp + 0x8) = esi; /* 0x1717A413: mov dword ptr [ebp + 8], esi */
    /* test esi, esi */ /* 0x1717A416: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x1717A418: mov byte ptr [ebp - 4], 1 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1717A431; /* 0x1717A41C: je 0x1717a431 */
L_1717A41E:
    PUSH32(esp, 0x1706E47Eu); /* 0x1717A41E: push 0x1706e47e */
    PUSH32(esp, ebx); /* 0x1717A423: push ebx */
    PUSH32(esp, 0x10u); /* 0x1717A424: push 0x10 */
    PUSH32(esp, esi); /* 0x1717A426: push esi */
    RECOMP_CALL(sub_1702C116); /* 0x1717A427: call 0x1702c116 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x1C)) = esi; /* 0x1717A42C: mov dword ptr [ebp - 0x1c], esi */
    goto L_1717A435; /* 0x1717A42F: jmp 0x1717a435 */
L_1717A431:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) & 0; /* 0x1717A431: and dword ptr [ebp - 0x1c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1717A435:
    esi = MEM32(ebp + (-0x1C)); /* 0x1717A435: mov esi, dword ptr [ebp - 0x1c] */
    /* test esi, esi */ /* 0x1717A438: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x1717A43A: mov byte ptr [ebp - 4], 0 */
    MEM32(ebp + (-0x30)) = esi; /* 0x1717A43E: mov dword ptr [ebp - 0x30], esi */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1717A44D; /* 0x1717A441: jne 0x1717a44d */
L_1717A443:
    esi = 0x8007000Eu; /* 0x1717A443: mov esi, 0x8007000e */
    goto L_1717A4EE; /* 0x1717A448: jmp 0x1717a4ee */
L_1717A44D:
    ecx = edi; /* 0x1717A44D: mov ecx, edi */
    RECOMP_CALL(sub_170C4D09); /* 0x1717A44F: call 0x170c4d09 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) & 0; /* 0x1717A454: and dword ptr [ebp + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x20)), 0 */ /* 0x1717A458: cmp dword ptr [ebp - 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1717A4EC; /* 0x1717A45C: jbe 0x1717a4ec */
L_1717A462:
    ebx = MEM32(ebp + (-0x24)); /* 0x1717A462: mov ebx, dword ptr [ebp - 0x24] */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(ebp + (-0x28))); /* 0x1717A465: imul ebx, dword ptr [ebp - 0x28] */
    eax = MEM32(ebp + (-0x10)); /* 0x1717A469: mov eax, dword ptr [ebp - 0x10] */
    if (2u) _cf = (((ebx) >> 30) & 1u); /* 0x1717A46C: shl ebx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ebx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 2u; /* 0x1717A46C: shl ebx, 2 */
    MEM32(ebp + (-0x10)) = eax; /* 0x1717A46F: mov dword ptr [ebp - 0x10], eax */
L_1717A472:
    ecx = MEM32(ebp + (-0x24)); /* 0x1717A472: mov ecx, dword ptr [ebp - 0x24] */
    /* test ecx, ecx */ /* 0x1717A475: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x14) = esi; /* 0x1717A477: mov dword ptr [ebp + 0x14], esi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1717A4C9; /* 0x1717A47A: jbe 0x1717a4c9 */
L_1717A47C:
    edx = MEM32(ebp + (-0x28)); /* 0x1717A47C: mov edx, dword ptr [ebp - 0x28] */
    esi = MEM32(ebp + 0xC); /* 0x1717A47F: mov esi, dword ptr [ebp + 0xc] */
    if (2u) _cf = (((edx) >> 30) & 1u); /* 0x1717A482: shl edx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 2u; /* 0x1717A482: shl edx, 2 */
    eax = eax + esi * 4; /* 0x1717A485: lea eax, [eax + esi*4] */
    MEM32(ebp + (-0x2C)) = ecx; /* 0x1717A488: mov dword ptr [ebp - 0x2c], ecx */
L_1717A48B:
    ecx = MEM32(ebp + 0x10); /* 0x1717A48B: mov ecx, dword ptr [ebp + 0x10] */
    /* test ecx, ecx */ /* 0x1717A48E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1717A499; /* 0x1717A490: jbe 0x1717a499 */
L_1717A492:
    esi = eax; /* 0x1717A492: mov esi, eax */
    edi = ebp + (-0x40); /* 0x1717A494: lea edi, [ebp - 0x40] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1717A497: rep movsd dword ptr es:[edi], dword ptr [esi] */
L_1717A499:
    ecx = MEM32(ebp + (-0x40)); /* 0x1717A499: mov ecx, dword ptr [ebp - 0x40] */
    edi = MEM32(ebp + 0x14); /* 0x1717A49C: mov edi, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) + 0x10u; /* 0x1717A49F: add dword ptr [ebp + 0x14], 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x50)) = ecx; /* 0x1717A4A3: mov dword ptr [ebp - 0x50], ecx */
    ecx = MEM32(ebp + (-0x3C)); /* 0x1717A4A6: mov ecx, dword ptr [ebp - 0x3c] */
    MEM32(ebp + (-0x4C)) = ecx; /* 0x1717A4A9: mov dword ptr [ebp - 0x4c], ecx */
    ecx = MEM32(ebp + (-0x38)); /* 0x1717A4AC: mov ecx, dword ptr [ebp - 0x38] */
    MEM32(ebp + (-0x48)) = ecx; /* 0x1717A4AF: mov dword ptr [ebp - 0x48], ecx */
    ecx = MEM32(ebp + (-0x34)); /* 0x1717A4B2: mov ecx, dword ptr [ebp - 0x34] */
    MEM32(ebp + (-0x44)) = ecx; /* 0x1717A4B5: mov dword ptr [ebp - 0x44], ecx */
    esi = ebp + (-0x50); /* 0x1717A4B8: lea esi, [ebp - 0x50] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1717A4BB: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1717A4BC: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1717A4BD: movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1717A4BE: add eax, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x2C)) = MEM32(ebp + (-0x2C)) - 1; /* 0x1717A4C0: dec dword ptr [ebp - 0x2c] */
    _flag_k = FK_DEC;
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1717A4C3: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1717A48B; /* 0x1717A4C4: jne 0x1717a48b */
L_1717A4C6:
    edi = MEM32(ebp + (-0x18)); /* 0x1717A4C6: mov edi, dword ptr [ebp - 0x18] */
L_1717A4C9:
    esi = MEM32(ebp + (-0x1C)); /* 0x1717A4C9: mov esi, dword ptr [ebp - 0x1c] */
    eax = MEM32(edi); /* 0x1717A4CC: mov eax, dword ptr [edi] */
    PUSH32(esp, esi); /* 0x1717A4CE: push esi */
    PUSH32(esp, 0); /* 0x1717A4CF: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1717A4D1: push dword ptr [ebp + 8] */
    ecx = edi; /* 0x1717A4D4: mov ecx, edi */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1717A4D6: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + 1; /* 0x1717A4D9: inc dword ptr [ebp + 8] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + (-0x10)); /* 0x1717A4DC: mov eax, dword ptr [ebp - 0x10] */
    ecx = MEM32(ebp + 0x8); /* 0x1717A4DF: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x1717A4E2: add eax, ebx */
    _flag_k = FK_ADD;
    /* cmp ecx, MEM32(ebp + (-0x20)) */ /* 0x1717A4E4: cmp ecx, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x20)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x10)) = eax; /* 0x1717A4E7: mov dword ptr [ebp - 0x10], eax */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1717A472; /* 0x1717A4EA: jb 0x1717a472 */
L_1717A4EC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1717A4EC: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1717A4EE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1717A4EE: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1717A4F0:
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x1717A4F0: push dword ptr [ebp - 0x30] */
    RECOMP_CALL(sub_1721B010); /* 0x1717A4F3: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1717A4F8: pop ecx */
    ecx = MEM32(ebp + (-0x18)); /* 0x1717A4F9: mov ecx, dword ptr [ebp - 0x18] */
    /* cmp ecx, ebx */ /* 0x1717A4FC: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1717A506; /* 0x1717A4FE: je 0x1717a506 */
L_1717A500:
    eax = MEM32(ecx); /* 0x1717A500: mov eax, dword ptr [ecx] */
    PUSH32(esp, 1); /* 0x1717A502: push 1 */
    RECOMP_ICALL(MEM32(eax)); /* 0x1717A504: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_1717A506:
    eax = MEM32(ebp + (-0x14)); /* 0x1717A506: mov eax, dword ptr [ebp - 0x14] */
    /* cmp eax, ebx */ /* 0x1717A509: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1717A51D; /* 0x1717A50B: je 0x1717a51d */
L_1717A50D:
    ecx = MEM32(eax); /* 0x1717A50D: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1717A50F: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1717A510: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x14)) = ebx; /* 0x1717A513: mov dword ptr [ebp - 0x14], ebx */
    goto L_1717A51D; /* 0x1717A516: jmp 0x1717a51d */
L_1717A518:
    esi = 0x8876086Cu; /* 0x1717A518: mov esi, 0x8876086c */
L_1717A51D:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1717A51D: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x64); /* 0x1717A521: lea ecx, [ebp - 0x64] */
    RECOMP_CALL(sub_170D780B); /* 0x1717A524: call 0x170d780b */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xC)); /* 0x1717A529: mov ecx, dword ptr [ebp - 0xc] */
    edi = POP32_VAL(esp); /* 0x1717A52C: pop edi */
    eax = esi; /* 0x1717A52D: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1717A52F: pop esi */
    ebx = POP32_VAL(esp); /* 0x1717A530: pop ebx */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1717A531: mov dword ptr fs:[0], ecx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1717A538: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1717A539: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1717A541(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1717A541u);

L_1717A541:
    edi = edi; /* 0x1717A541: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1717A543: push ebp */
    ebp = esp; /* 0x1717A544: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2E4u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x2E4u; /* 0x1717A546: sub esp, 0x2e4 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1717A54C: push ebx */
    PUSH32(esp, esi); /* 0x1717A54D: push esi */
    PUSH32(esp, edi); /* 0x1717A54E: push edi */
    ecx = ebp + (-0xDC); /* 0x1717A54F: lea ecx, [ebp - 0xdc] */
    RECOMP_CALL(sub_1704AC26); /* 0x1717A555: call 0x1704ac26 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1717A55A: mov eax, dword ptr [ebp + 8] */
    edx = MEM32(eax + 0x14); /* 0x1717A55D: mov edx, dword ptr [eax + 0x14] */
    ecx = MEM32(eax + 0xC); /* 0x1717A560: mov ecx, dword ptr [eax + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1717A563: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, ecx */ /* 0x1717A565: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = ebx; /* 0x1717A567: mov dword ptr [ebp - 4], ebx */
    MEM32(ebp + (-0x10)) = ebx; /* 0x1717A56A: mov dword ptr [ebp - 0x10], ebx */
    MEM32(ebp + (-0xC)) = edx; /* 0x1717A56D: mov dword ptr [ebp - 0xc], edx */
    if (CMP_A(_flag_a, _flag_b)) goto L_1717A70A; /* 0x1717A570: ja 0x1717a70a */
L_1717A576:
    /* cmp MEM32(eax + 0x10), ebx */ /* 0x1717A576: cmp dword ptr [eax + 0x10], ebx */
    _flag_a = (uint32_t)(MEM32(eax + 0x10)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1717A70A; /* 0x1717A579: je 0x1717a70a */
L_1717A57F:
    /* cmp ecx, ebx */ /* 0x1717A57F: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1717A70A; /* 0x1717A581: je 0x1717a70a */
L_1717A587:
    /* cmp edx, MEM32(ebp + 0xC) */ /* 0x1717A587: cmp edx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1717A70A; /* 0x1717A58A: jb 0x1717a70a */
L_1717A590:
    ecx = MEM32(eax + 0x1C); /* 0x1717A590: mov ecx, dword ptr [eax + 0x1c] */
    edi = MEM32(ebp + 0x18); /* 0x1717A593: mov edi, dword ptr [ebp + 0x18] */
    /* cmp edi, ebx */ /* 0x1717A596: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(eax + 0x8); /* 0x1717A598: mov eax, dword ptr [eax + 8] */
    MEM32(ebp + (-0x18)) = ecx; /* 0x1717A59B: mov dword ptr [ebp - 0x18], ecx */
    MEM32(ebp + (-0x8)) = eax; /* 0x1717A59E: mov dword ptr [ebp - 8], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1717A70A; /* 0x1717A5A1: je 0x1717a70a */
L_1717A5A7:
    eax = MEM32(edi); /* 0x1717A5A7: mov eax, dword ptr [edi] */
    PUSH32(esp, edi); /* 0x1717A5A9: push edi */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x1717A5AA: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1717A5AD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1717A70A; /* 0x1717A5AF: je 0x1717a70a */
L_1717A5B5:
    eax = MEM32(edi); /* 0x1717A5B5: mov eax, dword ptr [edi] */
    ecx = ebp + (-0x2E4); /* 0x1717A5B7: lea ecx, [ebp - 0x2e4] */
    PUSH32(esp, ecx); /* 0x1717A5BD: push ecx */
    PUSH32(esp, edi); /* 0x1717A5BE: push edi */
    RECOMP_ICALL(MEM32(eax + 0x1C)); /* 0x1717A5BF: call dword ptr [eax + 0x1c] */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x1717A5C2: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1717A70F; /* 0x1717A5C4: jl 0x1717a70f */
L_1717A5CA:
    eax = ebp + (-0x2E4); /* 0x1717A5CA: lea eax, [ebp - 0x2e4] */
    PUSH32(esp, eax); /* 0x1717A5D0: push eax */
    ecx = ebp + (-0xDC); /* 0x1717A5D1: lea ecx, [ebp - 0xdc] */
    RECOMP_CALL(sub_1703CC5E); /* 0x1717A5D7: call 0x1703cc5e */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x1717A5DC: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1717A70F; /* 0x1717A5DE: jl 0x1717a70f */
L_1717A5E4:
    /* cmp MEM32(ebp + 0xC), ebx */ /* 0x1717A5E4: cmp dword ptr [ebp + 0xc], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x14); /* 0x1717A5E7: mov eax, dword ptr [ebp + 0x14] */
    PUSH32(esp, 4); /* 0x1717A5EA: push 4 */
    MEM32(ebp + 0x8) = eax; /* 0x1717A5EC: mov dword ptr [ebp + 8], eax */
    esi = POP32_VAL(esp); /* 0x1717A5EF: pop esi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1717A622; /* 0x1717A5F0: je 0x1717a622 */
L_1717A5F2:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1717A5F2: push dword ptr [ebp + 8] */
    ecx = ebp + (-0xDC); /* 0x1717A5F5: lea ecx, [ebp - 0xdc] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1717A5FB: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1704E9C0); /* 0x1717A5FE: call 0x1704e9c0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1717A603: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1717A70A; /* 0x1717A605: je 0x1717a70a */
L_1717A60B:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + esi; /* 0x1717A60B: add ebx, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + 1; /* 0x1717A60D: inc dword ptr [ebp + 8] */
    _flag_k = FK_INC;
    eax = esi + ebx; /* 0x1717A610: lea eax, [esi + ebx] */
    /* cmp eax, MEM32(ebp + 0xC) */ /* 0x1717A613: cmp eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1717A61D; /* 0x1717A616: jbe 0x1717a61d */
L_1717A618:
    esi = MEM32(ebp + 0xC); /* 0x1717A618: mov esi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ebx; /* 0x1717A61B: sub esi, ebx */
    _flag_k = FK_CMP;
L_1717A61D:
    /* cmp ebx, MEM32(ebp + 0xC) */ /* 0x1717A61D: cmp ebx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1717A5F2; /* 0x1717A620: jne 0x1717a5f2 */
L_1717A622:
    eax = MEM32(edi); /* 0x1717A622: mov eax, dword ptr [edi] */
    PUSH32(esp, edi); /* 0x1717A624: push edi */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x1717A625: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1717A628: mov ebx, eax */
    /* cmp ebx, MEM32(ebp + (-0x8)) */ /* 0x1717A62A: cmp ebx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x14)) = ebx; /* 0x1717A62D: mov dword ptr [ebp - 0x14], ebx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1717A63C; /* 0x1717A630: je 0x1717a63c */
L_1717A632:
    esi = 0x8876086Cu; /* 0x1717A632: mov esi, 0x8876086c */
    goto L_1717A6F9; /* 0x1717A637: jmp 0x1717a6f9 */
L_1717A63C:
    eax = MEM32(edi); /* 0x1717A63C: mov eax, dword ptr [edi] */
    ecx = ebp + (-0x4); /* 0x1717A63E: lea ecx, [ebp - 4] */
    PUSH32(esp, ecx); /* 0x1717A641: push ecx */
    PUSH32(esp, edi); /* 0x1717A642: push edi */
    RECOMP_ICALL(MEM32(eax + 0x34)); /* 0x1717A643: call dword ptr [eax + 0x34] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1717A646: mov esi, eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1717A648: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp esi, ecx */ /* 0x1717A64A: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1717A6F9; /* 0x1717A64C: jl 0x1717a6f9 */
L_1717A652:
    eax = MEM32(ebp + (-0x4)); /* 0x1717A652: mov eax, dword ptr [ebp - 4] */
    edx = MEM32(eax); /* 0x1717A655: mov edx, dword ptr [eax] */
    PUSH32(esp, ecx); /* 0x1717A657: push ecx */
    esi = ebp + (-0x10); /* 0x1717A658: lea esi, [ebp - 0x10] */
    PUSH32(esp, esi); /* 0x1717A65B: push esi */
    PUSH32(esp, ecx); /* 0x1717A65C: push ecx */
    PUSH32(esp, ecx); /* 0x1717A65D: push ecx */
    PUSH32(esp, eax); /* 0x1717A65E: push eax */
    RECOMP_ICALL(MEM32(edx + 0x2C)); /* 0x1717A65F: call dword ptr [edx + 0x2c] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1717A662: mov esi, eax */
    /* test esi, esi */ /* 0x1717A664: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1717A6F9; /* 0x1717A666: jl 0x1717a6f9 */
L_1717A66C:
    eax = MEM32(edi); /* 0x1717A66C: mov eax, dword ptr [edi] */
    PUSH32(esp, edi); /* 0x1717A66E: push edi */
    RECOMP_ICALL(MEM32(eax + 0x20)); /* 0x1717A66F: call dword ptr [eax + 0x20] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1717A672: push eax */
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x1717A673: push dword ptr [ebp - 0x10] */
    ecx = ebp + (-0xDC); /* 0x1717A676: lea ecx, [ebp - 0xdc] */
    PUSH32(esp, 0); /* 0x1717A67C: push 0 */
    RECOMP_CALL(sub_170B7D6A); /* 0x1717A67E: call 0x170b7d6a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) & 0; /* 0x1717A683: and dword ptr [ebp + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ebx, ebx */ /* 0x1717A687: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1717A6EE; /* 0x1717A689: jbe 0x1717a6ee */
L_1717A68B:
    eax = MEM32(ebp + (-0xC)); /* 0x1717A68B: mov eax, dword ptr [ebp - 0xc] */
    edi = MEM32(ebp + (-0x18)); /* 0x1717A68E: mov edi, dword ptr [ebp - 0x18] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1717A691: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1717A691: shl eax, 2 */
    MEM32(ebp + (-0xC)) = eax; /* 0x1717A694: mov dword ptr [ebp - 0xc], eax */
    MEM32(ebp + (-0x8)) = edi; /* 0x1717A697: mov dword ptr [ebp - 8], edi */
L_1717A69A:
    eax = MEM32(ebp + 0x14); /* 0x1717A69A: mov eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1717A69D: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0xC), ebx */ /* 0x1717A69F: cmp dword ptr [ebp + 0xc], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, 4); /* 0x1717A6A2: push 4 */
    MEM32(ebp + 0x18) = eax; /* 0x1717A6A4: mov dword ptr [ebp + 0x18], eax */
    esi = POP32_VAL(esp); /* 0x1717A6A7: pop esi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1717A6DA; /* 0x1717A6A8: je 0x1717a6da */
L_1717A6AA:
    PUSH32(esp, esi); /* 0x1717A6AA: push esi */
    PUSH32(esp, edi); /* 0x1717A6AB: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1717A6AC: push dword ptr [ebp + 8] */
    ecx = ebp + (-0xDC); /* 0x1717A6AF: lea ecx, [ebp - 0xdc] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1717A6B5: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1717A6B8: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_171750C1); /* 0x1717A6BB: call 0x171750c1 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + esi; /* 0x1717A6C0: add ebx, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) + 1; /* 0x1717A6C2: inc dword ptr [ebp + 0x18] */
    _flag_k = FK_INC;
    eax = esi + ebx; /* 0x1717A6C5: lea eax, [esi + ebx] */
    /* cmp eax, MEM32(ebp + 0xC) */ /* 0x1717A6C8: cmp eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = edi + esi * 4; /* 0x1717A6CB: lea edi, [edi + esi*4] */
    if (CMP_BE(_flag_a, _flag_b)) goto L_1717A6D5; /* 0x1717A6CE: jbe 0x1717a6d5 */
L_1717A6D0:
    esi = MEM32(ebp + 0xC); /* 0x1717A6D0: mov esi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ebx; /* 0x1717A6D3: sub esi, ebx */
    _flag_k = FK_CMP;
L_1717A6D5:
    /* cmp ebx, MEM32(ebp + 0xC) */ /* 0x1717A6D5: cmp ebx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1717A6AA; /* 0x1717A6D8: jne 0x1717a6aa */
L_1717A6DA:
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + 1; /* 0x1717A6DA: inc dword ptr [ebp + 8] */
    _flag_k = FK_INC;
    edi = MEM32(ebp + (-0x8)); /* 0x1717A6DD: mov edi, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ebp + (-0xC)); /* 0x1717A6E0: add edi, dword ptr [ebp - 0xc] */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x8); /* 0x1717A6E3: mov eax, dword ptr [ebp + 8] */
    /* cmp eax, MEM32(ebp + (-0x14)) */ /* 0x1717A6E6: cmp eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x14)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x8)) = edi; /* 0x1717A6E9: mov dword ptr [ebp - 8], edi */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1717A69A; /* 0x1717A6EC: jb 0x1717a69a */
L_1717A6EE:
    eax = MEM32(ebp + (-0x4)); /* 0x1717A6EE: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(eax); /* 0x1717A6F1: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1717A6F3: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x30)); /* 0x1717A6F4: call dword ptr [ecx + 0x30] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1717A6F7: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1717A6F9:
    eax = MEM32(ebp + (-0x4)); /* 0x1717A6F9: mov eax, dword ptr [ebp - 4] */
    /* test eax, eax */ /* 0x1717A6FC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1717A706; /* 0x1717A6FE: je 0x1717a706 */
L_1717A700:
    ecx = MEM32(eax); /* 0x1717A700: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1717A702: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1717A703: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
L_1717A706:
    eax = esi; /* 0x1717A706: mov eax, esi */
    goto L_1717A70F; /* 0x1717A708: jmp 0x1717a70f */
L_1717A70A:
    eax = 0x8876086Cu; /* 0x1717A70A: mov eax, 0x8876086c */
L_1717A70F:
    edi = POP32_VAL(esp); /* 0x1717A70F: pop edi */
    esi = POP32_VAL(esp); /* 0x1717A710: pop esi */
    ebx = POP32_VAL(esp); /* 0x1717A711: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1717A712: leave  */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x1717A713: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_1717A71B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1717A71Bu);

L_1717A71B:
    eax = ecx; /* 0x1717A71B: mov eax, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1717A71D: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = 0x17021F60u; /* 0x1717A71F: mov dword ptr [eax], 0x17021f60 */
    MEM32(eax + 0x4) = 1; /* 0x1717A725: mov dword ptr [eax + 4], 1 */
    MEM32(eax + 0x8) = ecx; /* 0x1717A72C: mov dword ptr [eax + 8], ecx */
    MEM32(eax + 0xC) = ecx; /* 0x1717A72F: mov dword ptr [eax + 0xc], ecx */
    MEM32(eax + 0x10) = ecx; /* 0x1717A732: mov dword ptr [eax + 0x10], ecx */
    MEM32(eax + 0x14) = ecx; /* 0x1717A735: mov dword ptr [eax + 0x14], ecx */
    MEM32(eax + 0x18) = ecx; /* 0x1717A738: mov dword ptr [eax + 0x18], ecx */
    MEM32(eax + 0x1C) = ecx; /* 0x1717A73B: mov dword ptr [eax + 0x1c], ecx */
    MEM32(eax + 0x20) = ecx; /* 0x1717A73E: mov dword ptr [eax + 0x20], ecx */
    MEM32(eax + 0x24) = ecx; /* 0x1717A741: mov dword ptr [eax + 0x24], ecx */
    MEM32(eax + 0x28) = ecx; /* 0x1717A744: mov dword ptr [eax + 0x28], ecx */
    MEM32(eax + 0x2C) = ecx; /* 0x1717A747: mov dword ptr [eax + 0x2c], ecx */
    MEM32(eax + 0x30) = ecx; /* 0x1717A74A: mov dword ptr [eax + 0x30], ecx */
    MEM32(eax + 0x34) = ecx; /* 0x1717A74D: mov dword ptr [eax + 0x34], ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1717A750: ret  */
    RECOMP_REGS_OUT();
}

void sub_1717A756(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1717A756u);

L_1717A756:
    edi = edi; /* 0x1717A756: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1717A758: push ebp */
    ebp = esp; /* 0x1717A759: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1717A75B: push ebx */
    ebx = MEM32(ebp + 0x20); /* 0x1717A75C: mov ebx, dword ptr [ebp + 0x20] */
    /* test ebx, ebx */ /* 0x1717A75F: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1717A76A; /* 0x1717A761: jne 0x1717a76a */
L_1717A763:
    eax = 0x8876086Cu; /* 0x1717A763: mov eax, 0x8876086c */
    goto L_1717A7C2; /* 0x1717A768: jmp 0x1717a7c2 */
L_1717A76A:
    PUSH32(esp, esi); /* 0x1717A76A: push esi */
    PUSH32(esp, 0x38u); /* 0x1717A76B: push 0x38 */
    RECOMP_CALL(sub_1721B01C); /* 0x1717A76D: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1717A772: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1717A774: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1717A782; /* 0x1717A775: je 0x1717a782 */
L_1717A777:
    ecx = eax; /* 0x1717A777: mov ecx, eax */
    RECOMP_CALL(sub_1717A71B); /* 0x1717A779: call 0x1717a71b */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1717A77E: mov esi, eax */
    goto L_1717A784; /* 0x1717A780: jmp 0x1717a784 */
L_1717A782:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1717A782: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1717A784:
    /* test esi, esi */ /* 0x1717A784: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1717A78F; /* 0x1717A786: jne 0x1717a78f */
L_1717A788:
    eax = 0x8007000Eu; /* 0x1717A788: mov eax, 0x8007000e */
    goto L_1717A7C1; /* 0x1717A78D: jmp 0x1717a7c1 */
L_1717A78F:
    PUSH32(esp, edi); /* 0x1717A78F: push edi */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1717A790: push dword ptr [ebp + 0x1c] */
    ecx = esi; /* 0x1717A793: mov ecx, esi */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1717A795: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1717A798: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1717A79B: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1717A79E: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1717A7A1: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_17179C7B); /* 0x1717A7A4: call 0x17179c7b */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1717A7A9: mov edi, eax */
    /* test edi, edi */ /* 0x1717A7AB: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1717A7BC; /* 0x1717A7AD: jge 0x1717a7bc */
L_1717A7AF:
    eax = MEM32(esi); /* 0x1717A7AF: mov eax, dword ptr [esi] */
    PUSH32(esp, 1); /* 0x1717A7B1: push 1 */
    ecx = esi; /* 0x1717A7B3: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax + 0x44)); /* 0x1717A7B5: call dword ptr [eax + 0x44] */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x1717A7B8: mov eax, edi */
    goto L_1717A7C0; /* 0x1717A7BA: jmp 0x1717a7c0 */
L_1717A7BC:
    MEM32(ebx) = esi; /* 0x1717A7BC: mov dword ptr [ebx], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1717A7BE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1717A7C0:
    edi = POP32_VAL(esp); /* 0x1717A7C0: pop edi */
L_1717A7C1:
    esi = POP32_VAL(esp); /* 0x1717A7C1: pop esi */
L_1717A7C2:
    ebx = POP32_VAL(esp); /* 0x1717A7C2: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1717A7C3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x1717A7C4: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_1717A7CC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1717A7CCu);

L_1717A7CC:
    edi = edi; /* 0x1717A7CC: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1717A7CE: push ebp */
    ebp = esp; /* 0x1717A7CF: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x2Cu; /* 0x1717A7D1: sub esp, 0x2c */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1717A7D4: push ebx */
    PUSH32(esp, esi); /* 0x1717A7D5: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1717A7D6: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1717A7D8: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x8), ebx */ /* 0x1717A7DA: cmp dword ptr [ebp + 8], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1717A951; /* 0x1717A7DD: je 0x1717a951 */
L_1717A7E3:
    /* cmp MEM32(ebp + 0xC), ebx */ /* 0x1717A7E3: cmp dword ptr [ebp + 0xc], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1717A951; /* 0x1717A7E6: je 0x1717a951 */
L_1717A7EC:
    PUSH32(esp, ebx); /* 0x1717A7EC: push ebx */
    PUSH32(esp, 0x08000080u); /* 0x1717A7ED: push 0x8000080 */
    PUSH32(esp, 3); /* 0x1717A7F2: push 3 */
    PUSH32(esp, ebx); /* 0x1717A7F4: push ebx */
    PUSH32(esp, ebx); /* 0x1717A7F5: push ebx */
    PUSH32(esp, 0x80000000u); /* 0x1717A7F6: push 0x80000000 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1717A7FB: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x170010F0)); /* 0x1717A7FE: call dword ptr [0x170010f0] */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1717A804: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x8) = eax; /* 0x1717A807: mov dword ptr [ebp + 8], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1717A816; /* 0x1717A80A: jne 0x1717a816 */
L_1717A80C:
    eax = 0x80004005u; /* 0x1717A80C: mov eax, 0x80004005 */
    goto L_1717A956; /* 0x1717A811: jmp 0x1717a956 */
L_1717A816:
    PUSH32(esp, edi); /* 0x1717A816: push edi */
    PUSH32(esp, 0x20u); /* 0x1717A817: push 0x20 */
    ecx = ebp + (-0x2C); /* 0x1717A819: lea ecx, [ebp - 0x2c] */
    PUSH32(esp, ecx); /* 0x1717A81C: push ecx */
    PUSH32(esp, eax); /* 0x1717A81D: push eax */
    RECOMP_CALL(sub_171788CA); /* 0x1717A81E: call 0x171788ca */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1717A823: mov edi, eax */
    /* cmp edi, ebx */ /* 0x1717A825: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1717A893; /* 0x1717A827: jl 0x1717a893 */
L_1717A829:
    /* cmp MEM32(ebp + (-0x2C)), ebx */ /* 0x1717A829: cmp dword ptr [ebp - 0x2c], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1717A947; /* 0x1717A82C: je 0x1717a947 */
L_1717A832:
    /* cmp MEM32(ebp + (-0x28)), ebx */ /* 0x1717A832: cmp dword ptr [ebp - 0x28], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x28))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1717A947; /* 0x1717A835: je 0x1717a947 */
L_1717A83B:
    /* cmp MEM32(ebp + (-0x24)), ebx */ /* 0x1717A83B: cmp dword ptr [ebp - 0x24], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1717A947; /* 0x1717A83E: je 0x1717a947 */
L_1717A844:
    /* cmp MEM32(ebp + (-0x18)), ebx */ /* 0x1717A844: cmp dword ptr [ebp - 0x18], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1717A859; /* 0x1717A847: je 0x1717a859 */
L_1717A849:
    eax = MEM32(ebp + (-0x20)); /* 0x1717A849: mov eax, dword ptr [ebp - 0x20] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + (-0x1C))); /* 0x1717A84C: imul eax, dword ptr [ebp - 0x1c] */
    /* cmp eax, MEM32(ebp + (-0x2C)) */ /* 0x1717A850: cmp eax, dword ptr [ebp - 0x2c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x2C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1717A947; /* 0x1717A853: jne 0x1717a947 */
L_1717A859:
    eax = MEM32(ebp + (-0x14)); /* 0x1717A859: mov eax, dword ptr [ebp - 0x14] */
    ebx = MEM32(ebp + (-0x10)); /* 0x1717A85C: mov ebx, dword ptr [ebp - 0x10] */
    PUSH32(esp, 0x38u); /* 0x1717A85F: push 0x38 */
    MEM32(ebp + (-0x4)) = eax; /* 0x1717A861: mov dword ptr [ebp - 4], eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1717A864: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1717A869: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1717A86B: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1717A879; /* 0x1717A86C: je 0x1717a879 */
L_1717A86E:
    ecx = eax; /* 0x1717A86E: mov ecx, eax */
    RECOMP_CALL(sub_1717A71B); /* 0x1717A870: call 0x1717a71b */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1717A875: mov esi, eax */
    goto L_1717A87B; /* 0x1717A877: jmp 0x1717a87b */
L_1717A879:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1717A879: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1717A87B:
    /* test esi, esi */ /* 0x1717A87B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1717A8A4; /* 0x1717A87D: jne 0x1717a8a4 */
L_1717A87F:
    edi = 0x8007000Eu; /* 0x1717A87F: mov edi, 0x8007000e */
L_1717A884:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1717A884: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1717A886:
    /* cmp esi, ebx */ /* 0x1717A886: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1717A893; /* 0x1717A888: je 0x1717a893 */
L_1717A88A:
    eax = MEM32(esi); /* 0x1717A88A: mov eax, dword ptr [esi] */
    PUSH32(esp, 1); /* 0x1717A88C: push 1 */
    ecx = esi; /* 0x1717A88E: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax + 0x44)); /* 0x1717A890: call dword ptr [eax + 0x44] */
    RECOMP_FLAGS_IN();
L_1717A893:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1717A893: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x170010F8)); /* 0x1717A896: call dword ptr [0x170010f8] */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x1717A89C: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1717A89E: pop edi */
    goto L_1717A956; /* 0x1717A89F: jmp 0x1717a956 */
L_1717A8A4:
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x1717A8A4: push dword ptr [ebp - 0x18] */
    ecx = esi; /* 0x1717A8A7: mov ecx, esi */
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x1717A8A9: push dword ptr [ebp - 0x1c] */
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x1717A8AC: push dword ptr [ebp - 0x20] */
    PUSH32(esp, MEM32(ebp + (-0x24))); /* 0x1717A8AF: push dword ptr [ebp - 0x24] */
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x1717A8B2: push dword ptr [ebp - 0x28] */
    PUSH32(esp, MEM32(ebp + (-0x2C))); /* 0x1717A8B5: push dword ptr [ebp - 0x2c] */
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x1717A8B8: push dword ptr [ebp - 0x10] */
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x1717A8BB: push dword ptr [ebp - 0x14] */
    RECOMP_CALL(sub_17179DAE); /* 0x1717A8BE: call 0x17179dae */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1717A8C3: mov edi, eax */
    /* test edi, edi */ /* 0x1717A8C5: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1717A884; /* 0x1717A8C7: jl 0x1717a884 */
L_1717A8C9:
    ecx = MEM32(esi + 0x1C); /* 0x1717A8C9: mov ecx, dword ptr [esi + 0x1c] */
    MEM32(ebp + (-0x8)) = ecx; /* 0x1717A8CC: mov dword ptr [ebp - 8], ecx */
    ecx = MEM32(esi + 0x20); /* 0x1717A8CF: mov ecx, dword ptr [esi + 0x20] */
    MEM32(ebp + (-0xC)) = ecx; /* 0x1717A8D2: mov dword ptr [ebp - 0xc], ecx */
    ecx = ebx + 0x1; /* 0x1717A8D5: lea ecx, [ebx + 1] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + (-0x24))); /* 0x1717A8D8: imul ecx, dword ptr [ebp - 0x24] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + (-0x28))); /* 0x1717A8DC: imul ecx, dword ptr [ebp - 0x28] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + (-0x4))); /* 0x1717A8E0: imul ecx, dword ptr [ebp - 4] */
    eax = MEM32(esi + 0x18); /* 0x1717A8E4: mov eax, dword ptr [esi + 0x18] */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x1717A8E7: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x1717A8E7: shl ecx, 2 */
    PUSH32(esp, ecx); /* 0x1717A8EA: push ecx */
    PUSH32(esp, eax); /* 0x1717A8EB: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1717A8EC: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171788CA); /* 0x1717A8EF: call 0x171788ca */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1717A8F4: mov edi, eax */
    /* test edi, edi */ /* 0x1717A8F6: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1717A884; /* 0x1717A8F8: jl 0x1717a884 */
L_1717A8FA:
    eax = MEM32(ebp + (-0x2C)); /* 0x1717A8FA: mov eax, dword ptr [ebp - 0x2c] */
    eax = (uint32_t)((int32_t)eax * (int32_t)ebx); /* 0x1717A8FD: imul eax, ebx */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1717A900: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1717A900: shl eax, 2 */
    PUSH32(esp, eax); /* 0x1717A903: push eax */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x1717A904: push dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1717A907: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171788CA); /* 0x1717A90A: call 0x171788ca */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1717A90F: mov edi, eax */
    /* test edi, edi */ /* 0x1717A911: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1717A884; /* 0x1717A913: jl 0x1717a884 */
L_1717A919:
    /* cmp MEM32(ebp + (-0x4)), 1 */ /* 0x1717A919: cmp dword ptr [ebp - 4], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1717A93B; /* 0x1717A91D: je 0x1717a93b */
L_1717A91F:
    eax = MEM32(ebp + (-0x2C)); /* 0x1717A91F: mov eax, dword ptr [ebp - 0x2c] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1717A922: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1717A922: shl eax, 2 */
    PUSH32(esp, eax); /* 0x1717A925: push eax */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x1717A926: push dword ptr [ebp - 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1717A929: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171788CA); /* 0x1717A92C: call 0x171788ca */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1717A931: mov edi, eax */
    /* test edi, edi */ /* 0x1717A933: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1717A884; /* 0x1717A935: jl 0x1717a884 */
L_1717A93B:
    eax = MEM32(ebp + 0xC); /* 0x1717A93B: mov eax, dword ptr [ebp + 0xc] */
    MEM32(eax) = esi; /* 0x1717A93E: mov dword ptr [eax], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1717A940: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1717A893; /* 0x1717A942: jmp 0x1717a893 */
L_1717A947:
    edi = 0x8876086Cu; /* 0x1717A947: mov edi, 0x8876086c */
    RECOMP_BACKEDGE();
    goto L_1717A886; /* 0x1717A94C: jmp 0x1717a886 */
L_1717A951:
    eax = 0x8876086Cu; /* 0x1717A951: mov eax, 0x8876086c */
L_1717A956:
    esi = POP32_VAL(esp); /* 0x1717A956: pop esi */
    ebx = POP32_VAL(esp); /* 0x1717A957: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1717A958: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1717A959: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1717A961(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1717A961u);

L_1717A961:
    edi = edi; /* 0x1717A961: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1717A963: push ebp */
    ebp = esp; /* 0x1717A964: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x2Cu; /* 0x1717A966: sub esp, 0x2c */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1717A969: push ebx */
    PUSH32(esp, esi); /* 0x1717A96A: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1717A96B: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1717A96D: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x8), ebx */ /* 0x1717A96F: cmp dword ptr [ebp + 8], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1717AAEB; /* 0x1717A972: je 0x1717aaeb */
L_1717A978:
    /* cmp MEM32(ebp + 0xC), ebx */ /* 0x1717A978: cmp dword ptr [ebp + 0xc], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1717AAEB; /* 0x1717A97B: je 0x1717aaeb */
L_1717A981:
    PUSH32(esp, ebx); /* 0x1717A981: push ebx */
    PUSH32(esp, 0x08000080u); /* 0x1717A982: push 0x8000080 */
    PUSH32(esp, 3); /* 0x1717A987: push 3 */
    PUSH32(esp, ebx); /* 0x1717A989: push ebx */
    PUSH32(esp, ebx); /* 0x1717A98A: push ebx */
    PUSH32(esp, 0x80000000u); /* 0x1717A98B: push 0x80000000 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1717A990: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x170010AC)); /* 0x1717A993: call dword ptr [0x170010ac] */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1717A999: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x8) = eax; /* 0x1717A99C: mov dword ptr [ebp + 8], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1717A9B0; /* 0x1717A99F: jne 0x1717a9b0 */
L_1717A9A1:
    RECOMP_CALL(sub_1717882B); /* 0x1717A9A1: call 0x1717882b */
    RECOMP_FLAGS_IN();
    eax = 0x80004005u; /* 0x1717A9A6: mov eax, 0x80004005 */
    goto L_1717AAF0; /* 0x1717A9AB: jmp 0x1717aaf0 */
L_1717A9B0:
    PUSH32(esp, edi); /* 0x1717A9B0: push edi */
    PUSH32(esp, 0x20u); /* 0x1717A9B1: push 0x20 */
    ecx = ebp + (-0x2C); /* 0x1717A9B3: lea ecx, [ebp - 0x2c] */
    PUSH32(esp, ecx); /* 0x1717A9B6: push ecx */
    PUSH32(esp, eax); /* 0x1717A9B7: push eax */
    RECOMP_CALL(sub_171788CA); /* 0x1717A9B8: call 0x171788ca */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1717A9BD: mov edi, eax */
    /* cmp edi, ebx */ /* 0x1717A9BF: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1717AA2D; /* 0x1717A9C1: jl 0x1717aa2d */
L_1717A9C3:
    /* cmp MEM32(ebp + (-0x2C)), ebx */ /* 0x1717A9C3: cmp dword ptr [ebp - 0x2c], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1717AAE1; /* 0x1717A9C6: je 0x1717aae1 */
L_1717A9CC:
    /* cmp MEM32(ebp + (-0x28)), ebx */ /* 0x1717A9CC: cmp dword ptr [ebp - 0x28], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x28))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1717AAE1; /* 0x1717A9CF: je 0x1717aae1 */
L_1717A9D5:
    /* cmp MEM32(ebp + (-0x24)), ebx */ /* 0x1717A9D5: cmp dword ptr [ebp - 0x24], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1717AAE1; /* 0x1717A9D8: je 0x1717aae1 */
L_1717A9DE:
    /* cmp MEM32(ebp + (-0x18)), ebx */ /* 0x1717A9DE: cmp dword ptr [ebp - 0x18], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1717A9F3; /* 0x1717A9E1: je 0x1717a9f3 */
L_1717A9E3:
    eax = MEM32(ebp + (-0x20)); /* 0x1717A9E3: mov eax, dword ptr [ebp - 0x20] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + (-0x1C))); /* 0x1717A9E6: imul eax, dword ptr [ebp - 0x1c] */
    /* cmp eax, MEM32(ebp + (-0x2C)) */ /* 0x1717A9EA: cmp eax, dword ptr [ebp - 0x2c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x2C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1717AAE1; /* 0x1717A9ED: jne 0x1717aae1 */
L_1717A9F3:
    eax = MEM32(ebp + (-0x14)); /* 0x1717A9F3: mov eax, dword ptr [ebp - 0x14] */
    ebx = MEM32(ebp + (-0x10)); /* 0x1717A9F6: mov ebx, dword ptr [ebp - 0x10] */
    PUSH32(esp, 0x38u); /* 0x1717A9F9: push 0x38 */
    MEM32(ebp + (-0x4)) = eax; /* 0x1717A9FB: mov dword ptr [ebp - 4], eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1717A9FE: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1717AA03: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1717AA05: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1717AA13; /* 0x1717AA06: je 0x1717aa13 */
L_1717AA08:
    ecx = eax; /* 0x1717AA08: mov ecx, eax */
    RECOMP_CALL(sub_1717A71B); /* 0x1717AA0A: call 0x1717a71b */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1717AA0F: mov esi, eax */
    goto L_1717AA15; /* 0x1717AA11: jmp 0x1717aa15 */
L_1717AA13:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1717AA13: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1717AA15:
    /* test esi, esi */ /* 0x1717AA15: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1717AA3E; /* 0x1717AA17: jne 0x1717aa3e */
L_1717AA19:
    edi = 0x8007000Eu; /* 0x1717AA19: mov edi, 0x8007000e */
L_1717AA1E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1717AA1E: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1717AA20:
    /* cmp esi, ebx */ /* 0x1717AA20: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1717AA2D; /* 0x1717AA22: je 0x1717aa2d */
L_1717AA24:
    eax = MEM32(esi); /* 0x1717AA24: mov eax, dword ptr [esi] */
    PUSH32(esp, 1); /* 0x1717AA26: push 1 */
    ecx = esi; /* 0x1717AA28: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax + 0x44)); /* 0x1717AA2A: call dword ptr [eax + 0x44] */
    RECOMP_FLAGS_IN();
L_1717AA2D:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1717AA2D: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x170010F8)); /* 0x1717AA30: call dword ptr [0x170010f8] */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x1717AA36: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1717AA38: pop edi */
    goto L_1717AAF0; /* 0x1717AA39: jmp 0x1717aaf0 */
L_1717AA3E:
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x1717AA3E: push dword ptr [ebp - 0x18] */
    ecx = esi; /* 0x1717AA41: mov ecx, esi */
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x1717AA43: push dword ptr [ebp - 0x1c] */
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x1717AA46: push dword ptr [ebp - 0x20] */
    PUSH32(esp, MEM32(ebp + (-0x24))); /* 0x1717AA49: push dword ptr [ebp - 0x24] */
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x1717AA4C: push dword ptr [ebp - 0x28] */
    PUSH32(esp, MEM32(ebp + (-0x2C))); /* 0x1717AA4F: push dword ptr [ebp - 0x2c] */
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x1717AA52: push dword ptr [ebp - 0x10] */
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x1717AA55: push dword ptr [ebp - 0x14] */
    RECOMP_CALL(sub_17179DAE); /* 0x1717AA58: call 0x17179dae */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1717AA5D: mov edi, eax */
    /* test edi, edi */ /* 0x1717AA5F: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1717AA1E; /* 0x1717AA61: jl 0x1717aa1e */
L_1717AA63:
    ecx = MEM32(esi + 0x1C); /* 0x1717AA63: mov ecx, dword ptr [esi + 0x1c] */
    MEM32(ebp + (-0x8)) = ecx; /* 0x1717AA66: mov dword ptr [ebp - 8], ecx */
    ecx = MEM32(esi + 0x20); /* 0x1717AA69: mov ecx, dword ptr [esi + 0x20] */
    MEM32(ebp + (-0xC)) = ecx; /* 0x1717AA6C: mov dword ptr [ebp - 0xc], ecx */
    ecx = ebx + 0x1; /* 0x1717AA6F: lea ecx, [ebx + 1] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + (-0x24))); /* 0x1717AA72: imul ecx, dword ptr [ebp - 0x24] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + (-0x28))); /* 0x1717AA76: imul ecx, dword ptr [ebp - 0x28] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + (-0x4))); /* 0x1717AA7A: imul ecx, dword ptr [ebp - 4] */
    eax = MEM32(esi + 0x18); /* 0x1717AA7E: mov eax, dword ptr [esi + 0x18] */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x1717AA81: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x1717AA81: shl ecx, 2 */
    PUSH32(esp, ecx); /* 0x1717AA84: push ecx */
    PUSH32(esp, eax); /* 0x1717AA85: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1717AA86: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171788CA); /* 0x1717AA89: call 0x171788ca */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1717AA8E: mov edi, eax */
    /* test edi, edi */ /* 0x1717AA90: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1717AA1E; /* 0x1717AA92: jl 0x1717aa1e */
L_1717AA94:
    eax = MEM32(ebp + (-0x2C)); /* 0x1717AA94: mov eax, dword ptr [ebp - 0x2c] */
    eax = (uint32_t)((int32_t)eax * (int32_t)ebx); /* 0x1717AA97: imul eax, ebx */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1717AA9A: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1717AA9A: shl eax, 2 */
    PUSH32(esp, eax); /* 0x1717AA9D: push eax */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x1717AA9E: push dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1717AAA1: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171788CA); /* 0x1717AAA4: call 0x171788ca */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1717AAA9: mov edi, eax */
    /* test edi, edi */ /* 0x1717AAAB: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1717AA1E; /* 0x1717AAAD: jl 0x1717aa1e */
L_1717AAB3:
    /* cmp MEM32(ebp + (-0x4)), 1 */ /* 0x1717AAB3: cmp dword ptr [ebp - 4], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1717AAD5; /* 0x1717AAB7: je 0x1717aad5 */
L_1717AAB9:
    eax = MEM32(ebp + (-0x2C)); /* 0x1717AAB9: mov eax, dword ptr [ebp - 0x2c] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1717AABC: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1717AABC: shl eax, 2 */
    PUSH32(esp, eax); /* 0x1717AABF: push eax */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x1717AAC0: push dword ptr [ebp - 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1717AAC3: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171788CA); /* 0x1717AAC6: call 0x171788ca */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1717AACB: mov edi, eax */
    /* test edi, edi */ /* 0x1717AACD: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1717AA1E; /* 0x1717AACF: jl 0x1717aa1e */
L_1717AAD5:
    eax = MEM32(ebp + 0xC); /* 0x1717AAD5: mov eax, dword ptr [ebp + 0xc] */
    MEM32(eax) = esi; /* 0x1717AAD8: mov dword ptr [eax], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1717AADA: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1717AA2D; /* 0x1717AADC: jmp 0x1717aa2d */
L_1717AAE1:
    edi = 0x8876086Cu; /* 0x1717AAE1: mov edi, 0x8876086c */
    RECOMP_BACKEDGE();
    goto L_1717AA20; /* 0x1717AAE6: jmp 0x1717aa20 */
L_1717AAEB:
    eax = 0x8876086Cu; /* 0x1717AAEB: mov eax, 0x8876086c */
L_1717AAF0:
    esi = POP32_VAL(esp); /* 0x1717AAF0: pop esi */
    ebx = POP32_VAL(esp); /* 0x1717AAF1: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1717AAF2: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1717AAF3: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1717AAFB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1717AAFBu);

L_1717AAFB:
    edi = edi; /* 0x1717AAFB: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1717AAFD: push ebp */
    ebp = esp; /* 0x1717AAFE: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1717AB00: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(eax + 0x4C)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x4C) = MEM32(eax + 0x4C) + 1; /* 0x1717AB03: inc dword ptr [eax + 0x4c] */
    _flag_k = FK_INC;
    eax = MEM32(eax + 0x4C); /* 0x1717AB06: mov eax, dword ptr [eax + 0x4c] */
    ebp = POP32_VAL(esp); /* 0x1717AB09: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1717AB0A: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1717AB12(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1717AB12u);

L_1717AB12:
    edi = edi; /* 0x1717AB12: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1717AB14: push ebp */
    ebp = esp; /* 0x1717AB15: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1717AB17: mov eax, dword ptr [ebp + 8] */
    /* cmp MEM32(eax + 0x4), 0 */ /* 0x1717AB1A: cmp dword ptr [eax + 4], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1717AB27; /* 0x1717AB1E: jne 0x1717ab27 */
L_1717AB20:
    eax = 0x80004005u; /* 0x1717AB20: mov eax, 0x80004005 */
    goto L_1717AB3E; /* 0x1717AB25: jmp 0x1717ab3e */
L_1717AB27:
    ecx = MEM32(eax + 0x4); /* 0x1717AB27: mov ecx, dword ptr [eax + 4] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x1717AB2A: fld dword ptr [ebp + 0x10] */
    eax = MEM32(ecx); /* 0x1717AB2D: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x1717AB2F: push ecx */
    PUSH32(esp, ecx); /* 0x1717AB30: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x1717AB31: fstp dword ptr [esp + 4] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x1717AB35: fld dword ptr [ebp + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x1717AB38: fstp dword ptr [esp] */
    RECOMP_ICALL(MEM32(eax + 0x24)); /* 0x1717AB3B: call dword ptr [eax + 0x24] */
    RECOMP_FLAGS_IN();
L_1717AB3E:
    ebp = POP32_VAL(esp); /* 0x1717AB3E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1717AB3F: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1717AB47(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1717AB47u);

L_1717AB47:
    edi = edi; /* 0x1717AB47: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1717AB49: push ebp */
    ebp = esp; /* 0x1717AB4A: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1717AB4C: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x1717AB4D: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1717AB50: push esi */
    eax = ebx; /* 0x1717AB51: mov eax, ebx */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1717AB53: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1717AB53: shl eax, 2 */
    PUSH32(esp, edi); /* 0x1717AB56: push edi */
    PUSH32(esp, eax); /* 0x1717AB57: push eax */
    esi = ecx; /* 0x1717AB58: mov esi, ecx */
    RECOMP_CALL(sub_1721B01C); /* 0x1717AB5A: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1717AB5F: mov edi, eax */
    /* test edi, edi */ /* 0x1717AB61: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1717AB63: pop ecx */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1717AB6D; /* 0x1717AB64: jne 0x1717ab6d */
L_1717AB66:
    eax = 0x8007000Eu; /* 0x1717AB66: mov eax, 0x8007000e */
    goto L_1717ABA5; /* 0x1717AB6B: jmp 0x1717aba5 */
L_1717AB6D:
    /* cmp MEM32(esi), 0 */ /* 0x1717AB6D: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1717AB9E; /* 0x1717AB70: je 0x1717ab9e */
L_1717AB72:
    ecx = MEM32(esi + 0x4); /* 0x1717AB72: mov ecx, dword ptr [esi + 4] */
    /* test ecx, ecx */ /* 0x1717AB75: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1717AB91; /* 0x1717AB77: je 0x1717ab91 */
L_1717AB79:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1717AB79: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x1717AB7B: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1717AB91; /* 0x1717AB7D: jbe 0x1717ab91 */
L_1717AB7F:
    /* cmp eax, ebx */ /* 0x1717AB7F: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1717AB91; /* 0x1717AB81: jae 0x1717ab91 */
L_1717AB83:
    ecx = MEM32(esi); /* 0x1717AB83: mov ecx, dword ptr [esi] */
    fp_push(*(float*)&MEM32(ecx + eax * 4)); /* 0x1717AB85: fld dword ptr [ecx + eax*4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edi + eax * 4) = _v; } /* 0x1717AB88: fstp dword ptr [edi + eax*4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1717AB8B: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, MEM32(esi + 0x4) */ /* 0x1717AB8C: cmp eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1717AB7F; /* 0x1717AB8F: jb 0x1717ab7f */
L_1717AB91:
    eax = MEM32(esi); /* 0x1717AB91: mov eax, dword ptr [esi] */
    /* test eax, eax */ /* 0x1717AB93: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1717AB9E; /* 0x1717AB95: je 0x1717ab9e */
L_1717AB97:
    PUSH32(esp, eax); /* 0x1717AB97: push eax */
    RECOMP_CALL(sub_1721B010); /* 0x1717AB98: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1717AB9D: pop ecx */
L_1717AB9E:
    MEM32(esi + 0x8) = ebx; /* 0x1717AB9E: mov dword ptr [esi + 8], ebx */
    MEM32(esi) = edi; /* 0x1717ABA1: mov dword ptr [esi], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1717ABA3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1717ABA5:
    edi = POP32_VAL(esp); /* 0x1717ABA5: pop edi */
    esi = POP32_VAL(esp); /* 0x1717ABA6: pop esi */
    ebx = POP32_VAL(esp); /* 0x1717ABA7: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1717ABA8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1717ABA9: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1717ABB1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1717ABB1u);

L_1717ABB1:
    edi = edi; /* 0x1717ABB1: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1717ABB3: push ebp */
    ebp = esp; /* 0x1717ABB4: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1717ABB6: push ecx */
    PUSH32(esp, ebx); /* 0x1717ABB7: push ebx */
    PUSH32(esp, esi); /* 0x1717ABB8: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1717ABB9: mov esi, dword ptr [ebp + 8] */
    eax = esi + esi * 2; /* 0x1717ABBC: lea eax, [esi + esi*2] */
    if (3u) _cf = (((eax) >> 29) & 1u); /* 0x1717ABBF: shl eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 3u; /* 0x1717ABBF: shl eax, 3 */
    PUSH32(esp, eax); /* 0x1717ABC2: push eax */
    ebx = ecx; /* 0x1717ABC3: mov ebx, ecx */
    RECOMP_CALL(sub_1721B01C); /* 0x1717ABC5: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1717ABCA: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, edx */ /* 0x1717ABCC: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x1717ABCE: pop ecx */
    MEM32(ebp + (-0x4)) = eax; /* 0x1717ABCF: mov dword ptr [ebp - 4], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1717ABDB; /* 0x1717ABD2: jne 0x1717abdb */
L_1717ABD4:
    eax = 0x8007000Eu; /* 0x1717ABD4: mov eax, 0x8007000e */
    goto L_1717AC20; /* 0x1717ABD9: jmp 0x1717ac20 */
L_1717ABDB:
    /* cmp MEM32(ebx), edx */ /* 0x1717ABDB: cmp dword ptr [ebx], edx */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1717AC16; /* 0x1717ABDD: je 0x1717ac16 */
L_1717ABDF:
    eax = MEM32(ebx + 0x4); /* 0x1717ABDF: mov eax, dword ptr [ebx + 4] */
    /* cmp eax, edx */ /* 0x1717ABE2: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1717AC09; /* 0x1717ABE4: jbe 0x1717ac09 */
L_1717ABE6:
    PUSH32(esp, edi); /* 0x1717ABE6: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1717ABE7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1717ABE9:
    /* cmp edx, esi */ /* 0x1717ABE9: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1717AC08; /* 0x1717ABEB: jae 0x1717ac08 */
L_1717ABED:
    ecx = MEM32(ebp + (-0x4)); /* 0x1717ABED: mov ecx, dword ptr [ebp - 4] */
    esi = MEM32(ebx); /* 0x1717ABF0: mov esi, dword ptr [ebx] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x1717ABF2: add esi, eax */
    _flag_k = FK_ADD;
    edi = eax + ecx; /* 0x1717ABF4: lea edi, [eax + ecx] */
    PUSH32(esp, 6); /* 0x1717ABF7: push 6 */
    ecx = POP32_VAL(esp); /* 0x1717ABF9: pop ecx */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1717ABFA: rep movsd dword ptr es:[edi], dword ptr [esi] */
    esi = MEM32(ebp + 0x8); /* 0x1717ABFC: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1717ABFF: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x18u; /* 0x1717AC00: add eax, 0x18 */
    _flag_k = FK_ADD;
    /* cmp edx, MEM32(ebx + 0x4) */ /* 0x1717AC03: cmp edx, dword ptr [ebx + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebx + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1717ABE9; /* 0x1717AC06: jb 0x1717abe9 */
L_1717AC08:
    edi = POP32_VAL(esp); /* 0x1717AC08: pop edi */
L_1717AC09:
    eax = MEM32(ebx); /* 0x1717AC09: mov eax, dword ptr [ebx] */
    /* test eax, eax */ /* 0x1717AC0B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1717AC16; /* 0x1717AC0D: je 0x1717ac16 */
L_1717AC0F:
    PUSH32(esp, eax); /* 0x1717AC0F: push eax */
    RECOMP_CALL(sub_1721B010); /* 0x1717AC10: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1717AC15: pop ecx */
L_1717AC16:
    eax = MEM32(ebp + (-0x4)); /* 0x1717AC16: mov eax, dword ptr [ebp - 4] */
    MEM32(ebx) = eax; /* 0x1717AC19: mov dword ptr [ebx], eax */
    MEM32(ebx + 0x8) = esi; /* 0x1717AC1B: mov dword ptr [ebx + 8], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1717AC1E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1717AC20:
    esi = POP32_VAL(esp); /* 0x1717AC20: pop esi */
    ebx = POP32_VAL(esp); /* 0x1717AC21: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1717AC22: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1717AC23: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1717AC2B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1717AC2Bu);

L_1717AC2B:
    edi = edi; /* 0x1717AC2B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1717AC2D: push ebp */
    ebp = esp; /* 0x1717AC2E: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1717AC30: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1717AC33: push esi */
    PUSH32(esp, edi); /* 0x1717AC34: push edi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1717AC35: sub esp, 0xc */
    _flag_k = FK_CMP;
    edi = esp; /* 0x1717AC38: mov edi, esp */
    esi = ebp + 0x8; /* 0x1717AC3A: lea esi, [ebp + 8] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1717AC3D: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1717AC3E: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1717AC3F: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_17175038); /* 0x1717AC40: call 0x17175038 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1717AC45: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1717AD61; /* 0x1717AC47: je 0x1717ad61 */
L_1717AC4D:
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x1717AC4D: fld dword ptr [ebp + 8] */
    edx = MEM32(ebp + 0x14); /* 0x1717AC50: mov edx, dword ptr [ebp + 0x14] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x1717AC53: fld dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x18); /* 0x1717AC56: mov ecx, dword ptr [ebp + 0x18] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x1717AC59: fld dword ptr [ebp + 0x10] */
    edi = ecx; /* 0x1717AC5C: mov edi, ecx */
    fp_push(_st[1]); /* 0x1717AC5E: fld st(1) */
    esi = ebp + (-0xC); /* 0x1717AC60: lea esi, [ebp - 0xc] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x4); /* 0x1717AC63: fmul dword ptr [edx + 4] */
    fp_push(_st[1]); /* 0x1717AC66: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(edx + 0x8); /* 0x1717AC68: fmul dword ptr [edx + 8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1717AC6B: faddp st(1) */
    fp_push(_st[3]); /* 0x1717AC6D: fld st(3) */
    _st[0] *= (double)*(float*)ADDR(edx); /* 0x1717AC6F: fmul dword ptr [edx] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1717AC71: faddp st(1) */
    _st[0] = fabs(_st[0]); /* 0x1717AC73: fabs  */
    fp_push(_st[2]); /* 0x1717AC75: fld st(2) */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x4); /* 0x1717AC77: fmul dword ptr [ecx + 4] */
    fp_push(_st[2]); /* 0x1717AC7A: fld st(2) */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x8); /* 0x1717AC7C: fmul dword ptr [ecx + 8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1717AC7F: faddp st(1) */
    fp_push(_st[4]); /* 0x1717AC81: fld st(4) */
    _st[0] *= (double)*(float*)ADDR(ecx); /* 0x1717AC83: fmul dword ptr [ecx] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1717AC85: faddp st(1) */
    _st[0] = fabs(_st[0]); /* 0x1717AC87: fabs  */
    fp_xch(1); /* 0x1717AC89: fxch st(1) */
    fp_push(_st[1]); /* 0x1717AC8B: fld st(1) */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1717AC8D: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1717AC8F: fnstsw ax */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1717AC91: fstp st(0) */
    /* test HI8(eax), 0x41u */ /* 0x1717AC93: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    fp_push(_st[1]); /* 0x1717AC96: fld st(1) */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1717ACBE; /* 0x1717AC98: jne 0x1717acbe */
L_1717AC9A:
    _st[0] *= (double)*(float*)ADDR(edx + 0x8); /* 0x1717AC9A: fmul dword ptr [edx + 8] */
    fp_push(_st[1]); /* 0x1717AC9D: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(edx + 0x4); /* 0x1717AC9F: fmul dword ptr [edx + 4] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x1717ACA2: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x1717ACA4: fstp dword ptr [ebp - 0xc] */
    _st[0] *= (double)*(float*)ADDR(edx); /* 0x1717ACA7: fmul dword ptr [edx] */
    fp_push(_st[2]); /* 0x1717ACA9: fld st(2) */
    _st[0] *= (double)*(float*)ADDR(edx + 0x8); /* 0x1717ACAB: fmul dword ptr [edx + 8] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x1717ACAE: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x1717ACB0: fstp dword ptr [ebp - 8] */
    fp_push(_st[1]); /* 0x1717ACB3: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(edx + 0x4); /* 0x1717ACB5: fmul dword ptr [edx + 4] */
    fp_push(_st[1]); /* 0x1717ACB8: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(edx); /* 0x1717ACBA: fmul dword ptr [edx] */
    goto L_1717ACE0; /* 0x1717ACBC: jmp 0x1717ace0 */
L_1717ACBE:
    _st[0] *= (double)*(float*)ADDR(ecx + 0x8); /* 0x1717ACBE: fmul dword ptr [ecx + 8] */
    fp_push(_st[1]); /* 0x1717ACC1: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x4); /* 0x1717ACC3: fmul dword ptr [ecx + 4] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x1717ACC6: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x1717ACC8: fstp dword ptr [ebp - 0xc] */
    _st[0] *= (double)*(float*)ADDR(ecx); /* 0x1717ACCB: fmul dword ptr [ecx] */
    fp_push(_st[2]); /* 0x1717ACCD: fld st(2) */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x8); /* 0x1717ACCF: fmul dword ptr [ecx + 8] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x1717ACD2: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x1717ACD4: fstp dword ptr [ebp - 8] */
    fp_push(_st[1]); /* 0x1717ACD7: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x4); /* 0x1717ACD9: fmul dword ptr [ecx + 4] */
    fp_push(_st[1]); /* 0x1717ACDC: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ecx); /* 0x1717ACDE: fmul dword ptr [ecx] */
L_1717ACE0:
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x1717ACE0: fsubp st(1) */
    SET_LO8(eax, 1); /* 0x1717ACE2: mov al, 1 */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x1717ACE4: fstp dword ptr [ebp - 4] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1717ACE7: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1717ACE8: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1717ACE9: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_push(*(float*)&MEM32(ecx + 0x8)); /* 0x1717ACEA: fld dword ptr [ecx + 8] */
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x1717ACED: fld dword ptr [ecx + 4] */
    fp_push(*(float*)&MEM32(ecx)); /* 0x1717ACF0: fld dword ptr [ecx] */
    esi = ebp + (-0xC); /* 0x1717ACF2: lea esi, [ebp - 0xc] */
    fp_push(_st[0]); /* 0x1717ACF5: fld st(0) */
    edi = edx; /* 0x1717ACF7: mov edi, edx */
    _st[0] *= _st[1]; /* 0x1717ACF9: fmul st(1) */
    fp_push(_st[3]); /* 0x1717ACFB: fld st(3) */
    _st[0] *= _st[4]; /* 0x1717ACFD: fmul st(4) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1717ACFF: faddp st(1) */
    fp_push(_st[2]); /* 0x1717AD01: fld st(2) */
    _st[0] *= _st[3]; /* 0x1717AD03: fmul st(3) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1717AD05: faddp st(1) */
    _st[0] = sqrt(_st[0]); /* 0x1717AD07: fsqrt  */
    { _st[3] = _st[0]; g_st_i64[3] = g_st_i64[0]; fp_pop(); } /* 0x1717AD09: fstp st(3) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1717AD0B: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1717AD0D: fstp st(0) */
    _st[0] = (double)*(float*)ADDR(0x17001424) / _st[0]; /* 0x1717AD0F: fdivr dword ptr [0x17001424] */
    fp_push(_st[0]); /* 0x1717AD15: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(ecx); /* 0x1717AD17: fmul dword ptr [ecx] */
    { float _v = (float)_st[0]; *(float*)ADDR(ecx) = _v; } /* 0x1717AD19: fst dword ptr [ecx] */
    fp_push(_st[1]); /* 0x1717AD1B: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x4); /* 0x1717AD1D: fmul dword ptr [ecx + 4] */
    { float _v = (float)_st[0]; *(float*)ADDR(ecx + 0x4) = _v; } /* 0x1717AD20: fst dword ptr [ecx + 4] */
    fp_push(_st[2]); /* 0x1717AD23: fld st(2) */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x8); /* 0x1717AD25: fmul dword ptr [ecx + 8] */
    { float _v = (float)_st[0]; *(float*)ADDR(ecx + 0x8) = _v; } /* 0x1717AD28: fst dword ptr [ecx + 8] */
    fp_push(_st[1]); /* 0x1717AD2B: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x10); /* 0x1717AD2D: fmul dword ptr [ebp + 0x10] */
    fp_push(_st[1]); /* 0x1717AD30: fld st(1) */
    _st[0] *= _st[6]; /* 0x1717AD32: fmul st(6) */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x1717AD34: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x1717AD36: fstp dword ptr [ebp - 0xc] */
    _st[0] *= _st[5]; /* 0x1717AD39: fmul st(5) */
    fp_push(_st[2]); /* 0x1717AD3B: fld st(2) */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x10); /* 0x1717AD3D: fmul dword ptr [ebp + 0x10] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x1717AD40: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x1717AD42: fstp dword ptr [ebp - 8] */
    fp_push(_st[1]); /* 0x1717AD45: fld st(1) */
    _st[0] *= _st[4]; /* 0x1717AD47: fmul st(4) */
    fp_push(_st[1]); /* 0x1717AD49: fld st(1) */
    _st[0] *= _st[6]; /* 0x1717AD4B: fmul st(6) */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x1717AD4D: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x1717AD4F: fstp dword ptr [ebp - 4] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1717AD52: movsd dword ptr es:[edi], dword ptr [esi] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1717AD53: fstp st(0) */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1717AD55: movsd dword ptr es:[edi], dword ptr [esi] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1717AD56: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1717AD58: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1717AD5A: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1717AD5C: fstp st(0) */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1717AD5E: movsd dword ptr es:[edi], dword ptr [esi] */
    goto L_1717AD63; /* 0x1717AD5F: jmp 0x1717ad63 */
L_1717AD61:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x1717AD61: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_1717AD63:
    edi = POP32_VAL(esp); /* 0x1717AD63: pop edi */
    esi = POP32_VAL(esp); /* 0x1717AD64: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1717AD65: leave  */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x1717AD66: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_1717AD6E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1717AD6Eu);

L_1717AD6E:
    edi = edi; /* 0x1717AD6E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1717AD70: push ebp */
    ebp = esp; /* 0x1717AD71: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1717AD73: push esi */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1717AD74: push dword ptr [ebp + 0x1c] */
    esi = ecx; /* 0x1717AD77: mov esi, ecx */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1717AD79: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1717AD7C: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1717AD7F: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1717AD82: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1717AD85: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1718F33C); /* 0x1717AD88: call 0x1718f33c */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x20); /* 0x1717AD8D: mov eax, dword ptr [ebp + 0x20] */
    ecx = eax; /* 0x1717AD90: mov ecx, eax */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax); /* 0x1717AD92: imul ecx, eax */
    MEM32(esi + 0x44) = eax; /* 0x1717AD95: mov dword ptr [esi + 0x44], eax */
    eax = MEM32(ebp + 0x24); /* 0x1717AD98: mov eax, dword ptr [ebp + 0x24] */
    MEM32(esi + 0x4C) = eax; /* 0x1717AD9B: mov dword ptr [esi + 0x4c], eax */
    eax = MEM32(ebp + 0x28); /* 0x1717AD9E: mov eax, dword ptr [ebp + 0x28] */
    MEM32(esi + 0x50) = eax; /* 0x1717ADA1: mov dword ptr [esi + 0x50], eax */
    MEM32(esi) = 0x17021FA8u; /* 0x1717ADA4: mov dword ptr [esi], 0x17021fa8 */
    MEM32(esi + 0x48) = ecx; /* 0x1717ADAA: mov dword ptr [esi + 0x48], ecx */
    eax = esi; /* 0x1717ADAD: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1717ADAF: pop esi */
    ebp = POP32_VAL(esp); /* 0x1717ADB0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 40; { RECOMP_REGS_OUT(); return; } /* 0x1717ADB1: ret 0x24 */
    RECOMP_REGS_OUT();
}

void sub_1717ADB9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1717ADB9u);

L_1717ADB9:
    eax = MEM32(ecx + 0x30); /* 0x1717ADB9: mov eax, dword ptr [ecx + 0x30] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1717ADBC: ret  */
    RECOMP_REGS_OUT();
}

void sub_1717ADC2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1717ADC2u);

L_1717ADC2:
    edi = edi; /* 0x1717ADC2: mov edi, edi */
    PUSH32(esp, ebx); /* 0x1717ADC4: push ebx */
    PUSH32(esp, esi); /* 0x1717ADC5: push esi */
    esi = ecx; /* 0x1717ADC6: mov esi, ecx */
    ebx = MEM32(esi + 0x4C); /* 0x1717ADC8: mov ebx, dword ptr [esi + 0x4c] */
    PUSH32(esp, edi); /* 0x1717ADCB: push edi */
    edi = MEM32(esi + 0x50); /* 0x1717ADCC: mov edi, dword ptr [esi + 0x50] */
    eax = esi + 0x38; /* 0x1717ADCF: lea eax, [esi + 0x38] */
    PUSH32(esp, eax); /* 0x1717ADD2: push eax */
    PUSH32(esp, MEM32(esi + 0x44)); /* 0x1717ADD3: push dword ptr [esi + 0x44] */
    PUSH32(esp, edi); /* 0x1717ADD6: push edi */
    RECOMP_CALL(sub_17048D0F); /* 0x1717ADD7: call 0x17048d0f */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1717ADDC: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x48), ecx */ /* 0x1717ADDE: cmp dword ptr [esi + 0x48], ecx */
    _flag_a = (uint32_t)(MEM32(esi + 0x48)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1717ADF7; /* 0x1717ADE1: jbe 0x1717adf7 */
L_1717ADE3:
    eax = ebx; /* 0x1717ADE3: mov eax, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ebx; /* 0x1717ADE5: sub edi, ebx */
    _flag_k = FK_CMP;
L_1717ADE7:
    fp_push(*(float*)&MEM32(edi + eax)); /* 0x1717ADE7: fld dword ptr [edi + eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1717ADEA: inc ecx */
    _flag_k = FK_INC;
    _st[0] += (double)*(float*)ADDR(eax); /* 0x1717ADEB: fadd dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x1717ADED: fstp dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1717ADEF: add eax, 4 */
    _flag_k = FK_ADD;
    /* cmp ecx, MEM32(esi + 0x48) */ /* 0x1717ADF2: cmp ecx, dword ptr [esi + 0x48] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x48));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1717ADE7; /* 0x1717ADF5: jb 0x1717ade7 */
L_1717ADF7:
    edi = POP32_VAL(esp); /* 0x1717ADF7: pop edi */
    esi = POP32_VAL(esp); /* 0x1717ADF8: pop esi */
    ebx = POP32_VAL(esp); /* 0x1717ADF9: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1717ADFA: ret  */
    RECOMP_REGS_OUT();
}

void sub_1717AE00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1717AE00u);

L_1717AE00:
    edi = edi; /* 0x1717AE00: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1717AE02: push ebp */
    ebp = esp; /* 0x1717AE03: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1717AE05: push esi */
    esi = ecx; /* 0x1717AE06: mov esi, ecx */
    /* cmp MEM32(esi + 0x50), 0 */ /* 0x1717AE08: cmp dword ptr [esi + 0x50], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x50)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1717AE4F; /* 0x1717AE0C: je 0x1717ae4f */
L_1717AE0E:
    eax = MEM32(ebp + 0x8); /* 0x1717AE0E: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(esi + 0x5C)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x5C) = MEM32(esi + 0x5C) & 0; /* 0x1717AE11: and dword ptr [esi + 0x5c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x1717AE15: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x8) = eax; /* 0x1717AE17: mov dword ptr [ebp + 8], eax */
    fp_push((double)(int32_t)MEM32(ebp + 0x8)); /* 0x1717AE1A: fild dword ptr [ebp + 8] */
    MEM32(esi + 0x60) = eax; /* 0x1717AE1D: mov dword ptr [esi + 0x60], eax */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1717AE28; /* 0x1717AE20: jge 0x1717ae28 */
L_1717AE22:
    _st[0] += (double)*(float*)ADDR(0x1700142C); /* 0x1717AE22: fadd dword ptr [0x1700142c] */
L_1717AE28:
    fp_push(_st[0]); /* 0x1717AE28: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(esi + 0x54); /* 0x1717AE2A: fmul dword ptr [esi + 0x54] */
    RECOMP_CALL(sub_1721B050); /* 0x1717AE2D: call 0x1721b050 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1717AE32: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x68) = eax; /* 0x1717AE34: mov dword ptr [esi + 0x68], eax */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1717AE40; /* 0x1717AE37: jne 0x1717ae40 */
L_1717AE39:
    MEM32(esi + 0x68) = 1; /* 0x1717AE39: mov dword ptr [esi + 0x68], 1 */
L_1717AE40:
    fp_push(1.0); /* 0x1717AE40: fld1  */
    eax = MEM32(esi + 0x68); /* 0x1717AE42: mov eax, dword ptr [esi + 0x68] */
    _st[0] /= _st[1]; /* 0x1717AE45: fdiv st(1) */
    MEM32(esi + 0x64) = eax; /* 0x1717AE47: mov dword ptr [esi + 0x64], eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x58) = _v; } /* 0x1717AE4A: fstp dword ptr [esi + 0x58] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1717AE4D: fstp st(0) */
L_1717AE4F:
    esi = POP32_VAL(esp); /* 0x1717AE4F: pop esi */
    ebp = POP32_VAL(esp); /* 0x1717AE50: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1717AE51: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1717AE59(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1717AE59u);

L_1717AE59:
    edi = edi; /* 0x1717AE59: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1717AE5B: push ebp */
    ebp = esp; /* 0x1717AE5C: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1717AE5E: push esi */
    esi = MEM32(ecx + 0x50); /* 0x1717AE5F: mov esi, dword ptr [ecx + 0x50] */
    /* test esi, esi */ /* 0x1717AE62: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1717AEA2; /* 0x1717AE64: je 0x1717aea2 */
L_1717AE66:
    eax = MEM32(ebp + 0x8); /* 0x1717AE66: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x5C)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx + 0x5C) = MEM32(ecx + 0x5C) + eax; /* 0x1717AE69: add dword ptr [ecx + 0x5c], eax */
    _flag_k = FK_ADD;
    eax = MEM32(ecx + 0x5C); /* 0x1717AE6C: mov eax, dword ptr [ecx + 0x5c] */
    /* cmp eax, MEM32(ecx + 0x64) */ /* 0x1717AE6F: cmp eax, dword ptr [ecx + 0x64] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x64));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1717AEA2; /* 0x1717AE72: jbe 0x1717aea2 */
L_1717AE74:
    edx = MEM32(ecx + 0x68); /* 0x1717AE74: mov edx, dword ptr [ecx + 0x68] */
    PUSH32(esp, edi); /* 0x1717AE77: push edi */
L_1717AE78:
    _flag_a = (uint32_t)(MEM32(ecx + 0x64)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx + 0x64) = MEM32(ecx + 0x64) + edx; /* 0x1717AE78: add dword ptr [ecx + 0x64], edx */
    _flag_k = FK_ADD;
    edi = MEM32(ecx + 0x5C); /* 0x1717AE7B: mov edi, dword ptr [ecx + 0x5c] */
    /* cmp edi, MEM32(ecx + 0x64) */ /* 0x1717AE7E: cmp edi, dword ptr [ecx + 0x64] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ecx + 0x64));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_1717AE78; /* 0x1717AE81: ja 0x1717ae78 */
L_1717AE83:
    /* test eax, eax */ /* 0x1717AE83: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(ecx + 0x6C)); /* 0x1717AE85: push dword ptr [ecx + 0x6c] */
    MEM32(ebp + 0x8) = eax; /* 0x1717AE88: mov dword ptr [ebp + 8], eax */
    fp_push((double)(int32_t)MEM32(ebp + 0x8)); /* 0x1717AE8B: fild dword ptr [ebp + 8] */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1717AE96; /* 0x1717AE8E: jge 0x1717ae96 */
L_1717AE90:
    _st[0] += (double)*(float*)ADDR(0x1700142C); /* 0x1717AE90: fadd dword ptr [0x1700142c] */
L_1717AE96:
    _st[0] *= (double)*(float*)ADDR(ecx + 0x58); /* 0x1717AE96: fmul dword ptr [ecx + 0x58] */
    PUSH32(esp, ecx); /* 0x1717AE99: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x1717AE9A: fstp dword ptr [esp] */
    RECOMP_ICALL(esi); /* 0x1717AE9D: call esi */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x1717AE9F: pop edi */
    goto L_1717AEA4; /* 0x1717AEA0: jmp 0x1717aea4 */
L_1717AEA2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1717AEA2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1717AEA4:
    esi = POP32_VAL(esp); /* 0x1717AEA4: pop esi */
    ebp = POP32_VAL(esp); /* 0x1717AEA5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1717AEA6: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1717AEAE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1717AEAEu);

L_1717AEAE:
    edi = edi; /* 0x1717AEAE: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1717AEB0: push ebp */
    ebp = esp; /* 0x1717AEB1: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1717AEB3: push esi */
    esi = MEM32(ecx + 0x50); /* 0x1717AEB4: mov esi, dword ptr [ecx + 0x50] */
    /* test esi, esi */ /* 0x1717AEB7: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1717AEFA; /* 0x1717AEB9: je 0x1717aefa */
L_1717AEBB:
    eax = MEM32(ebp + 0x8); /* 0x1717AEBB: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x5C)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx + 0x5C) = MEM32(ecx + 0x5C) + eax; /* 0x1717AEBE: add dword ptr [ecx + 0x5c], eax */
    _flag_k = FK_ADD;
    eax = MEM32(ecx + 0x5C); /* 0x1717AEC1: mov eax, dword ptr [ecx + 0x5c] */
    /* cmp eax, MEM32(ecx + 0x64) */ /* 0x1717AEC4: cmp eax, dword ptr [ecx + 0x64] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x64));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1717AEFA; /* 0x1717AEC7: jbe 0x1717aefa */
L_1717AEC9:
    edx = MEM32(ecx + 0x68); /* 0x1717AEC9: mov edx, dword ptr [ecx + 0x68] */
    PUSH32(esp, edi); /* 0x1717AECC: push edi */
L_1717AECD:
    _flag_a = (uint32_t)(MEM32(ecx + 0x64)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx + 0x64) = MEM32(ecx + 0x64) + edx; /* 0x1717AECD: add dword ptr [ecx + 0x64], edx */
    _flag_k = FK_ADD;
    edi = MEM32(ecx + 0x5C); /* 0x1717AED0: mov edi, dword ptr [ecx + 0x5c] */
    /* cmp edi, MEM32(ecx + 0x64) */ /* 0x1717AED3: cmp edi, dword ptr [ecx + 0x64] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ecx + 0x64));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_1717AECD; /* 0x1717AED6: ja 0x1717aecd */
L_1717AED8:
    /* test eax, eax */ /* 0x1717AED8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(ecx + 0x6C)); /* 0x1717AEDA: push dword ptr [ecx + 0x6c] */
    MEM32(ebp + 0x8) = eax; /* 0x1717AEDD: mov dword ptr [ebp + 8], eax */
    fp_push((double)(int32_t)MEM32(ebp + 0x8)); /* 0x1717AEE0: fild dword ptr [ebp + 8] */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1717AEEB; /* 0x1717AEE3: jge 0x1717aeeb */
L_1717AEE5:
    _st[0] += (double)*(float*)ADDR(0x1700142C); /* 0x1717AEE5: fadd dword ptr [0x1700142c] */
L_1717AEEB:
    _st[0] *= (double)*(float*)ADDR(ecx + 0x58); /* 0x1717AEEB: fmul dword ptr [ecx + 0x58] */
    PUSH32(esp, ecx); /* 0x1717AEEE: push ecx */
    _st[0] += (double)*(float*)ADDR(ecx + 0x70); /* 0x1717AEEF: fadd dword ptr [ecx + 0x70] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x1717AEF2: fstp dword ptr [esp] */
    RECOMP_ICALL(esi); /* 0x1717AEF5: call esi */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x1717AEF7: pop edi */
    goto L_1717AEFC; /* 0x1717AEF8: jmp 0x1717aefc */
L_1717AEFA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1717AEFA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1717AEFC:
    esi = POP32_VAL(esp); /* 0x1717AEFC: pop esi */
    ebp = POP32_VAL(esp); /* 0x1717AEFD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1717AEFE: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1717AF06(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1717AF06u);

L_1717AF06:
    edi = edi; /* 0x1717AF06: mov edi, edi */
    PUSH32(esp, esi); /* 0x1717AF08: push esi */
    esi = ecx; /* 0x1717AF09: mov esi, ecx */
    eax = MEM32(esi); /* 0x1717AF0B: mov eax, dword ptr [esi] */
    /* test eax, eax */ /* 0x1717AF0D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1717AF18; /* 0x1717AF0F: je 0x1717af18 */
L_1717AF11:
    PUSH32(esp, eax); /* 0x1717AF11: push eax */
    RECOMP_CALL(sub_1721B010); /* 0x1717AF12: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1717AF17: pop ecx */
L_1717AF18:
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x8) = MEM32(esi + 0x8) & 0; /* 0x1717AF18: and dword ptr [esi + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0; /* 0x1717AF1C: and dword ptr [esi + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1717AF20: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1717AF21: ret  */
    RECOMP_REGS_OUT();
}

void sub_1717AF27(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1717AF27u);

L_1717AF27:
    edi = edi; /* 0x1717AF27: mov edi, edi */
    PUSH32(esp, esi); /* 0x1717AF29: push esi */
    PUSH32(esp, edi); /* 0x1717AF2A: push edi */
    esi = ecx; /* 0x1717AF2B: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1717AF2D: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x4), edi */ /* 0x1717AF2F: cmp dword ptr [esi + 4], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1717AF64; /* 0x1717AF32: je 0x1717af64 */
L_1717AF34:
    /* cmp MEM32(esi + 0x8), edi */ /* 0x1717AF34: cmp dword ptr [esi + 8], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1717AF5B; /* 0x1717AF37: jbe 0x1717af5b */
L_1717AF39:
    PUSH32(esp, ebx); /* 0x1717AF39: push ebx */
L_1717AF3A:
    eax = MEM32(esi + 0x4); /* 0x1717AF3A: mov eax, dword ptr [esi + 4] */
    eax = MEM32(eax + edi * 4); /* 0x1717AF3D: mov eax, dword ptr [eax + edi*4] */
    /* test eax, eax */ /* 0x1717AF40: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1717AF54; /* 0x1717AF42: je 0x1717af54 */
L_1717AF44:
    ebx = MEM32(eax + 0x4); /* 0x1717AF44: mov ebx, dword ptr [eax + 4] */
    PUSH32(esp, eax); /* 0x1717AF47: push eax */
    RECOMP_CALL(sub_1721B010); /* 0x1717AF48: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    /* test ebx, ebx */ /* 0x1717AF4D: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1717AF4F: pop ecx */
    eax = ebx; /* 0x1717AF50: mov eax, ebx */
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1717AF44; /* 0x1717AF52: jne 0x1717af44 */
L_1717AF54:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1717AF54: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(esi + 0x8) */ /* 0x1717AF55: cmp edi, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1717AF3A; /* 0x1717AF58: jb 0x1717af3a */
L_1717AF5A:
    ebx = POP32_VAL(esp); /* 0x1717AF5A: pop ebx */
L_1717AF5B:
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x1717AF5B: push dword ptr [esi + 4] */
    RECOMP_CALL(sub_1721B010); /* 0x1717AF5E: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1717AF63: pop ecx */
L_1717AF64:
    edi = POP32_VAL(esp); /* 0x1717AF64: pop edi */
    esi = POP32_VAL(esp); /* 0x1717AF65: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1717AF66: ret  */
    RECOMP_REGS_OUT();
}

void sub_1717AF6C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1717AF6Cu);

L_1717AF6C:
    edi = edi; /* 0x1717AF6C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1717AF6E: push ebp */
    ebp = esp; /* 0x1717AF6F: mov ebp, esp */
    /* test MEM8(ebp + 0x8), 2 */ /* 0x1717AF71: test byte ptr [ebp + 8], 2 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, edi); /* 0x1717AF75: push edi */
    edi = ecx; /* 0x1717AF76: mov edi, ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1717AF9F; /* 0x1717AF78: je 0x1717af9f */
L_1717AF7A:
    PUSH32(esp, esi); /* 0x1717AF7A: push esi */
    PUSH32(esp, 0x1717AF06u); /* 0x1717AF7B: push 0x1717af06 */
    esi = edi + (-0x4); /* 0x1717AF80: lea esi, [edi - 4] */
    PUSH32(esp, MEM32(esi)); /* 0x1717AF83: push dword ptr [esi] */
    PUSH32(esp, 0x10u); /* 0x1717AF85: push 0x10 */
    PUSH32(esp, edi); /* 0x1717AF87: push edi */
    RECOMP_CALL(sub_1721B478); /* 0x1717AF88: call 0x1721b478 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1717AF8D: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1717AF9A; /* 0x1717AF91: je 0x1717af9a */
L_1717AF93:
    PUSH32(esp, esi); /* 0x1717AF93: push esi */
    RECOMP_CALL(sub_1721B010); /* 0x1717AF94: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1717AF99: pop ecx */
L_1717AF9A:
    eax = esi; /* 0x1717AF9A: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1717AF9C: pop esi */
    goto L_1717AFB5; /* 0x1717AF9D: jmp 0x1717afb5 */
L_1717AF9F:
    ecx = edi; /* 0x1717AF9F: mov ecx, edi */
    RECOMP_CALL(sub_1717AF06); /* 0x1717AFA1: call 0x1717af06 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1717AFA6: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1717AFB3; /* 0x1717AFAA: je 0x1717afb3 */
L_1717AFAC:
    PUSH32(esp, edi); /* 0x1717AFAC: push edi */
    RECOMP_CALL(sub_1721B010); /* 0x1717AFAD: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1717AFB2: pop ecx */
L_1717AFB3:
    eax = edi; /* 0x1717AFB3: mov eax, edi */
L_1717AFB5:
    edi = POP32_VAL(esp); /* 0x1717AFB5: pop edi */
    ebp = POP32_VAL(esp); /* 0x1717AFB6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1717AFB7: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1717AFBF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1717AFBFu);

    goto L_1717AFBF;
L_1717AF06:
    edi = edi; /* 0x1717AF06: mov edi, edi */
    PUSH32(esp, esi); /* 0x1717AF08: push esi */
    esi = ecx; /* 0x1717AF09: mov esi, ecx */
    eax = MEM32(esi); /* 0x1717AF0B: mov eax, dword ptr [esi] */
    /* test eax, eax */ /* 0x1717AF0D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1717AF18; /* 0x1717AF0F: je 0x1717af18 */
L_1717AF11:
    PUSH32(esp, eax); /* 0x1717AF11: push eax */
    RECOMP_CALL(sub_1721B010); /* 0x1717AF12: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1717AF17: pop ecx */
L_1717AF18:
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x8) = MEM32(esi + 0x8) & 0; /* 0x1717AF18: and dword ptr [esi + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0; /* 0x1717AF1C: and dword ptr [esi + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1717AF20: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1717AF21: ret  */
L_1717AFBF:
    RECOMP_BACKEDGE();
    goto L_1717AF06; /* 0x1717AFBF: jmp 0x1717af06 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1717AFC9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1717AFC9u);

L_1717AFC9:
    edi = edi; /* 0x1717AFC9: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1717AFCB: push ebp */
    ebp = esp; /* 0x1717AFCC: mov ebp, esp */
    eax = MEM32(ebp + 0x10); /* 0x1717AFCE: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x1717AFD1: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1717AFD4: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1717AFD5: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1717AFD8: push edi */
    PUSH32(esp, 4); /* 0x1717AFD9: push 4 */
    ecx = POP32_VAL(esp); /* 0x1717AFDB: pop ecx */
    edi = 0x1702AA2Cu; /* 0x1717AFDC: mov edi, 0x1702aa2c */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1717AFE1: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x1717AFE3: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_1717AFF8; /* 0x1717AFE5: je 0x1717aff8 */
L_1717AFE7:
    esi = MEM32(ebp + 0xC); /* 0x1717AFE7: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, 4); /* 0x1717AFEA: push 4 */
    ecx = POP32_VAL(esp); /* 0x1717AFEC: pop ecx */
    edi = 0x17001B40u; /* 0x1717AFED: mov edi, 0x17001b40 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1717AFF2: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x1717AFF4: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_1717B007; /* 0x1717AFF6: jne 0x1717b007 */
L_1717AFF8:
    ecx = MEM32(ebp + 0x8); /* 0x1717AFF8: mov ecx, dword ptr [ebp + 8] */
    MEM32(eax) = ecx; /* 0x1717AFFB: mov dword ptr [eax], ecx */
    eax = MEM32(ecx); /* 0x1717AFFD: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x1717AFFF: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1717B000: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1717B003: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1717B00C; /* 0x1717B005: jmp 0x1717b00c */
L_1717B007:
    eax = 0x80004002u; /* 0x1717B007: mov eax, 0x80004002 */
L_1717B00C:
    edi = POP32_VAL(esp); /* 0x1717B00C: pop edi */
    esi = POP32_VAL(esp); /* 0x1717B00D: pop esi */
    ebp = POP32_VAL(esp); /* 0x1717B00E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1717B00F: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1717B017(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1717B017u);

L_1717B017:
    eax = 0x1721C0A1u; /* 0x1717B017: mov eax, 0x1721c0a1 */
    RECOMP_CALL(sub_1721B168); /* 0x1717B01C: call 0x1721b168 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x94u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x94u; /* 0x1717B021: sub esp, 0x94 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1717B027: push ebx */
    PUSH32(esp, edi); /* 0x1717B028: push edi */
    edi = MEM32(ebp + 0xC); /* 0x1717B029: mov edi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1717B02C: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edi, ebx */ /* 0x1717B02E: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1717B03C; /* 0x1717B030: jne 0x1717b03c */
L_1717B032:
    eax = 0x8876086Cu; /* 0x1717B032: mov eax, 0x8876086c */
    goto L_1717B223; /* 0x1717B037: jmp 0x1717b223 */
L_1717B03C:
    PUSH32(esp, esi); /* 0x1717B03C: push esi */
    ecx = ebp + (-0x4C); /* 0x1717B03D: lea ecx, [ebp - 0x4c] */
    MEM32(ebp + (-0x14)) = ebx; /* 0x1717B040: mov dword ptr [ebp - 0x14], ebx */
    RECOMP_CALL(sub_170D7623); /* 0x1717B043: call 0x170d7623 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0x8); /* 0x1717B048: mov esi, dword ptr [ebp + 8] */
    ecx = esi; /* 0x1717B04B: mov ecx, esi */
    MEM32(ebp + (-0x4)) = ebx; /* 0x1717B04D: mov dword ptr [ebp - 4], ebx */
    MEM32(ebp + (-0x10)) = ebx; /* 0x1717B050: mov dword ptr [ebp - 0x10], ebx */
    MEM32(ebp + (-0x18)) = ebx; /* 0x1717B053: mov dword ptr [ebp - 0x18], ebx */
    RECOMP_CALL(sub_17176DD2); /* 0x1717B056: call 0x17176dd2 */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x1717B05B: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1717B066; /* 0x1717B05D: jge 0x1717b066 */
L_1717B05F:
    edi = eax; /* 0x1717B05F: mov edi, eax */
    goto L_1717B214; /* 0x1717B061: jmp 0x1717b214 */
L_1717B066:
    eax = MEM32(edi); /* 0x1717B066: mov eax, dword ptr [edi] */
    ecx = ebp + (-0x38); /* 0x1717B068: lea ecx, [ebp - 0x38] */
    PUSH32(esp, ecx); /* 0x1717B06B: push ecx */
    PUSH32(esp, ebx); /* 0x1717B06C: push ebx */
    PUSH32(esp, edi); /* 0x1717B06D: push edi */
    RECOMP_ICALL(MEM32(eax + 0x44)); /* 0x1717B06E: call dword ptr [eax + 0x44] */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x1717B071: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1717B05F; /* 0x1717B073: jl 0x1717b05f */
L_1717B075:
    eax = MEM32(ebp + (-0x38)); /* 0x1717B075: mov eax, dword ptr [ebp - 0x38] */
    /* cmp eax, 0x3Fu */ /* 0x1717B078: cmp eax, 0x3f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1717B096; /* 0x1717B07B: je 0x1717b096 */
L_1717B07D:
    /* cmp eax, 0x6Eu */ /* 0x1717B07D: cmp eax, 0x6e */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x6Eu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1717B096; /* 0x1717B080: je 0x1717b096 */
L_1717B082:
    /* cmp eax, 0x71u */ /* 0x1717B082: cmp eax, 0x71 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x71u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1717B096; /* 0x1717B085: je 0x1717b096 */
L_1717B087:
    /* cmp eax, 0x74u */ /* 0x1717B087: cmp eax, 0x74 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x74u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1717B096; /* 0x1717B08A: je 0x1717b096 */
L_1717B08C:
    edi = 0x8876086Cu; /* 0x1717B08C: mov edi, 0x8876086c */
    goto L_1717B214; /* 0x1717B091: jmp 0x1717b214 */
L_1717B096:
    eax = MEM32(ebp + (-0x1C)); /* 0x1717B096: mov eax, dword ptr [ebp - 0x1c] */
    /* cmp eax, MEM32(esi + 0x48) */ /* 0x1717B099: cmp eax, dword ptr [esi + 0x48] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x48));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1717B0AB; /* 0x1717B09C: jne 0x1717b0ab */
L_1717B09E:
    eax = MEM32(ebp + (-0x20)); /* 0x1717B09E: mov eax, dword ptr [ebp - 0x20] */
    /* cmp eax, MEM32(esi + 0x44) */ /* 0x1717B0A1: cmp eax, dword ptr [esi + 0x44] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x44));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1717B0AB; /* 0x1717B0A4: jne 0x1717b0ab */
L_1717B0A6:
    /* cmp MEM32(esi + 0x40), ebx */ /* 0x1717B0A6: cmp dword ptr [esi + 0x40], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x40)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1717B0DA; /* 0x1717B0A9: jne 0x1717b0da */
L_1717B0AB:
    PUSH32(esp, MEM32(esi + 0x40)); /* 0x1717B0AB: push dword ptr [esi + 0x40] */
    RECOMP_CALL(sub_1721B010); /* 0x1717B0AE: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x20)); /* 0x1717B0B3: mov eax, dword ptr [ebp - 0x20] */
    ecx = MEM32(ebp + (-0x1C)); /* 0x1717B0B6: mov ecx, dword ptr [ebp - 0x1c] */
    MEM32(esi + 0x44) = eax; /* 0x1717B0B9: mov dword ptr [esi + 0x44], eax */
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx); /* 0x1717B0BC: imul eax, ecx */
    eax = eax + eax * 2; /* 0x1717B0BF: lea eax, [eax + eax*2] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1717B0C2: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1717B0C2: shl eax, 2 */
    PUSH32(esp, eax); /* 0x1717B0C5: push eax */
    MEM32(esi + 0x40) = ebx; /* 0x1717B0C6: mov dword ptr [esi + 0x40], ebx */
    MEM32(esi + 0x48) = ecx; /* 0x1717B0C9: mov dword ptr [esi + 0x48], ecx */
    RECOMP_CALL(sub_1721B01C); /* 0x1717B0CC: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x1717B0D1: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x1717B0D3: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1717B0D4: pop ecx */
    MEM32(esi + 0x40) = eax; /* 0x1717B0D5: mov dword ptr [esi + 0x40], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1717B119; /* 0x1717B0D8: je 0x1717b119 */
L_1717B0DA:
    edi = MEM32(esi + 0x44); /* 0x1717B0DA: mov edi, dword ptr [esi + 0x44] */
    eax = edi; /* 0x1717B0DD: mov eax, edi */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x1717B0DF: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x1717B0DF: shl eax, 4 */
    PUSH32(esp, eax); /* 0x1717B0E2: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1717B0E3: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1717B0E8: pop ecx */
    MEM32(ebp + 0x8) = eax; /* 0x1717B0E9: mov dword ptr [ebp + 8], eax */
    /* cmp eax, ebx */ /* 0x1717B0EC: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x1717B0EE: mov byte ptr [ebp - 4], 1 */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1717B10A; /* 0x1717B0F2: je 0x1717b10a */
L_1717B0F4:
    PUSH32(esp, 0x1706E47Eu); /* 0x1717B0F4: push 0x1706e47e */
    PUSH32(esp, edi); /* 0x1717B0F9: push edi */
    PUSH32(esp, 0x10u); /* 0x1717B0FA: push 0x10 */
    PUSH32(esp, eax); /* 0x1717B0FC: push eax */
    RECOMP_CALL(sub_1702C116); /* 0x1717B0FD: call 0x1702c116 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1717B102: mov eax, dword ptr [ebp + 8] */
    MEM32(ebp + 0x8) = eax; /* 0x1717B105: mov dword ptr [ebp + 8], eax */
    goto L_1717B10F; /* 0x1717B108: jmp 0x1717b10f */
L_1717B10A:
    MEM32(ebp + 0x8) = ebx; /* 0x1717B10A: mov dword ptr [ebp + 8], ebx */
    eax = ebx; /* 0x1717B10D: mov eax, ebx */
L_1717B10F:
    /* cmp eax, ebx */ /* 0x1717B10F: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM8(ebp + (-0x4)) = (uint8_t)(LO8(ebx)); /* 0x1717B111: mov byte ptr [ebp - 4], bl */
    MEM32(ebp + (-0x18)) = eax; /* 0x1717B114: mov dword ptr [ebp - 0x18], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1717B123; /* 0x1717B117: jne 0x1717b123 */
L_1717B119:
    edi = 0x8007000Eu; /* 0x1717B119: mov edi, 0x8007000e */
    goto L_1717B1EE; /* 0x1717B11E: jmp 0x1717b1ee */
L_1717B123:
    eax = MEM32(ebp + 0xC); /* 0x1717B123: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x1717B126: mov ecx, dword ptr [eax] */
    edx = ebp + (-0x10); /* 0x1717B128: lea edx, [ebp - 0x10] */
    PUSH32(esp, edx); /* 0x1717B12B: push edx */
    PUSH32(esp, ebx); /* 0x1717B12C: push ebx */
    PUSH32(esp, eax); /* 0x1717B12D: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x48)); /* 0x1717B12E: call dword ptr [ecx + 0x48] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1717B131: mov edi, eax */
    /* cmp edi, ebx */ /* 0x1717B133: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1717B1EE; /* 0x1717B135: jl 0x1717b1ee */
L_1717B13B:
    PUSH32(esp, 1); /* 0x1717B13B: push 1 */
    PUSH32(esp, ebx); /* 0x1717B13D: push ebx */
    PUSH32(esp, ebx); /* 0x1717B13E: push ebx */
    PUSH32(esp, ebx); /* 0x1717B13F: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x1717B140: push dword ptr [ebp - 0x10] */
    eax = ebp + (-0xA0); /* 0x1717B143: lea eax, [ebp - 0xa0] */
    PUSH32(esp, eax); /* 0x1717B149: push eax */
    ecx = ebp + (-0x4C); /* 0x1717B14A: lea ecx, [ebp - 0x4c] */
    RECOMP_CALL(sub_170D7815); /* 0x1717B14D: call 0x170d7815 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1717B152: mov edi, eax */
    /* cmp edi, ebx */ /* 0x1717B154: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1717B1EE; /* 0x1717B156: jl 0x1717b1ee */
L_1717B15C:
    eax = ebp + (-0xA0); /* 0x1717B15C: lea eax, [ebp - 0xa0] */
    PUSH32(esp, eax); /* 0x1717B162: push eax */
    RECOMP_CALL(sub_170CE38C); /* 0x1717B163: call 0x170ce38c */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1717B168: mov ecx, eax */
    /* cmp ecx, ebx */ /* 0x1717B16A: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x14)) = ecx; /* 0x1717B16C: mov dword ptr [ebp - 0x14], ecx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1717B178; /* 0x1717B16F: jne 0x1717b178 */
L_1717B171:
    edi = 0x8876086Cu; /* 0x1717B171: mov edi, 0x8876086c */
    goto L_1717B1EE; /* 0x1717B176: jmp 0x1717b1ee */
L_1717B178:
    RECOMP_CALL(sub_170C4D09); /* 0x1717B178: call 0x170c4d09 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1717B17D: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x48), ebx */ /* 0x1717B17F: cmp dword ptr [esi + 0x48], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x48)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1717B1EC; /* 0x1717B182: jbe 0x1717b1ec */
L_1717B184:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1717B184: push dword ptr [ebp + 8] */
    ecx = MEM32(ebp + (-0x14)); /* 0x1717B187: mov ecx, dword ptr [ebp - 0x14] */
    eax = MEM32(ecx); /* 0x1717B18A: mov eax, dword ptr [ecx] */
    PUSH32(esp, ebx); /* 0x1717B18C: push ebx */
    PUSH32(esp, edi); /* 0x1717B18D: push edi */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1717B18E: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1717B191: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x44), ebx */ /* 0x1717B193: cmp dword ptr [esi + 0x44], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x44)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1717B1E6; /* 0x1717B196: jbe 0x1717b1e6 */
L_1717B198:
    ecx = MEM32(ebp + 0x8); /* 0x1717B198: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x1717B19B: add ecx, 8 */
    _flag_k = FK_ADD;
L_1717B19E:
    eax = MEM32(esi + 0x44); /* 0x1717B19E: mov eax, dword ptr [esi + 0x44] */
    fp_push(*(float*)&MEM32(ecx + (-0x8))); /* 0x1717B1A1: fld dword ptr [ecx - 8] */
    ebx = MEM32(esi + 0x40); /* 0x1717B1A4: mov ebx, dword ptr [esi + 0x40] */
    eax = (uint32_t)((int32_t)eax * (int32_t)edi); /* 0x1717B1A7: imul eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1717B1AA: add eax, edx */
    _flag_k = FK_ADD;
    eax = eax + eax * 2; /* 0x1717B1AC: lea eax, [eax + eax*2] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx + eax * 4) = _v; } /* 0x1717B1AF: fstp dword ptr [ebx + eax*4] */
    eax = MEM32(esi + 0x44); /* 0x1717B1B2: mov eax, dword ptr [esi + 0x44] */
    ebx = MEM32(esi + 0x40); /* 0x1717B1B5: mov ebx, dword ptr [esi + 0x40] */
    fp_push(*(float*)&MEM32(ecx + (-0x4))); /* 0x1717B1B8: fld dword ptr [ecx - 4] */
    eax = (uint32_t)((int32_t)eax * (int32_t)edi); /* 0x1717B1BB: imul eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1717B1BE: add eax, edx */
    _flag_k = FK_ADD;
    eax = eax + eax * 2; /* 0x1717B1C0: lea eax, [eax + eax*2] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx + eax * 4 + 0x4) = _v; } /* 0x1717B1C3: fstp dword ptr [ebx + eax*4 + 4] */
    eax = MEM32(esi + 0x44); /* 0x1717B1C7: mov eax, dword ptr [esi + 0x44] */
    fp_push(*(float*)&MEM32(ecx)); /* 0x1717B1CA: fld dword ptr [ecx] */
    ebx = MEM32(esi + 0x40); /* 0x1717B1CC: mov ebx, dword ptr [esi + 0x40] */
    eax = (uint32_t)((int32_t)eax * (int32_t)edi); /* 0x1717B1CF: imul eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1717B1D2: add eax, edx */
    _flag_k = FK_ADD;
    eax = eax + eax * 2; /* 0x1717B1D4: lea eax, [eax + eax*2] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1717B1D7: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x10u; /* 0x1717B1D8: add ecx, 0x10 */
    _flag_k = FK_ADD;
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx + eax * 4 + 0x8) = _v; } /* 0x1717B1DB: fstp dword ptr [ebx + eax*4 + 8] */
    /* cmp edx, MEM32(esi + 0x44) */ /* 0x1717B1DF: cmp edx, dword ptr [esi + 0x44] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esi + 0x44));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1717B19E; /* 0x1717B1E2: jb 0x1717b19e */
L_1717B1E4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1717B1E4: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1717B1E6:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1717B1E6: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(esi + 0x48) */ /* 0x1717B1E7: cmp edi, dword ptr [esi + 0x48] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x48));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1717B184; /* 0x1717B1EA: jb 0x1717b184 */
L_1717B1EC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1717B1EC: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1717B1EE:
    eax = MEM32(ebp + (-0x10)); /* 0x1717B1EE: mov eax, dword ptr [ebp - 0x10] */
    /* cmp eax, ebx */ /* 0x1717B1F1: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1717B1FE; /* 0x1717B1F3: je 0x1717b1fe */
L_1717B1F5:
    ecx = MEM32(eax); /* 0x1717B1F5: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1717B1F7: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1717B1F8: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x10)) = ebx; /* 0x1717B1FB: mov dword ptr [ebp - 0x10], ebx */
L_1717B1FE:
    ecx = MEM32(ebp + (-0x14)); /* 0x1717B1FE: mov ecx, dword ptr [ebp - 0x14] */
    /* cmp ecx, ebx */ /* 0x1717B201: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1717B20B; /* 0x1717B203: je 0x1717b20b */
L_1717B205:
    eax = MEM32(ecx); /* 0x1717B205: mov eax, dword ptr [ecx] */
    PUSH32(esp, 1); /* 0x1717B207: push 1 */
    RECOMP_ICALL(MEM32(eax)); /* 0x1717B209: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_1717B20B:
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x1717B20B: push dword ptr [ebp - 0x18] */
    RECOMP_CALL(sub_1721B010); /* 0x1717B20E: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1717B213: pop ecx */
L_1717B214:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1717B214: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x4C); /* 0x1717B218: lea ecx, [ebp - 0x4c] */
    RECOMP_CALL(sub_170D780B); /* 0x1717B21B: call 0x170d780b */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x1717B220: mov eax, edi */
    esi = POP32_VAL(esp); /* 0x1717B222: pop esi */
L_1717B223:
    ecx = MEM32(ebp + (-0xC)); /* 0x1717B223: mov ecx, dword ptr [ebp - 0xc] */
    edi = POP32_VAL(esp); /* 0x1717B226: pop edi */
    ebx = POP32_VAL(esp); /* 0x1717B227: pop ebx */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1717B228: mov dword ptr fs:[0], ecx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1717B22F: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1717B230: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1717B238(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1717B238u);

L_1717B238:
    edi = edi; /* 0x1717B238: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1717B23A: push ebp */
    ebp = esp; /* 0x1717B23B: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xE0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xE0u; /* 0x1717B23D: sub esp, 0xe0 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1717B243: push ebx */
    PUSH32(esp, esi); /* 0x1717B244: push esi */
    esi = MEM32(ebp + 0x1C); /* 0x1717B245: mov esi, dword ptr [ebp + 0x1c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1717B248: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp esi, eax */ /* 0x1717B24A: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x1717B24C: push edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1717B4C7; /* 0x1717B24D: je 0x1717b4c7 */
L_1717B253:
    /* cmp MEM32(ebp + 0x14), eax */ /* 0x1717B253: cmp dword ptr [ebp + 0x14], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1717B4C7; /* 0x1717B256: je 0x1717b4c7 */
L_1717B25C:
    /* cmp MEM32(ebp + 0x18), eax */ /* 0x1717B25C: cmp dword ptr [ebp + 0x18], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1717B4C7; /* 0x1717B25F: je 0x1717b4c7 */
L_1717B265:
    edi = MEM32(ebp + 0x8); /* 0x1717B265: mov edi, dword ptr [ebp + 8] */
    /* cmp MEM32(edi + 0x4), eax */ /* 0x1717B268: cmp dword ptr [edi + 4], eax */
    _flag_a = (uint32_t)(MEM32(edi + 0x4)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1717B4C7; /* 0x1717B26B: je 0x1717b4c7 */
L_1717B271:
    /* cmp MEM32(edi + 0x8), eax */ /* 0x1717B271: cmp dword ptr [edi + 8], eax */
    _flag_a = (uint32_t)(MEM32(edi + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1717B4C7; /* 0x1717B274: je 0x1717b4c7 */
L_1717B27A:
    eax = MEM32(esi); /* 0x1717B27A: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x1717B27C: push esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x1717B27D: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0xC)) = eax; /* 0x1717B280: mov dword ptr [ebp - 0xc], eax */
    eax = MEM32(esi); /* 0x1717B283: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x1717B285: push esi */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x1717B286: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = eax; /* 0x1717B289: mov dword ptr [ebp - 4], eax */
    eax = MEM32(esi); /* 0x1717B28C: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x1717B28E: push esi */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x1717B28F: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1717B292: mov ebx, eax */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(ebp + (-0x4))); /* 0x1717B294: imul ebx, dword ptr [ebp - 4] */
    MEM32(ebp + (-0x20)) = eax; /* 0x1717B298: mov dword ptr [ebp - 0x20], eax */
    eax = MEM32(ebp + 0xC); /* 0x1717B29B: mov eax, dword ptr [ebp + 0xc] */
    eax = (uint32_t)((int32_t)eax * (int32_t)eax); /* 0x1717B29E: imul eax, eax */
    /* cmp eax, MEM32(ebp + (-0x4)) */ /* 0x1717B2A1: cmp eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x1C)) = ebx; /* 0x1717B2A4: mov dword ptr [ebp - 0x1c], ebx */
    MEM32(ebp + (-0x8)) = eax; /* 0x1717B2A7: mov dword ptr [ebp - 8], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1717B4C7; /* 0x1717B2AA: jne 0x1717b4c7 */
L_1717B2B0:
    eax = MEM32(esi); /* 0x1717B2B0: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x1717B2B2: push esi */
    RECOMP_ICALL(MEM32(eax + 0x18)); /* 0x1717B2B3: call dword ptr [eax + 0x18] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1717B2B6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1717B4C7; /* 0x1717B2B8: jne 0x1717b4c7 */
L_1717B2BE:
    ecx = MEM32(ebp + (-0xC)); /* 0x1717B2BE: mov ecx, dword ptr [ebp - 0xc] */
    /* cmp MEM32(ebp + 0x10), ecx */ /* 0x1717B2C1: cmp dword ptr [ebp + 0x10], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1717B4C7; /* 0x1717B2C4: jne 0x1717b4c7 */
L_1717B2CA:
    eax = MEM32(edi + 0x8); /* 0x1717B2CA: mov eax, dword ptr [edi + 8] */
    eax = MEM32(eax + 0xC); /* 0x1717B2CD: mov eax, dword ptr [eax + 0xc] */
    /* test eax, eax */ /* 0x1717B2D0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x28)) = eax; /* 0x1717B2D2: mov dword ptr [ebp - 0x28], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1717B4C7; /* 0x1717B2D5: je 0x1717b4c7 */
L_1717B2DB:
    eax = MEM32(esi); /* 0x1717B2DB: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x14)) = MEM32(ebp + (-0x14)) & 0; /* 0x1717B2DD: and dword ptr [ebp - 0x14], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = ebp + (-0x14); /* 0x1717B2E1: lea edx, [ebp - 0x14] */
    PUSH32(esp, edx); /* 0x1717B2E4: push edx */
    PUSH32(esp, ecx); /* 0x1717B2E5: push ecx */
    PUSH32(esp, 0); /* 0x1717B2E6: push 0 */
    PUSH32(esp, esi); /* 0x1717B2E8: push esi */
    RECOMP_ICALL(MEM32(eax + 0x28)); /* 0x1717B2E9: call dword ptr [eax + 0x28] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1717B2EC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1717B4CC; /* 0x1717B2EE: jl 0x1717b4cc */
L_1717B2F4:
    eax = MEM32(edi + 0x8); /* 0x1717B2F4: mov eax, dword ptr [edi + 8] */
    eax = MEM32(eax + 0x8); /* 0x1717B2F7: mov eax, dword ptr [eax + 8] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1717B2FA: push dword ptr [ebp + 0x10] */
    ecx = edi; /* 0x1717B2FD: mov ecx, edi */
    MEM32(ebp + (-0x24)) = eax; /* 0x1717B2FF: mov dword ptr [ebp - 0x24], eax */
    RECOMP_CALL(sub_1717AE00); /* 0x1717B302: call 0x1717ae00 */
    RECOMP_FLAGS_IN();
    eax = ebx; /* 0x1717B307: mov eax, ebx */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x1717B309: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x1717B309: shl eax, 4 */
    PUSH32(esp, eax); /* 0x1717B30C: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1717B30D: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1717B312: pop ecx */
    ecx = eax + ebx * 4; /* 0x1717B313: lea ecx, [eax + ebx*4] */
    MEM32(ebp + (-0x2C)) = ecx; /* 0x1717B316: mov dword ptr [ebp - 0x2c], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1717B319: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ecx */ /* 0x1717B31B: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x10) = eax; /* 0x1717B31D: mov dword ptr [ebp + 0x10], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1717B32C; /* 0x1717B320: jne 0x1717b32c */
L_1717B322:
    edi = 0x8007000Eu; /* 0x1717B322: mov edi, 0x8007000e */
    goto L_1717B4AE; /* 0x1717B327: jmp 0x1717b4ae */
L_1717B32C:
    /* cmp MEM32(ebp + (-0xC)), ecx */ /* 0x1717B32C: cmp dword ptr [ebp - 0xc], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = ecx; /* 0x1717B32F: mov dword ptr [ebp - 4], ecx */
    if (CMP_BE(_flag_a, _flag_b)) goto L_1717B4A7; /* 0x1717B332: jbe 0x1717b4a7 */
L_1717B338:
    eax = MEM32(ebp + 0x14); /* 0x1717B338: mov eax, dword ptr [ebp + 0x14] */
    MEM32(ebp + (-0x10)) = ecx; /* 0x1717B33B: mov dword ptr [ebp - 0x10], ecx */
    ecx = MEM32(ebp + 0x18); /* 0x1717B33E: mov ecx, dword ptr [ebp + 0x18] */
    MEM32(ebp + 0x14) = eax; /* 0x1717B341: mov dword ptr [ebp + 0x14], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) - ecx; /* 0x1717B344: sub dword ptr [ebp + 0x14], ecx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x18)) = eax; /* 0x1717B347: mov dword ptr [ebp - 0x18], eax */
    ebx = ecx + 0x8; /* 0x1717B34A: lea ebx, [ecx + 8] */
    goto L_1717B352; /* 0x1717B34D: jmp 0x1717b352 */
L_1717B34F:
    eax = MEM32(ebp + (-0x18)); /* 0x1717B34F: mov eax, dword ptr [ebp - 0x18] */
L_1717B352:
    esi = ebx + (-0x8); /* 0x1717B352: lea esi, [ebx - 8] */
    fp_push(*(float*)&MEM32(esi)); /* 0x1717B355: fld dword ptr [esi] */
    ecx = MEM32(ebp + 0x8); /* 0x1717B357: mov ecx, dword ptr [ebp + 8] */
    _st[0] *= (double)*(float*)ADDR(0x17005DA4); /* 0x1717B35A: fmul dword ptr [0x17005da4] */
    edi = ebp + (-0x5C); /* 0x1717B360: lea edi, [ebp - 0x5c] */
    fp_push(*(float*)&MEM32(ebx + (-0x4))); /* 0x1717B363: fld dword ptr [ebx - 4] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1717B366: movsd dword ptr es:[edi], dword ptr [esi] */
    _st[0] *= (double)*(float*)ADDR(0x17005DA4); /* 0x1717B367: fmul dword ptr [0x17005da4] */
    fp_push(*(float*)&MEM32(ebx)); /* 0x1717B36D: fld dword ptr [ebx] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1717B36F: movsd dword ptr es:[edi], dword ptr [esi] */
    _st[0] *= (double)*(float*)ADDR(0x17005DA4); /* 0x1717B370: fmul dword ptr [0x17005da4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x84)) = _v; } /* 0x1717B376: fstp dword ptr [ebp - 0x84] */
    PUSH32(esp, 1); /* 0x1717B37C: push 1 */
    fp_push(_st[1]); /* 0x1717B37E: fld st(1) */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1717B380: movsd dword ptr es:[edi], dword ptr [esi] */
    _st[0] += (double)*(float*)ADDR(eax); /* 0x1717B381: fadd dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x50)) = _v; } /* 0x1717B383: fstp dword ptr [ebp - 0x50] */
    _st[0] += (double)*(float*)ADDR(eax + 0x4); /* 0x1717B386: fadd dword ptr [eax + 4] */
    eax = MEM32(ebp + 0x14); /* 0x1717B389: mov eax, dword ptr [ebp + 0x14] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4C)) = _v; } /* 0x1717B38C: fstp dword ptr [ebp - 0x4c] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1717B38F: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x84))); /* 0x1717B391: fld dword ptr [ebp - 0x84] */
    _st[0] += (double)*(float*)ADDR(eax + ebx); /* 0x1717B397: fadd dword ptr [eax + ebx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x48)) = _v; } /* 0x1717B39A: fstp dword ptr [ebp - 0x48] */
    RECOMP_CALL(sub_1717AE59); /* 0x1717B39D: call 0x1717ae59 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1717B3A2: mov edi, eax */
    /* test edi, edi */ /* 0x1717B3A4: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1717B4AB; /* 0x1717B3A6: jl 0x1717b4ab */
L_1717B3AC:
    esi = ebp + (-0x5C); /* 0x1717B3AC: lea esi, [ebp - 0x5c] */
    fp_push(1.0); /* 0x1717B3AF: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x38)) = _v; } /* 0x1717B3B1: fstp dword ptr [ebp - 0x38] */
    edi = ebp + (-0x68); /* 0x1717B3B4: lea edi, [ebp - 0x68] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1717B3B7: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_push(0.0); /* 0x1717B3B8: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x34)) = _v; } /* 0x1717B3BA: fstp dword ptr [ebp - 0x34] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1717B3BD: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_push(0.0); /* 0x1717B3BE: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x30)) = _v; } /* 0x1717B3C0: fstp dword ptr [ebp - 0x30] */
    fp_push(0.0); /* 0x1717B3C3: fldz  */
    eax = ebp + (-0x44); /* 0x1717B3C5: lea eax, [ebp - 0x44] */
    PUSH32(esp, eax); /* 0x1717B3C8: push eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x44)) = _v; } /* 0x1717B3C9: fstp dword ptr [ebp - 0x44] */
    eax = ebp + (-0x38); /* 0x1717B3CC: lea eax, [ebp - 0x38] */
    fp_push(1.0); /* 0x1717B3CF: fld1  */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1717B3D1: movsd dword ptr es:[edi], dword ptr [esi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x40)) = _v; } /* 0x1717B3D2: fstp dword ptr [ebp - 0x40] */
    fp_push(0.0); /* 0x1717B3D5: fldz  */
    PUSH32(esp, eax); /* 0x1717B3D7: push eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x3C)) = _v; } /* 0x1717B3D8: fstp dword ptr [ebp - 0x3c] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1717B3DB: sub esp, 0xc */
    _flag_k = FK_CMP;
    edi = esp; /* 0x1717B3DE: mov edi, esp */
    esi = ebp + (-0x5C); /* 0x1717B3E0: lea esi, [ebp - 0x5c] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1717B3E3: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1717B3E4: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1717B3E5: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_1717AC2B); /* 0x1717B3E6: call 0x1717ac2b */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x1C)); /* 0x1717B3EB: mov ecx, dword ptr [ebp - 0x1c] */
    /* test ecx, ecx */ /* 0x1717B3EE: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    esi = ebp + (-0x38); /* 0x1717B3F0: lea esi, [ebp - 0x38] */
    edi = ebp + (-0x80); /* 0x1717B3F3: lea edi, [ebp - 0x80] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1717B3F6: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1717B3F7: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1717B3F8: movsd dword ptr es:[edi], dword ptr [esi] */
    esi = ebp + (-0x44); /* 0x1717B3F9: lea esi, [ebp - 0x44] */
    edi = ebp + (-0x74); /* 0x1717B3FC: lea edi, [ebp - 0x74] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1717B3FF: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1717B400: movsd dword ptr es:[edi], dword ptr [esi] */
    SET_LO8(edx, LO8(eax)); /* 0x1717B401: mov dl, al */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1717B403: movsd dword ptr es:[edi], dword ptr [esi] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1717B40D; /* 0x1717B404: jbe 0x1717b40d */
L_1717B406:
    edi = MEM32(ebp + 0x10); /* 0x1717B406: mov edi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1717B409: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x1717B40B: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
L_1717B40D:
    /* test LO8(edx), LO8(edx) */ /* 0x1717B40D: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1717B452; /* 0x1717B40F: je 0x1717b452 */
L_1717B411:
    PUSH32(esp, MEM32(ebp + (-0x2C))); /* 0x1717B411: push dword ptr [ebp - 0x2c] */
    esi = MEM32(ebp + 0x8); /* 0x1717B414: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1717B417: push dword ptr [ebp + 0x10] */
    eax = ebp + (-0x68); /* 0x1717B41A: lea eax, [ebp - 0x68] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1717B41D: push dword ptr [ebp + 0xc] */
    ecx = ebp + (-0xE0); /* 0x1717B420: lea ecx, [ebp - 0xe0] */
    PUSH32(esp, 1); /* 0x1717B426: push 1 */
    PUSH32(esp, eax); /* 0x1717B428: push eax */
    eax = ebp + (-0x74); /* 0x1717B429: lea eax, [ebp - 0x74] */
    PUSH32(esp, eax); /* 0x1717B42C: push eax */
    eax = ebp + (-0x80); /* 0x1717B42D: lea eax, [ebp - 0x80] */
    PUSH32(esp, eax); /* 0x1717B430: push eax */
    eax = MEM32(esi + 0x8); /* 0x1717B431: mov eax, dword ptr [esi + 8] */
    PUSH32(esp, MEM32(eax + 0x10)); /* 0x1717B434: push dword ptr [eax + 0x10] */
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x1717B437: push dword ptr [ebp - 0x28] */
    RECOMP_CALL(sub_1717AD6E); /* 0x1717B43A: call 0x1717ad6e */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x4); /* 0x1717B43F: mov ecx, dword ptr [esi + 4] */
    eax = MEM32(ecx); /* 0x1717B442: mov eax, dword ptr [ecx] */
    edx = ebp + (-0xE0); /* 0x1717B444: lea edx, [ebp - 0xe0] */
    PUSH32(esp, edx); /* 0x1717B44A: push edx */
    edx = ebp + (-0x50); /* 0x1717B44B: lea edx, [ebp - 0x50] */
    PUSH32(esp, edx); /* 0x1717B44E: push edx */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x1717B44F: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
L_1717B452:
    esi = MEM32(ebp + (-0x20)); /* 0x1717B452: mov esi, dword ptr [ebp - 0x20] */
    /* test esi, esi */ /* 0x1717B455: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1717B488; /* 0x1717B457: jbe 0x1717b488 */
L_1717B459:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1717B459: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1717B45B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1717B45B: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x8)), ecx */ /* 0x1717B45D: cmp dword ptr [ebp - 8], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1717B482; /* 0x1717B460: jbe 0x1717b482 */
L_1717B462:
    eax = MEM32(ebp + (-0x10)); /* 0x1717B462: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1717B465: add eax, edx */
    _flag_k = FK_ADD;
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1717B467: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1717B467: shl eax, 2 */
L_1717B46A:
    edi = MEM32(ebp + 0x10); /* 0x1717B46A: mov edi, dword ptr [ebp + 0x10] */
    fp_push(*(float*)&MEM32(ebp + (-0x24))); /* 0x1717B46D: fld dword ptr [ebp - 0x24] */
    _st[0] *= (double)*(float*)ADDR(edi + ecx * 4); /* 0x1717B470: fmul dword ptr [edi + ecx*4] */
    edi = MEM32(ebp + (-0x14)); /* 0x1717B473: mov edi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1717B476: inc ecx */
    _flag_k = FK_INC;
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + edi) = _v; } /* 0x1717B477: fstp dword ptr [eax + edi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1717B47A: add eax, 4 */
    _flag_k = FK_ADD;
    /* cmp ecx, MEM32(ebp + (-0x8)) */ /* 0x1717B47D: cmp ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1717B46A; /* 0x1717B480: jb 0x1717b46a */
L_1717B482:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + (-0x8)); /* 0x1717B482: add edx, dword ptr [ebp - 8] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1717B485: dec esi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1717B45B; /* 0x1717B486: jne 0x1717b45b */
L_1717B488:
    eax = MEM32(ebp + (-0x1C)); /* 0x1717B488: mov eax, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 1; /* 0x1717B48B: inc dword ptr [ebp - 4] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) + eax; /* 0x1717B48E: add dword ptr [ebp - 0x10], eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x4)); /* 0x1717B491: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x18)) = MEM32(ebp + (-0x18)) + 0xCu; /* 0x1717B494: add dword ptr [ebp - 0x18], 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0xCu; /* 0x1717B498: add ebx, 0xc */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(ebp + (-0xC)) */ /* 0x1717B49B: cmp eax, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1717B34F; /* 0x1717B49E: jb 0x1717b34f */
L_1717B4A4:
    esi = MEM32(ebp + 0x1C); /* 0x1717B4A4: mov esi, dword ptr [ebp + 0x1c] */
L_1717B4A7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1717B4A7: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1717B4AE; /* 0x1717B4A9: jmp 0x1717b4ae */
L_1717B4AB:
    esi = MEM32(ebp + 0x1C); /* 0x1717B4AB: mov esi, dword ptr [ebp + 0x1c] */
L_1717B4AE:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1717B4AE: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1721B010); /* 0x1717B4B1: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x14)), 0 */ /* 0x1717B4B6: cmp dword ptr [ebp - 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x1717B4BA: pop ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1717B4C3; /* 0x1717B4BB: je 0x1717b4c3 */
L_1717B4BD:
    eax = MEM32(esi); /* 0x1717B4BD: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x1717B4BF: push esi */
    RECOMP_ICALL(MEM32(eax + 0x2C)); /* 0x1717B4C0: call dword ptr [eax + 0x2c] */
    RECOMP_FLAGS_IN();
L_1717B4C3:
    eax = edi; /* 0x1717B4C3: mov eax, edi */
    goto L_1717B4CC; /* 0x1717B4C5: jmp 0x1717b4cc */
L_1717B4C7:
    eax = 0x8876086Cu; /* 0x1717B4C7: mov eax, 0x8876086c */
L_1717B4CC:
    edi = POP32_VAL(esp); /* 0x1717B4CC: pop edi */
    esi = POP32_VAL(esp); /* 0x1717B4CD: pop esi */
    ebx = POP32_VAL(esp); /* 0x1717B4CE: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1717B4CF: leave  */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x1717B4D0: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_1717B4D8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1717B4D8u);

L_1717B4D8:
    edi = edi; /* 0x1717B4D8: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1717B4DA: push ebp */
    ebp = esp; /* 0x1717B4DB: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x100u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x100u; /* 0x1717B4DD: sub esp, 0x100 */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0xC); /* 0x1717B4E3: mov eax, dword ptr [ebp + 0xc] */
    eax = (uint32_t)((int32_t)eax * (int32_t)eax); /* 0x1717B4E6: imul eax, eax */
    PUSH32(esp, ebx); /* 0x1717B4E9: push ebx */
    ebx = ecx; /* 0x1717B4EA: mov ebx, ecx */
    ecx = eax; /* 0x1717B4EC: mov ecx, eax */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + 0x10)); /* 0x1717B4EE: imul ecx, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x14)) = eax; /* 0x1717B4F2: mov dword ptr [ebp - 0x14], eax */
    eax = MEM32(ebx + 0x8); /* 0x1717B4F5: mov eax, dword ptr [ebx + 8] */
    eax = MEM32(eax + 0xC); /* 0x1717B4F8: mov eax, dword ptr [eax + 0xc] */
    PUSH32(esp, esi); /* 0x1717B4FB: push esi */
    PUSH32(esp, edi); /* 0x1717B4FC: push edi */
    MEM32(ebp + (-0x24)) = eax; /* 0x1717B4FD: mov dword ptr [ebp - 0x24], eax */
    eax = MEM32(ebx + 0x4); /* 0x1717B500: mov eax, dword ptr [ebx + 4] */
    edx = MEM32(eax + 0x94); /* 0x1717B503: mov edx, dword ptr [eax + 0x94] */
    esi = eax + 0x6C; /* 0x1717B509: lea esi, [eax + 0x6c] */
    fp_push(*(float*)&MEM32(eax + 0x94)); /* 0x1717B50C: fld dword ptr [eax + 0x94] */
    edi = ebp + (-0x64); /* 0x1717B512: lea edi, [ebp - 0x64] */
    _st[0] *= (double)*(float*)ADDR(0x17005DA4); /* 0x1717B515: fmul dword ptr [0x17005da4] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1717B51B: movsd dword ptr es:[edi], dword ptr [esi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x1717B51C: fstp dword ptr [ebp - 0x1c] */
    MEM32(ebp + (-0x18)) = edx; /* 0x1717B51F: mov dword ptr [ebp - 0x18], edx */
    edx = MEM32(ebx + 0x8); /* 0x1717B522: mov edx, dword ptr [ebx + 8] */
    edx = MEM32(edx + 0x8); /* 0x1717B525: mov edx, dword ptr [edx + 8] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1717B528: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(ebp + (-0x8)) = ecx; /* 0x1717B529: mov dword ptr [ebp - 8], ecx */
    if (4u) _cf = (((ecx) >> 28) & 1u); /* 0x1717B52C: shl ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ecx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 4u; /* 0x1717B52C: shl ecx, 4 */
    PUSH32(esp, ecx); /* 0x1717B52F: push ecx */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1717B530: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(ebp + (-0x28)) = edx; /* 0x1717B531: mov dword ptr [ebp - 0x28], edx */
    RECOMP_CALL(sub_1721B01C); /* 0x1717B534: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1717B539: pop ecx */
    ecx = MEM32(ebp + (-0x8)); /* 0x1717B53A: mov ecx, dword ptr [ebp - 8] */
    ecx = eax + ecx * 4; /* 0x1717B53D: lea ecx, [eax + ecx*4] */
    MEM32(ebp + (-0x20)) = ecx; /* 0x1717B540: mov dword ptr [ebp - 0x20], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1717B543: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ecx */ /* 0x1717B545: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = eax; /* 0x1717B547: mov dword ptr [ebp - 4], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1717B556; /* 0x1717B54A: jne 0x1717b556 */
L_1717B54C:
    esi = 0x8007000Eu; /* 0x1717B54C: mov esi, 0x8007000e */
    goto L_1717B6F6; /* 0x1717B551: jmp 0x1717b6f6 */
L_1717B556:
    /* cmp MEM32(ebp + 0x8), ecx */ /* 0x1717B556: cmp dword ptr [ebp + 8], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x10)) = ecx; /* 0x1717B559: mov dword ptr [ebp - 0x10], ecx */
    if (CMP_BE(_flag_a, _flag_b)) goto L_1717B6F4; /* 0x1717B55C: jbe 0x1717b6f4 */
L_1717B562:
    eax = MEM32(ebp + 0x14); /* 0x1717B562: mov eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x14u; /* 0x1717B565: add eax, 0x14 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xC)) = ecx; /* 0x1717B568: mov dword ptr [ebp - 0xc], ecx */
    MEM32(ebp + 0x14) = eax; /* 0x1717B56B: mov dword ptr [ebp + 0x14], eax */
    goto L_1717B573; /* 0x1717B56E: jmp 0x1717b573 */
L_1717B570:
    eax = MEM32(ebp + 0x14); /* 0x1717B570: mov eax, dword ptr [ebp + 0x14] */
L_1717B573:
    fp_push(*(float*)&MEM32(ebp + (-0x1C))); /* 0x1717B573: fld dword ptr [ebp - 0x1c] */
    esi = eax + (-0x8); /* 0x1717B576: lea esi, [eax - 8] */
    _st[0] *= (double)*(float*)ADDR(esi); /* 0x1717B579: fmul dword ptr [esi] */
    edi = ebp + (-0x70); /* 0x1717B57B: lea edi, [ebp - 0x70] */
    fp_push(*(float*)&MEM32(ebp + (-0x1C))); /* 0x1717B57E: fld dword ptr [ebp - 0x1c] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1717B581: movsd dword ptr es:[edi], dword ptr [esi] */
    _st[0] *= (double)*(float*)ADDR(eax + (-0x4)); /* 0x1717B582: fmul dword ptr [eax - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x1C))); /* 0x1717B585: fld dword ptr [ebp - 0x1c] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1717B588: movsd dword ptr es:[edi], dword ptr [esi] */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x1717B589: fmul dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8C)) = _v; } /* 0x1717B58B: fstp dword ptr [ebp - 0x8c] */
    PUSH32(esp, 1); /* 0x1717B591: push 1 */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x1717B593: fld dword ptr [ebp - 0x18] */
    ecx = ebx; /* 0x1717B596: mov ecx, ebx */
    _st[0] *= (double)*(float*)ADDR(eax + (-0x14)); /* 0x1717B598: fmul dword ptr [eax - 0x14] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1717B59B: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x1717B59C: fld dword ptr [ebp - 0x18] */
    _st[0] *= (double)*(float*)ADDR(eax + (-0x10)); /* 0x1717B59F: fmul dword ptr [eax - 0x10] */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x1717B5A2: fld dword ptr [ebp - 0x18] */
    _st[0] *= (double)*(float*)ADDR(eax + (-0xC)); /* 0x1717B5A5: fmul dword ptr [eax - 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x74)) = _v; } /* 0x1717B5A8: fstp dword ptr [ebp - 0x74] */
    fp_push(*(float*)&MEM32(ebp + (-0x64))); /* 0x1717B5AB: fld dword ptr [ebp - 0x64] */
    _st[0] += _st[2]; /* 0x1717B5AE: fadd st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4C)) = _v; } /* 0x1717B5B0: fstp dword ptr [ebp - 0x4c] */
    fp_push(*(float*)&MEM32(ebp + (-0x60))); /* 0x1717B5B3: fld dword ptr [ebp - 0x60] */
    _st[0] += _st[1]; /* 0x1717B5B6: fadd st(1) */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x1717B5B8: fstp st(2) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1717B5BA: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x5C))); /* 0x1717B5BC: fld dword ptr [ebp - 0x5c] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x74)); /* 0x1717B5BF: fadd dword ptr [ebp - 0x74] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x44)) = _v; } /* 0x1717B5C2: fstp dword ptr [ebp - 0x44] */
    fp_push(*(float*)&MEM32(ebp + (-0x4C))); /* 0x1717B5C5: fld dword ptr [ebp - 0x4c] */
    _st[0] += _st[3]; /* 0x1717B5C8: fadd st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x58)) = _v; } /* 0x1717B5CA: fstp dword ptr [ebp - 0x58] */
    _st[0] += _st[1]; /* 0x1717B5CD: fadd st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x54)) = _v; } /* 0x1717B5CF: fstp dword ptr [ebp - 0x54] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1717B5D2: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1717B5D4: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x44))); /* 0x1717B5D6: fld dword ptr [ebp - 0x44] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x8C)); /* 0x1717B5D9: fadd dword ptr [ebp - 0x8c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x50)) = _v; } /* 0x1717B5DF: fstp dword ptr [ebp - 0x50] */
    RECOMP_CALL(sub_1717AEAE); /* 0x1717B5E2: call 0x1717aeae */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1717B5E7: mov esi, eax */
    /* test esi, esi */ /* 0x1717B5E9: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1717B6F6; /* 0x1717B5EB: jl 0x1717b6f6 */
L_1717B5F1:
    esi = ebp + (-0x70); /* 0x1717B5F1: lea esi, [ebp - 0x70] */
    fp_push(1.0); /* 0x1717B5F4: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x34)) = _v; } /* 0x1717B5F6: fstp dword ptr [ebp - 0x34] */
    edi = ebp + (-0xAC); /* 0x1717B5F9: lea edi, [ebp - 0xac] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1717B5FF: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_push(0.0); /* 0x1717B600: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x30)) = _v; } /* 0x1717B602: fstp dword ptr [ebp - 0x30] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1717B605: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_push(0.0); /* 0x1717B606: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x2C)) = _v; } /* 0x1717B608: fstp dword ptr [ebp - 0x2c] */
    fp_push(0.0); /* 0x1717B60B: fldz  */
    eax = ebp + (-0x40); /* 0x1717B60D: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x1717B610: push eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x40)) = _v; } /* 0x1717B611: fstp dword ptr [ebp - 0x40] */
    eax = ebp + (-0x34); /* 0x1717B614: lea eax, [ebp - 0x34] */
    fp_push(1.0); /* 0x1717B617: fld1  */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1717B619: movsd dword ptr es:[edi], dword ptr [esi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x3C)) = _v; } /* 0x1717B61A: fstp dword ptr [ebp - 0x3c] */
    fp_push(0.0); /* 0x1717B61D: fldz  */
    PUSH32(esp, eax); /* 0x1717B61F: push eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x38)) = _v; } /* 0x1717B620: fstp dword ptr [ebp - 0x38] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1717B623: sub esp, 0xc */
    _flag_k = FK_CMP;
    edi = esp; /* 0x1717B626: mov edi, esp */
    esi = ebp + (-0x70); /* 0x1717B628: lea esi, [ebp - 0x70] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1717B62B: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1717B62C: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1717B62D: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_1717AC2B); /* 0x1717B62E: call 0x1717ac2b */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x8)); /* 0x1717B633: mov ecx, dword ptr [ebp - 8] */
    /* test ecx, ecx */ /* 0x1717B636: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    esi = ebp + (-0x34); /* 0x1717B638: lea esi, [ebp - 0x34] */
    edi = ebp + (-0xA0); /* 0x1717B63B: lea edi, [ebp - 0xa0] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1717B641: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1717B642: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1717B643: movsd dword ptr es:[edi], dword ptr [esi] */
    esi = ebp + (-0x40); /* 0x1717B644: lea esi, [ebp - 0x40] */
    edi = ebp + (-0x88); /* 0x1717B647: lea edi, [ebp - 0x88] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1717B64D: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1717B64E: movsd dword ptr es:[edi], dword ptr [esi] */
    SET_LO8(edx, LO8(eax)); /* 0x1717B64F: mov dl, al */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1717B651: movsd dword ptr es:[edi], dword ptr [esi] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1717B65B; /* 0x1717B652: jbe 0x1717b65b */
L_1717B654:
    edi = MEM32(ebp + (-0x4)); /* 0x1717B654: mov edi, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1717B657: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x1717B659: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
L_1717B65B:
    /* test LO8(edx), LO8(edx) */ /* 0x1717B65B: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1717B6A6; /* 0x1717B65D: je 0x1717b6a6 */
L_1717B65F:
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x1717B65F: push dword ptr [ebp - 0x20] */
    eax = ebp + (-0xAC); /* 0x1717B662: lea eax, [ebp - 0xac] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1717B668: push dword ptr [ebp - 4] */
    ecx = ebp + (-0x100); /* 0x1717B66B: lea ecx, [ebp - 0x100] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1717B671: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 1); /* 0x1717B674: push 1 */
    PUSH32(esp, eax); /* 0x1717B676: push eax */
    eax = ebp + (-0x88); /* 0x1717B677: lea eax, [ebp - 0x88] */
    PUSH32(esp, eax); /* 0x1717B67D: push eax */
    eax = ebp + (-0xA0); /* 0x1717B67E: lea eax, [ebp - 0xa0] */
    PUSH32(esp, eax); /* 0x1717B684: push eax */
    eax = MEM32(ebx + 0x8); /* 0x1717B685: mov eax, dword ptr [ebx + 8] */
    PUSH32(esp, MEM32(eax + 0x10)); /* 0x1717B688: push dword ptr [eax + 0x10] */
    PUSH32(esp, MEM32(ebp + (-0x24))); /* 0x1717B68B: push dword ptr [ebp - 0x24] */
    RECOMP_CALL(sub_1717AD6E); /* 0x1717B68E: call 0x1717ad6e */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx + 0x4); /* 0x1717B693: mov ecx, dword ptr [ebx + 4] */
    eax = MEM32(ecx); /* 0x1717B696: mov eax, dword ptr [ecx] */
    edx = ebp + (-0x100); /* 0x1717B698: lea edx, [ebp - 0x100] */
    PUSH32(esp, edx); /* 0x1717B69E: push edx */
    edx = ebp + (-0x58); /* 0x1717B69F: lea edx, [ebp - 0x58] */
    PUSH32(esp, edx); /* 0x1717B6A2: push edx */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x1717B6A3: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
L_1717B6A6:
    esi = MEM32(ebp + 0x10); /* 0x1717B6A6: mov esi, dword ptr [ebp + 0x10] */
    /* test esi, esi */ /* 0x1717B6A9: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1717B6DB; /* 0x1717B6AB: jbe 0x1717b6db */
L_1717B6AD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1717B6AD: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1717B6AF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1717B6AF: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x14)), ecx */ /* 0x1717B6B1: cmp dword ptr [ebp - 0x14], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1717B6D5; /* 0x1717B6B4: jbe 0x1717b6d5 */
L_1717B6B6:
    eax = MEM32(ebp + (-0xC)); /* 0x1717B6B6: mov eax, dword ptr [ebp - 0xc] */
    edi = MEM32(ebp + 0x18); /* 0x1717B6B9: mov edi, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1717B6BC: add eax, edx */
    _flag_k = FK_ADD;
    eax = edi + eax * 4; /* 0x1717B6BE: lea eax, [edi + eax*4] */
L_1717B6C1:
    fp_push(*(float*)&MEM32(ebp + (-0x28))); /* 0x1717B6C1: fld dword ptr [ebp - 0x28] */
    edi = MEM32(ebp + (-0x4)); /* 0x1717B6C4: mov edi, dword ptr [ebp - 4] */
    _st[0] *= (double)*(float*)ADDR(edi + ecx * 4); /* 0x1717B6C7: fmul dword ptr [edi + ecx*4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1717B6CA: inc ecx */
    _flag_k = FK_INC;
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x1717B6CB: fstp dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1717B6CD: add eax, 4 */
    _flag_k = FK_ADD;
    /* cmp ecx, MEM32(ebp + (-0x14)) */ /* 0x1717B6D0: cmp ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x14)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1717B6C1; /* 0x1717B6D3: jb 0x1717b6c1 */
L_1717B6D5:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x14)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + (-0x14)); /* 0x1717B6D5: add edx, dword ptr [ebp - 0x14] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1717B6D8: dec esi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1717B6AF; /* 0x1717B6D9: jne 0x1717b6af */
L_1717B6DB:
    eax = MEM32(ebp + (-0x8)); /* 0x1717B6DB: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) + 1; /* 0x1717B6DE: inc dword ptr [ebp - 0x10] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) + eax; /* 0x1717B6E1: add dword ptr [ebp - 0xc], eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x10)); /* 0x1717B6E4: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) + 0x18u; /* 0x1717B6E7: add dword ptr [ebp + 0x14], 0x18 */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(ebp + 0x8) */ /* 0x1717B6EB: cmp eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1717B570; /* 0x1717B6EE: jb 0x1717b570 */
L_1717B6F4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1717B6F4: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1717B6F6:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1717B6F6: push dword ptr [ebp - 4] */
    RECOMP_CALL(sub_1721B010); /* 0x1717B6F9: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1717B6FE: pop ecx */
    edi = POP32_VAL(esp); /* 0x1717B6FF: pop edi */
    eax = esi; /* 0x1717B700: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1717B702: pop esi */
    ebx = POP32_VAL(esp); /* 0x1717B703: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1717B704: leave  */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x1717B705: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_1717B70D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1717B70Du);

L_1717B70D:
    edi = edi; /* 0x1717B70D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1717B70F: push ebp */
    ebp = esp; /* 0x1717B710: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xA4u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xA4u; /* 0x1717B712: sub esp, 0xa4 */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0xC); /* 0x1717B718: mov eax, dword ptr [ebp + 0xc] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x10)); /* 0x1717B71B: imul eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x1717B71F: push ebx */
    PUSH32(esp, esi); /* 0x1717B720: push esi */
    PUSH32(esp, edi); /* 0x1717B721: push edi */
    MEM32(ebp + (-0x18)) = eax; /* 0x1717B722: mov dword ptr [ebp - 0x18], eax */
    eax = MEM32(ecx + 0x4); /* 0x1717B725: mov eax, dword ptr [ecx + 4] */
    edx = MEM32(eax + 0x94); /* 0x1717B728: mov edx, dword ptr [eax + 0x94] */
    esi = eax + 0x6C; /* 0x1717B72E: lea esi, [eax + 0x6c] */
    fp_push(*(float*)&MEM32(eax + 0x94)); /* 0x1717B731: fld dword ptr [eax + 0x94] */
    edi = ebp + (-0x44); /* 0x1717B737: lea edi, [ebp - 0x44] */
    _st[0] *= (double)*(float*)ADDR(0x17005DA4); /* 0x1717B73A: fmul dword ptr [0x17005da4] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1717B740: movsd dword ptr es:[edi], dword ptr [esi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x1717B741: fstp dword ptr [ebp - 0x10] */
    MEM32(ebp + (-0xC)) = edx; /* 0x1717B744: mov dword ptr [ebp - 0xc], edx */
    edx = MEM32(ecx + 0x8); /* 0x1717B747: mov edx, dword ptr [ecx + 8] */
    edx = MEM32(edx + 0x8); /* 0x1717B74A: mov edx, dword ptr [edx + 8] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1717B74D: movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1717B74E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x8), eax */ /* 0x1717B750: cmp dword ptr [ebp + 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x14)) = ecx; /* 0x1717B753: mov dword ptr [ebp - 0x14], ecx */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1717B756: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(ebp + (-0x20)) = edx; /* 0x1717B757: mov dword ptr [ebp - 0x20], edx */
    MEM32(ebp + (-0x4)) = eax; /* 0x1717B75A: mov dword ptr [ebp - 4], eax */
    if (CMP_BE(_flag_a, _flag_b)) goto L_1717B8E2; /* 0x1717B75D: jbe 0x1717b8e2 */
L_1717B763:
    ebx = MEM32(ebp + 0x14); /* 0x1717B763: mov ebx, dword ptr [ebp + 0x14] */
    MEM32(ebp + (-0x8)) = eax; /* 0x1717B766: mov dword ptr [ebp - 8], eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x14u; /* 0x1717B769: add ebx, 0x14 */
    _flag_k = FK_ADD;
    goto L_1717B771; /* 0x1717B76C: jmp 0x1717b771 */
L_1717B76E:
    ecx = MEM32(ebp + (-0x14)); /* 0x1717B76E: mov ecx, dword ptr [ebp - 0x14] */
L_1717B771:
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x1717B771: fld dword ptr [ebp - 0x10] */
    esi = ebx + (-0x8); /* 0x1717B774: lea esi, [ebx - 8] */
    _st[0] *= (double)*(float*)ADDR(esi); /* 0x1717B777: fmul dword ptr [esi] */
    edi = ebp + (-0x68); /* 0x1717B779: lea edi, [ebp - 0x68] */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x1717B77C: fld dword ptr [ebp - 0x10] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1717B77F: movsd dword ptr es:[edi], dword ptr [esi] */
    _st[0] *= (double)*(float*)ADDR(ebx + (-0x4)); /* 0x1717B780: fmul dword ptr [ebx - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x1717B783: fld dword ptr [ebp - 0x10] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1717B786: movsd dword ptr es:[edi], dword ptr [esi] */
    _st[0] *= (double)*(float*)ADDR(ebx); /* 0x1717B787: fmul dword ptr [ebx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x90)) = _v; } /* 0x1717B789: fstp dword ptr [ebp - 0x90] */
    PUSH32(esp, 1); /* 0x1717B78F: push 1 */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x1717B791: fld dword ptr [ebp - 0xc] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1717B794: movsd dword ptr es:[edi], dword ptr [esi] */
    _st[0] *= (double)*(float*)ADDR(ebx + (-0x14)); /* 0x1717B795: fmul dword ptr [ebx - 0x14] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x1717B798: fld dword ptr [ebp - 0xc] */
    _st[0] *= (double)*(float*)ADDR(ebx + (-0x10)); /* 0x1717B79B: fmul dword ptr [ebx - 0x10] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x1717B79E: fld dword ptr [ebp - 0xc] */
    _st[0] *= (double)*(float*)ADDR(ebx + (-0xC)); /* 0x1717B7A1: fmul dword ptr [ebx - 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x78)) = _v; } /* 0x1717B7A4: fstp dword ptr [ebp - 0x78] */
    fp_push(*(float*)&MEM32(ebp + (-0x44))); /* 0x1717B7A7: fld dword ptr [ebp - 0x44] */
    _st[0] += _st[2]; /* 0x1717B7AA: fadd st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x50)) = _v; } /* 0x1717B7AC: fstp dword ptr [ebp - 0x50] */
    fp_push(*(float*)&MEM32(ebp + (-0x40))); /* 0x1717B7AF: fld dword ptr [ebp - 0x40] */
    _st[0] += _st[1]; /* 0x1717B7B2: fadd st(1) */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x1717B7B4: fstp st(2) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1717B7B6: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x3C))); /* 0x1717B7B8: fld dword ptr [ebp - 0x3c] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x78)); /* 0x1717B7BB: fadd dword ptr [ebp - 0x78] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x48)) = _v; } /* 0x1717B7BE: fstp dword ptr [ebp - 0x48] */
    fp_push(*(float*)&MEM32(ebp + (-0x50))); /* 0x1717B7C1: fld dword ptr [ebp - 0x50] */
    _st[0] += _st[3]; /* 0x1717B7C4: fadd st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x5C)) = _v; } /* 0x1717B7C6: fstp dword ptr [ebp - 0x5c] */
    _st[0] += _st[1]; /* 0x1717B7C9: fadd st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x58)) = _v; } /* 0x1717B7CB: fstp dword ptr [ebp - 0x58] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1717B7CE: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1717B7D0: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x48))); /* 0x1717B7D2: fld dword ptr [ebp - 0x48] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x90)); /* 0x1717B7D5: fadd dword ptr [ebp - 0x90] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x54)) = _v; } /* 0x1717B7DB: fstp dword ptr [ebp - 0x54] */
    RECOMP_CALL(sub_1717AEAE); /* 0x1717B7DE: call 0x1717aeae */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1717B7E3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1717B8E4; /* 0x1717B7E5: jl 0x1717b8e4 */
L_1717B7EB:
    esi = ebp + (-0x68); /* 0x1717B7EB: lea esi, [ebp - 0x68] */
    fp_push(1.0); /* 0x1717B7EE: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x38)) = _v; } /* 0x1717B7F0: fstp dword ptr [ebp - 0x38] */
    edi = ebp + (-0x74); /* 0x1717B7F3: lea edi, [ebp - 0x74] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1717B7F6: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_push(0.0); /* 0x1717B7F7: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x34)) = _v; } /* 0x1717B7F9: fstp dword ptr [ebp - 0x34] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1717B7FC: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_push(0.0); /* 0x1717B7FD: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x30)) = _v; } /* 0x1717B7FF: fstp dword ptr [ebp - 0x30] */
    fp_push(0.0); /* 0x1717B802: fldz  */
    eax = ebp + (-0x2C); /* 0x1717B804: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x1717B807: push eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x2C)) = _v; } /* 0x1717B808: fstp dword ptr [ebp - 0x2c] */
    eax = ebp + (-0x38); /* 0x1717B80B: lea eax, [ebp - 0x38] */
    fp_push(1.0); /* 0x1717B80E: fld1  */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1717B810: movsd dword ptr es:[edi], dword ptr [esi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x1717B811: fstp dword ptr [ebp - 0x28] */
    fp_push(0.0); /* 0x1717B814: fldz  */
    PUSH32(esp, eax); /* 0x1717B816: push eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x1717B817: fstp dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1717B81A: sub esp, 0xc */
    _flag_k = FK_CMP;
    edi = esp; /* 0x1717B81D: mov edi, esp */
    esi = ebp + (-0x68); /* 0x1717B81F: lea esi, [ebp - 0x68] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1717B822: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1717B823: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1717B824: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_1717AC2B); /* 0x1717B825: call 0x1717ac2b */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x18)); /* 0x1717B82A: mov ecx, dword ptr [ebp - 0x18] */
    /* test ecx, ecx */ /* 0x1717B82D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    esi = ebp + (-0x38); /* 0x1717B82F: lea esi, [ebp - 0x38] */
    edi = ebp + (-0xA4); /* 0x1717B832: lea edi, [ebp - 0xa4] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1717B838: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1717B839: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1717B83A: movsd dword ptr es:[edi], dword ptr [esi] */
    esi = ebp + (-0x2C); /* 0x1717B83B: lea esi, [ebp - 0x2c] */
    edi = ebp + (-0x8C); /* 0x1717B83E: lea edi, [ebp - 0x8c] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1717B844: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1717B845: movsd dword ptr es:[edi], dword ptr [esi] */
    SET_LO8(edx, LO8(eax)); /* 0x1717B846: mov dl, al */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1717B848: movsd dword ptr es:[edi], dword ptr [esi] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1717B852; /* 0x1717B849: jbe 0x1717b852 */
L_1717B84B:
    edi = MEM32(ebp + 0x20); /* 0x1717B84B: mov edi, dword ptr [ebp + 0x20] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1717B84E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x1717B850: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
L_1717B852:
    /* test LO8(edx), LO8(edx) */ /* 0x1717B852: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1717B882; /* 0x1717B854: je 0x1717b882 */
L_1717B856:
    esi = MEM32(ebp + 0x1C); /* 0x1717B856: mov esi, dword ptr [ebp + 0x1c] */
    eax = MEM32(esi); /* 0x1717B859: mov eax, dword ptr [esi] */
    ecx = ebp + (-0x74); /* 0x1717B85B: lea ecx, [ebp - 0x74] */
    PUSH32(esp, ecx); /* 0x1717B85E: push ecx */
    ecx = ebp + (-0x8C); /* 0x1717B85F: lea ecx, [ebp - 0x8c] */
    PUSH32(esp, ecx); /* 0x1717B865: push ecx */
    ecx = ebp + (-0xA4); /* 0x1717B866: lea ecx, [ebp - 0xa4] */
    PUSH32(esp, ecx); /* 0x1717B86C: push ecx */
    ecx = esi; /* 0x1717B86D: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1717B86F: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x14)); /* 0x1717B872: mov eax, dword ptr [ebp - 0x14] */
    ecx = MEM32(eax + 0x4); /* 0x1717B875: mov ecx, dword ptr [eax + 4] */
    eax = MEM32(ecx); /* 0x1717B878: mov eax, dword ptr [ecx] */
    PUSH32(esp, esi); /* 0x1717B87A: push esi */
    edx = ebp + (-0x5C); /* 0x1717B87B: lea edx, [ebp - 0x5c] */
    PUSH32(esp, edx); /* 0x1717B87E: push edx */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x1717B87F: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
L_1717B882:
    eax = MEM32(ebp + 0x10); /* 0x1717B882: mov eax, dword ptr [ebp + 0x10] */
    /* test eax, eax */ /* 0x1717B885: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1717B8CA; /* 0x1717B887: jbe 0x1717b8ca */
L_1717B889:
    esi = MEM32(ebp + 0x20); /* 0x1717B889: mov esi, dword ptr [ebp + 0x20] */
    ecx = MEM32(ebp + 0xC); /* 0x1717B88C: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1717B88F: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x14) = esi; /* 0x1717B891: mov dword ptr [ebp + 0x14], esi */
    MEM32(ebp + (-0x1C)) = eax; /* 0x1717B894: mov dword ptr [ebp - 0x1c], eax */
L_1717B897:
    /* test ecx, ecx */ /* 0x1717B897: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1717B8BB; /* 0x1717B899: jbe 0x1717b8bb */
L_1717B89B:
    eax = MEM32(ebp + (-0x8)); /* 0x1717B89B: mov eax, dword ptr [ebp - 8] */
    esi = MEM32(ebp + 0x18); /* 0x1717B89E: mov esi, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1717B8A1: add eax, edx */
    _flag_k = FK_ADD;
    eax = esi + eax * 4; /* 0x1717B8A3: lea eax, [esi + eax*4] */
    esi = MEM32(ebp + 0x14); /* 0x1717B8A6: mov esi, dword ptr [ebp + 0x14] */
    edi = ecx; /* 0x1717B8A9: mov edi, ecx */
L_1717B8AB:
    fp_push(*(float*)&MEM32(ebp + (-0x20))); /* 0x1717B8AB: fld dword ptr [ebp - 0x20] */
    _st[0] *= (double)*(float*)ADDR(esi); /* 0x1717B8AE: fmul dword ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x1717B8B0: add esi, 4 */
    _flag_k = FK_ADD;
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x1717B8B3: fstp dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1717B8B5: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1717B8B8: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1717B8AB; /* 0x1717B8B9: jne 0x1717b8ab */
L_1717B8BB:
    eax = ecx; /* 0x1717B8BB: mov eax, ecx */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1717B8BD: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1717B8BD: shl eax, 2 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) + eax; /* 0x1717B8C0: add dword ptr [ebp + 0x14], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x1717B8C3: add edx, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) - 1; /* 0x1717B8C5: dec dword ptr [ebp - 0x1c] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1717B897; /* 0x1717B8C8: jne 0x1717b897 */
L_1717B8CA:
    eax = MEM32(ebp + (-0x18)); /* 0x1717B8CA: mov eax, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 1; /* 0x1717B8CD: inc dword ptr [ebp - 4] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) + eax; /* 0x1717B8D0: add dword ptr [ebp - 8], eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x4)); /* 0x1717B8D3: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x18u; /* 0x1717B8D6: add ebx, 0x18 */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(ebp + 0x8) */ /* 0x1717B8D9: cmp eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1717B76E; /* 0x1717B8DC: jb 0x1717b76e */
L_1717B8E2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1717B8E2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1717B8E4:
    edi = POP32_VAL(esp); /* 0x1717B8E4: pop edi */
    esi = POP32_VAL(esp); /* 0x1717B8E5: pop esi */
    ebx = POP32_VAL(esp); /* 0x1717B8E6: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1717B8E7: leave  */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x1717B8E8: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_1717B8F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1717B8F0u);

L_1717B8F0:
    edi = edi; /* 0x1717B8F0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1717B8F2: push ebp */
    ebp = esp; /* 0x1717B8F3: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1717B8F5: push esi */
    esi = ecx; /* 0x1717B8F6: mov esi, ecx */
    eax = MEM32(esi + 0x4); /* 0x1717B8F8: mov eax, dword ptr [esi + 4] */
    ecx = MEM32(esi + 0x8); /* 0x1717B8FB: mov ecx, dword ptr [esi + 8] */
    PUSH32(esp, edi); /* 0x1717B8FE: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1717B8FF: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x1717B902: add eax, edi */
    _flag_k = FK_ADD;
    /* cmp eax, ecx */ /* 0x1717B904: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1717B91D; /* 0x1717B906: jbe 0x1717b91d */
L_1717B908:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x1717B908: add ecx, ecx */
    _flag_k = FK_ADD;
    /* cmp eax, ecx */ /* 0x1717B90A: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1717B910; /* 0x1717B90C: ja 0x1717b910 */
L_1717B90E:
    eax = ecx; /* 0x1717B90E: mov eax, ecx */
L_1717B910:
    PUSH32(esp, eax); /* 0x1717B910: push eax */
    ecx = esi; /* 0x1717B911: mov ecx, esi */
    RECOMP_CALL(sub_1717AB47); /* 0x1717B913: call 0x1717ab47 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) + edi; /* 0x1717B918: add dword ptr [esi + 4], edi */
    _flag_k = FK_ADD;
    goto L_1717B922; /* 0x1717B91B: jmp 0x1717b922 */
L_1717B91D:
    MEM32(esi + 0x4) = eax; /* 0x1717B91D: mov dword ptr [esi + 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1717B920: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1717B922:
    edi = POP32_VAL(esp); /* 0x1717B922: pop edi */
    esi = POP32_VAL(esp); /* 0x1717B923: pop esi */
    ebp = POP32_VAL(esp); /* 0x1717B924: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1717B925: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1717B92D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1717B92Du);

L_1717B92D:
    edi = edi; /* 0x1717B92D: mov edi, edi */
    PUSH32(esp, esi); /* 0x1717B92F: push esi */
    esi = ecx; /* 0x1717B930: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1717B932: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 8); /* 0x1717B934: push 8 */
    MEM32(esi) = eax; /* 0x1717B936: mov dword ptr [esi], eax */
    MEM32(esi + 0x4) = eax; /* 0x1717B938: mov dword ptr [esi + 4], eax */
    MEM32(esi + 0x8) = eax; /* 0x1717B93B: mov dword ptr [esi + 8], eax */
    RECOMP_CALL(sub_1717AB47); /* 0x1717B93E: call 0x1717ab47 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0xC) = eax; /* 0x1717B943: mov dword ptr [esi + 0xc], eax */
    eax = esi; /* 0x1717B946: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1717B948: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1717B949: ret  */
    RECOMP_REGS_OUT();
}

void sub_1717B94F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1717B94Fu);

L_1717B94F:
    edi = edi; /* 0x1717B94F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1717B951: push ebp */
    ebp = esp; /* 0x1717B952: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1717B954: push esi */
    PUSH32(esp, edi); /* 0x1717B955: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1717B956: mov edi, dword ptr [ebp + 8] */
    esi = ecx; /* 0x1717B959: mov esi, ecx */
    /* cmp edi, MEM32(esi + 0x8) */ /* 0x1717B95B: cmp edi, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1717B964; /* 0x1717B95E: jne 0x1717b964 */
L_1717B960:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1717B960: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1717B970; /* 0x1717B962: jmp 0x1717b970 */
L_1717B964:
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0; /* 0x1717B964: and dword ptr [esi + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1717B968: push edi */
    ecx = esi; /* 0x1717B969: mov ecx, esi */
    RECOMP_CALL(sub_1717AB47); /* 0x1717B96B: call 0x1717ab47 */
    RECOMP_FLAGS_IN();
L_1717B970:
    MEM32(esi + 0x4) = edi; /* 0x1717B970: mov dword ptr [esi + 4], edi */
    edi = POP32_VAL(esp); /* 0x1717B973: pop edi */
    esi = POP32_VAL(esp); /* 0x1717B974: pop esi */
    ebp = POP32_VAL(esp); /* 0x1717B975: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1717B976: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1717B97E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1717B97Eu);

L_1717B97E:
    edi = edi; /* 0x1717B97E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1717B980: push ebp */
    ebp = esp; /* 0x1717B981: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1717B983: push esi */
    PUSH32(esp, edi); /* 0x1717B984: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1717B985: mov edi, dword ptr [ebp + 8] */
    esi = ecx; /* 0x1717B988: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1717B98A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x8), edi */ /* 0x1717B98C: cmp dword ptr [esi + 8], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1717B997; /* 0x1717B98F: jae 0x1717b997 */
L_1717B991:
    PUSH32(esp, edi); /* 0x1717B991: push edi */
    RECOMP_CALL(sub_1717AB47); /* 0x1717B992: call 0x1717ab47 */
    RECOMP_FLAGS_IN();
L_1717B997:
    MEM32(esi + 0x4) = edi; /* 0x1717B997: mov dword ptr [esi + 4], edi */
    edi = POP32_VAL(esp); /* 0x1717B99A: pop edi */
    esi = POP32_VAL(esp); /* 0x1717B99B: pop esi */
    ebp = POP32_VAL(esp); /* 0x1717B99C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1717B99D: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1717B9A5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1717B9A5u);

L_1717B9A5:
    edi = edi; /* 0x1717B9A5: mov edi, edi */
    PUSH32(esp, esi); /* 0x1717B9A7: push esi */
    esi = ecx; /* 0x1717B9A8: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1717B9AA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 8); /* 0x1717B9AC: push 8 */
    MEM32(esi) = eax; /* 0x1717B9AE: mov dword ptr [esi], eax */
    MEM32(esi + 0x4) = eax; /* 0x1717B9B0: mov dword ptr [esi + 4], eax */
    MEM32(esi + 0x8) = eax; /* 0x1717B9B3: mov dword ptr [esi + 8], eax */
    RECOMP_CALL(sub_1717ABB1); /* 0x1717B9B6: call 0x1717abb1 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0xC) = eax; /* 0x1717B9BB: mov dword ptr [esi + 0xc], eax */
    eax = esi; /* 0x1717B9BE: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1717B9C0: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1717B9C1: ret  */
    RECOMP_REGS_OUT();
}

void sub_1717B9C7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1717B9C7u);

L_1717B9C7:
    edi = edi; /* 0x1717B9C7: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1717B9C9: push ebp */
    ebp = esp; /* 0x1717B9CA: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1717B9CC: push esi */
    PUSH32(esp, edi); /* 0x1717B9CD: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1717B9CE: mov edi, dword ptr [ebp + 8] */
    esi = ecx; /* 0x1717B9D1: mov esi, ecx */
    /* cmp edi, MEM32(esi + 0x8) */ /* 0x1717B9D3: cmp edi, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1717B9DC; /* 0x1717B9D6: jne 0x1717b9dc */
L_1717B9D8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1717B9D8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1717B9E8; /* 0x1717B9DA: jmp 0x1717b9e8 */
L_1717B9DC:
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0; /* 0x1717B9DC: and dword ptr [esi + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1717B9E0: push edi */
    ecx = esi; /* 0x1717B9E1: mov ecx, esi */
    RECOMP_CALL(sub_1717ABB1); /* 0x1717B9E3: call 0x1717abb1 */
    RECOMP_FLAGS_IN();
L_1717B9E8:
    MEM32(esi + 0x4) = edi; /* 0x1717B9E8: mov dword ptr [esi + 4], edi */
    edi = POP32_VAL(esp); /* 0x1717B9EB: pop edi */
    esi = POP32_VAL(esp); /* 0x1717B9EC: pop esi */
    ebp = POP32_VAL(esp); /* 0x1717B9ED: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1717B9EE: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1717B9F6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1717B9F6u);

L_1717B9F6:
    edi = edi; /* 0x1717B9F6: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1717B9F8: push ebp */
    ebp = esp; /* 0x1717B9F9: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1717B9FB: push esi */
    PUSH32(esp, edi); /* 0x1717B9FC: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1717B9FD: mov edi, dword ptr [ebp + 8] */
    esi = ecx; /* 0x1717BA00: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1717BA02: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x8), edi */ /* 0x1717BA04: cmp dword ptr [esi + 8], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1717BA0F; /* 0x1717BA07: jae 0x1717ba0f */
L_1717BA09:
    PUSH32(esp, edi); /* 0x1717BA09: push edi */
    RECOMP_CALL(sub_1717ABB1); /* 0x1717BA0A: call 0x1717abb1 */
    RECOMP_FLAGS_IN();
L_1717BA0F:
    MEM32(esi + 0x4) = edi; /* 0x1717BA0F: mov dword ptr [esi + 4], edi */
    edi = POP32_VAL(esp); /* 0x1717BA12: pop edi */
    esi = POP32_VAL(esp); /* 0x1717BA13: pop esi */
    ebp = POP32_VAL(esp); /* 0x1717BA14: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1717BA15: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1717BA1D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1717BA1Du);

L_1717BA1D:
    eax = 0x1721C113u; /* 0x1717BA1D: mov eax, 0x1721c113 */
    RECOMP_CALL(sub_1721B168); /* 0x1717BA22: call 0x1721b168 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x1717BA27: push ecx */
    PUSH32(esp, ebx); /* 0x1717BA28: push ebx */
    PUSH32(esp, esi); /* 0x1717BA29: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1717BA2A: mov esi, dword ptr [ebp + 8] */
    eax = esi + esi * 4; /* 0x1717BA2D: lea eax, [esi + esi*4] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1717BA30: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1717BA30: shl eax, 2 */
    PUSH32(esp, edi); /* 0x1717BA33: push edi */
    PUSH32(esp, eax); /* 0x1717BA34: push eax */
    ebx = ecx; /* 0x1717BA35: mov ebx, ecx */
    RECOMP_CALL(sub_1721B01C); /* 0x1717BA37: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1717BA3C: mov edi, eax */
    ecx = POP32_VAL(esp); /* 0x1717BA3E: pop ecx */
    MEM32(ebp + (-0x10)) = edi; /* 0x1717BA3F: mov dword ptr [ebp - 0x10], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1717BA42: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x1717BA46: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1717BA5D; /* 0x1717BA48: je 0x1717ba5d */
L_1717BA4A:
    PUSH32(esp, 0x1706E47Eu); /* 0x1717BA4A: push 0x1706e47e */
    PUSH32(esp, esi); /* 0x1717BA4F: push esi */
    PUSH32(esp, 0x14u); /* 0x1717BA50: push 0x14 */
    PUSH32(esp, edi); /* 0x1717BA52: push edi */
    RECOMP_CALL(sub_1702C116); /* 0x1717BA53: call 0x1702c116 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x10)) = edi; /* 0x1717BA58: mov dword ptr [ebp - 0x10], edi */
    goto L_1717BA61; /* 0x1717BA5B: jmp 0x1717ba61 */
L_1717BA5D:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & 0; /* 0x1717BA5D: and dword ptr [ebp - 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1717BA61:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1717BA61: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1717BA65: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x10)), edx */ /* 0x1717BA67: cmp dword ptr [ebp - 0x10], edx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1717BA73; /* 0x1717BA6A: jne 0x1717ba73 */
L_1717BA6C:
    eax = 0x8007000Eu; /* 0x1717BA6C: mov eax, 0x8007000e */
    goto L_1717BAB6; /* 0x1717BA71: jmp 0x1717bab6 */
L_1717BA73:
    /* cmp MEM32(ebx), edx */ /* 0x1717BA73: cmp dword ptr [ebx], edx */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1717BAAC; /* 0x1717BA75: je 0x1717baac */
L_1717BA77:
    eax = MEM32(ebx + 0x4); /* 0x1717BA77: mov eax, dword ptr [ebx + 4] */
    /* cmp eax, edx */ /* 0x1717BA7A: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1717BA9F; /* 0x1717BA7C: jbe 0x1717ba9f */
L_1717BA7E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1717BA7E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1717BA80:
    /* cmp edx, esi */ /* 0x1717BA80: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1717BA9F; /* 0x1717BA82: jae 0x1717ba9f */
L_1717BA84:
    ecx = MEM32(ebp + (-0x10)); /* 0x1717BA84: mov ecx, dword ptr [ebp - 0x10] */
    esi = MEM32(ebx); /* 0x1717BA87: mov esi, dword ptr [ebx] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x1717BA89: add esi, eax */
    _flag_k = FK_ADD;
    edi = eax + ecx; /* 0x1717BA8B: lea edi, [eax + ecx] */
    PUSH32(esp, 5); /* 0x1717BA8E: push 5 */
    ecx = POP32_VAL(esp); /* 0x1717BA90: pop ecx */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1717BA91: rep movsd dword ptr es:[edi], dword ptr [esi] */
    esi = MEM32(ebp + 0x8); /* 0x1717BA93: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1717BA96: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x14u; /* 0x1717BA97: add eax, 0x14 */
    _flag_k = FK_ADD;
    /* cmp edx, MEM32(ebx + 0x4) */ /* 0x1717BA9A: cmp edx, dword ptr [ebx + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebx + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1717BA80; /* 0x1717BA9D: jb 0x1717ba80 */
L_1717BA9F:
    eax = MEM32(ebx); /* 0x1717BA9F: mov eax, dword ptr [ebx] */
    /* test eax, eax */ /* 0x1717BAA1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1717BAAC; /* 0x1717BAA3: je 0x1717baac */
L_1717BAA5:
    PUSH32(esp, eax); /* 0x1717BAA5: push eax */
    RECOMP_CALL(sub_1721B010); /* 0x1717BAA6: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1717BAAB: pop ecx */
L_1717BAAC:
    eax = MEM32(ebp + (-0x10)); /* 0x1717BAAC: mov eax, dword ptr [ebp - 0x10] */
    MEM32(ebx) = eax; /* 0x1717BAAF: mov dword ptr [ebx], eax */
    MEM32(ebx + 0x8) = esi; /* 0x1717BAB1: mov dword ptr [ebx + 8], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1717BAB4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1717BAB6:
    ecx = MEM32(ebp + (-0xC)); /* 0x1717BAB6: mov ecx, dword ptr [ebp - 0xc] */
    edi = POP32_VAL(esp); /* 0x1717BAB9: pop edi */
    esi = POP32_VAL(esp); /* 0x1717BABA: pop esi */
    ebx = POP32_VAL(esp); /* 0x1717BABB: pop ebx */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1717BABC: mov dword ptr fs:[0], ecx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1717BAC3: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1717BAC4: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1717BACC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1717BACCu);

L_1717BACC:
    eax = 0x1721C113u; /* 0x1717BACC: mov eax, 0x1721c113 */
    RECOMP_CALL(sub_1721B168); /* 0x1717BAD1: call 0x1721b168 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x1717BAD6: push ecx */
    eax = MEM32(ebp + 0x8); /* 0x1717BAD7: mov eax, dword ptr [ebp + 8] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3Cu); /* 0x1717BADA: imul eax, eax, 0x3c */
    PUSH32(esp, ebx); /* 0x1717BADD: push ebx */
    PUSH32(esp, esi); /* 0x1717BADE: push esi */
    PUSH32(esp, edi); /* 0x1717BADF: push edi */
    PUSH32(esp, eax); /* 0x1717BAE0: push eax */
    ebx = ecx; /* 0x1717BAE1: mov ebx, ecx */
    RECOMP_CALL(sub_1721B01C); /* 0x1717BAE3: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1717BAE8: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x1717BAEA: pop ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x1717BAEB: mov dword ptr [ebp - 0x10], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1717BAEE: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp esi, edi */ /* 0x1717BAF0: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = edi; /* 0x1717BAF2: mov dword ptr [ebp - 4], edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1717BB0C; /* 0x1717BAF5: je 0x1717bb0c */
L_1717BAF7:
    PUSH32(esp, 0x1706E47Eu); /* 0x1717BAF7: push 0x1706e47e */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1717BAFC: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x3Cu); /* 0x1717BAFF: push 0x3c */
    PUSH32(esp, esi); /* 0x1717BB01: push esi */
    RECOMP_CALL(sub_1702C116); /* 0x1717BB02: call 0x1702c116 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x10)) = esi; /* 0x1717BB07: mov dword ptr [ebp - 0x10], esi */
    goto L_1717BB0F; /* 0x1717BB0A: jmp 0x1717bb0f */
L_1717BB0C:
    MEM32(ebp + (-0x10)) = edi; /* 0x1717BB0C: mov dword ptr [ebp - 0x10], edi */
L_1717BB0F:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1717BB0F: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x10)), edi */ /* 0x1717BB13: cmp dword ptr [ebp - 0x10], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1717BB1F; /* 0x1717BB16: jne 0x1717bb1f */
L_1717BB18:
    eax = 0x8007000Eu; /* 0x1717BB18: mov eax, 0x8007000e */
    goto L_1717BB69; /* 0x1717BB1D: jmp 0x1717bb69 */
L_1717BB1F:
    /* cmp MEM32(ebx), edi */ /* 0x1717BB1F: cmp dword ptr [ebx], edi */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1717BB5C; /* 0x1717BB21: je 0x1717bb5c */
L_1717BB23:
    eax = MEM32(ebx + 0x4); /* 0x1717BB23: mov eax, dword ptr [ebx + 4] */
    /* cmp eax, edi */ /* 0x1717BB26: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1717BB4F; /* 0x1717BB28: je 0x1717bb4f */
L_1717BB2A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1717BB2A: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, edi */ /* 0x1717BB2C: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1717BB4F; /* 0x1717BB2E: jbe 0x1717bb4f */
L_1717BB30:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1717BB30: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1717BB32:
    /* cmp edx, MEM32(ebp + 0x8) */ /* 0x1717BB32: cmp edx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1717BB4F; /* 0x1717BB35: jae 0x1717bb4f */
L_1717BB37:
    ecx = MEM32(ebp + (-0x10)); /* 0x1717BB37: mov ecx, dword ptr [ebp - 0x10] */
    esi = MEM32(ebx); /* 0x1717BB3A: mov esi, dword ptr [ebx] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x1717BB3C: add esi, eax */
    _flag_k = FK_ADD;
    edi = eax + ecx; /* 0x1717BB3E: lea edi, [eax + ecx] */
    PUSH32(esp, 0xFu); /* 0x1717BB41: push 0xf */
    ecx = POP32_VAL(esp); /* 0x1717BB43: pop ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1717BB44: inc edx */
    _flag_k = FK_INC;
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1717BB45: rep movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x3Cu; /* 0x1717BB47: add eax, 0x3c */
    _flag_k = FK_ADD;
    /* cmp edx, MEM32(ebx + 0x4) */ /* 0x1717BB4A: cmp edx, dword ptr [ebx + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebx + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1717BB32; /* 0x1717BB4D: jb 0x1717bb32 */
L_1717BB4F:
    eax = MEM32(ebx); /* 0x1717BB4F: mov eax, dword ptr [ebx] */
    /* test eax, eax */ /* 0x1717BB51: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1717BB5C; /* 0x1717BB53: je 0x1717bb5c */
L_1717BB55:
    PUSH32(esp, eax); /* 0x1717BB55: push eax */
    RECOMP_CALL(sub_1721B010); /* 0x1717BB56: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1717BB5B: pop ecx */
L_1717BB5C:
    eax = MEM32(ebp + 0x8); /* 0x1717BB5C: mov eax, dword ptr [ebp + 8] */
    MEM32(ebx + 0x8) = eax; /* 0x1717BB5F: mov dword ptr [ebx + 8], eax */
    eax = MEM32(ebp + (-0x10)); /* 0x1717BB62: mov eax, dword ptr [ebp - 0x10] */
    MEM32(ebx) = eax; /* 0x1717BB65: mov dword ptr [ebx], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1717BB67: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1717BB69:
    ecx = MEM32(ebp + (-0xC)); /* 0x1717BB69: mov ecx, dword ptr [ebp - 0xc] */
    edi = POP32_VAL(esp); /* 0x1717BB6C: pop edi */
    esi = POP32_VAL(esp); /* 0x1717BB6D: pop esi */
    ebx = POP32_VAL(esp); /* 0x1717BB6E: pop ebx */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1717BB6F: mov dword ptr fs:[0], ecx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1717BB76: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1717BB77: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1717BB7F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1717BB7Fu);

L_1717BB7F:
    eax = 0x1721C113u; /* 0x1717BB7F: mov eax, 0x1721c113 */
    RECOMP_CALL(sub_1721B168); /* 0x1717BB84: call 0x1721b168 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x1717BB89: push ecx */
    PUSH32(esp, ebx); /* 0x1717BB8A: push ebx */
    PUSH32(esp, esi); /* 0x1717BB8B: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1717BB8C: mov esi, dword ptr [ebp + 8] */
    eax = esi + esi * 8; /* 0x1717BB8F: lea eax, [esi + esi*8] */
    if (3u) _cf = (((eax) >> 29) & 1u); /* 0x1717BB92: shl eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 3u; /* 0x1717BB92: shl eax, 3 */
    PUSH32(esp, edi); /* 0x1717BB95: push edi */
    PUSH32(esp, eax); /* 0x1717BB96: push eax */
    ebx = ecx; /* 0x1717BB97: mov ebx, ecx */
    RECOMP_CALL(sub_1721B01C); /* 0x1717BB99: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1717BB9E: mov edi, eax */
    ecx = POP32_VAL(esp); /* 0x1717BBA0: pop ecx */
    MEM32(ebp + (-0x10)) = edi; /* 0x1717BBA1: mov dword ptr [ebp - 0x10], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1717BBA4: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x1717BBA8: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1717BBBF; /* 0x1717BBAA: je 0x1717bbbf */
L_1717BBAC:
    PUSH32(esp, 0x1706E47Eu); /* 0x1717BBAC: push 0x1706e47e */
    PUSH32(esp, esi); /* 0x1717BBB1: push esi */
    PUSH32(esp, 0x48u); /* 0x1717BBB2: push 0x48 */
    PUSH32(esp, edi); /* 0x1717BBB4: push edi */
    RECOMP_CALL(sub_1702C116); /* 0x1717BBB5: call 0x1702c116 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x10)) = edi; /* 0x1717BBBA: mov dword ptr [ebp - 0x10], edi */
    goto L_1717BBC3; /* 0x1717BBBD: jmp 0x1717bbc3 */
L_1717BBBF:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & 0; /* 0x1717BBBF: and dword ptr [ebp - 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1717BBC3:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1717BBC3: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1717BBC7: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x10)), edx */ /* 0x1717BBC9: cmp dword ptr [ebp - 0x10], edx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1717BBD5; /* 0x1717BBCC: jne 0x1717bbd5 */
L_1717BBCE:
    eax = 0x8007000Eu; /* 0x1717BBCE: mov eax, 0x8007000e */
    goto L_1717BC18; /* 0x1717BBD3: jmp 0x1717bc18 */
L_1717BBD5:
    /* cmp MEM32(ebx), edx */ /* 0x1717BBD5: cmp dword ptr [ebx], edx */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1717BC0E; /* 0x1717BBD7: je 0x1717bc0e */
L_1717BBD9:
    eax = MEM32(ebx + 0x4); /* 0x1717BBD9: mov eax, dword ptr [ebx + 4] */
    /* cmp eax, edx */ /* 0x1717BBDC: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1717BC01; /* 0x1717BBDE: jbe 0x1717bc01 */
L_1717BBE0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1717BBE0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1717BBE2:
    /* cmp edx, esi */ /* 0x1717BBE2: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1717BC01; /* 0x1717BBE4: jae 0x1717bc01 */
L_1717BBE6:
    ecx = MEM32(ebp + (-0x10)); /* 0x1717BBE6: mov ecx, dword ptr [ebp - 0x10] */
    esi = MEM32(ebx); /* 0x1717BBE9: mov esi, dword ptr [ebx] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x1717BBEB: add esi, eax */
    _flag_k = FK_ADD;
    edi = eax + ecx; /* 0x1717BBED: lea edi, [eax + ecx] */
    PUSH32(esp, 0x12u); /* 0x1717BBF0: push 0x12 */
    ecx = POP32_VAL(esp); /* 0x1717BBF2: pop ecx */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1717BBF3: rep movsd dword ptr es:[edi], dword ptr [esi] */
    esi = MEM32(ebp + 0x8); /* 0x1717BBF5: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1717BBF8: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x48u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x48u; /* 0x1717BBF9: add eax, 0x48 */
    _flag_k = FK_ADD;
    /* cmp edx, MEM32(ebx + 0x4) */ /* 0x1717BBFC: cmp edx, dword ptr [ebx + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebx + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1717BBE2; /* 0x1717BBFF: jb 0x1717bbe2 */
L_1717BC01:
    eax = MEM32(ebx); /* 0x1717BC01: mov eax, dword ptr [ebx] */
    /* test eax, eax */ /* 0x1717BC03: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1717BC0E; /* 0x1717BC05: je 0x1717bc0e */
L_1717BC07:
    PUSH32(esp, eax); /* 0x1717BC07: push eax */
    RECOMP_CALL(sub_1721B010); /* 0x1717BC08: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1717BC0D: pop ecx */
L_1717BC0E:
    eax = MEM32(ebp + (-0x10)); /* 0x1717BC0E: mov eax, dword ptr [ebp - 0x10] */
    MEM32(ebx) = eax; /* 0x1717BC11: mov dword ptr [ebx], eax */
    MEM32(ebx + 0x8) = esi; /* 0x1717BC13: mov dword ptr [ebx + 8], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1717BC16: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1717BC18:
    ecx = MEM32(ebp + (-0xC)); /* 0x1717BC18: mov ecx, dword ptr [ebp - 0xc] */
    edi = POP32_VAL(esp); /* 0x1717BC1B: pop edi */
    esi = POP32_VAL(esp); /* 0x1717BC1C: pop esi */
    ebx = POP32_VAL(esp); /* 0x1717BC1D: pop ebx */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1717BC1E: mov dword ptr fs:[0], ecx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1717BC25: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1717BC26: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1717BC2E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1717BC2Eu);

L_1717BC2E:
    edi = edi; /* 0x1717BC2E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1717BC30: push ebp */
    ebp = esp; /* 0x1717BC31: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1717BC33: push esi */
    esi = ecx; /* 0x1717BC34: mov esi, ecx */
    eax = MEM32(esi + 0x8); /* 0x1717BC36: mov eax, dword ptr [esi + 8] */
    PUSH32(esp, edi); /* 0x1717BC39: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1717BC3A: mov edi, dword ptr [ebp + 8] */
    /* cmp eax, MEM32(edi + 0x8) */ /* 0x1717BC3D: cmp eax, dword ptr [edi + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1717BC51; /* 0x1717BC40: jae 0x1717bc51 */
L_1717BC42:
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0; /* 0x1717BC42: and dword ptr [esi + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(edi + 0x8)); /* 0x1717BC46: push dword ptr [edi + 8] */
    RECOMP_CALL(sub_17186CA3); /* 0x1717BC49: call 0x17186ca3 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0xC) = eax; /* 0x1717BC4E: mov dword ptr [esi + 0xc], eax */
L_1717BC51:
    eax = MEM32(edi + 0x4); /* 0x1717BC51: mov eax, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) & 0; /* 0x1717BC54: and dword ptr [ebp + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x1717BC58: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x4) = eax; /* 0x1717BC5A: mov dword ptr [esi + 4], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1717BC84; /* 0x1717BC5D: jbe 0x1717bc84 */
L_1717BC5F:
    PUSH32(esp, ebx); /* 0x1717BC5F: push ebx */
L_1717BC60:
    eax = MEM32(ebp + 0x8); /* 0x1717BC60: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(edi); /* 0x1717BC63: mov ecx, dword ptr [edi] */
    edx = MEM32(esi); /* 0x1717BC65: mov edx, dword ptr [esi] */
    if (3u) _cf = (((eax) >> 29) & 1u); /* 0x1717BC67: shl eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 3u; /* 0x1717BC67: shl eax, 3 */
    ebx = MEM32(ecx + eax); /* 0x1717BC6A: mov ebx, dword ptr [ecx + eax] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + 1; /* 0x1717BC6D: inc dword ptr [ebp + 8] */
    _flag_k = FK_INC;
    MEM32(eax + edx) = ebx; /* 0x1717BC70: mov dword ptr [eax + edx], ebx */
    ecx = MEM32(ecx + eax + 0x4); /* 0x1717BC73: mov ecx, dword ptr [ecx + eax + 4] */
    MEM32(eax + edx + 0x4) = ecx; /* 0x1717BC77: mov dword ptr [eax + edx + 4], ecx */
    eax = MEM32(ebp + 0x8); /* 0x1717BC7B: mov eax, dword ptr [ebp + 8] */
    /* cmp eax, MEM32(esi + 0x4) */ /* 0x1717BC7E: cmp eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1717BC60; /* 0x1717BC81: jb 0x1717bc60 */
L_1717BC83:
    ebx = POP32_VAL(esp); /* 0x1717BC83: pop ebx */
L_1717BC84:
    edi = POP32_VAL(esp); /* 0x1717BC84: pop edi */
    eax = esi; /* 0x1717BC85: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1717BC87: pop esi */
    ebp = POP32_VAL(esp); /* 0x1717BC88: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1717BC89: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1717BC91(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1717BC91u);

L_1717BC91:
    eax = 0x1721C0FAu; /* 0x1717BC91: mov eax, 0x1721c0fa */
    RECOMP_CALL(sub_1721B168); /* 0x1717BC96: call 0x1721b168 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x1717BC9B: push ecx */
    PUSH32(esp, esi); /* 0x1717BC9C: push esi */
    esi = ecx; /* 0x1717BC9D: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x1717BC9F: mov dword ptr [ebp - 0x10], esi */
    ecx = esi + 0x70; /* 0x1717BCA2: lea ecx, [esi + 0x70] */
    MEM32(ebp + (-0x4)) = 6; /* 0x1717BCA5: mov dword ptr [ebp - 4], 6 */
    RECOMP_CALL(sub_1717AF06); /* 0x1717BCAC: call 0x1717af06 */
    RECOMP_FLAGS_IN();
    ecx = esi + 0x60; /* 0x1717BCB1: lea ecx, [esi + 0x60] */
    MEM8(ebp + (-0x4)) = (uint8_t)(5); /* 0x1717BCB4: mov byte ptr [ebp - 4], 5 */
    RECOMP_CALL(sub_1717AF06); /* 0x1717BCB8: call 0x1717af06 */
    RECOMP_FLAGS_IN();
    ecx = esi + 0x50; /* 0x1717BCBD: lea ecx, [esi + 0x50] */
    MEM8(ebp + (-0x4)) = (uint8_t)(4); /* 0x1717BCC0: mov byte ptr [ebp - 4], 4 */
    RECOMP_CALL(sub_1717AF06); /* 0x1717BCC4: call 0x1717af06 */
    RECOMP_FLAGS_IN();
    ecx = esi + 0x40; /* 0x1717BCC9: lea ecx, [esi + 0x40] */
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x1717BCCC: mov byte ptr [ebp - 4], 3 */
    RECOMP_CALL(sub_1717AF06); /* 0x1717BCD0: call 0x1717af06 */
    RECOMP_FLAGS_IN();
    ecx = esi + 0x30; /* 0x1717BCD5: lea ecx, [esi + 0x30] */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x1717BCD8: mov byte ptr [ebp - 4], 2 */
    RECOMP_CALL(sub_1717AF06); /* 0x1717BCDC: call 0x1717af06 */
    RECOMP_FLAGS_IN();
    ecx = esi + 0x20; /* 0x1717BCE1: lea ecx, [esi + 0x20] */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x1717BCE4: mov byte ptr [ebp - 4], 1 */
    RECOMP_CALL(sub_1717AF06); /* 0x1717BCE8: call 0x1717af06 */
    RECOMP_FLAGS_IN();
    ecx = esi + 0x10; /* 0x1717BCED: lea ecx, [esi + 0x10] */
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x1717BCF0: mov byte ptr [ebp - 4], 0 */
    RECOMP_CALL(sub_1717AF06); /* 0x1717BCF4: call 0x1717af06 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1717BCF9: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi; /* 0x1717BCFD: mov ecx, esi */
    RECOMP_CALL(sub_1717AF27); /* 0x1717BCFF: call 0x1717af27 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xC)); /* 0x1717BD04: mov ecx, dword ptr [ebp - 0xc] */
    esi = POP32_VAL(esp); /* 0x1717BD07: pop esi */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1717BD08: mov dword ptr fs:[0], ecx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1717BD0F: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1717BD10: ret  */
    RECOMP_REGS_OUT();
}

void sub_1717BD16(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1717BD16u);

L_1717BD16:
    eax = 0x1721C173u; /* 0x1717BD16: mov eax, 0x1721c173 */
    RECOMP_CALL(sub_1721B168); /* 0x1717BD1B: call 0x1721b168 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x1717BD20: push ecx */
    PUSH32(esp, esi); /* 0x1717BD21: push esi */
    esi = ecx; /* 0x1717BD22: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x1717BD24: mov dword ptr [ebp - 0x10], esi */
    ecx = esi + 0x40; /* 0x1717BD27: lea ecx, [esi + 0x40] */
    MEM32(ebp + (-0x4)) = 1; /* 0x1717BD2A: mov dword ptr [ebp - 4], 1 */
    RECOMP_CALL(sub_1717AF06); /* 0x1717BD31: call 0x1717af06 */
    RECOMP_FLAGS_IN();
    ecx = esi + 0x28; /* 0x1717BD36: lea ecx, [esi + 0x28] */
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x1717BD39: mov byte ptr [ebp - 4], 0 */
    RECOMP_CALL(sub_1717AF06); /* 0x1717BD3D: call 0x1717af06 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1717BD42: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi + 0x18; /* 0x1717BD46: lea ecx, [esi + 0x18] */
    RECOMP_CALL(sub_1717AF06); /* 0x1717BD49: call 0x1717af06 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xC)); /* 0x1717BD4E: mov ecx, dword ptr [ebp - 0xc] */
    esi = POP32_VAL(esp); /* 0x1717BD51: pop esi */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1717BD52: mov dword ptr fs:[0], ecx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1717BD59: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1717BD5A: ret  */
    RECOMP_REGS_OUT();
}

void sub_1717BD60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1717BD60u);

L_1717BD60:
    edi = edi; /* 0x1717BD60: mov edi, edi */
    PUSH32(esp, esi); /* 0x1717BD62: push esi */
    esi = ecx; /* 0x1717BD63: mov esi, ecx */
    ecx = MEM32(esi); /* 0x1717BD65: mov ecx, dword ptr [esi] */
    /* test ecx, ecx */ /* 0x1717BD67: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1717BD72; /* 0x1717BD69: je 0x1717bd72 */
L_1717BD6B:
    PUSH32(esp, 3); /* 0x1717BD6B: push 3 */
    RECOMP_CALL(sub_1717AF6C); /* 0x1717BD6D: call 0x1717af6c */
    RECOMP_FLAGS_IN();
L_1717BD72:
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x8) = MEM32(esi + 0x8) & 0; /* 0x1717BD72: and dword ptr [esi + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0; /* 0x1717BD76: and dword ptr [esi + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1717BD7A: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1717BD7B: ret  */
    RECOMP_REGS_OUT();
}
