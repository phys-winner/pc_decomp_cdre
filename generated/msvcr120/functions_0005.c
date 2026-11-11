#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_10022A43(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10022A43u);

L_10022A43:
    RECOMP_CALL(sub_1000F750); /* 0x10022A43: call 0x1000f750 */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x10022A48: mov edx, eax */
    eax = MEM32(edx + 0x6C); /* 0x10022A4A: mov eax, dword ptr [edx + 0x6c] */
    /* cmp eax, MEM32(0x100DFA84) */ /* 0x10022A4D: cmp eax, dword ptr [0x100dfa84] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(0x100DFA84));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005F5F0; /* 0x10022A53: jne 0x1005f5f0 */
L_10022A59:
    eax = MEM32(eax + 0x74); /* 0x10022A59: mov eax, dword ptr [eax + 0x74] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10022A5C: ret  */
L_1005F5F0:
    ecx = MEM32(0x100DFDD4); /* 0x1005F5F0: mov ecx, dword ptr [0x100dfdd4] */
    /* test MEM32(edx + 0x70), ecx */ /* 0x1005F5F6: test dword ptr [edx + 0x70], ecx */
    _flag_a = (uint32_t)(MEM32(edx + 0x70)); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10022A59; /* 0x1005F5F9: jne 0x10022a59 */
L_1005F5FF:
    RECOMP_CALL(sub_10012C8B); /* 0x1005F5FF: call 0x10012c8b */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_10022A59; /* 0x1005F604: jmp 0x10022a59 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10022B47(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10022B47u);

L_10022B47:
    RECOMP_CALL(sub_1000F750); /* 0x10022B47: call 0x1000f750 */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x10022B4C: mov edx, eax */
    eax = MEM32(edx + 0x6C); /* 0x10022B4E: mov eax, dword ptr [edx + 0x6c] */
    /* cmp eax, MEM32(0x100DFA84) */ /* 0x10022B51: cmp eax, dword ptr [0x100dfa84] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(0x100DFA84));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005F471; /* 0x10022B57: jne 0x1005f471 */
L_10022B5D:
    eax = MEM32(eax + 0x90); /* 0x10022B5D: mov eax, dword ptr [eax + 0x90] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10022B63: ret  */
L_1005F471:
    ecx = MEM32(0x100DFDD4); /* 0x1005F471: mov ecx, dword ptr [0x100dfdd4] */
    /* test MEM32(edx + 0x70), ecx */ /* 0x1005F477: test dword ptr [edx + 0x70], ecx */
    _flag_a = (uint32_t)(MEM32(edx + 0x70)); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10022B5D; /* 0x1005F47A: jne 0x10022b5d */
L_1005F480:
    RECOMP_CALL(sub_10012C8B); /* 0x1005F480: call 0x10012c8b */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_10022B5D; /* 0x1005F485: jmp 0x10022b5d */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10022B64(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10022B64u);

L_10022B64:
    PUSH32(esp, ebp); /* 0x10022B64: push ebp */
    ebp = esp; /* 0x10022B65: mov ebp, esp */
    _flag_a = (uint32_t)((MEM32(ecx) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ecx) | 0xFFFFFFFFu));
    MEM32(ecx) = MEM32(ecx) | 0xFFFFFFFFu; /* 0x10022B67: or dword ptr [ecx], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + 0xC); /* 0x10022B6A: mov eax, dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + 0x8); /* 0x10022B6D: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x10022B70: push esi */
    esi = ecx + 0x2C; /* 0x10022B71: lea esi, [ecx + 0x2c] */
    _flag_a = (uint32_t)((MEM32(esi) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(esi) | 0xFFFFFFFFu));
    MEM32(esi) = MEM32(esi) | 0xFFFFFFFFu; /* 0x10022B74: or dword ptr [esi], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x100E02F4) = eax; /* 0x10022B77: mov dword ptr [0x100e02f4], eax */
    MEM32(0x100E02F0) = eax; /* 0x10022B7C: mov dword ptr [0x100e02f0], eax */
    /* test edx, edx */ /* 0x10022B81: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005B5ED; /* 0x10022B83: jne 0x1005b5ed */
L_10022B89:
    _flag_a = (uint32_t)(MEM32(0x100E02F8)); _flag_b = (uint32_t)(0);
    MEM32(0x100E02F8) = MEM32(0x100E02F8) & 0; /* 0x10022B89: and dword ptr [0x100e02f8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(0x100E02FC)); _flag_b = (uint32_t)(0);
    MEM32(0x100E02FC) = MEM32(0x100E02FC) & 0; /* 0x10022B90: and dword ptr [0x100e02fc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_10022B97:
    eax = MEM32(ebp + 0x18); /* 0x10022B97: mov eax, dword ptr [ebp + 0x18] */
    MEM32(0x100E0300) = eax; /* 0x10022B9A: mov dword ptr [0x100e0300], eax */
    eax = MEM32(ebp + 0x14); /* 0x10022B9F: mov eax, dword ptr [ebp + 0x14] */
    MEM32(0x100E02EC) = esi; /* 0x10022BA2: mov dword ptr [0x100e02ec], esi */
    MEM32(0x100E0308) = eax; /* 0x10022BA8: mov dword ptr [0x100e0308], eax */
    eax = ecx; /* 0x10022BAD: mov eax, ecx */
    MEM32(0x100E02E8) = ecx; /* 0x10022BAF: mov dword ptr [0x100e02e8], ecx */
    MEM8(0x100E0304) = (uint8_t)(0); /* 0x10022BB5: mov byte ptr [0x100e0304], 0 */
    esi = POP32_VAL(esp); /* 0x10022BBC: pop esi */
    ebp = POP32_VAL(esp); /* 0x10022BBD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x10022BBE: ret 0x14 */
L_1005B5ED:
    eax = MEM32(ebp + 0x10); /* 0x1005B5ED: mov eax, dword ptr [ebp + 0x10] */
    MEM32(0x100E02FC) = eax; /* 0x1005B5F0: mov dword ptr [0x100e02fc], eax */
    MEM32(0x100E02F8) = edx; /* 0x1005B5F5: mov dword ptr [0x100e02f8], edx */
    RECOMP_BACKEDGE();
    goto L_10022B97; /* 0x1005B5FB: jmp 0x10022b97 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10022BC1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10022BC1u);

L_10022BC1:
    PUSH32(esp, ebp); /* 0x10022BC1: push ebp */
    ebp = esp; /* 0x10022BC2: mov ebp, esp */
    PUSH32(esp, esi); /* 0x10022BC4: push esi */
    esi = ecx; /* 0x10022BC5: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10022BC7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0x8); /* 0x10022BC9: mov ecx, dword ptr [ebp + 8] */
    MEM8(esi + 0x4) = (uint8_t)(LO8(eax)); /* 0x10022BCC: mov byte ptr [esi + 4], al */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0xFFFF00FFu);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0xFFFF00FFu; /* 0x10022BCF: and dword ptr [esi + 4], 0xffff00ff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = eax; /* 0x10022BD6: mov dword ptr [esi], eax */
    /* test ecx, ecx */ /* 0x10022BD8: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10022BF4; /* 0x10022BDA: je 0x10022bf4 */
L_10022BDC:
    /* cmp MEM8(ecx), LO8(eax) */ /* 0x10022BDC: cmp byte ptr [ecx], al */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10022BF4; /* 0x10022BDE: je 0x10022bf4 */
L_10022BE0:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10022BE0: inc eax */
    _flag_k = FK_INC;
    /* cmp MEM8(eax + ecx), 0 */ /* 0x10022BE1: cmp byte ptr [eax + ecx], 0 */
    _flag_a = (uint32_t)(MEM8(eax + ecx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_10022BE0; /* 0x10022BE5: jne 0x10022be0 */
L_10022BE7:
    /* test eax, eax */ /* 0x10022BE7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10022BF4; /* 0x10022BE9: je 0x10022bf4 */
L_10022BEB:
    PUSH32(esp, eax); /* 0x10022BEB: push eax */
    PUSH32(esp, ecx); /* 0x10022BEC: push ecx */
    ecx = esi; /* 0x10022BED: mov ecx, esi */
    RECOMP_CALL(sub_10023174); /* 0x10022BEF: call 0x10023174 */
    RECOMP_FLAGS_IN();
L_10022BF4:
    eax = esi; /* 0x10022BF4: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x10022BF6: pop esi */
    ebp = POP32_VAL(esp); /* 0x10022BF7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x10022BF8: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_10022BFB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10022BFBu);

L_10022BFB:
    PUSH32(esp, ebp); /* 0x10022BFB: push ebp */
    ebp = esp; /* 0x10022BFC: mov ebp, esp */
    PUSH32(esp, esi); /* 0x10022BFE: push esi */
    esi = ecx; /* 0x10022BFF: mov esi, ecx */
    /* cmp MEM8(esi + 0x4), 1 */ /* 0x10022C01: cmp byte ptr [esi + 4], 1 */
    _flag_a = (uint32_t)(MEM8(esi + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_G(_flag_a, _flag_b)) goto L_10022C25; /* 0x10022C05: jg 0x10022c25 */
L_10022C07:
    ecx = MEM32(ebp + 0x8); /* 0x10022C07: mov ecx, dword ptr [ebp + 8] */
    /* cmp MEM32(ecx), 0 */ /* 0x10022C0A: cmp dword ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002373B; /* 0x10022C0D: je 0x1002373b */
L_10022C13:
    /* cmp MEM32(esi), 0 */ /* 0x10022C13: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1003002F; /* 0x10022C16: je 0x1003002f */
L_10022C1C:
    PUSH32(esp, MEM32(ecx)); /* 0x10022C1C: push dword ptr [ecx] */
    ecx = esi; /* 0x10022C1E: mov ecx, esi */
    RECOMP_CALL(sub_10022CF3); /* 0x10022C20: call 0x10022cf3 */
    RECOMP_FLAGS_IN();
L_10022C25:
    eax = esi; /* 0x10022C25: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x10022C27: pop esi */
    ebp = POP32_VAL(esp); /* 0x10022C28: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x10022C29: ret 4 */
L_1002373B:
    eax = (int32_t)(int8_t)MEM8(ecx + 0x4); /* 0x1002373B: movsx eax, byte ptr [ecx + 4] */
    ecx = esi; /* 0x1002373F: mov ecx, esi */
    PUSH32(esp, eax); /* 0x10023741: push eax */
    RECOMP_CALL(sub_1002374C); /* 0x10023742: call 0x1002374c */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_10022C25; /* 0x10023747: jmp 0x10022c25 */
L_1003002F:
    eax = MEM32(ecx); /* 0x1003002F: mov eax, dword ptr [ecx] */
    MEM32(esi) = eax; /* 0x10030031: mov dword ptr [esi], eax */
    eax = MEM32(ecx + 0x4); /* 0x10030033: mov eax, dword ptr [ecx + 4] */
    MEM32(esi + 0x4) = eax; /* 0x10030036: mov dword ptr [esi + 4], eax */
    RECOMP_BACKEDGE();
    goto L_10022C25; /* 0x10030039: jmp 0x10022c25 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10022C2C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10022C2Cu);

L_10022C2C:
    PUSH32(esp, ebp); /* 0x10022C2C: push ebp */
    ebp = esp; /* 0x10022C2D: mov ebp, esp */
    PUSH32(esp, esi); /* 0x10022C2F: push esi */
    esi = ecx; /* 0x10022C30: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10022C32: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0x8); /* 0x10022C34: mov ecx, dword ptr [ebp + 8] */
    MEM8(esi + 0x4) = (uint8_t)(LO8(eax)); /* 0x10022C37: mov byte ptr [esi + 4], al */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0xFFFF00FFu);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0xFFFF00FFu; /* 0x10022C3A: and dword ptr [esi + 4], 0xffff00ff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = eax; /* 0x10022C41: mov dword ptr [esi], eax */
    /* cmp MEM8(ecx), LO8(eax) */ /* 0x10022C43: cmp byte ptr [ecx], al */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10022C4E; /* 0x10022C45: je 0x10022c4e */
L_10022C47:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10022C47: inc eax */
    _flag_k = FK_INC;
    /* cmp MEM8(eax + ecx), 0 */ /* 0x10022C48: cmp byte ptr [eax + ecx], 0 */
    _flag_a = (uint32_t)(MEM8(eax + ecx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_10022C47; /* 0x10022C4C: jne 0x10022c47 */
L_10022C4E:
    PUSH32(esp, eax); /* 0x10022C4E: push eax */
    PUSH32(esp, ecx); /* 0x10022C4F: push ecx */
    ecx = esi; /* 0x10022C50: mov ecx, esi */
    RECOMP_CALL(sub_10023174); /* 0x10022C52: call 0x10023174 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x10022C57: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x10022C59: pop esi */
    ebp = POP32_VAL(esp); /* 0x10022C5A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x10022C5B: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_10022CB8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10022CB8u);

    goto L_10022CB8;
L_10022C6D:
    PUSH32(esp, esi); /* 0x10022C6D: push esi */
    RECOMP_ICALL(MEM32(edi)); /* 0x10022C6E: call dword ptr [edi] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10022C70: pop ecx */
    goto L_10022CED; /* 0x10022C71: jmp 0x10022ced */
L_10022C73:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10022C73: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_10022C9C; /* 0x10022C75: jmp 0x10022c9c */
L_10022C77:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10022C77: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_10022CEC; /* 0x10022C79: jmp 0x10022cec */
L_10022C7B:
    ebx = 0x1000u; /* 0x10022C7B: mov ebx, 0x1000 */
    /* cmp esi, ebx */ /* 0x10022C80: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_10022C77; /* 0x10022C82: ja 0x10022c77 */
L_10022C84:
    PUSH32(esp, 1); /* 0x10022C84: push 1 */
    PUSH32(esp, 0x1004u); /* 0x10022C86: push 0x1004 */
    ecx = 0x100E030Cu; /* 0x10022C8B: mov ecx, 0x100e030c */
    RECOMP_CALL(sub_10022CB8); /* 0x10022C90: call 0x10022cb8 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10022C95: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10022C73; /* 0x10022C97: je 0x10022c73 */
L_10022C99:
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x10022C99: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_10022C9C:
    /* test eax, eax */ /* 0x10022C9C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10022C77; /* 0x10022C9E: je 0x10022c77 */
L_10022CA0:
    ecx = MEM32(edi + 0xC); /* 0x10022CA0: mov ecx, dword ptr [edi + 0xc] */
    /* test ecx, ecx */ /* 0x10022CA3: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005C93E; /* 0x10022CA5: jne 0x1005c93e */
L_10022CAB:
    MEM32(edi + 0x8) = eax; /* 0x10022CAB: mov dword ptr [edi + 8], eax */
L_10022CAE:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - esi; /* 0x10022CAE: sub ebx, esi */
    _flag_k = FK_CMP;
    MEM32(edi + 0xC) = eax; /* 0x10022CB0: mov dword ptr [edi + 0xc], eax */
    MEM32(edi + 0x10) = ebx; /* 0x10022CB3: mov dword ptr [edi + 0x10], ebx */
    goto L_10022CE3; /* 0x10022CB6: jmp 0x10022ce3 */
L_10022CB8:
    PUSH32(esp, ebp); /* 0x10022CB8: push ebp */
    ebp = esp; /* 0x10022CB9: mov ebp, esp */
    PUSH32(esp, esi); /* 0x10022CBB: push esi */
    esi = MEM32(ebp + 0x8); /* 0x10022CBC: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 7; /* 0x10022CBF: add esi, 7 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esi = esi & 0xFFFFFFF8u; /* 0x10022CC2: and esi, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x10022CC5: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x10022CC9: push edi */
    edi = ecx; /* 0x10022CCA: mov edi, ecx */
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_10022C6D; /* 0x10022CCC: jne 0x10022c6d */
L_10022CCE:
    /* test esi, esi */ /* 0x10022CCE: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005C936; /* 0x10022CD0: je 0x1005c936 */
L_10022CD6:
    eax = MEM32(edi + 0x10); /* 0x10022CD6: mov eax, dword ptr [edi + 0x10] */
    PUSH32(esp, ebx); /* 0x10022CD9: push ebx */
    /* cmp eax, esi */ /* 0x10022CDA: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_10022C7B; /* 0x10022CDC: jb 0x10022c7b */
L_10022CDE:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x10022CDE: sub eax, esi */
    _flag_k = FK_CMP;
    MEM32(edi + 0x10) = eax; /* 0x10022CE0: mov dword ptr [edi + 0x10], eax */
L_10022CE3:
    eax = MEM32(edi + 0x10); /* 0x10022CE3: mov eax, dword ptr [edi + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x10022CE6: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0xC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(edi + 0xC); /* 0x10022CE9: add eax, dword ptr [edi + 0xc] */
    _flag_k = FK_ADD;
L_10022CEC:
    ebx = POP32_VAL(esp); /* 0x10022CEC: pop ebx */
L_10022CED:
    edi = POP32_VAL(esp); /* 0x10022CED: pop edi */
    esi = POP32_VAL(esp); /* 0x10022CEE: pop esi */
    ebp = POP32_VAL(esp); /* 0x10022CEF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x10022CF0: ret 8 */
L_1005C936:
    PUSH32(esp, 8); /* 0x1005C936: push 8 */
    esi = POP32_VAL(esp); /* 0x1005C938: pop esi */
    RECOMP_BACKEDGE();
    goto L_10022CD6; /* 0x1005C939: jmp 0x10022cd6 */
L_1005C93E:
    MEM32(ecx) = eax; /* 0x1005C93E: mov dword ptr [ecx], eax */
    RECOMP_BACKEDGE();
    goto L_10022CAE; /* 0x1005C940: jmp 0x10022cae */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10022CF3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10022CF3u);

L_10022CF3:
    PUSH32(esp, ebp); /* 0x10022CF3: push ebp */
    ebp = esp; /* 0x10022CF4: mov ebp, esp */
    PUSH32(esp, esi); /* 0x10022CF6: push esi */
    PUSH32(esp, edi); /* 0x10022CF7: push edi */
    edi = MEM32(ebp + 0x8); /* 0x10022CF8: mov edi, dword ptr [ebp + 8] */
    esi = ecx; /* 0x10022CFB: mov esi, ecx */
    /* test edi, edi */ /* 0x10022CFD: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10022D35; /* 0x10022CFF: je 0x10022d35 */
L_10022D01:
    PUSH32(esp, 0); /* 0x10022D01: push 0 */
    PUSH32(esp, 0x10u); /* 0x10022D03: push 0x10 */
    ecx = 0x100E030Cu; /* 0x10022D05: mov ecx, 0x100e030c */
    RECOMP_CALL(sub_10022CB8); /* 0x10022D0A: call 0x10022cb8 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10022D0F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10022D31; /* 0x10022D11: je 0x10022d31 */
L_10022D13:
    ecx = MEM32(esi); /* 0x10022D13: mov ecx, dword ptr [esi] */
    _flag_a = (uint32_t)((MEM32(eax + 0xC) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(eax + 0xC) | 0xFFFFFFFFu));
    MEM32(eax + 0xC) = MEM32(eax + 0xC) | 0xFFFFFFFFu; /* 0x10022D15: or dword ptr [eax + 0xc], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = 0x10022D40u; /* 0x10022D19: mov dword ptr [eax], 0x10022d40 */
    MEM32(eax + 0x4) = ecx; /* 0x10022D1F: mov dword ptr [eax + 4], ecx */
    MEM32(eax + 0x8) = edi; /* 0x10022D22: mov dword ptr [eax + 8], edi */
L_10022D25:
    MEM32(esi) = eax; /* 0x10022D25: mov dword ptr [esi], eax */
    /* test eax, eax */ /* 0x10022D27: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10022D35; /* 0x10022D29: je 0x10022d35 */
L_10022D2B:
    edi = POP32_VAL(esp); /* 0x10022D2B: pop edi */
    esi = POP32_VAL(esp); /* 0x10022D2C: pop esi */
    ebp = POP32_VAL(esp); /* 0x10022D2D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x10022D2E: ret 4 */
L_10022D31:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10022D31: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10022D25; /* 0x10022D33: jmp 0x10022d25 */
L_10022D35:
    MEM8(esi + 0x4) = (uint8_t)(3); /* 0x10022D35: mov byte ptr [esi + 4], 3 */
    RECOMP_BACKEDGE();
    goto L_10022D2B; /* 0x10022D39: jmp 0x10022d2b */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10022D40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10022D40u);

L_10022D40:
    void_lift_trap(0x10022D40u, "das ");
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + MEM8(eax)); /* 0x10022D42: add dl, byte ptr [eax] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebx); /* 0x10022D44: add eax, dword ptr [ebx] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(eax); /* 0x10022D46: add edx, dword ptr [eax] */
    _flag_k = FK_ADD;
    void_lift_trap(0x10022D48u, "ljmp 0:0x10022d");
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10022D4F: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10022D51: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10022D53: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10022D55: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + LO8(edx)); /* 0x10022D57: add al, dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(esi)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(ecx, LO8(ecx) + MEM8(esi)); /* 0x10022D59: add cl, byte ptr [esi] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _aa = MEM8(eax + 0x2D), _ab = HI8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10022D5B: adc byte ptr [eax + 0x2d], ah */
      MEM8(eax + 0x2D) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + MEM8(eax)); /* 0x10022D5E: add dl, byte ptr [eax] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10022D60: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10022D62: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10022D64: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10022D66: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + MEM8(eax)); /* 0x10022D68: add al, byte ptr [eax] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10022D6A: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_O)) goto L_10022D9B; /* 0x10022D6C: jo 0x10022d9b */
L_10022D6E:
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + MEM8(eax)); /* 0x10022D6E: add dl, byte ptr [eax] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_L)) goto L_10022D9F; /* 0x10022D70: jl 0x10022d9f */
L_10022D72:
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + MEM8(eax)); /* 0x10022D72: add dl, byte ptr [eax] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _sa = MEM8(edx + eax), _sb = HI8(edx), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10022D74: sbb byte ptr [edx + eax], dh */
      MEM8(edx + eax) = (uint8_t)(_sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _aa = MEM8(eax), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10022D77: adc byte ptr [eax], al */
      MEM8(eax) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    /* nop */ /* 0x10022D79: nop  */
    /* nop */ /* 0x10022D7A: nop  */
    /* nop */ /* 0x10022D7B: nop  */
    { uint32_t _rv = (MEM8(edx)) & 255u, _rn = ((1) & 31) % 8u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 7) & 1u; _rv = ((_rv << 1) | _rb) & 255u; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } MEM8(edx) = (uint8_t)(_rv); } /* 0x10022D7C: rol byte ptr [edx], 1 */
    PUSH32(esp, _seg_cs); /* 0x10022D7E: push cs */
    { uint32_t _aa = MEM8(ecx), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10022D7F: adc byte ptr [ecx], al */
      MEM8(ecx) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10022D81: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10022D83: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10022D85: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x10022D87: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x10022D89u); { RECOMP_REGS_OUT(); return; } /* falls through past a gap */
L_10022D9B:
    eax = MEM32(ebp + 0xC); /* 0x10022D9B: mov eax, dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + 0x8); /* 0x10022D9E: mov edx, dword ptr [ebp + 8] */
    goto L_10022DA1; /* falls through past a gap */
L_10022D9F:
    PUSH32(esp, ebp); /* 0x10022D9F: push ebp */
    _flag_a = (uint32_t)((MEM8(ebx) | HI8(ecx))) << 24; _flag_b = (uint32_t)((MEM8(ebx) | HI8(ecx))) << 24;
    MEM8(ebx) = (uint8_t)(MEM8(ebx) | HI8(ecx)); /* 0x10022DA0: or byte ptr [ebx], ch */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_10022DA2; /* falls through past a gap */
L_10022DA1:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x10022DA1: sub eax, edx */
    _flag_k = FK_CMP;
    goto L_10022DA3; /* falls through past a gap */
L_10022DA2:
    RECOMP_FLAGS_OUT(); esp += 19855; { RECOMP_REGS_OUT(); return; } /* 0x10022DA2: ret 0x4d8b */
L_10022DA3:
    ecx = MEM32(ebp + 0x14); /* 0x10022DA3: mov ecx, dword ptr [ebp + 0x14] */
    /* cmp ecx, eax */ /* 0x10022DA6: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1005CFE4; /* 0x10022DA8: jg 0x1005cfe4 */
L_10022DAE:
    /* test ecx, ecx */ /* 0x10022DAE: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10022DCA; /* 0x10022DB0: je 0x10022dca */
L_10022DB2:
    PUSH32(esp, ebx); /* 0x10022DB2: push ebx */
    PUSH32(esp, esi); /* 0x10022DB3: push esi */
    PUSH32(esp, edi); /* 0x10022DB4: push edi */
    edi = MEM32(ebp + 0x10); /* 0x10022DB5: mov edi, dword ptr [ebp + 0x10] */
    esi = edx; /* 0x10022DB8: mov esi, edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - edx; /* 0x10022DBA: sub edi, edx */
    _flag_k = FK_CMP;
    ebx = ecx; /* 0x10022DBC: mov ebx, ecx */
L_10022DBE:
    SET_LO8(eax, MEM8(edi + esi)); /* 0x10022DBE: mov al, byte ptr [edi + esi] */
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x10022DC1: mov byte ptr [esi], al */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10022DC3: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x10022DC4: dec ebx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_10022DBE; /* 0x10022DC5: jne 0x10022dbe */
L_10022DC7:
    edi = POP32_VAL(esp); /* 0x10022DC7: pop edi */
    esi = POP32_VAL(esp); /* 0x10022DC8: pop esi */
    ebx = POP32_VAL(esp); /* 0x10022DC9: pop ebx */
L_10022DCA:
    eax = edx + ecx; /* 0x10022DCA: lea eax, [edx + ecx] */
    ebp = POP32_VAL(esp); /* 0x10022DCD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10022DCE: ret  */
L_1005CFE4:
    ecx = eax; /* 0x1005CFE4: mov ecx, eax */
    RECOMP_BACKEDGE();
    goto L_10022DAE; /* 0x1005CFE6: jmp 0x10022dae */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10022D98(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10022D98u);

L_10022D98:
    PUSH32(esp, ebp); /* 0x10022D98: push ebp */
    ebp = esp; /* 0x10022D99: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x10022D9B: mov eax, dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + 0x8); /* 0x10022D9E: mov edx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x10022DA1: sub eax, edx */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0x14); /* 0x10022DA3: mov ecx, dword ptr [ebp + 0x14] */
    /* cmp ecx, eax */ /* 0x10022DA6: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1005CFE4; /* 0x10022DA8: jg 0x1005cfe4 */
L_10022DAE:
    /* test ecx, ecx */ /* 0x10022DAE: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10022DCA; /* 0x10022DB0: je 0x10022dca */
L_10022DB2:
    PUSH32(esp, ebx); /* 0x10022DB2: push ebx */
    PUSH32(esp, esi); /* 0x10022DB3: push esi */
    PUSH32(esp, edi); /* 0x10022DB4: push edi */
    edi = MEM32(ebp + 0x10); /* 0x10022DB5: mov edi, dword ptr [ebp + 0x10] */
    esi = edx; /* 0x10022DB8: mov esi, edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - edx; /* 0x10022DBA: sub edi, edx */
    _flag_k = FK_CMP;
    ebx = ecx; /* 0x10022DBC: mov ebx, ecx */
L_10022DBE:
    SET_LO8(eax, MEM8(edi + esi)); /* 0x10022DBE: mov al, byte ptr [edi + esi] */
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x10022DC1: mov byte ptr [esi], al */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10022DC3: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x10022DC4: dec ebx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_10022DBE; /* 0x10022DC5: jne 0x10022dbe */
L_10022DC7:
    edi = POP32_VAL(esp); /* 0x10022DC7: pop edi */
    esi = POP32_VAL(esp); /* 0x10022DC8: pop esi */
    ebx = POP32_VAL(esp); /* 0x10022DC9: pop ebx */
L_10022DCA:
    eax = edx + ecx; /* 0x10022DCA: lea eax, [edx + ecx] */
    ebp = POP32_VAL(esp); /* 0x10022DCD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10022DCE: ret  */
L_1005CFE4:
    ecx = eax; /* 0x1005CFE4: mov ecx, eax */
    RECOMP_BACKEDGE();
    goto L_10022DAE; /* 0x1005CFE6: jmp 0x10022dae */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10022DCF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10022DCFu);

L_10022DCF:
    PUSH32(esp, ebp); /* 0x10022DCF: push ebp */
    ebp = esp; /* 0x10022DD0: mov ebp, esp */
    PUSH32(esp, MEM32(ecx + 0x8)); /* 0x10022DD2: push dword ptr [ecx + 8] */
    PUSH32(esp, MEM32(ecx + 0x4)); /* 0x10022DD5: push dword ptr [ecx + 4] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10022DD8: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10022DDB: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10022D98); /* 0x10022DDE: call 0x10022d98 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x10022DE3: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x10022DE6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x10022DE7: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_10022E14(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10022E14u);

L_10022E14:
    PUSH32(esp, ebp); /* 0x10022E14: push ebp */
    ebp = esp; /* 0x10022E15: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x10022E17: push ebx */
    PUSH32(esp, esi); /* 0x10022E18: push esi */
    esi = MEM32(ebp + 0x8); /* 0x10022E19: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x10022E1C: push edi */
    edi = ecx; /* 0x10022E1D: mov edi, ecx */
    ecx = MEM32(edi); /* 0x10022E1F: mov ecx, dword ptr [edi] */
    /* test ecx, ecx */ /* 0x10022E21: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10022E5A; /* 0x10022E23: je 0x10022e5a */
L_10022E25:
    /* test esi, esi */ /* 0x10022E25: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005CFBD; /* 0x10022E27: je 0x1005cfbd */
L_10022E2D:
    ebx = MEM32(ebp + 0xC); /* 0x10022E2D: mov ebx, dword ptr [ebp + 0xc] */
L_10022E30:
    ecx = MEM32(edi); /* 0x10022E30: mov ecx, dword ptr [edi] */
    /* test ecx, ecx */ /* 0x10022E32: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005CFD5; /* 0x10022E34: je 0x1005cfd5 */
L_10022E3A:
    edx = MEM32(ecx); /* 0x10022E3A: mov edx, dword ptr [ecx] */
    eax = ebx + (-0x1); /* 0x10022E3C: lea eax, [ebx - 1] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x10022E3F: add eax, esi */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x10022E41: push eax */
    PUSH32(esp, esi); /* 0x10022E42: push esi */
    RECOMP_ICALL(MEM32(edx + 0x8)); /* 0x10022E43: call dword ptr [edx + 8] */
    RECOMP_FLAGS_IN();
L_10022E46:
    MEM8(eax) = (uint8_t)(0); /* 0x10022E46: mov byte ptr [eax], 0 */
L_10022E49:
    edi = POP32_VAL(esp); /* 0x10022E49: pop edi */
    eax = esi; /* 0x10022E4A: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x10022E4C: pop esi */
    ebx = POP32_VAL(esp); /* 0x10022E4D: pop ebx */
    ebp = POP32_VAL(esp); /* 0x10022E4E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x10022E4F: ret 8 */
L_10022E52:
    esi = eax; /* 0x10022E52: mov esi, eax */
    /* test esi, esi */ /* 0x10022E54: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10022E30; /* 0x10022E56: jne 0x10022e30 */
L_10022E58:
    RECOMP_BACKEDGE();
    goto L_10022E49; /* 0x10022E58: jmp 0x10022e49 */
L_10022E5A:
    /* test esi, esi */ /* 0x10022E5A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005CFDC; /* 0x10022E5C: jne 0x1005cfdc */
L_10022E62:
    RECOMP_BACKEDGE();
    goto L_10022E49; /* 0x10022E62: jmp 0x10022e49 */
L_1005CFBD:
    eax = MEM32(ecx); /* 0x1005CFBD: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax)); /* 0x1005CFBF: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1005CFC1: push esi */
    ecx = 0x100E030Cu; /* 0x1005CFC2: mov ecx, 0x100e030c */
    ebx = eax + 0x1; /* 0x1005CFC7: lea ebx, [eax + 1] */
    PUSH32(esp, ebx); /* 0x1005CFCA: push ebx */
    RECOMP_CALL(sub_10022CB8); /* 0x1005CFCB: call 0x10022cb8 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_10022E52; /* 0x1005CFD0: jmp 0x10022e52 */
L_1005CFD5:
    eax = esi; /* 0x1005CFD5: mov eax, esi */
    RECOMP_BACKEDGE();
    goto L_10022E46; /* 0x1005CFD7: jmp 0x10022e46 */
L_1005CFDC:
    MEM8(esi) = (uint8_t)(0); /* 0x1005CFDC: mov byte ptr [esi], 0 */
    RECOMP_BACKEDGE();
    goto L_10022E49; /* 0x1005CFDF: jmp 0x10022e49 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10022E64(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10022E64u);

    goto L_10022E64;
L_10022C5E:
    SET_LO8(eax, LO8(edx)); /* 0x10022C5E: mov al, dl */
    MEM8(ecx) = (uint8_t)(LO8(eax)); /* 0x10022C60: mov byte ptr [ecx], al */
    eax = MEM32(0x100E02F8); /* 0x10022C62: mov eax, dword ptr [0x100e02f8] */
L_10022C67:
    edi = POP32_VAL(esp); /* 0x10022C67: pop edi */
    esi = POP32_VAL(esp); /* 0x10022C68: pop esi */
    esp = ebp; /* 0x10022C69: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10022C6B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10022C6C: ret  */
L_10022E64:
    PUSH32(esp, ebp); /* 0x10022E64: push ebp */
    ebp = esp; /* 0x10022E65: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x10022E67: sub esp, 0x20 */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + (-0xC)); /* 0x10022E6A: mov ecx, dword ptr [ebp - 0xc] */
    eax = 0xFFFF0000u; /* 0x10022E6D: mov eax, 0xffff0000 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(eax);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & eax; /* 0x10022E72: and dword ptr [ebp - 4], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    ecx = ecx & eax; /* 0x10022E75: and ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(0x100E02F4); /* 0x10022E77: mov eax, dword ptr [0x100e02f4] */
    PUSH32(esp, esi); /* 0x10022E7C: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x10022E7D: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = esi; /* 0x10022E7F: mov dword ptr [ebp - 8], esi */
    edx = esi; /* 0x10022E82: mov edx, esi */
    PUSH32(esp, edi); /* 0x10022E84: push edi */
    edi = 0x1000u; /* 0x10022E85: mov edi, 0x1000 */
    /* test eax, eax */ /* 0x10022E8A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10022ED0; /* 0x10022E8C: je 0x10022ed0 */
L_10022E8E:
    /* cmp MEM8(eax), 0x3Fu */ /* 0x10022E8E: cmp byte ptr [eax], 0x3f */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x3Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_10023A34; /* 0x10022E91: jne 0x10023a34 */
L_10022E97:
    SET_LO8(eax, MEM8(eax + 0x1)); /* 0x10022E97: mov al, byte ptr [eax + 1] */
    /* cmp LO8(eax), 0x40u */ /* 0x10022E9A: cmp al, 0x40 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005B62C; /* 0x10022E9C: je 0x1005b62c */
L_10022EA2:
    /* cmp LO8(eax), 0x24u */ /* 0x10022EA2: cmp al, 0x24 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x24u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_10023A25; /* 0x10022EA4: jne 0x10023a25 */
L_10022EAA:
    eax = ebp + (-0x20); /* 0x10022EAA: lea eax, [ebp - 0x20] */
    PUSH32(esp, esi); /* 0x10022EAD: push esi */
    PUSH32(esp, eax); /* 0x10022EAE: push eax */
    RECOMP_CALL(sub_100301E3); /* 0x10022EAF: call 0x100301e3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10022EB4: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10022EB5: pop ecx */
    ecx = MEM32(eax + 0x4); /* 0x10022EB6: mov ecx, dword ptr [eax + 4] */
    edx = MEM32(eax); /* 0x10022EB9: mov edx, dword ptr [eax] */
    /* cmp LO8(ecx), 2 */ /* 0x10022EBB: cmp cl, 2 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005B66F; /* 0x10022EBE: je 0x1005b66f */
L_10022EC4:
    /* test MEM32(0x100E0300), edi */ /* 0x10022EC4: test dword ptr [0x100e0300], edi */
    _flag_a = (uint32_t)(MEM32(0x100E0300)); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005B661; /* 0x10022ECA: je 0x1005b661 */
L_10022ED0:
    /* cmp LO8(ecx), 3 */ /* 0x10022ED0: cmp cl, 3 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005B67E; /* 0x10022ED3: je 0x1005b67e */
L_10022ED9:
    /* cmp LO8(ecx), 2 */ /* 0x10022ED9: cmp cl, 2 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005B6A2; /* 0x10022EDC: je 0x1005b6a2 */
L_10022EE2:
    /* test MEM32(0x100E0300), edi */ /* 0x10022EE2: test dword ptr [0x100e0300], edi */
    _flag_a = (uint32_t)(MEM32(0x100E0300)); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100237A7; /* 0x10022EE8: je 0x100237a7 */
L_10022EEE:
    MEM32(ebp + (-0x8)) = edx; /* 0x10022EEE: mov dword ptr [ebp - 8], edx */
    MEM32(ebp + (-0x4)) = ecx; /* 0x10022EF1: mov dword ptr [ebp - 4], ecx */
L_10022EF4:
    eax = MEM32(0x100E02F8); /* 0x10022EF4: mov eax, dword ptr [0x100e02f8] */
    /* test eax, eax */ /* 0x10022EF9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10022F2C; /* 0x10022EFB: jne 0x10022f2c */
L_10022EFD:
    /* test edx, edx */ /* 0x10022EFD: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10022F09; /* 0x10022EFF: je 0x10022f09 */
L_10022F01:
    eax = MEM32(edx); /* 0x10022F01: mov eax, dword ptr [edx] */
    ecx = edx; /* 0x10022F03: mov ecx, edx */
    RECOMP_ICALL(MEM32(eax)); /* 0x10022F05: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x10022F07: mov esi, eax */
L_10022F09:
    eax = esi + 0x1; /* 0x10022F09: lea eax, [esi + 1] */
    MEM32(0x100E02FC) = eax; /* 0x10022F0C: mov dword ptr [0x100e02fc], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x10022F11: add eax, 7 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFF8u);
    eax = eax & 0xFFFFFFF8u; /* 0x10022F14: and eax, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x10022F17: push eax */
    RECOMP_ICALL(MEM32(0x100E030C)); /* 0x10022F18: call dword ptr [0x100e030c] */
    RECOMP_FLAGS_IN();
    MEM32(0x100E02F8) = eax; /* 0x10022F1E: mov dword ptr [0x100e02f8], eax */
    ecx = POP32_VAL(esp); /* 0x10022F23: pop ecx */
    /* test eax, eax */ /* 0x10022F24: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10022C67; /* 0x10022F26: je 0x10022c67 */
L_10022F2C:
    PUSH32(esp, MEM32(0x100E02FC)); /* 0x10022F2C: push dword ptr [0x100e02fc] */
    ecx = ebp + (-0x8); /* 0x10022F32: lea ecx, [ebp - 8] */
    PUSH32(esp, eax); /* 0x10022F35: push eax */
    RECOMP_CALL(sub_10022E14); /* 0x10022F36: call 0x10022e14 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x100E02F8); /* 0x10022F3B: mov eax, dword ptr [0x100e02f8] */
    ecx = eax; /* 0x10022F40: mov ecx, eax */
L_10022F42:
    SET_LO8(edx, MEM8(eax)); /* 0x10022F42: mov dl, byte ptr [eax] */
    /* test LO8(edx), LO8(edx) */ /* 0x10022F44: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10022C5E; /* 0x10022F46: je 0x10022c5e */
L_10022F4C:
    /* cmp LO8(edx), 0x20u */ /* 0x10022F4C: cmp dl, 0x20 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10022F57; /* 0x10022F4F: je 0x10022f57 */
L_10022F51:
    MEM8(ecx) = (uint8_t)(LO8(edx)); /* 0x10022F51: mov byte ptr [ecx], dl */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x10022F53: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10022F54: inc eax */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_10022F42; /* 0x10022F55: jmp 0x10022f42 */
L_10022F57:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10022F57: inc eax */
    _flag_k = FK_INC;
    MEM8(ecx) = (uint8_t)(LO8(edx)); /* 0x10022F58: mov byte ptr [ecx], dl */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x10022F5A: inc ecx */
    _flag_k = FK_INC;
L_10022F5B:
    /* cmp MEM8(eax), 0x20u */ /* 0x10022F5B: cmp byte ptr [eax], 0x20 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_10022F42; /* 0x10022F5E: jne 0x10022f42 */
L_10022F60:
    goto L_10023A2E; /* 0x10022F60: jmp 0x10023a2e */
L_100237A7:
    eax = MEM32(0x100E02F0); /* 0x100237A7: mov eax, dword ptr [0x100e02f0] */
    /* cmp MEM8(eax), 0 */ /* 0x100237AC: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10022EEE; /* 0x100237AF: je 0x10022eee */
L_100237B5:
    goto L_1005B6A2; /* 0x100237B5: jmp 0x1005b6a2 */
L_10023A25:
    /* cmp LO8(eax), 0x3Fu */ /* 0x10023A25: cmp al, 0x3f */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x3Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_10023A34; /* 0x10023A27: jne 0x10023a34 */
L_10023A29:
    goto L_1005B685; /* 0x10023A29: jmp 0x1005b685 */
L_10023A2E:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10023A2E: inc eax */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_10022F5B; /* 0x10023A2F: jmp 0x10022f5b */
L_10023A34:
    eax = ebp + (-0x20); /* 0x10023A34: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x10023A37: push eax */
    RECOMP_CALL(sub_10023854); /* 0x10023A38: call 0x10023854 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10023A3D: pop ecx */
    ecx = MEM32(eax + 0x4); /* 0x10023A3E: mov ecx, dword ptr [eax + 4] */
    edx = MEM32(eax); /* 0x10023A41: mov edx, dword ptr [eax] */
    RECOMP_BACKEDGE();
    goto L_10022ED0; /* 0x10023A43: jmp 0x10022ed0 */
L_1005B62C:
    _flag_a = (uint32_t)(MEM32(0x100E02F0)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(0x100E02F0) = MEM32(0x100E02F0) + 2; /* 0x1005B62C: add dword ptr [0x100e02f0], 2 */
    _flag_k = FK_ADD;
    eax = ebp + (-0x18); /* 0x1005B633: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x1005B636: push eax */
    RECOMP_CALL(sub_10023854); /* 0x1005B637: call 0x10023854 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005B63C: pop ecx */
    PUSH32(esp, eax); /* 0x1005B63D: push eax */
    eax = ebp + (-0x10); /* 0x1005B63E: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1005B641: push eax */
    PUSH32(esp, 0x1005B6B8u); /* 0x1005B642: push 0x1005b6b8 */
    ecx = ebp + (-0x20); /* 0x1005B647: lea ecx, [ebp - 0x20] */
    RECOMP_CALL(sub_10022BC1); /* 0x1005B64A: call 0x10022bc1 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1005B64F: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1005B651: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x10)); /* 0x1005B656: mov edx, dword ptr [ebp - 0x10] */
    ecx = MEM32(ebp + (-0xC)); /* 0x1005B659: mov ecx, dword ptr [ebp - 0xc] */
    RECOMP_BACKEDGE();
    goto L_10022ED0; /* 0x1005B65C: jmp 0x10022ed0 */
L_1005B661:
    eax = MEM32(0x100E02F0); /* 0x1005B661: mov eax, dword ptr [0x100e02f0] */
    /* cmp MEM8(eax), 0 */ /* 0x1005B666: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10022ED0; /* 0x1005B669: je 0x10022ed0 */
L_1005B66F:
    eax = MEM32(0x100E02F4); /* 0x1005B66F: mov eax, dword ptr [0x100e02f4] */
    MEM32(0x100E02F0) = eax; /* 0x1005B674: mov dword ptr [0x100e02f0], eax */
    RECOMP_BACKEDGE();
    goto L_10023A34; /* 0x1005B679: jmp 0x10023a34 */
L_1005B67E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1005B67E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10022C67; /* 0x1005B680: jmp 0x10022c67 */
L_1005B685:
    eax = MEM32(0x100E02F4); /* 0x1005B685: mov eax, dword ptr [0x100e02f4] */
    /* cmp MEM8(eax + 0x2), 0x40u */ /* 0x1005B68A: cmp byte ptr [eax + 2], 0x40 */
    _flag_a = (uint32_t)(MEM8(eax + 0x2)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_10023A34; /* 0x1005B68E: jne 0x10023a34 */
L_1005B694:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFF0002u);
    ecx = ecx & 0xFFFF0002u; /* 0x1005B694: and ecx, 0xffff0002 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | 2)); _flag_b = (uint32_t)((ecx | 2));
    ecx = ecx | 2; /* 0x1005B69A: or ecx, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10022ED0; /* 0x1005B69D: jmp 0x10022ed0 */
L_1005B6A2:
    PUSH32(esp, MEM32(0x100E02F4)); /* 0x1005B6A2: push dword ptr [0x100e02f4] */
    ecx = ebp + (-0x8); /* 0x1005B6A8: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_10022C2C); /* 0x1005B6AB: call 0x10022c2c */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x8)); /* 0x1005B6B0: mov edx, dword ptr [ebp - 8] */
    RECOMP_BACKEDGE();
    goto L_10022EF4; /* 0x1005B6B3: jmp 0x10022ef4 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10022F92(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10022F92u);

L_10022F92:
    PUSH32(esp, ebp); /* 0x10022F92: push ebp */
    ebp = esp; /* 0x10022F93: mov ebp, esp */
    eax = MEM32(ebp + 0x10); /* 0x10022F95: mov eax, dword ptr [ebp + 0x10] */
    /* test eax, eax */ /* 0x10022F98: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005DA16; /* 0x10022F9A: je 0x1005da16 */
L_10022FA0:
    ecx = MEM32(ebp + 0xC); /* 0x10022FA0: mov ecx, dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + 0x8); /* 0x10022FA3: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x10022FA6: push ebx */
L_10022FA7:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x10022FA7: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_10022FB8; /* 0x10022FA8: je 0x10022fb8 */
L_10022FAA:
    SET_LO8(ebx, MEM8(edx)); /* 0x10022FAA: mov bl, byte ptr [edx] */
    /* test LO8(ebx), LO8(ebx) */ /* 0x10022FAC: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10022FB8; /* 0x10022FAE: je 0x10022fb8 */
L_10022FB0:
    /* cmp LO8(ebx), MEM8(ecx) */ /* 0x10022FB0: cmp bl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005DA18; /* 0x10022FB2: je 0x1005da18 */
L_10022FB8:
    eax = (uint32_t)MEM8(edx); /* 0x10022FB8: movzx eax, byte ptr [edx] */
    ecx = (uint32_t)MEM8(ecx); /* 0x10022FBB: movzx ecx, byte ptr [ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x10022FBE: sub eax, ecx */
    _flag_k = FK_CMP;
    ebx = POP32_VAL(esp); /* 0x10022FC0: pop ebx */
    ebp = POP32_VAL(esp); /* 0x10022FC1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10022FC2: ret  */
L_1005DA16:
    ebp = POP32_VAL(esp); /* 0x1005DA16: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1005DA17: ret  */
L_1005DA18:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1005DA18: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1005DA19: inc ecx */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_10022FA7; /* 0x1005DA1A: jmp 0x10022fa7 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10022FC3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10022FC3u);

L_10022FC3:
    PUSH32(esp, ebp); /* 0x10022FC3: push ebp */
    ebp = esp; /* 0x10022FC4: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x3Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x3Cu; /* 0x10022FC6: sub esp, 0x3c */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x10022FC9: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x10022FCE: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x10022FD0: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x10022FD3: push ebx */
    PUSH32(esp, esi); /* 0x10022FD4: push esi */
    esi = MEM32(0x100E02F0); /* 0x10022FD5: mov esi, dword ptr [0x100e02f0] */
    PUSH32(esp, edi); /* 0x10022FDB: push edi */
    edi = MEM32(ebp + 0x8); /* 0x10022FDC: mov edi, dword ptr [ebp + 8] */
    SET_LO8(ebx, MEM8(esi)); /* 0x10022FDF: mov bl, byte ptr [esi] */
    eax = (int32_t)(int8_t)LO8(ebx); /* 0x10022FE1: movsx eax, bl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x30u; /* 0x10022FE4: sub eax, 0x30 */
    _flag_k = FK_CMP;
    /* cmp eax, 9 */ /* 0x10022FE7: cmp eax, 9 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_10030CCE; /* 0x10022FEA: jbe 0x10030cce */
L_10022FF0:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) & 0; /* 0x10022FF0: and dword ptr [ebp - 0x1c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(0xFFFF0000u);
    MEM32(ebp + (-0x18)) = MEM32(ebp + (-0x18)) & 0xFFFF0000u; /* 0x10022FF4: and dword ptr [ebp - 0x18], 0xffff0000 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO8(ebx), 0x3Fu */ /* 0x10022FFB: cmp bl, 0x3f */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x3Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100309C1; /* 0x10022FFE: je 0x100309c1 */
L_10023004:
    eax = 0x100230A0u; /* 0x10023004: mov eax, 0x100230a0 */
    PUSH32(esp, 0x13u); /* 0x10023009: push 0x13 */
    PUSH32(esp, eax); /* 0x1002300B: push eax */
    PUSH32(esp, esi); /* 0x1002300C: push esi */
    MEM32(ebp + (-0x28)) = eax; /* 0x1002300D: mov dword ptr [ebp - 0x28], eax */
    RECOMP_CALL(sub_10022F92); /* 0x10023010: call 0x10022f92 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10023015: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10023018: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005D911; /* 0x1002301A: je 0x1005d911 */
L_10023020:
    eax = 0x100230B4u; /* 0x10023020: mov eax, 0x100230b4 */
    PUSH32(esp, 0xDu); /* 0x10023025: push 0xd */
    PUSH32(esp, eax); /* 0x10023027: push eax */
    PUSH32(esp, esi); /* 0x10023028: push esi */
    MEM32(ebp + (-0x28)) = eax; /* 0x10023029: mov dword ptr [ebp - 0x28], eax */
    RECOMP_CALL(sub_10022F92); /* 0x1002302C: call 0x10022f92 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10023031: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10023034: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005D916; /* 0x10023036: je 0x1005d916 */
L_1002303C:
    /* cmp MEM8(ebp + 0x10), 0 */ /* 0x1002303C: cmp byte ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002304B; /* 0x10023040: je 0x1002304b */
L_10023042:
    /* cmp LO8(ebx), 0x40u */ /* 0x10023042: cmp bl, 0x40 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005D9FA; /* 0x10023045: je 0x1005d9fa */
L_1002304B:
    PUSH32(esp, 0x40u); /* 0x1002304B: push 0x40 */
    PUSH32(esp, 0x100E02F0u); /* 0x1002304D: push 0x100e02f0 */
    ecx = ebp + (-0x3C); /* 0x10023052: lea ecx, [ebp - 0x3c] */
    RECOMP_CALL(sub_100231DB); /* 0x10023055: call 0x100231db */
    RECOMP_FLAGS_IN();
    ecx = MEM32(eax); /* 0x1002305A: mov ecx, dword ptr [eax] */
    eax = MEM32(eax + 0x4); /* 0x1002305C: mov eax, dword ptr [eax + 4] */
    MEM32(ebp + (-0x1C)) = ecx; /* 0x1002305F: mov dword ptr [ebp - 0x1c], ecx */
L_10023062:
    MEM32(ebp + (-0x18)) = eax; /* 0x10023062: mov dword ptr [ebp - 0x18], eax */
L_10023065:
    /* cmp MEM8(ebp + 0xC), 0 */ /* 0x10023065: cmp byte ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002307F; /* 0x10023069: je 0x1002307f */
L_1002306B:
    ecx = MEM32(0x100E02EC); /* 0x1002306B: mov ecx, dword ptr [0x100e02ec] */
    /* cmp MEM32(ecx), 9 */ /* 0x10023071: cmp dword ptr [ecx], 9 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002307F; /* 0x10023074: je 0x1002307f */
L_10023076:
    eax = ebp + (-0x1C); /* 0x10023076: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x10023079: push eax */
    RECOMP_CALL(sub_100230C2); /* 0x1002307A: call 0x100230c2 */
    RECOMP_FLAGS_IN();
L_1002307F:
    eax = MEM32(ebp + (-0x1C)); /* 0x1002307F: mov eax, dword ptr [ebp - 0x1c] */
    MEM32(edi) = eax; /* 0x10023082: mov dword ptr [edi], eax */
    eax = MEM32(ebp + (-0x18)); /* 0x10023084: mov eax, dword ptr [ebp - 0x18] */
    MEM32(edi + 0x4) = eax; /* 0x10023087: mov dword ptr [edi + 4], eax */
L_1002308A:
    ecx = MEM32(ebp + (-0x4)); /* 0x1002308A: mov ecx, dword ptr [ebp - 4] */
    eax = edi; /* 0x1002308D: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1002308F: pop edi */
    esi = POP32_VAL(esp); /* 0x10023090: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x10023091: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x10023093: pop ebx */
    RECOMP_CALL(sub_1000F7C6); /* 0x10023094: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x10023099: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1002309B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002309C: ret  */
L_100309C1:
    eax = ebp + (-0x34); /* 0x100309C1: lea eax, [ebp - 0x34] */
    PUSH32(esp, 0); /* 0x100309C4: push 0 */
    PUSH32(esp, eax); /* 0x100309C6: push eax */
    RECOMP_CALL(sub_100301E3); /* 0x100309C7: call 0x100301e3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100309CC: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100309CD: pop ecx */
    ecx = MEM32(eax); /* 0x100309CE: mov ecx, dword ptr [eax] */
    eax = MEM32(eax + 0x4); /* 0x100309D0: mov eax, dword ptr [eax + 4] */
    MEM32(ebp + (-0x1C)) = ecx; /* 0x100309D3: mov dword ptr [ebp - 0x1c], ecx */
    ecx = MEM32(0x100E02F0); /* 0x100309D6: mov ecx, dword ptr [0x100e02f0] */
    MEM32(ebp + (-0x18)) = eax; /* 0x100309DC: mov dword ptr [ebp - 0x18], eax */
    SET_LO8(eax, MEM8(ecx)); /* 0x100309DF: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x100309E1: inc ecx */
    _flag_k = FK_INC;
    MEM32(0x100E02F0) = ecx; /* 0x100309E2: mov dword ptr [0x100e02f0], ecx */
    /* cmp LO8(eax), 0x40u */ /* 0x100309E8: cmp al, 0x40 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10023065; /* 0x100309EA: je 0x10023065 */
L_100309F0:
    goto L_1005D8F4; /* 0x100309F0: jmp 0x1005d8f4 */
L_10030CCE:
    ecx = MEM32(0x100E02EC); /* 0x10030CCE: mov ecx, dword ptr [0x100e02ec] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10030CD4: inc esi */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x10030CD5: push eax */
    PUSH32(esp, edi); /* 0x10030CD6: push edi */
    MEM32(0x100E02F0) = esi; /* 0x10030CD7: mov dword ptr [0x100e02f0], esi */
    RECOMP_CALL(sub_10030CE7); /* 0x10030CDD: call 0x10030ce7 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1002308A; /* 0x10030CE2: jmp 0x1002308a */
L_1005D8F4:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1005D8F4: dec ecx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1005D8F5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x100E02F0) = ecx; /* 0x1005D8F7: mov dword ptr [0x100e02f0], ecx */
    /* cmp MEM8(ecx), LO8(eax) */ /* 0x1005D8FD: cmp byte ptr [ecx], al */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    ecx = ebp + (-0x1C); /* 0x1005D8FF: lea ecx, [ebp - 0x1c] */
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x1005D902: setne al */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1005D905: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x1005D906: push eax */
    RECOMP_CALL(sub_10023A53); /* 0x1005D907: call 0x10023a53 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_10023065; /* 0x1005D90C: jmp 0x10023065 */
L_1005D911:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x13u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x13u; /* 0x1005D911: add esi, 0x13 */
    _flag_k = FK_ADD;
    goto L_1005D919; /* 0x1005D914: jmp 0x1005d919 */
L_1005D916:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xDu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0xDu; /* 0x1005D916: add esi, 0xd */
    _flag_k = FK_ADD;
L_1005D919:
    eax = ebp + (-0x24); /* 0x1005D919: lea eax, [ebp - 0x24] */
    MEM32(0x100E02F0) = esi; /* 0x1005D91C: mov dword ptr [0x100e02f0], esi */
    PUSH32(esp, eax); /* 0x1005D922: push eax */
    RECOMP_CALL(sub_10030C36); /* 0x1005D923: call 0x10030c36 */
    RECOMP_FLAGS_IN();
    /* test MEM32(0x100E0300), 0x4000u */ /* 0x1005D928: test dword ptr [0x100e0300], 0x4000 */
    _flag_a = (uint32_t)(MEM32(0x100E0300)); _flag_b = (uint32_t)(0x4000u);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1005D932: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005D9A9; /* 0x1005D933: je 0x1005d9a9 */
L_1005D935:
    PUSH32(esp, 0x10u); /* 0x1005D935: push 0x10 */
    eax = ebp + (-0x14); /* 0x1005D937: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1005D93A: push eax */
    ecx = ebp + (-0x24); /* 0x1005D93B: lea ecx, [ebp - 0x24] */
    RECOMP_CALL(sub_10022E14); /* 0x1005D93E: call 0x10022e14 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x14); /* 0x1005D943: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1005D946: push eax */
    RECOMP_CALL(sub_1002E662); /* 0x1005D947: call 0x1002e662 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1005D94C: push eax */
    RECOMP_ICALL(MEM32(0x100E0308)); /* 0x1005D94D: call dword ptr [0x100e0308] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005D953: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1005D954: pop ecx */
    ecx = ebp + (-0x1C); /* 0x1005D955: lea ecx, [ebp - 0x1c] */
    /* test eax, eax */ /* 0x1005D958: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005D967; /* 0x1005D95A: je 0x1005d967 */
L_1005D95C:
    PUSH32(esp, eax); /* 0x1005D95C: push eax */
    RECOMP_CALL(sub_10022C2C); /* 0x1005D95D: call 0x10022c2c */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_10023065; /* 0x1005D962: jmp 0x10023065 */
L_1005D967:
    PUSH32(esp, 0x1005DA14u); /* 0x1005D967: push 0x1005da14 */
    RECOMP_CALL(sub_10022C2C); /* 0x1005D96C: call 0x10022c2c */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x24); /* 0x1005D971: lea eax, [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x1005D974: push eax */
    eax = ebp + (-0x34); /* 0x1005D975: lea eax, [ebp - 0x34] */
    PUSH32(esp, eax); /* 0x1005D978: push eax */
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x1005D979: push dword ptr [ebp - 0x28] */
    ecx = ebp + (-0x3C); /* 0x1005D97C: lea ecx, [ebp - 0x3c] */
    RECOMP_CALL(sub_10022BC1); /* 0x1005D97F: call 0x10022bc1 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1005D984: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1005D986: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x34)); /* 0x1005D98B: mov eax, dword ptr [ebp - 0x34] */
    ecx = ebp + (-0x2C); /* 0x1005D98E: lea ecx, [ebp - 0x2c] */
    MEM32(ebp + (-0x2C)) = eax; /* 0x1005D991: mov dword ptr [ebp - 0x2c], eax */
    eax = MEM32(ebp + (-0x30)); /* 0x1005D994: mov eax, dword ptr [ebp - 0x30] */
    PUSH32(esp, 0x100626E8u); /* 0x1005D997: push 0x100626e8 */
    MEM32(ebp + (-0x28)) = eax; /* 0x1005D99C: mov dword ptr [ebp - 0x28], eax */
    RECOMP_CALL(sub_1002A669); /* 0x1005D99F: call 0x1002a669 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x2C); /* 0x1005D9A4: lea eax, [ebp - 0x2c] */
    goto L_1005D9EC; /* 0x1005D9A7: jmp 0x1005d9ec */
L_1005D9A9:
    PUSH32(esp, 0x1005DA14u); /* 0x1005D9A9: push 0x1005da14 */
    ecx = ebp + (-0x1C); /* 0x1005D9AE: lea ecx, [ebp - 0x1c] */
    RECOMP_CALL(sub_10022C2C); /* 0x1005D9B1: call 0x10022c2c */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x24); /* 0x1005D9B6: lea eax, [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x1005D9B9: push eax */
    eax = ebp + (-0x34); /* 0x1005D9BA: lea eax, [ebp - 0x34] */
    PUSH32(esp, eax); /* 0x1005D9BD: push eax */
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x1005D9BE: push dword ptr [ebp - 0x28] */
    ecx = ebp + (-0x3C); /* 0x1005D9C1: lea ecx, [ebp - 0x3c] */
    RECOMP_CALL(sub_10022BC1); /* 0x1005D9C4: call 0x10022bc1 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1005D9C9: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1005D9CB: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x34)); /* 0x1005D9D0: mov eax, dword ptr [ebp - 0x34] */
    ecx = ebp + (-0x24); /* 0x1005D9D3: lea ecx, [ebp - 0x24] */
    MEM32(ebp + (-0x24)) = eax; /* 0x1005D9D6: mov dword ptr [ebp - 0x24], eax */
    eax = MEM32(ebp + (-0x30)); /* 0x1005D9D9: mov eax, dword ptr [ebp - 0x30] */
    PUSH32(esp, 0x100626E8u); /* 0x1005D9DC: push 0x100626e8 */
    MEM32(ebp + (-0x20)) = eax; /* 0x1005D9E1: mov dword ptr [ebp - 0x20], eax */
    RECOMP_CALL(sub_1002A669); /* 0x1005D9E4: call 0x1002a669 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x24); /* 0x1005D9E9: lea eax, [ebp - 0x24] */
L_1005D9EC:
    PUSH32(esp, eax); /* 0x1005D9EC: push eax */
    ecx = ebp + (-0x1C); /* 0x1005D9ED: lea ecx, [ebp - 0x1c] */
    RECOMP_CALL(sub_10022BFB); /* 0x1005D9F0: call 0x10022bfb */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_10023065; /* 0x1005D9F5: jmp 0x10023065 */
L_1005D9FA:
    eax = MEM32(ebp + (-0x38)); /* 0x1005D9FA: mov eax, dword ptr [ebp - 0x38] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) & 0; /* 0x1005D9FD: and dword ptr [ebp - 0x1c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFF0000u);
    eax = eax & 0xFFFF0000u; /* 0x1005DA01: and eax, 0xffff0000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1005DA06: inc esi */
    _flag_k = FK_INC;
    MEM32(0x100E02F0) = esi; /* 0x1005DA07: mov dword ptr [0x100e02f0], esi */
    RECOMP_BACKEDGE();
    goto L_10023062; /* 0x1005DA0D: jmp 0x10023062 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100230A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100230A0u);

L_100230A0:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_10023107; /* 0x100230A0: je 0x10023107 */
L_100230A2:
    void_lift_trap(0x100230A2u, "insd dword ptr es:[edi], dx");
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) goto L_10023111; /* 0x100230A3: jo 0x10023111 */
L_100230A5:
    POPAD(); /* 0x100230A5: popal  */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_1002310D; /* 0x100230A6: je 0x1002310d */
L_100230A8:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x61726170u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x61726170u; /* 0x100230A8: sub eax, 0x61726170 */
    _flag_k = FK_CMP;
    void_lift_trap(0x100230ADu, "insd dword ptr es:[edi], dx");
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10023116; /* 0x100230AE: je 0x10023116 */
L_100230B1:
    if (/* sub result */ CMP_B(_flag_a, _flag_b)) goto L_100230E0; /* 0x100230B1: jb 0x100230e0 */
L_100230B3:
    _flag_a = (uint32_t)(MEM8(edi + 0x65)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi + 0x65) = (uint8_t)(MEM8(edi + 0x65) + HI8(eax)); /* 0x100230B3: add byte ptr [edi + 0x65], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* outsb: no port I/O under Win32 */ /* 0x100230B6: outsb dx, byte ptr [esi] */
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_B)) goto L_10023123; /* 0x100230B7: jb 0x10023123 */
L_100230BA:
    void_lift_trap(0x100230BAu, "arpl word ptr [0x65707974], bp");
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xEC8B5500u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0xEC8B5500u; /* 0x100230C0: sub eax, 0xec8b5500 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x100230C5: push esi */
    esi = ecx; /* 0x100230C6: mov esi, ecx */
    /* cmp MEM32(esi), 9 */ /* 0x100230C8: cmp dword ptr [esi], 9 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10023101; /* 0x100230CB: je 0x10023101 */
L_100230CD:
    PUSH32(esp, edi); /* 0x100230CD: push edi */
    edi = MEM32(ebp + 0x8); /* 0x100230CE: mov edi, dword ptr [ebp + 8] */
    /* cmp MEM32(edi), 0 */ /* 0x100230D1: cmp dword ptr [edi], 0 */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10023100; /* 0x100230D4: je 0x10023100 */
L_100230D6:
    PUSH32(esp, 0); /* 0x100230D6: push 0 */
    PUSH32(esp, 8); /* 0x100230D8: push 8 */
    ecx = 0x100E030Cu; /* 0x100230DA: mov ecx, 0x100e030c */
    RECOMP_CALL(sub_10022CB8); /* 0x100230DF: call 0x10022cb8 */
    RECOMP_FLAGS_IN();
    goto L_100230E4; /* falls through past a gap */
L_100230E0:
    void_lift_trap(0x100230E0u, "aam 0xfb");
    RECOMP_ITAIL(0x100230E2u); { RECOMP_REGS_OUT(); return; } /* falls through past a gap */
L_100230E4:
    edx = eax; /* 0x100230E4: mov edx, eax */
    /* test edx, edx */ /* 0x100230E6: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10023108; /* 0x100230E8: je 0x10023108 */
L_100230EA:
    ecx = MEM32(edi); /* 0x100230EA: mov ecx, dword ptr [edi] */
    MEM32(edx) = ecx; /* 0x100230EC: mov dword ptr [edx], ecx */
    ecx = MEM32(edi + 0x4); /* 0x100230EE: mov ecx, dword ptr [edi + 4] */
    MEM32(edx + 0x4) = ecx; /* 0x100230F1: mov dword ptr [edx + 4], ecx */
L_100230F4:
    /* test edx, edx */ /* 0x100230F4: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10023100; /* 0x100230F6: je 0x10023100 */
L_100230F8:
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(1);
    MEM32(esi) = MEM32(esi) + 1; /* 0x100230F8: inc dword ptr [esi] */
    _flag_k = FK_INC;
    eax = MEM32(esi); /* 0x100230FA: mov eax, dword ptr [esi] */
    MEM32(esi + eax * 4 + 0x4) = edx; /* 0x100230FC: mov dword ptr [esi + eax*4 + 4], edx */
L_10023100:
    edi = POP32_VAL(esp); /* 0x10023100: pop edi */
L_10023101:
    eax = esi; /* 0x10023101: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x10023103: pop esi */
    ebp = POP32_VAL(esp); /* 0x10023104: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x10023105: ret 4 */
L_10023107:
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + HI8(edx)); /* 0x10023107: add byte ptr [ebx], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_10023109; /* falls through past a gap */
L_10023108:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x10023108: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1002310A; /* falls through past a gap */
L_10023109:
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 8 ? (((LO8(ebx)) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : 0u); /* 0x10023109: shr bl, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((LO8(ebx) >> ((LO8(ecx)) & 31))) << 24), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    SET_LO8(ebx, LO8(ebx) >> ((LO8(ecx)) & 31)); /* 0x10023109: shr bl, cl */
    goto L_1002310B; /* falls through past a gap */
L_1002310A:
    RECOMP_BACKEDGE();
    goto L_100230F4; /* 0x1002310A: jmp 0x100230f4 */
L_1002310B:
    RECOMP_ICALL(0x63EEBC65u); /* 0x1002310B: call 0x63eebc65 */ /* not lifted */
    RECOMP_FLAGS_IN();
    goto L_10023110; /* falls through past a gap */
L_1002310D:
    ebp = esp; /* 0x1002310D: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1002310F: push ebx */
L_10023110:
    PUSH32(esp, esi); /* 0x10023110: push esi */
L_10023111:
    esi = ecx; /* 0x10023111: mov esi, ecx */
    PUSH32(esp, edi); /* 0x10023113: push edi */
    edi = MEM32(ebp + 0xC); /* 0x10023114: mov edi, dword ptr [ebp + 0xc] */
    goto L_10023117; /* falls through past a gap */
L_10023116:
    _flag_a = (uint32_t)((LO8(eax) | 0xC7u)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0xC7u)) << 24;
    SET_LO8(eax, LO8(eax) | 0xC7u); /* 0x10023116: or al, 0xc7 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_10023118; /* falls through past a gap */
L_10023117:
    MEM32(esi) = 0x10023168u; /* 0x10023117: mov dword ptr [esi], 0x10023168 */
    goto L_1002311D; /* falls through past a gap */
L_10023118:
    PUSH32(esp, _seg_es); /* 0x10023118: push es */
    PUSH32(esp, 0x85100231u); /* 0x10023119: push 0x85100231 */
    goto L_1002311E; /* falls through past a gap */
L_1002311D:
    /* test edi, edi */ /* 0x1002311D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1002311F; /* falls through past a gap */
L_1002311E:
    PUSH32(esp, MEM32(eax + edi + (-0x75))); /* 0x1002311E: push dword ptr [eax + edi - 0x75] */
    goto L_10023122; /* falls through past a gap */
L_1002311F:
    if (TEST_Z(_flag_a, _flag_b)) goto L_10023159; /* 0x1002311F: je 0x10023159 */
L_10023121:
    ebx = MEM32(ebp + 0x8); /* 0x10023121: mov ebx, dword ptr [ebp + 8] */
    goto L_10023124; /* falls through past a gap */
L_10023122:
    ebp = POP32_VAL(esp); /* 0x10023122: pop ebp */
L_10023123:
    _flag_a = (uint32_t)((MEM8(ebp + 0x6A3174DB) | LO8(eax))) << 24; _flag_b = (uint32_t)((MEM8(ebp + 0x6A3174DB) | LO8(eax))) << 24;
    MEM8(ebp + 0x6A3174DB) = (uint8_t)(MEM8(ebp + 0x6A3174DB) | LO8(eax)); /* 0x10023123: or byte ptr [ebp + 0x6a3174db], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_10023129; /* falls through past a gap */
L_10023124:
    /* test ebx, ebx */ /* 0x10023124: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10023159; /* 0x10023126: je 0x10023159 */
L_10023128:
    PUSH32(esp, 0); /* 0x10023128: push 0 */
    goto L_1002312A; /* falls through past a gap */
L_10023129:
    _flag_a = (uint32_t)(MEM8(edi + (-0x47))) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi + (-0x47)) = (uint8_t)(MEM8(edi + (-0x47)) + LO8(edx)); /* 0x10023129: add byte ptr [edi - 0x47], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_1002312C; /* falls through past a gap */
L_1002312A:
    PUSH32(esp, edi); /* 0x1002312A: push edi */
    ecx = 0x100E030Cu; /* 0x1002312B: mov ecx, 0x100e030c */
    goto L_10023130; /* falls through past a gap */
L_1002312C:
    _flag_a = (uint32_t)((LO8(eax) | 3)) << 24; _flag_b = (uint32_t)((LO8(eax) | 3)) << 24;
    SET_LO8(eax, LO8(eax) | 3); /* 0x1002312C: or al, 3 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, _seg_cs); /* 0x1002312E: push cs */
    { uint32_t _aa = LO8(eax), _ab = HI8(ecx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1002312F: adc al, ch */
      SET_LO8(eax, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_10023131; /* falls through past a gap */
L_10023130:
    RECOMP_CALL(sub_10022CB8); /* 0x10023130: call 0x10022cb8 */
    RECOMP_FLAGS_IN();
    goto L_10023135; /* falls through past a gap */
L_10023131:
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x10023131: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM32(ebx + 0x87E89C8)); _flag_b = (uint32_t)(1);
    MEM32(ebx + 0x87E89C8) = MEM32(ebx + 0x87E89C8) - 1; /* 0x10023134: dec dword ptr [ebx + 0x87e89c8] */
    _flag_k = FK_DEC;
    goto L_1002313A; /* falls through past a gap */
L_10023135:
    ecx = eax; /* 0x10023135: mov ecx, eax */
    MEM32(esi + 0x8) = edi; /* 0x10023137: mov dword ptr [esi + 8], edi */
L_1002313A:
    MEM32(esi + 0x4) = ecx; /* 0x1002313A: mov dword ptr [esi + 4], ecx */
    /* test ecx, ecx */ /* 0x1002313D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002315D; /* 0x1002313F: je 0x1002315d */
L_10023141:
    /* test edi, edi */ /* 0x10023141: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10023150; /* 0x10023143: je 0x10023150 */
L_10023145:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - ecx; /* 0x10023145: sub ebx, ecx */
    _flag_k = FK_CMP;
L_10023147:
    SET_LO8(eax, MEM8(ebx + ecx)); /* 0x10023147: mov al, byte ptr [ebx + ecx] */
    MEM8(ecx) = (uint8_t)(LO8(eax)); /* 0x1002314A: mov byte ptr [ecx], al */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1002314C: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1002314D: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_10023147; /* 0x1002314E: jne 0x10023147 */
L_10023150:
    edi = POP32_VAL(esp); /* 0x10023150: pop edi */
    eax = esi; /* 0x10023151: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x10023153: pop esi */
    ebx = POP32_VAL(esp); /* 0x10023154: pop ebx */
    ebp = POP32_VAL(esp); /* 0x10023155: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x10023156: ret 8 */
L_10023159:
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0; /* 0x10023159: and dword ptr [esi + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1002315D:
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x8) = MEM32(esi + 0x8) & 0; /* 0x1002315D: and dword ptr [esi + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10023150; /* 0x10023161: jmp 0x10023150 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100230B4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100230B4u);

L_100230B4:
    /* outsb: no port I/O under Win32 */ /* 0x100230B4: outsb dx, byte ptr gs:[si] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_B, _cf)) goto L_10023123; /* 0x100230B7: jb 0x10023123 */
L_100230BA:
    void_lift_trap(0x100230BAu, "arpl word ptr [0x65707974], bp");
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xEC8B5500u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0xEC8B5500u; /* 0x100230C0: sub eax, 0xec8b5500 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x100230C5: push esi */
    esi = ecx; /* 0x100230C6: mov esi, ecx */
    /* cmp MEM32(esi), 9 */ /* 0x100230C8: cmp dword ptr [esi], 9 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10023101; /* 0x100230CB: je 0x10023101 */
L_100230CD:
    PUSH32(esp, edi); /* 0x100230CD: push edi */
    edi = MEM32(ebp + 0x8); /* 0x100230CE: mov edi, dword ptr [ebp + 8] */
    /* cmp MEM32(edi), 0 */ /* 0x100230D1: cmp dword ptr [edi], 0 */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10023100; /* 0x100230D4: je 0x10023100 */
L_100230D6:
    PUSH32(esp, 0); /* 0x100230D6: push 0 */
    PUSH32(esp, 8); /* 0x100230D8: push 8 */
    ecx = 0x100E030Cu; /* 0x100230DA: mov ecx, 0x100e030c */
    RECOMP_CALL(sub_10022CB8); /* 0x100230DF: call 0x10022cb8 */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x100230E4: mov edx, eax */
    /* test edx, edx */ /* 0x100230E6: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10023108; /* 0x100230E8: je 0x10023108 */
L_100230EA:
    ecx = MEM32(edi); /* 0x100230EA: mov ecx, dword ptr [edi] */
    MEM32(edx) = ecx; /* 0x100230EC: mov dword ptr [edx], ecx */
    ecx = MEM32(edi + 0x4); /* 0x100230EE: mov ecx, dword ptr [edi + 4] */
    MEM32(edx + 0x4) = ecx; /* 0x100230F1: mov dword ptr [edx + 4], ecx */
L_100230F4:
    /* test edx, edx */ /* 0x100230F4: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10023100; /* 0x100230F6: je 0x10023100 */
L_100230F8:
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(1);
    MEM32(esi) = MEM32(esi) + 1; /* 0x100230F8: inc dword ptr [esi] */
    _flag_k = FK_INC;
    eax = MEM32(esi); /* 0x100230FA: mov eax, dword ptr [esi] */
    MEM32(esi + eax * 4 + 0x4) = edx; /* 0x100230FC: mov dword ptr [esi + eax*4 + 4], edx */
L_10023100:
    edi = POP32_VAL(esp); /* 0x10023100: pop edi */
L_10023101:
    eax = esi; /* 0x10023101: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x10023103: pop esi */
    ebp = POP32_VAL(esp); /* 0x10023104: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x10023105: ret 4 */
L_10023108:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x10023108: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_100230F4; /* 0x1002310A: jmp 0x100230f4 */
L_10023123:
    _flag_a = (uint32_t)((MEM8(ebp + 0x6A3174DB) | LO8(eax))) << 24; _flag_b = (uint32_t)((MEM8(ebp + 0x6A3174DB) | LO8(eax))) << 24;
    MEM8(ebp + 0x6A3174DB) = (uint8_t)(MEM8(ebp + 0x6A3174DB) | LO8(eax)); /* 0x10023123: or byte ptr [ebp + 0x6a3174db], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(edi + (-0x47))) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi + (-0x47)) = (uint8_t)(MEM8(edi + (-0x47)) + LO8(edx)); /* 0x10023129: add byte ptr [edi - 0x47], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((LO8(eax) | 3)) << 24; _flag_b = (uint32_t)((LO8(eax) | 3)) << 24;
    SET_LO8(eax, LO8(eax) | 3); /* 0x1002312C: or al, 3 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, _seg_cs); /* 0x1002312E: push cs */
    { uint32_t _aa = LO8(eax), _ab = HI8(ecx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1002312F: adc al, ch */
      SET_LO8(eax, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x10023131: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM32(ebx + 0x87E89C8)); _flag_b = (uint32_t)(1);
    MEM32(ebx + 0x87E89C8) = MEM32(ebx + 0x87E89C8) - 1; /* 0x10023134: dec dword ptr [ebx + 0x87e89c8] */
    _flag_k = FK_DEC;
    MEM32(esi + 0x4) = ecx; /* 0x1002313A: mov dword ptr [esi + 4], ecx */
    /* test ecx, ecx */ /* 0x1002313D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002315D; /* 0x1002313F: je 0x1002315d */
L_10023141:
    /* test edi, edi */ /* 0x10023141: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10023150; /* 0x10023143: je 0x10023150 */
L_10023145:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - ecx; /* 0x10023145: sub ebx, ecx */
    _flag_k = FK_CMP;
L_10023147:
    SET_LO8(eax, MEM8(ebx + ecx)); /* 0x10023147: mov al, byte ptr [ebx + ecx] */
    MEM8(ecx) = (uint8_t)(LO8(eax)); /* 0x1002314A: mov byte ptr [ecx], al */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1002314C: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1002314D: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_10023147; /* 0x1002314E: jne 0x10023147 */
L_10023150:
    edi = POP32_VAL(esp); /* 0x10023150: pop edi */
    eax = esi; /* 0x10023151: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x10023153: pop esi */
    ebx = POP32_VAL(esp); /* 0x10023154: pop ebx */
    ebp = POP32_VAL(esp); /* 0x10023155: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x10023156: ret 8 */
L_1002315D:
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x8) = MEM32(esi + 0x8) & 0; /* 0x1002315D: and dword ptr [esi + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10023150; /* 0x10023161: jmp 0x10023150 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100230C2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100230C2u);

L_100230C2:
    PUSH32(esp, ebp); /* 0x100230C2: push ebp */
    ebp = esp; /* 0x100230C3: mov ebp, esp */
    PUSH32(esp, esi); /* 0x100230C5: push esi */
    esi = ecx; /* 0x100230C6: mov esi, ecx */
    /* cmp MEM32(esi), 9 */ /* 0x100230C8: cmp dword ptr [esi], 9 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10023101; /* 0x100230CB: je 0x10023101 */
L_100230CD:
    PUSH32(esp, edi); /* 0x100230CD: push edi */
    edi = MEM32(ebp + 0x8); /* 0x100230CE: mov edi, dword ptr [ebp + 8] */
    /* cmp MEM32(edi), 0 */ /* 0x100230D1: cmp dword ptr [edi], 0 */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10023100; /* 0x100230D4: je 0x10023100 */
L_100230D6:
    PUSH32(esp, 0); /* 0x100230D6: push 0 */
    PUSH32(esp, 8); /* 0x100230D8: push 8 */
    ecx = 0x100E030Cu; /* 0x100230DA: mov ecx, 0x100e030c */
    RECOMP_CALL(sub_10022CB8); /* 0x100230DF: call 0x10022cb8 */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x100230E4: mov edx, eax */
    /* test edx, edx */ /* 0x100230E6: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10023108; /* 0x100230E8: je 0x10023108 */
L_100230EA:
    ecx = MEM32(edi); /* 0x100230EA: mov ecx, dword ptr [edi] */
    MEM32(edx) = ecx; /* 0x100230EC: mov dword ptr [edx], ecx */
    ecx = MEM32(edi + 0x4); /* 0x100230EE: mov ecx, dword ptr [edi + 4] */
    MEM32(edx + 0x4) = ecx; /* 0x100230F1: mov dword ptr [edx + 4], ecx */
L_100230F4:
    /* test edx, edx */ /* 0x100230F4: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10023100; /* 0x100230F6: je 0x10023100 */
L_100230F8:
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(1);
    MEM32(esi) = MEM32(esi) + 1; /* 0x100230F8: inc dword ptr [esi] */
    _flag_k = FK_INC;
    eax = MEM32(esi); /* 0x100230FA: mov eax, dword ptr [esi] */
    MEM32(esi + eax * 4 + 0x4) = edx; /* 0x100230FC: mov dword ptr [esi + eax*4 + 4], edx */
L_10023100:
    edi = POP32_VAL(esp); /* 0x10023100: pop edi */
L_10023101:
    eax = esi; /* 0x10023101: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x10023103: pop esi */
    ebp = POP32_VAL(esp); /* 0x10023104: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x10023105: ret 4 */
L_10023108:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x10023108: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_100230F4; /* 0x1002310A: jmp 0x100230f4 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1002310C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002310Cu);

L_1002310C:
    PUSH32(esp, ebp); /* 0x1002310C: push ebp */
    ebp = esp; /* 0x1002310D: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1002310F: push ebx */
    PUSH32(esp, esi); /* 0x10023110: push esi */
    esi = ecx; /* 0x10023111: mov esi, ecx */
    PUSH32(esp, edi); /* 0x10023113: push edi */
    edi = MEM32(ebp + 0xC); /* 0x10023114: mov edi, dword ptr [ebp + 0xc] */
    MEM32(esi) = 0x10023168u; /* 0x10023117: mov dword ptr [esi], 0x10023168 */
    /* test edi, edi */ /* 0x1002311D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10023159; /* 0x1002311F: je 0x10023159 */
L_10023121:
    ebx = MEM32(ebp + 0x8); /* 0x10023121: mov ebx, dword ptr [ebp + 8] */
    /* test ebx, ebx */ /* 0x10023124: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10023159; /* 0x10023126: je 0x10023159 */
L_10023128:
    PUSH32(esp, 0); /* 0x10023128: push 0 */
    PUSH32(esp, edi); /* 0x1002312A: push edi */
    ecx = 0x100E030Cu; /* 0x1002312B: mov ecx, 0x100e030c */
    RECOMP_CALL(sub_10022CB8); /* 0x10023130: call 0x10022cb8 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x10023135: mov ecx, eax */
    MEM32(esi + 0x8) = edi; /* 0x10023137: mov dword ptr [esi + 8], edi */
    MEM32(esi + 0x4) = ecx; /* 0x1002313A: mov dword ptr [esi + 4], ecx */
    /* test ecx, ecx */ /* 0x1002313D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002315D; /* 0x1002313F: je 0x1002315d */
L_10023141:
    /* test edi, edi */ /* 0x10023141: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10023150; /* 0x10023143: je 0x10023150 */
L_10023145:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - ecx; /* 0x10023145: sub ebx, ecx */
    _flag_k = FK_CMP;
L_10023147:
    SET_LO8(eax, MEM8(ebx + ecx)); /* 0x10023147: mov al, byte ptr [ebx + ecx] */
    MEM8(ecx) = (uint8_t)(LO8(eax)); /* 0x1002314A: mov byte ptr [ecx], al */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1002314C: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1002314D: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_10023147; /* 0x1002314E: jne 0x10023147 */
L_10023150:
    edi = POP32_VAL(esp); /* 0x10023150: pop edi */
    eax = esi; /* 0x10023151: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x10023153: pop esi */
    ebx = POP32_VAL(esp); /* 0x10023154: pop ebx */
    ebp = POP32_VAL(esp); /* 0x10023155: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x10023156: ret 8 */
L_10023159:
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0; /* 0x10023159: and dword ptr [esi + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1002315D:
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x8) = MEM32(esi + 0x8) & 0; /* 0x1002315D: and dword ptr [esi + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10023150; /* 0x10023161: jmp 0x10023150 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10023168(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10023168u);

L_10023168:
    void_lift_trap(0x10023168u, "mov gs, word ptr [edi]");
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + MEM8(eax)); /* 0x1002316A: add dl, byte ptr [eax] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _sa = MEM8(ebx), _sb = LO8(eax), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1002316C: sbb byte ptr [ebx], al */
      MEM8(ebx) = (uint8_t)(_sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(eax); /* 0x1002316E: add edx, dword ptr [eax] */
    _flag_k = FK_ADD;
    void_lift_trap(0x10023170u, "iretd ");
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8B551002u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x8B551002u; /* 0x10023171: sub eax, 0x8b551002 */
    _flag_k = FK_CMP;
    /* in: no port I/O under Win32 */ /* 0x10023176: in al, dx */
    PUSH32(esp, esi); /* 0x10023177: push esi */
    esi = ecx; /* 0x10023178: mov esi, ecx */
    PUSH32(esp, edi); /* 0x1002317A: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1002317B: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi), edi */ /* 0x1002317D: cmp dword ptr [esi], edi */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005C088; /* 0x1002317F: jne 0x1005c088 */
L_10023185:
    PUSH32(esp, ebx); /* 0x10023185: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x10023186: mov ebx, dword ptr [ebp + 8] */
    /* test ebx, ebx */ /* 0x10023189: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002A4E5; /* 0x1002318B: je 0x1002a4e5 */
L_10023191:
    /* cmp MEM32(ebp + 0xC), edi */ /* 0x10023191: cmp dword ptr [ebp + 0xc], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002A4E5; /* 0x10023194: je 0x1002a4e5 */
L_1002319A:
    eax = MEM32(ebp + 0xC); /* 0x1002319A: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x1002319D: sub eax, edi */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1002A4DC; /* 0x1002319F: je 0x1002a4dc */
L_100231A5:
    ecx = 0x100E030Cu; /* 0x100231A5: mov ecx, 0x100e030c */
    PUSH32(esp, edi); /* 0x100231AA: push edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100231AB: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1002A4B9; /* 0x100231AC: je 0x1002a4b9 */
L_100231B2:
    PUSH32(esp, 0xCu); /* 0x100231B2: push 0xc */
    RECOMP_CALL(sub_10022CB8); /* 0x100231B4: call 0x10022cb8 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100231B9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100231CA; /* 0x100231BB: je 0x100231ca */
L_100231BD:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100231BD: push dword ptr [ebp + 0xc] */
    ecx = eax; /* 0x100231C0: mov ecx, eax */
    PUSH32(esp, ebx); /* 0x100231C2: push ebx */
    RECOMP_CALL(sub_1002310C); /* 0x100231C3: call 0x1002310c */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x100231C8: mov edi, eax */
L_100231CA:
    MEM32(esi) = edi; /* 0x100231CA: mov dword ptr [esi], edi */
    /* test edi, edi */ /* 0x100231CC: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
L_100231CE:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_1002A4DC; /* 0x100231CE: je 0x1002a4dc */
L_100231D4:
    ebx = POP32_VAL(esp); /* 0x100231D4: pop ebx */
L_100231D5:
    edi = POP32_VAL(esp); /* 0x100231D5: pop edi */
    esi = POP32_VAL(esp); /* 0x100231D6: pop esi */
    ebp = POP32_VAL(esp); /* 0x100231D7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x100231D8: ret 8 */
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
L_1002A4E5:
    MEM8(esi + 0x4) = (uint8_t)(2); /* 0x1002A4E5: mov byte ptr [esi + 4], 2 */
    RECOMP_BACKEDGE();
    goto L_100231D4; /* 0x1002A4E9: jmp 0x100231d4 */
L_1005C088:
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0xFFFF00FFu);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0xFFFF00FFu; /* 0x1005C088: and dword ptr [esi + 4], 0xffff00ff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(esi + 0x4) = (uint8_t)(3); /* 0x1005C08F: mov byte ptr [esi + 4], 3 */
    MEM32(esi) = edi; /* 0x1005C093: mov dword ptr [esi], edi */
    RECOMP_BACKEDGE();
    goto L_100231D5; /* 0x1005C095: jmp 0x100231d5 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10023174(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10023174u);

L_10023174:
    PUSH32(esp, ebp); /* 0x10023174: push ebp */
    ebp = esp; /* 0x10023175: mov ebp, esp */
    PUSH32(esp, esi); /* 0x10023177: push esi */
    esi = ecx; /* 0x10023178: mov esi, ecx */
    PUSH32(esp, edi); /* 0x1002317A: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1002317B: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi), edi */ /* 0x1002317D: cmp dword ptr [esi], edi */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005C088; /* 0x1002317F: jne 0x1005c088 */
L_10023185:
    PUSH32(esp, ebx); /* 0x10023185: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x10023186: mov ebx, dword ptr [ebp + 8] */
    /* test ebx, ebx */ /* 0x10023189: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002A4E5; /* 0x1002318B: je 0x1002a4e5 */
L_10023191:
    /* cmp MEM32(ebp + 0xC), edi */ /* 0x10023191: cmp dword ptr [ebp + 0xc], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002A4E5; /* 0x10023194: je 0x1002a4e5 */
L_1002319A:
    eax = MEM32(ebp + 0xC); /* 0x1002319A: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x1002319D: sub eax, edi */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1002A4DC; /* 0x1002319F: je 0x1002a4dc */
L_100231A5:
    ecx = 0x100E030Cu; /* 0x100231A5: mov ecx, 0x100e030c */
    PUSH32(esp, edi); /* 0x100231AA: push edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100231AB: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1002A4B9; /* 0x100231AC: je 0x1002a4b9 */
L_100231B2:
    PUSH32(esp, 0xCu); /* 0x100231B2: push 0xc */
    RECOMP_CALL(sub_10022CB8); /* 0x100231B4: call 0x10022cb8 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100231B9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100231CA; /* 0x100231BB: je 0x100231ca */
L_100231BD:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100231BD: push dword ptr [ebp + 0xc] */
    ecx = eax; /* 0x100231C0: mov ecx, eax */
    PUSH32(esp, ebx); /* 0x100231C2: push ebx */
    RECOMP_CALL(sub_1002310C); /* 0x100231C3: call 0x1002310c */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x100231C8: mov edi, eax */
L_100231CA:
    MEM32(esi) = edi; /* 0x100231CA: mov dword ptr [esi], edi */
    /* test edi, edi */ /* 0x100231CC: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
L_100231CE:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_1002A4DC; /* 0x100231CE: je 0x1002a4dc */
L_100231D4:
    ebx = POP32_VAL(esp); /* 0x100231D4: pop ebx */
L_100231D5:
    edi = POP32_VAL(esp); /* 0x100231D5: pop edi */
    esi = POP32_VAL(esp); /* 0x100231D6: pop esi */
    ebp = POP32_VAL(esp); /* 0x100231D7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x100231D8: ret 8 */
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
L_1002A4E5:
    MEM8(esi + 0x4) = (uint8_t)(2); /* 0x1002A4E5: mov byte ptr [esi + 4], 2 */
    RECOMP_BACKEDGE();
    goto L_100231D4; /* 0x1002A4E9: jmp 0x100231d4 */
L_1005C088:
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0xFFFF00FFu);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0xFFFF00FFu; /* 0x1005C088: and dword ptr [esi + 4], 0xffff00ff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(esi + 0x4) = (uint8_t)(3); /* 0x1005C08F: mov byte ptr [esi + 4], 3 */
    MEM32(esi) = edi; /* 0x1005C093: mov dword ptr [esi], edi */
    RECOMP_BACKEDGE();
    goto L_100231D5; /* 0x1005C095: jmp 0x100231d5 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100231D5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100231D5u);

L_100231D5:
    edi = POP32_VAL(esp); /* 0x100231D5: pop edi */
    esi = POP32_VAL(esp); /* 0x100231D6: pop esi */
    ebp = POP32_VAL(esp); /* 0x100231D7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x100231D8: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_100231DB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100231DBu);

L_100231DB:
    PUSH32(esp, ebp); /* 0x100231DB: push ebp */
    ebp = esp; /* 0x100231DC: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x100231DE: push ebx */
    PUSH32(esp, esi); /* 0x100231DF: push esi */
    esi = ecx; /* 0x100231E0: mov esi, ecx */
    PUSH32(esp, edi); /* 0x100231E2: push edi */
    edi = MEM32(ebp + 0x8); /* 0x100231E3: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x100231E6: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(esi + 0x4) = (uint8_t)(0); /* 0x100231E9: mov byte ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0xFFFF00FFu);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0xFFFF00FFu; /* 0x100231ED: and dword ptr [esi + 4], 0xffff00ff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(edi); /* 0x100231F4: mov ecx, dword ptr [edi] */
    /* test ecx, ecx */ /* 0x100231F6: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002347D; /* 0x100231F8: je 0x1002347d */
L_100231FE:
    /* cmp MEM8(ecx), 0 */ /* 0x100231FE: cmp byte ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10023474; /* 0x10023201: je 0x10023474 */
L_10023207:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x10023207: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
L_10023209:
    ebx = MEM32(edi); /* 0x10023209: mov ebx, dword ptr [edi] */
    SET_LO8(eax, MEM8(ebx)); /* 0x1002320B: mov al, byte ptr [ebx] */
    /* cmp LO8(eax), MEM8(ebp + 0xC) */ /* 0x1002320D: cmp al, byte ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(ebp + 0xC)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10023241; /* 0x10023210: je 0x10023241 */
L_10023212:
    /* cmp LO8(eax), 0x5Fu */ /* 0x10023212: cmp al, 0x5f */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x5Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10023236; /* 0x10023214: je 0x10023236 */
L_10023216:
    /* cmp LO8(eax), 0x24u */ /* 0x10023216: cmp al, 0x24 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x24u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10023236; /* 0x10023218: je 0x10023236 */
L_1002321A:
    /* cmp LO8(eax), 0x3Cu */ /* 0x1002321A: cmp al, 0x3c */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x3Cu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10023236; /* 0x1002321C: je 0x10023236 */
L_1002321E:
    /* cmp LO8(eax), 0x3Eu */ /* 0x1002321E: cmp al, 0x3e */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x3Eu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10023236; /* 0x10023220: je 0x10023236 */
L_10023222:
    /* cmp LO8(eax), 0x2Du */ /* 0x10023222: cmp al, 0x2d */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x2Du) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10023236; /* 0x10023224: je 0x10023236 */
L_10023226:
    /* cmp LO8(eax), 0x61u */ /* 0x10023226: cmp al, 0x61 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x61u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_L(_flag_a, _flag_b)) goto L_10023449; /* 0x10023228: jl 0x10023449 */
L_1002322E:
    /* cmp LO8(eax), 0x7Au */ /* 0x1002322E: cmp al, 0x7a */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x7Au) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_G(_flag_a, _flag_b)) goto L_10023449; /* 0x10023230: jg 0x10023449 */
L_10023236:
    eax = ebx + 0x1; /* 0x10023236: lea eax, [ebx + 1] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x10023239: inc edx */
    _flag_k = FK_INC;
    MEM32(edi) = eax; /* 0x1002323A: mov dword ptr [edi], eax */
    /* cmp MEM8(eax), 0 */ /* 0x1002323C: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_10023209; /* 0x1002323F: jne 0x10023209 */
L_10023241:
    PUSH32(esp, edx); /* 0x10023241: push edx */
    PUSH32(esp, ecx); /* 0x10023242: push ecx */
    ecx = esi; /* 0x10023243: mov ecx, esi */
    RECOMP_CALL(sub_10023174); /* 0x10023245: call 0x10023174 */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi); /* 0x1002324A: mov eax, dword ptr [edi] */
    SET_LO8(ecx, MEM8(eax)); /* 0x1002324C: mov cl, byte ptr [eax] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x1002324E: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002346A; /* 0x10023250: je 0x1002346a */
L_10023256:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10023256: inc eax */
    _flag_k = FK_INC;
    MEM32(edi) = eax; /* 0x10023257: mov dword ptr [edi], eax */
    /* cmp LO8(ecx), MEM8(ebp + 0xC) */ /* 0x10023259: cmp cl, byte ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(ebp + 0xC)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005B5E1; /* 0x1002325C: jne 0x1005b5e1 */
L_10023262:
    edi = POP32_VAL(esp); /* 0x10023262: pop edi */
    eax = esi; /* 0x10023263: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x10023265: pop esi */
    ebx = POP32_VAL(esp); /* 0x10023266: pop ebx */
    ebp = POP32_VAL(esp); /* 0x10023267: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x10023268: ret 8 */
L_10023449:
    /* cmp LO8(eax), 0x41u */ /* 0x10023449: cmp al, 0x41 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_L(_flag_a, _flag_b)) goto L_10023455; /* 0x1002344B: jl 0x10023455 */
L_1002344D:
    /* cmp LO8(eax), 0x5Au */ /* 0x1002344D: cmp al, 0x5a */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x5Au) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_LE(_flag_a, _flag_b)) goto L_10023236; /* 0x1002344F: jle 0x10023236 */
L_10023455:
    /* cmp LO8(eax), 0x30u */ /* 0x10023455: cmp al, 0x30 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_L(_flag_a, _flag_b)) goto L_1005B5C0; /* 0x10023457: jl 0x1005b5c0 */
L_1002345D:
    /* cmp LO8(eax), 0x39u */ /* 0x1002345D: cmp al, 0x39 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x39u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_LE(_flag_a, _flag_b)) goto L_10023236; /* 0x1002345F: jle 0x10023236 */
L_10023465:
    goto L_1005B5C0; /* 0x10023465: jmp 0x1005b5c0 */
L_1002346A:
    /* cmp MEM8(esi + 0x4), 0 */ /* 0x1002346A: cmp byte ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x4)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_10023262; /* 0x1002346E: jne 0x10023262 */
L_10023474:
    MEM8(esi + 0x4) = (uint8_t)(1); /* 0x10023474: mov byte ptr [esi + 4], 1 */
    RECOMP_BACKEDGE();
    goto L_10023262; /* 0x10023478: jmp 0x10023262 */
L_1002347D:
    MEM8(esi + 0x4) = (uint8_t)(2); /* 0x1002347D: mov byte ptr [esi + 4], 2 */
    RECOMP_BACKEDGE();
    goto L_10023262; /* 0x10023481: jmp 0x10023262 */
L_1005B5C0:
    /* cmp LO8(eax), 0x80u */ /* 0x1005B5C0: cmp al, 0x80 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x80u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_B(_flag_a, _flag_b)) goto L_1005B5CC; /* 0x1005B5C2: jb 0x1005b5cc */
L_1005B5C4:
    /* cmp LO8(eax), 0xFEu */ /* 0x1005B5C4: cmp al, 0xfe */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xFEu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_BE(_flag_a, _flag_b)) goto L_10023236; /* 0x1005B5C6: jbe 0x10023236 */
L_1005B5CC:
    /* test MEM32(0x100E0300), 0x00010000u */ /* 0x1005B5CC: test dword ptr [0x100e0300], 0x10000 */
    _flag_a = (uint32_t)(MEM32(0x100E0300)); _flag_b = (uint32_t)(0x00010000u);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10023236; /* 0x1005B5D6: jne 0x10023236 */
L_1005B5DC:
    RECOMP_BACKEDGE();
    goto L_1002347D; /* 0x1005B5DC: jmp 0x1002347d */
L_1005B5E1:
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x1005B5E1: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(esi + 0x4) = (uint8_t)(3); /* 0x1005B5E4: mov byte ptr [esi + 4], 3 */
    RECOMP_BACKEDGE();
    goto L_10023262; /* 0x1005B5E8: jmp 0x10023262 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1002326B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002326Bu);

L_1002326B:
    PUSH32(esp, ebp); /* 0x1002326B: push ebp */
    ebp = esp; /* 0x1002326C: mov ebp, esp */
    ecx = MEM32(0x100E02F0); /* 0x1002326E: mov ecx, dword ptr [0x100e02f0] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x24u; /* 0x10023274: sub esp, 0x24 */
    _flag_k = FK_CMP;
    SET_LO8(eax, MEM8(ecx)); /* 0x10023277: mov al, byte ptr [ecx] */
    PUSH32(esp, ebx); /* 0x10023279: push ebx */
    PUSH32(esp, esi); /* 0x1002327A: push esi */
    PUSH32(esp, edi); /* 0x1002327B: push edi */
    /* test LO8(eax), LO8(eax) */ /* 0x1002327C: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002A396; /* 0x1002327E: je 0x1002a396 */
L_10023284:
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) & 0; /* 0x10023284: and dword ptr [ebp - 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = 0xFFFF0000u; /* 0x10023288: mov edi, 0xffff0000 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(edi);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & edi; /* 0x1002328D: and dword ptr [ebp - 8], edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x10023290: inc ecx */
    _flag_k = FK_INC;
    esi = (uint32_t)LO8(eax); /* 0x10023291: movzx esi, al */
    _flag_a = (uint32_t)((ebx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ebx | 0xFFFFFFFFu));
    ebx = ebx | 0xFFFFFFFFu; /* 0x10023294: or ebx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esi; /* 0x10023297: mov eax, esi */
    MEM32(0x100E02F0) = ecx; /* 0x10023299: mov dword ptr [0x100e02f0], ecx */
    MEM8(ebp + (-0x1)) = (uint8_t)(0); /* 0x1002329F: mov byte ptr [ebp - 1], 0 */
    /* cmp eax, 0x4Eu */ /* 0x100232A3: cmp eax, 0x4e */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x4Eu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1002A40E; /* 0x100232A6: jle 0x1002a40e */
L_100232AC:
    /* cmp eax, 0x4Fu */ /* 0x100232AC: cmp eax, 0x4f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x4Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10030544; /* 0x100232AF: je 0x10030544 */
L_100232B5:
    if (CMP_LE(_flag_a, _flag_b)) goto L_100232D2; /* 0x100232B5: jle 0x100232d2 */
L_100232B7:
    /* cmp eax, 0x53u */ /* 0x100232B7: cmp eax, 0x53 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x53u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_10030A33; /* 0x100232BA: jle 0x10030a33 */
L_100232C0:
    /* cmp eax, 0x58u */ /* 0x100232C0: cmp eax, 0x58 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x58u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002A352; /* 0x100232C3: je 0x1002a352 */
L_100232C9:
    /* cmp eax, 0x5Fu */ /* 0x100232C9: cmp eax, 0x5f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x5Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1003003E; /* 0x100232CC: je 0x1003003e */
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
L_100232F9:
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
L_1002A260:
    /* cmp eax, 0x46u */ /* 0x1002A260: cmp eax, 0x46 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x46u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1002A2BC; /* 0x1002A263: jge 0x1002a2bc */
L_1002A265:
    /* test eax, eax */ /* 0x1002A265: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002A2A6; /* 0x1002A267: je 0x1002a2a6 */
L_1002A269:
    /* cmp eax, 0x24u */ /* 0x1002A269: cmp eax, 0x24 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002A284; /* 0x1002A26C: je 0x1002a284 */
L_1002A26E:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFBCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFBCu; /* 0x1002A26E: add eax, -0x44 */
    _flag_k = FK_ADD;
    /* cmp eax, 1 */ /* 0x1002A271: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1002A2FF; /* 0x1002A274: ja 0x1002a2ff */
L_1002A27A:
    PUSH32(esp, 0x1002A3D0u); /* 0x1002A27A: push 0x1002a3d0 */
    goto L_1003007C; /* 0x1002A27F: jmp 0x1003007c */
L_1002A284:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1002A284: push dword ptr [ebp + 0xc] */
    eax = ebp + (-0x1C); /* 0x1002A287: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1002A28A: push eax */
    RECOMP_CALL(sub_1002326B); /* 0x1002A28B: call 0x1002326b */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1002A290: push eax */
    PUSH32(esp, 0x1002A3ECu); /* 0x1002A291: push 0x1002a3ec */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1002A296: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10030A83); /* 0x1002A299: call 0x10030a83 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1002A29E: add esp, 0x14 */
    _flag_k = FK_ADD;
    goto L_1002A473; /* 0x1002A2A1: jmp 0x1002a473 */
L_1002A2A6:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1002A2A6: dec ecx */
    _flag_k = FK_DEC;
    MEM32(0x100E02F0) = ecx; /* 0x1002A2A7: mov dword ptr [0x100e02f0], ecx */
    ecx = ebp + (-0xC); /* 0x1002A2AD: lea ecx, [ebp - 0xc] */
    PUSH32(esp, 1); /* 0x1002A2B0: push 1 */
    RECOMP_CALL(sub_10023A53); /* 0x1002A2B2: call 0x10023a53 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_100232F9; /* 0x1002A2B7: jmp 0x100232f9 */
L_1002A2BC:
    PUSH32(esp, 0x1002A3D8u); /* 0x1002A2BC: push 0x1002a3d8 */
    goto L_1003007C; /* 0x1002A2C1: jmp 0x1003007c */
L_1002A2C6:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFA8u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFA8u; /* 0x1002A2C6: add eax, -0x58 */
    _flag_k = FK_ADD;
    /* cmp eax, 1 */ /* 0x1002A2C9: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1002A2FF; /* 0x1002A2CC: ja 0x1002a2ff */
L_1002A2CE:
    eax = ebp + (-0x14); /* 0x1002A2CE: lea eax, [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1002A2D1: dec ecx */
    _flag_k = FK_DEC;
    PUSH32(esp, eax); /* 0x1002A2D2: push eax */
    MEM32(0x100E02F0) = ecx; /* 0x1002A2D3: mov dword ptr [0x100e02f0], ecx */
    RECOMP_CALL(sub_1002367E); /* 0x1002A2D9: call 0x1002367e */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1002A2DE: pop ecx */
    ecx = MEM32(eax); /* 0x1002A2DF: mov ecx, dword ptr [eax] */
    edx = MEM32(eax + 0x4); /* 0x1002A2E1: mov edx, dword ptr [eax + 4] */
    MEM32(ebp + (-0xC)) = ecx; /* 0x1002A2E4: mov dword ptr [ebp - 0xc], ecx */
    MEM32(ebp + (-0x8)) = edx; /* 0x1002A2E7: mov dword ptr [ebp - 8], edx */
    /* test ecx, ecx */ /* 0x1002A2EA: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100232F9; /* 0x1002A2EC: jne 0x100232f9 */
L_1002A2F2:
    eax = MEM32(ebp + 0x8); /* 0x1002A2F2: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = ecx; /* 0x1002A2F5: mov dword ptr [eax], ecx */
    MEM32(eax + 0x4) = edx; /* 0x1002A2F7: mov dword ptr [eax + 4], edx */
    RECOMP_BACKEDGE();
    goto L_10023348; /* 0x1002A2FA: jmp 0x10023348 */
L_1002A2FF:
    PUSH32(esp, 0x1002A3F4u); /* 0x1002A2FF: push 0x1002a3f4 */
    goto L_1003007C; /* 0x1002A304: jmp 0x1003007c */
L_1002A309:
    PUSH32(esp, 0x1002A3E0u); /* 0x1002A309: push 0x1002a3e0 */
    goto L_1003007C; /* 0x1002A30E: jmp 0x1003007c */
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
L_1002A352:
    PUSH32(esp, 0x1002A664u); /* 0x1002A352: push 0x1002a664 */
    goto L_1002A4A5; /* 0x1002A357: jmp 0x1002a4a5 */
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
L_1002A396:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1002A396: push dword ptr [ebp + 0xc] */
    PUSH32(esp, 1); /* 0x1002A399: push 1 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1002A39B: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1009EC0E); /* 0x1002A39E: call 0x1009ec0e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1002A3A3: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_1002A473; /* 0x1002A3A6: jmp 0x1002a473 */
L_1002A40E:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_1002A486; /* 0x1002A40E: jne 0x1002a486 */
L_1002A410:
    PUSH32(esp, 0x1002A47Cu); /* 0x1002A410: push 0x1002a47c */
    ecx = ebp + (-0xC); /* 0x1002A415: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_1002A669); /* 0x1002A418: call 0x1002a669 */
    RECOMP_FLAGS_IN();
L_1002A41D:
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
L_1002A473:
    eax = MEM32(ebp + 0x8); /* 0x1002A473: mov eax, dword ptr [ebp + 8] */
    RECOMP_BACKEDGE();
    goto L_10023348; /* 0x1002A476: jmp 0x10023348 */
L_1002A486:
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
L_1003003E:
    SET_LO8(ebx, MEM8(ecx)); /* 0x1003003E: mov bl, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x10030040: inc ecx */
    _flag_k = FK_INC;
    eax = (uint32_t)LO8(ebx); /* 0x10030041: movzx eax, bl */
    MEM32(0x100E02F0) = ecx; /* 0x10030044: mov dword ptr [0x100e02f0], ecx */
    /* cmp eax, 0x4Du */ /* 0x1003004A: cmp eax, 0x4d */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x4Du);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_10030481; /* 0x1003004D: jle 0x10030481 */
L_10030053:
    /* cmp eax, 0x4Eu */ /* 0x10030053: cmp eax, 0x4e */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x4Eu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10030471; /* 0x10030056: je 0x10030471 */
L_1003005C:
    /* cmp eax, 0x4Fu */ /* 0x1003005C: cmp eax, 0x4f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x4Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10030520; /* 0x1003005F: je 0x10030520 */
L_10030065:
    /* cmp eax, 0x52u */ /* 0x10030065: cmp eax, 0x52 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x52u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002A309; /* 0x10030068: je 0x1002a309 */
L_1003006E:
    /* cmp eax, 0x57u */ /* 0x1003006E: cmp eax, 0x57 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x57u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1002A2C6; /* 0x10030071: jne 0x1002a2c6 */
L_10030077:
    PUSH32(esp, 0x1003008Cu); /* 0x10030077: push 0x1003008c */
L_1003007C:
    ecx = ebp + (-0xC); /* 0x1003007C: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_10022C2C); /* 0x1003007F: call 0x10022c2c */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_100232F9; /* 0x10030084: jmp 0x100232f9 */
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
L_10030471:
    PUSH32(esp, 0x1003047Cu); /* 0x10030471: push 0x1003047c */
    RECOMP_BACKEDGE();
    goto L_1003007C; /* 0x10030476: jmp 0x1003007c */
L_10030481:
    /* cmp eax, 0x4Cu */ /* 0x10030481: cmp eax, 0x4c */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x4Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_10030516; /* 0x10030484: jge 0x10030516 */
L_1003048A:
    /* cmp eax, 0x47u */ /* 0x1003048A: cmp eax, 0x47 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x47u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_LE(_flag_a, _flag_b)) goto L_1002A260; /* 0x1003048D: jle 0x1002a260 */
L_10030493:
    /* cmp eax, 0x49u */ /* 0x10030493: cmp eax, 0x49 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x49u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1003050C; /* 0x10030496: jle 0x1003050c */
L_10030498:
    /* cmp eax, 0x4Bu */ /* 0x10030498: cmp eax, 0x4b */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x4Bu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_G(_flag_a, _flag_b)) goto L_1002A2FF; /* 0x1003049B: jg 0x1002a2ff */
L_100304A1:
    PUSH32(esp, 0x100304ACu); /* 0x100304A1: push 0x100304ac */
    RECOMP_BACKEDGE();
    goto L_1003007C; /* 0x100304A6: jmp 0x1003007c */
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
L_1003050C:
    PUSH32(esp, 0x10030528u); /* 0x1003050C: push 0x10030528 */
    RECOMP_BACKEDGE();
    goto L_1003007C; /* 0x10030511: jmp 0x1003007c */
L_10030516:
    PUSH32(esp, 0x10030530u); /* 0x10030516: push 0x10030530 */
    RECOMP_BACKEDGE();
    goto L_1003007C; /* 0x1003051B: jmp 0x1003007c */
L_10030520:
    PUSH32(esp, 0xFFFFFFFEu); /* 0x10030520: push -2 */
    ebx = POP32_VAL(esp); /* 0x10030522: pop ebx */
    RECOMP_BACKEDGE();
    goto L_1002A426; /* 0x10030523: jmp 0x1002a426 */
L_10030544:
    PUSH32(esp, 0x10030558u); /* 0x10030544: push 0x10030558 */
    ecx = ebp + (-0xC); /* 0x10030549: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_10022C2C); /* 0x1003054C: call 0x10022c2c */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1002A410; /* 0x10030551: jmp 0x1002a410 */
L_10030A33:
    ebx = esi; /* 0x10030A33: mov ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(3);
    ebx = ebx & 3; /* 0x10030A35: and ebx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1002A41D; /* 0x10030A38: jmp 0x1002a41d */
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

void sub_1002334F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002334Fu);

L_1002334F:
    PUSH32(esp, ebp); /* 0x1002334F: push ebp */
    ebp = esp; /* 0x10023350: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x10023352: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = MEM32(0x100E02F0); /* 0x10023355: mov ecx, dword ptr [0x100e02f0] */
    edx = 0xFFFF0000u; /* 0x1002335B: mov edx, 0xffff0000 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(edx);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & edx; /* 0x10023360: and dword ptr [ebp - 4], edx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x10023363: push esi */
    PUSH32(esp, edi); /* 0x10023364: push edi */
    eax = (int32_t)(int8_t)MEM8(ecx); /* 0x10023365: movsx eax, byte ptr [ecx] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x10023368: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = edi; /* 0x1002336A: mov dword ptr [ebp - 8], edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x1002336D: sub eax, edi */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1005CA72; /* 0x1002336F: je 0x1005ca72 */
L_10023375:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x24u; /* 0x10023375: sub eax, 0x24 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1005C96B; /* 0x10023378: je 0x1005c96b */
L_1002337E:
    esi = MEM32(ebp + 0xC); /* 0x1002337E: mov esi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Du);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x1Du; /* 0x10023381: sub eax, 0x1d */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10030C00; /* 0x10023384: je 0x10030c00 */
L_1002338A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1002338A: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1005C945; /* 0x1002338B: je 0x1005c945 */
L_10023391:
    PUSH32(esp, esi); /* 0x10023391: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10023392: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1002326B); /* 0x10023395: call 0x1002326b */
    RECOMP_FLAGS_IN();
L_1002339A:
    ecx = POP32_VAL(esp); /* 0x1002339A: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1002339B: pop ecx */
L_1002339C:
    eax = MEM32(ebp + 0x8); /* 0x1002339C: mov eax, dword ptr [ebp + 8] */
    edi = POP32_VAL(esp); /* 0x1002339F: pop edi */
    esi = POP32_VAL(esp); /* 0x100233A0: pop esi */
    esp = ebp; /* 0x100233A1: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100233A3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100233A4: ret  */
L_10030C00:
    PUSH32(esp, 0x10030C34u); /* 0x10030C00: push 0x10030c34 */
L_10030C05:
    eax = MEM32(esi); /* 0x10030C05: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x10030C07: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x10)) = eax; /* 0x10030C08: mov dword ptr [ebp - 0x10], eax */
    eax = MEM32(esi + 0x4); /* 0x10030C0B: mov eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)((eax | 0x100u)); _flag_b = (uint32_t)((eax | 0x100u));
    eax = eax | 0x100u; /* 0x10030C0E: or eax, 0x100 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x100E02F0) = ecx; /* 0x10030C13: mov dword ptr [0x100e02f0], ecx */
    MEM32(ebp + (-0xC)) = eax; /* 0x10030C19: mov dword ptr [ebp - 0xc], eax */
    eax = ebp + (-0x10); /* 0x10030C1C: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x10030C1F: push eax */
    eax = ebp + (-0x8); /* 0x10030C20: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x10030C23: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10030C24: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10030BA0); /* 0x10030C27: call 0x10030ba0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x10030C2C: add esp, 0x10 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_1002339C; /* 0x10030C2F: jmp 0x1002339c */
L_1005C945:
    PUSH32(esp, 0x10062740u); /* 0x1005C945: push 0x10062740 */
    ecx = ebp + (-0x8); /* 0x1005C94A: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_10022C2C); /* 0x1005C94D: call 0x10022c2c */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(esi), edi */ /* 0x1005C952: cmp dword ptr [esi], edi */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005C960; /* 0x1005C954: je 0x1005c960 */
L_1005C956:
    PUSH32(esp, 0x20u); /* 0x1005C956: push 0x20 */
    ecx = ebp + (-0x8); /* 0x1005C958: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_1002A1C1); /* 0x1005C95B: call 0x1002a1c1 */
    RECOMP_FLAGS_IN();
L_1005C960:
    ecx = MEM32(0x100E02F0); /* 0x1005C960: mov ecx, dword ptr [0x100e02f0] */
    RECOMP_BACKEDGE();
    goto L_10030C00; /* 0x1005C966: jmp 0x10030c00 */
L_1005C96B:
    SET_LO8(eax, MEM8(ecx + 0x1)); /* 0x1005C96B: mov al, byte ptr [ecx + 1] */
    /* cmp LO8(eax), 0x24u */ /* 0x1005C96E: cmp al, 0x24 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x24u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005C989; /* 0x1005C970: je 0x1005c989 */
L_1005C972:
    /* test LO8(eax), LO8(eax) */ /* 0x1005C972: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005CA72; /* 0x1005C974: je 0x1005ca72 */
L_1005C97A:
    ecx = MEM32(ebp + 0x8); /* 0x1005C97A: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, 2); /* 0x1005C97D: push 2 */
    RECOMP_CALL(sub_1009EB14); /* 0x1005C97F: call 0x1009eb14 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1002339C; /* 0x1005C984: jmp 0x1002339c */
L_1005C989:
    esi = MEM32(ebp + 0xC); /* 0x1005C989: mov esi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x1005C98C: add ecx, 2 */
    _flag_k = FK_ADD;
    MEM32(0x100E02F0) = ecx; /* 0x1005C98F: mov dword ptr [0x100e02f0], ecx */
    eax = (int32_t)(int8_t)MEM8(ecx); /* 0x1005C995: movsx eax, byte ptr [ecx] */
    /* cmp eax, 0x51u */ /* 0x1005C998: cmp eax, 0x51 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x51u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1005CA13; /* 0x1005C99B: jg 0x1005ca13 */
L_1005C99D:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005CA68; /* 0x1005C99D: je 0x1005ca68 */
L_1005C9A3:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x1005C9A3: sub eax, edi */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1005CA10; /* 0x1005C9A5: je 0x1005ca10 */
L_1005C9A7:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x41u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x41u; /* 0x1005C9A7: sub eax, 0x41 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1005C9FB; /* 0x1005C9AA: je 0x1005c9fb */
L_1005C9AC:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1005C9AC: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1005C9E4; /* 0x1005C9AD: je 0x1005c9e4 */
L_1005C9AF:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1005C9AF: dec eax */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1005C97A; /* 0x1005C9B0: jne 0x1005c97a */
L_1005C9B2:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(edx);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & edx; /* 0x1005C9B2: and dword ptr [ebp - 4], edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + (-0x8); /* 0x1005C9B5: lea eax, [ebp - 8] */
    PUSH32(esp, edi); /* 0x1005C9B8: push edi */
    PUSH32(esp, eax); /* 0x1005C9B9: push eax */
    PUSH32(esp, 0x100237BAu); /* 0x1005C9BA: push 0x100237ba */
    eax = ebp + (-0x18); /* 0x1005C9BF: lea eax, [ebp - 0x18] */
    MEM32(ebp + (-0x8)) = edi; /* 0x1005C9C2: mov dword ptr [ebp - 8], edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1005C9C5: inc ecx */
    _flag_k = FK_INC;
    PUSH32(esp, esi); /* 0x1005C9C6: push esi */
    PUSH32(esp, eax); /* 0x1005C9C7: push eax */
    MEM32(0x100E02F0) = ecx; /* 0x1005C9C8: mov dword ptr [0x100e02f0], ecx */
    RECOMP_CALL(sub_10023486); /* 0x1005C9CE: call 0x10023486 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1005C9D3: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1005C9D4: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1002326B); /* 0x1005C9D7: call 0x1002326b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x1005C9DC: add esp, 0x1c */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_1002339C; /* 0x1005C9DF: jmp 0x1002339c */
L_1005C9E4:
    PUSH32(esp, 1); /* 0x1005C9E4: push 1 */
    PUSH32(esp, esi); /* 0x1005C9E6: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1005C9E7: push dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1005C9EA: inc ecx */
    _flag_k = FK_INC;
    MEM32(0x100E02F0) = ecx; /* 0x1005C9EB: mov dword ptr [0x100e02f0], ecx */
    RECOMP_CALL(sub_10030B56); /* 0x1005C9F1: call 0x10030b56 */
    RECOMP_FLAGS_IN();
    goto L_1005CA7F; /* 0x1005C9F6: jmp 0x1005ca7f */
L_1005C9FB:
    PUSH32(esp, esi); /* 0x1005C9FB: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1005C9FC: push dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1005C9FF: inc ecx */
    _flag_k = FK_INC;
    MEM32(0x100E02F0) = ecx; /* 0x1005CA00: mov dword ptr [0x100e02f0], ecx */
    RECOMP_CALL(sub_1009F35B); /* 0x1005CA06: call 0x1009f35b */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1002339A; /* 0x1005CA0B: jmp 0x1002339a */
L_1005CA10:
    PUSH32(esp, esi); /* 0x1005CA10: push esi */
    goto L_1005CA75; /* 0x1005CA11: jmp 0x1005ca75 */
L_1005CA13:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x52u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x52u; /* 0x1005CA13: sub eax, 0x52 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1005CA47; /* 0x1005CA16: je 0x1005ca47 */
L_1005CA18:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1005CA18: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1005CA3B; /* 0x1005CA19: je 0x1005ca3b */
L_1005CA1B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1005CA1B: dec eax */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1005C97A; /* 0x1005CA1C: jne 0x1005c97a */
L_1005CA22:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1005CA22: inc ecx */
    _flag_k = FK_INC;
    MEM32(0x100E02F0) = ecx; /* 0x1005CA23: mov dword ptr [0x100e02f0], ecx */
    ecx = MEM32(ebp + 0x8); /* 0x1005CA29: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, 0x1005CA88u); /* 0x1005CA2C: push 0x1005ca88 */
    RECOMP_CALL(sub_10022BC1); /* 0x1005CA31: call 0x10022bc1 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1002339C; /* 0x1005CA36: jmp 0x1002339c */
L_1005CA3B:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1005CA3B: inc ecx */
    _flag_k = FK_INC;
    MEM32(0x100E02F0) = ecx; /* 0x1005CA3C: mov dword ptr [0x100e02f0], ecx */
    RECOMP_BACKEDGE();
    goto L_1005C97A; /* 0x1005CA42: jmp 0x1005c97a */
L_1005CA47:
    PUSH32(esp, 0x10062740u); /* 0x1005CA47: push 0x10062740 */
    ecx = ebp + (-0x8); /* 0x1005CA4C: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_10022C2C); /* 0x1005CA4F: call 0x10022c2c */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(esi), edi */ /* 0x1005CA54: cmp dword ptr [esi], edi */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005CA62; /* 0x1005CA56: je 0x1005ca62 */
L_1005CA58:
    PUSH32(esp, 0x20u); /* 0x1005CA58: push 0x20 */
    ecx = ebp + (-0x8); /* 0x1005CA5A: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_1002A1C1); /* 0x1005CA5D: call 0x1002a1c1 */
    RECOMP_FLAGS_IN();
L_1005CA62:
    ecx = MEM32(0x100E02F0); /* 0x1005CA62: mov ecx, dword ptr [0x100e02f0] */
L_1005CA68:
    PUSH32(esp, 0x1005CA98u); /* 0x1005CA68: push 0x1005ca98 */
    RECOMP_BACKEDGE();
    goto L_10030C05; /* 0x1005CA6D: jmp 0x10030c05 */
L_1005CA72:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1005CA72: push dword ptr [ebp + 0xc] */
L_1005CA75:
    PUSH32(esp, 1); /* 0x1005CA75: push 1 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1005CA77: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1009EC0E); /* 0x1005CA7A: call 0x1009ec0e */
    RECOMP_FLAGS_IN();
L_1005CA7F:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1005CA7F: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_1002339C; /* 0x1005CA82: jmp 0x1002339c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100233A5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100233A5u);

L_100233A5:
    PUSH32(esp, esi); /* 0x100233A5: push esi */
    esi = ecx; /* 0x100233A6: mov esi, ecx */
    /* cmp MEM32(esi + 0x4), 0 */ /* 0x100233A8: cmp dword ptr [esi + 4], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100233C9; /* 0x100233AC: je 0x100233c9 */
L_100233AE:
    eax = MEM32(esi + 0x8); /* 0x100233AE: mov eax, dword ptr [esi + 8] */
    MEM32(esi + 0xC) = eax; /* 0x100233B1: mov dword ptr [esi + 0xc], eax */
    /* test eax, eax */ /* 0x100233B4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100233C9; /* 0x100233B6: je 0x100233c9 */
L_100233B8:
    eax = MEM32(esi + 0xC); /* 0x100233B8: mov eax, dword ptr [esi + 0xc] */
    PUSH32(esp, MEM32(esi + 0xC)); /* 0x100233BB: push dword ptr [esi + 0xc] */
    eax = MEM32(eax); /* 0x100233BE: mov eax, dword ptr [eax] */
    MEM32(esi + 0x8) = eax; /* 0x100233C0: mov dword ptr [esi + 8], eax */
    RECOMP_ICALL(MEM32(esi + 0x4)); /* 0x100233C3: call dword ptr [esi + 4] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100233C6: pop ecx */
    RECOMP_BACKEDGE();
    goto L_100233AE; /* 0x100233C7: jmp 0x100233ae */
L_100233C9:
    esi = POP32_VAL(esp); /* 0x100233C9: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100233CA: ret  */
    RECOMP_REGS_OUT();
}

void sub_10023486(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10023486u);

L_10023486:
    PUSH32(esp, ebp); /* 0x10023486: push ebp */
    ebp = esp; /* 0x10023487: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x54u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x54u; /* 0x10023489: sub esp, 0x54 */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x38)); /* 0x1002348C: mov eax, dword ptr [ebp - 0x38] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1002348F: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFF0000u);
    eax = eax & 0xFFFF0000u; /* 0x10023491: and eax, 0xffff0000 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(ecx)); /* 0x10023496: mov byte ptr [ebp - 1], cl */
    MEM32(ebp + (-0x8)) = eax; /* 0x10023499: mov dword ptr [ebp - 8], eax */
    eax = MEM32(0x100E02F0); /* 0x1002349C: mov eax, dword ptr [0x100e02f0] */
    PUSH32(esp, ebx); /* 0x100234A1: push ebx */
    PUSH32(esp, esi); /* 0x100234A2: push esi */
    PUSH32(esp, edi); /* 0x100234A3: push edi */
    SET_LO8(eax, MEM8(eax)); /* 0x100234A4: mov al, byte ptr [eax] */
    /* test LO8(eax), LO8(eax) */ /* 0x100234A6: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005C5BE; /* 0x100234A8: je 0x1005c5be */
L_100234AE:
    edi = MEM32(ebp + 0x18); /* 0x100234AE: mov edi, dword ptr [ebp + 0x18] */
    /* cmp LO8(eax), 0x24u */ /* 0x100234B1: cmp al, 0x24 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x24u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005C1CC; /* 0x100234B3: je 0x1005c1cc */
L_100234B9:
    eax = MEM32(0x100E02F0); /* 0x100234B9: mov eax, dword ptr [0x100e02f0] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100234BE: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(ebp + (-0x18)); /* 0x100234C0: mov edx, dword ptr [ebp - 0x18] */
    SET_LO8(eax, MEM8(eax)); /* 0x100234C3: mov al, byte ptr [eax] */
    /* cmp LO8(eax), 0x41u */ /* 0x100234C5: cmp al, 0x41 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    ebx = (int32_t)(int8_t)LO8(eax); /* 0x100234C7: movsx ebx, al */
    eax = 0xFFFF0000u; /* 0x100234CA: mov eax, 0xffff0000 */
    SET_LO8(ecx, (CMP_L(_flag_a, _flag_b)) ? 1 : 0); /* 0x100234CF: setl cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x100234D2: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x100234D4: dec ecx */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x1C)) = esi; /* 0x100234D5: mov dword ptr [ebp - 0x1c], esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x2Bu);
    ecx = ecx & 0x2Bu; /* 0x100234D8: and ecx, 0x2b */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    edx = edx & eax; /* 0x100234DB: and edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x16u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x16u; /* 0x100234DD: add ecx, 0x16 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x18)) = edx; /* 0x100234E0: mov dword ptr [ebp - 0x18], edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - ecx; /* 0x100234E3: sub ebx, ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100234E5: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(eax);
    MEM32(ebp + (-0x20)) = MEM32(ebp + (-0x20)) & eax; /* 0x100234E7: and dword ptr [ebp - 0x20], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x24)) = ecx; /* 0x100234EA: mov dword ptr [ebp - 0x24], ecx */
L_100234ED:
    eax = ebx; /* 0x100234ED: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 4; /* 0x100234EF: sub eax, 4 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1005C299; /* 0x100234F2: je 0x1005c299 */
L_100234F8:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100234F8: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1005C23C; /* 0x100234F9: je 0x1005c23c */
L_100234FF:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 3; /* 0x100234FF: sub eax, 3 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1005C1FC; /* 0x10023502: je 0x1005c1fc */
L_10023508:
    eax = MEM32(0x100E02F0); /* 0x10023508: mov eax, dword ptr [0x100e02f0] */
    /* cmp MEM8(eax), 0 */ /* 0x1002350D: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10023518; /* 0x10023510: je 0x10023518 */
L_10023512:
    _flag_a = (uint32_t)(MEM32(0x100E02F0)); _flag_b = (uint32_t)(1);
    MEM32(0x100E02F0) = MEM32(0x100E02F0) + 1; /* 0x10023512: inc dword ptr [0x100e02f0] */
    _flag_k = FK_INC;
L_10023518:
    /* cmp ebx, 0x1Fu */ /* 0x10023518: cmp ebx, 0x1f */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x1Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1005C3CB; /* 0x1002351B: ja 0x1005c3cb */
L_10023521:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10023521: push dword ptr [ebp + 0x10] */
    ecx = ebp + (-0x14); /* 0x10023524: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_10022BC1); /* 0x10023527: call 0x10022bc1 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x8)); /* 0x1002352C: mov eax, dword ptr [ebp - 8] */
    ecx = ebp + (-0x2C); /* 0x1002352F: lea ecx, [ebp - 0x2c] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x2C)) = MEM32(ebp + (-0x2C)) & 0; /* 0x10023532: and dword ptr [ebp - 0x2c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x28)) = eax; /* 0x10023536: mov dword ptr [ebp - 0x28], eax */
    eax = ebp + (-0x14); /* 0x10023539: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1002353C: push eax */
    RECOMP_CALL(sub_10022BFB); /* 0x1002353D: call 0x10022bfb */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x2C)); /* 0x10023542: mov eax, dword ptr [ebp - 0x2c] */
    edx = MEM32(ebp + (-0x28)); /* 0x10023545: mov edx, dword ptr [ebp - 0x28] */
    MEM32(ebp + (-0x14)) = eax; /* 0x10023548: mov dword ptr [ebp - 0x14], eax */
    MEM32(ebp + (-0x10)) = edx; /* 0x1002354B: mov dword ptr [ebp - 0x10], edx */
    /* test esi, esi */ /* 0x1002354E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005C352; /* 0x10023550: jne 0x1005c352 */
L_10023556:
    ecx = MEM32(ebp + (-0x24)); /* 0x10023556: mov ecx, dword ptr [ebp - 0x24] */
    /* test ecx, ecx */ /* 0x10023559: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005C38B; /* 0x1002355B: jne 0x1005c38b */
L_10023561:
    /* test LO8(ebx), 0x10u */ /* 0x10023561: test bl, 0x10 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005C3C7; /* 0x10023564: jne 0x1005c3c7 */
L_1002356A:
    eax = MEM32(0x100E0300); /* 0x1002356A: mov eax, dword ptr [0x100e0300] */
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x1002356F: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x1002356F: shr eax, 1 */
    eax = ~eax; /* 0x10023571: not eax */
    /* test LO8(eax), 1 */ /* 0x10023573: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = ebx; /* 0x10023575: mov eax, ebx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_10030A6A; /* 0x10023577: je 0x10030a6a */
L_1002357D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    eax = eax & 0xCu; /* 0x1002357D: and eax, 0xc */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO8(eax), 0xCu */ /* 0x10023580: cmp al, 0xc */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xCu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005C4A3; /* 0x10023582: je 0x1005c4a3 */
L_10023588:
    /* test LO8(ebx), 2 */ /* 0x10023588: test bl, 2 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005C4EF; /* 0x1002358B: jne 0x1005c4ef */
L_10023591:
    /* test LO8(ebx), 1 */ /* 0x10023591: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10030A3D; /* 0x10023594: jne 0x10030a3d */
L_1002359A:
    ebx = 0x100u; /* 0x1002359A: mov ebx, 0x100 */
    /* test edi, edi */ /* 0x1002359F: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100235BB; /* 0x100235A1: jne 0x100235bb */
L_100235A3:
    esi = MEM32(ebp + 0xC); /* 0x100235A3: mov esi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100235A6: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi), ecx */ /* 0x100235A8: cmp dword ptr [esi], ecx */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005C51C; /* 0x100235AA: jne 0x1005c51c */
L_100235B0:
    eax = MEM32(ebp + 0x14); /* 0x100235B0: mov eax, dword ptr [ebp + 0x14] */
    /* cmp MEM32(eax), ecx */ /* 0x100235B3: cmp dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005C57C; /* 0x100235B5: jne 0x1005c57c */
L_100235BB:
    _flag_a = (uint32_t)((edx | ebx)); _flag_b = (uint32_t)((edx | ebx));
    edx = edx | ebx; /* 0x100235BB: or edx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(ebp + (-0x1)), 0 */ /* 0x100235BD: cmp byte ptr [ebp - 1], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x1))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005C5A6; /* 0x100235C1: jne 0x1005c5a6 */
L_100235C7:
    eax = MEM32(ebp + 0x8); /* 0x100235C7: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + (-0x14)); /* 0x100235CA: mov ecx, dword ptr [ebp - 0x14] */
    MEM32(eax) = ecx; /* 0x100235CD: mov dword ptr [eax], ecx */
    MEM32(eax + 0x4) = edx; /* 0x100235CF: mov dword ptr [eax + 4], edx */
L_100235D2:
    edi = POP32_VAL(esp); /* 0x100235D2: pop edi */
    esi = POP32_VAL(esp); /* 0x100235D3: pop esi */
    ebx = POP32_VAL(esp); /* 0x100235D4: pop ebx */
    esp = ebp; /* 0x100235D5: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100235D7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100235D8: ret  */
L_10030A3D:
    eax = ebp + (-0x14); /* 0x10030A3D: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x10030A40: push eax */
    eax = ebp + (-0x34); /* 0x10030A41: lea eax, [ebp - 0x34] */
    PUSH32(esp, eax); /* 0x10030A44: push eax */
    PUSH32(esp, 0x10030A7Cu); /* 0x10030A45: push 0x10030a7c */
    ecx = ebp + (-0x54); /* 0x10030A4A: lea ecx, [ebp - 0x54] */
    RECOMP_CALL(sub_10022BC1); /* 0x10030A4D: call 0x10022bc1 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x10030A52: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x10030A54: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x34)); /* 0x10030A59: mov eax, dword ptr [ebp - 0x34] */
    edx = MEM32(ebp + (-0x30)); /* 0x10030A5C: mov edx, dword ptr [ebp - 0x30] */
    MEM32(ebp + (-0x14)) = eax; /* 0x10030A5F: mov dword ptr [ebp - 0x14], eax */
    MEM32(ebp + (-0x10)) = edx; /* 0x10030A62: mov dword ptr [ebp - 0x10], edx */
    RECOMP_BACKEDGE();
    goto L_1002359A; /* 0x10030A65: jmp 0x1002359a */
L_10030A6A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    eax = eax & 0xCu; /* 0x10030A6A: and eax, 0xc */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO8(eax), 0xCu */ /* 0x10030A6D: cmp al, 0xc */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xCu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_10023588; /* 0x10030A6F: jne 0x10023588 */
L_10030A75:
    goto L_1005C4D4; /* 0x10030A75: jmp 0x1005c4d4 */
L_1005C1CC:
    PUSH32(esp, edi); /* 0x1005C1CC: push edi */
    eax = ebp + (-0x1); /* 0x1005C1CD: lea eax, [ebp - 1] */
    PUSH32(esp, eax); /* 0x1005C1D0: push eax */
    eax = ebp + 0x10; /* 0x1005C1D1: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x1005C1D4: push eax */
    eax = ebp + (-0x34); /* 0x1005C1D5: lea eax, [ebp - 0x34] */
    PUSH32(esp, eax); /* 0x1005C1D8: push eax */
    RECOMP_CALL(sub_1009F135); /* 0x1005C1D9: call 0x1009f135 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x34)); /* 0x1005C1DE: mov ecx, dword ptr [ebp - 0x34] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1005C1E1: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test ecx, ecx */ /* 0x1005C1E4: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100234B9; /* 0x1005C1E6: je 0x100234b9 */
L_1005C1EC:
    eax = MEM32(ebp + 0x8); /* 0x1005C1EC: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = ecx; /* 0x1005C1EF: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + (-0x30)); /* 0x1005C1F1: mov ecx, dword ptr [ebp - 0x30] */
L_1005C1F4:
    MEM32(eax + 0x4) = ecx; /* 0x1005C1F4: mov dword ptr [eax + 4], ecx */
    RECOMP_BACKEDGE();
    goto L_100235D2; /* 0x1005C1F7: jmp 0x100235d2 */
L_1005C1FC:
    eax = MEM32(0x100E0300); /* 0x1005C1FC: mov eax, dword ptr [0x100e0300] */
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x1005C201: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x1005C201: shr eax, 1 */
    eax = ~eax; /* 0x1005C203: not eax */
    /* test LO8(eax), 1 */ /* 0x1005C205: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005C2FD; /* 0x1005C207: je 0x1005c2fd */
L_1005C20D:
    /* test esi, esi */ /* 0x1005C20D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005C235; /* 0x1005C20F: je 0x1005c235 */
L_1005C211:
    PUSH32(esp, 0x20u); /* 0x1005C211: push 0x20 */
    ecx = ebp + (-0x2C); /* 0x1005C213: lea ecx, [ebp - 0x2c] */
    MEM32(ebp + (-0x2C)) = esi; /* 0x1005C216: mov dword ptr [ebp - 0x2c], esi */
    MEM32(ebp + (-0x28)) = edx; /* 0x1005C219: mov dword ptr [ebp - 0x28], edx */
    RECOMP_CALL(sub_1002A1C1); /* 0x1005C21C: call 0x1002a1c1 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xAu); /* 0x1005C221: push 0xa */
    RECOMP_CALL(sub_1002B49E); /* 0x1005C223: call 0x1002b49e */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005C228: pop ecx */
    PUSH32(esp, eax); /* 0x1005C229: push eax */
    eax = ebp + (-0x44); /* 0x1005C22A: lea eax, [ebp - 0x44] */
    ecx = ebp + (-0x2C); /* 0x1005C22D: lea ecx, [ebp - 0x2c] */
    goto L_1005C2D6; /* 0x1005C230: jmp 0x1005c2d6 */
L_1005C235:
    PUSH32(esp, 0xAu); /* 0x1005C235: push 0xa */
    goto L_1005C2EB; /* 0x1005C237: jmp 0x1005c2eb */
L_1005C23C:
    eax = MEM32(0x100E0300); /* 0x1005C23C: mov eax, dword ptr [0x100e0300] */
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x1005C241: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x1005C241: shr eax, 1 */
    eax = ~eax; /* 0x1005C243: not eax */
    /* test LO8(eax), 1 */ /* 0x1005C245: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005C2FD; /* 0x1005C247: je 0x1005c2fd */
L_1005C24D:
    /* test ecx, ecx */ /* 0x1005C24D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005C286; /* 0x1005C24F: je 0x1005c286 */
L_1005C251:
    eax = MEM32(ebp + (-0x20)); /* 0x1005C251: mov eax, dword ptr [ebp - 0x20] */
    MEM32(ebp + (-0x14)) = ecx; /* 0x1005C254: mov dword ptr [ebp - 0x14], ecx */
    ecx = ebp + (-0x14); /* 0x1005C257: lea ecx, [ebp - 0x14] */
    PUSH32(esp, 0x20u); /* 0x1005C25A: push 0x20 */
    MEM32(ebp + (-0x10)) = eax; /* 0x1005C25C: mov dword ptr [ebp - 0x10], eax */
    RECOMP_CALL(sub_1002A1C1); /* 0x1005C25F: call 0x1002a1c1 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xBu); /* 0x1005C264: push 0xb */
    RECOMP_CALL(sub_1002B49E); /* 0x1005C266: call 0x1002b49e */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005C26B: pop ecx */
    PUSH32(esp, eax); /* 0x1005C26C: push eax */
    eax = ebp + (-0x4C); /* 0x1005C26D: lea eax, [ebp - 0x4c] */
    PUSH32(esp, eax); /* 0x1005C270: push eax */
    ecx = ebp + (-0x14); /* 0x1005C271: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1002A782); /* 0x1005C274: call 0x1002a782 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(eax); /* 0x1005C279: mov ecx, dword ptr [eax] */
    eax = MEM32(eax + 0x4); /* 0x1005C27B: mov eax, dword ptr [eax + 4] */
    MEM32(ebp + (-0x24)) = ecx; /* 0x1005C27E: mov dword ptr [ebp - 0x24], ecx */
    MEM32(ebp + (-0x20)) = eax; /* 0x1005C281: mov dword ptr [ebp - 0x20], eax */
    goto L_1005C2FD; /* 0x1005C284: jmp 0x1005c2fd */
L_1005C286:
    PUSH32(esp, 0xBu); /* 0x1005C286: push 0xb */
    RECOMP_CALL(sub_1002B49E); /* 0x1005C288: call 0x1002b49e */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005C28D: pop ecx */
    PUSH32(esp, eax); /* 0x1005C28E: push eax */
    ecx = ebp + (-0x24); /* 0x1005C28F: lea ecx, [ebp - 0x24] */
    RECOMP_CALL(sub_10022C2C); /* 0x1005C292: call 0x10022c2c */
    RECOMP_FLAGS_IN();
    goto L_1005C2FD; /* 0x1005C297: jmp 0x1005c2fd */
L_1005C299:
    ecx = MEM32(0x100E0300); /* 0x1005C299: mov ecx, dword ptr [0x100e0300] */
    eax = ecx; /* 0x1005C29F: mov eax, ecx */
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x1005C2A1: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x1005C2A1: shr eax, 1 */
    eax = ~eax; /* 0x1005C2A3: not eax */
    /* test LO8(eax), 1 */ /* 0x1005C2A5: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005C2FD; /* 0x1005C2A7: je 0x1005c2fd */
L_1005C2A9:
    if (17u) _cf = (((ecx) >> 16) & 1u); /* 0x1005C2A9: shr ecx, 0x11 */
    if (17u) { _flag_a = recomp_flags_pack((ecx >> 17u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 17u; /* 0x1005C2A9: shr ecx, 0x11 */
    ecx = ~ecx; /* 0x1005C2AC: not ecx */
    /* test LO8(ecx), 1 */ /* 0x1005C2AE: test cl, 1 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005C2FD; /* 0x1005C2B1: je 0x1005c2fd */
L_1005C2B3:
    /* test esi, esi */ /* 0x1005C2B3: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005C2E9; /* 0x1005C2B5: je 0x1005c2e9 */
L_1005C2B7:
    PUSH32(esp, 0x20u); /* 0x1005C2B7: push 0x20 */
    ecx = ebp + (-0x34); /* 0x1005C2B9: lea ecx, [ebp - 0x34] */
    MEM32(ebp + (-0x34)) = esi; /* 0x1005C2BC: mov dword ptr [ebp - 0x34], esi */
    MEM32(ebp + (-0x30)) = edx; /* 0x1005C2BF: mov dword ptr [ebp - 0x30], edx */
    RECOMP_CALL(sub_1002A1C1); /* 0x1005C2C2: call 0x1002a1c1 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 9); /* 0x1005C2C7: push 9 */
    RECOMP_CALL(sub_1002B49E); /* 0x1005C2C9: call 0x1002b49e */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005C2CE: pop ecx */
    PUSH32(esp, eax); /* 0x1005C2CF: push eax */
    eax = ebp + (-0x54); /* 0x1005C2D0: lea eax, [ebp - 0x54] */
    ecx = ebp + (-0x34); /* 0x1005C2D3: lea ecx, [ebp - 0x34] */
L_1005C2D6:
    PUSH32(esp, eax); /* 0x1005C2D6: push eax */
    RECOMP_CALL(sub_1002A782); /* 0x1005C2D7: call 0x1002a782 */
    RECOMP_FLAGS_IN();
    esi = MEM32(eax); /* 0x1005C2DC: mov esi, dword ptr [eax] */
    eax = MEM32(eax + 0x4); /* 0x1005C2DE: mov eax, dword ptr [eax + 4] */
    MEM32(ebp + (-0x1C)) = esi; /* 0x1005C2E1: mov dword ptr [ebp - 0x1c], esi */
    MEM32(ebp + (-0x18)) = eax; /* 0x1005C2E4: mov dword ptr [ebp - 0x18], eax */
    goto L_1005C2FD; /* 0x1005C2E7: jmp 0x1005c2fd */
L_1005C2E9:
    PUSH32(esp, 9); /* 0x1005C2E9: push 9 */
L_1005C2EB:
    RECOMP_CALL(sub_1002B49E); /* 0x1005C2EB: call 0x1002b49e */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005C2F0: pop ecx */
    PUSH32(esp, eax); /* 0x1005C2F1: push eax */
    ecx = ebp + (-0x1C); /* 0x1005C2F2: lea ecx, [ebp - 0x1c] */
    RECOMP_CALL(sub_10022C2C); /* 0x1005C2F5: call 0x10022c2c */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0x1C)); /* 0x1005C2FA: mov esi, dword ptr [ebp - 0x1c] */
L_1005C2FD:
    eax = MEM32(0x100E02F0); /* 0x1005C2FD: mov eax, dword ptr [0x100e02f0] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1005C302: inc eax */
    _flag_k = FK_INC;
    MEM32(0x100E02F0) = eax; /* 0x1005C303: mov dword ptr [0x100e02f0], eax */
    /* cmp MEM8(eax), 0x24u */ /* 0x1005C308: cmp byte ptr [eax], 0x24 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x24u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005C32D; /* 0x1005C30B: jne 0x1005c32d */
L_1005C30D:
    PUSH32(esp, edi); /* 0x1005C30D: push edi */
    eax = ebp + (-0x1); /* 0x1005C30E: lea eax, [ebp - 1] */
    PUSH32(esp, eax); /* 0x1005C311: push eax */
    eax = ebp + 0x10; /* 0x1005C312: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x1005C315: push eax */
    eax = ebp + (-0x3C); /* 0x1005C316: lea eax, [ebp - 0x3c] */
    PUSH32(esp, eax); /* 0x1005C319: push eax */
    RECOMP_CALL(sub_1009F135); /* 0x1005C31A: call 0x1009f135 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x3C)); /* 0x1005C31F: mov ecx, dword ptr [ebp - 0x3c] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1005C322: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test ecx, ecx */ /* 0x1005C325: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005C5B1; /* 0x1005C327: jne 0x1005c5b1 */
L_1005C32D:
    eax = MEM32(0x100E02F0); /* 0x1005C32D: mov eax, dword ptr [0x100e02f0] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1005C332: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(ebp + (-0x18)); /* 0x1005C334: mov edx, dword ptr [ebp - 0x18] */
    SET_LO8(eax, MEM8(eax)); /* 0x1005C337: mov al, byte ptr [eax] */
    /* cmp LO8(eax), 0x41u */ /* 0x1005C339: cmp al, 0x41 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    ebx = (int32_t)(int8_t)LO8(eax); /* 0x1005C33B: movsx ebx, al */
    SET_LO8(ecx, (CMP_L(_flag_a, _flag_b)) ? 1 : 0); /* 0x1005C33E: setl cl */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1005C341: dec ecx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x2Bu);
    ecx = ecx & 0x2Bu; /* 0x1005C342: and ecx, 0x2b */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x16u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x16u; /* 0x1005C345: add ecx, 0x16 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - ecx; /* 0x1005C348: sub ebx, ecx */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + (-0x24)); /* 0x1005C34A: mov ecx, dword ptr [ebp - 0x24] */
    RECOMP_BACKEDGE();
    goto L_100234ED; /* 0x1005C34D: jmp 0x100234ed */
L_1005C352:
    PUSH32(esp, 0x20u); /* 0x1005C352: push 0x20 */
    ecx = ebp + (-0x2C); /* 0x1005C354: lea ecx, [ebp - 0x2c] */
    MEM32(ebp + (-0x2C)) = eax; /* 0x1005C357: mov dword ptr [ebp - 0x2c], eax */
    MEM32(ebp + (-0x28)) = edx; /* 0x1005C35A: mov dword ptr [ebp - 0x28], edx */
    RECOMP_CALL(sub_1002A1C1); /* 0x1005C35D: call 0x1002a1c1 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x2C)); /* 0x1005C362: mov eax, dword ptr [ebp - 0x2c] */
    ecx = ebp + (-0xC); /* 0x1005C365: lea ecx, [ebp - 0xc] */
    MEM32(ebp + (-0xC)) = eax; /* 0x1005C368: mov dword ptr [ebp - 0xc], eax */
    eax = MEM32(ebp + (-0x28)); /* 0x1005C36B: mov eax, dword ptr [ebp - 0x28] */
    MEM32(ebp + (-0x8)) = eax; /* 0x1005C36E: mov dword ptr [ebp - 8], eax */
    eax = ebp + (-0x1C); /* 0x1005C371: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1005C374: push eax */
    RECOMP_CALL(sub_10022BFB); /* 0x1005C375: call 0x10022bfb */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0xC)); /* 0x1005C37A: mov eax, dword ptr [ebp - 0xc] */
    edx = MEM32(ebp + (-0x8)); /* 0x1005C37D: mov edx, dword ptr [ebp - 8] */
    MEM32(ebp + (-0x14)) = eax; /* 0x1005C380: mov dword ptr [ebp - 0x14], eax */
    MEM32(ebp + (-0x10)) = edx; /* 0x1005C383: mov dword ptr [ebp - 0x10], edx */
    RECOMP_BACKEDGE();
    goto L_10023556; /* 0x1005C386: jmp 0x10023556 */
L_1005C38B:
    eax = MEM32(ebp + (-0x20)); /* 0x1005C38B: mov eax, dword ptr [ebp - 0x20] */
    MEM32(ebp + (-0x2C)) = ecx; /* 0x1005C38E: mov dword ptr [ebp - 0x2c], ecx */
    ecx = ebp + (-0x2C); /* 0x1005C391: lea ecx, [ebp - 0x2c] */
    PUSH32(esp, 0x20u); /* 0x1005C394: push 0x20 */
    MEM32(ebp + (-0x28)) = eax; /* 0x1005C396: mov dword ptr [ebp - 0x28], eax */
    RECOMP_CALL(sub_1002A1C1); /* 0x1005C399: call 0x1002a1c1 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x2C)); /* 0x1005C39E: mov eax, dword ptr [ebp - 0x2c] */
    ecx = ebp + (-0x24); /* 0x1005C3A1: lea ecx, [ebp - 0x24] */
    MEM32(ebp + (-0x24)) = eax; /* 0x1005C3A4: mov dword ptr [ebp - 0x24], eax */
    eax = MEM32(ebp + (-0x28)); /* 0x1005C3A7: mov eax, dword ptr [ebp - 0x28] */
    MEM32(ebp + (-0x20)) = eax; /* 0x1005C3AA: mov dword ptr [ebp - 0x20], eax */
    eax = ebp + (-0x14); /* 0x1005C3AD: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1005C3B0: push eax */
    RECOMP_CALL(sub_10022BFB); /* 0x1005C3B1: call 0x10022bfb */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x24)); /* 0x1005C3B6: mov eax, dword ptr [ebp - 0x24] */
    edx = MEM32(ebp + (-0x20)); /* 0x1005C3B9: mov edx, dword ptr [ebp - 0x20] */
    MEM32(ebp + (-0x14)) = eax; /* 0x1005C3BC: mov dword ptr [ebp - 0x14], eax */
    MEM32(ebp + (-0x10)) = edx; /* 0x1005C3BF: mov dword ptr [ebp - 0x10], edx */
    RECOMP_BACKEDGE();
    goto L_10023561; /* 0x1005C3C2: jmp 0x10023561 */
L_1005C3C7:
    /* test edi, edi */ /* 0x1005C3C7: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005C3D2; /* 0x1005C3C9: je 0x1005c3d2 */
L_1005C3CB:
    PUSH32(esp, 2); /* 0x1005C3CB: push 2 */
    goto L_1005C630; /* 0x1005C3CD: jmp 0x1005c630 */
L_1005C3D2:
    eax = MEM32(ebp + 0x10); /* 0x1005C3D2: mov eax, dword ptr [ebp + 0x10] */
    /* cmp MEM8(eax), 0 */ /* 0x1005C3D5: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005C452; /* 0x1005C3D8: je 0x1005c452 */
L_1005C3DA:
    eax = ebp + (-0x14); /* 0x1005C3DA: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1005C3DD: push eax */
    eax = ebp + (-0x34); /* 0x1005C3DE: lea eax, [ebp - 0x34] */
    PUSH32(esp, eax); /* 0x1005C3E1: push eax */
    PUSH32(esp, 0x1002A7CCu); /* 0x1005C3E2: push 0x1002a7cc */
    ecx = ebp + (-0x54); /* 0x1005C3E7: lea ecx, [ebp - 0x54] */
    RECOMP_CALL(sub_10022BC1); /* 0x1005C3EA: call 0x10022bc1 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1005C3EF: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1005C3F1: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x34)); /* 0x1005C3F6: mov eax, dword ptr [ebp - 0x34] */
    MEM32(ebp + (-0x14)) = eax; /* 0x1005C3F9: mov dword ptr [ebp - 0x14], eax */
    eax = MEM32(ebp + (-0x30)); /* 0x1005C3FC: mov eax, dword ptr [ebp - 0x30] */
    MEM32(ebp + (-0x10)) = eax; /* 0x1005C3FF: mov dword ptr [ebp - 0x10], eax */
    eax = MEM32(0x100E02F0); /* 0x1005C402: mov eax, dword ptr [0x100e02f0] */
    /* cmp MEM8(eax), 0 */ /* 0x1005C407: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = ebp + (-0x14); /* 0x1005C40A: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1005C40D: push eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005C42F; /* 0x1005C40E: je 0x1005c42f */
L_1005C410:
    eax = ebp + (-0x54); /* 0x1005C410: lea eax, [ebp - 0x54] */
    PUSH32(esp, eax); /* 0x1005C413: push eax */
    eax = ebp + (-0x4C); /* 0x1005C414: lea eax, [ebp - 0x4c] */
    PUSH32(esp, eax); /* 0x1005C417: push eax */
    RECOMP_CALL(sub_1002A6D5); /* 0x1005C418: call 0x1002a6d5 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005C41D: pop ecx */
    ecx = eax; /* 0x1005C41E: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1005C420: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    ecx = MEM32(eax); /* 0x1005C425: mov ecx, dword ptr [eax] */
    edx = MEM32(eax + 0x4); /* 0x1005C427: mov edx, dword ptr [eax + 4] */
    MEM32(ebp + (-0x14)) = ecx; /* 0x1005C42A: mov dword ptr [ebp - 0x14], ecx */
    goto L_1005C44D; /* 0x1005C42D: jmp 0x1005c44d */
L_1005C42F:
    eax = ebp + (-0x34); /* 0x1005C42F: lea eax, [ebp - 0x34] */
    PUSH32(esp, eax); /* 0x1005C432: push eax */
    PUSH32(esp, 1); /* 0x1005C433: push 1 */
    ecx = ebp + (-0x54); /* 0x1005C435: lea ecx, [ebp - 0x54] */
    RECOMP_CALL(sub_1009EB14); /* 0x1005C438: call 0x1009eb14 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1005C43D: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1005C43F: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x34)); /* 0x1005C444: mov eax, dword ptr [ebp - 0x34] */
    edx = MEM32(ebp + (-0x30)); /* 0x1005C447: mov edx, dword ptr [ebp - 0x30] */
    MEM32(ebp + (-0x14)) = eax; /* 0x1005C44A: mov dword ptr [ebp - 0x14], eax */
L_1005C44D:
    MEM32(ebp + (-0x10)) = edx; /* 0x1005C44D: mov dword ptr [ebp - 0x10], edx */
    goto L_1005C472; /* 0x1005C450: jmp 0x1005c472 */
L_1005C452:
    eax = MEM32(0x100E02F0); /* 0x1005C452: mov eax, dword ptr [0x100e02f0] */
    /* cmp MEM8(eax), 0 */ /* 0x1005C457: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005C491; /* 0x1005C45A: je 0x1005c491 */
L_1005C45C:
    eax = ebp + (-0x54); /* 0x1005C45C: lea eax, [ebp - 0x54] */
    PUSH32(esp, eax); /* 0x1005C45F: push eax */
    RECOMP_CALL(sub_1002A6D5); /* 0x1005C460: call 0x1002a6d5 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005C465: pop ecx */
    PUSH32(esp, eax); /* 0x1005C466: push eax */
    ecx = ebp + (-0x14); /* 0x1005C467: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1002AD4F); /* 0x1005C46A: call 0x1002ad4f */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x10)); /* 0x1005C46F: mov edx, dword ptr [ebp - 0x10] */
L_1005C472:
    eax = MEM32(0x100E02F0); /* 0x1005C472: mov eax, dword ptr [0x100e02f0] */
    SET_LO8(ecx, MEM8(eax)); /* 0x1005C477: mov cl, byte ptr [eax] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x1005C479: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005C491; /* 0x1005C47B: je 0x1005c491 */
L_1005C47D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1005C47D: inc eax */
    _flag_k = FK_INC;
    MEM32(0x100E02F0) = eax; /* 0x1005C47E: mov dword ptr [0x100e02f0], eax */
    /* cmp LO8(ecx), 0x40u */ /* 0x1005C483: cmp cl, 0x40 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005C3CB; /* 0x1005C486: jne 0x1005c3cb */
L_1005C48C:
    RECOMP_BACKEDGE();
    goto L_1002356A; /* 0x1005C48C: jmp 0x1002356a */
L_1005C491:
    PUSH32(esp, 1); /* 0x1005C491: push 1 */
    ecx = ebp + (-0x14); /* 0x1005C493: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1002374C); /* 0x1005C496: call 0x1002374c */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x10)); /* 0x1005C49B: mov edx, dword ptr [ebp - 0x10] */
    RECOMP_BACKEDGE();
    goto L_1002356A; /* 0x1005C49E: jmp 0x1002356a */
L_1005C4A3:
    /* test edi, edi */ /* 0x1005C4A3: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005C3CB; /* 0x1005C4A5: jne 0x1005c3cb */
L_1005C4AB:
    eax = ebp + (-0x14); /* 0x1005C4AB: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1005C4AE: push eax */
    eax = ebp + (-0x54); /* 0x1005C4AF: lea eax, [ebp - 0x54] */
    PUSH32(esp, eax); /* 0x1005C4B2: push eax */
    eax = ebp + (-0x4C); /* 0x1005C4B3: lea eax, [ebp - 0x4c] */
    PUSH32(esp, eax); /* 0x1005C4B6: push eax */
    RECOMP_CALL(sub_1009EF67); /* 0x1005C4B7: call 0x1009ef67 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005C4BC: pop ecx */
    ecx = eax; /* 0x1005C4BD: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1005C4BF: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    ecx = MEM32(eax); /* 0x1005C4C4: mov ecx, dword ptr [eax] */
    edx = MEM32(eax + 0x4); /* 0x1005C4C6: mov edx, dword ptr [eax + 4] */
    MEM32(ebp + (-0x14)) = ecx; /* 0x1005C4C9: mov dword ptr [ebp - 0x14], ecx */
    MEM32(ebp + (-0x10)) = edx; /* 0x1005C4CC: mov dword ptr [ebp - 0x10], edx */
    RECOMP_BACKEDGE();
    goto L_10023588; /* 0x1005C4CF: jmp 0x10023588 */
L_1005C4D4:
    eax = ebp + (-0x54); /* 0x1005C4D4: lea eax, [ebp - 0x54] */
    PUSH32(esp, eax); /* 0x1005C4D7: push eax */
    RECOMP_CALL(sub_1009EF67); /* 0x1005C4D8: call 0x1009ef67 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005C4DD: pop ecx */
    PUSH32(esp, eax); /* 0x1005C4DE: push eax */
    ecx = ebp + (-0x14); /* 0x1005C4DF: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1002AD4F); /* 0x1005C4E2: call 0x1002ad4f */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x10)); /* 0x1005C4E7: mov edx, dword ptr [ebp - 0x10] */
    RECOMP_BACKEDGE();
    goto L_10023588; /* 0x1005C4EA: jmp 0x10023588 */
L_1005C4EF:
    eax = ebp + (-0x14); /* 0x1005C4EF: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1005C4F2: push eax */
    eax = ebp + (-0x34); /* 0x1005C4F3: lea eax, [ebp - 0x34] */
    PUSH32(esp, eax); /* 0x1005C4F6: push eax */
    PUSH32(esp, 0x1005C640u); /* 0x1005C4F7: push 0x1005c640 */
    ecx = ebp + (-0x54); /* 0x1005C4FC: lea ecx, [ebp - 0x54] */
    RECOMP_CALL(sub_10022BC1); /* 0x1005C4FF: call 0x10022bc1 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1005C504: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1005C506: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x34)); /* 0x1005C50B: mov eax, dword ptr [ebp - 0x34] */
    edx = MEM32(ebp + (-0x30)); /* 0x1005C50E: mov edx, dword ptr [ebp - 0x30] */
    MEM32(ebp + (-0x14)) = eax; /* 0x1005C511: mov dword ptr [ebp - 0x14], eax */
    MEM32(ebp + (-0x10)) = edx; /* 0x1005C514: mov dword ptr [ebp - 0x10], edx */
    RECOMP_BACKEDGE();
    goto L_10023591; /* 0x1005C517: jmp 0x10023591 */
L_1005C51C:
    /* test MEM32(esi + 0x4), ebx */ /* 0x1005C51C: test dword ptr [esi + 4], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005C563; /* 0x1005C51F: jne 0x1005c563 */
L_1005C521:
    eax = MEM32(ebp + 0x14); /* 0x1005C521: mov eax, dword ptr [ebp + 0x14] */
    /* cmp MEM32(eax), ecx */ /* 0x1005C524: cmp dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005C563; /* 0x1005C526: je 0x1005c563 */
L_1005C528:
    PUSH32(esp, eax); /* 0x1005C528: push eax */
    eax = ebp + (-0x2C); /* 0x1005C529: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x1005C52C: push eax */
    PUSH32(esp, 0x20u); /* 0x1005C52D: push 0x20 */
    ecx = ebp + (-0x54); /* 0x1005C52F: lea ecx, [ebp - 0x54] */
    RECOMP_CALL(sub_1002A173); /* 0x1005C532: call 0x1002a173 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1005C537: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1005C539: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x2C)); /* 0x1005C53E: mov eax, dword ptr [ebp - 0x2c] */
    ecx = ebp + (-0x34); /* 0x1005C541: lea ecx, [ebp - 0x34] */
    MEM32(ebp + (-0x34)) = eax; /* 0x1005C544: mov dword ptr [ebp - 0x34], eax */
    eax = MEM32(ebp + (-0x28)); /* 0x1005C547: mov eax, dword ptr [ebp - 0x28] */
    PUSH32(esp, 0x20u); /* 0x1005C54A: push 0x20 */
    MEM32(ebp + (-0x30)) = eax; /* 0x1005C54C: mov dword ptr [ebp - 0x30], eax */
    RECOMP_CALL(sub_1002A1C1); /* 0x1005C54F: call 0x1002a1c1 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1005C554: push esi */
    eax = ebp + (-0x4C); /* 0x1005C555: lea eax, [ebp - 0x4c] */
    PUSH32(esp, eax); /* 0x1005C558: push eax */
    ecx = ebp + (-0x34); /* 0x1005C559: lea ecx, [ebp - 0x34] */
    RECOMP_CALL(sub_1002A19F); /* 0x1005C55C: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    goto L_1005C595; /* 0x1005C561: jmp 0x1005c595 */
L_1005C563:
    /* test MEM32(esi + 0x4), 0x800u */ /* 0x1005C563: test dword ptr [esi + 4], 0x800 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0x800u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005C579; /* 0x1005C56A: je 0x1005c579 */
L_1005C56C:
    eax = MEM32(esi); /* 0x1005C56C: mov eax, dword ptr [esi] */
    edx = MEM32(esi + 0x4); /* 0x1005C56E: mov edx, dword ptr [esi + 4] */
    MEM32(ebp + (-0x14)) = eax; /* 0x1005C571: mov dword ptr [ebp - 0x14], eax */
    RECOMP_BACKEDGE();
    goto L_100235BB; /* 0x1005C574: jmp 0x100235bb */
L_1005C579:
    PUSH32(esp, esi); /* 0x1005C579: push esi */
    goto L_1005C57D; /* 0x1005C57A: jmp 0x1005c57d */
L_1005C57C:
    PUSH32(esp, eax); /* 0x1005C57C: push eax */
L_1005C57D:
    eax = ebp + (-0x3C); /* 0x1005C57D: lea eax, [ebp - 0x3c] */
    PUSH32(esp, eax); /* 0x1005C580: push eax */
    PUSH32(esp, 0x20u); /* 0x1005C581: push 0x20 */
    ecx = ebp + (-0x54); /* 0x1005C583: lea ecx, [ebp - 0x54] */
    RECOMP_CALL(sub_1002A173); /* 0x1005C586: call 0x1002a173 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1005C58B: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1005C58D: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x3C); /* 0x1005C592: lea eax, [ebp - 0x3c] */
L_1005C595:
    PUSH32(esp, eax); /* 0x1005C595: push eax */
    ecx = ebp + (-0x14); /* 0x1005C596: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_10022BFB); /* 0x1005C599: call 0x10022bfb */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x10)); /* 0x1005C59E: mov edx, dword ptr [ebp - 0x10] */
    RECOMP_BACKEDGE();
    goto L_100235BB; /* 0x1005C5A1: jmp 0x100235bb */
L_1005C5A6:
    _flag_a = (uint32_t)((edx | 0x2000u)); _flag_b = (uint32_t)((edx | 0x2000u));
    edx = edx | 0x2000u; /* 0x1005C5A6: or edx, 0x2000 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_100235C7; /* 0x1005C5AC: jmp 0x100235c7 */
L_1005C5B1:
    eax = MEM32(ebp + 0x8); /* 0x1005C5B1: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = ecx; /* 0x1005C5B4: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + (-0x38)); /* 0x1005C5B6: mov ecx, dword ptr [ebp - 0x38] */
    RECOMP_BACKEDGE();
    goto L_1005C1F4; /* 0x1005C5B9: jmp 0x1005c1f4 */
L_1005C5BE:
    /* cmp MEM32(ebp + 0x18), ecx */ /* 0x1005C5BE: cmp dword ptr [ebp + 0x18], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005C62E; /* 0x1005C5C1: jne 0x1005c62e */
L_1005C5C3:
    esi = MEM32(ebp + 0xC); /* 0x1005C5C3: mov esi, dword ptr [ebp + 0xc] */
    /* cmp MEM32(esi), ecx */ /* 0x1005C5C6: cmp dword ptr [esi], ecx */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005C624; /* 0x1005C5C8: je 0x1005c624 */
L_1005C5CA:
    /* test MEM32(esi + 0x4), 0x100u */ /* 0x1005C5CA: test dword ptr [esi + 4], 0x100 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0x100u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005C614; /* 0x1005C5D1: jne 0x1005c614 */
L_1005C5D3:
    eax = MEM32(ebp + 0x14); /* 0x1005C5D3: mov eax, dword ptr [ebp + 0x14] */
    /* cmp MEM32(eax), ecx */ /* 0x1005C5D6: cmp dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005C614; /* 0x1005C5D8: je 0x1005c614 */
L_1005C5DA:
    PUSH32(esp, eax); /* 0x1005C5DA: push eax */
    eax = ebp + (-0x3C); /* 0x1005C5DB: lea eax, [ebp - 0x3c] */
    PUSH32(esp, eax); /* 0x1005C5DE: push eax */
    PUSH32(esp, 1); /* 0x1005C5DF: push 1 */
    ecx = ebp + (-0x54); /* 0x1005C5E1: lea ecx, [ebp - 0x54] */
    RECOMP_CALL(sub_1009EB14); /* 0x1005C5E4: call 0x1009eb14 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1005C5E9: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1005C5EB: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x3C)); /* 0x1005C5F0: mov eax, dword ptr [ebp - 0x3c] */
    ecx = ebp + (-0x34); /* 0x1005C5F3: lea ecx, [ebp - 0x34] */
    MEM32(ebp + (-0x34)) = eax; /* 0x1005C5F6: mov dword ptr [ebp - 0x34], eax */
    eax = MEM32(ebp + (-0x38)); /* 0x1005C5F9: mov eax, dword ptr [ebp - 0x38] */
    PUSH32(esp, 0x20u); /* 0x1005C5FC: push 0x20 */
    MEM32(ebp + (-0x30)) = eax; /* 0x1005C5FE: mov dword ptr [ebp - 0x30], eax */
    RECOMP_CALL(sub_1002A1C1); /* 0x1005C601: call 0x1002a1c1 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1005C606: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1005C607: push dword ptr [ebp + 8] */
    ecx = ebp + (-0x34); /* 0x1005C60A: lea ecx, [ebp - 0x34] */
    RECOMP_CALL(sub_1002A19F); /* 0x1005C60D: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    goto L_1005C638; /* 0x1005C612: jmp 0x1005c638 */
L_1005C614:
    PUSH32(esp, esi); /* 0x1005C614: push esi */
L_1005C615:
    PUSH32(esp, 1); /* 0x1005C615: push 1 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1005C617: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1009EC0E); /* 0x1005C61A: call 0x1009ec0e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1005C61F: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_1005C638; /* 0x1005C622: jmp 0x1005c638 */
L_1005C624:
    eax = MEM32(ebp + 0x14); /* 0x1005C624: mov eax, dword ptr [ebp + 0x14] */
    /* cmp MEM32(eax), ecx */ /* 0x1005C627: cmp dword ptr [eax], ecx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005C62E; /* 0x1005C629: je 0x1005c62e */
L_1005C62B:
    PUSH32(esp, eax); /* 0x1005C62B: push eax */
    RECOMP_BACKEDGE();
    goto L_1005C615; /* 0x1005C62C: jmp 0x1005c615 */
L_1005C62E:
    PUSH32(esp, 1); /* 0x1005C62E: push 1 */
L_1005C630:
    ecx = MEM32(ebp + 0x8); /* 0x1005C630: mov ecx, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1009EB14); /* 0x1005C633: call 0x1009eb14 */
    RECOMP_FLAGS_IN();
L_1005C638:
    eax = MEM32(ebp + 0x8); /* 0x1005C638: mov eax, dword ptr [ebp + 8] */
    RECOMP_BACKEDGE();
    goto L_100235D2; /* 0x1005C63B: jmp 0x100235d2 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100235D9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100235D9u);

L_100235D9:
    PUSH32(esp, ebp); /* 0x100235D9: push ebp */
    ebp = esp; /* 0x100235DA: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x100235DC: sub esp, 0x18 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x100235DF: push ebx */
    PUSH32(esp, esi); /* 0x100235E0: push esi */
    esi = MEM32(ebp + 0x8); /* 0x100235E1: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x100235E4: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x100235E6: push edi */
    edi = 0xFFFFFEFFu; /* 0x100235E7: mov edi, 0xfffffeff */
    PUSH32(esp, ebx); /* 0x100235EC: push ebx */
    MEM8(esi + 0x4) = (uint8_t)(LO8(ebx)); /* 0x100235ED: mov byte ptr [esi + 4], bl */
    eax = MEM32(esi + 0x4); /* 0x100235F0: mov eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    eax = eax & edi; /* 0x100235F3: and eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = ebx; /* 0x100235F5: mov dword ptr [esi], ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFF01FFu);
    eax = eax & 0xFFFF01FFu; /* 0x100235F7: and eax, 0xffff01ff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x4) = eax; /* 0x100235FC: mov dword ptr [esi + 4], eax */
    eax = ebp + (-0x8); /* 0x100235FF: lea eax, [ebp - 8] */
    PUSH32(esp, 1); /* 0x10023602: push 1 */
    PUSH32(esp, eax); /* 0x10023604: push eax */
    RECOMP_CALL(sub_10022FC3); /* 0x10023605: call 0x10022fc3 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1002360A: mov ecx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1002360C: add esp, 0xc */
    _flag_k = FK_ADD;
    eax = MEM32(ecx); /* 0x1002360F: mov eax, dword ptr [ecx] */
    MEM32(esi) = eax; /* 0x10023611: mov dword ptr [esi], eax */
    eax = MEM32(ecx + 0x4); /* 0x10023613: mov eax, dword ptr [ecx + 4] */
    /* test LO8(eax), LO8(eax) */ /* 0x10023616: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(esi + 0x4) = eax; /* 0x10023618: mov dword ptr [esi + 4], eax */
    eax = MEM32(0x100E02F0); /* 0x1002361B: mov eax, dword ptr [0x100e02f0] */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10023664; /* 0x10023620: jne 0x10023664 */
L_10023622:
    SET_LO8(ecx, MEM8(eax)); /* 0x10023622: mov cl, byte ptr [eax] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x10023624: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10023664; /* 0x10023626: je 0x10023664 */
L_10023628:
    /* cmp LO8(ecx), 0x40u */ /* 0x10023628: cmp cl, 0x40 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002366F; /* 0x1002362B: je 0x1002366f */
L_1002362D:
    PUSH32(esp, esi); /* 0x1002362D: push esi */
    eax = ebp + (-0x8); /* 0x1002362E: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x10023631: push eax */
    PUSH32(esp, 0x1002A7CCu); /* 0x10023632: push 0x1002a7cc */
    eax = ebp + (-0x10); /* 0x10023637: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1002363A: push eax */
    eax = ebp + (-0x18); /* 0x1002363B: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x1002363E: push eax */
    RECOMP_CALL(sub_1002A6D5); /* 0x1002363F: call 0x1002a6d5 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10023644: pop ecx */
    ecx = eax; /* 0x10023645: mov ecx, eax */
    RECOMP_CALL(sub_1002A782); /* 0x10023647: call 0x1002a782 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1002364C: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1002364E: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x10023653: mov ecx, eax */
    eax = MEM32(ecx); /* 0x10023655: mov eax, dword ptr [ecx] */
    MEM32(esi) = eax; /* 0x10023657: mov dword ptr [esi], eax */
    eax = MEM32(ecx + 0x4); /* 0x10023659: mov eax, dword ptr [ecx + 4] */
    MEM32(esi + 0x4) = eax; /* 0x1002365C: mov dword ptr [esi + 4], eax */
    eax = MEM32(0x100E02F0); /* 0x1002365F: mov eax, dword ptr [0x100e02f0] */
L_10023664:
    SET_LO8(ecx, MEM8(eax)); /* 0x10023664: mov cl, byte ptr [eax] */
    /* cmp LO8(ecx), 0x40u */ /* 0x10023666: cmp cl, 0x40 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005CF29; /* 0x10023669: jne 0x1005cf29 */
L_1002366F:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1002366F: inc eax */
    _flag_k = FK_INC;
    MEM32(0x100E02F0) = eax; /* 0x10023670: mov dword ptr [0x100e02f0], eax */
L_10023675:
    edi = POP32_VAL(esp); /* 0x10023675: pop edi */
    eax = esi; /* 0x10023676: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x10023678: pop esi */
    ebx = POP32_VAL(esp); /* 0x10023679: pop ebx */
    esp = ebp; /* 0x1002367A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1002367C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002367D: ret  */
L_1005CF29:
    /* test LO8(ecx), LO8(ecx) */ /* 0x1005CF29: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005CF45; /* 0x1005CF2B: je 0x1005cf45 */
L_1005CF2D:
    eax = MEM32(esi + 0x4); /* 0x1005CF2D: mov eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    eax = eax & edi; /* 0x1005CF30: and eax, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = ebx; /* 0x1005CF32: mov dword ptr [esi], ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFF01FFu);
    eax = eax & 0xFFFF01FFu; /* 0x1005CF34: and eax, 0xffff01ff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x4) = eax; /* 0x1005CF39: mov dword ptr [esi + 4], eax */
    MEM8(esi + 0x4) = (uint8_t)(2); /* 0x1005CF3C: mov byte ptr [esi + 4], 2 */
    RECOMP_BACKEDGE();
    goto L_10023675; /* 0x1005CF40: jmp 0x10023675 */
L_1005CF45:
    /* cmp MEM32(esi), ebx */ /* 0x1005CF45: cmp dword ptr [esi], ebx */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005CF57; /* 0x1005CF47: jne 0x1005cf57 */
L_1005CF49:
    PUSH32(esp, 1); /* 0x1005CF49: push 1 */
    ecx = esi; /* 0x1005CF4B: mov ecx, esi */
    RECOMP_CALL(sub_10023A53); /* 0x1005CF4D: call 0x10023a53 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_10023675; /* 0x1005CF52: jmp 0x10023675 */
L_1005CF57:
    PUSH32(esp, esi); /* 0x1005CF57: push esi */
    eax = ebp + (-0x18); /* 0x1005CF58: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x1005CF5B: push eax */
    PUSH32(esp, 0x1002A7CCu); /* 0x1005CF5C: push 0x1002a7cc */
    eax = ebp + (-0x10); /* 0x1005CF61: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1005CF64: push eax */
    PUSH32(esp, 1); /* 0x1005CF65: push 1 */
    ecx = ebp + (-0x8); /* 0x1005CF67: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_1009EB14); /* 0x1005CF6A: call 0x1009eb14 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1005CF6F: mov ecx, eax */
    RECOMP_CALL(sub_1002A782); /* 0x1005CF71: call 0x1002a782 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1005CF76: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1005CF78: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    ecx = MEM32(eax); /* 0x1005CF7D: mov ecx, dword ptr [eax] */
    MEM32(esi) = ecx; /* 0x1005CF7F: mov dword ptr [esi], ecx */
    ecx = MEM32(eax + 0x4); /* 0x1005CF81: mov ecx, dword ptr [eax + 4] */
    MEM32(esi + 0x4) = ecx; /* 0x1005CF84: mov dword ptr [esi + 4], ecx */
    RECOMP_BACKEDGE();
    goto L_10023675; /* 0x1005CF87: jmp 0x10023675 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1002367E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002367Eu);

L_1002367E:
    PUSH32(esp, ebp); /* 0x1002367E: push ebp */
    ebp = esp; /* 0x1002367F: mov ebp, esp */
    eax = MEM32(0x100E0300); /* 0x10023681: mov eax, dword ptr [0x100e0300] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x10023686: sub esp, 0x20 */
    _flag_k = FK_CMP;
    edx = eax; /* 0x10023689: mov edx, eax */
    if (15u) _cf = (((edx) >> 14) & 1u); /* 0x1002368B: shr edx, 0xf */
    if (15u) { _flag_a = recomp_flags_pack((edx >> 15u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 15u; /* 0x1002368B: shr edx, 0xf */
    edx = ~edx; /* 0x1002368E: not edx */
    PUSH32(esp, ebx); /* 0x10023690: push ebx */
    PUSH32(esp, esi); /* 0x10023691: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x10023692: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10023694: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    edx = edx & esi; /* 0x10023695: and edx, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100236A0; /* 0x10023697: je 0x100236a0 */
L_10023699:
    /* test eax, 0x1000u */ /* 0x10023699: test eax, 0x1000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100236A2; /* 0x1002369E: je 0x100236a2 */
L_100236A0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x100236A0: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_100236A2:
    ecx = MEM32(0x100E02F0); /* 0x100236A2: mov ecx, dword ptr [0x100e02f0] */
    ebx = 0xFFFF0000u; /* 0x100236A8: mov ebx, 0xffff0000 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x100236AD: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(ebx);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & ebx; /* 0x100236B1: and dword ptr [ebp - 4], ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = (int32_t)(int8_t)MEM8(ecx); /* 0x100236B4: movsx eax, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x100236B7: inc ecx */
    _flag_k = FK_INC;
    MEM32(0x100E02F0) = ecx; /* 0x100236B8: mov dword ptr [0x100e02f0], ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x100236BE: sub eax, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1005C8D9; /* 0x100236C1: je 0x1005c8d9 */
L_100236C7:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x54u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x54u; /* 0x100236C7: sub eax, 0x54 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10023796; /* 0x100236CA: je 0x10023796 */
L_100236D0:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x100236D0: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_10023724; /* 0x100236D1: jne 0x10023724 */
L_100236D3:
    PUSH32(esp, 0x1002371Cu); /* 0x100236D3: push 0x1002371c */
L_100236D8:
    ecx = ebp + (-0x8); /* 0x100236D8: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_10022C2C); /* 0x100236DB: call 0x10022c2c */
    RECOMP_FLAGS_IN();
L_100236E0:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & 0; /* 0x100236E0: and dword ptr [ebp - 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(ebx);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) & ebx; /* 0x100236E4: and dword ptr [ebp - 0xc], ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x100236E7: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10023785; /* 0x100236E9: jne 0x10023785 */
L_100236EF:
    eax = ebp + (-0x8); /* 0x100236EF: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x100236F2: push eax */
    RECOMP_CALL(sub_100235D9); /* 0x100236F3: call 0x100235d9 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100236F8: pop ecx */
    eax = ebp + (-0x8); /* 0x100236F9: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x100236FC: push eax */
    ecx = ebp + (-0x10); /* 0x100236FD: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_10022BFB); /* 0x10023700: call 0x10022bfb */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x10023705: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + (-0x10)); /* 0x10023708: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(eax) = ecx; /* 0x1002370B: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + (-0xC)); /* 0x1002370D: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(eax + 0x4) = ecx; /* 0x10023710: mov dword ptr [eax + 4], ecx */
L_10023713:
    esi = POP32_VAL(esp); /* 0x10023713: pop esi */
    ebx = POP32_VAL(esp); /* 0x10023714: pop ebx */
    esp = ebp; /* 0x10023715: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10023717: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10023718: ret  */
L_10023724:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x10023724: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1005C882; /* 0x10023725: jne 0x1005c882 */
L_1002372B:
    PUSH32(esp, 0x10023734u); /* 0x1002372B: push 0x10023734 */
    RECOMP_BACKEDGE();
    goto L_100236D8; /* 0x10023730: jmp 0x100236d8 */
L_10023785:
    eax = MEM32(ebp + (-0x8)); /* 0x10023785: mov eax, dword ptr [ebp - 8] */
    MEM32(ebp + (-0x10)) = eax; /* 0x10023788: mov dword ptr [ebp - 0x10], eax */
    eax = MEM32(ebp + (-0x4)); /* 0x1002378B: mov eax, dword ptr [ebp - 4] */
    MEM32(ebp + (-0xC)) = eax; /* 0x1002378E: mov dword ptr [ebp - 0xc], eax */
    RECOMP_BACKEDGE();
    goto L_100236EF; /* 0x10023791: jmp 0x100236ef */
L_10023796:
    PUSH32(esp, 0x100237A0u); /* 0x10023796: push 0x100237a0 */
    RECOMP_BACKEDGE();
    goto L_100236D8; /* 0x1002379B: jmp 0x100236d8 */
L_1005C882:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1005C882: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1005C8A3; /* 0x1005C883: je 0x1005c8a3 */
L_1005C885:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1005C885: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1005C899; /* 0x1005C886: je 0x1005c899 */
L_1005C888:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1005C888: dec eax */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_100236E0; /* 0x1005C889: jne 0x100236e0 */
L_1005C88F:
    PUSH32(esp, 0x1005C914u); /* 0x1005C88F: push 0x1005c914 */
    RECOMP_BACKEDGE();
    goto L_100236D8; /* 0x1005C894: jmp 0x100236d8 */
L_1005C899:
    PUSH32(esp, 0x1005C908u); /* 0x1005C899: push 0x1005c908 */
    RECOMP_BACKEDGE();
    goto L_100236D8; /* 0x1005C89E: jmp 0x100236d8 */
L_1005C8A3:
    eax = ebp + (-0x18); /* 0x1005C8A3: lea eax, [ebp - 0x18] */
    esi = edx; /* 0x1005C8A6: mov esi, edx */
    PUSH32(esp, eax); /* 0x1005C8A8: push eax */
    RECOMP_CALL(sub_1009F03C); /* 0x1005C8A9: call 0x1009f03c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005C8AE: pop ecx */
    PUSH32(esp, eax); /* 0x1005C8AF: push eax */
    eax = ebp + (-0x10); /* 0x1005C8B0: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1005C8B3: push eax */
    PUSH32(esp, 0x1005C924u); /* 0x1005C8B4: push 0x1005c924 */
    ecx = ebp + (-0x20); /* 0x1005C8B9: lea ecx, [ebp - 0x20] */
    RECOMP_CALL(sub_10022BC1); /* 0x1005C8BC: call 0x10022bc1 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1005C8C1: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1005C8C3: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x10)); /* 0x1005C8C8: mov eax, dword ptr [ebp - 0x10] */
    MEM32(ebp + (-0x8)) = eax; /* 0x1005C8CB: mov dword ptr [ebp - 8], eax */
    eax = MEM32(ebp + (-0xC)); /* 0x1005C8CE: mov eax, dword ptr [ebp - 0xc] */
    MEM32(ebp + (-0x4)) = eax; /* 0x1005C8D1: mov dword ptr [ebp - 4], eax */
    RECOMP_BACKEDGE();
    goto L_100236E0; /* 0x1005C8D4: jmp 0x100236e0 */
L_1005C8D9:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1005C8D9: dec ecx */
    _flag_k = FK_DEC;
    MEM32(0x100E02F0) = ecx; /* 0x1005C8DA: mov dword ptr [0x100e02f0], ecx */
    ecx = MEM32(ebp + 0x8); /* 0x1005C8E0: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, 0x1005C8F9u); /* 0x1005C8E3: push 0x1005c8f9 */
    RECOMP_CALL(sub_10022BC1); /* 0x1005C8E8: call 0x10022bc1 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1005C8ED: mov eax, dword ptr [ebp + 8] */
    RECOMP_BACKEDGE();
    goto L_10023713; /* 0x1005C8F0: jmp 0x10023713 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1002371C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002371Cu);

    goto L_1002371C;
L_100236D8:
    ecx = ebp + (-0x8); /* 0x100236D8: lea ecx, [ebp - 8] */
    RECOMP_CALL(sub_10022C2C); /* 0x100236DB: call 0x10022c2c */
    RECOMP_FLAGS_IN();
L_100236E0:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & 0; /* 0x100236E0: and dword ptr [ebp - 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(ebx);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) & ebx; /* 0x100236E4: and dword ptr [ebp - 0xc], ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x100236E7: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10023785; /* 0x100236E9: jne 0x10023785 */
L_100236EF:
    eax = ebp + (-0x8); /* 0x100236EF: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x100236F2: push eax */
    RECOMP_CALL(sub_100235D9); /* 0x100236F3: call 0x100235d9 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100236F8: pop ecx */
    eax = ebp + (-0x8); /* 0x100236F9: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x100236FC: push eax */
    ecx = ebp + (-0x10); /* 0x100236FD: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_10022BFB); /* 0x10023700: call 0x10022bfb */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x10023705: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + (-0x10)); /* 0x10023708: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(eax) = ecx; /* 0x1002370B: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + (-0xC)); /* 0x1002370D: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(eax + 0x4) = ecx; /* 0x10023710: mov dword ptr [eax + 4], ecx */
    esi = POP32_VAL(esp); /* 0x10023713: pop esi */
    ebx = POP32_VAL(esp); /* 0x10023714: pop ebx */
    esp = ebp; /* 0x10023715: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10023717: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10023718: ret  */
L_1002371C:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_AE, _cf)) goto L_10023792; /* 0x1002371C: jae 0x10023792 */
L_1002371E:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_B, _cf)) goto L_10023795; /* 0x1002371E: jb 0x10023795 */
L_10023720:
    void_lift_trap(0x10023720u, "arpl word ptr [eax], si");
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x10023724: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1005C882; /* 0x10023725: jne 0x1005c882 */
L_1002372B:
    PUSH32(esp, 0x10023734u); /* 0x1002372B: push 0x10023734 */
    RECOMP_BACKEDGE();
    goto L_100236D8; /* 0x10023730: jmp 0x100236d8 */
L_10023785:
    eax = MEM32(ebp + (-0x8)); /* 0x10023785: mov eax, dword ptr [ebp - 8] */
    MEM32(ebp + (-0x10)) = eax; /* 0x10023788: mov dword ptr [ebp - 0x10], eax */
    eax = MEM32(ebp + (-0x4)); /* 0x1002378B: mov eax, dword ptr [ebp - 4] */
    MEM32(ebp + (-0xC)) = eax; /* 0x1002378E: mov dword ptr [ebp - 0xc], eax */
    RECOMP_BACKEDGE();
    goto L_100236EF; /* 0x10023791: jmp 0x100236ef */
L_10023792:
    ecx = POP32_VAL(esp); /* 0x10023792: pop ecx */
    RECOMP_ITAIL(0x10023793u); { RECOMP_REGS_OUT(); return; } /* falls through past a gap */
L_10023795:
    { _itail_tgt = (uint32_t)(MEM32(eax + (-0x60))); goto _ljump; }
L_1005C882:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1005C882: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1005C8A3; /* 0x1005C883: je 0x1005c8a3 */
L_1005C885:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1005C885: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1005C899; /* 0x1005C886: je 0x1005c899 */
L_1005C888:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1005C888: dec eax */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_100236E0; /* 0x1005C889: jne 0x100236e0 */
L_1005C88F:
    PUSH32(esp, 0x1005C914u); /* 0x1005C88F: push 0x1005c914 */
    RECOMP_BACKEDGE();
    goto L_100236D8; /* 0x1005C894: jmp 0x100236d8 */
L_1005C899:
    PUSH32(esp, 0x1005C908u); /* 0x1005C899: push 0x1005c908 */
    RECOMP_BACKEDGE();
    goto L_100236D8; /* 0x1005C89E: jmp 0x100236d8 */
L_1005C8A3:
    eax = ebp + (-0x18); /* 0x1005C8A3: lea eax, [ebp - 0x18] */
    esi = edx; /* 0x1005C8A6: mov esi, edx */
    PUSH32(esp, eax); /* 0x1005C8A8: push eax */
    RECOMP_CALL(sub_1009F03C); /* 0x1005C8A9: call 0x1009f03c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005C8AE: pop ecx */
    PUSH32(esp, eax); /* 0x1005C8AF: push eax */
    eax = ebp + (-0x10); /* 0x1005C8B0: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1005C8B3: push eax */
    PUSH32(esp, 0x1005C924u); /* 0x1005C8B4: push 0x1005c924 */
    ecx = ebp + (-0x20); /* 0x1005C8B9: lea ecx, [ebp - 0x20] */
    RECOMP_CALL(sub_10022BC1); /* 0x1005C8BC: call 0x10022bc1 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1005C8C1: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1005C8C3: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x10)); /* 0x1005C8C8: mov eax, dword ptr [ebp - 0x10] */
    MEM32(ebp + (-0x8)) = eax; /* 0x1005C8CB: mov dword ptr [ebp - 8], eax */
    eax = MEM32(ebp + (-0xC)); /* 0x1005C8CE: mov eax, dword ptr [ebp - 0xc] */
    MEM32(ebp + (-0x4)) = eax; /* 0x1005C8D1: mov dword ptr [ebp - 4], eax */
    RECOMP_BACKEDGE();
    goto L_100236E0; /* 0x1005C8D4: jmp 0x100236e0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_10023734(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10023734u);

    goto L_10023734;
L_10022C25:
    eax = esi; /* 0x10022C25: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x10022C27: pop esi */
    ebp = POP32_VAL(esp); /* 0x10022C28: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x10022C29: ret 4 */
L_10023734:
    void_lift_trap(0x10023734u, "arpl word ptr [ecx + 0x73], bp");
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_AE, _cf)) goto L_1002375A; /* 0x10023738: jae 0x1002375a */
L_1002373A:
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + LO8(ecx)); /* 0x1002373A: add byte ptr [edi], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    esi = 0xCE8B0441u; /* 0x1002373C: mov esi, 0xce8b0441 */
    PUSH32(esp, eax); /* 0x10023741: push eax */
    RECOMP_CALL(sub_1002374C); /* 0x10023742: call 0x1002374c */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_10022C25; /* 0x10023747: jmp 0x10022c25 */
L_1002375A:
    _flag_a = (uint32_t)(MEM8(ebx + (-0x7BF0F7BB))) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx + (-0x7BF0F7BB)) = (uint8_t)(MEM8(ebx + (-0x7BF0F7BB)) + LO8(ecx)); /* 0x1002375A: add byte ptr [ebx - 0x7bf0f7bb], cl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* in: no port I/O under Win32 */ /* 0x10023760: in al, 2 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10023762: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* cmp eax, 2 */ /* 0x10023764: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10023A48; /* 0x10023767: je 0x10023a48 */
L_1002376D:
    /* cmp eax, 3 */ /* 0x1002376D: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10023A48; /* 0x10023770: je 0x10023a48 */
L_10023776:
    /* test eax, eax */ /* 0x10023776: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005B6C8; /* 0x10023778: jne 0x1005b6c8 */
L_1002377E:
    eax = esi; /* 0x1002377E: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x10023780: pop esi */
    ebp = POP32_VAL(esp); /* 0x10023781: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x10023782: ret 4 */
L_10023A48:
    PUSH32(esp, eax); /* 0x10023A48: push eax */
    RECOMP_CALL(sub_10023A53); /* 0x10023A49: call 0x10023a53 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1002377E; /* 0x10023A4E: jmp 0x1002377e */
L_1005B6C8:
    PUSH32(esp, eax); /* 0x1005B6C8: push eax */
    RECOMP_CALL(sub_100A022B); /* 0x1005B6C9: call 0x100a022b */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005B6CE: pop ecx */
    PUSH32(esp, eax); /* 0x1005B6CF: push eax */
    ecx = esi; /* 0x1005B6D0: mov ecx, esi */
    RECOMP_CALL(sub_10022CF3); /* 0x1005B6D2: call 0x10022cf3 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1002377E; /* 0x1005B6D7: jmp 0x1002377e */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1002374C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002374Cu);

L_1002374C:
    PUSH32(esp, ebp); /* 0x1002374C: push ebp */
    ebp = esp; /* 0x1002374D: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1002374F: push esi */
    esi = ecx; /* 0x10023750: mov esi, ecx */
    /* cmp MEM8(esi + 0x4), 1 */ /* 0x10023752: cmp byte ptr [esi + 4], 1 */
    _flag_a = (uint32_t)(MEM8(esi + 0x4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_G(_flag_a, _flag_b)) goto L_1002377E; /* 0x10023756: jg 0x1002377e */
L_10023758:
    /* cmp MEM32(esi), 0 */ /* 0x10023758: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x8); /* 0x1002375B: mov eax, dword ptr [ebp + 8] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10023A48; /* 0x1002375E: je 0x10023a48 */
L_10023764:
    /* cmp eax, 2 */ /* 0x10023764: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10023A48; /* 0x10023767: je 0x10023a48 */
L_1002376D:
    /* cmp eax, 3 */ /* 0x1002376D: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10023A48; /* 0x10023770: je 0x10023a48 */
L_10023776:
    /* test eax, eax */ /* 0x10023776: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005B6C8; /* 0x10023778: jne 0x1005b6c8 */
L_1002377E:
    eax = esi; /* 0x1002377E: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x10023780: pop esi */
    ebp = POP32_VAL(esp); /* 0x10023781: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x10023782: ret 4 */
L_10023A48:
    PUSH32(esp, eax); /* 0x10023A48: push eax */
    RECOMP_CALL(sub_10023A53); /* 0x10023A49: call 0x10023a53 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1002377E; /* 0x10023A4E: jmp 0x1002377e */
L_1005B6C8:
    PUSH32(esp, eax); /* 0x1005B6C8: push eax */
    RECOMP_CALL(sub_100A022B); /* 0x1005B6C9: call 0x100a022b */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1005B6CE: pop ecx */
    PUSH32(esp, eax); /* 0x1005B6CF: push eax */
    ecx = esi; /* 0x1005B6D0: mov ecx, esi */
    RECOMP_CALL(sub_10022CF3); /* 0x1005B6D2: call 0x10022cf3 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1002377E; /* 0x1005B6D7: jmp 0x1002377e */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100237A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100237A0u);

L_100237A0:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_10023810; /* 0x100237A0: jne 0x10023810 */
L_100237A2:
    ebp = (uint32_t)((int32_t)MEM32(edi + 0x6E) * (int32_t)0xF0A10020u); /* 0x100237A2: imul ebp, dword ptr [edi + 0x6e], 0xf0a10020 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(esi)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(ecx, LO8(ecx) + MEM8(esi)); /* 0x100237A9: add cl, byte ptr [esi] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _aa = MEM8(eax + (-0x7BF0FFC8)), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100237AB: adc byte ptr [eax - 0x7bf0ffc8], al */
      MEM8(eax + (-0x7BF0FFC8)) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    /* cmp edi, esi */ /* 0x100237B1: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_ITAIL(0x100237B3u); { RECOMP_REGS_OUT(); return; } /* falls through past a gap */
L_10023810:
    void_lift_trap(0x10023810u, "hlt ");
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10023812: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x10023814u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_100237BA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100237BAu);

L_100237BA:
    _flag_a = (uint32_t)(MEM8(ebp + (-0x75))) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp + (-0x75)) = (uint8_t)(MEM8(ebp + (-0x75)) + LO8(edx)); /* 0x100237BA: add byte ptr [ebp - 0x75], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* in: no port I/O under Win32 */ /* 0x100237BD: in al, dx */
    PUSH32(esp, ebx); /* 0x100237BE: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x100237BF: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x100237C1: push esi */
    esi = ecx; /* 0x100237C2: mov esi, ecx */
    /* cmp MEM32(ebp + 0x8), ebx */ /* 0x100237C4: cmp dword ptr [ebp + 8], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1002B5BC; /* 0x100237C7: jne 0x1002b5bc */
L_100237CD:
    MEM8(esi + 0x4) = (uint8_t)(LO8(ebx)); /* 0x100237CD: mov byte ptr [esi + 4], bl */
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
L_1002B5BC:
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

void sub_100237BB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100237BBu);

L_100237BB:
    PUSH32(esp, ebp); /* 0x100237BB: push ebp */
    ebp = esp; /* 0x100237BC: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x100237BE: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x100237BF: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x100237C1: push esi */
    esi = ecx; /* 0x100237C2: mov esi, ecx */
    /* cmp MEM32(ebp + 0x8), ebx */ /* 0x100237C4: cmp dword ptr [ebp + 8], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1002B5BC; /* 0x100237C7: jne 0x1002b5bc */
L_100237CD:
    MEM8(esi + 0x4) = (uint8_t)(LO8(ebx)); /* 0x100237CD: mov byte ptr [esi + 4], bl */
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
L_1002B5BC:
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

void sub_100237E1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100237E1u);

L_100237E1:
    PUSH32(esp, ebp); /* 0x100237E1: push ebp */
    ebp = esp; /* 0x100237E2: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x100237E4: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x8); /* 0x100237E7: lea ecx, [ebp - 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100237EA: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_100237BB); /* 0x100237ED: call 0x100237bb */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x100E02F0); /* 0x100237F2: mov eax, dword ptr [0x100e02f0] */
    SET_LO8(ecx, MEM8(eax)); /* 0x100237F7: mov cl, byte ptr [eax] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x100237F9: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005C67E; /* 0x100237FB: je 0x1005c67e */
L_10023801:
    /* cmp LO8(ecx), 0x3Fu */ /* 0x10023801: cmp cl, 0x3f */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x3Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1002AA4F; /* 0x10023804: jne 0x1002aa4f */
L_1002380A:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & 0; /* 0x1002380A: and dword ptr [ebp - 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1002380E: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0xFFFF0000u);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) & 0xFFFF0000u; /* 0x1002380F: and dword ptr [ebp - 0xc], 0xffff0000 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x100E02F0) = eax; /* 0x10023816: mov dword ptr [0x100e02f0], eax */
    eax = ebp + (-0x10); /* 0x1002381B: lea eax, [ebp - 0x10] */
    PUSH32(esp, 0); /* 0x1002381E: push 0 */
    PUSH32(esp, eax); /* 0x10023820: push eax */
    PUSH32(esp, 0x100237BAu); /* 0x10023821: push 0x100237ba */
    eax = ebp + (-0x8); /* 0x10023826: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x10023829: push eax */
    eax = ebp + (-0x18); /* 0x1002382A: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x1002382D: push eax */
    RECOMP_CALL(sub_10023486); /* 0x1002382E: call 0x10023486 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(eax); /* 0x10023833: mov ecx, dword ptr [eax] */
    MEM32(ebp + (-0x8)) = ecx; /* 0x10023835: mov dword ptr [ebp - 8], ecx */
    eax = MEM32(eax + 0x4); /* 0x10023838: mov eax, dword ptr [eax + 4] */
    MEM32(ebp + (-0x4)) = eax; /* 0x1002383B: mov dword ptr [ebp - 4], eax */
    eax = ebp + (-0x8); /* 0x1002383E: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x10023841: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10023842: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1002334F); /* 0x10023845: call 0x1002334f */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x1Cu; /* 0x1002384A: add esp, 0x1c */
    _flag_k = FK_ADD;
L_1002384D:
    eax = MEM32(ebp + 0x8); /* 0x1002384D: mov eax, dword ptr [ebp + 8] */
    esp = ebp; /* 0x10023850: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10023852: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10023853: ret  */
L_1002AA4F:
    /* cmp LO8(ecx), 0x58u */ /* 0x1002AA4F: cmp cl, 0x58 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x58u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005C64A; /* 0x1002AA52: je 0x1005c64a */
L_1002AA58:
    eax = ebp + (-0x8); /* 0x1002AA58: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x1002AA5B: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1002AA5C: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1002334F); /* 0x1002AA5F: call 0x1002334f */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1002AA64: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1002AA65: pop ecx */
    RECOMP_BACKEDGE();
    goto L_1002384D; /* 0x1002AA66: jmp 0x1002384d */
L_1005C64A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1005C64A: inc eax */
    _flag_k = FK_INC;
    /* cmp MEM32(ebp + (-0x8)), 0 */ /* 0x1005C64B: cmp dword ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(0x100E02F0) = eax; /* 0x1005C64F: mov dword ptr [0x100e02f0], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005C668; /* 0x1005C654: jne 0x1005c668 */
L_1005C656:
    ecx = MEM32(ebp + 0x8); /* 0x1005C656: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, 0x1002A664u); /* 0x1005C659: push 0x1002a664 */
    RECOMP_CALL(sub_10022BC1); /* 0x1005C65E: call 0x10022bc1 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1002384D; /* 0x1005C663: jmp 0x1002384d */
L_1005C668:
    eax = ebp + (-0x8); /* 0x1005C668: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x1005C66B: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1005C66C: push dword ptr [ebp + 8] */
    ecx = ebp + (-0x10); /* 0x1005C66F: lea ecx, [ebp - 0x10] */
    PUSH32(esp, 0x10030B0Cu); /* 0x1005C672: push 0x10030b0c */
    RECOMP_CALL(sub_10022BC1); /* 0x1005C677: call 0x10022bc1 */
    RECOMP_FLAGS_IN();
    goto L_1005C68F; /* 0x1005C67C: jmp 0x1005c68f */
L_1005C67E:
    eax = ebp + (-0x8); /* 0x1005C67E: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x1005C681: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1005C682: push dword ptr [ebp + 8] */
    ecx = ebp + (-0x10); /* 0x1005C685: lea ecx, [ebp - 0x10] */
    PUSH32(esp, 1); /* 0x1005C688: push 1 */
    RECOMP_CALL(sub_1009EB14); /* 0x1005C68A: call 0x1009eb14 */
    RECOMP_FLAGS_IN();
L_1005C68F:
    ecx = eax; /* 0x1005C68F: mov ecx, eax */
    RECOMP_CALL(sub_1002A19F); /* 0x1005C691: call 0x1002a19f */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1002384D; /* 0x1005C696: jmp 0x1002384d */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10023854(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10023854u);

L_10023854:
    PUSH32(esp, ebp); /* 0x10023854: push ebp */
    ebp = esp; /* 0x10023855: mov ebp, esp */
    eax = MEM32(0x100E0300); /* 0x10023857: mov eax, dword ptr [0x100e0300] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x24u; /* 0x1002385C: sub esp, 0x24 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1002385F: push ebx */
    PUSH32(esp, esi); /* 0x10023860: push esi */
    esi = 0x2000u; /* 0x10023861: mov esi, 0x2000 */
    PUSH32(esp, edi); /* 0x10023866: push edi */
    /* test esi, eax */ /* 0x10023867: test esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002B355; /* 0x10023869: je 0x1002b355 */
L_1002386F:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFDFFFu);
    eax = eax & 0xFFFFDFFFu; /* 0x1002386F: and eax, 0xffffdfff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x100E0300) = eax; /* 0x10023874: mov dword ptr [0x100e0300], eax */
    eax = ebp + (-0x24); /* 0x10023879: lea eax, [ebp - 0x24] */
    PUSH32(esp, 0); /* 0x1002387C: push 0 */
    PUSH32(esp, eax); /* 0x1002387E: push eax */
    RECOMP_CALL(sub_100237E1); /* 0x1002387F: call 0x100237e1 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(0x100E0300) | esi)); _flag_b = (uint32_t)((MEM32(0x100E0300) | esi));
    MEM32(0x100E0300) = MEM32(0x100E0300) | esi; /* 0x10023884: or dword ptr [0x100e0300], esi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1002388A: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1002388B: pop ecx */
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
L_1002B355:
    eax = MEM32(0x100E02F0); /* 0x1002B355: mov eax, dword ptr [0x100e02f0] */
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

void sub_100238A1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100238A1u);

L_100238A1:
    PUSH32(esp, 5); /* 0x100238A1: push 5 */
    RECOMP_CALL(sub_1000EDFC); /* 0x100238A3: call 0x1000edfc */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100238A8: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100238A9: ret  */
    RECOMP_REGS_OUT();
}

void sub_100238B1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100238B1u);

    goto L_100238B1;
L_100238AA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100238AA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1002393E; /* 0x100238AC: jmp 0x1002393e */
L_100238B1:
    PUSH32(esp, 0x64u); /* 0x100238B1: push 0x64 */
    PUSH32(esp, 0x10023948u); /* 0x100238B3: push 0x10023948 */
    RECOMP_CALL(sub_1000ED7E); /* 0x100238B8: call 0x1000ed7e */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0x14); /* 0x100238BD: mov esi, dword ptr [ebp + 0x14] */
    /* test esi, esi */ /* 0x100238C0: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100238AA; /* 0x100238C2: je 0x100238aa */
L_100238C4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x100238C4: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = edi; /* 0x100238C6: mov dword ptr [ebp - 0x1c], edi */
    PUSH32(esp, 5); /* 0x100238C9: push 5 */
    RECOMP_CALL(sub_100145F8); /* 0x100238CB: call 0x100145f8 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100238D0: pop ecx */
    /* test eax, eax */ /* 0x100238D1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100238AA; /* 0x100238D3: je 0x100238aa */
L_100238D5:
    PUSH32(esp, 5); /* 0x100238D5: push 5 */
    RECOMP_CALL(sub_1000EDD7); /* 0x100238D7: call 0x1000edd7 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100238DC: pop ecx */
    MEM32(ebp + (-0x4)) = edi; /* 0x100238DD: mov dword ptr [ebp - 4], edi */
    MEM32(0x100E030C) = esi; /* 0x100238E0: mov dword ptr [0x100e030c], esi */
    eax = MEM32(ebp + 0x18); /* 0x100238E6: mov eax, dword ptr [ebp + 0x18] */
    MEM32(0x100E0310) = eax; /* 0x100238E9: mov dword ptr [0x100e0310], eax */
    MEM32(0x100E031C) = edi; /* 0x100238EE: mov dword ptr [0x100e031c], edi */
    MEM32(0x100E0314) = edi; /* 0x100238F4: mov dword ptr [0x100e0314], edi */
    MEM32(0x100E0318) = edi; /* 0x100238FA: mov dword ptr [0x100e0318], edi */
    eax = MEM32(ebp + 0x1C); /* 0x10023900: mov eax, dword ptr [ebp + 0x1c] */
    eax = (uint32_t)LO16(eax); /* 0x10023903: movzx eax, ax */
    PUSH32(esp, eax); /* 0x10023906: push eax */
    PUSH32(esp, edi); /* 0x10023907: push edi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10023908: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1002390B: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1002390E: push dword ptr [ebp + 8] */
    ecx = ebp + (-0x74); /* 0x10023911: lea ecx, [ebp - 0x74] */
    RECOMP_CALL(sub_10022B64); /* 0x10023914: call 0x10022b64 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x74); /* 0x10023919: lea ecx, [ebp - 0x74] */
    RECOMP_CALL(sub_10022E64); /* 0x1002391C: call 0x10022e64 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x10023921: mov esi, eax */
    MEM32(ebp + (-0x1C)) = esi; /* 0x10023923: mov dword ptr [ebp - 0x1c], esi */
    ecx = 0x100E030Cu; /* 0x10023926: mov ecx, 0x100e030c */
    RECOMP_CALL(sub_100233A5); /* 0x1002392B: call 0x100233a5 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x10023930: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_100238A1); /* 0x10023937: call 0x100238a1 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1002393C: mov eax, esi */
L_1002393E:
    RECOMP_CALL(sub_1000EDC3); /* 0x1002393E: call 0x1000edc3 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10023943: ret  */
    RECOMP_REGS_OUT();
}

void sub_10023A1C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10023A1Cu);

L_10023A1C:
    PUSH32(esp, 0xEu); /* 0x10023A1C: push 0xe */
    RECOMP_CALL(sub_1000EDFC); /* 0x10023A1E: call 0x1000edfc */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10023A23: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10023A24: ret  */
    RECOMP_REGS_OUT();
}

void sub_10023A53(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10023A53u);

L_10023A53:
    PUSH32(esp, ebp); /* 0x10023A53: push ebp */
    ebp = esp; /* 0x10023A54: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x10023A56: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x10023A59: push esi */
    esi = ecx; /* 0x10023A5A: mov esi, ecx */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0xFFFF00FFu);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0xFFFF00FFu; /* 0x10023A5C: and dword ptr [esi + 4], 0xffff00ff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(esi + 0x4) = (uint8_t)(LO8(eax)); /* 0x10023A63: mov byte ptr [esi + 4], al */
    /* cmp eax, 1 */ /* 0x10023A66: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1005B600; /* 0x10023A69: je 0x1005b600 */
L_10023A6F:
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x10023A6F: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_10023A72:
    eax = esi; /* 0x10023A72: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x10023A74: pop esi */
    ebp = POP32_VAL(esp); /* 0x10023A75: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x10023A76: ret 4 */
L_1005B600:
    PUSH32(esp, eax); /* 0x1005B600: push eax */
    RECOMP_CALL(sub_100A022B); /* 0x1005B601: call 0x100a022b */
    RECOMP_FLAGS_IN();
    MEM32(esi) = eax; /* 0x1005B606: mov dword ptr [esi], eax */
    ecx = POP32_VAL(esp); /* 0x1005B608: pop ecx */
    /* test eax, eax */ /* 0x1005B609: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10023A72; /* 0x1005B60B: jne 0x10023a72 */
L_1005B611:
    MEM8(esi + 0x4) = (uint8_t)(3); /* 0x1005B611: mov byte ptr [esi + 4], 3 */
    RECOMP_BACKEDGE();
    goto L_10023A72; /* 0x1005B615: jmp 0x10023a72 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10023A83(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10023A83u);

L_10023A83:
    PUSH32(esp, ebp); /* 0x10023A83: push ebp */
    ebp = esp; /* 0x10023A84: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x224u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x224u; /* 0x10023A86: sub esp, 0x224 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x10023A8C: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x10023A91: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x10023A93: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, edi); /* 0x10023A96: push edi */
    PUSH32(esp, 0); /* 0x10023A97: push 0 */
    RECOMP_ICALL(MEM32(0x100E51C0)); /* 0x10023A99: call dword ptr [0x100e51c0] */
    RECOMP_FLAGS_IN();
    ecx = 0x10000000u; /* 0x10023A9F: mov ecx, 0x10000000 */
    /* cmp eax, ecx */ /* 0x10023AA4: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10023ADA; /* 0x10023AA6: je 0x10023ada */
L_10023AA8:
    edi = 0x104u; /* 0x10023AA8: mov edi, 0x104 */
    eax = ebp + (-0x210); /* 0x10023AAD: lea eax, [ebp - 0x210] */
    PUSH32(esp, edi); /* 0x10023AB3: push edi */
    PUSH32(esp, eax); /* 0x10023AB4: push eax */
    PUSH32(esp, ecx); /* 0x10023AB5: push ecx */
    RECOMP_ICALL(MEM32(0x100E5050)); /* 0x10023AB6: call dword ptr [0x100e5050] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10023ABC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10023AE9; /* 0x10023ABE: je 0x10023ae9 */
L_10023AC0:
    /* cmp eax, edi */ /* 0x10023AC0: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10023AE9; /* 0x10023AC2: je 0x10023ae9 */
L_10023AC4:
    PUSH32(esp, 0); /* 0x10023AC4: push 0 */
    PUSH32(esp, 0); /* 0x10023AC6: push 0 */
    eax = ebp + (-0x210); /* 0x10023AC8: lea eax, [ebp - 0x210] */
    PUSH32(esp, eax); /* 0x10023ACE: push eax */
    RECOMP_ICALL(MEM32(0x100E5084)); /* 0x10023ACF: call dword ptr [0x100e5084] */
    RECOMP_FLAGS_IN();
    MEM32(0x100E03F4) = eax; /* 0x10023AD5: mov dword ptr [0x100e03f4], eax */
L_10023ADA:
    ecx = MEM32(ebp + (-0x4)); /* 0x10023ADA: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x10023ADD: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x10023ADF: pop edi */
    RECOMP_CALL(sub_1000F7C6); /* 0x10023AE0: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x10023AE5: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10023AE7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10023AE8: ret  */
L_10023AE9:
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x10023AE9: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    goto L_100537E1; /* 0x10023AEF: jmp 0x100537e1 */
L_100537E1:
    /* test eax, eax */ /* 0x100537E1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_100537ED; /* 0x100537E3: jle 0x100537ed */
L_100537E5:
    eax = (uint32_t)LO16(eax); /* 0x100537E5: movzx eax, ax */
    _flag_a = (uint32_t)((eax | 0x80070000u)); _flag_b = (uint32_t)((eax | 0x80070000u));
    eax = eax | 0x80070000u; /* 0x100537E8: or eax, 0x80070000 */
    _cf = 0;
    _flag_k = FK_TEST;
L_100537ED:
    PUSH32(esp, eax); /* 0x100537ED: push eax */
    ecx = ebp + (-0x220); /* 0x100537EE: lea ecx, [ebp - 0x220] */
    RECOMP_CALL(sub_1006C31C); /* 0x100537F4: call 0x1006c31c */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x100DCF40u); /* 0x100537F9: push 0x100dcf40 */
    eax = ebp + (-0x220); /* 0x100537FE: lea eax, [ebp - 0x220] */
    PUSH32(esp, eax); /* 0x10053804: push eax */
    RECOMP_CALL(sub_100192EB); /* 0x10053805: call 0x100192eb */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1005380Au, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10023AF4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10023AF4u);

L_10023AF4:
    PUSH32(esp, MEM32(0x100DFDE0)); /* 0x10023AF4: push dword ptr [0x100dfde0] */
    RECOMP_ICALL(MEM32(0x100E514C)); /* 0x10023AFA: call dword ptr [0x100e514c] */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10023B00: ret  */
    RECOMP_REGS_OUT();
}

void sub_10023B01(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10023B01u);

L_10023B01:
    PUSH32(esp, ebp); /* 0x10023B01: push ebp */
    ebp = esp; /* 0x10023B02: mov ebp, esp */
    /* cmp MEM8(0x100E03F0), 4 */ /* 0x10023B04: cmp byte ptr [0x100e03f0], 4 */
    _flag_a = (uint32_t)(MEM8(0x100E03F0)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_AE(_flag_a, _flag_b)) goto L_10051C36; /* 0x10023B0B: jae 0x10051c36 */
L_10023B11:
    ebp = POP32_VAL(esp); /* 0x10023B11: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x10023B12: ret 0x10 */
L_10051C36:
    eax = MEM32(0x100E03EC); /* 0x10051C36: mov eax, dword ptr [0x100e03ec] */
    /* test LO8(eax), 2 */ /* 0x10051C3B: test al, 2 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10023B11; /* 0x10051C3D: je 0x10023b11 */
L_10051C43:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x10051C43: push dword ptr [ebp + 0x14] */
    ecx = MEM32(ebp + 0x8); /* 0x10051C46: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10051C49: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1002490D); /* 0x10051C4C: call 0x1002490d */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10051C51: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10051C52: pop ecx */
    RECOMP_BACKEDGE();
    goto L_10023B11; /* 0x10051C53: jmp 0x10023b11 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10023B15(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10023B15u);

L_10023B15:
    PUSH32(esp, ebp); /* 0x10023B15: push ebp */
    ebp = esp; /* 0x10023B16: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x10023B18: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x24u; /* 0x10023B1B: sub esp, 0x24 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x10023B1E: push ebx */
    PUSH32(esp, esi); /* 0x10023B1F: push esi */
    PUSH32(esp, edi); /* 0x10023B20: push edi */
    esi = ecx; /* 0x10023B21: mov esi, ecx */
    MEM8(esp + 0x13) = (uint8_t)(0); /* 0x10023B23: mov byte ptr [esp + 0x13], 0 */
    PUSH32(esp, 4); /* 0x10023B28: push 4 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x10023B2A: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = POP32_VAL(esp); /* 0x10023B2C: pop eax */
    edx = MEM32(esi + 0x30); /* 0x10023B2D: mov edx, dword ptr [esi + 0x30] */
    MEM32(esp + 0x14) = edx; /* 0x10023B30: mov dword ptr [esp + 0x14], edx */
L_10023B34:
    ebx = edx + 0x8; /* 0x10023B34: lea ebx, [edx + 8] */
    /* cmp MEM32(ebx), 0xFFFFFFFFu */ /* 0x10023B37: cmp dword ptr [ebx], -1 */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esp + 0x18) = ebx; /* 0x10023B3A: mov dword ptr [esp + 0x18], ebx */
    if (CMP_L(_flag_a, _flag_b)) goto L_10023B9B; /* 0x10023B3E: jl 0x10023b9b */
L_10023B40:
    ebx = MEM32(edx); /* 0x10023B40: mov ebx, dword ptr [edx] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x10023B42: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x28), edx */ /* 0x10023B44: cmp dword ptr [esi + 0x28], edx */
    _flag_a = (uint32_t)(MEM32(esi + 0x28)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_10029FC4; /* 0x10023B47: jle 0x10029fc4 */
L_10023B4D:
    /* cmp MEM32(ebx), 0 */ /* 0x10023B4D: cmp dword ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10029FB8; /* 0x10023B50: jne 0x10029fb8 */
L_10023B56:
    ecx = MEM32(ebp + 0x8); /* 0x10023B56: mov ecx, dword ptr [ebp + 8] */
    eax = edx + edi; /* 0x10023B59: lea eax, [edx + edi] */
    MEM32(ecx) = eax; /* 0x10023B5C: mov dword ptr [ecx], eax */
    eax = MEM32(esi + 0x40); /* 0x10023B5E: mov eax, dword ptr [esi + 0x40] */
    MEM32(esp + 0x1C) = eax; /* 0x10023B61: mov dword ptr [esp + 0x1c], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10023B65: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(ebx); if (eax == _d) { MEM32(ebx) = ecx; } else { eax = _d; } } /* 0x10023B67: lock cmpxchg dword ptr [ebx], ecx */
    _flag_k = FK_CMP;
    /* test eax, eax */ /* 0x10023B6B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10051EF9; /* 0x10023B6D: jne 0x10051ef9 */
L_10023B73:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + edx; /* 0x10023B73: add edi, edx */
    _flag_k = FK_ADD;
    MEM8(esp + 0x13) = (uint8_t)(1); /* 0x10023B75: mov byte ptr [esp + 0x13], 1 */
    /* cmp edi, MEM32(esp + 0x1C) */ /* 0x10023B7A: cmp edi, dword ptr [esp + 0x1c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esp + 0x1C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_10023B8A; /* 0x10023B7E: jl 0x10023b8a */
L_10023B80:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10023B80: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esi + 0x40; /* 0x10023B82: lea eax, [esi + 0x40] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x10023B85: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(eax), _sum = MEM32(eax) + ecx; ecx = _old; MEM32(eax) = _sum; } /* 0x10023B86: lock xadd dword ptr [eax], ecx */
    _flag_k = FK_ADD;
L_10023B8A:
    ebx = MEM32(esp + 0x18); /* 0x10023B8A: mov ebx, dword ptr [esp + 0x18] */
    _flag_a = (uint32_t)((ecx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ecx | 0xFFFFFFFFu));
    ecx = ecx | 0xFFFFFFFFu; /* 0x10023B8E: or ecx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edx; /* 0x10023B91: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(ebx); if (eax == _d) { MEM32(ebx) = ecx; } else { eax = _d; } } /* 0x10023B93: lock cmpxchg dword ptr [ebx], ecx */
    _flag_k = FK_CMP;
L_10023B97:
    edx = MEM32(esp + 0x14); /* 0x10023B97: mov edx, dword ptr [esp + 0x14] */
L_10023B9B:
    /* cmp MEM8(esp + 0x13), 0 */ /* 0x10023B9B: cmp byte ptr [esp + 0x13], 0 */
    _flag_a = (uint32_t)(MEM8(esp + 0x13)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10051F01; /* 0x10023BA0: je 0x10051f01 */
L_10023BA6:
    /* cmp MEM8(esp + 0x13), 0 */ /* 0x10023BA6: cmp byte ptr [esp + 0x13], 0 */
    _flag_a = (uint32_t)(MEM8(esp + 0x13)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    edx = MEM32(edx + 0x4); /* 0x10023BAB: mov edx, dword ptr [edx + 4] */
    PUSH32(esp, 4); /* 0x10023BAE: push 4 */
    MEM32(esp + 0x18) = edx; /* 0x10023BB0: mov dword ptr [esp + 0x18], edx */
    eax = POP32_VAL(esp); /* 0x10023BB4: pop eax */
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10023B34; /* 0x10023BB5: je 0x10023b34 */
L_10023BBB:
    eax = edi; /* 0x10023BBB: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x10023BBD: pop edi */
    esi = POP32_VAL(esp); /* 0x10023BBE: pop esi */
    ebx = POP32_VAL(esp); /* 0x10023BBF: pop ebx */
    esp = ebp; /* 0x10023BC0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10023BC2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x10023BC3: ret 4 */
L_10029FB8:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x10029FB8: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x10029FB9: add ebx, eax */
    _flag_k = FK_ADD;
    /* cmp edx, MEM32(esi + 0x28) */ /* 0x10029FBB: cmp edx, dword ptr [esi + 0x28] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esi + 0x28));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_10023B4D; /* 0x10029FBE: jl 0x10023b4d */
L_10029FC4:
    ebx = MEM32(esp + 0x18); /* 0x10029FC4: mov ebx, dword ptr [esp + 0x18] */
    RECOMP_BACKEDGE();
    goto L_10023B97; /* 0x10029FC8: jmp 0x10023b97 */
L_10051EF9:
    PUSH32(esp, 4); /* 0x10051EF9: push 4 */
    eax = POP32_VAL(esp); /* 0x10051EFB: pop eax */
    RECOMP_BACKEDGE();
    goto L_10029FB8; /* 0x10051EFC: jmp 0x10029fb8 */
L_10051F01:
    PUSH32(esp, 0xFFFFFFFEu); /* 0x10051F01: push -2 */
    ecx = POP32_VAL(esp); /* 0x10051F03: pop ecx */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x10051F04: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(ebx); if (eax == _d) { MEM32(ebx) = ecx; } else { eax = _d; } } /* 0x10051F07: lock cmpxchg dword ptr [ebx], ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x28));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(esi + 0x28); /* 0x10051F0B: add edi, dword ptr [esi + 0x28] */
    _flag_k = FK_ADD;
    ebx = edx + 0x4; /* 0x10051F0E: lea ebx, [edx + 4] */
    /* cmp MEM32(ebx), 0 */ /* 0x10051F11: cmp dword ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10051F88; /* 0x10051F14: jne 0x10051f88 */
L_10051F16:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10051F16: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10051F18: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x10051F1A: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(ebx); if (eax == _d) { MEM32(ebx) = ecx; } else { eax = _d; } } /* 0x10051F1B: lock cmpxchg dword ptr [ebx], ecx */
    _flag_k = FK_CMP;
    /* test eax, eax */ /* 0x10051F1F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10051F88; /* 0x10051F21: jne 0x10051f88 */
L_10051F23:
    eax = MEM32(esi + 0x28); /* 0x10051F23: mov eax, dword ptr [esi + 0x28] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10051F26: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 4); /* 0x10051F28: push 4 */
    edx = POP32_VAL(esp); /* 0x10051F2A: pop edx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x10051F2B: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x10051F2D: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x10051F30: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x10051F32: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x10051F34: push ecx */
    RECOMP_CALL(sub_10011683); /* 0x10051F35: call 0x10011683 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x10051F3A: mov ecx, eax */
    eax = MEM32(esi + 0x28); /* 0x10051F3C: mov eax, dword ptr [esi + 0x28] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x10051F3F: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x10051F3F: shl eax, 2 */
    PUSH32(esp, eax); /* 0x10051F42: push eax */
    PUSH32(esp, 0); /* 0x10051F43: push 0 */
    PUSH32(esp, ecx); /* 0x10051F45: push ecx */
    MEM32(esp + 0x2C) = ecx; /* 0x10051F46: mov dword ptr [esp + 0x2c], ecx */
    RECOMP_CALL(sub_10011533); /* 0x10051F4A: call 0x10011533 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xCu); /* 0x10051F4F: push 0xc */
    RECOMP_CALL(sub_1000EE11); /* 0x10051F51: call 0x1000ee11 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x10051F56: mov ecx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x10051F58: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* test ecx, ecx */ /* 0x10051F5B: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10051F6F; /* 0x10051F5D: je 0x10051f6f */
L_10051F5F:
    eax = MEM32(esp + 0x1C); /* 0x10051F5F: mov eax, dword ptr [esp + 0x1c] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(ecx + 0x4) = MEM32(ecx + 0x4) & 0; /* 0x10051F63: and dword ptr [ecx + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(ecx + 0x8) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ecx + 0x8) | 0xFFFFFFFFu));
    MEM32(ecx + 0x8) = MEM32(ecx + 0x8) | 0xFFFFFFFFu; /* 0x10051F67: or dword ptr [ecx + 8], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx) = eax; /* 0x10051F6B: mov dword ptr [ecx], eax */
    goto L_10051F71; /* 0x10051F6D: jmp 0x10051f71 */
L_10051F6F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10051F6F: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_10051F71:
    edx = MEM32(esi + 0x3C); /* 0x10051F71: mov edx, dword ptr [esi + 0x3c] */
    /* cmp edx, MEM32(esi + 0x38) */ /* 0x10051F74: cmp edx, dword ptr [esi + 0x38] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esi + 0x38));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_10051F82; /* 0x10051F77: jge 0x10051f82 */
L_10051F79:
    eax = MEM32(esi + 0x34); /* 0x10051F79: mov eax, dword ptr [esi + 0x34] */
    MEM32(eax + edx * 4) = ecx; /* 0x10051F7C: mov dword ptr [eax + edx*4], ecx */
    _flag_a = (uint32_t)(MEM32(esi + 0x3C)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x3C) = MEM32(esi + 0x3C) + 1; /* 0x10051F7F: inc dword ptr [esi + 0x3c] */
    _flag_k = FK_INC;
L_10051F82:
    { uint32_t _tmp = MEM32(ebx); /* 0x10051F82: xchg dword ptr [ebx], ecx */
      MEM32(ebx) = ecx;
      ecx = _tmp; }
    edx = MEM32(esp + 0x14); /* 0x10051F84: mov edx, dword ptr [esp + 0x14] */
L_10051F88:
    /* cmp MEM32(ebx), 1 */ /* 0x10051F88: cmp dword ptr [ebx], 1 */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_10023BA6; /* 0x10051F8B: jne 0x10023ba6 */
L_10051F91:
    _flag_a = (uint32_t)(MEM32(esp + 0x28)); _flag_b = (uint32_t)(0);
    MEM32(esp + 0x28) = MEM32(esp + 0x28) & 0; /* 0x10051F91: and dword ptr [esp + 0x28], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x2C) = 0x1007A46Cu; /* 0x10051F96: mov dword ptr [esp + 0x2c], 0x1007a46c */
L_10051F9E:
    ecx = esp + 0x20; /* 0x10051F9E: lea ecx, [esp + 0x20] */
    RECOMP_CALL(sub_10068D76); /* 0x10051FA2: call 0x10068d76 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebx), 1 */ /* 0x10051FA7: cmp dword ptr [ebx], 1 */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10051F9E; /* 0x10051FAA: je 0x10051f9e */
L_10051FAC:
    edx = MEM32(esp + 0x14); /* 0x10051FAC: mov edx, dword ptr [esp + 0x14] */
    RECOMP_BACKEDGE();
    goto L_10023BA6; /* 0x10051FB0: jmp 0x10023ba6 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10023BC6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10023BC6u);

L_10023BC6:
    PUSH32(esp, ebp); /* 0x10023BC6: push ebp */
    ebp = esp; /* 0x10023BC7: mov ebp, esp */
    eax = MEM32(0x100DFA30); /* 0x10023BC9: mov eax, dword ptr [0x100dfa30] */
    _flag_a = (uint32_t)((eax ^ MEM32(0x100DF7B8))); _flag_b = (uint32_t)((eax ^ MEM32(0x100DF7B8)));
    eax = eax ^ MEM32(0x100DF7B8); /* 0x10023BCE: xor eax, dword ptr [0x100df7b8] */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005F16A; /* 0x10023BD4: je 0x1005f16a */
L_10023BDA:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10023BDA: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10023BDD: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10023BE0: push dword ptr [ebp + 8] */
    RECOMP_ICALL(eax); /* 0x10023BE3: call eax */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x10023BE5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10023BE6: ret  */
L_1005F16A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1005F16A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1005F16C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1005F16D: ret  */
    RECOMP_REGS_OUT();
}

void sub_10023BE7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10023BE7u);

L_10023BE7:
    PUSH32(esp, ebp); /* 0x10023BE7: push ebp */
    ebp = esp; /* 0x10023BE8: mov ebp, esp */
    eax = MEM32(0x100DFA14); /* 0x10023BEA: mov eax, dword ptr [0x100dfa14] */
    _flag_a = (uint32_t)((eax ^ MEM32(0x100DF7B8))); _flag_b = (uint32_t)((eax ^ MEM32(0x100DF7B8)));
    eax = eax ^ MEM32(0x100DF7B8); /* 0x10023BEF: xor eax, dword ptr [0x100df7b8] */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005F137; /* 0x10023BF5: je 0x1005f137 */
L_10023BFB:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x10023BFB: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10023BFE: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10023C01: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10023C04: push dword ptr [ebp + 8] */
    RECOMP_ICALL(eax); /* 0x10023C07: call eax */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x10023C09: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10023C0A: ret  */
L_1005F137:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1005F137: push dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x10); /* 0x1005F13A: mov ecx, dword ptr [ebp + 0x10] */
    eax = ecx; /* 0x1005F13D: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    eax = eax & 2; /* 0x1005F13F: and eax, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx & 1; /* 0x1005F142: and ecx, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1005F145: push eax */
    PUSH32(esp, ecx); /* 0x1005F146: push ecx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1005F147: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x100E51C8)); /* 0x1005F14A: call dword ptr [0x100e51c8] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1005F150: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1005F151: ret  */
    RECOMP_REGS_OUT();
}

void sub_10023C0B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10023C0Bu);

L_10023C0B:
    PUSH32(esp, ebp); /* 0x10023C0B: push ebp */
    ebp = esp; /* 0x10023C0C: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x10023C0E: sub esp, 0x10 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10023C11: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x001F0002u); /* 0x10023C13: push 0x1f0002 */
    PUSH32(esp, eax); /* 0x10023C18: push eax */
    PUSH32(esp, eax); /* 0x10023C19: push eax */
    PUSH32(esp, eax); /* 0x10023C1A: push eax */
    RECOMP_CALL(sub_10023BE7); /* 0x10023C1B: call 0x10023be7 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x10023C20: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10023C23: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005201B; /* 0x10023C25: je 0x1005201b */
L_10023C2B:
    esp = ebp; /* 0x10023C2B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10023C2D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10023C2E: ret  */
L_1005201B:
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x1005201B: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10052021: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1005202D; /* 0x10052023: jle 0x1005202d */
L_10052025:
    eax = (uint32_t)LO16(eax); /* 0x10052025: movzx eax, ax */
    _flag_a = (uint32_t)((eax | 0x80070000u)); _flag_b = (uint32_t)((eax | 0x80070000u));
    eax = eax | 0x80070000u; /* 0x10052028: or eax, 0x80070000 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1005202D:
    PUSH32(esp, eax); /* 0x1005202D: push eax */
    ecx = ebp + (-0x10); /* 0x1005202E: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1006C31C); /* 0x10052031: call 0x1006c31c */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x100DCF40u); /* 0x10052036: push 0x100dcf40 */
    eax = ebp + (-0x10); /* 0x1005203B: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1005203E: push eax */
    RECOMP_CALL(sub_100192EB); /* 0x1005203F: call 0x100192eb */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x10052044u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10023C2F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10023C2Fu);

L_10023C2F:
    PUSH32(esp, 4); /* 0x10023C2F: push 4 */
    eax = 0x100DB1A4u; /* 0x10023C31: mov eax, 0x100db1a4 */
    RECOMP_CALL(sub_100149A4); /* 0x10023C36: call 0x100149a4 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x10023C3B: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x10023C3D: mov dword ptr [ebp - 0x10], esi */
    PUSH32(esp, 1); /* 0x10023C40: push 1 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10023C42: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10023F7C); /* 0x10023C45: call 0x10023f7c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x10023C4A: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = edi; /* 0x10023C4C: mov dword ptr [ebp - 4], edi */
    MEM32(esi) = 0x1001E28Cu; /* 0x10023C4F: mov dword ptr [esi], 0x1001e28c */
    MEM32(esi + 0xA0) = edi; /* 0x10023C55: mov dword ptr [esi + 0xa0], edi */
    MEM32(esi + 0xA4) = edi; /* 0x10023C5B: mov dword ptr [esi + 0xa4], edi */
    RECOMP_CALL(sub_10023C0B); /* 0x10023C61: call 0x10023c0b */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x1C); /* 0x10023C66: mov ecx, dword ptr [esi + 0x1c] */
    MEM32(esi + 0xA8) = eax; /* 0x10023C69: mov dword ptr [esi + 0xa8], eax */
    RECOMP_CALL(sub_10024106); /* 0x10023C6F: call 0x10024106 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x1Cu); /* 0x10023C74: push 0x1c */
    eax = MEM32(eax + 0x8); /* 0x10023C76: mov eax, dword ptr [eax + 8] */
    MEM32(esi + 0x18) = eax; /* 0x10023C79: mov dword ptr [esi + 0x18], eax */
    RECOMP_CALL(sub_1000EE11); /* 0x10023C7C: call 0x1000ee11 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10023C81: pop ecx */
    /* test eax, eax */ /* 0x10023C82: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10023CC2; /* 0x10023C84: je 0x10023cc2 */
L_10023C86:
    MEM32(eax + 0x8) = edi; /* 0x10023C86: mov dword ptr [eax + 8], edi */
    MEM32(eax + 0xC) = edi; /* 0x10023C89: mov dword ptr [eax + 0xc], edi */
    MEM32(eax + 0x10) = edi; /* 0x10023C8C: mov dword ptr [eax + 0x10], edi */
    MEM32(eax + 0x14) = edi; /* 0x10023C8F: mov dword ptr [eax + 0x14], edi */
    MEM32(eax + 0x18) = 1; /* 0x10023C92: mov dword ptr [eax + 0x18], 1 */
L_10023C99:
    ecx = MEM32(esi + 0x1C); /* 0x10023C99: mov ecx, dword ptr [esi + 0x1c] */
    PUSH32(esp, eax); /* 0x10023C9C: push eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xC8u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xC8u; /* 0x10023C9D: add ecx, 0xc8 */
    _flag_k = FK_ADD;
    MEM32(esi + 0x9C) = eax; /* 0x10023CA3: mov dword ptr [esi + 0x9c], eax */
    RECOMP_CALL(sub_10023B15); /* 0x10023CA9: call 0x10023b15 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10023CAE: push dword ptr [ebp + 0xc] */
    ecx = esi; /* 0x10023CB1: mov ecx, esi */
    RECOMP_CALL(sub_10023E9D); /* 0x10023CB3: call 0x10023e9d */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x10023CB8: mov eax, esi */
    RECOMP_CALL(sub_100149D7); /* 0x10023CBA: call 0x100149d7 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x10023CBF: ret 8 */
L_10023CC2:
    eax = edi; /* 0x10023CC2: mov eax, edi */
    RECOMP_BACKEDGE();
    goto L_10023C99; /* 0x10023CC4: jmp 0x10023c99 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10023CC6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10023CC6u);

L_10023CC6:
    PUSH32(esp, 8); /* 0x10023CC6: push 8 */
    eax = 0x100DBCC8u; /* 0x10023CC8: mov eax, 0x100dbcc8 */
    RECOMP_CALL(sub_100149A4); /* 0x10023CCD: call 0x100149a4 */
    RECOMP_FLAGS_IN();
    edi = ecx; /* 0x10023CD2: mov edi, ecx */
    eax = edi + 0x1F0; /* 0x10023CD4: lea eax, [edi + 0x1f0] */
    PUSH32(esp, eax); /* 0x10023CDA: push eax */
    RECOMP_ICALL(MEM32(0x100E512C)); /* 0x10023CDB: call dword ptr [0x100e512c] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x10023CE1: mov esi, eax */
    eax = esi + (-0x4); /* 0x10023CE3: lea eax, [esi - 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(esi);
    _cf = (esi) != 0;
    esi = (uint32_t)(-(int32_t)esi); /* 0x10023CE6: neg esi */
    _flag_k = FK_CMP;
    { uint32_t _sa = esi, _sb = esi, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x10023CE8: sbb esi, esi */
      esi = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    esi = esi & eax; /* 0x10023CEA: and esi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10053123; /* 0x10023CEC: jne 0x10053123 */
L_10023CF2:
    PUSH32(esp, 0xB0u); /* 0x10023CF2: push 0xb0 */
    RECOMP_CALL(sub_1000EE11); /* 0x10023CF7: call 0x1000ee11 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10023CFC: pop ecx */
    MEM32(ebp + (-0x10)) = eax; /* 0x10023CFD: mov dword ptr [ebp - 0x10], eax */
    MEM32(ebp + (-0x4)) = esi; /* 0x10023D00: mov dword ptr [ebp - 4], esi */
    /* test eax, eax */ /* 0x10023D03: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10023D14; /* 0x10023D05: je 0x10023d14 */
L_10023D07:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10023D07: push dword ptr [ebp + 8] */
    ecx = eax; /* 0x10023D0A: mov ecx, eax */
    PUSH32(esp, edi); /* 0x10023D0C: push edi */
    RECOMP_CALL(sub_10023C2F); /* 0x10023D0D: call 0x10023c2f */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x10023D12: mov esi, eax */
L_10023D14:
    eax = esi; /* 0x10023D14: mov eax, esi */
    RECOMP_CALL(sub_100149D7); /* 0x10023D16: call 0x100149d7 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x10023D1B: ret 4 */
L_10053123:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10053123: push dword ptr [ebp + 8] */
    ecx = esi; /* 0x10053126: mov ecx, esi */
    RECOMP_CALL(sub_10023E9D); /* 0x10053128: call 0x10023e9d */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_10023D14; /* 0x1005312D: jmp 0x10023d14 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10023D1E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10023D1Eu);

L_10023D1E:
    PUSH32(esp, ebp); /* 0x10023D1E: push ebp */
    ebp = esp; /* 0x10023D1F: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x10023D21: sub esp, 0x14 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10023D24: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10023D26: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, esi); /* 0x10023D27: push esi */
    esi = ecx; /* 0x10023D28: mov esi, ecx */
    { uint32_t _tmp = MEM32(esi); /* 0x10023D2A: xchg dword ptr [esi], eax */
      MEM32(esi) = eax;
      eax = _tmp; }
    /* test eax, eax */ /* 0x10023D2C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10051C14; /* 0x10023D2E: jne 0x10051c14 */
L_10023D34:
    esi = POP32_VAL(esp); /* 0x10023D34: pop esi */
    esp = ebp; /* 0x10023D35: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10023D37: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10023D38: ret  */
L_10051C14:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x10051C14: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 0x1007A487u; /* 0x10051C18: mov dword ptr [ebp - 4], 0x1007a487 */
L_10051C1F:
    ecx = ebp + (-0x10); /* 0x10051C1F: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_10068D76); /* 0x10051C22: call 0x10068d76 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10051C27: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10051C29: inc eax */
    _flag_k = FK_INC;
    { uint32_t _tmp = MEM32(esi); /* 0x10051C2A: xchg dword ptr [esi], eax */
      MEM32(esi) = eax;
      eax = _tmp; }
    /* test eax, eax */ /* 0x10051C2C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10023D34; /* 0x10051C2E: je 0x10023d34 */
L_10051C34:
    RECOMP_BACKEDGE();
    goto L_10051C1F; /* 0x10051C34: jmp 0x10051c1f */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10023D39(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10023D39u);

L_10023D39:
    PUSH32(esp, 0xCu); /* 0x10023D39: push 0xc */
    eax = 0x100DBBE0u; /* 0x10023D3B: mov eax, 0x100dbbe0 */
    RECOMP_CALL(sub_100149A4); /* 0x10023D40: call 0x100149a4 */
    RECOMP_FLAGS_IN();
    ecx = 0x100E0320u; /* 0x10023D45: mov ecx, 0x100e0320 */
    MEM32(ebp + (-0x14)) = ecx; /* 0x10023D4A: mov dword ptr [ebp - 0x14], ecx */
    RECOMP_CALL(sub_10023D1E); /* 0x10023D4D: call 0x10023d1e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x10023D52: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(0x100E03E8); /* 0x10023D56: mov eax, dword ptr [0x100e03e8] */
    /* test eax, eax */ /* 0x10023D5B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10029F95; /* 0x10023D5D: jne 0x10029f95 */
L_10023D63:
    eax = ebp + (-0x10); /* 0x10023D63: lea eax, [ebp - 0x10] */
    PUSH32(esp, 0); /* 0x10023D66: push 0 */
    PUSH32(esp, eax); /* 0x10023D68: push eax */
    RECOMP_CALL(sub_100269B8); /* 0x10023D69: call 0x100269b8 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10023D6E: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10023D6F: pop ecx */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x10023D70: mov byte ptr [ebp - 4], 1 */
    eax = MEM32(0x100E0AC8); /* 0x10023D74: mov eax, dword ptr [0x100e0ac8] */
    /* test eax, eax */ /* 0x10023D79: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10053010; /* 0x10023D7B: jne 0x10053010 */
L_10023D81:
    ecx = ebp + (-0x10); /* 0x10023D81: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_10026A07); /* 0x10023D84: call 0x10026a07 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x10023D89: mov ecx, eax */
    MEM32(0x100E03E8) = eax; /* 0x10023D8B: mov dword ptr [0x100e03e8], eax */
    RECOMP_CALL(sub_10024FC6); /* 0x10023D90: call 0x10024fc6 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x100E03E8); /* 0x10023D95: mov ecx, dword ptr [0x100e03e8] */
    eax = MEM32(ecx); /* 0x10023D9B: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x10023D9D: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x10023DA0: push dword ptr [ebp - 0x10] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10023DA3: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10023DA8: pop ecx */
L_10023DA9:
    eax = MEM32(0x100E03E8); /* 0x10023DA9: mov eax, dword ptr [0x100e03e8] */
    MEM32(0x100E0320) = 0; /* 0x10023DAE: mov dword ptr [0x100e0320], 0 */
    RECOMP_CALL(sub_100149D7); /* 0x10023DB8: call 0x100149d7 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10023DBD: ret  */
L_10029F95:
    esi = eax + 0x180; /* 0x10029F95: lea esi, [eax + 0x180] */
L_10029F9B:
    edx = MEM32(esi); /* 0x10029F9B: mov edx, dword ptr [esi] */
    /* test edx, edx */ /* 0x10029F9D: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10023D63; /* 0x10029F9F: je 0x10023d63 */
L_10029FA5:
    ecx = edx + 0x1; /* 0x10029FA5: lea ecx, [edx + 1] */
    eax = edx; /* 0x10029FA8: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(esi); if (eax == _d) { MEM32(esi) = ecx; } else { eax = _d; } } /* 0x10029FAA: lock cmpxchg dword ptr [esi], ecx */
    _flag_k = FK_CMP;
    /* cmp eax, edx */ /* 0x10029FAE: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10023DA9; /* 0x10029FB0: je 0x10023da9 */
L_10029FB6:
    RECOMP_BACKEDGE();
    goto L_10029F9B; /* 0x10029FB6: jmp 0x10029f9b */
L_10053010:
    PUSH32(esp, 0x28u); /* 0x10053010: push 0x28 */
    PUSH32(esp, MEM32(eax)); /* 0x10053012: push dword ptr [eax] */
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x10053014: push dword ptr [ebp - 0x10] */
    RECOMP_CALL(sub_1000F594); /* 0x10053017: call 0x1000f594 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1005301C: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_10023D81; /* 0x1005301F: jmp 0x10023d81 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10023DBE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10023DBEu);

L_10023DBE:
    PUSH32(esp, ebp); /* 0x10023DBE: push ebp */
    ebp = esp; /* 0x10023DBF: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x10023DC1: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x10023DC4: push esi */
    esi = ecx; /* 0x10023DC5: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10023DC7: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x10023DC9: inc ecx */
    _flag_k = FK_INC;
    PUSH32(esp, edi); /* 0x10023DCA: push edi */
    edi = ecx; /* 0x10023DCB: mov edi, ecx */
    eax = esi + 0x180; /* 0x10023DCD: lea eax, [esi + 0x180] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(eax), _sum = MEM32(eax) + edi; edi = _old; MEM32(eax) = _sum; } /* 0x10023DD3: lock xadd dword ptr [eax], edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x10023DD7: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, ecx */ /* 0x10023DD8: cmp edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002487F; /* 0x10023DDA: je 0x1002487f */
L_10023DE0:
    eax = edi; /* 0x10023DE0: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x10023DE2: pop edi */
    esi = POP32_VAL(esp); /* 0x10023DE3: pop esi */
    esp = ebp; /* 0x10023DE4: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10023DE6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10023DE7: ret  */
L_1002487F:
    eax = esi + 0x18C; /* 0x1002487F: lea eax, [esi + 0x18c] */
    /* cmp MEM32(eax), 0 */ /* 0x10024885: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_10053024; /* 0x10024888: jg 0x10053024 */
L_1002488E:
    { uint32_t _tmp = MEM32(eax); /* 0x1002488E: xchg dword ptr [eax], ecx */
      MEM32(eax) = ecx;
      ecx = _tmp; }
    RECOMP_BACKEDGE();
    goto L_10023DE0; /* 0x10024890: jmp 0x10023de0 */
L_10053024:
    RECOMP_CALL(sub_10023AF4); /* 0x10053024: call 0x10023af4 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10053029: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10053044; /* 0x1005302B: je 0x10053044 */
L_1005302D:
    /* cmp MEM8(eax + 0x4C), 0 */ /* 0x1005302D: cmp byte ptr [eax + 0x4c], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0x4C)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_10053044; /* 0x10053031: jne 0x10053044 */
L_10053033:
    /* cmp MEM32(eax + 0x1C), esi */ /* 0x10053033: cmp dword ptr [eax + 0x1c], esi */
    _flag_a = (uint32_t)(MEM32(eax + 0x1C)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10053044; /* 0x10053036: jne 0x10053044 */
L_10053038:
    ecx = esi; /* 0x10053038: mov ecx, esi */
    RECOMP_CALL(sub_10074459); /* 0x1005303A: call 0x10074459 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_10023DE0; /* 0x1005303F: jmp 0x10023de0 */
L_10053044:
    ecx = ebp + (-0xC); /* 0x10053044: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_1009DD55); /* 0x10053047: call 0x1009dd55 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x10053064u); /* 0x1005304C: push 0x10053064 */
    eax = ebp + (-0xC); /* 0x10053051: lea eax, [ebp - 0xc] */
    MEM32(ebp + (-0xC)) = 0x10067614u; /* 0x10053054: mov dword ptr [ebp - 0xc], 0x10067614 */
    PUSH32(esp, eax); /* 0x1005305B: push eax */
    RECOMP_CALL(sub_100192EB); /* 0x1005305C: call 0x100192eb */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x10053061u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10023DE8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10023DE8u);

L_10023DE8:
    PUSH32(esp, ebp); /* 0x10023DE8: push ebp */
    ebp = esp; /* 0x10023DE9: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x10023DEB: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x10023DEE: push esi */
    PUSH32(esp, edi); /* 0x10023DEF: push edi */
    edi = ecx; /* 0x10023DF0: mov edi, ecx */
    RECOMP_CALL(sub_10023AF4); /* 0x10023DF2: call 0x10023af4 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x10023DF7: mov esi, eax */
    /* test esi, esi */ /* 0x10023DF9: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005307E; /* 0x10023DFB: jne 0x1005307e */
L_10023E01:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10023E01: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edi + 0x184; /* 0x10023E03: lea eax, [edi + 0x184] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x10023E09: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(eax), _sum = MEM32(eax) + ecx; ecx = _old; MEM32(eax) = _sum; } /* 0x10023E0A: lock xadd dword ptr [eax], ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edi); /* 0x10023E0E: mov eax, dword ptr [edi] */
    ecx = edi; /* 0x10023E10: mov ecx, edi */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x10023E12: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10023E15: push dword ptr [ebp + 8] */
    ecx = edi; /* 0x10023E18: mov ecx, edi */
    RECOMP_CALL(sub_10023CC6); /* 0x10023E1A: call 0x10023cc6 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x10023E1F: mov edi, eax */
    PUSH32(esp, edi); /* 0x10023E21: push edi */
    PUSH32(esp, MEM32(0x100DFDE0)); /* 0x10023E22: push dword ptr [0x100dfde0] */
    MEM32(edi + 0x24) = esi; /* 0x10023E28: mov dword ptr [edi + 0x24], esi */
    RECOMP_ICALL(MEM32(0x100E5154)); /* 0x10023E2B: call dword ptr [0x100e5154] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10023E31: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100530B1; /* 0x10023E33: je 0x100530b1 */
L_10023E39:
    eax = edi; /* 0x10023E39: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x10023E3B: pop edi */
    esi = POP32_VAL(esp); /* 0x10023E3C: pop esi */
    esp = ebp; /* 0x10023E3D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10023E3F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x10023E40: ret 4 */
L_1005307E:
    /* cmp MEM32(esi + 0x1C), edi */ /* 0x1005307E: cmp dword ptr [esi + 0x1c], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x1C)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100530BB; /* 0x10053081: je 0x100530bb */
L_10053083:
    /* cmp MEM8(esi + 0x4C), 0 */ /* 0x10053083: cmp byte ptr [esi + 0x4c], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x4C)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_10053091; /* 0x10053087: jne 0x10053091 */
L_10053089:
    ecx = esi + (-0x4); /* 0x10053089: lea ecx, [esi - 4] */
    RECOMP_CALL(sub_1006DF53); /* 0x1005308C: call 0x1006df53 */
    RECOMP_FLAGS_IN();
L_10053091:
    PUSH32(esp, 0); /* 0x10053091: push 0 */
    PUSH32(esp, MEM32(0x100DFDE0)); /* 0x10053093: push dword ptr [0x100dfde0] */
    RECOMP_ICALL(MEM32(0x100E5154)); /* 0x10053099: call dword ptr [0x100e5154] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1005309F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10023E01; /* 0x100530A1: jne 0x10023e01 */
L_100530A7:
    RECOMP_CALL(sub_1006EE8E); /* 0x100530A7: call 0x1006ee8e */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_10023E01; /* 0x100530AC: jmp 0x10023e01 */
L_100530B1:
    RECOMP_CALL(sub_1006EE8E); /* 0x100530B1: call 0x1006ee8e */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_10023E39; /* 0x100530B6: jmp 0x10023e39 */
L_100530BB:
    ecx = ebp + (-0xC); /* 0x100530BB: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_1009DD55); /* 0x100530BE: call 0x1009dd55 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x100DCFF4u); /* 0x100530C3: push 0x100dcff4 */
    eax = ebp + (-0xC); /* 0x100530C8: lea eax, [ebp - 0xc] */
    MEM32(ebp + (-0xC)) = 0x10067634u; /* 0x100530CB: mov dword ptr [ebp - 0xc], 0x10067634 */
    PUSH32(esp, eax); /* 0x100530D2: push eax */
    RECOMP_CALL(sub_100192EB); /* 0x100530D3: call 0x100192eb */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x100530D8u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10023E43(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10023E43u);

L_10023E43:
    PUSH32(esp, ecx); /* 0x10023E43: push ecx */
    PUSH32(esp, esi); /* 0x10023E44: push esi */
    PUSH32(esp, edi); /* 0x10023E45: push edi */
    RECOMP_CALL(sub_10023D39); /* 0x10023E46: call 0x10023d39 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x10023E4B: mov edi, eax */
    PUSH32(esp, 0); /* 0x10023E4D: push 0 */
    ecx = edi; /* 0x10023E4F: mov ecx, edi */
    RECOMP_CALL(sub_10023DE8); /* 0x10023E51: call 0x10023de8 */
    RECOMP_FLAGS_IN();
    edx = MEM32(edi); /* 0x10023E56: mov edx, dword ptr [edi] */
    ecx = edi; /* 0x10023E58: mov ecx, edi */
    esi = eax; /* 0x10023E5A: mov esi, eax */
    RECOMP_ICALL(MEM32(edx + 0x14)); /* 0x10023E5C: call dword ptr [edx + 0x14] */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x10023E5F: pop edi */
    eax = esi; /* 0x10023E60: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x10023E62: pop esi */
    ecx = POP32_VAL(esp); /* 0x10023E63: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10023E64: ret  */
    RECOMP_REGS_OUT();
}

void sub_10023E7E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10023E7Eu);

L_10023E7E:
    PUSH32(esp, 4); /* 0x10023E7E: push 4 */
    eax = 0x100DB404u; /* 0x10023E80: mov eax, 0x100db404 */
    RECOMP_CALL(sub_100149A4); /* 0x10023E85: call 0x100149a4 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x100E03E4); /* 0x10023E8A: mov eax, dword ptr [0x100e03e4] */
    /* test eax, eax */ /* 0x10023E8F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005233C; /* 0x10023E91: je 0x1005233c */
L_10023E97:
    RECOMP_CALL(sub_100149D7); /* 0x10023E97: call 0x100149d7 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10023E9C: ret  */
L_1005233C:
    ecx = 0x100E032Cu; /* 0x1005233C: mov ecx, 0x100e032c */
    MEM32(ebp + (-0x10)) = ecx; /* 0x10052341: mov dword ptr [ebp - 0x10], ecx */
    RECOMP_CALL(sub_10023D1E); /* 0x10052344: call 0x10023d1e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x10052349: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(0x100E03E4); /* 0x1005234D: mov eax, dword ptr [0x100e03e4] */
    /* test eax, eax */ /* 0x10052352: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10052360; /* 0x10052354: jne 0x10052360 */
L_10052356:
    RECOMP_CALL(sub_10026BF4); /* 0x10052356: call 0x10026bf4 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x100E03E4); /* 0x1005235B: mov eax, dword ptr [0x100e03e4] */
L_10052360:
    MEM32(0x100E032C) = 0; /* 0x10052360: mov dword ptr [0x100e032c], 0 */
    RECOMP_BACKEDGE();
    goto L_10023E97; /* 0x1005236A: jmp 0x10023e97 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10023E9D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10023E9Du);

L_10023E9D:
    PUSH32(esp, ebp); /* 0x10023E9D: push ebp */
    ebp = esp; /* 0x10023E9E: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x10023EA0: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x10023EA3: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x10023EA6: push ebx */
    SET_LO8(ebx, MEM8(ebp + 0x8)); /* 0x10023EA7: mov bl, byte ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x10023EAA: push esi */
    PUSH32(esp, edi); /* 0x10023EAB: push edi */
    edi = ecx; /* 0x10023EAC: mov edi, ecx */
    MEM8(edi + 0x98) = (uint8_t)(LO8(ebx)); /* 0x10023EAE: mov byte ptr [edi + 0x98], bl */
    RECOMP_ICALL(MEM32(0x100E5034)); /* 0x10023EB4: call dword ptr [0x100e5034] */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x44) = eax; /* 0x10023EBA: mov dword ptr [edi + 0x44], eax */
    /* test LO8(ebx), LO8(ebx) */ /* 0x10023EBD: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10023F4F; /* 0x10023EBF: jne 0x10023f4f */
L_10023EC5:
    esi = MEM32(0x100E510C); /* 0x10023EC5: mov esi, dword ptr [0x100e510c] */
    eax = edi + 0xA4; /* 0x10023ECB: lea eax, [edi + 0xa4] */
    PUSH32(esp, 2); /* 0x10023ED1: push 2 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10023ED3: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x10023ED5: push ebx */
    PUSH32(esp, ebx); /* 0x10023ED6: push ebx */
    PUSH32(esp, eax); /* 0x10023ED7: push eax */
    RECOMP_ICALL(esi); /* 0x10023ED8: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x10023EDA: push eax */
    RECOMP_ICALL(MEM32(0x100E504C)); /* 0x10023EDB: call dword ptr [0x100e504c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x10023EE1: push eax */
    RECOMP_ICALL(esi); /* 0x10023EE2: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x10023EE4: push eax */
    RECOMP_ICALL(MEM32(0x100E5108)); /* 0x10023EE5: call dword ptr [0x100e5108] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10023EEB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10051E48; /* 0x10023EED: je 0x10051e48 */
L_10023EF3:
    RECOMP_CALL(sub_10023E7E); /* 0x10023EF3: call 0x10023e7e */
    RECOMP_FLAGS_IN();
    /* cmp eax, 3 */ /* 0x10023EF8: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_10051E82; /* 0x10023EFB: jl 0x10051e82 */
L_10023F01:
    eax = MEM32(edi + 0xA4); /* 0x10023F01: mov eax, dword ptr [edi + 0xa4] */
    PUSH32(esp, ebx); /* 0x10023F07: push ebx */
    PUSH32(esp, edi); /* 0x10023F08: push edi */
    PUSH32(esp, 0x10033D52u); /* 0x10023F09: push 0x10033d52 */
    MEM32(esp + 0x18) = eax; /* 0x10023F0E: mov dword ptr [esp + 0x18], eax */
    RECOMP_CALL(sub_10023BC6); /* 0x10023F12: call 0x10023bc6 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x10023F17: mov esi, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10023F19: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x10023F1C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10023F41; /* 0x10023F1E: je 0x10023f41 */
L_10023F20:
    RECOMP_CALL(sub_10023A83); /* 0x10023F20: call 0x10023a83 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10023F25: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = 0x100DFDDCu; /* 0x10023F27: mov ecx, 0x100dfddc */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10023F2C: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(ecx), _sum = MEM32(ecx) + eax; eax = _old; MEM32(ecx) = _sum; } /* 0x10023F2D: lock xadd dword ptr [ecx], eax */
    _flag_k = FK_ADD;
    PUSH32(esp, ebx); /* 0x10023F31: push ebx */
    PUSH32(esp, MEM32(esp + 0x10)); /* 0x10023F32: push dword ptr [esp + 0x10] */
    PUSH32(esp, esi); /* 0x10023F36: push esi */
    RECOMP_CALL(sub_10023F58); /* 0x10023F37: call 0x10023f58 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10023F3C: add esp, 0xc */
    _flag_k = FK_ADD;
    ebx = esi; /* 0x10023F3F: mov ebx, esi */
L_10023F41:
    MEM32(edi + 0xAC) = ebx; /* 0x10023F41: mov dword ptr [edi + 0xac], ebx */
    /* test ebx, ebx */ /* 0x10023F47: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10051E5B; /* 0x10023F49: je 0x10051e5b */
L_10023F4F:
    edi = POP32_VAL(esp); /* 0x10023F4F: pop edi */
    esi = POP32_VAL(esp); /* 0x10023F50: pop esi */
    ebx = POP32_VAL(esp); /* 0x10023F51: pop ebx */
    esp = ebp; /* 0x10023F52: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10023F54: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x10023F55: ret 4 */
L_10051E48:
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x10051E48: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10051E4E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_10051ED7; /* 0x10051E50: jg 0x10051ed7 */
L_10051E56:
    goto L_10051EDF; /* 0x10051E56: jmp 0x10051edf */
L_10051E5B:
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x10051E5B: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10051E61: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_10051E6D; /* 0x10051E63: jle 0x10051e6d */
L_10051E65:
    eax = (uint32_t)LO16(eax); /* 0x10051E65: movzx eax, ax */
    _flag_a = (uint32_t)((eax | 0x80070000u)); _flag_b = (uint32_t)((eax | 0x80070000u));
    eax = eax | 0x80070000u; /* 0x10051E68: or eax, 0x80070000 */
    _cf = 0;
    _flag_k = FK_TEST;
L_10051E6D:
    PUSH32(esp, eax); /* 0x10051E6D: push eax */
    ecx = esp + 0x14; /* 0x10051E6E: lea ecx, [esp + 0x14] */
    RECOMP_CALL(sub_1006C31C); /* 0x10051E72: call 0x1006c31c */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x100DCF40u); /* 0x10051E77: push 0x100dcf40 */
    eax = esp + 0x14; /* 0x10051E7C: lea eax, [esp + 0x14] */
    goto L_10051EF2; /* 0x10051E80: jmp 0x10051ef2 */
L_10051E82:
    PUSH32(esp, 0xCu); /* 0x10051E82: push 0xc */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x10051E84: push -1 */
    PUSH32(esp, edi); /* 0x10051E86: push edi */
    PUSH32(esp, 0x1006CB49u); /* 0x10051E87: push 0x1006cb49 */
    PUSH32(esp, MEM32(edi + 0xA4)); /* 0x10051E8C: push dword ptr [edi + 0xa4] */
    eax = esp + 0x20; /* 0x10051E92: lea eax, [esp + 0x20] */
    PUSH32(esp, eax); /* 0x10051E96: push eax */
    RECOMP_ICALL(MEM32(0x100E5168)); /* 0x10051E97: call dword ptr [0x100e5168] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10051E9D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10051EC8; /* 0x10051E9F: jne 0x10051ec8 */
L_10051EA1:
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x10051EA1: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10051EA7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_10051EB3; /* 0x10051EA9: jle 0x10051eb3 */
L_10051EAB:
    eax = (uint32_t)LO16(eax); /* 0x10051EAB: movzx eax, ax */
    _flag_a = (uint32_t)((eax | 0x80070000u)); _flag_b = (uint32_t)((eax | 0x80070000u));
    eax = eax | 0x80070000u; /* 0x10051EAE: or eax, 0x80070000 */
    _cf = 0;
    _flag_k = FK_TEST;
L_10051EB3:
    PUSH32(esp, eax); /* 0x10051EB3: push eax */
    ecx = esp + 0x14; /* 0x10051EB4: lea ecx, [esp + 0x14] */
    RECOMP_CALL(sub_1006C31C); /* 0x10051EB8: call 0x1006c31c */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x100DCF40u); /* 0x10051EBD: push 0x100dcf40 */
    eax = esp + 0x14; /* 0x10051EC2: lea eax, [esp + 0x14] */
    goto L_10051EF2; /* 0x10051EC6: jmp 0x10051ef2 */
L_10051EC8:
    eax = MEM32(esp + 0xC); /* 0x10051EC8: mov eax, dword ptr [esp + 0xc] */
    MEM32(edi + 0xAC) = eax; /* 0x10051ECC: mov dword ptr [edi + 0xac], eax */
    RECOMP_BACKEDGE();
    goto L_10023F4F; /* 0x10051ED2: jmp 0x10023f4f */
L_10051ED7:
    eax = (uint32_t)LO16(eax); /* 0x10051ED7: movzx eax, ax */
    _flag_a = (uint32_t)((eax | 0x80070000u)); _flag_b = (uint32_t)((eax | 0x80070000u));
    eax = eax | 0x80070000u; /* 0x10051EDA: or eax, 0x80070000 */
    _cf = 0;
    _flag_k = FK_TEST;
L_10051EDF:
    PUSH32(esp, eax); /* 0x10051EDF: push eax */
    ecx = esp + 0x14; /* 0x10051EE0: lea ecx, [esp + 0x14] */
    RECOMP_CALL(sub_1006C31C); /* 0x10051EE4: call 0x1006c31c */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x100DCF40u); /* 0x10051EE9: push 0x100dcf40 */
    eax = esp + 0x14; /* 0x10051EEE: lea eax, [esp + 0x14] */
L_10051EF2:
    PUSH32(esp, eax); /* 0x10051EF2: push eax */
    RECOMP_CALL(sub_100192EB); /* 0x10051EF3: call 0x100192eb */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x10051EF8u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10023F58(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10023F58u);

L_10023F58:
    PUSH32(esp, ebp); /* 0x10023F58: push ebp */
    ebp = esp; /* 0x10023F59: mov ebp, esp */
    eax = MEM32(0x100DFA34); /* 0x10023F5B: mov eax, dword ptr [0x100dfa34] */
    _flag_a = (uint32_t)((eax ^ MEM32(0x100DF7B8))); _flag_b = (uint32_t)((eax ^ MEM32(0x100DF7B8)));
    eax = eax ^ MEM32(0x100DF7B8); /* 0x10023F60: xor eax, dword ptr [0x100df7b8] */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10023F73; /* 0x10023F66: je 0x10023f73 */
L_10023F68:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10023F68: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10023F6B: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10023F6E: push dword ptr [ebp + 8] */
    RECOMP_ICALL(eax); /* 0x10023F71: call eax */
    RECOMP_FLAGS_IN();
L_10023F73:
    ebp = POP32_VAL(esp); /* 0x10023F73: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10023F74: ret  */
    RECOMP_REGS_OUT();
}

void sub_10023F7C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10023F7Cu);

L_10023F7C:
    PUSH32(esp, 4); /* 0x10023F7C: push 4 */
    eax = 0x100DAD54u; /* 0x10023F7E: mov eax, 0x100dad54 */
    RECOMP_CALL(sub_100149A4); /* 0x10023F83: call 0x100149a4 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x10023F88: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x10023F8A: mov dword ptr [ebp - 0x10], esi */
    eax = MEM32(ebp + 0x8); /* 0x10023F8D: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x10023F90: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = edi; /* 0x10023F92: mov dword ptr [ebp - 4], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10023F95: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(esi + 0x3C) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(esi + 0x3C) | 0xFFFFFFFFu));
    MEM32(esi + 0x3C) = MEM32(esi + 0x3C) | 0xFFFFFFFFu; /* 0x10023F97: or dword ptr [esi + 0x3c], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x10023F9B: inc ebx */
    _flag_k = FK_INC;
    MEM32(esi + 0x1C) = eax; /* 0x10023F9C: mov dword ptr [esi + 0x1c], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10023F9F: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, MEM8(ebp + 0xC)); /* 0x10023FA1: mov al, byte ptr [ebp + 0xc] */
    MEM32(esi) = 0x10024088u; /* 0x10023FA4: mov dword ptr [esi], 0x10024088 */
    MEM32(esi + 0xC) = edi; /* 0x10023FAA: mov dword ptr [esi + 0xc], edi */
    MEM32(esi + 0x10) = edi; /* 0x10023FAD: mov dword ptr [esi + 0x10], edi */
    MEM32(esi + 0x14) = edi; /* 0x10023FB0: mov dword ptr [esi + 0x14], edi */
    MEM32(esi + 0x20) = edi; /* 0x10023FB3: mov dword ptr [esi + 0x20], edi */
    MEM32(esi + 0x24) = edi; /* 0x10023FB6: mov dword ptr [esi + 0x24], edi */
    MEM32(esi + 0x28) = ebx; /* 0x10023FB9: mov dword ptr [esi + 0x28], ebx */
    MEM8(esi + 0x4C) = (uint8_t)(LO8(eax)); /* 0x10023FBC: mov byte ptr [esi + 0x4c], al */
    MEM32(esi + 0x2C) = edi; /* 0x10023FBF: mov dword ptr [esi + 0x2c], edi */
    MEM32(esi + 0x30) = edi; /* 0x10023FC2: mov dword ptr [esi + 0x30], edi */
    MEM32(esi + 0x34) = edi; /* 0x10023FC5: mov dword ptr [esi + 0x34], edi */
    MEM32(esi + 0x38) = edi; /* 0x10023FC8: mov dword ptr [esi + 0x38], edi */
    MEM32(esi + 0x40) = edi; /* 0x10023FCB: mov dword ptr [esi + 0x40], edi */
    MEM32(esi + 0x44) = edi; /* 0x10023FCE: mov dword ptr [esi + 0x44], edi */
    MEM32(esi + 0x50) = edi; /* 0x10023FD1: mov dword ptr [esi + 0x50], edi */
    MEM32(esi + 0x54) = edi; /* 0x10023FD4: mov dword ptr [esi + 0x54], edi */
    MEM32(esi + 0x58) = edi; /* 0x10023FD7: mov dword ptr [esi + 0x58], edi */
    MEM32(esi + 0x64) = edi; /* 0x10023FDA: mov dword ptr [esi + 0x64], edi */
    MEM32(esi + 0x68) = 0xFFFFFFFFu; /* 0x10023FDD: mov dword ptr [esi + 0x68], 0xffffffff */
    PUSH32(esp, 7); /* 0x10023FE4: push 7 */
    MEM32(esi + 0x6C) = 0xFFFFFFFFu; /* 0x10023FE6: mov dword ptr [esi + 0x6c], 0xffffffff */
    eax = POP32_VAL(esp); /* 0x10023FED: pop eax */
    MEM32(esi + 0x70) = edi; /* 0x10023FEE: mov dword ptr [esi + 0x70], edi */
    MEM32(esi + 0x74) = edi; /* 0x10023FF1: mov dword ptr [esi + 0x74], edi */
    PUSH32(esp, 4); /* 0x10023FF4: push 4 */
    MEM32(esi + 0x78) = edi; /* 0x10023FF6: mov dword ptr [esi + 0x78], edi */
    MEM32(esi + 0x7C) = edi; /* 0x10023FF9: mov dword ptr [esi + 0x7c], edi */
    edx = POP32_VAL(esp); /* 0x10023FFC: pop edx */
    MEM32(esi + 0x80) = eax; /* 0x10023FFD: mov dword ptr [esi + 0x80], eax */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x10024003: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    MEM32(esi + 0x84) = edi; /* 0x10024005: mov dword ptr [esi + 0x84], edi */
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x1002400B: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1002400E: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x10024010: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x10024012: push ecx */
    RECOMP_CALL(sub_10011683); /* 0x10024013: call 0x10011683 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10024018: pop ecx */
    ecx = MEM32(esi + 0x80); /* 0x10024019: mov ecx, dword ptr [esi + 0x80] */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x1002401F: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x1002401F: shl ecx, 2 */
    PUSH32(esp, ecx); /* 0x10024022: push ecx */
    PUSH32(esp, edi); /* 0x10024023: push edi */
    PUSH32(esp, eax); /* 0x10024024: push eax */
    MEM32(esi + 0x88) = eax; /* 0x10024025: mov dword ptr [esi + 0x88], eax */
    RECOMP_CALL(sub_10011533); /* 0x1002402B: call 0x10011533 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10024030: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM8(ebp + (-0x4)) = (uint8_t)(LO8(ebx)); /* 0x10024033: mov byte ptr [ebp - 4], bl */
    PUSH32(esp, 0x10u); /* 0x10024036: push 0x10 */
    MEM32(esi + 0x8C) = edi; /* 0x10024038: mov dword ptr [esi + 0x8c], edi */
    MEM32(esi + 0x90) = edi; /* 0x1002403E: mov dword ptr [esi + 0x90], edi */
    RECOMP_CALL(sub_10011683); /* 0x10024044: call 0x10011683 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10024049: pop ecx */
    MEM32(esi + 0x94) = eax; /* 0x1002404A: mov dword ptr [esi + 0x94], eax */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x10024050: mov byte ptr [ebp - 4], 2 */
    edx = ebx; /* 0x10024054: mov edx, ebx */
    eax = MEM32(esi + 0x1C); /* 0x10024056: mov eax, dword ptr [esi + 0x1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x148u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x148u; /* 0x10024059: add eax, 0x148 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(eax), _sum = MEM32(eax) + edx; edx = _old; MEM32(eax) = _sum; } /* 0x1002405E: lock xadd dword ptr [eax], edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x10024062: inc edx */
    _flag_k = FK_INC;
    ecx = MEM32(esi + 0x1C); /* 0x10024063: mov ecx, dword ptr [esi + 0x1c] */
    MEM32(esi + 0x8) = edx; /* 0x10024066: mov dword ptr [esi + 8], edx */
    PUSH32(esp, edx); /* 0x10024069: push edx */
    eax = MEM32(ecx); /* 0x1002406A: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1002406C: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1002406F: push eax */
    PUSH32(esp, ecx); /* 0x10024070: push ecx */
    PUSH32(esp, ebx); /* 0x10024071: push ebx */
    RECOMP_CALL(sub_10023B01); /* 0x10024072: call 0x10023b01 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x10024077: mov eax, esi */
    RECOMP_CALL(sub_100149D7); /* 0x10024079: call 0x100149d7 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1002407E: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_10024088(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10024088u);

L_10024088:
    void_lift_trap(0x10024088u, "mov gs, word ptr [edi]");
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + MEM8(eax)); /* 0x1002408A: add dl, byte ptr [eax] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _rv = (MEM32(esi + 0xA)) & 0xFFFFFFFFu, _rn = ((LO8(ecx)) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } MEM32(esi + 0xA) = _rv; } /* 0x1002408C: rol dword ptr [esi + 0xa], cl */
    { uint32_t _aa = MEM8(eax + (-0x65)), _ab = HI8(ebx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1002408F: adc byte ptr [eax - 0x65], bh */
      MEM8(eax + (-0x65)) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    PUSH32(esp, _seg_es); /* 0x10024092: push es */
    { uint32_t _aa = LO8(ebx), _ab = LO8(edx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10024093: adc bl, dl */
      SET_LO8(ebx, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10024095: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)((LO8(edx) | MEM8(eax))) << 24; _flag_b = (uint32_t)((LO8(edx) | MEM8(eax))) << 24;
    SET_LO8(edx, LO8(edx) | MEM8(eax)); /* 0x10024096: or dl, byte ptr [eax] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    { uint32_t _rv = (MEM32(esi + 0xA)) & 0xFFFFFFFFu, _rn = ((LO8(ecx)) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } MEM32(esi + 0xA) = _rv; } /* 0x10024098: rol dword ptr [esi + 0xa], cl */
    { uint32_t _aa = MEM8(ebx), _ab = HI8(ecx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1002409B: adc byte ptr [ebx], ch */
      MEM8(ebx) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    /* fwait */ /* 0x1002409D: wait  */
    PUSH32(esp, _seg_es); /* 0x1002409E: push es */
    { uint32_t _aa = LO8(ebx), _ab = LO8(edx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1002409F: adc bl, dl */
      SET_LO8(ebx, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100240A1: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)((LO8(edx) | MEM8(eax))) << 24; _flag_b = (uint32_t)((LO8(edx) | MEM8(eax))) << 24;
    SET_LO8(edx, LO8(edx) | MEM8(eax)); /* 0x100240A2: or dl, byte ptr [eax] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    { uint32_t _rv = (MEM32(esi + 0xA)) & 0xFFFFFFFFu, _rn = ((LO8(ecx)) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } MEM32(esi + 0xA) = _rv; } /* 0x100240A4: rol dword ptr [esi + 0xa], cl */
    { uint32_t _aa = LO8(ebx), _ab = LO8(edx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100240A7: adc bl, dl */
      SET_LO8(ebx, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100240A9: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)((LO8(edx) | MEM8(eax))) << 24; _flag_b = (uint32_t)((LO8(edx) | MEM8(eax))) << 24;
    SET_LO8(edx, LO8(edx) | MEM8(eax)); /* 0x100240AA: or dl, byte ptr [eax] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    { uint32_t _rv = (MEM32(esi + 0xA)) & 0xFFFFFFFFu, _rn = ((LO8(ecx)) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } MEM32(esi + 0xA) = _rv; } /* 0x100240AC: rol dword ptr [esi + 0xa], cl */
    { uint32_t _aa = LO8(ebx), _ab = LO8(edx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100240AF: adc bl, dl */
      SET_LO8(ebx, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100240B1: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)((LO8(edx) | MEM8(eax))) << 24; _flag_b = (uint32_t)((LO8(edx) | MEM8(eax))) << 24;
    SET_LO8(edx, LO8(edx) | MEM8(eax)); /* 0x100240B2: or dl, byte ptr [eax] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    { uint32_t _rv = (MEM32(esi + 0xA)) & 0xFFFFFFFFu, _rn = ((LO8(ecx)) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } MEM32(esi + 0xA) = _rv; } /* 0x100240B4: rol dword ptr [esi + 0xa], cl */
    { uint32_t _aa = MEM8(ebp + (-0x4AEFF967)), _ab = HI8(ecx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100240B7: adc byte ptr [ebp - 0x4aeff967], ch */
      MEM8(ebp + (-0x4AEFF967)) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x100240BD: cdq  */
    PUSH32(esp, _seg_es); /* 0x100240BE: push es */
    { uint32_t _aa = LO8(eax), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100240BF: adc al, al */
      SET_LO8(eax, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x100240C1: cdq  */
    PUSH32(esp, _seg_es); /* 0x100240C2: push es */
    { uint32_t _aa = LO8(eax), _ab = LO8(ecx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100240C3: adc al, cl */
      SET_LO8(eax, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x100240C5: cdq  */
    PUSH32(esp, _seg_es); /* 0x100240C6: push es */
    { uint32_t _aa = LO8(ebx), _ab = LO8(edx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100240C7: adc bl, dl */
      SET_LO8(ebx, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x100240C9: cdq  */
    PUSH32(esp, _seg_es); /* 0x100240CA: push es */
    { uint32_t _aa = LO8(ebx), _ab = LO8(edx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100240CB: adc bl, dl */
      SET_LO8(ebx, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100240CD: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)((LO8(edx) | MEM8(eax))) << 24; _flag_b = (uint32_t)((LO8(edx) | MEM8(eax))) << 24;
    SET_LO8(edx, LO8(edx) | MEM8(eax)); /* 0x100240CE: or dl, byte ptr [eax] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100240D0: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100240D2: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100240D4: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100240D6: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100240D8: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100240DA: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df)); /* 0x100240DC: pushfd  */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi) = MEM32(esi) + ecx; /* 0x100240DD: add dword ptr [esi], ecx */
    _flag_k = FK_ADD;
    { uint32_t _aa = MEM8(eax + 0x551001E3), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100240DF: adc byte ptr [eax + 0x551001e3], al */
      MEM8(eax + 0x551001E3) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    ebp = esp; /* 0x100240E5: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x100240E7: mov edx, dword ptr [ebp + 8] */
L_100240EA:
    eax = edx + 0x1; /* 0x100240EA: lea eax, [edx + 1] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x100240ED: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)MEM32(ecx + 0x2C); /* 0x100240EE: idiv dword ptr [ecx + 0x2c] */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    eax = MEM32(ecx + 0x24); /* 0x100240F1: mov eax, dword ptr [ecx + 0x24] */
    eax = MEM32(eax + edx * 4); /* 0x100240F4: mov eax, dword ptr [eax + edx*4] */
    /* cmp MEM32(eax + 0xBC), 0 */ /* 0x100240F7: cmp dword ptr [eax + 0xbc], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0xBC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100240EA; /* 0x100240FE: je 0x100240ea */
L_10024100:
    eax = edx; /* 0x10024100: mov eax, edx */
    ebp = POP32_VAL(esp); /* 0x10024102: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x10024103: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_100240E4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100240E4u);

L_100240E4:
    PUSH32(esp, ebp); /* 0x100240E4: push ebp */
    ebp = esp; /* 0x100240E5: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x100240E7: mov edx, dword ptr [ebp + 8] */
L_100240EA:
    eax = edx + 0x1; /* 0x100240EA: lea eax, [edx + 1] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x100240ED: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)MEM32(ecx + 0x2C); /* 0x100240EE: idiv dword ptr [ecx + 0x2c] */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    eax = MEM32(ecx + 0x24); /* 0x100240F1: mov eax, dword ptr [ecx + 0x24] */
    eax = MEM32(eax + edx * 4); /* 0x100240F4: mov eax, dword ptr [eax + edx*4] */
    /* cmp MEM32(eax + 0xBC), 0 */ /* 0x100240F7: cmp dword ptr [eax + 0xbc], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0xBC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100240EA; /* 0x100240FE: je 0x100240ea */
L_10024100:
    eax = edx; /* 0x10024100: mov eax, edx */
    ebp = POP32_VAL(esp); /* 0x10024102: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x10024103: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_10024106(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10024106u);

L_10024106:
    edx = MEM32(ecx + 0x178); /* 0x10024106: mov edx, dword ptr [ecx + 0x178] */
    eax = MEM32(ecx + 0x24); /* 0x1002410C: mov eax, dword ptr [ecx + 0x24] */
    PUSH32(esp, esi); /* 0x1002410F: push esi */
    PUSH32(esp, edx); /* 0x10024110: push edx */
    esi = MEM32(eax + edx * 4); /* 0x10024111: mov esi, dword ptr [eax + edx*4] */
    RECOMP_CALL(sub_100240E4); /* 0x10024114: call 0x100240e4 */
    RECOMP_FLAGS_IN();
    MEM32(ecx + 0x178) = eax; /* 0x10024119: mov dword ptr [ecx + 0x178], eax */
    eax = esi; /* 0x1002411F: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x10024121: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10024122: ret  */
    RECOMP_REGS_OUT();
}

void sub_10024128(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10024128u);

L_10024128:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x10024128: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)((eax ^ MEM32(edi))); _flag_b = (uint32_t)((eax ^ MEM32(edi)));
    eax = eax ^ MEM32(edi); /* 0x10024129: xor eax, dword ptr [edi] */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _aa = MEM8(ebp + 0x3F), _ab = HI8(edx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1002412B: adc byte ptr [ebp + 0x3f], dh */
      MEM8(ebp + 0x3F) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + MEM8(eax)); /* 0x1002412E: add dl, byte ptr [eax] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x10024130: dec ecx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)((MEM32(edi) ^ eax)); _flag_b = (uint32_t)((MEM32(edi) ^ eax));
    MEM32(edi) = MEM32(edi) ^ eax; /* 0x10024131: xor dword ptr [edi], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _aa = MEM8(eax + (-0x41EFFD91)), _ab = LO8(edx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10024133: adc byte ptr [eax - 0x41effd91], dl */
      MEM8(eax + (-0x41EFFD91)) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    /* cmp eax, 0x3E651002u */ /* 0x10024139: cmp eax, 0x3e651002 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3E651002u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + MEM8(eax)); /* 0x1002413E: add dl, byte ptr [eax] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((edi | MEM32(esi))); _flag_b = (uint32_t)((edi | MEM32(esi)));
    edi = edi | MEM32(esi); /* 0x10024140: or edi, dword ptr [esi] */
    _cf = 0;
    _flag_k = FK_TEST;
    _seg_es = POP32_VAL(esp); /* 0x10024142: pop es */
    { uint32_t _aa = LO8(eax), _ab = LO8(ecx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10024143: adc al, cl */
      SET_LO8(eax, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _seg_es = POP32_VAL(esp); /* 0x10024145: pop es */
    { uint32_t _aa = MEM8(ebp + 0x31), _ab = LO8(ecx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10024147: adc byte ptr [ebp + 0x31], cl */
      MEM8(ebp + 0x31) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _seg_es = POP32_VAL(esp); /* 0x1002414A: pop es */
    { uint32_t _aa = MEM8(esi + esi * 2), _ab = LO8(ecx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1002414B: adc byte ptr [esi + esi*2], cl */
      MEM8(esi + esi * 2) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + MEM8(eax)); /* 0x1002414E: add dl, byte ptr [eax] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((LO8(eax) | MEM8(eax + 0x7))) << 24; _flag_b = (uint32_t)((LO8(eax) | MEM8(eax + 0x7))) << 24;
    SET_LO8(eax, LO8(eax) | MEM8(eax + 0x7)); /* 0x10024150: or al, byte ptr [eax + 7] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    { uint32_t _aa = HI8(ebx), _ab = LO8(ebx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10024153: adc bh, bl */
      SET_HI8(ebx, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    void_lift_trap(0x10024155u, "aas ");
    _seg_es = POP32_VAL(esp); /* 0x10024156: pop es */
    { uint32_t _aa = MEM8(ebx + 0x40), _ab = LO8(ecx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10024157: adc byte ptr [ebx + 0x40], cl */
      MEM8(ebx + 0x40) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _seg_es = POP32_VAL(esp); /* 0x1002415A: pop es */
    { uint32_t _aa = LO8(ebx), _ab = LO8(edx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1002415B: adc bl, dl */
      SET_LO8(ebx, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1002415D: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)((LO8(edx) | MEM8(eax))) << 24; _flag_b = (uint32_t)((LO8(edx) | MEM8(eax))) << 24;
    SET_LO8(edx, LO8(edx) | MEM8(eax)); /* 0x1002415E: or dl, byte ptr [eax] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, esi); /* 0x10024160: push esi */
    _flag_a = (uint32_t)((MEM32(edi) ^ eax)); _flag_b = (uint32_t)((MEM32(edi) ^ eax));
    MEM32(edi) = MEM32(edi) ^ eax; /* 0x10024161: xor dword ptr [edi], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _aa = MEM8(ebx + 0x38), _ab = LO8(edx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10024163: adc byte ptr [ebx + 0x38], dl */
      MEM8(ebx + 0x38) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _seg_es = POP32_VAL(esp); /* 0x10024166: pop es */
    { uint32_t _aa = LO8(ebx), _ab = LO8(edx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10024167: adc bl, dl */
      SET_LO8(ebx, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10024169: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)((LO8(edx) | MEM8(eax))) << 24; _flag_b = (uint32_t)((LO8(edx) | MEM8(eax))) << 24;
    SET_LO8(edx, LO8(edx) | MEM8(eax)); /* 0x1002416A: or dl, byte ptr [eax] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1002419F; /* 0x1002416C: jle 0x1002419f */
L_1002416E:
    _seg_es = POP32_VAL(esp); /* 0x1002416E: pop es */
    { uint32_t _aa = MEM8(ecx), _ab = HI8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1002416F: adc byte ptr [ecx], ah */
      MEM8(ecx) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x10024171: inc edx */
    _flag_k = FK_INC;
    _seg_es = POP32_VAL(esp); /* 0x10024172: pop es */
    { uint32_t _aa = MEM8(ebp + 0x48), _ab = LO8(ebx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10024173: adc byte ptr [ebp + 0x48], bl */
      MEM8(ebp + 0x48) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + MEM8(eax)); /* 0x10024176: add dl, byte ptr [eax] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _tmp = MEM32(eax + 0x7); /* 0x10024178: xchg dword ptr [eax + 7], eax */
      MEM32(eax + 0x7) = eax;
      eax = _tmp; }
    { uint32_t _aa = MEM8(edi + 0x42), _ab = HI8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1002417B: adc byte ptr [edi + 0x42], ah */
      MEM8(edi + 0x42) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _seg_es = POP32_VAL(esp); /* 0x1002417E: pop es */
    { uint32_t _aa = LO8(edx), _ab = LO8(ecx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1002417F: adc dl, cl */
      SET_LO8(edx, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _rv = (MEM8(esi)) & 255u, _rn = ((0x10u) & 31) % 8u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 7) & 1u; _rv = ((_rv << 1) | _rb) & 255u; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } MEM8(esi) = (uint8_t)(_rv); } /* 0x10024181: rol byte ptr [esi], 0x10 */
    { uint32_t _rv = (MEM32(esi + 0xA)) & 0xFFFFFFFFu, _rn = ((LO8(ecx)) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } MEM32(esi + 0xA) = _rv; } /* 0x10024184: rol dword ptr [esi + 0xa], cl */
    { uint32_t _aa = MEM8(eax), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10024187: adc byte ptr [eax], al */
      MEM8(eax) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10024189: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1002418B: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1002418D: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1002418F: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10024191: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + 0x3)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x3) = (uint8_t)(MEM8(eax + 0x3) + LO8(ebx)); /* 0x10024193: add byte ptr [eax + 3], bl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, _seg_cs); /* 0x10024196: push cs */
    { uint32_t _aa = MEM8(ecx + eax * 2 + 0x1002), _ab = LO8(ebx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10024197: adc byte ptr [ecx + eax*2 + 0x1002], bl */
      MEM8(ecx + eax * 2 + 0x1002) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1002419E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100241A0; /* falls through past a gap */
L_1002419F:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1002419F: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100241A1; /* falls through past a gap */
L_100241A0:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100241A0: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100241A2; /* falls through past a gap */
L_100241A1:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100241A1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100241A3; /* falls through past a gap */
L_100241A2:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100241A2: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100241A4; /* falls through past a gap */
L_100241A3:
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + LO8(eax)); /* 0x100241A3: add byte ptr [edx], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100241A5; /* falls through past a gap */
L_100241A4:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + MEM8(eax)); /* 0x100241A4: add al, byte ptr [eax] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100241A6; /* falls through past a gap */
L_100241A5:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100241A5: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100241A7; /* falls through past a gap */
L_100241A6:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100241A6: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100241A8; /* falls through past a gap */
L_100241A7:
    _flag_a = (uint32_t)(MEM8(ecx + eax * 2 + 0x41B81002)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ecx + eax * 2 + 0x41B81002) = (uint8_t)(MEM8(ecx + eax * 2 + 0x41B81002) + HI8(ecx)); /* 0x100241A7: add byte ptr [ecx + eax*2 + 0x41b81002], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100241AE; /* falls through past a gap */
L_100241A8:
    SET_LO8(eax, MEM8(esi)); esi += _df; /* 0x100241A8: lodsb al, byte ptr [esi] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x100241A9: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + MEM8(eax)); /* 0x100241AA: add dl, byte ptr [eax] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    eax = 0xD4100241u; /* 0x100241AC: mov eax, 0xd4100241 */
    goto L_100241B1; /* falls through past a gap */
L_100241AE:
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + MEM8(eax)); /* 0x100241AE: add dl, byte ptr [eax] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x100241B0u, "aam 0x41");
    goto L_100241B2; /* falls through past a gap */
L_100241B1:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x100241B1: inc ecx */
    _flag_k = FK_INC;
L_100241B2:
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + MEM8(eax)); /* 0x100241B2: add dl, byte ptr [eax] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + 0x3589090)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x3589090) = (uint8_t)(MEM8(eax + 0x3589090) + LO8(edx)); /* 0x100241B4: add byte ptr [eax + 0x3589090], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, _seg_cs); /* 0x100241BA: push cs */
    { uint32_t _aa = MEM8(ecx), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100241BB: adc byte ptr [ecx], al */
      MEM8(ecx) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100241BD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100241BF: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100241C1: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x100241C3: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x100241C5u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_1002420C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002420Cu);

L_1002420C:
    MEM16(ecx + 0x3F751007) = (uint16_t)(_seg_ds); /* 0x1002420C: mov word ptr [ecx + 0x3f751007], ds */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + MEM8(eax)); /* 0x10024212: add dl, byte ptr [eax] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x10024214: dec ecx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)((MEM32(edi) ^ eax)); _flag_b = (uint32_t)((MEM32(edi) ^ eax));
    MEM32(edi) = MEM32(edi) ^ eax; /* 0x10024215: xor dword ptr [edi], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _aa = MEM8(ecx + ebx * 4 + 0x3DBE1007), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10024217: adc byte ptr [ecx + ebx*4 + 0x3dbe1007], al */
      MEM8(ecx + ebx * 4 + 0x3DBE1007) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + MEM8(eax)); /* 0x1002421E: add dl, byte ptr [eax] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + MEM8(eax)); /* 0x10024220: add dl, byte ptr ds:[eax] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((edi | MEM32(esi))); _flag_b = (uint32_t)((edi | MEM32(esi)));
    edi = edi | MEM32(esi); /* 0x10024224: or edi, dword ptr [esi] */
    _cf = 0;
    _flag_k = FK_TEST;
    _seg_es = POP32_VAL(esp); /* 0x10024226: pop es */
    { uint32_t _aa = LO8(eax), _ab = LO8(ecx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10024227: adc al, cl */
      SET_LO8(eax, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _seg_es = POP32_VAL(esp); /* 0x10024229: pop es */
    { uint32_t _aa = MEM8(ebp + 0x31), _ab = LO8(ecx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1002422B: adc byte ptr [ebp + 0x31], cl */
      MEM8(ebp + 0x31) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _seg_es = POP32_VAL(esp); /* 0x1002422E: pop es */
    { uint32_t _aa = MEM8(esi + esi * 2), _ab = LO8(ecx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1002422F: adc byte ptr [esi + esi*2], cl */
      MEM8(esi + esi * 2) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + MEM8(eax)); /* 0x10024232: add dl, byte ptr [eax] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((LO8(eax) | MEM8(eax + 0x7))) << 24; _flag_b = (uint32_t)((LO8(eax) | MEM8(eax + 0x7))) << 24;
    SET_LO8(eax, LO8(eax) | MEM8(eax + 0x7)); /* 0x10024234: or al, byte ptr [eax + 7] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    { uint32_t _aa = HI8(ebx), _ab = LO8(ebx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10024237: adc bh, bl */
      SET_HI8(ebx, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    void_lift_trap(0x10024239u, "aas ");
    _seg_es = POP32_VAL(esp); /* 0x1002423A: pop es */
    { uint32_t _aa = MEM8(ebx + 0x40), _ab = LO8(ecx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1002423B: adc byte ptr [ebx + 0x40], cl */
      MEM8(ebx + 0x40) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _seg_es = POP32_VAL(esp); /* 0x1002423E: pop es */
    { uint32_t _aa = MEM8(esi + 0x45), _ab = HI8(ecx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1002423F: adc byte ptr [esi + 0x45], ch */
      MEM8(esi + 0x45) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + MEM8(eax)); /* 0x10024242: add dl, byte ptr [eax] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, esi); /* 0x10024244: push esi */
    _flag_a = (uint32_t)((MEM32(edi) ^ eax)); _flag_b = (uint32_t)((MEM32(edi) ^ eax));
    MEM32(edi) = MEM32(edi) ^ eax; /* 0x10024245: xor dword ptr [edi], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _aa = MEM8(ebx + 0x38), _ab = LO8(edx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10024247: adc byte ptr [ebx + 0x38], dl */
      MEM8(ebx + 0x38) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _seg_es = POP32_VAL(esp); /* 0x1002424A: pop es */
    { uint32_t _aa = MEM8(eax), _ab = HI8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1002424B: adc byte ptr [eax], ah */
      MEM8(eax) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1002424D: cdq  */
    _seg_es = POP32_VAL(esp); /* 0x1002424E: pop es */
    { uint32_t _aa = MEM8(esi + 0x31), _ab = HI8(ebx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1002424F: adc byte ptr [esi + 0x31], bh */
      MEM8(esi + 0x31) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _seg_es = POP32_VAL(esp); /* 0x10024252: pop es */
    { uint32_t _aa = MEM8(ecx), _ab = HI8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10024253: adc byte ptr [ecx], ah */
      MEM8(ecx) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x10024255: inc edx */
    _flag_k = FK_INC;
    _seg_es = POP32_VAL(esp); /* 0x10024256: pop es */
    { uint32_t _aa = MEM8(ebp + 0x48), _ab = LO8(ebx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10024257: adc byte ptr [ebp + 0x48], bl */
      MEM8(ebp + 0x48) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + MEM8(eax)); /* 0x1002425A: add dl, byte ptr [eax] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _tmp = MEM32(eax + 0x7); /* 0x1002425C: xchg dword ptr [eax + 7], eax */
      MEM32(eax + 0x7) = eax;
      eax = _tmp; }
    { uint32_t _aa = MEM8(edi + 0x42), _ab = HI8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1002425F: adc byte ptr [edi + 0x42], ah */
      MEM8(edi + 0x42) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _seg_es = POP32_VAL(esp); /* 0x10024262: pop es */
    { uint32_t _aa = LO8(edx), _ab = LO8(ecx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10024263: adc dl, cl */
      SET_LO8(edx, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _rv = (MEM8(esi)) & 255u, _rn = ((0x10u) & 31) % 8u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 7) & 1u; _rv = ((_rv << 1) | _rb) & 255u; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } MEM8(esi) = (uint8_t)(_rv); } /* 0x10024265: rol byte ptr [esi], 0x10 */
    PUSH32(esp, _seg_ds); /* 0x10024268: push ds */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ebx + esi)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(edx, LO8(edx) + MEM8(ebx + esi)); /* 0x10024269: add dl, byte ptr [bx + si] */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1002426C: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1002426E: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((MEM8(eax) | LO8(eax))) << 24; _flag_b = (uint32_t)((MEM8(eax) | LO8(eax))) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) | LO8(eax)); /* 0x10024270: or byte ptr [eax], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10024272: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10024274: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10024276: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    MEM8(ebx) = (uint8_t)(LO8(eax)); /* 0x10024278: mov byte ptr [ebx], al */
    PUSH32(esp, _seg_cs); /* 0x1002427A: push cs */
    { uint32_t _aa = MEM8(edx + eax * 2 + 0x3881002), _ab = LO8(ebx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1002427B: adc byte ptr [edx + eax*2 + 0x3881002], bl */
      MEM8(edx + eax * 2 + 0x3881002) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    PUSH32(esp, _seg_cs); /* 0x10024282: push cs */
    { uint32_t _aa = MEM8(ebx), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10024283: adc byte ptr [ebx], al */
      MEM8(ebx) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10024285: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10024287: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10024289: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + HI8(ebx)); /* 0x1002428B: add bh, bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_ITAIL(0x1002428Du); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_1002433D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002433Du);

L_1002433D:
    PUSH32(esp, ebx); /* 0x1002433D: push ebx */
    PUSH32(esp, esi); /* 0x1002433E: push esi */
    PUSH32(esp, edi); /* 0x1002433F: push edi */
    edi = ecx; /* 0x10024340: mov edi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10024342: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10024344: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = 0x100u; /* 0x10024346: mov eax, 0x100 */
    PUSH32(esp, 4); /* 0x1002434B: push 4 */
    edx = POP32_VAL(esp); /* 0x1002434D: pop edx */
    MEM32(edi + 0x28) = eax; /* 0x1002434E: mov dword ptr [edi + 0x28], eax */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x10024351: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    MEM32(edi + 0x10) = ebx; /* 0x10024353: mov dword ptr [edi + 0x10], ebx */
    MEM32(edi + 0x24) = ebx; /* 0x10024356: mov dword ptr [edi + 0x24], ebx */
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x10024359: seto cl */
    MEM32(edi + 0x2C) = ebx; /* 0x1002435C: mov dword ptr [edi + 0x2c], ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1002435F: neg ecx */
    _flag_k = FK_CMP;
    MEM32(edi + 0x30) = ebx; /* 0x10024361: mov dword ptr [edi + 0x30], ebx */
    MEM32(edi + 0x38) = 0x200u; /* 0x10024364: mov dword ptr [edi + 0x38], 0x200 */
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1002436B: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x3C) = 1; /* 0x1002436D: mov dword ptr [edi + 0x3c], 1 */
    MEM32(edi + 0x40) = ebx; /* 0x10024374: mov dword ptr [edi + 0x40], ebx */
    MEM32(edi + 0x44) = 0x40u; /* 0x10024377: mov dword ptr [edi + 0x44], 0x40 */
    PUSH32(esp, ecx); /* 0x1002437E: push ecx */
    MEM32(edi + 0x48) = ebx; /* 0x1002437F: mov dword ptr [edi + 0x48], ebx */
    RECOMP_CALL(sub_10011683); /* 0x10024382: call 0x10011683 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi + 0x28); /* 0x10024387: mov ecx, dword ptr [edi + 0x28] */
    esi = eax; /* 0x1002438A: mov esi, eax */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x1002438C: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x1002438C: shl ecx, 2 */
    PUSH32(esp, ecx); /* 0x1002438F: push ecx */
    PUSH32(esp, ebx); /* 0x10024390: push ebx */
    PUSH32(esp, esi); /* 0x10024391: push esi */
    RECOMP_CALL(sub_10011533); /* 0x10024392: call 0x10011533 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xCu); /* 0x10024397: push 0xc */
    RECOMP_CALL(sub_1000EE11); /* 0x10024399: call 0x1000ee11 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1002439E: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x100243A1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100243FA; /* 0x100243A3: je 0x100243fa */
L_100243A5:
    _flag_a = (uint32_t)((MEM32(eax + 0x8) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(eax + 0x8) | 0xFFFFFFFFu));
    MEM32(eax + 0x8) = MEM32(eax + 0x8) | 0xFFFFFFFFu; /* 0x100243A5: or dword ptr [eax + 8], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = esi; /* 0x100243A9: mov dword ptr [eax], esi */
    MEM32(eax + 0x4) = ebx; /* 0x100243AB: mov dword ptr [eax + 4], ebx */
L_100243AE:
    MEM32(edi + 0x30) = eax; /* 0x100243AE: mov dword ptr [edi + 0x30], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100243B1: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(edi + 0x38); /* 0x100243B3: mov eax, dword ptr [edi + 0x38] */
    PUSH32(esp, 4); /* 0x100243B6: push 4 */
    edx = POP32_VAL(esp); /* 0x100243B8: pop edx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x100243B9: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x100243BB: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x100243BE: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x100243C0: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x100243C2: push ecx */
    RECOMP_CALL(sub_10011683); /* 0x100243C3: call 0x10011683 */
    RECOMP_FLAGS_IN();
    esi = MEM32(0x100E51A8); /* 0x100243C8: mov esi, dword ptr [0x100e51a8] */
    ecx = POP32_VAL(esp); /* 0x100243CE: pop ecx */
    ecx = MEM32(edi + 0x30); /* 0x100243CF: mov ecx, dword ptr [edi + 0x30] */
    MEM32(edi + 0x34) = eax; /* 0x100243D2: mov dword ptr [edi + 0x34], eax */
    PUSH32(esp, edi); /* 0x100243D5: push edi */
    MEM32(eax) = ecx; /* 0x100243D6: mov dword ptr [eax], ecx */
    RECOMP_ICALL(esi); /* 0x100243D8: call esi */
    RECOMP_FLAGS_IN();
    eax = edi + 0x8; /* 0x100243DA: lea eax, [edi + 8] */
    PUSH32(esp, eax); /* 0x100243DD: push eax */
    RECOMP_ICALL(esi); /* 0x100243DE: call esi */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi + 0x28); /* 0x100243E0: mov ecx, dword ptr [edi + 0x28] */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x100243E3: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_100243F2; /* 0x100243E5: je 0x100243f2 */
L_100243E7:
    eax = MEM32(edi + 0x2C); /* 0x100243E7: mov eax, dword ptr [edi + 0x2c] */
L_100243EA:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100243EA: inc eax */
    _flag_k = FK_INC;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x100243EB: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    RECOMP_BACKEDGE();
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_100243EA; /* 0x100243ED: jne 0x100243ea */
L_100243EF:
    MEM32(edi + 0x2C) = eax; /* 0x100243EF: mov dword ptr [edi + 0x2c], eax */
L_100243F2:
    eax = edi; /* 0x100243F2: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x100243F4: pop edi */
    esi = POP32_VAL(esp); /* 0x100243F5: pop esi */
    ebx = POP32_VAL(esp); /* 0x100243F6: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x100243F7: ret 0xc */
L_100243FA:
    eax = ebx; /* 0x100243FA: mov eax, ebx */
    RECOMP_BACKEDGE();
    goto L_100243AE; /* 0x100243FC: jmp 0x100243ae */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100243FE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100243FEu);

L_100243FE:
    PUSH32(esp, ebx); /* 0x100243FE: push ebx */
    PUSH32(esp, esi); /* 0x100243FF: push esi */
    PUSH32(esp, edi); /* 0x10024400: push edi */
    edi = ecx; /* 0x10024401: mov edi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10024403: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10024405: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = 0x100u; /* 0x10024407: mov eax, 0x100 */
    PUSH32(esp, 4); /* 0x1002440C: push 4 */
    edx = POP32_VAL(esp); /* 0x1002440E: pop edx */
    MEM32(edi + 0x28) = eax; /* 0x1002440F: mov dword ptr [edi + 0x28], eax */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x10024412: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    MEM32(edi + 0x10) = ebx; /* 0x10024414: mov dword ptr [edi + 0x10], ebx */
    MEM32(edi + 0x24) = ebx; /* 0x10024417: mov dword ptr [edi + 0x24], ebx */
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x1002441A: seto cl */
    MEM32(edi + 0x2C) = ebx; /* 0x1002441D: mov dword ptr [edi + 0x2c], ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x10024420: neg ecx */
    _flag_k = FK_CMP;
    MEM32(edi + 0x30) = ebx; /* 0x10024422: mov dword ptr [edi + 0x30], ebx */
    MEM32(edi + 0x38) = 0x200u; /* 0x10024425: mov dword ptr [edi + 0x38], 0x200 */
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1002442C: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x3C) = 1; /* 0x1002442E: mov dword ptr [edi + 0x3c], 1 */
    MEM32(edi + 0x40) = ebx; /* 0x10024435: mov dword ptr [edi + 0x40], ebx */
    MEM32(edi + 0x44) = 0x7FFFFFFFu; /* 0x10024438: mov dword ptr [edi + 0x44], 0x7fffffff */
    PUSH32(esp, ecx); /* 0x1002443F: push ecx */
    MEM32(edi + 0x48) = ebx; /* 0x10024440: mov dword ptr [edi + 0x48], ebx */
    RECOMP_CALL(sub_10011683); /* 0x10024443: call 0x10011683 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi + 0x28); /* 0x10024448: mov ecx, dword ptr [edi + 0x28] */
    esi = eax; /* 0x1002444B: mov esi, eax */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x1002444D: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x1002444D: shl ecx, 2 */
    PUSH32(esp, ecx); /* 0x10024450: push ecx */
    PUSH32(esp, ebx); /* 0x10024451: push ebx */
    PUSH32(esp, esi); /* 0x10024452: push esi */
    RECOMP_CALL(sub_10011533); /* 0x10024453: call 0x10011533 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xCu); /* 0x10024458: push 0xc */
    RECOMP_CALL(sub_1000EE11); /* 0x1002445A: call 0x1000ee11 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1002445F: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10024462: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100244BB; /* 0x10024464: je 0x100244bb */
L_10024466:
    _flag_a = (uint32_t)((MEM32(eax + 0x8) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(eax + 0x8) | 0xFFFFFFFFu));
    MEM32(eax + 0x8) = MEM32(eax + 0x8) | 0xFFFFFFFFu; /* 0x10024466: or dword ptr [eax + 8], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = esi; /* 0x1002446A: mov dword ptr [eax], esi */
    MEM32(eax + 0x4) = ebx; /* 0x1002446C: mov dword ptr [eax + 4], ebx */
L_1002446F:
    MEM32(edi + 0x30) = eax; /* 0x1002446F: mov dword ptr [edi + 0x30], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10024472: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(edi + 0x38); /* 0x10024474: mov eax, dword ptr [edi + 0x38] */
    PUSH32(esp, 4); /* 0x10024477: push 4 */
    edx = POP32_VAL(esp); /* 0x10024479: pop edx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x1002447A: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x1002447C: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1002447F: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x10024481: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x10024483: push ecx */
    RECOMP_CALL(sub_10011683); /* 0x10024484: call 0x10011683 */
    RECOMP_FLAGS_IN();
    esi = MEM32(0x100E51A8); /* 0x10024489: mov esi, dword ptr [0x100e51a8] */
    ecx = POP32_VAL(esp); /* 0x1002448F: pop ecx */
    ecx = MEM32(edi + 0x30); /* 0x10024490: mov ecx, dword ptr [edi + 0x30] */
    MEM32(edi + 0x34) = eax; /* 0x10024493: mov dword ptr [edi + 0x34], eax */
    PUSH32(esp, edi); /* 0x10024496: push edi */
    MEM32(eax) = ecx; /* 0x10024497: mov dword ptr [eax], ecx */
    RECOMP_ICALL(esi); /* 0x10024499: call esi */
    RECOMP_FLAGS_IN();
    eax = edi + 0x8; /* 0x1002449B: lea eax, [edi + 8] */
    PUSH32(esp, eax); /* 0x1002449E: push eax */
    RECOMP_ICALL(esi); /* 0x1002449F: call esi */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi + 0x28); /* 0x100244A1: mov ecx, dword ptr [edi + 0x28] */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x100244A4: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_100244B3; /* 0x100244A6: je 0x100244b3 */
L_100244A8:
    eax = MEM32(edi + 0x2C); /* 0x100244A8: mov eax, dword ptr [edi + 0x2c] */
L_100244AB:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100244AB: inc eax */
    _flag_k = FK_INC;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x100244AC: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    RECOMP_BACKEDGE();
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_100244AB; /* 0x100244AE: jne 0x100244ab */
L_100244B0:
    MEM32(edi + 0x2C) = eax; /* 0x100244B0: mov dword ptr [edi + 0x2c], eax */
L_100244B3:
    eax = edi; /* 0x100244B3: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x100244B5: pop edi */
    esi = POP32_VAL(esp); /* 0x100244B6: pop esi */
    ebx = POP32_VAL(esp); /* 0x100244B7: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x100244B8: ret 0xc */
L_100244BB:
    eax = ebx; /* 0x100244BB: mov eax, ebx */
    RECOMP_BACKEDGE();
    goto L_1002446F; /* 0x100244BD: jmp 0x1002446f */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100244BF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100244BFu);

L_100244BF:
    PUSH32(esp, ebp); /* 0x100244BF: push ebp */
    ebp = esp; /* 0x100244C0: mov ebp, esp */
    eax = MEM32(0x100DFA20); /* 0x100244C2: mov eax, dword ptr [0x100dfa20] */
    _flag_a = (uint32_t)((eax ^ MEM32(0x100DF7B8))); _flag_b = (uint32_t)((eax ^ MEM32(0x100DF7B8)));
    eax = eax ^ MEM32(0x100DF7B8); /* 0x100244C7: xor eax, dword ptr [0x100df7b8] */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005F166; /* 0x100244CD: je 0x1005f166 */
L_100244D3:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x100244D3: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100244D6: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100244D9: push dword ptr [ebp + 8] */
    RECOMP_ICALL(eax); /* 0x100244DC: call eax */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x100244DE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100244DF: ret  */
L_1005F166:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1005F166: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1005F168: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1005F169: ret  */
    RECOMP_REGS_OUT();
}

void sub_100244E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100244E0u);

L_100244E0:
    PUSH32(esp, 4); /* 0x100244E0: push 4 */
    eax = 0x100DB404u; /* 0x100244E2: mov eax, 0x100db404 */
    RECOMP_CALL(sub_100149A4); /* 0x100244E7: call 0x100149a4 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x100E0AB4); /* 0x100244EC: mov eax, dword ptr [0x100e0ab4] */
    /* test eax, eax */ /* 0x100244F1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005236F; /* 0x100244F3: je 0x1005236f */
L_100244F9:
    RECOMP_CALL(sub_100149D7); /* 0x100244F9: call 0x100149d7 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100244FE: ret  */
L_1005236F:
    ecx = 0x100E032Cu; /* 0x1005236F: mov ecx, 0x100e032c */
    MEM32(ebp + (-0x10)) = ecx; /* 0x10052374: mov dword ptr [ebp - 0x10], ecx */
    RECOMP_CALL(sub_10023D1E); /* 0x10052377: call 0x10023d1e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1005237C: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(0x100E0AB4); /* 0x10052380: mov eax, dword ptr [0x100e0ab4] */
    /* test eax, eax */ /* 0x10052385: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10052395; /* 0x10052387: jne 0x10052395 */
L_10052389:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(ecx, 0); /* 0x10052389: xor cl, cl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_CALL(sub_10025760); /* 0x1005238B: call 0x10025760 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x100E0AB4); /* 0x10052390: mov eax, dword ptr [0x100e0ab4] */
L_10052395:
    MEM32(0x100E032C) = 0; /* 0x10052395: mov dword ptr [0x100e032c], 0 */
    RECOMP_BACKEDGE();
    goto L_100244F9; /* 0x1005239F: jmp 0x100244f9 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100244FF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100244FFu);

L_100244FF:
    PUSH32(esp, ebp); /* 0x100244FF: push ebp */
    ebp = esp; /* 0x10024500: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x10024502: sub esp, 0x18 */
    _flag_k = FK_CMP;
    eax = ebp + (-0x4); /* 0x10024505: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x10024508: push eax */
    RECOMP_ICALL(MEM32(0x100E5164)); /* 0x10024509: call dword ptr [0x100e5164] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1002450F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100520C9; /* 0x10024511: je 0x100520c9 */
L_10024517:
    eax = MEM32(ebp + (-0x4)); /* 0x10024517: mov eax, dword ptr [ebp - 4] */
    esp = ebp; /* 0x1002451A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1002451C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002451D: ret  */
L_100520C9:
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x100520C9: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100520CF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_100520DB; /* 0x100520D1: jle 0x100520db */
L_100520D3:
    eax = (uint32_t)LO16(eax); /* 0x100520D3: movzx eax, ax */
    _flag_a = (uint32_t)((eax | 0x80070000u)); _flag_b = (uint32_t)((eax | 0x80070000u));
    eax = eax | 0x80070000u; /* 0x100520D6: or eax, 0x80070000 */
    _cf = 0;
    _flag_k = FK_TEST;
L_100520DB:
    PUSH32(esp, eax); /* 0x100520DB: push eax */
    ecx = ebp + (-0x14); /* 0x100520DC: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1006C31C); /* 0x100520DF: call 0x1006c31c */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x100DCF40u); /* 0x100520E4: push 0x100dcf40 */
    eax = ebp + (-0x14); /* 0x100520E9: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x100520EC: push eax */
    RECOMP_CALL(sub_100192EB); /* 0x100520ED: call 0x100192eb */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x100520F2u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10024572(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10024572u);

L_10024572:
    PUSH32(esp, ebp); /* 0x10024572: push ebp */
    ebp = esp; /* 0x10024573: mov ebp, esp */
    fp_push(0.0); /* 0x10024575: fldz  */
    eax = ecx + 0x8; /* 0x10024577: lea eax, [ecx + 8] */
    PUSH32(esp, esi); /* 0x1002457A: push esi */
    PUSH32(esp, 0x3Fu); /* 0x1002457B: push 0x3f */
    edx = POP32_VAL(esp); /* 0x1002457D: pop edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1002457E: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_10024580:
    *(double*)ADDR(eax + (-0x8)) = _st[0]; /* 0x10024580: fst qword ptr [eax - 8] */
    *(double*)ADDR(eax) = _st[0]; /* 0x10024583: fst qword ptr [eax] */
    MEM32(eax + 0x8) = esi; /* 0x10024585: mov dword ptr [eax + 8], esi */
    MEM32(eax + 0xC) = esi; /* 0x10024588: mov dword ptr [eax + 0xc], esi */
    MEM32(eax + 0x10) = esi; /* 0x1002458B: mov dword ptr [eax + 0x10], esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x20u; /* 0x1002458E: add eax, 0x20 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x10024591: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NS(_flag_a, _flag_b)) goto L_10024580; /* 0x10024592: jns 0x10024580 */
L_10024594:
    eax = MEM32(ebp + 0x10); /* 0x10024594: mov eax, dword ptr [ebp + 0x10] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x10024597: fstp st(0) */
    fp_push((double)(int32_t)MEM32(ebp + 0xC)); /* 0x10024599: fild dword ptr [ebp + 0xc] */
    MEM32(ecx + 0x800) = eax; /* 0x1002459C: mov dword ptr [ecx + 0x800], eax */
    eax = MEM32(ebp + 0x8); /* 0x100245A2: mov eax, dword ptr [ebp + 8] */
    MEM32(ecx + 0x81C) = eax; /* 0x100245A5: mov dword ptr [ecx + 0x81c], eax */
    eax = MEM32(ebp + 0xC); /* 0x100245AB: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ecx + 0x814) = esi; /* 0x100245AE: mov dword ptr [ecx + 0x814], esi */
    MEM32(ecx + 0x818) = esi; /* 0x100245B4: mov dword ptr [ecx + 0x818], esi */
    MEM32(ecx + 0x820) = esi; /* 0x100245BA: mov dword ptr [ecx + 0x820], esi */
    MEM32(ecx + 0x824) = esi; /* 0x100245C0: mov dword ptr [ecx + 0x824], esi */
    MEM32(ecx + 0x828) = esi; /* 0x100245C6: mov dword ptr [ecx + 0x828], esi */
    MEM32(ecx + 0x82C) = esi; /* 0x100245CC: mov dword ptr [ecx + 0x82c], esi */
    MEM32(ecx + 0x830) = esi; /* 0x100245D2: mov dword ptr [ecx + 0x830], esi */
    MEM8(ecx + 0x834) = (uint8_t)(1); /* 0x100245D8: mov byte ptr [ecx + 0x834], 1 */
    /* test eax, eax */ /* 0x100245DF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_10051FE0; /* 0x100245E1: js 0x10051fe0 */
L_100245E7:
    MEM32(ecx + 0x810) = eax; /* 0x100245E7: mov dword ptr [ecx + 0x810], eax */
    eax = ecx; /* 0x100245ED: mov eax, ecx */
    { double _v = fp_pop(); *(double*)ADDR(ecx + 0x808) = _v; } /* 0x100245EF: fstp qword ptr [ecx + 0x808] */
    esi = POP32_VAL(esp); /* 0x100245F5: pop esi */
    ebp = POP32_VAL(esp); /* 0x100245F6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x100245F7: ret 0xc */
L_10051FE0:
    _st[0] += *(double*)ADDR(0x10067CE0); /* 0x10051FE0: fadd qword ptr [0x10067ce0] */
    RECOMP_BACKEDGE();
    goto L_100245E7; /* 0x10051FE6: jmp 0x100245e7 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1002472C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002472Cu);

L_1002472C:
    eax = MEM32(ecx + 0xAC); /* 0x1002472C: mov eax, dword ptr [ecx + 0xac] */
    edx = MEM32(ecx + 0xB8); /* 0x10024732: mov edx, dword ptr [ecx + 0xb8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x10024738: sub eax, edx */
    _flag_k = FK_CMP;
    ecx = MEM32(ecx + 0x84); /* 0x1002473A: mov ecx, dword ptr [ecx + 0x84] */
    /* cmp eax, ecx */ /* 0x10024740: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_10024746; /* 0x10024742: ja 0x10024746 */
L_10024744:
    eax = ecx; /* 0x10024744: mov eax, ecx */
L_10024746:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x10024746: add eax, edx */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10024748: ret  */
    RECOMP_REGS_OUT();
}

void sub_10024749(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10024749u);

L_10024749:
    PUSH32(esp, esi); /* 0x10024749: push esi */
    esi = ecx; /* 0x1002474A: mov esi, ecx */
    PUSH32(esp, edi); /* 0x1002474C: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1002474D: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(esi + 0xC); /* 0x1002474F: mov eax, dword ptr [esi + 0xc] */
    /* cmp eax, MEM32(esi + 0x8) */ /* 0x10024752: cmp eax, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_10052BDF; /* 0x10024755: jb 0x10052bdf */
L_1002475B:
    eax = MEM32(esi + 0x8); /* 0x1002475B: mov eax, dword ptr [esi + 8] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1002475E: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1002475E: shl eax, 2 */
    PUSH32(esp, eax); /* 0x10024761: push eax */
    PUSH32(esp, edi); /* 0x10024762: push edi */
    PUSH32(esp, MEM32(esi + 0x54)); /* 0x10024763: push dword ptr [esi + 0x54] */
    RECOMP_CALL(sub_10011533); /* 0x10024766: call 0x10011533 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1002476B: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp MEM32(esi + 0x58), edi */ /* 0x1002476E: cmp dword ptr [esi + 0x58], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x58)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10052C5A; /* 0x10024771: jne 0x10052c5a */
L_10024777:
    edi = POP32_VAL(esp); /* 0x10024777: pop edi */
    esi = POP32_VAL(esp); /* 0x10024778: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10024779: ret  */
L_10052BDF:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x10052BDF: add eax, eax */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(esi + 0x8) */ /* 0x10052BE1: cmp eax, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_10052BDF; /* 0x10052BE4: jb 0x10052bdf */
L_10052BE6:
    PUSH32(esp, ebx); /* 0x10052BE6: push ebx */
    PUSH32(esp, MEM32(esi + 0x54)); /* 0x10052BE7: push dword ptr [esi + 0x54] */
    MEM32(esi + 0xC) = eax; /* 0x10052BEA: mov dword ptr [esi + 0xc], eax */
    RECOMP_CALL(sub_1000ECE0); /* 0x10052BED: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x58)); /* 0x10052BF2: push dword ptr [esi + 0x58] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10052BF5: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x5C)); /* 0x10052BFA: push dword ptr [esi + 0x5c] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10052BFD: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xC); /* 0x10052C02: mov eax, dword ptr [esi + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10052C05: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 4); /* 0x10052C07: push 4 */
    ebx = POP32_VAL(esp); /* 0x10052C09: pop ebx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(ebx); /* 0x10052C0A: mul ebx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x10052C0C: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x10052C0F: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x10052C11: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x10052C13: push ecx */
    RECOMP_CALL(sub_10011683); /* 0x10052C14: call 0x10011683 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x10052C19: add esp, 0x10 */
    _flag_k = FK_ADD;
    MEM32(esi + 0x54) = eax; /* 0x10052C1C: mov dword ptr [esi + 0x54], eax */
    /* cmp MEM32(esi + 0x58), edi */ /* 0x10052C1F: cmp dword ptr [esi + 0x58], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x58)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10052C54; /* 0x10052C22: je 0x10052c54 */
L_10052C24:
    eax = MEM32(esi + 0xC); /* 0x10052C24: mov eax, dword ptr [esi + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10052C27: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _r = (uint64_t)eax * (uint32_t)(ebx); /* 0x10052C29: mul ebx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x10052C2B: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x10052C2E: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x10052C30: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x10052C32: push ecx */
    RECOMP_CALL(sub_10011683); /* 0x10052C33: call 0x10011683 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x58) = eax; /* 0x10052C38: mov dword ptr [esi + 0x58], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10052C3B: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(esi + 0xC); /* 0x10052C3D: mov eax, dword ptr [esi + 0xc] */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(ebx); /* 0x10052C40: mul ebx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x10052C42: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x10052C45: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x10052C47: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x10052C49: push ecx */
    RECOMP_CALL(sub_10011683); /* 0x10052C4A: call 0x10011683 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10052C4F: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10052C50: pop ecx */
    MEM32(esi + 0x5C) = eax; /* 0x10052C51: mov dword ptr [esi + 0x5c], eax */
L_10052C54:
    ebx = POP32_VAL(esp); /* 0x10052C54: pop ebx */
    RECOMP_BACKEDGE();
    goto L_1002475B; /* 0x10052C55: jmp 0x1002475b */
L_10052C5A:
    eax = MEM32(esi + 0x8); /* 0x10052C5A: mov eax, dword ptr [esi + 8] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x10052C5D: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x10052C5D: shl eax, 2 */
    PUSH32(esp, eax); /* 0x10052C60: push eax */
    PUSH32(esp, edi); /* 0x10052C61: push edi */
    PUSH32(esp, MEM32(esi + 0x58)); /* 0x10052C62: push dword ptr [esi + 0x58] */
    RECOMP_CALL(sub_10011533); /* 0x10052C65: call 0x10011533 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x8); /* 0x10052C6A: mov eax, dword ptr [esi + 8] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x10052C6D: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x10052C6D: shl eax, 2 */
    PUSH32(esp, eax); /* 0x10052C70: push eax */
    PUSH32(esp, edi); /* 0x10052C71: push edi */
    PUSH32(esp, MEM32(esi + 0x5C)); /* 0x10052C72: push dword ptr [esi + 0x5c] */
    RECOMP_CALL(sub_10011533); /* 0x10052C75: call 0x10011533 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x10052C7A: add esp, 0x18 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_10024777; /* 0x10052C7D: jmp 0x10024777 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1002477A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002477Au);

L_1002477A:
    PUSH32(esp, ebp); /* 0x1002477A: push ebp */
    ebp = esp; /* 0x1002477B: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1002477D: push ecx */
    PUSH32(esp, ecx); /* 0x1002477E: push ecx */
    PUSH32(esp, esi); /* 0x1002477F: push esi */
    esi = ecx; /* 0x10024780: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10024782: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = esi; /* 0x10024784: mov dword ptr [ebp - 8], esi */
    edx = eax; /* 0x10024787: mov edx, eax */
    /* cmp MEM32(esi + 0x18), eax */ /* 0x10024789: cmp dword ptr [esi + 0x18], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0x18)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_100247CE; /* 0x1002478C: jbe 0x100247ce */
L_1002478E:
    PUSH32(esp, ebx); /* 0x1002478E: push ebx */
    PUSH32(esp, edi); /* 0x1002478F: push edi */
    edi = eax; /* 0x10024790: mov edi, eax */
L_10024792:
    ecx = MEM32(esi + 0x48); /* 0x10024792: mov ecx, dword ptr [esi + 0x48] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x10024795: add ecx, edi */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x10024797: mov dword ptr [ebp - 4], eax */
    MEM32(ecx + 0x8) = eax; /* 0x1002479A: mov dword ptr [ecx + 8], eax */
    MEM32(ecx + 0x1C) = eax; /* 0x1002479D: mov dword ptr [ecx + 0x1c], eax */
    /* cmp MEM32(ecx + 0x4), eax */ /* 0x100247A0: cmp dword ptr [ecx + 4], eax */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_100247C3; /* 0x100247A3: jbe 0x100247c3 */
L_100247A5:
    ebx = eax; /* 0x100247A5: mov ebx, eax */
    esi = eax; /* 0x100247A7: mov esi, eax */
L_100247A9:
    eax = MEM32(ecx + 0x20); /* 0x100247A9: mov eax, dword ptr [ecx + 0x20] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x100247AC: add eax, ebx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x24u; /* 0x100247AE: add ebx, 0x24 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x100247B1: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(eax + 0x1C)); _flag_b = (uint32_t)(0);
    MEM32(eax + 0x1C) = MEM32(eax + 0x1C) & 0; /* 0x100247B4: and dword ptr [eax + 0x1c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100247B8: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(ecx + 0x4) */ /* 0x100247B9: cmp esi, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ecx + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_100247A9; /* 0x100247BC: jb 0x100247a9 */
L_100247BE:
    esi = MEM32(ebp + (-0x8)); /* 0x100247BE: mov esi, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100247C1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_100247C3:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x100247C3: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x28u; /* 0x100247C4: add edi, 0x28 */
    _flag_k = FK_ADD;
    /* cmp edx, MEM32(esi + 0x18) */ /* 0x100247C7: cmp edx, dword ptr [esi + 0x18] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esi + 0x18));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_10024792; /* 0x100247CA: jb 0x10024792 */
L_100247CC:
    edi = POP32_VAL(esp); /* 0x100247CC: pop edi */
    ebx = POP32_VAL(esp); /* 0x100247CD: pop ebx */
L_100247CE:
    esi = POP32_VAL(esp); /* 0x100247CE: pop esi */
    esp = ebp; /* 0x100247CF: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100247D1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100247D2: ret  */
    RECOMP_REGS_OUT();
}

void sub_100247D7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100247D7u);

L_100247D7:
    PUSH32(esp, ebp); /* 0x100247D7: push ebp */
    ebp = esp; /* 0x100247D8: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x100247DA: push ebx */
    PUSH32(esp, esi); /* 0x100247DB: push esi */
    esi = MEM32(ebp + 0x8); /* 0x100247DC: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x100247DF: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x100247E1: push edi */
    edi = ecx; /* 0x100247E2: mov edi, ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x100247E4: inc ebx */
    _flag_k = FK_INC;
    /* cmp MEM8(ebp + 0xC), 0 */ /* 0x100247E5: cmp byte ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = MEM32(edi + 0x7C); /* 0x100247E9: mov eax, dword ptr [edi + 0x7c] */
    MEM32(edi + 0x80) = eax; /* 0x100247EC: mov dword ptr [edi + 0x80], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005383B; /* 0x100247F2: jne 0x1005383b */
L_100247F8:
    eax = MEM32(edi + 0x50); /* 0x100247F8: mov eax, dword ptr [edi + 0x50] */
    ecx = MEM32(eax); /* 0x100247FB: mov ecx, dword ptr [eax] */
    eax = ebx; /* 0x100247FD: mov eax, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1B4u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x1B4u; /* 0x100247FF: add ecx, 0x1b4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(ecx), _sum = MEM32(ecx) + eax; eax = _old; MEM32(ecx) = _sum; } /* 0x10024805: lock xadd dword ptr [ecx], eax */
    _flag_k = FK_ADD;
    ecx = MEM32(edi + 0x50); /* 0x10024809: mov ecx, dword ptr [edi + 0x50] */
    eax = ebx; /* 0x1002480C: mov eax, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x1Cu; /* 0x1002480E: add ecx, 0x1c */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(ecx), _sum = MEM32(ecx) + eax; eax = _old; MEM32(ecx) = _sum; } /* 0x10024811: lock xadd dword ptr [ecx], eax */
    _flag_k = FK_ADD;
    /* cmp esi, 4 */ /* 0x10024815: cmp esi, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10053859; /* 0x10024818: je 0x10053859 */
L_1002481E:
    /* cmp esi, 8 */ /* 0x1002481E: cmp esi, 8 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10053859; /* 0x10024821: je 0x10053859 */
L_10024827:
    eax = edi + 0x8; /* 0x10024827: lea eax, [edi + 8] */
    { uint32_t _tmp = MEM32(eax); /* 0x1002482A: xchg dword ptr [eax], esi */
      MEM32(eax) = esi;
      esi = _tmp; }
    edi = POP32_VAL(esp); /* 0x1002482C: pop edi */
    esi = POP32_VAL(esp); /* 0x1002482D: pop esi */
    ebx = POP32_VAL(esp); /* 0x1002482E: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1002482F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x10024830: ret 8 */
L_1005383B:
    /* cmp esi, ebx */ /* 0x1005383B: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10053848; /* 0x1005383D: je 0x10053848 */
L_1005383F:
    /* cmp esi, 4 */ /* 0x1005383F: cmp esi, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_100247F8; /* 0x10053842: jne 0x100247f8 */
L_10053848:
    ecx = MEM32(edi + 0x50); /* 0x10053848: mov ecx, dword ptr [edi + 0x50] */
    PUSH32(esp, 0); /* 0x1005384B: push 0 */
    ecx = MEM32(ecx); /* 0x1005384D: mov ecx, dword ptr [ecx] */
    RECOMP_CALL(sub_1007433B); /* 0x1005384F: call 0x1007433b */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_100247F8; /* 0x10053854: jmp 0x100247f8 */
L_10053859:
    eax = MEM32(edi + 0x50); /* 0x10053859: mov eax, dword ptr [edi + 0x50] */
    ecx = MEM32(eax); /* 0x1005385C: mov ecx, dword ptr [eax] */
    eax = ebx; /* 0x1005385E: mov eax, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1B8u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x1B8u; /* 0x10053860: add ecx, 0x1b8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(ecx), _sum = MEM32(ecx) + eax; eax = _old; MEM32(ecx) = _sum; } /* 0x10053866: lock xadd dword ptr [ecx], eax */
    _flag_k = FK_ADD;
    eax = MEM32(edi + 0x50); /* 0x1005386A: mov eax, dword ptr [edi + 0x50] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x20u; /* 0x1005386D: add eax, 0x20 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(eax), _sum = MEM32(eax) + ebx; ebx = _old; MEM32(eax) = _sum; } /* 0x10053870: lock xadd dword ptr [eax], ebx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x10053874: inc ebx */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_10024827; /* 0x10053875: jmp 0x10024827 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10024833(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10024833u);

L_10024833:
    PUSH32(esp, ebp); /* 0x10024833: push ebp */
    ebp = esp; /* 0x10024834: mov ebp, esp */
    eax = MEM32(0x100DFA18); /* 0x10024836: mov eax, dword ptr [0x100dfa18] */
    _flag_a = (uint32_t)((eax ^ MEM32(0x100DF7B8))); _flag_b = (uint32_t)((eax ^ MEM32(0x100DF7B8)));
    eax = eax ^ MEM32(0x100DF7B8); /* 0x1002483B: xor eax, dword ptr [0x100df7b8] */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005F152; /* 0x10024841: je 0x1005f152 */
L_10024847:
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x10024847: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1002484A: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1002484D: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10024850: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10024853: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10024856: push dword ptr [ebp + 8] */
    RECOMP_ICALL(eax); /* 0x10024859: call eax */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1002485B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002485C: ret  */
L_1005F152:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1005F152: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1005F155: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1005F158: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1005F15B: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x100E5280)); /* 0x1005F15E: call dword ptr [0x100e5280] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1005F164: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1005F165: ret  */
    RECOMP_REGS_OUT();
}

void sub_1002486B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002486Bu);

L_1002486B:
    PUSH32(esp, ebp); /* 0x1002486B: push ebp */
    ebp = esp; /* 0x1002486C: mov ebp, esp */
    /* cmp MEM8(0x100E03F0), 4 */ /* 0x1002486E: cmp byte ptr [0x100e03f0], 4 */
    _flag_a = (uint32_t)(MEM8(0x100E03F0)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_AE(_flag_a, _flag_b)) goto L_10052EB6; /* 0x10024875: jae 0x10052eb6 */
L_1002487B:
    ebp = POP32_VAL(esp); /* 0x1002487B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1002487C: ret 0xc */
L_10052EB6:
    eax = MEM32(0x100E03EC); /* 0x10052EB6: mov eax, dword ptr [0x100e03ec] */
    /* test LO8(eax), 1 */ /* 0x10052EBB: test al, 1 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002487B; /* 0x10052EBD: je 0x1002487b */
L_10052EC3:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10052EC3: push dword ptr [ebp + 0x10] */
    ecx = MEM32(ebp + 0x8); /* 0x10052EC6: mov ecx, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1002498C); /* 0x10052EC9: call 0x1002498c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10052ECE: pop ecx */
    RECOMP_BACKEDGE();
    goto L_1002487B; /* 0x10052ECF: jmp 0x1002487b */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100248A8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100248A8u);

    goto L_100248A8;
L_100248A5:
    /* out: no port I/O under Win32 */ /* 0x100248A5: out 0xd4, eax */
    _flag_a = (uint32_t)((LO8(eax) | 0x1Fu)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0x1Fu)) << 24;
    SET_LO8(eax, LO8(eax) | 0x1Fu); /* 0x100248A7: or al, 0x1f */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100248A9; /* falls through past a gap */
L_100248A8:
    _seg_ds = POP32_VAL(esp); /* 0x100248A8: pop ds */
L_100248A9:
    edi = 0xA86BE8A3u; /* 0x100248A9: mov edi, 0xa86be8a3 */
    /* nop */ /* 0x100248AE: nop  */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x100248AF: inc ebx */
    _flag_k = FK_INC;
    PUSH32(esp, recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df)); /* 0x100248B0: pushfd  */
    PUSHAD(); /* 0x100248B1: pushal  */
    PUSH32(esp, ebx); /* 0x100248B2: push ebx */
    /* nop */ /* 0x100248B3: nop  */
    ecx = 0x7D2CD269u; /* 0x100248B4: mov ecx, 0x7d2cd269 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x100248B9: dec edx */
    _flag_k = FK_DEC;
    SET_LO8(ecx, 0x72u); /* 0x100248BA: mov cl, 0x72 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(1);
    esp = esp - 1; /* 0x100248BC: dec esp */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_O(_flag_a, _flag_b)) goto L_100248FD; /* 0x100248BD: jo 0x100248fd */
L_100248BF:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x100248BF: inc edx */
    _flag_k = FK_INC;
    { uint32_t _tmp = edx; /* 0x100248C0: xchg edx, eax */
      edx = eax;
      eax = _tmp; }
    { _cf = 0; _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } /* 0x100248C1: clc  */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_LE, _cf)) goto L_10024931; /* 0x100248C2: jle 0x10024931 */
L_100248C4:
    esp = 0xD25B2AB9u; /* 0x100248C4: mov esp, 0xd25b2ab9 */
    { uint32_t _sa = MEM8(edi), _sb = HI8(eax), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100248CA: sbb byte ptr [edi], ah */
      MEM8(edi) = (uint8_t)(_sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { _cf = !(recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df) & 1u); _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } /* 0x100248CC: cmc  */
    ebx = POP32_VAL(esp); /* 0x100248CD: pop ebx */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NS, _cf)) goto L_10024914; /* 0x100248CE: jns 0x10024914 */
L_100248D0:
    (void)(MEM16(eax + (-0x429B4346))) /* seg reg write */; /* 0x100248D0: mov cs, word ptr [eax - 0x429b4346] */
    edi = 0xA60DC6CAu; /* 0x100248D6: mov edi, 0xa60dc6ca */
    RECOMP_BACKEDGE();
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NS, _cf)) goto L_100248A5; /* 0x100248DB: jns 0x100248a5 */
L_100248DD:
    edi = POP32_VAL(esp); /* 0x100248DD: pop edi */
    PUSH32(esp, edx); /* 0x100248DE: push edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x100248DF: dec ecx */
    _flag_k = FK_DEC;
    MEM8(edi) = MEM8(esi); esi += _df; edi += _df; /* 0x100248E0: movsb byte ptr es:[edi], byte ptr [esi] */
    { uint32_t _sa = LO8(eax), _sb = 0x11u, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100248E1: sbb al, 0x11 */
      SET_LO8(eax, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    void_lift_trap(0x100248E3u, "arpl word ptr [esi + 0x63b85eec], bp");
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(ecx)); /* 0x100248E9: add byte ptr [edi], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x100248ECu, "insd dword ptr es:[edi], dx");
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + HI8(eax)); /* 0x100248ED: add byte ptr [edx], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    POPAD(); /* 0x100248F0: popal  */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + HI8(edx)); /* 0x100248F1: add byte ptr [ebx], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(GS_BASE + (esi))) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(GS_BASE + (esi)) = (uint8_t)(MEM8(GS_BASE + (esi)) + HI8(ecx)); /* 0x100248F4: add byte ptr gs:[esi], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + eax + 0x6C)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax + 0x6C) = (uint8_t)(MEM8(eax + eax + 0x6C) + HI8(eax)); /* 0x100248F7: add byte ptr [eax + eax + 0x6c], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + eax)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax) = (uint8_t)(MEM8(eax + eax) + HI8(ecx)); /* 0x100248FB: add byte ptr [eax + eax], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100248FF; /* falls through past a gap */
L_100248FD:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100248FD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
L_100248FF:
    _flag_a = (uint32_t)(MEM8(edx + 0x6F)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx + 0x6F) = (uint8_t)(MEM8(edx + 0x6F) + LO8(edx)); /* 0x100248FF: add byte ptr [edx + 0x6f], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x10024902: dec ecx */
    _flag_k = FK_DEC;
    /* outsb: no port I/O under Win32 */ /* 0x10024903: outsb dx, byte ptr [esi] */
    esi = (uint32_t)((int32_t)MEM32(ecx + ebp * 2 + 0x61) * (int32_t)0x657A696Cu); /* 0x10024904: imul esi, dword ptr [ecx + ebp*2 + 0x61], 0x657a696c */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x75))) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp + (-0x75)) = (uint8_t)(MEM8(ebp + (-0x75)) + LO8(edx)); /* 0x1002490C: add byte ptr [ebp - 0x75], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* in: no port I/O under Win32 */ /* 0x1002490F: in al, dx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x10024910: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x44u; /* 0x10024913: sub esp, 0x44 */
    _flag_k = FK_CMP;
    goto L_10024916; /* falls through past a gap */
L_10024914:
    /* in: no port I/O under Win32 */ /* 0x10024914: in al, dx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(1);
    esp = esp + 1; /* 0x10024915: inc esp */
    _flag_k = FK_INC;
L_10024916:
    /* cmp MEM32(0x100E0AD8), 0 */ /* 0x10024916: cmp dword ptr [0x100e0ad8], 0 */
    _flag_a = (uint32_t)(MEM32(0x100E0AD8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1002491D: push ebx */
    PUSH32(esp, esi); /* 0x1002491E: push esi */
    PUSH32(esp, edi); /* 0x1002491F: push edi */
    ebx = ecx; /* 0x10024920: mov ebx, ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10024975; /* 0x10024922: je 0x10024975 */
L_10024924:
    PUSH32(esp, 0x3Eu); /* 0x10024924: push 0x3e */
    eax = esp + 0x16; /* 0x10024926: lea eax, [esp + 0x16] */
    PUSH32(esp, 0); /* 0x1002492A: push 0 */
    PUSH32(esp, eax); /* 0x1002492C: push eax */
    RECOMP_CALL(sub_10011533); /* 0x1002492D: call 0x10011533 */
    RECOMP_FLAGS_IN();
    goto L_10024932; /* falls through past a gap */
L_10024931:
    _flag_a = (uint32_t)(MEM32(ebx + 0x44C70CC4)); _flag_b = (uint32_t)(1);
    MEM32(ebx + 0x44C70CC4) = MEM32(ebx + 0x44C70CC4) + 1; /* 0x10024931: inc dword ptr [ebx + 0x44c70cc4] */
    _flag_k = FK_INC;
    goto L_10024937; /* falls through past a gap */
L_10024932:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10024932: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(esp + 0x3C) = 0x00020000u; /* 0x10024935: mov dword ptr [esp + 0x3c], 0x20000 */
    goto L_1002493D; /* falls through past a gap */
L_10024937:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x3Cu) << 24;
    SET_LO8(eax, LO8(eax) & 0x3Cu); /* 0x10024937: and al, 0x3c */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10024939: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + MEM8(eax)); /* 0x1002493B: add al, byte ptr [eax] */
    _flag_k = FK_NARROW(FK_ADD, 24);
L_1002493D:
    MEM8(esp + 0x14) = (uint8_t)(LO8(ebx)); /* 0x1002493D: mov byte ptr [esp + 0x14], bl */
    edi = esp + 0x28; /* 0x10024941: lea edi, [esp + 0x28] */
    MEM8(esp + 0x15) = (uint8_t)(4); /* 0x10024945: mov byte ptr [esp + 0x15], 4 */
    esi = 0x1002497Cu; /* 0x1002494A: mov esi, 0x1002497c */
    PUSH32(esp, 0x40u); /* 0x1002494F: push 0x40 */
    eax = POP32_VAL(esp); /* 0x10024951: pop eax */
    MEM16(esp + 0x10) = (uint16_t)(LO16(eax)); /* 0x10024952: mov word ptr [esp + 0x10], ax */
    eax = MEM32(ebp + 0x8); /* 0x10024957: mov eax, dword ptr [ebp + 8] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1002495A: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1002495B: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1002495C: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1002495D: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(esp + 0x44) = eax; /* 0x1002495E: mov dword ptr [esp + 0x44], eax */
    eax = MEM32(ebp + 0xC); /* 0x10024962: mov eax, dword ptr [ebp + 0xc] */
    MEM32(esp + 0x48) = eax; /* 0x10024965: mov dword ptr [esp + 0x48], eax */
    eax = esp + 0x10; /* 0x10024969: lea eax, [esp + 0x10] */
    PUSH32(esp, eax); /* 0x1002496D: push eax */
    PUSH32(esp, ecx); /* 0x1002496E: push ecx */
    PUSH32(esp, ecx); /* 0x1002496F: push ecx */
    RECOMP_CALL(sub_1007A15B); /* 0x10024970: call 0x1007a15b */
    RECOMP_FLAGS_IN();
L_10024975:
    edi = POP32_VAL(esp); /* 0x10024975: pop edi */
    esi = POP32_VAL(esp); /* 0x10024976: pop esi */
    ebx = POP32_VAL(esp); /* 0x10024977: pop ebx */
    esp = ebp; /* 0x10024978: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1002497A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002497B: ret  */
    RECOMP_REGS_OUT();
}

void sub_100248B8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100248B8u);

    goto L_100248B8;
L_100248A5:
    /* out: no port I/O under Win32 */ /* 0x100248A5: out 0xd4, eax */
    _flag_a = (uint32_t)((LO8(eax) | 0x1Fu)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0x1Fu)) << 24;
    SET_LO8(eax, LO8(eax) | 0x1Fu); /* 0x100248A7: or al, 0x1f */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    edi = 0xA86BE8A3u; /* 0x100248A9: mov edi, 0xa86be8a3 */
    /* nop */ /* 0x100248AE: nop  */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x100248AF: inc ebx */
    _flag_k = FK_INC;
    PUSH32(esp, recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df)); /* 0x100248B0: pushfd  */
    PUSHAD(); /* 0x100248B1: pushal  */
    PUSH32(esp, ebx); /* 0x100248B2: push ebx */
    /* nop */ /* 0x100248B3: nop  */
    ecx = 0x7D2CD269u; /* 0x100248B4: mov ecx, 0x7d2cd269 */
    goto L_100248B9; /* falls through past a gap */
L_100248B8:
    if (/* inc result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_GE)) goto L_10024904; /* 0x100248B8: jge 0x10024904 */
    goto L_100248BA; /* falls through past a gap */
L_100248B9:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x100248B9: dec edx */
    _flag_k = FK_DEC;
L_100248BA:
    SET_LO8(ecx, 0x72u); /* 0x100248BA: mov cl, 0x72 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(1);
    esp = esp - 1; /* 0x100248BC: dec esp */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_O(_flag_a, _flag_b)) goto L_100248FD; /* 0x100248BD: jo 0x100248fd */
L_100248BF:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x100248BF: inc edx */
    _flag_k = FK_INC;
    { uint32_t _tmp = edx; /* 0x100248C0: xchg edx, eax */
      edx = eax;
      eax = _tmp; }
    { _cf = 0; _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } /* 0x100248C1: clc  */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_LE, _cf)) goto L_10024931; /* 0x100248C2: jle 0x10024931 */
L_100248C4:
    esp = 0xD25B2AB9u; /* 0x100248C4: mov esp, 0xd25b2ab9 */
    { uint32_t _sa = MEM8(edi), _sb = HI8(eax), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100248CA: sbb byte ptr [edi], ah */
      MEM8(edi) = (uint8_t)(_sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { _cf = !(recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df) & 1u); _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } /* 0x100248CC: cmc  */
    ebx = POP32_VAL(esp); /* 0x100248CD: pop ebx */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NS, _cf)) goto L_10024914; /* 0x100248CE: jns 0x10024914 */
L_100248D0:
    (void)(MEM16(eax + (-0x429B4346))) /* seg reg write */; /* 0x100248D0: mov cs, word ptr [eax - 0x429b4346] */
    edi = 0xA60DC6CAu; /* 0x100248D6: mov edi, 0xa60dc6ca */
    RECOMP_BACKEDGE();
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NS, _cf)) goto L_100248A5; /* 0x100248DB: jns 0x100248a5 */
L_100248DD:
    edi = POP32_VAL(esp); /* 0x100248DD: pop edi */
    PUSH32(esp, edx); /* 0x100248DE: push edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x100248DF: dec ecx */
    _flag_k = FK_DEC;
    MEM8(edi) = MEM8(esi); esi += _df; edi += _df; /* 0x100248E0: movsb byte ptr es:[edi], byte ptr [esi] */
    { uint32_t _sa = LO8(eax), _sb = 0x11u, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100248E1: sbb al, 0x11 */
      SET_LO8(eax, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    void_lift_trap(0x100248E3u, "arpl word ptr [esi + 0x63b85eec], bp");
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(ecx)); /* 0x100248E9: add byte ptr [edi], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x100248ECu, "insd dword ptr es:[edi], dx");
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + HI8(eax)); /* 0x100248ED: add byte ptr [edx], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    POPAD(); /* 0x100248F0: popal  */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + HI8(edx)); /* 0x100248F1: add byte ptr [ebx], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(GS_BASE + (esi))) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(GS_BASE + (esi)) = (uint8_t)(MEM8(GS_BASE + (esi)) + HI8(ecx)); /* 0x100248F4: add byte ptr gs:[esi], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + eax + 0x6C)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax + 0x6C) = (uint8_t)(MEM8(eax + eax + 0x6C) + HI8(eax)); /* 0x100248F7: add byte ptr [eax + eax + 0x6c], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + eax)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax) = (uint8_t)(MEM8(eax + eax) + HI8(ecx)); /* 0x100248FB: add byte ptr [eax + eax], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100248FF; /* falls through past a gap */
L_100248FD:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100248FD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
L_100248FF:
    _flag_a = (uint32_t)(MEM8(edx + 0x6F)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx + 0x6F) = (uint8_t)(MEM8(edx + 0x6F) + LO8(edx)); /* 0x100248FF: add byte ptr [edx + 0x6f], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x10024902: dec ecx */
    _flag_k = FK_DEC;
    /* outsb: no port I/O under Win32 */ /* 0x10024903: outsb dx, byte ptr [esi] */
L_10024904:
    esi = (uint32_t)((int32_t)MEM32(ecx + ebp * 2 + 0x61) * (int32_t)0x657A696Cu); /* 0x10024904: imul esi, dword ptr [ecx + ebp*2 + 0x61], 0x657a696c */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x75))) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp + (-0x75)) = (uint8_t)(MEM8(ebp + (-0x75)) + LO8(edx)); /* 0x1002490C: add byte ptr [ebp - 0x75], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* in: no port I/O under Win32 */ /* 0x1002490F: in al, dx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x10024910: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x44u; /* 0x10024913: sub esp, 0x44 */
    _flag_k = FK_CMP;
    goto L_10024916; /* falls through past a gap */
L_10024914:
    /* in: no port I/O under Win32 */ /* 0x10024914: in al, dx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(1);
    esp = esp + 1; /* 0x10024915: inc esp */
    _flag_k = FK_INC;
L_10024916:
    /* cmp MEM32(0x100E0AD8), 0 */ /* 0x10024916: cmp dword ptr [0x100e0ad8], 0 */
    _flag_a = (uint32_t)(MEM32(0x100E0AD8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1002491D: push ebx */
    PUSH32(esp, esi); /* 0x1002491E: push esi */
    PUSH32(esp, edi); /* 0x1002491F: push edi */
    ebx = ecx; /* 0x10024920: mov ebx, ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10024975; /* 0x10024922: je 0x10024975 */
L_10024924:
    PUSH32(esp, 0x3Eu); /* 0x10024924: push 0x3e */
    eax = esp + 0x16; /* 0x10024926: lea eax, [esp + 0x16] */
    PUSH32(esp, 0); /* 0x1002492A: push 0 */
    PUSH32(esp, eax); /* 0x1002492C: push eax */
    RECOMP_CALL(sub_10011533); /* 0x1002492D: call 0x10011533 */
    RECOMP_FLAGS_IN();
    goto L_10024932; /* falls through past a gap */
L_10024931:
    _flag_a = (uint32_t)(MEM32(ebx + 0x44C70CC4)); _flag_b = (uint32_t)(1);
    MEM32(ebx + 0x44C70CC4) = MEM32(ebx + 0x44C70CC4) + 1; /* 0x10024931: inc dword ptr [ebx + 0x44c70cc4] */
    _flag_k = FK_INC;
    goto L_10024937; /* falls through past a gap */
L_10024932:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10024932: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(esp + 0x3C) = 0x00020000u; /* 0x10024935: mov dword ptr [esp + 0x3c], 0x20000 */
    goto L_1002493D; /* falls through past a gap */
L_10024937:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x3Cu) << 24;
    SET_LO8(eax, LO8(eax) & 0x3Cu); /* 0x10024937: and al, 0x3c */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10024939: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + MEM8(eax)); /* 0x1002493B: add al, byte ptr [eax] */
    _flag_k = FK_NARROW(FK_ADD, 24);
L_1002493D:
    MEM8(esp + 0x14) = (uint8_t)(LO8(ebx)); /* 0x1002493D: mov byte ptr [esp + 0x14], bl */
    edi = esp + 0x28; /* 0x10024941: lea edi, [esp + 0x28] */
    MEM8(esp + 0x15) = (uint8_t)(4); /* 0x10024945: mov byte ptr [esp + 0x15], 4 */
    esi = 0x1002497Cu; /* 0x1002494A: mov esi, 0x1002497c */
    PUSH32(esp, 0x40u); /* 0x1002494F: push 0x40 */
    eax = POP32_VAL(esp); /* 0x10024951: pop eax */
    MEM16(esp + 0x10) = (uint16_t)(LO16(eax)); /* 0x10024952: mov word ptr [esp + 0x10], ax */
    eax = MEM32(ebp + 0x8); /* 0x10024957: mov eax, dword ptr [ebp + 8] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1002495A: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1002495B: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1002495C: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1002495D: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(esp + 0x44) = eax; /* 0x1002495E: mov dword ptr [esp + 0x44], eax */
    eax = MEM32(ebp + 0xC); /* 0x10024962: mov eax, dword ptr [ebp + 0xc] */
    MEM32(esp + 0x48) = eax; /* 0x10024965: mov dword ptr [esp + 0x48], eax */
    eax = esp + 0x10; /* 0x10024969: lea eax, [esp + 0x10] */
    PUSH32(esp, eax); /* 0x1002496D: push eax */
    PUSH32(esp, ecx); /* 0x1002496E: push ecx */
    PUSH32(esp, ecx); /* 0x1002496F: push ecx */
    RECOMP_CALL(sub_1007A15B); /* 0x10024970: call 0x1007a15b */
    RECOMP_FLAGS_IN();
L_10024975:
    edi = POP32_VAL(esp); /* 0x10024975: pop edi */
    esi = POP32_VAL(esp); /* 0x10024976: pop esi */
    ebx = POP32_VAL(esp); /* 0x10024977: pop ebx */
    esp = ebp; /* 0x10024978: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1002497A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002497B: ret  */
    RECOMP_REGS_OUT();
}

void sub_100248C8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100248C8u);

    goto L_100248C8;
L_100248A5:
    /* out: no port I/O under Win32 */ /* 0x100248A5: out 0xd4, eax */
    _flag_a = (uint32_t)((LO8(eax) | 0x1Fu)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0x1Fu)) << 24;
    SET_LO8(eax, LO8(eax) | 0x1Fu); /* 0x100248A7: or al, 0x1f */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    edi = 0xA86BE8A3u; /* 0x100248A9: mov edi, 0xa86be8a3 */
    /* nop */ /* 0x100248AE: nop  */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x100248AF: inc ebx */
    _flag_k = FK_INC;
    PUSH32(esp, recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df)); /* 0x100248B0: pushfd  */
    PUSHAD(); /* 0x100248B1: pushal  */
    PUSH32(esp, ebx); /* 0x100248B2: push ebx */
    /* nop */ /* 0x100248B3: nop  */
    ecx = 0x7D2CD269u; /* 0x100248B4: mov ecx, 0x7d2cd269 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x100248B9: dec edx */
    _flag_k = FK_DEC;
    SET_LO8(ecx, 0x72u); /* 0x100248BA: mov cl, 0x72 */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(1);
    esp = esp - 1; /* 0x100248BC: dec esp */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_O(_flag_a, _flag_b)) goto L_100248FD; /* 0x100248BD: jo 0x100248fd */
L_100248BF:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x100248BF: inc edx */
    _flag_k = FK_INC;
    { uint32_t _tmp = edx; /* 0x100248C0: xchg edx, eax */
      edx = eax;
      eax = _tmp; }
    { _cf = 0; _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } /* 0x100248C1: clc  */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_LE, _cf)) goto L_10024931; /* 0x100248C2: jle 0x10024931 */
L_100248C4:
    esp = 0xD25B2AB9u; /* 0x100248C4: mov esp, 0xd25b2ab9 */
    goto L_100248CA; /* falls through past a gap */
L_100248C8:
    ebx = POP32_VAL(esp); /* 0x100248C8: pop ebx */
    { uint32_t _rv = (MEM8(eax)) & 255u, _rn = ((LO8(ecx)) & 31) % 9u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = _rv & 1u; _rv = ((_rv >> 1) | (_cf << 7)) & 255u; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } MEM8(eax) = (uint8_t)(_rv); } /* 0x100248C9: rcr byte ptr [eax], cl */
    goto L_100248CB; /* falls through past a gap */
L_100248CA:
    { uint32_t _sa = MEM8(edi), _sb = HI8(eax), _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100248CA: sbb byte ptr [edi], ah */
      MEM8(edi) = (uint8_t)(_sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_100248CC; /* falls through past a gap */
L_100248CB:
    void_lift_trap(0x100248CBu, "daa ");
L_100248CC:
    { _cf = !(recomp_eflags(_flag_k, _flag_a, _flag_b, _cf, _df) & 1u); _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } /* 0x100248CC: cmc  */
    ebx = POP32_VAL(esp); /* 0x100248CD: pop ebx */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NS, _cf)) goto L_10024914; /* 0x100248CE: jns 0x10024914 */
L_100248D0:
    (void)(MEM16(eax + (-0x429B4346))) /* seg reg write */; /* 0x100248D0: mov cs, word ptr [eax - 0x429b4346] */
    edi = 0xA60DC6CAu; /* 0x100248D6: mov edi, 0xa60dc6ca */
    RECOMP_BACKEDGE();
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NS, _cf)) goto L_100248A5; /* 0x100248DB: jns 0x100248a5 */
L_100248DD:
    edi = POP32_VAL(esp); /* 0x100248DD: pop edi */
    PUSH32(esp, edx); /* 0x100248DE: push edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x100248DF: dec ecx */
    _flag_k = FK_DEC;
    MEM8(edi) = MEM8(esi); esi += _df; edi += _df; /* 0x100248E0: movsb byte ptr es:[edi], byte ptr [esi] */
    { uint32_t _sa = LO8(eax), _sb = 0x11u, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100248E1: sbb al, 0x11 */
      SET_LO8(eax, _sa - _sb - _sc);
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    void_lift_trap(0x100248E3u, "arpl word ptr [esi + 0x63b85eec], bp");
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edi) = (uint8_t)(MEM8(edi) + HI8(ecx)); /* 0x100248E9: add byte ptr [edi], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x100248ECu, "insd dword ptr es:[edi], dx");
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx) = (uint8_t)(MEM8(edx) + HI8(eax)); /* 0x100248ED: add byte ptr [edx], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    POPAD(); /* 0x100248F0: popal  */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + HI8(edx)); /* 0x100248F1: add byte ptr [ebx], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(GS_BASE + (esi))) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(GS_BASE + (esi)) = (uint8_t)(MEM8(GS_BASE + (esi)) + HI8(ecx)); /* 0x100248F4: add byte ptr gs:[esi], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + eax + 0x6C)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax + 0x6C) = (uint8_t)(MEM8(eax + eax + 0x6C) + HI8(eax)); /* 0x100248F7: add byte ptr [eax + eax + 0x6c], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + eax)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax) = (uint8_t)(MEM8(eax + eax) + HI8(ecx)); /* 0x100248FB: add byte ptr [eax + eax], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_100248FF; /* falls through past a gap */
L_100248FD:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100248FD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
L_100248FF:
    _flag_a = (uint32_t)(MEM8(edx + 0x6F)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx + 0x6F) = (uint8_t)(MEM8(edx + 0x6F) + LO8(edx)); /* 0x100248FF: add byte ptr [edx + 0x6f], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x10024902: dec ecx */
    _flag_k = FK_DEC;
    /* outsb: no port I/O under Win32 */ /* 0x10024903: outsb dx, byte ptr [esi] */
    esi = (uint32_t)((int32_t)MEM32(ecx + ebp * 2 + 0x61) * (int32_t)0x657A696Cu); /* 0x10024904: imul esi, dword ptr [ecx + ebp*2 + 0x61], 0x657a696c */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x75))) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp + (-0x75)) = (uint8_t)(MEM8(ebp + (-0x75)) + LO8(edx)); /* 0x1002490C: add byte ptr [ebp - 0x75], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* in: no port I/O under Win32 */ /* 0x1002490F: in al, dx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x10024910: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x44u; /* 0x10024913: sub esp, 0x44 */
    _flag_k = FK_CMP;
    goto L_10024916; /* falls through past a gap */
L_10024914:
    /* in: no port I/O under Win32 */ /* 0x10024914: in al, dx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(1);
    esp = esp + 1; /* 0x10024915: inc esp */
    _flag_k = FK_INC;
L_10024916:
    /* cmp MEM32(0x100E0AD8), 0 */ /* 0x10024916: cmp dword ptr [0x100e0ad8], 0 */
    _flag_a = (uint32_t)(MEM32(0x100E0AD8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1002491D: push ebx */
    PUSH32(esp, esi); /* 0x1002491E: push esi */
    PUSH32(esp, edi); /* 0x1002491F: push edi */
    ebx = ecx; /* 0x10024920: mov ebx, ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10024975; /* 0x10024922: je 0x10024975 */
L_10024924:
    PUSH32(esp, 0x3Eu); /* 0x10024924: push 0x3e */
    eax = esp + 0x16; /* 0x10024926: lea eax, [esp + 0x16] */
    PUSH32(esp, 0); /* 0x1002492A: push 0 */
    PUSH32(esp, eax); /* 0x1002492C: push eax */
    RECOMP_CALL(sub_10011533); /* 0x1002492D: call 0x10011533 */
    RECOMP_FLAGS_IN();
    goto L_10024932; /* falls through past a gap */
L_10024931:
    _flag_a = (uint32_t)(MEM32(ebx + 0x44C70CC4)); _flag_b = (uint32_t)(1);
    MEM32(ebx + 0x44C70CC4) = MEM32(ebx + 0x44C70CC4) + 1; /* 0x10024931: inc dword ptr [ebx + 0x44c70cc4] */
    _flag_k = FK_INC;
    goto L_10024937; /* falls through past a gap */
L_10024932:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10024932: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(esp + 0x3C) = 0x00020000u; /* 0x10024935: mov dword ptr [esp + 0x3c], 0x20000 */
    goto L_1002493D; /* falls through past a gap */
L_10024937:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x3Cu) << 24;
    SET_LO8(eax, LO8(eax) & 0x3Cu); /* 0x10024937: and al, 0x3c */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10024939: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + MEM8(eax)); /* 0x1002493B: add al, byte ptr [eax] */
    _flag_k = FK_NARROW(FK_ADD, 24);
L_1002493D:
    MEM8(esp + 0x14) = (uint8_t)(LO8(ebx)); /* 0x1002493D: mov byte ptr [esp + 0x14], bl */
    edi = esp + 0x28; /* 0x10024941: lea edi, [esp + 0x28] */
    MEM8(esp + 0x15) = (uint8_t)(4); /* 0x10024945: mov byte ptr [esp + 0x15], 4 */
    esi = 0x1002497Cu; /* 0x1002494A: mov esi, 0x1002497c */
    PUSH32(esp, 0x40u); /* 0x1002494F: push 0x40 */
    eax = POP32_VAL(esp); /* 0x10024951: pop eax */
    MEM16(esp + 0x10) = (uint16_t)(LO16(eax)); /* 0x10024952: mov word ptr [esp + 0x10], ax */
    eax = MEM32(ebp + 0x8); /* 0x10024957: mov eax, dword ptr [ebp + 8] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1002495A: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1002495B: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1002495C: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1002495D: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(esp + 0x44) = eax; /* 0x1002495E: mov dword ptr [esp + 0x44], eax */
    eax = MEM32(ebp + 0xC); /* 0x10024962: mov eax, dword ptr [ebp + 0xc] */
    MEM32(esp + 0x48) = eax; /* 0x10024965: mov dword ptr [esp + 0x48], eax */
    eax = esp + 0x10; /* 0x10024969: lea eax, [esp + 0x10] */
    PUSH32(esp, eax); /* 0x1002496D: push eax */
    PUSH32(esp, ecx); /* 0x1002496E: push ecx */
    PUSH32(esp, ecx); /* 0x1002496F: push ecx */
    RECOMP_CALL(sub_1007A15B); /* 0x10024970: call 0x1007a15b */
    RECOMP_FLAGS_IN();
L_10024975:
    edi = POP32_VAL(esp); /* 0x10024975: pop edi */
    esi = POP32_VAL(esp); /* 0x10024976: pop esi */
    ebx = POP32_VAL(esp); /* 0x10024977: pop ebx */
    esp = ebp; /* 0x10024978: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1002497A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002497B: ret  */
    RECOMP_REGS_OUT();
}

void sub_100248E8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100248E8u);

L_100248E8:
    void_lift_trap(0x100248E8u, "arpl word ptr [eax], ax");
    /* outsd: no port I/O under Win32 */ /* 0x100248EA: outsd dx, dword ptr [esi] */
    _flag_a = (uint32_t)(MEM8(ebp)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp) = (uint8_t)(MEM8(ebp) + HI8(ecx)); /* 0x100248EB: add byte ptr [ebp], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    void_lift_trap(0x100248EEu, "bound eax, qword ptr [eax]");
    POPAD(); /* 0x100248F0: popal  */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebx) = (uint8_t)(MEM8(ebx) + HI8(edx)); /* 0x100248F1: add byte ptr [ebx], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(GS_BASE + (esi))) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(GS_BASE + (esi)) = (uint8_t)(MEM8(GS_BASE + (esi)) + HI8(ecx)); /* 0x100248F4: add byte ptr gs:[esi], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + eax + 0x6C)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax + 0x6C) = (uint8_t)(MEM8(eax + eax + 0x6C) + HI8(eax)); /* 0x100248F7: add byte ptr [eax + eax + 0x6c], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + eax)) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + eax) = (uint8_t)(MEM8(eax + eax) + HI8(ecx)); /* 0x100248FB: add byte ptr [eax + eax], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(edx + 0x6F)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(edx + 0x6F) = (uint8_t)(MEM8(edx + 0x6F) + LO8(edx)); /* 0x100248FF: add byte ptr [edx + 0x6f], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x10024902: dec ecx */
    _flag_k = FK_DEC;
    /* outsb: no port I/O under Win32 */ /* 0x10024903: outsb dx, byte ptr [esi] */
    esi = (uint32_t)((int32_t)MEM32(ecx + ebp * 2 + 0x61) * (int32_t)0x657A696Cu); /* 0x10024904: imul esi, dword ptr [ecx + ebp*2 + 0x61], 0x657a696c */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x75))) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp + (-0x75)) = (uint8_t)(MEM8(ebp + (-0x75)) + LO8(edx)); /* 0x1002490C: add byte ptr [ebp - 0x75], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* in: no port I/O under Win32 */ /* 0x1002490F: in al, dx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x10024910: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x44u; /* 0x10024913: sub esp, 0x44 */
    _flag_k = FK_CMP;
    /* cmp MEM32(0x100E0AD8), 0 */ /* 0x10024916: cmp dword ptr [0x100e0ad8], 0 */
    _flag_a = (uint32_t)(MEM32(0x100E0AD8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1002491D: push ebx */
    PUSH32(esp, esi); /* 0x1002491E: push esi */
    PUSH32(esp, edi); /* 0x1002491F: push edi */
    ebx = ecx; /* 0x10024920: mov ebx, ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10024975; /* 0x10024922: je 0x10024975 */
L_10024924:
    PUSH32(esp, 0x3Eu); /* 0x10024924: push 0x3e */
    eax = esp + 0x16; /* 0x10024926: lea eax, [esp + 0x16] */
    PUSH32(esp, 0); /* 0x1002492A: push 0 */
    PUSH32(esp, eax); /* 0x1002492C: push eax */
    RECOMP_CALL(sub_10011533); /* 0x1002492D: call 0x10011533 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10024932: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(esp + 0x3C) = 0x00020000u; /* 0x10024935: mov dword ptr [esp + 0x3c], 0x20000 */
    MEM8(esp + 0x14) = (uint8_t)(LO8(ebx)); /* 0x1002493D: mov byte ptr [esp + 0x14], bl */
    edi = esp + 0x28; /* 0x10024941: lea edi, [esp + 0x28] */
    MEM8(esp + 0x15) = (uint8_t)(4); /* 0x10024945: mov byte ptr [esp + 0x15], 4 */
    esi = 0x1002497Cu; /* 0x1002494A: mov esi, 0x1002497c */
    PUSH32(esp, 0x40u); /* 0x1002494F: push 0x40 */
    eax = POP32_VAL(esp); /* 0x10024951: pop eax */
    MEM16(esp + 0x10) = (uint16_t)(LO16(eax)); /* 0x10024952: mov word ptr [esp + 0x10], ax */
    eax = MEM32(ebp + 0x8); /* 0x10024957: mov eax, dword ptr [ebp + 8] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1002495A: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1002495B: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1002495C: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1002495D: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(esp + 0x44) = eax; /* 0x1002495E: mov dword ptr [esp + 0x44], eax */
    eax = MEM32(ebp + 0xC); /* 0x10024962: mov eax, dword ptr [ebp + 0xc] */
    MEM32(esp + 0x48) = eax; /* 0x10024965: mov dword ptr [esp + 0x48], eax */
    eax = esp + 0x10; /* 0x10024969: lea eax, [esp + 0x10] */
    PUSH32(esp, eax); /* 0x1002496D: push eax */
    PUSH32(esp, ecx); /* 0x1002496E: push ecx */
    PUSH32(esp, ecx); /* 0x1002496F: push ecx */
    RECOMP_CALL(sub_1007A15B); /* 0x10024970: call 0x1007a15b */
    RECOMP_FLAGS_IN();
L_10024975:
    edi = POP32_VAL(esp); /* 0x10024975: pop edi */
    esi = POP32_VAL(esp); /* 0x10024976: pop esi */
    ebx = POP32_VAL(esp); /* 0x10024977: pop ebx */
    esp = ebp; /* 0x10024978: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1002497A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002497B: ret  */
    RECOMP_REGS_OUT();
}

void sub_10024900(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10024900u);

L_10024900:
    PUSH32(esp, edx); /* 0x10024900: push edx */
    /* outsd: no port I/O under Win32 */ /* 0x10024901: outsd dx, dword ptr [esi] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x10024902: dec ecx */
    _flag_k = FK_DEC;
    /* outsb: no port I/O under Win32 */ /* 0x10024903: outsb dx, byte ptr [esi] */
    esi = (uint32_t)((int32_t)MEM32(ecx + ebp * 2 + 0x61) * (int32_t)0x657A696Cu); /* 0x10024904: imul esi, dword ptr [ecx + ebp*2 + 0x61], 0x657a696c */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x75))) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp + (-0x75)) = (uint8_t)(MEM8(ebp + (-0x75)) + LO8(edx)); /* 0x1002490C: add byte ptr [ebp - 0x75], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* in: no port I/O under Win32 */ /* 0x1002490F: in al, dx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x10024910: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x44u; /* 0x10024913: sub esp, 0x44 */
    _flag_k = FK_CMP;
    /* cmp MEM32(0x100E0AD8), 0 */ /* 0x10024916: cmp dword ptr [0x100e0ad8], 0 */
    _flag_a = (uint32_t)(MEM32(0x100E0AD8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1002491D: push ebx */
    PUSH32(esp, esi); /* 0x1002491E: push esi */
    PUSH32(esp, edi); /* 0x1002491F: push edi */
    ebx = ecx; /* 0x10024920: mov ebx, ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10024975; /* 0x10024922: je 0x10024975 */
L_10024924:
    PUSH32(esp, 0x3Eu); /* 0x10024924: push 0x3e */
    eax = esp + 0x16; /* 0x10024926: lea eax, [esp + 0x16] */
    PUSH32(esp, 0); /* 0x1002492A: push 0 */
    PUSH32(esp, eax); /* 0x1002492C: push eax */
    RECOMP_CALL(sub_10011533); /* 0x1002492D: call 0x10011533 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10024932: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(esp + 0x3C) = 0x00020000u; /* 0x10024935: mov dword ptr [esp + 0x3c], 0x20000 */
    MEM8(esp + 0x14) = (uint8_t)(LO8(ebx)); /* 0x1002493D: mov byte ptr [esp + 0x14], bl */
    edi = esp + 0x28; /* 0x10024941: lea edi, [esp + 0x28] */
    MEM8(esp + 0x15) = (uint8_t)(4); /* 0x10024945: mov byte ptr [esp + 0x15], 4 */
    esi = 0x1002497Cu; /* 0x1002494A: mov esi, 0x1002497c */
    PUSH32(esp, 0x40u); /* 0x1002494F: push 0x40 */
    eax = POP32_VAL(esp); /* 0x10024951: pop eax */
    MEM16(esp + 0x10) = (uint16_t)(LO16(eax)); /* 0x10024952: mov word ptr [esp + 0x10], ax */
    eax = MEM32(ebp + 0x8); /* 0x10024957: mov eax, dword ptr [ebp + 8] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1002495A: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1002495B: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1002495C: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1002495D: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(esp + 0x44) = eax; /* 0x1002495E: mov dword ptr [esp + 0x44], eax */
    eax = MEM32(ebp + 0xC); /* 0x10024962: mov eax, dword ptr [ebp + 0xc] */
    MEM32(esp + 0x48) = eax; /* 0x10024965: mov dword ptr [esp + 0x48], eax */
    eax = esp + 0x10; /* 0x10024969: lea eax, [esp + 0x10] */
    PUSH32(esp, eax); /* 0x1002496D: push eax */
    PUSH32(esp, ecx); /* 0x1002496E: push ecx */
    PUSH32(esp, ecx); /* 0x1002496F: push ecx */
    RECOMP_CALL(sub_1007A15B); /* 0x10024970: call 0x1007a15b */
    RECOMP_FLAGS_IN();
L_10024975:
    edi = POP32_VAL(esp); /* 0x10024975: pop edi */
    esi = POP32_VAL(esp); /* 0x10024976: pop esi */
    ebx = POP32_VAL(esp); /* 0x10024977: pop ebx */
    esp = ebp; /* 0x10024978: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1002497A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002497B: ret  */
    RECOMP_REGS_OUT();
}

void sub_1002490D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002490Du);

L_1002490D:
    PUSH32(esp, ebp); /* 0x1002490D: push ebp */
    ebp = esp; /* 0x1002490E: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x10024910: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x44u; /* 0x10024913: sub esp, 0x44 */
    _flag_k = FK_CMP;
    /* cmp MEM32(0x100E0AD8), 0 */ /* 0x10024916: cmp dword ptr [0x100e0ad8], 0 */
    _flag_a = (uint32_t)(MEM32(0x100E0AD8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1002491D: push ebx */
    PUSH32(esp, esi); /* 0x1002491E: push esi */
    PUSH32(esp, edi); /* 0x1002491F: push edi */
    ebx = ecx; /* 0x10024920: mov ebx, ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10024975; /* 0x10024922: je 0x10024975 */
L_10024924:
    PUSH32(esp, 0x3Eu); /* 0x10024924: push 0x3e */
    eax = esp + 0x16; /* 0x10024926: lea eax, [esp + 0x16] */
    PUSH32(esp, 0); /* 0x1002492A: push 0 */
    PUSH32(esp, eax); /* 0x1002492C: push eax */
    RECOMP_CALL(sub_10011533); /* 0x1002492D: call 0x10011533 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10024932: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(esp + 0x3C) = 0x00020000u; /* 0x10024935: mov dword ptr [esp + 0x3c], 0x20000 */
    MEM8(esp + 0x14) = (uint8_t)(LO8(ebx)); /* 0x1002493D: mov byte ptr [esp + 0x14], bl */
    edi = esp + 0x28; /* 0x10024941: lea edi, [esp + 0x28] */
    MEM8(esp + 0x15) = (uint8_t)(4); /* 0x10024945: mov byte ptr [esp + 0x15], 4 */
    esi = 0x1002497Cu; /* 0x1002494A: mov esi, 0x1002497c */
    PUSH32(esp, 0x40u); /* 0x1002494F: push 0x40 */
    eax = POP32_VAL(esp); /* 0x10024951: pop eax */
    MEM16(esp + 0x10) = (uint16_t)(LO16(eax)); /* 0x10024952: mov word ptr [esp + 0x10], ax */
    eax = MEM32(ebp + 0x8); /* 0x10024957: mov eax, dword ptr [ebp + 8] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1002495A: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1002495B: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1002495C: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1002495D: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(esp + 0x44) = eax; /* 0x1002495E: mov dword ptr [esp + 0x44], eax */
    eax = MEM32(ebp + 0xC); /* 0x10024962: mov eax, dword ptr [ebp + 0xc] */
    MEM32(esp + 0x48) = eax; /* 0x10024965: mov dword ptr [esp + 0x48], eax */
    eax = esp + 0x10; /* 0x10024969: lea eax, [esp + 0x10] */
    PUSH32(esp, eax); /* 0x1002496D: push eax */
    PUSH32(esp, ecx); /* 0x1002496E: push ecx */
    PUSH32(esp, ecx); /* 0x1002496F: push ecx */
    RECOMP_CALL(sub_1007A15B); /* 0x10024970: call 0x1007a15b */
    RECOMP_FLAGS_IN();
L_10024975:
    edi = POP32_VAL(esp); /* 0x10024975: pop edi */
    esi = POP32_VAL(esp); /* 0x10024976: pop esi */
    ebx = POP32_VAL(esp); /* 0x10024977: pop ebx */
    esp = ebp; /* 0x10024978: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1002497A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002497B: ret  */
    RECOMP_REGS_OUT();
}

void sub_1002497C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002497Cu);

L_1002497C:
    PUSH32(esp, _seg_fs); /* 0x1002497C: push fs */
    void_lift_trap(0x1002497Eu, "daa ");
    PUSH32(esp, edi); /* 0x1002497F: push edi */
    esi = 0x82451950u; /* 0x10024980: mov esi, 0x82451950 */
    PUSH32(esp, esi); /* 0x10024985: push esi */
    { int64_t _r = (int64_t)(int32_t)eax * (int32_t)(MEM32(ecx + (-0x68))); /* 0x10024986: imul dword ptr [ecx - 0x68] */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = _r != (int32_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
L_10024989:
    RECOMP_BACKEDGE();
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NO, _cf)) goto L_10024989; /* 0x10024989: jno 0x10024989 */
L_1002498B:
    { RECOMP_REGS_OUT(); return; } /* far return */ /* 0x1002498B: retf  */
    RECOMP_REGS_OUT();
}

void sub_1002498C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1002498Cu);

L_1002498C:
    PUSH32(esp, ebp); /* 0x1002498C: push ebp */
    ebp = esp; /* 0x1002498D: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x1002498F: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x44u; /* 0x10024992: sub esp, 0x44 */
    _flag_k = FK_CMP;
    /* cmp MEM32(0x100E0AD8), 0 */ /* 0x10024995: cmp dword ptr [0x100e0ad8], 0 */
    _flag_a = (uint32_t)(MEM32(0x100E0AD8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1002499C: push ebx */
    PUSH32(esp, esi); /* 0x1002499D: push esi */
    PUSH32(esp, edi); /* 0x1002499E: push edi */
    ebx = ecx; /* 0x1002499F: mov ebx, ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100249ED; /* 0x100249A1: je 0x100249ed */
L_100249A3:
    PUSH32(esp, 0x3Eu); /* 0x100249A3: push 0x3e */
    eax = esp + 0x16; /* 0x100249A5: lea eax, [esp + 0x16] */
    PUSH32(esp, 0); /* 0x100249A9: push 0 */
    PUSH32(esp, eax); /* 0x100249AB: push eax */
    RECOMP_CALL(sub_10011533); /* 0x100249AC: call 0x10011533 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100249B1: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(esp + 0x3C) = 0x00020000u; /* 0x100249B4: mov dword ptr [esp + 0x3c], 0x20000 */
    MEM8(esp + 0x14) = (uint8_t)(LO8(ebx)); /* 0x100249BC: mov byte ptr [esp + 0x14], bl */
    edi = esp + 0x28; /* 0x100249C0: lea edi, [esp + 0x28] */
    MEM8(esp + 0x15) = (uint8_t)(4); /* 0x100249C4: mov byte ptr [esp + 0x15], 4 */
    esi = 0x100249F4u; /* 0x100249C9: mov esi, 0x100249f4 */
    PUSH32(esp, 0x40u); /* 0x100249CE: push 0x40 */
    eax = POP32_VAL(esp); /* 0x100249D0: pop eax */
    MEM16(esp + 0x10) = (uint16_t)(LO16(eax)); /* 0x100249D1: mov word ptr [esp + 0x10], ax */
    eax = MEM32(ebp + 0x8); /* 0x100249D6: mov eax, dword ptr [ebp + 8] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100249D9: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100249DA: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100249DB: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x100249DC: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(esp + 0x44) = eax; /* 0x100249DD: mov dword ptr [esp + 0x44], eax */
    eax = esp + 0x10; /* 0x100249E1: lea eax, [esp + 0x10] */
    PUSH32(esp, eax); /* 0x100249E5: push eax */
    PUSH32(esp, ecx); /* 0x100249E6: push ecx */
    PUSH32(esp, ecx); /* 0x100249E7: push ecx */
    RECOMP_CALL(sub_1007A15B); /* 0x100249E8: call 0x1007a15b */
    RECOMP_FLAGS_IN();
L_100249ED:
    edi = POP32_VAL(esp); /* 0x100249ED: pop edi */
    esi = POP32_VAL(esp); /* 0x100249EE: pop esi */
    ebx = POP32_VAL(esp); /* 0x100249EF: pop ebx */
    esp = ebp; /* 0x100249F0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100249F2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100249F3: ret  */
    RECOMP_REGS_OUT();
}

void sub_100249F4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100249F4u);

L_100249F4:
    SET_LO8(ebx, MEM8(edi)); /* 0x100249F4: mov bl, byte ptr [edi] */
    _flag_a = (uint32_t)((edx | esp)); _flag_b = (uint32_t)((edx | esp));
    edx = edx | esp; /* 0x100249F6: or edx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((LO8(ebx) | MEM8(esi))) << 24; _flag_b = (uint32_t)((LO8(ebx) | MEM8(esi))) << 24;
    SET_LO8(ebx, LO8(ebx) | MEM8(esi)); /* 0x100249F8: or bl, byte ptr [esi] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)((MEM32(edi + (-0x7C)) ^ eax)); _flag_b = (uint32_t)((MEM32(edi + (-0x7C)) ^ eax));
    MEM32(edi + (-0x7C)) = MEM32(edi + (-0x7C)) ^ eax; /* 0x100249FA: xor dword ptr [edi - 0x7c], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(0x8A7CD50D) = (uint8_t)(LO8(eax)); /* 0x100249FD: mov byte ptr [0x8a7cd50d], al */
    PUSH32(esp, edx); /* 0x10024A02: push edx */
    POPAD(); /* 0x10024A03: popal  */
    PUSH32(esp, esi); /* 0x10024A04: push esi */
    esi = ecx; /* 0x10024A05: mov esi, ecx */
    eax = 0x1001u; /* 0x10024A07: mov eax, 0x1001 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10024A0C: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 4); /* 0x10024A0E: push 4 */
    edx = POP32_VAL(esp); /* 0x10024A10: pop edx */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0; /* 0x10024A11: and dword ptr [esi + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = eax; /* 0x10024A15: mov dword ptr [esi], eax */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x10024A17: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x10024A19: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x10024A1C: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x10024A1E: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x10024A20: push ecx */
    RECOMP_CALL(sub_10011683); /* 0x10024A21: call 0x10011683 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi); /* 0x10024A26: mov ecx, dword ptr [esi] */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x10024A28: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x10024A28: shl ecx, 2 */
    PUSH32(esp, ecx); /* 0x10024A2B: push ecx */
    PUSH32(esp, 0); /* 0x10024A2C: push 0 */
    PUSH32(esp, eax); /* 0x10024A2E: push eax */
    MEM32(esi + 0x8) = eax; /* 0x10024A2F: mov dword ptr [esi + 8], eax */
    RECOMP_CALL(sub_10011533); /* 0x10024A32: call 0x10011533 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x10024A37: add esp, 0x10 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x10024A3A: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x10024A3C: pop esi */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x10024A3D: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_10024A04(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10024A04u);

L_10024A04:
    PUSH32(esp, esi); /* 0x10024A04: push esi */
    esi = ecx; /* 0x10024A05: mov esi, ecx */
    eax = 0x1001u; /* 0x10024A07: mov eax, 0x1001 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10024A0C: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 4); /* 0x10024A0E: push 4 */
    edx = POP32_VAL(esp); /* 0x10024A10: pop edx */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0; /* 0x10024A11: and dword ptr [esi + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = eax; /* 0x10024A15: mov dword ptr [esi], eax */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x10024A17: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x10024A19: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x10024A1C: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x10024A1E: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x10024A20: push ecx */
    RECOMP_CALL(sub_10011683); /* 0x10024A21: call 0x10011683 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi); /* 0x10024A26: mov ecx, dword ptr [esi] */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x10024A28: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x10024A28: shl ecx, 2 */
    PUSH32(esp, ecx); /* 0x10024A2B: push ecx */
    PUSH32(esp, 0); /* 0x10024A2C: push 0 */
    PUSH32(esp, eax); /* 0x10024A2E: push eax */
    MEM32(esi + 0x8) = eax; /* 0x10024A2F: mov dword ptr [esi + 8], eax */
    RECOMP_CALL(sub_10011533); /* 0x10024A32: call 0x10011533 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x10024A37: add esp, 0x10 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x10024A3A: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x10024A3C: pop esi */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x10024A3D: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_10024A40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10024A40u);

L_10024A40:
    PUSH32(esp, 0x38u); /* 0x10024A40: push 0x38 */
    eax = 0x100DB96Au; /* 0x10024A42: mov eax, 0x100db96a */
    RECOMP_CALL(sub_100149A4); /* 0x10024A47: call 0x100149a4 */
    RECOMP_FLAGS_IN();
    edi = ecx; /* 0x10024A4C: mov edi, ecx */
    MEM32(ebp + (-0x14)) = edi; /* 0x10024A4E: mov dword ptr [ebp - 0x14], edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10024A51: push dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10024A54: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = edi + 0x4; /* 0x10024A56: lea ecx, [edi + 4] */
    MEM32(ebp + (-0x4)) = ebx; /* 0x10024A59: mov dword ptr [ebp - 4], ebx */
    MEM32(edi) = 0x10024128u; /* 0x10024A5C: mov dword ptr [edi], 0x10024128 */
    RECOMP_CALL(sub_10026F6A); /* 0x10024A62: call 0x10026f6a */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x30) = ebx; /* 0x10024A67: mov dword ptr [edi + 0x30], ebx */
    MEM32(edi + 0x34) = ebx; /* 0x10024A6A: mov dword ptr [edi + 0x34], ebx */
    MEM32(edi + 0x38) = ebx; /* 0x10024A6D: mov dword ptr [edi + 0x38], ebx */
    MEM32(edi + 0x3C) = ebx; /* 0x10024A70: mov dword ptr [edi + 0x3c], ebx */
    MEM32(edi + 0x40) = ebx; /* 0x10024A73: mov dword ptr [edi + 0x40], ebx */
    MEM32(edi + 0x44) = ebx; /* 0x10024A76: mov dword ptr [edi + 0x44], ebx */
    MEM32(edi + 0x48) = ebx; /* 0x10024A79: mov dword ptr [edi + 0x48], ebx */
    MEM32(edi + 0x4C) = ebx; /* 0x10024A7C: mov dword ptr [edi + 0x4c], ebx */
    MEM32(edi + 0x50) = ebx; /* 0x10024A7F: mov dword ptr [edi + 0x50], ebx */
    MEM32(edi + 0x54) = ebx; /* 0x10024A82: mov dword ptr [edi + 0x54], ebx */
    MEM32(edi + 0x58) = ebx; /* 0x10024A85: mov dword ptr [edi + 0x58], ebx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x10024A88: sub esp, 0xc */
    _flag_k = FK_CMP;
    MEM8(ebp + (-0x4)) = (uint8_t)(5); /* 0x10024A8B: mov byte ptr [ebp - 4], 5 */
    ecx = edi + 0x60; /* 0x10024A8F: lea ecx, [edi + 0x60] */
    RECOMP_CALL(sub_1002433D); /* 0x10024A92: call 0x1002433d */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(6); /* 0x10024A97: mov byte ptr [ebp - 4], 6 */
    ecx = edi + 0xC8; /* 0x10024A9B: lea ecx, [edi + 0xc8] */
    MEM32(edi + 0xB4) = ebx; /* 0x10024AA1: mov dword ptr [edi + 0xb4], ebx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x10024AA7: sub esp, 0xc */
    _flag_k = FK_CMP;
    MEM32(edi + 0xB8) = ebx; /* 0x10024AAA: mov dword ptr [edi + 0xb8], ebx */
    MEM32(edi + 0xBC) = ebx; /* 0x10024AB0: mov dword ptr [edi + 0xbc], ebx */
    MEM32(edi + 0xC0) = ebx; /* 0x10024AB6: mov dword ptr [edi + 0xc0], ebx */
    RECOMP_CALL(sub_100243FE); /* 0x10024ABC: call 0x100243fe */
    RECOMP_FLAGS_IN();
    ecx = edi + 0x118; /* 0x10024AC1: lea ecx, [edi + 0x118] */
    RECOMP_CALL(sub_10025C29); /* 0x10024AC7: call 0x10025c29 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(8); /* 0x10024ACC: mov byte ptr [ebp - 4], 8 */
    eax = edi + 0x13C; /* 0x10024AD0: lea eax, [edi + 0x13c] */
    MEM32(edi + 0x130) = ebx; /* 0x10024AD6: mov dword ptr [edi + 0x130], ebx */
    MEM32(edi + 0x134) = ebx; /* 0x10024ADC: mov dword ptr [edi + 0x134], ebx */
    MEM32(edi + 0x138) = ebx; /* 0x10024AE2: mov dword ptr [edi + 0x138], ebx */
    MEM32(eax) = ebx; /* 0x10024AE8: mov dword ptr [eax], ebx */
    MEM32(eax + 0x4) = eax; /* 0x10024AEA: mov dword ptr [eax + 4], eax */
    MEM32(eax + 0x8) = ebx; /* 0x10024AED: mov dword ptr [eax + 8], ebx */
    MEM32(edi + 0x148) = 0xFFFFFFFFu; /* 0x10024AF0: mov dword ptr [edi + 0x148], 0xffffffff */
    MEM32(edi + 0x14C) = 0xFFFFFFFFu; /* 0x10024AFA: mov dword ptr [edi + 0x14c], 0xffffffff */
    MEM32(edi + 0x150) = ebx; /* 0x10024B04: mov dword ptr [edi + 0x150], ebx */
    PUSH32(esp, ecx); /* 0x10024B0A: push ecx */
    MEM32(edi + 0x154) = ebx; /* 0x10024B0B: mov dword ptr [edi + 0x154], ebx */
    ecx = edi + 0x15C; /* 0x10024B11: lea ecx, [edi + 0x15c] */
    MEM32(edi + 0x158) = ebx; /* 0x10024B17: mov dword ptr [edi + 0x158], ebx */
    RECOMP_CALL(sub_10024A04); /* 0x10024B1D: call 0x10024a04 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x10024B22: push ecx */
    ecx = edi + 0x168; /* 0x10024B23: lea ecx, [edi + 0x168] */
    MEM8(ebp + (-0x4)) = (uint8_t)(9); /* 0x10024B29: mov byte ptr [ebp - 4], 9 */
    RECOMP_CALL(sub_10024A04); /* 0x10024B2D: call 0x10024a04 */
    RECOMP_FLAGS_IN();
    MEM8(ebp + (-0x4)) = (uint8_t)(0xAu); /* 0x10024B32: mov byte ptr [ebp - 4], 0xa */
    _flag_a = (uint32_t)((MEM32(edi + 0x174) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(edi + 0x174) | 0xFFFFFFFFu));
    MEM32(edi + 0x174) = MEM32(edi + 0x174) | 0xFFFFFFFFu; /* 0x10024B36: or dword ptr [edi + 0x174], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x178) = ebx; /* 0x10024B3D: mov dword ptr [edi + 0x178], ebx */
    MEM32(edi + 0x180) = ebx; /* 0x10024B43: mov dword ptr [edi + 0x180], ebx */
    MEM32(edi + 0x184) = ebx; /* 0x10024B49: mov dword ptr [edi + 0x184], ebx */
    MEM32(edi + 0x188) = 1; /* 0x10024B4F: mov dword ptr [edi + 0x188], 1 */
    MEM32(edi + 0x18C) = ebx; /* 0x10024B59: mov dword ptr [edi + 0x18c], ebx */
    MEM32(edi + 0x190) = ebx; /* 0x10024B5F: mov dword ptr [edi + 0x190], ebx */
    MEM32(edi + 0x194) = ebx; /* 0x10024B65: mov dword ptr [edi + 0x194], ebx */
    MEM32(edi + 0x198) = ebx; /* 0x10024B6B: mov dword ptr [edi + 0x198], ebx */
    MEM32(edi + 0x1A0) = ebx; /* 0x10024B71: mov dword ptr [edi + 0x1a0], ebx */
    MEM32(edi + 0x1A4) = ebx; /* 0x10024B77: mov dword ptr [edi + 0x1a4], ebx */
    MEM32(edi + 0x1A8) = ebx; /* 0x10024B7D: mov dword ptr [edi + 0x1a8], ebx */
    MEM32(edi + 0x1B0) = ebx; /* 0x10024B83: mov dword ptr [edi + 0x1b0], ebx */
    MEM32(edi + 0x1B8) = ebx; /* 0x10024B89: mov dword ptr [edi + 0x1b8], ebx */
    MEM32(edi + 0x1BC) = ebx; /* 0x10024B8F: mov dword ptr [edi + 0x1bc], ebx */
    MEM32(edi + 0x1C0) = ebx; /* 0x10024B95: mov dword ptr [edi + 0x1c0], ebx */
    MEM32(edi + 0x1C4) = ebx; /* 0x10024B9B: mov dword ptr [edi + 0x1c4], ebx */
    MEM32(edi + 0x1C8) = ebx; /* 0x10024BA1: mov dword ptr [edi + 0x1c8], ebx */
    esi = MEM32(0x100E51A8); /* 0x10024BA7: mov esi, dword ptr [0x100e51a8] */
    eax = edi + 0x1E8; /* 0x10024BAD: lea eax, [edi + 0x1e8] */
    MEM32(edi + 0x1D0) = ebx; /* 0x10024BB3: mov dword ptr [edi + 0x1d0], ebx */
    MEM32(edi + 0x1D4) = ebx; /* 0x10024BB9: mov dword ptr [edi + 0x1d4], ebx */
    PUSH32(esp, eax); /* 0x10024BBF: push eax */
    MEM32(edi + 0x1E4) = ebx; /* 0x10024BC0: mov dword ptr [edi + 0x1e4], ebx */
    RECOMP_ICALL(esi); /* 0x10024BC6: call esi */
    RECOMP_FLAGS_IN();
    eax = edi + 0x1F0; /* 0x10024BC8: lea eax, [edi + 0x1f0] */
    PUSH32(esp, eax); /* 0x10024BCE: push eax */
    RECOMP_ICALL(esi); /* 0x10024BCF: call esi */
    RECOMP_FLAGS_IN();
    eax = edi + 0x1F8; /* 0x10024BD1: lea eax, [edi + 0x1f8] */
    PUSH32(esp, eax); /* 0x10024BD7: push eax */
    RECOMP_ICALL(esi); /* 0x10024BD8: call esi */
    RECOMP_FLAGS_IN();
    eax = edi + 0x200; /* 0x10024BDA: lea eax, [edi + 0x200] */
    PUSH32(esp, eax); /* 0x10024BE0: push eax */
    RECOMP_ICALL(esi); /* 0x10024BE1: call esi */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x10024BE3: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x10024BE6: push ebx */
    MEM32(edi + 0x84) = edi; /* 0x10024BE7: mov dword ptr [edi + 0x84], edi */
    RECOMP_CALL(sub_10024CB7); /* 0x10024BED: call 0x10024cb7 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x10024BF2: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, 4); /* 0x10024BF5: push 4 */
    MEM32(edi + 0x8) = eax; /* 0x10024BF7: mov dword ptr [edi + 8], eax */
    RECOMP_CALL(sub_10024CB7); /* 0x10024BFA: call 0x10024cb7 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x10024BFF: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, 7); /* 0x10024C02: push 7 */
    MEM16(edi + 0x10) = (uint16_t)(LO16(eax)); /* 0x10024C04: mov word ptr [edi + 0x10], ax */
    RECOMP_CALL(sub_10024CB7); /* 0x10024C08: call 0x10024cb7 */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0xC) = eax; /* 0x10024C0D: mov dword ptr [edi + 0xc], eax */
    RECOMP_CALL(sub_100258DA); /* 0x10024C10: call 0x100258da */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x10024C15: mov ecx, dword ptr [ebp + 8] */
    esi = eax; /* 0x10024C18: mov esi, eax */
    PUSH32(esp, 1); /* 0x10024C1A: push 1 */
    RECOMP_CALL(sub_10024CB7); /* 0x10024C1C: call 0x10024cb7 */
    RECOMP_FLAGS_IN();
    ecx = esi; /* 0x10024C21: mov ecx, esi */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x10024C23: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x10024C23: shl ecx, 2 */
    /* cmp ecx, eax */ /* 0x10024C26: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_10052ED4; /* 0x10024C28: jbe 0x10052ed4 */
L_10024C2E:
    RECOMP_CALL(sub_100258DA); /* 0x10024C2E: call 0x100258da */
    RECOMP_FLAGS_IN();
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x10024C33: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x10024C33: shl eax, 2 */
L_10024C36:
    MEM32(edi + 0x1CC) = eax; /* 0x10024C36: mov dword ptr [edi + 0x1cc], eax */
    RECOMP_CALL(sub_10026F10); /* 0x10024C3C: call 0x10026f10 */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x18) = eax; /* 0x10024C41: mov dword ptr [edi + 0x18], eax */
    RECOMP_CALL(sub_10023C0B); /* 0x10024C44: call 0x10023c0b */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x10024C49: push ebx */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x10024C4A: push -1 */
    PUSH32(esp, edi); /* 0x10024C4C: push edi */
    PUSH32(esp, 0x100739D0u); /* 0x10024C4D: push 0x100739d0 */
    PUSH32(esp, eax); /* 0x10024C52: push eax */
    MEM32(edi + 0x1D8) = eax; /* 0x10024C53: mov dword ptr [edi + 0x1d8], eax */
    eax = edi + 0x1DC; /* 0x10024C59: lea eax, [edi + 0x1dc] */
    PUSH32(esp, eax); /* 0x10024C5F: push eax */
    RECOMP_ICALL(MEM32(0x100E5168)); /* 0x10024C60: call dword ptr [0x100e5168] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10024C66: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10052EE3; /* 0x10024C68: je 0x10052ee3 */
L_10024C6E:
    RECOMP_CALL(sub_10023E7E); /* 0x10024C6E: call 0x10023e7e */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x10024C73: push ebx */
    /* cmp eax, 3 */ /* 0x10024C74: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_10052F31; /* 0x10024C77: jl 0x10052f31 */
L_10024C7D:
    PUSH32(esp, edi); /* 0x10024C7D: push edi */
    PUSH32(esp, 0x10073181u); /* 0x10024C7E: push 0x10073181 */
    RECOMP_CALL(sub_100244BF); /* 0x10024C83: call 0x100244bf */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10024C88: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x10024C8B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10024C9F; /* 0x10024C8D: je 0x10024c9f */
L_10024C8F:
    PUSH32(esp, eax); /* 0x10024C8F: push eax */
    SET_LO8(edx, 1); /* 0x10024C90: mov dl, 1 */
    ecx = 0x7FFFFFFFu; /* 0x10024C92: mov ecx, 0x7fffffff */
    RECOMP_CALL(sub_10026FED); /* 0x10024C97: call 0x10026fed */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10024C9C: pop ecx */
    ebx = eax; /* 0x10024C9D: mov ebx, eax */
L_10024C9F:
    MEM32(edi + 0x1E0) = ebx; /* 0x10024C9F: mov dword ptr [edi + 0x1e0], ebx */
    /* test ebx, ebx */ /* 0x10024CA5: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10052F0C; /* 0x10024CA7: je 0x10052f0c */
L_10024CAD:
    eax = edi; /* 0x10024CAD: mov eax, edi */
    RECOMP_CALL(sub_100149D7); /* 0x10024CAF: call 0x100149d7 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x10024CB4: ret 4 */
L_10052ED4:
    ecx = MEM32(ebp + 0x8); /* 0x10052ED4: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, 1); /* 0x10052ED7: push 1 */
    RECOMP_CALL(sub_10024CB7); /* 0x10052ED9: call 0x10024cb7 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_10024C36; /* 0x10052EDE: jmp 0x10024c36 */
L_10052EE3:
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x10052EE3: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10052EE9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_10052EF5; /* 0x10052EEB: jle 0x10052ef5 */
L_10052EED:
    eax = (uint32_t)LO16(eax); /* 0x10052EED: movzx eax, ax */
    _flag_a = (uint32_t)((eax | 0x80070000u)); _flag_b = (uint32_t)((eax | 0x80070000u));
    eax = eax | 0x80070000u; /* 0x10052EF0: or eax, 0x80070000 */
    _cf = 0;
    _flag_k = FK_TEST;
L_10052EF5:
    PUSH32(esp, eax); /* 0x10052EF5: push eax */
    ecx = ebp + (-0x24); /* 0x10052EF6: lea ecx, [ebp - 0x24] */
    RECOMP_CALL(sub_1006C31C); /* 0x10052EF9: call 0x1006c31c */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x100DCF40u); /* 0x10052EFE: push 0x100dcf40 */
    eax = ebp + (-0x24); /* 0x10052F03: lea eax, [ebp - 0x24] */
L_10052F06:
    PUSH32(esp, eax); /* 0x10052F06: push eax */
    RECOMP_CALL(sub_100192EB); /* 0x10052F07: call 0x100192eb */
    RECOMP_FLAGS_IN();
L_10052F0C:
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x10052F0C: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10052F12: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_10052F1E; /* 0x10052F14: jle 0x10052f1e */
L_10052F16:
    eax = (uint32_t)LO16(eax); /* 0x10052F16: movzx eax, ax */
    _flag_a = (uint32_t)((eax | 0x80070000u)); _flag_b = (uint32_t)((eax | 0x80070000u));
    eax = eax | 0x80070000u; /* 0x10052F19: or eax, 0x80070000 */
    _cf = 0;
    _flag_k = FK_TEST;
L_10052F1E:
    PUSH32(esp, eax); /* 0x10052F1E: push eax */
    ecx = ebp + (-0x34); /* 0x10052F1F: lea ecx, [ebp - 0x34] */
    RECOMP_CALL(sub_1006C31C); /* 0x10052F22: call 0x1006c31c */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x100DCF40u); /* 0x10052F27: push 0x100dcf40 */
    eax = ebp + (-0x34); /* 0x10052F2C: lea eax, [ebp - 0x34] */
    RECOMP_BACKEDGE();
    goto L_10052F06; /* 0x10052F2F: jmp 0x10052f06 */
L_10052F31:
    eax = 0x7FFFFFFFu; /* 0x10052F31: mov eax, 0x7fffffff */
    PUSH32(esp, eax); /* 0x10052F36: push eax */
    PUSH32(esp, eax); /* 0x10052F37: push eax */
    PUSH32(esp, edi); /* 0x10052F38: push edi */
    PUSH32(esp, 0x10073192u); /* 0x10052F39: push 0x10073192 */
    PUSH32(esp, ebx); /* 0x10052F3E: push ebx */
    eax = edi + 0x1E0; /* 0x10052F3F: lea eax, [edi + 0x1e0] */
    PUSH32(esp, eax); /* 0x10052F45: push eax */
    RECOMP_ICALL(MEM32(0x100E5160)); /* 0x10052F46: call dword ptr [0x100e5160] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10052F4C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10024CAD; /* 0x10052F4E: jne 0x10024cad */
L_10052F54:
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x10052F54: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10052F5A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_10052F66; /* 0x10052F5C: jle 0x10052f66 */
L_10052F5E:
    eax = (uint32_t)LO16(eax); /* 0x10052F5E: movzx eax, ax */
    _flag_a = (uint32_t)((eax | 0x80070000u)); _flag_b = (uint32_t)((eax | 0x80070000u));
    eax = eax | 0x80070000u; /* 0x10052F61: or eax, 0x80070000 */
    _cf = 0;
    _flag_k = FK_TEST;
L_10052F66:
    PUSH32(esp, eax); /* 0x10052F66: push eax */
    ecx = ebp + (-0x44); /* 0x10052F67: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_1006C31C); /* 0x10052F6A: call 0x1006c31c */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x100DCF40u); /* 0x10052F6F: push 0x100dcf40 */
    eax = ebp + (-0x44); /* 0x10052F74: lea eax, [ebp - 0x44] */
    RECOMP_BACKEDGE();
    goto L_10052F06; /* 0x10052F77: jmp 0x10052f06 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10024CB7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10024CB7u);

L_10024CB7:
    PUSH32(esp, ebp); /* 0x10024CB7: push ebp */
    ebp = esp; /* 0x10024CB8: mov ebp, esp */
    eax = ecx; /* 0x10024CBA: mov eax, ecx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x10024CBC: sub esp, 0xc */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0x8); /* 0x10024CBF: mov ecx, dword ptr [ebp + 8] */
    /* cmp ecx, 9 */ /* 0x10024CC2: cmp ecx, 9 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_100533F9; /* 0x10024CC5: ja 0x100533f9 */
L_10024CCB:
    eax = MEM32(eax); /* 0x10024CCB: mov eax, dword ptr [eax] */
    eax = MEM32(eax + ecx * 4); /* 0x10024CCD: mov eax, dword ptr [eax + ecx*4] */
    esp = ebp; /* 0x10024CD0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10024CD2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x10024CD3: ret 4 */
L_100533F9:
    RECOMP_CALL(sub_100754C8); /* 0x100533F9: call 0x100754c8 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + 0x8) = eax; /* 0x100533FE: mov dword ptr [ebp + 8], eax */
    ecx = ebp + (-0xC); /* 0x10053401: lea ecx, [ebp - 0xc] */
    eax = ebp + 0x8; /* 0x10053404: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x10053407: push eax */
    RECOMP_CALL(sub_1009DD30); /* 0x10053408: call 0x1009dd30 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x100DD0C0u); /* 0x1005340D: push 0x100dd0c0 */
    eax = ebp + (-0xC); /* 0x10053412: lea eax, [ebp - 0xc] */
    MEM32(ebp + (-0xC)) = 0x10067674u; /* 0x10053415: mov dword ptr [ebp - 0xc], 0x10067674 */
    PUSH32(esp, eax); /* 0x1005341C: push eax */
    RECOMP_CALL(sub_100192EB); /* 0x1005341D: call 0x100192eb */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x10053422u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10024F4D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10024F4Du);

    goto L_10024F4D;
L_10024F37:
    eax = MEM32(ebp + 0x8); /* 0x10024F37: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax); /* 0x10024F3A: mov eax, dword ptr [eax] */
L_10024F3C:
    /* cmp MEM32(ecx + 0x4), eax */ /* 0x10024F3C: cmp dword ptr [ecx + 4], eax */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10024F45; /* 0x10024F3F: jne 0x10024f45 */
L_10024F41:
    eax = ecx; /* 0x10024F41: mov eax, ecx */
    goto L_10024F5F; /* 0x10024F43: jmp 0x10024f5f */
L_10024F45:
    ecx = MEM32(ecx); /* 0x10024F45: mov ecx, dword ptr [ecx] */
    /* test ecx, ecx */ /* 0x10024F47: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10024F5D; /* 0x10024F49: je 0x10024f5d */
L_10024F4B:
    RECOMP_BACKEDGE();
    goto L_10024F3C; /* 0x10024F4B: jmp 0x10024f3c */
L_10024F4D:
    PUSH32(esp, ebp); /* 0x10024F4D: push ebp */
    ebp = esp; /* 0x10024F4E: mov ebp, esp */
    ecx = MEM32(ecx + 0x8); /* 0x10024F50: mov ecx, dword ptr [ecx + 8] */
    eax = MEM32(ebp + 0xC); /* 0x10024F53: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ecx + eax * 4); /* 0x10024F56: mov ecx, dword ptr [ecx + eax*4] */
    /* test ecx, ecx */ /* 0x10024F59: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10024F37; /* 0x10024F5B: jne 0x10024f37 */
L_10024F5D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10024F5D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_10024F5F:
    ebp = POP32_VAL(esp); /* 0x10024F5F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x10024F60: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_10024F63(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10024F63u);

L_10024F63:
    PUSH32(esp, ebp); /* 0x10024F63: push ebp */
    ebp = esp; /* 0x10024F64: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x10024F66: push ebx */
    PUSH32(esp, esi); /* 0x10024F67: push esi */
    esi = ecx; /* 0x10024F68: mov esi, ecx */
    PUSH32(esp, edi); /* 0x10024F6A: push edi */
    edi = MEM32(ebp + 0x8); /* 0x10024F6B: mov edi, dword ptr [ebp + 8] */
    ecx = edi; /* 0x10024F6E: mov ecx, edi */
    edx = MEM32(esi); /* 0x10024F70: mov edx, dword ptr [esi] */
    RECOMP_CALL(sub_1002614A); /* 0x10024F72: call 0x1002614a */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x10024F77: mov ebx, eax */
    ecx = esi; /* 0x10024F79: mov ecx, esi */
    PUSH32(esp, ebx); /* 0x10024F7B: push ebx */
    PUSH32(esp, edi); /* 0x10024F7C: push edi */
    RECOMP_CALL(sub_10024F4D); /* 0x10024F7D: call 0x10024f4d */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10024F82: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10024FC2; /* 0x10024F84: jne 0x10024fc2 */
L_10024F86:
    PUSH32(esp, 0xCu); /* 0x10024F86: push 0xc */
    RECOMP_CALL(sub_1000EE11); /* 0x10024F88: call 0x1000ee11 */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x10024F8D: mov edx, eax */
    ecx = POP32_VAL(esp); /* 0x10024F8F: pop ecx */
    /* test edx, edx */ /* 0x10024F90: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10024FBE; /* 0x10024F92: je 0x10024fbe */
L_10024F94:
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(0);
    MEM32(edx) = MEM32(edx) & 0; /* 0x10024F94: and dword ptr [edx], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(edi); /* 0x10024F97: mov eax, dword ptr [edi] */
    MEM32(edx + 0x4) = eax; /* 0x10024F99: mov dword ptr [edx + 4], eax */
    eax = MEM32(ebp + 0xC); /* 0x10024F9C: mov eax, dword ptr [ebp + 0xc] */
    eax = MEM32(eax); /* 0x10024F9F: mov eax, dword ptr [eax] */
    MEM32(edx + 0x8) = eax; /* 0x10024FA1: mov dword ptr [edx + 8], eax */
L_10024FA4:
    ecx = MEM32(esi + 0x8); /* 0x10024FA4: mov ecx, dword ptr [esi + 8] */
    eax = edx; /* 0x10024FA7: mov eax, edx */
    ecx = MEM32(ecx + ebx * 4); /* 0x10024FA9: mov ecx, dword ptr [ecx + ebx*4] */
    MEM32(edx) = ecx; /* 0x10024FAC: mov dword ptr [edx], ecx */
    ecx = MEM32(esi + 0x8); /* 0x10024FAE: mov ecx, dword ptr [esi + 8] */
    MEM32(ecx + ebx * 4) = edx; /* 0x10024FB1: mov dword ptr [ecx + ebx*4], edx */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) + 1; /* 0x10024FB4: inc dword ptr [esi + 4] */
    _flag_k = FK_INC;
L_10024FB7:
    edi = POP32_VAL(esp); /* 0x10024FB7: pop edi */
    esi = POP32_VAL(esp); /* 0x10024FB8: pop esi */
    ebx = POP32_VAL(esp); /* 0x10024FB9: pop ebx */
    ebp = POP32_VAL(esp); /* 0x10024FBA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x10024FBB: ret 8 */
L_10024FBE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x10024FBE: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10024FA4; /* 0x10024FC0: jmp 0x10024fa4 */
L_10024FC2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10024FC2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10024FB7; /* 0x10024FC4: jmp 0x10024fb7 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10024FC6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10024FC6u);

    goto L_10024FC6;
L_10023D81:
    ecx = ebp + (-0x10); /* 0x10023D81: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_10026A07); /* 0x10023D84: call 0x10026a07 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x10023D89: mov ecx, eax */
    MEM32(0x100E03E8) = eax; /* 0x10023D8B: mov dword ptr [0x100e03e8], eax */
    RECOMP_CALL(sub_10024FC6); /* 0x10023D90: call 0x10024fc6 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x100E03E8); /* 0x10023D95: mov ecx, dword ptr [0x100e03e8] */
    eax = MEM32(ecx); /* 0x10023D9B: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x10023D9D: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x10023DA0: push dword ptr [ebp - 0x10] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10023DA3: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10023DA8: pop ecx */
    eax = MEM32(0x100E03E8); /* 0x10023DA9: mov eax, dword ptr [0x100e03e8] */
    MEM32(0x100E0320) = 0; /* 0x10023DAE: mov dword ptr [0x100e0320], 0 */
    RECOMP_CALL(sub_100149D7); /* 0x10023DB8: call 0x100149d7 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10023DBD: ret  */
L_10024FC6:
    PUSH32(esp, ebp); /* 0x10024FC6: push ebp */
    ebp = esp; /* 0x10024FC7: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x10024FC9: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xFFFFFFFFu); /* 0x10024FCC: push -1 */
    PUSH32(esp, 0x100DBB86u); /* 0x10024FCE: push 0x100dbb86 */
    eax = MEM32(FS_BASE + (0)); /* 0x10024FD3: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x10024FD9: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x70u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x70u; /* 0x10024FDA: sub esp, 0x70 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x10024FDD: push ebx */
    PUSH32(esp, esi); /* 0x10024FDE: push esi */
    PUSH32(esp, edi); /* 0x10024FDF: push edi */
    eax = MEM32(0x100DF7B8); /* 0x10024FE0: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x10024FE5: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x10024FE7: push eax */
    eax = esp + 0x80; /* 0x10024FE8: lea eax, [esp + 0x80] */
    MEM32(FS_BASE + (0)) = eax; /* 0x10024FEF: mov dword ptr fs:[0], eax */
    edi = ecx; /* 0x10024FF5: mov edi, ecx */
    MEM32(esp + 0x50) = edi; /* 0x10024FF7: mov dword ptr [esp + 0x50], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10024FFB: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x1B4) = ebx; /* 0x10024FFD: mov dword ptr [edi + 0x1b4], ebx */
    MEM32(edi + 0x14) = ebx; /* 0x10025003: mov dword ptr [edi + 0x14], ebx */
    MEM32(edi + 0x2C) = ebx; /* 0x10025006: mov dword ptr [edi + 0x2c], ebx */
    RECOMP_CALL(sub_10025D05); /* 0x10025009: call 0x10025d05 */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x1A8) = eax; /* 0x1002500E: mov dword ptr [edi + 0x1a8], eax */
    ecx = 0x100E0670u; /* 0x10025014: mov ecx, 0x100e0670 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10025019: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1002501B: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(ecx), _sum = MEM32(ecx) + eax; eax = _old; MEM32(ecx) = _sum; } /* 0x1002501C: lock xadd dword ptr [ecx], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10025020: inc eax */
    _flag_k = FK_INC;
    MEM32(edi + 0x174) = eax; /* 0x10025021: mov dword ptr [edi + 0x174], eax */
    RECOMP_CALL(sub_100244E0); /* 0x10025027: call 0x100244e0 */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x2C) = eax; /* 0x1002502C: mov dword ptr [edi + 0x2c], eax */
    RECOMP_CALL(sub_100244FF); /* 0x1002502F: call 0x100244ff */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x10u); /* 0x10025034: push 0x10 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10025036: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = POP32_VAL(esp); /* 0x10025038: pop edx */
    esi = eax + 0x1; /* 0x10025039: lea esi, [eax + 1] */
    eax = esi; /* 0x1002503C: mov eax, esi */
    MEM32(edi + 0x28) = esi; /* 0x1002503E: mov dword ptr [edi + 0x28], esi */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x10025041: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    PUSH32(esp, 4); /* 0x10025043: push 4 */
    edx = POP32_VAL(esp); /* 0x10025045: pop edx */
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x10025046: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x10025049: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1002504B: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1002504D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x1002504F: add ecx, edx */
    _flag_k = FK_ADD;
    SET_LO8(eax, (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_B)) ? 1 : 0); /* 0x10025051: setb al */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x10025054: neg eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x10025056: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x10025058: push eax */
    RECOMP_CALL(sub_10011683); /* 0x10025059: call 0x10011683 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1002505E: pop ecx */
    MEM32(esp + 0x44) = eax; /* 0x1002505F: mov dword ptr [esp + 0x44], eax */
    MEM32(esp + 0x88) = ebx; /* 0x10025063: mov dword ptr [esp + 0x88], ebx */
    /* test eax, eax */ /* 0x1002506A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10025086; /* 0x1002506C: je 0x10025086 */
L_1002506E:
    PUSH32(esp, 0x100735AAu); /* 0x1002506E: push 0x100735aa */
    PUSH32(esp, 0x1002689Cu); /* 0x10025073: push 0x1002689c */
    PUSH32(esp, esi); /* 0x10025078: push esi */
    ebx = eax + 0x4; /* 0x10025079: lea ebx, [eax + 4] */
    MEM32(eax) = esi; /* 0x1002507C: mov dword ptr [eax], esi */
    PUSH32(esp, 0x10u); /* 0x1002507E: push 0x10 */
    PUSH32(esp, ebx); /* 0x10025080: push ebx */
    RECOMP_CALL(sub_100268AC); /* 0x10025081: call 0x100268ac */
    RECOMP_FLAGS_IN();
L_10025086:
    _flag_a = (uint32_t)((MEM32(esp + 0x88) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(esp + 0x88) | 0xFFFFFFFFu));
    MEM32(esp + 0x88) = MEM32(esp + 0x88) | 0xFFFFFFFFu; /* 0x10025086: or dword ptr [esp + 0x88], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1002508E: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(edi + 0x2C); /* 0x10025090: mov eax, dword ptr [edi + 0x2c] */
    PUSH32(esp, 4); /* 0x10025093: push 4 */
    MEM32(edi + 0x1C) = ebx; /* 0x10025095: mov dword ptr [edi + 0x1c], ebx */
    ebx = POP32_VAL(esp); /* 0x10025098: pop ebx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(ebx); /* 0x10025099: mul ebx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x1002509B: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1002509E: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x100250A0: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x100250A2: push ecx */
    RECOMP_CALL(sub_10011683); /* 0x100250A3: call 0x10011683 */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x24) = eax; /* 0x100250A8: mov dword ptr [edi + 0x24], eax */
    eax = MEM32(edi + 0x2C); /* 0x100250AB: mov eax, dword ptr [edi + 0x2c] */
    ecx = POP32_VAL(esp); /* 0x100250AE: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100250AF: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _r = (uint64_t)eax * (uint32_t)(ebx); /* 0x100250B1: mul ebx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x100250B3: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x100250B6: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x100250B8: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x100250BA: push ecx */
    RECOMP_CALL(sub_10011683); /* 0x100250BB: call 0x10011683 */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x20) = eax; /* 0x100250C0: mov dword ptr [edi + 0x20], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x100250C3: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(edi + 0x2C); /* 0x100250C5: mov eax, dword ptr [edi + 0x2c] */
    ecx = POP32_VAL(esp); /* 0x100250C8: pop ecx */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x100250C9: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x100250C9: shl eax, 2 */
    PUSH32(esp, eax); /* 0x100250CC: push eax */
    PUSH32(esp, esi); /* 0x100250CD: push esi */
    PUSH32(esp, MEM32(edi + 0x24)); /* 0x100250CE: push dword ptr [edi + 0x24] */
    RECOMP_CALL(sub_10011533); /* 0x100250D1: call 0x10011533 */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0x2C); /* 0x100250D6: mov eax, dword ptr [edi + 0x2c] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100250D9: add esp, 0xc */
    _flag_k = FK_ADD;
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x100250DC: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x100250DC: shl eax, 2 */
    PUSH32(esp, eax); /* 0x100250DF: push eax */
    PUSH32(esp, esi); /* 0x100250E0: push esi */
    PUSH32(esp, MEM32(edi + 0x20)); /* 0x100250E1: push dword ptr [edi + 0x20] */
    RECOMP_CALL(sub_10011533); /* 0x100250E4: call 0x10011533 */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi); /* 0x100250E9: mov eax, dword ptr [edi] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x100250EB: add esp, 0xc */
    _flag_k = FK_ADD;
    ecx = edi; /* 0x100250EE: mov ecx, edi */
    RECOMP_ICALL(MEM32(eax + 0x24)); /* 0x100250F0: call dword ptr [eax + 0x24] */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0xB0) = eax; /* 0x100250F3: mov dword ptr [edi + 0xb0], eax */
    _flag_a = (uint32_t)((MEM8(eax + 0x30) | LO8(ebx))) << 24; _flag_b = (uint32_t)((MEM8(eax + 0x30) | LO8(ebx))) << 24;
    MEM8(eax + 0x30) = (uint8_t)(MEM8(eax + 0x30) | LO8(ebx)); /* 0x100250F9: or byte ptr [eax + 0x30], bl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ebx = esi; /* 0x100250FC: mov ebx, esi */
    MEM32(esp + 0x14) = ebx; /* 0x100250FE: mov dword ptr [esp + 0x14], ebx */
    MEM32(esp + 0x2C) = ebx; /* 0x10025102: mov dword ptr [esp + 0x2c], ebx */
    RECOMP_CALL(sub_100258DA); /* 0x10025106: call 0x100258da */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x24) = eax; /* 0x1002510B: mov dword ptr [esp + 0x24], eax */
    /* cmp MEM32(edi + 0x28), esi */ /* 0x1002510F: cmp dword ptr [edi + 0x28], esi */
    _flag_a = (uint32_t)(MEM32(edi + 0x28)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1002513F; /* 0x10025112: jle 0x1002513f */
L_10025114:
    ecx = MEM32(edi + 0x1C); /* 0x10025114: mov ecx, dword ptr [edi + 0x1c] */
    PUSH32(esp, MEM32(edi + 0x2C)); /* 0x10025117: push dword ptr [edi + 0x2c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1002511A: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_10025642); /* 0x1002511C: call 0x10025642 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi + 0x1C); /* 0x10025121: mov ecx, dword ptr [edi + 0x1c] */
    PUSH32(esp, MEM32(esp + 0x24)); /* 0x10025124: push dword ptr [esp + 0x24] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x10025128: add ecx, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x1002512B: add ecx, esi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_10025642); /* 0x1002512D: call 0x10025642 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x10025132: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x10u; /* 0x10025133: add esi, 0x10 */
    _flag_k = FK_ADD;
    /* cmp ebx, MEM32(edi + 0x28) */ /* 0x10025136: cmp ebx, dword ptr [edi + 0x28] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(edi + 0x28));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_10025114; /* 0x10025139: jl 0x10025114 */
L_1002513B:
    ebx = MEM32(esp + 0x14); /* 0x1002513B: mov ebx, dword ptr [esp + 0x14] */
L_1002513F:
    ecx = MEM32(edi + 0x1A8); /* 0x1002513F: mov ecx, dword ptr [edi + 0x1a8] */
    eax = MEM32(ecx); /* 0x10025145: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x10025147: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1002514A: mov esi, eax */
    MEM32(esp + 0x20) = esi; /* 0x1002514C: mov dword ptr [esp + 0x20], esi */
    /* test esi, esi */ /* 0x10025150: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100253F7; /* 0x10025152: je 0x100253f7 */
L_10025158:
    PUSH32(esp, MEM32(esp + 0x24)); /* 0x10025158: push dword ptr [esp + 0x24] */
    ecx = esp + 0x58; /* 0x1002515C: lea ecx, [esp + 0x58] */
    RECOMP_CALL(sub_10025D82); /* 0x10025160: call 0x10025d82 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x88) = 1; /* 0x10025165: mov dword ptr [esp + 0x88], 1 */
    ecx = esi; /* 0x10025170: mov ecx, esi */
    eax = MEM32(esi); /* 0x10025172: mov eax, dword ptr [esi] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x10025174: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    edx = MEM32(esi); /* 0x10025177: mov edx, dword ptr [esi] */
    ecx = esi; /* 0x10025179: mov ecx, esi */
    MEM32(esp + 0x1C) = eax; /* 0x1002517B: mov dword ptr [esp + 0x1c], eax */
    MEM32(esp + 0x3C) = eax; /* 0x1002517F: mov dword ptr [esp + 0x3c], eax */
    RECOMP_ICALL(MEM32(edx + 0x8)); /* 0x10025183: call dword ptr [edx + 8] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi + 0x1C); /* 0x10025186: mov ecx, dword ptr [edi + 0x1c] */
    esi = MEM32(esp + 0x1C); /* 0x10025189: mov esi, dword ptr [esp + 0x1c] */
    MEM32(esp + 0x44) = eax; /* 0x1002518D: mov dword ptr [esp + 0x44], eax */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x10025191: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x10025191: shl eax, 4 */
    MEM32(esp + 0x40) = eax; /* 0x10025194: mov dword ptr [esp + 0x40], eax */
    if (5u) _cf = (((esi) >> 4) & 1u); /* 0x10025198: shr esi, 5 */
    if (5u) { _flag_a = recomp_flags_pack((esi >> 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 5u; /* 0x10025198: shr esi, 5 */
    MEM32(esp + 0x18) = ebx; /* 0x1002519B: mov dword ptr [esp + 0x18], ebx */
    edx = MEM32(ecx + eax + 0x4); /* 0x1002519F: mov edx, dword ptr [ecx + eax + 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100251A3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(esp + 0x1C); /* 0x100251A5: mov ecx, dword ptr [esp + 0x1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100251A9: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x100251AA: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x100251AD: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x100251AD: shl eax, cl */
    ecx = MEM32(esp + 0x20); /* 0x100251AF: mov ecx, dword ptr [esp + 0x20] */
    _flag_a = (uint32_t)((MEM32(edx + esi * 4) | eax)); _flag_b = (uint32_t)((MEM32(edx + esi * 4) | eax));
    MEM32(edx + esi * 4) = MEM32(edx + esi * 4) | eax; /* 0x100251B3: or dword ptr [edx + esi*4], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x100251B6: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x100251B8: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x100251BB: mov ecx, eax */
    MEM32(esp + 0x34) = eax; /* 0x100251BD: mov dword ptr [esp + 0x34], eax */
    /* test eax, eax */ /* 0x100251C1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x30) = ecx; /* 0x100251C3: mov dword ptr [esp + 0x30], ecx */
    eax = MEM32(esp + 0x58); /* 0x100251C7: mov eax, dword ptr [esp + 0x58] */
    MEM32(esp + 0x38) = eax; /* 0x100251CB: mov dword ptr [esp + 0x38], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002524B; /* 0x100251CF: je 0x1002524b */
L_100251D1:
    esi = edi + 0x15C; /* 0x100251D1: lea esi, [edi + 0x15c] */
L_100251D7:
    eax = MEM32(ecx); /* 0x100251D7: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x100251D9: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x28) = eax; /* 0x100251DC: mov dword ptr [esp + 0x28], eax */
    ecx = esi; /* 0x100251E0: mov ecx, esi */
    eax = esp + 0x3C; /* 0x100251E2: lea eax, [esp + 0x3c] */
    PUSH32(esp, eax); /* 0x100251E6: push eax */
    eax = esp + 0x2C; /* 0x100251E7: lea eax, [esp + 0x2c] */
    PUSH32(esp, eax); /* 0x100251EB: push eax */
    RECOMP_CALL(sub_10024F63); /* 0x100251EC: call 0x10024f63 */
    RECOMP_FLAGS_IN();
    eax = esp + 0x2C; /* 0x100251F1: lea eax, [esp + 0x2c] */
    PUSH32(esp, eax); /* 0x100251F5: push eax */
    eax = esp + 0x2C; /* 0x100251F6: lea eax, [esp + 0x2c] */
    PUSH32(esp, eax); /* 0x100251FA: push eax */
    ecx = edi + 0x168; /* 0x100251FB: lea ecx, [edi + 0x168] */
    RECOMP_CALL(sub_10024F63); /* 0x10025201: call 0x10024f63 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x38); /* 0x10025206: mov eax, dword ptr [esp + 0x38] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1002520A: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = ebx; /* 0x1002520C: mov edx, ebx */
    ecx = ebx; /* 0x1002520E: mov ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x10025210: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x10025213: shr edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack((edx >> 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 5u; /* 0x10025213: shr edx, 5 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10025216: inc esi */
    _flag_k = FK_INC;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((esi) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x10025217: shl esi, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((esi << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << ((LO8(ecx)) & 31); /* 0x10025217: shl esi, cl */
    ecx = MEM32(esp + 0x40); /* 0x10025219: mov ecx, dword ptr [esp + 0x40] */
    _flag_a = (uint32_t)((MEM32(eax + edx * 4) | esi)); _flag_b = (uint32_t)((MEM32(eax + edx * 4) | esi));
    MEM32(eax + edx * 4) = MEM32(eax + edx * 4) | esi; /* 0x1002521D: or dword ptr [eax + edx*4], esi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(edi + 0x1C); /* 0x10025220: mov eax, dword ptr [edi + 0x1c] */
    eax = MEM32(ecx + eax + 0xC); /* 0x10025223: mov eax, dword ptr [ecx + eax + 0xc] */
    ecx = MEM32(esp + 0x30); /* 0x10025227: mov ecx, dword ptr [esp + 0x30] */
    _flag_a = (uint32_t)((MEM32(eax + edx * 4) | esi)); _flag_b = (uint32_t)((MEM32(eax + edx * 4) | esi));
    MEM32(eax + edx * 4) = MEM32(eax + edx * 4) | esi; /* 0x1002522B: or dword ptr [eax + edx*4], esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1002522E: inc ebx */
    _flag_k = FK_INC;
    eax = MEM32(ecx); /* 0x1002522F: mov eax, dword ptr [ecx] */
    MEM32(esp + 0x2C) = ebx; /* 0x10025231: mov dword ptr [esp + 0x2c], ebx */
    RECOMP_ICALL(MEM32(eax)); /* 0x10025235: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x10025237: mov ecx, eax */
    MEM32(esp + 0x30) = eax; /* 0x10025239: mov dword ptr [esp + 0x30], eax */
    esi = edi + 0x15C; /* 0x1002523D: lea esi, [edi + 0x15c] */
    /* test ecx, ecx */ /* 0x10025243: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100251D7; /* 0x10025245: jne 0x100251d7 */
L_10025247:
    MEM32(esp + 0x14) = ebx; /* 0x10025247: mov dword ptr [esp + 0x14], ebx */
L_1002524B:
    PUSH32(esp, 0xC0u); /* 0x1002524B: push 0xc0 */
    RECOMP_CALL(sub_1000EE11); /* 0x10025250: call 0x1000ee11 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x10025255: mov esi, eax */
    MEM32(esp + 0x34) = eax; /* 0x10025257: mov dword ptr [esp + 0x34], eax */
    ecx = POP32_VAL(esp); /* 0x1002525B: pop ecx */
    MEM32(esp + 0x40) = esi; /* 0x1002525C: mov dword ptr [esp + 0x40], esi */
    MEM8(esp + 0x88) = (uint8_t)(2); /* 0x10025260: mov byte ptr [esp + 0x88], 2 */
    /* test esi, esi */ /* 0x10025268: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100254E2; /* 0x1002526A: je 0x100254e2 */
L_10025270:
    PUSH32(esp, ecx); /* 0x10025270: push ecx */
    PUSH32(esp, ecx); /* 0x10025271: push ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10025272: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = edi; /* 0x10025274: mov dword ptr [esi], edi */
    PUSH32(esp, edi); /* 0x10025276: push edi */
    ecx = esi + 0x10; /* 0x10025277: lea ecx, [esi + 0x10] */
    MEM32(esi + 0x4) = ebx; /* 0x1002527A: mov dword ptr [esi + 4], ebx */
    MEM32(esi + 0x8) = ebx; /* 0x1002527D: mov dword ptr [esi + 8], ebx */
    RECOMP_CALL(sub_10027218); /* 0x10025280: call 0x10027218 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x10025285: push ecx */
    PUSH32(esp, ecx); /* 0x10025286: push ecx */
    PUSH32(esp, edi); /* 0x10025287: push edi */
    ecx = esi + 0x60; /* 0x10025288: lea ecx, [esi + 0x60] */
    MEM8(esp + 0x94) = (uint8_t)(3); /* 0x1002528B: mov byte ptr [esp + 0x94], 3 */
    RECOMP_CALL(sub_10027218); /* 0x10025293: call 0x10027218 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 4); /* 0x10025298: push 4 */
    eax = POP32_VAL(esp); /* 0x1002529A: pop eax */
    MEM8(esp + 0x88) = (uint8_t)(LO8(eax)); /* 0x1002529B: mov byte ptr [esp + 0x88], al */
    eax = MEM32(esp + 0x1C); /* 0x100252A2: mov eax, dword ptr [esp + 0x1c] */
    MEM32(esi + 0xB8) = eax; /* 0x100252A6: mov dword ptr [esi + 0xb8], eax */
    eax = esp + 0x5C; /* 0x100252AC: lea eax, [esp + 0x5c] */
    MEM32(esi + 0xB0) = ebx; /* 0x100252B0: mov dword ptr [esi + 0xb0], ebx */
    MEM32(esi + 0xB4) = ebx; /* 0x100252B6: mov dword ptr [esi + 0xb4], ebx */
    PUSH32(esp, esi); /* 0x100252BC: push esi */
    MEM32(esi + 0xBC) = ebx; /* 0x100252BD: mov dword ptr [esi + 0xbc], ebx */
    ecx = MEM32(edi + 0xB0); /* 0x100252C3: mov ecx, dword ptr [edi + 0xb0] */
    PUSH32(esp, eax); /* 0x100252C9: push eax */
    MEM32(esp + 0x64) = ebx; /* 0x100252CA: mov dword ptr [esp + 0x64], ebx */
    MEM32(esp + 0x6C) = ebx; /* 0x100252CE: mov dword ptr [esp + 0x6c], ebx */
    MEM32(esp + 0x70) = ebx; /* 0x100252D2: mov dword ptr [esp + 0x70], ebx */
    RECOMP_CALL(sub_10027388); /* 0x100252D6: call 0x10027388 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x8) = eax; /* 0x100252DB: mov dword ptr [esi + 8], eax */
L_100252DE:
    PUSH32(esp, 0x88u); /* 0x100252DE: push 0x88 */
    MEM8(esp + 0x8C) = (uint8_t)(1); /* 0x100252E3: mov byte ptr [esp + 0x8c], 1 */
    RECOMP_CALL(sub_1000EE11); /* 0x100252EB: call 0x1000ee11 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x100252F0: mov ebx, eax */
    ecx = POP32_VAL(esp); /* 0x100252F2: pop ecx */
    MEM32(esp + 0x40) = ebx; /* 0x100252F3: mov dword ptr [esp + 0x40], ebx */
    MEM8(esp + 0x88) = (uint8_t)(5); /* 0x100252F7: mov byte ptr [esp + 0x88], 5 */
    /* test ebx, ebx */ /* 0x100252FF: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100254ED; /* 0x10025301: je 0x100254ed */
L_10025307:
    ecx = ebx + 0x8; /* 0x10025307: lea ecx, [ebx + 8] */
    MEM32(ebx + 0x4) = esi; /* 0x1002530A: mov dword ptr [ebx + 4], esi */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0);
    MEM32(ecx) = MEM32(ecx) & 0; /* 0x1002530D: and dword ptr [ecx], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esp + 0x54; /* 0x10025310: lea eax, [esp + 0x54] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(ecx + 0x4) = MEM32(ecx + 0x4) & 0; /* 0x10025314: and dword ptr [ecx + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x10025318: push eax */
    RECOMP_CALL(sub_10025ECF); /* 0x10025319: call 0x10025ecf */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x1002531E: push ecx */
    ecx = ebx + 0x10; /* 0x1002531F: lea ecx, [ebx + 0x10] */
    MEM8(esp + 0x8C) = (uint8_t)(6); /* 0x10025322: mov byte ptr [esp + 0x8c], 6 */
    RECOMP_CALL(sub_10024A04); /* 0x1002532A: call 0x10024a04 */
    RECOMP_FLAGS_IN();
    MEM8(esp + 0x88) = (uint8_t)(7); /* 0x1002532F: mov byte ptr [esp + 0x88], 7 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10025337: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebx + 0x1C) = eax; /* 0x10025339: mov dword ptr [ebx + 0x1c], eax */
    MEM32(ebx + 0x20) = eax; /* 0x1002533C: mov dword ptr [ebx + 0x20], eax */
    MEM32(ebx + 0x24) = eax; /* 0x1002533F: mov dword ptr [ebx + 0x24], eax */
    PUSH32(esp, ecx); /* 0x10025342: push ecx */
    MEM32(ebx + 0x28) = eax; /* 0x10025343: mov dword ptr [ebx + 0x28], eax */
    eax = MEM32(esp + 0x48); /* 0x10025346: mov eax, dword ptr [esp + 0x48] */
    PUSH32(esp, ecx); /* 0x1002534A: push ecx */
    MEM32(ebx + 0x2C) = eax; /* 0x1002534B: mov dword ptr [ebx + 0x2c], eax */
    ecx = ebx + 0x38; /* 0x1002534E: lea ecx, [ebx + 0x38] */
    PUSH32(esp, MEM32(esi)); /* 0x10025351: push dword ptr [esi] */
    RECOMP_CALL(sub_10027043); /* 0x10025353: call 0x10027043 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx + 0x4); /* 0x10025358: mov ecx, dword ptr [ebx + 4] */
    eax = MEM32(ecx); /* 0x1002535B: mov eax, dword ptr [ecx] */
    MEM32(ebx) = eax; /* 0x1002535D: mov dword ptr [ebx], eax */
    eax = MEM32(ecx + 0xB8); /* 0x1002535F: mov eax, dword ptr [ecx + 0xb8] */
    MEM32(ebx + 0x30) = eax; /* 0x10025365: mov dword ptr [ebx + 0x30], eax */
L_10025368:
    /* cmp MEM32(esp + 0x34), 0 */ /* 0x10025368: cmp dword ptr [esp + 0x34], 0 */
    _flag_a = (uint32_t)(MEM32(esp + 0x34)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM8(esp + 0x88) = (uint8_t)(1); /* 0x1002536D: mov byte ptr [esp + 0x88], 1 */
    MEM32(esi + 0x4) = ebx; /* 0x10025375: mov dword ptr [esi + 4], ebx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100253BB; /* 0x10025378: je 0x100253bb */
L_1002537A:
    edi = MEM32(esp + 0x34); /* 0x1002537A: mov edi, dword ptr [esp + 0x34] */
L_1002537E:
    eax = MEM32(esp + 0x18); /* 0x1002537E: mov eax, dword ptr [esp + 0x18] */
    ecx = edi; /* 0x10025382: mov ecx, edi */
    MEM32(esp + 0x48) = eax; /* 0x10025384: mov dword ptr [esp + 0x48], eax */
    eax = MEM32(edi); /* 0x10025388: mov eax, dword ptr [edi] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1002538A: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x4C) = eax; /* 0x1002538D: mov dword ptr [esp + 0x4c], eax */
    ecx = ebx + 0x10; /* 0x10025391: lea ecx, [ebx + 0x10] */
    eax = esp + 0x48; /* 0x10025394: lea eax, [esp + 0x48] */
    PUSH32(esp, eax); /* 0x10025398: push eax */
    eax = esp + 0x50; /* 0x10025399: lea eax, [esp + 0x50] */
    PUSH32(esp, eax); /* 0x1002539D: push eax */
    RECOMP_CALL(sub_10024F63); /* 0x1002539E: call 0x10024f63 */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi); /* 0x100253A3: mov eax, dword ptr [edi] */
    ecx = edi; /* 0x100253A5: mov ecx, edi */
    _flag_a = (uint32_t)(MEM32(esp + 0x18)); _flag_b = (uint32_t)(1);
    MEM32(esp + 0x18) = MEM32(esp + 0x18) + 1; /* 0x100253A7: inc dword ptr [esp + 0x18] */
    _flag_k = FK_INC;
    RECOMP_ICALL(MEM32(eax)); /* 0x100253AB: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x100253AD: mov edi, eax */
    /* test edi, edi */ /* 0x100253AF: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1002537E; /* 0x100253B1: jne 0x1002537e */
L_100253B3:
    edi = MEM32(esp + 0x50); /* 0x100253B3: mov edi, dword ptr [esp + 0x50] */
    esi = MEM32(esp + 0x30); /* 0x100253B7: mov esi, dword ptr [esp + 0x30] */
L_100253BB:
    eax = MEM32(edi + 0x24); /* 0x100253BB: mov eax, dword ptr [edi + 0x24] */
    ecx = MEM32(esp + 0x1C); /* 0x100253BE: mov ecx, dword ptr [esp + 0x1c] */
    MEM32(eax + ecx * 4) = esi; /* 0x100253C2: mov dword ptr [eax + ecx*4], esi */
    eax = MEM32(edi + 0x20); /* 0x100253C5: mov eax, dword ptr [edi + 0x20] */
    MEM32(eax + ecx * 4) = ebx; /* 0x100253C8: mov dword ptr [eax + ecx*4], ebx */
    ecx = MEM32(esp + 0x20); /* 0x100253CB: mov ecx, dword ptr [esp + 0x20] */
    eax = MEM32(ecx); /* 0x100253CF: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax)); /* 0x100253D1: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(esp + 0x88) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(esp + 0x88) | 0xFFFFFFFFu));
    MEM32(esp + 0x88) = MEM32(esp + 0x88) | 0xFFFFFFFFu; /* 0x100253D3: or dword ptr [esp + 0x88], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = eax; /* 0x100253DB: mov esi, eax */
    PUSH32(esp, MEM32(esp + 0x38)); /* 0x100253DD: push dword ptr [esp + 0x38] */
    MEM32(esp + 0x24) = esi; /* 0x100253E1: mov dword ptr [esp + 0x24], esi */
    RECOMP_CALL(sub_1000ECE0); /* 0x100253E5: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(esp + 0x18); /* 0x100253EA: mov ebx, dword ptr [esp + 0x18] */
    ecx = POP32_VAL(esp); /* 0x100253EE: pop ecx */
    /* test esi, esi */ /* 0x100253EF: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10025158; /* 0x100253F1: jne 0x10025158 */
L_100253F7:
    PUSH32(esp, ebx); /* 0x100253F7: push ebx */
    ecx = edi + 0x3C; /* 0x100253F8: lea ecx, [edi + 0x3c] */
    RECOMP_CALL(sub_100256B1); /* 0x100253FB: call 0x100256b1 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x10025400: push ebx */
    ecx = edi + 0x48; /* 0x10025401: lea ecx, [edi + 0x48] */
    RECOMP_CALL(sub_100256B1); /* 0x10025404: call 0x100256b1 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x10025409: push ebx */
    ecx = edi + 0x54; /* 0x1002540A: lea ecx, [edi + 0x54] */
    RECOMP_CALL(sub_10025642); /* 0x1002540D: call 0x10025642 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x10025412: push ebx */
    ecx = edi + 0x30; /* 0x10025413: lea ecx, [edi + 0x30] */
    RECOMP_CALL(sub_100256B1); /* 0x10025416: call 0x100256b1 */
    RECOMP_FLAGS_IN();
    if (5u) _cf = (((ebx) >> 27) & 1u); /* 0x1002541B: shl ebx, 5 */
    if (5u) { _flag_a = recomp_flags_pack((ebx << 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 5u; /* 0x1002541B: shl ebx, 5 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1002541E: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 4); /* 0x10025420: push 4 */
    edx = POP32_VAL(esp); /* 0x10025422: pop edx */
    eax = ebx; /* 0x10025423: mov eax, ebx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x10025425: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x10025427: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1002542A: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1002542C: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1002542E: push ecx */
    RECOMP_CALL(sub_10011683); /* 0x1002542F: call 0x10011683 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10025434: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10025435: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x5C) = eax; /* 0x10025437: mov dword ptr [edi + 0x5c], eax */
    /* test ebx, ebx */ /* 0x1002543A: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1002544D; /* 0x1002543C: je 0x1002544d */
L_1002543E:
    eax = MEM32(edi + 0x5C); /* 0x1002543E: mov eax, dword ptr [edi + 0x5c] */
    MEM32(eax + ecx * 4) = 0; /* 0x10025441: mov dword ptr [eax + ecx*4], 0 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x10025448: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, ebx */ /* 0x10025449: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1002543E; /* 0x1002544B: jb 0x1002543e */
L_1002544D:
    eax = MEM32(edi + 0x1A8); /* 0x1002544D: mov eax, dword ptr [edi + 0x1a8] */
    ecx = edi; /* 0x10025453: mov ecx, edi */
    PUSH32(esp, 0x00010000u); /* 0x10025455: push 0x10000 */
    esi = MEM32(eax); /* 0x1002545A: mov esi, dword ptr [eax] */
    eax = MEM32(edi); /* 0x1002545C: mov eax, dword ptr [edi] */
    RECOMP_ICALL(MEM32(eax + 0x34)); /* 0x1002545E: call dword ptr [eax + 0x34] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi + 0x1A8); /* 0x10025461: mov ecx, dword ptr [edi + 0x1a8] */
    PUSH32(esp, eax); /* 0x10025467: push eax */
    RECOMP_ICALL(MEM32(esi + 0x8)); /* 0x10025468: call dword ptr [esi + 8] */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x1AC) = eax; /* 0x1002546B: mov dword ptr [edi + 0x1ac], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10025471: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x10025473: push ebx */
    ecx = eax; /* 0x10025474: mov ecx, eax */
    edx = MEM32(eax); /* 0x10025476: mov edx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(edx)); /* 0x10025478: call dword ptr [edx] */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0x24); /* 0x1002547A: mov eax, dword ptr [edi + 0x24] */
    eax = MEM32(eax); /* 0x1002547D: mov eax, dword ptr [eax] */
    /* cmp MEM32(eax + 0xBC), ebx */ /* 0x1002547F: cmp dword ptr [eax + 0xbc], ebx */
    _flag_a = (uint32_t)(MEM32(eax + 0xBC)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10052FD8; /* 0x10025485: je 0x10052fd8 */
L_1002548B:
    eax = ebx; /* 0x1002548B: mov eax, ebx */
L_1002548D:
    PUSH32(esp, 0x001F0003u); /* 0x1002548D: push 0x1f0003 */
    PUSH32(esp, ebx); /* 0x10025492: push ebx */
    PUSH32(esp, ebx); /* 0x10025493: push ebx */
    PUSH32(esp, 0x7FFFFFFFu); /* 0x10025494: push 0x7fffffff */
    PUSH32(esp, ebx); /* 0x10025499: push ebx */
    PUSH32(esp, ebx); /* 0x1002549A: push ebx */
    MEM32(edi + 0x178) = eax; /* 0x1002549B: mov dword ptr [edi + 0x178], eax */
    RECOMP_CALL(sub_10024833); /* 0x100254A1: call 0x10024833 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x100254A6: add esp, 0x18 */
    _flag_k = FK_ADD;
    MEM32(edi + 0x17C) = eax; /* 0x100254A9: mov dword ptr [edi + 0x17c], eax */
    /* test eax, eax */ /* 0x100254AF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10052FE5; /* 0x100254B1: je 0x10052fe5 */
L_100254B7:
    eax = MEM32(edi); /* 0x100254B7: mov eax, dword ptr [edi] */
    ecx = edi; /* 0x100254B9: mov ecx, edi */
    RECOMP_ICALL(MEM32(eax + 0x4C)); /* 0x100254BB: call dword ptr [eax + 0x4c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(edi + 0x174)); /* 0x100254BE: push dword ptr [edi + 0x174] */
    PUSH32(esp, ecx); /* 0x100254C4: push ecx */
    PUSH32(esp, 1); /* 0x100254C5: push 1 */
    RECOMP_CALL(sub_1002486B); /* 0x100254C7: call 0x1002486b */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esp + 0x80); /* 0x100254CC: mov ecx, dword ptr [esp + 0x80] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x100254D3: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x100254DA: pop ecx */
    edi = POP32_VAL(esp); /* 0x100254DB: pop edi */
    esi = POP32_VAL(esp); /* 0x100254DC: pop esi */
    ebx = POP32_VAL(esp); /* 0x100254DD: pop ebx */
    esp = ebp; /* 0x100254DE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100254E0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100254E1: ret  */
L_100254E2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x100254E2: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x30) = esi; /* 0x100254E4: mov dword ptr [esp + 0x30], esi */
    RECOMP_BACKEDGE();
    goto L_100252DE; /* 0x100254E8: jmp 0x100252de */
L_100254ED:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x100254ED: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_10025368; /* 0x100254EF: jmp 0x10025368 */
L_10052FD8:
    PUSH32(esp, ebx); /* 0x10052FD8: push ebx */
    ecx = edi; /* 0x10052FD9: mov ecx, edi */
    RECOMP_CALL(sub_100240E4); /* 0x10052FDB: call 0x100240e4 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1002548D; /* 0x10052FE0: jmp 0x1002548d */
L_10052FE5:
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x10052FE5: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10052FEB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_10052FF7; /* 0x10052FED: jle 0x10052ff7 */
L_10052FEF:
    eax = (uint32_t)LO16(eax); /* 0x10052FEF: movzx eax, ax */
    _flag_a = (uint32_t)((eax | 0x80070000u)); _flag_b = (uint32_t)((eax | 0x80070000u));
    eax = eax | 0x80070000u; /* 0x10052FF2: or eax, 0x80070000 */
    _cf = 0;
    _flag_k = FK_TEST;
L_10052FF7:
    PUSH32(esp, eax); /* 0x10052FF7: push eax */
    ecx = esp + 0x70; /* 0x10052FF8: lea ecx, [esp + 0x70] */
    RECOMP_CALL(sub_1006C31C); /* 0x10052FFC: call 0x1006c31c */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x100DCF40u); /* 0x10053001: push 0x100dcf40 */
    eax = esp + 0x70; /* 0x10053006: lea eax, [esp + 0x70] */
    PUSH32(esp, eax); /* 0x1005300A: push eax */
    RECOMP_CALL(sub_100192EB); /* 0x1005300B: call 0x100192eb */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x28u); /* 0x10053010: push 0x28 */
    PUSH32(esp, MEM32(eax)); /* 0x10053012: push dword ptr [eax] */
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x10053014: push dword ptr [ebp - 0x10] */
    RECOMP_CALL(sub_1000F594); /* 0x10053017: call 0x1000f594 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1005301C: add esp, 0xc */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_10023D81; /* 0x1005301F: jmp 0x10023d81 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10025521(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10025521u);

L_10025521:
    PUSH32(esp, ebp); /* 0x10025521: push ebp */
    ebp = esp; /* 0x10025522: mov ebp, esp */
    eax = MEM32(ecx + 0x4); /* 0x10025524: mov eax, dword ptr [ecx + 4] */
    edx = MEM32(ebp + 0x8); /* 0x10025527: mov edx, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x1002552A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10053645; /* 0x1002552C: jne 0x10053645 */
L_10025532:
    MEM32(edx + 0x38) = edx; /* 0x10025532: mov dword ptr [edx + 0x38], edx */
    MEM32(edx + 0x34) = edx; /* 0x10025535: mov dword ptr [edx + 0x34], edx */
L_10025538:
    MEM32(ecx + 0x4) = edx; /* 0x10025538: mov dword ptr [ecx + 4], edx */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(1);
    MEM32(ecx) = MEM32(ecx) + 1; /* 0x1002553B: inc dword ptr [ecx] */
    _flag_k = FK_INC;
    ebp = POP32_VAL(esp); /* 0x1002553D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1002553E: ret 4 */
L_10053645:
    eax = MEM32(eax + 0x38); /* 0x10053645: mov eax, dword ptr [eax + 0x38] */
    MEM32(edx + 0x38) = eax; /* 0x10053648: mov dword ptr [edx + 0x38], eax */
    eax = MEM32(ecx + 0x4); /* 0x1005364B: mov eax, dword ptr [ecx + 4] */
    MEM32(edx + 0x34) = eax; /* 0x1005364E: mov dword ptr [edx + 0x34], eax */
    eax = MEM32(ecx + 0x4); /* 0x10053651: mov eax, dword ptr [ecx + 4] */
    eax = MEM32(eax + 0x38); /* 0x10053654: mov eax, dword ptr [eax + 0x38] */
    MEM32(eax + 0x34) = edx; /* 0x10053657: mov dword ptr [eax + 0x34], edx */
    eax = MEM32(ecx + 0x4); /* 0x1005365A: mov eax, dword ptr [ecx + 4] */
    MEM32(eax + 0x38) = edx; /* 0x1005365D: mov dword ptr [eax + 0x38], edx */
    RECOMP_BACKEDGE();
    goto L_10025538; /* 0x10053660: jmp 0x10025538 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10025541(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10025541u);

L_10025541:
    PUSH32(esp, 8); /* 0x10025541: push 8 */
    eax = 0x100DB674u; /* 0x10025543: mov eax, 0x100db674 */
    RECOMP_CALL(sub_100149A4); /* 0x10025548: call 0x100149a4 */
    RECOMP_FLAGS_IN();
    ebx = ecx; /* 0x1002554D: mov ebx, ecx */
    esi = ebx + 0x20; /* 0x1002554F: lea esi, [ebx + 0x20] */
    PUSH32(esp, esi); /* 0x10025552: push esi */
    MEM32(ebp + (-0x14)) = esi; /* 0x10025553: mov dword ptr [ebp - 0x14], esi */
    RECOMP_ICALL(MEM32(0x100E5038)); /* 0x10025556: call dword ptr [0x100e5038] */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0xC); /* 0x1002555C: mov edi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1002555F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x10025561: mov dword ptr [ebp - 0x10], eax */
    MEM32(ebp + (-0x4)) = eax; /* 0x10025564: mov dword ptr [ebp - 4], eax */
    /* test edi, edi */ /* 0x10025567: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100255A6; /* 0x10025569: je 0x100255a6 */
L_1002556B:
    esi = edi; /* 0x1002556B: mov esi, edi */
L_1002556D:
    ecx = MEM32(ebp + 0x8); /* 0x1002556D: mov ecx, dword ptr [ebp + 8] */
    edi = MEM32(ecx + eax * 4); /* 0x10025570: mov edi, dword ptr [ecx + eax*4] */
    ecx = edi; /* 0x10025573: mov ecx, edi */
    eax = MEM32(edi); /* 0x10025575: mov eax, dword ptr [edi] */
    RECOMP_ICALL(MEM32(eax)); /* 0x10025577: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    edx = (uint32_t)((int32_t)eax * (int32_t)0x34u); /* 0x10025579: imul edx, eax, 0x34 */
    ecx = edi + 0x8; /* 0x1002557C: lea ecx, [edi + 8] */
    eax = MEM32(ebx + 0x10); /* 0x1002557F: mov eax, dword ptr [ebx + 0x10] */
    PUSH32(esp, ecx); /* 0x10025582: push ecx */
    ecx = (uint32_t)((int32_t)MEM32(edi + 0x30) * (int32_t)0x34u); /* 0x10025583: imul ecx, dword ptr [edi + 0x30], 0x34 */
    eax = MEM32(edx + eax + 0x30); /* 0x10025587: mov eax, dword ptr [edx + eax + 0x30] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x1002558B: add eax, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x1002558E: add ecx, eax */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_10025521); /* 0x10025590: call 0x10025521 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x10)); /* 0x10025595: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10025598: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x10)) = eax; /* 0x10025599: mov dword ptr [ebp - 0x10], eax */
    /* cmp eax, esi */ /* 0x1002559C: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1002556D; /* 0x1002559E: jb 0x1002556d */
L_100255A0:
    edi = MEM32(ebp + 0xC); /* 0x100255A0: mov edi, dword ptr [ebp + 0xc] */
    esi = ebx + 0x20; /* 0x100255A3: lea esi, [ebx + 0x20] */
L_100255A6:
    ecx = MEM32(ebx + 0x8); /* 0x100255A6: mov ecx, dword ptr [ebx + 8] */
    PUSH32(esp, edi); /* 0x100255A9: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100255AA: push dword ptr [ebp + 8] */
    eax = MEM32(ecx); /* 0x100255AD: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x100255AF: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebx + 0x9C)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebx + 0x9C) = MEM32(ebx + 0x9C) + edi; /* 0x100255B2: add dword ptr [ebx + 0x9c], edi */
    _flag_k = FK_ADD;
    PUSH32(esp, esi); /* 0x100255B8: push esi */
    RECOMP_ICALL(MEM32(0x100E503C)); /* 0x100255B9: call dword ptr [0x100e503c] */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_100149D7); /* 0x100255BF: call 0x100149d7 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x100255C4: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_100255D2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100255D2u);

L_100255D2:
    PUSH32(esp, ebp); /* 0x100255D2: push ebp */
    ebp = esp; /* 0x100255D3: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x100255D5: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x100255D8: sub esp, 0x20 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x100255DB: push ebx */
    PUSH32(esp, esi); /* 0x100255DC: push esi */
    PUSH32(esp, edi); /* 0x100255DD: push edi */
    edi = ecx; /* 0x100255DE: mov edi, ecx */
    /* test eax, eax */ /* 0x100255E0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10053202; /* 0x100255E2: je 0x10053202 */
L_100255E8:
    esi = MEM32(ebp + 0xC); /* 0x100255E8: mov esi, dword ptr [ebp + 0xc] */
    /* cmp esi, 1 */ /* 0x100255EB: cmp esi, 1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_100531C8; /* 0x100255EE: jb 0x100531c8 */
L_100255F4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x100255F4: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x100255F6: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10025639; /* 0x100255F8: je 0x10025639 */
L_100255FA:
    ecx = MEM32(eax + ebx * 4); /* 0x100255FA: mov ecx, dword ptr [eax + ebx*4] */
    MEM32(ebp + (-0x8)) = ecx; /* 0x100255FD: mov dword ptr [ebp - 8], ecx */
    eax = MEM32(ecx); /* 0x10025600: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax)); /* 0x10025602: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi + 0x24); /* 0x10025604: mov ecx, dword ptr [edi + 0x24] */
    ecx = MEM32(ecx + eax * 4); /* 0x10025607: mov ecx, dword ptr [ecx + eax*4] */
    /* cmp MEM32(ecx + 0xBC), 0 */ /* 0x1002560A: cmp dword ptr [ecx + 0xbc], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0xBC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100531EC; /* 0x10025611: je 0x100531ec */
L_10025617:
    ecx = MEM32(edi + 0x20); /* 0x10025617: mov ecx, dword ptr [edi + 0x20] */
    PUSH32(esp, 0); /* 0x1002561A: push 0 */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x1002561C: push dword ptr [ebp - 8] */
    ecx = MEM32(ecx + eax * 4); /* 0x1002561F: mov ecx, dword ptr [ecx + eax*4] */
    RECOMP_CALL(sub_10026686); /* 0x10025622: call 0x10026686 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10025627: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = edi + 0x14; /* 0x10025629: lea ecx, [edi + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1002562C: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(ecx), _sum = MEM32(ecx) + eax; eax = _old; MEM32(ecx) = _sum; } /* 0x1002562D: lock xadd dword ptr [ecx], eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x8); /* 0x10025631: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x10025634: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, esi */ /* 0x10025635: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_100255FA; /* 0x10025637: jb 0x100255fa */
L_10025639:
    edi = POP32_VAL(esp); /* 0x10025639: pop edi */
    esi = POP32_VAL(esp); /* 0x1002563A: pop esi */
    ebx = POP32_VAL(esp); /* 0x1002563B: pop ebx */
    esp = ebp; /* 0x1002563C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1002563E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1002563F: ret 8 */
L_100531C8:
    eax = ebp + (-0x4); /* 0x100531C8: lea eax, [ebp - 4] */
    MEM32(ebp + (-0x4)) = 0x100678FCu; /* 0x100531CB: mov dword ptr [ebp - 4], 0x100678fc */
    PUSH32(esp, eax); /* 0x100531D2: push eax */
    ecx = ebp + (-0x20); /* 0x100531D3: lea ecx, [ebp - 0x20] */
    RECOMP_CALL(sub_1009DD30); /* 0x100531D6: call 0x1009dd30 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x20)) = 0x1006754Cu; /* 0x100531DB: mov dword ptr [ebp - 0x20], 0x1006754c */
    eax = ebp + (-0x20); /* 0x100531E2: lea eax, [ebp - 0x20] */
    PUSH32(esp, 0x100DCEE8u); /* 0x100531E5: push 0x100dcee8 */
    goto L_10053224; /* 0x100531EA: jmp 0x10053224 */
L_100531EC:
    ecx = MEM32(edi + 0x24); /* 0x100531EC: mov ecx, dword ptr [edi + 0x24] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x100531EF: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x100531F1: inc edx */
    _flag_k = FK_INC;
    ecx = MEM32(ecx + eax * 4); /* 0x100531F2: mov ecx, dword ptr [ecx + eax*4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xBCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xBCu; /* 0x100531F5: add ecx, 0xbc */
    _flag_k = FK_ADD;
    { uint32_t _tmp = MEM32(ecx); /* 0x100531FB: xchg dword ptr [ecx], edx */
      MEM32(ecx) = edx;
      edx = _tmp; }
    RECOMP_BACKEDGE();
    goto L_10025617; /* 0x100531FD: jmp 0x10025617 */
L_10053202:
    eax = ebp + 0xC; /* 0x10053202: lea eax, [ebp + 0xc] */
    MEM32(ebp + 0xC) = 0x10067904u; /* 0x10053205: mov dword ptr [ebp + 0xc], 0x10067904 */
    PUSH32(esp, eax); /* 0x1005320C: push eax */
    ecx = ebp + (-0x14); /* 0x1005320D: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1009DD30); /* 0x10053210: call 0x1009dd30 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x14)) = 0x1006754Cu; /* 0x10053215: mov dword ptr [ebp - 0x14], 0x1006754c */
    eax = ebp + (-0x14); /* 0x1005321C: lea eax, [ebp - 0x14] */
    PUSH32(esp, 0x100DCEE8u); /* 0x1005321F: push 0x100dcee8 */
L_10053224:
    PUSH32(esp, eax); /* 0x10053224: push eax */
    RECOMP_CALL(sub_100192EB); /* 0x10053225: call 0x100192eb */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1005322Au, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10025642(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10025642u);

L_10025642:
    PUSH32(esp, ebp); /* 0x10025642: push ebp */
    ebp = esp; /* 0x10025643: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x10025645: push ecx */
    PUSH32(esp, ebx); /* 0x10025646: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x10025647: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1002564A: push esi */
    esi = ecx; /* 0x1002564B: mov esi, ecx */
    /* cmp ebx, MEM32(esi) */ /* 0x1002564D: cmp ebx, dword ptr [esi] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100256A9; /* 0x1002564F: je 0x100256a9 */
L_10025651:
    PUSH32(esp, edi); /* 0x10025651: push edi */
    edi = ebx + 0x1F; /* 0x10025652: lea edi, [ebx + 0x1f] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10025655: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (5u) _cf = (((edi) >> 4) & 1u); /* 0x10025657: shr edi, 5 */
    if (5u) { _flag_a = recomp_flags_pack((edi >> 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 5u; /* 0x10025657: shr edi, 5 */
    PUSH32(esp, 4); /* 0x1002565A: push 4 */
    edx = POP32_VAL(esp); /* 0x1002565C: pop edx */
    eax = edi; /* 0x1002565D: mov eax, edi */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x1002565F: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x10025661: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x10025664: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x10025666: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x10025668: push ecx */
    RECOMP_CALL(sub_10011683); /* 0x10025669: call 0x10011683 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1002566E: pop ecx */
    ecx = MEM32(esi); /* 0x1002566F: mov ecx, dword ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x10025671: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x1Fu; /* 0x10025673: add ecx, 0x1f */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x10025676: mov dword ptr [ebp - 4], eax */
    if (5u) _cf = (((ecx) >> 4) & 1u); /* 0x10025679: shr ecx, 5 */
    if (5u) { _flag_a = recomp_flags_pack((ecx >> 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 5u; /* 0x10025679: shr ecx, 5 */
    /* test ecx, ecx */ /* 0x1002567C: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10052E87; /* 0x1002567E: jne 0x10052e87 */
L_10025684:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ecx; /* 0x10025684: sub edi, ecx */
    _flag_k = FK_CMP;
    eax = eax + ecx * 4; /* 0x10025686: lea eax, [eax + ecx*4] */
    if (2u) _cf = (((edi) >> 30) & 1u); /* 0x10025689: shl edi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edi << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 2u; /* 0x10025689: shl edi, 2 */
    PUSH32(esp, edi); /* 0x1002568C: push edi */
    PUSH32(esp, 0); /* 0x1002568D: push 0 */
    PUSH32(esp, eax); /* 0x1002568F: push eax */
    RECOMP_CALL(sub_10011533); /* 0x10025690: call 0x10011533 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x10025695: push dword ptr [esi + 4] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10025698: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x1002569D: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100256A0: add esp, 0x10 */
    _flag_k = FK_ADD;
    MEM32(esi + 0x4) = eax; /* 0x100256A3: mov dword ptr [esi + 4], eax */
    MEM32(esi) = ebx; /* 0x100256A6: mov dword ptr [esi], ebx */
    edi = POP32_VAL(esp); /* 0x100256A8: pop edi */
L_100256A9:
    esi = POP32_VAL(esp); /* 0x100256A9: pop esi */
    ebx = POP32_VAL(esp); /* 0x100256AA: pop ebx */
    esp = ebp; /* 0x100256AB: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100256AD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x100256AE: ret 4 */
L_10052E87:
    ebx = eax; /* 0x10052E87: mov ebx, eax */
L_10052E89:
    eax = MEM32(esi + 0x4); /* 0x10052E89: mov eax, dword ptr [esi + 4] */
    eax = MEM32(eax + edx * 4); /* 0x10052E8C: mov eax, dword ptr [eax + edx*4] */
    MEM32(ebx + edx * 4) = eax; /* 0x10052E8F: mov dword ptr [ebx + edx*4], eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x10052E92: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, ecx */ /* 0x10052E93: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_10052E89; /* 0x10052E95: jb 0x10052e89 */
L_10052E97:
    ebx = MEM32(ebp + 0x8); /* 0x10052E97: mov ebx, dword ptr [ebp + 8] */
    eax = MEM32(ebp + (-0x4)); /* 0x10052E9A: mov eax, dword ptr [ebp - 4] */
    RECOMP_BACKEDGE();
    goto L_10025684; /* 0x10052E9D: jmp 0x10025684 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100256B1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100256B1u);

L_100256B1:
    PUSH32(esp, ebp); /* 0x100256B1: push ebp */
    ebp = esp; /* 0x100256B2: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x100256B4: push ebx */
    PUSH32(esp, esi); /* 0x100256B5: push esi */
    esi = MEM32(ebp + 0x8); /* 0x100256B6: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x100256B9: push edi */
    edi = ecx; /* 0x100256BA: mov edi, ecx */
    ebx = MEM32(edi); /* 0x100256BC: mov ebx, dword ptr [edi] */
    /* cmp esi, ebx */ /* 0x100256BE: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10025710; /* 0x100256C0: je 0x10025710 */
L_100256C2:
    PUSH32(esp, esi); /* 0x100256C2: push esi */
    RECOMP_CALL(sub_10025642); /* 0x100256C3: call 0x10025642 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100256C8: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esi; /* 0x100256CA: mov eax, esi */
    PUSH32(esp, 4); /* 0x100256CC: push 4 */
    edx = POP32_VAL(esp); /* 0x100256CE: pop edx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x100256CF: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x100256D1: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x100256D4: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x100256D6: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x100256D8: push ecx */
    RECOMP_CALL(sub_10011683); /* 0x100256D9: call 0x10011683 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100256DE: pop ecx */
    edx = eax; /* 0x100256DF: mov edx, eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100256E1: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x8) = edx; /* 0x100256E3: mov dword ptr [ebp + 8], edx */
    /* test ebx, ebx */ /* 0x100256E6: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10052EA2; /* 0x100256E8: jne 0x10052ea2 */
L_100256EE:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ebx; /* 0x100256EE: sub esi, ebx */
    _flag_k = FK_CMP;
    eax = edx + ebx * 4; /* 0x100256F0: lea eax, [edx + ebx*4] */
    if (2u) _cf = (((esi) >> 30) & 1u); /* 0x100256F3: shl esi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((esi << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 2u; /* 0x100256F3: shl esi, 2 */
    PUSH32(esp, esi); /* 0x100256F6: push esi */
    PUSH32(esp, 0); /* 0x100256F7: push 0 */
    PUSH32(esp, eax); /* 0x100256F9: push eax */
    RECOMP_CALL(sub_10011533); /* 0x100256FA: call 0x10011533 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(edi + 0x8)); /* 0x100256FF: push dword ptr [edi + 8] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10025702: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x10025707: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1002570A: add esp, 0x10 */
    _flag_k = FK_ADD;
    MEM32(edi + 0x8) = eax; /* 0x1002570D: mov dword ptr [edi + 8], eax */
L_10025710:
    edi = POP32_VAL(esp); /* 0x10025710: pop edi */
    esi = POP32_VAL(esp); /* 0x10025711: pop esi */
    ebx = POP32_VAL(esp); /* 0x10025712: pop ebx */
    ebp = POP32_VAL(esp); /* 0x10025713: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x10025714: ret 4 */
L_10052EA2:
    eax = MEM32(edi + 0x8); /* 0x10052EA2: mov eax, dword ptr [edi + 8] */
    eax = MEM32(eax + ecx * 4); /* 0x10052EA5: mov eax, dword ptr [eax + ecx*4] */
    MEM32(edx + ecx * 4) = eax; /* 0x10052EA8: mov dword ptr [edx + ecx*4], eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x10052EAB: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, ebx */ /* 0x10052EAC: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_100256EE; /* 0x10052EAE: jae 0x100256ee */
L_10052EB4:
    RECOMP_BACKEDGE();
    goto L_10052EA2; /* 0x10052EB4: jmp 0x10052ea2 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10025717(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10025717u);

L_10025717:
    PUSH32(esp, esi); /* 0x10025717: push esi */
    esi = ecx; /* 0x10025718: mov esi, ecx */
    /* cmp MEM32(esi), 0 */ /* 0x1002571A: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002573B; /* 0x1002571D: je 0x1002573b */
L_1002571F:
    ecx = MEM32(0x100E0AC4); /* 0x1002571F: mov ecx, dword ptr [0x100e0ac4] */
    /* test ecx, ecx */ /* 0x10025725: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100525B9; /* 0x10025727: jne 0x100525b9 */
L_1002572D:
    ecx = MEM32(0x100E0AB0); /* 0x1002572D: mov ecx, dword ptr [0x100e0ab0] */
    /* test ecx, ecx */ /* 0x10025733: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100525B9; /* 0x10025735: jne 0x100525b9 */
L_1002573B:
    esi = POP32_VAL(esp); /* 0x1002573B: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1002573C: ret  */
L_100525B9:
    eax = (uint32_t)MEM16(esi + 0x4); /* 0x100525B9: movzx eax, word ptr [esi + 4] */
    PUSH32(esp, eax); /* 0x100525BD: push eax */
    RECOMP_CALL(sub_1006F82A); /* 0x100525BE: call 0x1006f82a */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100525C3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100525CD; /* 0x100525C5: je 0x100525cd */
L_100525C7:
    eax = MEM32(eax); /* 0x100525C7: mov eax, dword ptr [eax] */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(eax);
    MEM32(esi) = MEM32(esi) & eax; /* 0x100525C9: and dword ptr [esi], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x100525CB: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100525CC: ret  */
L_100525CD:
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x100525CD: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1002573B; /* 0x100525D0: jmp 0x1002573b */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10025760(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10025760u);

    goto L_10025760;
L_1002573D:
    ecx = edi + 0x20; /* 0x1002573D: lea ecx, [edi + 0x20] */
    RECOMP_CALL(sub_10025717); /* 0x10025740: call 0x10025717 */
    RECOMP_FLAGS_IN();
    esi = MEM32(esp + 0x10); /* 0x10025745: mov esi, dword ptr [esp + 0x10] */
    edx = MEM32(esp + 0x14); /* 0x10025749: mov edx, dword ptr [esp + 0x14] */
    /* cmp MEM32(edi + 0x20), ebx */ /* 0x1002574D: cmp dword ptr [edi + 0x20], ebx */
    _flag_a = (uint32_t)(MEM32(edi + 0x20)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100257E4; /* 0x10025750: je 0x100257e4 */
L_10025756:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10025756: inc esi */
    _flag_k = FK_INC;
    MEM32(esp + 0x10) = esi; /* 0x10025757: mov dword ptr [esp + 0x10], esi */
    goto L_100257E4; /* 0x1002575B: jmp 0x100257e4 */
L_10025760:
    PUSH32(esp, ebp); /* 0x10025760: push ebp */
    ebp = esp; /* 0x10025761: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x10025763: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x34u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x34u; /* 0x10025766: sub esp, 0x34 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100E03E4); /* 0x10025769: mov eax, dword ptr [0x100e03e4] */
    MEM8(esp + 0x3) = (uint8_t)(LO8(ecx)); /* 0x1002576E: mov byte ptr [esp + 3], cl */
    PUSH32(esp, ebx); /* 0x10025772: push ebx */
    PUSH32(esp, esi); /* 0x10025773: push esi */
    PUSH32(esp, edi); /* 0x10025774: push edi */
    /* test eax, eax */ /* 0x10025775: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10025783; /* 0x10025777: jne 0x10025783 */
L_10025779:
    RECOMP_CALL(sub_10026BF4); /* 0x10025779: call 0x10026bf4 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x100E03E4); /* 0x1002577E: mov eax, dword ptr [0x100e03e4] */
L_10025783:
    ecx = MEM32(0x100E0AB0); /* 0x10025783: mov ecx, dword ptr [0x100e0ab0] */
    /* test ecx, ecx */ /* 0x10025789: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1002579D; /* 0x1002578B: jne 0x1002579d */
L_1002578D:
    RECOMP_CALL(sub_10025BD8); /* 0x1002578D: call 0x10025bd8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x100E03E4); /* 0x10025792: mov eax, dword ptr [0x100e03e4] */
    ecx = MEM32(0x100E0AB0); /* 0x10025797: mov ecx, dword ptr [0x100e0ab0] */
L_1002579D:
    /* cmp eax, 4 */ /* 0x1002579D: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_100525D5; /* 0x100257A0: jl 0x100525d5 */
L_100257A6:
    ecx = 0xFFFFu; /* 0x100257A6: mov ecx, 0xffff */
    RECOMP_CALL(sub_10027B12); /* 0x100257AB: call 0x10027b12 */
    RECOMP_FLAGS_IN();
    edi = MEM32(0x100E0ABC); /* 0x100257B0: mov edi, dword ptr [0x100e0abc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x100257B6: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebx; /* 0x100257B8: mov ecx, ebx */
    MEM32(esp + 0x1C) = ebx; /* 0x100257BA: mov dword ptr [esp + 0x1c], ebx */
    edx = ebx; /* 0x100257BE: mov edx, ebx */
    esi = ebx; /* 0x100257C0: mov esi, ebx */
    MEM32(esp + 0x14) = edx; /* 0x100257C2: mov dword ptr [esp + 0x14], edx */
    MEM32(esp + 0x18) = ecx; /* 0x100257C6: mov dword ptr [esp + 0x18], ecx */
    MEM32(esp + 0x10) = esi; /* 0x100257CA: mov dword ptr [esp + 0x10], esi */
    /* cmp MEM32(0x100E0AA4), ecx */ /* 0x100257CE: cmp dword ptr [0x100e0aa4], ecx */
    _flag_a = (uint32_t)(MEM32(0x100E0AA4)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_100257FA; /* 0x100257D4: jbe 0x100257fa */
L_100257D6:
    /* cmp MEM32(edi), 3 */ /* 0x100257D6: cmp dword ptr [edi], 3 */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10025849; /* 0x100257D9: je 0x10025849 */
L_100257DB:
    /* cmp MEM32(edi), 1 */ /* 0x100257DB: cmp dword ptr [edi], 1 */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1002573D; /* 0x100257DE: je 0x1002573d */
L_100257E4:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(edi + 0x4));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(edi + 0x4); /* 0x100257E4: add edx, dword ptr [edi + 4] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(edi + 0x4));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(edi + 0x4); /* 0x100257E7: add edi, dword ptr [edi + 4] */
    _flag_k = FK_ADD;
    MEM32(esp + 0x14) = edx; /* 0x100257EA: mov dword ptr [esp + 0x14], edx */
    /* cmp edx, MEM32(0x100E0AA4) */ /* 0x100257EE: cmp edx, dword ptr [0x100e0aa4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(0x100E0AA4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_100257D6; /* 0x100257F4: jb 0x100257d6 */
L_100257F6:
    ecx = MEM32(esp + 0x18); /* 0x100257F6: mov ecx, dword ptr [esp + 0x18] */
L_100257FA:
    /* cmp ecx, esi */ /* 0x100257FA: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(0x100E0AB4) = ecx; /* 0x100257FC: mov dword ptr [0x100e0ab4], ecx */
    SET_LO8(eax, (CMP_A(_flag_a, _flag_b)) ? 1 : 0); /* 0x10025802: seta al */
    MEM8(0x100E0AAC) = (uint8_t)(LO8(eax)); /* 0x10025805: mov byte ptr [0x100e0aac], al */
    /* test LO8(eax), LO8(eax) */ /* 0x1002580A: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10025814; /* 0x1002580C: jne 0x10025814 */
L_1002580E:
    MEM32(0x100E0AB4) = esi; /* 0x1002580E: mov dword ptr [0x100e0ab4], esi */
L_10025814:
    eax = MEM32(esp + 0x1C); /* 0x10025814: mov eax, dword ptr [esp + 0x1c] */
    MEM32(0x100E0AC0) = eax; /* 0x10025818: mov dword ptr [0x100e0ac0], eax */
L_1002581D:
    MEM32(0x100E0AA0) = esi; /* 0x1002581D: mov dword ptr [0x100e0aa0], esi */
    /* cmp MEM8(esp + 0xF), LO8(ebx) */ /* 0x10025823: cmp byte ptr [esp + 0xf], bl */
    _flag_a = (uint32_t)(MEM8(esp + 0xF)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1002582E; /* 0x10025827: jne 0x1002582e */
L_10025829:
    RECOMP_CALL(sub_10025A7C); /* 0x10025829: call 0x10025a7c */
    RECOMP_FLAGS_IN();
L_1002582E:
    esi = MEM32(0x100E0AC4); /* 0x1002582E: mov esi, dword ptr [0x100e0ac4] */
    /* test esi, esi */ /* 0x10025834: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10052729; /* 0x10025836: jne 0x10052729 */
L_1002583C:
    edi = POP32_VAL(esp); /* 0x1002583C: pop edi */
    esi = POP32_VAL(esp); /* 0x1002583D: pop esi */
    MEM32(0x100E0AC4) = ebx; /* 0x1002583E: mov dword ptr [0x100e0ac4], ebx */
    ebx = POP32_VAL(esp); /* 0x10025844: pop ebx */
    esp = ebp; /* 0x10025845: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10025847: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10025848: ret  */
L_10025849:
    esi = MEM32(esp + 0x18); /* 0x10025849: mov esi, dword ptr [esp + 0x18] */
    edx = edi + 0x20; /* 0x1002584D: lea edx, [edi + 0x20] */
    MEM32(esp + 0x20) = ebx; /* 0x10025850: mov dword ptr [esp + 0x20], ebx */
    MEM32(esp + 0x24) = edx; /* 0x10025854: mov dword ptr [esp + 0x24], edx */
L_10025858:
    ecx = edx; /* 0x10025858: mov ecx, edx */
    RECOMP_CALL(sub_10025717); /* 0x1002585A: call 0x10025717 */
    RECOMP_FLAGS_IN();
    edx = MEM32(esp + 0x24); /* 0x1002585F: mov edx, dword ptr [esp + 0x24] */
    ecx = MEM32(edx); /* 0x10025863: mov ecx, dword ptr [edx] */
    /* test ecx, ecx */ /* 0x10025865: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10025883; /* 0x10025867: je 0x10025883 */
L_10025869:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10025869: inc esi */
    _flag_k = FK_INC;
    MEM32(esp + 0x18) = esi; /* 0x1002586A: mov dword ptr [esp + 0x18], esi */
    esi = ebx; /* 0x1002586E: mov esi, ebx */
L_10025870:
    eax = ecx + (-0x1); /* 0x10025870: lea eax, [ecx - 1] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10025873: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    ecx = ecx & eax; /* 0x10025874: and ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10025870; /* 0x10025876: jne 0x10025870 */
L_10025878:
    eax = (uint32_t)LO16(esi); /* 0x10025878: movzx eax, si */
    _flag_a = (uint32_t)(MEM32(esp + 0x1C)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esp + 0x1C) = MEM32(esp + 0x1C) + eax; /* 0x1002587B: add dword ptr [esp + 0x1c], eax */
    _flag_k = FK_ADD;
    esi = MEM32(esp + 0x18); /* 0x1002587F: mov esi, dword ptr [esp + 0x18] */
L_10025883:
    ecx = MEM32(esp + 0x20); /* 0x10025883: mov ecx, dword ptr [esp + 0x20] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0xCu; /* 0x10025887: add edx, 0xc */
    _flag_k = FK_ADD;
    eax = (uint32_t)MEM16(edi + 0x1E); /* 0x1002588A: movzx eax, word ptr [edi + 0x1e] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1002588E: inc ecx */
    _flag_k = FK_INC;
    MEM32(esp + 0x20) = ecx; /* 0x1002588F: mov dword ptr [esp + 0x20], ecx */
    MEM32(esp + 0x24) = edx; /* 0x10025893: mov dword ptr [esp + 0x24], edx */
    /* cmp ecx, eax */ /* 0x10025897: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_10025858; /* 0x10025899: jl 0x10025858 */
L_1002589B:
    esi = MEM32(esp + 0x10); /* 0x1002589B: mov esi, dword ptr [esp + 0x10] */
    edx = MEM32(esp + 0x14); /* 0x1002589F: mov edx, dword ptr [esp + 0x14] */
    RECOMP_BACKEDGE();
    goto L_100257DB; /* 0x100258A3: jmp 0x100257db */
L_100525D5:
    /* cmp eax, 3 */ /* 0x100525D5: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100526CD; /* 0x100525D8: jne 0x100526cd */
L_100525DE:
    ecx = 0xFFFFu; /* 0x100525DE: mov ecx, 0xffff */
    RECOMP_CALL(sub_10027B12); /* 0x100525E3: call 0x10027b12 */
    RECOMP_FLAGS_IN();
    edi = MEM32(0x100E0ABC); /* 0x100525E8: mov edi, dword ptr [0x100e0abc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x100525EE: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebx; /* 0x100525F0: mov eax, ebx */
    ecx = ebx; /* 0x100525F2: mov ecx, ebx */
    edx = ebx; /* 0x100525F4: mov edx, ebx */
    MEM32(esp + 0x10) = eax; /* 0x100525F6: mov dword ptr [esp + 0x10], eax */
    esi = ebx; /* 0x100525FA: mov esi, ebx */
    MEM32(esp + 0x1C) = ecx; /* 0x100525FC: mov dword ptr [esp + 0x1c], ecx */
    MEM32(esp + 0x18) = edx; /* 0x10052600: mov dword ptr [esp + 0x18], edx */
    /* cmp MEM32(0x100E0AA4), eax */ /* 0x10052604: cmp dword ptr [0x100e0aa4], eax */
    _flag_a = (uint32_t)(MEM32(0x100E0AA4)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_100526A8; /* 0x1005260A: jbe 0x100526a8 */
L_10052610:
    /* cmp MEM32(edi + 0x4), 3 */ /* 0x10052610: cmp dword ptr [edi + 4], 3 */
    _flag_a = (uint32_t)(MEM32(edi + 0x4)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10052657; /* 0x10052614: jne 0x10052657 */
L_10052616:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10052616: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x2C) = ebx; /* 0x10052618: mov dword ptr [esp + 0x2c], ebx */
    MEM16(esp + 0x2C) = (uint16_t)(LO16(eax)); /* 0x1005261C: mov word ptr [esp + 0x2c], ax */
    ecx = esp + 0x28; /* 0x10052621: lea ecx, [esp + 0x28] */
    eax = MEM32(edi); /* 0x10052625: mov eax, dword ptr [edi] */
    MEM32(esp + 0x30) = ebx; /* 0x10052627: mov dword ptr [esp + 0x30], ebx */
    MEM32(esp + 0x28) = eax; /* 0x1005262B: mov dword ptr [esp + 0x28], eax */
    RECOMP_CALL(sub_10025717); /* 0x1005262F: call 0x10025717 */
    RECOMP_FLAGS_IN();
    edx = MEM32(esp + 0x28); /* 0x10052634: mov edx, dword ptr [esp + 0x28] */
    MEM32(edi) = edx; /* 0x10052638: mov dword ptr [edi], edx */
    /* test edx, edx */ /* 0x1005263A: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10052653; /* 0x1005263C: je 0x10052653 */
L_1005263E:
    _flag_a = (uint32_t)(MEM32(esp + 0x1C)); _flag_b = (uint32_t)(1);
    MEM32(esp + 0x1C) = MEM32(esp + 0x1C) + 1; /* 0x1005263E: inc dword ptr [esp + 0x1c] */
    _flag_k = FK_INC;
    ecx = ebx; /* 0x10052642: mov ecx, ebx */
L_10052644:
    eax = edx + (-0x1); /* 0x10052644: lea eax, [edx - 1] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x10052647: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    edx = edx & eax; /* 0x10052648: and edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10052644; /* 0x1005264A: jne 0x10052644 */
L_1005264C:
    eax = (uint32_t)LO16(ecx); /* 0x1005264C: movzx eax, cx */
    _flag_a = (uint32_t)(MEM32(esp + 0x18)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esp + 0x18) = MEM32(esp + 0x18) + eax; /* 0x1005264F: add dword ptr [esp + 0x18], eax */
    _flag_k = FK_ADD;
L_10052653:
    eax = MEM32(esp + 0x10); /* 0x10052653: mov eax, dword ptr [esp + 0x10] */
L_10052657:
    /* cmp MEM32(edi + 0x4), 1 */ /* 0x10052657: cmp dword ptr [edi + 4], 1 */
    _flag_a = (uint32_t)(MEM32(edi + 0x4)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005268A; /* 0x1005265B: jne 0x1005268a */
L_1005265D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1005265D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x38) = ebx; /* 0x1005265F: mov dword ptr [esp + 0x38], ebx */
    MEM16(esp + 0x38) = (uint16_t)(LO16(eax)); /* 0x10052663: mov word ptr [esp + 0x38], ax */
    ecx = esp + 0x34; /* 0x10052668: lea ecx, [esp + 0x34] */
    eax = MEM32(edi); /* 0x1005266C: mov eax, dword ptr [edi] */
    MEM32(esp + 0x3C) = ebx; /* 0x1005266E: mov dword ptr [esp + 0x3c], ebx */
    MEM32(esp + 0x34) = eax; /* 0x10052672: mov dword ptr [esp + 0x34], eax */
    RECOMP_CALL(sub_10025717); /* 0x10052676: call 0x10025717 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x34); /* 0x1005267B: mov eax, dword ptr [esp + 0x34] */
    /* test eax, eax */ /* 0x1005267F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi) = eax; /* 0x10052681: mov dword ptr [edi], eax */
    eax = MEM32(esp + 0x10); /* 0x10052683: mov eax, dword ptr [esp + 0x10] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1005268A; /* 0x10052687: je 0x1005268a */
L_10052689:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10052689: inc esi */
    _flag_k = FK_INC;
L_1005268A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x18u; /* 0x1005268A: add eax, 0x18 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x18u; /* 0x1005268D: add edi, 0x18 */
    _flag_k = FK_ADD;
    MEM32(esp + 0x10) = eax; /* 0x10052690: mov dword ptr [esp + 0x10], eax */
    /* cmp eax, MEM32(0x100E0AA4) */ /* 0x10052694: cmp eax, dword ptr [0x100e0aa4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(0x100E0AA4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_10052610; /* 0x1005269A: jb 0x10052610 */
L_100526A0:
    ecx = MEM32(esp + 0x1C); /* 0x100526A0: mov ecx, dword ptr [esp + 0x1c] */
    edx = MEM32(esp + 0x18); /* 0x100526A4: mov edx, dword ptr [esp + 0x18] */
L_100526A8:
    /* cmp ecx, esi */ /* 0x100526A8: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(0x100E0AB4) = ecx; /* 0x100526AA: mov dword ptr [0x100e0ab4], ecx */
    SET_LO8(eax, (CMP_A(_flag_a, _flag_b)) ? 1 : 0); /* 0x100526B0: seta al */
    MEM8(0x100E0AAC) = (uint8_t)(LO8(eax)); /* 0x100526B3: mov byte ptr [0x100e0aac], al */
    /* test LO8(eax), LO8(eax) */ /* 0x100526B8: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100526C2; /* 0x100526BA: jne 0x100526c2 */
L_100526BC:
    MEM32(0x100E0AB4) = esi; /* 0x100526BC: mov dword ptr [0x100e0ab4], esi */
L_100526C2:
    MEM32(0x100E0AC0) = edx; /* 0x100526C2: mov dword ptr [0x100e0ac0], edx */
    RECOMP_BACKEDGE();
    goto L_1002581D; /* 0x100526C8: jmp 0x1002581d */
L_100526CD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x100526CD: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x100E0AB4) = 1; /* 0x100526CF: mov dword ptr [0x100e0ab4], 1 */
    MEM8(0x100E0AAC) = (uint8_t)(LO8(ebx)); /* 0x100526D9: mov byte ptr [0x100e0aac], bl */
    /* test ecx, ecx */ /* 0x100526DF: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100526EB; /* 0x100526E1: jne 0x100526eb */
L_100526E3:
    ecx = MEM32(0x100E0A9C); /* 0x100526E3: mov ecx, dword ptr [0x100e0a9c] */
    goto L_10052704; /* 0x100526E9: jmp 0x10052704 */
L_100526EB:
    RECOMP_CALL(sub_10025BD8); /* 0x100526EB: call 0x10025bd8 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x100E0AB0); /* 0x100526F0: mov ecx, dword ptr [0x100e0ab0] */
    PUSH32(esp, ebx); /* 0x100526F6: push ebx */
    RECOMP_CALL(sub_1006F82A); /* 0x100526F7: call 0x1006f82a */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x100E0A9C); /* 0x100526FC: mov ecx, dword ptr [0x100e0a9c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax));
    ecx = ecx & MEM32(eax); /* 0x10052702: and ecx, dword ptr [eax] */
    _cf = 0;
    _flag_k = FK_TEST;
L_10052704:
    edx = ebx; /* 0x10052704: mov edx, ebx */
    /* test ecx, ecx */ /* 0x10052706: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10052712; /* 0x10052708: je 0x10052712 */
L_1005270A:
    eax = ecx + (-0x1); /* 0x1005270A: lea eax, [ecx - 1] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1005270D: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    ecx = ecx & eax; /* 0x1005270E: and ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005270A; /* 0x10052710: jne 0x1005270a */
L_10052712:
    eax = (uint32_t)LO16(edx); /* 0x10052712: movzx eax, dx */
    MEM32(0x100E0AC0) = eax; /* 0x10052715: mov dword ptr [0x100e0ac0], eax */
    MEM32(0x100E0AA0) = 1; /* 0x1005271A: mov dword ptr [0x100e0aa0], 1 */
    RECOMP_BACKEDGE();
    goto L_1002582E; /* 0x10052724: jmp 0x1002582e */
L_10052729:
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x10052729: push dword ptr [esi + 4] */
    RECOMP_CALL(sub_1000ECE0); /* 0x1005272C: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10052731: pop ecx */
    PUSH32(esp, esi); /* 0x10052732: push esi */
    RECOMP_CALL(sub_1000ECE0); /* 0x10052733: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10052738: pop ecx */
    RECOMP_BACKEDGE();
    goto L_1002583C; /* 0x10052739: jmp 0x1002583c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_100258DA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100258DAu);

    goto L_100258DA;
L_100258A8:
    ecx = 0x100E032Cu; /* 0x100258A8: mov ecx, 0x100e032c */
    MEM32(ebp + (-0x10)) = ecx; /* 0x100258AD: mov dword ptr [ebp - 0x10], ecx */
    RECOMP_CALL(sub_10023D1E); /* 0x100258B0: call 0x10023d1e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x100258B5: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(0x100E0AC0); /* 0x100258B9: mov eax, dword ptr [0x100e0ac0] */
    /* test eax, eax */ /* 0x100258BE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100258CE; /* 0x100258C0: jne 0x100258ce */
L_100258C2:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(ecx, 0); /* 0x100258C2: xor cl, cl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_CALL(sub_10025760); /* 0x100258C4: call 0x10025760 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x100E0AC0); /* 0x100258C9: mov eax, dword ptr [0x100e0ac0] */
L_100258CE:
    MEM32(0x100E032C) = 0; /* 0x100258CE: mov dword ptr [0x100e032c], 0 */
    goto L_100258EF; /* 0x100258D8: jmp 0x100258ef */
L_100258DA:
    PUSH32(esp, 4); /* 0x100258DA: push 4 */
    eax = 0x100DB404u; /* 0x100258DC: mov eax, 0x100db404 */
    RECOMP_CALL(sub_100149A4); /* 0x100258E1: call 0x100149a4 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x100E0AC0); /* 0x100258E6: mov eax, dword ptr [0x100e0ac0] */
    /* test eax, eax */ /* 0x100258EB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100258A8; /* 0x100258ED: je 0x100258a8 */
L_100258EF:
    RECOMP_CALL(sub_100149D7); /* 0x100258EF: call 0x100149d7 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100258F4: ret  */
    RECOMP_REGS_OUT();
}

void sub_100258F5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100258F5u);

L_100258F5:
    PUSH32(esp, ebp); /* 0x100258F5: push ebp */
    ebp = esp; /* 0x100258F6: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x100258F8: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x100258FB: sub esp, 0x1c */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x8); /* 0x100258FE: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x10025901: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x10025903: push ebx */
    PUSH32(esp, esi); /* 0x10025904: push esi */
    esi = MEM32(ebp + 0xC); /* 0x10025905: mov esi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x10025908: inc edx */
    _flag_k = FK_INC;
    PUSH32(esp, edi); /* 0x10025909: push edi */
    edi = ecx; /* 0x1002590A: mov edi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1002590C: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0xC8) = ecx; /* 0x1002590E: mov dword ptr [edi + 0xc8], ecx */
    MEM32(edi + 0xCC) = ecx; /* 0x10025914: mov dword ptr [edi + 0xcc], ecx */
    MEM32(edi + 0x78) = ecx; /* 0x1002591A: mov dword ptr [edi + 0x78], ecx */
    MEM32(edi + 0x50) = eax; /* 0x1002591D: mov dword ptr [edi + 0x50], eax */
    MEM32(edi + 0xE0) = edx; /* 0x10025920: mov dword ptr [edi + 0xe0], edx */
    MEM32(edi + 0xD4) = edx; /* 0x10025926: mov dword ptr [edi + 0xd4], edx */
    eax = MEM32(eax + 0x4); /* 0x1002592C: mov eax, dword ptr [eax + 4] */
    MEM32(edi + 0x54) = eax; /* 0x1002592F: mov dword ptr [edi + 0x54], eax */
    eax = MEM32(edi + 0x50); /* 0x10025932: mov eax, dword ptr [edi + 0x50] */
    MEM16(edi + 0xAC) = (uint16_t)(LO16(ecx)); /* 0x10025935: mov word ptr [edi + 0xac], cx */
    MEM32(edi + 0x58) = esi; /* 0x1002593C: mov dword ptr [edi + 0x58], esi */
    MEM32(edi + 0x8) = ecx; /* 0x1002593F: mov dword ptr [edi + 8], ecx */
    MEM32(edi + 0x68) = ecx; /* 0x10025942: mov dword ptr [edi + 0x68], ecx */
    MEM32(edi + 0x6C) = ecx; /* 0x10025945: mov dword ptr [edi + 0x6c], ecx */
    MEM32(edi + 0x70) = ecx; /* 0x10025948: mov dword ptr [edi + 0x70], ecx */
    MEM32(edi + 0x74) = ecx; /* 0x1002594B: mov dword ptr [edi + 0x74], ecx */
    MEM32(edi + 0x7C) = ecx; /* 0x1002594E: mov dword ptr [edi + 0x7c], ecx */
    MEM32(edi + 0xB0) = ecx; /* 0x10025951: mov dword ptr [edi + 0xb0], ecx */
    MEM32(edi + 0xC0) = ecx; /* 0x10025957: mov dword ptr [edi + 0xc0], ecx */
    MEM32(edi + 0x5C) = ecx; /* 0x1002595D: mov dword ptr [edi + 0x5c], ecx */
    MEM16(edi + 0x60) = (uint16_t)(LO16(ecx)); /* 0x10025960: mov word ptr [edi + 0x60], cx */
    ecx = esi; /* 0x10025964: mov ecx, esi */
    MEM8(edi + 0x62) = (uint8_t)(LO8(edx)); /* 0x10025966: mov byte ptr [edi + 0x62], dl */
    ebx = MEM32(eax); /* 0x10025969: mov ebx, dword ptr [eax] */
    eax = MEM32(esi); /* 0x1002596B: mov eax, dword ptr [esi] */
    MEM32(esp + 0x14) = ebx; /* 0x1002596D: mov dword ptr [esp + 0x14], ebx */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x10025971: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x88) = eax; /* 0x10025974: mov dword ptr [edi + 0x88], eax */
    ecx = esi; /* 0x1002597A: mov ecx, esi */
    eax = MEM32(esi); /* 0x1002597C: mov eax, dword ptr [esi] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1002597E: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x8C) = eax; /* 0x10025981: mov dword ptr [edi + 0x8c], eax */
    ecx = ebx + 0x168; /* 0x10025987: lea ecx, [ebx + 0x168] */
    MEM32(esp + 0xC) = eax; /* 0x1002598D: mov dword ptr [esp + 0xc], eax */
    eax = esp + 0x10; /* 0x10025991: lea eax, [esp + 0x10] */
    PUSH32(esp, eax); /* 0x10025995: push eax */
    eax = esp + 0x10; /* 0x10025996: lea eax, [esp + 0x10] */
    PUSH32(esp, eax); /* 0x1002599A: push eax */
    RECOMP_CALL(sub_10026174); /* 0x1002599B: call 0x10026174 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esp + 0x10); /* 0x100259A0: mov eax, dword ptr [esp + 0x10] */
    ebx = edi + 0xA4; /* 0x100259A4: lea ebx, [edi + 0xa4] */
    MEM32(edi + 0x90) = eax; /* 0x100259AA: mov dword ptr [edi + 0x90], eax */
    RECOMP_CALL(sub_100258DA); /* 0x100259B0: call 0x100258da */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x100259B5: push eax */
    ecx = ebx; /* 0x100259B6: mov ecx, ebx */
    RECOMP_CALL(sub_10025642); /* 0x100259B8: call 0x10025642 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebx); /* 0x100259BD: mov edx, dword ptr [ebx] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100259BF: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x1Fu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x1Fu; /* 0x100259C1: add edx, 0x1f */
    _flag_k = FK_ADD;
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x100259C4: shr edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack((edx >> 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 5u; /* 0x100259C4: shr edx, 5 */
    /* test edx, edx */ /* 0x100259C7: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100259D7; /* 0x100259C9: je 0x100259d7 */
L_100259CB:
    eax = MEM32(ebx + 0x4); /* 0x100259CB: mov eax, dword ptr [ebx + 4] */
    _flag_a = (uint32_t)(MEM32(eax + ecx * 4)); _flag_b = (uint32_t)(0);
    MEM32(eax + ecx * 4) = MEM32(eax + ecx * 4) & 0; /* 0x100259CE: and dword ptr [eax + ecx*4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x100259D2: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, edx */ /* 0x100259D3: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_100259CB; /* 0x100259D5: jb 0x100259cb */
L_100259D7:
    ecx = MEM32(edi + 0x90); /* 0x100259D7: mov ecx, dword ptr [edi + 0x90] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100259DD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(ebx + 0x4); /* 0x100259DF: mov edx, dword ptr [ebx + 4] */
    esi = ecx; /* 0x100259E2: mov esi, ecx */
    if (5u) _cf = (((esi) >> 4) & 1u); /* 0x100259E4: shr esi, 5 */
    if (5u) { _flag_a = recomp_flags_pack((esi >> 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi >> 5u; /* 0x100259E4: shr esi, 5 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x100259E7: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100259EA: inc eax */
    _flag_k = FK_INC;
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((eax) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x100259EB: shl eax, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((eax << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << ((LO8(ecx)) & 31); /* 0x100259EB: shl eax, cl */
    ecx = edi + 0x28; /* 0x100259ED: lea ecx, [edi + 0x28] */
    _flag_a = (uint32_t)((MEM32(edx + esi * 4) | eax)); _flag_b = (uint32_t)((MEM32(edx + esi * 4) | eax));
    MEM32(edx + esi * 4) = MEM32(edx + esi * 4) | eax; /* 0x100259F0: or dword ptr [edx + esi*4], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(esp + 0x14); /* 0x100259F3: mov esi, dword ptr [esp + 0x14] */
    /* cmp MEM32(esi + 0xC), 0 */ /* 0x100259F7: cmp dword ptr [esi + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10025A6C; /* 0x100259FB: jne 0x10025a6c */
L_100259FD:
    PUSH32(esp, 1); /* 0x100259FD: push 1 */
L_100259FF:
    PUSH32(esp, edi); /* 0x100259FF: push edi */
    RECOMP_CALL(sub_10027F89); /* 0x10025A00: call 0x10027f89 */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0x50); /* 0x10025A05: mov eax, dword ptr [edi + 0x50] */
    MEM32(esp + 0x18) = 3; /* 0x10025A08: mov dword ptr [esp + 0x18], 3 */
    ecx = MEM32(eax); /* 0x10025A10: mov ecx, dword ptr [eax] */
    eax = MEM32(ecx); /* 0x10025A12: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x10025A14: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x1C) = eax; /* 0x10025A17: mov dword ptr [esp + 0x1c], eax */
    ecx = edi + 0x94; /* 0x10025A1B: lea ecx, [edi + 0x94] */
    eax = MEM32(edi + 0x8C); /* 0x10025A21: mov eax, dword ptr [edi + 0x8c] */
    MEM32(esp + 0x20) = eax; /* 0x10025A27: mov dword ptr [esp + 0x20], eax */
    eax = esp + 0x18; /* 0x10025A2B: lea eax, [esp + 0x18] */
    PUSH32(esp, eax); /* 0x10025A2F: push eax */
    MEM32(esp + 0x28) = edi; /* 0x10025A30: mov dword ptr [esp + 0x28], edi */
    RECOMP_CALL(sub_1002762F); /* 0x10025A34: call 0x1002762f */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(edi + 0x90)); /* 0x10025A39: push dword ptr [edi + 0x90] */
    ecx = esi; /* 0x10025A3F: mov ecx, esi */
    RECOMP_CALL(sub_1002686F); /* 0x10025A41: call 0x1002686f */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0x50); /* 0x10025A46: mov eax, dword ptr [edi + 0x50] */
    esi = MEM32(edi + 0x88); /* 0x10025A49: mov esi, dword ptr [edi + 0x88] */
    ecx = MEM32(eax); /* 0x10025A4F: mov ecx, dword ptr [eax] */
    eax = MEM32(ecx); /* 0x10025A51: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x10025A53: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(0x100E03F0), 4 */ /* 0x10025A56: cmp byte ptr [0x100e03f0], 4 */
    _flag_a = (uint32_t)(MEM8(0x100E03F0)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_AE(_flag_a, _flag_b)) goto L_1005381B; /* 0x10025A5D: jae 0x1005381b */
L_10025A63:
    edi = POP32_VAL(esp); /* 0x10025A63: pop edi */
    esi = POP32_VAL(esp); /* 0x10025A64: pop esi */
    ebx = POP32_VAL(esp); /* 0x10025A65: pop ebx */
    esp = ebp; /* 0x10025A66: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10025A68: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x10025A69: ret 8 */
L_10025A6C:
    PUSH32(esp, 2); /* 0x10025A6C: push 2 */
    RECOMP_BACKEDGE();
    goto L_100259FF; /* 0x10025A6E: jmp 0x100259ff */
L_1005381B:
    edx = MEM32(0x100E03EC); /* 0x1005381B: mov edx, dword ptr [0x100e03ec] */
    /* test LO8(edx), 4 */ /* 0x10053821: test dl, 4 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10025A63; /* 0x10053824: je 0x10025a63 */
L_1005382A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1005382A: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1005382C: push esi */
    PUSH32(esp, eax); /* 0x1005382D: push eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1005382E: inc ecx */
    _flag_k = FK_INC;
    RECOMP_CALL(sub_1007AC29); /* 0x1005382F: call 0x1007ac29 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10053834: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10053835: pop ecx */
    RECOMP_BACKEDGE();
    goto L_10025A63; /* 0x10053836: jmp 0x10025a63 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}
