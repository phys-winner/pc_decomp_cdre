#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_1703C25C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1703C25Cu);

    goto L_1703C25C;
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
L_1703C25C:
    _flag_a = (uint32_t)(MEM32(esp + 0x4)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(esp + 0x4) = MEM32(esp + 0x4) - 8; /* 0x1703C25C: sub dword ptr [esp + 4], 8 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    goto L_17039E05; /* 0x1703C261: jmp 0x17039e05 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1703C26B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1703C26Bu);

    goto L_1703C26B;
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
L_1703C26B:
    _flag_a = (uint32_t)(MEM32(esp + 0x4)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(esp + 0x4) = MEM32(esp + 0x4) - 8; /* 0x1703C26B: sub dword ptr [esp + 4], 8 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    goto L_1703A78E; /* 0x1703C270: jmp 0x1703a78e */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1703C27A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1703C27Au);

    goto L_1703C27A;
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
L_1703C27A:
    _flag_a = (uint32_t)(MEM32(esp + 0x4)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(esp + 0x4) = MEM32(esp + 0x4) - 8; /* 0x1703C27A: sub dword ptr [esp + 4], 8 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    goto L_17039E67; /* 0x1703C27F: jmp 0x17039e67 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1703C289(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1703C289u);

L_1703C289:
    edi = edi; /* 0x1703C289: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1703C28B: push ebp */
    ebp = esp; /* 0x1703C28C: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1703C28E: push esi */
    esi = ecx; /* 0x1703C28F: mov esi, ecx */
    RECOMP_CALL(sub_1703C1EC); /* 0x1703C291: call 0x1703c1ec */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1703C296: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703C2A3; /* 0x1703C29A: je 0x1703c2a3 */
L_1703C29C:
    PUSH32(esp, esi); /* 0x1703C29C: push esi */
    RECOMP_CALL(sub_1721B010); /* 0x1703C29D: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1703C2A2: pop ecx */
L_1703C2A3:
    eax = esi; /* 0x1703C2A3: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1703C2A5: pop esi */
    ebp = POP32_VAL(esp); /* 0x1703C2A6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1703C2A7: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1703C2AF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1703C2AFu);

L_1703C2AF:
    edi = edi; /* 0x1703C2AF: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1703C2B1: push ebp */
    ebp = esp; /* 0x1703C2B2: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x30u; /* 0x1703C2B4: sub esp, 0x30 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1703C2B7: push ebx */
    PUSH32(esp, edi); /* 0x1703C2B8: push edi */
    edi = MEM32(ebp + 0xC); /* 0x1703C2B9: mov edi, dword ptr [ebp + 0xc] */
    /* cmp edi, 3 */ /* 0x1703C2BC: cmp edi, 3 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1703C3A7; /* 0x1703C2BF: jb 0x1703c3a7 */
L_1703C2C5:
    eax = edi; /* 0x1703C2C5: mov eax, edi */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x1703C2C7: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x1703C2C7: shl eax, 4 */
    PUSH32(esp, eax); /* 0x1703C2CA: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1703C2CB: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1703C2D0: mov ebx, eax */
    /* test ebx, ebx */ /* 0x1703C2D2: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1703C2D4: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703C3A7; /* 0x1703C2D5: je 0x1703c3a7 */
L_1703C2DB:
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(0);
    MEM32(ebx) = MEM32(ebx) & 0; /* 0x1703C2DB: and dword ptr [ebx], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1703C2DE: push esi */
    PUSH32(esp, ebx); /* 0x1703C2DF: push ebx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1703C2E0: push dword ptr [ebp + 8] */
    eax = edi + (-0x1); /* 0x1703C2E3: lea eax, [edi - 1] */
    MEM32(ebx + 0x4) = eax; /* 0x1703C2E6: mov dword ptr [ebx + 4], eax */
    RECOMP_CALL(sub_1703C110); /* 0x1703C2E9: call 0x1703c110 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0x10); /* 0x1703C2EE: mov esi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1703C2F1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1703C2F3: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x1703C2F4: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0xC) = eax; /* 0x1703C2F7: mov dword ptr [ebp + 0xc], eax */
    MEM32(esi + edi * 4 + (-0x4)) = eax; /* 0x1703C2FA: mov dword ptr [esi + edi*4 - 4], eax */
    MEM32(ebp + (-0x4)) = 2; /* 0x1703C2FE: mov dword ptr [ebp - 4], 2 */
L_1703C305:
    eax = MEM32(ebx + 0x8); /* 0x1703C305: mov eax, dword ptr [ebx + 8] */
    ecx = MEM32(ebp + (-0x4)); /* 0x1703C308: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 1; /* 0x1703C30B: inc dword ptr [ebp - 4] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - 1; /* 0x1703C30E: dec dword ptr [ebp + 0xc] */
    _flag_k = FK_DEC;
    MEM32(esi + eax * 4) = ecx; /* 0x1703C311: mov dword ptr [esi + eax*4], ecx */
    eax = MEM32(ebx); /* 0x1703C314: mov eax, dword ptr [ebx] */
    MEM32(ebp + (-0x30)) = eax; /* 0x1703C316: mov dword ptr [ebp - 0x30], eax */
    eax = MEM32(ebx + 0x8); /* 0x1703C319: mov eax, dword ptr [ebx + 8] */
    MEM32(ebp + (-0x2C)) = eax; /* 0x1703C31C: mov dword ptr [ebp - 0x2c], eax */
    MEM32(ebp + (-0x20)) = eax; /* 0x1703C31F: mov dword ptr [ebp - 0x20], eax */
    eax = MEM32(ebx + 0x4); /* 0x1703C322: mov eax, dword ptr [ebx + 4] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x1703C325: mov dword ptr [ebp - 0x1c], eax */
    eax = MEM32(ebp + 0xC); /* 0x1703C328: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1703C32B: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = ebx; /* 0x1703C32D: mov edx, ebx */
    RECOMP_CALL(sub_1703A5A1); /* 0x1703C32F: call 0x1703a5a1 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0xC); /* 0x1703C334: mov edi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1703C337: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1703C338: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1703AD06); /* 0x1703C33A: call 0x1703ad06 */
    RECOMP_FLAGS_IN();
    if (4u) _cf = (((edi) >> 28) & 1u); /* 0x1703C33F: shl edi, 4 */
    if (4u) { _flag_a = recomp_flags_pack((edi << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 4u; /* 0x1703C33F: shl edi, 4 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + ebx; /* 0x1703C342: add edi, ebx */
    _flag_k = FK_ADD;
    eax = ebp + (-0x30); /* 0x1703C344: lea eax, [ebp - 0x30] */
    MEM32(ebp + (-0x8)) = edi; /* 0x1703C347: mov dword ptr [ebp - 8], edi */
    MEM32(ebp + (-0xC)) = eax; /* 0x1703C34A: mov dword ptr [ebp - 0xc], eax */
    MEM32(ebp + (-0x10)) = 2; /* 0x1703C34D: mov dword ptr [ebp - 0x10], 2 */
L_1703C354:
    ecx = MEM32(eax + 0x4); /* 0x1703C354: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(eax); /* 0x1703C357: sub ecx, dword ptr [eax] */
    _flag_k = FK_CMP;
    /* cmp ecx, 2 */ /* 0x1703C359: cmp ecx, 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1703C388; /* 0x1703C35C: jb 0x1703c388 */
L_1703C35E:
    PUSH32(esp, eax); /* 0x1703C35E: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1703C35F: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1703C110); /* 0x1703C362: call 0x1703c110 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0xC)); /* 0x1703C367: mov esi, dword ptr [ebp - 0xc] */
    ecx = MEM32(ebp + 0xC); /* 0x1703C36A: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703C36D: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703C36E: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703C36F: movsd dword ptr es:[edi], dword ptr [esi] */
    edx = ebx; /* 0x1703C370: mov edx, ebx */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703C372: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_1703AD75); /* 0x1703C373: call 0x1703ad75 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 1; /* 0x1703C378: inc dword ptr [ebp + 0xc] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) + 0x10u; /* 0x1703C37B: add dword ptr [ebp - 8], 0x10 */
    _flag_k = FK_ADD;
    esi = MEM32(ebp + 0x10); /* 0x1703C37F: mov esi, dword ptr [ebp + 0x10] */
    edi = MEM32(ebp + (-0x8)); /* 0x1703C382: mov edi, dword ptr [ebp - 8] */
    eax = MEM32(ebp + (-0xC)); /* 0x1703C385: mov eax, dword ptr [ebp - 0xc] */
L_1703C388:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x1703C388: add eax, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) - 1; /* 0x1703C38B: dec dword ptr [ebp - 0x10] */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0xC)) = eax; /* 0x1703C38E: mov dword ptr [ebp - 0xc], eax */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1703C354; /* 0x1703C391: jne 0x1703c354 */
L_1703C393:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x1703C393: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_1703C305; /* 0x1703C397: ja 0x1703c305 */
L_1703C39D:
    PUSH32(esp, ebx); /* 0x1703C39D: push ebx */
    RECOMP_CALL(sub_1721B010); /* 0x1703C39E: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1703C3A3: pop ecx */
    esi = POP32_VAL(esp); /* 0x1703C3A4: pop esi */
    goto L_1703C3B8; /* 0x1703C3A5: jmp 0x1703c3b8 */
L_1703C3A7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1703C3A7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x1703C3A9: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703C3B8; /* 0x1703C3AB: jbe 0x1703c3b8 */
L_1703C3AD:
    ecx = MEM32(ebp + 0x10); /* 0x1703C3AD: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(ecx + eax * 4) = eax; /* 0x1703C3B0: mov dword ptr [ecx + eax*4], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1703C3B3: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, edi */ /* 0x1703C3B4: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1703C3AD; /* 0x1703C3B6: jb 0x1703c3ad */
L_1703C3B8:
    edi = POP32_VAL(esp); /* 0x1703C3B8: pop edi */
    ebx = POP32_VAL(esp); /* 0x1703C3B9: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1703C3BA: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1703C3BB: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1703C3C3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1703C3C3u);

L_1703C3C3:
    edi = edi; /* 0x1703C3C3: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1703C3C5: push ebp */
    ebp = esp; /* 0x1703C3C6: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x30u; /* 0x1703C3C8: sub esp, 0x30 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1703C3CB: push ebx */
    PUSH32(esp, edi); /* 0x1703C3CC: push edi */
    edi = MEM32(ebp + 0xC); /* 0x1703C3CD: mov edi, dword ptr [ebp + 0xc] */
    /* cmp edi, 3 */ /* 0x1703C3D0: cmp edi, 3 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1703C4BB; /* 0x1703C3D3: jb 0x1703c4bb */
L_1703C3D9:
    eax = edi; /* 0x1703C3D9: mov eax, edi */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x1703C3DB: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x1703C3DB: shl eax, 4 */
    PUSH32(esp, eax); /* 0x1703C3DE: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1703C3DF: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1703C3E4: mov ebx, eax */
    /* test ebx, ebx */ /* 0x1703C3E6: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1703C3E8: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703C4BB; /* 0x1703C3E9: je 0x1703c4bb */
L_1703C3EF:
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(0);
    MEM32(ebx) = MEM32(ebx) & 0; /* 0x1703C3EF: and dword ptr [ebx], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1703C3F2: push esi */
    PUSH32(esp, ebx); /* 0x1703C3F3: push ebx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1703C3F4: push dword ptr [ebp + 8] */
    eax = edi + (-0x1); /* 0x1703C3F7: lea eax, [edi - 1] */
    MEM32(ebx + 0x4) = eax; /* 0x1703C3FA: mov dword ptr [ebx + 4], eax */
    RECOMP_CALL(sub_1703C184); /* 0x1703C3FD: call 0x1703c184 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0x10); /* 0x1703C402: mov esi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1703C405: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1703C407: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x1703C408: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0xC) = eax; /* 0x1703C40B: mov dword ptr [ebp + 0xc], eax */
    MEM32(esi + edi * 4 + (-0x4)) = eax; /* 0x1703C40E: mov dword ptr [esi + edi*4 - 4], eax */
    MEM32(ebp + (-0x4)) = 2; /* 0x1703C412: mov dword ptr [ebp - 4], 2 */
L_1703C419:
    eax = MEM32(ebx + 0x8); /* 0x1703C419: mov eax, dword ptr [ebx + 8] */
    ecx = MEM32(ebp + (-0x4)); /* 0x1703C41C: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 1; /* 0x1703C41F: inc dword ptr [ebp - 4] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - 1; /* 0x1703C422: dec dword ptr [ebp + 0xc] */
    _flag_k = FK_DEC;
    MEM32(esi + eax * 4) = ecx; /* 0x1703C425: mov dword ptr [esi + eax*4], ecx */
    eax = MEM32(ebx); /* 0x1703C428: mov eax, dword ptr [ebx] */
    MEM32(ebp + (-0x30)) = eax; /* 0x1703C42A: mov dword ptr [ebp - 0x30], eax */
    eax = MEM32(ebx + 0x8); /* 0x1703C42D: mov eax, dword ptr [ebx + 8] */
    MEM32(ebp + (-0x2C)) = eax; /* 0x1703C430: mov dword ptr [ebp - 0x2c], eax */
    MEM32(ebp + (-0x20)) = eax; /* 0x1703C433: mov dword ptr [ebp - 0x20], eax */
    eax = MEM32(ebx + 0x4); /* 0x1703C436: mov eax, dword ptr [ebx + 4] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x1703C439: mov dword ptr [ebp - 0x1c], eax */
    eax = MEM32(ebp + 0xC); /* 0x1703C43C: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1703C43F: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = ebx; /* 0x1703C441: mov edx, ebx */
    RECOMP_CALL(sub_1703A5A1); /* 0x1703C443: call 0x1703a5a1 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0xC); /* 0x1703C448: mov edi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1703C44B: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1703C44C: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1703AD06); /* 0x1703C44E: call 0x1703ad06 */
    RECOMP_FLAGS_IN();
    if (4u) _cf = (((edi) >> 28) & 1u); /* 0x1703C453: shl edi, 4 */
    if (4u) { _flag_a = recomp_flags_pack((edi << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 4u; /* 0x1703C453: shl edi, 4 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + ebx; /* 0x1703C456: add edi, ebx */
    _flag_k = FK_ADD;
    eax = ebp + (-0x30); /* 0x1703C458: lea eax, [ebp - 0x30] */
    MEM32(ebp + (-0x8)) = edi; /* 0x1703C45B: mov dword ptr [ebp - 8], edi */
    MEM32(ebp + (-0xC)) = eax; /* 0x1703C45E: mov dword ptr [ebp - 0xc], eax */
    MEM32(ebp + (-0x10)) = 2; /* 0x1703C461: mov dword ptr [ebp - 0x10], 2 */
L_1703C468:
    ecx = MEM32(eax + 0x4); /* 0x1703C468: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(eax); /* 0x1703C46B: sub ecx, dword ptr [eax] */
    _flag_k = FK_CMP;
    /* cmp ecx, 2 */ /* 0x1703C46D: cmp ecx, 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1703C49C; /* 0x1703C470: jb 0x1703c49c */
L_1703C472:
    PUSH32(esp, eax); /* 0x1703C472: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1703C473: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1703C184); /* 0x1703C476: call 0x1703c184 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0xC)); /* 0x1703C47B: mov esi, dword ptr [ebp - 0xc] */
    ecx = MEM32(ebp + 0xC); /* 0x1703C47E: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703C481: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703C482: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703C483: movsd dword ptr es:[edi], dword ptr [esi] */
    edx = ebx; /* 0x1703C484: mov edx, ebx */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703C486: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_1703AD75); /* 0x1703C487: call 0x1703ad75 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 1; /* 0x1703C48C: inc dword ptr [ebp + 0xc] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) + 0x10u; /* 0x1703C48F: add dword ptr [ebp - 8], 0x10 */
    _flag_k = FK_ADD;
    esi = MEM32(ebp + 0x10); /* 0x1703C493: mov esi, dword ptr [ebp + 0x10] */
    edi = MEM32(ebp + (-0x8)); /* 0x1703C496: mov edi, dword ptr [ebp - 8] */
    eax = MEM32(ebp + (-0xC)); /* 0x1703C499: mov eax, dword ptr [ebp - 0xc] */
L_1703C49C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x1703C49C: add eax, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) - 1; /* 0x1703C49F: dec dword ptr [ebp - 0x10] */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0xC)) = eax; /* 0x1703C4A2: mov dword ptr [ebp - 0xc], eax */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1703C468; /* 0x1703C4A5: jne 0x1703c468 */
L_1703C4A7:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x1703C4A7: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_1703C419; /* 0x1703C4AB: ja 0x1703c419 */
L_1703C4B1:
    PUSH32(esp, ebx); /* 0x1703C4B1: push ebx */
    RECOMP_CALL(sub_1721B010); /* 0x1703C4B2: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1703C4B7: pop ecx */
    esi = POP32_VAL(esp); /* 0x1703C4B8: pop esi */
    goto L_1703C4CC; /* 0x1703C4B9: jmp 0x1703c4cc */
L_1703C4BB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1703C4BB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x1703C4BD: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703C4CC; /* 0x1703C4BF: jbe 0x1703c4cc */
L_1703C4C1:
    ecx = MEM32(ebp + 0x10); /* 0x1703C4C1: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(ecx + eax * 4) = eax; /* 0x1703C4C4: mov dword ptr [ecx + eax*4], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1703C4C7: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, edi */ /* 0x1703C4C8: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1703C4C1; /* 0x1703C4CA: jb 0x1703c4c1 */
L_1703C4CC:
    edi = POP32_VAL(esp); /* 0x1703C4CC: pop edi */
    ebx = POP32_VAL(esp); /* 0x1703C4CD: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1703C4CE: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1703C4CF: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1703C4D7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1703C4D7u);

L_1703C4D7:
    eax = ecx; /* 0x1703C4D7: mov eax, ecx */
    fp_push(1.0); /* 0x1703C4D9: fld1  */
    MEM32(eax + 0x8) = 0x17001DB8u; /* 0x1703C4DB: mov dword ptr [eax + 8], 0x17001db8 */
    { double _v = fp_pop(); *(double*)ADDR(eax + 0x20) = _v; } /* 0x1703C4E2: fstp qword ptr [eax + 0x20] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1703C4E5: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    fp_push(1.0); /* 0x1703C4E7: fld1  */
    { double _v = fp_pop(); *(double*)ADDR(eax + 0x18) = _v; } /* 0x1703C4E9: fstp qword ptr [eax + 0x18] */
    MEM32(eax) = 0x17001E18u; /* 0x1703C4EC: mov dword ptr [eax], 0x17001e18 */
    MEM32(eax + 0x8) = 0x17001E08u; /* 0x1703C4F2: mov dword ptr [eax + 8], 0x17001e08 */
    MEM32(eax + 0x10) = 1; /* 0x1703C4F9: mov dword ptr [eax + 0x10], 1 */
    MEM32(eax + 0x14) = ecx; /* 0x1703C500: mov dword ptr [eax + 0x14], ecx */
    MEM32(eax + 0x50) = ecx; /* 0x1703C503: mov dword ptr [eax + 0x50], ecx */
    MEM32(eax + 0x38) = ecx; /* 0x1703C506: mov dword ptr [eax + 0x38], ecx */
    MEM32(eax + 0x3C) = ecx; /* 0x1703C509: mov dword ptr [eax + 0x3c], ecx */
    MEM32(eax + 0x40) = ecx; /* 0x1703C50C: mov dword ptr [eax + 0x40], ecx */
    MEM32(eax + 0x2C) = ecx; /* 0x1703C50F: mov dword ptr [eax + 0x2c], ecx */
    MEM32(eax + 0x30) = ecx; /* 0x1703C512: mov dword ptr [eax + 0x30], ecx */
    MEM32(eax + 0x34) = ecx; /* 0x1703C515: mov dword ptr [eax + 0x34], ecx */
    MEM32(eax + 0x28) = ecx; /* 0x1703C518: mov dword ptr [eax + 0x28], ecx */
    MEM32(eax + 0x54) = ecx; /* 0x1703C51B: mov dword ptr [eax + 0x54], ecx */
    MEM32(eax + 0x58) = ecx; /* 0x1703C51E: mov dword ptr [eax + 0x58], ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1703C521: ret  */
    RECOMP_REGS_OUT();
}

void sub_1703C527(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1703C527u);

L_1703C527:
    edi = edi; /* 0x1703C527: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1703C529: push ebp */
    ebp = esp; /* 0x1703C52A: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x1703C52C: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x10) = MEM32(ecx + 0x10) - 1; /* 0x1703C52F: dec dword ptr [ecx + 0x10] */
    _flag_k = FK_DEC;
    eax = MEM32(ecx + 0x10); /* 0x1703C532: mov eax, dword ptr [ecx + 0x10] */
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1703C540; /* 0x1703C535: jne 0x1703c540 */
L_1703C537:
    PUSH32(esp, 1); /* 0x1703C537: push 1 */
    RECOMP_CALL(sub_1703C289); /* 0x1703C539: call 0x1703c289 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1703C53E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1703C540:
    ebp = POP32_VAL(esp); /* 0x1703C540: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1703C541: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1703C549(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1703C549u);

L_1703C549:
    edi = edi; /* 0x1703C549: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1703C54B: push ebp */
    ebp = esp; /* 0x1703C54C: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x5Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x5Cu; /* 0x1703C54E: sub esp, 0x5c */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1703C551: push ebx */
    PUSH32(esp, edi); /* 0x1703C552: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1703C553: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1703C555: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x18), edi */ /* 0x1703C557: cmp dword ptr [ebp + 0x18], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x18)) = edi; /* 0x1703C55A: mov dword ptr [ebp - 0x18], edi */
    MEM32(ebp + (-0xC)) = edi; /* 0x1703C55D: mov dword ptr [ebp - 0xc], edi */
    MEM32(ebp + (-0x10)) = edi; /* 0x1703C560: mov dword ptr [ebp - 0x10], edi */
    MEM32(ebp + (-0x14)) = edi; /* 0x1703C563: mov dword ptr [ebp - 0x14], edi */
    MEM32(ebp + (-0x4)) = edi; /* 0x1703C566: mov dword ptr [ebp - 4], edi */
    MEM32(ebp + (-0x2C)) = edi; /* 0x1703C569: mov dword ptr [ebp - 0x2c], edi */
    MEM32(ebp + (-0x3C)) = 0x1703C2AFu; /* 0x1703C56C: mov dword ptr [ebp - 0x3c], 0x1703c2af */
    MEM32(ebp + (-0x34)) = 0x1703C3C3u; /* 0x1703C573: mov dword ptr [ebp - 0x34], 0x1703c3c3 */
    MEM32(ebp + (-0x38)) = 0x1703BD0Bu; /* 0x1703C57A: mov dword ptr [ebp - 0x38], 0x1703bd0b */
    MEM32(ebp + (-0x30)) = 0x1703BF0Cu; /* 0x1703C581: mov dword ptr [ebp - 0x30], 0x1703bf0c */
    ecx = 0x8876086Cu; /* 0x1703C588: mov ecx, 0x8876086c */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1703C591; /* 0x1703C58D: jne 0x1703c591 */
L_1703C58F:
    ebx = ecx; /* 0x1703C58F: mov ebx, ecx */
L_1703C591:
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x1703C591: fld dword ptr [ebp + 0x10] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(0x17001430)); /* 0x1703C594: fcomp dword ptr [0x17001430] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1703C59A: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1703C59C: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_1703C5AD; /* 0x1703C59F: jnp 0x1703c5ad */
L_1703C5A1:
    fp_push(1.0); /* 0x1703C5A1: fld1  */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + 0x10)); /* 0x1703C5A3: fcomp dword ptr [ebp + 0x10] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1703C5A6: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1703C5A8: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1703C5AF; /* 0x1703C5AB: jp 0x1703c5af */
L_1703C5AD:
    ebx = ecx; /* 0x1703C5AD: mov ebx, ecx */
L_1703C5AF:
    /* cmp MEM32(ebp + 0xC), edi */ /* 0x1703C5AF: cmp dword ptr [ebp + 0xc], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703C5B6; /* 0x1703C5B2: je 0x1703c5b6 */
L_1703C5B4:
    ebx = ecx; /* 0x1703C5B4: mov ebx, ecx */
L_1703C5B6:
    /* cmp ebx, edi */ /* 0x1703C5B6: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1703CB9C; /* 0x1703C5B8: jl 0x1703cb9c */
L_1703C5BE:
    fp_push(*(float*)&MEM32(0x1700141C)); /* 0x1703C5BE: fld dword ptr [0x1700141c] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + 0x10)); /* 0x1703C5C4: fcomp dword ptr [ebp + 0x10] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1703C5C7: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1703C5C9: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1703C5D2; /* 0x1703C5CC: jp 0x1703c5d2 */
L_1703C5CE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1703C5CE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1703C5D5; /* 0x1703C5D0: jmp 0x1703c5d5 */
L_1703C5D2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1703C5D2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1703C5D4: inc eax */
    _flag_k = FK_INC;
L_1703C5D5:
    ebx = MEM32(ebp + 0x8); /* 0x1703C5D5: mov ebx, dword ptr [ebp + 8] */
    /* cmp MEM32(ebx + eax * 4 + 0x54), edi */ /* 0x1703C5D8: cmp dword ptr [ebx + eax*4 + 0x54], edi */
    _flag_a = (uint32_t)(MEM32(ebx + eax * 4 + 0x54)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0xC) = eax; /* 0x1703C5DC: mov dword ptr [ebp + 0xc], eax */
    PUSH32(esp, esi); /* 0x1703C5DF: push esi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1703C71C; /* 0x1703C5E0: jne 0x1703c71c */
L_1703C5E6:
    /* cmp MEM32(ebx + 0x38), edi */ /* 0x1703C5E6: cmp dword ptr [ebx + 0x38], edi */
    _flag_a = (uint32_t)(MEM32(ebx + 0x38)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x8) = edi; /* 0x1703C5E9: mov dword ptr [ebp + 8], edi */
    if (CMP_BE(_flag_a, _flag_b)) goto L_1703C71C; /* 0x1703C5EC: jbe 0x1703c71c */
L_1703C5F2:
    esi = eax * 4 + 0x24; /* 0x1703C5F2: lea esi, [eax*4 + 0x24] */
L_1703C5F9:
    eax = MEM32(ebx + 0x3C); /* 0x1703C5F9: mov eax, dword ptr [ebx + 0x3c] */
    eax = MEM32(edi + eax + 0x4); /* 0x1703C5FC: mov eax, dword ptr [edi + eax + 4] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1703C600: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1703C600: shl eax, 2 */
    PUSH32(esp, eax); /* 0x1703C603: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1703C604: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1703C609: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1703C60B: pop ecx */
    MEM32(ebp + (-0xC)) = eax; /* 0x1703C60C: mov dword ptr [ebp - 0xc], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703C747; /* 0x1703C60F: je 0x1703c747 */
L_1703C615:
    eax = MEM32(ebx + 0x3C); /* 0x1703C615: mov eax, dword ptr [ebx + 0x3c] */
    eax = MEM32(edi + eax + 0x8); /* 0x1703C618: mov eax, dword ptr [edi + eax + 8] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1703C61C: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1703C61C: shl eax, 2 */
    PUSH32(esp, eax); /* 0x1703C61F: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1703C620: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1703C625: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1703C627: pop ecx */
    MEM32(ebp + (-0x10)) = eax; /* 0x1703C628: mov dword ptr [ebp - 0x10], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703C747; /* 0x1703C62B: je 0x1703c747 */
L_1703C631:
    eax = MEM32(ebx + 0x3C); /* 0x1703C631: mov eax, dword ptr [ebx + 0x3c] */
    eax = MEM32(edi + eax + 0xC); /* 0x1703C634: mov eax, dword ptr [edi + eax + 0xc] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1703C638: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1703C638: shl eax, 2 */
    PUSH32(esp, eax); /* 0x1703C63B: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1703C63C: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1703C641: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1703C643: pop ecx */
    MEM32(ebp + (-0x14)) = eax; /* 0x1703C644: mov dword ptr [ebp - 0x14], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703C747; /* 0x1703C647: je 0x1703c747 */
L_1703C64D:
    eax = MEM32(ebx + 0x3C); /* 0x1703C64D: mov eax, dword ptr [ebx + 0x3c] */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x1703C650: push dword ptr [ebp - 0xc] */
    ecx = MEM32(ebp + 0xC); /* 0x1703C653: mov ecx, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + ecx * 4 + (-0x3C)); /* 0x1703C656: mov ecx, dword ptr [ebp + ecx*4 - 0x3c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x1703C65A: add eax, edi */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x1703C65C: push dword ptr [eax + 4] */
    PUSH32(esp, MEM32(eax + 0x10)); /* 0x1703C65F: push dword ptr [eax + 0x10] */
    RECOMP_ICALL(ecx); /* 0x1703C662: call ecx */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0x3C); /* 0x1703C664: mov eax, dword ptr [ebx + 0x3c] */
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x1703C667: push dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x1703C66A: add eax, edi */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(eax + 0x8)); /* 0x1703C66C: push dword ptr [eax + 8] */
    PUSH32(esp, MEM32(eax + 0x14)); /* 0x1703C66F: push dword ptr [eax + 0x14] */
    eax = MEM32(ebp + 0xC); /* 0x1703C672: mov eax, dword ptr [ebp + 0xc] */
    RECOMP_ICALL(MEM32(ebp + eax * 4 + (-0x34))); /* 0x1703C675: call dword ptr [ebp + eax*4 - 0x34] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0x3C); /* 0x1703C679: mov eax, dword ptr [ebx + 0x3c] */
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x1703C67C: push dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x1703C67F: add eax, edi */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x1703C681: push dword ptr [eax + 0xc] */
    PUSH32(esp, MEM32(eax + 0x18)); /* 0x1703C684: push dword ptr [eax + 0x18] */
    eax = MEM32(ebp + 0xC); /* 0x1703C687: mov eax, dword ptr [ebp + 0xc] */
    RECOMP_ICALL(MEM32(ebp + eax * 4 + (-0x3C))); /* 0x1703C68A: call dword ptr [ebp + eax*4 - 0x3c] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0x3C); /* 0x1703C68E: mov eax, dword ptr [ebx + 0x3c] */
    eax = MEM32(esi + eax + (-0x8)); /* 0x1703C691: mov eax, dword ptr [esi + eax - 8] */
    /* test eax, eax */ /* 0x1703C695: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703C6A8; /* 0x1703C697: je 0x1703c6a8 */
L_1703C699:
    PUSH32(esp, eax); /* 0x1703C699: push eax */
    RECOMP_CALL(sub_1721B010); /* 0x1703C69A: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0x3C); /* 0x1703C69F: mov eax, dword ptr [ebx + 0x3c] */
    _flag_a = (uint32_t)(MEM32(esi + eax + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(esi + eax + (-0x8)) = MEM32(esi + eax + (-0x8)) & 0; /* 0x1703C6A2: and dword ptr [esi + eax - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1703C6A7: pop ecx */
L_1703C6A8:
    eax = MEM32(ebx + 0x3C); /* 0x1703C6A8: mov eax, dword ptr [ebx + 0x3c] */
    eax = MEM32(esi + eax); /* 0x1703C6AB: mov eax, dword ptr [esi + eax] */
    /* test eax, eax */ /* 0x1703C6AE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703C6C0; /* 0x1703C6B0: je 0x1703c6c0 */
L_1703C6B2:
    PUSH32(esp, eax); /* 0x1703C6B2: push eax */
    RECOMP_CALL(sub_1721B010); /* 0x1703C6B3: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0x3C); /* 0x1703C6B8: mov eax, dword ptr [ebx + 0x3c] */
    _flag_a = (uint32_t)(MEM32(esi + eax)); _flag_b = (uint32_t)(0);
    MEM32(esi + eax) = MEM32(esi + eax) & 0; /* 0x1703C6BB: and dword ptr [esi + eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1703C6BF: pop ecx */
L_1703C6C0:
    eax = MEM32(ebx + 0x3C); /* 0x1703C6C0: mov eax, dword ptr [ebx + 0x3c] */
    eax = MEM32(esi + eax + 0x8); /* 0x1703C6C3: mov eax, dword ptr [esi + eax + 8] */
    /* test eax, eax */ /* 0x1703C6C7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703C6DA; /* 0x1703C6C9: je 0x1703c6da */
L_1703C6CB:
    PUSH32(esp, eax); /* 0x1703C6CB: push eax */
    RECOMP_CALL(sub_1721B010); /* 0x1703C6CC: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0x3C); /* 0x1703C6D1: mov eax, dword ptr [ebx + 0x3c] */
    _flag_a = (uint32_t)(MEM32(esi + eax + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(esi + eax + 0x8) = MEM32(esi + eax + 0x8) & 0; /* 0x1703C6D4: and dword ptr [esi + eax + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1703C6D9: pop ecx */
L_1703C6DA:
    eax = MEM32(ebx + 0x3C); /* 0x1703C6DA: mov eax, dword ptr [ebx + 0x3c] */
    ecx = MEM32(ebp + (-0xC)); /* 0x1703C6DD: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(esi + eax + (-0x8)) = ecx; /* 0x1703C6E0: mov dword ptr [esi + eax - 8], ecx */
    eax = MEM32(ebx + 0x3C); /* 0x1703C6E4: mov eax, dword ptr [ebx + 0x3c] */
    ecx = MEM32(ebp + (-0x10)); /* 0x1703C6E7: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(esi + eax) = ecx; /* 0x1703C6EA: mov dword ptr [esi + eax], ecx */
    eax = MEM32(ebx + 0x3C); /* 0x1703C6ED: mov eax, dword ptr [ebx + 0x3c] */
    ecx = MEM32(ebp + (-0x14)); /* 0x1703C6F0: mov ecx, dword ptr [ebp - 0x14] */
    MEM32(esi + eax + 0x8) = ecx; /* 0x1703C6F3: mov dword ptr [esi + eax + 8], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1703C6F7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + 1; /* 0x1703C6F9: inc dword ptr [ebp + 8] */
    _flag_k = FK_INC;
    MEM32(ebp + (-0xC)) = eax; /* 0x1703C6FC: mov dword ptr [ebp - 0xc], eax */
    MEM32(ebp + (-0x10)) = eax; /* 0x1703C6FF: mov dword ptr [ebp - 0x10], eax */
    MEM32(ebp + (-0x14)) = eax; /* 0x1703C702: mov dword ptr [ebp - 0x14], eax */
    eax = MEM32(ebp + 0x8); /* 0x1703C705: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x44u; /* 0x1703C708: add edi, 0x44 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x44u; /* 0x1703C70B: add esi, 0x44 */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(ebx + 0x38) */ /* 0x1703C70E: cmp eax, dword ptr [ebx + 0x38] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x38));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1703C5F9; /* 0x1703C711: jb 0x1703c5f9 */
L_1703C717:
    eax = MEM32(ebp + 0xC); /* 0x1703C717: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1703C71A: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1703C71C:
    fp_push(1.0); /* 0x1703C71C: fld1  */
    MEM32(ebx + eax * 4 + 0x54) = 1; /* 0x1703C71E: mov dword ptr [ebx + eax*4 + 0x54], 1 */
    _st[0] -= (double)*(float*)ADDR(ebp + 0x10); /* 0x1703C726: fsub dword ptr [ebp + 0x10] */
    fp_push(1.0); /* 0x1703C729: fld1  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1703C72B: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1703C72D: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1703C72F: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_1703C751; /* 0x1703C732: jnp 0x1703c751 */
L_1703C734:
    fp_push(_st[0]); /* 0x1703C734: fld st(0) */
    fp_push(0.0); /* 0x1703C736: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1703C738: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1703C73A: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1703C73C: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1703C751; /* 0x1703C73F: jne 0x1703c751 */
L_1703C741:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1703C741: fstp st(0) */
    fp_push(0.0); /* 0x1703C743: fldz  */
    goto L_1703C760; /* 0x1703C745: jmp 0x1703c760 */
L_1703C747:
    ebx = 0x8007000Eu; /* 0x1703C747: mov ebx, 0x8007000e */
    goto L_1703CB62; /* 0x1703C74C: jmp 0x1703cb62 */
L_1703C751:
    fp_push(1.0); /* 0x1703C751: fld1  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1703C753: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1703C755: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1703C757: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1703C760; /* 0x1703C75A: jp 0x1703c760 */
L_1703C75C:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1703C75C: fstp st(0) */
    fp_push(1.0); /* 0x1703C75E: fld1  */
L_1703C760:
    ecx = MEM32(ebx + 0x38); /* 0x1703C760: mov ecx, dword ptr [ebx + 0x38] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x1703C763: fstp dword ptr [ebp - 0x1c] */
    /* cmp ecx, edi */ /* 0x1703C766: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x10) = 8; /* 0x1703C768: mov dword ptr [ebp + 0x10], 8 */
    if (CMP_BE(_flag_a, _flag_b)) goto L_1703C7CD; /* 0x1703C76F: jbe 0x1703c7cd */
L_1703C771:
    edx = MEM32(ebx + 0x3C); /* 0x1703C771: mov edx, dword ptr [ebx + 0x3c] */
    eax = edx; /* 0x1703C774: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1703C776: add eax, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = ecx; /* 0x1703C779: mov dword ptr [ebp + 8], ecx */
L_1703C77C:
    esi = MEM32(edx); /* 0x1703C77C: mov esi, dword ptr [edx] */
    ecx = esi + 0x1; /* 0x1703C77E: lea ecx, [esi + 1] */
    MEM32(ebp + (-0x38)) = ecx; /* 0x1703C781: mov dword ptr [ebp - 0x38], ecx */
L_1703C784:
    SET_LO8(ecx, MEM8(esi)); /* 0x1703C784: mov cl, byte ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1703C786: inc esi */
    _flag_k = FK_INC;
    /* test LO8(ecx), LO8(ecx) */ /* 0x1703C787: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1703C784; /* 0x1703C789: jne 0x1703c784 */
L_1703C78B:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x38)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - MEM32(ebp + (-0x38)); /* 0x1703C78B: sub esi, dword ptr [ebp - 0x38] */
    _flag_k = FK_CMP;
    ecx = MEM32(eax + 0x4); /* 0x1703C78E: mov ecx, dword ptr [eax + 4] */
    edi = edi + esi + 0x1; /* 0x1703C791: lea edi, [edi + esi + 1] */
    esi = MEM32(eax + 0x8); /* 0x1703C795: mov esi, dword ptr [eax + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(eax); /* 0x1703C798: add esi, dword ptr [eax] */
    _flag_k = FK_ADD;
    ecx = ecx + ecx * 4; /* 0x1703C79A: lea ecx, [ecx + ecx*4] */
    if (4u) _cf = (((esi) >> 28) & 1u); /* 0x1703C79D: shl esi, 4 */
    if (4u) { _flag_a = recomp_flags_pack((esi << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 4u; /* 0x1703C79D: shl esi, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + 0x10); /* 0x1703C7A0: add esi, dword ptr [ebp + 0x10] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x44u; /* 0x1703C7A3: add edx, 0x44 */
    _flag_k = FK_ADD;
    ecx = esi + ecx * 4 + 0x10; /* 0x1703C7A6: lea ecx, [esi + ecx*4 + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x44u; /* 0x1703C7AA: add eax, 0x44 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) - 1; /* 0x1703C7AD: dec dword ptr [ebp + 8] */
    _flag_k = FK_DEC;
    MEM32(ebp + 0x10) = ecx; /* 0x1703C7B0: mov dword ptr [ebp + 0x10], ecx */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1703C77C; /* 0x1703C7B3: jne 0x1703c77c */
L_1703C7B5:
    /* test edi, edi */ /* 0x1703C7B5: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703C7C7; /* 0x1703C7B7: jbe 0x1703c7c7 */
L_1703C7B9:
    PUSH32(esp, edi); /* 0x1703C7B9: push edi */
    RECOMP_CALL(sub_1721B01C); /* 0x1703C7BA: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1703C7BF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1703C7C1: pop ecx */
    MEM32(ebp + (-0x2C)) = eax; /* 0x1703C7C2: mov dword ptr [ebp - 0x2c], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703C7DD; /* 0x1703C7C5: je 0x1703c7dd */
L_1703C7C7:
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x1703C7C7: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1703C7E7; /* 0x1703C7CB: jbe 0x1703c7e7 */
L_1703C7CD:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1703C7CD: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1721B01C); /* 0x1703C7D0: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1703C7D5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1703C7D7: pop ecx */
    MEM32(ebp + (-0x4)) = eax; /* 0x1703C7D8: mov dword ptr [ebp - 4], eax */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1703C7E7; /* 0x1703C7DB: jne 0x1703c7e7 */
L_1703C7DD:
    ebx = 0x8007000Eu; /* 0x1703C7DD: mov ebx, 0x8007000e */
    goto L_1703CB44; /* 0x1703C7E2: jmp 0x1703cb44 */
L_1703C7E7:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x1703C7E7: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) & 0; /* 0x1703C7EB: and dword ptr [ebp + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebx + 0x38), 0 */ /* 0x1703C7EF: cmp dword ptr [ebx + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, 8); /* 0x1703C7F3: push 8 */
    eax = POP32_VAL(esp); /* 0x1703C7F5: pop eax */
    MEM32(ebp + 0x10) = eax; /* 0x1703C7F6: mov dword ptr [ebp + 0x10], eax */
    if (CMP_BE(_flag_a, _flag_b)) goto L_1703CAD7; /* 0x1703C7F9: jbe 0x1703cad7 */
L_1703C7FF:
    eax = MEM32(ebp + 0xC); /* 0x1703C7FF: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x30))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x30)) = MEM32(ebp + (-0x30)) & 0; /* 0x1703C802: and dword ptr [ebp - 0x30], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = eax * 4 + 0x24; /* 0x1703C806: lea eax, [eax*4 + 0x24] */
    MEM32(ebp + (-0x28)) = eax; /* 0x1703C80D: mov dword ptr [ebp - 0x28], eax */
L_1703C810:
    eax = MEM32(ebx + 0x3C); /* 0x1703C810: mov eax, dword ptr [ebx + 0x3c] */
    ecx = MEM32(ebp + (-0x30)); /* 0x1703C813: mov ecx, dword ptr [ebp - 0x30] */
    esi = eax + ecx; /* 0x1703C816: lea esi, [eax + ecx] */
    edi = MEM32(esi + 0x4); /* 0x1703C819: mov edi, dword ptr [esi + 4] */
    fp_push((double)(int32_t)MEM32(esi + 0x4)); /* 0x1703C81C: fild dword ptr [esi + 4] */
    /* test edi, edi */ /* 0x1703C81F: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1703C829; /* 0x1703C821: jge 0x1703c829 */
L_1703C823:
    _st[0] += (double)*(float*)ADDR(0x1700142C); /* 0x1703C823: fadd dword ptr [0x1700142c] */
L_1703C829:
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x1C)); /* 0x1703C829: fmul dword ptr [ebp - 0x1c] */
    RECOMP_CALL(sub_1721B050); /* 0x1703C82C: call 0x1721b050 */
    RECOMP_FLAGS_IN();
    /* cmp eax, 5 */ /* 0x1703C831: cmp eax, 5 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x20)) = eax; /* 0x1703C834: mov dword ptr [ebp - 0x20], eax */
    if (CMP_A(_flag_a, _flag_b)) goto L_1703C840; /* 0x1703C837: ja 0x1703c840 */
L_1703C839:
    MEM32(ebp + (-0x20)) = 5; /* 0x1703C839: mov dword ptr [ebp - 0x20], 5 */
L_1703C840:
    /* cmp MEM32(ebp + (-0x20)), edi */ /* 0x1703C840: cmp dword ptr [ebp - 0x20], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1703C848; /* 0x1703C843: jb 0x1703c848 */
L_1703C845:
    MEM32(ebp + (-0x20)) = edi; /* 0x1703C845: mov dword ptr [ebp - 0x20], edi */
L_1703C848:
    edi = MEM32(esi + 0x8); /* 0x1703C848: mov edi, dword ptr [esi + 8] */
    fp_push((double)(int32_t)MEM32(esi + 0x8)); /* 0x1703C84B: fild dword ptr [esi + 8] */
    /* test edi, edi */ /* 0x1703C84E: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1703C858; /* 0x1703C850: jge 0x1703c858 */
L_1703C852:
    _st[0] += (double)*(float*)ADDR(0x1700142C); /* 0x1703C852: fadd dword ptr [0x1700142c] */
L_1703C858:
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x1C)); /* 0x1703C858: fmul dword ptr [ebp - 0x1c] */
    RECOMP_CALL(sub_1721B050); /* 0x1703C85B: call 0x1721b050 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + 0xC) = eax; /* 0x1703C860: mov dword ptr [ebp + 0xc], eax */
    PUSH32(esp, 5); /* 0x1703C863: push 5 */
    eax = POP32_VAL(esp); /* 0x1703C865: pop eax */
    /* cmp MEM32(ebp + 0xC), eax */ /* 0x1703C866: cmp dword ptr [ebp + 0xc], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1703C86E; /* 0x1703C869: ja 0x1703c86e */
L_1703C86B:
    MEM32(ebp + 0xC) = eax; /* 0x1703C86B: mov dword ptr [ebp + 0xc], eax */
L_1703C86E:
    /* cmp MEM32(ebp + 0xC), edi */ /* 0x1703C86E: cmp dword ptr [ebp + 0xc], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1703C876; /* 0x1703C871: jb 0x1703c876 */
L_1703C873:
    MEM32(ebp + 0xC) = edi; /* 0x1703C873: mov dword ptr [ebp + 0xc], edi */
L_1703C876:
    esi = MEM32(esi + 0xC); /* 0x1703C876: mov esi, dword ptr [esi + 0xc] */
    /* test esi, esi */ /* 0x1703C879: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x38)) = esi; /* 0x1703C87B: mov dword ptr [ebp - 0x38], esi */
    fp_push((double)(int32_t)MEM32(ebp + (-0x38))); /* 0x1703C87E: fild dword ptr [ebp - 0x38] */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1703C889; /* 0x1703C881: jge 0x1703c889 */
L_1703C883:
    _st[0] += (double)*(float*)ADDR(0x1700142C); /* 0x1703C883: fadd dword ptr [0x1700142c] */
L_1703C889:
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x1C)); /* 0x1703C889: fmul dword ptr [ebp - 0x1c] */
    RECOMP_CALL(sub_1721B050); /* 0x1703C88C: call 0x1721b050 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 5); /* 0x1703C891: push 5 */
    ecx = POP32_VAL(esp); /* 0x1703C893: pop ecx */
    /* cmp eax, ecx */ /* 0x1703C894: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x24)) = eax; /* 0x1703C896: mov dword ptr [ebp - 0x24], eax */
    if (CMP_A(_flag_a, _flag_b)) goto L_1703C89E; /* 0x1703C899: ja 0x1703c89e */
L_1703C89B:
    MEM32(ebp + (-0x24)) = ecx; /* 0x1703C89B: mov dword ptr [ebp - 0x24], ecx */
L_1703C89E:
    /* cmp MEM32(ebp + (-0x24)), esi */ /* 0x1703C89E: cmp dword ptr [ebp - 0x24], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1703C8A6; /* 0x1703C8A1: jb 0x1703c8a6 */
L_1703C8A3:
    MEM32(ebp + (-0x24)) = esi; /* 0x1703C8A3: mov dword ptr [ebp - 0x24], esi */
L_1703C8A6:
    ecx = MEM32(ebp + (-0x4)); /* 0x1703C8A6: mov ecx, dword ptr [ebp - 4] */
    eax = MEM32(ebp + 0x10); /* 0x1703C8A9: mov eax, dword ptr [ebp + 0x10] */
    edx = MEM32(ebp + (-0x8)); /* 0x1703C8AC: mov edx, dword ptr [ebp - 8] */
    esi = MEM32(ebp + (-0x20)); /* 0x1703C8AF: mov esi, dword ptr [ebp - 0x20] */
    MEM32(eax + ecx) = edx; /* 0x1703C8B2: mov dword ptr [eax + ecx], edx */
    PUSH32(esp, 4); /* 0x1703C8B5: push 4 */
    edx = POP32_VAL(esp); /* 0x1703C8B7: pop edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1703C8B8: add eax, edx */
    _flag_k = FK_ADD;
    MEM32(eax + ecx) = esi; /* 0x1703C8BA: mov dword ptr [eax + ecx], esi */
    esi = MEM32(ebp + 0xC); /* 0x1703C8BD: mov esi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1703C8C0: add eax, edx */
    _flag_k = FK_ADD;
    MEM32(eax + ecx) = esi; /* 0x1703C8C2: mov dword ptr [eax + ecx], esi */
    esi = MEM32(ebp + (-0x24)); /* 0x1703C8C5: mov esi, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1703C8C8: add eax, edx */
    _flag_k = FK_ADD;
    MEM32(eax + ecx) = esi; /* 0x1703C8CA: mov dword ptr [eax + ecx], esi */
    ecx = MEM32(ebp + (-0x30)); /* 0x1703C8CD: mov ecx, dword ptr [ebp - 0x30] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1703C8D0: add eax, edx */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x10) = eax; /* 0x1703C8D2: mov dword ptr [ebp + 0x10], eax */
    eax = MEM32(ebx + 0x3C); /* 0x1703C8D5: mov eax, dword ptr [ebx + 0x3c] */
    esi = MEM32(ecx + eax); /* 0x1703C8D8: mov esi, dword ptr [ecx + eax] */
    eax = esi; /* 0x1703C8DB: mov eax, esi */
    edi = eax + 0x1; /* 0x1703C8DD: lea edi, [eax + 1] */
L_1703C8E0:
    SET_LO8(ecx, MEM8(eax)); /* 0x1703C8E0: mov cl, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1703C8E2: inc eax */
    _flag_k = FK_INC;
    /* test LO8(ecx), LO8(ecx) */ /* 0x1703C8E3: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1703C8E0; /* 0x1703C8E5: jne 0x1703c8e0 */
L_1703C8E7:
    edx = MEM32(ebp + (-0x2C)); /* 0x1703C8E7: mov edx, dword ptr [ebp - 0x2c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x1703C8EA: sub eax, edi */
    _flag_k = FK_CMP;
    edi = MEM32(ebp + (-0x8)); /* 0x1703C8EC: mov edi, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1703C8EF: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) + eax; /* 0x1703C8F0: add dword ptr [ebp - 8], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + edx; /* 0x1703C8F3: add edi, edx */
    _flag_k = FK_ADD;
    ecx = eax; /* 0x1703C8F5: mov ecx, eax */
    edx = ecx; /* 0x1703C8F7: mov edx, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1703C8F9: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1703C8F9: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1703C8FC: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = edx; /* 0x1703C8FE: mov ecx, edx */
    edx = MEM32(ebp + (-0x30)); /* 0x1703C900: mov edx, dword ptr [ebp - 0x30] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1703C903: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x1703C906: rep movsb byte ptr es:[edi], byte ptr [esi] */
    eax = MEM32(ebx + 0x3C); /* 0x1703C908: mov eax, dword ptr [ebx + 0x3c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1703C90B: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + eax + 0x4), ecx */ /* 0x1703C90D: cmp dword ptr [edx + eax + 4], ecx */
    _flag_a = (uint32_t)(MEM32(edx + eax + 0x4)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1703C954; /* 0x1703C911: jbe 0x1703c954 */
L_1703C913:
    esi = MEM32(ebp + (-0x4)); /* 0x1703C913: mov esi, dword ptr [ebp - 4] */
    edi = MEM32(ebp + 0x10); /* 0x1703C916: mov edi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + esi; /* 0x1703C919: add edi, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x38))); _flag_b = (uint32_t)(ecx);
    MEM32(ebp + (-0x38)) = MEM32(ebp + (-0x38)) & ecx; /* 0x1703C91B: and dword ptr [ebp - 0x38], ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x30)) = edi; /* 0x1703C91E: mov dword ptr [ebp - 0x30], edi */
L_1703C921:
    esi = MEM32(ebp + (-0x28)); /* 0x1703C921: mov esi, dword ptr [ebp - 0x28] */
    esi = MEM32(esi + eax + (-0x8)); /* 0x1703C924: mov esi, dword ptr [esi + eax - 8] */
    esi = MEM32(esi + ecx * 4); /* 0x1703C928: mov esi, dword ptr [esi + ecx*4] */
    /* cmp esi, MEM32(ebp + (-0x20)) */ /* 0x1703C92B: cmp esi, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x20)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1703C946; /* 0x1703C92E: jae 0x1703c946 */
L_1703C930:
    esi = MEM32(edx + eax + 0x10); /* 0x1703C930: mov esi, dword ptr [edx + eax + 0x10] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x38)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + (-0x38)); /* 0x1703C934: add esi, dword ptr [ebp - 0x38] */
    _flag_k = FK_ADD;
    edi = MEM32(ebp + (-0x30)); /* 0x1703C937: mov edi, dword ptr [ebp - 0x30] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 0x10u; /* 0x1703C93A: add dword ptr [ebp + 0x10], 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x30))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x30)) = MEM32(ebp + (-0x30)) + 0x10u; /* 0x1703C93E: add dword ptr [ebp - 0x30], 0x10 */
    _flag_k = FK_ADD;
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703C942: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703C943: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703C944: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703C945: movsd dword ptr es:[edi], dword ptr [esi] */
L_1703C946:
    eax = MEM32(ebx + 0x3C); /* 0x1703C946: mov eax, dword ptr [ebx + 0x3c] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x38))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x38)) = MEM32(ebp + (-0x38)) + 0x10u; /* 0x1703C949: add dword ptr [ebp - 0x38], 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1703C94D: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, MEM32(edx + eax + 0x4) */ /* 0x1703C94E: cmp ecx, dword ptr [edx + eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edx + eax + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1703C921; /* 0x1703C952: jb 0x1703c921 */
L_1703C954:
    eax = MEM32(ebp + (-0x4)); /* 0x1703C954: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(ebp + 0x10); /* 0x1703C957: mov ecx, dword ptr [ebp + 0x10] */
    esi = ecx + eax; /* 0x1703C95A: lea esi, [ecx + eax] */
    ecx = MEM32(ebx + 0x3C); /* 0x1703C95D: mov ecx, dword ptr [ebx + 0x3c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1703C960: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + ecx + 0x8), eax */ /* 0x1703C962: cmp dword ptr [edx + ecx + 8], eax */
    _flag_a = (uint32_t)(MEM32(edx + ecx + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x20)) = esi; /* 0x1703C966: mov dword ptr [ebp - 0x20], esi */
    if (CMP_BE(_flag_a, _flag_b)) goto L_1703C9A7; /* 0x1703C969: jbe 0x1703c9a7 */
L_1703C96B:
    MEM32(ebp + (-0x38)) = esi; /* 0x1703C96B: mov dword ptr [ebp - 0x38], esi */
    MEM32(ebp + (-0x30)) = eax; /* 0x1703C96E: mov dword ptr [ebp - 0x30], eax */
L_1703C971:
    esi = MEM32(ebp + (-0x28)); /* 0x1703C971: mov esi, dword ptr [ebp - 0x28] */
    esi = MEM32(esi + ecx); /* 0x1703C974: mov esi, dword ptr [esi + ecx] */
    esi = MEM32(esi + eax * 4); /* 0x1703C977: mov esi, dword ptr [esi + eax*4] */
    /* cmp esi, MEM32(ebp + 0xC) */ /* 0x1703C97A: cmp esi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1703C996; /* 0x1703C97D: jae 0x1703c996 */
L_1703C97F:
    esi = MEM32(edx + ecx + 0x14); /* 0x1703C97F: mov esi, dword ptr [edx + ecx + 0x14] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x30)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + (-0x30)); /* 0x1703C983: add esi, dword ptr [ebp - 0x30] */
    _flag_k = FK_ADD;
    edi = MEM32(ebp + (-0x38)); /* 0x1703C986: mov edi, dword ptr [ebp - 0x38] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 0x14u; /* 0x1703C989: add dword ptr [ebp + 0x10], 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x38))); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x38)) = MEM32(ebp + (-0x38)) + 0x14u; /* 0x1703C98D: add dword ptr [ebp - 0x38], 0x14 */
    _flag_k = FK_ADD;
    PUSH32(esp, 5); /* 0x1703C991: push 5 */
    ecx = POP32_VAL(esp); /* 0x1703C993: pop ecx */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1703C994: rep movsd dword ptr es:[edi], dword ptr [esi] */
L_1703C996:
    ecx = MEM32(ebx + 0x3C); /* 0x1703C996: mov ecx, dword ptr [ebx + 0x3c] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x30))); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x30)) = MEM32(ebp + (-0x30)) + 0x14u; /* 0x1703C999: add dword ptr [ebp - 0x30], 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1703C99D: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, MEM32(edx + ecx + 0x8) */ /* 0x1703C99E: cmp eax, dword ptr [edx + ecx + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + ecx + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1703C971; /* 0x1703C9A2: jb 0x1703c971 */
L_1703C9A4:
    esi = MEM32(ebp + (-0x20)); /* 0x1703C9A4: mov esi, dword ptr [ebp - 0x20] */
L_1703C9A7:
    eax = MEM32(ebp + 0xC); /* 0x1703C9A7: mov eax, dword ptr [ebp + 0xc] */
    /* cmp eax, 1 */ /* 0x1703C9AA: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1703CA6F; /* 0x1703C9AD: jbe 0x1703ca6f */
L_1703C9B3:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1703C9B3: dec eax */
    _flag_k = FK_DEC;
    ecx = esi + 0xC; /* 0x1703C9B4: lea ecx, [esi + 0xc] */
    MEM32(ebp + (-0x38)) = eax; /* 0x1703C9B7: mov dword ptr [ebp - 0x38], eax */
L_1703C9BA:
    fp_push(*(float*)&MEM32(ecx + (-0x8))); /* 0x1703C9BA: fld dword ptr [ecx - 8] */
    edi = ecx + 0xC; /* 0x1703C9BD: lea edi, [ecx + 0xc] */
    _st[0] += (double)*(float*)ADDR(edi); /* 0x1703C9C0: fadd dword ptr [edi] */
    esi = ecx + 0x14; /* 0x1703C9C2: lea esi, [ecx + 0x14] */
    fp_push(*(float*)&MEM32(ecx + (-0x4))); /* 0x1703C9C5: fld dword ptr [ecx - 4] */
    MEM32(ebp + 0xC) = esi; /* 0x1703C9C8: mov dword ptr [ebp + 0xc], esi */
    _st[0] += (double)*(float*)ADDR(ecx + 0x10); /* 0x1703C9CB: fadd dword ptr [ecx + 0x10] */
    fp_push(*(float*)&MEM32(ecx)); /* 0x1703C9CE: fld dword ptr [ecx] */
    _st[0] += (double)*(float*)ADDR(esi); /* 0x1703C9D0: fadd dword ptr [esi] */
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x1703C9D2: fld dword ptr [ecx + 4] */
    _st[0] += (double)*(float*)ADDR(ecx + 0x18); /* 0x1703C9D5: fadd dword ptr [ecx + 0x18] */
    fp_push(*(float*)&MEM32(edi)); /* 0x1703C9D8: fld dword ptr [edi] */
    _st[0] -= (double)*(float*)ADDR(ecx + (-0x8)); /* 0x1703C9DA: fsub dword ptr [ecx - 8] */
    fp_push(*(float*)&MEM32(ecx + 0x10)); /* 0x1703C9DD: fld dword ptr [ecx + 0x10] */
    _st[0] -= (double)*(float*)ADDR(ecx + (-0x4)); /* 0x1703C9E0: fsub dword ptr [ecx - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x48)) = _v; } /* 0x1703C9E3: fstp dword ptr [ebp - 0x48] */
    fp_push(*(float*)&MEM32(esi)); /* 0x1703C9E6: fld dword ptr [esi] */
    _st[0] -= (double)*(float*)ADDR(ecx); /* 0x1703C9E8: fsub dword ptr [ecx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x44)) = _v; } /* 0x1703C9EA: fstp dword ptr [ebp - 0x44] */
    fp_push(*(float*)&MEM32(ecx + 0x18)); /* 0x1703C9ED: fld dword ptr [ecx + 0x18] */
    _st[0] -= (double)*(float*)ADDR(ecx + 0x4); /* 0x1703C9F0: fsub dword ptr [ecx + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x40)) = _v; } /* 0x1703C9F3: fstp dword ptr [ebp - 0x40] */
    fp_push(_st[1]); /* 0x1703C9F6: fld st(1) */
    _st[0] *= _st[2]; /* 0x1703C9F8: fmul st(2) */
    fp_push(_st[3]); /* 0x1703C9FA: fld st(3) */
    _st[0] *= _st[4]; /* 0x1703C9FC: fmul st(4) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1703C9FE: faddp st(1) */
    fp_push(_st[4]); /* 0x1703CA00: fld st(4) */
    _st[0] *= _st[5]; /* 0x1703CA02: fmul st(5) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1703CA04: faddp st(1) */
    fp_push(_st[5]); /* 0x1703CA06: fld st(5) */
    _st[0] *= _st[6]; /* 0x1703CA08: fmul st(6) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1703CA0A: faddp st(1) */
    fp_push(_st[1]); /* 0x1703CA0C: fld st(1) */
    _st[0] *= _st[2]; /* 0x1703CA0E: fmul st(2) */
    fp_push(*(float*)&MEM32(ebp + (-0x40))); /* 0x1703CA10: fld dword ptr [ebp - 0x40] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x40)); /* 0x1703CA13: fmul dword ptr [ebp - 0x40] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1703CA16: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x44))); /* 0x1703CA18: fld dword ptr [ebp - 0x44] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x44)); /* 0x1703CA1B: fmul dword ptr [ebp - 0x44] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1703CA1E: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x48))); /* 0x1703CA20: fld dword ptr [ebp - 0x48] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x48)); /* 0x1703CA23: fmul dword ptr [ebp - 0x48] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1703CA26: faddp st(1) */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1703CA28: fcompp  */
    fp_pop(); fp_pop();
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1703CA2A: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1703CA2C: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1703CA2E: fstp st(0) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1703CA30: fnstsw ax */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1703CA32: fstp st(0) */
    /* test HI8(eax), 0x41u */ /* 0x1703CA34: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1703CA37: fstp st(0) */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1703CA64; /* 0x1703CA39: jne 0x1703ca64 */
L_1703CA3B:
    fp_push(*(float*)&MEM32(edi)); /* 0x1703CA3B: fld dword ptr [edi] */
    eax = esi; /* 0x1703CA3D: mov eax, esi */
    _st[0] = -_st[0]; /* 0x1703CA3F: fchs  */
    esi = ebp + (-0x5C); /* 0x1703CA41: lea esi, [ebp - 0x5c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x5C)) = _v; } /* 0x1703CA44: fstp dword ptr [ebp - 0x5c] */
    fp_push(*(float*)&MEM32(ecx + 0x10)); /* 0x1703CA47: fld dword ptr [ecx + 0x10] */
    _st[0] = -_st[0]; /* 0x1703CA4A: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x58)) = _v; } /* 0x1703CA4C: fstp dword ptr [ebp - 0x58] */
    fp_push(*(float*)&MEM32(eax)); /* 0x1703CA4F: fld dword ptr [eax] */
    _st[0] = -_st[0]; /* 0x1703CA51: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x54)) = _v; } /* 0x1703CA53: fstp dword ptr [ebp - 0x54] */
    fp_push(*(float*)&MEM32(ecx + 0x18)); /* 0x1703CA56: fld dword ptr [ecx + 0x18] */
    _st[0] = -_st[0]; /* 0x1703CA59: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x50)) = _v; } /* 0x1703CA5B: fstp dword ptr [ebp - 0x50] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703CA5E: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703CA5F: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703CA60: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703CA61: movsd dword ptr es:[edi], dword ptr [esi] */
    esi = eax; /* 0x1703CA62: mov esi, eax */
L_1703CA64:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x38))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x38)) = MEM32(ebp + (-0x38)) - 1; /* 0x1703CA64: dec dword ptr [ebp - 0x38] */
    _flag_k = FK_DEC;
    ecx = esi; /* 0x1703CA67: mov ecx, esi */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1703C9BA; /* 0x1703CA69: jne 0x1703c9ba */
L_1703CA6F:
    eax = MEM32(ebx + 0x3C); /* 0x1703CA6F: mov eax, dword ptr [ebx + 0x3c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1703CA72: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + eax + 0xC), ecx */ /* 0x1703CA74: cmp dword ptr [edx + eax + 0xc], ecx */
    _flag_a = (uint32_t)(MEM32(edx + eax + 0xC)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1703CABB; /* 0x1703CA78: jbe 0x1703cabb */
L_1703CA7A:
    esi = MEM32(ebp + 0x10); /* 0x1703CA7A: mov esi, dword ptr [ebp + 0x10] */
    edi = MEM32(ebp + (-0x4)); /* 0x1703CA7D: mov edi, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edi; /* 0x1703CA80: add esi, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x38))); _flag_b = (uint32_t)(ecx);
    MEM32(ebp + (-0x38)) = MEM32(ebp + (-0x38)) & ecx; /* 0x1703CA82: and dword ptr [ebp - 0x38], ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0xC) = esi; /* 0x1703CA85: mov dword ptr [ebp + 0xc], esi */
L_1703CA88:
    esi = MEM32(ebp + (-0x28)); /* 0x1703CA88: mov esi, dword ptr [ebp - 0x28] */
    esi = MEM32(esi + eax + 0x8); /* 0x1703CA8B: mov esi, dword ptr [esi + eax + 8] */
    esi = MEM32(esi + ecx * 4); /* 0x1703CA8F: mov esi, dword ptr [esi + ecx*4] */
    /* cmp esi, MEM32(ebp + (-0x24)) */ /* 0x1703CA92: cmp esi, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x24)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1703CAAD; /* 0x1703CA95: jae 0x1703caad */
L_1703CA97:
    esi = MEM32(edx + eax + 0x18); /* 0x1703CA97: mov esi, dword ptr [edx + eax + 0x18] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x38)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + (-0x38)); /* 0x1703CA9B: add esi, dword ptr [ebp - 0x38] */
    _flag_k = FK_ADD;
    edi = MEM32(ebp + 0xC); /* 0x1703CA9E: mov edi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 0x10u; /* 0x1703CAA1: add dword ptr [ebp + 0x10], 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 0x10u; /* 0x1703CAA5: add dword ptr [ebp + 0xc], 0x10 */
    _flag_k = FK_ADD;
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703CAA9: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703CAAA: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703CAAB: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703CAAC: movsd dword ptr es:[edi], dword ptr [esi] */
L_1703CAAD:
    eax = MEM32(ebx + 0x3C); /* 0x1703CAAD: mov eax, dword ptr [ebx + 0x3c] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x38))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x38)) = MEM32(ebp + (-0x38)) + 0x10u; /* 0x1703CAB0: add dword ptr [ebp - 0x38], 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1703CAB4: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, MEM32(edx + eax + 0xC) */ /* 0x1703CAB5: cmp ecx, dword ptr [edx + eax + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edx + eax + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1703CA88; /* 0x1703CAB9: jb 0x1703ca88 */
L_1703CABB:
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + 1; /* 0x1703CABB: inc dword ptr [ebp + 8] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + 0x8); /* 0x1703CABE: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x28))); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x28)) = MEM32(ebp + (-0x28)) + 0x44u; /* 0x1703CAC1: add dword ptr [ebp - 0x28], 0x44 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x44u; /* 0x1703CAC5: add edx, 0x44 */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(ebx + 0x38) */ /* 0x1703CAC8: cmp eax, dword ptr [ebx + 0x38] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x38));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x30)) = edx; /* 0x1703CACB: mov dword ptr [ebp - 0x30], edx */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1703C810; /* 0x1703CACE: jb 0x1703c810 */
L_1703CAD4:
    eax = MEM32(ebp + 0x10); /* 0x1703CAD4: mov eax, dword ptr [ebp + 0x10] */
L_1703CAD7:
    edx = MEM32(ebx + 0x38); /* 0x1703CAD7: mov edx, dword ptr [ebx + 0x38] */
    ecx = MEM32(ebp + (-0x4)); /* 0x1703CADA: mov ecx, dword ptr [ebp - 4] */
    MEM32(ecx) = edx; /* 0x1703CADD: mov dword ptr [ecx], edx */
    MEM32(ecx + 0x4) = eax; /* 0x1703CADF: mov dword ptr [ecx + 4], eax */
    ecx = ebp + (-0x18); /* 0x1703CAE2: lea ecx, [ebp - 0x18] */
    PUSH32(esp, ecx); /* 0x1703CAE5: push ecx */
    ecx = MEM32(ebp + (-0x8)); /* 0x1703CAE6: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x1703CAE9: add ecx, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, ecx); /* 0x1703CAEB: push ecx */
    RECOMP_CALL(sub_1702BAA3); /* 0x1703CAEC: call 0x1702baa3 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1703CAF1: mov ebx, eax */
    /* test ebx, ebx */ /* 0x1703CAF3: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1703CB44; /* 0x1703CAF5: jl 0x1703cb44 */
L_1703CAF7:
    eax = MEM32(ebp + (-0x18)); /* 0x1703CAF7: mov eax, dword ptr [ebp - 0x18] */
    ecx = MEM32(eax); /* 0x1703CAFA: mov ecx, dword ptr [eax] */
    esi = MEM32(ebp + (-0x4)); /* 0x1703CAFC: mov esi, dword ptr [ebp - 4] */
    PUSH32(esp, eax); /* 0x1703CAFF: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xC)); /* 0x1703CB00: call dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x10); /* 0x1703CB03: mov ecx, dword ptr [ebp + 0x10] */
    edi = eax; /* 0x1703CB06: mov edi, eax */
    eax = ecx; /* 0x1703CB08: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1703CB0A: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1703CB0A: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1703CB0D: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x1703CB0F: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1703CB11: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x1703CB14: rep movsb byte ptr es:[edi], byte ptr [esi] */
    eax = MEM32(ebp + (-0x18)); /* 0x1703CB16: mov eax, dword ptr [ebp - 0x18] */
    ecx = MEM32(eax); /* 0x1703CB19: mov ecx, dword ptr [eax] */
    esi = MEM32(ebp + (-0x2C)); /* 0x1703CB1B: mov esi, dword ptr [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x1703CB1E: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xC)); /* 0x1703CB1F: call dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x8)); /* 0x1703CB22: mov ecx, dword ptr [ebp - 8] */
    edi = eax; /* 0x1703CB25: mov edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ebp + 0x10); /* 0x1703CB27: add edi, dword ptr [ebp + 0x10] */
    _flag_k = FK_ADD;
    eax = ecx; /* 0x1703CB2A: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1703CB2C: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1703CB2C: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1703CB2F: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x1703CB31: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1703CB33: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x1703CB36: rep movsb byte ptr es:[edi], byte ptr [esi] */
    eax = MEM32(ebp + (-0x18)); /* 0x1703CB38: mov eax, dword ptr [ebp - 0x18] */
    ecx = MEM32(ebp + 0x18); /* 0x1703CB3B: mov ecx, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x18)) = MEM32(ebp + (-0x18)) & 0; /* 0x1703CB3E: and dword ptr [ebp - 0x18], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx) = eax; /* 0x1703CB42: mov dword ptr [ecx], eax */
L_1703CB44:
    /* cmp MEM32(ebp + (-0x2C)), 0 */ /* 0x1703CB44: cmp dword ptr [ebp - 0x2c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703CB53; /* 0x1703CB48: je 0x1703cb53 */
L_1703CB4A:
    PUSH32(esp, MEM32(ebp + (-0x2C))); /* 0x1703CB4A: push dword ptr [ebp - 0x2c] */
    RECOMP_CALL(sub_1721B010); /* 0x1703CB4D: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1703CB52: pop ecx */
L_1703CB53:
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x1703CB53: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703CB8E; /* 0x1703CB57: je 0x1703cb8e */
L_1703CB59:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1703CB59: push dword ptr [ebp - 4] */
    RECOMP_CALL(sub_1721B010); /* 0x1703CB5C: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1703CB61: pop ecx */
L_1703CB62:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1703CB62: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0xC)), esi */ /* 0x1703CB64: cmp dword ptr [ebp - 0xc], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703CB72; /* 0x1703CB67: je 0x1703cb72 */
L_1703CB69:
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x1703CB69: push dword ptr [ebp - 0xc] */
    RECOMP_CALL(sub_1721B010); /* 0x1703CB6C: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1703CB71: pop ecx */
L_1703CB72:
    /* cmp MEM32(ebp + (-0x10)), esi */ /* 0x1703CB72: cmp dword ptr [ebp - 0x10], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703CB80; /* 0x1703CB75: je 0x1703cb80 */
L_1703CB77:
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x1703CB77: push dword ptr [ebp - 0x10] */
    RECOMP_CALL(sub_1721B010); /* 0x1703CB7A: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1703CB7F: pop ecx */
L_1703CB80:
    /* cmp MEM32(ebp + (-0x14)), esi */ /* 0x1703CB80: cmp dword ptr [ebp - 0x14], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703CB8E; /* 0x1703CB83: je 0x1703cb8e */
L_1703CB85:
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x1703CB85: push dword ptr [ebp - 0x14] */
    RECOMP_CALL(sub_1721B010); /* 0x1703CB88: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1703CB8D: pop ecx */
L_1703CB8E:
    eax = MEM32(ebp + (-0x18)); /* 0x1703CB8E: mov eax, dword ptr [ebp - 0x18] */
    /* test eax, eax */ /* 0x1703CB91: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1703CB93: pop esi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703CB9C; /* 0x1703CB94: je 0x1703cb9c */
L_1703CB96:
    ecx = MEM32(eax); /* 0x1703CB96: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1703CB98: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1703CB99: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
L_1703CB9C:
    edi = POP32_VAL(esp); /* 0x1703CB9C: pop edi */
    eax = ebx; /* 0x1703CB9D: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x1703CB9F: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1703CBA0: leave  */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x1703CBA1: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_1703CBA9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1703CBA9u);

L_1703CBA9:
    edi = edi; /* 0x1703CBA9: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1703CBAB: push ebp */
    ebp = esp; /* 0x1703CBAC: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1703CBAE: push ebx */
    PUSH32(esp, esi); /* 0x1703CBAF: push esi */
    PUSH32(esp, edi); /* 0x1703CBB0: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1703CBB1: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1703CBB3: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x24), esi */ /* 0x1703CBB5: cmp dword ptr [ebp + 0x24], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x24)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = 0x8876086Cu; /* 0x1703CBB8: mov ecx, 0x8876086c */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1703CBC1; /* 0x1703CBBD: jne 0x1703cbc1 */
L_1703CBBF:
    edi = ecx; /* 0x1703CBBF: mov edi, ecx */
L_1703CBC1:
    /* cmp MEM32(ebp + 0x20), esi */ /* 0x1703CBC1: cmp dword ptr [ebp + 0x20], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x20)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1703CBCD; /* 0x1703CBC4: jne 0x1703cbcd */
L_1703CBC6:
    /* cmp MEM32(ebp + 0x1C), esi */ /* 0x1703CBC6: cmp dword ptr [ebp + 0x1c], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1703CBCD; /* 0x1703CBC9: jbe 0x1703cbcd */
L_1703CBCB:
    edi = ecx; /* 0x1703CBCB: mov edi, ecx */
L_1703CBCD:
    /* cmp MEM32(ebp + 0x18), esi */ /* 0x1703CBCD: cmp dword ptr [ebp + 0x18], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1703CBD4; /* 0x1703CBD0: jne 0x1703cbd4 */
L_1703CBD2:
    edi = ecx; /* 0x1703CBD2: mov edi, ecx */
L_1703CBD4:
    ebx = MEM32(ebp + 0x14); /* 0x1703CBD4: mov ebx, dword ptr [ebp + 0x14] */
    /* cmp ebx, esi */ /* 0x1703CBD7: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703CBE7; /* 0x1703CBD9: je 0x1703cbe7 */
L_1703CBDB:
    /* cmp ebx, 1 */ /* 0x1703CBDB: cmp ebx, 1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703CBE7; /* 0x1703CBDE: je 0x1703cbe7 */
L_1703CBE0:
    /* cmp ebx, 2 */ /* 0x1703CBE0: cmp ebx, 2 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703CBE7; /* 0x1703CBE3: je 0x1703cbe7 */
L_1703CBE5:
    edi = ecx; /* 0x1703CBE5: mov edi, ecx */
L_1703CBE7:
    fp_push(*(double*)ADDR(0x17001DA8)); /* 0x1703CBE7: fld qword ptr [0x17001da8] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ebp + 0xC)); /* 0x1703CBED: fcomp qword ptr [ebp + 0xc] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1703CBF0: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1703CBF2: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1703CBF9; /* 0x1703CBF5: jne 0x1703cbf9 */
L_1703CBF7:
    edi = ecx; /* 0x1703CBF7: mov edi, ecx */
L_1703CBF9:
    /* cmp edi, esi */ /* 0x1703CBF9: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1703CC50; /* 0x1703CBFB: jl 0x1703cc50 */
L_1703CBFD:
    PUSH32(esp, 0x60u); /* 0x1703CBFD: push 0x60 */
    RECOMP_CALL(sub_1721B01C); /* 0x1703CBFF: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* cmp eax, esi */ /* 0x1703CC04: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x1703CC06: pop ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703CC12; /* 0x1703CC07: je 0x1703cc12 */
L_1703CC09:
    ecx = eax; /* 0x1703CC09: mov ecx, eax */
    RECOMP_CALL(sub_1703C4D7); /* 0x1703CC0B: call 0x1703c4d7 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1703CC10: mov esi, eax */
L_1703CC12:
    /* test esi, esi */ /* 0x1703CC12: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1703CC1D; /* 0x1703CC14: jne 0x1703cc1d */
L_1703CC16:
    edi = 0x8007000Eu; /* 0x1703CC16: mov edi, 0x8007000e */
    goto L_1703CC50; /* 0x1703CC1B: jmp 0x1703cc50 */
L_1703CC1D:
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x1703CC1D: push dword ptr [ebp + 0x20] */
    fp_push(*(double*)ADDR(ebp + 0xC)); /* 0x1703CC20: fld qword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1703CC23: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, ecx); /* 0x1703CC26: push ecx */
    PUSH32(esp, ecx); /* 0x1703CC27: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x1703CC28: fstp qword ptr [esp] */
    PUSH32(esp, ebx); /* 0x1703CC2B: push ebx */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1703CC2C: push dword ptr [ebp + 0x18] */
    ecx = esi; /* 0x1703CC2F: mov ecx, esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1703CC31: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1703B3B9); /* 0x1703CC34: call 0x1703b3b9 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1703CC39: mov edi, eax */
    /* test edi, edi */ /* 0x1703CC3B: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1703CC46; /* 0x1703CC3D: jl 0x1703cc46 */
L_1703CC3F:
    eax = MEM32(ebp + 0x24); /* 0x1703CC3F: mov eax, dword ptr [ebp + 0x24] */
    MEM32(eax) = esi; /* 0x1703CC42: mov dword ptr [eax], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1703CC44: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1703CC46:
    /* test esi, esi */ /* 0x1703CC46: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703CC50; /* 0x1703CC48: je 0x1703cc50 */
L_1703CC4A:
    eax = MEM32(esi); /* 0x1703CC4A: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x1703CC4C: push esi */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1703CC4D: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_1703CC50:
    eax = edi; /* 0x1703CC50: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1703CC52: pop edi */
    esi = POP32_VAL(esp); /* 0x1703CC53: pop esi */
    ebx = POP32_VAL(esp); /* 0x1703CC54: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1703CC55: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x1703CC56: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_1703CC5E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1703CC5Eu);

L_1703CC5E:
    edi = edi; /* 0x1703CC5E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1703CC60: push ebp */
    ebp = esp; /* 0x1703CC61: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1703CC63: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1703CC64: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x1703CC67: mov esi, ecx */
    RECOMP_CALL(sub_170B7D48); /* 0x1703CC69: call 0x170b7d48 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x1703CC6E: mov eax, dword ptr [esi] */
    goto L_1703CD3E; /* 0x1703CC70: jmp 0x1703cd3e */
L_1703CC75:
    SET_LO8(edx, MEM8(eax + 0x7)); /* 0x1703CC75: mov dl, byte ptr [eax + 7] */
    /* test LO8(edx), LO8(edx) */ /* 0x1703CC78: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703CC8D; /* 0x1703CC7A: je 0x1703cc8d */
L_1703CC7C:
    SET_LO8(ecx, MEM8(eax + 0x6)); /* 0x1703CC7C: mov cl, byte ptr [eax + 6] */
    /* cmp LO8(ecx), 5 */ /* 0x1703CC7F: cmp cl, 5 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703CC8D; /* 0x1703CC82: je 0x1703cc8d */
L_1703CC84:
    /* cmp LO8(ecx), 0xAu */ /* 0x1703CC84: cmp cl, 0xa */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0xAu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1703CD3B; /* 0x1703CC87: jne 0x1703cd3b */
L_1703CC8D:
    ecx = (uint32_t)MEM8(eax + 0x6); /* 0x1703CC8D: movzx ecx, byte ptr [eax + 6] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 0; /* 0x1703CC91: sub ecx, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1703CD2F; /* 0x1703CC94: je 0x1703cd2f */
L_1703CC9A:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1703CC9A: dec ecx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1703CD21; /* 0x1703CC9B: je 0x1703cd21 */
L_1703CCA1:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1703CCA1: dec ecx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1703CD0C; /* 0x1703CCA2: je 0x1703cd0c */
L_1703CCA4:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1703CCA4: dec ecx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1703CCFE; /* 0x1703CCA5: je 0x1703ccfe */
L_1703CCA7:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1703CCA7: dec ecx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1703CCA8: dec ecx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1703CCE7; /* 0x1703CCA9: je 0x1703cce7 */
L_1703CCAB:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 5; /* 0x1703CCAB: sub ecx, 5 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1703CD3B; /* 0x1703CCAE: jne 0x1703cd3b */
L_1703CCB4:
    /* test LO8(edx), LO8(edx) */ /* 0x1703CCB4: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1703CCCD; /* 0x1703CCB6: jne 0x1703cccd */
L_1703CCB8:
    SET_LO8(ecx, MEM8(eax + 0x4)); /* 0x1703CCB8: mov cl, byte ptr [eax + 4] */
    /* cmp LO8(ecx), 3 */ /* 0x1703CCBB: cmp cl, 3 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703CCC5; /* 0x1703CCBE: je 0x1703ccc5 */
L_1703CCC0:
    /* cmp LO8(ecx), 4 */ /* 0x1703CCC0: cmp cl, 4 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1703CD3B; /* 0x1703CCC3: jne 0x1703cd3b */
L_1703CCC5:
    MEM32(esi + 0x98) = eax; /* 0x1703CCC5: mov dword ptr [esi + 0x98], eax */
    goto L_1703CD3B; /* 0x1703CCCB: jmp 0x1703cd3b */
L_1703CCCD:
    /* cmp LO8(edx), 1 */ /* 0x1703CCCD: cmp dl, 1 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1703CD3B; /* 0x1703CCD0: jne 0x1703cd3b */
L_1703CCD2:
    SET_LO8(ecx, MEM8(eax + 0x4)); /* 0x1703CCD2: mov cl, byte ptr [eax + 4] */
    /* cmp LO8(ecx), 3 */ /* 0x1703CCD5: cmp cl, 3 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703CCDF; /* 0x1703CCD8: je 0x1703ccdf */
L_1703CCDA:
    /* cmp LO8(ecx), 4 */ /* 0x1703CCDA: cmp cl, 4 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1703CD3B; /* 0x1703CCDD: jne 0x1703cd3b */
L_1703CCDF:
    MEM32(esi + 0x9C) = eax; /* 0x1703CCDF: mov dword ptr [esi + 0x9c], eax */
    goto L_1703CD3B; /* 0x1703CCE5: jmp 0x1703cd3b */
L_1703CCE7:
    /* cmp MEM8(eax + 0x4), 3 */ /* 0x1703CCE7: cmp byte ptr [eax + 4], 3 */
    _flag_a = (uint32_t)(MEM8(eax + 0x4)) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_A(_flag_a, _flag_b)) goto L_1703CD3B; /* 0x1703CCEB: ja 0x1703cd3b */
L_1703CCED:
    /* cmp LO8(edx), 8 */ /* 0x1703CCED: cmp dl, 8 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_AE(_flag_a, _flag_b)) goto L_1703CD3B; /* 0x1703CCF0: jae 0x1703cd3b */
L_1703CCF2:
    ecx = (uint32_t)LO8(edx); /* 0x1703CCF2: movzx ecx, dl */
    MEM32(esi + ecx * 4 + 0xA0) = eax; /* 0x1703CCF5: mov dword ptr [esi + ecx*4 + 0xa0], eax */
    goto L_1703CD3B; /* 0x1703CCFC: jmp 0x1703cd3b */
L_1703CCFE:
    /* cmp MEM8(eax + 0x4), 2 */ /* 0x1703CCFE: cmp byte ptr [eax + 4], 2 */
    _flag_a = (uint32_t)(MEM8(eax + 0x4)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1703CD3B; /* 0x1703CD02: jne 0x1703cd3b */
L_1703CD04:
    MEM32(esi + 0x94) = eax; /* 0x1703CD04: mov dword ptr [esi + 0x94], eax */
    goto L_1703CD3B; /* 0x1703CD0A: jmp 0x1703cd3b */
L_1703CD0C:
    SET_LO8(ecx, MEM8(eax + 0x4)); /* 0x1703CD0C: mov cl, byte ptr [eax + 4] */
    /* cmp LO8(ecx), 5 */ /* 0x1703CD0F: cmp cl, 5 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703CD19; /* 0x1703CD12: je 0x1703cd19 */
L_1703CD14:
    /* cmp LO8(ecx), 4 */ /* 0x1703CD14: cmp cl, 4 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1703CD3B; /* 0x1703CD17: jne 0x1703cd3b */
L_1703CD19:
    MEM32(esi + 0x90) = eax; /* 0x1703CD19: mov dword ptr [esi + 0x90], eax */
    goto L_1703CD3B; /* 0x1703CD1F: jmp 0x1703cd3b */
L_1703CD21:
    /* cmp MEM8(eax + 0x4), 3 */ /* 0x1703CD21: cmp byte ptr [eax + 4], 3 */
    _flag_a = (uint32_t)(MEM8(eax + 0x4)) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_A(_flag_a, _flag_b)) goto L_1703CD3B; /* 0x1703CD25: ja 0x1703cd3b */
L_1703CD27:
    MEM32(esi + 0x8C) = eax; /* 0x1703CD27: mov dword ptr [esi + 0x8c], eax */
    goto L_1703CD3B; /* 0x1703CD2D: jmp 0x1703cd3b */
L_1703CD2F:
    /* cmp MEM8(eax + 0x4), 2 */ /* 0x1703CD2F: cmp byte ptr [eax + 4], 2 */
    _flag_a = (uint32_t)(MEM8(eax + 0x4)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1703CD3B; /* 0x1703CD33: jne 0x1703cd3b */
L_1703CD35:
    MEM32(esi + 0x88) = eax; /* 0x1703CD35: mov dword ptr [esi + 0x88], eax */
L_1703CD3B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x1703CD3B: add eax, 8 */
    _flag_k = FK_ADD;
L_1703CD3E:
    /* cmp MEM16(eax), 0xFFu */ /* 0x1703CD3E: cmp word ptr [eax], 0xff */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(0xFFu) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1703CC75; /* 0x1703CD43: jne 0x1703cc75 */
L_1703CD49:
    PUSH32(esp, 0); /* 0x1703CD49: push 0 */
    PUSH32(esp, MEM32(esi)); /* 0x1703CD4B: push dword ptr [esi] */
    RECOMP_CALL(sub_1704E494); /* 0x1703CD4D: call 0x1704e494 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0xC0) = eax; /* 0x1703CD52: mov dword ptr [esi + 0xc0], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1703CD58: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1703CD5A: pop esi */
    ebp = POP32_VAL(esp); /* 0x1703CD5B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1703CD5C: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1703CD64(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1703CD64u);

L_1703CD64:
    edi = edi; /* 0x1703CD64: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1703CD66: push ebp */
    ebp = esp; /* 0x1703CD67: mov ebp, esp */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x1703CD69: fld dword ptr [ebp + 8] */
    _st[0] = fabs(_st[0]); /* 0x1703CD6C: fabs  */
    ebp = POP32_VAL(esp); /* 0x1703CD6E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1703CD6F: ret  */
    RECOMP_REGS_OUT();
}

void sub_1703CD75(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1703CD75u);

L_1703CD75:
    edi = edi; /* 0x1703CD75: mov edi, edi */
    PUSH32(esp, esi); /* 0x1703CD77: push esi */
    esi = ecx; /* 0x1703CD78: mov esi, ecx */
    eax = MEM32(esi); /* 0x1703CD7A: mov eax, dword ptr [esi] */
    /* test eax, eax */ /* 0x1703CD7C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703CD89; /* 0x1703CD7E: je 0x1703cd89 */
L_1703CD80:
    ecx = MEM32(eax); /* 0x1703CD80: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1703CD82: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1703CD83: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x1703CD86: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1703CD89:
    esi = MEM32(esi + 0x4); /* 0x1703CD89: mov esi, dword ptr [esi + 4] */
    /* test esi, esi */ /* 0x1703CD8C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703CD9E; /* 0x1703CD8E: je 0x1703cd9e */
L_1703CD90:
    ecx = esi; /* 0x1703CD90: mov ecx, esi */
    RECOMP_CALL(sub_1703CD75); /* 0x1703CD92: call 0x1703cd75 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1703CD97: push esi */
    RECOMP_CALL(sub_1721B010); /* 0x1703CD98: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1703CD9D: pop ecx */
L_1703CD9E:
    esi = POP32_VAL(esp); /* 0x1703CD9E: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1703CD9F: ret  */
    RECOMP_REGS_OUT();
}

void sub_1703CDA5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1703CDA5u);

L_1703CDA5:
    edi = edi; /* 0x1703CDA5: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1703CDA7: push ebp */
    ebp = esp; /* 0x1703CDA8: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1703CDAA: push esi */
    esi = ecx; /* 0x1703CDAB: mov esi, ecx */
    RECOMP_CALL(sub_1703CD75); /* 0x1703CDAD: call 0x1703cd75 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1703CDB2: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703CDBF; /* 0x1703CDB6: je 0x1703cdbf */
L_1703CDB8:
    PUSH32(esp, esi); /* 0x1703CDB8: push esi */
    RECOMP_CALL(sub_1721B010); /* 0x1703CDB9: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1703CDBE: pop ecx */
L_1703CDBF:
    eax = esi; /* 0x1703CDBF: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1703CDC1: pop esi */
    ebp = POP32_VAL(esp); /* 0x1703CDC2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1703CDC3: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1703CDCB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1703CDCBu);

L_1703CDCB:
    edi = edi; /* 0x1703CDCB: mov edi, edi */
    PUSH32(esp, esi); /* 0x1703CDCD: push esi */
    esi = ecx; /* 0x1703CDCE: mov esi, ecx */
    eax = MEM32(esi); /* 0x1703CDD0: mov eax, dword ptr [esi] */
    /* test eax, eax */ /* 0x1703CDD2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703CDE0; /* 0x1703CDD4: je 0x1703cde0 */
L_1703CDD6:
    PUSH32(esp, eax); /* 0x1703CDD6: push eax */
    RECOMP_CALL(sub_1721B010); /* 0x1703CDD7: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x1703CDDC: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1703CDDF: pop ecx */
L_1703CDE0:
    eax = MEM32(esi + 0x10); /* 0x1703CDE0: mov eax, dword ptr [esi + 0x10] */
    /* test eax, eax */ /* 0x1703CDE3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703CDF2; /* 0x1703CDE5: je 0x1703cdf2 */
L_1703CDE7:
    PUSH32(esp, eax); /* 0x1703CDE7: push eax */
    RECOMP_CALL(sub_1721B010); /* 0x1703CDE8: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x10) = MEM32(esi + 0x10) & 0; /* 0x1703CDED: and dword ptr [esi + 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1703CDF1: pop ecx */
L_1703CDF2:
    eax = MEM32(esi + 0x14); /* 0x1703CDF2: mov eax, dword ptr [esi + 0x14] */
    /* test eax, eax */ /* 0x1703CDF5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703CE04; /* 0x1703CDF7: je 0x1703ce04 */
L_1703CDF9:
    PUSH32(esp, eax); /* 0x1703CDF9: push eax */
    RECOMP_CALL(sub_1721B010); /* 0x1703CDFA: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x14) = MEM32(esi + 0x14) & 0; /* 0x1703CDFF: and dword ptr [esi + 0x14], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1703CE03: pop ecx */
L_1703CE04:
    eax = MEM32(esi + 0x18); /* 0x1703CE04: mov eax, dword ptr [esi + 0x18] */
    /* test eax, eax */ /* 0x1703CE07: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703CE16; /* 0x1703CE09: je 0x1703ce16 */
L_1703CE0B:
    PUSH32(esp, eax); /* 0x1703CE0B: push eax */
    RECOMP_CALL(sub_1721B010); /* 0x1703CE0C: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0x18)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x18) = MEM32(esi + 0x18) & 0; /* 0x1703CE11: and dword ptr [esi + 0x18], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1703CE15: pop ecx */
L_1703CE16:
    esi = MEM32(esi + 0x1C); /* 0x1703CE16: mov esi, dword ptr [esi + 0x1c] */
    /* test esi, esi */ /* 0x1703CE19: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703CE2B; /* 0x1703CE1B: je 0x1703ce2b */
L_1703CE1D:
    ecx = esi; /* 0x1703CE1D: mov ecx, esi */
    RECOMP_CALL(sub_1703CDCB); /* 0x1703CE1F: call 0x1703cdcb */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1703CE24: push esi */
    RECOMP_CALL(sub_1721B010); /* 0x1703CE25: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1703CE2A: pop ecx */
L_1703CE2B:
    esi = POP32_VAL(esp); /* 0x1703CE2B: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1703CE2C: ret  */
    RECOMP_REGS_OUT();
}

void sub_1703CE32(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1703CE32u);

L_1703CE32:
    edi = edi; /* 0x1703CE32: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1703CE34: push ebp */
    ebp = esp; /* 0x1703CE35: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1703CE37: push esi */
    esi = ecx; /* 0x1703CE38: mov esi, ecx */
    RECOMP_CALL(sub_1703CDCB); /* 0x1703CE3A: call 0x1703cdcb */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1703CE3F: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703CE4C; /* 0x1703CE43: je 0x1703ce4c */
L_1703CE45:
    PUSH32(esp, esi); /* 0x1703CE45: push esi */
    RECOMP_CALL(sub_1721B010); /* 0x1703CE46: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1703CE4B: pop ecx */
L_1703CE4C:
    eax = esi; /* 0x1703CE4C: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1703CE4E: pop esi */
    ebp = POP32_VAL(esp); /* 0x1703CE4F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1703CE50: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1703CE58(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1703CE58u);

L_1703CE58:
    edi = edi; /* 0x1703CE58: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1703CE5A: push ebp */
    ebp = esp; /* 0x1703CE5B: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x454u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x454u; /* 0x1703CE5D: sub esp, 0x454 */
    _flag_k = FK_CMP;
    eax = MEM32(0x1723C894); /* 0x1703CE63: mov eax, dword ptr [0x1723c894] */
    PUSH32(esp, ebx); /* 0x1703CE68: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x1703CE69: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1703CE6C: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1703CE6D: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1703CE6F: push edi */
    edi = MEM32(ebp + 0xC); /* 0x1703CE70: mov edi, dword ptr [ebp + 0xc] */
    ecx = ebp + (-0x424); /* 0x1703CE73: lea ecx, [ebp - 0x424] */
    MEM32(ebp + (-0x4)) = eax; /* 0x1703CE79: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x10); /* 0x1703CE7C: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, ecx); /* 0x1703CE7F: push ecx */
    PUSH32(esp, esi); /* 0x1703CE80: push esi */
    MEM32(ebp + (-0x450)) = eax; /* 0x1703CE81: mov dword ptr [ebp - 0x450], eax */
    eax = MEM32(edi); /* 0x1703CE87: mov eax, dword ptr [edi] */
    PUSH32(esp, edi); /* 0x1703CE89: push edi */
    MEM32(ebp + (-0x414)) = esi; /* 0x1703CE8A: mov dword ptr [ebp - 0x414], esi */
    MEM32(ebp + (-0x430)) = esi; /* 0x1703CE90: mov dword ptr [ebp - 0x430], esi */
    MEM32(ebp + (-0x424)) = esi; /* 0x1703CE96: mov dword ptr [ebp - 0x424], esi */
    MEM32(ebp + (-0x428)) = esi; /* 0x1703CE9C: mov dword ptr [ebp - 0x428], esi */
    MEM32(ebp + (-0x434)) = esi; /* 0x1703CEA2: mov dword ptr [ebp - 0x434], esi */
    MEM32(ebp + (-0x41C)) = esi; /* 0x1703CEA8: mov dword ptr [ebp - 0x41c], esi */
    MEM32(ebp + (-0x40C)) = esi; /* 0x1703CEAE: mov dword ptr [ebp - 0x40c], esi */
    MEM32(ebp + (-0x438)) = esi; /* 0x1703CEB4: mov dword ptr [ebp - 0x438], esi */
    MEM32(ebp + (-0x410)) = esi; /* 0x1703CEBA: mov dword ptr [ebp - 0x410], esi */
    MEM32(ebp + (-0x444)) = esi; /* 0x1703CEC0: mov dword ptr [ebp - 0x444], esi */
    MEM32(ebp + (-0x440)) = esi; /* 0x1703CEC6: mov dword ptr [ebp - 0x440], esi */
    MEM32(ebp + (-0x43C)) = esi; /* 0x1703CECC: mov dword ptr [ebp - 0x43c], esi */
    MEM32(ebp + (-0x42C)) = esi; /* 0x1703CED2: mov dword ptr [ebp - 0x42c], esi */
    MEM32(ebp + (-0x420)) = esi; /* 0x1703CED8: mov dword ptr [ebp - 0x420], esi */
    MEM32(ebp + (-0x418)) = esi; /* 0x1703CEDE: mov dword ptr [ebp - 0x418], esi */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x1703CEE4: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    /* cmp eax, esi */ /* 0x1703CEE7: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x408)) = eax; /* 0x1703CEE9: mov dword ptr [ebp - 0x408], eax */
    if (CMP_L(_flag_a, _flag_b)) goto L_1703D16B; /* 0x1703CEEF: jl 0x1703d16b */
L_1703CEF5:
    /* cmp MEM32(ebp + (-0x424)), esi */ /* 0x1703CEF5: cmp dword ptr [ebp - 0x424], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x424))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1703CF5B; /* 0x1703CEFB: jbe 0x1703cf5b */
L_1703CEFD:
    /* cmp MEM32(ebp + (-0x424)), 0x400u */ /* 0x1703CEFD: cmp dword ptr [ebp - 0x424], 0x400 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x424))); _flag_b = (uint32_t)(0x400u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = ebp + (-0x404); /* 0x1703CF07: lea eax, [ebp - 0x404] */
    MEM32(ebp + (-0x430)) = eax; /* 0x1703CF0D: mov dword ptr [ebp - 0x430], eax */
    if (CMP_BE(_flag_a, _flag_b)) goto L_1703CF3A; /* 0x1703CF13: jbe 0x1703cf3a */
L_1703CF15:
    PUSH32(esp, MEM32(ebp + (-0x424))); /* 0x1703CF15: push dword ptr [ebp - 0x424] */
    RECOMP_CALL(sub_1721B01C); /* 0x1703CF1B: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* cmp eax, esi */ /* 0x1703CF20: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x1703CF22: pop ecx */
    MEM32(ebp + (-0x430)) = eax; /* 0x1703CF23: mov dword ptr [ebp - 0x430], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1703CF3A; /* 0x1703CF29: jne 0x1703cf3a */
L_1703CF2B:
    MEM32(ebp + (-0x408)) = 0x8007000Eu; /* 0x1703CF2B: mov dword ptr [ebp - 0x408], 0x8007000e */
    goto L_1703D16B; /* 0x1703CF35: jmp 0x1703d16b */
L_1703CF3A:
    eax = MEM32(edi); /* 0x1703CF3A: mov eax, dword ptr [edi] */
    ecx = ebp + (-0x424); /* 0x1703CF3C: lea ecx, [ebp - 0x424] */
    PUSH32(esp, ecx); /* 0x1703CF42: push ecx */
    PUSH32(esp, MEM32(ebp + (-0x430))); /* 0x1703CF43: push dword ptr [ebp - 0x430] */
    PUSH32(esp, edi); /* 0x1703CF49: push edi */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x1703CF4A: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    /* cmp eax, esi */ /* 0x1703CF4D: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x408)) = eax; /* 0x1703CF4F: mov dword ptr [ebp - 0x408], eax */
    if (CMP_L(_flag_a, _flag_b)) goto L_1703D16B; /* 0x1703CF55: jl 0x1703d16b */
L_1703CF5B:
    eax = ebp + (-0x418); /* 0x1703CF5B: lea eax, [ebp - 0x418] */
    PUSH32(esp, eax); /* 0x1703CF61: push eax */
    eax = ebp + (-0x420); /* 0x1703CF62: lea eax, [ebp - 0x420] */
    PUSH32(esp, eax); /* 0x1703CF68: push eax */
    eax = ebp + (-0x43C); /* 0x1703CF69: lea eax, [ebp - 0x43c] */
    PUSH32(esp, eax); /* 0x1703CF6F: push eax */
    eax = ebp + (-0x42C); /* 0x1703CF70: lea eax, [ebp - 0x42c] */
    PUSH32(esp, eax); /* 0x1703CF76: push eax */
    eax = ebp + (-0x40C); /* 0x1703CF77: lea eax, [ebp - 0x40c] */
    PUSH32(esp, eax); /* 0x1703CF7D: push eax */
    eax = ebp + (-0x410); /* 0x1703CF7E: lea eax, [ebp - 0x410] */
    PUSH32(esp, eax); /* 0x1703CF84: push eax */
    eax = ebp + (-0x454); /* 0x1703CF85: lea eax, [ebp - 0x454] */
    PUSH32(esp, eax); /* 0x1703CF8B: push eax */
    eax = ebp + (-0x434); /* 0x1703CF8C: lea eax, [ebp - 0x434] */
    PUSH32(esp, eax); /* 0x1703CF92: push eax */
    eax = ebp + (-0x428); /* 0x1703CF93: lea eax, [ebp - 0x428] */
    PUSH32(esp, eax); /* 0x1703CF99: push eax */
    eax = ebp + (-0x41C); /* 0x1703CF9A: lea eax, [ebp - 0x41c] */
    PUSH32(esp, eax); /* 0x1703CFA0: push eax */
    PUSH32(esp, MEM32(ebx + 0x8)); /* 0x1703CFA1: push dword ptr [ebx + 8] */
    PUSH32(esp, MEM32(ebx)); /* 0x1703CFA4: push dword ptr [ebx] */
    PUSH32(esp, edi); /* 0x1703CFA6: push edi */
    RECOMP_CALL(sub_1707A3A7); /* 0x1703CFA7: call 0x1707a3a7 */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0x88760B5Au */ /* 0x1703CFAC: cmp eax, 0x88760b5a */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x88760B5Au);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x408)) = eax; /* 0x1703CFB1: mov dword ptr [ebp - 0x408], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1703CFC4; /* 0x1703CFB7: jne 0x1703cfc4 */
L_1703CFB9:
    MEM32(ebp + (-0x408)) = esi; /* 0x1703CFB9: mov dword ptr [ebp - 0x408], esi */
    goto L_1703D16B; /* 0x1703CFBF: jmp 0x1703d16b */
L_1703CFC4:
    /* cmp eax, esi */ /* 0x1703CFC4: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1703D16B; /* 0x1703CFC6: jl 0x1703d16b */
L_1703CFCC:
    eax = MEM32(ebp + (-0x410)); /* 0x1703CFCC: mov eax, dword ptr [ebp - 0x410] */
    ecx = MEM32(eax); /* 0x1703CFD2: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1703CFD4: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x24)); /* 0x1703CFD5: call dword ptr [ecx + 0x24] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1703CFD8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1703CFEE; /* 0x1703CFDA: jne 0x1703cfee */
L_1703CFDC:
    eax = MEM32(ebp + (-0x410)); /* 0x1703CFDC: mov eax, dword ptr [ebp - 0x410] */
    ecx = MEM32(eax); /* 0x1703CFE2: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1703CFE4: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1703CFE5: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x410)) = esi; /* 0x1703CFE8: mov dword ptr [ebp - 0x410], esi */
L_1703CFEE:
    /* cmp MEM32(ebp + (-0x43C)), esi */ /* 0x1703CFEE: cmp dword ptr [ebp - 0x43c], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x43C))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1703D04F; /* 0x1703CFF4: jbe 0x1703d04f */
L_1703CFF6:
    /* cmp MEM32(ebp + (-0x42C)), esi */ /* 0x1703CFF6: cmp dword ptr [ebp - 0x42c], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x42C))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703D04F; /* 0x1703CFFC: je 0x1703d04f */
L_1703CFFE:
    eax = ebp + (-0x438); /* 0x1703CFFE: lea eax, [ebp - 0x438] */
    PUSH32(esp, eax); /* 0x1703D004: push eax */
    PUSH32(esp, MEM32(ebp + (-0x43C))); /* 0x1703D005: push dword ptr [ebp - 0x43c] */
    eax = MEM32(ebp + (-0x41C)); /* 0x1703D00B: mov eax, dword ptr [ebp - 0x41c] */
    PUSH32(esp, MEM32(ebp + (-0x42C))); /* 0x1703D011: push dword ptr [ebp - 0x42c] */
    ecx = MEM32(eax); /* 0x1703D017: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1703D019: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xC)); /* 0x1703D01A: call dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1703D01D: push eax */
    PUSH32(esp, MEM32(ebx)); /* 0x1703D01E: push dword ptr [ebx] */
    PUSH32(esp, MEM32(ebp + (-0x40C))); /* 0x1703D020: push dword ptr [ebp - 0x40c] */
    RECOMP_CALL(sub_1705F134); /* 0x1703D026: call 0x1705f134 */
    RECOMP_FLAGS_IN();
    /* cmp eax, esi */ /* 0x1703D02B: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x408)) = eax; /* 0x1703D02D: mov dword ptr [ebp - 0x408], eax */
    if (CMP_L(_flag_a, _flag_b)) goto L_1703D16B; /* 0x1703D033: jl 0x1703d16b */
L_1703D039:
    eax = MEM32(ebp + (-0x40C)); /* 0x1703D039: mov eax, dword ptr [ebp - 0x40c] */
    /* cmp eax, esi */ /* 0x1703D03F: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703D04F; /* 0x1703D041: je 0x1703d04f */
L_1703D043:
    ecx = MEM32(eax); /* 0x1703D043: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1703D045: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1703D046: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x40C)) = esi; /* 0x1703D049: mov dword ptr [ebp - 0x40c], esi */
L_1703D04F:
    eax = MEM32(ebp + (-0x428)); /* 0x1703D04F: mov eax, dword ptr [ebp - 0x428] */
    /* cmp eax, esi */ /* 0x1703D055: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703D065; /* 0x1703D057: je 0x1703d065 */
L_1703D059:
    ecx = MEM32(eax); /* 0x1703D059: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1703D05B: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xC)); /* 0x1703D05C: call dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x444)) = eax; /* 0x1703D05F: mov dword ptr [ebp - 0x444], eax */
L_1703D065:
    eax = MEM32(ebp + (-0x434)); /* 0x1703D065: mov eax, dword ptr [ebp - 0x434] */
    /* cmp eax, esi */ /* 0x1703D06B: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703D07B; /* 0x1703D06D: je 0x1703d07b */
L_1703D06F:
    ecx = MEM32(eax); /* 0x1703D06F: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1703D071: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xC)); /* 0x1703D072: call dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x440)) = eax; /* 0x1703D075: mov dword ptr [ebp - 0x440], eax */
L_1703D07B:
    eax = MEM32(ebp + (-0x438)); /* 0x1703D07B: mov eax, dword ptr [ebp - 0x438] */
    /* cmp eax, esi */ /* 0x1703D081: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703D091; /* 0x1703D083: je 0x1703d091 */
L_1703D085:
    MEM32(ebp + (-0x44C)) = 2; /* 0x1703D085: mov dword ptr [ebp - 0x44c], 2 */
    goto L_1703D0A1; /* 0x1703D08F: jmp 0x1703d0a1 */
L_1703D091:
    eax = MEM32(ebp + (-0x40C)); /* 0x1703D091: mov eax, dword ptr [ebp - 0x40c] */
    MEM32(ebp + (-0x44C)) = 1; /* 0x1703D097: mov dword ptr [ebp - 0x44c], 1 */
L_1703D0A1:
    MEM32(ebp + (-0x448)) = eax; /* 0x1703D0A1: mov dword ptr [ebp - 0x448], eax */
    eax = MEM32(ebx + 0xC); /* 0x1703D0A7: mov eax, dword ptr [ebx + 0xc] */
    edi = MEM32(eax); /* 0x1703D0AA: mov edi, dword ptr [eax] */
    eax = ebp + (-0x414); /* 0x1703D0AC: lea eax, [ebp - 0x414] */
    PUSH32(esp, eax); /* 0x1703D0B2: push eax */
    PUSH32(esp, MEM32(ebp + (-0x410))); /* 0x1703D0B3: push dword ptr [ebp - 0x410] */
    eax = MEM32(ebp + (-0x41C)); /* 0x1703D0B9: mov eax, dword ptr [ebp - 0x41c] */
    ecx = MEM32(eax); /* 0x1703D0BF: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1703D0C1: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xC)); /* 0x1703D0C2: call dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1703D0C5: push eax */
    PUSH32(esp, MEM32(ebp + (-0x454))); /* 0x1703D0C6: push dword ptr [ebp - 0x454] */
    eax = ebp + (-0x44C); /* 0x1703D0CC: lea eax, [ebp - 0x44c] */
    PUSH32(esp, MEM32(ebp + (-0x440))); /* 0x1703D0D2: push dword ptr [ebp - 0x440] */
    PUSH32(esp, MEM32(ebp + (-0x444))); /* 0x1703D0D8: push dword ptr [ebp - 0x444] */
    PUSH32(esp, eax); /* 0x1703D0DE: push eax */
    PUSH32(esp, MEM32(ebp + (-0x430))); /* 0x1703D0DF: push dword ptr [ebp - 0x430] */
    PUSH32(esp, MEM32(ebx + 0xC)); /* 0x1703D0E5: push dword ptr [ebx + 0xc] */
    RECOMP_ICALL(MEM32(edi + 0x4)); /* 0x1703D0E8: call dword ptr [edi + 4] */
    RECOMP_FLAGS_IN();
    /* cmp eax, esi */ /* 0x1703D0EB: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x408)) = eax; /* 0x1703D0ED: mov dword ptr [ebp - 0x408], eax */
    if (CMP_L(_flag_a, _flag_b)) goto L_1703D16B; /* 0x1703D0F3: jl 0x1703d16b */
L_1703D0F5:
    /* cmp MEM32(ebx + 0x10), esi */ /* 0x1703D0F5: cmp dword ptr [ebx + 0x10], esi */
    _flag_a = (uint32_t)(MEM32(ebx + 0x10)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703D137; /* 0x1703D0F8: je 0x1703d137 */
L_1703D0FA:
    /* cmp MEM32(ebp + (-0x418)), esi */ /* 0x1703D0FA: cmp dword ptr [ebp - 0x418], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x418))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1703D137; /* 0x1703D100: jbe 0x1703d137 */
L_1703D102:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1703D102: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x418)), esi */ /* 0x1703D104: cmp dword ptr [ebp - 0x418], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x418))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1703D137; /* 0x1703D10A: jbe 0x1703d137 */
L_1703D10C:
    edx = MEM32(ebp + (-0x420)); /* 0x1703D10C: mov edx, dword ptr [ebp - 0x420] */
    PUSH32(esp, MEM32(edx + edi * 4)); /* 0x1703D112: push dword ptr [edx + edi*4] */
    eax = MEM32(ebx + 0x10); /* 0x1703D115: mov eax, dword ptr [ebx + 0x10] */
    PUSH32(esp, MEM32(ebp + (-0x414))); /* 0x1703D118: push dword ptr [ebp - 0x414] */
    ecx = MEM32(eax); /* 0x1703D11E: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1703D120: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1703D121: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    /* cmp eax, esi */ /* 0x1703D124: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x408)) = eax; /* 0x1703D126: mov dword ptr [ebp - 0x408], eax */
    if (CMP_L(_flag_a, _flag_b)) goto L_1703D16B; /* 0x1703D12C: jl 0x1703d16b */
L_1703D12E:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1703D12E: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(ebp + (-0x418)) */ /* 0x1703D12F: cmp edi, dword ptr [ebp - 0x418] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x418)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1703D10C; /* 0x1703D135: jb 0x1703d10c */
L_1703D137:
    edx = MEM32(ebp + (-0x450)); /* 0x1703D137: mov edx, dword ptr [ebp - 0x450] */
    eax = MEM32(edx + 0x44); /* 0x1703D13D: mov eax, dword ptr [edx + 0x44] */
    /* cmp eax, esi */ /* 0x1703D140: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703D15C; /* 0x1703D142: je 0x1703d15c */
L_1703D144:
    ecx = eax; /* 0x1703D144: mov ecx, eax */
    eax = MEM32(eax + 0x20); /* 0x1703D146: mov eax, dword ptr [eax + 0x20] */
    /* cmp eax, esi */ /* 0x1703D149: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1703D144; /* 0x1703D14B: jne 0x1703d144 */
L_1703D14D:
    /* cmp ecx, esi */ /* 0x1703D14D: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703D15C; /* 0x1703D14F: je 0x1703d15c */
L_1703D151:
    eax = MEM32(ebp + (-0x414)); /* 0x1703D151: mov eax, dword ptr [ebp - 0x414] */
    MEM32(ecx + 0x20) = eax; /* 0x1703D157: mov dword ptr [ecx + 0x20], eax */
    goto L_1703D165; /* 0x1703D15A: jmp 0x1703d165 */
L_1703D15C:
    eax = MEM32(ebp + (-0x414)); /* 0x1703D15C: mov eax, dword ptr [ebp - 0x414] */
    MEM32(edx + 0x44) = eax; /* 0x1703D162: mov dword ptr [edx + 0x44], eax */
L_1703D165:
    MEM32(ebp + (-0x414)) = esi; /* 0x1703D165: mov dword ptr [ebp - 0x414], esi */
L_1703D16B:
    /* cmp MEM32(ebp + (-0x420)), esi */ /* 0x1703D16B: cmp dword ptr [ebp - 0x420], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x420))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703D1A1; /* 0x1703D171: je 0x1703d1a1 */
L_1703D173:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1703D173: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x418)), esi */ /* 0x1703D175: cmp dword ptr [ebp - 0x418], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x418))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1703D195; /* 0x1703D17B: jbe 0x1703d195 */
L_1703D17D:
    eax = MEM32(ebp + (-0x420)); /* 0x1703D17D: mov eax, dword ptr [ebp - 0x420] */
    eax = MEM32(eax + edi * 4); /* 0x1703D183: mov eax, dword ptr [eax + edi*4] */
    ecx = MEM32(eax); /* 0x1703D186: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1703D188: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1703D189: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1703D18C: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(ebp + (-0x418)) */ /* 0x1703D18D: cmp edi, dword ptr [ebp - 0x418] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x418)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1703D17D; /* 0x1703D193: jb 0x1703d17d */
L_1703D195:
    PUSH32(esp, MEM32(ebp + (-0x420))); /* 0x1703D195: push dword ptr [ebp - 0x420] */
    RECOMP_CALL(sub_1721B010); /* 0x1703D19B: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1703D1A0: pop ecx */
L_1703D1A1:
    /* cmp MEM32(ebp + (-0x414)), esi */ /* 0x1703D1A1: cmp dword ptr [ebp - 0x414], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x414))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703D1B8; /* 0x1703D1A7: je 0x1703d1b8 */
L_1703D1A9:
    ebx = MEM32(ebx + 0xC); /* 0x1703D1A9: mov ebx, dword ptr [ebx + 0xc] */
    PUSH32(esp, MEM32(ebp + (-0x414))); /* 0x1703D1AC: push dword ptr [ebp - 0x414] */
    eax = MEM32(ebx); /* 0x1703D1B2: mov eax, dword ptr [ebx] */
    PUSH32(esp, ebx); /* 0x1703D1B4: push ebx */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x1703D1B5: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
L_1703D1B8:
    eax = MEM32(ebp + (-0x428)); /* 0x1703D1B8: mov eax, dword ptr [ebp - 0x428] */
    /* cmp eax, esi */ /* 0x1703D1BE: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703D1CE; /* 0x1703D1C0: je 0x1703d1ce */
L_1703D1C2:
    ecx = MEM32(eax); /* 0x1703D1C2: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1703D1C4: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1703D1C5: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x428)) = esi; /* 0x1703D1C8: mov dword ptr [ebp - 0x428], esi */
L_1703D1CE:
    eax = MEM32(ebp + (-0x434)); /* 0x1703D1CE: mov eax, dword ptr [ebp - 0x434] */
    /* cmp eax, esi */ /* 0x1703D1D4: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703D1E4; /* 0x1703D1D6: je 0x1703d1e4 */
L_1703D1D8:
    ecx = MEM32(eax); /* 0x1703D1D8: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1703D1DA: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1703D1DB: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x434)) = esi; /* 0x1703D1DE: mov dword ptr [ebp - 0x434], esi */
L_1703D1E4:
    eax = MEM32(ebp + (-0x41C)); /* 0x1703D1E4: mov eax, dword ptr [ebp - 0x41c] */
    /* cmp eax, esi */ /* 0x1703D1EA: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703D1FA; /* 0x1703D1EC: je 0x1703d1fa */
L_1703D1EE:
    ecx = MEM32(eax); /* 0x1703D1EE: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1703D1F0: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1703D1F1: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x41C)) = esi; /* 0x1703D1F4: mov dword ptr [ebp - 0x41c], esi */
L_1703D1FA:
    eax = MEM32(ebp + (-0x40C)); /* 0x1703D1FA: mov eax, dword ptr [ebp - 0x40c] */
    /* cmp eax, esi */ /* 0x1703D200: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703D210; /* 0x1703D202: je 0x1703d210 */
L_1703D204:
    ecx = MEM32(eax); /* 0x1703D204: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1703D206: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1703D207: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x40C)) = esi; /* 0x1703D20A: mov dword ptr [ebp - 0x40c], esi */
L_1703D210:
    eax = MEM32(ebp + (-0x438)); /* 0x1703D210: mov eax, dword ptr [ebp - 0x438] */
    /* cmp eax, esi */ /* 0x1703D216: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703D226; /* 0x1703D218: je 0x1703d226 */
L_1703D21A:
    ecx = MEM32(eax); /* 0x1703D21A: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1703D21C: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1703D21D: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x438)) = esi; /* 0x1703D220: mov dword ptr [ebp - 0x438], esi */
L_1703D226:
    eax = MEM32(ebp + (-0x410)); /* 0x1703D226: mov eax, dword ptr [ebp - 0x410] */
    /* cmp eax, esi */ /* 0x1703D22C: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703D23C; /* 0x1703D22E: je 0x1703d23c */
L_1703D230:
    ecx = MEM32(eax); /* 0x1703D230: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1703D232: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1703D233: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x410)) = esi; /* 0x1703D236: mov dword ptr [ebp - 0x410], esi */
L_1703D23C:
    PUSH32(esp, MEM32(ebp + (-0x42C))); /* 0x1703D23C: push dword ptr [ebp - 0x42c] */
    RECOMP_CALL(sub_1721B010); /* 0x1703D242: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x408)); /* 0x1703D247: mov eax, dword ptr [ebp - 0x408] */
    ecx = POP32_VAL(esp); /* 0x1703D24D: pop ecx */
    ecx = MEM32(ebp + (-0x4)); /* 0x1703D24E: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x1703D251: pop edi */
    esi = POP32_VAL(esp); /* 0x1703D252: pop esi */
    ebx = POP32_VAL(esp); /* 0x1703D253: pop ebx */
    RECOMP_CALL(sub_1721B76C); /* 0x1703D254: call 0x1721b76c */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1703D259: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1703D25A: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1703D262(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1703D262u);

L_1703D262:
    edi = edi; /* 0x1703D262: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1703D264: push ebp */
    ebp = esp; /* 0x1703D265: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1703D267: push ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1703D268: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1703D26C: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1703D26D: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1703D270: push edi */
    edi = MEM32(ebp + 0xC); /* 0x1703D271: mov edi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0);
    MEM32(edi) = MEM32(edi) & 0; /* 0x1703D274: and dword ptr [edi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(esi); /* 0x1703D277: mov eax, dword ptr [esi] */
    ecx = ebp + (-0x4); /* 0x1703D279: lea ecx, [ebp - 4] */
    PUSH32(esp, ecx); /* 0x1703D27C: push ecx */
    PUSH32(esp, 0); /* 0x1703D27D: push 0 */
    PUSH32(esp, esi); /* 0x1703D27F: push esi */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x1703D280: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1703D283: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1703D2A8; /* 0x1703D285: jl 0x1703d2a8 */
L_1703D287:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1703D287: push dword ptr [ebp - 4] */
    RECOMP_CALL(sub_1721B01C); /* 0x1703D28A: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1703D28F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1703D291: pop ecx */
    MEM32(edi) = eax; /* 0x1703D292: mov dword ptr [edi], eax */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1703D29D; /* 0x1703D294: jne 0x1703d29d */
L_1703D296:
    eax = 0x8007000Eu; /* 0x1703D296: mov eax, 0x8007000e */
    goto L_1703D2A8; /* 0x1703D29B: jmp 0x1703d2a8 */
L_1703D29D:
    ecx = MEM32(esi); /* 0x1703D29D: mov ecx, dword ptr [esi] */
    edx = ebp + (-0x4); /* 0x1703D29F: lea edx, [ebp - 4] */
    PUSH32(esp, edx); /* 0x1703D2A2: push edx */
    PUSH32(esp, eax); /* 0x1703D2A3: push eax */
    PUSH32(esp, esi); /* 0x1703D2A4: push esi */
    RECOMP_ICALL(MEM32(ecx + 0x10)); /* 0x1703D2A5: call dword ptr [ecx + 0x10] */
    RECOMP_FLAGS_IN();
L_1703D2A8:
    edi = POP32_VAL(esp); /* 0x1703D2A8: pop edi */
    esi = POP32_VAL(esp); /* 0x1703D2A9: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1703D2AA: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1703D2AB: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1703D2B3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1703D2B3u);

L_1703D2B3:
    edi = edi; /* 0x1703D2B3: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1703D2B5: push ebp */
    ebp = esp; /* 0x1703D2B6: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x1703D2B8: sub esp, 0x18 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1703D2BB: push ebx */
    PUSH32(esp, esi); /* 0x1703D2BC: push esi */
    PUSH32(esp, edi); /* 0x1703D2BD: push edi */
    edi = MEM32(ebp + 0xC); /* 0x1703D2BE: mov edi, dword ptr [ebp + 0xc] */
    eax = ebp + (-0x8); /* 0x1703D2C1: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x1703D2C4: push eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1703D2C5: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1703D2C7: push edi */
    MEM32(ebp + (-0xC)) = ebx; /* 0x1703D2C8: mov dword ptr [ebp - 0xc], ebx */
    MEM32(ebp + (-0x8)) = ebx; /* 0x1703D2CB: mov dword ptr [ebp - 8], ebx */
    RECOMP_CALL(sub_1703D262); /* 0x1703D2CE: call 0x1703d262 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1703D2D3: mov esi, eax */
    /* cmp esi, ebx */ /* 0x1703D2D5: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1703D361; /* 0x1703D2D7: jl 0x1703d361 */
L_1703D2DD:
    eax = MEM32(edi); /* 0x1703D2DD: mov eax, dword ptr [edi] */
    ecx = ebp + (-0x10); /* 0x1703D2DF: lea ecx, [ebp - 0x10] */
    PUSH32(esp, ecx); /* 0x1703D2E2: push ecx */
    ecx = ebp + (-0x18); /* 0x1703D2E3: lea ecx, [ebp - 0x18] */
    PUSH32(esp, ecx); /* 0x1703D2E6: push ecx */
    PUSH32(esp, edi); /* 0x1703D2E7: push edi */
    MEM32(ebp + (-0x4)) = ebx; /* 0x1703D2E8: mov dword ptr [ebp - 4], ebx */
    RECOMP_ICALL(MEM32(eax + 0x18)); /* 0x1703D2EB: call dword ptr [eax + 0x18] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1703D2EE: mov esi, eax */
    /* cmp esi, ebx */ /* 0x1703D2F0: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1703D361; /* 0x1703D2F2: jl 0x1703d361 */
L_1703D2F4:
    ebx = MEM32(ebp + (-0x10)); /* 0x1703D2F4: mov ebx, dword ptr [ebp - 0x10] */
    eax = ebp + (-0x4); /* 0x1703D2F7: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x1703D2FA: push eax */
    PUSH32(esp, MEM32(ebx)); /* 0x1703D2FB: push dword ptr [ebx] */
    RECOMP_CALL(sub_1702BAA3); /* 0x1703D2FD: call 0x1702baa3 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1703D302: mov esi, eax */
    /* test esi, esi */ /* 0x1703D304: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1703D361; /* 0x1703D306: jl 0x1703d361 */
L_1703D308:
    eax = MEM32(ebx); /* 0x1703D308: mov eax, dword ptr [ebx] */
    MEM32(ebp + (-0x14)) = eax; /* 0x1703D30A: mov dword ptr [ebp - 0x14], eax */
    eax = MEM32(ebp + (-0x4)); /* 0x1703D30D: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(eax); /* 0x1703D310: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1703D312: push eax */
    esi = ebx + 0x10; /* 0x1703D313: lea esi, [ebx + 0x10] */
    RECOMP_ICALL(MEM32(ecx + 0xC)); /* 0x1703D316: call dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1703D319: mov edi, eax */
    eax = MEM32(ebp + (-0x14)); /* 0x1703D31B: mov eax, dword ptr [ebp - 0x14] */
    ecx = eax; /* 0x1703D31E: mov ecx, eax */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1703D320: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1703D320: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1703D323: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x1703D325: mov ecx, eax */
    eax = MEM32(ebp + 0xC); /* 0x1703D327: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1703D32A: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x1703D32D: rep movsb byte ptr es:[edi], byte ptr [esi] */
    ecx = MEM32(eax); /* 0x1703D32F: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1703D331: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x1C)); /* 0x1703D332: call dword ptr [ecx + 0x1c] */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0xC); /* 0x1703D335: lea eax, [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ebx + 0x4)); /* 0x1703D338: fld dword ptr [ebx + 4] */
    PUSH32(esp, eax); /* 0x1703D33B: push eax */
    PUSH32(esp, 0); /* 0x1703D33C: push 0 */
    PUSH32(esp, 0); /* 0x1703D33E: push 0 */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1703D340: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebx + 0x8)); /* 0x1703D343: push dword ptr [ebx + 8] */
    PUSH32(esp, ecx); /* 0x1703D346: push ecx */
    PUSH32(esp, ecx); /* 0x1703D347: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x1703D348: fstp qword ptr [esp] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x1703D34B: push dword ptr [ebp - 8] */
    RECOMP_CALL(sub_1703A4DD); /* 0x1703D34E: call 0x1703a4dd */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1703D353: mov esi, eax */
    /* test esi, esi */ /* 0x1703D355: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1703D361; /* 0x1703D357: jl 0x1703d361 */
L_1703D359:
    eax = MEM32(ebp + 0x10); /* 0x1703D359: mov eax, dword ptr [ebp + 0x10] */
    ecx = MEM32(ebp + (-0xC)); /* 0x1703D35C: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(eax) = ecx; /* 0x1703D35F: mov dword ptr [eax], ecx */
L_1703D361:
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x1703D361: push dword ptr [ebp - 8] */
    RECOMP_CALL(sub_1721B010); /* 0x1703D364: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x1703D369: mov eax, dword ptr [ebp - 4] */
    /* test eax, eax */ /* 0x1703D36C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1703D36E: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703D377; /* 0x1703D36F: je 0x1703d377 */
L_1703D371:
    ecx = MEM32(eax); /* 0x1703D371: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1703D373: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1703D374: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
L_1703D377:
    edi = POP32_VAL(esp); /* 0x1703D377: pop edi */
    eax = esi; /* 0x1703D378: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1703D37A: pop esi */
    ebx = POP32_VAL(esp); /* 0x1703D37B: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1703D37C: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1703D37D: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1703D385(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1703D385u);

L_1703D385:
    edi = edi; /* 0x1703D385: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1703D387: push ebp */
    ebp = esp; /* 0x1703D388: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x6Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x6Cu; /* 0x1703D38A: sub esp, 0x6c */
    _flag_k = FK_CMP;
    eax = MEM32(0x1723C894); /* 0x1703D38D: mov eax, dword ptr [0x1723c894] */
    PUSH32(esp, ebx); /* 0x1703D392: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x1703D393: mov ebx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x1703D396: push esi */
    MEM32(ebp + (-0x4)) = eax; /* 0x1703D397: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x1703D39A: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1703D39D: push edi */
    MEM32(ebp + (-0x20)) = eax; /* 0x1703D39E: mov dword ptr [ebp - 0x20], eax */
    eax = MEM32(ebp + 0x10); /* 0x1703D3A1: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, 6); /* 0x1703D3A4: push 6 */
    ecx = POP32_VAL(esp); /* 0x1703D3A6: pop ecx */
    MEM32(ebp + (-0x4C)) = eax; /* 0x1703D3A7: mov dword ptr [ebp - 0x4c], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1703D3AA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1703D3AC: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = ebp + (-0x6C); /* 0x1703D3AE: lea edi, [ebp - 0x6c] */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x1703D3B1: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    eax = MEM32(ebx); /* 0x1703D3B3: mov eax, dword ptr [ebx] */
    ecx = ebp + (-0x3C); /* 0x1703D3B5: lea ecx, [ebp - 0x3c] */
    PUSH32(esp, ecx); /* 0x1703D3B8: push ecx */
    PUSH32(esp, esi); /* 0x1703D3B9: push esi */
    PUSH32(esp, ebx); /* 0x1703D3BA: push ebx */
    MEM32(ebp + (-0x28)) = esi; /* 0x1703D3BB: mov dword ptr [ebp - 0x28], esi */
    MEM32(ebp + (-0x2C)) = esi; /* 0x1703D3BE: mov dword ptr [ebp - 0x2c], esi */
    MEM32(ebp + (-0x38)) = esi; /* 0x1703D3C1: mov dword ptr [ebp - 0x38], esi */
    MEM32(ebp + (-0x1C)) = esi; /* 0x1703D3C4: mov dword ptr [ebp - 0x1c], esi */
    MEM32(ebp + (-0x34)) = esi; /* 0x1703D3C7: mov dword ptr [ebp - 0x34], esi */
    MEM32(ebp + (-0x24)) = esi; /* 0x1703D3CA: mov dword ptr [ebp - 0x24], esi */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x1703D3CD: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    /* cmp eax, esi */ /* 0x1703D3D0: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x18)) = eax; /* 0x1703D3D2: mov dword ptr [ebp - 0x18], eax */
    if (CMP_L(_flag_a, _flag_b)) goto L_1703D56E; /* 0x1703D3D5: jl 0x1703d56e */
L_1703D3DB:
    /* cmp MEM32(ebp + (-0x3C)), esi */ /* 0x1703D3DB: cmp dword ptr [ebp - 0x3c], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x3C))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1703D412; /* 0x1703D3DE: jbe 0x1703d412 */
L_1703D3E0:
    PUSH32(esp, MEM32(ebp + (-0x3C))); /* 0x1703D3E0: push dword ptr [ebp - 0x3c] */
    RECOMP_CALL(sub_1721B01C); /* 0x1703D3E3: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* cmp eax, esi */ /* 0x1703D3E8: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x1703D3EA: pop ecx */
    MEM32(ebp + (-0x38)) = eax; /* 0x1703D3EB: mov dword ptr [ebp - 0x38], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1703D3FC; /* 0x1703D3EE: jne 0x1703d3fc */
L_1703D3F0:
    MEM32(ebp + (-0x18)) = 0x8007000Eu; /* 0x1703D3F0: mov dword ptr [ebp - 0x18], 0x8007000e */
    goto L_1703D56E; /* 0x1703D3F7: jmp 0x1703d56e */
L_1703D3FC:
    ecx = MEM32(ebx); /* 0x1703D3FC: mov ecx, dword ptr [ebx] */
    edx = ebp + (-0x3C); /* 0x1703D3FE: lea edx, [ebp - 0x3c] */
    PUSH32(esp, edx); /* 0x1703D401: push edx */
    PUSH32(esp, eax); /* 0x1703D402: push eax */
    PUSH32(esp, ebx); /* 0x1703D403: push ebx */
    RECOMP_ICALL(MEM32(ecx + 0x10)); /* 0x1703D404: call dword ptr [ecx + 0x10] */
    RECOMP_FLAGS_IN();
    /* cmp eax, esi */ /* 0x1703D407: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x18)) = eax; /* 0x1703D409: mov dword ptr [ebp - 0x18], eax */
    if (CMP_L(_flag_a, _flag_b)) goto L_1703D56E; /* 0x1703D40C: jl 0x1703d56e */
L_1703D412:
    eax = MEM32(ebx); /* 0x1703D412: mov eax, dword ptr [ebx] */
    ecx = ebp + (-0x14); /* 0x1703D414: lea ecx, [ebp - 0x14] */
    PUSH32(esp, ecx); /* 0x1703D417: push ecx */
    PUSH32(esp, ebx); /* 0x1703D418: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x20)); /* 0x1703D419: call dword ptr [eax + 0x20] */
    RECOMP_FLAGS_IN();
    /* cmp eax, esi */ /* 0x1703D41C: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x18)) = eax; /* 0x1703D41E: mov dword ptr [ebp - 0x18], eax */
    if (CMP_L(_flag_a, _flag_b)) goto L_1703D56E; /* 0x1703D421: jl 0x1703d56e */
L_1703D427:
    PUSH32(esp, 4); /* 0x1703D427: push 4 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1703D429: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1703D42B: pop ecx */
    eax = ebp + (-0x24); /* 0x1703D42C: lea eax, [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x1703D42F: push eax */
    eax = ebp + (-0x34); /* 0x1703D430: lea eax, [ebp - 0x34] */
    edi = 0x17001AF0u; /* 0x1703D433: mov edi, 0x17001af0 */
    esi = ebp + (-0x14); /* 0x1703D438: lea esi, [ebp - 0x14] */
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x1703D43B: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    PUSH32(esp, eax); /* 0x1703D43D: push eax */
    eax = ebp + (-0x30); /* 0x1703D43E: lea eax, [ebp - 0x30] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_1703D471; /* 0x1703D441: jne 0x1703d471 */
L_1703D443:
    PUSH32(esp, 1); /* 0x1703D443: push 1 */
    PUSH32(esp, eax); /* 0x1703D445: push eax */
    eax = ebp + (-0x6C); /* 0x1703D446: lea eax, [ebp - 0x6c] */
    PUSH32(esp, eax); /* 0x1703D449: push eax */
    eax = ebp + (-0x40); /* 0x1703D44A: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x1703D44D: push eax */
    eax = ebp + (-0x2C); /* 0x1703D44E: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x1703D451: push eax */
    eax = ebp + (-0x28); /* 0x1703D452: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x1703D455: push eax */
    eax = MEM32(ebp + (-0x20)); /* 0x1703D456: mov eax, dword ptr [ebp - 0x20] */
    PUSH32(esp, MEM32(eax + 0x8)); /* 0x1703D459: push dword ptr [eax + 8] */
    PUSH32(esp, 0); /* 0x1703D45C: push 0 */
    PUSH32(esp, ebx); /* 0x1703D45E: push ebx */
    RECOMP_CALL(sub_1707409B); /* 0x1703D45F: call 0x1707409b */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1703D464: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x18)) = eax; /* 0x1703D466: mov dword ptr [ebp - 0x18], eax */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1703D56C; /* 0x1703D469: jl 0x1703d56c */
L_1703D46F:
    goto L_1703D4A4; /* 0x1703D46F: jmp 0x1703d4a4 */
L_1703D471:
    PUSH32(esp, 0); /* 0x1703D471: push 0 */
    PUSH32(esp, eax); /* 0x1703D473: push eax */
    eax = ebp + (-0x6C); /* 0x1703D474: lea eax, [ebp - 0x6c] */
    PUSH32(esp, eax); /* 0x1703D477: push eax */
    eax = ebp + (-0x40); /* 0x1703D478: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x1703D47B: push eax */
    eax = ebp + (-0x2C); /* 0x1703D47C: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x1703D47F: push eax */
    eax = ebp + (-0x28); /* 0x1703D480: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x1703D483: push eax */
    eax = MEM32(ebp + (-0x20)); /* 0x1703D484: mov eax, dword ptr [ebp - 0x20] */
    PUSH32(esp, MEM32(eax + 0x8)); /* 0x1703D487: push dword ptr [eax + 8] */
    PUSH32(esp, 0); /* 0x1703D48A: push 0 */
    PUSH32(esp, ebx); /* 0x1703D48C: push ebx */
    RECOMP_CALL(sub_1707409B); /* 0x1703D48D: call 0x1707409b */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1703D492: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x18)) = eax; /* 0x1703D494: mov dword ptr [ebp - 0x18], eax */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1703D56C; /* 0x1703D497: jl 0x1703d56c */
L_1703D49D:
    MEM32(ebp + (-0x30)) = 1; /* 0x1703D49D: mov dword ptr [ebp - 0x30], 1 */
L_1703D4A4:
    eax = MEM32(ebp + (-0x28)); /* 0x1703D4A4: mov eax, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1703D4A7: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, edi */ /* 0x1703D4A9: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703D4B6; /* 0x1703D4AB: je 0x1703d4b6 */
L_1703D4AD:
    ecx = MEM32(eax); /* 0x1703D4AD: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1703D4AF: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xC)); /* 0x1703D4B0: call dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x44)) = eax; /* 0x1703D4B3: mov dword ptr [ebp - 0x44], eax */
L_1703D4B6:
    eax = MEM32(ebp + (-0x2C)); /* 0x1703D4B6: mov eax, dword ptr [ebp - 0x2c] */
    /* cmp eax, edi */ /* 0x1703D4B9: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703D4C6; /* 0x1703D4BB: je 0x1703d4c6 */
L_1703D4BD:
    ecx = MEM32(eax); /* 0x1703D4BD: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1703D4BF: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xC)); /* 0x1703D4C0: call dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x48)) = eax; /* 0x1703D4C3: mov dword ptr [ebp - 0x48], eax */
L_1703D4C6:
    /* cmp MEM32(ebp + (-0x30)), edi */ /* 0x1703D4C6: cmp dword ptr [ebp - 0x30], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x30))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x54)) = 3; /* 0x1703D4C9: mov dword ptr [ebp - 0x54], 3 */
    if (CMP_BE(_flag_a, _flag_b)) goto L_1703D56C; /* 0x1703D4D0: jbe 0x1703d56c */
L_1703D4D6:
    eax = MEM32(ebp + edi * 4 + (-0x6C)); /* 0x1703D4D6: mov eax, dword ptr [ebp + edi*4 - 0x6c] */
    edx = ebp + (-0x1C); /* 0x1703D4DA: lea edx, [ebp - 0x1c] */
    PUSH32(esp, edx); /* 0x1703D4DD: push edx */
    PUSH32(esp, 0); /* 0x1703D4DE: push 0 */
    PUSH32(esp, 0); /* 0x1703D4E0: push 0 */
    PUSH32(esp, MEM32(ebp + (-0x40))); /* 0x1703D4E2: push dword ptr [ebp - 0x40] */
    MEM32(ebp + (-0x50)) = eax; /* 0x1703D4E5: mov dword ptr [ebp - 0x50], eax */
    PUSH32(esp, MEM32(ebp + (-0x48))); /* 0x1703D4E8: push dword ptr [ebp - 0x48] */
    eax = MEM32(ebp + (-0x20)); /* 0x1703D4EB: mov eax, dword ptr [ebp - 0x20] */
    PUSH32(esp, MEM32(ebp + (-0x44))); /* 0x1703D4EE: push dword ptr [ebp - 0x44] */
    eax = MEM32(eax + 0xC); /* 0x1703D4F1: mov eax, dword ptr [eax + 0xc] */
    ecx = MEM32(eax); /* 0x1703D4F4: mov ecx, dword ptr [eax] */
    edx = ebp + (-0x54); /* 0x1703D4F6: lea edx, [ebp - 0x54] */
    PUSH32(esp, edx); /* 0x1703D4F9: push edx */
    PUSH32(esp, MEM32(ebp + (-0x38))); /* 0x1703D4FA: push dword ptr [ebp - 0x38] */
    PUSH32(esp, eax); /* 0x1703D4FD: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x4)); /* 0x1703D4FE: call dword ptr [ecx + 4] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1703D501: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x18)) = eax; /* 0x1703D503: mov dword ptr [ebp - 0x18], eax */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1703D56C; /* 0x1703D506: jl 0x1703d56c */
L_1703D508:
    edx = MEM32(ebp + (-0x4C)); /* 0x1703D508: mov edx, dword ptr [ebp - 0x4c] */
    eax = MEM32(edx + 0x44); /* 0x1703D50B: mov eax, dword ptr [edx + 0x44] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1703D50E: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, esi */ /* 0x1703D510: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703D529; /* 0x1703D512: je 0x1703d529 */
L_1703D514:
    ecx = eax; /* 0x1703D514: mov ecx, eax */
    eax = MEM32(eax + 0x20); /* 0x1703D516: mov eax, dword ptr [eax + 0x20] */
    /* cmp eax, esi */ /* 0x1703D519: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1703D514; /* 0x1703D51B: jne 0x1703d514 */
L_1703D51D:
    /* cmp ecx, esi */ /* 0x1703D51D: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703D529; /* 0x1703D51F: je 0x1703d529 */
L_1703D521:
    eax = MEM32(ebp + (-0x1C)); /* 0x1703D521: mov eax, dword ptr [ebp - 0x1c] */
    MEM32(ecx + 0x20) = eax; /* 0x1703D524: mov dword ptr [ecx + 0x20], eax */
    goto L_1703D52F; /* 0x1703D527: jmp 0x1703d52f */
L_1703D529:
    eax = MEM32(ebp + (-0x1C)); /* 0x1703D529: mov eax, dword ptr [ebp - 0x1c] */
    MEM32(edx + 0x44) = eax; /* 0x1703D52C: mov dword ptr [edx + 0x44], eax */
L_1703D52F:
    eax = MEM32(ebp + (-0x20)); /* 0x1703D52F: mov eax, dword ptr [ebp - 0x20] */
    /* cmp MEM32(eax + 0x10), esi */ /* 0x1703D532: cmp dword ptr [eax + 0x10], esi */
    _flag_a = (uint32_t)(MEM32(eax + 0x10)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703D55E; /* 0x1703D535: je 0x1703d55e */
L_1703D537:
    /* cmp MEM32(ebp + (-0x24)), esi */ /* 0x1703D537: cmp dword ptr [ebp - 0x24], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1703D55E; /* 0x1703D53A: jbe 0x1703d55e */
L_1703D53C:
    edx = MEM32(ebp + (-0x34)); /* 0x1703D53C: mov edx, dword ptr [ebp - 0x34] */
    PUSH32(esp, MEM32(edx + esi * 4)); /* 0x1703D53F: push dword ptr [edx + esi*4] */
    eax = MEM32(ebp + (-0x20)); /* 0x1703D542: mov eax, dword ptr [ebp - 0x20] */
    eax = MEM32(eax + 0x10); /* 0x1703D545: mov eax, dword ptr [eax + 0x10] */
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x1703D548: push dword ptr [ebp - 0x1c] */
    ecx = MEM32(eax); /* 0x1703D54B: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1703D54D: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1703D54E: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1703D551: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x18)) = eax; /* 0x1703D553: mov dword ptr [ebp - 0x18], eax */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1703D56C; /* 0x1703D556: jl 0x1703d56c */
L_1703D558:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1703D558: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(ebp + (-0x24)) */ /* 0x1703D559: cmp esi, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x24)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1703D53C; /* 0x1703D55C: jb 0x1703d53c */
L_1703D55E:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) & 0; /* 0x1703D55E: and dword ptr [ebp - 0x1c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1703D562: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(ebp + (-0x30)) */ /* 0x1703D563: cmp edi, dword ptr [ebp - 0x30] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x30)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1703D4D6; /* 0x1703D566: jb 0x1703d4d6 */
L_1703D56C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1703D56C: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1703D56E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1703D56E: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1703D570:
    edi = ebp + ebx * 4 + (-0x6C); /* 0x1703D570: lea edi, [ebp + ebx*4 - 0x6c] */
    eax = MEM32(edi); /* 0x1703D574: mov eax, dword ptr [edi] */
    /* cmp eax, esi */ /* 0x1703D576: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703D582; /* 0x1703D578: je 0x1703d582 */
L_1703D57A:
    ecx = MEM32(eax); /* 0x1703D57A: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1703D57C: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1703D57D: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    MEM32(edi) = esi; /* 0x1703D580: mov dword ptr [edi], esi */
L_1703D582:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1703D582: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, 6 */ /* 0x1703D583: cmp ebx, 6 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1703D570; /* 0x1703D586: jb 0x1703d570 */
L_1703D588:
    /* cmp MEM32(ebp + (-0x1C)), esi */ /* 0x1703D588: cmp dword ptr [ebp - 0x1c], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703D59C; /* 0x1703D58B: je 0x1703d59c */
L_1703D58D:
    eax = MEM32(ebp + (-0x20)); /* 0x1703D58D: mov eax, dword ptr [ebp - 0x20] */
    eax = MEM32(eax + 0xC); /* 0x1703D590: mov eax, dword ptr [eax + 0xc] */
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x1703D593: push dword ptr [ebp - 0x1c] */
    ecx = MEM32(eax); /* 0x1703D596: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1703D598: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xC)); /* 0x1703D599: call dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_IN();
L_1703D59C:
    PUSH32(esp, MEM32(ebp + (-0x38))); /* 0x1703D59C: push dword ptr [ebp - 0x38] */
    RECOMP_CALL(sub_1721B010); /* 0x1703D59F: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1703D5A4: push esi */
    RECOMP_CALL(sub_1721B010); /* 0x1703D5A5: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x28)); /* 0x1703D5AA: mov eax, dword ptr [ebp - 0x28] */
    /* cmp eax, esi */ /* 0x1703D5AD: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x1703D5AF: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1703D5B0: pop ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703D5BC; /* 0x1703D5B1: je 0x1703d5bc */
L_1703D5B3:
    ecx = MEM32(eax); /* 0x1703D5B3: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1703D5B5: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1703D5B6: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x28)) = esi; /* 0x1703D5B9: mov dword ptr [ebp - 0x28], esi */
L_1703D5BC:
    eax = MEM32(ebp + (-0x2C)); /* 0x1703D5BC: mov eax, dword ptr [ebp - 0x2c] */
    edi = POP32_VAL(esp); /* 0x1703D5BF: pop edi */
    /* cmp eax, esi */ /* 0x1703D5C0: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = POP32_VAL(esp); /* 0x1703D5C2: pop esi */
    ebx = POP32_VAL(esp); /* 0x1703D5C3: pop ebx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703D5CC; /* 0x1703D5C4: je 0x1703d5cc */
L_1703D5C6:
    ecx = MEM32(eax); /* 0x1703D5C6: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1703D5C8: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1703D5C9: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
L_1703D5CC:
    ecx = MEM32(ebp + (-0x4)); /* 0x1703D5CC: mov ecx, dword ptr [ebp - 4] */
    eax = MEM32(ebp + (-0x18)); /* 0x1703D5CF: mov eax, dword ptr [ebp - 0x18] */
    RECOMP_CALL(sub_1721B76C); /* 0x1703D5D2: call 0x1721b76c */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1703D5D7: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1703D5D8: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1703D5E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1703D5E0u);

L_1703D5E0:
    edi = edi; /* 0x1703D5E0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1703D5E2: push ebp */
    ebp = esp; /* 0x1703D5E3: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1703D5E5: push ebx */
    PUSH32(esp, esi); /* 0x1703D5E6: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1703D5E7: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1703D5EA: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp esi, ebx */ /* 0x1703D5EC: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1703D5F7; /* 0x1703D5EE: jne 0x1703d5f7 */
L_1703D5F0:
    eax = 0x8876086Cu; /* 0x1703D5F0: mov eax, 0x8876086c */
    goto L_1703D668; /* 0x1703D5F5: jmp 0x1703d668 */
L_1703D5F7:
    PUSH32(esp, edi); /* 0x1703D5F7: push edi */
    edi = MEM32(ebp + 0xC); /* 0x1703D5F8: mov edi, dword ptr [ebp + 0xc] */
    goto L_1703D614; /* 0x1703D5FB: jmp 0x1703d614 */
L_1703D5FD:
    eax = MEM32(esi + 0x48); /* 0x1703D5FD: mov eax, dword ptr [esi + 0x48] */
    ecx = MEM32(eax + 0x48); /* 0x1703D600: mov ecx, dword ptr [eax + 0x48] */
    PUSH32(esp, edi); /* 0x1703D603: push edi */
    MEM32(esi + 0x48) = ecx; /* 0x1703D604: mov dword ptr [esi + 0x48], ecx */
    PUSH32(esp, eax); /* 0x1703D607: push eax */
    MEM32(eax + 0x48) = ebx; /* 0x1703D608: mov dword ptr [eax + 0x48], ebx */
    RECOMP_CALL(sub_1703D5E0); /* 0x1703D60B: call 0x1703d5e0 */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x1703D610: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1703D667; /* 0x1703D612: jl 0x1703d667 */
L_1703D614:
    /* cmp MEM32(esi + 0x48), ebx */ /* 0x1703D614: cmp dword ptr [esi + 0x48], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x48)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1703D5FD; /* 0x1703D617: jne 0x1703d5fd */
L_1703D619:
    goto L_1703D62F; /* 0x1703D619: jmp 0x1703d62f */
L_1703D61B:
    ecx = MEM32(eax + 0x4C); /* 0x1703D61B: mov ecx, dword ptr [eax + 0x4c] */
    PUSH32(esp, edi); /* 0x1703D61E: push edi */
    MEM32(esi + 0x4C) = ecx; /* 0x1703D61F: mov dword ptr [esi + 0x4c], ecx */
    PUSH32(esp, eax); /* 0x1703D622: push eax */
    MEM32(eax + 0x4C) = ebx; /* 0x1703D623: mov dword ptr [eax + 0x4c], ebx */
    RECOMP_CALL(sub_1703D5E0); /* 0x1703D626: call 0x1703d5e0 */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x1703D62B: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1703D667; /* 0x1703D62D: jl 0x1703d667 */
L_1703D62F:
    eax = MEM32(esi + 0x4C); /* 0x1703D62F: mov eax, dword ptr [esi + 0x4c] */
    /* cmp eax, ebx */ /* 0x1703D632: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1703D61B; /* 0x1703D634: jne 0x1703d61b */
L_1703D636:
    /* cmp eax, ebx */ /* 0x1703D636: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703D645; /* 0x1703D638: je 0x1703d645 */
L_1703D63A:
    PUSH32(esp, edi); /* 0x1703D63A: push edi */
    PUSH32(esp, eax); /* 0x1703D63B: push eax */
    RECOMP_CALL(sub_1703D5E0); /* 0x1703D63C: call 0x1703d5e0 */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x1703D641: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1703D667; /* 0x1703D643: jl 0x1703d667 */
L_1703D645:
    eax = MEM32(esi + 0x44); /* 0x1703D645: mov eax, dword ptr [esi + 0x44] */
    /* cmp eax, ebx */ /* 0x1703D648: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703D660; /* 0x1703D64A: je 0x1703d660 */
L_1703D64C:
    ecx = MEM32(edi); /* 0x1703D64C: mov ecx, dword ptr [edi] */
    ebx = MEM32(eax + 0x20); /* 0x1703D64E: mov ebx, dword ptr [eax + 0x20] */
    PUSH32(esp, eax); /* 0x1703D651: push eax */
    PUSH32(esp, edi); /* 0x1703D652: push edi */
    RECOMP_ICALL(MEM32(ecx + 0xC)); /* 0x1703D653: call dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1703D656: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1703D667; /* 0x1703D658: jl 0x1703d667 */
L_1703D65A:
    /* test ebx, ebx */ /* 0x1703D65A: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebx; /* 0x1703D65C: mov eax, ebx */
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1703D64C; /* 0x1703D65E: jne 0x1703d64c */
L_1703D660:
    eax = MEM32(edi); /* 0x1703D660: mov eax, dword ptr [edi] */
    PUSH32(esp, esi); /* 0x1703D662: push esi */
    PUSH32(esp, edi); /* 0x1703D663: push edi */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1703D664: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_1703D667:
    edi = POP32_VAL(esp); /* 0x1703D667: pop edi */
L_1703D668:
    esi = POP32_VAL(esp); /* 0x1703D668: pop esi */
    ebx = POP32_VAL(esp); /* 0x1703D669: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1703D66A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1703D66B: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1703D673(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1703D673u);

L_1703D673:
    edi = edi; /* 0x1703D673: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1703D675: push ebp */
    ebp = esp; /* 0x1703D676: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x1703D678: mov ecx, dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x1703D67B: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703D6A2; /* 0x1703D67D: je 0x1703d6a2 */
L_1703D67F:
    edx = MEM32(ebp + 0xC); /* 0x1703D67F: mov edx, dword ptr [ebp + 0xc] */
    /* test edx, edx */ /* 0x1703D682: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703D6A2; /* 0x1703D684: je 0x1703d6a2 */
L_1703D686:
    eax = MEM32(ecx + 0x4C); /* 0x1703D686: mov eax, dword ptr [ecx + 0x4c] */
    /* test eax, eax */ /* 0x1703D689: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1703D695; /* 0x1703D68B: jne 0x1703d695 */
L_1703D68D:
    MEM32(ecx + 0x4C) = edx; /* 0x1703D68D: mov dword ptr [ecx + 0x4c], edx */
    goto L_1703D69E; /* 0x1703D690: jmp 0x1703d69e */
L_1703D692:
    eax = MEM32(eax + 0x48); /* 0x1703D692: mov eax, dword ptr [eax + 0x48] */
L_1703D695:
    /* cmp MEM32(eax + 0x48), 0 */ /* 0x1703D695: cmp dword ptr [eax + 0x48], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x48)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1703D692; /* 0x1703D699: jne 0x1703d692 */
L_1703D69B:
    MEM32(eax + 0x48) = edx; /* 0x1703D69B: mov dword ptr [eax + 0x48], edx */
L_1703D69E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1703D69E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1703D6A7; /* 0x1703D6A0: jmp 0x1703d6a7 */
L_1703D6A2:
    eax = 0x8876086Cu; /* 0x1703D6A2: mov eax, 0x8876086c */
L_1703D6A7:
    ebp = POP32_VAL(esp); /* 0x1703D6A7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1703D6A8: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1703D6B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1703D6B0u);

L_1703D6B0:
    edi = edi; /* 0x1703D6B0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1703D6B2: push ebp */
    ebp = esp; /* 0x1703D6B3: mov ebp, esp */
    PUSH32(esp, edi); /* 0x1703D6B5: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1703D6B6: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x1703D6B9: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1703D6C1; /* 0x1703D6BB: jne 0x1703d6c1 */
L_1703D6BD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1703D6BD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1703D72D; /* 0x1703D6BF: jmp 0x1703d72d */
L_1703D6C1:
    PUSH32(esp, ebx); /* 0x1703D6C1: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x1703D6C2: mov ebx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x1703D6C5: push esi */
    esi = MEM32(edi); /* 0x1703D6C6: mov esi, dword ptr [edi] */
    /* cmp ebx, esi */ /* 0x1703D6C8: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703D701; /* 0x1703D6CA: je 0x1703d701 */
L_1703D6CC:
    /* test ebx, ebx */ /* 0x1703D6CC: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703D705; /* 0x1703D6CE: je 0x1703d705 */
L_1703D6D0:
    /* test esi, esi */ /* 0x1703D6D0: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703D705; /* 0x1703D6D2: je 0x1703d705 */
L_1703D6D4:
    eax = ebx; /* 0x1703D6D4: mov eax, ebx */
L_1703D6D6:
    SET_LO8(edx, MEM8(eax)); /* 0x1703D6D6: mov dl, byte ptr [eax] */
    SET_LO8(ecx, LO8(edx)); /* 0x1703D6D8: mov cl, dl */
    /* cmp LO8(edx), MEM8(esi) */ /* 0x1703D6DA: cmp dl, byte ptr [esi] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(esi)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1703D6F8; /* 0x1703D6DC: jne 0x1703d6f8 */
L_1703D6DE:
    /* test LO8(ecx), LO8(ecx) */ /* 0x1703D6DE: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703D6F4; /* 0x1703D6E0: je 0x1703d6f4 */
L_1703D6E2:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x1703D6E2: mov dl, byte ptr [eax + 1] */
    SET_LO8(ecx, LO8(edx)); /* 0x1703D6E5: mov cl, dl */
    /* cmp LO8(edx), MEM8(esi + 0x1) */ /* 0x1703D6E7: cmp dl, byte ptr [esi + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(esi + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1703D6F8; /* 0x1703D6EA: jne 0x1703d6f8 */
L_1703D6EC:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1703D6EC: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1703D6ED: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1703D6EE: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1703D6EF: inc esi */
    _flag_k = FK_INC;
    /* test LO8(ecx), LO8(ecx) */ /* 0x1703D6F0: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1703D6D6; /* 0x1703D6F2: jne 0x1703d6d6 */
L_1703D6F4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1703D6F4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1703D6FD; /* 0x1703D6F6: jmp 0x1703d6fd */
L_1703D6F8:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1703D6F8: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1703D6FA: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_1703D6FD:
    /* test eax, eax */ /* 0x1703D6FD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1703D705; /* 0x1703D6FF: jne 0x1703d705 */
L_1703D701:
    eax = edi; /* 0x1703D701: mov eax, edi */
    goto L_1703D72B; /* 0x1703D703: jmp 0x1703d72b */
L_1703D705:
    eax = MEM32(edi + 0x48); /* 0x1703D705: mov eax, dword ptr [edi + 0x48] */
    /* test eax, eax */ /* 0x1703D708: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703D717; /* 0x1703D70A: je 0x1703d717 */
L_1703D70C:
    PUSH32(esp, ebx); /* 0x1703D70C: push ebx */
    PUSH32(esp, eax); /* 0x1703D70D: push eax */
    RECOMP_CALL(sub_1703D6B0); /* 0x1703D70E: call 0x1703d6b0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1703D713: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1703D72B; /* 0x1703D715: jne 0x1703d72b */
L_1703D717:
    eax = MEM32(edi + 0x4C); /* 0x1703D717: mov eax, dword ptr [edi + 0x4c] */
    /* test eax, eax */ /* 0x1703D71A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703D729; /* 0x1703D71C: je 0x1703d729 */
L_1703D71E:
    PUSH32(esp, ebx); /* 0x1703D71E: push ebx */
    PUSH32(esp, eax); /* 0x1703D71F: push eax */
    RECOMP_CALL(sub_1703D6B0); /* 0x1703D720: call 0x1703d6b0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1703D725: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1703D72B; /* 0x1703D727: jne 0x1703d72b */
L_1703D729:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1703D729: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1703D72B:
    esi = POP32_VAL(esp); /* 0x1703D72B: pop esi */
    ebx = POP32_VAL(esp); /* 0x1703D72C: pop ebx */
L_1703D72D:
    edi = POP32_VAL(esp); /* 0x1703D72D: pop edi */
    ebp = POP32_VAL(esp); /* 0x1703D72E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1703D72F: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1703D737(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1703D737u);

L_1703D737:
    edi = edi; /* 0x1703D737: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1703D739: push ebp */
    ebp = esp; /* 0x1703D73A: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1703D73C: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1703D73D: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x1703D740: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1703D74B; /* 0x1703D742: jne 0x1703d74b */
L_1703D744:
    eax = 0x8876086Cu; /* 0x1703D744: mov eax, 0x8876086c */
    goto L_1703D791; /* 0x1703D749: jmp 0x1703d791 */
L_1703D74B:
    eax = MEM32(esi); /* 0x1703D74B: mov eax, dword ptr [esi] */
    /* test eax, eax */ /* 0x1703D74D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1703D74F: push edi */
    edi = MEM32(ebp + 0xC); /* 0x1703D750: mov edi, dword ptr [ebp + 0xc] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703D76A; /* 0x1703D753: je 0x1703d76a */
L_1703D755:
    ecx = MEM32(edi); /* 0x1703D755: mov ecx, dword ptr [edi] */
    PUSH32(esp, 0); /* 0x1703D757: push 0 */
    PUSH32(esp, 0); /* 0x1703D759: push 0 */
    PUSH32(esp, 0); /* 0x1703D75B: push 0 */
    edx = esi + 0x4; /* 0x1703D75D: lea edx, [esi + 4] */
    PUSH32(esp, edx); /* 0x1703D760: push edx */
    PUSH32(esp, eax); /* 0x1703D761: push eax */
    PUSH32(esp, edi); /* 0x1703D762: push edi */
    RECOMP_ICALL(MEM32(ecx + 0x1C)); /* 0x1703D763: call dword ptr [ecx + 0x1c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1703D766: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1703D790; /* 0x1703D768: jl 0x1703d790 */
L_1703D76A:
    eax = MEM32(esi + 0x48); /* 0x1703D76A: mov eax, dword ptr [esi + 0x48] */
    /* test eax, eax */ /* 0x1703D76D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703D77C; /* 0x1703D76F: je 0x1703d77c */
L_1703D771:
    PUSH32(esp, edi); /* 0x1703D771: push edi */
    PUSH32(esp, eax); /* 0x1703D772: push eax */
    RECOMP_CALL(sub_1703D737); /* 0x1703D773: call 0x1703d737 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1703D778: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1703D790; /* 0x1703D77A: jl 0x1703d790 */
L_1703D77C:
    esi = MEM32(esi + 0x4C); /* 0x1703D77C: mov esi, dword ptr [esi + 0x4c] */
    /* test esi, esi */ /* 0x1703D77F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703D78E; /* 0x1703D781: je 0x1703d78e */
L_1703D783:
    PUSH32(esp, edi); /* 0x1703D783: push edi */
    PUSH32(esp, esi); /* 0x1703D784: push esi */
    RECOMP_CALL(sub_1703D737); /* 0x1703D785: call 0x1703d737 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1703D78A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1703D790; /* 0x1703D78C: jl 0x1703d790 */
L_1703D78E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1703D78E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1703D790:
    edi = POP32_VAL(esp); /* 0x1703D790: pop edi */
L_1703D791:
    esi = POP32_VAL(esp); /* 0x1703D791: pop esi */
    ebp = POP32_VAL(esp); /* 0x1703D792: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1703D793: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1703D79B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1703D79Bu);

L_1703D79B:
    edi = edi; /* 0x1703D79B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1703D79D: push ebp */
    ebp = esp; /* 0x1703D79E: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1703D7A0: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1703D7A1: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1703D7A4: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1703D7A5: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x1703D7A7: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1703D7AF; /* 0x1703D7A9: jne 0x1703d7af */
L_1703D7AB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1703D7AB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1703D7D7; /* 0x1703D7AD: jmp 0x1703d7d7 */
L_1703D7AF:
    /* cmp MEM32(esi), 0 */ /* 0x1703D7AF: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703D7B7; /* 0x1703D7B2: je 0x1703d7b7 */
L_1703D7B4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1703D7B4: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1703D7B6: inc edi */
    _flag_k = FK_INC;
L_1703D7B7:
    eax = MEM32(esi + 0x48); /* 0x1703D7B7: mov eax, dword ptr [esi + 0x48] */
    /* test eax, eax */ /* 0x1703D7BA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703D7C6; /* 0x1703D7BC: je 0x1703d7c6 */
L_1703D7BE:
    PUSH32(esp, eax); /* 0x1703D7BE: push eax */
    RECOMP_CALL(sub_1703D79B); /* 0x1703D7BF: call 0x1703d79b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x1703D7C4: add edi, eax */
    _flag_k = FK_ADD;
L_1703D7C6:
    esi = MEM32(esi + 0x4C); /* 0x1703D7C6: mov esi, dword ptr [esi + 0x4c] */
    /* test esi, esi */ /* 0x1703D7C9: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703D7D5; /* 0x1703D7CB: je 0x1703d7d5 */
L_1703D7CD:
    PUSH32(esp, esi); /* 0x1703D7CD: push esi */
    RECOMP_CALL(sub_1703D79B); /* 0x1703D7CE: call 0x1703d79b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x1703D7D3: add edi, eax */
    _flag_k = FK_ADD;
L_1703D7D5:
    eax = edi; /* 0x1703D7D5: mov eax, edi */
L_1703D7D7:
    edi = POP32_VAL(esp); /* 0x1703D7D7: pop edi */
    esi = POP32_VAL(esp); /* 0x1703D7D8: pop esi */
    ebp = POP32_VAL(esp); /* 0x1703D7D9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1703D7DA: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1703D7E2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1703D7E2u);

L_1703D7E2:
    edi = edi; /* 0x1703D7E2: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1703D7E4: push ebp */
    ebp = esp; /* 0x1703D7E5: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1703D7E7: push esi */
    PUSH32(esp, edi); /* 0x1703D7E8: push edi */
    esi = ecx; /* 0x1703D7E9: mov esi, ecx */
    RECOMP_CALL(sub_170B7D30); /* 0x1703D7EB: call 0x170b7d30 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1703D7F0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 8); /* 0x1703D7F2: push 8 */
    ecx = POP32_VAL(esp); /* 0x1703D7F4: pop ecx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1703D7F5: push dword ptr [ebp + 8] */
    MEM32(esi + 0x88) = eax; /* 0x1703D7F8: mov dword ptr [esi + 0x88], eax */
    MEM32(esi + 0x8C) = eax; /* 0x1703D7FE: mov dword ptr [esi + 0x8c], eax */
    MEM32(esi + 0x90) = eax; /* 0x1703D804: mov dword ptr [esi + 0x90], eax */
    MEM32(esi + 0x94) = eax; /* 0x1703D80A: mov dword ptr [esi + 0x94], eax */
    MEM32(esi + 0x98) = eax; /* 0x1703D810: mov dword ptr [esi + 0x98], eax */
    MEM32(esi + 0x9C) = eax; /* 0x1703D816: mov dword ptr [esi + 0x9c], eax */
    edi = esi + 0xA0; /* 0x1703D81C: lea edi, [esi + 0xa0] */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x1703D822: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    ecx = esi; /* 0x1703D824: mov ecx, esi */
    RECOMP_CALL(sub_1703CC5E); /* 0x1703D826: call 0x1703cc5e */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x1703D82B: pop edi */
    eax = esi; /* 0x1703D82C: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1703D82E: pop esi */
    ebp = POP32_VAL(esp); /* 0x1703D82F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1703D830: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1703D838(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1703D838u);

L_1703D838:
    edi = edi; /* 0x1703D838: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1703D83A: push ebp */
    ebp = esp; /* 0x1703D83B: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1703D83D: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1703D840: push esi */
    esi = MEM32(ebp + 0x28); /* 0x1703D841: mov esi, dword ptr [ebp + 0x28] */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x1703D844: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + 0x4); /* 0x1703D847: mov eax, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x28)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x28) = MEM32(ebp + 0x28) & 0; /* 0x1703D84A: and dword ptr [ebp + 0x28], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(eax); /* 0x1703D84E: mov ecx, dword ptr [eax] */
    edx = ebp + 0x28; /* 0x1703D850: lea edx, [ebp + 0x28] */
    PUSH32(esp, edx); /* 0x1703D853: push edx */
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x1703D854: push dword ptr [ebp + 0x24] */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x1703D857: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1703D85A: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1703D85D: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1703D860: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1703D863: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1703D866: push dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x1703D869: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x4)); /* 0x1703D86A: call dword ptr [ecx + 4] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1703D86D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1703D883; /* 0x1703D86F: jl 0x1703d883 */
L_1703D871:
    ecx = MEM32(ebp + 0x28); /* 0x1703D871: mov ecx, dword ptr [ebp + 0x28] */
    /* test ecx, ecx */ /* 0x1703D874: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703D889; /* 0x1703D876: je 0x1703d889 */
L_1703D878:
    _flag_a = (uint32_t)(MEM32(ecx + 0x20)); _flag_b = (uint32_t)(0);
    MEM32(ecx + 0x20) = MEM32(ecx + 0x20) & 0; /* 0x1703D878: and dword ptr [ecx + 0x20], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0x28); /* 0x1703D87C: mov ecx, dword ptr [ebp + 0x28] */
    MEM32(esi) = ecx; /* 0x1703D87F: mov dword ptr [esi], ecx */
    goto L_1703D88E; /* 0x1703D881: jmp 0x1703d88e */
L_1703D883:
    /* cmp MEM32(ebp + 0x28), 0 */ /* 0x1703D883: cmp dword ptr [ebp + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1703D88E; /* 0x1703D887: jne 0x1703d88e */
L_1703D889:
    eax = 0x80004005u; /* 0x1703D889: mov eax, 0x80004005 */
L_1703D88E:
    esi = POP32_VAL(esp); /* 0x1703D88E: pop esi */
    ebp = POP32_VAL(esp); /* 0x1703D88F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 40; { RECOMP_REGS_OUT(); return; } /* 0x1703D890: ret 0x24 */
    RECOMP_REGS_OUT();
}

void sub_1703D898(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1703D898u);

L_1703D898:
    edi = edi; /* 0x1703D898: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1703D89A: push ebp */
    ebp = esp; /* 0x1703D89B: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1703D89D: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x4); /* 0x1703D8A0: mov eax, dword ptr [eax + 4] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1703D8A3: push dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x1703D8A6: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1703D8A8: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1703D8A9: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1703D8AC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1703D8AD: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1703D8B5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1703D8B5u);

L_1703D8B5:
    edi = edi; /* 0x1703D8B5: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1703D8B7: push ebp */
    ebp = esp; /* 0x1703D8B8: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1703D8BA: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1703D8BD: push esi */
    esi = MEM32(ebp + 0x10); /* 0x1703D8BE: mov esi, dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x1703D8C1: push edi */
    edx = ebp + 0x10; /* 0x1703D8C2: lea edx, [ebp + 0x10] */
    PUSH32(esp, edx); /* 0x1703D8C5: push edx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1703D8C6: push dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1703D8C9: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = edi; /* 0x1703D8CB: mov dword ptr [esi], edi */
    eax = MEM32(eax + 0x4); /* 0x1703D8CD: mov eax, dword ptr [eax + 4] */
    MEM32(ebp + 0x10) = edi; /* 0x1703D8D0: mov dword ptr [ebp + 0x10], edi */
    ecx = MEM32(eax); /* 0x1703D8D3: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1703D8D5: push eax */
    RECOMP_ICALL(MEM32(ecx)); /* 0x1703D8D6: call dword ptr [ecx] */
    RECOMP_FLAGS_IN();
    /* cmp eax, edi */ /* 0x1703D8D8: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1703D94E; /* 0x1703D8DA: jl 0x1703d94e */
L_1703D8DC:
    ecx = MEM32(ebp + 0x10); /* 0x1703D8DC: mov ecx, dword ptr [ebp + 0x10] */
    /* cmp ecx, edi */ /* 0x1703D8DF: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703D953; /* 0x1703D8E1: je 0x1703d953 */
L_1703D8E3:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x1703D8E3: add ecx, 4 */
    _flag_k = FK_ADD;
    fp_push(0.0); /* 0x1703D8E6: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x38) = _v; } /* 0x1703D8E8: fstp dword ptr [ecx + 0x38] */
    fp_push(0.0); /* 0x1703D8EB: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x34) = _v; } /* 0x1703D8ED: fstp dword ptr [ecx + 0x34] */
    fp_push(0.0); /* 0x1703D8F0: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x30) = _v; } /* 0x1703D8F2: fstp dword ptr [ecx + 0x30] */
    fp_push(0.0); /* 0x1703D8F5: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x2C) = _v; } /* 0x1703D8F7: fstp dword ptr [ecx + 0x2c] */
    fp_push(0.0); /* 0x1703D8FA: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x24) = _v; } /* 0x1703D8FC: fstp dword ptr [ecx + 0x24] */
    fp_push(0.0); /* 0x1703D8FF: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x20) = _v; } /* 0x1703D901: fstp dword ptr [ecx + 0x20] */
    fp_push(0.0); /* 0x1703D904: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x1C) = _v; } /* 0x1703D906: fstp dword ptr [ecx + 0x1c] */
    fp_push(0.0); /* 0x1703D909: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x18) = _v; } /* 0x1703D90B: fstp dword ptr [ecx + 0x18] */
    fp_push(0.0); /* 0x1703D90E: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x10) = _v; } /* 0x1703D910: fstp dword ptr [ecx + 0x10] */
    fp_push(0.0); /* 0x1703D913: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0xC) = _v; } /* 0x1703D915: fstp dword ptr [ecx + 0xc] */
    fp_push(0.0); /* 0x1703D918: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x8) = _v; } /* 0x1703D91A: fstp dword ptr [ecx + 8] */
    fp_push(0.0); /* 0x1703D91D: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x4) = _v; } /* 0x1703D91F: fstp dword ptr [ecx + 4] */
    fp_push(1.0); /* 0x1703D922: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x3C) = _v; } /* 0x1703D924: fstp dword ptr [ecx + 0x3c] */
    fp_push(1.0); /* 0x1703D927: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x28) = _v; } /* 0x1703D929: fstp dword ptr [ecx + 0x28] */
    fp_push(1.0); /* 0x1703D92C: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x14) = _v; } /* 0x1703D92E: fstp dword ptr [ecx + 0x14] */
    fp_push(1.0); /* 0x1703D931: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx) = _v; } /* 0x1703D933: fstp dword ptr [ecx] */
    ecx = MEM32(ebp + 0x10); /* 0x1703D935: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(ecx + 0x44) = edi; /* 0x1703D938: mov dword ptr [ecx + 0x44], edi */
    ecx = MEM32(ebp + 0x10); /* 0x1703D93B: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(ecx + 0x48) = edi; /* 0x1703D93E: mov dword ptr [ecx + 0x48], edi */
    ecx = MEM32(ebp + 0x10); /* 0x1703D941: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(ecx + 0x4C) = edi; /* 0x1703D944: mov dword ptr [ecx + 0x4c], edi */
    ecx = MEM32(ebp + 0x10); /* 0x1703D947: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(esi) = ecx; /* 0x1703D94A: mov dword ptr [esi], ecx */
    goto L_1703D958; /* 0x1703D94C: jmp 0x1703d958 */
L_1703D94E:
    /* cmp MEM32(ebp + 0x10), edi */ /* 0x1703D94E: cmp dword ptr [ebp + 0x10], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1703D958; /* 0x1703D951: jne 0x1703d958 */
L_1703D953:
    eax = 0x80004005u; /* 0x1703D953: mov eax, 0x80004005 */
L_1703D958:
    edi = POP32_VAL(esp); /* 0x1703D958: pop edi */
    esi = POP32_VAL(esp); /* 0x1703D959: pop esi */
    ebp = POP32_VAL(esp); /* 0x1703D95A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1703D95B: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1703D963(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1703D963u);

L_1703D963:
    edi = edi; /* 0x1703D963: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1703D965: push ebp */
    ebp = esp; /* 0x1703D966: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x448u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x448u; /* 0x1703D968: sub esp, 0x448 */
    _flag_k = FK_CMP;
    eax = MEM32(0x1723C894); /* 0x1703D96E: mov eax, dword ptr [0x1723c894] */
    PUSH32(esp, ebx); /* 0x1703D973: push ebx */
    MEM32(ebp + (-0x4)) = eax; /* 0x1703D974: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x10); /* 0x1703D977: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x1703D97A: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1703D97B: mov esi, dword ptr [ebp + 0xc] */
    ecx = MEM32(esi); /* 0x1703D97E: mov ecx, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x1703D980: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1703D981: mov edi, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x430)) = eax; /* 0x1703D984: mov dword ptr [ebp - 0x430], eax */
    eax = MEM32(ebp + 0x14); /* 0x1703D98A: mov eax, dword ptr [ebp + 0x14] */
    edx = ebp + (-0x428); /* 0x1703D98D: lea edx, [ebp - 0x428] */
    MEM32(ebp + (-0x438)) = eax; /* 0x1703D993: mov dword ptr [ebp - 0x438], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1703D999: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edx); /* 0x1703D99B: push edx */
    PUSH32(esp, eax); /* 0x1703D99C: push eax */
    PUSH32(esp, esi); /* 0x1703D99D: push esi */
    MEM32(ebp + (-0x424)) = edi; /* 0x1703D99E: mov dword ptr [ebp - 0x424], edi */
    MEM32(ebp + (-0x43C)) = esi; /* 0x1703D9A4: mov dword ptr [ebp - 0x43c], esi */
    MEM32(ebp + (-0x418)) = eax; /* 0x1703D9AA: mov dword ptr [ebp - 0x418], eax */
    MEM32(ebp + (-0x420)) = eax; /* 0x1703D9B0: mov dword ptr [ebp - 0x420], eax */
    MEM32(ebp + (-0x428)) = eax; /* 0x1703D9B6: mov dword ptr [ebp - 0x428], eax */
    MEM32(ebp + (-0x41C)) = eax; /* 0x1703D9BC: mov dword ptr [ebp - 0x41c], eax */
    RECOMP_ICALL(MEM32(ecx + 0x10)); /* 0x1703D9C2: call dword ptr [ecx + 0x10] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1703D9C5: mov ebx, eax */
    /* test ebx, ebx */ /* 0x1703D9C7: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1703DC59; /* 0x1703D9C9: jl 0x1703dc59 */
L_1703D9CF:
    /* cmp MEM32(ebp + (-0x428)), 0 */ /* 0x1703D9CF: cmp dword ptr [ebp - 0x428], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x428))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1703DA2D; /* 0x1703D9D6: jbe 0x1703da2d */
L_1703D9D8:
    /* cmp MEM32(ebp + (-0x428)), 0x400u */ /* 0x1703D9D8: cmp dword ptr [ebp - 0x428], 0x400 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x428))); _flag_b = (uint32_t)(0x400u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = ebp + (-0x404); /* 0x1703D9E2: lea eax, [ebp - 0x404] */
    MEM32(ebp + (-0x420)) = eax; /* 0x1703D9E8: mov dword ptr [ebp - 0x420], eax */
    if (CMP_BE(_flag_a, _flag_b)) goto L_1703DA10; /* 0x1703D9EE: jbe 0x1703da10 */
L_1703D9F0:
    PUSH32(esp, MEM32(ebp + (-0x428))); /* 0x1703D9F0: push dword ptr [ebp - 0x428] */
    RECOMP_CALL(sub_1721B01C); /* 0x1703D9F6: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1703D9FB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1703D9FD: pop ecx */
    MEM32(ebp + (-0x420)) = eax; /* 0x1703D9FE: mov dword ptr [ebp - 0x420], eax */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1703DA10; /* 0x1703DA04: jne 0x1703da10 */
L_1703DA06:
    ebx = 0x8007000Eu; /* 0x1703DA06: mov ebx, 0x8007000e */
    goto L_1703DC4B; /* 0x1703DA0B: jmp 0x1703dc4b */
L_1703DA10:
    eax = MEM32(esi); /* 0x1703DA10: mov eax, dword ptr [esi] */
    ecx = ebp + (-0x428); /* 0x1703DA12: lea ecx, [ebp - 0x428] */
    PUSH32(esp, ecx); /* 0x1703DA18: push ecx */
    PUSH32(esp, MEM32(ebp + (-0x420))); /* 0x1703DA19: push dword ptr [ebp - 0x420] */
    PUSH32(esp, esi); /* 0x1703DA1F: push esi */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x1703DA20: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1703DA23: mov ebx, eax */
    /* test ebx, ebx */ /* 0x1703DA25: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1703DC4B; /* 0x1703DA27: jl 0x1703dc4b */
L_1703DA2D:
    eax = MEM32(edi + 0xC); /* 0x1703DA2D: mov eax, dword ptr [edi + 0xc] */
    ecx = MEM32(eax); /* 0x1703DA30: mov ecx, dword ptr [eax] */
    edx = ebp + (-0x418); /* 0x1703DA32: lea edx, [ebp - 0x418] */
    PUSH32(esp, edx); /* 0x1703DA38: push edx */
    PUSH32(esp, MEM32(ebp + (-0x420))); /* 0x1703DA39: push dword ptr [ebp - 0x420] */
    PUSH32(esp, eax); /* 0x1703DA3F: push eax */
    RECOMP_ICALL(MEM32(ecx)); /* 0x1703DA40: call dword ptr [ecx] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1703DA42: mov ebx, eax */
    /* test ebx, ebx */ /* 0x1703DA44: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1703DC4B; /* 0x1703DA46: jl 0x1703dc4b */
L_1703DA4C:
    eax = MEM32(ebp + (-0x418)); /* 0x1703DA4C: mov eax, dword ptr [ebp - 0x418] */
    /* cmp MEM32(eax), 0 */ /* 0x1703DA52: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703DA5A; /* 0x1703DA55: je 0x1703da5a */
L_1703DA57:
    _flag_a = (uint32_t)(MEM32(edi + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x4) = MEM32(edi + 0x4) + 1; /* 0x1703DA57: inc dword ptr [edi + 4] */
    _flag_k = FK_INC;
L_1703DA5A:
    eax = MEM32(esi); /* 0x1703DA5A: mov eax, dword ptr [esi] */
    ecx = ebp + (-0x434); /* 0x1703DA5C: lea ecx, [ebp - 0x434] */
    PUSH32(esp, ecx); /* 0x1703DA62: push ecx */
    PUSH32(esp, esi); /* 0x1703DA63: push esi */
    RECOMP_ICALL(MEM32(eax + 0x28)); /* 0x1703DA64: call dword ptr [eax + 0x28] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x42C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x42C)) = MEM32(ebp + (-0x42C)) & 0; /* 0x1703DA67: and dword ptr [ebp - 0x42c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x434)), 0 */ /* 0x1703DA6E: cmp dword ptr [ebp - 0x434], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x434))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1703DC0E; /* 0x1703DA75: jbe 0x1703dc0e */
L_1703DA7B:
    eax = MEM32(esi); /* 0x1703DA7B: mov eax, dword ptr [esi] */
    ecx = ebp + (-0x41C); /* 0x1703DA7D: lea ecx, [ebp - 0x41c] */
    PUSH32(esp, ecx); /* 0x1703DA83: push ecx */
    PUSH32(esp, MEM32(ebp + (-0x42C))); /* 0x1703DA84: push dword ptr [ebp - 0x42c] */
    PUSH32(esp, esi); /* 0x1703DA8A: push esi */
    RECOMP_ICALL(MEM32(eax + 0x2C)); /* 0x1703DA8B: call dword ptr [eax + 0x2c] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1703DA8E: mov ebx, eax */
    /* test ebx, ebx */ /* 0x1703DA90: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1703DBF6; /* 0x1703DA92: jl 0x1703dbf6 */
L_1703DA98:
    eax = MEM32(ebp + (-0x41C)); /* 0x1703DA98: mov eax, dword ptr [ebp - 0x41c] */
    ecx = MEM32(eax); /* 0x1703DA9E: mov ecx, dword ptr [eax] */
    edx = ebp + (-0x414); /* 0x1703DAA0: lea edx, [ebp - 0x414] */
    PUSH32(esp, edx); /* 0x1703DAA6: push edx */
    PUSH32(esp, eax); /* 0x1703DAA7: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x20)); /* 0x1703DAA8: call dword ptr [ecx + 0x20] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1703DAAB: mov ebx, eax */
    /* test ebx, ebx */ /* 0x1703DAAD: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1703DC4B; /* 0x1703DAAF: jl 0x1703dc4b */
L_1703DAB5:
    PUSH32(esp, 4); /* 0x1703DAB5: push 4 */
    eax = POP32_VAL(esp); /* 0x1703DAB7: pop eax */
    ecx = eax; /* 0x1703DAB8: mov ecx, eax */
    edi = 0x17001ECCu; /* 0x1703DABA: mov edi, 0x17001ecc */
    esi = ebp + (-0x414); /* 0x1703DABF: lea esi, [ebp - 0x414] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1703DAC5: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x1703DAC7: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_1703DAE7; /* 0x1703DAC9: jne 0x1703dae7 */
L_1703DACB:
    PUSH32(esp, MEM32(ebp + (-0x418))); /* 0x1703DACB: push dword ptr [ebp - 0x418] */
    PUSH32(esp, MEM32(ebp + (-0x41C))); /* 0x1703DAD1: push dword ptr [ebp - 0x41c] */
    PUSH32(esp, MEM32(ebp + (-0x424))); /* 0x1703DAD7: push dword ptr [ebp - 0x424] */
    RECOMP_CALL(sub_1703CE58); /* 0x1703DADD: call 0x1703ce58 */
    RECOMP_FLAGS_IN();
    goto L_1703DBCD; /* 0x1703DAE2: jmp 0x1703dbcd */
L_1703DAE7:
    ecx = eax; /* 0x1703DAE7: mov ecx, eax */
    edi = 0x17001AF0u; /* 0x1703DAE9: mov edi, 0x17001af0 */
    esi = ebp + (-0x414); /* 0x1703DAEE: lea esi, [ebp - 0x414] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1703DAF4: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x1703DAF6: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_1703DBB6; /* 0x1703DAF8: je 0x1703dbb6 */
L_1703DAFE:
    ecx = eax; /* 0x1703DAFE: mov ecx, eax */
    edi = 0x17001AE0u; /* 0x1703DB00: mov edi, 0x17001ae0 */
    esi = ebp + (-0x414); /* 0x1703DB05: lea esi, [ebp - 0x414] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1703DB0B: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x1703DB0D: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_1703DBB6; /* 0x1703DB0F: je 0x1703dbb6 */
L_1703DB15:
    ecx = eax; /* 0x1703DB15: mov ecx, eax */
    edi = 0x17001EECu; /* 0x1703DB17: mov edi, 0x17001eec */
    esi = ebp + (-0x414); /* 0x1703DB1C: lea esi, [ebp - 0x414] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1703DB22: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x1703DB24: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_1703DB62; /* 0x1703DB26: jne 0x1703db62 */
L_1703DB28:
    eax = MEM32(ebp + (-0x41C)); /* 0x1703DB28: mov eax, dword ptr [ebp - 0x41c] */
    ecx = MEM32(eax); /* 0x1703DB2E: mov ecx, dword ptr [eax] */
    edx = ebp + (-0x440); /* 0x1703DB30: lea edx, [ebp - 0x440] */
    PUSH32(esp, edx); /* 0x1703DB36: push edx */
    edx = ebp + (-0x444); /* 0x1703DB37: lea edx, [ebp - 0x444] */
    PUSH32(esp, edx); /* 0x1703DB3D: push edx */
    PUSH32(esp, eax); /* 0x1703DB3E: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x18)); /* 0x1703DB3F: call dword ptr [ecx + 0x18] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1703DB42: mov ebx, eax */
    /* test ebx, ebx */ /* 0x1703DB44: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1703DC45; /* 0x1703DB46: jl 0x1703dc45 */
L_1703DB4C:
    edi = MEM32(ebp + (-0x418)); /* 0x1703DB4C: mov edi, dword ptr [ebp - 0x418] */
    esi = MEM32(ebp + (-0x440)); /* 0x1703DB52: mov esi, dword ptr [ebp - 0x440] */
    PUSH32(esp, 0x10u); /* 0x1703DB58: push 0x10 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x1703DB5A: add edi, 4 */
    _flag_k = FK_ADD;
    ecx = POP32_VAL(esp); /* 0x1703DB5D: pop ecx */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1703DB5E: rep movsd dword ptr es:[edi], dword ptr [esi] */
    goto L_1703DBD3; /* 0x1703DB60: jmp 0x1703dbd3 */
L_1703DB62:
    ecx = eax; /* 0x1703DB62: mov ecx, eax */
    edi = 0x17001EDCu; /* 0x1703DB64: mov edi, 0x17001edc */
    esi = ebp + (-0x414); /* 0x1703DB69: lea esi, [ebp - 0x414] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1703DB6F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x1703DB71: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_1703DB95; /* 0x1703DB73: jne 0x1703db95 */
L_1703DB75:
    eax = ebp + (-0x448); /* 0x1703DB75: lea eax, [ebp - 0x448] */
    PUSH32(esp, eax); /* 0x1703DB7B: push eax */
    PUSH32(esp, MEM32(ebp + (-0x418))); /* 0x1703DB7C: push dword ptr [ebp - 0x418] */
    PUSH32(esp, MEM32(ebp + (-0x41C))); /* 0x1703DB82: push dword ptr [ebp - 0x41c] */
    PUSH32(esp, MEM32(ebp + (-0x424))); /* 0x1703DB88: push dword ptr [ebp - 0x424] */
    RECOMP_CALL(sub_1703D963); /* 0x1703DB8E: call 0x1703d963 */
    RECOMP_FLAGS_IN();
    goto L_1703DBCD; /* 0x1703DB93: jmp 0x1703dbcd */
L_1703DB95:
    eax = MEM32(ebp + (-0x424)); /* 0x1703DB95: mov eax, dword ptr [ebp - 0x424] */
    eax = MEM32(eax + 0x10); /* 0x1703DB9B: mov eax, dword ptr [eax + 0x10] */
    /* test eax, eax */ /* 0x1703DB9E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703DBD3; /* 0x1703DBA0: je 0x1703dbd3 */
L_1703DBA2:
    PUSH32(esp, MEM32(ebp + (-0x41C))); /* 0x1703DBA2: push dword ptr [ebp - 0x41c] */
    ecx = MEM32(eax); /* 0x1703DBA8: mov ecx, dword ptr [eax] */
    PUSH32(esp, MEM32(ebp + (-0x418))); /* 0x1703DBAA: push dword ptr [ebp - 0x418] */
    PUSH32(esp, eax); /* 0x1703DBB0: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x4)); /* 0x1703DBB1: call dword ptr [ecx + 4] */
    RECOMP_FLAGS_IN();
    goto L_1703DBCD; /* 0x1703DBB4: jmp 0x1703dbcd */
L_1703DBB6:
    PUSH32(esp, MEM32(ebp + (-0x418))); /* 0x1703DBB6: push dword ptr [ebp - 0x418] */
    PUSH32(esp, MEM32(ebp + (-0x41C))); /* 0x1703DBBC: push dword ptr [ebp - 0x41c] */
    PUSH32(esp, MEM32(ebp + (-0x424))); /* 0x1703DBC2: push dword ptr [ebp - 0x424] */
    RECOMP_CALL(sub_1703D385); /* 0x1703DBC8: call 0x1703d385 */
    RECOMP_FLAGS_IN();
L_1703DBCD:
    ebx = eax; /* 0x1703DBCD: mov ebx, eax */
    /* test ebx, ebx */ /* 0x1703DBCF: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1703DC45; /* 0x1703DBD1: jl 0x1703dc45 */
L_1703DBD3:
    eax = MEM32(ebp + (-0x41C)); /* 0x1703DBD3: mov eax, dword ptr [ebp - 0x41c] */
    /* test eax, eax */ /* 0x1703DBD9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703DBEA; /* 0x1703DBDB: je 0x1703dbea */
L_1703DBDD:
    ecx = MEM32(eax); /* 0x1703DBDD: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1703DBDF: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1703DBE0: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x41C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x41C)) = MEM32(ebp + (-0x41C)) & 0; /* 0x1703DBE3: and dword ptr [ebp - 0x41c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1703DBEA:
    esi = MEM32(ebp + (-0x43C)); /* 0x1703DBEA: mov esi, dword ptr [ebp - 0x43c] */
    edi = MEM32(ebp + (-0x424)); /* 0x1703DBF0: mov edi, dword ptr [ebp - 0x424] */
L_1703DBF6:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x42C))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x42C)) = MEM32(ebp + (-0x42C)) + 1; /* 0x1703DBF6: inc dword ptr [ebp - 0x42c] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + (-0x42C)); /* 0x1703DBFC: mov eax, dword ptr [ebp - 0x42c] */
    /* cmp eax, MEM32(ebp + (-0x434)) */ /* 0x1703DC02: cmp eax, dword ptr [ebp - 0x434] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x434)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1703DA7B; /* 0x1703DC08: jb 0x1703da7b */
L_1703DC0E:
    /* cmp MEM32(ebp + (-0x430)), 0 */ /* 0x1703DC0E: cmp dword ptr [ebp - 0x430], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x430))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703DC2E; /* 0x1703DC15: je 0x1703dc2e */
L_1703DC17:
    PUSH32(esp, MEM32(ebp + (-0x418))); /* 0x1703DC17: push dword ptr [ebp - 0x418] */
    PUSH32(esp, MEM32(ebp + (-0x430))); /* 0x1703DC1D: push dword ptr [ebp - 0x430] */
    RECOMP_CALL(sub_1703D673); /* 0x1703DC23: call 0x1703d673 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1703DC28: mov ebx, eax */
    /* test ebx, ebx */ /* 0x1703DC2A: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1703DC4B; /* 0x1703DC2C: jl 0x1703dc4b */
L_1703DC2E:
    eax = MEM32(ebp + (-0x418)); /* 0x1703DC2E: mov eax, dword ptr [ebp - 0x418] */
    ecx = MEM32(ebp + (-0x438)); /* 0x1703DC34: mov ecx, dword ptr [ebp - 0x438] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x418))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x418)) = MEM32(ebp + (-0x418)) & 0; /* 0x1703DC3A: and dword ptr [ebp - 0x418], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx) = eax; /* 0x1703DC41: mov dword ptr [ecx], eax */
    goto L_1703DC4B; /* 0x1703DC43: jmp 0x1703dc4b */
L_1703DC45:
    edi = MEM32(ebp + (-0x424)); /* 0x1703DC45: mov edi, dword ptr [ebp - 0x424] */
L_1703DC4B:
    eax = ebp + (-0x404); /* 0x1703DC4B: lea eax, [ebp - 0x404] */
    /* cmp eax, MEM32(ebp + (-0x420)) */ /* 0x1703DC51: cmp eax, dword ptr [ebp - 0x420] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x420)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703DC65; /* 0x1703DC57: je 0x1703dc65 */
L_1703DC59:
    PUSH32(esp, MEM32(ebp + (-0x420))); /* 0x1703DC59: push dword ptr [ebp - 0x420] */
    RECOMP_CALL(sub_1721B010); /* 0x1703DC5F: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1703DC64: pop ecx */
L_1703DC65:
    /* cmp MEM32(ebp + (-0x418)), 0 */ /* 0x1703DC65: cmp dword ptr [ebp - 0x418], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x418))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703DC7C; /* 0x1703DC6C: je 0x1703dc7c */
L_1703DC6E:
    PUSH32(esp, MEM32(edi + 0xC)); /* 0x1703DC6E: push dword ptr [edi + 0xc] */
    PUSH32(esp, MEM32(ebp + (-0x418))); /* 0x1703DC71: push dword ptr [ebp - 0x418] */
    RECOMP_CALL(sub_1703D5E0); /* 0x1703DC77: call 0x1703d5e0 */
    RECOMP_FLAGS_IN();
L_1703DC7C:
    eax = MEM32(ebp + (-0x41C)); /* 0x1703DC7C: mov eax, dword ptr [ebp - 0x41c] */
    /* test eax, eax */ /* 0x1703DC82: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703DC8C; /* 0x1703DC84: je 0x1703dc8c */
L_1703DC86:
    ecx = MEM32(eax); /* 0x1703DC86: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1703DC88: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1703DC89: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
L_1703DC8C:
    ecx = MEM32(ebp + (-0x4)); /* 0x1703DC8C: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x1703DC8F: pop edi */
    esi = POP32_VAL(esp); /* 0x1703DC90: pop esi */
    eax = ebx; /* 0x1703DC91: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x1703DC93: pop ebx */
    RECOMP_CALL(sub_1721B76C); /* 0x1703DC94: call 0x1721b76c */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1703DC99: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1703DC9A: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1703DCA2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1703DCA2u);

L_1703DCA2:
    edi = edi; /* 0x1703DCA2: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1703DCA4: push ebp */
    ebp = esp; /* 0x1703DCA5: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14Cu; /* 0x1703DCA7: sub esp, 0x14c */
    _flag_k = FK_CMP;
    eax = MEM32(0x1723C894); /* 0x1703DCAD: mov eax, dword ptr [0x1723c894] */
    PUSH32(esp, ebx); /* 0x1703DCB2: push ebx */
    PUSH32(esp, esi); /* 0x1703DCB3: push esi */
    esi = MEM32(ebp + 0x10); /* 0x1703DCB4: mov esi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1703DCB7: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1703DCB9: push edi */
    edi = MEM32(ebp + 0xC); /* 0x1703DCBA: mov edi, dword ptr [ebp + 0xc] */
    ecx = ebp + (-0x74); /* 0x1703DCBD: lea ecx, [ebp - 0x74] */
    PUSH32(esp, ecx); /* 0x1703DCC0: push ecx */
    MEM32(ebp + (-0x4)) = eax; /* 0x1703DCC1: mov dword ptr [ebp - 4], eax */
    eax = MEM32(edi); /* 0x1703DCC4: mov eax, dword ptr [edi] */
    PUSH32(esp, edi); /* 0x1703DCC6: push edi */
    MEM32(ebp + (-0xC8)) = edi; /* 0x1703DCC7: mov dword ptr [ebp - 0xc8], edi */
    MEM32(ebp + (-0xC4)) = esi; /* 0x1703DCCD: mov dword ptr [ebp - 0xc4], esi */
    MEM32(ebp + (-0x1C)) = ebx; /* 0x1703DCD3: mov dword ptr [ebp - 0x1c], ebx */
    MEM32(ebp + (-0x18)) = ebx; /* 0x1703DCD6: mov dword ptr [ebp - 0x18], ebx */
    MEM32(ebp + (-0x20)) = ebx; /* 0x1703DCD9: mov dword ptr [ebp - 0x20], ebx */
    MEM32(ebp + (-0x40)) = ebx; /* 0x1703DCDC: mov dword ptr [ebp - 0x40], ebx */
    MEM32(ebp + (-0x44)) = ebx; /* 0x1703DCDF: mov dword ptr [ebp - 0x44], ebx */
    MEM32(ebp + (-0x54)) = ebx; /* 0x1703DCE2: mov dword ptr [ebp - 0x54], ebx */
    MEM32(ebp + (-0x28)) = ebx; /* 0x1703DCE5: mov dword ptr [ebp - 0x28], ebx */
    MEM32(ebp + (-0x38)) = ebx; /* 0x1703DCE8: mov dword ptr [ebp - 0x38], ebx */
    RECOMP_ICALL(MEM32(eax + 0x28)); /* 0x1703DCEB: call dword ptr [eax + 0x28] */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x74)), ebx */ /* 0x1703DCEE: cmp dword ptr [ebp - 0x74], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x74))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x48)) = ebx; /* 0x1703DCF1: mov dword ptr [ebp - 0x48], ebx */
    if (CMP_BE(_flag_a, _flag_b)) goto L_1703E673; /* 0x1703DCF4: jbe 0x1703e673 */
L_1703DCFA:
    eax = MEM32(edi); /* 0x1703DCFA: mov eax, dword ptr [edi] */
    ecx = ebp + (-0x28); /* 0x1703DCFC: lea ecx, [ebp - 0x28] */
    PUSH32(esp, ecx); /* 0x1703DCFF: push ecx */
    PUSH32(esp, MEM32(ebp + (-0x48))); /* 0x1703DD00: push dword ptr [ebp - 0x48] */
    PUSH32(esp, edi); /* 0x1703DD03: push edi */
    RECOMP_ICALL(MEM32(eax + 0x2C)); /* 0x1703DD04: call dword ptr [eax + 0x2c] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1703DD07: mov ebx, eax */
    /* test ebx, ebx */ /* 0x1703DD09: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1703E60B; /* 0x1703DD0B: jl 0x1703e60b */
L_1703DD11:
    eax = MEM32(ebp + (-0x28)); /* 0x1703DD11: mov eax, dword ptr [ebp - 0x28] */
    ecx = MEM32(eax); /* 0x1703DD14: mov ecx, dword ptr [eax] */
    edx = ebp + (-0x14); /* 0x1703DD16: lea edx, [ebp - 0x14] */
    PUSH32(esp, edx); /* 0x1703DD19: push edx */
    PUSH32(esp, eax); /* 0x1703DD1A: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x20)); /* 0x1703DD1B: call dword ptr [ecx + 0x20] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1703DD1E: mov ebx, eax */
    /* test ebx, ebx */ /* 0x1703DD20: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x50)) = ebx; /* 0x1703DD22: mov dword ptr [ebp - 0x50], ebx */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1703E678; /* 0x1703DD25: jl 0x1703e678 */
L_1703DD2B:
    PUSH32(esp, 4); /* 0x1703DD2B: push 4 */
    eax = 0x17001EDCu; /* 0x1703DD2D: mov eax, 0x17001edc */
    ecx = POP32_VAL(esp); /* 0x1703DD32: pop ecx */
    edi = ebp + (-0x14); /* 0x1703DD33: lea edi, [ebp - 0x14] */
    esi = eax; /* 0x1703DD36: mov esi, eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1703DD38: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x1703DD3A: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_1703DDA0; /* 0x1703DD3C: jne 0x1703dda0 */
L_1703DD3E:
    /* cmp MEM32(ebp + (-0x38)), edx */ /* 0x1703DD3E: cmp dword ptr [ebp - 0x38], edx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x38))); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1703E665; /* 0x1703DD41: jne 0x1703e665 */
L_1703DD47:
    eax = MEM32(ebp + (-0x28)); /* 0x1703DD47: mov eax, dword ptr [ebp - 0x28] */
    ecx = MEM32(eax); /* 0x1703DD4A: mov ecx, dword ptr [eax] */
    edx = ebp + (-0x58); /* 0x1703DD4C: lea edx, [ebp - 0x58] */
    PUSH32(esp, edx); /* 0x1703DD4F: push edx */
    PUSH32(esp, 0); /* 0x1703DD50: push 0 */
    PUSH32(esp, eax); /* 0x1703DD52: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x10)); /* 0x1703DD53: call dword ptr [ecx + 0x10] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1703DD56: mov ebx, eax */
    /* test ebx, ebx */ /* 0x1703DD58: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1703E678; /* 0x1703DD5A: jl 0x1703e678 */
L_1703DD60:
    /* cmp MEM32(ebp + (-0x58)), 0 */ /* 0x1703DD60: cmp dword ptr [ebp - 0x58], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x58))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703E665; /* 0x1703DD64: je 0x1703e665 */
L_1703DD6A:
    PUSH32(esp, MEM32(ebp + (-0x58))); /* 0x1703DD6A: push dword ptr [ebp - 0x58] */
    RECOMP_CALL(sub_1721B01C); /* 0x1703DD6D: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1703DD72: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1703DD74: pop ecx */
    MEM32(ebp + (-0x38)) = eax; /* 0x1703DD75: mov dword ptr [ebp - 0x38], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703E66C; /* 0x1703DD78: je 0x1703e66c */
L_1703DD7E:
    eax = MEM32(ebp + (-0x28)); /* 0x1703DD7E: mov eax, dword ptr [ebp - 0x28] */
    ecx = MEM32(eax); /* 0x1703DD81: mov ecx, dword ptr [eax] */
    edx = ebp + (-0x58); /* 0x1703DD83: lea edx, [ebp - 0x58] */
    PUSH32(esp, edx); /* 0x1703DD86: push edx */
    PUSH32(esp, MEM32(ebp + (-0x38))); /* 0x1703DD87: push dword ptr [ebp - 0x38] */
    PUSH32(esp, eax); /* 0x1703DD8A: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x10)); /* 0x1703DD8B: call dword ptr [ecx + 0x10] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1703DD8E: mov ebx, eax */
    /* test ebx, ebx */ /* 0x1703DD90: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x50)) = ebx; /* 0x1703DD92: mov dword ptr [ebp - 0x50], ebx */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1703E678; /* 0x1703DD95: jl 0x1703e678 */
L_1703DD9B:
    goto L_1703E5EB; /* 0x1703DD9B: jmp 0x1703e5eb */
L_1703DDA0:
    PUSH32(esp, 4); /* 0x1703DDA0: push 4 */
    esi = eax; /* 0x1703DDA2: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x1703DDA4: pop ecx */
    edi = ebp + (-0x14); /* 0x1703DDA5: lea edi, [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1703DDA8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x1703DDAA: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_1703E665; /* 0x1703DDAC: je 0x1703e665 */
L_1703DDB2:
    PUSH32(esp, 4); /* 0x1703DDB2: push 4 */
    ecx = POP32_VAL(esp); /* 0x1703DDB4: pop ecx */
    edi = ebp + (-0x14); /* 0x1703DDB5: lea edi, [ebp - 0x14] */
    esi = 0x17001F2Cu; /* 0x1703DDB8: mov esi, 0x17001f2c */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1703DDBD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x1703DDBF: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_1703E5EB; /* 0x1703DDC1: je 0x1703e5eb */
L_1703DDC7:
    PUSH32(esp, 4); /* 0x1703DDC7: push 4 */
    ecx = POP32_VAL(esp); /* 0x1703DDC9: pop ecx */
    edi = ebp + (-0x14); /* 0x1703DDCA: lea edi, [ebp - 0x14] */
    esi = 0x17001F1Cu; /* 0x1703DDCD: mov esi, 0x17001f1c */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1703DDD2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x1703DDD4: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_1703E5EB; /* 0x1703DDD6: jne 0x1703e5eb */
L_1703DDDC:
    eax = MEM32(ebp + (-0x28)); /* 0x1703DDDC: mov eax, dword ptr [ebp - 0x28] */
    ecx = MEM32(eax); /* 0x1703DDDF: mov ecx, dword ptr [eax] */
    edx = ebp + (-0x3C); /* 0x1703DDE1: lea edx, [ebp - 0x3c] */
    PUSH32(esp, edx); /* 0x1703DDE4: push edx */
    edx = ebp + (-0x128); /* 0x1703DDE5: lea edx, [ebp - 0x128] */
    PUSH32(esp, edx); /* 0x1703DDEB: push edx */
    PUSH32(esp, eax); /* 0x1703DDEC: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x18)); /* 0x1703DDED: call dword ptr [ecx + 0x18] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1703DDF0: mov ebx, eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1703DDF2: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ebx, edi */ /* 0x1703DDF4: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x50)) = ebx; /* 0x1703DDF6: mov dword ptr [ebp - 0x50], ebx */
    if (CMP_L(_flag_a, _flag_b)) goto L_1703E678; /* 0x1703DDF9: jl 0x1703e678 */
L_1703DDFF:
    eax = MEM32(ebp + (-0x3C)); /* 0x1703DDFF: mov eax, dword ptr [ebp - 0x3c] */
    ecx = MEM32(eax); /* 0x1703DE02: mov ecx, dword ptr [eax] */
    /* cmp ecx, edi */ /* 0x1703DE04: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = MEM32(eax + 0x4); /* 0x1703DE06: mov esi, dword ptr [eax + 4] */
    MEM32(ebp + (-0x34)) = esi; /* 0x1703DE09: mov dword ptr [ebp - 0x34], esi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1703DE9D; /* 0x1703DE0C: jne 0x1703de9d */
L_1703DE12:
    /* cmp MEM32(ebp + (-0x18)), edi */ /* 0x1703DE12: cmp dword ptr [ebp - 0x18], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1703E665; /* 0x1703DE15: jne 0x1703e665 */
L_1703DE1B:
    eax = esi + esi * 4; /* 0x1703DE1B: lea eax, [esi + esi*4] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1703DE1E: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1703DE1E: shl eax, 2 */
    PUSH32(esp, eax); /* 0x1703DE21: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1703DE22: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1703DE27: mov ebx, eax */
    /* cmp ebx, edi */ /* 0x1703DE29: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x1703DE2B: pop ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703DE41; /* 0x1703DE2C: je 0x1703de41 */
L_1703DE2E:
    PUSH32(esp, 0x1706E47Eu); /* 0x1703DE2E: push 0x1706e47e */
    PUSH32(esp, esi); /* 0x1703DE33: push esi */
    PUSH32(esp, 0x14u); /* 0x1703DE34: push 0x14 */
    PUSH32(esp, ebx); /* 0x1703DE36: push ebx */
    RECOMP_CALL(sub_1702C116); /* 0x1703DE37: call 0x1702c116 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x18)) = ebx; /* 0x1703DE3C: mov dword ptr [ebp - 0x18], ebx */
    goto L_1703DE44; /* 0x1703DE3F: jmp 0x1703de44 */
L_1703DE41:
    MEM32(ebp + (-0x18)) = edi; /* 0x1703DE41: mov dword ptr [ebp - 0x18], edi */
L_1703DE44:
    /* cmp MEM32(ebp + (-0x18)), edi */ /* 0x1703DE44: cmp dword ptr [ebp - 0x18], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703E66C; /* 0x1703DE47: je 0x1703e66c */
L_1703DE4D:
    ecx = MEM32(ebp + (-0x3C)); /* 0x1703DE4D: mov ecx, dword ptr [ebp - 0x3c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x1703DE50: add ecx, 8 */
    _flag_k = FK_ADD;
    /* cmp esi, edi */ /* 0x1703DE53: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x44)) = esi; /* 0x1703DE55: mov dword ptr [ebp - 0x44], esi */
    if (CMP_BE(_flag_a, _flag_b)) goto L_1703E5EB; /* 0x1703DE58: jbe 0x1703e5eb */
L_1703DE5E:
    eax = MEM32(ebp + (-0x18)); /* 0x1703DE5E: mov eax, dword ptr [ebp - 0x18] */
    edx = MEM32(ebp + (-0x34)); /* 0x1703DE61: mov edx, dword ptr [ebp - 0x34] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x1703DE64: add eax, 8 */
    _flag_k = FK_ADD;
L_1703DE67:
    esi = MEM32(ecx); /* 0x1703DE67: mov esi, dword ptr [ecx] */
    fp_push((double)(int32_t)MEM32(ecx)); /* 0x1703DE69: fild dword ptr [ecx] */
    /* test esi, esi */ /* 0x1703DE6B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1703DE75; /* 0x1703DE6D: jge 0x1703de75 */
L_1703DE6F:
    _st[0] += (double)*(float*)ADDR(0x1700142C); /* 0x1703DE6F: fadd dword ptr [0x1700142c] */
L_1703DE75:
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + (-0x8)) = _v; } /* 0x1703DE75: fstp dword ptr [eax - 8] */
    esi = MEM32(ecx + 0xC); /* 0x1703DE78: mov esi, dword ptr [ecx + 0xc] */
    MEM32(eax + (-0x4)) = esi; /* 0x1703DE7B: mov dword ptr [eax - 4], esi */
    esi = MEM32(ecx + 0x10); /* 0x1703DE7E: mov esi, dword ptr [ecx + 0x10] */
    MEM32(eax) = esi; /* 0x1703DE81: mov dword ptr [eax], esi */
    esi = MEM32(ecx + 0x14); /* 0x1703DE83: mov esi, dword ptr [ecx + 0x14] */
    MEM32(eax + 0x4) = esi; /* 0x1703DE86: mov dword ptr [eax + 4], esi */
    esi = MEM32(ecx + 0x8); /* 0x1703DE89: mov esi, dword ptr [ecx + 8] */
    MEM32(eax + 0x8) = esi; /* 0x1703DE8C: mov dword ptr [eax + 8], esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x18u; /* 0x1703DE8F: add ecx, 0x18 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x14u; /* 0x1703DE92: add eax, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1703DE95: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1703DE67; /* 0x1703DE96: jne 0x1703de67 */
L_1703DE98:
    goto L_1703E5EB; /* 0x1703DE98: jmp 0x1703e5eb */
L_1703DE9D:
    /* cmp ecx, 1 */ /* 0x1703DE9D: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1703DF1F; /* 0x1703DEA0: jne 0x1703df1f */
L_1703DEA2:
    /* cmp MEM32(ebp + (-0x1C)), edi */ /* 0x1703DEA2: cmp dword ptr [ebp - 0x1c], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1703E665; /* 0x1703DEA5: jne 0x1703e665 */
L_1703DEAB:
    eax = esi; /* 0x1703DEAB: mov eax, esi */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x1703DEAD: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x1703DEAD: shl eax, 4 */
    PUSH32(esp, eax); /* 0x1703DEB0: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1703DEB1: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1703DEB6: mov ebx, eax */
    /* cmp ebx, edi */ /* 0x1703DEB8: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x1703DEBA: pop ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703DED0; /* 0x1703DEBB: je 0x1703ded0 */
L_1703DEBD:
    PUSH32(esp, 0x1706E47Eu); /* 0x1703DEBD: push 0x1706e47e */
    PUSH32(esp, esi); /* 0x1703DEC2: push esi */
    PUSH32(esp, 0x10u); /* 0x1703DEC3: push 0x10 */
    PUSH32(esp, ebx); /* 0x1703DEC5: push ebx */
    RECOMP_CALL(sub_1702C116); /* 0x1703DEC6: call 0x1702c116 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x1C)) = ebx; /* 0x1703DECB: mov dword ptr [ebp - 0x1c], ebx */
    goto L_1703DED3; /* 0x1703DECE: jmp 0x1703ded3 */
L_1703DED0:
    MEM32(ebp + (-0x1C)) = edi; /* 0x1703DED0: mov dword ptr [ebp - 0x1c], edi */
L_1703DED3:
    /* cmp MEM32(ebp + (-0x1C)), edi */ /* 0x1703DED3: cmp dword ptr [ebp - 0x1c], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703E66C; /* 0x1703DED6: je 0x1703e66c */
L_1703DEDC:
    eax = MEM32(ebp + (-0x3C)); /* 0x1703DEDC: mov eax, dword ptr [ebp - 0x3c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x1703DEDF: add eax, 8 */
    _flag_k = FK_ADD;
    /* cmp esi, edi */ /* 0x1703DEE2: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x40)) = esi; /* 0x1703DEE4: mov dword ptr [ebp - 0x40], esi */
    if (CMP_BE(_flag_a, _flag_b)) goto L_1703E5EB; /* 0x1703DEE7: jbe 0x1703e5eb */
L_1703DEED:
    ecx = MEM32(ebp + (-0x1C)); /* 0x1703DEED: mov ecx, dword ptr [ebp - 0x1c] */
    ebx = MEM32(ebp + (-0x34)); /* 0x1703DEF0: mov ebx, dword ptr [ebp - 0x34] */
    edx = eax + 0x8; /* 0x1703DEF3: lea edx, [eax + 8] */
L_1703DEF6:
    esi = MEM32(eax); /* 0x1703DEF6: mov esi, dword ptr [eax] */
    fp_push((double)(int32_t)MEM32(eax)); /* 0x1703DEF8: fild dword ptr [eax] */
    /* test esi, esi */ /* 0x1703DEFA: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1703DF04; /* 0x1703DEFC: jge 0x1703df04 */
L_1703DEFE:
    _st[0] += (double)*(float*)ADDR(0x1700142C); /* 0x1703DEFE: fadd dword ptr [0x1700142c] */
L_1703DF04:
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx) = _v; } /* 0x1703DF04: fstp dword ptr [ecx] */
    edi = ecx + 0x4; /* 0x1703DF06: lea edi, [ecx + 4] */
    esi = edx; /* 0x1703DF09: mov esi, edx */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703DF0B: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703DF0C: movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x14u; /* 0x1703DF0D: add eax, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x14u; /* 0x1703DF10: add edx, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x10u; /* 0x1703DF13: add ecx, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x1703DF16: dec ebx */
    _flag_k = FK_DEC;
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703DF17: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1703DEF6; /* 0x1703DF18: jne 0x1703def6 */
L_1703DF1A:
    goto L_1703E5EB; /* 0x1703DF1A: jmp 0x1703e5eb */
L_1703DF1F:
    /* cmp ecx, 2 */ /* 0x1703DF1F: cmp ecx, 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1703DFA1; /* 0x1703DF22: jne 0x1703dfa1 */
L_1703DF24:
    /* cmp MEM32(ebp + (-0x20)), edi */ /* 0x1703DF24: cmp dword ptr [ebp - 0x20], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1703E665; /* 0x1703DF27: jne 0x1703e665 */
L_1703DF2D:
    eax = esi; /* 0x1703DF2D: mov eax, esi */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x1703DF2F: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x1703DF2F: shl eax, 4 */
    PUSH32(esp, eax); /* 0x1703DF32: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1703DF33: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1703DF38: mov ebx, eax */
    /* cmp ebx, edi */ /* 0x1703DF3A: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x1703DF3C: pop ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703DF52; /* 0x1703DF3D: je 0x1703df52 */
L_1703DF3F:
    PUSH32(esp, 0x1706E47Eu); /* 0x1703DF3F: push 0x1706e47e */
    PUSH32(esp, esi); /* 0x1703DF44: push esi */
    PUSH32(esp, 0x10u); /* 0x1703DF45: push 0x10 */
    PUSH32(esp, ebx); /* 0x1703DF47: push ebx */
    RECOMP_CALL(sub_1702C116); /* 0x1703DF48: call 0x1702c116 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x20)) = ebx; /* 0x1703DF4D: mov dword ptr [ebp - 0x20], ebx */
    goto L_1703DF55; /* 0x1703DF50: jmp 0x1703df55 */
L_1703DF52:
    MEM32(ebp + (-0x20)) = edi; /* 0x1703DF52: mov dword ptr [ebp - 0x20], edi */
L_1703DF55:
    /* cmp MEM32(ebp + (-0x20)), edi */ /* 0x1703DF55: cmp dword ptr [ebp - 0x20], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703E66C; /* 0x1703DF58: je 0x1703e66c */
L_1703DF5E:
    eax = MEM32(ebp + (-0x3C)); /* 0x1703DF5E: mov eax, dword ptr [ebp - 0x3c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x1703DF61: add eax, 8 */
    _flag_k = FK_ADD;
    /* cmp esi, edi */ /* 0x1703DF64: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x54)) = esi; /* 0x1703DF66: mov dword ptr [ebp - 0x54], esi */
    if (CMP_BE(_flag_a, _flag_b)) goto L_1703E5EB; /* 0x1703DF69: jbe 0x1703e5eb */
L_1703DF6F:
    ecx = MEM32(ebp + (-0x20)); /* 0x1703DF6F: mov ecx, dword ptr [ebp - 0x20] */
    ebx = MEM32(ebp + (-0x34)); /* 0x1703DF72: mov ebx, dword ptr [ebp - 0x34] */
    edx = eax + 0x8; /* 0x1703DF75: lea edx, [eax + 8] */
L_1703DF78:
    esi = MEM32(eax); /* 0x1703DF78: mov esi, dword ptr [eax] */
    fp_push((double)(int32_t)MEM32(eax)); /* 0x1703DF7A: fild dword ptr [eax] */
    /* test esi, esi */ /* 0x1703DF7C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1703DF86; /* 0x1703DF7E: jge 0x1703df86 */
L_1703DF80:
    _st[0] += (double)*(float*)ADDR(0x1700142C); /* 0x1703DF80: fadd dword ptr [0x1700142c] */
L_1703DF86:
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx) = _v; } /* 0x1703DF86: fstp dword ptr [ecx] */
    edi = ecx + 0x4; /* 0x1703DF88: lea edi, [ecx + 4] */
    esi = edx; /* 0x1703DF8B: mov esi, edx */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703DF8D: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703DF8E: movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x14u; /* 0x1703DF8F: add eax, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x14u; /* 0x1703DF92: add edx, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x10u; /* 0x1703DF95: add ecx, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x1703DF98: dec ebx */
    _flag_k = FK_DEC;
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703DF99: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1703DF78; /* 0x1703DF9A: jne 0x1703df78 */
L_1703DF9C:
    goto L_1703E5EB; /* 0x1703DF9C: jmp 0x1703e5eb */
L_1703DFA1:
    /* cmp ecx, 4 */ /* 0x1703DFA1: cmp ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1703E5EB; /* 0x1703DFA4: jne 0x1703e5eb */
L_1703DFAA:
    fp_push(1.0); /* 0x1703DFAA: fld1  */
    esi = ebp + (-0xF0); /* 0x1703DFAC: lea esi, [ebp - 0xf0] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xF0)) = _v; } /* 0x1703DFB2: fstp dword ptr [ebp - 0xf0] */
    edi = ebp + (-0x14C); /* 0x1703DFB8: lea edi, [ebp - 0x14c] */
    fp_push(0.0); /* 0x1703DFBE: fldz  */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1703DFC0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x20)), eax */ /* 0x1703DFC2: cmp dword ptr [ebp - 0x20], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xEC)) = _v; } /* 0x1703DFC5: fstp dword ptr [ebp - 0xec] */
    fp_push(0.0); /* 0x1703DFCB: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xE8)) = _v; } /* 0x1703DFCD: fstp dword ptr [ebp - 0xe8] */
    fp_push(0.0); /* 0x1703DFD3: fldz  */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703DFD5: movsd dword ptr es:[edi], dword ptr [esi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xD8)) = _v; } /* 0x1703DFD6: fstp dword ptr [ebp - 0xd8] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703DFDC: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_push(1.0); /* 0x1703DFDD: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xD4)) = _v; } /* 0x1703DFDF: fstp dword ptr [ebp - 0xd4] */
    fp_push(0.0); /* 0x1703DFE5: fldz  */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703DFE7: movsd dword ptr es:[edi], dword ptr [esi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xD0)) = _v; } /* 0x1703DFE8: fstp dword ptr [ebp - 0xd0] */
    fp_push(0.0); /* 0x1703DFEE: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x108)) = _v; } /* 0x1703DFF0: fstp dword ptr [ebp - 0x108] */
    esi = ebp + (-0xD8); /* 0x1703DFF6: lea esi, [ebp - 0xd8] */
    edi = ebp + (-0x140); /* 0x1703DFFC: lea edi, [ebp - 0x140] */
    fp_push(0.0); /* 0x1703E002: fldz  */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703E004: movsd dword ptr es:[edi], dword ptr [esi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x104)) = _v; } /* 0x1703E005: fstp dword ptr [ebp - 0x104] */
    fp_push(1.0); /* 0x1703E00B: fld1  */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703E00D: movsd dword ptr es:[edi], dword ptr [esi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x100)) = _v; } /* 0x1703E00E: fstp dword ptr [ebp - 0x100] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703E014: movsd dword ptr es:[edi], dword ptr [esi] */
    esi = ebp + (-0x108); /* 0x1703E015: lea esi, [ebp - 0x108] */
    edi = ebp + (-0x134); /* 0x1703E01B: lea edi, [ebp - 0x134] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703E021: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703E022: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703E023: movsd dword ptr es:[edi], dword ptr [esi] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1703E665; /* 0x1703E024: jne 0x1703e665 */
L_1703E02A:
    /* cmp MEM32(ebp + (-0x1C)), eax */ /* 0x1703E02A: cmp dword ptr [ebp - 0x1c], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1703E665; /* 0x1703E02D: jne 0x1703e665 */
L_1703E033:
    /* cmp MEM32(ebp + (-0x18)), eax */ /* 0x1703E033: cmp dword ptr [ebp - 0x18], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1703E665; /* 0x1703E036: jne 0x1703e665 */
L_1703E03C:
    esi = MEM32(ebp + (-0x34)); /* 0x1703E03C: mov esi, dword ptr [ebp - 0x34] */
    edi = esi; /* 0x1703E03F: mov edi, esi */
    if (4u) _cf = (((edi) >> 28) & 1u); /* 0x1703E041: shl edi, 4 */
    if (4u) { _flag_a = recomp_flags_pack((edi << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 4u; /* 0x1703E041: shl edi, 4 */
    PUSH32(esp, edi); /* 0x1703E044: push edi */
    RECOMP_CALL(sub_1721B01C); /* 0x1703E045: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1703E04A: mov ebx, eax */
    /* test ebx, ebx */ /* 0x1703E04C: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1703E04E: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703E066; /* 0x1703E04F: je 0x1703e066 */
L_1703E051:
    PUSH32(esp, 0x1706E47Eu); /* 0x1703E051: push 0x1706e47e */
    PUSH32(esp, esi); /* 0x1703E056: push esi */
    PUSH32(esp, 0x10u); /* 0x1703E057: push 0x10 */
    PUSH32(esp, ebx); /* 0x1703E059: push ebx */
    RECOMP_CALL(sub_1702C116); /* 0x1703E05A: call 0x1702c116 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x20)) = ebx; /* 0x1703E05F: mov dword ptr [ebp - 0x20], ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1703E062: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1703E06B; /* 0x1703E064: jmp 0x1703e06b */
L_1703E066:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1703E066: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x20)) = ebx; /* 0x1703E068: mov dword ptr [ebp - 0x20], ebx */
L_1703E06B:
    PUSH32(esp, edi); /* 0x1703E06B: push edi */
    RECOMP_CALL(sub_1721B01C); /* 0x1703E06C: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1703E071: mov edi, eax */
    /* cmp edi, ebx */ /* 0x1703E073: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x1703E075: pop ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703E08B; /* 0x1703E076: je 0x1703e08b */
L_1703E078:
    PUSH32(esp, 0x1706E47Eu); /* 0x1703E078: push 0x1706e47e */
    PUSH32(esp, esi); /* 0x1703E07D: push esi */
    PUSH32(esp, 0x10u); /* 0x1703E07E: push 0x10 */
    PUSH32(esp, edi); /* 0x1703E080: push edi */
    RECOMP_CALL(sub_1702C116); /* 0x1703E081: call 0x1702c116 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x1C)) = edi; /* 0x1703E086: mov dword ptr [ebp - 0x1c], edi */
    goto L_1703E08E; /* 0x1703E089: jmp 0x1703e08e */
L_1703E08B:
    MEM32(ebp + (-0x1C)) = ebx; /* 0x1703E08B: mov dword ptr [ebp - 0x1c], ebx */
L_1703E08E:
    eax = esi + esi * 4; /* 0x1703E08E: lea eax, [esi + esi*4] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1703E091: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1703E091: shl eax, 2 */
    PUSH32(esp, eax); /* 0x1703E094: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1703E095: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1703E09A: mov edi, eax */
    /* cmp edi, ebx */ /* 0x1703E09C: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x1703E09E: pop ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703E0B4; /* 0x1703E09F: je 0x1703e0b4 */
L_1703E0A1:
    PUSH32(esp, 0x1706E47Eu); /* 0x1703E0A1: push 0x1706e47e */
    PUSH32(esp, esi); /* 0x1703E0A6: push esi */
    PUSH32(esp, 0x14u); /* 0x1703E0A7: push 0x14 */
    PUSH32(esp, edi); /* 0x1703E0A9: push edi */
    RECOMP_CALL(sub_1702C116); /* 0x1703E0AA: call 0x1702c116 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x18)) = edi; /* 0x1703E0AF: mov dword ptr [ebp - 0x18], edi */
    goto L_1703E0B7; /* 0x1703E0B2: jmp 0x1703e0b7 */
L_1703E0B4:
    MEM32(ebp + (-0x18)) = ebx; /* 0x1703E0B4: mov dword ptr [ebp - 0x18], ebx */
L_1703E0B7:
    /* cmp MEM32(ebp + (-0x20)), ebx */ /* 0x1703E0B7: cmp dword ptr [ebp - 0x20], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703E66C; /* 0x1703E0BA: je 0x1703e66c */
L_1703E0C0:
    /* cmp MEM32(ebp + (-0x1C)), ebx */ /* 0x1703E0C0: cmp dword ptr [ebp - 0x1c], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703E66C; /* 0x1703E0C3: je 0x1703e66c */
L_1703E0C9:
    /* cmp MEM32(ebp + (-0x18)), ebx */ /* 0x1703E0C9: cmp dword ptr [ebp - 0x18], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703E66C; /* 0x1703E0CC: je 0x1703e66c */
L_1703E0D2:
    /* cmp esi, ebx */ /* 0x1703E0D2: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x54)) = esi; /* 0x1703E0D4: mov dword ptr [ebp - 0x54], esi */
    MEM32(ebp + (-0x40)) = esi; /* 0x1703E0D7: mov dword ptr [ebp - 0x40], esi */
    MEM32(ebp + (-0x44)) = esi; /* 0x1703E0DA: mov dword ptr [ebp - 0x44], esi */
    MEM32(ebp + (-0x6C)) = ebx; /* 0x1703E0DD: mov dword ptr [ebp - 0x6c], ebx */
    if (CMP_BE(_flag_a, _flag_b)) goto L_1703E573; /* 0x1703E0E0: jbe 0x1703e573 */
L_1703E0E6:
    ecx = MEM32(ebp + (-0x20)); /* 0x1703E0E6: mov ecx, dword ptr [ebp - 0x20] */
    eax = ebp + (-0xC0); /* 0x1703E0E9: lea eax, [ebp - 0xc0] */
    MEM32(ebp + (-0x80)) = eax; /* 0x1703E0EF: mov dword ptr [ebp - 0x80], eax */
    eax = ebp + (-0xB0); /* 0x1703E0F2: lea eax, [ebp - 0xb0] */
    MEM32(ebp + (-0x7C)) = eax; /* 0x1703E0F8: mov dword ptr [ebp - 0x7c], eax */
    eax = ebp + (-0xA0); /* 0x1703E0FB: lea eax, [ebp - 0xa0] */
    MEM32(ebp + (-0x78)) = eax; /* 0x1703E101: mov dword ptr [ebp - 0x78], eax */
    eax = MEM32(ebp + (-0x18)); /* 0x1703E104: mov eax, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1703E107: add eax, 4 */
    _flag_k = FK_ADD;
    edx = ecx + 0xC; /* 0x1703E10A: lea edx, [ecx + 0xc] */
    MEM32(ebp + (-0x60)) = edx; /* 0x1703E10D: mov dword ptr [ebp - 0x60], edx */
    edx = MEM32(ebp + (-0x3C)); /* 0x1703E110: mov edx, dword ptr [ebp - 0x3c] */
    MEM32(ebp + (-0x4C)) = eax; /* 0x1703E113: mov dword ptr [ebp - 0x4c], eax */
    eax = MEM32(ebp + (-0x1C)); /* 0x1703E116: mov eax, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x44u; /* 0x1703E119: add edx, 0x44 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x5C)) = ecx; /* 0x1703E11C: mov dword ptr [ebp - 0x5c], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x5C))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + (-0x5C)) = MEM32(ebp + (-0x5C)) - eax; /* 0x1703E11F: sub dword ptr [ebp - 0x5c], eax */
    _flag_k = FK_CMP;
    ebx = eax + 0x4; /* 0x1703E122: lea ebx, [eax + 4] */
    eax = MEM32(ebp + (-0x34)); /* 0x1703E125: mov eax, dword ptr [ebp - 0x34] */
    MEM32(ebp + (-0x64)) = edx; /* 0x1703E128: mov dword ptr [ebp - 0x64], edx */
    MEM32(ebp + (-0x70)) = eax; /* 0x1703E12B: mov dword ptr [ebp - 0x70], eax */
L_1703E12E:
    eax = MEM32(ebp + (-0x64)); /* 0x1703E12E: mov eax, dword ptr [ebp - 0x64] */
    ecx = MEM32(eax + (-0x3C)); /* 0x1703E131: mov ecx, dword ptr [eax - 0x3c] */
    fp_push((double)(int32_t)MEM32(eax + (-0x3C))); /* 0x1703E134: fild dword ptr [eax - 0x3c] */
    /* test ecx, ecx */ /* 0x1703E137: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1703E141; /* 0x1703E139: jge 0x1703e141 */
L_1703E13B:
    _st[0] += (double)*(float*)ADDR(0x1700142C); /* 0x1703E13B: fadd dword ptr [0x1700142c] */
L_1703E141:
    ecx = MEM32(ebp + (-0x60)); /* 0x1703E141: mov ecx, dword ptr [ebp - 0x60] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + (-0xC)) = _v; } /* 0x1703E144: fstp dword ptr [ecx - 0xc] */
    edx = MEM32(eax + (-0x3C)); /* 0x1703E147: mov edx, dword ptr [eax - 0x3c] */
    /* test edx, edx */ /* 0x1703E14A: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    fp_push((double)(int32_t)MEM32(eax + (-0x3C))); /* 0x1703E14C: fild dword ptr [eax - 0x3c] */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1703E157; /* 0x1703E14F: jge 0x1703e157 */
L_1703E151:
    _st[0] += (double)*(float*)ADDR(0x1700142C); /* 0x1703E151: fadd dword ptr [0x1700142c] */
L_1703E157:
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx + (-0x4)) = _v; } /* 0x1703E157: fstp dword ptr [ebx - 4] */
    edx = MEM32(eax + (-0x3C)); /* 0x1703E15A: mov edx, dword ptr [eax - 0x3c] */
    /* test edx, edx */ /* 0x1703E15D: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    fp_push((double)(int32_t)MEM32(eax + (-0x3C))); /* 0x1703E15F: fild dword ptr [eax - 0x3c] */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1703E16A; /* 0x1703E162: jge 0x1703e16a */
L_1703E164:
    _st[0] += (double)*(float*)ADDR(0x1700142C); /* 0x1703E164: fadd dword ptr [0x1700142c] */
L_1703E16A:
    edx = MEM32(ebp + (-0x4C)); /* 0x1703E16A: mov edx, dword ptr [ebp - 0x4c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx + (-0x4)) = _v; } /* 0x1703E16D: fstp dword ptr [edx - 4] */
    edx = MEM32(eax + (-0x4)); /* 0x1703E170: mov edx, dword ptr [eax - 4] */
    MEM32(ecx + (-0x8)) = edx; /* 0x1703E173: mov dword ptr [ecx - 8], edx */
    fp_push(*(float*)&MEM32(eax)); /* 0x1703E176: fld dword ptr [eax] */
    edx = MEM32(ebp + (-0x5C)); /* 0x1703E178: mov edx, dword ptr [ebp - 0x5c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx + ebx + 0x4) = _v; } /* 0x1703E17B: fstp dword ptr [edx + ebx + 4] */
    edx = MEM32(eax + 0x4); /* 0x1703E17F: mov edx, dword ptr [eax + 4] */
    MEM32(ecx) = edx; /* 0x1703E182: mov dword ptr [ecx], edx */
    fp_push(0.0); /* 0x1703E184: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x88)) = _v; } /* 0x1703E186: fstp dword ptr [ebp - 0x88] */
    esi = eax + (-0x34); /* 0x1703E18C: lea esi, [eax - 0x34] */
    fp_push(0.0); /* 0x1703E18F: fldz  */
    edi = ebp + (-0xC0); /* 0x1703E191: lea edi, [ebp - 0xc0] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8C)) = _v; } /* 0x1703E197: fstp dword ptr [ebp - 0x8c] */
    fp_push(0.0); /* 0x1703E19D: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x90)) = _v; } /* 0x1703E19F: fstp dword ptr [ebp - 0x90] */
    fp_push(0.0); /* 0x1703E1A5: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x94)) = _v; } /* 0x1703E1A7: fstp dword ptr [ebp - 0x94] */
    fp_push(0.0); /* 0x1703E1AD: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x9C)) = _v; } /* 0x1703E1AF: fstp dword ptr [ebp - 0x9c] */
    fp_push(0.0); /* 0x1703E1B5: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xA0)) = _v; } /* 0x1703E1B7: fstp dword ptr [ebp - 0xa0] */
    fp_push(0.0); /* 0x1703E1BD: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xA4)) = _v; } /* 0x1703E1BF: fstp dword ptr [ebp - 0xa4] */
    fp_push(0.0); /* 0x1703E1C5: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xA8)) = _v; } /* 0x1703E1C7: fstp dword ptr [ebp - 0xa8] */
    fp_push(0.0); /* 0x1703E1CD: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xB0)) = _v; } /* 0x1703E1CF: fstp dword ptr [ebp - 0xb0] */
    fp_push(0.0); /* 0x1703E1D5: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xB4)) = _v; } /* 0x1703E1D7: fstp dword ptr [ebp - 0xb4] */
    fp_push(0.0); /* 0x1703E1DD: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xB8)) = _v; } /* 0x1703E1DF: fstp dword ptr [ebp - 0xb8] */
    fp_push(0.0); /* 0x1703E1E5: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xBC)) = _v; } /* 0x1703E1E7: fstp dword ptr [ebp - 0xbc] */
    fp_push(1.0); /* 0x1703E1ED: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x84)) = _v; } /* 0x1703E1EF: fstp dword ptr [ebp - 0x84] */
    fp_push(1.0); /* 0x1703E1F5: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x98)) = _v; } /* 0x1703E1F7: fstp dword ptr [ebp - 0x98] */
    fp_push(1.0); /* 0x1703E1FD: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xAC)) = _v; } /* 0x1703E1FF: fstp dword ptr [ebp - 0xac] */
    fp_push(1.0); /* 0x1703E205: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC0)) = _v; } /* 0x1703E207: fstp dword ptr [ebp - 0xc0] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703E20D: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703E20E: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703E20F: movsd dword ptr es:[edi], dword ptr [esi] */
    esi = eax + (-0x24); /* 0x1703E210: lea esi, [eax - 0x24] */
    edi = ebp + (-0xB0); /* 0x1703E213: lea edi, [ebp - 0xb0] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703E219: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703E21A: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703E21B: movsd dword ptr es:[edi], dword ptr [esi] */
    esi = eax + (-0x14); /* 0x1703E21C: lea esi, [eax - 0x14] */
    edi = ebp + (-0xA0); /* 0x1703E21F: lea edi, [ebp - 0xa0] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703E225: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703E226: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703E227: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_push(*(float*)&MEM32(ebp + (-0xC0))); /* 0x1703E228: fld dword ptr [ebp - 0xc0] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xC0)); /* 0x1703E22E: fmul dword ptr [ebp - 0xc0] */
    fp_push(*(float*)&MEM32(ebp + (-0xBC))); /* 0x1703E234: fld dword ptr [ebp - 0xbc] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xBC)); /* 0x1703E23A: fmul dword ptr [ebp - 0xbc] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1703E240: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0xB8))); /* 0x1703E242: fld dword ptr [ebp - 0xb8] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xB8)); /* 0x1703E248: fmul dword ptr [ebp - 0xb8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1703E24E: faddp st(1) */
    _st[0] = sqrt(_st[0]); /* 0x1703E250: fsqrt  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx) = _v; } /* 0x1703E252: fstp dword ptr [ebx] */
    fp_push(*(float*)&MEM32(ebp + (-0xAC))); /* 0x1703E254: fld dword ptr [ebp - 0xac] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xAC)); /* 0x1703E25A: fmul dword ptr [ebp - 0xac] */
    fp_push(*(float*)&MEM32(ebp + (-0xB0))); /* 0x1703E260: fld dword ptr [ebp - 0xb0] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xB0)); /* 0x1703E266: fmul dword ptr [ebp - 0xb0] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1703E26C: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0xA8))); /* 0x1703E26E: fld dword ptr [ebp - 0xa8] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xA8)); /* 0x1703E274: fmul dword ptr [ebp - 0xa8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1703E27A: faddp st(1) */
    _st[0] = sqrt(_st[0]); /* 0x1703E27C: fsqrt  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx + 0x4) = _v; } /* 0x1703E27E: fstp dword ptr [ebx + 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x98))); /* 0x1703E281: fld dword ptr [ebp - 0x98] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x98)); /* 0x1703E287: fmul dword ptr [ebp - 0x98] */
    fp_push(*(float*)&MEM32(ebp + (-0x9C))); /* 0x1703E28D: fld dword ptr [ebp - 0x9c] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x9C)); /* 0x1703E293: fmul dword ptr [ebp - 0x9c] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1703E299: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0xA0))); /* 0x1703E29B: fld dword ptr [ebp - 0xa0] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xA0)); /* 0x1703E2A1: fmul dword ptr [ebp - 0xa0] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1703E2A7: faddp st(1) */
    _st[0] = sqrt(_st[0]); /* 0x1703E2A9: fsqrt  */
    { float _v = (float)_st[0]; *(float*)ADDR(ebx + 0x8) = _v; } /* 0x1703E2AB: fst dword ptr [ebx + 8] */
    fp_push(*(float*)&MEM32(ebx)); /* 0x1703E2AE: fld dword ptr [ebx] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebx + 0x4)); /* 0x1703E2B0: fcomp dword ptr [ebx + 4] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1703E2B3: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1703E2B5: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1703E2F5; /* 0x1703E2B8: jp 0x1703e2f5 */
L_1703E2BA:
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebx + 0x4)); /* 0x1703E2BA: fcom dword ptr [ebx + 4] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1703E2BD: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1703E2BF: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1703E2CF; /* 0x1703E2C2: jne 0x1703e2cf */
L_1703E2C4:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x30))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x30)) = MEM32(ebp + (-0x30)) & 0; /* 0x1703E2C4: and dword ptr [ebp - 0x30], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1703E2C8: fstp st(0) */
    PUSH32(esp, 2); /* 0x1703E2CA: push 2 */
    edx = POP32_VAL(esp); /* 0x1703E2CC: pop edx */
    goto L_1703E32C; /* 0x1703E2CD: jmp 0x1703e32c */
L_1703E2CF:
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebx)); /* 0x1703E2CF: fcomp dword ptr [ebx] */
    fp_pop();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1703E2D1: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1703E2D3: inc edx */
    _flag_k = FK_INC;
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1703E2D4: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1703E2D6: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1703E2E8; /* 0x1703E2D9: jne 0x1703e2e8 */
L_1703E2DB:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x30))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x30)) = MEM32(ebp + (-0x30)) & 0; /* 0x1703E2DB: and dword ptr [ebp - 0x30], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x24)) = 2; /* 0x1703E2DF: mov dword ptr [ebp - 0x24], 2 */
    goto L_1703E333; /* 0x1703E2E6: jmp 0x1703e333 */
L_1703E2E8:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x24)) = MEM32(ebp + (-0x24)) & 0; /* 0x1703E2E8: and dword ptr [ebp - 0x24], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x30)) = 2; /* 0x1703E2EC: mov dword ptr [ebp - 0x30], 2 */
    goto L_1703E333; /* 0x1703E2F3: jmp 0x1703e333 */
L_1703E2F5:
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebx)); /* 0x1703E2F5: fcom dword ptr [ebx] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1703E2F7: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1703E2F9: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1703E310; /* 0x1703E2FC: jne 0x1703e310 */
L_1703E2FE:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x24)) = MEM32(ebp + (-0x24)) & 0; /* 0x1703E2FE: and dword ptr [ebp - 0x24], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1703E302: fstp st(0) */
    PUSH32(esp, 2); /* 0x1703E304: push 2 */
    edx = POP32_VAL(esp); /* 0x1703E306: pop edx */
L_1703E307:
    MEM32(ebp + (-0x30)) = 1; /* 0x1703E307: mov dword ptr [ebp - 0x30], 1 */
    goto L_1703E333; /* 0x1703E30E: jmp 0x1703e333 */
L_1703E310:
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebx + 0x4)); /* 0x1703E310: fcomp dword ptr [ebx + 4] */
    fp_pop();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1703E313: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1703E315: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1703E317: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1703E325; /* 0x1703E31A: jne 0x1703e325 */
L_1703E31C:
    MEM32(ebp + (-0x24)) = 2; /* 0x1703E31C: mov dword ptr [ebp - 0x24], 2 */
    RECOMP_BACKEDGE();
    goto L_1703E307; /* 0x1703E323: jmp 0x1703e307 */
L_1703E325:
    MEM32(ebp + (-0x30)) = 2; /* 0x1703E325: mov dword ptr [ebp - 0x30], 2 */
L_1703E32C:
    MEM32(ebp + (-0x24)) = 1; /* 0x1703E32C: mov dword ptr [ebp - 0x24], 1 */
L_1703E333:
    ecx = edx; /* 0x1703E333: mov ecx, edx */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x1703E335: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x1703E335: shl ecx, 2 */
    eax = ecx + ebx; /* 0x1703E338: lea eax, [ecx + ebx] */
    fp_push(*(float*)&MEM32(eax)); /* 0x1703E33B: fld dword ptr [eax] */
    MEM32(ebp + (-0x2C)) = eax; /* 0x1703E33D: mov dword ptr [ebp - 0x2c], eax */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(0x17001F4C)); /* 0x1703E340: fcomp dword ptr [0x17001f4c] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1703E346: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1703E348: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1703E35E; /* 0x1703E34B: jp 0x1703e35e */
L_1703E34D:
    edi = MEM32(ebp + ecx + (-0x80)); /* 0x1703E34D: mov edi, dword ptr [ebp + ecx - 0x80] */
    esi = edx + edx * 2; /* 0x1703E351: lea esi, [edx + edx*2] */
    esi = ebp + esi * 4 + (-0x14C); /* 0x1703E354: lea esi, [ebp + esi*4 - 0x14c] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703E35B: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703E35C: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703E35D: movsd dword ptr es:[edi], dword ptr [esi] */
L_1703E35E:
    esi = ebp + ecx + (-0x80); /* 0x1703E35E: lea esi, [ebp + ecx - 0x80] */
    eax = MEM32(esi); /* 0x1703E362: mov eax, dword ptr [esi] */
    PUSH32(esp, eax); /* 0x1703E364: push eax */
    PUSH32(esp, eax); /* 0x1703E365: push eax */
    MEM32(ebp + (-0x68)) = esi; /* 0x1703E366: mov dword ptr [ebp - 0x68], esi */
    RECOMP_CALL(sub_17040B68); /* 0x1703E369: call 0x17040b68 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x24)); /* 0x1703E36E: mov edx, dword ptr [ebp - 0x24] */
    if (2u) _cf = (((edx) >> 30) & 1u); /* 0x1703E371: shl edx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 2u; /* 0x1703E371: shl edx, 2 */
    fp_push(*(float*)&MEM32(edx + ebx)); /* 0x1703E374: fld dword ptr [edx + ebx] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(0x17001F4C)); /* 0x1703E377: fcomp dword ptr [0x17001f4c] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1703E37D: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1703E37F: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1703E43B; /* 0x1703E382: jp 0x1703e43b */
L_1703E388:
    ecx = MEM32(esi); /* 0x1703E388: mov ecx, dword ptr [esi] */
    fp_push(*(float*)&MEM32(ecx)); /* 0x1703E38A: fld dword ptr [ecx] */
    _st[0] = fabs(_st[0]); /* 0x1703E38C: fabs  */
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x1703E38E: fld dword ptr [ecx + 4] */
    _st[0] = fabs(_st[0]); /* 0x1703E391: fabs  */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0xCC)) = _v; } /* 0x1703E393: fst dword ptr [ebp - 0xcc] */
    fp_push(*(float*)&MEM32(ecx + 0x8)); /* 0x1703E399: fld dword ptr [ecx + 8] */
    _st[0] = fabs(_st[0]); /* 0x1703E39C: fabs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x1703E39E: fstp dword ptr [ebp - 0x24] */
    fp_push(_st[1]); /* 0x1703E3A1: fld st(1) */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1703E3A3: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1703E3A5: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1703E3A7: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1703E3C8; /* 0x1703E3AA: jp 0x1703e3c8 */
L_1703E3AC:
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + (-0x24))); /* 0x1703E3AC: fcomp dword ptr [ebp - 0x24] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1703E3AF: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1703E3B1: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1703E3BA; /* 0x1703E3B4: jp 0x1703e3ba */
L_1703E3B6:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1703E3B6: fstp st(0) */
    goto L_1703E3C4; /* 0x1703E3B8: jmp 0x1703e3c4 */
L_1703E3BA:
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + (-0x24))); /* 0x1703E3BA: fcomp dword ptr [ebp - 0x24] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1703E3BD: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1703E3BF: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1703E3E9; /* 0x1703E3C2: jp 0x1703e3e9 */
L_1703E3C4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1703E3C4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1703E3EC; /* 0x1703E3C6: jmp 0x1703e3ec */
L_1703E3C8:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1703E3C8: fstp st(0) */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + (-0x24))); /* 0x1703E3CA: fcomp dword ptr [ebp - 0x24] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1703E3CD: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1703E3CF: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1703E3D9; /* 0x1703E3D2: jp 0x1703e3d9 */
L_1703E3D4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1703E3D4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1703E3D6: inc eax */
    _flag_k = FK_INC;
    goto L_1703E3EC; /* 0x1703E3D7: jmp 0x1703e3ec */
L_1703E3D9:
    fp_push(*(float*)&MEM32(ebp + (-0xCC))); /* 0x1703E3D9: fld dword ptr [ebp - 0xcc] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + (-0x24))); /* 0x1703E3DF: fcomp dword ptr [ebp - 0x24] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1703E3E2: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1703E3E4: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_1703E3D4; /* 0x1703E3E7: jnp 0x1703e3d4 */
L_1703E3E9:
    PUSH32(esp, 2); /* 0x1703E3E9: push 2 */
    eax = POP32_VAL(esp); /* 0x1703E3EB: pop eax */
L_1703E3EC:
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x1703E3EC: fld dword ptr [ecx + 4] */
    eax = eax + eax * 2; /* 0x1703E3EF: lea eax, [eax + eax*2] */
    eax = ebp + eax * 4 + (-0x14C); /* 0x1703E3F2: lea eax, [ebp + eax*4 - 0x14c] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x8); /* 0x1703E3F9: fmul dword ptr [eax + 8] */
    edi = MEM32(ebp + edx + (-0x80)); /* 0x1703E3FC: mov edi, dword ptr [ebp + edx - 0x80] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x1703E400: fld dword ptr [eax + 4] */
    esi = ebp + (-0xFC); /* 0x1703E403: lea esi, [ebp - 0xfc] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x8); /* 0x1703E409: fmul dword ptr [ecx + 8] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x1703E40C: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xFC)) = _v; } /* 0x1703E40E: fstp dword ptr [ebp - 0xfc] */
    fp_push(*(float*)&MEM32(ecx + 0x8)); /* 0x1703E414: fld dword ptr [ecx + 8] */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x1703E417: fmul dword ptr [eax] */
    fp_push(*(float*)&MEM32(ecx)); /* 0x1703E419: fld dword ptr [ecx] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x8); /* 0x1703E41B: fmul dword ptr [eax + 8] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x1703E41E: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xF8)) = _v; } /* 0x1703E420: fstp dword ptr [ebp - 0xf8] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x1703E426: fld dword ptr [eax + 4] */
    _st[0] *= (double)*(float*)ADDR(ecx); /* 0x1703E429: fmul dword ptr [ecx] */
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x1703E42B: fld dword ptr [ecx + 4] */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x1703E42E: fmul dword ptr [eax] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x1703E430: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xF4)) = _v; } /* 0x1703E432: fstp dword ptr [ebp - 0xf4] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703E438: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703E439: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703E43A: movsd dword ptr es:[edi], dword ptr [esi] */
L_1703E43B:
    esi = ebp + edx + (-0x80); /* 0x1703E43B: lea esi, [ebp + edx - 0x80] */
    eax = MEM32(esi); /* 0x1703E43F: mov eax, dword ptr [esi] */
    PUSH32(esp, eax); /* 0x1703E441: push eax */
    PUSH32(esp, eax); /* 0x1703E442: push eax */
    RECOMP_CALL(sub_17040B68); /* 0x1703E443: call 0x17040b68 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x30)); /* 0x1703E448: mov edx, dword ptr [ebp - 0x30] */
    if (2u) _cf = (((edx) >> 30) & 1u); /* 0x1703E44B: shl edx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 2u; /* 0x1703E44B: shl edx, 2 */
    fp_push(*(float*)&MEM32(edx + ebx)); /* 0x1703E44E: fld dword ptr [edx + ebx] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(0x17001F4C)); /* 0x1703E451: fcomp dword ptr [0x17001f4c] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1703E457: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1703E459: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1703E4AA; /* 0x1703E45C: jp 0x1703e4aa */
L_1703E45E:
    eax = MEM32(esi); /* 0x1703E45E: mov eax, dword ptr [esi] */
    ecx = MEM32(ebp + (-0x68)); /* 0x1703E460: mov ecx, dword ptr [ebp - 0x68] */
    ecx = MEM32(ecx); /* 0x1703E463: mov ecx, dword ptr [ecx] */
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x1703E465: fld dword ptr [ecx + 4] */
    edi = MEM32(ebp + edx + (-0x80)); /* 0x1703E468: mov edi, dword ptr [ebp + edx - 0x80] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x8); /* 0x1703E46C: fmul dword ptr [eax + 8] */
    esi = ebp + (-0x114); /* 0x1703E46F: lea esi, [ebp - 0x114] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x1703E475: fld dword ptr [eax + 4] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x8); /* 0x1703E478: fmul dword ptr [ecx + 8] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x1703E47B: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x114)) = _v; } /* 0x1703E47D: fstp dword ptr [ebp - 0x114] */
    fp_push(*(float*)&MEM32(ecx + 0x8)); /* 0x1703E483: fld dword ptr [ecx + 8] */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x1703E486: fmul dword ptr [eax] */
    fp_push(*(float*)&MEM32(ecx)); /* 0x1703E488: fld dword ptr [ecx] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x8); /* 0x1703E48A: fmul dword ptr [eax + 8] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x1703E48D: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x110)) = _v; } /* 0x1703E48F: fstp dword ptr [ebp - 0x110] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x1703E495: fld dword ptr [eax + 4] */
    _st[0] *= (double)*(float*)ADDR(ecx); /* 0x1703E498: fmul dword ptr [ecx] */
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x1703E49A: fld dword ptr [ecx + 4] */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x1703E49D: fmul dword ptr [eax] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x1703E49F: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10C)) = _v; } /* 0x1703E4A1: fstp dword ptr [ebp - 0x10c] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703E4A7: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703E4A8: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703E4A9: movsd dword ptr es:[edi], dword ptr [esi] */
L_1703E4AA:
    edx = MEM32(ebp + edx + (-0x80)); /* 0x1703E4AA: mov edx, dword ptr [ebp + edx - 0x80] */
    PUSH32(esp, edx); /* 0x1703E4AE: push edx */
    PUSH32(esp, edx); /* 0x1703E4AF: push edx */
    RECOMP_CALL(sub_17040B68); /* 0x1703E4B0: call 0x17040b68 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0xC0); /* 0x1703E4B5: lea eax, [ebp - 0xc0] */
    PUSH32(esp, eax); /* 0x1703E4BB: push eax */
    RECOMP_CALL(sub_1704167D); /* 0x1703E4BC: call 0x1704167d */
    RECOMP_FLAGS_IN();
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(0x17001430)); /* 0x1703E4C1: fcom dword ptr [0x17001430] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1703E4C7: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1703E4C9: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1703E50B; /* 0x1703E4CC: jp 0x1703e50b */
L_1703E4CE:
    eax = MEM32(ebp + (-0x2C)); /* 0x1703E4CE: mov eax, dword ptr [ebp - 0x2c] */
    fp_push(*(float*)&MEM32(eax)); /* 0x1703E4D1: fld dword ptr [eax] */
    esi = ebp + (-0xE4); /* 0x1703E4D3: lea esi, [ebp - 0xe4] */
    _st[0] = -_st[0]; /* 0x1703E4D9: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x1703E4DB: fstp dword ptr [eax] */
    eax = MEM32(ebp + (-0x68)); /* 0x1703E4DD: mov eax, dword ptr [ebp - 0x68] */
    edi = MEM32(eax); /* 0x1703E4E0: mov edi, dword ptr [eax] */
    fp_push(*(float*)&MEM32(edi)); /* 0x1703E4E2: fld dword ptr [edi] */
    _st[0] = -_st[0]; /* 0x1703E4E4: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xE4)) = _v; } /* 0x1703E4E6: fstp dword ptr [ebp - 0xe4] */
    fp_push(*(float*)&MEM32(edi + 0x4)); /* 0x1703E4EC: fld dword ptr [edi + 4] */
    _st[0] = -_st[0]; /* 0x1703E4EF: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xE0)) = _v; } /* 0x1703E4F1: fstp dword ptr [ebp - 0xe0] */
    fp_push(*(float*)&MEM32(edi + 0x8)); /* 0x1703E4F7: fld dword ptr [edi + 8] */
    _st[0] = -_st[0]; /* 0x1703E4FA: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xDC)) = _v; } /* 0x1703E4FC: fstp dword ptr [ebp - 0xdc] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703E502: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703E503: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_push(_st[0]); /* 0x1703E504: fld st(0) */
    _st[0] = -_st[0]; /* 0x1703E506: fchs  */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x1703E508: fstp st(1) */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703E50A: movsd dword ptr es:[edi], dword ptr [esi] */
L_1703E50B:
    _st[0] -= (double)*(float*)ADDR(0x17001424); /* 0x1703E50B: fsub dword ptr [0x17001424] */
    fp_push(_st[0]); /* 0x1703E511: fld st(0) */
    _st[0] *= _st[1]; /* 0x1703E513: fmul st(1) */
    fp_push(*(float*)&MEM32(0x17001F4C)); /* 0x1703E515: fld dword ptr [0x17001f4c] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1703E51B: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1703E51D: fnstsw ax */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1703E51F: fstp st(0) */
    /* test HI8(eax), 5 */ /* 0x1703E521: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1703E533; /* 0x1703E524: jp 0x1703e533 */
L_1703E526:
    /* cmp MEM32(ebp + (-0x6C)), 0 */ /* 0x1703E526: cmp dword ptr [ebp - 0x6c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x6C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1703E533; /* 0x1703E52A: jne 0x1703e533 */
L_1703E52C:
    MEM32(ebp + (-0x6C)) = 1; /* 0x1703E52C: mov dword ptr [ebp - 0x6c], 1 */
L_1703E533:
    esi = MEM32(ebp + (-0x4C)); /* 0x1703E533: mov esi, dword ptr [ebp - 0x4c] */
    eax = ebp + (-0xC0); /* 0x1703E536: lea eax, [ebp - 0xc0] */
    PUSH32(esp, eax); /* 0x1703E53C: push eax */
    PUSH32(esp, esi); /* 0x1703E53D: push esi */
    RECOMP_CALL(sub_1704327A); /* 0x1703E53E: call 0x1704327a */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(esi)); /* 0x1703E543: fld dword ptr [esi] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x64))); _flag_b = (uint32_t)(0x48u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x64)) = MEM32(ebp + (-0x64)) + 0x48u; /* 0x1703E545: add dword ptr [ebp - 0x64], 0x48 */
    _flag_k = FK_ADD;
    _st[0] = -_st[0]; /* 0x1703E549: fchs  */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x60))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x60)) = MEM32(ebp + (-0x60)) + 0x10u; /* 0x1703E54B: add dword ptr [ebp - 0x60], 0x10 */
    _flag_k = FK_ADD;
    { float _v = (float)fp_pop(); *(float*)ADDR(esi) = _v; } /* 0x1703E54F: fstp dword ptr [esi] */
    fp_push(*(float*)&MEM32(esi + 0x4)); /* 0x1703E551: fld dword ptr [esi + 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x14u; /* 0x1703E554: add esi, 0x14 */
    _flag_k = FK_ADD;
    _st[0] = -_st[0]; /* 0x1703E557: fchs  */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x10u; /* 0x1703E559: add ebx, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x70))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x70)) = MEM32(ebp + (-0x70)) - 1; /* 0x1703E55C: dec dword ptr [ebp - 0x70] */
    _flag_k = FK_DEC;
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + (-0x10)) = _v; } /* 0x1703E55F: fstp dword ptr [esi - 0x10] */
    fp_push(*(float*)&MEM32(esi + (-0xC))); /* 0x1703E562: fld dword ptr [esi - 0xc] */
    MEM32(ebp + (-0x4C)) = esi; /* 0x1703E565: mov dword ptr [ebp - 0x4c], esi */
    _st[0] = -_st[0]; /* 0x1703E568: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + (-0xC)) = _v; } /* 0x1703E56A: fstp dword ptr [esi - 0xc] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1703E12E; /* 0x1703E56D: jne 0x1703e12e */
L_1703E573:
    eax = MEM32(ebp + (-0x34)); /* 0x1703E573: mov eax, dword ptr [ebp - 0x34] */
    /* cmp eax, 1 */ /* 0x1703E576: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1703E5EB; /* 0x1703E579: jbe 0x1703e5eb */
L_1703E57B:
    ecx = MEM32(ebp + (-0x18)); /* 0x1703E57B: mov ecx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xCu; /* 0x1703E57E: add ecx, 0xc */
    _flag_k = FK_ADD;
    ebx = eax + (-0x1); /* 0x1703E581: lea ebx, [eax - 1] */
L_1703E584:
    fp_push(*(float*)&MEM32(ecx + (-0x8))); /* 0x1703E584: fld dword ptr [ecx - 8] */
    edi = ecx + 0xC; /* 0x1703E587: lea edi, [ecx + 0xc] */
    _st[0] *= (double)*(float*)ADDR(edi); /* 0x1703E58A: fmul dword ptr [edi] */
    edx = ecx + 0x14; /* 0x1703E58C: lea edx, [ecx + 0x14] */
    fp_push(*(float*)&MEM32(ecx + (-0x4))); /* 0x1703E58F: fld dword ptr [ecx - 4] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x10); /* 0x1703E592: fmul dword ptr [ecx + 0x10] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1703E595: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x1703E597: fld dword ptr [ecx + 4] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x18); /* 0x1703E59A: fmul dword ptr [ecx + 0x18] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1703E59D: faddp st(1) */
    fp_push(*(float*)&MEM32(edx)); /* 0x1703E59F: fld dword ptr [edx] */
    _st[0] *= (double)*(float*)ADDR(ecx); /* 0x1703E5A1: fmul dword ptr [ecx] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1703E5A3: faddp st(1) */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(0x17001430)); /* 0x1703E5A5: fcomp dword ptr [0x17001430] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1703E5AB: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1703E5AD: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1703E5E6; /* 0x1703E5B0: jp 0x1703e5e6 */
L_1703E5B2:
    fp_push(*(float*)&MEM32(edi)); /* 0x1703E5B2: fld dword ptr [edi] */
    esi = ebp + (-0x124); /* 0x1703E5B4: lea esi, [ebp - 0x124] */
    _st[0] = -_st[0]; /* 0x1703E5BA: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x124)) = _v; } /* 0x1703E5BC: fstp dword ptr [ebp - 0x124] */
    fp_push(*(float*)&MEM32(ecx + 0x10)); /* 0x1703E5C2: fld dword ptr [ecx + 0x10] */
    _st[0] = -_st[0]; /* 0x1703E5C5: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x120)) = _v; } /* 0x1703E5C7: fstp dword ptr [ebp - 0x120] */
    fp_push(*(float*)&MEM32(edx)); /* 0x1703E5CD: fld dword ptr [edx] */
    _st[0] = -_st[0]; /* 0x1703E5CF: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x11C)) = _v; } /* 0x1703E5D1: fstp dword ptr [ebp - 0x11c] */
    fp_push(*(float*)&MEM32(ecx + 0x18)); /* 0x1703E5D7: fld dword ptr [ecx + 0x18] */
    _st[0] = -_st[0]; /* 0x1703E5DA: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x118)) = _v; } /* 0x1703E5DC: fstp dword ptr [ebp - 0x118] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703E5E2: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703E5E3: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703E5E4: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703E5E5: movsd dword ptr es:[edi], dword ptr [esi] */
L_1703E5E6:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x1703E5E6: dec ebx */
    _flag_k = FK_DEC;
    ecx = edx; /* 0x1703E5E7: mov ecx, edx */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1703E584; /* 0x1703E5E9: jne 0x1703e584 */
L_1703E5EB:
    eax = MEM32(ebp + (-0x28)); /* 0x1703E5EB: mov eax, dword ptr [ebp - 0x28] */
    /* test eax, eax */ /* 0x1703E5EE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703E5FC; /* 0x1703E5F0: je 0x1703e5fc */
L_1703E5F2:
    ecx = MEM32(eax); /* 0x1703E5F2: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1703E5F4: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1703E5F5: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x28))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x28)) = MEM32(ebp + (-0x28)) & 0; /* 0x1703E5F8: and dword ptr [ebp - 0x28], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1703E5FC:
    esi = MEM32(ebp + (-0xC4)); /* 0x1703E5FC: mov esi, dword ptr [ebp - 0xc4] */
    edi = MEM32(ebp + (-0xC8)); /* 0x1703E602: mov edi, dword ptr [ebp - 0xc8] */
    ebx = MEM32(ebp + (-0x50)); /* 0x1703E608: mov ebx, dword ptr [ebp - 0x50] */
L_1703E60B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1703E60B: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x48))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x48)) = MEM32(ebp + (-0x48)) + 1; /* 0x1703E60D: inc dword ptr [ebp - 0x48] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + (-0x48)); /* 0x1703E610: mov eax, dword ptr [ebp - 0x48] */
    /* cmp eax, MEM32(ebp + (-0x74)) */ /* 0x1703E613: cmp eax, dword ptr [ebp - 0x74] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x74)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1703DCFA; /* 0x1703E616: jb 0x1703dcfa */
L_1703E61C:
    ecx = MEM32(ebp + (-0x54)); /* 0x1703E61C: mov ecx, dword ptr [ebp - 0x54] */
    /* cmp ecx, edx */ /* 0x1703E61F: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1703E62D; /* 0x1703E621: ja 0x1703e62d */
L_1703E623:
    /* cmp MEM32(ebp + (-0x44)), edx */ /* 0x1703E623: cmp dword ptr [ebp - 0x44], edx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x44))); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1703E62D; /* 0x1703E626: ja 0x1703e62d */
L_1703E628:
    /* cmp MEM32(ebp + (-0x40)), edx */ /* 0x1703E628: cmp dword ptr [ebp - 0x40], edx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x40))); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1703E673; /* 0x1703E62B: jbe 0x1703e673 */
L_1703E62D:
    eax = MEM32(ebp + (-0x38)); /* 0x1703E62D: mov eax, dword ptr [ebp - 0x38] */
    /* cmp eax, edx */ /* 0x1703E630: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703E673; /* 0x1703E632: je 0x1703e673 */
L_1703E634:
    MEM32(esi) = eax; /* 0x1703E634: mov dword ptr [esi], eax */
    eax = MEM32(ebp + (-0x40)); /* 0x1703E636: mov eax, dword ptr [ebp - 0x40] */
    MEM32(esi + 0x4) = eax; /* 0x1703E639: mov dword ptr [esi + 4], eax */
    eax = MEM32(ebp + (-0x44)); /* 0x1703E63C: mov eax, dword ptr [ebp - 0x44] */
    MEM32(esi + 0x8) = eax; /* 0x1703E63F: mov dword ptr [esi + 8], eax */
    eax = MEM32(ebp + (-0x1C)); /* 0x1703E642: mov eax, dword ptr [ebp - 0x1c] */
    MEM32(esi + 0x10) = eax; /* 0x1703E645: mov dword ptr [esi + 0x10], eax */
    eax = MEM32(ebp + (-0x18)); /* 0x1703E648: mov eax, dword ptr [ebp - 0x18] */
    MEM32(esi + 0x14) = eax; /* 0x1703E64B: mov dword ptr [esi + 0x14], eax */
    eax = MEM32(ebp + (-0x20)); /* 0x1703E64E: mov eax, dword ptr [ebp - 0x20] */
    MEM32(esi + 0xC) = ecx; /* 0x1703E651: mov dword ptr [esi + 0xc], ecx */
    MEM32(esi + 0x18) = eax; /* 0x1703E654: mov dword ptr [esi + 0x18], eax */
    MEM32(ebp + (-0x38)) = edx; /* 0x1703E657: mov dword ptr [ebp - 0x38], edx */
    MEM32(ebp + (-0x1C)) = edx; /* 0x1703E65A: mov dword ptr [ebp - 0x1c], edx */
    MEM32(ebp + (-0x18)) = edx; /* 0x1703E65D: mov dword ptr [ebp - 0x18], edx */
    MEM32(ebp + (-0x20)) = edx; /* 0x1703E660: mov dword ptr [ebp - 0x20], edx */
    goto L_1703E678; /* 0x1703E663: jmp 0x1703e678 */
L_1703E665:
    ebx = 0x80070057u; /* 0x1703E665: mov ebx, 0x80070057 */
    goto L_1703E678; /* 0x1703E66A: jmp 0x1703e678 */
L_1703E66C:
    ebx = 0x8007000Eu; /* 0x1703E66C: mov ebx, 0x8007000e */
    goto L_1703E678; /* 0x1703E671: jmp 0x1703e678 */
L_1703E673:
    ebx = 0x80004005u; /* 0x1703E673: mov ebx, 0x80004005 */
L_1703E678:
    PUSH32(esp, MEM32(ebp + (-0x38))); /* 0x1703E678: push dword ptr [ebp - 0x38] */
    RECOMP_CALL(sub_1721B010); /* 0x1703E67B: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x1703E680: push dword ptr [ebp - 0x18] */
    RECOMP_CALL(sub_1721B010); /* 0x1703E683: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x1703E688: push dword ptr [ebp - 0x20] */
    RECOMP_CALL(sub_1721B010); /* 0x1703E68B: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x1703E690: push dword ptr [ebp - 0x1c] */
    RECOMP_CALL(sub_1721B010); /* 0x1703E693: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x28)); /* 0x1703E698: mov eax, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1703E69B: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1703E69E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703E6A8; /* 0x1703E6A0: je 0x1703e6a8 */
L_1703E6A2:
    ecx = MEM32(eax); /* 0x1703E6A2: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1703E6A4: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1703E6A5: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
L_1703E6A8:
    ecx = MEM32(ebp + (-0x4)); /* 0x1703E6A8: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x1703E6AB: pop edi */
    esi = POP32_VAL(esp); /* 0x1703E6AC: pop esi */
    eax = ebx; /* 0x1703E6AD: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x1703E6AF: pop ebx */
    RECOMP_CALL(sub_1721B76C); /* 0x1703E6B0: call 0x1721b76c */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1703E6B5: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1703E6B6: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1703E6BE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1703E6BEu);

L_1703E6BE:
    edi = edi; /* 0x1703E6BE: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1703E6C0: push ebp */
    ebp = esp; /* 0x1703E6C1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x40u; /* 0x1703E6C3: sub esp, 0x40 */
    _flag_k = FK_CMP;
    eax = MEM32(0x1723C894); /* 0x1703E6C6: mov eax, dword ptr [0x1723c894] */
    MEM32(ebp + (-0x4)) = eax; /* 0x1703E6CB: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x1703E6CE: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x1703E6D1: push ebx */
    MEM32(ebp + (-0x34)) = eax; /* 0x1703E6D2: mov dword ptr [ebp - 0x34], eax */
    eax = MEM32(ebp + 0x10); /* 0x1703E6D5: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x1703E6D8: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1703E6D9: mov esi, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x38)) = eax; /* 0x1703E6DC: mov dword ptr [ebp - 0x38], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1703E6DF: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + (-0x30); /* 0x1703E6E1: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x1703E6E4: push eax */
    PUSH32(esp, esi); /* 0x1703E6E5: push esi */
    MEM32(ebp + (-0x3C)) = esi; /* 0x1703E6E6: mov dword ptr [ebp - 0x3c], esi */
    MEM32(ebp + (-0x20)) = ebx; /* 0x1703E6E9: mov dword ptr [ebp - 0x20], ebx */
    MEM32(ebp + (-0x28)) = ebx; /* 0x1703E6EC: mov dword ptr [ebp - 0x28], ebx */
    MEM32(ebp + (-0x24)) = ebx; /* 0x1703E6EF: mov dword ptr [ebp - 0x24], ebx */
    MEM32(ebp + (-0x30)) = ebx; /* 0x1703E6F2: mov dword ptr [ebp - 0x30], ebx */
    MEM32(ebp + (-0x18)) = ebx; /* 0x1703E6F5: mov dword ptr [ebp - 0x18], ebx */
    RECOMP_CALL(sub_1703D262); /* 0x1703E6F8: call 0x1703d262 */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x1703E6FD: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x1C)) = eax; /* 0x1703E6FF: mov dword ptr [ebp - 0x1c], eax */
    if (CMP_L(_flag_a, _flag_b)) goto L_1703E869; /* 0x1703E702: jl 0x1703e869 */
L_1703E708:
    eax = MEM32(esi); /* 0x1703E708: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x1703E70A: push edi */
    ecx = ebp + (-0x40); /* 0x1703E70B: lea ecx, [ebp - 0x40] */
    PUSH32(esp, ecx); /* 0x1703E70E: push ecx */
    PUSH32(esp, esi); /* 0x1703E70F: push esi */
    RECOMP_ICALL(MEM32(eax + 0x28)); /* 0x1703E710: call dword ptr [eax + 0x28] */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x40)), ebx */ /* 0x1703E713: cmp dword ptr [ebp - 0x40], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x40))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x2C)) = ebx; /* 0x1703E716: mov dword ptr [ebp - 0x2c], ebx */
    if (CMP_BE(_flag_a, _flag_b)) goto L_1703E863; /* 0x1703E719: jbe 0x1703e863 */
L_1703E71F:
    eax = MEM32(esi); /* 0x1703E71F: mov eax, dword ptr [esi] */
    ecx = ebp + (-0x24); /* 0x1703E721: lea ecx, [ebp - 0x24] */
    PUSH32(esp, ecx); /* 0x1703E724: push ecx */
    PUSH32(esp, MEM32(ebp + (-0x2C))); /* 0x1703E725: push dword ptr [ebp - 0x2c] */
    PUSH32(esp, esi); /* 0x1703E728: push esi */
    RECOMP_ICALL(MEM32(eax + 0x2C)); /* 0x1703E729: call dword ptr [eax + 0x2c] */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x1703E72C: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x1C)) = eax; /* 0x1703E72E: mov dword ptr [ebp - 0x1c], eax */
    if (CMP_L(_flag_a, _flag_b)) goto L_1703E7DA; /* 0x1703E731: jl 0x1703e7da */
L_1703E737:
    eax = MEM32(ebp + (-0x24)); /* 0x1703E737: mov eax, dword ptr [ebp - 0x24] */
    ecx = MEM32(eax); /* 0x1703E73A: mov ecx, dword ptr [eax] */
    edx = ebp + (-0x14); /* 0x1703E73C: lea edx, [ebp - 0x14] */
    PUSH32(esp, edx); /* 0x1703E73F: push edx */
    PUSH32(esp, eax); /* 0x1703E740: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x20)); /* 0x1703E741: call dword ptr [ecx + 0x20] */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x1703E744: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x1C)) = eax; /* 0x1703E746: mov dword ptr [ebp - 0x1c], eax */
    if (CMP_L(_flag_a, _flag_b)) goto L_1703E868; /* 0x1703E749: jl 0x1703e868 */
L_1703E74F:
    PUSH32(esp, 4); /* 0x1703E74F: push 4 */
    ecx = POP32_VAL(esp); /* 0x1703E751: pop ecx */
    edi = ebp + (-0x14); /* 0x1703E752: lea edi, [ebp - 0x14] */
    esi = 0x17001EFCu; /* 0x1703E755: mov esi, 0x17001efc */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1703E75A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x1703E75C: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_1703E7C7; /* 0x1703E75E: jne 0x1703e7c7 */
L_1703E760:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x18)) = MEM32(ebp + (-0x18)) + 1; /* 0x1703E760: inc dword ptr [ebp - 0x18] */
    _flag_k = FK_INC;
    PUSH32(esp, 0x20u); /* 0x1703E763: push 0x20 */
    RECOMP_CALL(sub_1721B01C); /* 0x1703E765: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x1703E76A: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x1703E76C: pop ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703E78A; /* 0x1703E76D: je 0x1703e78a */
L_1703E76F:
    MEM32(eax) = ebx; /* 0x1703E76F: mov dword ptr [eax], ebx */
    MEM32(eax + 0x4) = ebx; /* 0x1703E771: mov dword ptr [eax + 4], ebx */
    MEM32(eax + 0x8) = ebx; /* 0x1703E774: mov dword ptr [eax + 8], ebx */
    MEM32(eax + 0xC) = ebx; /* 0x1703E777: mov dword ptr [eax + 0xc], ebx */
    MEM32(eax + 0x10) = ebx; /* 0x1703E77A: mov dword ptr [eax + 0x10], ebx */
    MEM32(eax + 0x14) = ebx; /* 0x1703E77D: mov dword ptr [eax + 0x14], ebx */
    MEM32(eax + 0x18) = ebx; /* 0x1703E780: mov dword ptr [eax + 0x18], ebx */
    MEM32(eax + 0x1C) = ebx; /* 0x1703E783: mov dword ptr [eax + 0x1c], ebx */
    esi = eax; /* 0x1703E786: mov esi, eax */
    goto L_1703E78C; /* 0x1703E788: jmp 0x1703e78c */
L_1703E78A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1703E78A: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1703E78C:
    /* cmp esi, ebx */ /* 0x1703E78C: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703E85A; /* 0x1703E78E: je 0x1703e85a */
L_1703E794:
    eax = MEM32(ebp + (-0x28)); /* 0x1703E794: mov eax, dword ptr [ebp - 0x28] */
    PUSH32(esp, esi); /* 0x1703E797: push esi */
    MEM32(esi + 0x1C) = eax; /* 0x1703E798: mov dword ptr [esi + 0x1c], eax */
    PUSH32(esp, MEM32(ebp + (-0x24))); /* 0x1703E79B: push dword ptr [ebp - 0x24] */
    MEM32(ebp + (-0x28)) = esi; /* 0x1703E79E: mov dword ptr [ebp - 0x28], esi */
    PUSH32(esp, MEM32(ebp + (-0x34))); /* 0x1703E7A1: push dword ptr [ebp - 0x34] */
    RECOMP_CALL(sub_1703DCA2); /* 0x1703E7A4: call 0x1703dca2 */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x1703E7A9: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x1C)) = eax; /* 0x1703E7AB: mov dword ptr [ebp - 0x1c], eax */
    if (CMP_GE(_flag_a, _flag_b)) goto L_1703E7C7; /* 0x1703E7AE: jge 0x1703e7c7 */
L_1703E7B0:
    eax = MEM32(esi + 0x1C); /* 0x1703E7B0: mov eax, dword ptr [esi + 0x1c] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x18)) = MEM32(ebp + (-0x18)) - 1; /* 0x1703E7B3: dec dword ptr [ebp - 0x18] */
    _flag_k = FK_DEC;
    PUSH32(esp, 1); /* 0x1703E7B6: push 1 */
    ecx = esi; /* 0x1703E7B8: mov ecx, esi */
    MEM32(ebp + (-0x28)) = eax; /* 0x1703E7BA: mov dword ptr [ebp - 0x28], eax */
    MEM32(esi + 0x1C) = ebx; /* 0x1703E7BD: mov dword ptr [esi + 0x1c], ebx */
    RECOMP_CALL(sub_1703CE32); /* 0x1703E7C0: call 0x1703ce32 */
    RECOMP_FLAGS_IN();
    goto L_1703E7D7; /* 0x1703E7C5: jmp 0x1703e7d7 */
L_1703E7C7:
    eax = MEM32(ebp + (-0x24)); /* 0x1703E7C7: mov eax, dword ptr [ebp - 0x24] */
    /* cmp eax, ebx */ /* 0x1703E7CA: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703E7D7; /* 0x1703E7CC: je 0x1703e7d7 */
L_1703E7CE:
    ecx = MEM32(eax); /* 0x1703E7CE: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1703E7D0: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1703E7D1: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x24)) = ebx; /* 0x1703E7D4: mov dword ptr [ebp - 0x24], ebx */
L_1703E7D7:
    esi = MEM32(ebp + (-0x3C)); /* 0x1703E7D7: mov esi, dword ptr [ebp - 0x3c] */
L_1703E7DA:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x2C)) = MEM32(ebp + (-0x2C)) + 1; /* 0x1703E7DA: inc dword ptr [ebp - 0x2c] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + (-0x2C)); /* 0x1703E7DD: mov eax, dword ptr [ebp - 0x2c] */
    /* cmp eax, MEM32(ebp + (-0x40)) */ /* 0x1703E7E0: cmp eax, dword ptr [ebp - 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x40)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1703E71F; /* 0x1703E7E3: jb 0x1703e71f */
L_1703E7E9:
    /* cmp MEM32(ebp + (-0x18)), ebx */ /* 0x1703E7E9: cmp dword ptr [ebp - 0x18], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1703E863; /* 0x1703E7EC: jbe 0x1703e863 */
L_1703E7EE:
    eax = ebp + (-0x20); /* 0x1703E7EE: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x1703E7F1: push eax */
    eax = MEM32(ebp + (-0x34)); /* 0x1703E7F2: mov eax, dword ptr [ebp - 0x34] */
    fp_push(*(double*)ADDR(eax + 0x18)); /* 0x1703E7F5: fld qword ptr [eax + 0x18] */
    PUSH32(esp, ebx); /* 0x1703E7F8: push ebx */
    PUSH32(esp, ebx); /* 0x1703E7F9: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x1703E7FA: push dword ptr [ebp - 0x18] */
    PUSH32(esp, ebx); /* 0x1703E7FD: push ebx */
    PUSH32(esp, ecx); /* 0x1703E7FE: push ecx */
    PUSH32(esp, ecx); /* 0x1703E7FF: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x1703E800: fstp qword ptr [esp] */
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x1703E803: push dword ptr [ebp - 0x30] */
    RECOMP_CALL(sub_1703CBA9); /* 0x1703E806: call 0x1703cba9 */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x1703E80B: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x1C)) = eax; /* 0x1703E80D: mov dword ptr [ebp - 0x1c], eax */
    if (CMP_L(_flag_a, _flag_b)) goto L_1703E868; /* 0x1703E810: jl 0x1703e868 */
L_1703E812:
    esi = MEM32(ebp + (-0x28)); /* 0x1703E812: mov esi, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1703E815: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x18)), ebx */ /* 0x1703E817: cmp dword ptr [ebp - 0x18], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1703E84D; /* 0x1703E81A: jbe 0x1703e84d */
L_1703E81C:
    eax = MEM32(ebp + (-0x20)); /* 0x1703E81C: mov eax, dword ptr [ebp - 0x20] */
    ecx = MEM32(eax); /* 0x1703E81F: mov ecx, dword ptr [eax] */
    PUSH32(esp, ebx); /* 0x1703E821: push ebx */
    PUSH32(esp, MEM32(esi + 0x18)); /* 0x1703E822: push dword ptr [esi + 0x18] */
    PUSH32(esp, MEM32(esi + 0x14)); /* 0x1703E825: push dword ptr [esi + 0x14] */
    PUSH32(esp, MEM32(esi + 0x10)); /* 0x1703E828: push dword ptr [esi + 0x10] */
    PUSH32(esp, MEM32(esi + 0xC)); /* 0x1703E82B: push dword ptr [esi + 0xc] */
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x1703E82E: push dword ptr [esi + 8] */
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x1703E831: push dword ptr [esi + 4] */
    PUSH32(esp, MEM32(esi)); /* 0x1703E834: push dword ptr [esi] */
    PUSH32(esp, eax); /* 0x1703E836: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x80)); /* 0x1703E837: call dword ptr [ecx + 0x80] */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x1703E83D: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x1C)) = eax; /* 0x1703E83F: mov dword ptr [ebp - 0x1c], eax */
    if (CMP_L(_flag_a, _flag_b)) goto L_1703E868; /* 0x1703E842: jl 0x1703e868 */
L_1703E844:
    esi = MEM32(esi + 0x1C); /* 0x1703E844: mov esi, dword ptr [esi + 0x1c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1703E847: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(ebp + (-0x18)) */ /* 0x1703E848: cmp edi, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x18)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1703E81C; /* 0x1703E84B: jb 0x1703e81c */
L_1703E84D:
    eax = MEM32(ebp + (-0x20)); /* 0x1703E84D: mov eax, dword ptr [ebp - 0x20] */
    ecx = MEM32(ebp + (-0x38)); /* 0x1703E850: mov ecx, dword ptr [ebp - 0x38] */
    MEM32(ecx) = eax; /* 0x1703E853: mov dword ptr [ecx], eax */
    MEM32(ebp + (-0x20)) = ebx; /* 0x1703E855: mov dword ptr [ebp - 0x20], ebx */
    goto L_1703E868; /* 0x1703E858: jmp 0x1703e868 */
L_1703E85A:
    MEM32(ebp + (-0x1C)) = 0x8007000Eu; /* 0x1703E85A: mov dword ptr [ebp - 0x1c], 0x8007000e */
    goto L_1703E868; /* 0x1703E861: jmp 0x1703e868 */
L_1703E863:
    eax = MEM32(ebp + (-0x38)); /* 0x1703E863: mov eax, dword ptr [ebp - 0x38] */
    MEM32(eax) = ebx; /* 0x1703E866: mov dword ptr [eax], ebx */
L_1703E868:
    edi = POP32_VAL(esp); /* 0x1703E868: pop edi */
L_1703E869:
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x1703E869: push dword ptr [ebp - 0x30] */
    RECOMP_CALL(sub_1721B010); /* 0x1703E86C: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1703E871: pop ecx */
    ecx = MEM32(ebp + (-0x28)); /* 0x1703E872: mov ecx, dword ptr [ebp - 0x28] */
    /* cmp ecx, ebx */ /* 0x1703E875: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703E880; /* 0x1703E877: je 0x1703e880 */
L_1703E879:
    PUSH32(esp, 1); /* 0x1703E879: push 1 */
    RECOMP_CALL(sub_1703CE32); /* 0x1703E87B: call 0x1703ce32 */
    RECOMP_FLAGS_IN();
L_1703E880:
    eax = MEM32(ebp + (-0x20)); /* 0x1703E880: mov eax, dword ptr [ebp - 0x20] */
    /* cmp eax, ebx */ /* 0x1703E883: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703E890; /* 0x1703E885: je 0x1703e890 */
L_1703E887:
    ecx = MEM32(eax); /* 0x1703E887: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1703E889: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1703E88A: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x20)) = ebx; /* 0x1703E88D: mov dword ptr [ebp - 0x20], ebx */
L_1703E890:
    eax = MEM32(ebp + (-0x24)); /* 0x1703E890: mov eax, dword ptr [ebp - 0x24] */
    esi = POP32_VAL(esp); /* 0x1703E893: pop esi */
    /* cmp eax, ebx */ /* 0x1703E894: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = POP32_VAL(esp); /* 0x1703E896: pop ebx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703E89F; /* 0x1703E897: je 0x1703e89f */
L_1703E899:
    ecx = MEM32(eax); /* 0x1703E899: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1703E89B: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1703E89C: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
L_1703E89F:
    ecx = MEM32(ebp + (-0x4)); /* 0x1703E89F: mov ecx, dword ptr [ebp - 4] */
    eax = MEM32(ebp + (-0x1C)); /* 0x1703E8A2: mov eax, dword ptr [ebp - 0x1c] */
    RECOMP_CALL(sub_1721B76C); /* 0x1703E8A5: call 0x1721b76c */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1703E8AA: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1703E8AB: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1703E8B3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1703E8B3u);

L_1703E8B3:
    edi = edi; /* 0x1703E8B3: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1703E8B5: push ebp */
    ebp = esp; /* 0x1703E8B6: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x5Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x5Cu; /* 0x1703E8B8: sub esp, 0x5c */
    _flag_k = FK_CMP;
    eax = MEM32(0x1723C894); /* 0x1703E8BB: mov eax, dword ptr [0x1723c894] */
    MEM32(ebp + (-0x4)) = eax; /* 0x1703E8C0: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x1703E8C3: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x1703E8C6: push ebx */
    PUSH32(esp, esi); /* 0x1703E8C7: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1703E8C8: mov esi, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x28)) = eax; /* 0x1703E8CB: mov dword ptr [ebp - 0x28], eax */
    eax = MEM32(ebp + 0x10); /* 0x1703E8CE: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x1703E8D1: push edi */
    MEM32(ebp + (-0x50)) = eax; /* 0x1703E8D2: mov dword ptr [ebp - 0x50], eax */
    eax = MEM32(ebp + 0x14); /* 0x1703E8D5: mov eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1703E8D8: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x48); /* 0x1703E8DA: lea ecx, [ebp - 0x48] */
    PUSH32(esp, ecx); /* 0x1703E8DD: push ecx */
    MEM32(ebp + (-0x44)) = eax; /* 0x1703E8DE: mov dword ptr [ebp - 0x44], eax */
    eax = MEM32(esi); /* 0x1703E8E1: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x1703E8E3: push esi */
    MEM32(ebp + (-0x54)) = esi; /* 0x1703E8E4: mov dword ptr [ebp - 0x54], esi */
    MEM32(ebp + (-0x24)) = ebx; /* 0x1703E8E7: mov dword ptr [ebp - 0x24], ebx */
    MEM32(ebp + (-0x2C)) = ebx; /* 0x1703E8EA: mov dword ptr [ebp - 0x2c], ebx */
    MEM32(ebp + (-0x34)) = ebx; /* 0x1703E8ED: mov dword ptr [ebp - 0x34], ebx */
    MEM32(ebp + (-0x30)) = ebx; /* 0x1703E8F0: mov dword ptr [ebp - 0x30], ebx */
    MEM32(ebp + (-0x1C)) = ebx; /* 0x1703E8F3: mov dword ptr [ebp - 0x1c], ebx */
    MEM32(ebp + (-0x38)) = ebx; /* 0x1703E8F6: mov dword ptr [ebp - 0x38], ebx */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x1703E8F9: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x48)), ebx */ /* 0x1703E8FC: cmp dword ptr [ebp - 0x48], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x48))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x3C)) = ebx; /* 0x1703E8FF: mov dword ptr [ebp - 0x3c], ebx */
    if (CMP_BE(_flag_a, _flag_b)) goto L_1703EAE3; /* 0x1703E902: jbe 0x1703eae3 */
L_1703E908:
    goto L_1703E90D; /* 0x1703E908: jmp 0x1703e90d */
L_1703E90A:
    esi = MEM32(ebp + (-0x54)); /* 0x1703E90A: mov esi, dword ptr [ebp - 0x54] */
L_1703E90D:
    eax = MEM32(esi); /* 0x1703E90D: mov eax, dword ptr [esi] */
    ecx = ebp + (-0x24); /* 0x1703E90F: lea ecx, [ebp - 0x24] */
    PUSH32(esp, ecx); /* 0x1703E912: push ecx */
    PUSH32(esp, MEM32(ebp + (-0x3C))); /* 0x1703E913: push dword ptr [ebp - 0x3c] */
    PUSH32(esp, esi); /* 0x1703E916: push esi */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x1703E917: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x1703E91A: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x18)) = eax; /* 0x1703E91C: mov dword ptr [ebp - 0x18], eax */
    if (CMP_L(_flag_a, _flag_b)) goto L_1703EBF7; /* 0x1703E91F: jl 0x1703ebf7 */
L_1703E925:
    eax = MEM32(ebp + (-0x24)); /* 0x1703E925: mov eax, dword ptr [ebp - 0x24] */
    ecx = MEM32(eax); /* 0x1703E928: mov ecx, dword ptr [eax] */
    edx = ebp + (-0x14); /* 0x1703E92A: lea edx, [ebp - 0x14] */
    PUSH32(esp, edx); /* 0x1703E92D: push edx */
    PUSH32(esp, eax); /* 0x1703E92E: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x20)); /* 0x1703E92F: call dword ptr [ecx + 0x20] */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x1703E932: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x18)) = eax; /* 0x1703E934: mov dword ptr [ebp - 0x18], eax */
    if (CMP_L(_flag_a, _flag_b)) goto L_1703EBF7; /* 0x1703E937: jl 0x1703ebf7 */
L_1703E93D:
    PUSH32(esp, 4); /* 0x1703E93D: push 4 */
    eax = POP32_VAL(esp); /* 0x1703E93F: pop eax */
    ecx = eax; /* 0x1703E940: mov ecx, eax */
    edi = 0x17001ECCu; /* 0x1703E942: mov edi, 0x17001ecc */
    esi = ebp + (-0x14); /* 0x1703E947: lea esi, [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1703E94A: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x1703E94C: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_1703E99D; /* 0x1703E94E: jne 0x1703e99d */
L_1703E950:
    eax = MEM32(ebp + (-0x28)); /* 0x1703E950: mov eax, dword ptr [ebp - 0x28] */
    eax = MEM32(eax + 0xC); /* 0x1703E953: mov eax, dword ptr [eax + 0xc] */
    ecx = MEM32(eax); /* 0x1703E956: mov ecx, dword ptr [eax] */
    edx = ebp + (-0x20); /* 0x1703E958: lea edx, [ebp - 0x20] */
    PUSH32(esp, edx); /* 0x1703E95B: push edx */
    PUSH32(esp, ebx); /* 0x1703E95C: push ebx */
    PUSH32(esp, eax); /* 0x1703E95D: push eax */
    RECOMP_ICALL(MEM32(ecx)); /* 0x1703E95E: call dword ptr [ecx] */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x1703E960: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x18)) = eax; /* 0x1703E962: mov dword ptr [ebp - 0x18], eax */
    if (CMP_L(_flag_a, _flag_b)) goto L_1703EBF7; /* 0x1703E965: jl 0x1703ebf7 */
L_1703E96B:
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x1703E96B: push dword ptr [ebp - 0x20] */
    PUSH32(esp, MEM32(ebp + (-0x24))); /* 0x1703E96E: push dword ptr [ebp - 0x24] */
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x1703E971: push dword ptr [ebp - 0x28] */
    RECOMP_CALL(sub_1703CE58); /* 0x1703E974: call 0x1703ce58 */
    RECOMP_FLAGS_IN();
L_1703E979:
    /* cmp eax, ebx */ /* 0x1703E979: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x18)) = eax; /* 0x1703E97B: mov dword ptr [ebp - 0x18], eax */
    if (CMP_L(_flag_a, _flag_b)) goto L_1703EBF7; /* 0x1703E97E: jl 0x1703ebf7 */
L_1703E984:
    eax = MEM32(ebp + (-0x34)); /* 0x1703E984: mov eax, dword ptr [ebp - 0x34] */
    /* cmp eax, ebx */ /* 0x1703E987: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703EA95; /* 0x1703E989: je 0x1703ea95 */
L_1703E98F:
    ecx = MEM32(ebp + (-0x20)); /* 0x1703E98F: mov ecx, dword ptr [ebp - 0x20] */
    MEM32(eax + 0x48) = ecx; /* 0x1703E992: mov dword ptr [eax + 0x48], ecx */
    eax = MEM32(ebp + (-0x20)); /* 0x1703E995: mov eax, dword ptr [ebp - 0x20] */
    goto L_1703EA9B; /* 0x1703E998: jmp 0x1703ea9b */
L_1703E99D:
    ecx = eax; /* 0x1703E99D: mov ecx, eax */
    edi = 0x17001A00u; /* 0x1703E99F: mov edi, 0x17001a00 */
    esi = ebp + (-0x14); /* 0x1703E9A4: lea esi, [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1703E9A7: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x1703E9A9: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_1703E9F3; /* 0x1703E9AB: jne 0x1703e9f3 */
L_1703E9AD:
    eax = MEM32(ebp + (-0x24)); /* 0x1703E9AD: mov eax, dword ptr [ebp - 0x24] */
    ecx = MEM32(eax); /* 0x1703E9B0: mov ecx, dword ptr [eax] */
    edx = ebp + (-0x58); /* 0x1703E9B2: lea edx, [ebp - 0x58] */
    PUSH32(esp, edx); /* 0x1703E9B5: push edx */
    edx = ebp + (-0x4C); /* 0x1703E9B6: lea edx, [ebp - 0x4c] */
    PUSH32(esp, edx); /* 0x1703E9B9: push edx */
    PUSH32(esp, eax); /* 0x1703E9BA: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x18)); /* 0x1703E9BB: call dword ptr [ecx + 0x18] */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x1703E9BE: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x18)) = eax; /* 0x1703E9C0: mov dword ptr [ebp - 0x18], eax */
    if (CMP_L(_flag_a, _flag_b)) goto L_1703EBF7; /* 0x1703E9C3: jl 0x1703ebf7 */
L_1703E9C9:
    /* cmp MEM32(ebp + (-0x4C)), 4 */ /* 0x1703E9C9: cmp dword ptr [ebp - 0x4c], 4 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4C))); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1703EABD; /* 0x1703E9CD: jne 0x1703eabd */
L_1703E9D3:
    eax = MEM32(ebp + (-0x58)); /* 0x1703E9D3: mov eax, dword ptr [ebp - 0x58] */
    eax = MEM32(eax); /* 0x1703E9D6: mov eax, dword ptr [eax] */
    /* test eax, eax */ /* 0x1703E9D8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x5C)) = eax; /* 0x1703E9DA: mov dword ptr [ebp - 0x5c], eax */
    fp_push((double)(int32_t)MEM32(ebp + (-0x5C))); /* 0x1703E9DD: fild dword ptr [ebp - 0x5c] */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1703E9E8; /* 0x1703E9E0: jge 0x1703e9e8 */
L_1703E9E2:
    _st[0] += *(double*)ADDR(0x17001F50); /* 0x1703E9E2: fadd qword ptr [0x17001f50] */
L_1703E9E8:
    eax = MEM32(ebp + (-0x28)); /* 0x1703E9E8: mov eax, dword ptr [ebp - 0x28] */
    { double _v = fp_pop(); *(double*)ADDR(eax + 0x18) = _v; } /* 0x1703E9EB: fstp qword ptr [eax + 0x18] */
    goto L_1703EABD; /* 0x1703E9EE: jmp 0x1703eabd */
L_1703E9F3:
    ecx = eax; /* 0x1703E9F3: mov ecx, eax */
    edi = 0x170019F0u; /* 0x1703E9F5: mov edi, 0x170019f0 */
    esi = ebp + (-0x14); /* 0x1703E9FA: lea esi, [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1703E9FD: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x1703E9FF: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_1703EA29; /* 0x1703EA01: jne 0x1703ea29 */
L_1703EA03:
    eax = ebp + (-0x40); /* 0x1703EA03: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x1703EA06: push eax */
    PUSH32(esp, MEM32(ebp + (-0x24))); /* 0x1703EA07: push dword ptr [ebp - 0x24] */
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x1703EA0A: push dword ptr [ebp - 0x28] */
    RECOMP_CALL(sub_1703D2B3); /* 0x1703EA0D: call 0x1703d2b3 */
    RECOMP_FLAGS_IN();
    goto L_1703EA48; /* 0x1703EA12: jmp 0x1703ea48 */
L_1703EA14:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1703EA14: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1703EA16:
    /* cmp eax, ebx */ /* 0x1703EA16: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703EAEF; /* 0x1703EA18: je 0x1703eaef */
L_1703EA1E:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x38))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x38)) = MEM32(ebp + (-0x38)) + 1; /* 0x1703EA1E: inc dword ptr [ebp - 0x38] */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x30)) = eax; /* 0x1703EA21: mov dword ptr [ebp - 0x30], eax */
    goto L_1703EABD; /* 0x1703EA24: jmp 0x1703eabd */
L_1703EA29:
    ecx = eax; /* 0x1703EA29: mov ecx, eax */
    edi = 0x17001F0Cu; /* 0x1703EA2B: mov edi, 0x17001f0c */
    esi = ebp + (-0x14); /* 0x1703EA30: lea esi, [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1703EA33: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x1703EA35: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_1703EA70; /* 0x1703EA37: jne 0x1703ea70 */
L_1703EA39:
    eax = ebp + (-0x40); /* 0x1703EA39: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x1703EA3C: push eax */
    PUSH32(esp, MEM32(ebp + (-0x24))); /* 0x1703EA3D: push dword ptr [ebp - 0x24] */
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x1703EA40: push dword ptr [ebp - 0x28] */
    RECOMP_CALL(sub_1703E6BE); /* 0x1703EA43: call 0x1703e6be */
    RECOMP_FLAGS_IN();
L_1703EA48:
    /* cmp eax, ebx */ /* 0x1703EA48: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x18)) = eax; /* 0x1703EA4A: mov dword ptr [ebp - 0x18], eax */
    if (CMP_L(_flag_a, _flag_b)) goto L_1703EBF7; /* 0x1703EA4D: jl 0x1703ebf7 */
L_1703EA53:
    esi = MEM32(ebp + (-0x40)); /* 0x1703EA53: mov esi, dword ptr [ebp - 0x40] */
    /* cmp esi, ebx */ /* 0x1703EA56: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703EABD; /* 0x1703EA58: je 0x1703eabd */
L_1703EA5A:
    PUSH32(esp, 8); /* 0x1703EA5A: push 8 */
    RECOMP_CALL(sub_1721B01C); /* 0x1703EA5C: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x1703EA61: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x1703EA63: pop ecx */
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703EA14; /* 0x1703EA64: je 0x1703ea14 */
L_1703EA66:
    ecx = MEM32(ebp + (-0x30)); /* 0x1703EA66: mov ecx, dword ptr [ebp - 0x30] */
    MEM32(eax) = esi; /* 0x1703EA69: mov dword ptr [eax], esi */
    MEM32(eax + 0x4) = ecx; /* 0x1703EA6B: mov dword ptr [eax + 4], ecx */
    RECOMP_BACKEDGE();
    goto L_1703EA16; /* 0x1703EA6E: jmp 0x1703ea16 */
L_1703EA70:
    ecx = eax; /* 0x1703EA70: mov ecx, eax */
    edi = 0x17001EDCu; /* 0x1703EA72: mov edi, 0x17001edc */
    esi = ebp + (-0x14); /* 0x1703EA77: lea esi, [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1703EA7A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x1703EA7C: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_1703EAA0; /* 0x1703EA7E: jne 0x1703eaa0 */
L_1703EA80:
    eax = ebp + (-0x20); /* 0x1703EA80: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x1703EA83: push eax */
    PUSH32(esp, ebx); /* 0x1703EA84: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x24))); /* 0x1703EA85: push dword ptr [ebp - 0x24] */
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x1703EA88: push dword ptr [ebp - 0x28] */
    RECOMP_CALL(sub_1703D963); /* 0x1703EA8B: call 0x1703d963 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1703E979; /* 0x1703EA90: jmp 0x1703e979 */
L_1703EA95:
    eax = MEM32(ebp + (-0x20)); /* 0x1703EA95: mov eax, dword ptr [ebp - 0x20] */
    MEM32(ebp + (-0x2C)) = eax; /* 0x1703EA98: mov dword ptr [ebp - 0x2c], eax */
L_1703EA9B:
    MEM32(ebp + (-0x34)) = eax; /* 0x1703EA9B: mov dword ptr [ebp - 0x34], eax */
    goto L_1703EABD; /* 0x1703EA9E: jmp 0x1703eabd */
L_1703EAA0:
    eax = MEM32(ebp + (-0x28)); /* 0x1703EAA0: mov eax, dword ptr [ebp - 0x28] */
    eax = MEM32(eax + 0x10); /* 0x1703EAA3: mov eax, dword ptr [eax + 0x10] */
    /* cmp eax, ebx */ /* 0x1703EAA6: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703EABD; /* 0x1703EAA8: je 0x1703eabd */
L_1703EAAA:
    PUSH32(esp, MEM32(ebp + (-0x24))); /* 0x1703EAAA: push dword ptr [ebp - 0x24] */
    ecx = MEM32(eax); /* 0x1703EAAD: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1703EAAF: push eax */
    RECOMP_ICALL(MEM32(ecx)); /* 0x1703EAB0: call dword ptr [ecx] */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x1703EAB2: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x18)) = eax; /* 0x1703EAB4: mov dword ptr [ebp - 0x18], eax */
    if (CMP_L(_flag_a, _flag_b)) goto L_1703EBF7; /* 0x1703EAB7: jl 0x1703ebf7 */
L_1703EABD:
    eax = MEM32(ebp + (-0x24)); /* 0x1703EABD: mov eax, dword ptr [ebp - 0x24] */
    /* cmp eax, ebx */ /* 0x1703EAC0: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703EACD; /* 0x1703EAC2: je 0x1703eacd */
L_1703EAC4:
    ecx = MEM32(eax); /* 0x1703EAC4: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1703EAC6: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1703EAC7: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x24)) = ebx; /* 0x1703EACA: mov dword ptr [ebp - 0x24], ebx */
L_1703EACD:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x3C))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x3C)) = MEM32(ebp + (-0x3C)) + 1; /* 0x1703EACD: inc dword ptr [ebp - 0x3c] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + (-0x3C)); /* 0x1703EAD0: mov eax, dword ptr [ebp - 0x3c] */
    /* cmp eax, MEM32(ebp + (-0x48)) */ /* 0x1703EAD3: cmp eax, dword ptr [ebp - 0x48] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x48)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1703E90A; /* 0x1703EAD6: jb 0x1703e90a */
L_1703EADC:
    eax = MEM32(ebp + (-0x2C)); /* 0x1703EADC: mov eax, dword ptr [ebp - 0x2c] */
    /* cmp eax, ebx */ /* 0x1703EADF: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1703EAFB; /* 0x1703EAE1: jne 0x1703eafb */
L_1703EAE3:
    MEM32(ebp + (-0x18)) = 0x80004005u; /* 0x1703EAE3: mov dword ptr [ebp - 0x18], 0x80004005 */
    goto L_1703EC0A; /* 0x1703EAEA: jmp 0x1703ec0a */
L_1703EAEF:
    MEM32(ebp + (-0x18)) = 0x8007000Eu; /* 0x1703EAEF: mov dword ptr [ebp - 0x18], 0x8007000e */
    goto L_1703EBF7; /* 0x1703EAF6: jmp 0x1703ebf7 */
L_1703EAFB:
    /* cmp MEM32(eax + 0x48), ebx */ /* 0x1703EAFB: cmp dword ptr [eax + 0x48], ebx */
    _flag_a = (uint32_t)(MEM32(eax + 0x48)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703EB2A; /* 0x1703EAFE: je 0x1703eb2a */
L_1703EB00:
    eax = MEM32(ebp + (-0x28)); /* 0x1703EB00: mov eax, dword ptr [ebp - 0x28] */
    eax = MEM32(eax + 0xC); /* 0x1703EB03: mov eax, dword ptr [eax + 0xc] */
    ecx = MEM32(eax); /* 0x1703EB06: mov ecx, dword ptr [eax] */
    edx = ebp + (-0x20); /* 0x1703EB08: lea edx, [ebp - 0x20] */
    PUSH32(esp, edx); /* 0x1703EB0B: push edx */
    PUSH32(esp, ebx); /* 0x1703EB0C: push ebx */
    PUSH32(esp, eax); /* 0x1703EB0D: push eax */
    RECOMP_ICALL(MEM32(ecx)); /* 0x1703EB0E: call dword ptr [ecx] */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x1703EB10: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x18)) = eax; /* 0x1703EB12: mov dword ptr [ebp - 0x18], eax */
    if (CMP_L(_flag_a, _flag_b)) goto L_1703EBF7; /* 0x1703EB15: jl 0x1703ebf7 */
L_1703EB1B:
    eax = MEM32(ebp + (-0x20)); /* 0x1703EB1B: mov eax, dword ptr [ebp - 0x20] */
    ecx = MEM32(ebp + (-0x2C)); /* 0x1703EB1E: mov ecx, dword ptr [ebp - 0x2c] */
    MEM32(eax + 0x4C) = ecx; /* 0x1703EB21: mov dword ptr [eax + 0x4c], ecx */
    eax = MEM32(ebp + (-0x20)); /* 0x1703EB24: mov eax, dword ptr [ebp - 0x20] */
    MEM32(ebp + (-0x2C)) = eax; /* 0x1703EB27: mov dword ptr [ebp - 0x2c], eax */
L_1703EB2A:
    /* cmp MEM32(ebp + (-0x38)), ebx */ /* 0x1703EB2A: cmp dword ptr [ebp - 0x38], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x38))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1703EBDD; /* 0x1703EB2D: jbe 0x1703ebdd */
L_1703EB33:
    /* cmp MEM32(ebp + (-0x44)), ebx */ /* 0x1703EB33: cmp dword ptr [ebp - 0x44], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x44))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703EBDD; /* 0x1703EB36: je 0x1703ebdd */
L_1703EB3C:
    eax = MEM32(ebp + (-0x28)); /* 0x1703EB3C: mov eax, dword ptr [ebp - 0x28] */
    eax = MEM32(eax + 0x4); /* 0x1703EB3F: mov eax, dword ptr [eax + 4] */
    /* cmp eax, ebx */ /* 0x1703EB42: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703EBDD; /* 0x1703EB44: je 0x1703ebdd */
L_1703EB4A:
    ecx = ebp + (-0x1C); /* 0x1703EB4A: lea ecx, [ebp - 0x1c] */
    PUSH32(esp, ecx); /* 0x1703EB4D: push ecx */
    PUSH32(esp, 0x1Eu); /* 0x1703EB4E: push 0x1e */
    PUSH32(esp, 2); /* 0x1703EB50: push 2 */
    PUSH32(esp, MEM32(ebp + (-0x38))); /* 0x1703EB52: push dword ptr [ebp - 0x38] */
    PUSH32(esp, eax); /* 0x1703EB55: push eax */
    RECOMP_CALL(sub_17039C81); /* 0x1703EB56: call 0x17039c81 */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x1703EB5B: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x18)) = eax; /* 0x1703EB5D: mov dword ptr [ebp - 0x18], eax */
    if (CMP_L(_flag_a, _flag_b)) goto L_1703EBF7; /* 0x1703EB60: jl 0x1703ebf7 */
L_1703EB66:
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x1703EB66: push dword ptr [ebp - 0x1c] */
    PUSH32(esp, MEM32(ebp + (-0x2C))); /* 0x1703EB69: push dword ptr [ebp - 0x2c] */
    RECOMP_CALL(sub_1703D737); /* 0x1703EB6C: call 0x1703d737 */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x1703EB71: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x18)) = eax; /* 0x1703EB73: mov dword ptr [ebp - 0x18], eax */
    if (CMP_L(_flag_a, _flag_b)) goto L_1703EBF7; /* 0x1703EB76: jl 0x1703ebf7 */
L_1703EB78:
    esi = MEM32(ebp + (-0x30)); /* 0x1703EB78: mov esi, dword ptr [ebp - 0x30] */
    goto L_1703EB8D; /* 0x1703EB7B: jmp 0x1703eb8d */
L_1703EB7D:
    PUSH32(esp, MEM32(esi)); /* 0x1703EB7D: push dword ptr [esi] */
    PUSH32(esp, eax); /* 0x1703EB7F: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x20)); /* 0x1703EB80: call dword ptr [ecx + 0x20] */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x1703EB83: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x18)) = eax; /* 0x1703EB85: mov dword ptr [ebp - 0x18], eax */
    if (CMP_L(_flag_a, _flag_b)) goto L_1703EBF7; /* 0x1703EB88: jl 0x1703ebf7 */
L_1703EB8A:
    esi = MEM32(esi + 0x4); /* 0x1703EB8A: mov esi, dword ptr [esi + 4] */
L_1703EB8D:
    /* cmp esi, ebx */ /* 0x1703EB8D: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x1C)); /* 0x1703EB8F: mov eax, dword ptr [ebp - 0x1c] */
    ecx = MEM32(eax); /* 0x1703EB92: mov ecx, dword ptr [eax] */
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1703EB7D; /* 0x1703EB94: jne 0x1703eb7d */
L_1703EB96:
    edx = MEM32(ebp + (-0x30)); /* 0x1703EB96: mov edx, dword ptr [ebp - 0x30] */
    PUSH32(esp, MEM32(edx)); /* 0x1703EB99: push dword ptr [edx] */
    PUSH32(esp, ebx); /* 0x1703EB9B: push ebx */
    PUSH32(esp, eax); /* 0x1703EB9C: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x40)); /* 0x1703EB9D: call dword ptr [ecx + 0x40] */
    RECOMP_FLAGS_IN();
    fp_push(1.0); /* 0x1703EBA0: fld1  */
    eax = MEM32(ebp + (-0x1C)); /* 0x1703EBA2: mov eax, dword ptr [ebp - 0x1c] */
    ecx = MEM32(eax); /* 0x1703EBA5: mov ecx, dword ptr [eax] */
    PUSH32(esp, ecx); /* 0x1703EBA7: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x1703EBA8: fstp dword ptr [esp] */
    PUSH32(esp, ebx); /* 0x1703EBAB: push ebx */
    PUSH32(esp, eax); /* 0x1703EBAC: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x4C)); /* 0x1703EBAD: call dword ptr [ecx + 0x4c] */
    RECOMP_FLAGS_IN();
    fp_push(1.0); /* 0x1703EBB0: fld1  */
    eax = MEM32(ebp + (-0x1C)); /* 0x1703EBB2: mov eax, dword ptr [ebp - 0x1c] */
    ecx = MEM32(eax); /* 0x1703EBB5: mov ecx, dword ptr [eax] */
    PUSH32(esp, ecx); /* 0x1703EBB7: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x1703EBB8: fstp dword ptr [esp] */
    PUSH32(esp, ebx); /* 0x1703EBBB: push ebx */
    PUSH32(esp, eax); /* 0x1703EBBC: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x50)); /* 0x1703EBBD: call dword ptr [ecx + 0x50] */
    RECOMP_FLAGS_IN();
    fp_push(0.0); /* 0x1703EBC0: fldz  */
    eax = MEM32(ebp + (-0x1C)); /* 0x1703EBC2: mov eax, dword ptr [ebp - 0x1c] */
    ecx = MEM32(eax); /* 0x1703EBC5: mov ecx, dword ptr [eax] */
    PUSH32(esp, ecx); /* 0x1703EBC7: push ecx */
    PUSH32(esp, ecx); /* 0x1703EBC8: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x1703EBC9: fstp qword ptr [esp] */
    PUSH32(esp, ebx); /* 0x1703EBCC: push ebx */
    PUSH32(esp, eax); /* 0x1703EBCD: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x54)); /* 0x1703EBCE: call dword ptr [ecx + 0x54] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x1C)); /* 0x1703EBD1: mov eax, dword ptr [ebp - 0x1c] */
    ecx = MEM32(eax); /* 0x1703EBD4: mov ecx, dword ptr [eax] */
    PUSH32(esp, 1); /* 0x1703EBD6: push 1 */
    PUSH32(esp, ebx); /* 0x1703EBD8: push ebx */
    PUSH32(esp, eax); /* 0x1703EBD9: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x58)); /* 0x1703EBDA: call dword ptr [ecx + 0x58] */
    RECOMP_FLAGS_IN();
L_1703EBDD:
    eax = MEM32(ebp + (-0x50)); /* 0x1703EBDD: mov eax, dword ptr [ebp - 0x50] */
    ecx = MEM32(ebp + (-0x2C)); /* 0x1703EBE0: mov ecx, dword ptr [ebp - 0x2c] */
    MEM32(eax) = ecx; /* 0x1703EBE3: mov dword ptr [eax], ecx */
    eax = MEM32(ebp + (-0x44)); /* 0x1703EBE5: mov eax, dword ptr [ebp - 0x44] */
    /* cmp eax, ebx */ /* 0x1703EBE8: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x2C)) = ebx; /* 0x1703EBEA: mov dword ptr [ebp - 0x2c], ebx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703EC0A; /* 0x1703EBED: je 0x1703ec0a */
L_1703EBEF:
    ecx = MEM32(ebp + (-0x1C)); /* 0x1703EBEF: mov ecx, dword ptr [ebp - 0x1c] */
    MEM32(eax) = ecx; /* 0x1703EBF2: mov dword ptr [eax], ecx */
    MEM32(ebp + (-0x1C)) = ebx; /* 0x1703EBF4: mov dword ptr [ebp - 0x1c], ebx */
L_1703EBF7:
    /* cmp MEM32(ebp + (-0x2C)), ebx */ /* 0x1703EBF7: cmp dword ptr [ebp - 0x2c], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703EC0A; /* 0x1703EBFA: je 0x1703ec0a */
L_1703EBFC:
    eax = MEM32(ebp + (-0x28)); /* 0x1703EBFC: mov eax, dword ptr [ebp - 0x28] */
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x1703EBFF: push dword ptr [eax + 0xc] */
    PUSH32(esp, MEM32(ebp + (-0x2C))); /* 0x1703EC02: push dword ptr [ebp - 0x2c] */
    RECOMP_CALL(sub_1703D5E0); /* 0x1703EC05: call 0x1703d5e0 */
    RECOMP_FLAGS_IN();
L_1703EC0A:
    ecx = MEM32(ebp + (-0x30)); /* 0x1703EC0A: mov ecx, dword ptr [ebp - 0x30] */
    /* cmp ecx, ebx */ /* 0x1703EC0D: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703EC18; /* 0x1703EC0F: je 0x1703ec18 */
L_1703EC11:
    PUSH32(esp, 1); /* 0x1703EC11: push 1 */
    RECOMP_CALL(sub_1703CDA5); /* 0x1703EC13: call 0x1703cda5 */
    RECOMP_FLAGS_IN();
L_1703EC18:
    eax = MEM32(ebp + (-0x1C)); /* 0x1703EC18: mov eax, dword ptr [ebp - 0x1c] */
    /* cmp eax, ebx */ /* 0x1703EC1B: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703EC28; /* 0x1703EC1D: je 0x1703ec28 */
L_1703EC1F:
    ecx = MEM32(eax); /* 0x1703EC1F: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1703EC21: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1703EC22: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x1C)) = ebx; /* 0x1703EC25: mov dword ptr [ebp - 0x1c], ebx */
L_1703EC28:
    eax = MEM32(ebp + (-0x24)); /* 0x1703EC28: mov eax, dword ptr [ebp - 0x24] */
    edi = POP32_VAL(esp); /* 0x1703EC2B: pop edi */
    esi = POP32_VAL(esp); /* 0x1703EC2C: pop esi */
    /* cmp eax, ebx */ /* 0x1703EC2D: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = POP32_VAL(esp); /* 0x1703EC2F: pop ebx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703EC38; /* 0x1703EC30: je 0x1703ec38 */
L_1703EC32:
    ecx = MEM32(eax); /* 0x1703EC32: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1703EC34: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1703EC35: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
L_1703EC38:
    ecx = MEM32(ebp + (-0x4)); /* 0x1703EC38: mov ecx, dword ptr [ebp - 4] */
    eax = MEM32(ebp + (-0x18)); /* 0x1703EC3B: mov eax, dword ptr [ebp - 0x18] */
    RECOMP_CALL(sub_1721B76C); /* 0x1703EC3E: call 0x1721b76c */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1703EC43: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1703EC44: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1703EC4C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1703EC4Cu);

L_1703EC4C:
    edi = edi; /* 0x1703EC4C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1703EC4E: push ebp */
    ebp = esp; /* 0x1703EC4F: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x30u; /* 0x1703EC51: sub esp, 0x30 */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x18); /* 0x1703EC54: mov eax, dword ptr [ebp + 0x18] */
    PUSH32(esp, ebx); /* 0x1703EC57: push ebx */
    ebx = MEM32(ebp + 0x24); /* 0x1703EC58: mov ebx, dword ptr [ebp + 0x24] */
    MEM32(ebp + (-0xC)) = eax; /* 0x1703EC5B: mov dword ptr [ebp - 0xc], eax */
    PUSH32(esp, esi); /* 0x1703EC5E: push esi */
    eax = ebp + (-0x10); /* 0x1703EC5F: lea eax, [ebp - 0x10] */
    PUSH32(esp, edi); /* 0x1703EC62: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1703EC63: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ebx, edi */ /* 0x1703EC65: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x24)) = eax; /* 0x1703EC67: mov dword ptr [ebp - 0x24], eax */
    eax = MEM32(ebp + 0x20); /* 0x1703EC6A: mov eax, dword ptr [ebp + 0x20] */
    MEM32(ebp + (-0x4)) = edi; /* 0x1703EC6D: mov dword ptr [ebp - 4], edi */
    MEM32(ebp + (-0x8)) = edi; /* 0x1703EC70: mov dword ptr [ebp - 8], edi */
    MEM32(ebp + (-0x10)) = 0x17001F3Cu; /* 0x1703EC73: mov dword ptr [ebp - 0x10], 0x17001f3c */
    MEM32(eax) = edi; /* 0x1703EC7A: mov dword ptr [eax], edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703EC80; /* 0x1703EC7C: je 0x1703ec80 */
L_1703EC7E:
    MEM32(ebx) = edi; /* 0x1703EC7E: mov dword ptr [ebx], edi */
L_1703EC80:
    eax = MEM32(ebp + 0x10); /* 0x1703EC80: mov eax, dword ptr [ebp + 0x10] */
    fp_push(*(double*)ADDR(0x17003258)); /* 0x1703EC83: fld qword ptr [0x17003258] */
    MEM32(ebp + (-0x30)) = eax; /* 0x1703EC89: mov dword ptr [ebp - 0x30], eax */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x18)) = _v; } /* 0x1703EC8C: fstp qword ptr [ebp - 0x18] */
    eax = MEM32(ebp + 0x14); /* 0x1703EC8F: mov eax, dword ptr [ebp + 0x14] */
    MEM32(ebp + (-0x28)) = eax; /* 0x1703EC92: mov dword ptr [ebp - 0x28], eax */
    eax = MEM32(ebp + 0x1C); /* 0x1703EC95: mov eax, dword ptr [ebp + 0x1c] */
    MEM32(ebp + (-0x20)) = eax; /* 0x1703EC98: mov dword ptr [ebp - 0x20], eax */
    eax = ebp + (-0x4); /* 0x1703EC9B: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x1703EC9E: push eax */
    MEM32(ebp + (-0x2C)) = edi; /* 0x1703EC9F: mov dword ptr [ebp - 0x2c], edi */
    RECOMP_CALL(sub_171A7842); /* 0x1703ECA2: call 0x171a7842 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1703ECA7: mov esi, eax */
    /* cmp esi, edi */ /* 0x1703ECA9: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1703ED23; /* 0x1703ECAB: jl 0x1703ed23 */
L_1703ECAD:
    eax = MEM32(ebp + (-0x4)); /* 0x1703ECAD: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(eax); /* 0x1703ECB0: mov ecx, dword ptr [eax] */
    PUSH32(esp, 0xCCEu); /* 0x1703ECB2: push 0xcce */
    PUSH32(esp, 0x17225358u); /* 0x1703ECB7: push 0x17225358 */
    PUSH32(esp, eax); /* 0x1703ECBC: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x14)); /* 0x1703ECBD: call dword ptr [ecx + 0x14] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1703ECC0: mov esi, eax */
    /* cmp esi, edi */ /* 0x1703ECC2: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1703ED23; /* 0x1703ECC4: jl 0x1703ed23 */
L_1703ECC6:
    eax = MEM32(ebp + (-0x4)); /* 0x1703ECC6: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(eax); /* 0x1703ECC9: mov ecx, dword ptr [eax] */
    PUSH32(esp, 0xC98u); /* 0x1703ECCB: push 0xc98 */
    PUSH32(esp, 0x170025B8u); /* 0x1703ECD0: push 0x170025b8 */
    PUSH32(esp, eax); /* 0x1703ECD5: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x14)); /* 0x1703ECD6: call dword ptr [ecx + 0x14] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1703ECD9: mov esi, eax */
    /* cmp esi, edi */ /* 0x1703ECDB: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1703ED23; /* 0x1703ECDD: jl 0x1703ed23 */
L_1703ECDF:
    eax = MEM32(ebp + (-0x4)); /* 0x1703ECDF: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(eax); /* 0x1703ECE2: mov ecx, dword ptr [eax] */
    PUSH32(esp, 0x65Bu); /* 0x1703ECE4: push 0x65b */
    PUSH32(esp, 0x17001F58u); /* 0x1703ECE9: push 0x17001f58 */
    PUSH32(esp, eax); /* 0x1703ECEE: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x14)); /* 0x1703ECEF: call dword ptr [ecx + 0x14] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1703ECF2: mov esi, eax */
    /* cmp esi, edi */ /* 0x1703ECF4: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1703ED23; /* 0x1703ECF6: jl 0x1703ed23 */
L_1703ECF8:
    eax = MEM32(ebp + (-0x4)); /* 0x1703ECF8: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(eax); /* 0x1703ECFB: mov ecx, dword ptr [eax] */
    edx = ebp + (-0x8); /* 0x1703ECFD: lea edx, [ebp - 8] */
    PUSH32(esp, edx); /* 0x1703ED00: push edx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1703ED01: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1703ED04: push dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x1703ED07: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xC)); /* 0x1703ED08: call dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1703ED0B: mov esi, eax */
    /* cmp esi, edi */ /* 0x1703ED0D: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1703ED23; /* 0x1703ED0F: jl 0x1703ed23 */
L_1703ED11:
    PUSH32(esp, ebx); /* 0x1703ED11: push ebx */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x1703ED12: push dword ptr [ebp + 0x20] */
    eax = ebp + (-0x30); /* 0x1703ED15: lea eax, [ebp - 0x30] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x1703ED18: push dword ptr [ebp - 8] */
    PUSH32(esp, eax); /* 0x1703ED1B: push eax */
    RECOMP_CALL(sub_1703E8B3); /* 0x1703ED1C: call 0x1703e8b3 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1703ED21: mov esi, eax */
L_1703ED23:
    eax = MEM32(ebp + (-0x8)); /* 0x1703ED23: mov eax, dword ptr [ebp - 8] */
    /* cmp eax, edi */ /* 0x1703ED26: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703ED33; /* 0x1703ED28: je 0x1703ed33 */
L_1703ED2A:
    ecx = MEM32(eax); /* 0x1703ED2A: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1703ED2C: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1703ED2D: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x8)) = edi; /* 0x1703ED30: mov dword ptr [ebp - 8], edi */
L_1703ED33:
    eax = MEM32(ebp + (-0x4)); /* 0x1703ED33: mov eax, dword ptr [ebp - 4] */
    /* cmp eax, edi */ /* 0x1703ED36: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703ED40; /* 0x1703ED38: je 0x1703ed40 */
L_1703ED3A:
    ecx = MEM32(eax); /* 0x1703ED3A: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1703ED3C: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1703ED3D: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
L_1703ED40:
    edi = POP32_VAL(esp); /* 0x1703ED40: pop edi */
    eax = esi; /* 0x1703ED41: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1703ED43: pop esi */
    ebx = POP32_VAL(esp); /* 0x1703ED44: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1703ED45: leave  */
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x1703ED46: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_1703ED4E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1703ED4Eu);

L_1703ED4E:
    edi = edi; /* 0x1703ED4E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1703ED50: push ebp */
    ebp = esp; /* 0x1703ED51: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1703ED53: push ecx */
    PUSH32(esp, ecx); /* 0x1703ED54: push ecx */
    ecx = MEM32(ebp + 0x8); /* 0x1703ED55: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1703ED58: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, edx */ /* 0x1703ED5A: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703ED99; /* 0x1703ED5C: je 0x1703ed99 */
L_1703ED5E:
    eax = MEM32(ebp + 0xC); /* 0x1703ED5E: mov eax, dword ptr [ebp + 0xc] */
    /* cmp eax, edx */ /* 0x1703ED61: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703ED99; /* 0x1703ED63: je 0x1703ed99 */
L_1703ED65:
    /* cmp MEM32(ebp + 0x14), edx */ /* 0x1703ED65: cmp dword ptr [ebp + 0x14], edx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703ED99; /* 0x1703ED68: je 0x1703ed99 */
L_1703ED6A:
    /* cmp MEM32(ebp + 0x18), edx */ /* 0x1703ED6A: cmp dword ptr [ebp + 0x18], edx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703ED99; /* 0x1703ED6D: je 0x1703ed99 */
L_1703ED6F:
    /* cmp MEM32(ebp + 0x20), edx */ /* 0x1703ED6F: cmp dword ptr [ebp + 0x20], edx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x20)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703ED99; /* 0x1703ED72: je 0x1703ed99 */
L_1703ED74:
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x1703ED74: push dword ptr [ebp + 0x24] */
    MEM32(ebp + (-0x4)) = eax; /* 0x1703ED77: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x1703ED7A: push dword ptr [ebp + 0x20] */
    eax = ebp + (-0x8); /* 0x1703ED7D: lea eax, [ebp - 8] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1703ED80: push dword ptr [ebp + 0x1c] */
    MEM32(ebp + (-0x8)) = ecx; /* 0x1703ED83: mov dword ptr [ebp - 8], ecx */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1703ED86: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1703ED89: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1703ED8C: push dword ptr [ebp + 0x10] */
    PUSH32(esp, 3); /* 0x1703ED8F: push 3 */
    PUSH32(esp, eax); /* 0x1703ED91: push eax */
    RECOMP_CALL(sub_1703EC4C); /* 0x1703ED92: call 0x1703ec4c */
    RECOMP_FLAGS_IN();
    goto L_1703ED9E; /* 0x1703ED97: jmp 0x1703ed9e */
L_1703ED99:
    eax = 0x8876086Cu; /* 0x1703ED99: mov eax, 0x8876086c */
L_1703ED9E:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1703ED9E: leave  */
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x1703ED9F: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_1703EDA7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1703EDA7u);

L_1703EDA7:
    edi = edi; /* 0x1703EDA7: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1703EDA9: push ebp */
    ebp = esp; /* 0x1703EDAA: mov ebp, esp */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1703EDAC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x8), eax */ /* 0x1703EDAE: cmp dword ptr [ebp + 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703EDE0; /* 0x1703EDB1: je 0x1703ede0 */
L_1703EDB3:
    /* cmp MEM32(ebp + 0x10), eax */ /* 0x1703EDB3: cmp dword ptr [ebp + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703EDE0; /* 0x1703EDB6: je 0x1703ede0 */
L_1703EDB8:
    /* cmp MEM32(ebp + 0x14), eax */ /* 0x1703EDB8: cmp dword ptr [ebp + 0x14], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703EDE0; /* 0x1703EDBB: je 0x1703ede0 */
L_1703EDBD:
    /* cmp MEM32(ebp + 0x1C), eax */ /* 0x1703EDBD: cmp dword ptr [ebp + 0x1c], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703EDE0; /* 0x1703EDC0: je 0x1703ede0 */
L_1703EDC2:
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x1703EDC2: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1703EDC5: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1703EDC8: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1703EDCB: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1703EDCE: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1703EDD1: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 1); /* 0x1703EDD4: push 1 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1703EDD6: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1703EC4C); /* 0x1703EDD9: call 0x1703ec4c */
    RECOMP_FLAGS_IN();
    goto L_1703EDE5; /* 0x1703EDDE: jmp 0x1703ede5 */
L_1703EDE0:
    eax = 0x8876086Cu; /* 0x1703EDE0: mov eax, 0x8876086c */
L_1703EDE5:
    ebp = POP32_VAL(esp); /* 0x1703EDE5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x1703EDE6: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_1703EDEE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1703EDEEu);

L_1703EDEE:
    edi = edi; /* 0x1703EDEE: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1703EDF0: push ebp */
    ebp = esp; /* 0x1703EDF1: mov ebp, esp */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1703EDF3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x8), eax */ /* 0x1703EDF5: cmp dword ptr [ebp + 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703EE26; /* 0x1703EDF8: je 0x1703ee26 */
L_1703EDFA:
    /* cmp MEM32(ebp + 0x10), eax */ /* 0x1703EDFA: cmp dword ptr [ebp + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703EE26; /* 0x1703EDFD: je 0x1703ee26 */
L_1703EDFF:
    /* cmp MEM32(ebp + 0x14), eax */ /* 0x1703EDFF: cmp dword ptr [ebp + 0x14], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703EE26; /* 0x1703EE02: je 0x1703ee26 */
L_1703EE04:
    /* cmp MEM32(ebp + 0x1C), eax */ /* 0x1703EE04: cmp dword ptr [ebp + 0x1c], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703EE26; /* 0x1703EE07: je 0x1703ee26 */
L_1703EE09:
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x1703EE09: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1703EE0C: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1703EE0F: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1703EE12: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1703EE15: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1703EE18: push dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x1703EE1B: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1703EE1C: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1703EC4C); /* 0x1703EE1F: call 0x1703ec4c */
    RECOMP_FLAGS_IN();
    goto L_1703EE2B; /* 0x1703EE24: jmp 0x1703ee2b */
L_1703EE26:
    eax = 0x8876086Cu; /* 0x1703EE26: mov eax, 0x8876086c */
L_1703EE2B:
    ebp = POP32_VAL(esp); /* 0x1703EE2B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x1703EE2C: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_1703EE34(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1703EE34u);

L_1703EE34:
    edi = edi; /* 0x1703EE34: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1703EE36: push ebp */
    ebp = esp; /* 0x1703EE37: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x328u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x328u; /* 0x1703EE39: sub esp, 0x328 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1703EE3F: push ebx */
    PUSH32(esp, esi); /* 0x1703EE40: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1703EE41: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1703EE44: push edi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1703EE45: push dword ptr [ebp + 0xc] */
    eax = esi + 0x4; /* 0x1703EE48: lea eax, [esi + 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1703EE4B: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1703EE4D: push eax */
    eax = ebp + (-0x5C); /* 0x1703EE4E: lea eax, [ebp - 0x5c] */
    PUSH32(esp, eax); /* 0x1703EE51: push eax */
    MEM32(ebp + (-0xC)) = ebx; /* 0x1703EE52: mov dword ptr [ebp - 0xc], ebx */
    MEM32(ebp + (-0x8)) = ebx; /* 0x1703EE55: mov dword ptr [ebp - 8], ebx */
    MEM32(ebp + (-0x4)) = ebx; /* 0x1703EE58: mov dword ptr [ebp - 4], ebx */
    MEM32(ebp + (-0x10)) = ebx; /* 0x1703EE5B: mov dword ptr [ebp - 0x10], ebx */
    RECOMP_CALL(sub_17041794); /* 0x1703EE5E: call 0x17041794 */
    RECOMP_FLAGS_IN();
    esi = MEM32(esi + 0x44); /* 0x1703EE63: mov esi, dword ptr [esi + 0x44] */
    edi = MEM32(ebp + 0x10); /* 0x1703EE66: mov edi, dword ptr [ebp + 0x10] */
    goto L_1703EF8E; /* 0x1703EE69: jmp 0x1703ef8e */
L_1703EE6E:
    /* cmp MEM32(esi + 0x4), 1 */ /* 0x1703EE6E: cmp dword ptr [esi + 4], 1 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1703EF8B; /* 0x1703EE72: jne 0x1703ef8b */
L_1703EE78:
    eax = MEM32(esi + 0x8); /* 0x1703EE78: mov eax, dword ptr [esi + 8] */
    ecx = MEM32(eax); /* 0x1703EE7B: mov ecx, dword ptr [eax] */
    edx = ebp + (-0x328); /* 0x1703EE7D: lea edx, [ebp - 0x328] */
    PUSH32(esp, edx); /* 0x1703EE83: push edx */
    PUSH32(esp, eax); /* 0x1703EE84: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x1C)); /* 0x1703EE85: call dword ptr [ecx + 0x1c] */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x328); /* 0x1703EE88: lea eax, [ebp - 0x328] */
    PUSH32(esp, eax); /* 0x1703EE8E: push eax */
    ecx = ebp + (-0x120); /* 0x1703EE8F: lea ecx, [ebp - 0x120] */
    RECOMP_CALL(sub_1703D7E2); /* 0x1703EE95: call 0x1703d7e2 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x98)), ebx */ /* 0x1703EE9A: cmp dword ptr [ebp - 0x98], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x98))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703EF8B; /* 0x1703EEA0: je 0x1703ef8b */
L_1703EEA6:
    eax = MEM32(esi + 0x8); /* 0x1703EEA6: mov eax, dword ptr [esi + 8] */
    ecx = MEM32(eax); /* 0x1703EEA9: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1703EEAB: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x14)); /* 0x1703EEAC: call dword ptr [ecx + 0x14] */
    RECOMP_FLAGS_IN();
    edx = ebp + (-0x4); /* 0x1703EEAF: lea edx, [ebp - 4] */
    ebx = eax; /* 0x1703EEB2: mov ebx, eax */
    eax = MEM32(esi + 0x8); /* 0x1703EEB4: mov eax, dword ptr [esi + 8] */
    ecx = MEM32(eax); /* 0x1703EEB7: mov ecx, dword ptr [eax] */
    PUSH32(esp, edx); /* 0x1703EEB9: push edx */
    PUSH32(esp, eax); /* 0x1703EEBA: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x34)); /* 0x1703EEBB: call dword ptr [ecx + 0x34] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1703EEBE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xC)) = eax; /* 0x1703EEC0: mov dword ptr [ebp - 0xc], eax */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1703EFC0; /* 0x1703EEC3: jl 0x1703efc0 */
L_1703EEC9:
    eax = MEM32(ebp + (-0x4)); /* 0x1703EEC9: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(eax); /* 0x1703EECC: mov ecx, dword ptr [eax] */
    PUSH32(esp, 0x800u); /* 0x1703EECE: push 0x800 */
    edx = ebp + (-0x8); /* 0x1703EED3: lea edx, [ebp - 8] */
    PUSH32(esp, edx); /* 0x1703EED6: push edx */
    PUSH32(esp, 0); /* 0x1703EED7: push 0 */
    PUSH32(esp, 0); /* 0x1703EED9: push 0 */
    PUSH32(esp, eax); /* 0x1703EEDB: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x2C)); /* 0x1703EEDC: call dword ptr [ecx + 0x2c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1703EEDF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xC)) = eax; /* 0x1703EEE1: mov dword ptr [ebp - 0xc], eax */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1703EFC0; /* 0x1703EEE4: jl 0x1703efc0 */
L_1703EEEA:
    /* test ebx, ebx */ /* 0x1703EEEA: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(ebp + (-0x8)); /* 0x1703EEEC: mov edx, dword ptr [ebp - 8] */
    MEM32(ebp + 0xC) = edx; /* 0x1703EEEF: mov dword ptr [ebp + 0xc], edx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703EF6B; /* 0x1703EEF2: jbe 0x1703ef6b */
L_1703EEF4:
    eax = MEM32(ebp + (-0x98)); /* 0x1703EEF4: mov eax, dword ptr [ebp - 0x98] */
    ecx = (uint32_t)MEM16(eax + 0x2); /* 0x1703EEFA: movzx ecx, word ptr [eax + 2] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x1703EEFE: add ecx, edx */
    _flag_k = FK_ADD;
    fp_push(*(float*)&MEM32(ecx)); /* 0x1703EF00: fld dword ptr [ecx] */
    fp_push(*(double*)ADDR(0x17001D90)); /* 0x1703EF02: fld qword ptr [0x17001d90] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1703EF08: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1703EF0A: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x1703EF0C: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1703EF35; /* 0x1703EF0F: jp 0x1703ef35 */
L_1703EF11:
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x1703EF11: fld dword ptr [ecx + 4] */
    fp_push(*(double*)ADDR(0x17001D90)); /* 0x1703EF14: fld qword ptr [0x17001d90] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1703EF1A: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1703EF1C: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x1703EF1E: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1703EF35; /* 0x1703EF21: jp 0x1703ef35 */
L_1703EF23:
    fp_push(*(float*)&MEM32(ecx + 0x8)); /* 0x1703EF23: fld dword ptr [ecx + 8] */
    fp_push(*(double*)ADDR(0x17001D90)); /* 0x1703EF26: fld qword ptr [0x17001d90] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1703EF2C: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1703EF2E: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x1703EF30: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_1703EF62; /* 0x1703EF33: jnp 0x1703ef62 */
L_1703EF35:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) + 1; /* 0x1703EF35: inc dword ptr [ebp - 0x10] */
    _flag_k = FK_INC;
    eax = ebp + (-0x5C); /* 0x1703EF38: lea eax, [ebp - 0x5c] */
    PUSH32(esp, eax); /* 0x1703EF3B: push eax */
    PUSH32(esp, ecx); /* 0x1703EF3C: push ecx */
    eax = ebp + (-0x1C); /* 0x1703EF3D: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1703EF40: push eax */
    RECOMP_CALL(sub_17040E7B); /* 0x1703EF41: call 0x17040e7b */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + (-0x1C))); /* 0x1703EF46: fld dword ptr [ebp - 0x1c] */
    _st[0] += (double)*(float*)ADDR(edi); /* 0x1703EF49: fadd dword ptr [edi] */
    edx = MEM32(ebp + 0xC); /* 0x1703EF4B: mov edx, dword ptr [ebp + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edi) = _v; } /* 0x1703EF4E: fstp dword ptr [edi] */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x1703EF50: fld dword ptr [ebp - 0x18] */
    _st[0] += (double)*(float*)ADDR(edi + 0x4); /* 0x1703EF53: fadd dword ptr [edi + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edi + 0x4) = _v; } /* 0x1703EF56: fstp dword ptr [edi + 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x1703EF59: fld dword ptr [ebp - 0x14] */
    _st[0] += (double)*(float*)ADDR(edi + 0x8); /* 0x1703EF5C: fadd dword ptr [edi + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edi + 0x8) = _v; } /* 0x1703EF5F: fstp dword ptr [edi + 8] */
L_1703EF62:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x60)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + (-0x60)); /* 0x1703EF62: add edx, dword ptr [ebp - 0x60] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x1703EF65: dec ebx */
    _flag_k = FK_DEC;
    MEM32(ebp + 0xC) = edx; /* 0x1703EF66: mov dword ptr [ebp + 0xc], edx */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1703EEF4; /* 0x1703EF69: jne 0x1703eef4 */
L_1703EF6B:
    eax = MEM32(ebp + (-0x4)); /* 0x1703EF6B: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(eax); /* 0x1703EF6E: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1703EF70: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x30)); /* 0x1703EF71: call dword ptr [ecx + 0x30] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x1703EF74: mov eax, dword ptr [ebp - 4] */
    /* test eax, eax */ /* 0x1703EF77: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703EF85; /* 0x1703EF79: je 0x1703ef85 */
L_1703EF7B:
    ecx = MEM32(eax); /* 0x1703EF7B: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1703EF7D: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1703EF7E: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1703EF81: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1703EF85:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x1703EF85: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1703EF89: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1703EF8B:
    esi = MEM32(esi + 0x20); /* 0x1703EF8B: mov esi, dword ptr [esi + 0x20] */
L_1703EF8E:
    /* cmp esi, ebx */ /* 0x1703EF8E: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1703EE6E; /* 0x1703EF90: jne 0x1703ee6e */
L_1703EF96:
    eax = MEM32(ebp + (-0x10)); /* 0x1703EF96: mov eax, dword ptr [ebp - 0x10] */
    ebx = MEM32(ebp + 0x14); /* 0x1703EF99: mov ebx, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebx) = MEM32(ebx) + eax; /* 0x1703EF9C: add dword ptr [ebx], eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x8); /* 0x1703EF9E: mov eax, dword ptr [ebp + 8] */
    esi = MEM32(eax + 0x4C); /* 0x1703EFA1: mov esi, dword ptr [eax + 0x4c] */
    goto L_1703EFBC; /* 0x1703EFA4: jmp 0x1703efbc */
L_1703EFA6:
    PUSH32(esp, ebx); /* 0x1703EFA6: push ebx */
    PUSH32(esp, edi); /* 0x1703EFA7: push edi */
    eax = ebp + (-0x5C); /* 0x1703EFA8: lea eax, [ebp - 0x5c] */
    PUSH32(esp, eax); /* 0x1703EFAB: push eax */
    PUSH32(esp, esi); /* 0x1703EFAC: push esi */
    RECOMP_CALL(sub_1703EE34); /* 0x1703EFAD: call 0x1703ee34 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1703EFB2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xC)) = eax; /* 0x1703EFB4: mov dword ptr [ebp - 0xc], eax */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1703EFC0; /* 0x1703EFB7: jl 0x1703efc0 */
L_1703EFB9:
    esi = MEM32(esi + 0x48); /* 0x1703EFB9: mov esi, dword ptr [esi + 0x48] */
L_1703EFBC:
    /* test esi, esi */ /* 0x1703EFBC: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1703EFA6; /* 0x1703EFBE: jne 0x1703efa6 */
L_1703EFC0:
    /* cmp MEM32(ebp + (-0x8)), 0 */ /* 0x1703EFC0: cmp dword ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = POP32_VAL(esp); /* 0x1703EFC4: pop edi */
    esi = POP32_VAL(esp); /* 0x1703EFC5: pop esi */
    ebx = POP32_VAL(esp); /* 0x1703EFC6: pop ebx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703EFD2; /* 0x1703EFC7: je 0x1703efd2 */
L_1703EFC9:
    eax = MEM32(ebp + (-0x4)); /* 0x1703EFC9: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(eax); /* 0x1703EFCC: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1703EFCE: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x30)); /* 0x1703EFCF: call dword ptr [ecx + 0x30] */
    RECOMP_FLAGS_IN();
L_1703EFD2:
    eax = MEM32(ebp + (-0x4)); /* 0x1703EFD2: mov eax, dword ptr [ebp - 4] */
    /* test eax, eax */ /* 0x1703EFD5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703EFDF; /* 0x1703EFD7: je 0x1703efdf */
L_1703EFD9:
    ecx = MEM32(eax); /* 0x1703EFD9: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1703EFDB: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1703EFDC: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
L_1703EFDF:
    eax = MEM32(ebp + (-0xC)); /* 0x1703EFDF: mov eax, dword ptr [ebp - 0xc] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1703EFE2: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1703EFE3: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1703EFEB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1703EFEBu);

L_1703EFEB:
    edi = edi; /* 0x1703EFEB: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1703EFED: push ebp */
    ebp = esp; /* 0x1703EFEE: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x324u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x324u; /* 0x1703EFF0: sub esp, 0x324 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1703EFF6: push ebx */
    PUSH32(esp, esi); /* 0x1703EFF7: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1703EFF8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1703EFFA: push edi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1703EFFB: push dword ptr [ebp + 0xc] */
    edi = MEM32(ebp + 0x8); /* 0x1703EFFE: mov edi, dword ptr [ebp + 8] */
    MEM32(ebp + (-0xC)) = eax; /* 0x1703F001: mov dword ptr [ebp - 0xc], eax */
    MEM32(ebp + (-0x8)) = eax; /* 0x1703F004: mov dword ptr [ebp - 8], eax */
    MEM32(ebp + (-0x4)) = eax; /* 0x1703F007: mov dword ptr [ebp - 4], eax */
    eax = edi + 0x4; /* 0x1703F00A: lea eax, [edi + 4] */
    PUSH32(esp, eax); /* 0x1703F00D: push eax */
    eax = ebp + (-0x58); /* 0x1703F00E: lea eax, [ebp - 0x58] */
    PUSH32(esp, eax); /* 0x1703F011: push eax */
    RECOMP_CALL(sub_17041794); /* 0x1703F012: call 0x17041794 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + 0x14); /* 0x1703F017: mov ebx, dword ptr [ebp + 0x14] */
    eax = MEM32(ebx); /* 0x1703F01A: mov eax, dword ptr [ebx] */
    esi = MEM32(edi + 0x44); /* 0x1703F01C: mov esi, dword ptr [edi + 0x44] */
    MEM32(ebp + 0xC) = eax; /* 0x1703F01F: mov dword ptr [ebp + 0xc], eax */
    goto L_1703F173; /* 0x1703F022: jmp 0x1703f173 */
L_1703F027:
    /* cmp MEM32(esi + 0x4), 1 */ /* 0x1703F027: cmp dword ptr [esi + 4], 1 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1703F170; /* 0x1703F02B: jne 0x1703f170 */
L_1703F031:
    eax = MEM32(esi + 0x8); /* 0x1703F031: mov eax, dword ptr [esi + 8] */
    ecx = MEM32(eax); /* 0x1703F034: mov ecx, dword ptr [eax] */
    edx = ebp + (-0x324); /* 0x1703F036: lea edx, [ebp - 0x324] */
    PUSH32(esp, edx); /* 0x1703F03C: push edx */
    PUSH32(esp, eax); /* 0x1703F03D: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x1C)); /* 0x1703F03E: call dword ptr [ecx + 0x1c] */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x324); /* 0x1703F041: lea eax, [ebp - 0x324] */
    PUSH32(esp, eax); /* 0x1703F047: push eax */
    ecx = ebp + (-0x11C); /* 0x1703F048: lea ecx, [ebp - 0x11c] */
    RECOMP_CALL(sub_1703D7E2); /* 0x1703F04E: call 0x1703d7e2 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x94)), 0 */ /* 0x1703F053: cmp dword ptr [ebp - 0x94], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x94))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703F170; /* 0x1703F05A: je 0x1703f170 */
L_1703F060:
    eax = MEM32(esi + 0x8); /* 0x1703F060: mov eax, dword ptr [esi + 8] */
    ecx = MEM32(eax); /* 0x1703F063: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1703F065: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x14)); /* 0x1703F066: call dword ptr [ecx + 0x14] */
    RECOMP_FLAGS_IN();
    edx = ebp + (-0x4); /* 0x1703F069: lea edx, [ebp - 4] */
    edi = eax; /* 0x1703F06C: mov edi, eax */
    eax = MEM32(esi + 0x8); /* 0x1703F06E: mov eax, dword ptr [esi + 8] */
    ecx = MEM32(eax); /* 0x1703F071: mov ecx, dword ptr [eax] */
    PUSH32(esp, edx); /* 0x1703F073: push edx */
    PUSH32(esp, eax); /* 0x1703F074: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x34)); /* 0x1703F075: call dword ptr [ecx + 0x34] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1703F078: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xC)) = eax; /* 0x1703F07A: mov dword ptr [ebp - 0xc], eax */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1703F1A1; /* 0x1703F07D: jl 0x1703f1a1 */
L_1703F083:
    eax = MEM32(ebp + (-0x4)); /* 0x1703F083: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(eax); /* 0x1703F086: mov ecx, dword ptr [eax] */
    PUSH32(esp, 0x800u); /* 0x1703F088: push 0x800 */
    edx = ebp + (-0x8); /* 0x1703F08D: lea edx, [ebp - 8] */
    PUSH32(esp, edx); /* 0x1703F090: push edx */
    PUSH32(esp, 0); /* 0x1703F091: push 0 */
    PUSH32(esp, 0); /* 0x1703F093: push 0 */
    PUSH32(esp, eax); /* 0x1703F095: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x2C)); /* 0x1703F096: call dword ptr [ecx + 0x2c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1703F099: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xC)) = eax; /* 0x1703F09B: mov dword ptr [ebp - 0xc], eax */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1703F1A1; /* 0x1703F09E: jl 0x1703f1a1 */
L_1703F0A4:
    /* test edi, edi */ /* 0x1703F0A4: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = MEM32(ebp + (-0x8)); /* 0x1703F0A6: mov ebx, dword ptr [ebp - 8] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703F14C; /* 0x1703F0A9: jbe 0x1703f14c */
L_1703F0AF:
    eax = MEM32(ebp + (-0x94)); /* 0x1703F0AF: mov eax, dword ptr [ebp - 0x94] */
    ecx = (uint32_t)MEM16(eax + 0x2); /* 0x1703F0B5: movzx ecx, word ptr [eax + 2] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ebx; /* 0x1703F0B9: add ecx, ebx */
    _flag_k = FK_ADD;
    fp_push(*(float*)&MEM32(ecx)); /* 0x1703F0BB: fld dword ptr [ecx] */
    fp_push(*(double*)ADDR(0x17001D90)); /* 0x1703F0BD: fld qword ptr [0x17001d90] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1703F0C3: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1703F0C5: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x1703F0C7: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1703F0F0; /* 0x1703F0CA: jp 0x1703f0f0 */
L_1703F0CC:
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x1703F0CC: fld dword ptr [ecx + 4] */
    fp_push(*(double*)ADDR(0x17001D90)); /* 0x1703F0CF: fld qword ptr [0x17001d90] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1703F0D5: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1703F0D7: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x1703F0D9: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1703F0F0; /* 0x1703F0DC: jp 0x1703f0f0 */
L_1703F0DE:
    fp_push(*(float*)&MEM32(ecx + 0x8)); /* 0x1703F0DE: fld dword ptr [ecx + 8] */
    fp_push(*(double*)ADDR(0x17001D90)); /* 0x1703F0E1: fld qword ptr [0x17001d90] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1703F0E7: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1703F0E9: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x1703F0EB: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_1703F142; /* 0x1703F0EE: jnp 0x1703f142 */
L_1703F0F0:
    eax = ebp + (-0x58); /* 0x1703F0F0: lea eax, [ebp - 0x58] */
    PUSH32(esp, eax); /* 0x1703F0F3: push eax */
    PUSH32(esp, ecx); /* 0x1703F0F4: push ecx */
    eax = ebp + (-0x18); /* 0x1703F0F5: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x1703F0F8: push eax */
    RECOMP_CALL(sub_17040E7B); /* 0x1703F0F9: call 0x17040e7b */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x1703F0FE: fld dword ptr [ebp - 0x18] */
    eax = MEM32(ebp + 0x10); /* 0x1703F101: mov eax, dword ptr [ebp + 0x10] */
    _st[0] -= (double)*(float*)ADDR(eax); /* 0x1703F104: fsub dword ptr [eax] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x1703F106: fst dword ptr [ebp - 0x18] */
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x1703F109: fld dword ptr [ebp - 0x14] */
    _st[0] -= (double)*(float*)ADDR(eax + 0x4); /* 0x1703F10C: fsub dword ptr [eax + 4] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x1703F10F: fst dword ptr [ebp - 0x14] */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x1703F112: fld dword ptr [ebp - 0x10] */
    _st[0] -= (double)*(float*)ADDR(eax + 0x8); /* 0x1703F115: fsub dword ptr [eax + 8] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x1703F118: fst dword ptr [ebp - 0x10] */
    fp_push(_st[0]); /* 0x1703F11B: fld st(0) */
    _st[0] *= _st[1]; /* 0x1703F11D: fmul st(1) */
    fp_push(_st[2]); /* 0x1703F11F: fld st(2) */
    _st[0] *= _st[3]; /* 0x1703F121: fmul st(3) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1703F123: faddp st(1) */
    fp_push(_st[3]); /* 0x1703F125: fld st(3) */
    _st[0] *= _st[4]; /* 0x1703F127: fmul st(4) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1703F129: faddp st(1) */
    { _st[3] = _st[0]; g_st_i64[3] = g_st_i64[0]; fp_pop(); } /* 0x1703F12B: fstp st(3) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1703F12D: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1703F12F: fstp st(0) */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + 0xC)); /* 0x1703F131: fcom dword ptr [ebp + 0xc] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1703F134: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1703F136: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1703F140; /* 0x1703F139: jne 0x1703f140 */
L_1703F13B:
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x1703F13B: fstp dword ptr [ebp + 0xc] */
    goto L_1703F142; /* 0x1703F13E: jmp 0x1703f142 */
L_1703F140:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1703F140: fstp st(0) */
L_1703F142:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x5C)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(ebp + (-0x5C)); /* 0x1703F142: add ebx, dword ptr [ebp - 0x5c] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1703F145: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1703F0AF; /* 0x1703F146: jne 0x1703f0af */
L_1703F14C:
    eax = MEM32(ebp + (-0x4)); /* 0x1703F14C: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(eax); /* 0x1703F14F: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1703F151: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x30)); /* 0x1703F152: call dword ptr [ecx + 0x30] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x1703F155: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x1703F158: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x1703F15C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703F16A; /* 0x1703F15E: je 0x1703f16a */
L_1703F160:
    ecx = MEM32(eax); /* 0x1703F160: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1703F162: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1703F163: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1703F166: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1703F16A:
    edi = MEM32(ebp + 0x8); /* 0x1703F16A: mov edi, dword ptr [ebp + 8] */
    ebx = MEM32(ebp + 0x14); /* 0x1703F16D: mov ebx, dword ptr [ebp + 0x14] */
L_1703F170:
    esi = MEM32(esi + 0x20); /* 0x1703F170: mov esi, dword ptr [esi + 0x20] */
L_1703F173:
    /* test esi, esi */ /* 0x1703F173: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1703F027; /* 0x1703F175: jne 0x1703f027 */
L_1703F17B:
    eax = MEM32(ebp + 0xC); /* 0x1703F17B: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ebx) = eax; /* 0x1703F17E: mov dword ptr [ebx], eax */
    esi = MEM32(edi + 0x4C); /* 0x1703F180: mov esi, dword ptr [edi + 0x4c] */
    goto L_1703F19D; /* 0x1703F183: jmp 0x1703f19d */
L_1703F185:
    PUSH32(esp, ebx); /* 0x1703F185: push ebx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1703F186: push dword ptr [ebp + 0x10] */
    eax = ebp + (-0x58); /* 0x1703F189: lea eax, [ebp - 0x58] */
    PUSH32(esp, eax); /* 0x1703F18C: push eax */
    PUSH32(esp, esi); /* 0x1703F18D: push esi */
    RECOMP_CALL(sub_1703EFEB); /* 0x1703F18E: call 0x1703efeb */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1703F193: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xC)) = eax; /* 0x1703F195: mov dword ptr [ebp - 0xc], eax */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1703F1A1; /* 0x1703F198: jl 0x1703f1a1 */
L_1703F19A:
    esi = MEM32(esi + 0x48); /* 0x1703F19A: mov esi, dword ptr [esi + 0x48] */
L_1703F19D:
    /* test esi, esi */ /* 0x1703F19D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1703F185; /* 0x1703F19F: jne 0x1703f185 */
L_1703F1A1:
    /* cmp MEM32(ebp + (-0x8)), 0 */ /* 0x1703F1A1: cmp dword ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = POP32_VAL(esp); /* 0x1703F1A5: pop edi */
    esi = POP32_VAL(esp); /* 0x1703F1A6: pop esi */
    ebx = POP32_VAL(esp); /* 0x1703F1A7: pop ebx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703F1B3; /* 0x1703F1A8: je 0x1703f1b3 */
L_1703F1AA:
    eax = MEM32(ebp + (-0x4)); /* 0x1703F1AA: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(eax); /* 0x1703F1AD: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1703F1AF: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x30)); /* 0x1703F1B0: call dword ptr [ecx + 0x30] */
    RECOMP_FLAGS_IN();
L_1703F1B3:
    eax = MEM32(ebp + (-0x4)); /* 0x1703F1B3: mov eax, dword ptr [ebp - 4] */
    /* test eax, eax */ /* 0x1703F1B6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703F1C0; /* 0x1703F1B8: je 0x1703f1c0 */
L_1703F1BA:
    ecx = MEM32(eax); /* 0x1703F1BA: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1703F1BC: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1703F1BD: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
L_1703F1C0:
    eax = MEM32(ebp + (-0xC)); /* 0x1703F1C0: mov eax, dword ptr [ebp - 0xc] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1703F1C3: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1703F1C4: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1703F1CC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1703F1CCu);

L_1703F1CC:
    edi = edi; /* 0x1703F1CC: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1703F1CE: push ebp */
    ebp = esp; /* 0x1703F1CF: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x58u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x58u; /* 0x1703F1D1: sub esp, 0x58 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1703F1D4: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    fp_push(0.0); /* 0x1703F1D8: fldz  */
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x1703F1DA: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x1703F1DE: fstp dword ptr [ebp - 0x18] */
    fp_push(0.0); /* 0x1703F1E1: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x1703F1E3: fstp dword ptr [ebp - 0x14] */
    fp_push(0.0); /* 0x1703F1E6: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x1703F1E8: fstp dword ptr [ebp - 0x10] */
    fp_push(0.0); /* 0x1703F1EB: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x1703F1ED: fstp dword ptr [ebp - 8] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1703F1FC; /* 0x1703F1F0: jne 0x1703f1fc */
L_1703F1F2:
    eax = 0x8876086Cu; /* 0x1703F1F2: mov eax, 0x8876086c */
    goto L_1703F328; /* 0x1703F1F7: jmp 0x1703f328 */
L_1703F1FC:
    fp_push(0.0); /* 0x1703F1FC: fldz  */
    eax = ebp + (-0x4); /* 0x1703F1FE: lea eax, [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x1703F201: fstp dword ptr [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x1703F204: push eax */
    fp_push(0.0); /* 0x1703F205: fldz  */
    eax = ebp + (-0x18); /* 0x1703F207: lea eax, [ebp - 0x18] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x1703F20A: fstp dword ptr [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x1703F20D: push eax */
    fp_push(0.0); /* 0x1703F20E: fldz  */
    eax = ebp + (-0x58); /* 0x1703F210: lea eax, [ebp - 0x58] */
    PUSH32(esp, eax); /* 0x1703F213: push eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x1703F214: fstp dword ptr [ebp - 0x28] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1703F217: push dword ptr [ebp + 8] */
    fp_push(0.0); /* 0x1703F21A: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x2C)) = _v; } /* 0x1703F21C: fstp dword ptr [ebp - 0x2c] */
    fp_push(0.0); /* 0x1703F21F: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x34)) = _v; } /* 0x1703F221: fstp dword ptr [ebp - 0x34] */
    fp_push(0.0); /* 0x1703F224: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x38)) = _v; } /* 0x1703F226: fstp dword ptr [ebp - 0x38] */
    fp_push(0.0); /* 0x1703F229: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x3C)) = _v; } /* 0x1703F22B: fstp dword ptr [ebp - 0x3c] */
    fp_push(0.0); /* 0x1703F22E: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x40)) = _v; } /* 0x1703F230: fstp dword ptr [ebp - 0x40] */
    fp_push(0.0); /* 0x1703F233: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x48)) = _v; } /* 0x1703F235: fstp dword ptr [ebp - 0x48] */
    fp_push(0.0); /* 0x1703F238: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4C)) = _v; } /* 0x1703F23A: fstp dword ptr [ebp - 0x4c] */
    fp_push(0.0); /* 0x1703F23D: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x50)) = _v; } /* 0x1703F23F: fstp dword ptr [ebp - 0x50] */
    fp_push(0.0); /* 0x1703F242: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x54)) = _v; } /* 0x1703F244: fstp dword ptr [ebp - 0x54] */
    fp_push(1.0); /* 0x1703F247: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x1703F249: fstp dword ptr [ebp - 0x1c] */
    fp_push(1.0); /* 0x1703F24C: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x30)) = _v; } /* 0x1703F24E: fstp dword ptr [ebp - 0x30] */
    fp_push(1.0); /* 0x1703F251: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x44)) = _v; } /* 0x1703F253: fstp dword ptr [ebp - 0x44] */
    fp_push(1.0); /* 0x1703F256: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x58)) = _v; } /* 0x1703F258: fstp dword ptr [ebp - 0x58] */
    RECOMP_CALL(sub_1703EE34); /* 0x1703F25B: call 0x1703ee34 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1703F260: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1703F328; /* 0x1703F262: jl 0x1703f328 */
L_1703F268:
    ecx = MEM32(ebp + (-0x4)); /* 0x1703F268: mov ecx, dword ptr [ebp - 4] */
    /* test ecx, ecx */ /* 0x1703F26B: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703F309; /* 0x1703F26D: jbe 0x1703f309 */
L_1703F273:
    MEM32(ebp + (-0xC)) = ecx; /* 0x1703F273: mov dword ptr [ebp - 0xc], ecx */
    fp_push((double)(int32_t)MEM32(ebp + (-0xC))); /* 0x1703F276: fild dword ptr [ebp - 0xc] */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1703F281; /* 0x1703F279: jge 0x1703f281 */
L_1703F27B:
    _st[0] += (double)*(float*)ADDR(0x1700142C); /* 0x1703F27B: fadd dword ptr [0x1700142c] */
L_1703F281:
    _st[0] = (double)*(float*)ADDR(0x17001424) / _st[0]; /* 0x1703F281: fdivr dword ptr [0x17001424] */
    eax = ebp + (-0x8); /* 0x1703F287: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x1703F28A: push eax */
    eax = ebp + (-0x18); /* 0x1703F28B: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x1703F28E: push eax */
    eax = ebp + (-0x58); /* 0x1703F28F: lea eax, [ebp - 0x58] */
    PUSH32(esp, eax); /* 0x1703F292: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1703F293: push dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x1703F296: fld dword ptr [ebp - 0x18] */
    _st[0] *= _st[1]; /* 0x1703F299: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x1703F29B: fstp dword ptr [ebp - 0x18] */
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x1703F29E: fld dword ptr [ebp - 0x14] */
    _st[0] *= _st[1]; /* 0x1703F2A1: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x1703F2A3: fstp dword ptr [ebp - 0x14] */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x1703F2A6: fld dword ptr [ebp - 0x10] */
    _st[0] *= _st[1]; /* 0x1703F2A9: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x1703F2AB: fstp dword ptr [ebp - 0x10] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1703F2AE: fstp st(0) */
    fp_push(0.0); /* 0x1703F2B0: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x1703F2B2: fstp dword ptr [ebp - 0x20] */
    fp_push(0.0); /* 0x1703F2B5: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x1703F2B7: fstp dword ptr [ebp - 0x24] */
    fp_push(0.0); /* 0x1703F2BA: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x1703F2BC: fstp dword ptr [ebp - 0x28] */
    fp_push(0.0); /* 0x1703F2BF: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x2C)) = _v; } /* 0x1703F2C1: fstp dword ptr [ebp - 0x2c] */
    fp_push(0.0); /* 0x1703F2C4: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x34)) = _v; } /* 0x1703F2C6: fstp dword ptr [ebp - 0x34] */
    fp_push(0.0); /* 0x1703F2C9: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x38)) = _v; } /* 0x1703F2CB: fstp dword ptr [ebp - 0x38] */
    fp_push(0.0); /* 0x1703F2CE: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x3C)) = _v; } /* 0x1703F2D0: fstp dword ptr [ebp - 0x3c] */
    fp_push(0.0); /* 0x1703F2D3: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x40)) = _v; } /* 0x1703F2D5: fstp dword ptr [ebp - 0x40] */
    fp_push(0.0); /* 0x1703F2D8: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x48)) = _v; } /* 0x1703F2DA: fstp dword ptr [ebp - 0x48] */
    fp_push(0.0); /* 0x1703F2DD: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4C)) = _v; } /* 0x1703F2DF: fstp dword ptr [ebp - 0x4c] */
    fp_push(0.0); /* 0x1703F2E2: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x50)) = _v; } /* 0x1703F2E4: fstp dword ptr [ebp - 0x50] */
    fp_push(0.0); /* 0x1703F2E7: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x54)) = _v; } /* 0x1703F2E9: fstp dword ptr [ebp - 0x54] */
    fp_push(1.0); /* 0x1703F2EC: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x1703F2EE: fstp dword ptr [ebp - 0x1c] */
    fp_push(1.0); /* 0x1703F2F1: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x30)) = _v; } /* 0x1703F2F3: fstp dword ptr [ebp - 0x30] */
    fp_push(1.0); /* 0x1703F2F6: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x44)) = _v; } /* 0x1703F2F8: fstp dword ptr [ebp - 0x44] */
    fp_push(1.0); /* 0x1703F2FB: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x58)) = _v; } /* 0x1703F2FD: fstp dword ptr [ebp - 0x58] */
    RECOMP_CALL(sub_1703EFEB); /* 0x1703F300: call 0x1703efeb */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1703F305: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1703F328; /* 0x1703F307: jl 0x1703f328 */
L_1703F309:
    ecx = MEM32(ebp + 0x10); /* 0x1703F309: mov ecx, dword ptr [ebp + 0x10] */
    /* test ecx, ecx */ /* 0x1703F30C: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703F317; /* 0x1703F30E: je 0x1703f317 */
L_1703F310:
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x1703F310: fld dword ptr [ebp - 8] */
    _st[0] = sqrt(_st[0]); /* 0x1703F313: fsqrt  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx) = _v; } /* 0x1703F315: fstp dword ptr [ecx] */
L_1703F317:
    PUSH32(esp, edi); /* 0x1703F317: push edi */
    edi = MEM32(ebp + 0xC); /* 0x1703F318: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x1703F31B: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703F327; /* 0x1703F31D: je 0x1703f327 */
L_1703F31F:
    PUSH32(esp, esi); /* 0x1703F31F: push esi */
    esi = ebp + (-0x18); /* 0x1703F320: lea esi, [ebp - 0x18] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703F323: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703F324: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1703F325: movsd dword ptr es:[edi], dword ptr [esi] */
    esi = POP32_VAL(esp); /* 0x1703F326: pop esi */
L_1703F327:
    edi = POP32_VAL(esp); /* 0x1703F327: pop edi */
L_1703F328:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1703F328: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1703F329: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1703F331(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1703F331u);

L_1703F331:
    edi = edi; /* 0x1703F331: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1703F333: push ebp */
    ebp = esp; /* 0x1703F334: mov ebp, esp */
    eax = ecx; /* 0x1703F336: mov eax, ecx */
    ecx = MEM32(ebp + 0x8); /* 0x1703F338: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) & 0; /* 0x1703F33B: and dword ptr [eax + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = ecx; /* 0x1703F33F: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + 0xC); /* 0x1703F341: mov ecx, dword ptr [ebp + 0xc] */
    /* test ecx, ecx */ /* 0x1703F344: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703F351; /* 0x1703F346: je 0x1703f351 */
L_1703F348:
    edx = MEM32(ecx + 0x4); /* 0x1703F348: mov edx, dword ptr [ecx + 4] */
    MEM32(eax + 0x4) = edx; /* 0x1703F34B: mov dword ptr [eax + 4], edx */
    MEM32(ecx + 0x4) = eax; /* 0x1703F34E: mov dword ptr [ecx + 4], eax */
L_1703F351:
    ebp = POP32_VAL(esp); /* 0x1703F351: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1703F352: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1703F35A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1703F35Au);

L_1703F35A:
    edi = edi; /* 0x1703F35A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1703F35C: push ebp */
    ebp = esp; /* 0x1703F35D: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1703F35F: push esi */
    esi = ecx; /* 0x1703F360: mov esi, ecx */
    RECOMP_CALL(sub_1703FBBD); /* 0x1703F362: call 0x1703fbbd */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1703F367: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703F374; /* 0x1703F36B: je 0x1703f374 */
L_1703F36D:
    PUSH32(esp, esi); /* 0x1703F36D: push esi */
    RECOMP_CALL(sub_1721B010); /* 0x1703F36E: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1703F373: pop ecx */
L_1703F374:
    eax = esi; /* 0x1703F374: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1703F376: pop esi */
    ebp = POP32_VAL(esp); /* 0x1703F377: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1703F378: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1703F380(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1703F380u);

L_1703F380:
    edi = edi; /* 0x1703F380: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1703F382: push ebp */
    ebp = esp; /* 0x1703F383: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1703F385: push ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1703F386: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x1703F38A: push ebx */
    PUSH32(esp, esi); /* 0x1703F38B: push esi */
    PUSH32(esp, 0xCu); /* 0x1703F38C: push 0xc */
    RECOMP_CALL(sub_1721B01C); /* 0x1703F38E: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1703F393: mov esi, eax */
    /* test esi, esi */ /* 0x1703F395: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1703F397: pop ecx */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1703F3A1; /* 0x1703F398: jne 0x1703f3a1 */
L_1703F39A:
    ebx = 0x8007000Eu; /* 0x1703F39A: mov ebx, 0x8007000e */
    goto L_1703F3D3; /* 0x1703F39F: jmp 0x1703f3d3 */
L_1703F3A1:
    SET_LO16(eax, MEM16(ebp + 0x10)); /* 0x1703F3A1: mov ax, word ptr [ebp + 0x10] */
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x1703F3A5: mov word ptr [esi], ax */
    SET_LO16(eax, MEM16(ebp + 0x14)); /* 0x1703F3A8: mov ax, word ptr [ebp + 0x14] */
    edx = ebp + (-0x4); /* 0x1703F3AC: lea edx, [ebp - 4] */
    PUSH32(esp, edx); /* 0x1703F3AF: push edx */
    PUSH32(esp, esi); /* 0x1703F3B0: push esi */
    PUSH32(esp, 0xCu); /* 0x1703F3B1: push 0xc */
    MEM16(esi + 0x2) = (uint16_t)(LO16(eax)); /* 0x1703F3B3: mov word ptr [esi + 2], ax */
    SET_LO16(eax, MEM16(ebp + 0xC)); /* 0x1703F3B7: mov ax, word ptr [ebp + 0xc] */
    PUSH32(esp, 0); /* 0x1703F3BB: push 0 */
    PUSH32(esp, 0); /* 0x1703F3BD: push 0 */
    MEM16(esi + 0x4) = (uint16_t)(LO16(eax)); /* 0x1703F3BF: mov word ptr [esi + 4], ax */
    eax = MEM32(ebp + 0x18); /* 0x1703F3C3: mov eax, dword ptr [ebp + 0x18] */
    ecx = MEM32(eax); /* 0x1703F3C6: mov ecx, dword ptr [eax] */
    PUSH32(esp, 0x17001B30u); /* 0x1703F3C8: push 0x17001b30 */
    PUSH32(esp, eax); /* 0x1703F3CD: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x1C)); /* 0x1703F3CE: call dword ptr [ecx + 0x1c] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1703F3D1: mov ebx, eax */
L_1703F3D3:
    eax = MEM32(ebp + (-0x4)); /* 0x1703F3D3: mov eax, dword ptr [ebp - 4] */
    /* test eax, eax */ /* 0x1703F3D6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703F3E4; /* 0x1703F3D8: je 0x1703f3e4 */
L_1703F3DA:
    ecx = MEM32(eax); /* 0x1703F3DA: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1703F3DC: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1703F3DD: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1703F3E0: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1703F3E4:
    PUSH32(esp, esi); /* 0x1703F3E4: push esi */
    RECOMP_CALL(sub_1721B010); /* 0x1703F3E5: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1703F3EA: pop ecx */
    esi = POP32_VAL(esp); /* 0x1703F3EB: pop esi */
    eax = ebx; /* 0x1703F3EC: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x1703F3EE: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1703F3EF: leave  */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x1703F3F0: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_1703F3F8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1703F3F8u);

L_1703F3F8:
    edi = edi; /* 0x1703F3F8: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1703F3FA: push ebp */
    ebp = esp; /* 0x1703F3FB: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1703F3FD: push ecx */
    PUSH32(esp, ecx); /* 0x1703F3FE: push ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1703F3FF: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1703F403: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1703F404: mov esi, dword ptr [ebp + 0xc] */
    eax = esi; /* 0x1703F407: mov eax, esi */
    ecx = eax + 0x1; /* 0x1703F409: lea ecx, [eax + 1] */
L_1703F40C:
    SET_LO8(edx, MEM8(eax)); /* 0x1703F40C: mov dl, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1703F40E: inc eax */
    _flag_k = FK_INC;
    /* test LO8(edx), LO8(edx) */ /* 0x1703F40F: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1703F40C; /* 0x1703F411: jne 0x1703f40c */
L_1703F413:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x1703F413: sub eax, ecx */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1703F415: push ebx */
    ebx = eax + 0x1; /* 0x1703F416: lea ebx, [eax + 1] */
    eax = MEM32(ebp + 0x18); /* 0x1703F419: mov eax, dword ptr [ebp + 0x18] */
    eax = ebx + eax * 8 + 0x44; /* 0x1703F41C: lea eax, [ebx + eax*8 + 0x44] */
    PUSH32(esp, eax); /* 0x1703F420: push eax */
    MEM32(ebp + (-0x8)) = eax; /* 0x1703F421: mov dword ptr [ebp - 8], eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1703F424: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1703F429: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1703F42B: pop ecx */
    MEM32(ebp + 0xC) = eax; /* 0x1703F42C: mov dword ptr [ebp + 0xc], eax */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1703F438; /* 0x1703F42F: jne 0x1703f438 */
L_1703F431:
    esi = 0x8007000Eu; /* 0x1703F431: mov esi, 0x8007000e */
    goto L_1703F4AE; /* 0x1703F436: jmp 0x1703f4ae */
L_1703F438:
    PUSH32(esp, edi); /* 0x1703F438: push edi */
    ecx = ebx; /* 0x1703F439: mov ecx, ebx */
    edx = ecx; /* 0x1703F43B: mov edx, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1703F43D: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1703F43D: shr ecx, 2 */
    edi = eax; /* 0x1703F440: mov edi, eax */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1703F442: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = edx; /* 0x1703F444: mov ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1703F446: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x1703F449: rep movsb byte ptr es:[edi], byte ptr [esi] */
    ecx = MEM32(ebp + 0x18); /* 0x1703F44B: mov ecx, dword ptr [ebp + 0x18] */
    esi = MEM32(ebp + 0x10); /* 0x1703F44E: mov esi, dword ptr [ebp + 0x10] */
    edx = ecx; /* 0x1703F451: mov edx, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x1703F453: add eax, ebx */
    _flag_k = FK_ADD;
    MEM32(eax) = ecx; /* 0x1703F455: mov dword ptr [eax], ecx */
    if (2u) _cf = (((edx) >> 30) & 1u); /* 0x1703F457: shl edx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 2u; /* 0x1703F457: shl edx, 2 */
    ecx = edx; /* 0x1703F45A: mov ecx, edx */
    ebx = ecx; /* 0x1703F45C: mov ebx, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1703F45E: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1703F45E: shr ecx, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1703F461: add eax, 4 */
    _flag_k = FK_ADD;
    edi = eax; /* 0x1703F464: mov edi, eax */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1703F466: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = ebx; /* 0x1703F468: mov ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1703F46A: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x1703F46D: rep movsb byte ptr es:[edi], byte ptr [esi] */
    esi = MEM32(ebp + 0x14); /* 0x1703F46F: mov esi, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1703F472: add eax, edx */
    _flag_k = FK_ADD;
    ecx = edx; /* 0x1703F474: mov ecx, edx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1703F476: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1703F476: shr ecx, 2 */
    edi = eax; /* 0x1703F479: mov edi, eax */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1703F47B: rep movsd dword ptr es:[edi], dword ptr [esi] */
    PUSH32(esp, 0x10u); /* 0x1703F47D: push 0x10 */
    ecx = ebx; /* 0x1703F47F: mov ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1703F481: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x1703F484: rep movsb byte ptr es:[edi], byte ptr [esi] */
    esi = MEM32(ebp + 0x1C); /* 0x1703F486: mov esi, dword ptr [ebp + 0x1c] */
    ecx = POP32_VAL(esp); /* 0x1703F489: pop ecx */
    edi = edx + eax; /* 0x1703F48A: lea edi, [edx + eax] */
    eax = MEM32(ebp + 0x20); /* 0x1703F48D: mov eax, dword ptr [ebp + 0x20] */
    edx = ebp + (-0x4); /* 0x1703F490: lea edx, [ebp - 4] */
    PUSH32(esp, edx); /* 0x1703F493: push edx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1703F494: push dword ptr [ebp + 0xc] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1703F497: rep movsd dword ptr es:[edi], dword ptr [esi] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x1703F499: push dword ptr [ebp - 8] */
    ecx = MEM32(eax); /* 0x1703F49C: mov ecx, dword ptr [eax] */
    PUSH32(esp, 0); /* 0x1703F49E: push 0 */
    PUSH32(esp, 0); /* 0x1703F4A0: push 0 */
    PUSH32(esp, 0x17001B00u); /* 0x1703F4A2: push 0x17001b00 */
    PUSH32(esp, eax); /* 0x1703F4A7: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x1C)); /* 0x1703F4A8: call dword ptr [ecx + 0x1c] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1703F4AB: mov esi, eax */
    edi = POP32_VAL(esp); /* 0x1703F4AD: pop edi */
L_1703F4AE:
    eax = MEM32(ebp + (-0x4)); /* 0x1703F4AE: mov eax, dword ptr [ebp - 4] */
    /* test eax, eax */ /* 0x1703F4B1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1703F4B3: pop ebx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703F4C0; /* 0x1703F4B4: je 0x1703f4c0 */
L_1703F4B6:
    ecx = MEM32(eax); /* 0x1703F4B6: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1703F4B8: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1703F4B9: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1703F4BC: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1703F4C0:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1703F4C0: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1721B010); /* 0x1703F4C3: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1703F4C8: pop ecx */
    eax = esi; /* 0x1703F4C9: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1703F4CB: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1703F4CC: leave  */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x1703F4CD: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_1703F4D5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1703F4D5u);

L_1703F4D5:
    edi = edi; /* 0x1703F4D5: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1703F4D7: push ebp */
    ebp = esp; /* 0x1703F4D8: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x1703F4DA: sub esp, 0x18 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1703F4DD: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1703F4DE: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1703F4E1: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1703F4E2: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x4), 1 */ /* 0x1703F4E4: cmp dword ptr [esi + 4], 1 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x8)) = edi; /* 0x1703F4E8: mov dword ptr [ebp - 8], edi */
    MEM32(ebp + (-0x4)) = edi; /* 0x1703F4EB: mov dword ptr [ebp - 4], edi */
    MEM32(ebp + (-0xC)) = edi; /* 0x1703F4EE: mov dword ptr [ebp - 0xc], edi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1703F675; /* 0x1703F4F1: jne 0x1703f675 */
L_1703F4F7:
    eax = MEM32(esi + 0x8); /* 0x1703F4F7: mov eax, dword ptr [esi + 8] */
    /* cmp eax, edi */ /* 0x1703F4FA: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703F675; /* 0x1703F4FC: je 0x1703f675 */
L_1703F502:
    PUSH32(esp, ebx); /* 0x1703F502: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x1703F503: mov ebx, dword ptr [ebp + 8] */
    ecx = ebx + 0xC; /* 0x1703F506: lea ecx, [ebx + 0xc] */
    PUSH32(esp, ecx); /* 0x1703F509: push ecx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1703F50A: push dword ptr [ebp + 0x10] */
    ecx = ebp + (-0x8); /* 0x1703F50D: lea ecx, [ebp - 8] */
    PUSH32(esp, ecx); /* 0x1703F510: push ecx */
    PUSH32(esp, edi); /* 0x1703F511: push edi */
    PUSH32(esp, edi); /* 0x1703F512: push edi */
    PUSH32(esp, MEM32(ebx + 0x8)); /* 0x1703F513: push dword ptr [ebx + 8] */
    PUSH32(esp, MEM32(esi + 0x14)); /* 0x1703F516: push dword ptr [esi + 0x14] */
    PUSH32(esp, MEM32(esi + 0x10)); /* 0x1703F519: push dword ptr [esi + 0x10] */
    PUSH32(esp, MEM32(esi + 0xC)); /* 0x1703F51C: push dword ptr [esi + 0xc] */
    PUSH32(esp, MEM32(esi + 0x18)); /* 0x1703F51F: push dword ptr [esi + 0x18] */
    PUSH32(esp, MEM32(esi)); /* 0x1703F522: push dword ptr [esi] */
    PUSH32(esp, eax); /* 0x1703F524: push eax */
    PUSH32(esp, MEM32(ebx)); /* 0x1703F525: push dword ptr [ebx] */
    RECOMP_CALL(sub_17078478); /* 0x1703F527: call 0x17078478 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1703F52C: mov edi, eax */
    /* test edi, edi */ /* 0x1703F52E: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1703F674; /* 0x1703F530: jl 0x1703f674 */
L_1703F536:
    eax = MEM32(esi + 0x1C); /* 0x1703F536: mov eax, dword ptr [esi + 0x1c] */
    ecx = MEM32(eax); /* 0x1703F539: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1703F53B: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x24)); /* 0x1703F53C: call dword ptr [ecx + 0x24] */
    RECOMP_FLAGS_IN();
    edx = ebp + (-0x18); /* 0x1703F53F: lea edx, [ebp - 0x18] */
    MEM32(ebp + 0xC) = eax; /* 0x1703F542: mov dword ptr [ebp + 0xc], eax */
    eax = MEM32(esi + 0x1C); /* 0x1703F545: mov eax, dword ptr [esi + 0x1c] */
    ecx = MEM32(eax); /* 0x1703F548: mov ecx, dword ptr [eax] */
    PUSH32(esp, edx); /* 0x1703F54A: push edx */
    PUSH32(esp, eax); /* 0x1703F54B: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x20)); /* 0x1703F54C: call dword ptr [ecx + 0x20] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1703F54F: mov edi, eax */
    /* test edi, edi */ /* 0x1703F551: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1703F674; /* 0x1703F553: jl 0x1703f674 */
L_1703F559:
    eax = MEM32(esi + 0x8); /* 0x1703F559: mov eax, dword ptr [esi + 8] */
    ecx = MEM32(eax); /* 0x1703F55C: mov ecx, dword ptr [eax] */
    edx = ebp + (-0x10); /* 0x1703F55E: lea edx, [ebp - 0x10] */
    PUSH32(esp, edx); /* 0x1703F561: push edx */
    PUSH32(esp, eax); /* 0x1703F562: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x38)); /* 0x1703F563: call dword ptr [ecx + 0x38] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1703F566: mov edi, eax */
    /* test edi, edi */ /* 0x1703F568: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1703F674; /* 0x1703F56A: jl 0x1703f674 */
L_1703F570:
    ecx = MEM32(esi + 0x1C); /* 0x1703F570: mov ecx, dword ptr [esi + 0x1c] */
    edi = MEM32(ecx); /* 0x1703F573: mov edi, dword ptr [ecx] */
    eax = MEM32(esi + 0x8); /* 0x1703F575: mov eax, dword ptr [esi + 8] */
    ecx = ebp + (-0x14); /* 0x1703F578: lea ecx, [ebp - 0x14] */
    PUSH32(esp, ecx); /* 0x1703F57B: push ecx */
    ecx = MEM32(eax); /* 0x1703F57C: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1703F57E: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x10)); /* 0x1703F57F: call dword ptr [ecx + 0x10] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1703F582: push eax */
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x1703F583: push dword ptr [ebp - 0x10] */
    PUSH32(esp, MEM32(esi + 0x1C)); /* 0x1703F586: push dword ptr [esi + 0x1c] */
    RECOMP_ICALL(MEM32(edi + 0x2C)); /* 0x1703F589: call dword ptr [edi + 0x2c] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1703F58C: mov edi, eax */
    eax = MEM32(ebp + (-0x10)); /* 0x1703F58E: mov eax, dword ptr [ebp - 0x10] */
    ecx = MEM32(eax); /* 0x1703F591: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1703F593: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1703F594: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & 0; /* 0x1703F597: and dword ptr [ebp - 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x1703F59B: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1703F674; /* 0x1703F59D: jl 0x1703f674 */
L_1703F5A3:
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x1703F5A3: push dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x1703F5A6: push dword ptr [ebp - 0x14] */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x1703F5A9: push dword ptr [ebp - 0x18] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1703F5AC: push dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x1703F5AF: push ebx */
    RECOMP_CALL(sub_1703F380); /* 0x1703F5B0: call 0x1703f380 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1703F5B5: mov edi, eax */
    /* test edi, edi */ /* 0x1703F5B7: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1703F674; /* 0x1703F5B9: jl 0x1703f674 */
L_1703F5BF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1703F5BF: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0xC), ebx */ /* 0x1703F5C1: cmp dword ptr [ebp + 0xc], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x10) = ebx; /* 0x1703F5C4: mov dword ptr [ebp + 0x10], ebx */
    if (CMP_BE(_flag_a, _flag_b)) goto L_1703F5E6; /* 0x1703F5C7: jbe 0x1703f5e6 */
L_1703F5C9:
    eax = MEM32(esi + 0x1C); /* 0x1703F5C9: mov eax, dword ptr [esi + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1703F5CC: push dword ptr [ebp + 0x10] */
    ecx = MEM32(eax); /* 0x1703F5CF: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1703F5D1: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x14)); /* 0x1703F5D2: call dword ptr [ecx + 0x14] */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x1703F5D5: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1703F5DB; /* 0x1703F5D7: jbe 0x1703f5db */
L_1703F5D9:
    ebx = eax; /* 0x1703F5D9: mov ebx, eax */
L_1703F5DB:
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 1; /* 0x1703F5DB: inc dword ptr [ebp + 0x10] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + 0x10); /* 0x1703F5DE: mov eax, dword ptr [ebp + 0x10] */
    /* cmp eax, MEM32(ebp + 0xC) */ /* 0x1703F5E1: cmp eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1703F5C9; /* 0x1703F5E4: jb 0x1703f5c9 */
L_1703F5E6:
    if (2u) _cf = (((ebx) >> 30) & 1u); /* 0x1703F5E6: shl ebx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ebx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 2u; /* 0x1703F5E6: shl ebx, 2 */
    PUSH32(esp, ebx); /* 0x1703F5E9: push ebx */
    RECOMP_CALL(sub_1721B01C); /* 0x1703F5EA: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x1703F5EF: push ebx */
    MEM32(ebp + (-0x4)) = eax; /* 0x1703F5F0: mov dword ptr [ebp - 4], eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1703F5F3: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1703F5F8: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x4)), ebx */ /* 0x1703F5FA: cmp dword ptr [ebp - 4], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x1703F5FD: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1703F5FE: pop ecx */
    MEM32(ebp + (-0xC)) = eax; /* 0x1703F5FF: mov dword ptr [ebp - 0xc], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703F66F; /* 0x1703F602: je 0x1703f66f */
L_1703F604:
    /* cmp eax, ebx */ /* 0x1703F604: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703F66F; /* 0x1703F606: je 0x1703f66f */
L_1703F608:
    /* cmp MEM32(ebp + 0xC), ebx */ /* 0x1703F608: cmp dword ptr [ebp + 0xc], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1703F665; /* 0x1703F60B: jbe 0x1703f665 */
L_1703F60D:
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x1703F60D: push dword ptr [ebp - 0xc] */
    eax = MEM32(esi + 0x1C); /* 0x1703F610: mov eax, dword ptr [esi + 0x1c] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1703F613: push dword ptr [ebp - 4] */
    ecx = MEM32(eax); /* 0x1703F616: mov ecx, dword ptr [eax] */
    PUSH32(esp, ebx); /* 0x1703F618: push ebx */
    PUSH32(esp, eax); /* 0x1703F619: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x18)); /* 0x1703F61A: call dword ptr [ecx + 0x18] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1703F61D: mov edi, eax */
    /* test edi, edi */ /* 0x1703F61F: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1703F674; /* 0x1703F621: jl 0x1703f674 */
L_1703F623:
    eax = MEM32(esi + 0x1C); /* 0x1703F623: mov eax, dword ptr [esi + 0x1c] */
    ecx = MEM32(eax); /* 0x1703F626: mov ecx, dword ptr [eax] */
    PUSH32(esp, ebx); /* 0x1703F628: push ebx */
    PUSH32(esp, eax); /* 0x1703F629: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x14)); /* 0x1703F62A: call dword ptr [ecx + 0x14] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x1703F62D: push dword ptr [ebp - 8] */
    MEM32(ebp + 0x10) = eax; /* 0x1703F630: mov dword ptr [ebp + 0x10], eax */
    eax = MEM32(esi + 0x1C); /* 0x1703F633: mov eax, dword ptr [esi + 0x1c] */
    ecx = MEM32(eax); /* 0x1703F636: mov ecx, dword ptr [eax] */
    PUSH32(esp, ebx); /* 0x1703F638: push ebx */
    PUSH32(esp, eax); /* 0x1703F639: push eax */
    edi = eax; /* 0x1703F63A: mov edi, eax */
    RECOMP_ICALL(MEM32(ecx + 0x44)); /* 0x1703F63C: call dword ptr [ecx + 0x44] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1703F63F: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1703F640: push dword ptr [ebp + 0x10] */
    eax = MEM32(edi); /* 0x1703F643: mov eax, dword ptr [edi] */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x1703F645: push dword ptr [ebp - 0xc] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1703F648: push dword ptr [ebp - 4] */
    PUSH32(esp, ebx); /* 0x1703F64B: push ebx */
    PUSH32(esp, edi); /* 0x1703F64C: push edi */
    RECOMP_ICALL(MEM32(eax + 0x3C)); /* 0x1703F64D: call dword ptr [eax + 0x3c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1703F650: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1703F651: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1703F3F8); /* 0x1703F654: call 0x1703f3f8 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1703F659: mov edi, eax */
    /* test edi, edi */ /* 0x1703F65B: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1703F674; /* 0x1703F65D: jl 0x1703f674 */
L_1703F65F:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1703F65F: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, MEM32(ebp + 0xC) */ /* 0x1703F660: cmp ebx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1703F60D; /* 0x1703F663: jb 0x1703f60d */
L_1703F665:
    eax = MEM32(ebp + 0x14); /* 0x1703F665: mov eax, dword ptr [ebp + 0x14] */
    ecx = MEM32(ebp + (-0x8)); /* 0x1703F668: mov ecx, dword ptr [ebp - 8] */
    MEM32(eax) = ecx; /* 0x1703F66B: mov dword ptr [eax], ecx */
    goto L_1703F674; /* 0x1703F66D: jmp 0x1703f674 */
L_1703F66F:
    edi = 0x8007000Eu; /* 0x1703F66F: mov edi, 0x8007000e */
L_1703F674:
    ebx = POP32_VAL(esp); /* 0x1703F674: pop ebx */
L_1703F675:
    PUSH32(esp, 0); /* 0x1703F675: push 0 */
    RECOMP_CALL(sub_1721B010); /* 0x1703F677: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1703F67C: push dword ptr [ebp - 4] */
    RECOMP_CALL(sub_1721B010); /* 0x1703F67F: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x1703F684: push dword ptr [ebp - 0xc] */
    RECOMP_CALL(sub_1721B010); /* 0x1703F687: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x8)); /* 0x1703F68C: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1703F68F: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1703F692: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703F69C; /* 0x1703F694: je 0x1703f69c */
L_1703F696:
    ecx = MEM32(eax); /* 0x1703F696: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1703F698: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1703F699: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
L_1703F69C:
    eax = edi; /* 0x1703F69C: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1703F69E: pop edi */
    esi = POP32_VAL(esp); /* 0x1703F69F: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1703F6A0: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1703F6A1: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1703F6A9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1703F6A9u);

L_1703F6A9:
    edi = edi; /* 0x1703F6A9: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1703F6AB: push ebp */
    ebp = esp; /* 0x1703F6AC: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1703F6AE: push ecx */
    PUSH32(esp, esi); /* 0x1703F6AF: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1703F6B0: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(esi);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & esi; /* 0x1703F6B2: and dword ptr [ebp - 4], esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x10), esi */ /* 0x1703F6B5: cmp dword ptr [ebp + 0x10], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703F6FA; /* 0x1703F6B8: je 0x1703f6fa */
L_1703F6BA:
    ecx = MEM32(ebp + 0x8); /* 0x1703F6BA: mov ecx, dword ptr [ebp + 8] */
    eax = ecx + 0xC; /* 0x1703F6BD: lea eax, [ecx + 0xc] */
    PUSH32(esp, eax); /* 0x1703F6C0: push eax */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x1703F6C1: push dword ptr [ebp + 0x20] */
    eax = ebp + (-0x4); /* 0x1703F6C4: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x1703F6C7: push eax */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1703F6C8: push dword ptr [ebp + 0x18] */
    eax = MEM32(ebp + 0xC); /* 0x1703F6CB: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1703F6CE: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ecx + 0x8)); /* 0x1703F6D1: push dword ptr [ecx + 8] */
    PUSH32(esp, MEM32(eax + 0x14)); /* 0x1703F6D4: push dword ptr [eax + 0x14] */
    PUSH32(esp, MEM32(eax + 0x10)); /* 0x1703F6D7: push dword ptr [eax + 0x10] */
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x1703F6DA: push dword ptr [eax + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1703F6DD: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(eax)); /* 0x1703F6E0: push dword ptr [eax] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1703F6E2: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ecx)); /* 0x1703F6E5: push dword ptr [ecx] */
    RECOMP_CALL(sub_17078478); /* 0x1703F6E7: call 0x17078478 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1703F6EC: mov esi, eax */
    /* test esi, esi */ /* 0x1703F6EE: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1703F6FA; /* 0x1703F6F0: jl 0x1703f6fa */
L_1703F6F2:
    eax = MEM32(ebp + 0x24); /* 0x1703F6F2: mov eax, dword ptr [ebp + 0x24] */
    ecx = MEM32(ebp + (-0x4)); /* 0x1703F6F5: mov ecx, dword ptr [ebp - 4] */
    MEM32(eax) = ecx; /* 0x1703F6F8: mov dword ptr [eax], ecx */
L_1703F6FA:
    PUSH32(esp, 0); /* 0x1703F6FA: push 0 */
    RECOMP_CALL(sub_1721B010); /* 0x1703F6FC: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x1703F701: mov eax, dword ptr [ebp - 4] */
    /* test eax, eax */ /* 0x1703F704: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1703F706: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703F70F; /* 0x1703F707: je 0x1703f70f */
L_1703F709:
    ecx = MEM32(eax); /* 0x1703F709: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1703F70B: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1703F70C: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
L_1703F70F:
    eax = esi; /* 0x1703F70F: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1703F711: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1703F712: leave  */
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x1703F713: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_1703F71B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1703F71Bu);

L_1703F71B:
    edi = edi; /* 0x1703F71B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1703F71D: push ebp */
    ebp = esp; /* 0x1703F71E: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1703F720: push ecx */
    eax = MEM32(ebp + 0xC); /* 0x1703F721: mov eax, dword ptr [ebp + 0xc] */
    edx = MEM32(eax + 0x8); /* 0x1703F724: mov edx, dword ptr [eax + 8] */
    PUSH32(esp, esi); /* 0x1703F727: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1703F728: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(esi);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & esi; /* 0x1703F72A: and dword ptr [ebp - 4], esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edx, edx */ /* 0x1703F72D: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703F763; /* 0x1703F72F: je 0x1703f763 */
L_1703F731:
    ecx = MEM32(ebp + 0x8); /* 0x1703F731: mov ecx, dword ptr [ebp + 8] */
    esi = ecx + 0xC; /* 0x1703F734: lea esi, [ecx + 0xc] */
    PUSH32(esp, esi); /* 0x1703F737: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1703F738: push dword ptr [ebp + 0x10] */
    esi = ebp + (-0x4); /* 0x1703F73B: lea esi, [ebp - 4] */
    PUSH32(esp, esi); /* 0x1703F73E: push esi */
    PUSH32(esp, MEM32(ecx + 0x8)); /* 0x1703F73F: push dword ptr [ecx + 8] */
    PUSH32(esp, MEM32(eax + 0x14)); /* 0x1703F742: push dword ptr [eax + 0x14] */
    PUSH32(esp, MEM32(eax + 0x10)); /* 0x1703F745: push dword ptr [eax + 0x10] */
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x1703F748: push dword ptr [eax + 0xc] */
    PUSH32(esp, MEM32(eax)); /* 0x1703F74B: push dword ptr [eax] */
    PUSH32(esp, edx); /* 0x1703F74D: push edx */
    PUSH32(esp, MEM32(ecx)); /* 0x1703F74E: push dword ptr [ecx] */
    RECOMP_CALL(sub_17078925); /* 0x1703F750: call 0x17078925 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1703F755: mov esi, eax */
    /* test esi, esi */ /* 0x1703F757: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1703F763; /* 0x1703F759: jl 0x1703f763 */
L_1703F75B:
    eax = MEM32(ebp + 0x14); /* 0x1703F75B: mov eax, dword ptr [ebp + 0x14] */
    ecx = MEM32(ebp + (-0x4)); /* 0x1703F75E: mov ecx, dword ptr [ebp - 4] */
    MEM32(eax) = ecx; /* 0x1703F761: mov dword ptr [eax], ecx */
L_1703F763:
    PUSH32(esp, 0); /* 0x1703F763: push 0 */
    RECOMP_CALL(sub_1721B010); /* 0x1703F765: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x1703F76A: mov eax, dword ptr [ebp - 4] */
    /* test eax, eax */ /* 0x1703F76D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1703F76F: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703F778; /* 0x1703F770: je 0x1703f778 */
L_1703F772:
    ecx = MEM32(eax); /* 0x1703F772: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1703F774: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1703F775: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
L_1703F778:
    eax = esi; /* 0x1703F778: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1703F77A: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1703F77B: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1703F77C: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1703F784(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1703F784u);

L_1703F784:
    edi = edi; /* 0x1703F784: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1703F786: push ebp */
    ebp = esp; /* 0x1703F787: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1703F789: push ecx */
    PUSH32(esp, ecx); /* 0x1703F78A: push ecx */
    eax = MEM32(ebp + 0x28); /* 0x1703F78B: mov eax, dword ptr [ebp + 0x28] */
    ecx = MEM32(eax); /* 0x1703F78E: mov ecx, dword ptr [eax] */
    PUSH32(esp, ebx); /* 0x1703F790: push ebx */
    PUSH32(esp, esi); /* 0x1703F791: push esi */
    PUSH32(esp, edi); /* 0x1703F792: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1703F793: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = ebp + (-0x4); /* 0x1703F795: lea edx, [ebp - 4] */
    PUSH32(esp, edx); /* 0x1703F798: push edx */
    PUSH32(esp, ebx); /* 0x1703F799: push ebx */
    PUSH32(esp, ebx); /* 0x1703F79A: push ebx */
    PUSH32(esp, ebx); /* 0x1703F79B: push ebx */
    PUSH32(esp, ebx); /* 0x1703F79C: push ebx */
    PUSH32(esp, 0x17003280u); /* 0x1703F79D: push 0x17003280 */
    PUSH32(esp, eax); /* 0x1703F7A2: push eax */
    MEM32(ebp + (-0x8)) = ebx; /* 0x1703F7A3: mov dword ptr [ebp - 8], ebx */
    MEM32(ebp + (-0x4)) = ebx; /* 0x1703F7A6: mov dword ptr [ebp - 4], ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1703F7A9: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_ICALL(MEM32(ecx + 0x1C)); /* 0x1703F7AB: call dword ptr [ecx + 0x1c] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1703F7AE: mov edi, eax */
    /* cmp edi, ebx */ /* 0x1703F7B0: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1703F9B4; /* 0x1703F7B2: jl 0x1703f9b4 */
L_1703F7B8:
    edi = MEM32(ebp + 0x18); /* 0x1703F7B8: mov edi, dword ptr [ebp + 0x18] */
    /* cmp edi, ebx */ /* 0x1703F7BB: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1703F869; /* 0x1703F7BD: jbe 0x1703f869 */
L_1703F7C3:
    eax = edi + edi * 8; /* 0x1703F7C3: lea eax, [edi + edi*8] */
    eax = eax * 8 + 0x8; /* 0x1703F7C6: lea eax, [eax*8 + 8] */
    PUSH32(esp, eax); /* 0x1703F7CD: push eax */
    MEM32(ebp + 0x28) = eax; /* 0x1703F7CE: mov dword ptr [ebp + 0x28], eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1703F7D1: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1703F7D6: mov esi, eax */
    /* cmp esi, ebx */ /* 0x1703F7D8: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x1703F7DA: pop ecx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1703F7E7; /* 0x1703F7DB: jne 0x1703f7e7 */
L_1703F7DD:
    edi = 0x8007000Eu; /* 0x1703F7DD: mov edi, 0x8007000e */
    goto L_1703F9B4; /* 0x1703F7E2: jmp 0x1703f9b4 */
L_1703F7E7:
    eax = MEM32(ebp + 0x18); /* 0x1703F7E7: mov eax, dword ptr [ebp + 0x18] */
    /* cmp eax, ebx */ /* 0x1703F7EA: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi) = ebx; /* 0x1703F7EC: mov dword ptr [esi], ebx */
    MEM32(esi + 0x4) = edi; /* 0x1703F7EE: mov dword ptr [esi + 4], edi */
    edi = esi + 0x8; /* 0x1703F7F1: lea edi, [esi + 8] */
    if (CMP_BE(_flag_a, _flag_b)) goto L_1703F83E; /* 0x1703F7F4: jbe 0x1703f83e */
L_1703F7F6:
    ecx = MEM32(ebp + 0x1C); /* 0x1703F7F6: mov ecx, dword ptr [ebp + 0x1c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x1703F7F9: add ecx, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x18) = ecx; /* 0x1703F7FC: mov dword ptr [ebp + 0x18], ecx */
    MEM32(ebp + 0x1C) = eax; /* 0x1703F7FF: mov dword ptr [ebp + 0x1c], eax */
L_1703F802:
    eax = MEM32(ebp + 0x18); /* 0x1703F802: mov eax, dword ptr [ebp + 0x18] */
    fp_push(*(float*)&MEM32(eax + (-0x4))); /* 0x1703F805: fld dword ptr [eax - 4] */
    RECOMP_CALL(sub_1721B050); /* 0x1703F808: call 0x1721b050 */
    RECOMP_FLAGS_IN();
    MEM32(edi) = eax; /* 0x1703F80D: mov dword ptr [edi], eax */
    eax = MEM32(ebp + 0x18); /* 0x1703F80F: mov eax, dword ptr [ebp + 0x18] */
    MEM32(edi + 0x4) = 4; /* 0x1703F812: mov dword ptr [edi + 4], 4 */
    ecx = MEM32(eax + 0xC); /* 0x1703F819: mov ecx, dword ptr [eax + 0xc] */
    MEM32(edi + 0x8) = ecx; /* 0x1703F81C: mov dword ptr [edi + 8], ecx */
    ecx = MEM32(eax); /* 0x1703F81F: mov ecx, dword ptr [eax] */
    MEM32(edi + 0xC) = ecx; /* 0x1703F821: mov dword ptr [edi + 0xc], ecx */
    ecx = MEM32(eax + 0x4); /* 0x1703F824: mov ecx, dword ptr [eax + 4] */
    MEM32(edi + 0x10) = ecx; /* 0x1703F827: mov dword ptr [edi + 0x10], ecx */
    ecx = MEM32(eax + 0x8); /* 0x1703F82A: mov ecx, dword ptr [eax + 8] */
    MEM32(edi + 0x14) = ecx; /* 0x1703F82D: mov dword ptr [edi + 0x14], ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x14u; /* 0x1703F830: add eax, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x18u; /* 0x1703F833: add edi, 0x18 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x1C) = MEM32(ebp + 0x1C) - 1; /* 0x1703F836: dec dword ptr [ebp + 0x1c] */
    _flag_k = FK_DEC;
    MEM32(ebp + 0x18) = eax; /* 0x1703F839: mov dword ptr [ebp + 0x18], eax */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1703F802; /* 0x1703F83C: jne 0x1703f802 */
L_1703F83E:
    eax = MEM32(ebp + (-0x4)); /* 0x1703F83E: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(eax); /* 0x1703F841: mov ecx, dword ptr [eax] */
    edx = ebp + (-0x8); /* 0x1703F843: lea edx, [ebp - 8] */
    PUSH32(esp, edx); /* 0x1703F846: push edx */
    PUSH32(esp, esi); /* 0x1703F847: push esi */
    PUSH32(esp, MEM32(ebp + 0x28)); /* 0x1703F848: push dword ptr [ebp + 0x28] */
    PUSH32(esp, ebx); /* 0x1703F84B: push ebx */
    PUSH32(esp, ebx); /* 0x1703F84C: push ebx */
    PUSH32(esp, 0x170032A0u); /* 0x1703F84D: push 0x170032a0 */
    PUSH32(esp, eax); /* 0x1703F852: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x1C)); /* 0x1703F853: call dword ptr [ecx + 0x1c] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1703F856: mov edi, eax */
    /* cmp edi, ebx */ /* 0x1703F858: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1703F9B4; /* 0x1703F85A: jl 0x1703f9b4 */
L_1703F860:
    PUSH32(esp, esi); /* 0x1703F860: push esi */
    RECOMP_CALL(sub_1721B010); /* 0x1703F861: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1703F866: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1703F867: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1703F869:
    edi = MEM32(ebp + 0x10); /* 0x1703F869: mov edi, dword ptr [ebp + 0x10] */
    /* cmp edi, ebx */ /* 0x1703F86C: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1703F909; /* 0x1703F86E: jbe 0x1703f909 */
L_1703F874:
    eax = edi + edi * 8; /* 0x1703F874: lea eax, [edi + edi*8] */
    eax = eax * 8 + 0x8; /* 0x1703F877: lea eax, [eax*8 + 8] */
    PUSH32(esp, eax); /* 0x1703F87E: push eax */
    MEM32(ebp + 0x28) = eax; /* 0x1703F87F: mov dword ptr [ebp + 0x28], eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1703F882: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1703F887: mov esi, eax */
    /* cmp esi, ebx */ /* 0x1703F889: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x1703F88B: pop ecx */
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703F7DD; /* 0x1703F88C: je 0x1703f7dd */
L_1703F892:
    /* cmp MEM32(ebp + 0x10), ebx */ /* 0x1703F892: cmp dword ptr [ebp + 0x10], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi) = 1; /* 0x1703F895: mov dword ptr [esi], 1 */
    MEM32(esi + 0x4) = edi; /* 0x1703F89B: mov dword ptr [esi + 4], edi */
    edi = esi + 0x8; /* 0x1703F89E: lea edi, [esi + 8] */
    if (CMP_BE(_flag_a, _flag_b)) goto L_1703F8DE; /* 0x1703F8A1: jbe 0x1703f8de */
L_1703F8A3:
    ebx = MEM32(ebp + 0x14); /* 0x1703F8A3: mov ebx, dword ptr [ebp + 0x14] */
    eax = MEM32(ebp + 0x10); /* 0x1703F8A6: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 8; /* 0x1703F8A9: add ebx, 8 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x10) = eax; /* 0x1703F8AC: mov dword ptr [ebp + 0x10], eax */
L_1703F8AF:
    fp_push(*(float*)&MEM32(ebx + (-0x8))); /* 0x1703F8AF: fld dword ptr [ebx - 8] */
    RECOMP_CALL(sub_1721B050); /* 0x1703F8B2: call 0x1721b050 */
    RECOMP_FLAGS_IN();
    MEM32(edi) = eax; /* 0x1703F8B7: mov dword ptr [edi], eax */
    MEM32(edi + 0x4) = 3; /* 0x1703F8B9: mov dword ptr [edi + 4], 3 */
    eax = MEM32(ebx + (-0x4)); /* 0x1703F8C0: mov eax, dword ptr [ebx - 4] */
    MEM32(edi + 0x8) = eax; /* 0x1703F8C3: mov dword ptr [edi + 8], eax */
    eax = MEM32(ebx); /* 0x1703F8C6: mov eax, dword ptr [ebx] */
    MEM32(edi + 0xC) = eax; /* 0x1703F8C8: mov dword ptr [edi + 0xc], eax */
    eax = MEM32(ebx + 0x4); /* 0x1703F8CB: mov eax, dword ptr [ebx + 4] */
    MEM32(edi + 0x10) = eax; /* 0x1703F8CE: mov dword ptr [edi + 0x10], eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x14u; /* 0x1703F8D1: add edi, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x10u; /* 0x1703F8D4: add ebx, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - 1; /* 0x1703F8D7: dec dword ptr [ebp + 0x10] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1703F8AF; /* 0x1703F8DA: jne 0x1703f8af */
L_1703F8DC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1703F8DC: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1703F8DE:
    eax = MEM32(ebp + (-0x4)); /* 0x1703F8DE: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(eax); /* 0x1703F8E1: mov ecx, dword ptr [eax] */
    edx = ebp + (-0x8); /* 0x1703F8E3: lea edx, [ebp - 8] */
    PUSH32(esp, edx); /* 0x1703F8E6: push edx */
    PUSH32(esp, esi); /* 0x1703F8E7: push esi */
    PUSH32(esp, MEM32(ebp + 0x28)); /* 0x1703F8E8: push dword ptr [ebp + 0x28] */
    PUSH32(esp, ebx); /* 0x1703F8EB: push ebx */
    PUSH32(esp, ebx); /* 0x1703F8EC: push ebx */
    PUSH32(esp, 0x170032A0u); /* 0x1703F8ED: push 0x170032a0 */
    PUSH32(esp, eax); /* 0x1703F8F2: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x1C)); /* 0x1703F8F3: call dword ptr [ecx + 0x1c] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1703F8F6: mov edi, eax */
    /* cmp edi, ebx */ /* 0x1703F8F8: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1703F9B4; /* 0x1703F8FA: jl 0x1703f9b4 */
L_1703F900:
    PUSH32(esp, esi); /* 0x1703F900: push esi */
    RECOMP_CALL(sub_1721B010); /* 0x1703F901: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1703F906: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1703F907: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1703F909:
    edi = MEM32(ebp + 0x20); /* 0x1703F909: mov edi, dword ptr [ebp + 0x20] */
    /* cmp edi, ebx */ /* 0x1703F90C: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1703F9A5; /* 0x1703F90E: jbe 0x1703f9a5 */
L_1703F914:
    eax = edi + edi * 8; /* 0x1703F914: lea eax, [edi + edi*8] */
    eax = eax * 8 + 0x8; /* 0x1703F917: lea eax, [eax*8 + 8] */
    PUSH32(esp, eax); /* 0x1703F91E: push eax */
    MEM32(ebp + 0x28) = eax; /* 0x1703F91F: mov dword ptr [ebp + 0x28], eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1703F922: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1703F927: mov esi, eax */
    /* cmp esi, ebx */ /* 0x1703F929: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x1703F92B: pop ecx */
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703F7DD; /* 0x1703F92C: je 0x1703f7dd */
L_1703F932:
    /* cmp MEM32(ebp + 0x20), ebx */ /* 0x1703F932: cmp dword ptr [ebp + 0x20], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x20)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi) = 2; /* 0x1703F935: mov dword ptr [esi], 2 */
    MEM32(esi + 0x4) = edi; /* 0x1703F93B: mov dword ptr [esi + 4], edi */
    edi = esi + 0x8; /* 0x1703F93E: lea edi, [esi + 8] */
    if (CMP_BE(_flag_a, _flag_b)) goto L_1703F97E; /* 0x1703F941: jbe 0x1703f97e */
L_1703F943:
    ebx = MEM32(ebp + 0x24); /* 0x1703F943: mov ebx, dword ptr [ebp + 0x24] */
    eax = MEM32(ebp + 0x20); /* 0x1703F946: mov eax, dword ptr [ebp + 0x20] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 8; /* 0x1703F949: add ebx, 8 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x10) = eax; /* 0x1703F94C: mov dword ptr [ebp + 0x10], eax */
L_1703F94F:
    fp_push(*(float*)&MEM32(ebx + (-0x8))); /* 0x1703F94F: fld dword ptr [ebx - 8] */
    RECOMP_CALL(sub_1721B050); /* 0x1703F952: call 0x1721b050 */
    RECOMP_FLAGS_IN();
    MEM32(edi) = eax; /* 0x1703F957: mov dword ptr [edi], eax */
    MEM32(edi + 0x4) = 3; /* 0x1703F959: mov dword ptr [edi + 4], 3 */
    eax = MEM32(ebx + (-0x4)); /* 0x1703F960: mov eax, dword ptr [ebx - 4] */
    MEM32(edi + 0x8) = eax; /* 0x1703F963: mov dword ptr [edi + 8], eax */
    eax = MEM32(ebx); /* 0x1703F966: mov eax, dword ptr [ebx] */
    MEM32(edi + 0xC) = eax; /* 0x1703F968: mov dword ptr [edi + 0xc], eax */
    eax = MEM32(ebx + 0x4); /* 0x1703F96B: mov eax, dword ptr [ebx + 4] */
    MEM32(edi + 0x10) = eax; /* 0x1703F96E: mov dword ptr [edi + 0x10], eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x14u; /* 0x1703F971: add edi, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x10u; /* 0x1703F974: add ebx, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - 1; /* 0x1703F977: dec dword ptr [ebp + 0x10] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1703F94F; /* 0x1703F97A: jne 0x1703f94f */
L_1703F97C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1703F97C: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1703F97E:
    eax = MEM32(ebp + (-0x4)); /* 0x1703F97E: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(eax); /* 0x1703F981: mov ecx, dword ptr [eax] */
    edx = ebp + (-0x8); /* 0x1703F983: lea edx, [ebp - 8] */
    PUSH32(esp, edx); /* 0x1703F986: push edx */
    PUSH32(esp, esi); /* 0x1703F987: push esi */
    PUSH32(esp, MEM32(ebp + 0x28)); /* 0x1703F988: push dword ptr [ebp + 0x28] */
    PUSH32(esp, ebx); /* 0x1703F98B: push ebx */
    PUSH32(esp, ebx); /* 0x1703F98C: push ebx */
    PUSH32(esp, 0x170032A0u); /* 0x1703F98D: push 0x170032a0 */
    PUSH32(esp, eax); /* 0x1703F992: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x1C)); /* 0x1703F993: call dword ptr [ecx + 0x1c] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1703F996: mov edi, eax */
    /* cmp edi, ebx */ /* 0x1703F998: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1703F9B4; /* 0x1703F99A: jl 0x1703f9b4 */
L_1703F99C:
    PUSH32(esp, esi); /* 0x1703F99C: push esi */
    RECOMP_CALL(sub_1721B010); /* 0x1703F99D: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1703F9A2: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1703F9A3: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1703F9A5:
    eax = MEM32(ebp + (-0x4)); /* 0x1703F9A5: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(eax); /* 0x1703F9A8: mov ecx, dword ptr [eax] */
    PUSH32(esp, ebx); /* 0x1703F9AA: push ebx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1703F9AB: push dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x1703F9AE: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x20)); /* 0x1703F9AF: call dword ptr [ecx + 0x20] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1703F9B2: mov edi, eax */
L_1703F9B4:
    eax = MEM32(ebp + (-0x8)); /* 0x1703F9B4: mov eax, dword ptr [ebp - 8] */
    /* cmp eax, ebx */ /* 0x1703F9B7: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703F9C4; /* 0x1703F9B9: je 0x1703f9c4 */
L_1703F9BB:
    ecx = MEM32(eax); /* 0x1703F9BB: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1703F9BD: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1703F9BE: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x8)) = ebx; /* 0x1703F9C1: mov dword ptr [ebp - 8], ebx */
L_1703F9C4:
    eax = MEM32(ebp + (-0x4)); /* 0x1703F9C4: mov eax, dword ptr [ebp - 4] */
    /* cmp eax, ebx */ /* 0x1703F9C7: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703F9D4; /* 0x1703F9C9: je 0x1703f9d4 */
L_1703F9CB:
    ecx = MEM32(eax); /* 0x1703F9CB: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1703F9CD: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1703F9CE: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = ebx; /* 0x1703F9D1: mov dword ptr [ebp - 4], ebx */
L_1703F9D4:
    PUSH32(esp, esi); /* 0x1703F9D4: push esi */
    RECOMP_CALL(sub_1721B010); /* 0x1703F9D5: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1703F9DA: pop ecx */
    eax = edi; /* 0x1703F9DB: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1703F9DD: pop edi */
    esi = POP32_VAL(esp); /* 0x1703F9DE: pop esi */
    ebx = POP32_VAL(esp); /* 0x1703F9DF: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1703F9E0: leave  */
    RECOMP_FLAGS_OUT(); esp += 40; { RECOMP_REGS_OUT(); return; } /* 0x1703F9E1: ret 0x24 */
    RECOMP_REGS_OUT();
}

void sub_1703F9E9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1703F9E9u);

L_1703F9E9:
    edi = edi; /* 0x1703F9E9: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1703F9EB: push ebp */
    ebp = esp; /* 0x1703F9EC: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1703F9EE: sub esp, 0x10 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) & 0; /* 0x1703F9F1: and dword ptr [ebp - 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1703F9F5: push edi */
    edi = MEM32(ebp + 0xC); /* 0x1703F9F6: mov edi, dword ptr [ebp + 0xc] */
    eax = MEM32(edi); /* 0x1703F9F9: mov eax, dword ptr [edi] */
    ecx = ebp + (-0x4); /* 0x1703F9FB: lea ecx, [ebp - 4] */
    PUSH32(esp, ecx); /* 0x1703F9FE: push ecx */
    PUSH32(esp, edi); /* 0x1703F9FF: push edi */
    RECOMP_ICALL(MEM32(eax + 0x34)); /* 0x1703FA00: call dword ptr [eax + 0x34] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1703FA03: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1703FAB6; /* 0x1703FA05: jl 0x1703fab6 */
L_1703FA0B:
    eax = MEM32(ebp + (-0x4)); /* 0x1703FA0B: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(eax); /* 0x1703FA0E: mov ecx, dword ptr [eax] */
    PUSH32(esp, ebx); /* 0x1703FA10: push ebx */
    PUSH32(esp, esi); /* 0x1703FA11: push esi */
    PUSH32(esp, eax); /* 0x1703FA12: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x10)); /* 0x1703FA13: call dword ptr [ecx + 0x10] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1703FA16: mov esi, eax */
    eax = esi + 0x13; /* 0x1703FA18: lea eax, [esi + 0x13] */
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x1703FA1B: shr eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 2u; /* 0x1703FA1B: shr eax, 2 */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1703FA1E: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1703FA1E: shl eax, 2 */
    PUSH32(esp, eax); /* 0x1703FA21: push eax */
    MEM32(ebp + (-0x8)) = esi; /* 0x1703FA22: mov dword ptr [ebp - 8], esi */
    MEM32(ebp + (-0x10)) = eax; /* 0x1703FA25: mov dword ptr [ebp - 0x10], eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1703FA28: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1703FA2D: mov ebx, eax */
    /* test ebx, ebx */ /* 0x1703FA2F: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1703FA31: pop ecx */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1703FA3B; /* 0x1703FA32: jne 0x1703fa3b */
L_1703FA34:
    esi = 0x8007000Eu; /* 0x1703FA34: mov esi, 0x8007000e */
    goto L_1703FAA5; /* 0x1703FA39: jmp 0x1703faa5 */
L_1703FA3B:
    MEM32(ebx) = esi; /* 0x1703FA3B: mov dword ptr [ebx], esi */
    eax = MEM32(edi); /* 0x1703FA3D: mov eax, dword ptr [edi] */
    PUSH32(esp, edi); /* 0x1703FA3F: push edi */
    RECOMP_ICALL(MEM32(eax + 0x30)); /* 0x1703FA40: call dword ptr [eax + 0x30] */
    RECOMP_FLAGS_IN();
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx + 0x4) = _v; } /* 0x1703FA43: fstp dword ptr [ebx + 4] */
    eax = MEM32(edi); /* 0x1703FA46: mov eax, dword ptr [edi] */
    PUSH32(esp, edi); /* 0x1703FA48: push edi */
    RECOMP_ICALL(MEM32(eax + 0x2C)); /* 0x1703FA49: call dword ptr [eax + 0x2c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 3; /* 0x1703FA4C: add esi, 3 */
    _flag_k = FK_ADD;
    MEM32(ebx + 0x8) = eax; /* 0x1703FA4F: mov dword ptr [ebx + 8], eax */
    if (2u) _cf = (((esi) >> 1) & 1u); /* 0x1703FA52: shr esi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((esi >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 2u; /* 0x1703FA52: shr esi, 2 */
    MEM32(ebx + 0xC) = esi; /* 0x1703FA55: mov dword ptr [ebx + 0xc], esi */
    eax = MEM32(ebp + (-0x4)); /* 0x1703FA58: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(eax); /* 0x1703FA5B: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1703FA5D: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xC)); /* 0x1703FA5E: call dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x8)); /* 0x1703FA61: mov ecx, dword ptr [ebp - 8] */
    esi = eax; /* 0x1703FA64: mov esi, eax */
    eax = ecx; /* 0x1703FA66: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1703FA68: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1703FA68: shr ecx, 2 */
    edi = ebx + 0x10; /* 0x1703FA6B: lea edi, [ebx + 0x10] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1703FA6E: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x1703FA70: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1703FA72: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x1703FA75: rep movsb byte ptr es:[edi], byte ptr [esi] */
    esi = MEM32(ebp + 0x8); /* 0x1703FA77: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(esi); /* 0x1703FA7A: mov eax, dword ptr [esi] */
    edi = MEM32(eax); /* 0x1703FA7C: mov edi, dword ptr [eax] */
    eax = ebp + (-0xC); /* 0x1703FA7E: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1703FA81: push eax */
    eax = MEM32(ebp + 0xC); /* 0x1703FA82: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x1703FA85: mov ecx, dword ptr [eax] */
    PUSH32(esp, ebx); /* 0x1703FA87: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x1703FA88: push dword ptr [ebp - 0x10] */
    PUSH32(esp, 0); /* 0x1703FA8B: push 0 */
    PUSH32(esp, eax); /* 0x1703FA8D: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xC)); /* 0x1703FA8E: call dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1703FA91: push eax */
    PUSH32(esp, 0x170019F0u); /* 0x1703FA92: push 0x170019f0 */
    PUSH32(esp, MEM32(esi)); /* 0x1703FA97: push dword ptr [esi] */
    RECOMP_ICALL(MEM32(edi + 0x10)); /* 0x1703FA99: call dword ptr [edi + 0x10] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x1703FA9C: push ebx */
    esi = eax; /* 0x1703FA9D: mov esi, eax */
    RECOMP_CALL(sub_1721B010); /* 0x1703FA9F: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1703FAA4: pop ecx */
L_1703FAA5:
    eax = MEM32(ebp + (-0x4)); /* 0x1703FAA5: mov eax, dword ptr [ebp - 4] */
    /* test eax, eax */ /* 0x1703FAA8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703FAB2; /* 0x1703FAAA: je 0x1703fab2 */
L_1703FAAC:
    ecx = MEM32(eax); /* 0x1703FAAC: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1703FAAE: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1703FAAF: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
L_1703FAB2:
    eax = esi; /* 0x1703FAB2: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1703FAB4: pop esi */
    ebx = POP32_VAL(esp); /* 0x1703FAB5: pop ebx */
L_1703FAB6:
    edi = POP32_VAL(esp); /* 0x1703FAB6: pop edi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1703FAB7: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1703FAB8: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1703FAC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1703FAC0u);

L_1703FAC0:
    edi = edi; /* 0x1703FAC0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1703FAC2: push ebp */
    ebp = esp; /* 0x1703FAC3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x1703FAC5: sub esp, 0x1c */
    _flag_k = FK_CMP;
    fp_push(*(double*)ADDR(0x17003258)); /* 0x1703FAC8: fld qword ptr [0x17003258] */
    PUSH32(esp, esi); /* 0x1703FACE: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1703FACF: mov esi, dword ptr [ebp + 0xc] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x1C)) = _v; } /* 0x1703FAD2: fstp qword ptr [ebp - 0x1c] */
    PUSH32(esp, edi); /* 0x1703FAD5: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1703FAD6: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp esi, edi */ /* 0x1703FAD8: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0xC)) = edi; /* 0x1703FADA: mov dword ptr [ebp - 0xc], edi */
    MEM32(ebp + (-0x4)) = edi; /* 0x1703FADD: mov dword ptr [ebp - 4], edi */
    MEM32(ebp + (-0x8)) = edi; /* 0x1703FAE0: mov dword ptr [ebp - 8], edi */
    MEM32(ebp + (-0x10)) = edi; /* 0x1703FAE3: mov dword ptr [ebp - 0x10], edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703FBAF; /* 0x1703FAE6: je 0x1703fbaf */
L_1703FAEC:
    eax = MEM32(esi); /* 0x1703FAEC: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x1703FAEE: push esi */
    RECOMP_ICALL(MEM32(eax + 0x28)); /* 0x1703FAEF: call dword ptr [eax + 0x28] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1703FAF2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703FB82; /* 0x1703FAF4: je 0x1703fb82 */
L_1703FAFA:
    eax = MEM32(esi); /* 0x1703FAFA: mov eax, dword ptr [esi] */
    PUSH32(esp, ebx); /* 0x1703FAFC: push ebx */
    PUSH32(esp, esi); /* 0x1703FAFD: push esi */
    RECOMP_ICALL(MEM32(eax + 0x28)); /* 0x1703FAFE: call dword ptr [eax + 0x28] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1703FB01: mov ebx, eax */
    /* cmp ebx, edi */ /* 0x1703FB03: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0xC) = edi; /* 0x1703FB05: mov dword ptr [ebp + 0xc], edi */
    if (CMP_BE(_flag_a, _flag_b)) goto L_1703FB57; /* 0x1703FB08: jbe 0x1703fb57 */
L_1703FB0A:
    eax = MEM32(esi); /* 0x1703FB0A: mov eax, dword ptr [esi] */
    ecx = ebp + (-0x4); /* 0x1703FB0C: lea ecx, [ebp - 4] */
    PUSH32(esp, ecx); /* 0x1703FB0F: push ecx */
    PUSH32(esp, edi); /* 0x1703FB10: push edi */
    PUSH32(esp, esi); /* 0x1703FB11: push esi */
    RECOMP_ICALL(MEM32(eax + 0x2C)); /* 0x1703FB12: call dword ptr [eax + 0x2c] */
    RECOMP_FLAGS_IN();
    /* cmp eax, edi */ /* 0x1703FB15: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0xC)) = eax; /* 0x1703FB17: mov dword ptr [ebp - 0xc], eax */
    if (CMP_L(_flag_a, _flag_b)) goto L_1703FB81; /* 0x1703FB1A: jl 0x1703fb81 */
L_1703FB1C:
    eax = MEM32(ebp + (-0x4)); /* 0x1703FB1C: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(eax); /* 0x1703FB1F: mov ecx, dword ptr [eax] */
    edx = ebp + (-0x8); /* 0x1703FB21: lea edx, [ebp - 8] */
    PUSH32(esp, edx); /* 0x1703FB24: push edx */
    PUSH32(esp, 0x17001970u); /* 0x1703FB25: push 0x17001970 */
    PUSH32(esp, eax); /* 0x1703FB2A: push eax */
    RECOMP_ICALL(MEM32(ecx)); /* 0x1703FB2B: call dword ptr [ecx] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1703FB2D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1703FB4B; /* 0x1703FB2F: jge 0x1703fb4b */
L_1703FB31:
    eax = MEM32(ebp + (-0x4)); /* 0x1703FB31: mov eax, dword ptr [ebp - 4] */
    /* cmp eax, edi */ /* 0x1703FB34: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703FB41; /* 0x1703FB36: je 0x1703fb41 */
L_1703FB38:
    ecx = MEM32(eax); /* 0x1703FB38: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1703FB3A: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1703FB3B: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = edi; /* 0x1703FB3E: mov dword ptr [ebp - 4], edi */
L_1703FB41:
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 1; /* 0x1703FB41: inc dword ptr [ebp + 0xc] */
    _flag_k = FK_INC;
    /* cmp MEM32(ebp + 0xC), ebx */ /* 0x1703FB44: cmp dword ptr [ebp + 0xc], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1703FB0A; /* 0x1703FB47: jb 0x1703fb0a */
L_1703FB49:
    goto L_1703FB57; /* 0x1703FB49: jmp 0x1703fb57 */
L_1703FB4B:
    eax = MEM32(ebp + (-0x8)); /* 0x1703FB4B: mov eax, dword ptr [ebp - 8] */
    ecx = MEM32(eax); /* 0x1703FB4E: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1703FB50: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x30)); /* 0x1703FB51: call dword ptr [ecx + 0x30] */
    RECOMP_FLAGS_IN();
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x1C)) = _v; } /* 0x1703FB54: fstp qword ptr [ebp - 0x1c] */
L_1703FB57:
    fp_push(*(double*)ADDR(ebp + (-0x1C))); /* 0x1703FB57: fld qword ptr [ebp - 0x1c] */
    RECOMP_CALL(sub_1721B050); /* 0x1703FB5A: call 0x1721b050 */
    RECOMP_FLAGS_IN();
    edx = ebp + (-0x10); /* 0x1703FB5F: lea edx, [ebp - 0x10] */
    PUSH32(esp, edx); /* 0x1703FB62: push edx */
    edx = ebp + (-0x14); /* 0x1703FB63: lea edx, [ebp - 0x14] */
    PUSH32(esp, edx); /* 0x1703FB66: push edx */
    PUSH32(esp, 4); /* 0x1703FB67: push 4 */
    PUSH32(esp, edi); /* 0x1703FB69: push edi */
    MEM32(ebp + (-0x14)) = eax; /* 0x1703FB6A: mov dword ptr [ebp - 0x14], eax */
    eax = MEM32(ebp + 0x8); /* 0x1703FB6D: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax); /* 0x1703FB70: mov eax, dword ptr [eax] */
    ecx = MEM32(eax); /* 0x1703FB72: mov ecx, dword ptr [eax] */
    PUSH32(esp, edi); /* 0x1703FB74: push edi */
    PUSH32(esp, 0x17001A00u); /* 0x1703FB75: push 0x17001a00 */
    PUSH32(esp, eax); /* 0x1703FB7A: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x10)); /* 0x1703FB7B: call dword ptr [ecx + 0x10] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0xC)) = eax; /* 0x1703FB7E: mov dword ptr [ebp - 0xc], eax */
L_1703FB81:
    ebx = POP32_VAL(esp); /* 0x1703FB81: pop ebx */
L_1703FB82:
    eax = MEM32(ebp + (-0x4)); /* 0x1703FB82: mov eax, dword ptr [ebp - 4] */
    /* cmp eax, edi */ /* 0x1703FB85: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703FB92; /* 0x1703FB87: je 0x1703fb92 */
L_1703FB89:
    ecx = MEM32(eax); /* 0x1703FB89: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1703FB8B: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1703FB8C: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = edi; /* 0x1703FB8F: mov dword ptr [ebp - 4], edi */
L_1703FB92:
    eax = MEM32(ebp + (-0x8)); /* 0x1703FB92: mov eax, dword ptr [ebp - 8] */
    /* cmp eax, edi */ /* 0x1703FB95: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703FBA2; /* 0x1703FB97: je 0x1703fba2 */
L_1703FB99:
    ecx = MEM32(eax); /* 0x1703FB99: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1703FB9B: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1703FB9C: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x8)) = edi; /* 0x1703FB9F: mov dword ptr [ebp - 8], edi */
L_1703FBA2:
    eax = MEM32(ebp + (-0x10)); /* 0x1703FBA2: mov eax, dword ptr [ebp - 0x10] */
    /* cmp eax, edi */ /* 0x1703FBA5: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703FBAF; /* 0x1703FBA7: je 0x1703fbaf */
L_1703FBA9:
    ecx = MEM32(eax); /* 0x1703FBA9: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1703FBAB: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1703FBAC: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
L_1703FBAF:
    eax = MEM32(ebp + (-0xC)); /* 0x1703FBAF: mov eax, dword ptr [ebp - 0xc] */
    edi = POP32_VAL(esp); /* 0x1703FBB2: pop edi */
    esi = POP32_VAL(esp); /* 0x1703FBB3: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1703FBB4: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1703FBB5: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1703FBBD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1703FBBDu);

L_1703FBBD:
    edi = edi; /* 0x1703FBBD: mov edi, edi */
    PUSH32(esp, esi); /* 0x1703FBBF: push esi */
    esi = ecx; /* 0x1703FBC0: mov esi, ecx */
    PUSH32(esp, MEM32(esi)); /* 0x1703FBC2: push dword ptr [esi] */
    RECOMP_CALL(sub_1721B010); /* 0x1703FBC4: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1703FBC9: pop ecx */
    ecx = MEM32(esi + 0x4); /* 0x1703FBCA: mov ecx, dword ptr [esi + 4] */
    /* test ecx, ecx */ /* 0x1703FBCD: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1703FBCF: pop esi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703FBD9; /* 0x1703FBD0: je 0x1703fbd9 */
L_1703FBD2:
    PUSH32(esp, 1); /* 0x1703FBD2: push 1 */
    RECOMP_CALL(sub_1703F35A); /* 0x1703FBD4: call 0x1703f35a */
    RECOMP_FLAGS_IN();
L_1703FBD9:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1703FBD9: ret  */
    RECOMP_REGS_OUT();
}

void sub_1703FBDF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1703FBDFu);

L_1703FBDF:
    edi = edi; /* 0x1703FBDF: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1703FBE1: push ebp */
    ebp = esp; /* 0x1703FBE2: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1703FBE4: push ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1703FBE5: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x1703FBE9: push ebx */
    PUSH32(esp, esi); /* 0x1703FBEA: push esi */
    PUSH32(esp, 0x40u); /* 0x1703FBEB: push 0x40 */
    RECOMP_CALL(sub_1721B01C); /* 0x1703FBED: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1703FBF2: mov ebx, eax */
    /* test ebx, ebx */ /* 0x1703FBF4: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1703FBF6: pop ecx */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1703FC00; /* 0x1703FBF7: jne 0x1703fc00 */
L_1703FBF9:
    esi = 0x8007000Eu; /* 0x1703FBF9: mov esi, 0x8007000e */
    goto L_1703FC2A; /* 0x1703FBFE: jmp 0x1703fc2a */
L_1703FC00:
    esi = MEM32(ebp + 0xC); /* 0x1703FC00: mov esi, dword ptr [ebp + 0xc] */
    eax = MEM32(ebp + 0x10); /* 0x1703FC03: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x1703FC06: push edi */
    PUSH32(esp, 0x10u); /* 0x1703FC07: push 0x10 */
    ecx = POP32_VAL(esp); /* 0x1703FC09: pop ecx */
    edx = ebp + (-0x4); /* 0x1703FC0A: lea edx, [ebp - 4] */
    PUSH32(esp, edx); /* 0x1703FC0D: push edx */
    PUSH32(esp, ebx); /* 0x1703FC0E: push ebx */
    PUSH32(esp, 0x40u); /* 0x1703FC0F: push 0x40 */
    PUSH32(esp, 0); /* 0x1703FC11: push 0 */
    PUSH32(esp, 0); /* 0x1703FC13: push 0 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x1703FC15: add esi, 4 */
    _flag_k = FK_ADD;
    edi = ebx; /* 0x1703FC18: mov edi, ebx */
    PUSH32(esp, 0x17003270u); /* 0x1703FC1A: push 0x17003270 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1703FC1F: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = MEM32(eax); /* 0x1703FC21: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1703FC23: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x1C)); /* 0x1703FC24: call dword ptr [ecx + 0x1c] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1703FC27: mov esi, eax */
    edi = POP32_VAL(esp); /* 0x1703FC29: pop edi */
L_1703FC2A:
    PUSH32(esp, ebx); /* 0x1703FC2A: push ebx */
    RECOMP_CALL(sub_1721B010); /* 0x1703FC2B: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x1703FC30: mov eax, dword ptr [ebp - 4] */
    /* test eax, eax */ /* 0x1703FC33: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1703FC35: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703FC3E; /* 0x1703FC36: je 0x1703fc3e */
L_1703FC38:
    ecx = MEM32(eax); /* 0x1703FC38: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1703FC3A: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1703FC3B: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
L_1703FC3E:
    eax = esi; /* 0x1703FC3E: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1703FC40: pop esi */
    ebx = POP32_VAL(esp); /* 0x1703FC41: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1703FC42: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1703FC43: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1703FC4B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1703FC4Bu);

L_1703FC4B:
    edi = edi; /* 0x1703FC4B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1703FC4D: push ebp */
    ebp = esp; /* 0x1703FC4E: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x1703FC50: sub esp, 0x14 */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0x10); /* 0x1703FC53: mov ecx, dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x1703FC56: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x1703FC57: mov ebx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x1703FC5A: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1703FC5B: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1703FC5E: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1703FC5F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, eax */ /* 0x1703FC61: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = ebp + (-0x4); /* 0x1703FC63: lea edi, [ebp - 4] */
    PUSH32(esp, edi); /* 0x1703FC66: push edi */
    PUSH32(esp, eax); /* 0x1703FC67: push eax */
    PUSH32(esp, eax); /* 0x1703FC68: push eax */
    PUSH32(esp, eax); /* 0x1703FC69: push eax */
    PUSH32(esp, MEM32(ebx)); /* 0x1703FC6A: push dword ptr [ebx] */
    MEM32(ebp + (-0x4)) = eax; /* 0x1703FC6C: mov dword ptr [ebp - 4], eax */
    MEM32(ebp + (-0x8)) = eax; /* 0x1703FC6F: mov dword ptr [ebp - 8], eax */
    MEM32(ebp + (-0xC)) = eax; /* 0x1703FC72: mov dword ptr [ebp - 0xc], eax */
    MEM32(ebp + (-0x10)) = eax; /* 0x1703FC75: mov dword ptr [ebp - 0x10], eax */
    PUSH32(esp, 0x17003260u); /* 0x1703FC78: push 0x17003260 */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703FC87; /* 0x1703FC7D: je 0x1703fc87 */
L_1703FC7F:
    edx = MEM32(ecx); /* 0x1703FC7F: mov edx, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x1703FC81: push ecx */
    RECOMP_ICALL(MEM32(edx + 0x1C)); /* 0x1703FC82: call dword ptr [edx + 0x1c] */
    RECOMP_FLAGS_IN();
    goto L_1703FC8F; /* 0x1703FC85: jmp 0x1703fc8f */
L_1703FC87:
    ecx = MEM32(esi); /* 0x1703FC87: mov ecx, dword ptr [esi] */
    edx = MEM32(ecx); /* 0x1703FC89: mov edx, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x1703FC8B: push ecx */
    RECOMP_ICALL(MEM32(edx + 0x10)); /* 0x1703FC8C: call dword ptr [edx + 0x10] */
    RECOMP_FLAGS_IN();
L_1703FC8F:
    edi = eax; /* 0x1703FC8F: mov edi, eax */
    /* test edi, edi */ /* 0x1703FC91: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1703FCF3; /* 0x1703FC93: jl 0x1703fcf3 */
L_1703FC95:
    /* cmp MEM32(esi + 0x4), 0 */ /* 0x1703FC95: cmp dword ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703FCAF; /* 0x1703FC99: je 0x1703fcaf */
L_1703FC9B:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1703FC9B: push dword ptr [ebp - 4] */
    eax = MEM32(esi + 0x4); /* 0x1703FC9E: mov eax, dword ptr [esi + 4] */
    PUSH32(esp, MEM32(esi)); /* 0x1703FCA1: push dword ptr [esi] */
    ecx = MEM32(eax); /* 0x1703FCA3: mov ecx, dword ptr [eax] */
    PUSH32(esp, ebx); /* 0x1703FCA5: push ebx */
    PUSH32(esp, eax); /* 0x1703FCA6: push eax */
    RECOMP_ICALL(MEM32(ecx)); /* 0x1703FCA7: call dword ptr [ecx] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1703FCA9: mov edi, eax */
    /* test edi, edi */ /* 0x1703FCAB: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1703FCF3; /* 0x1703FCAD: jl 0x1703fcf3 */
L_1703FCAF:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1703FCAF: push dword ptr [ebp - 4] */
    PUSH32(esp, ebx); /* 0x1703FCB2: push ebx */
    PUSH32(esp, esi); /* 0x1703FCB3: push esi */
    RECOMP_CALL(sub_1703FBDF); /* 0x1703FCB4: call 0x1703fbdf */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1703FCB9: mov edi, eax */
    /* test edi, edi */ /* 0x1703FCBB: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1703FCF3; /* 0x1703FCBD: jl 0x1703fcf3 */
L_1703FCBF:
    eax = MEM32(ebx + 0x44); /* 0x1703FCBF: mov eax, dword ptr [ebx + 0x44] */
    /* test eax, eax */ /* 0x1703FCC2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0xC) = eax; /* 0x1703FCC4: mov dword ptr [ebp + 0xc], eax */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1703FD2F; /* 0x1703FCC7: jne 0x1703fd2f */
L_1703FCC9:
    eax = MEM32(ebx + 0x4C); /* 0x1703FCC9: mov eax, dword ptr [ebx + 0x4c] */
    /* test eax, eax */ /* 0x1703FCCC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703FCE0; /* 0x1703FCCE: je 0x1703fce0 */
L_1703FCD0:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1703FCD0: push dword ptr [ebp - 4] */
    PUSH32(esp, eax); /* 0x1703FCD3: push eax */
    PUSH32(esp, esi); /* 0x1703FCD4: push esi */
    RECOMP_CALL(sub_1703FC4B); /* 0x1703FCD5: call 0x1703fc4b */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1703FCDA: mov edi, eax */
    /* test edi, edi */ /* 0x1703FCDC: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1703FCF3; /* 0x1703FCDE: jl 0x1703fcf3 */
L_1703FCE0:
    ebx = MEM32(ebx + 0x48); /* 0x1703FCE0: mov ebx, dword ptr [ebx + 0x48] */
    /* test ebx, ebx */ /* 0x1703FCE3: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703FCF3; /* 0x1703FCE5: je 0x1703fcf3 */
L_1703FCE7:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1703FCE7: push dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x1703FCEA: push ebx */
    PUSH32(esp, esi); /* 0x1703FCEB: push esi */
    RECOMP_CALL(sub_1703FC4B); /* 0x1703FCEC: call 0x1703fc4b */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1703FCF1: mov edi, eax */
L_1703FCF3:
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x1703FCF3: push dword ptr [ebp - 0xc] */
    RECOMP_CALL(sub_1721B010); /* 0x1703FCF6: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x1703FCFB: push dword ptr [ebp - 0x10] */
    RECOMP_CALL(sub_1721B010); /* 0x1703FCFE: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x8)); /* 0x1703FD03: mov eax, dword ptr [ebp - 8] */
    /* test eax, eax */ /* 0x1703FD06: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1703FD08: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1703FD09: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703FD16; /* 0x1703FD0A: je 0x1703fd16 */
L_1703FD0C:
    ecx = MEM32(eax); /* 0x1703FD0C: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1703FD0E: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1703FD0F: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x1703FD12: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1703FD16:
    eax = MEM32(ebp + (-0x4)); /* 0x1703FD16: mov eax, dword ptr [ebp - 4] */
    /* test eax, eax */ /* 0x1703FD19: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703FD23; /* 0x1703FD1B: je 0x1703fd23 */
L_1703FD1D:
    ecx = MEM32(eax); /* 0x1703FD1D: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1703FD1F: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1703FD20: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
L_1703FD23:
    eax = edi; /* 0x1703FD23: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1703FD25: pop edi */
    esi = POP32_VAL(esp); /* 0x1703FD26: pop esi */
    ebx = POP32_VAL(esp); /* 0x1703FD27: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1703FD28: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1703FD29: ret 0xc */
L_1703FD2C:
    eax = MEM32(ebp + 0xC); /* 0x1703FD2C: mov eax, dword ptr [ebp + 0xc] */
L_1703FD2F:
    ecx = MEM32(eax + 0x8); /* 0x1703FD2F: mov ecx, dword ptr [eax + 8] */
    /* test ecx, ecx */ /* 0x1703FD32: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703FE01; /* 0x1703FD34: je 0x1703fe01 */
L_1703FD3A:
    edx = MEM32(eax + 0x4); /* 0x1703FD3A: mov edx, dword ptr [eax + 4] */
    /* cmp edx, 3 */ /* 0x1703FD3D: cmp edx, 3 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1703FD52; /* 0x1703FD40: jne 0x1703fd52 */
L_1703FD42:
    ecx = ebp + 0x8; /* 0x1703FD42: lea ecx, [ebp + 8] */
    PUSH32(esp, ecx); /* 0x1703FD45: push ecx */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1703FD46: push dword ptr [ebp - 4] */
    PUSH32(esp, eax); /* 0x1703FD49: push eax */
    PUSH32(esp, esi); /* 0x1703FD4A: push esi */
    RECOMP_CALL(sub_1703F71B); /* 0x1703FD4B: call 0x1703f71b */
    RECOMP_FLAGS_IN();
    goto L_1703FDC0; /* 0x1703FD50: jmp 0x1703fdc0 */
L_1703FD52:
    /* cmp edx, 2 */ /* 0x1703FD52: cmp edx, 2 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1703FD78; /* 0x1703FD55: jne 0x1703fd78 */
L_1703FD57:
    eax = ebp + (-0x8); /* 0x1703FD57: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x1703FD5A: push eax */
    eax = ebp + (-0xC); /* 0x1703FD5B: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1703FD5E: push eax */
    eax = ebp + (-0x14); /* 0x1703FD5F: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1703FD62: push eax */
    eax = ebp + (-0x10); /* 0x1703FD63: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1703FD66: push eax */
    PUSH32(esp, ecx); /* 0x1703FD67: push ecx */
    RECOMP_CALL(sub_1704E12F); /* 0x1703FD68: call 0x1704e12f */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1703FD6D: mov edi, eax */
    /* test edi, edi */ /* 0x1703FD6F: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1703FCF3; /* 0x1703FD71: jl 0x1703fcf3 */
L_1703FD73:
    eax = MEM32(ebp + (-0xC)); /* 0x1703FD73: mov eax, dword ptr [ebp - 0xc] */
    goto L_1703FD8D; /* 0x1703FD76: jmp 0x1703fd8d */
L_1703FD78:
    eax = MEM32(ebx + 0x44); /* 0x1703FD78: mov eax, dword ptr [ebx + 0x44] */
    eax = MEM32(eax + 0x8); /* 0x1703FD7B: mov eax, dword ptr [eax + 8] */
    MEM32(ebp + (-0x8)) = eax; /* 0x1703FD7E: mov dword ptr [ebp - 8], eax */
    ecx = MEM32(eax); /* 0x1703FD81: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1703FD83: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x4)); /* 0x1703FD84: call dword ptr [ecx + 4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0x44); /* 0x1703FD87: mov eax, dword ptr [ebx + 0x44] */
    eax = MEM32(eax + 0x18); /* 0x1703FD8A: mov eax, dword ptr [eax + 0x18] */
L_1703FD8D:
    ecx = MEM32(ebp + 0xC); /* 0x1703FD8D: mov ecx, dword ptr [ebp + 0xc] */
    /* cmp MEM32(ecx + 0x1C), 0 */ /* 0x1703FD90: cmp dword ptr [ecx + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703FDA8; /* 0x1703FD94: je 0x1703fda8 */
L_1703FD96:
    eax = ebp + 0x8; /* 0x1703FD96: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x1703FD99: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1703FD9A: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebx + 0x44)); /* 0x1703FD9D: push dword ptr [ebx + 0x44] */
    PUSH32(esp, esi); /* 0x1703FDA0: push esi */
    RECOMP_CALL(sub_1703F4D5); /* 0x1703FDA1: call 0x1703f4d5 */
    RECOMP_FLAGS_IN();
    goto L_1703FDC0; /* 0x1703FDA6: jmp 0x1703fdc0 */
L_1703FDA8:
    edx = ebp + 0x8; /* 0x1703FDA8: lea edx, [ebp + 8] */
    PUSH32(esp, edx); /* 0x1703FDAB: push edx */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1703FDAC: push dword ptr [ebp - 4] */
    PUSH32(esp, eax); /* 0x1703FDAF: push eax */
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x1703FDB0: push dword ptr [ebp - 0x14] */
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x1703FDB3: push dword ptr [ebp - 0x10] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x1703FDB6: push dword ptr [ebp - 8] */
    PUSH32(esp, ecx); /* 0x1703FDB9: push ecx */
    PUSH32(esp, esi); /* 0x1703FDBA: push esi */
    RECOMP_CALL(sub_1703F6A9); /* 0x1703FDBB: call 0x1703f6a9 */
    RECOMP_FLAGS_IN();
L_1703FDC0:
    edi = eax; /* 0x1703FDC0: mov edi, eax */
    /* test edi, edi */ /* 0x1703FDC2: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1703FCF3; /* 0x1703FDC4: jl 0x1703fcf3 */
L_1703FDCA:
    /* cmp MEM32(esi + 0x4), 0 */ /* 0x1703FDCA: cmp dword ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703FDEB; /* 0x1703FDCE: je 0x1703fdeb */
L_1703FDD0:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1703FDD0: push dword ptr [ebp + 8] */
    eax = MEM32(esi + 0x4); /* 0x1703FDD3: mov eax, dword ptr [esi + 4] */
    PUSH32(esp, MEM32(esi)); /* 0x1703FDD6: push dword ptr [esi] */
    ecx = MEM32(eax); /* 0x1703FDD8: mov ecx, dword ptr [eax] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1703FDDA: push dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x1703FDDD: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x4)); /* 0x1703FDDE: call dword ptr [ecx + 4] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1703FDE1: mov edi, eax */
    /* test edi, edi */ /* 0x1703FDE3: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1703FCF3; /* 0x1703FDE5: jl 0x1703fcf3 */
L_1703FDEB:
    eax = MEM32(ebp + 0xC); /* 0x1703FDEB: mov eax, dword ptr [ebp + 0xc] */
    eax = MEM32(eax + 0x20); /* 0x1703FDEE: mov eax, dword ptr [eax + 0x20] */
    /* test eax, eax */ /* 0x1703FDF1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0xC) = eax; /* 0x1703FDF3: mov dword ptr [ebp + 0xc], eax */
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1703FD2C; /* 0x1703FDF6: jne 0x1703fd2c */
L_1703FDFC:
    RECOMP_BACKEDGE();
    goto L_1703FCC9; /* 0x1703FDFC: jmp 0x1703fcc9 */
L_1703FE01:
    edi = 0x8876086Cu; /* 0x1703FE01: mov edi, 0x8876086c */
    RECOMP_BACKEDGE();
    goto L_1703FCF3; /* 0x1703FE06: jmp 0x1703fcf3 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1703FE10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1703FE10u);

L_1703FE10:
    edi = edi; /* 0x1703FE10: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1703FE12: push ebp */
    ebp = esp; /* 0x1703FE13: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x1703FE15: sub esp, 0x20 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1703FE18: push ebx */
    PUSH32(esp, esi); /* 0x1703FE19: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1703FE1A: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1703FE1D: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1703FE1E: mov edi, dword ptr [ebp + 8] */
    ecx = MEM32(edi); /* 0x1703FE21: mov ecx, dword ptr [edi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1703FE23: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x1703FE25: mov dword ptr [ebp - 0x10], eax */
    ebx = MEM32(ecx); /* 0x1703FE28: mov ebx, dword ptr [ecx] */
    ecx = ebp + (-0x10); /* 0x1703FE2A: lea ecx, [ebp - 0x10] */
    PUSH32(esp, ecx); /* 0x1703FE2D: push ecx */
    PUSH32(esp, eax); /* 0x1703FE2E: push eax */
    PUSH32(esp, eax); /* 0x1703FE2F: push eax */
    PUSH32(esp, eax); /* 0x1703FE30: push eax */
    MEM32(ebp + (-0x4)) = eax; /* 0x1703FE31: mov dword ptr [ebp - 4], eax */
    MEM32(ebp + (-0x8)) = eax; /* 0x1703FE34: mov dword ptr [ebp - 8], eax */
    MEM32(ebp + (-0xC)) = eax; /* 0x1703FE37: mov dword ptr [ebp - 0xc], eax */
    eax = MEM32(esi); /* 0x1703FE3A: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x1703FE3C: push esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x1703FE3D: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1703FE40: push eax */
    PUSH32(esp, 0x17003290u); /* 0x1703FE41: push 0x17003290 */
    PUSH32(esp, MEM32(edi)); /* 0x1703FE46: push dword ptr [edi] */
    RECOMP_ICALL(MEM32(ebx + 0x10)); /* 0x1703FE48: call dword ptr [ebx + 0x10] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1703FE4B: mov edi, eax */
    /* test edi, edi */ /* 0x1703FE4D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1703FFF7; /* 0x1703FE4F: jl 0x1703fff7 */
L_1703FE55:
    eax = MEM32(esi); /* 0x1703FE55: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x1703FE57: push esi */
    RECOMP_ICALL(MEM32(eax + 0x18)); /* 0x1703FE58: call dword ptr [eax + 0x18] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) & 0; /* 0x1703FE5B: and dword ptr [ebp + 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x1703FE5F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x20)) = eax; /* 0x1703FE61: mov dword ptr [ebp - 0x20], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703FFF7; /* 0x1703FE64: jbe 0x1703fff7 */
L_1703FE6A:
    eax = MEM32(esi); /* 0x1703FE6A: mov eax, dword ptr [esi] */
    ecx = ebp + (-0x1C); /* 0x1703FE6C: lea ecx, [ebp - 0x1c] */
    PUSH32(esp, ecx); /* 0x1703FE6F: push ecx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1703FE70: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x1703FE73: push esi */
    RECOMP_ICALL(MEM32(eax + 0x1C)); /* 0x1703FE74: call dword ptr [eax + 0x1c] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1703FE77: mov edi, eax */
    /* test edi, edi */ /* 0x1703FE79: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1703FFF7; /* 0x1703FE7B: jl 0x1703fff7 */
L_1703FE81:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1703FE81: push dword ptr [ebp + 0xc] */
    eax = MEM32(esi); /* 0x1703FE84: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x1703FE86: push esi */
    RECOMP_ICALL(MEM32(eax + 0x34)); /* 0x1703FE87: call dword ptr [eax + 0x34] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1703FE8A: mov ebx, eax */
    /* test ebx, ebx */ /* 0x1703FE8C: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x18)) = ebx; /* 0x1703FE8E: mov dword ptr [ebp - 0x18], ebx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703FEDA; /* 0x1703FE91: jbe 0x1703feda */
L_1703FE93:
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x1703FE93: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x1703FE93: shl eax, 4 */
    PUSH32(esp, eax); /* 0x1703FE96: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1703FE97: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1703FE9C: mov edi, eax */
    /* test edi, edi */ /* 0x1703FE9E: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1703FEA0: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703FEB6; /* 0x1703FEA1: je 0x1703feb6 */
L_1703FEA3:
    PUSH32(esp, 0x1706E47Eu); /* 0x1703FEA3: push 0x1706e47e */
    PUSH32(esp, ebx); /* 0x1703FEA8: push ebx */
    PUSH32(esp, 0x10u); /* 0x1703FEA9: push 0x10 */
    PUSH32(esp, edi); /* 0x1703FEAB: push edi */
    RECOMP_CALL(sub_1702C116); /* 0x1703FEAC: call 0x1702c116 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = edi; /* 0x1703FEB1: mov dword ptr [ebp - 4], edi */
    goto L_1703FEBA; /* 0x1703FEB4: jmp 0x1703feba */
L_1703FEB6:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1703FEB6: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1703FEBA:
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x1703FEBA: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703FFF2; /* 0x1703FEBE: je 0x1703fff2 */
L_1703FEC4:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1703FEC4: push dword ptr [ebp - 4] */
    eax = MEM32(esi); /* 0x1703FEC7: mov eax, dword ptr [esi] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1703FEC9: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x1703FECC: push esi */
    RECOMP_ICALL(MEM32(eax + 0x38)); /* 0x1703FECD: call dword ptr [eax + 0x38] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1703FED0: mov edi, eax */
    /* test edi, edi */ /* 0x1703FED2: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1703FFF7; /* 0x1703FED4: jl 0x1703fff7 */
L_1703FEDA:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1703FEDA: push dword ptr [ebp + 0xc] */
    eax = MEM32(esi); /* 0x1703FEDD: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x1703FEDF: push esi */
    RECOMP_ICALL(MEM32(eax + 0x44)); /* 0x1703FEE0: call dword ptr [eax + 0x44] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1703FEE3: mov edi, eax */
    /* test edi, edi */ /* 0x1703FEE5: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = edi; /* 0x1703FEE7: mov dword ptr [ebp - 0x14], edi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703FF39; /* 0x1703FEEA: jbe 0x1703ff39 */
L_1703FEEC:
    eax = edi + edi * 4; /* 0x1703FEEC: lea eax, [edi + edi*4] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1703FEEF: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1703FEEF: shl eax, 2 */
    PUSH32(esp, eax); /* 0x1703FEF2: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1703FEF3: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1703FEF8: mov ebx, eax */
    /* test ebx, ebx */ /* 0x1703FEFA: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1703FEFC: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703FF12; /* 0x1703FEFD: je 0x1703ff12 */
L_1703FEFF:
    PUSH32(esp, 0x1706E47Eu); /* 0x1703FEFF: push 0x1706e47e */
    PUSH32(esp, edi); /* 0x1703FF04: push edi */
    PUSH32(esp, 0x14u); /* 0x1703FF05: push 0x14 */
    PUSH32(esp, ebx); /* 0x1703FF07: push ebx */
    RECOMP_CALL(sub_1702C116); /* 0x1703FF08: call 0x1702c116 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x8)) = ebx; /* 0x1703FF0D: mov dword ptr [ebp - 8], ebx */
    goto L_1703FF16; /* 0x1703FF10: jmp 0x1703ff16 */
L_1703FF12:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x1703FF12: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1703FF16:
    /* cmp MEM32(ebp + (-0x8)), 0 */ /* 0x1703FF16: cmp dword ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703FFF2; /* 0x1703FF1A: je 0x1703fff2 */
L_1703FF20:
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x1703FF20: push dword ptr [ebp - 8] */
    eax = MEM32(esi); /* 0x1703FF23: mov eax, dword ptr [esi] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1703FF25: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x1703FF28: push esi */
    RECOMP_ICALL(MEM32(eax + 0x48)); /* 0x1703FF29: call dword ptr [eax + 0x48] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1703FF2C: mov edi, eax */
    /* test edi, edi */ /* 0x1703FF2E: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1703FFF7; /* 0x1703FF30: jl 0x1703fff7 */
L_1703FF36:
    edi = MEM32(ebp + (-0x14)); /* 0x1703FF36: mov edi, dword ptr [ebp - 0x14] */
L_1703FF39:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1703FF39: push dword ptr [ebp + 0xc] */
    eax = MEM32(esi); /* 0x1703FF3C: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x1703FF3E: push esi */
    RECOMP_ICALL(MEM32(eax + 0x54)); /* 0x1703FF3F: call dword ptr [eax + 0x54] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1703FF42: mov ebx, eax */
    /* test ebx, ebx */ /* 0x1703FF44: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703FF8A; /* 0x1703FF46: jbe 0x1703ff8a */
L_1703FF48:
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x1703FF48: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x1703FF48: shl eax, 4 */
    PUSH32(esp, eax); /* 0x1703FF4B: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1703FF4C: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1703FF51: mov edi, eax */
    /* test edi, edi */ /* 0x1703FF53: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1703FF55: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1703FF6B; /* 0x1703FF56: je 0x1703ff6b */
L_1703FF58:
    PUSH32(esp, 0x1706E47Eu); /* 0x1703FF58: push 0x1706e47e */
    PUSH32(esp, ebx); /* 0x1703FF5D: push ebx */
    PUSH32(esp, 0x10u); /* 0x1703FF5E: push 0x10 */
    PUSH32(esp, edi); /* 0x1703FF60: push edi */
    RECOMP_CALL(sub_1702C116); /* 0x1703FF61: call 0x1702c116 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0xC)) = edi; /* 0x1703FF66: mov dword ptr [ebp - 0xc], edi */
    goto L_1703FF6F; /* 0x1703FF69: jmp 0x1703ff6f */
L_1703FF6B:
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) & 0; /* 0x1703FF6B: and dword ptr [ebp - 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1703FF6F:
    /* cmp MEM32(ebp + (-0xC)), 0 */ /* 0x1703FF6F: cmp dword ptr [ebp - 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703FFF2; /* 0x1703FF73: je 0x1703fff2 */
L_1703FF75:
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x1703FF75: push dword ptr [ebp - 0xc] */
    eax = MEM32(esi); /* 0x1703FF78: mov eax, dword ptr [esi] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1703FF7A: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x1703FF7D: push esi */
    RECOMP_ICALL(MEM32(eax + 0x58)); /* 0x1703FF7E: call dword ptr [eax + 0x58] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1703FF81: mov edi, eax */
    /* test edi, edi */ /* 0x1703FF83: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1703FFF7; /* 0x1703FF85: jl 0x1703fff7 */
L_1703FF87:
    edi = MEM32(ebp + (-0x14)); /* 0x1703FF87: mov edi, dword ptr [ebp - 0x14] */
L_1703FF8A:
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x1703FF8A: push dword ptr [ebp - 0x10] */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x1703FF8D: push dword ptr [ebp - 0xc] */
    PUSH32(esp, ebx); /* 0x1703FF90: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x1703FF91: push dword ptr [ebp - 8] */
    PUSH32(esp, edi); /* 0x1703FF94: push edi */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1703FF95: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x1703FF98: push dword ptr [ebp - 0x18] */
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x1703FF9B: push dword ptr [ebp - 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1703FF9E: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1703F784); /* 0x1703FFA1: call 0x1703f784 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1703FFA6: mov edi, eax */
    /* test edi, edi */ /* 0x1703FFA8: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1703FFF7; /* 0x1703FFAA: jl 0x1703fff7 */
L_1703FFAC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1703FFAC: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x4)), ebx */ /* 0x1703FFAE: cmp dword ptr [ebp - 4], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703FFBF; /* 0x1703FFB1: je 0x1703ffbf */
L_1703FFB3:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1703FFB3: push dword ptr [ebp - 4] */
    RECOMP_CALL(sub_1721B010); /* 0x1703FFB6: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1703FFBB: pop ecx */
    MEM32(ebp + (-0x4)) = ebx; /* 0x1703FFBC: mov dword ptr [ebp - 4], ebx */
L_1703FFBF:
    /* cmp MEM32(ebp + (-0x8)), ebx */ /* 0x1703FFBF: cmp dword ptr [ebp - 8], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703FFD0; /* 0x1703FFC2: je 0x1703ffd0 */
L_1703FFC4:
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x1703FFC4: push dword ptr [ebp - 8] */
    RECOMP_CALL(sub_1721B010); /* 0x1703FFC7: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1703FFCC: pop ecx */
    MEM32(ebp + (-0x8)) = ebx; /* 0x1703FFCD: mov dword ptr [ebp - 8], ebx */
L_1703FFD0:
    /* cmp MEM32(ebp + (-0xC)), ebx */ /* 0x1703FFD0: cmp dword ptr [ebp - 0xc], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1703FFE1; /* 0x1703FFD3: je 0x1703ffe1 */
L_1703FFD5:
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x1703FFD5: push dword ptr [ebp - 0xc] */
    RECOMP_CALL(sub_1721B010); /* 0x1703FFD8: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1703FFDD: pop ecx */
    MEM32(ebp + (-0xC)) = ebx; /* 0x1703FFDE: mov dword ptr [ebp - 0xc], ebx */
L_1703FFE1:
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 1; /* 0x1703FFE1: inc dword ptr [ebp + 0xc] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + 0xC); /* 0x1703FFE4: mov eax, dword ptr [ebp + 0xc] */
    /* cmp eax, MEM32(ebp + (-0x20)) */ /* 0x1703FFE7: cmp eax, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x20)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1703FE6A; /* 0x1703FFEA: jb 0x1703fe6a */
L_1703FFF0:
    goto L_1703FFF7; /* 0x1703FFF0: jmp 0x1703fff7 */
L_1703FFF2:
    edi = 0x8007000Eu; /* 0x1703FFF2: mov edi, 0x8007000e */
L_1703FFF7:
    eax = MEM32(ebp + (-0x10)); /* 0x1703FFF7: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1703FFFA: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ebx */ /* 0x1703FFFC: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17040009; /* 0x1703FFFE: je 0x17040009 */
L_17040000:
    ecx = MEM32(eax); /* 0x17040000: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x17040002: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x17040003: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x10)) = ebx; /* 0x17040006: mov dword ptr [ebp - 0x10], ebx */
L_17040009:
    eax = MEM32(esi); /* 0x17040009: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x1704000B: push esi */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1704000C: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x4)), ebx */ /* 0x1704000F: cmp dword ptr [ebp - 4], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704001D; /* 0x17040012: je 0x1704001d */
L_17040014:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x17040014: push dword ptr [ebp - 4] */
    RECOMP_CALL(sub_1721B010); /* 0x17040017: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1704001C: pop ecx */
L_1704001D:
    /* cmp MEM32(ebp + (-0x8)), ebx */ /* 0x1704001D: cmp dword ptr [ebp - 8], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704002B; /* 0x17040020: je 0x1704002b */
L_17040022:
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x17040022: push dword ptr [ebp - 8] */
    RECOMP_CALL(sub_1721B010); /* 0x17040025: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1704002A: pop ecx */
L_1704002B:
    /* cmp MEM32(ebp + (-0xC)), ebx */ /* 0x1704002B: cmp dword ptr [ebp - 0xc], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17040039; /* 0x1704002E: je 0x17040039 */
L_17040030:
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x17040030: push dword ptr [ebp - 0xc] */
    RECOMP_CALL(sub_1721B010); /* 0x17040033: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x17040038: pop ecx */
L_17040039:
    eax = edi; /* 0x17040039: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1704003B: pop edi */
    esi = POP32_VAL(esp); /* 0x1704003C: pop esi */
    ebx = POP32_VAL(esp); /* 0x1704003D: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1704003E: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1704003F: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_17040047(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17040047u);

L_17040047:
    edi = edi; /* 0x17040047: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17040049: push ebp */
    ebp = esp; /* 0x1704004A: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1704004C: push ecx */
    PUSH32(esp, esi); /* 0x1704004D: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1704004E: mov esi, dword ptr [ebp + 0xc] */
    eax = MEM32(esi); /* 0x17040051: mov eax, dword ptr [esi] */
    ecx = ebp + 0xC; /* 0x17040053: lea ecx, [ebp + 0xc] */
    PUSH32(esp, ecx); /* 0x17040056: push ecx */
    PUSH32(esp, 0x17001970u); /* 0x17040057: push 0x17001970 */
    PUSH32(esp, esi); /* 0x1704005C: push esi */
    RECOMP_ICALL(MEM32(eax)); /* 0x1704005D: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1704005F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17040070; /* 0x17040061: jl 0x17040070 */
L_17040063:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x17040063: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x17040066: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1703FE10); /* 0x17040069: call 0x1703fe10 */
    RECOMP_FLAGS_IN();
    goto L_1704008D; /* 0x1704006E: jmp 0x1704008d */
L_17040070:
    eax = MEM32(esi); /* 0x17040070: mov eax, dword ptr [esi] */
    ecx = ebp + (-0x4); /* 0x17040072: lea ecx, [ebp - 4] */
    PUSH32(esp, ecx); /* 0x17040075: push ecx */
    PUSH32(esp, 0x17001960u); /* 0x17040076: push 0x17001960 */
    PUSH32(esp, esi); /* 0x1704007B: push esi */
    RECOMP_ICALL(MEM32(eax)); /* 0x1704007C: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1704007E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1704008D; /* 0x17040080: jl 0x1704008d */
L_17040082:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x17040082: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x17040085: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1703F9E9); /* 0x17040088: call 0x1703f9e9 */
    RECOMP_FLAGS_IN();
L_1704008D:
    esi = POP32_VAL(esp); /* 0x1704008D: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1704008E: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1704008F: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_17040097(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17040097u);

L_17040097:
    edi = edi; /* 0x17040097: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17040099: push ebp */
    ebp = esp; /* 0x1704009A: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x1704009C: sub esp, 0x1c */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1704009F: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x170400A0: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x8), ebx */ /* 0x170400A2: cmp dword ptr [ebp + 8], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x170400A5: push esi */
    PUSH32(esp, edi); /* 0x170400A6: push edi */
    MEM32(ebp + (-0x4)) = ebx; /* 0x170400A7: mov dword ptr [ebp - 4], ebx */
    MEM32(ebp + (-0x8)) = ebx; /* 0x170400AA: mov dword ptr [ebp - 8], ebx */
    MEM32(ebp + (-0x10)) = ebx; /* 0x170400AD: mov dword ptr [ebp - 0x10], ebx */
    MEM32(ebp + (-0xC)) = ebx; /* 0x170400B0: mov dword ptr [ebp - 0xc], ebx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704024F; /* 0x170400B3: je 0x1704024f */
L_170400B9:
    /* test MEM32(ebp + 0x10), 0xFFFFFFFCu */ /* 0x170400B9: test dword ptr [ebp + 0x10], 0xfffffffc */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0xFFFFFFFCu);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1704024F; /* 0x170400C0: jne 0x1704024f */
L_170400C6:
    /* cmp MEM32(ebp + 0x14), ebx */ /* 0x170400C6: cmp dword ptr [ebp + 0x14], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704024F; /* 0x170400C9: je 0x1704024f */
L_170400CF:
    eax = ebp + (-0x4); /* 0x170400CF: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x170400D2: push eax */
    RECOMP_CALL(sub_171A7842); /* 0x170400D3: call 0x171a7842 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x170400D8: mov esi, eax */
    /* cmp esi, ebx */ /* 0x170400DA: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_17040254; /* 0x170400DC: jl 0x17040254 */
L_170400E2:
    eax = MEM32(ebp + (-0x4)); /* 0x170400E2: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(eax); /* 0x170400E5: mov ecx, dword ptr [eax] */
    PUSH32(esp, 0xCCEu); /* 0x170400E7: push 0xcce */
    PUSH32(esp, 0x17225358u); /* 0x170400EC: push 0x17225358 */
    PUSH32(esp, eax); /* 0x170400F1: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x14)); /* 0x170400F2: call dword ptr [ecx + 0x14] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x170400F5: mov esi, eax */
    /* cmp esi, ebx */ /* 0x170400F7: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_17040254; /* 0x170400F9: jl 0x17040254 */
L_170400FF:
    eax = MEM32(ebp + (-0x4)); /* 0x170400FF: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(eax); /* 0x17040102: mov ecx, dword ptr [eax] */
    PUSH32(esp, 0xC98u); /* 0x17040104: push 0xc98 */
    PUSH32(esp, 0x170025B8u); /* 0x17040109: push 0x170025b8 */
    PUSH32(esp, eax); /* 0x1704010E: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x14)); /* 0x1704010F: call dword ptr [ecx + 0x14] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x17040112: mov esi, eax */
    /* cmp esi, ebx */ /* 0x17040114: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_17040254; /* 0x17040116: jl 0x17040254 */
L_1704011C:
    eax = MEM32(ebp + (-0x4)); /* 0x1704011C: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(eax); /* 0x1704011F: mov ecx, dword ptr [eax] */
    PUSH32(esp, 0x65Bu); /* 0x17040121: push 0x65b */
    PUSH32(esp, 0x17001F58u); /* 0x17040126: push 0x17001f58 */
    PUSH32(esp, eax); /* 0x1704012B: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x14)); /* 0x1704012C: call dword ptr [ecx + 0x14] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1704012F: mov esi, eax */
    /* cmp esi, ebx */ /* 0x17040131: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_17040254; /* 0x17040133: jl 0x17040254 */
L_17040139:
    edi = MEM32(ebp + 0x1C); /* 0x17040139: mov edi, dword ptr [ebp + 0x1c] */
    /* cmp edi, ebx */ /* 0x1704013C: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17040153; /* 0x1704013E: je 0x17040153 */
L_17040140:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x17040140: push dword ptr [ebp - 4] */
    eax = MEM32(edi); /* 0x17040143: mov eax, dword ptr [edi] */
    PUSH32(esp, edi); /* 0x17040145: push edi */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x17040146: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x17040149: mov esi, eax */
    /* cmp esi, ebx */ /* 0x1704014B: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_17040254; /* 0x1704014D: jl 0x17040254 */
L_17040153:
    eax = MEM32(ebp + (-0x4)); /* 0x17040153: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(eax); /* 0x17040156: mov ecx, dword ptr [eax] */
    edx = ebp + (-0x8); /* 0x17040158: lea edx, [ebp - 8] */
    PUSH32(esp, edx); /* 0x1704015B: push edx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1704015C: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1704015F: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x17040162: push dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x17040165: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x10)); /* 0x17040166: call dword ptr [ecx + 0x10] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x17040169: mov esi, eax */
    /* cmp esi, ebx */ /* 0x1704016B: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_17040254; /* 0x1704016D: jl 0x17040254 */
L_17040173:
    /* cmp edi, ebx */ /* 0x17040173: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704018A; /* 0x17040175: je 0x1704018a */
L_17040177:
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x17040177: push dword ptr [ebp - 8] */
    eax = MEM32(edi); /* 0x1704017A: mov eax, dword ptr [edi] */
    PUSH32(esp, edi); /* 0x1704017C: push edi */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x1704017D: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x17040180: mov esi, eax */
    /* cmp esi, ebx */ /* 0x17040182: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_17040254; /* 0x17040184: jl 0x17040254 */
L_1704018A:
    /* cmp edi, ebx */ /* 0x1704018A: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x8)); /* 0x1704018C: mov eax, dword ptr [ebp - 8] */
    ecx = MEM32(ebp + 0x10); /* 0x1704018F: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x17040192: mov dword ptr [ebp - 0x1c], eax */
    MEM32(ebp + (-0x14)) = ecx; /* 0x17040195: mov dword ptr [ebp - 0x14], ecx */
    MEM32(ebp + (-0x18)) = edi; /* 0x17040198: mov dword ptr [ebp - 0x18], edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170401AE; /* 0x1704019B: je 0x170401ae */
L_1704019D:
    ecx = MEM32(edi); /* 0x1704019D: mov ecx, dword ptr [edi] */
    PUSH32(esp, eax); /* 0x1704019F: push eax */
    PUSH32(esp, edi); /* 0x170401A0: push edi */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x170401A1: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x170401A4: mov esi, eax */
    /* cmp esi, ebx */ /* 0x170401A6: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_17040254; /* 0x170401A8: jl 0x17040254 */
L_170401AE:
    edi = MEM32(ebp + 0x18); /* 0x170401AE: mov edi, dword ptr [ebp + 0x18] */
    PUSH32(esp, edi); /* 0x170401B1: push edi */
    eax = ebp + (-0x1C); /* 0x170401B2: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x170401B5: push eax */
    RECOMP_CALL(sub_1703FAC0); /* 0x170401B6: call 0x1703fac0 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x170401BB: mov esi, eax */
    /* cmp esi, ebx */ /* 0x170401BD: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_17040254; /* 0x170401BF: jl 0x17040254 */
L_170401C5:
    PUSH32(esp, ebx); /* 0x170401C5: push ebx */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x170401C6: push dword ptr [ebp + 0x14] */
    eax = ebp + (-0x1C); /* 0x170401C9: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x170401CC: push eax */
    RECOMP_CALL(sub_1703FC4B); /* 0x170401CD: call 0x1703fc4b */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x170401D2: mov esi, eax */
    /* cmp esi, ebx */ /* 0x170401D4: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_17040254; /* 0x170401D6: jl 0x17040254 */
L_170401D8:
    /* cmp edi, ebx */ /* 0x170401D8: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704022C; /* 0x170401DA: je 0x1704022c */
L_170401DC:
    eax = MEM32(edi); /* 0x170401DC: mov eax, dword ptr [edi] */
    PUSH32(esp, edi); /* 0x170401DE: push edi */
    RECOMP_ICALL(MEM32(eax + 0x28)); /* 0x170401DF: call dword ptr [eax + 0x28] */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x170401E2: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x14) = eax; /* 0x170401E4: mov dword ptr [ebp + 0x14], eax */
    MEM32(ebp + 0x10) = ebx; /* 0x170401E7: mov dword ptr [ebp + 0x10], ebx */
    if (CMP_BE(_flag_a, _flag_b)) goto L_1704022C; /* 0x170401EA: jbe 0x1704022c */
L_170401EC:
    eax = MEM32(edi); /* 0x170401EC: mov eax, dword ptr [edi] */
    ecx = ebp + 0x8; /* 0x170401EE: lea ecx, [ebp + 8] */
    PUSH32(esp, ecx); /* 0x170401F1: push ecx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170401F2: push dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x170401F5: push edi */
    RECOMP_ICALL(MEM32(eax + 0x2C)); /* 0x170401F6: call dword ptr [eax + 0x2c] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x170401F9: mov esi, eax */
    /* cmp esi, ebx */ /* 0x170401FB: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_17040254; /* 0x170401FD: jl 0x17040254 */
L_170401FF:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170401FF: push dword ptr [ebp + 8] */
    eax = ebp + (-0x1C); /* 0x17040202: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x17040205: push eax */
    RECOMP_CALL(sub_17040047); /* 0x17040206: call 0x17040047 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1704020B: mov esi, eax */
    eax = MEM32(ebp + 0x8); /* 0x1704020D: mov eax, dword ptr [ebp + 8] */
    /* cmp eax, ebx */ /* 0x17040210: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704021D; /* 0x17040212: je 0x1704021d */
L_17040214:
    ecx = MEM32(eax); /* 0x17040214: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x17040216: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x17040217: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + 0x8) = ebx; /* 0x1704021A: mov dword ptr [ebp + 8], ebx */
L_1704021D:
    /* cmp esi, ebx */ /* 0x1704021D: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_17040254; /* 0x1704021F: jl 0x17040254 */
L_17040221:
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 1; /* 0x17040221: inc dword ptr [ebp + 0x10] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + 0x10); /* 0x17040224: mov eax, dword ptr [ebp + 0x10] */
    /* cmp eax, MEM32(ebp + 0x14) */ /* 0x17040227: cmp eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170401EC; /* 0x1704022A: jb 0x170401ec */
L_1704022C:
    eax = MEM32(ebp + (-0x18)); /* 0x1704022C: mov eax, dword ptr [ebp - 0x18] */
    /* cmp eax, ebx */ /* 0x1704022F: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17040242; /* 0x17040231: je 0x17040242 */
L_17040233:
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x17040233: push dword ptr [ebp - 8] */
    ecx = MEM32(eax); /* 0x17040236: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x17040238: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xC)); /* 0x17040239: call dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1704023C: mov esi, eax */
    /* cmp esi, ebx */ /* 0x1704023E: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_17040254; /* 0x17040240: jl 0x17040254 */
L_17040242:
    eax = MEM32(ebp + (-0x8)); /* 0x17040242: mov eax, dword ptr [ebp - 8] */
    ecx = MEM32(eax); /* 0x17040245: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x17040247: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x14)); /* 0x17040248: call dword ptr [ecx + 0x14] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1704024B: mov esi, eax */
    goto L_17040254; /* 0x1704024D: jmp 0x17040254 */
L_1704024F:
    esi = 0x8876086Cu; /* 0x1704024F: mov esi, 0x8876086c */
L_17040254:
    eax = MEM32(ebp + (-0x4)); /* 0x17040254: mov eax, dword ptr [ebp - 4] */
    /* cmp eax, ebx */ /* 0x17040257: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17040264; /* 0x17040259: je 0x17040264 */
L_1704025B:
    ecx = MEM32(eax); /* 0x1704025B: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1704025D: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1704025E: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = ebx; /* 0x17040261: mov dword ptr [ebp - 4], ebx */
L_17040264:
    eax = MEM32(ebp + (-0x8)); /* 0x17040264: mov eax, dword ptr [ebp - 8] */
    /* cmp eax, ebx */ /* 0x17040267: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17040274; /* 0x17040269: je 0x17040274 */
L_1704026B:
    ecx = MEM32(eax); /* 0x1704026B: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x1704026D: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x1704026E: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x8)) = ebx; /* 0x17040271: mov dword ptr [ebp - 8], ebx */
L_17040274:
    ecx = ebp + (-0x10); /* 0x17040274: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1703FBBD); /* 0x17040277: call 0x1703fbbd */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x1704027C: pop edi */
    eax = esi; /* 0x1704027D: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1704027F: pop esi */
    ebx = POP32_VAL(esp); /* 0x17040280: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17040281: leave  */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x17040282: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_1704028A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704028Au);

L_1704028A:
    edi = edi; /* 0x1704028A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704028C: push ebp */
    ebp = esp; /* 0x1704028D: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1704028F: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x17040292: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x17040295: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x17040298: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 0); /* 0x1704029B: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1704029D: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_17040097); /* 0x170402A0: call 0x17040097 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x170402A5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x170402A6: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_170402AE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170402AEu);

L_170402AE:
    edi = edi; /* 0x170402AE: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170402B0: push ebp */
    ebp = esp; /* 0x170402B1: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x170402B3: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x170402B6: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170402B9: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x170402BC: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 1); /* 0x170402BF: push 1 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170402C1: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_17040097); /* 0x170402C4: call 0x17040097 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x170402C9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x170402CA: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_170402D2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170402D2u);

L_170402D2:
    edi = edi; /* 0x170402D2: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170402D4: push ebp */
    ebp = esp; /* 0x170402D5: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x170402D7: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x8); /* 0x170402DA: mov ecx, dword ptr [ebp + 8] */
    /* cmp eax, MEM32(ecx + 0x30) */ /* 0x170402DD: cmp eax, dword ptr [ecx + 0x30] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x30));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_170402E9; /* 0x170402E0: jb 0x170402e9 */
L_170402E2:
    eax = 0x80004005u; /* 0x170402E2: mov eax, 0x80004005 */
    goto L_170402FD; /* 0x170402E7: jmp 0x170402fd */
L_170402E9:
    edx = MEM32(ebp + 0x10); /* 0x170402E9: mov edx, dword ptr [ebp + 0x10] */
    /* test edx, edx */ /* 0x170402EC: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170402FB; /* 0x170402EE: je 0x170402fb */
L_170402F0:
    ecx = MEM32(ecx + 0x34); /* 0x170402F0: mov ecx, dword ptr [ecx + 0x34] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x44u); /* 0x170402F3: imul eax, eax, 0x44 */
    eax = MEM32(eax + ecx); /* 0x170402F6: mov eax, dword ptr [eax + ecx] */
    MEM32(edx) = eax; /* 0x170402F9: mov dword ptr [edx], eax */
L_170402FB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170402FB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_170402FD:
    ebp = POP32_VAL(esp); /* 0x170402FD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x170402FE: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_17040306(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17040306u);

L_17040306:
    edi = edi; /* 0x17040306: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17040308: push ebp */
    ebp = esp; /* 0x17040309: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1704030B: push ecx */
    PUSH32(esp, ecx); /* 0x1704030C: push ecx */
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x1704030D: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704031A; /* 0x17040311: jne 0x1704031a */
L_17040313:
    eax = 0x8876086Cu; /* 0x17040313: mov eax, 0x8876086c */
    goto L_17040392; /* 0x17040318: jmp 0x17040392 */
L_1704031A:
    eax = MEM32(ebp + 0x8); /* 0x1704031A: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax + 0x30); /* 0x1704031D: mov ecx, dword ptr [eax + 0x30] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x17040320: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x17040324: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x17040326: push ebx */
    PUSH32(esp, esi); /* 0x17040327: push esi */
    PUSH32(esp, edi); /* 0x17040328: push edi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704038A; /* 0x17040329: jbe 0x1704038a */
L_1704032B:
    edx = MEM32(eax + 0x38); /* 0x1704032B: mov edx, dword ptr [eax + 0x38] */
    eax = MEM32(eax + 0x34); /* 0x1704032E: mov eax, dword ptr [eax + 0x34] */
    MEM32(ebp + 0x8) = edx; /* 0x17040331: mov dword ptr [ebp + 8], edx */
    MEM32(ebp + (-0x8)) = eax; /* 0x17040334: mov dword ptr [ebp - 8], eax */
L_17040337:
    eax = MEM32(ebp + (-0x4)); /* 0x17040337: mov eax, dword ptr [ebp - 4] */
    edx = MEM32(ebp + 0x8); /* 0x1704033A: mov edx, dword ptr [ebp + 8] */
    esi = MEM32(ebp + (-0x8)); /* 0x1704033D: mov esi, dword ptr [ebp - 8] */
    edi = MEM32(ebp + 0xC); /* 0x17040340: mov edi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x17040343: add eax, ecx */
    _flag_k = FK_ADD;
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x17040345: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x17040345: shr eax, 1 */
    edx = MEM32(edx + eax * 4); /* 0x17040347: mov edx, dword ptr [edx + eax*4] */
    edx = (uint32_t)((int32_t)edx * (int32_t)0x44u); /* 0x1704034A: imul edx, edx, 0x44 */
    esi = MEM32(edx + esi); /* 0x1704034D: mov esi, dword ptr [edx + esi] */
L_17040350:
    SET_LO8(ebx, MEM8(esi)); /* 0x17040350: mov bl, byte ptr [esi] */
    SET_LO8(edx, LO8(ebx)); /* 0x17040352: mov dl, bl */
    /* cmp LO8(ebx), MEM8(edi) */ /* 0x17040354: cmp bl, byte ptr [edi] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edi)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17040372; /* 0x17040356: jne 0x17040372 */
L_17040358:
    /* test LO8(edx), LO8(edx) */ /* 0x17040358: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704036E; /* 0x1704035A: je 0x1704036e */
L_1704035C:
    SET_LO8(ebx, MEM8(esi + 0x1)); /* 0x1704035C: mov bl, byte ptr [esi + 1] */
    SET_LO8(edx, LO8(ebx)); /* 0x1704035F: mov dl, bl */
    /* cmp LO8(ebx), MEM8(edi + 0x1) */ /* 0x17040361: cmp bl, byte ptr [edi + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(edi + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17040372; /* 0x17040364: jne 0x17040372 */
L_17040366:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x17040366: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x17040367: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x17040368: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x17040369: inc edi */
    _flag_k = FK_INC;
    /* test LO8(edx), LO8(edx) */ /* 0x1704036A: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17040350; /* 0x1704036C: jne 0x17040350 */
L_1704036E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1704036E: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_17040377; /* 0x17040370: jmp 0x17040377 */
L_17040372:
    { uint32_t _sa = edx, _sb = edx, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17040372: sbb edx, edx */
      edx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = edx, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17040374: sbb edx, -1 */
      edx = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_17040377:
    /* test edx, edx */ /* 0x17040377: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17040396; /* 0x17040379: je 0x17040396 */
L_1704037B:
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_17040383; /* 0x1704037B: jge 0x17040383 */
L_1704037D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1704037D: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x4)) = eax; /* 0x1704037E: mov dword ptr [ebp - 4], eax */
    goto L_17040385; /* 0x17040381: jmp 0x17040385 */
L_17040383:
    ecx = eax; /* 0x17040383: mov ecx, eax */
L_17040385:
    /* cmp MEM32(ebp + (-0x4)), ecx */ /* 0x17040385: cmp dword ptr [ebp - 4], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17040337; /* 0x17040388: jb 0x17040337 */
L_1704038A:
    eax = 0x88760866u; /* 0x1704038A: mov eax, 0x88760866 */
L_1704038F:
    edi = POP32_VAL(esp); /* 0x1704038F: pop edi */
    esi = POP32_VAL(esp); /* 0x17040390: pop esi */
    ebx = POP32_VAL(esp); /* 0x17040391: pop ebx */
L_17040392:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17040392: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x17040393: ret 0xc */
L_17040396:
    ecx = MEM32(ebp + 0x10); /* 0x17040396: mov ecx, dword ptr [ebp + 0x10] */
    /* test ecx, ecx */ /* 0x17040399: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170403A5; /* 0x1704039B: je 0x170403a5 */
L_1704039D:
    edx = MEM32(ebp + 0x8); /* 0x1704039D: mov edx, dword ptr [ebp + 8] */
    eax = MEM32(edx + eax * 4); /* 0x170403A0: mov eax, dword ptr [edx + eax*4] */
    MEM32(ecx) = eax; /* 0x170403A3: mov dword ptr [ecx], eax */
L_170403A5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170403A5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1704038F; /* 0x170403A7: jmp 0x1704038f */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_170403AE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170403AEu);

L_170403AE:
    edi = edi; /* 0x170403AE: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170403B0: push ebp */
    ebp = esp; /* 0x170403B1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x170403B3: sub esp, 0xc */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x170403B6: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x18), edx */ /* 0x170403B8: cmp dword ptr [ebp + 0x18], edx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170403C2; /* 0x170403BB: je 0x170403c2 */
L_170403BD:
    /* cmp MEM32(ebp + 0x1C), edx */ /* 0x170403BD: cmp dword ptr [ebp + 0x1c], edx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170403CC; /* 0x170403C0: jne 0x170403cc */
L_170403C2:
    eax = 0x8876086Cu; /* 0x170403C2: mov eax, 0x8876086c */
    goto L_17040632; /* 0x170403C7: jmp 0x17040632 */
L_170403CC:
    PUSH32(esp, edi); /* 0x170403CC: push edi */
    edi = MEM32(ebp + 0x8); /* 0x170403CD: mov edi, dword ptr [ebp + 8] */
    ecx = MEM32(edi + 0x24); /* 0x170403D0: mov ecx, dword ptr [edi + 0x24] */
    /* cmp ecx, edx */ /* 0x170403D3: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170403E1; /* 0x170403D5: jne 0x170403e1 */
L_170403D7:
    eax = 0x88760866u; /* 0x170403D7: mov eax, 0x88760866 */
    goto L_17040631; /* 0x170403DC: jmp 0x17040631 */
L_170403E1:
    eax = MEM32(ebp + 0x14); /* 0x170403E1: mov eax, dword ptr [ebp + 0x14] */
    PUSH32(esp, ebx); /* 0x170403E4: push ebx */
    ebx = eax; /* 0x170403E5: mov ebx, eax */
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x170403E7: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x170403E7: shr eax, 1 */
    PUSH32(esp, esi); /* 0x170403E9: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x170403EA: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x170403EC: inc esi */
    _flag_k = FK_INC;
    eax = ~eax; /* 0x170403ED: not eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    eax = eax & esi; /* 0x170403EF: and eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x8) = eax; /* 0x170403F1: mov dword ptr [ebp + 8], eax */
    eax = MEM32(edi + 0x20); /* 0x170403F4: mov eax, dword ptr [edi + 0x20] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    ebx = ebx & esi; /* 0x170403F7: and ebx, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, edx */ /* 0x170403F9: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x14) = edx; /* 0x170403FB: mov dword ptr [ebp + 0x14], edx */
    MEM32(ebp + (-0x4)) = edx; /* 0x170403FE: mov dword ptr [ebp - 4], edx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704042B; /* 0x17040401: jne 0x1704042b */
L_17040403:
    fp_push(*(double*)ADDR(ebp + 0xC)); /* 0x17040403: fld qword ptr [ebp + 0xc] */
    fp_push(*(double*)ADDR(edi + 0x18)); /* 0x17040406: fld qword ptr [edi + 0x18] */
    RECOMP_CALL(sub_1721B11E); /* 0x17040409: call 0x1721b11e */
    RECOMP_FLAGS_IN();
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x17001D90)); /* 0x1704040E: fcom qword ptr [0x17001d90] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17040414: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x17040416: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_170404C5; /* 0x17040419: jp 0x170404c5 */
L_1704041F:
    fp_push(_st[0]); /* 0x1704041F: fld st(0) */
    _st[0] += *(double*)ADDR(edi + 0x18); /* 0x17040421: fadd qword ptr [edi + 0x18] */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x17040424: fstp st(1) */
    goto L_170404C5; /* 0x17040426: jmp 0x170404c5 */
L_1704042B:
    /* cmp eax, esi */ /* 0x1704042B: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17040473; /* 0x1704042D: jne 0x17040473 */
L_1704042F:
    fp_push(1.0); /* 0x1704042F: fld1  */
    eax = MEM32(edi + 0x28); /* 0x17040431: mov eax, dword ptr [edi + 0x28] */
    _st[0] /= *(double*)ADDR(edi + 0x10); /* 0x17040434: fdiv qword ptr [edi + 0x10] */
    fp_push(*(float*)&MEM32(eax)); /* 0x17040437: fld dword ptr [eax] */
    _st[0] *= _st[1]; /* 0x17040439: fmul st(1) */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0xC)) = _v; } /* 0x1704043B: fstp qword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(eax + ecx * 8 + (-0x8))); /* 0x1704043E: fld dword ptr [eax + ecx*8 - 8] */
    _st[0] *= _st[1]; /* 0x17040442: fmul st(1) */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ebp + 0xC)); /* 0x17040444: fcomp qword ptr [ebp + 0xc] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17040447: fnstsw ax */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17040449: fstp st(0) */
    /* test HI8(eax), 5 */ /* 0x1704044B: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_17040459; /* 0x1704044E: jp 0x17040459 */
L_17040450:
    /* cmp MEM32(ebp + 0x8), edx */ /* 0x17040450: cmp dword ptr [ebp + 8], edx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170405FA; /* 0x17040453: jne 0x170405fa */
L_17040459:
    fp_push(*(double*)ADDR(ebp + 0xC)); /* 0x17040459: fld qword ptr [ebp + 0xc] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ebp + (-0xC))); /* 0x1704045C: fcomp qword ptr [ebp - 0xc] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1704045F: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x17040461: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1704046F; /* 0x17040464: jp 0x1704046f */
L_17040466:
    /* cmp MEM32(ebp + 0x8), edx */ /* 0x17040466: cmp dword ptr [ebp + 8], edx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170405FA; /* 0x17040469: je 0x170405fa */
L_1704046F:
    fp_push(0.0); /* 0x1704046F: fldz  */
    goto L_170404C8; /* 0x17040471: jmp 0x170404c8 */
L_17040473:
    /* cmp eax, 2 */ /* 0x17040473: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1704062A; /* 0x17040476: jne 0x1704062a */
L_1704047C:
    fp_push(*(double*)ADDR(edi + 0x18)); /* 0x1704047C: fld qword ptr [edi + 0x18] */
    MEM32(ebp + 0x14) = esi; /* 0x1704047F: mov dword ptr [ebp + 0x14], esi */
    _st[0] += _st[0]; /* 0x17040482: fadd st(0), st(0) */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0xC)) = _v; } /* 0x17040484: fstp qword ptr [ebp - 0xc] */
    fp_push(*(double*)ADDR(ebp + 0xC)); /* 0x17040487: fld qword ptr [ebp + 0xc] */
    fp_push(*(double*)ADDR(ebp + (-0xC))); /* 0x1704048A: fld qword ptr [ebp - 0xc] */
    RECOMP_CALL(sub_1721B11E); /* 0x1704048D: call 0x1721b11e */
    RECOMP_FLAGS_IN();
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x17001D90)); /* 0x17040492: fcom qword ptr [0x17001d90] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17040498: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1704049A: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_170404A2; /* 0x1704049D: jp 0x170404a2 */
L_1704049F:
    _st[0] += *(double*)ADDR(ebp + (-0xC)); /* 0x1704049F: fadd qword ptr [ebp - 0xc] */
L_170404A2:
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(edi + 0x18)); /* 0x170404A2: fcom qword ptr [edi + 0x18] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x170404A5: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x170404A7: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170404C5; /* 0x170404AA: jne 0x170404c5 */
L_170404AC:
    _st[0] = *(double*)ADDR(ebp + (-0xC)) - _st[0]; /* 0x170404AC: fsubr qword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170404AF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x8), eax */ /* 0x170404B1: cmp dword ptr [ebp + 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    fp_push(*(double*)ADDR(ebp + 0xC)); /* 0x170404B4: fld qword ptr [ebp + 0xc] */
    _st[0] = -_st[0]; /* 0x170404B7: fchs  */
    MEM32(ebp + (-0x4)) = esi; /* 0x170404B9: mov dword ptr [ebp - 4], esi */
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x170404BC: sete al */
    { double _v = fp_pop(); *(double*)ADDR(ebp + 0xC) = _v; } /* 0x170404BF: fstp qword ptr [ebp + 0xc] */
    MEM32(ebp + 0x8) = eax; /* 0x170404C2: mov dword ptr [ebp + 8], eax */
L_170404C5:
    _st[0] = *(double*)ADDR(ebp + 0xC) - _st[0]; /* 0x170404C5: fsubr qword ptr [ebp + 0xc] */
L_170404C8:
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x170404C8: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    fp_push(1.0); /* 0x170404CC: fld1  */
    _st[0] /= *(double*)ADDR(edi + 0x10); /* 0x170404CE: fdiv qword ptr [edi + 0x10] */
    esi = MEM32(edi + 0x2C); /* 0x170404D1: mov esi, dword ptr [edi + 0x2c] */
    ecx = MEM32(edi + 0x28); /* 0x170404D4: mov ecx, dword ptr [edi + 0x28] */
    fp_push(*(float*)&MEM32(ecx + esi * 8)); /* 0x170404D7: fld dword ptr [ecx + esi*8] */
    _st[0] *= _st[1]; /* 0x170404DA: fmul st(1) */
    _st[0] += _st[2]; /* 0x170404DC: fadd st(2) */
    *(double*)ADDR(ebp + (-0xC)) = _st[0]; /* 0x170404DE: fst qword ptr [ebp - 0xc] */
    fp_push(*(double*)ADDR(ebp + 0xC)); /* 0x170404E1: fld qword ptr [ebp + 0xc] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17040575; /* 0x170404E4: je 0x17040575 */
L_170404EA:
    _st[0] = _st[1] - _st[0]; /* 0x170404EA: fsubr st(1) */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x17001DA8)); /* 0x170404EC: fcomp qword ptr [0x17001da8] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x170404F2: fnstsw ax */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170404F4: fstp st(0) */
    /* test HI8(eax), 0x41u */ /* 0x170404F6: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170404FD; /* 0x170404F9: jne 0x170404fd */
L_170404FB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x170404FB: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_170404FD:
    edx = MEM32(edi + 0x24); /* 0x170404FD: mov edx, dword ptr [edi + 0x24] */
    /* cmp esi, edx */ /* 0x17040500: cmp esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_17040534; /* 0x17040502: jae 0x17040534 */
L_17040504:
    eax = ecx + esi * 8; /* 0x17040504: lea eax, [ecx + esi*8] */
    MEM32(ebp + 0x8) = eax; /* 0x17040507: mov dword ptr [ebp + 8], eax */
L_1704050A:
    eax = MEM32(ebp + 0x8); /* 0x1704050A: mov eax, dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(eax)); /* 0x1704050D: fld dword ptr [eax] */
    _st[0] *= _st[1]; /* 0x1704050F: fmul st(1) */
    _st[0] += _st[2]; /* 0x17040511: fadd st(2) */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0xC)) = _v; } /* 0x17040513: fstp qword ptr [ebp - 0xc] */
    fp_push(*(double*)ADDR(ebp + 0xC)); /* 0x17040516: fld qword ptr [ebp + 0xc] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ebp + (-0xC))); /* 0x17040519: fcomp qword ptr [ebp - 0xc] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1704051C: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1704051E: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_17040529; /* 0x17040521: jp 0x17040529 */
L_17040523:
    /* test ebx, ebx */ /* 0x17040523: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17040532; /* 0x17040525: je 0x17040532 */
L_17040527:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x17040527: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_17040529:
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + 8; /* 0x17040529: add dword ptr [ebp + 8], 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1704052D: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, edx */ /* 0x1704052E: cmp esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1704050A; /* 0x17040530: jb 0x1704050a */
L_17040532:
    /* cmp esi, edx */ /* 0x17040532: cmp esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_17040534:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_1704055C; /* 0x17040534: jne 0x1704055c */
L_17040536:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x17040536: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x14), esi */ /* 0x17040538: cmp dword ptr [ebp + 0x14], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17040548; /* 0x1704053B: jne 0x17040548 */
L_1704053D:
    fp_push(*(float*)&MEM32(ecx)); /* 0x1704053D: fld dword ptr [ecx] */
    _st[0] *= _st[1]; /* 0x1704053F: fmul st(1) */
    _st[0] += *(double*)ADDR(edi + 0x18); /* 0x17040541: fadd qword ptr [edi + 0x18] */
    _st[0] += _st[2]; /* 0x17040544: fadd st(2) */
    goto L_17040559; /* 0x17040546: jmp 0x17040559 */
L_17040548:
    fp_push(*(double*)ADDR(edi + 0x18)); /* 0x17040548: fld qword ptr [edi + 0x18] */
    esi = edx + (-0x1); /* 0x1704054B: lea esi, [edx - 1] */
    _st[0] += _st[0]; /* 0x1704054E: fadd st(0), st(0) */
    _st[0] += _st[2]; /* 0x17040550: fadd st(2) */
    fp_push(*(float*)&MEM32(ecx + esi * 8)); /* 0x17040552: fld dword ptr [ecx + esi*8] */
    _st[0] *= _st[2]; /* 0x17040555: fmul st(2) */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17040557: fsubp st(1) */
L_17040559:
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0xC)) = _v; } /* 0x17040559: fstp qword ptr [ebp - 0xc] */
L_1704055C:
    /* cmp MEM32(edi + 0x20), 1 */ /* 0x1704055C: cmp dword ptr [edi + 0x20], 1 */
    _flag_a = (uint32_t)(MEM32(edi + 0x20)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17040560: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17040562: fstp st(0) */
    if (CMP_NE(_flag_a, _flag_b)) goto L_17040601; /* 0x17040564: jne 0x17040601 */
L_1704056A:
    eax = MEM32(edi); /* 0x1704056A: mov eax, dword ptr [edi] */
    PUSH32(esp, edi); /* 0x1704056C: push edi */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x1704056D: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ebp + (-0xC))); /* 0x17040570: fcomp qword ptr [ebp - 0xc] */
    fp_pop();
    goto L_170405F3; /* 0x17040573: jmp 0x170405f3 */
L_17040575:
    _st[0] -= _st[1]; /* 0x17040575: fsub st(1) */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x17001DA8)); /* 0x17040577: fcomp qword ptr [0x17001da8] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1704057D: fnstsw ax */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1704057F: fstp st(0) */
    /* test HI8(eax), 0x41u */ /* 0x17040581: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1704058A; /* 0x17040584: jne 0x1704058a */
L_17040586:
    esi = MEM32(edi + 0x24); /* 0x17040586: mov esi, dword ptr [edi + 0x24] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x17040589: dec esi */
    _flag_k = FK_DEC;
L_1704058A:
    eax = esi + 0x1; /* 0x1704058A: lea eax, [esi + 1] */
    /* test eax, eax */ /* 0x1704058D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170405B9; /* 0x1704058F: jbe 0x170405b9 */
L_17040591:
    MEM32(ebp + 0x8) = eax; /* 0x17040591: mov dword ptr [ebp + 8], eax */
    edx = ecx + esi * 8; /* 0x17040594: lea edx, [ecx + esi*8] */
L_17040597:
    fp_push(*(float*)&MEM32(edx)); /* 0x17040597: fld dword ptr [edx] */
    _st[0] *= _st[1]; /* 0x17040599: fmul st(1) */
    _st[0] += _st[2]; /* 0x1704059B: fadd st(2) */
    *(double*)ADDR(ebp + (-0xC)) = _st[0]; /* 0x1704059D: fst qword ptr [ebp - 0xc] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ebp + 0xC)); /* 0x170405A0: fcomp qword ptr [ebp + 0xc] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x170405A3: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x170405A5: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_170405B0; /* 0x170405A8: jp 0x170405b0 */
L_170405AA:
    /* test ebx, ebx */ /* 0x170405AA: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170405B9; /* 0x170405AC: je 0x170405b9 */
L_170405AE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x170405AE: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_170405B0:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x170405B0: dec esi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 8; /* 0x170405B1: sub edx, 8 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) - 1; /* 0x170405B4: dec dword ptr [ebp + 8] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_17040597; /* 0x170405B7: jne 0x17040597 */
L_170405B9:
    eax = esi + 0x1; /* 0x170405B9: lea eax, [esi + 1] */
    /* test eax, eax */ /* 0x170405BC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170405E0; /* 0x170405BE: jne 0x170405e0 */
L_170405C0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x170405C0: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x14), esi */ /* 0x170405C2: cmp dword ptr [ebp + 0x14], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_170405D7; /* 0x170405C5: jne 0x170405d7 */
L_170405C7:
    esi = MEM32(edi + 0x24); /* 0x170405C7: mov esi, dword ptr [edi + 0x24] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x170405CA: dec esi */
    _flag_k = FK_DEC;
    fp_push(*(float*)&MEM32(ecx + esi * 8)); /* 0x170405CB: fld dword ptr [ecx + esi*8] */
    _st[0] *= _st[1]; /* 0x170405CE: fmul st(1) */
    _st[0] -= *(double*)ADDR(edi + 0x18); /* 0x170405D0: fsub qword ptr [edi + 0x18] */
    _st[0] += _st[2]; /* 0x170405D3: fadd st(2) */
    goto L_170405DD; /* 0x170405D5: jmp 0x170405dd */
L_170405D7:
    fp_push(*(float*)&MEM32(ecx)); /* 0x170405D7: fld dword ptr [ecx] */
    _st[0] *= _st[1]; /* 0x170405D9: fmul st(1) */
    _st[0] = _st[2] - _st[0]; /* 0x170405DB: fsubr st(2) */
L_170405DD:
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0xC)) = _v; } /* 0x170405DD: fstp qword ptr [ebp - 0xc] */
L_170405E0:
    /* cmp MEM32(edi + 0x20), 1 */ /* 0x170405E0: cmp dword ptr [edi + 0x20], 1 */
    _flag_a = (uint32_t)(MEM32(edi + 0x20)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170405E4: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170405E6: fstp st(0) */
    if (CMP_NE(_flag_a, _flag_b)) goto L_17040601; /* 0x170405E8: jne 0x17040601 */
L_170405EA:
    fp_push(*(double*)ADDR(ebp + (-0xC))); /* 0x170405EA: fld qword ptr [ebp - 0xc] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x17001D90)); /* 0x170405ED: fcomp qword ptr [0x17001d90] */
    fp_pop();
L_170405F3:
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x170405F3: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x170405F5: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_17040601; /* 0x170405F8: jp 0x17040601 */
L_170405FA:
    eax = 0x88760866u; /* 0x170405FA: mov eax, 0x88760866 */
    goto L_1704062F; /* 0x170405FF: jmp 0x1704062f */
L_17040601:
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x17040601: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704060F; /* 0x17040605: je 0x1704060f */
L_17040607:
    fp_push(*(double*)ADDR(ebp + (-0xC))); /* 0x17040607: fld qword ptr [ebp - 0xc] */
    _st[0] = -_st[0]; /* 0x1704060A: fchs  */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0xC)) = _v; } /* 0x1704060C: fstp qword ptr [ebp - 0xc] */
L_1704060F:
    eax = MEM32(ebp + 0x18); /* 0x1704060F: mov eax, dword ptr [ebp + 0x18] */
    fp_push(*(double*)ADDR(ebp + (-0xC))); /* 0x17040612: fld qword ptr [ebp - 0xc] */
    ecx = MEM32(ebp + 0x1C); /* 0x17040615: mov ecx, dword ptr [ebp + 0x1c] */
    { double _v = fp_pop(); *(double*)ADDR(eax) = _v; } /* 0x17040618: fstp qword ptr [eax] */
    eax = MEM32(edi + 0x28); /* 0x1704061A: mov eax, dword ptr [edi + 0x28] */
    eax = MEM32(eax + esi * 8 + 0x4); /* 0x1704061D: mov eax, dword ptr [eax + esi*8 + 4] */
    MEM32(ecx) = eax; /* 0x17040621: mov dword ptr [ecx], eax */
    MEM32(edi + 0x2C) = esi; /* 0x17040623: mov dword ptr [edi + 0x2c], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17040626: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1704062F; /* 0x17040628: jmp 0x1704062f */
L_1704062A:
    eax = 0x88760B59u; /* 0x1704062A: mov eax, 0x88760b59 */
L_1704062F:
    esi = POP32_VAL(esp); /* 0x1704062F: pop esi */
    ebx = POP32_VAL(esp); /* 0x17040630: pop ebx */
L_17040631:
    edi = POP32_VAL(esp); /* 0x17040631: pop edi */
L_17040632:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17040632: leave  */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x17040633: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_1704063B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704063Bu);

L_1704063B:
    edi = edi; /* 0x1704063B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704063D: push ebp */
    ebp = esp; /* 0x1704063E: mov ebp, esp */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x17040640: fld dword ptr [ebp + 8] */
    _st[0] -= (double)*(float*)ADDR(ebp + 0xC); /* 0x17040643: fsub dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(0x170052FC)); /* 0x17040646: fld dword ptr [0x170052fc] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1704064C: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1704064E: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x17040650: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_17040667; /* 0x17040653: jp 0x17040667 */
L_17040655:
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(0x170052F8)); /* 0x17040655: fcomp dword ptr [0x170052f8] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1704065B: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1704065D: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_17040669; /* 0x17040660: jp 0x17040669 */
L_17040662:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17040662: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17040664: inc eax */
    _flag_k = FK_INC;
    goto L_1704066B; /* 0x17040665: jmp 0x1704066b */
L_17040667:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17040667: fstp st(0) */
L_17040669:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17040669: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1704066B:
    ebp = POP32_VAL(esp); /* 0x1704066B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1704066C: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_17040674(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17040674u);

L_17040674:
    edi = edi; /* 0x17040674: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17040676: push ebp */
    ebp = esp; /* 0x17040677: mov ebp, esp */
    PUSH32(esp, 1); /* 0x17040679: push 1 */
    RECOMP_CALL(sub_1704A5B1); /* 0x1704067B: call 0x1704a5b1 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x17040680: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(0x17224130)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1704068C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704068Cu);

L_1704068C:
    { _itail_tgt = (uint32_t)(MEM32(0x17224130)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_17040697(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17040697u);

L_17040697:
    edi = edi; /* 0x17040697: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17040699: push ebp */
    ebp = esp; /* 0x1704069A: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1704069C: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x1704069F: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x170406A0: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x10), ebx */ /* 0x170406A2: cmp dword ptr [ebp + 0x10], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_17040734; /* 0x170406A5: jbe 0x17040734 */
L_170406AB:
    PUSH32(esp, esi); /* 0x170406AB: push esi */
    PUSH32(esp, edi); /* 0x170406AC: push edi */
L_170406AD:
    ecx = MEM32(ebp + 0xC); /* 0x170406AD: mov ecx, dword ptr [ebp + 0xc] */
    ecx = MEM32(ecx + ebx * 4); /* 0x170406B0: mov ecx, dword ptr [ecx + ebx*4] */
    edx = ecx; /* 0x170406B3: mov edx, ecx */
    if (16u) _cf = (((edx) >> 15) & 1u); /* 0x170406B5: shr edx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((edx >> 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 16u; /* 0x170406B5: shr edx, 0x10 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x7FFFFFFFu);
    ecx = ecx & 0x7FFFFFFFu; /* 0x170406B8: and ecx, 0x7fffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x8000u);
    edx = edx & 0x8000u; /* 0x170406BE: and edx, 0x8000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, 0x47FFEFFFu */ /* 0x170406C4: cmp ecx, 0x47ffefff */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x47FFEFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_170406D6; /* 0x170406CA: jbe 0x170406d6 */
L_170406CC:
    _flag_a = (uint32_t)((edx | 0x7FFFu)); _flag_b = (uint32_t)((edx | 0x7FFFu));
    edx = edx | 0x7FFFu; /* 0x170406CC: or edx, 0x7fff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = edx; /* 0x170406D2: mov ecx, edx */
    goto L_17040724; /* 0x170406D4: jmp 0x17040724 */
L_170406D6:
    /* cmp ecx, 0x38800000u */ /* 0x170406D6: cmp ecx, 0x38800000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x38800000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = ecx; /* 0x170406DC: mov esi, ecx */
    if (CMP_AE(_flag_a, _flag_b)) goto L_17040712; /* 0x170406DE: jae 0x17040712 */
L_170406E0:
    PUSH32(esp, 0x71u); /* 0x170406E0: push 0x71 */
    if (23u) _cf = (((ecx) >> 22) & 1u); /* 0x170406E2: shr ecx, 0x17 */
    if (23u) { _flag_a = recomp_flags_pack((ecx >> 23u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 23u; /* 0x170406E2: shr ecx, 0x17 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x007FFFFFu);
    esi = esi & 0x007FFFFFu; /* 0x170406E5: and esi, 0x7fffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x170406EB: pop edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ecx; /* 0x170406EC: sub edi, ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((esi | 0x00800000u)); _flag_b = (uint32_t)((esi | 0x00800000u));
    esi = esi | 0x00800000u; /* 0x170406EE: or esi, 0x800000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edi, 0x1Fu */ /* 0x170406F4: cmp edi, 0x1f */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x1Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_170406FD; /* 0x170406F7: jle 0x170406fd */
L_170406F9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x170406F9: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_17040701; /* 0x170406FB: jmp 0x17040701 */
L_170406FD:
    ecx = edi; /* 0x170406FD: mov ecx, edi */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((esi) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x170406FF: shr esi, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((esi >> ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> ((LO8(ecx)) & 31); /* 0x170406FF: shr esi, cl */
L_17040701:
    ecx = esi; /* 0x17040701: mov ecx, esi */
    if (13u) _cf = (((ecx) >> 12) & 1u); /* 0x17040703: shr ecx, 0xd */
    if (13u) { _flag_a = recomp_flags_pack((ecx >> 13u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 13u; /* 0x17040703: shr ecx, 0xd */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx & 1; /* 0x17040706: and ecx, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ecx + esi + 0xFFF; /* 0x17040709: lea ecx, [ecx + esi + 0xfff] */
    goto L_1704071F; /* 0x17040710: jmp 0x1704071f */
L_17040712:
    if (13u) _cf = (((esi) >> 12) & 1u); /* 0x17040712: shr esi, 0xd */
    if (13u) { _flag_a = recomp_flags_pack((esi >> 13u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 13u; /* 0x17040712: shr esi, 0xd */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi & 1; /* 0x17040715: and esi, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi + ecx + (-0x37FFF001); /* 0x17040718: lea ecx, [esi + ecx - 0x37fff001] */
L_1704071F:
    if (13u) _cf = (((ecx) >> 12) & 1u); /* 0x1704071F: shr ecx, 0xd */
    if (13u) { _flag_a = recomp_flags_pack((ecx >> 13u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 13u; /* 0x1704071F: shr ecx, 0xd */
    _flag_a = (uint32_t)((ecx | edx)); _flag_b = (uint32_t)((ecx | edx));
    ecx = ecx | edx; /* 0x17040722: or ecx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
L_17040724:
    MEM16(eax + ebx * 2) = (uint16_t)(LO16(ecx)); /* 0x17040724: mov word ptr [eax + ebx*2], cx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x17040728: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, MEM32(ebp + 0x10) */ /* 0x17040729: cmp ebx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_170406AD; /* 0x1704072C: jb 0x170406ad */
L_17040732:
    edi = POP32_VAL(esp); /* 0x17040732: pop edi */
    esi = POP32_VAL(esp); /* 0x17040733: pop esi */
L_17040734:
    ebx = POP32_VAL(esp); /* 0x17040734: pop ebx */
    ebp = POP32_VAL(esp); /* 0x17040735: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x17040736: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1704073E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704073Eu);

L_1704073E:
    edi = edi; /* 0x1704073E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17040740: push ebp */
    ebp = esp; /* 0x17040741: mov ebp, esp */
    PUSH32(esp, 1); /* 0x17040743: push 1 */
    RECOMP_CALL(sub_1704A5B1); /* 0x17040745: call 0x1704a5b1 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1704074A: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(0x17224134)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_17040756(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17040756u);

L_17040756:
    { _itail_tgt = (uint32_t)(MEM32(0x17224134)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_17040761(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17040761u);

L_17040761:
    edi = edi; /* 0x17040761: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17040763: push ebp */
    ebp = esp; /* 0x17040764: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x17040766: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x17040767: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x10), ebx */ /* 0x17040769: cmp dword ptr [ebp + 0x10], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_17040800; /* 0x1704076C: jbe 0x17040800 */
L_17040772:
    PUSH32(esp, esi); /* 0x17040772: push esi */
    PUSH32(esp, edi); /* 0x17040773: push edi */
    esi = 0x3FFu; /* 0x17040774: mov esi, 0x3ff */
    eax = 0x400u; /* 0x17040779: mov eax, 0x400 */
L_1704077E:
    ecx = MEM32(ebp + 0xC); /* 0x1704077E: mov ecx, dword ptr [ebp + 0xc] */
    SET_LO16(edx, MEM16(ecx + ebx * 2)); /* 0x17040781: mov dx, word ptr [ecx + ebx*2] */
    ecx = (uint32_t)LO16(edx); /* 0x17040785: movzx ecx, dx */
    /* test ecx, 0xFFFF7C00u */ /* 0x17040788: test ecx, 0xffff7c00 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFF7C00u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170407D0; /* 0x1704078E: jne 0x170407d0 */
L_17040790:
    /* test LO16(esi), LO16(edx) */ /* 0x17040790: test si, dx */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_170407C5; /* 0x17040793: je 0x170407c5 */
L_17040795:
    PUSH32(esp, 0xFFFFFFF2u); /* 0x17040795: push -0xe */
    edx = ecx; /* 0x17040797: mov edx, ecx */
    edi = POP32_VAL(esp); /* 0x17040799: pop edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    edx = edx & esi; /* 0x1704079A: and edx, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_170407A1; /* 0x1704079C: jmp 0x170407a1 */
L_1704079E:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1704079E: dec edi */
    _flag_k = FK_DEC;
    if (1u) _cf = (((edx) >> 31) & 1u); /* 0x1704079F: shl edx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((edx << 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 1u; /* 0x1704079F: shl edx, 1 */
L_170407A1:
    /* test eax, edx */ /* 0x170407A1: test eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704079E; /* 0x170407A3: je 0x1704079e */
L_170407A5:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFF8080u);
    ecx = ecx & 0xFFFF8080u; /* 0x170407A5: and ecx, 0xffff8080 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (3u) _cf = (((ecx) >> 29) & 1u); /* 0x170407AB: shl ecx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((ecx << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 3u; /* 0x170407AB: shl ecx, 3 */
    _flag_a = (uint32_t)((ecx | edx)); _flag_b = (uint32_t)((ecx | edx));
    ecx = ecx | edx; /* 0x170407AE: or ecx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFBFFu);
    ecx = ecx & 0xFFFFFBFFu; /* 0x170407B0: and ecx, 0xfffffbff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x7Fu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x7Fu; /* 0x170407B6: add edi, 0x7f */
    _flag_k = FK_ADD;
    if (13u) _cf = (((ecx) >> 19) & 1u); /* 0x170407B9: shl ecx, 0xd */
    if (13u) { _flag_a = recomp_flags_pack((ecx << 13u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 13u; /* 0x170407B9: shl ecx, 0xd */
    if (23u) _cf = (((edi) >> 9) & 1u); /* 0x170407BC: shl edi, 0x17 */
    if (23u) { _flag_a = recomp_flags_pack((edi << 23u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 23u; /* 0x170407BC: shl edi, 0x17 */
    _flag_a = (uint32_t)((ecx | edi)); _flag_b = (uint32_t)((ecx | edi));
    ecx = ecx | edi; /* 0x170407BF: or ecx, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_170407C1:
    edx = ecx; /* 0x170407C1: mov edx, ecx */
    goto L_170407F2; /* 0x170407C3: jmp 0x170407f2 */
L_170407C5:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFF8000u);
    ecx = ecx & 0xFFFF8000u; /* 0x170407C5: and ecx, 0xffff8000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (16u) _cf = (((ecx) >> 16) & 1u); /* 0x170407CB: shl ecx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ecx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 16u; /* 0x170407CB: shl ecx, 0x10 */
    RECOMP_BACKEDGE();
    goto L_170407C1; /* 0x170407CE: jmp 0x170407c1 */
L_170407D0:
    edx = ecx; /* 0x170407D0: mov edx, ecx */
    edi = ecx; /* 0x170407D2: mov edi, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFF8000u);
    edx = edx & 0xFFFF8000u; /* 0x170407D4: and edx, 0xffff8000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (10u) _cf = (((ecx) >> 9) & 1u); /* 0x170407DA: shr ecx, 0xa */
    if (10u) { _flag_a = recomp_flags_pack((ecx >> 10u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 10u; /* 0x170407DA: shr ecx, 0xa */
    if (3u) _cf = (((edx) >> 29) & 1u); /* 0x170407DD: shl edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((edx << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 3u; /* 0x170407DD: shl edx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x170407E0: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    edi = edi & esi; /* 0x170407E3: and edi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edx | edi)); _flag_b = (uint32_t)((edx | edi));
    edx = edx | edi; /* 0x170407E5: or edx, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x70u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x70u; /* 0x170407E7: add ecx, 0x70 */
    _flag_k = FK_ADD;
    if (13u) _cf = (((edx) >> 19) & 1u); /* 0x170407EA: shl edx, 0xd */
    if (13u) { _flag_a = recomp_flags_pack((edx << 13u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 13u; /* 0x170407EA: shl edx, 0xd */
    if (23u) _cf = (((ecx) >> 9) & 1u); /* 0x170407ED: shl ecx, 0x17 */
    if (23u) { _flag_a = recomp_flags_pack((ecx << 23u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 23u; /* 0x170407ED: shl ecx, 0x17 */
    _flag_a = (uint32_t)((edx | ecx)); _flag_b = (uint32_t)((edx | ecx));
    edx = edx | ecx; /* 0x170407F0: or edx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_170407F2:
    ecx = MEM32(ebp + 0x8); /* 0x170407F2: mov ecx, dword ptr [ebp + 8] */
    MEM32(ecx + ebx * 4) = edx; /* 0x170407F5: mov dword ptr [ecx + ebx*4], edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x170407F8: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, MEM32(ebp + 0x10) */ /* 0x170407F9: cmp ebx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1704077E; /* 0x170407FC: jb 0x1704077e */
L_170407FE:
    edi = POP32_VAL(esp); /* 0x170407FE: pop edi */
    esi = POP32_VAL(esp); /* 0x170407FF: pop esi */
L_17040800:
    eax = MEM32(ebp + 0x8); /* 0x17040800: mov eax, dword ptr [ebp + 8] */
    ebx = POP32_VAL(esp); /* 0x17040803: pop ebx */
    ebp = POP32_VAL(esp); /* 0x17040804: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x17040805: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1704080D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704080Du);

L_1704080D:
    edi = edi; /* 0x1704080D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704080F: push ebp */
    ebp = esp; /* 0x17040810: mov ebp, esp */
    PUSH32(esp, 1); /* 0x17040812: push 1 */
    RECOMP_CALL(sub_1704A5B1); /* 0x17040814: call 0x1704a5b1 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x17040819: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(0x17224104)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_17040825(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17040825u);

L_17040825:
    { _itail_tgt = (uint32_t)(MEM32(0x17224104)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_17040830(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17040830u);

L_17040830:
    edi = edi; /* 0x17040830: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17040832: push ebp */
    ebp = esp; /* 0x17040833: mov ebp, esp */
    PUSH32(esp, 1); /* 0x17040835: push 1 */
    RECOMP_CALL(sub_1704A5B1); /* 0x17040837: call 0x1704a5b1 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + 0x1C)); /* 0x1704083C: fld dword ptr [ebp + 0x1c] */
    PUSH32(esp, ecx); /* 0x1704083F: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x17040840: fstp dword ptr [esp] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x17040843: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x17040846: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x17040849: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1704084C: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1704084F: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x17224090)); /* 0x17040852: call dword ptr [0x17224090] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x17040858: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x17040859: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_17040861(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17040861u);

L_17040861:
    { _itail_tgt = (uint32_t)(MEM32(0x17224090)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1704086C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704086Cu);

L_1704086C:
    edi = edi; /* 0x1704086C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704086E: push ebp */
    ebp = esp; /* 0x1704086F: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x17040871: push ecx */
    PUSH32(esp, ecx); /* 0x17040872: push ecx */
    fp_push(*(float*)&MEM32(ebp + 0x1C)); /* 0x17040873: fld dword ptr [ebp + 0x1c] */
    ecx = MEM32(ebp + 0xC); /* 0x17040876: mov ecx, dword ptr [ebp + 0xc] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x1C); /* 0x17040879: fmul dword ptr [ebp + 0x1c] */
    edx = MEM32(ebp + 0x10); /* 0x1704087C: mov edx, dword ptr [ebp + 0x10] */
    fp_push(*(float*)&MEM32(ebp + 0x1C)); /* 0x1704087F: fld dword ptr [ebp + 0x1c] */
    eax = MEM32(ebp + 0x8); /* 0x17040882: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x17040885: push esi */
    _st[0] *= _st[1]; /* 0x17040886: fmul st(1) */
    esi = MEM32(ebp + 0x14); /* 0x17040888: mov esi, dword ptr [ebp + 0x14] */
    PUSH32(esp, edi); /* 0x1704088B: push edi */
    edi = MEM32(ebp + 0x18); /* 0x1704088C: mov edi, dword ptr [ebp + 0x18] */
    fp_push(_st[0]); /* 0x1704088F: fld st(0) */
    _st[0] += _st[1]; /* 0x17040891: fadd st(1) */
    fp_push(_st[2]); /* 0x17040893: fld st(2) */
    _st[0] *= (double)*(float*)ADDR(0x17001DA0); /* 0x17040895: fmul dword ptr [0x17001da0] */
    fp_push(_st[1]); /* 0x1704089B: fld st(1) */
    _st[0] -= _st[1]; /* 0x1704089D: fsub st(1) */
    _st[0] += (double)*(float*)ADDR(0x17001424); /* 0x1704089F: fadd dword ptr [0x17001424] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x170408A5: fstp dword ptr [ebp - 8] */
    fp_push(_st[3]); /* 0x170408A8: fld st(3) */
    _st[0] += _st[0]; /* 0x170408AA: fadd st(0), st(0) */
    _st[0] = _st[3] - _st[0]; /* 0x170408AC: fsubr st(3) */
    _st[0] += (double)*(float*)ADDR(ebp + 0x1C); /* 0x170408AE: fadd dword ptr [ebp + 0x1c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x170408B1: fstp dword ptr [ebp - 4] */
    _st[0] -= _st[1]; /* 0x170408B4: fsub st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x1C) = _v; } /* 0x170408B6: fstp dword ptr [ebp + 0x1c] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170408B9: fstp st(0) */
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x170408BB: fsubrp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x170408BD: fld dword ptr [ebp - 8] */
    _st[0] *= (double)*(float*)ADDR(ecx); /* 0x170408C0: fmul dword ptr [ecx] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x170408C2: fld dword ptr [ebp - 4] */
    _st[0] *= (double)*(float*)ADDR(edx); /* 0x170408C5: fmul dword ptr [edx] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170408C7: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + 0x1C)); /* 0x170408C9: fld dword ptr [ebp + 0x1c] */
    _st[0] *= (double)*(float*)ADDR(esi); /* 0x170408CC: fmul dword ptr [esi] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170408CE: faddp st(1) */
    fp_push(_st[1]); /* 0x170408D0: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(edi); /* 0x170408D2: fmul dword ptr [edi] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170408D4: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x170408D6: fstp dword ptr [eax] */
    _st[0] *= (double)*(float*)ADDR(edi + 0x4); /* 0x170408D8: fmul dword ptr [edi + 4] */
    edi = POP32_VAL(esp); /* 0x170408DB: pop edi */
    fp_push(*(float*)&MEM32(ebp + 0x1C)); /* 0x170408DC: fld dword ptr [ebp + 0x1c] */
    _st[0] *= (double)*(float*)ADDR(esi + 0x4); /* 0x170408DF: fmul dword ptr [esi + 4] */
    esi = POP32_VAL(esp); /* 0x170408E2: pop esi */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170408E3: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x170408E5: fld dword ptr [ebp - 4] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x4); /* 0x170408E8: fmul dword ptr [edx + 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170408EB: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x170408ED: fld dword ptr [ebp - 8] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x4); /* 0x170408F0: fmul dword ptr [ecx + 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170408F3: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x4) = _v; } /* 0x170408F5: fstp dword ptr [eax + 4] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170408F8: leave  */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x170408F9: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_17040901(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17040901u);

L_17040901:
    edi = edi; /* 0x17040901: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17040903: push ebp */
    ebp = esp; /* 0x17040904: mov ebp, esp */
    PUSH32(esp, 1); /* 0x17040906: push 1 */
    RECOMP_CALL(sub_1704A5B1); /* 0x17040908: call 0x1704a5b1 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + 0x1C)); /* 0x1704090D: fld dword ptr [ebp + 0x1c] */
    PUSH32(esp, ecx); /* 0x17040910: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x17040911: fstp dword ptr [esp] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x17040914: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x17040917: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1704091A: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1704091D: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x17040920: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x17224108)); /* 0x17040923: call dword ptr [0x17224108] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x17040929: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x1704092A: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_17040932(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17040932u);

L_17040932:
    { _itail_tgt = (uint32_t)(MEM32(0x17224108)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1704093D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704093Du);

L_1704093D:
    edi = edi; /* 0x1704093D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704093F: push ebp */
    ebp = esp; /* 0x17040940: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x17040942: push ecx */
    PUSH32(esp, ecx); /* 0x17040943: push ecx */
    fp_push(*(float*)&MEM32(ebp + 0x1C)); /* 0x17040944: fld dword ptr [ebp + 0x1c] */
    ecx = MEM32(ebp + 0xC); /* 0x17040947: mov ecx, dword ptr [ebp + 0xc] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x1C); /* 0x1704094A: fmul dword ptr [ebp + 0x1c] */
    edx = MEM32(ebp + 0x10); /* 0x1704094D: mov edx, dword ptr [ebp + 0x10] */
    fp_push(*(float*)&MEM32(ebp + 0x1C)); /* 0x17040950: fld dword ptr [ebp + 0x1c] */
    eax = MEM32(ebp + 0x8); /* 0x17040953: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x17040956: push esi */
    _st[0] *= _st[1]; /* 0x17040957: fmul st(1) */
    esi = MEM32(ebp + 0x14); /* 0x17040959: mov esi, dword ptr [ebp + 0x14] */
    fp_push(*(float*)&MEM32(0x170018CC)); /* 0x1704095C: fld dword ptr [0x170018cc] */
    PUSH32(esp, edi); /* 0x17040962: push edi */
    fp_push(_st[2]); /* 0x17040963: fld st(2) */
    edi = MEM32(ebp + 0x18); /* 0x17040965: mov edi, dword ptr [ebp + 0x18] */
    _st[0] *= _st[1]; /* 0x17040968: fmul st(1) */
    _st[0] -= _st[2]; /* 0x1704096A: fsub st(2) */
    _st[0] -= (double)*(float*)ADDR(ebp + 0x1C); /* 0x1704096C: fsub dword ptr [ebp + 0x1c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x1704096F: fstp dword ptr [ebp - 8] */
    fp_push(_st[1]); /* 0x17040972: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(0x17001DA0); /* 0x17040974: fmul dword ptr [0x17001da0] */
    fp_push(_st[3]); /* 0x1704097A: fld st(3) */
    _st[0] *= (double)*(float*)ADDR(0x17005304); /* 0x1704097C: fmul dword ptr [0x17005304] */
    _st[0] = _st[1] - _st[0]; /* 0x17040982: fsubr st(1) */
    _st[0] += _st[2]; /* 0x17040984: fadd st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x17040986: fstp dword ptr [ebp - 4] */
    fp_push(_st[3]); /* 0x17040989: fld st(3) */
    _st[0] *= (double)*(float*)ADDR(0x17005300); /* 0x1704098B: fmul dword ptr [0x17005300] */
    _st[0] -= _st[1]; /* 0x17040991: fsub st(1) */
    _st[0] += (double)*(float*)ADDR(ebp + 0x1C); /* 0x17040993: fadd dword ptr [ebp + 0x1c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x1C) = _v; } /* 0x17040996: fstp dword ptr [ebp + 0x1c] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17040999: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1704099B: fstp st(0) */
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x1704099D: fsubrp st(1) */
    fp_push(*(float*)&MEM32(0x1700141C)); /* 0x1704099F: fld dword ptr [0x1700141c] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x170409A5: fld dword ptr [ebp - 8] */
    _st[0] *= (double)*(float*)ADDR(ecx); /* 0x170409A8: fmul dword ptr [ecx] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x170409AA: fld dword ptr [ebp - 4] */
    _st[0] *= (double)*(float*)ADDR(edx); /* 0x170409AD: fmul dword ptr [edx] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170409AF: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + 0x1C)); /* 0x170409B1: fld dword ptr [ebp + 0x1c] */
    _st[0] *= (double)*(float*)ADDR(esi); /* 0x170409B4: fmul dword ptr [esi] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170409B6: faddp st(1) */
    fp_push(_st[2]); /* 0x170409B8: fld st(2) */
    _st[0] *= (double)*(float*)ADDR(edi); /* 0x170409BA: fmul dword ptr [edi] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170409BC: faddp st(1) */
    _st[0] *= _st[1]; /* 0x170409BE: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x170409C0: fstp dword ptr [eax] */
    fp_push(_st[1]); /* 0x170409C2: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(edi + 0x4); /* 0x170409C4: fmul dword ptr [edi + 4] */
    edi = POP32_VAL(esp); /* 0x170409C7: pop edi */
    fp_push(*(float*)&MEM32(ebp + 0x1C)); /* 0x170409C8: fld dword ptr [ebp + 0x1c] */
    _st[0] *= (double)*(float*)ADDR(esi + 0x4); /* 0x170409CB: fmul dword ptr [esi + 4] */
    esi = POP32_VAL(esp); /* 0x170409CE: pop esi */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170409CF: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x170409D1: fld dword ptr [ebp - 4] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x4); /* 0x170409D4: fmul dword ptr [edx + 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170409D7: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x170409D9: fld dword ptr [ebp - 8] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x4); /* 0x170409DC: fmul dword ptr [ecx + 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170409DF: faddp st(1) */
    _st[0] *= _st[1]; /* 0x170409E1: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x4) = _v; } /* 0x170409E3: fstp dword ptr [eax + 4] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170409E6: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170409E8: fstp st(0) */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170409EA: leave  */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x170409EB: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_170409F3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170409F3u);

L_170409F3:
    edi = edi; /* 0x170409F3: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170409F5: push ebp */
    ebp = esp; /* 0x170409F6: mov ebp, esp */
    PUSH32(esp, 1); /* 0x170409F8: push 1 */
    RECOMP_CALL(sub_1704A5B1); /* 0x170409FA: call 0x1704a5b1 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + 0x1C)); /* 0x170409FF: fld dword ptr [ebp + 0x1c] */
    PUSH32(esp, ecx); /* 0x17040A02: push ecx */
    PUSH32(esp, ecx); /* 0x17040A03: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x17040A04: fstp dword ptr [esp + 4] */
    fp_push(*(float*)&MEM32(ebp + 0x18)); /* 0x17040A08: fld dword ptr [ebp + 0x18] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x17040A0B: fstp dword ptr [esp] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x17040A0E: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x17040A11: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x17040A14: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x17040A17: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x1722410C)); /* 0x17040A1A: call dword ptr [0x1722410c] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x17040A20: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x17040A21: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_17040A29(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17040A29u);

L_17040A29:
    { _itail_tgt = (uint32_t)(MEM32(0x1722410C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_17040A34(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17040A34u);

L_17040A34:
    edi = edi; /* 0x17040A34: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17040A36: push ebp */
    ebp = esp; /* 0x17040A37: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x17040A39: mov ecx, dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + 0x10); /* 0x17040A3C: mov edx, dword ptr [ebp + 0x10] */
    fp_push(*(float*)&MEM32(edx)); /* 0x17040A3F: fld dword ptr [edx] */
    eax = MEM32(ebp + 0x8); /* 0x17040A41: mov eax, dword ptr [ebp + 8] */
    _st[0] -= (double)*(float*)ADDR(ecx); /* 0x17040A44: fsub dword ptr [ecx] */
    PUSH32(esp, esi); /* 0x17040A46: push esi */
    esi = MEM32(ebp + 0x14); /* 0x17040A47: mov esi, dword ptr [ebp + 0x14] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x18); /* 0x17040A4A: fmul dword ptr [ebp + 0x18] */
    fp_push(*(float*)&MEM32(esi)); /* 0x17040A4D: fld dword ptr [esi] */
    _st[0] -= (double)*(float*)ADDR(ecx); /* 0x17040A4F: fsub dword ptr [ecx] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x1C); /* 0x17040A51: fmul dword ptr [ebp + 0x1c] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17040A54: faddp st(1) */
    _st[0] += (double)*(float*)ADDR(ecx); /* 0x17040A56: fadd dword ptr [ecx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x17040A58: fstp dword ptr [eax] */
    fp_push(*(float*)&MEM32(edx + 0x4)); /* 0x17040A5A: fld dword ptr [edx + 4] */
    _st[0] -= (double)*(float*)ADDR(ecx + 0x4); /* 0x17040A5D: fsub dword ptr [ecx + 4] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x18); /* 0x17040A60: fmul dword ptr [ebp + 0x18] */
    fp_push(*(float*)&MEM32(esi + 0x4)); /* 0x17040A63: fld dword ptr [esi + 4] */
    esi = POP32_VAL(esp); /* 0x17040A66: pop esi */
    _st[0] -= (double)*(float*)ADDR(ecx + 0x4); /* 0x17040A67: fsub dword ptr [ecx + 4] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x1C); /* 0x17040A6A: fmul dword ptr [ebp + 0x1c] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17040A6D: faddp st(1) */
    _st[0] += (double)*(float*)ADDR(ecx + 0x4); /* 0x17040A6F: fadd dword ptr [ecx + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x4) = _v; } /* 0x17040A72: fstp dword ptr [eax + 4] */
    ebp = POP32_VAL(esp); /* 0x17040A75: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x17040A76: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_17040A7E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17040A7Eu);

L_17040A7E:
    edi = edi; /* 0x17040A7E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17040A80: push ebp */
    ebp = esp; /* 0x17040A81: mov ebp, esp */
    PUSH32(esp, 1); /* 0x17040A83: push 1 */
    RECOMP_CALL(sub_1704A5B1); /* 0x17040A85: call 0x1704a5b1 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x17040A8A: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(0x17224048)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_17040A96(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17040A96u);

L_17040A96:
    { _itail_tgt = (uint32_t)(MEM32(0x17224048)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_17040AA1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17040AA1u);

L_17040AA1:
    edi = edi; /* 0x17040AA1: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17040AA3: push ebp */
    ebp = esp; /* 0x17040AA4: mov ebp, esp */
    PUSH32(esp, 1); /* 0x17040AA6: push 1 */
    RECOMP_CALL(sub_1704A5B1); /* 0x17040AA8: call 0x1704a5b1 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x17040AAD: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(0x17224138)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_17040AB9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17040AB9u);

L_17040AB9:
    { _itail_tgt = (uint32_t)(MEM32(0x17224138)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_17040AC4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17040AC4u);

L_17040AC4:
    edi = edi; /* 0x17040AC4: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17040AC6: push ebp */
    ebp = esp; /* 0x17040AC7: mov ebp, esp */
    PUSH32(esp, 1); /* 0x17040AC9: push 1 */
    RECOMP_CALL(sub_1704A5B1); /* 0x17040ACB: call 0x1704a5b1 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x17040AD0: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(0x1722406C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_17040ADC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17040ADCu);

L_17040ADC:
    { _itail_tgt = (uint32_t)(MEM32(0x1722406C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_17040AE7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17040AE7u);

L_17040AE7:
    edi = edi; /* 0x17040AE7: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17040AE9: push ebp */
    ebp = esp; /* 0x17040AEA: mov ebp, esp */
    PUSH32(esp, 1); /* 0x17040AEC: push 1 */
    RECOMP_CALL(sub_1704A5B1); /* 0x17040AEE: call 0x1704a5b1 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x17040AF3: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(0x1722413C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_17040AFF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17040AFFu);

L_17040AFF:
    { _itail_tgt = (uint32_t)(MEM32(0x1722413C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_17040B0A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17040B0Au);

L_17040B0A:
    edi = edi; /* 0x17040B0A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17040B0C: push ebp */
    ebp = esp; /* 0x17040B0D: mov ebp, esp */
    PUSH32(esp, 1); /* 0x17040B0F: push 1 */
    RECOMP_CALL(sub_1704A5B1); /* 0x17040B11: call 0x1704a5b1 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x17040B16: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(0x1722405C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_17040B22(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17040B22u);

L_17040B22:
    { _itail_tgt = (uint32_t)(MEM32(0x1722405C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_17040B2D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17040B2Du);

L_17040B2D:
    edi = edi; /* 0x17040B2D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17040B2F: push ebp */
    ebp = esp; /* 0x17040B30: mov ebp, esp */
    PUSH32(esp, 1); /* 0x17040B32: push 1 */
    RECOMP_CALL(sub_1704A5B1); /* 0x17040B34: call 0x1704a5b1 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x17040B39: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(0x17224140)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_17040B45(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17040B45u);

L_17040B45:
    { _itail_tgt = (uint32_t)(MEM32(0x17224140)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_17040B50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17040B50u);

L_17040B50:
    edi = edi; /* 0x17040B50: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17040B52: push ebp */
    ebp = esp; /* 0x17040B53: mov ebp, esp */
    PUSH32(esp, 1); /* 0x17040B55: push 1 */
    RECOMP_CALL(sub_1704A5B1); /* 0x17040B57: call 0x1704a5b1 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x17040B5C: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(0x17224064)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_17040B68(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17040B68u);

L_17040B68:
    { _itail_tgt = (uint32_t)(MEM32(0x17224064)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_17040B73(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17040B73u);

L_17040B73:
    edi = edi; /* 0x17040B73: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17040B75: push ebp */
    ebp = esp; /* 0x17040B76: mov ebp, esp */
    PUSH32(esp, 1); /* 0x17040B78: push 1 */
    RECOMP_CALL(sub_1704A5B1); /* 0x17040B7A: call 0x1704a5b1 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + 0x1C)); /* 0x17040B7F: fld dword ptr [ebp + 0x1c] */
    PUSH32(esp, ecx); /* 0x17040B82: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x17040B83: fstp dword ptr [esp] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x17040B86: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x17040B89: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x17040B8C: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x17040B8F: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x17040B92: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x17224110)); /* 0x17040B95: call dword ptr [0x17224110] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x17040B9B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x17040B9C: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_17040BA4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17040BA4u);

L_17040BA4:
    { _itail_tgt = (uint32_t)(MEM32(0x17224110)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_17040BAF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17040BAFu);

L_17040BAF:
    edi = edi; /* 0x17040BAF: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17040BB1: push ebp */
    ebp = esp; /* 0x17040BB2: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x17040BB4: push ecx */
    PUSH32(esp, ecx); /* 0x17040BB5: push ecx */
    fp_push(*(float*)&MEM32(ebp + 0x1C)); /* 0x17040BB6: fld dword ptr [ebp + 0x1c] */
    ecx = MEM32(ebp + 0xC); /* 0x17040BB9: mov ecx, dword ptr [ebp + 0xc] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x1C); /* 0x17040BBC: fmul dword ptr [ebp + 0x1c] */
    edx = MEM32(ebp + 0x10); /* 0x17040BBF: mov edx, dword ptr [ebp + 0x10] */
    fp_push(*(float*)&MEM32(ebp + 0x1C)); /* 0x17040BC2: fld dword ptr [ebp + 0x1c] */
    eax = MEM32(ebp + 0x8); /* 0x17040BC5: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x17040BC8: push esi */
    _st[0] *= _st[1]; /* 0x17040BC9: fmul st(1) */
    esi = MEM32(ebp + 0x14); /* 0x17040BCB: mov esi, dword ptr [ebp + 0x14] */
    PUSH32(esp, edi); /* 0x17040BCE: push edi */
    edi = MEM32(ebp + 0x18); /* 0x17040BCF: mov edi, dword ptr [ebp + 0x18] */
    fp_push(_st[0]); /* 0x17040BD2: fld st(0) */
    _st[0] += _st[1]; /* 0x17040BD4: fadd st(1) */
    fp_push(_st[2]); /* 0x17040BD6: fld st(2) */
    _st[0] *= (double)*(float*)ADDR(0x17001DA0); /* 0x17040BD8: fmul dword ptr [0x17001da0] */
    fp_push(_st[1]); /* 0x17040BDE: fld st(1) */
    _st[0] -= _st[1]; /* 0x17040BE0: fsub st(1) */
    _st[0] += (double)*(float*)ADDR(0x17001424); /* 0x17040BE2: fadd dword ptr [0x17001424] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x17040BE8: fstp dword ptr [ebp - 8] */
    fp_push(_st[3]); /* 0x17040BEB: fld st(3) */
    _st[0] += _st[0]; /* 0x17040BED: fadd st(0), st(0) */
    _st[0] = _st[3] - _st[0]; /* 0x17040BEF: fsubr st(3) */
    _st[0] += (double)*(float*)ADDR(ebp + 0x1C); /* 0x17040BF1: fadd dword ptr [ebp + 0x1c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x17040BF4: fstp dword ptr [ebp - 4] */
    _st[0] -= _st[1]; /* 0x17040BF7: fsub st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x1C) = _v; } /* 0x17040BF9: fstp dword ptr [ebp + 0x1c] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17040BFC: fstp st(0) */
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x17040BFE: fsubrp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x17040C00: fld dword ptr [ebp - 8] */
    _st[0] *= (double)*(float*)ADDR(ecx); /* 0x17040C03: fmul dword ptr [ecx] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x17040C05: fld dword ptr [ebp - 4] */
    _st[0] *= (double)*(float*)ADDR(edx); /* 0x17040C08: fmul dword ptr [edx] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17040C0A: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + 0x1C)); /* 0x17040C0C: fld dword ptr [ebp + 0x1c] */
    _st[0] *= (double)*(float*)ADDR(esi); /* 0x17040C0F: fmul dword ptr [esi] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17040C11: faddp st(1) */
    fp_push(_st[1]); /* 0x17040C13: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(edi); /* 0x17040C15: fmul dword ptr [edi] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17040C17: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x17040C19: fstp dword ptr [eax] */
    fp_push(_st[0]); /* 0x17040C1B: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(edi + 0x4); /* 0x17040C1D: fmul dword ptr [edi + 4] */
    fp_push(*(float*)&MEM32(ebp + 0x1C)); /* 0x17040C20: fld dword ptr [ebp + 0x1c] */
    _st[0] *= (double)*(float*)ADDR(esi + 0x4); /* 0x17040C23: fmul dword ptr [esi + 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17040C26: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x17040C28: fld dword ptr [ebp - 4] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x4); /* 0x17040C2B: fmul dword ptr [edx + 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17040C2E: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x17040C30: fld dword ptr [ebp - 8] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x4); /* 0x17040C33: fmul dword ptr [ecx + 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17040C36: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x4) = _v; } /* 0x17040C38: fstp dword ptr [eax + 4] */
    _st[0] *= (double)*(float*)ADDR(edi + 0x8); /* 0x17040C3B: fmul dword ptr [edi + 8] */
    edi = POP32_VAL(esp); /* 0x17040C3E: pop edi */
    fp_push(*(float*)&MEM32(ebp + 0x1C)); /* 0x17040C3F: fld dword ptr [ebp + 0x1c] */
    _st[0] *= (double)*(float*)ADDR(esi + 0x8); /* 0x17040C42: fmul dword ptr [esi + 8] */
    esi = POP32_VAL(esp); /* 0x17040C45: pop esi */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17040C46: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x17040C48: fld dword ptr [ebp - 4] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x8); /* 0x17040C4B: fmul dword ptr [edx + 8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17040C4E: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x17040C50: fld dword ptr [ebp - 8] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x8); /* 0x17040C53: fmul dword ptr [ecx + 8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17040C56: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x8) = _v; } /* 0x17040C58: fstp dword ptr [eax + 8] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17040C5B: leave  */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x17040C5C: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_17040C64(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17040C64u);

L_17040C64:
    edi = edi; /* 0x17040C64: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17040C66: push ebp */
    ebp = esp; /* 0x17040C67: mov ebp, esp */
    PUSH32(esp, 1); /* 0x17040C69: push 1 */
    RECOMP_CALL(sub_1704A5B1); /* 0x17040C6B: call 0x1704a5b1 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + 0x1C)); /* 0x17040C70: fld dword ptr [ebp + 0x1c] */
    PUSH32(esp, ecx); /* 0x17040C73: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x17040C74: fstp dword ptr [esp] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x17040C77: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x17040C7A: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x17040C7D: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x17040C80: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x17040C83: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x17224114)); /* 0x17040C86: call dword ptr [0x17224114] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x17040C8C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x17040C8D: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_17040C95(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17040C95u);

L_17040C95:
    { _itail_tgt = (uint32_t)(MEM32(0x17224114)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_17040CA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17040CA0u);

L_17040CA0:
    edi = edi; /* 0x17040CA0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17040CA2: push ebp */
    ebp = esp; /* 0x17040CA3: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x17040CA5: push ecx */
    PUSH32(esp, ecx); /* 0x17040CA6: push ecx */
    fp_push(*(float*)&MEM32(ebp + 0x1C)); /* 0x17040CA7: fld dword ptr [ebp + 0x1c] */
    ecx = MEM32(ebp + 0xC); /* 0x17040CAA: mov ecx, dword ptr [ebp + 0xc] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x1C); /* 0x17040CAD: fmul dword ptr [ebp + 0x1c] */
    edx = MEM32(ebp + 0x10); /* 0x17040CB0: mov edx, dword ptr [ebp + 0x10] */
    fp_push(*(float*)&MEM32(ebp + 0x1C)); /* 0x17040CB3: fld dword ptr [ebp + 0x1c] */
    eax = MEM32(ebp + 0x8); /* 0x17040CB6: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x17040CB9: push esi */
    _st[0] *= _st[1]; /* 0x17040CBA: fmul st(1) */
    esi = MEM32(ebp + 0x14); /* 0x17040CBC: mov esi, dword ptr [ebp + 0x14] */
    fp_push(*(float*)&MEM32(0x170018CC)); /* 0x17040CBF: fld dword ptr [0x170018cc] */
    PUSH32(esp, edi); /* 0x17040CC5: push edi */
    fp_push(_st[2]); /* 0x17040CC6: fld st(2) */
    edi = MEM32(ebp + 0x18); /* 0x17040CC8: mov edi, dword ptr [ebp + 0x18] */
    _st[0] *= _st[1]; /* 0x17040CCB: fmul st(1) */
    _st[0] -= _st[2]; /* 0x17040CCD: fsub st(2) */
    _st[0] -= (double)*(float*)ADDR(ebp + 0x1C); /* 0x17040CCF: fsub dword ptr [ebp + 0x1c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x17040CD2: fstp dword ptr [ebp - 8] */
    fp_push(_st[1]); /* 0x17040CD5: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(0x17001DA0); /* 0x17040CD7: fmul dword ptr [0x17001da0] */
    fp_push(_st[3]); /* 0x17040CDD: fld st(3) */
    _st[0] *= (double)*(float*)ADDR(0x17005304); /* 0x17040CDF: fmul dword ptr [0x17005304] */
    _st[0] = _st[1] - _st[0]; /* 0x17040CE5: fsubr st(1) */
    _st[0] += _st[2]; /* 0x17040CE7: fadd st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x17040CE9: fstp dword ptr [ebp - 4] */
    fp_push(_st[3]); /* 0x17040CEC: fld st(3) */
    _st[0] *= (double)*(float*)ADDR(0x17005300); /* 0x17040CEE: fmul dword ptr [0x17005300] */
    _st[0] -= _st[1]; /* 0x17040CF4: fsub st(1) */
    _st[0] += (double)*(float*)ADDR(ebp + 0x1C); /* 0x17040CF6: fadd dword ptr [ebp + 0x1c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x1C) = _v; } /* 0x17040CF9: fstp dword ptr [ebp + 0x1c] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17040CFC: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17040CFE: fstp st(0) */
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x17040D00: fsubrp st(1) */
    fp_push(*(float*)&MEM32(0x1700141C)); /* 0x17040D02: fld dword ptr [0x1700141c] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x17040D08: fld dword ptr [ebp - 8] */
    _st[0] *= (double)*(float*)ADDR(ecx); /* 0x17040D0B: fmul dword ptr [ecx] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x17040D0D: fld dword ptr [ebp - 4] */
    _st[0] *= (double)*(float*)ADDR(edx); /* 0x17040D10: fmul dword ptr [edx] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17040D12: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + 0x1C)); /* 0x17040D14: fld dword ptr [ebp + 0x1c] */
    _st[0] *= (double)*(float*)ADDR(esi); /* 0x17040D17: fmul dword ptr [esi] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17040D19: faddp st(1) */
    fp_push(_st[2]); /* 0x17040D1B: fld st(2) */
    _st[0] *= (double)*(float*)ADDR(edi); /* 0x17040D1D: fmul dword ptr [edi] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17040D1F: faddp st(1) */
    _st[0] *= _st[1]; /* 0x17040D21: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x17040D23: fstp dword ptr [eax] */
    fp_push(_st[1]); /* 0x17040D25: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(edi + 0x4); /* 0x17040D27: fmul dword ptr [edi + 4] */
    fp_push(*(float*)&MEM32(ebp + 0x1C)); /* 0x17040D2A: fld dword ptr [ebp + 0x1c] */
    _st[0] *= (double)*(float*)ADDR(esi + 0x4); /* 0x17040D2D: fmul dword ptr [esi + 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17040D30: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x17040D32: fld dword ptr [ebp - 4] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x4); /* 0x17040D35: fmul dword ptr [edx + 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17040D38: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x17040D3A: fld dword ptr [ebp - 8] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x4); /* 0x17040D3D: fmul dword ptr [ecx + 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17040D40: faddp st(1) */
    _st[0] *= _st[1]; /* 0x17040D42: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x4) = _v; } /* 0x17040D44: fstp dword ptr [eax + 4] */
    fp_push(_st[1]); /* 0x17040D47: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(edi + 0x8); /* 0x17040D49: fmul dword ptr [edi + 8] */
    edi = POP32_VAL(esp); /* 0x17040D4C: pop edi */
    fp_push(*(float*)&MEM32(ebp + 0x1C)); /* 0x17040D4D: fld dword ptr [ebp + 0x1c] */
    _st[0] *= (double)*(float*)ADDR(esi + 0x8); /* 0x17040D50: fmul dword ptr [esi + 8] */
    esi = POP32_VAL(esp); /* 0x17040D53: pop esi */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17040D54: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x17040D56: fld dword ptr [ebp - 4] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x8); /* 0x17040D59: fmul dword ptr [edx + 8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17040D5C: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x17040D5E: fld dword ptr [ebp - 8] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x8); /* 0x17040D61: fmul dword ptr [ecx + 8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17040D64: faddp st(1) */
    _st[0] *= _st[1]; /* 0x17040D66: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x8) = _v; } /* 0x17040D68: fstp dword ptr [eax + 8] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17040D6B: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17040D6D: fstp st(0) */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17040D6F: leave  */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x17040D70: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_17040D78(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17040D78u);

L_17040D78:
    edi = edi; /* 0x17040D78: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17040D7A: push ebp */
    ebp = esp; /* 0x17040D7B: mov ebp, esp */
    PUSH32(esp, 1); /* 0x17040D7D: push 1 */
    RECOMP_CALL(sub_1704A5B1); /* 0x17040D7F: call 0x1704a5b1 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + 0x1C)); /* 0x17040D84: fld dword ptr [ebp + 0x1c] */
    PUSH32(esp, ecx); /* 0x17040D87: push ecx */
    PUSH32(esp, ecx); /* 0x17040D88: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x17040D89: fstp dword ptr [esp + 4] */
    fp_push(*(float*)&MEM32(ebp + 0x18)); /* 0x17040D8D: fld dword ptr [ebp + 0x18] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x17040D90: fstp dword ptr [esp] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x17040D93: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x17040D96: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x17040D99: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x17040D9C: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x17224118)); /* 0x17040D9F: call dword ptr [0x17224118] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x17040DA5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x17040DA6: ret 0x18 */
    RECOMP_REGS_OUT();
}
