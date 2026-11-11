#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_15055F70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15055F70u);

L_15055F70:
    edi = edi; /* 0x15055F70: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15055F72: push ebp */
    ebp = esp; /* 0x15055F73: mov ebp, esp */
    PUSH32(esp, 0); /* 0x15055F75: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15055F77: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15055F7A: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15055F90); /* 0x15055F7D: call 0x15055f90 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15055F82: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15055F85: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15055F86: ret  */
    RECOMP_REGS_OUT();
}

void sub_15055F90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15055F90u);

L_15055F90:
    edi = edi; /* 0x15055F90: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15055F92: push ebp */
    ebp = esp; /* 0x15055F93: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x15055F95: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x15055F98: push ebx */
    PUSH32(esp, esi); /* 0x15055F99: push esi */
    PUSH32(esp, edi); /* 0x15055F9A: push edi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15055F9B: push dword ptr [ebp + 0x10] */
    ecx = ebp + (-0x10); /* 0x15055F9E: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1502F870); /* 0x15055FA1: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + (-0xC)); /* 0x15055FA6: mov ebx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15055FA9: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebx + 0x8), esi */ /* 0x15055FAB: cmp dword ptr [ebx + 8], esi */
    _flag_a = (uint32_t)(MEM32(ebx + 0x8)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15055FC4; /* 0x15055FAE: jne 0x15055fc4 */
L_15055FB0:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15055FB0: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15055FB3: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1508EDE0); /* 0x15055FB6: call 0x1508ede0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15055FBB: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15055FBC: pop ecx */
    esi = eax; /* 0x15055FBD: mov esi, eax */
    goto L_15056056; /* 0x15055FBF: jmp 0x15056056 */
L_15055FC4:
    edi = MEM32(ebp + 0x8); /* 0x15055FC4: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x15055FC7: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15055FD0; /* 0x15055FC9: je 0x15055fd0 */
L_15055FCB:
    /* cmp MEM32(ebp + 0xC), esi */ /* 0x15055FCB: cmp dword ptr [ebp + 0xc], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15055FEA; /* 0x15055FCE: jne 0x15055fea */
L_15055FD0:
    RECOMP_CALL(sub_15036430); /* 0x15055FD0: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x15055FD5: push esi */
    PUSH32(esp, esi); /* 0x15055FD6: push esi */
    PUSH32(esp, esi); /* 0x15055FD7: push esi */
    PUSH32(esp, esi); /* 0x15055FD8: push esi */
    PUSH32(esp, esi); /* 0x15055FD9: push esi */
    MEM32(eax) = 0x16u; /* 0x15055FDA: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x15055FE0: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15055FE5: add esp, 0x14 */
    _flag_k = FK_ADD;
    goto L_15056056; /* 0x15055FE8: jmp 0x15056056 */
L_15055FEA:
    /* cmp MEM8(edi), 0 */ /* 0x15055FEA: cmp byte ptr [edi], 0 */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    esi = edi; /* 0x15055FED: mov esi, edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15056054; /* 0x15055FEF: je 0x15056054 */
L_15055FF1:
    edi = MEM32(ebp + 0xC); /* 0x15055FF1: mov edi, dword ptr [ebp + 0xc] */
    SET_HI8(edx, MEM8(edi)); /* 0x15055FF4: mov dh, byte ptr [edi] */
L_15055FF6:
    ecx = edi; /* 0x15055FF6: mov ecx, edi */
    SET_LO8(edx, HI8(edx)); /* 0x15055FF8: mov dl, dh */
    /* test HI8(edx), HI8(edx) */ /* 0x15055FFA: test dh, dh */
    _flag_a = (uint32_t)(HI8(edx)) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15056037; /* 0x15055FFC: je 0x15056037 */
L_15055FFE:
    SET_HI8(ebx, MEM8(esi)); /* 0x15055FFE: mov bh, byte ptr [esi] */
    SET_LO8(ebx, HI8(edx)); /* 0x15056000: mov bl, dh */
    edi = MEM32(ebp + (-0xC)); /* 0x15056002: mov edi, dword ptr [ebp - 0xc] */
L_15056005:
    eax = (uint32_t)LO8(ebx); /* 0x15056005: movzx eax, bl */
    /* test MEM8(eax + edi + 0x1D), 4 */ /* 0x15056008: test byte ptr [eax + edi + 0x1d], 4 */
    _flag_a = (uint32_t)(MEM8(eax + edi + 0x1D)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15056022; /* 0x1505600D: je 0x15056022 */
L_1505600F:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1505600F: inc ecx */
    _flag_k = FK_INC;
    /* cmp LO8(ebx), HI8(ebx) */ /* 0x15056010: cmp bl, bh */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505601D; /* 0x15056012: jne 0x1505601d */
L_15056014:
    SET_LO8(eax, MEM8(ecx)); /* 0x15056014: mov al, byte ptr [ecx] */
    SET_LO8(edx, LO8(ebx)); /* 0x15056016: mov dl, bl */
    /* cmp LO8(eax), MEM8(esi + 0x1) */ /* 0x15056018: cmp al, byte ptr [esi + 1] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(esi + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15056031; /* 0x1505601B: je 0x15056031 */
L_1505601D:
    /* cmp MEM8(ecx), 0 */ /* 0x1505601D: cmp byte ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    goto L_15056024; /* 0x15056020: jmp 0x15056024 */
L_15056022:
    /* cmp LO8(ebx), HI8(ebx) */ /* 0x15056022: cmp bl, bh */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
L_15056024:
    SET_LO8(edx, LO8(ebx)); /* 0x15056024: mov dl, bl */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_15056031; /* 0x15056026: je 0x15056031 */
L_15056028:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15056028: inc ecx */
    _flag_k = FK_INC;
    SET_LO8(edx, MEM8(ecx)); /* 0x15056029: mov dl, byte ptr [ecx] */
    SET_LO8(ebx, LO8(edx)); /* 0x1505602B: mov bl, dl */
    /* test LO8(edx), LO8(edx) */ /* 0x1505602D: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15056005; /* 0x1505602F: jne 0x15056005 */
L_15056031:
    edi = MEM32(ebp + 0xC); /* 0x15056031: mov edi, dword ptr [ebp + 0xc] */
    ebx = MEM32(ebp + (-0xC)); /* 0x15056034: mov ebx, dword ptr [ebp - 0xc] */
L_15056037:
    /* test LO8(edx), LO8(edx) */ /* 0x15056037: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15056051; /* 0x15056039: je 0x15056051 */
L_1505603B:
    eax = (uint32_t)MEM8(esi); /* 0x1505603B: movzx eax, byte ptr [esi] */
    /* test MEM8(eax + ebx + 0x1D), 4 */ /* 0x1505603E: test byte ptr [eax + ebx + 0x1d], 4 */
    _flag_a = (uint32_t)(MEM8(eax + ebx + 0x1D)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505604B; /* 0x15056043: je 0x1505604b */
L_15056045:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x15056045: inc esi */
    _flag_k = FK_INC;
    /* cmp MEM8(esi), 0 */ /* 0x15056046: cmp byte ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15056051; /* 0x15056049: je 0x15056051 */
L_1505604B:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1505604B: inc esi */
    _flag_k = FK_INC;
    /* cmp MEM8(esi), 0 */ /* 0x1505604C: cmp byte ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_15055FF6; /* 0x1505604F: jne 0x15055ff6 */
L_15056051:
    edi = MEM32(ebp + 0x8); /* 0x15056051: mov edi, dword ptr [ebp + 8] */
L_15056054:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edi; /* 0x15056054: sub esi, edi */
    _flag_k = FK_CMP;
L_15056056:
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x15056056: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15056063; /* 0x1505605A: je 0x15056063 */
L_1505605C:
    ecx = MEM32(ebp + (-0x8)); /* 0x1505605C: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1505605F: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_15056063:
    edi = POP32_VAL(esp); /* 0x15056063: pop edi */
    eax = esi; /* 0x15056064: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x15056066: pop esi */
    ebx = POP32_VAL(esp); /* 0x15056067: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15056068: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15056069: ret  */
    RECOMP_REGS_OUT();
}

void sub_15056070(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15056070u);

L_15056070:
    edi = edi; /* 0x15056070: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15056072: push ebp */
    ebp = esp; /* 0x15056073: mov ebp, esp */
    PUSH32(esp, 0); /* 0x15056075: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15056077: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1505607A: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15056090); /* 0x1505607D: call 0x15056090 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15056082: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15056085: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15056086: ret  */
    RECOMP_REGS_OUT();
}

void sub_15056090(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15056090u);

L_15056090:
    edi = edi; /* 0x15056090: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15056092: push ebp */
    ebp = esp; /* 0x15056093: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x15056095: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x15056098: push esi */
    PUSH32(esp, edi); /* 0x15056099: push edi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1505609A: push dword ptr [ebp + 0x10] */
    ecx = ebp + (-0x14); /* 0x1505609D: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1502F870); /* 0x150560A0: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x10)); /* 0x150560A5: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x150560A8: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(eax + 0x8), esi */ /* 0x150560AA: cmp dword ptr [eax + 8], esi */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150560CC; /* 0x150560AD: jne 0x150560cc */
L_150560AF:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x150560AF: push dword ptr [ebp + 0xc] */
    esi = MEM32(ebp + 0x8); /* 0x150560B2: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x150560B5: push esi */
    RECOMP_CALL(sub_1508EDE0); /* 0x150560B6: call 0x1508ede0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x150560BB: add eax, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x150560BD: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x150560BF: pop ecx */
    ecx = POP32_VAL(esp); /* 0x150560C0: pop ecx */
    /* cmp MEM8(eax), 0 */ /* 0x150560C1: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) { esi = eax; } /* 0x150560C4: cmovne esi, eax */
    goto L_15056165; /* 0x150560C7: jmp 0x15056165 */
L_150560CC:
    ecx = MEM32(ebp + 0x8); /* 0x150560CC: mov ecx, dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x150560CF: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150560DA; /* 0x150560D1: je 0x150560da */
L_150560D3:
    edi = MEM32(ebp + 0xC); /* 0x150560D3: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x150560D6: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150560F4; /* 0x150560D8: jne 0x150560f4 */
L_150560DA:
    RECOMP_CALL(sub_15036430); /* 0x150560DA: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x150560DF: push esi */
    PUSH32(esp, esi); /* 0x150560E0: push esi */
    PUSH32(esp, esi); /* 0x150560E1: push esi */
    PUSH32(esp, esi); /* 0x150560E2: push esi */
    PUSH32(esp, esi); /* 0x150560E3: push esi */
    MEM32(eax) = 0x16u; /* 0x150560E4: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x150560EA: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150560EF: add esp, 0x14 */
    _flag_k = FK_ADD;
    goto L_15056165; /* 0x150560F2: jmp 0x15056165 */
L_150560F4:
    /* cmp MEM8(ecx), 0 */ /* 0x150560F4: cmp byte ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505615D; /* 0x150560F7: je 0x1505615d */
L_150560F9:
    SET_LO8(eax, MEM8(edi)); /* 0x150560F9: mov al, byte ptr [edi] */
    esi = MEM32(ebp + (-0x10)); /* 0x150560FB: mov esi, dword ptr [ebp - 0x10] */
    PUSH32(esp, ebx); /* 0x150560FE: push ebx */
L_150560FF:
    edx = edi; /* 0x150560FF: mov edx, edi */
    SET_LO8(ebx, LO8(eax)); /* 0x15056101: mov bl, al */
    /* test LO8(eax), LO8(eax) */ /* 0x15056103: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15056140; /* 0x15056105: je 0x15056140 */
L_15056107:
    SET_LO8(ebx, MEM8(ecx)); /* 0x15056107: mov bl, byte ptr [ecx] */
    SET_HI8(ebx, LO8(eax)); /* 0x15056109: mov bh, al */
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(ebx)); /* 0x1505610B: mov byte ptr [ebp - 1], bl */
    goto L_15056113; /* 0x1505610E: jmp 0x15056113 */
L_15056110:
    SET_LO8(ebx, MEM8(ebp + (-0x1))); /* 0x15056110: mov bl, byte ptr [ebp - 1] */
L_15056113:
    eax = (uint32_t)HI8(ebx); /* 0x15056113: movzx eax, bh */
    /* test MEM8(eax + esi + 0x1D), 4 */ /* 0x15056116: test byte ptr [eax + esi + 0x1d], 4 */
    _flag_a = (uint32_t)(MEM8(eax + esi + 0x1D)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15056130; /* 0x1505611B: je 0x15056130 */
L_1505611D:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1505611D: inc edx */
    _flag_k = FK_INC;
    /* cmp HI8(ebx), LO8(ebx) */ /* 0x1505611E: cmp bh, bl */
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505612B; /* 0x15056120: jne 0x1505612b */
L_15056122:
    SET_LO8(eax, MEM8(edx)); /* 0x15056122: mov al, byte ptr [edx] */
    SET_LO8(ebx, HI8(ebx)); /* 0x15056124: mov bl, bh */
    /* cmp LO8(eax), MEM8(ecx + 0x1) */ /* 0x15056126: cmp al, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15056140; /* 0x15056129: je 0x15056140 */
L_1505612B:
    /* cmp MEM8(edx), 0 */ /* 0x1505612B: cmp byte ptr [edx], 0 */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    goto L_15056133; /* 0x1505612E: jmp 0x15056133 */
L_15056130:
    /* cmp HI8(ebx), MEM8(ebp + (-0x1)) */ /* 0x15056130: cmp bh, byte ptr [ebp - 1] */
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(ebp + (-0x1))) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
L_15056133:
    SET_LO8(ebx, HI8(ebx)); /* 0x15056133: mov bl, bh */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_15056140; /* 0x15056135: je 0x15056140 */
L_15056137:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x15056137: inc edx */
    _flag_k = FK_INC;
    SET_LO8(ebx, MEM8(edx)); /* 0x15056138: mov bl, byte ptr [edx] */
    SET_HI8(ebx, LO8(ebx)); /* 0x1505613A: mov bh, bl */
    /* test LO8(ebx), LO8(ebx) */ /* 0x1505613C: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15056110; /* 0x1505613E: jne 0x15056110 */
L_15056140:
    /* test LO8(ebx), LO8(ebx) */ /* 0x15056140: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505615C; /* 0x15056142: je 0x1505615c */
L_15056144:
    eax = (uint32_t)MEM8(ecx); /* 0x15056144: movzx eax, byte ptr [ecx] */
    /* test MEM8(eax + esi + 0x1D), 4 */ /* 0x15056147: test byte ptr [eax + esi + 0x1d], 4 */
    _flag_a = (uint32_t)(MEM8(eax + esi + 0x1D)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15056154; /* 0x1505614C: je 0x15056154 */
L_1505614E:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1505614E: inc ecx */
    _flag_k = FK_INC;
    /* cmp MEM8(ecx), 0 */ /* 0x1505614F: cmp byte ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505615C; /* 0x15056152: je 0x1505615c */
L_15056154:
    SET_LO8(eax, MEM8(edi)); /* 0x15056154: mov al, byte ptr [edi] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15056156: inc ecx */
    _flag_k = FK_INC;
    /* cmp MEM8(ecx), 0 */ /* 0x15056157: cmp byte ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_150560FF; /* 0x1505615A: jne 0x150560ff */
L_1505615C:
    ebx = POP32_VAL(esp); /* 0x1505615C: pop ebx */
L_1505615D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1505615D: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(ecx), 0 */ /* 0x1505615F: cmp byte ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) { esi = ecx; } /* 0x15056162: cmovne esi, ecx */
L_15056165:
    /* cmp MEM8(ebp + (-0x8)), 0 */ /* 0x15056165: cmp byte ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x8))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15056172; /* 0x15056169: je 0x15056172 */
L_1505616B:
    ecx = MEM32(ebp + (-0xC)); /* 0x1505616B: mov ecx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x1505616E: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_15056172:
    edi = POP32_VAL(esp); /* 0x15056172: pop edi */
    eax = esi; /* 0x15056173: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x15056175: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15056176: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15056177: ret  */
    RECOMP_REGS_OUT();
}

void sub_15056180(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15056180u);

L_15056180:
    edi = edi; /* 0x15056180: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15056182: push ebp */
    ebp = esp; /* 0x15056183: mov ebp, esp */
    PUSH32(esp, 0); /* 0x15056185: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15056187: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1505618A: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_150561A0); /* 0x1505618D: call 0x150561a0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15056192: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15056195: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15056196: ret  */
    RECOMP_REGS_OUT();
}

void sub_150561A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150561A0u);

L_150561A0:
    edi = edi; /* 0x150561A0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150561A2: push ebp */
    ebp = esp; /* 0x150561A3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x150561A5: sub esp, 0x18 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x150561A8: push ebx */
    PUSH32(esp, esi); /* 0x150561A9: push esi */
    PUSH32(esp, edi); /* 0x150561AA: push edi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x150561AB: push dword ptr [ebp + 0x10] */
    ecx = ebp + (-0x18); /* 0x150561AE: lea ecx, [ebp - 0x18] */
    RECOMP_CALL(sub_1502F870); /* 0x150561B1: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x14)); /* 0x150561B6: mov eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x150561B9: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(eax + 0x8), esi */ /* 0x150561BB: cmp dword ptr [eax + 8], esi */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150561D4; /* 0x150561BE: jne 0x150561d4 */
L_150561C0:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x150561C0: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150561C3: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1508EE30); /* 0x150561C6: call 0x1508ee30 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150561CB: pop ecx */
    ecx = POP32_VAL(esp); /* 0x150561CC: pop ecx */
    esi = eax; /* 0x150561CD: mov esi, eax */
    goto L_1505627F; /* 0x150561CF: jmp 0x1505627f */
L_150561D4:
    ebx = MEM32(ebp + 0xC); /* 0x150561D4: mov ebx, dword ptr [ebp + 0xc] */
    /* test ebx, ebx */ /* 0x150561D7: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150561EF; /* 0x150561D9: je 0x150561ef */
L_150561DB:
    /* cmp MEM8(ebx), 0 */ /* 0x150561DB: cmp byte ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_150561E8; /* 0x150561DE: jne 0x150561e8 */
L_150561E0:
    esi = MEM32(ebp + 0x8); /* 0x150561E0: mov esi, dword ptr [ebp + 8] */
    goto L_1505627F; /* 0x150561E3: jmp 0x1505627f */
L_150561E8:
    ecx = MEM32(ebp + 0x8); /* 0x150561E8: mov ecx, dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x150561EB: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15056209; /* 0x150561ED: jne 0x15056209 */
L_150561EF:
    RECOMP_CALL(sub_15036430); /* 0x150561EF: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x150561F4: push esi */
    PUSH32(esp, esi); /* 0x150561F5: push esi */
    PUSH32(esp, esi); /* 0x150561F6: push esi */
    PUSH32(esp, esi); /* 0x150561F7: push esi */
    PUSH32(esp, esi); /* 0x150561F8: push esi */
    MEM32(eax) = 0x16u; /* 0x150561F9: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x150561FF: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15056204: add esp, 0x14 */
    _flag_k = FK_ADD;
    goto L_1505627F; /* 0x15056207: jmp 0x1505627f */
L_15056209:
    edi = ecx; /* 0x15056209: mov edi, ecx */
    edx = edi + 0x1; /* 0x1505620B: lea edx, [edi + 1] */
L_1505620E:
    SET_LO8(eax, MEM8(edi)); /* 0x1505620E: mov al, byte ptr [edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x15056210: inc edi */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x15056211: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505620E; /* 0x15056213: jne 0x1505620e */
L_15056215:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - edx; /* 0x15056215: sub edi, edx */
    _flag_k = FK_CMP;
    edx = ebx; /* 0x15056217: mov edx, ebx */
    eax = edx + 0x1; /* 0x15056219: lea eax, [edx + 1] */
    MEM32(ebp + (-0x8)) = eax; /* 0x1505621C: mov dword ptr [ebp - 8], eax */
L_1505621F:
    SET_LO8(eax, MEM8(edx)); /* 0x1505621F: mov al, byte ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x15056221: inc edx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x15056222: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505621F; /* 0x15056224: jne 0x1505621f */
L_15056226:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - MEM32(ebp + (-0x8)); /* 0x15056226: sub edx, dword ptr [ebp - 8] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - edx; /* 0x15056229: sub edi, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + ecx; /* 0x1505622B: add edi, ecx */
    _flag_k = FK_ADD;
    /* cmp MEM8(ecx), LO8(eax) */ /* 0x1505622D: cmp byte ptr [ecx], al */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505627F; /* 0x1505622F: je 0x1505627f */
L_15056231:
    edx = ecx; /* 0x15056231: mov edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ebx; /* 0x15056233: sub edx, ebx */
    _flag_k = FK_CMP;
L_15056235:
    /* cmp ecx, edi */ /* 0x15056235: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1505627F; /* 0x15056237: ja 0x1505627f */
L_15056239:
    eax = ebx; /* 0x15056239: mov eax, ebx */
    SET_LO8(ebx, MEM8(ecx)); /* 0x1505623B: mov bl, byte ptr [ecx] */
    MEM8(ebp + (-0x2)) = (uint8_t)(LO8(ebx)); /* 0x1505623D: mov byte ptr [ebp - 2], bl */
    /* test LO8(ebx), LO8(ebx) */ /* 0x15056240: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15056257; /* 0x15056242: je 0x15056257 */
L_15056244:
    /* cmp MEM8(eax), 0 */ /* 0x15056244: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505627D; /* 0x15056247: je 0x1505627d */
L_15056249:
    SET_LO8(ebx, MEM8(eax)); /* 0x15056249: mov bl, byte ptr [eax] */
    /* cmp MEM8(edx + eax), LO8(ebx) */ /* 0x1505624B: cmp byte ptr [edx + eax], bl */
    _flag_a = (uint32_t)(MEM8(edx + eax)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_15056257; /* 0x1505624E: jne 0x15056257 */
L_15056250:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15056250: inc eax */
    _flag_k = FK_INC;
    /* cmp MEM8(edx + eax), 0 */ /* 0x15056251: cmp byte ptr [edx + eax], 0 */
    _flag_a = (uint32_t)(MEM8(edx + eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_15056244; /* 0x15056255: jne 0x15056244 */
L_15056257:
    /* cmp MEM8(eax), 0 */ /* 0x15056257: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505627D; /* 0x1505625A: je 0x1505627d */
L_1505625C:
    ebx = MEM32(ebp + (-0x14)); /* 0x1505625C: mov ebx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1505625F: inc ecx */
    _flag_k = FK_INC;
    eax = (uint32_t)MEM8(ebp + (-0x2)); /* 0x15056260: movzx eax, byte ptr [ebp - 2] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x15056264: inc edx */
    _flag_k = FK_INC;
    /* test MEM8(eax + ebx + 0x1D), 4 */ /* 0x15056265: test byte ptr [eax + ebx + 0x1d], 4 */
    _flag_a = (uint32_t)(MEM8(eax + ebx + 0x1D)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ebx = MEM32(ebp + 0xC); /* 0x1505626A: mov ebx, dword ptr [ebp + 0xc] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_15056276; /* 0x1505626D: je 0x15056276 */
L_1505626F:
    /* cmp MEM8(ecx), 0 */ /* 0x1505626F: cmp byte ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505627F; /* 0x15056272: je 0x1505627f */
L_15056274:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15056274: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x15056275: inc edx */
    _flag_k = FK_INC;
L_15056276:
    /* cmp MEM8(ecx), 0 */ /* 0x15056276: cmp byte ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_15056235; /* 0x15056279: jne 0x15056235 */
L_1505627B:
    goto L_1505627F; /* 0x1505627B: jmp 0x1505627f */
L_1505627D:
    esi = ecx; /* 0x1505627D: mov esi, ecx */
L_1505627F:
    /* cmp MEM8(ebp + (-0xC)), 0 */ /* 0x1505627F: cmp byte ptr [ebp - 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0xC))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505628C; /* 0x15056283: je 0x1505628c */
L_15056285:
    ecx = MEM32(ebp + (-0x10)); /* 0x15056285: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x15056288: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1505628C:
    edi = POP32_VAL(esp); /* 0x1505628C: pop edi */
    eax = esi; /* 0x1505628D: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1505628F: pop esi */
    ebx = POP32_VAL(esp); /* 0x15056290: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15056291: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15056292: ret  */
    RECOMP_REGS_OUT();
}

void sub_150562A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150562A0u);

L_150562A0:
    edi = edi; /* 0x150562A0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150562A2: push ebp */
    ebp = esp; /* 0x150562A3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x150562A5: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, 0); /* 0x150562A8: push 0 */
    ecx = ebp + (-0x10); /* 0x150562AA: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1502F870); /* 0x150562AD: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0xC)); /* 0x150562B2: mov eax, dword ptr [ebp - 0xc] */
    /* cmp MEM32(eax + 0x8), 0 */ /* 0x150562B5: cmp dword ptr [eax + 8], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150562CA; /* 0x150562B9: jne 0x150562ca */
L_150562BB:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x150562BB: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150562BE: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1508EEC0); /* 0x150562C1: call 0x1508eec0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150562C6: pop ecx */
    ecx = POP32_VAL(esp); /* 0x150562C7: pop ecx */
    goto L_150562DA; /* 0x150562C8: jmp 0x150562da */
L_150562CA:
    PUSH32(esp, 0); /* 0x150562CA: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x150562CC: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150562CF: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15056300); /* 0x150562D2: call 0x15056300 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x150562D7: add esp, 0xc */
    _flag_k = FK_ADD;
L_150562DA:
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x150562DA: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    ecx = eax; /* 0x150562DE: mov ecx, eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150562E9; /* 0x150562E0: je 0x150562e9 */
L_150562E2:
    eax = MEM32(ebp + (-0x8)); /* 0x150562E2: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(eax + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(eax + 0x70) = MEM32(eax + 0x70) & 0xFFFFFFFDu; /* 0x150562E5: and dword ptr [eax + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_150562E9:
    eax = ecx; /* 0x150562E9: mov eax, ecx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x150562EB: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150562EC: ret  */
    RECOMP_REGS_OUT();
}

void sub_15056300(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15056300u);

L_15056300:
    edi = edi; /* 0x15056300: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15056302: push ebp */
    ebp = esp; /* 0x15056303: mov ebp, esp */
    RECOMP_CALL(sub_15068820); /* 0x15056305: call 0x15068820 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1505630A: push dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x20u; /* 0x1505630D: add eax, 0x20 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x15056310: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15056311: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15056314: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15056350); /* 0x15056317: call 0x15056350 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1505631C: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1505631F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15056320: ret  */
    RECOMP_REGS_OUT();
}

void sub_15056330(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15056330u);

L_15056330:
    edi = edi; /* 0x15056330: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15056332: push ebp */
    ebp = esp; /* 0x15056333: mov ebp, esp */
    PUSH32(esp, 0); /* 0x15056335: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15056337: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1505633A: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1505633D: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15056350); /* 0x15056340: call 0x15056350 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15056345: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15056348: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15056349: ret  */
    RECOMP_REGS_OUT();
}

void sub_15056350(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15056350u);

L_15056350:
    edi = edi; /* 0x15056350: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15056352: push ebp */
    ebp = esp; /* 0x15056353: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x15056355: sub esp, 0x18 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x15056358: push ebx */
    PUSH32(esp, edi); /* 0x15056359: push edi */
    edi = MEM32(ebp + 0x10); /* 0x1505635A: mov edi, dword ptr [ebp + 0x10] */
    /* test edi, edi */ /* 0x1505635D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15056382; /* 0x1505635F: jne 0x15056382 */
L_15056361:
    RECOMP_CALL(sub_15036430); /* 0x15056361: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15056366: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x15056368: push ebx */
    PUSH32(esp, ebx); /* 0x15056369: push ebx */
    PUSH32(esp, ebx); /* 0x1505636A: push ebx */
    PUSH32(esp, ebx); /* 0x1505636B: push ebx */
    PUSH32(esp, ebx); /* 0x1505636C: push ebx */
    MEM32(eax) = 0x16u; /* 0x1505636D: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x15056373: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15056378: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1505637B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15056504; /* 0x1505637D: jmp 0x15056504 */
L_15056382:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x15056382: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15056361; /* 0x15056386: je 0x15056361 */
L_15056388:
    PUSH32(esp, esi); /* 0x15056388: push esi */
    esi = MEM32(ebp + 0x8); /* 0x15056389: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1505638C: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x1505638E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150563B5; /* 0x15056390: jne 0x150563b5 */
L_15056392:
    /* cmp MEM32(edi), ebx */ /* 0x15056392: cmp dword ptr [edi], ebx */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150563B5; /* 0x15056394: jne 0x150563b5 */
L_15056396:
    RECOMP_CALL(sub_15036430); /* 0x15056396: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x1505639B: push ebx */
    PUSH32(esp, ebx); /* 0x1505639C: push ebx */
    PUSH32(esp, ebx); /* 0x1505639D: push ebx */
    PUSH32(esp, ebx); /* 0x1505639E: push ebx */
    PUSH32(esp, ebx); /* 0x1505639F: push ebx */
    MEM32(eax) = 0x16u; /* 0x150563A0: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x150563A6: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150563AB: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150563AE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15056503; /* 0x150563B0: jmp 0x15056503 */
L_150563B5:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x150563B5: push dword ptr [ebp + 0x14] */
    ecx = ebp + (-0x18); /* 0x150563B8: lea ecx, [ebp - 0x18] */
    RECOMP_CALL(sub_1502F870); /* 0x150563BB: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x14)); /* 0x150563C0: mov eax, dword ptr [ebp - 0x14] */
    /* cmp MEM32(eax + 0x8), ebx */ /* 0x150563C3: cmp dword ptr [eax + 8], ebx */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150563DA; /* 0x150563C6: jne 0x150563da */
L_150563C8:
    PUSH32(esp, edi); /* 0x150563C8: push edi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x150563C9: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x150563CC: push esi */
    RECOMP_CALL(sub_1508EF80); /* 0x150563CD: call 0x1508ef80 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x150563D2: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_150564F2; /* 0x150563D5: jmp 0x150564f2 */
L_150563DA:
    /* test esi, esi */ /* 0x150563DA: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15056455; /* 0x150563DC: jne 0x15056455 */
L_150563DE:
    esi = MEM32(edi); /* 0x150563DE: mov esi, dword ptr [edi] */
    goto L_15056455; /* 0x150563E0: jmp 0x15056455 */
L_150563E2:
    eax = MEM32(ebp + 0xC); /* 0x150563E2: mov eax, dword ptr [ebp + 0xc] */
    edi = eax; /* 0x150563E5: mov edi, eax */
    SET_LO8(eax, MEM8(eax)); /* 0x150563E7: mov al, byte ptr [eax] */
    goto L_15056422; /* 0x150563E9: jmp 0x15056422 */
L_150563EB:
    ecx = ebp + (-0x18); /* 0x150563EB: lea ecx, [ebp - 0x18] */
    eax = (uint32_t)LO8(eax); /* 0x150563EE: movzx eax, al */
    PUSH32(esp, ecx); /* 0x150563F1: push ecx */
    PUSH32(esp, eax); /* 0x150563F2: push eax */
    RECOMP_CALL(sub_15050570); /* 0x150563F3: call 0x15050570 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150563F8: pop ecx */
    ecx = POP32_VAL(esp); /* 0x150563F9: pop ecx */
    /* test eax, eax */ /* 0x150563FA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15056419; /* 0x150563FC: je 0x15056419 */
L_150563FE:
    ecx = edi + 0x1; /* 0x150563FE: lea ecx, [edi + 1] */
    SET_LO8(edx, MEM8(ecx)); /* 0x15056401: mov dl, byte ptr [ecx] */
    MEM32(ebp + (-0x4)) = ecx; /* 0x15056403: mov dword ptr [ebp - 4], ecx */
    /* test LO8(edx), LO8(edx) */ /* 0x15056406: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15056428; /* 0x15056408: je 0x15056428 */
L_1505640A:
    SET_LO8(eax, MEM8(edi)); /* 0x1505640A: mov al, byte ptr [edi] */
    /* cmp LO8(eax), MEM8(esi) */ /* 0x1505640C: cmp al, byte ptr [esi] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(esi)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_15056415; /* 0x1505640E: jne 0x15056415 */
L_15056410:
    /* cmp LO8(edx), MEM8(esi + 0x1) */ /* 0x15056410: cmp dl, byte ptr [esi + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(esi + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15056438; /* 0x15056413: je 0x15056438 */
L_15056415:
    edi = ecx; /* 0x15056415: mov edi, ecx */
    goto L_1505641F; /* 0x15056417: jmp 0x1505641f */
L_15056419:
    SET_LO8(eax, MEM8(edi)); /* 0x15056419: mov al, byte ptr [edi] */
    /* cmp LO8(eax), MEM8(esi) */ /* 0x1505641B: cmp al, byte ptr [esi] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(esi)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15056438; /* 0x1505641D: je 0x15056438 */
L_1505641F:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1505641F: inc edi */
    _flag_k = FK_INC;
    SET_LO8(eax, MEM8(edi)); /* 0x15056420: mov al, byte ptr [edi] */
L_15056422:
    /* test LO8(eax), LO8(eax) */ /* 0x15056422: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150563EB; /* 0x15056424: jne 0x150563eb */
L_15056426:
    goto L_15056466; /* 0x15056426: jmp 0x15056466 */
L_15056428:
    RECOMP_CALL(sub_15036430); /* 0x15056428: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x2Au; /* 0x1505642D: mov dword ptr [eax], 0x2a */
    eax = MEM32(ebp + (-0x4)); /* 0x15056433: mov eax, dword ptr [ebp - 4] */
    SET_LO8(eax, MEM8(eax)); /* 0x15056436: mov al, byte ptr [eax] */
L_15056438:
    /* test LO8(eax), LO8(eax) */ /* 0x15056438: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15056466; /* 0x1505643A: je 0x15056466 */
L_1505643C:
    eax = (uint32_t)MEM8(esi); /* 0x1505643C: movzx eax, byte ptr [esi] */
    ecx = ebp + (-0x18); /* 0x1505643F: lea ecx, [ebp - 0x18] */
    PUSH32(esp, ecx); /* 0x15056442: push ecx */
    PUSH32(esp, eax); /* 0x15056443: push eax */
    RECOMP_CALL(sub_15050570); /* 0x15056444: call 0x15050570 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15056449: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1505644A: pop ecx */
    /* test eax, eax */ /* 0x1505644B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15056454; /* 0x1505644D: je 0x15056454 */
L_1505644F:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1505644F: inc esi */
    _flag_k = FK_INC;
    /* cmp MEM8(esi), LO8(ebx) */ /* 0x15056450: cmp byte ptr [esi], bl */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505645B; /* 0x15056452: je 0x1505645b */
L_15056454:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x15056454: inc esi */
    _flag_k = FK_INC;
L_15056455:
    /* cmp MEM8(esi), LO8(ebx) */ /* 0x15056455: cmp byte ptr [esi], bl */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_150563E2; /* 0x15056457: jne 0x150563e2 */
L_15056459:
    goto L_15056466; /* 0x15056459: jmp 0x15056466 */
L_1505645B:
    RECOMP_CALL(sub_15036430); /* 0x1505645B: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x2Au; /* 0x15056460: mov dword ptr [eax], 0x2a */
L_15056466:
    MEM32(ebp + (-0x8)) = esi; /* 0x15056466: mov dword ptr [ebp - 8], esi */
    goto L_150564D2; /* 0x15056469: jmp 0x150564d2 */
L_1505646B:
    eax = MEM32(ebp + 0xC); /* 0x1505646B: mov eax, dword ptr [ebp + 0xc] */
    ecx = ebx; /* 0x1505646E: mov ecx, ebx */
    edi = eax; /* 0x15056470: mov edi, eax */
    SET_LO8(eax, MEM8(eax)); /* 0x15056472: mov al, byte ptr [eax] */
    goto L_150564A7; /* 0x15056474: jmp 0x150564a7 */
L_15056476:
    ecx = ebp + (-0x18); /* 0x15056476: lea ecx, [ebp - 0x18] */
    eax = (uint32_t)LO8(eax); /* 0x15056479: movzx eax, al */
    PUSH32(esp, ecx); /* 0x1505647C: push ecx */
    PUSH32(esp, eax); /* 0x1505647D: push eax */
    RECOMP_CALL(sub_15050570); /* 0x1505647E: call 0x15050570 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15056483: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15056484: pop ecx */
    /* test eax, eax */ /* 0x15056485: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505649E; /* 0x15056487: je 0x1505649e */
L_15056489:
    SET_LO8(ecx, MEM8(edi + 0x1)); /* 0x15056489: mov cl, byte ptr [edi + 1] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x1505648C: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_150564B8; /* 0x1505648E: je 0x150564b8 */
L_15056490:
    SET_LO8(eax, MEM8(edi)); /* 0x15056490: mov al, byte ptr [edi] */
    /* cmp LO8(eax), MEM8(esi) */ /* 0x15056492: cmp al, byte ptr [esi] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(esi)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505649B; /* 0x15056494: jne 0x1505649b */
L_15056496:
    /* cmp LO8(ecx), MEM8(esi + 0x1) */ /* 0x15056496: cmp cl, byte ptr [esi + 1] */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(esi + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150564AD; /* 0x15056499: je 0x150564ad */
L_1505649B:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1505649B: inc edi */
    _flag_k = FK_INC;
    goto L_150564A4; /* 0x1505649C: jmp 0x150564a4 */
L_1505649E:
    SET_LO8(eax, MEM8(edi)); /* 0x1505649E: mov al, byte ptr [edi] */
    /* cmp LO8(eax), MEM8(esi) */ /* 0x150564A0: cmp al, byte ptr [esi] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(esi)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150564B2; /* 0x150564A2: je 0x150564b2 */
L_150564A4:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x150564A4: inc edi */
    _flag_k = FK_INC;
    SET_LO8(eax, MEM8(edi)); /* 0x150564A5: mov al, byte ptr [edi] */
L_150564A7:
    /* test LO8(eax), LO8(eax) */ /* 0x150564A7: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15056476; /* 0x150564A9: jne 0x15056476 */
L_150564AB:
    goto L_150564B8; /* 0x150564AB: jmp 0x150564b8 */
L_150564AD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x150564AD: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x150564AF: inc ecx */
    _flag_k = FK_INC;
    goto L_150564B4; /* 0x150564B0: jmp 0x150564b4 */
L_150564B2:
    ecx = ebx; /* 0x150564B2: mov ecx, ebx */
L_150564B4:
    /* test LO8(eax), LO8(eax) */ /* 0x150564B4: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150564DC; /* 0x150564B6: jne 0x150564dc */
L_150564B8:
    eax = (uint32_t)MEM8(esi); /* 0x150564B8: movzx eax, byte ptr [esi] */
    ecx = ebp + (-0x18); /* 0x150564BB: lea ecx, [ebp - 0x18] */
    PUSH32(esp, ecx); /* 0x150564BE: push ecx */
    PUSH32(esp, eax); /* 0x150564BF: push eax */
    RECOMP_CALL(sub_15050570); /* 0x150564C0: call 0x15050570 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150564C5: pop ecx */
    ecx = POP32_VAL(esp); /* 0x150564C6: pop ecx */
    /* test eax, eax */ /* 0x150564C7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150564D1; /* 0x150564C9: je 0x150564d1 */
L_150564CB:
    /* cmp MEM8(esi + 0x1), LO8(ebx) */ /* 0x150564CB: cmp byte ptr [esi + 1], bl */
    _flag_a = (uint32_t)(MEM8(esi + 0x1)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150564D8; /* 0x150564CE: je 0x150564d8 */
L_150564D0:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x150564D0: inc esi */
    _flag_k = FK_INC;
L_150564D1:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x150564D1: inc esi */
    _flag_k = FK_INC;
L_150564D2:
    /* cmp MEM8(esi), LO8(ebx) */ /* 0x150564D2: cmp byte ptr [esi], bl */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505646B; /* 0x150564D4: jne 0x1505646b */
L_150564D6:
    goto L_150564E6; /* 0x150564D6: jmp 0x150564e6 */
L_150564D8:
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x150564D8: mov byte ptr [esi], bl */
    goto L_150564E6; /* 0x150564DA: jmp 0x150564e6 */
L_150564DC:
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x150564DC: mov byte ptr [esi], bl */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x150564DE: inc esi */
    _flag_k = FK_INC;
    /* test ecx, ecx */ /* 0x150564DF: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150564E6; /* 0x150564E1: je 0x150564e6 */
L_150564E3:
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x150564E3: mov byte ptr [esi], bl */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x150564E5: inc esi */
    _flag_k = FK_INC;
L_150564E6:
    eax = MEM32(ebp + 0x10); /* 0x150564E6: mov eax, dword ptr [ebp + 0x10] */
    MEM32(eax) = esi; /* 0x150564E9: mov dword ptr [eax], esi */
    eax = MEM32(ebp + (-0x8)); /* 0x150564EB: mov eax, dword ptr [ebp - 8] */
    /* cmp eax, esi */ /* 0x150564EE: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150564F4; /* 0x150564F0: je 0x150564f4 */
L_150564F2:
    ebx = eax; /* 0x150564F2: mov ebx, eax */
L_150564F4:
    /* cmp MEM8(ebp + (-0xC)), 0 */ /* 0x150564F4: cmp byte ptr [ebp - 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0xC))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15056501; /* 0x150564F8: je 0x15056501 */
L_150564FA:
    ecx = MEM32(ebp + (-0x10)); /* 0x150564FA: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x150564FD: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_15056501:
    eax = ebx; /* 0x15056501: mov eax, ebx */
L_15056503:
    esi = POP32_VAL(esp); /* 0x15056503: pop esi */
L_15056504:
    edi = POP32_VAL(esp); /* 0x15056504: pop edi */
    ebx = POP32_VAL(esp); /* 0x15056505: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15056506: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15056507: ret  */
    RECOMP_REGS_OUT();
}

void sub_15056510(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15056510u);

L_15056510:
    edi = edi; /* 0x15056510: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15056512: push ebp */
    ebp = esp; /* 0x15056513: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x15056515: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x15056518: neg eax */
    _flag_k = FK_CMP;
    PUSH32(esp, 0); /* 0x1505651A: push 0 */
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1505651C: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    PUSH32(esp, eax); /* 0x1505651E: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1505651F: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15056590); /* 0x15056522: call 0x15056590 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x15056527: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15056529: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1505652C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) { ecx = MEM32(ebp + 0x8); } /* 0x1505652E: cmove ecx, dword ptr [ebp + 8] */
    eax = ecx; /* 0x15056532: mov eax, ecx */
    ebp = POP32_VAL(esp); /* 0x15056534: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15056535: ret  */
    RECOMP_REGS_OUT();
}

void sub_15056540(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15056540u);

L_15056540:
    edi = edi; /* 0x15056540: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15056542: push ebp */
    ebp = esp; /* 0x15056543: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x15056545: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15056548: push dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1505654B: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1505654D: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    PUSH32(esp, eax); /* 0x1505654F: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15056550: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15056590); /* 0x15056553: call 0x15056590 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x15056558: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1505655A: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1505655D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) { ecx = MEM32(ebp + 0x8); } /* 0x1505655F: cmove ecx, dword ptr [ebp + 8] */
    eax = ecx; /* 0x15056563: mov eax, ecx */
    ebp = POP32_VAL(esp); /* 0x15056565: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15056566: ret  */
    RECOMP_REGS_OUT();
}

void sub_15056570(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15056570u);

L_15056570:
    edi = edi; /* 0x15056570: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15056572: push ebp */
    ebp = esp; /* 0x15056573: mov ebp, esp */
    PUSH32(esp, 0); /* 0x15056575: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15056577: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1505657A: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15056590); /* 0x1505657D: call 0x15056590 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15056582: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15056585: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15056586: ret  */
    RECOMP_REGS_OUT();
}

void sub_15056590(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15056590u);

L_15056590:
    edi = edi; /* 0x15056590: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15056592: push ebp */
    ebp = esp; /* 0x15056593: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x15056595: sub esp, 0x18 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x15056598: push ebx */
    PUSH32(esp, esi); /* 0x15056599: push esi */
    PUSH32(esp, edi); /* 0x1505659A: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1505659B: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x1505659E: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505666E; /* 0x150565A0: je 0x1505666e */
L_150565A6:
    esi = MEM32(ebp + 0xC); /* 0x150565A6: mov esi, dword ptr [ebp + 0xc] */
    /* test esi, esi */ /* 0x150565A9: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15056678; /* 0x150565AB: je 0x15056678 */
L_150565B1:
    PUSH32(esp, esi); /* 0x150565B1: push esi */
    PUSH32(esp, edi); /* 0x150565B2: push edi */
    RECOMP_CALL(sub_1508ECC0); /* 0x150565B3: call 0x1508ecc0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150565B8: pop ecx */
    ecx = POP32_VAL(esp); /* 0x150565B9: pop ecx */
    /* cmp eax, esi */ /* 0x150565BA: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_150565CC; /* 0x150565BC: jb 0x150565cc */
L_150565BE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x150565BE: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(edi) = (uint8_t)(LO8(ebx)); /* 0x150565C0: mov byte ptr [edi], bl */
    RECOMP_CALL(sub_15036430); /* 0x150565C2: call 0x15036430 */
    RECOMP_FLAGS_IN();
    goto L_1505667F; /* 0x150565C7: jmp 0x1505667f */
L_150565CC:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x150565CC: push dword ptr [ebp + 0x10] */
    ecx = ebp + (-0x18); /* 0x150565CF: lea ecx, [ebp - 0x18] */
    RECOMP_CALL(sub_1502F870); /* 0x150565D2: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    SET_LO8(eax, MEM8(edi)); /* 0x150565D7: mov al, byte ptr [edi] */
    ebx = edi; /* 0x150565D9: mov ebx, edi */
    esi = edi; /* 0x150565DB: mov esi, edi */
    /* test LO8(eax), LO8(eax) */ /* 0x150565DD: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505664A; /* 0x150565DF: je 0x1505664a */
L_150565E1:
    ecx = MEM32(ebp + (-0x14)); /* 0x150565E1: mov ecx, dword ptr [ebp - 0x14] */
L_150565E4:
    edx = (uint32_t)LO8(eax); /* 0x150565E4: movzx edx, al */
    MEM32(ebp + (-0x8)) = edx; /* 0x150565E7: mov dword ptr [ebp - 8], edx */
    SET_LO8(edx, MEM8(edx + ecx + 0x1D)); /* 0x150565EA: mov dl, byte ptr [edx + ecx + 0x1d] */
    /* test LO8(edx), 4 */ /* 0x150565EE: test dl, 4 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15056631; /* 0x150565F1: je 0x15056631 */
L_150565F3:
    PUSH32(esp, 1); /* 0x150565F3: push 1 */
    PUSH32(esp, MEM32(ecx + 0x4)); /* 0x150565F5: push dword ptr [ecx + 4] */
    eax = ebp + (-0x4); /* 0x150565F8: lea eax, [ebp - 4] */
    PUSH32(esp, 2); /* 0x150565FB: push 2 */
    PUSH32(esp, eax); /* 0x150565FD: push eax */
    PUSH32(esp, 2); /* 0x150565FE: push 2 */
    PUSH32(esp, ebx); /* 0x15056600: push ebx */
    PUSH32(esp, 0x200u); /* 0x15056601: push 0x200 */
    PUSH32(esp, MEM32(ecx + 0xC)); /* 0x15056606: push dword ptr [ecx + 0xc] */
    eax = ebp + (-0x18); /* 0x15056609: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x1505660C: push eax */
    RECOMP_CALL(sub_15058910); /* 0x1505660D: call 0x15058910 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x24u; /* 0x15056612: add esp, 0x24 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15056615: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505665F; /* 0x15056617: je 0x1505665f */
L_15056619:
    ecx = MEM32(ebp + (-0x4)); /* 0x15056619: mov ecx, dword ptr [ebp - 4] */
    MEM8(esi) = (uint8_t)(LO8(ecx)); /* 0x1505661C: mov byte ptr [esi], cl */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1505661E: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1505661F: inc ebx */
    _flag_k = FK_INC;
    /* cmp eax, 1 */ /* 0x15056620: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1505662C; /* 0x15056623: jle 0x1505662c */
L_15056625:
    MEM8(esi) = (uint8_t)(HI8(ecx)); /* 0x15056625: mov byte ptr [esi], ch */
    ecx = MEM32(ebp + (-0x14)); /* 0x15056627: mov ecx, dword ptr [ebp - 0x14] */
    goto L_15056642; /* 0x1505662A: jmp 0x15056642 */
L_1505662C:
    ecx = MEM32(ebp + (-0x14)); /* 0x1505662C: mov ecx, dword ptr [ebp - 0x14] */
    goto L_15056643; /* 0x1505662F: jmp 0x15056643 */
L_15056631:
    /* test LO8(edx), 0x20u */ /* 0x15056631: test dl, 0x20 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15056640; /* 0x15056634: je 0x15056640 */
L_15056636:
    eax = MEM32(ebp + (-0x8)); /* 0x15056636: mov eax, dword ptr [ebp - 8] */
    SET_LO8(eax, MEM8(eax + ecx + 0x11D)); /* 0x15056639: mov al, byte ptr [eax + ecx + 0x11d] */
L_15056640:
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x15056640: mov byte ptr [esi], al */
L_15056642:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x15056642: inc esi */
    _flag_k = FK_INC;
L_15056643:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x15056643: inc ebx */
    _flag_k = FK_INC;
    SET_LO8(eax, MEM8(ebx)); /* 0x15056644: mov al, byte ptr [ebx] */
    /* test LO8(eax), LO8(eax) */ /* 0x15056646: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150565E4; /* 0x15056648: jne 0x150565e4 */
L_1505664A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1505664A: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x1505664C: mov byte ptr [esi], bl */
L_1505664E:
    /* cmp MEM8(ebp + (-0xC)), 0 */ /* 0x1505664E: cmp byte ptr [ebp - 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0xC))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505665B; /* 0x15056652: je 0x1505665b */
L_15056654:
    ecx = MEM32(ebp + (-0x10)); /* 0x15056654: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x15056657: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1505665B:
    eax = ebx; /* 0x1505665B: mov eax, ebx */
    goto L_15056693; /* 0x1505665D: jmp 0x15056693 */
L_1505665F:
    MEM8(edi) = (uint8_t)(0); /* 0x1505665F: mov byte ptr [edi], 0 */
    RECOMP_CALL(sub_15036430); /* 0x15056662: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x2Au); /* 0x15056667: push 0x2a */
    ebx = POP32_VAL(esp); /* 0x15056669: pop ebx */
    MEM32(eax) = ebx; /* 0x1505666A: mov dword ptr [eax], ebx */
    RECOMP_BACKEDGE();
    goto L_1505664E; /* 0x1505666C: jmp 0x1505664e */
L_1505666E:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x1505666E: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15056678; /* 0x15056672: jne 0x15056678 */
L_15056674:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15056674: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15056693; /* 0x15056676: jmp 0x15056693 */
L_15056678:
    RECOMP_CALL(sub_15036430); /* 0x15056678: call 0x15036430 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1505667D: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1505667F:
    PUSH32(esp, 0x16u); /* 0x1505667F: push 0x16 */
    esi = POP32_VAL(esp); /* 0x15056681: pop esi */
    PUSH32(esp, ebx); /* 0x15056682: push ebx */
    PUSH32(esp, ebx); /* 0x15056683: push ebx */
    PUSH32(esp, ebx); /* 0x15056684: push ebx */
    PUSH32(esp, ebx); /* 0x15056685: push ebx */
    PUSH32(esp, ebx); /* 0x15056686: push ebx */
    MEM32(eax) = esi; /* 0x15056687: mov dword ptr [eax], esi */
    RECOMP_CALL(sub_1505A110); /* 0x15056689: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1505668E: mov eax, esi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15056690: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15056693:
    edi = POP32_VAL(esp); /* 0x15056693: pop edi */
    esi = POP32_VAL(esp); /* 0x15056694: pop esi */
    ebx = POP32_VAL(esp); /* 0x15056695: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15056696: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15056697: ret  */
    RECOMP_REGS_OUT();
}

void sub_150566A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150566A0u);

L_150566A0:
    edi = edi; /* 0x150566A0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150566A2: push ebp */
    ebp = esp; /* 0x150566A3: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150566A5: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15046090); /* 0x150566A8: call 0x15046090 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150566AD: pop ecx */
    ebp = POP32_VAL(esp); /* 0x150566AE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150566AF: ret  */
    RECOMP_REGS_OUT();
}

void sub_150566C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150566C0u);

L_150566C0:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150566C0: ret 0 */
    RECOMP_REGS_OUT();
}

void sub_150566D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150566D0u);

    goto L_150566D0;
L_15046230:
    edi = edi; /* 0x15046230: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15046232: push ebp */
    ebp = esp; /* 0x15046233: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x15046235: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x15046238: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15046248; /* 0x1504623A: je 0x15046248 */
L_1504623C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFCu);
    eax = eax & 0xFFFFFFFCu; /* 0x1504623C: and eax, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(eax + (-0x4))); /* 0x1504623F: push dword ptr [eax - 4] */
    RECOMP_CALL(sub_15048840); /* 0x15046242: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15046247: pop ecx */
L_15046248:
    ebp = POP32_VAL(esp); /* 0x15046248: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15046249: ret  */
L_150566D0:
    RECOMP_BACKEDGE();
    goto L_15046230; /* 0x150566D0: jmp 0x15046230 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_150566E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150566E0u);

L_150566E0:
    edi = edi; /* 0x150566E0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150566E2: push ebp */
    ebp = esp; /* 0x150566E3: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x150566E5: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x150566E8: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150566EB: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15046270); /* 0x150566EE: call 0x15046270 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x150566F3: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x150566F6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150566F7: ret  */
    RECOMP_REGS_OUT();
}

void sub_15056700(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15056700u);

L_15056700:
    edi = edi; /* 0x15056700: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15056702: push ebp */
    ebp = esp; /* 0x15056703: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x15056705: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15056708: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1505670B: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1505670E: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15046330); /* 0x15056711: call 0x15046330 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15056716: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x15056719: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505671A: ret  */
    RECOMP_REGS_OUT();
}

void sub_15056730(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15056730u);

L_15056730:
    edi = edi; /* 0x15056730: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15056732: push ebp */
    ebp = esp; /* 0x15056733: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15056735: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15056738: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_150487F0); /* 0x1505673B: call 0x150487f0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15056740: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15056741: pop ecx */
    ebp = POP32_VAL(esp); /* 0x15056742: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15056743: ret  */
    RECOMP_REGS_OUT();
}

void sub_15056750(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15056750u);

L_15056750:
    edi = edi; /* 0x15056750: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15056752: push ebp */
    ebp = esp; /* 0x15056753: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15056755: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15056758: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_150464E0); /* 0x1505675B: call 0x150464e0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15056760: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15056761: pop ecx */
    ebp = POP32_VAL(esp); /* 0x15056762: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15056763: ret  */
    RECOMP_REGS_OUT();
}

void sub_15056770(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15056770u);

L_15056770:
    edi = edi; /* 0x15056770: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15056772: push ebp */
    ebp = esp; /* 0x15056773: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15056775: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15048840); /* 0x15056778: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505677D: pop ecx */
    ebp = POP32_VAL(esp); /* 0x1505677E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505677F: ret  */
    RECOMP_REGS_OUT();
}

void sub_15056790(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15056790u);

L_15056790:
    edi = edi; /* 0x15056790: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15056792: push ebp */
    ebp = esp; /* 0x15056793: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15056795: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15048A30); /* 0x15056798: call 0x15048a30 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505679D: pop ecx */
    ebp = POP32_VAL(esp); /* 0x1505679E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505679F: ret  */
    RECOMP_REGS_OUT();
}

void sub_150567B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150567B0u);

L_150567B0:
    edi = edi; /* 0x150567B0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150567B2: push ebp */
    ebp = esp; /* 0x150567B3: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150567B5: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15048600); /* 0x150567B8: call 0x15048600 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150567BD: pop ecx */
    ebp = POP32_VAL(esp); /* 0x150567BE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150567BF: ret  */
    RECOMP_REGS_OUT();
}

void sub_150567D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150567D0u);

L_150567D0:
    edi = edi; /* 0x150567D0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150567D2: push ebp */
    ebp = esp; /* 0x150567D3: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x150567D5: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150567D8: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15048B20); /* 0x150567DB: call 0x15048b20 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150567E0: pop ecx */
    ecx = POP32_VAL(esp); /* 0x150567E1: pop ecx */
    ebp = POP32_VAL(esp); /* 0x150567E2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150567E3: ret  */
    RECOMP_REGS_OUT();
}

void sub_150567F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150567F0u);

L_150567F0:
    edi = edi; /* 0x150567F0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150567F2: push ebp */
    ebp = esp; /* 0x150567F3: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x150567F5: push ecx */
    PUSH32(esp, ecx); /* 0x150567F6: push ecx */
    PUSH32(esp, esi); /* 0x150567F7: push esi */
    PUSH32(esp, edi); /* 0x150567F8: push edi */
    RECOMP_CALL(sub_15068840); /* 0x150567F9: call 0x15068840 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x150567FE: mov esi, eax */
    /* test esi, esi */ /* 0x15056800: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15056951; /* 0x15056802: je 0x15056951 */
L_15056808:
    edx = MEM32(esi + 0x5C); /* 0x15056808: mov edx, dword ptr [esi + 0x5c] */
    ecx = MEM32(ebp + 0x8); /* 0x1505680B: mov ecx, dword ptr [ebp + 8] */
    edi = MEM32(0x150BD300); /* 0x1505680E: mov edi, dword ptr [0x150bd300] */
L_15056814:
    /* cmp MEM32(edx), ecx */ /* 0x15056814: cmp dword ptr [edx], ecx */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15056825; /* 0x15056816: je 0x15056825 */
L_15056818:
    eax = (uint32_t)((int32_t)edi * (int32_t)0xCu); /* 0x15056818: imul eax, edi, 0xc */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0xCu; /* 0x1505681B: add edx, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x5C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esi + 0x5C); /* 0x1505681E: add eax, dword ptr [esi + 0x5c] */
    _flag_k = FK_ADD;
    /* cmp edx, eax */ /* 0x15056821: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_15056814; /* 0x15056823: jb 0x15056814 */
L_15056825:
    eax = (uint32_t)((int32_t)edi * (int32_t)0xCu); /* 0x15056825: imul eax, edi, 0xc */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x5C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esi + 0x5C); /* 0x15056828: add eax, dword ptr [esi + 0x5c] */
    _flag_k = FK_ADD;
    /* cmp edx, eax */ /* 0x1505682B: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_15056951; /* 0x1505682D: jae 0x15056951 */
L_15056833:
    /* cmp MEM32(edx), ecx */ /* 0x15056833: cmp dword ptr [edx], ecx */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15056951; /* 0x15056835: jne 0x15056951 */
L_1505683B:
    edi = MEM32(edx + 0x8); /* 0x1505683B: mov edi, dword ptr [edx + 8] */
    MEM32(ebp + (-0x4)) = edi; /* 0x1505683E: mov dword ptr [ebp - 4], edi */
    /* test edi, edi */ /* 0x15056841: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15056951; /* 0x15056843: je 0x15056951 */
L_15056849:
    /* cmp edi, 5 */ /* 0x15056849: cmp edi, 5 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505685A; /* 0x1505684C: jne 0x1505685a */
L_1505684E:
    _flag_a = (uint32_t)(MEM32(edx + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(edx + 0x8) = MEM32(edx + 0x8) & 0; /* 0x1505684E: and dword ptr [edx + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15056852: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15056854: inc eax */
    _flag_k = FK_INC;
    goto L_15056953; /* 0x15056855: jmp 0x15056953 */
L_1505685A:
    /* cmp edi, 1 */ /* 0x1505685A: cmp edi, 1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15056867; /* 0x1505685D: jne 0x15056867 */
L_1505685F:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1505685F: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15056953; /* 0x15056862: jmp 0x15056953 */
L_15056867:
    eax = MEM32(esi + 0x60); /* 0x15056867: mov eax, dword ptr [esi + 0x60] */
    MEM32(ebp + (-0x8)) = eax; /* 0x1505686A: mov dword ptr [ebp - 8], eax */
    eax = MEM32(ebp + 0xC); /* 0x1505686D: mov eax, dword ptr [ebp + 0xc] */
    MEM32(esi + 0x60) = eax; /* 0x15056870: mov dword ptr [esi + 0x60], eax */
    /* cmp MEM32(edx + 0x4), 8 */ /* 0x15056873: cmp dword ptr [edx + 4], 8 */
    _flag_a = (uint32_t)(MEM32(edx + 0x4)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15056934; /* 0x15056877: jne 0x15056934 */
L_1505687D:
    eax = MEM32(0x150BD30C); /* 0x1505687D: mov eax, dword ptr [0x150bd30c] */
    PUSH32(esp, ebx); /* 0x15056882: push ebx */
    ebx = MEM32(0x150BD308); /* 0x15056883: mov ebx, dword ptr [0x150bd308] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x15056889: add eax, ebx */
    _flag_k = FK_ADD;
    /* cmp ebx, eax */ /* 0x1505688B: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_150568B0; /* 0x1505688D: jge 0x150568b0 */
L_1505688F:
    edi = (uint32_t)((int32_t)ebx * (int32_t)0xCu); /* 0x1505688F: imul edi, ebx, 0xc */
L_15056892:
    eax = MEM32(esi + 0x5C); /* 0x15056892: mov eax, dword ptr [esi + 0x5c] */
    edi = edi + 0xC; /* 0x15056895: lea edi, [edi + 0xc] */
    _flag_a = (uint32_t)(MEM32(edi + eax + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(edi + eax + (-0x4)) = MEM32(edi + eax + (-0x4)) & 0; /* 0x15056898: and dword ptr [edi + eax - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1505689D: inc ebx */
    _flag_k = FK_INC;
    eax = MEM32(0x150BD30C); /* 0x1505689E: mov eax, dword ptr [0x150bd30c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(0x150BD308));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(0x150BD308); /* 0x150568A3: add eax, dword ptr [0x150bd308] */
    _flag_k = FK_ADD;
    /* cmp ebx, eax */ /* 0x150568A9: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_15056892; /* 0x150568AB: jl 0x15056892 */
L_150568AD:
    edi = MEM32(ebp + (-0x4)); /* 0x150568AD: mov edi, dword ptr [ebp - 4] */
L_150568B0:
    /* cmp MEM32(edx), 0xC000008Eu */ /* 0x150568B0: cmp dword ptr [edx], 0xc000008e */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(0xC000008Eu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = MEM32(esi + 0x64); /* 0x150568B6: mov ebx, dword ptr [esi + 0x64] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_150568C2; /* 0x150568B9: jne 0x150568c2 */
L_150568BB:
    eax = 0x83u; /* 0x150568BB: mov eax, 0x83 */
    goto L_1505691C; /* 0x150568C0: jmp 0x1505691c */
L_150568C2:
    /* cmp MEM32(edx), 0xC0000090u */ /* 0x150568C2: cmp dword ptr [edx], 0xc0000090 */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(0xC0000090u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150568D1; /* 0x150568C8: jne 0x150568d1 */
L_150568CA:
    eax = 0x81u; /* 0x150568CA: mov eax, 0x81 */
    goto L_1505691C; /* 0x150568CF: jmp 0x1505691c */
L_150568D1:
    /* cmp MEM32(edx), 0xC0000091u */ /* 0x150568D1: cmp dword ptr [edx], 0xc0000091 */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(0xC0000091u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150568E0; /* 0x150568D7: jne 0x150568e0 */
L_150568D9:
    eax = 0x84u; /* 0x150568D9: mov eax, 0x84 */
    goto L_1505691C; /* 0x150568DE: jmp 0x1505691c */
L_150568E0:
    /* cmp MEM32(edx), 0xC0000093u */ /* 0x150568E0: cmp dword ptr [edx], 0xc0000093 */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(0xC0000093u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150568EF; /* 0x150568E6: jne 0x150568ef */
L_150568E8:
    eax = 0x85u; /* 0x150568E8: mov eax, 0x85 */
    goto L_1505691C; /* 0x150568ED: jmp 0x1505691c */
L_150568EF:
    /* cmp MEM32(edx), 0xC000008Du */ /* 0x150568EF: cmp dword ptr [edx], 0xc000008d */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(0xC000008Du);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150568FE; /* 0x150568F5: jne 0x150568fe */
L_150568F7:
    eax = 0x82u; /* 0x150568F7: mov eax, 0x82 */
    goto L_1505691C; /* 0x150568FC: jmp 0x1505691c */
L_150568FE:
    /* cmp MEM32(edx), 0xC000008Fu */ /* 0x150568FE: cmp dword ptr [edx], 0xc000008f */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(0xC000008Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505690D; /* 0x15056904: jne 0x1505690d */
L_15056906:
    eax = 0x86u; /* 0x15056906: mov eax, 0x86 */
    goto L_1505691C; /* 0x1505690B: jmp 0x1505691c */
L_1505690D:
    /* cmp MEM32(edx), 0xC0000092u */ /* 0x1505690D: cmp dword ptr [edx], 0xc0000092 */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(0xC0000092u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = ebx; /* 0x15056913: mov eax, ebx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505691F; /* 0x15056915: jne 0x1505691f */
L_15056917:
    eax = 0x8Au; /* 0x15056917: mov eax, 0x8a */
L_1505691C:
    MEM32(esi + 0x64) = eax; /* 0x1505691C: mov dword ptr [esi + 0x64], eax */
L_1505691F:
    PUSH32(esp, eax); /* 0x1505691F: push eax */
    PUSH32(esp, 8); /* 0x15056920: push 8 */
    ecx = edi; /* 0x15056922: mov ecx, edi */
    RECOMP_ICALL(MEM32(0x150C02B0)); /* 0x15056924: call dword ptr [0x150c02b0] */
    RECOMP_FLAGS_IN();
    RECOMP_ICALL(edi); /* 0x1505692A: call edi */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505692C: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1505692D: pop ecx */
    MEM32(esi + 0x64) = ebx; /* 0x1505692E: mov dword ptr [esi + 0x64], ebx */
    ebx = POP32_VAL(esp); /* 0x15056931: pop ebx */
    goto L_15056946; /* 0x15056932: jmp 0x15056946 */
L_15056934:
    PUSH32(esp, MEM32(edx + 0x4)); /* 0x15056934: push dword ptr [edx + 4] */
    _flag_a = (uint32_t)(MEM32(edx + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(edx + 0x8) = MEM32(edx + 0x8) & 0; /* 0x15056937: and dword ptr [edx + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = edi; /* 0x1505693B: mov ecx, edi */
    RECOMP_ICALL(MEM32(0x150C02B0)); /* 0x1505693D: call dword ptr [0x150c02b0] */
    RECOMP_FLAGS_IN();
    RECOMP_ICALL(edi); /* 0x15056943: call edi */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15056945: pop ecx */
L_15056946:
    eax = MEM32(ebp + (-0x8)); /* 0x15056946: mov eax, dword ptr [ebp - 8] */
    MEM32(esi + 0x60) = eax; /* 0x15056949: mov dword ptr [esi + 0x60], eax */
    RECOMP_BACKEDGE();
    goto L_1505685F; /* 0x1505694C: jmp 0x1505685f */
L_15056951:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15056951: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_15056953:
    edi = POP32_VAL(esp); /* 0x15056953: pop edi */
    esi = POP32_VAL(esp); /* 0x15056954: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15056955: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15056956: ret  */
    RECOMP_REGS_OUT();
}

void sub_15056960(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15056960u);

L_15056960:
    edi = edi; /* 0x15056960: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15056962: push ebp */
    ebp = esp; /* 0x15056963: mov ebp, esp */
    eax = 0xE06D7363u; /* 0x15056965: mov eax, 0xe06d7363 */
    /* cmp MEM32(ebp + 0x8), eax */ /* 0x1505696A: cmp dword ptr [ebp + 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505697C; /* 0x1505696D: jne 0x1505697c */
L_1505696F:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1505696F: push dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x15056972: push eax */
    RECOMP_CALL(sub_150567F0); /* 0x15056973: call 0x150567f0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15056978: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15056979: pop ecx */
    ebp = POP32_VAL(esp); /* 0x1505697A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505697B: ret  */
L_1505697C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1505697C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1505697E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505697F: ret  */
    RECOMP_REGS_OUT();
}

void sub_15056990(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15056990u);

L_15056990:
    RECOMP_CALL(sub_15068820); /* 0x15056990: call 0x15068820 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x15056995: mov ecx, eax */
    eax = MEM32(ecx + 0x6C); /* 0x15056997: mov eax, dword ptr [ecx + 0x6c] */
    /* cmp eax, MEM32(0x150BC074) */ /* 0x1505699A: cmp eax, dword ptr [0x150bc074] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(0x150BC074));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150569B6; /* 0x150569A0: je 0x150569b6 */
L_150569A2:
    /* test MEM8(ecx + 0x70), 2 */ /* 0x150569A2: test byte ptr [ecx + 0x70], 2 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x70)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150569B6; /* 0x150569A6: jne 0x150569b6 */
L_150569A8:
    /* test MEM8(0x150BD32C), 1 */ /* 0x150569A8: test byte ptr [0x150bd32c], 1 */
    _flag_a = (uint32_t)(MEM8(0x150BD32C)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_150569B6; /* 0x150569AF: je 0x150569b6 */
L_150569B1:
    RECOMP_CALL(sub_15057225); /* 0x150569B1: call 0x15057225 */
    RECOMP_FLAGS_IN();
L_150569B6:
    eax = MEM32(eax + 0x4); /* 0x150569B6: mov eax, dword ptr [eax + 4] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150569B9: ret  */
    RECOMP_REGS_OUT();
}

void sub_150569C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150569C0u);

L_150569C0:
    RECOMP_CALL(sub_15068820); /* 0x150569C0: call 0x15068820 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x150569C5: mov ecx, eax */
    eax = MEM32(ecx + 0x6C); /* 0x150569C7: mov eax, dword ptr [ecx + 0x6c] */
    /* cmp eax, MEM32(0x150BC074) */ /* 0x150569CA: cmp eax, dword ptr [0x150bc074] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(0x150BC074));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150569E6; /* 0x150569D0: je 0x150569e6 */
L_150569D2:
    /* test MEM8(ecx + 0x70), 2 */ /* 0x150569D2: test byte ptr [ecx + 0x70], 2 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x70)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150569E6; /* 0x150569D6: jne 0x150569e6 */
L_150569D8:
    /* test MEM8(0x150BD32C), 1 */ /* 0x150569D8: test byte ptr [0x150bd32c], 1 */
    _flag_a = (uint32_t)(MEM8(0x150BD32C)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_150569E6; /* 0x150569DF: je 0x150569e6 */
L_150569E1:
    RECOMP_CALL(sub_15057225); /* 0x150569E1: call 0x15057225 */
    RECOMP_FLAGS_IN();
L_150569E6:
    eax = MEM32(eax + 0x8); /* 0x150569E6: mov eax, dword ptr [eax + 8] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150569E9: ret  */
    RECOMP_REGS_OUT();
}

void sub_150569F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150569F0u);

L_150569F0:
    RECOMP_CALL(sub_15068820); /* 0x150569F0: call 0x15068820 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x150569F5: mov ecx, eax */
    eax = MEM32(ecx + 0x6C); /* 0x150569F7: mov eax, dword ptr [ecx + 0x6c] */
    /* cmp eax, MEM32(0x150BC074) */ /* 0x150569FA: cmp eax, dword ptr [0x150bc074] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(0x150BC074));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15056A16; /* 0x15056A00: je 0x15056a16 */
L_15056A02:
    /* test MEM8(ecx + 0x70), 2 */ /* 0x15056A02: test byte ptr [ecx + 0x70], 2 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x70)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15056A16; /* 0x15056A06: jne 0x15056a16 */
L_15056A08:
    /* test MEM8(0x150BD32C), 1 */ /* 0x15056A08: test byte ptr [0x150bd32c], 1 */
    _flag_a = (uint32_t)(MEM8(0x150BD32C)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15056A16; /* 0x15056A0F: je 0x15056a16 */
L_15056A11:
    RECOMP_CALL(sub_15057225); /* 0x15056A11: call 0x15057225 */
    RECOMP_FLAGS_IN();
L_15056A16:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x15056A16: add eax, 0xc */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15056A19: ret  */
    RECOMP_REGS_OUT();
}

void sub_15056A20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15056A20u);

L_15056A20:
    RECOMP_CALL(sub_15068820); /* 0x15056A20: call 0x15068820 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x15056A25: mov ecx, eax */
    eax = MEM32(ecx + 0x6C); /* 0x15056A27: mov eax, dword ptr [ecx + 0x6c] */
    /* cmp eax, MEM32(0x150BC074) */ /* 0x15056A2A: cmp eax, dword ptr [0x150bc074] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(0x150BC074));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15056A46; /* 0x15056A30: je 0x15056a46 */
L_15056A32:
    /* test MEM8(ecx + 0x70), 2 */ /* 0x15056A32: test byte ptr [ecx + 0x70], 2 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x70)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15056A46; /* 0x15056A36: jne 0x15056a46 */
L_15056A38:
    /* test MEM8(0x150BD32C), 1 */ /* 0x15056A38: test byte ptr [0x150bd32c], 1 */
    _flag_a = (uint32_t)(MEM8(0x150BD32C)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15056A46; /* 0x15056A3F: je 0x15056a46 */
L_15056A41:
    RECOMP_CALL(sub_15057225); /* 0x15056A41: call 0x15057225 */
    RECOMP_FLAGS_IN();
L_15056A46:
    eax = MEM32(eax + 0xAC); /* 0x15056A46: mov eax, dword ptr [eax + 0xac] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15056A4C: ret  */
    RECOMP_REGS_OUT();
}

void sub_15056A60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15056A60u);

L_15056A60:
    edi = edi; /* 0x15056A60: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15056A62: push ebp */
    ebp = esp; /* 0x15056A63: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x40u; /* 0x15056A65: sub esp, 0x40 */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x15056A68: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x15056A6D: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x15056A6F: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x15056A72: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15056A73: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x15056A75: push esi */
    esi = MEM32(ebp + 0x8); /* 0x15056A76: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x15056A79: push edi */
    MEM32(ebp + (-0x2C)) = esi; /* 0x15056A7A: mov dword ptr [ebp - 0x2c], esi */
    edi = ebx; /* 0x15056A7D: mov edi, ebx */
    MEM32(ebp + (-0x28)) = ebx; /* 0x15056A7F: mov dword ptr [ebp - 0x28], ebx */
    MEM32(ebp + (-0x1C)) = ebx; /* 0x15056A82: mov dword ptr [ebp - 0x1c], ebx */
    MEM32(ebp + (-0x20)) = ebx; /* 0x15056A85: mov dword ptr [ebp - 0x20], ebx */
    MEM32(ebp + (-0x24)) = ebx; /* 0x15056A88: mov dword ptr [ebp - 0x24], ebx */
    MEM32(ebp + (-0x40)) = esi; /* 0x15056A8B: mov dword ptr [ebp - 0x40], esi */
    MEM32(ebp + (-0x3C)) = ebx; /* 0x15056A8E: mov dword ptr [ebp - 0x3c], ebx */
    /* cmp MEM32(esi + 0x14), ebx */ /* 0x15056A91: cmp dword ptr [esi + 0x14], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15056DA1; /* 0x15056A94: je 0x15056da1 */
L_15056A9A:
    eax = esi + 0x4; /* 0x15056A9A: lea eax, [esi + 4] */
    /* cmp MEM32(eax), ebx */ /* 0x15056A9D: cmp dword ptr [eax], ebx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15056AC1; /* 0x15056A9F: jne 0x15056ac1 */
L_15056AA1:
    PUSH32(esp, eax); /* 0x15056AA1: push eax */
    eax = (uint32_t)MEM16(esi + 0x30); /* 0x15056AA2: movzx eax, word ptr [esi + 0x30] */
    PUSH32(esp, 0x1004u); /* 0x15056AA6: push 0x1004 */
    PUSH32(esp, eax); /* 0x15056AAB: push eax */
    eax = ebp + (-0x40); /* 0x15056AAC: lea eax, [ebp - 0x40] */
    PUSH32(esp, ebx); /* 0x15056AAF: push ebx */
    PUSH32(esp, eax); /* 0x15056AB0: push eax */
    RECOMP_CALL(sub_1505ED02); /* 0x15056AB1: call 0x1505ed02 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15056AB6: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15056AB9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15056D70; /* 0x15056ABB: jne 0x15056d70 */
L_15056AC1:
    PUSH32(esp, 4); /* 0x15056AC1: push 4 */
    RECOMP_CALL(sub_15048F2F); /* 0x15056AC3: call 0x15048f2f */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 2); /* 0x15056AC8: push 2 */
    PUSH32(esp, 0x180u); /* 0x15056ACA: push 0x180 */
    MEM32(ebp + (-0x28)) = eax; /* 0x15056ACF: mov dword ptr [ebp - 0x28], eax */
    RECOMP_CALL(sub_15048EE2); /* 0x15056AD2: call 0x15048ee2 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x15056AD7: mov edi, eax */
    PUSH32(esp, 1); /* 0x15056AD9: push 1 */
    PUSH32(esp, 0x180u); /* 0x15056ADB: push 0x180 */
    MEM32(ebp + (-0x30)) = edi; /* 0x15056AE0: mov dword ptr [ebp - 0x30], edi */
    RECOMP_CALL(sub_15048EE2); /* 0x15056AE3: call 0x15048ee2 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 1); /* 0x15056AE8: push 1 */
    PUSH32(esp, 0x180u); /* 0x15056AEA: push 0x180 */
    MEM32(ebp + (-0x1C)) = eax; /* 0x15056AEF: mov dword ptr [ebp - 0x1c], eax */
    RECOMP_CALL(sub_15048EE2); /* 0x15056AF2: call 0x15048ee2 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 1); /* 0x15056AF7: push 1 */
    PUSH32(esp, 0x101u); /* 0x15056AF9: push 0x101 */
    MEM32(ebp + (-0x20)) = eax; /* 0x15056AFE: mov dword ptr [ebp - 0x20], eax */
    RECOMP_CALL(sub_15048EE2); /* 0x15056B01: call 0x15048ee2 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x15056B06: mov ecx, eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x24u; /* 0x15056B08: add esp, 0x24 */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x28)); /* 0x15056B0B: mov eax, dword ptr [ebp - 0x28] */
    MEM32(ebp + (-0x24)) = ecx; /* 0x15056B0E: mov dword ptr [ebp - 0x24], ecx */
    /* test eax, eax */ /* 0x15056B11: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15056D70; /* 0x15056B13: je 0x15056d70 */
L_15056B19:
    /* test edi, edi */ /* 0x15056B19: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15056D70; /* 0x15056B1B: je 0x15056d70 */
L_15056B21:
    /* test ecx, ecx */ /* 0x15056B21: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15056D70; /* 0x15056B23: je 0x15056d70 */
L_15056B29:
    /* cmp MEM32(ebp + (-0x1C)), ebx */ /* 0x15056B29: cmp dword ptr [ebp - 0x1c], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15056D70; /* 0x15056B2C: je 0x15056d70 */
L_15056B32:
    /* cmp MEM32(ebp + (-0x20)), ebx */ /* 0x15056B32: cmp dword ptr [ebp - 0x20], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15056D70; /* 0x15056B35: je 0x15056d70 */
L_15056B3B:
    MEM32(eax) = ebx; /* 0x15056B3B: mov dword ptr [eax], ebx */
    eax = ebx; /* 0x15056B3D: mov eax, ebx */
L_15056B3F:
    MEM8(eax + ecx) = (uint8_t)(LO8(eax)); /* 0x15056B3F: mov byte ptr [eax + ecx], al */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15056B42: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, 0x100u */ /* 0x15056B43: cmp eax, 0x100 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x100u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_15056B3F; /* 0x15056B48: jl 0x15056b3f */
L_15056B4A:
    eax = ebp + (-0x18); /* 0x15056B4A: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x15056B4D: push eax */
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x15056B4E: push dword ptr [esi + 4] */
    RECOMP_ICALL(MEM32(0x150C0194)); /* 0x15056B51: call dword ptr [0x150c0194] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15056B57: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15056D70; /* 0x15056B59: je 0x15056d70 */
L_15056B5F:
    eax = MEM32(ebp + (-0x18)); /* 0x15056B5F: mov eax, dword ptr [ebp - 0x18] */
    /* cmp eax, 5 */ /* 0x15056B62: cmp eax, 5 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_15056D70; /* 0x15056B65: ja 0x15056d70 */
L_15056B6B:
    edx = MEM32(ebp + (-0x24)); /* 0x15056B6B: mov edx, dword ptr [ebp - 0x24] */
    eax = (uint32_t)LO16(eax); /* 0x15056B6E: movzx eax, ax */
    MEM32(ebp + (-0x34)) = eax; /* 0x15056B71: mov dword ptr [ebp - 0x34], eax */
    /* cmp eax, 1 */ /* 0x15056B74: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_15056BA9; /* 0x15056B77: jbe 0x15056ba9 */
L_15056B79:
    ecx = ebp + (-0x12); /* 0x15056B79: lea ecx, [ebp - 0x12] */
    /* cmp MEM8(ebp + (-0x12)), LO8(ebx) */ /* 0x15056B7C: cmp byte ptr [ebp - 0x12], bl */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x12))) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15056BA9; /* 0x15056B7F: je 0x15056ba9 */
L_15056B81:
    SET_LO8(eax, MEM8(ecx + 0x1)); /* 0x15056B81: mov al, byte ptr [ecx + 1] */
    /* test LO8(eax), LO8(eax) */ /* 0x15056B84: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15056BA6; /* 0x15056B86: je 0x15056ba6 */
L_15056B88:
    esi = (uint32_t)MEM8(ecx); /* 0x15056B88: movzx esi, byte ptr [ecx] */
    eax = (uint32_t)LO8(eax); /* 0x15056B8B: movzx eax, al */
    /* cmp esi, eax */ /* 0x15056B8E: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_15056B9F; /* 0x15056B90: ja 0x15056b9f */
L_15056B92:
    MEM8(esi + edx) = (uint8_t)(0x20u); /* 0x15056B92: mov byte ptr [esi + edx], 0x20 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x15056B96: inc esi */
    _flag_k = FK_INC;
    eax = (uint32_t)MEM8(ecx + 0x1); /* 0x15056B97: movzx eax, byte ptr [ecx + 1] */
    /* cmp esi, eax */ /* 0x15056B9B: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_LE(_flag_a, _flag_b)) goto L_15056B92; /* 0x15056B9D: jle 0x15056b92 */
L_15056B9F:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x15056B9F: add ecx, 2 */
    _flag_k = FK_ADD;
    /* cmp MEM8(ecx), LO8(ebx) */ /* 0x15056BA2: cmp byte ptr [ecx], bl */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_15056B81; /* 0x15056BA4: jne 0x15056b81 */
L_15056BA6:
    esi = MEM32(ebp + (-0x2C)); /* 0x15056BA6: mov esi, dword ptr [ebp - 0x2c] */
L_15056BA9:
    PUSH32(esp, ebx); /* 0x15056BA9: push ebx */
    PUSH32(esp, ebx); /* 0x15056BAA: push ebx */
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x15056BAB: push dword ptr [esi + 4] */
    eax = edi + 0x100; /* 0x15056BAE: lea eax, [edi + 0x100] */
    PUSH32(esp, eax); /* 0x15056BB4: push eax */
    PUSH32(esp, 0x100u); /* 0x15056BB5: push 0x100 */
    PUSH32(esp, edx); /* 0x15056BBA: push edx */
    PUSH32(esp, 1); /* 0x15056BBB: push 1 */
    PUSH32(esp, ebx); /* 0x15056BBD: push ebx */
    RECOMP_CALL(sub_1505E653); /* 0x15056BBE: call 0x1505e653 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x15056BC3: add esp, 0x20 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15056BC6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15056D70; /* 0x15056BC8: je 0x15056d70 */
L_15056BCE:
    eax = MEM32(ebp + (-0x1C)); /* 0x15056BCE: mov eax, dword ptr [ebp - 0x1c] */
    edx = 0xFFu; /* 0x15056BD1: mov edx, 0xff */
    ecx = MEM32(ebp + (-0x24)); /* 0x15056BD6: mov ecx, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x81u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x81u; /* 0x15056BD9: add eax, 0x81 */
    _flag_k = FK_ADD;
    PUSH32(esp, ebx); /* 0x15056BDE: push ebx */
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x15056BDF: push dword ptr [esi + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15056BE2: inc ecx */
    _flag_k = FK_INC;
    PUSH32(esp, edx); /* 0x15056BE3: push edx */
    PUSH32(esp, eax); /* 0x15056BE4: push eax */
    PUSH32(esp, edx); /* 0x15056BE5: push edx */
    PUSH32(esp, ecx); /* 0x15056BE6: push ecx */
    PUSH32(esp, 0x100u); /* 0x15056BE7: push 0x100 */
    PUSH32(esp, MEM32(esi + 0x14)); /* 0x15056BEC: push dword ptr [esi + 0x14] */
    MEM32(ebp + (-0x38)) = ecx; /* 0x15056BEF: mov dword ptr [ebp - 0x38], ecx */
    PUSH32(esp, ebx); /* 0x15056BF2: push ebx */
    RECOMP_CALL(sub_15058910); /* 0x15056BF3: call 0x15058910 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x24u; /* 0x15056BF8: add esp, 0x24 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15056BFB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15056D70; /* 0x15056BFD: je 0x15056d70 */
L_15056C03:
    eax = MEM32(ebp + (-0x20)); /* 0x15056C03: mov eax, dword ptr [ebp - 0x20] */
    ecx = 0xFFu; /* 0x15056C06: mov ecx, 0xff */
    PUSH32(esp, ebx); /* 0x15056C0B: push ebx */
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x15056C0C: push dword ptr [esi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x81u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x81u; /* 0x15056C0F: add eax, 0x81 */
    _flag_k = FK_ADD;
    PUSH32(esp, ecx); /* 0x15056C14: push ecx */
    PUSH32(esp, eax); /* 0x15056C15: push eax */
    PUSH32(esp, ecx); /* 0x15056C16: push ecx */
    PUSH32(esp, MEM32(ebp + (-0x38))); /* 0x15056C17: push dword ptr [ebp - 0x38] */
    PUSH32(esp, 0x200u); /* 0x15056C1A: push 0x200 */
    PUSH32(esp, MEM32(esi + 0x14)); /* 0x15056C1F: push dword ptr [esi + 0x14] */
    PUSH32(esp, ebx); /* 0x15056C22: push ebx */
    RECOMP_CALL(sub_15058910); /* 0x15056C23: call 0x15058910 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x24u; /* 0x15056C28: add esp, 0x24 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15056C2B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15056D70; /* 0x15056C2D: je 0x15056d70 */
L_15056C33:
    edx = MEM32(ebp + (-0x30)); /* 0x15056C33: mov edx, dword ptr [ebp - 0x30] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15056C36: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x34)), 1 */ /* 0x15056C38: cmp dword ptr [ebp - 0x34], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x34))); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + (-0x1C)); /* 0x15056C3C: mov ecx, dword ptr [ebp - 0x1c] */
    MEM16(edx + 0xFE) = (uint16_t)(LO16(eax)); /* 0x15056C3F: mov word ptr [edx + 0xfe], ax */
    eax = MEM32(ebp + (-0x20)); /* 0x15056C46: mov eax, dword ptr [ebp - 0x20] */
    MEM8(ecx + 0x7F) = (uint8_t)(LO8(ebx)); /* 0x15056C49: mov byte ptr [ecx + 0x7f], bl */
    MEM8(eax + 0x7F) = (uint8_t)(LO8(ebx)); /* 0x15056C4C: mov byte ptr [eax + 0x7f], bl */
    MEM8(ecx + 0x80) = (uint8_t)(LO8(ebx)); /* 0x15056C4F: mov byte ptr [ecx + 0x80], bl */
    MEM8(eax + 0x80) = (uint8_t)(LO8(ebx)); /* 0x15056C55: mov byte ptr [eax + 0x80], bl */
    if (CMP_BE(_flag_a, _flag_b)) goto L_15056C9D; /* 0x15056C5B: jbe 0x15056c9d */
L_15056C5D:
    ecx = ebp + (-0x12); /* 0x15056C5D: lea ecx, [ebp - 0x12] */
    /* cmp MEM8(ebp + (-0x12)), LO8(ebx) */ /* 0x15056C60: cmp byte ptr [ebp - 0x12], bl */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x12))) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15056C9D; /* 0x15056C63: je 0x15056c9d */
L_15056C65:
    SET_LO8(eax, MEM8(ecx + 0x1)); /* 0x15056C65: mov al, byte ptr [ecx + 1] */
    /* test LO8(eax), LO8(eax) */ /* 0x15056C68: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15056C9A; /* 0x15056C6A: je 0x15056c9a */
L_15056C6C:
    esi = (uint32_t)MEM8(ecx); /* 0x15056C6C: movzx esi, byte ptr [ecx] */
    eax = (uint32_t)LO8(eax); /* 0x15056C6F: movzx eax, al */
    /* cmp esi, eax */ /* 0x15056C72: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_15056C93; /* 0x15056C74: ja 0x15056c93 */
L_15056C76:
    edi = edx + 0x100; /* 0x15056C76: lea edi, [edx + 0x100] */
    edi = edi + esi * 2; /* 0x15056C7C: lea edi, [edi + esi*2] */
L_15056C7F:
    eax = 0x8000u; /* 0x15056C7F: mov eax, 0x8000 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x15056C84: inc esi */
    _flag_k = FK_INC;
    MEM16(edi) = (uint16_t)(LO16(eax)); /* 0x15056C85: mov word ptr [edi], ax */
    edi = edi + 0x2; /* 0x15056C88: lea edi, [edi + 2] */
    eax = (uint32_t)MEM8(ecx + 0x1); /* 0x15056C8B: movzx eax, byte ptr [ecx + 1] */
    /* cmp esi, eax */ /* 0x15056C8F: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_LE(_flag_a, _flag_b)) goto L_15056C7F; /* 0x15056C91: jle 0x15056c7f */
L_15056C93:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x15056C93: add ecx, 2 */
    _flag_k = FK_ADD;
    /* cmp MEM8(ecx), LO8(ebx) */ /* 0x15056C96: cmp byte ptr [ecx], bl */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_15056C65; /* 0x15056C98: jne 0x15056c65 */
L_15056C9A:
    eax = MEM32(ebp + (-0x20)); /* 0x15056C9A: mov eax, dword ptr [ebp - 0x20] */
L_15056C9D:
    PUSH32(esp, 0x3Fu); /* 0x15056C9D: push 0x3f */
    ecx = POP32_VAL(esp); /* 0x15056C9F: pop ecx */
    esi = edx + 0x200; /* 0x15056CA0: lea esi, [edx + 0x200] */
    edi = edx; /* 0x15056CA6: mov edi, edx */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x15056CA8: rep movsd dword ptr es:[edi], dword ptr [esi] */
    PUSH32(esp, 0x1Fu); /* 0x15056CAA: push 0x1f */
    ecx = POP32_VAL(esp); /* 0x15056CAC: pop ecx */
    PUSH32(esp, 0x1Fu); /* 0x15056CAD: push 0x1f */
    MEM16(edi) = MEM16(esi); esi += _df * 2; edi += _df * 2; /* 0x15056CAF: movsw word ptr es:[edi], word ptr [esi] */
    edi = MEM32(ebp + (-0x1C)); /* 0x15056CB1: mov edi, dword ptr [ebp - 0x1c] */
    esi = edi + 0x100; /* 0x15056CB4: lea esi, [edi + 0x100] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x15056CBA: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = POP32_VAL(esp); /* 0x15056CBC: pop ecx */
    MEM16(edi) = MEM16(esi); esi += _df * 2; edi += _df * 2; /* 0x15056CBD: movsw word ptr es:[edi], word ptr [esi] */
    MEM8(edi) = MEM8(esi); esi += _df; edi += _df; /* 0x15056CBF: movsb byte ptr es:[edi], byte ptr [esi] */
    esi = eax + 0x100; /* 0x15056CC0: lea esi, [eax + 0x100] */
    edi = eax; /* 0x15056CC6: mov edi, eax */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x15056CC8: rep movsd dword ptr es:[edi], dword ptr [esi] */
    MEM16(edi) = MEM16(esi); esi += _df * 2; edi += _df * 2; /* 0x15056CCA: movsw word ptr es:[edi], word ptr [esi] */
    MEM8(edi) = MEM8(esi); esi += _df; edi += _df; /* 0x15056CCC: movsb byte ptr es:[edi], byte ptr [esi] */
    esi = MEM32(ebp + (-0x2C)); /* 0x15056CCD: mov esi, dword ptr [ebp - 0x2c] */
    ecx = MEM32(esi + 0xC0); /* 0x15056CD0: mov ecx, dword ptr [esi + 0xc0] */
    /* test ecx, ecx */ /* 0x15056CD6: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15056D26; /* 0x15056CD8: je 0x15056d26 */
L_15056CDA:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15056CDA: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(ecx), _sum = MEM32(ecx) + eax; eax = _old; MEM32(ecx) = _sum; } /* 0x15056CDD: lock xadd dword ptr [ecx], eax */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_15056D26; /* 0x15056CE1: jne 0x15056d26 */
L_15056CE3:
    eax = MEM32(esi + 0xC4); /* 0x15056CE3: mov eax, dword ptr [esi + 0xc4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0xFEu; /* 0x15056CE9: sub eax, 0xfe */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x15056CEE: push eax */
    RECOMP_CALL(sub_15048840); /* 0x15056CEF: call 0x15048840 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xCC); /* 0x15056CF4: mov eax, dword ptr [esi + 0xcc] */
    edi = 0x80u; /* 0x15056CFA: mov edi, 0x80 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x15056CFF: sub eax, edi */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x15056D01: push eax */
    RECOMP_CALL(sub_15048840); /* 0x15056D02: call 0x15048840 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xD0); /* 0x15056D07: mov eax, dword ptr [esi + 0xd0] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x15056D0D: sub eax, edi */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x15056D0F: push eax */
    RECOMP_CALL(sub_15048840); /* 0x15056D10: call 0x15048840 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0xC0)); /* 0x15056D15: push dword ptr [esi + 0xc0] */
    RECOMP_CALL(sub_15048840); /* 0x15056D1B: call 0x15048840 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x30)); /* 0x15056D20: mov edx, dword ptr [ebp - 0x30] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15056D23: add esp, 0x10 */
    _flag_k = FK_ADD;
L_15056D26:
    eax = MEM32(ebp + (-0x28)); /* 0x15056D26: mov eax, dword ptr [ebp - 0x28] */
    MEM32(eax) = 1; /* 0x15056D29: mov dword ptr [eax], 1 */
    MEM32(esi + 0xC0) = eax; /* 0x15056D2F: mov dword ptr [esi + 0xc0], eax */
    eax = edx + 0x100; /* 0x15056D35: lea eax, [edx + 0x100] */
    MEM32(esi + 0xC8) = eax; /* 0x15056D3B: mov dword ptr [esi + 0xc8], eax */
    eax = edx + 0xFE; /* 0x15056D41: lea eax, [edx + 0xfe] */
    MEM32(esi + 0xC4) = eax; /* 0x15056D47: mov dword ptr [esi + 0xc4], eax */
    eax = MEM32(ebp + (-0x1C)); /* 0x15056D4D: mov eax, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFF80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0xFFFFFF80u; /* 0x15056D50: sub eax, -0x80 */
    _flag_k = FK_CMP;
    MEM32(esi + 0xCC) = eax; /* 0x15056D53: mov dword ptr [esi + 0xcc], eax */
    eax = MEM32(ebp + (-0x20)); /* 0x15056D59: mov eax, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFF80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0xFFFFFF80u; /* 0x15056D5C: sub eax, -0x80 */
    _flag_k = FK_CMP;
    MEM32(esi + 0xD0) = eax; /* 0x15056D5F: mov dword ptr [esi + 0xd0], eax */
    eax = MEM32(ebp + (-0x34)); /* 0x15056D65: mov eax, dword ptr [ebp - 0x34] */
    MEM32(esi + 0xAC) = eax; /* 0x15056D68: mov dword ptr [esi + 0xac], eax */
    goto L_15056D94; /* 0x15056D6E: jmp 0x15056d94 */
L_15056D70:
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x15056D70: push dword ptr [ebp - 0x28] */
    RECOMP_CALL(sub_15048840); /* 0x15056D73: call 0x15048840 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x15056D78: push edi */
    RECOMP_CALL(sub_15048840); /* 0x15056D79: call 0x15048840 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x15056D7E: push dword ptr [ebp - 0x1c] */
    RECOMP_CALL(sub_15048840); /* 0x15056D81: call 0x15048840 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x15056D86: push dword ptr [ebp - 0x20] */
    RECOMP_CALL(sub_15048840); /* 0x15056D89: call 0x15048840 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15056D8E: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15056D90: add esp, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x15056D93: inc ebx */
    _flag_k = FK_INC;
L_15056D94:
    PUSH32(esp, MEM32(ebp + (-0x24))); /* 0x15056D94: push dword ptr [ebp - 0x24] */
    RECOMP_CALL(sub_15048840); /* 0x15056D97: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15056D9C: pop ecx */
    eax = ebx; /* 0x15056D9D: mov eax, ebx */
    goto L_15056DE4; /* 0x15056D9F: jmp 0x15056de4 */
L_15056DA1:
    eax = MEM32(esi + 0xC0); /* 0x15056DA1: mov eax, dword ptr [esi + 0xc0] */
    /* test eax, eax */ /* 0x15056DA7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15056DAE; /* 0x15056DA9: je 0x15056dae */
L_15056DAB:
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(1);
    MEM32(eax) = MEM32(eax) - 1; /* 0x15056DAB: lock dec dword ptr [eax] */
    _flag_k = FK_DEC;
L_15056DAE:
    MEM32(esi + 0xC0) = ebx; /* 0x15056DAE: mov dword ptr [esi + 0xc0], ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15056DB4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0xC4) = ebx; /* 0x15056DB6: mov dword ptr [esi + 0xc4], ebx */
    MEM32(esi + 0xC8) = 0x150053F0u; /* 0x15056DBC: mov dword ptr [esi + 0xc8], 0x150053f0 */
    MEM32(esi + 0xCC) = 0x15005878u; /* 0x15056DC6: mov dword ptr [esi + 0xcc], 0x15005878 */
    MEM32(esi + 0xD0) = 0x150059F8u; /* 0x15056DD0: mov dword ptr [esi + 0xd0], 0x150059f8 */
    MEM32(esi + 0xAC) = 1; /* 0x15056DDA: mov dword ptr [esi + 0xac], 1 */
L_15056DE4:
    ecx = MEM32(ebp + (-0x4)); /* 0x15056DE4: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x15056DE7: pop edi */
    esi = POP32_VAL(esp); /* 0x15056DE8: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x15056DE9: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x15056DEB: pop ebx */
    RECOMP_CALL(sub_1505E540); /* 0x15056DEC: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15056DF1: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15056DF2: ret  */
    RECOMP_REGS_OUT();
}

void sub_15056E00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15056E00u);

L_15056E00:
    eax = MEM32(0x150BECC4); /* 0x15056E00: mov eax, dword ptr [0x150becc4] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15056E05: ret  */
    RECOMP_REGS_OUT();
}

void sub_15056E10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15056E10u);

L_15056E10:
    eax = 0x150BECC0u; /* 0x15056E10: mov eax, 0x150becc0 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15056E15: ret  */
    RECOMP_REGS_OUT();
}

void sub_15056E1C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15056E1Cu);

L_15056E1C:
    edi = edi; /* 0x15056E1C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15056E1E: push ebp */
    ebp = esp; /* 0x15056E1F: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x15056E21: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(1);
    MEM32(eax) = MEM32(eax) + 1; /* 0x15056E24: lock inc dword ptr [eax] */
    _flag_k = FK_INC;
    ecx = MEM32(eax + 0xB0); /* 0x15056E27: mov ecx, dword ptr [eax + 0xb0] */
    /* test ecx, ecx */ /* 0x15056E2D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15056E34; /* 0x15056E2F: je 0x15056e34 */
L_15056E31:
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(1);
    MEM32(ecx) = MEM32(ecx) + 1; /* 0x15056E31: lock inc dword ptr [ecx] */
    _flag_k = FK_INC;
L_15056E34:
    ecx = MEM32(eax + 0xB8); /* 0x15056E34: mov ecx, dword ptr [eax + 0xb8] */
    /* test ecx, ecx */ /* 0x15056E3A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15056E41; /* 0x15056E3C: je 0x15056e41 */
L_15056E3E:
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(1);
    MEM32(ecx) = MEM32(ecx) + 1; /* 0x15056E3E: lock inc dword ptr [ecx] */
    _flag_k = FK_INC;
L_15056E41:
    ecx = MEM32(eax + 0xB4); /* 0x15056E41: mov ecx, dword ptr [eax + 0xb4] */
    /* test ecx, ecx */ /* 0x15056E47: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15056E4E; /* 0x15056E49: je 0x15056e4e */
L_15056E4B:
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(1);
    MEM32(ecx) = MEM32(ecx) + 1; /* 0x15056E4B: lock inc dword ptr [ecx] */
    _flag_k = FK_INC;
L_15056E4E:
    ecx = MEM32(eax + 0xC0); /* 0x15056E4E: mov ecx, dword ptr [eax + 0xc0] */
    /* test ecx, ecx */ /* 0x15056E54: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15056E5B; /* 0x15056E56: je 0x15056e5b */
L_15056E58:
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(1);
    MEM32(ecx) = MEM32(ecx) + 1; /* 0x15056E58: lock inc dword ptr [ecx] */
    _flag_k = FK_INC;
L_15056E5B:
    PUSH32(esp, esi); /* 0x15056E5B: push esi */
    PUSH32(esp, 6); /* 0x15056E5C: push 6 */
    ecx = eax + 0x50; /* 0x15056E5E: lea ecx, [eax + 0x50] */
    esi = POP32_VAL(esp); /* 0x15056E61: pop esi */
L_15056E62:
    /* cmp MEM32(ecx + (-0x8)), 0x150052E8u */ /* 0x15056E62: cmp dword ptr [ecx - 8], 0x150052e8 */
    _flag_a = (uint32_t)(MEM32(ecx + (-0x8))); _flag_b = (uint32_t)(0x150052E8u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15056E74; /* 0x15056E69: je 0x15056e74 */
L_15056E6B:
    edx = MEM32(ecx); /* 0x15056E6B: mov edx, dword ptr [ecx] */
    /* test edx, edx */ /* 0x15056E6D: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15056E74; /* 0x15056E6F: je 0x15056e74 */
L_15056E71:
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(1);
    MEM32(edx) = MEM32(edx) + 1; /* 0x15056E71: lock inc dword ptr [edx] */
    _flag_k = FK_INC;
L_15056E74:
    /* cmp MEM32(ecx + (-0x4)), 0 */ /* 0x15056E74: cmp dword ptr [ecx - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15056E84; /* 0x15056E78: je 0x15056e84 */
L_15056E7A:
    edx = MEM32(ecx + 0x4); /* 0x15056E7A: mov edx, dword ptr [ecx + 4] */
    /* test edx, edx */ /* 0x15056E7D: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15056E84; /* 0x15056E7F: je 0x15056e84 */
L_15056E81:
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(1);
    MEM32(edx) = MEM32(edx) + 1; /* 0x15056E81: lock inc dword ptr [edx] */
    _flag_k = FK_INC;
L_15056E84:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x10u; /* 0x15056E84: add ecx, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 1; /* 0x15056E87: sub esi, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_15056E62; /* 0x15056E8A: jne 0x15056e62 */
L_15056E8C:
    eax = MEM32(eax + 0xD4); /* 0x15056E8C: mov eax, dword ptr [eax + 0xd4] */
    esi = POP32_VAL(esp); /* 0x15056E92: pop esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xB4u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xB4u; /* 0x15056E93: add eax, 0xb4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(1);
    MEM32(eax) = MEM32(eax) + 1; /* 0x15056E98: lock inc dword ptr [eax] */
    _flag_k = FK_INC;
    ebp = POP32_VAL(esp); /* 0x15056E9B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15056E9C: ret  */
    RECOMP_REGS_OUT();
}

void sub_15056EA3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15056EA3u);

L_15056EA3:
    edi = edi; /* 0x15056EA3: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15056EA5: push ebp */
    ebp = esp; /* 0x15056EA6: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x15056EA8: push ebx */
    PUSH32(esp, esi); /* 0x15056EA9: push esi */
    esi = MEM32(ebp + 0x8); /* 0x15056EAA: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15056EAD: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x15056EAF: push edi */
    eax = MEM32(esi + 0xBC); /* 0x15056EB0: mov eax, dword ptr [esi + 0xbc] */
    /* test eax, eax */ /* 0x15056EB6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15056F29; /* 0x15056EB8: je 0x15056f29 */
L_15056EBA:
    /* cmp eax, 0x150BC178u */ /* 0x15056EBA: cmp eax, 0x150bc178 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x150BC178u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15056F29; /* 0x15056EBF: je 0x15056f29 */
L_15056EC1:
    eax = MEM32(esi + 0xB0); /* 0x15056EC1: mov eax, dword ptr [esi + 0xb0] */
    /* test eax, eax */ /* 0x15056EC7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15056F29; /* 0x15056EC9: je 0x15056f29 */
L_15056ECB:
    /* cmp MEM32(eax), ebx */ /* 0x15056ECB: cmp dword ptr [eax], ebx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15056F29; /* 0x15056ECD: jne 0x15056f29 */
L_15056ECF:
    eax = MEM32(esi + 0xB8); /* 0x15056ECF: mov eax, dword ptr [esi + 0xb8] */
    /* test eax, eax */ /* 0x15056ED5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15056EF0; /* 0x15056ED7: je 0x15056ef0 */
L_15056ED9:
    /* cmp MEM32(eax), ebx */ /* 0x15056ED9: cmp dword ptr [eax], ebx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15056EF0; /* 0x15056EDB: jne 0x15056ef0 */
L_15056EDD:
    PUSH32(esp, eax); /* 0x15056EDD: push eax */
    RECOMP_CALL(sub_15048840); /* 0x15056EDE: call 0x15048840 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0xBC)); /* 0x15056EE3: push dword ptr [esi + 0xbc] */
    RECOMP_CALL(sub_1505EED2); /* 0x15056EE9: call 0x1505eed2 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15056EEE: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15056EEF: pop ecx */
L_15056EF0:
    eax = MEM32(esi + 0xB4); /* 0x15056EF0: mov eax, dword ptr [esi + 0xb4] */
    /* test eax, eax */ /* 0x15056EF6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15056F11; /* 0x15056EF8: je 0x15056f11 */
L_15056EFA:
    /* cmp MEM32(eax), ebx */ /* 0x15056EFA: cmp dword ptr [eax], ebx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15056F11; /* 0x15056EFC: jne 0x15056f11 */
L_15056EFE:
    PUSH32(esp, eax); /* 0x15056EFE: push eax */
    RECOMP_CALL(sub_15048840); /* 0x15056EFF: call 0x15048840 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0xBC)); /* 0x15056F04: push dword ptr [esi + 0xbc] */
    RECOMP_CALL(sub_1505F329); /* 0x15056F0A: call 0x1505f329 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15056F0F: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15056F10: pop ecx */
L_15056F11:
    PUSH32(esp, MEM32(esi + 0xB0)); /* 0x15056F11: push dword ptr [esi + 0xb0] */
    RECOMP_CALL(sub_15048840); /* 0x15056F17: call 0x15048840 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0xBC)); /* 0x15056F1C: push dword ptr [esi + 0xbc] */
    RECOMP_CALL(sub_15048840); /* 0x15056F22: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15056F27: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15056F28: pop ecx */
L_15056F29:
    eax = MEM32(esi + 0xC0); /* 0x15056F29: mov eax, dword ptr [esi + 0xc0] */
    /* test eax, eax */ /* 0x15056F2F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15056F77; /* 0x15056F31: je 0x15056f77 */
L_15056F33:
    /* cmp MEM32(eax), ebx */ /* 0x15056F33: cmp dword ptr [eax], ebx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15056F77; /* 0x15056F35: jne 0x15056f77 */
L_15056F37:
    eax = MEM32(esi + 0xC4); /* 0x15056F37: mov eax, dword ptr [esi + 0xc4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0xFEu; /* 0x15056F3D: sub eax, 0xfe */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x15056F42: push eax */
    RECOMP_CALL(sub_15048840); /* 0x15056F43: call 0x15048840 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xCC); /* 0x15056F48: mov eax, dword ptr [esi + 0xcc] */
    edi = 0x80u; /* 0x15056F4E: mov edi, 0x80 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x15056F53: sub eax, edi */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x15056F55: push eax */
    RECOMP_CALL(sub_15048840); /* 0x15056F56: call 0x15048840 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xD0); /* 0x15056F5B: mov eax, dword ptr [esi + 0xd0] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x15056F61: sub eax, edi */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x15056F63: push eax */
    RECOMP_CALL(sub_15048840); /* 0x15056F64: call 0x15048840 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0xC0)); /* 0x15056F69: push dword ptr [esi + 0xc0] */
    RECOMP_CALL(sub_15048840); /* 0x15056F6F: call 0x15048840 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15056F74: add esp, 0x10 */
    _flag_k = FK_ADD;
L_15056F77:
    eax = MEM32(esi + 0xD4); /* 0x15056F77: mov eax, dword ptr [esi + 0xd4] */
    /* cmp eax, 0x150BC888u */ /* 0x15056F7D: cmp eax, 0x150bc888 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x150BC888u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15056F9F; /* 0x15056F82: je 0x15056f9f */
L_15056F84:
    /* cmp MEM32(eax + 0xB4), ebx */ /* 0x15056F84: cmp dword ptr [eax + 0xb4], ebx */
    _flag_a = (uint32_t)(MEM32(eax + 0xB4)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15056F9F; /* 0x15056F8A: jne 0x15056f9f */
L_15056F8C:
    PUSH32(esp, eax); /* 0x15056F8C: push eax */
    RECOMP_CALL(sub_1505F598); /* 0x15056F8D: call 0x1505f598 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0xD4)); /* 0x15056F92: push dword ptr [esi + 0xd4] */
    RECOMP_CALL(sub_15048840); /* 0x15056F98: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15056F9D: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15056F9E: pop ecx */
L_15056F9F:
    PUSH32(esp, 6); /* 0x15056F9F: push 6 */
    edi = esi + 0x50; /* 0x15056FA1: lea edi, [esi + 0x50] */
    ebx = POP32_VAL(esp); /* 0x15056FA4: pop ebx */
L_15056FA5:
    /* cmp MEM32(edi + (-0x8)), 0x150052E8u */ /* 0x15056FA5: cmp dword ptr [edi - 8], 0x150052e8 */
    _flag_a = (uint32_t)(MEM32(edi + (-0x8))); _flag_b = (uint32_t)(0x150052E8u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15056FC0; /* 0x15056FAC: je 0x15056fc0 */
L_15056FAE:
    eax = MEM32(edi); /* 0x15056FAE: mov eax, dword ptr [edi] */
    /* test eax, eax */ /* 0x15056FB0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15056FC0; /* 0x15056FB2: je 0x15056fc0 */
L_15056FB4:
    /* cmp MEM32(eax), 0 */ /* 0x15056FB4: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15056FC0; /* 0x15056FB7: jne 0x15056fc0 */
L_15056FB9:
    PUSH32(esp, eax); /* 0x15056FB9: push eax */
    RECOMP_CALL(sub_15048840); /* 0x15056FBA: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15056FBF: pop ecx */
L_15056FC0:
    /* cmp MEM32(edi + (-0x4)), 0 */ /* 0x15056FC0: cmp dword ptr [edi - 4], 0 */
    _flag_a = (uint32_t)(MEM32(edi + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15056FD9; /* 0x15056FC4: je 0x15056fd9 */
L_15056FC6:
    eax = MEM32(edi + 0x4); /* 0x15056FC6: mov eax, dword ptr [edi + 4] */
    /* test eax, eax */ /* 0x15056FC9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15056FD9; /* 0x15056FCB: je 0x15056fd9 */
L_15056FCD:
    /* cmp MEM32(eax), 0 */ /* 0x15056FCD: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15056FD9; /* 0x15056FD0: jne 0x15056fd9 */
L_15056FD2:
    PUSH32(esp, eax); /* 0x15056FD2: push eax */
    RECOMP_CALL(sub_15048840); /* 0x15056FD3: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15056FD8: pop ecx */
L_15056FD9:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x10u; /* 0x15056FD9: add edi, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - 1; /* 0x15056FDC: sub ebx, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_15056FA5; /* 0x15056FDF: jne 0x15056fa5 */
L_15056FE1:
    PUSH32(esp, esi); /* 0x15056FE1: push esi */
    RECOMP_CALL(sub_15048840); /* 0x15056FE2: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15056FE7: pop ecx */
    edi = POP32_VAL(esp); /* 0x15056FE8: pop edi */
    esi = POP32_VAL(esp); /* 0x15056FE9: pop esi */
    ebx = POP32_VAL(esp); /* 0x15056FEA: pop ebx */
    ebp = POP32_VAL(esp); /* 0x15056FEB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15056FEC: ret  */
    RECOMP_REGS_OUT();
}

void sub_15056FF3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15056FF3u);

L_15056FF3:
    edi = edi; /* 0x15056FF3: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15056FF5: push ebp */
    ebp = esp; /* 0x15056FF6: mov ebp, esp */
    PUSH32(esp, esi); /* 0x15056FF8: push esi */
    esi = MEM32(ebp + 0x10); /* 0x15056FF9: mov esi, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x15056FFC: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15056FFD: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15057000: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1508E640); /* 0x15057003: call 0x1508e640 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15057008: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1505700B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505701E; /* 0x1505700D: je 0x1505701e */
L_1505700F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1505700F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15057011: push eax */
    PUSH32(esp, eax); /* 0x15057012: push eax */
    PUSH32(esp, eax); /* 0x15057013: push eax */
    PUSH32(esp, eax); /* 0x15057014: push eax */
    PUSH32(esp, eax); /* 0x15057015: push eax */
    RECOMP_CALL(sub_1505A11B); /* 0x15057016: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505701B: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1505701E:
    eax = esi + 0x40; /* 0x1505701E: lea eax, [esi + 0x40] */
    /* cmp MEM8(eax), 0 */ /* 0x15057021: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505703C; /* 0x15057024: je 0x1505703c */
L_15057026:
    PUSH32(esp, eax); /* 0x15057026: push eax */
    PUSH32(esp, 0x150052E0u); /* 0x15057027: push 0x150052e0 */
    PUSH32(esp, 2); /* 0x1505702C: push 2 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1505702E: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15057031: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15057F64); /* 0x15057034: call 0x15057f64 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15057039: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1505703C:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFF80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 0xFFFFFF80u; /* 0x1505703C: sub esi, -0x80 */
    _flag_k = FK_CMP;
    /* cmp MEM8(esi), 0 */ /* 0x1505703F: cmp byte ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505705A; /* 0x15057042: je 0x1505705a */
L_15057044:
    PUSH32(esp, esi); /* 0x15057044: push esi */
    PUSH32(esp, 0x150052E4u); /* 0x15057045: push 0x150052e4 */
    PUSH32(esp, 2); /* 0x1505704A: push 2 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1505704C: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1505704F: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15057F64); /* 0x15057052: call 0x15057f64 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15057057: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1505705A:
    esi = POP32_VAL(esp); /* 0x1505705A: pop esi */
    ebp = POP32_VAL(esp); /* 0x1505705B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505705C: ret  */
    RECOMP_REGS_OUT();
}

void sub_15057063(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15057063u);

L_15057063:
    edi = edi; /* 0x15057063: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15057065: push ebp */
    ebp = esp; /* 0x15057066: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x15057068: push ecx */
    PUSH32(esp, ecx); /* 0x15057069: push ecx */
    PUSH32(esp, ebx); /* 0x1505706A: push ebx */
    PUSH32(esp, esi); /* 0x1505706B: push esi */
    PUSH32(esp, edi); /* 0x1505706C: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1505706D: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15057070: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x90u); /* 0x15057072: push 0x90 */
    PUSH32(esp, ebx); /* 0x15057077: push ebx */
    PUSH32(esp, edi); /* 0x15057078: push edi */
    RECOMP_CALL(sub_1508E3D0); /* 0x15057079: call 0x1508e3d0 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0xC); /* 0x1505707E: mov esi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15057081: add esp, 0xc */
    _flag_k = FK_ADD;
    SET_LO8(eax, MEM8(esi)); /* 0x15057084: mov al, byte ptr [esi] */
    /* test LO8(eax), LO8(eax) */ /* 0x15057086: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15057091; /* 0x15057088: jne 0x15057091 */
L_1505708A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1505708A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1505718E; /* 0x1505708C: jmp 0x1505718e */
L_15057091:
    /* cmp LO8(eax), 0x2Eu */ /* 0x15057091: cmp al, 0x2e */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x2Eu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_150570C9; /* 0x15057093: jne 0x150570c9 */
L_15057095:
    eax = esi + 0x1; /* 0x15057095: lea eax, [esi + 1] */
    /* cmp MEM8(eax), LO8(ebx) */ /* 0x15057098: cmp byte ptr [eax], bl */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150570C9; /* 0x1505709A: je 0x150570c9 */
L_1505709C:
    PUSH32(esp, 0xFu); /* 0x1505709C: push 0xf */
    PUSH32(esp, eax); /* 0x1505709E: push eax */
    eax = edi + 0x80; /* 0x1505709F: lea eax, [edi + 0x80] */
    PUSH32(esp, 0x10u); /* 0x150570A5: push 0x10 */
    PUSH32(esp, eax); /* 0x150570A7: push eax */
    RECOMP_CALL(sub_1508EBC0); /* 0x150570A8: call 0x1508ebc0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x150570AD: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x150570B0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150570C1; /* 0x150570B2: je 0x150570c1 */
L_150570B4:
    PUSH32(esp, ebx); /* 0x150570B4: push ebx */
    PUSH32(esp, ebx); /* 0x150570B5: push ebx */
    PUSH32(esp, ebx); /* 0x150570B6: push ebx */
    PUSH32(esp, ebx); /* 0x150570B7: push ebx */
    PUSH32(esp, ebx); /* 0x150570B8: push ebx */
    RECOMP_CALL(sub_1505A11B); /* 0x150570B9: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150570BE: add esp, 0x14 */
    _flag_k = FK_ADD;
L_150570C1:
    MEM8(edi + 0x8F) = (uint8_t)(LO8(ebx)); /* 0x150570C1: mov byte ptr [edi + 0x8f], bl */
    RECOMP_BACKEDGE();
    goto L_1505708A; /* 0x150570C7: jmp 0x1505708a */
L_150570C9:
    MEM32(ebp + (-0x4)) = ebx; /* 0x150570C9: mov dword ptr [ebp - 4], ebx */
    goto L_15057176; /* 0x150570CC: jmp 0x15057176 */
L_150570D1:
    ecx = eax + esi; /* 0x150570D1: lea ecx, [eax + esi] */
    SET_LO8(ebx, MEM8(ecx)); /* 0x150570D4: mov bl, byte ptr [ecx] */
    MEM32(ebp + (-0x8)) = ecx; /* 0x150570D6: mov dword ptr [ebp - 8], ecx */
    ecx = MEM32(ebp + (-0x4)); /* 0x150570D9: mov ecx, dword ptr [ebp - 4] */
    /* test ecx, ecx */ /* 0x150570DC: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505710C; /* 0x150570DE: jne 0x1505710c */
L_150570E0:
    /* cmp eax, 0x40u */ /* 0x150570E0: cmp eax, 0x40 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1505718B; /* 0x150570E3: jae 0x1505718b */
L_150570E9:
    /* cmp LO8(ebx), 0x2Eu */ /* 0x150570E9: cmp bl, 0x2e */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x2Eu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505718B; /* 0x150570EC: je 0x1505718b */
L_150570F2:
    PUSH32(esp, eax); /* 0x150570F2: push eax */
    PUSH32(esp, esi); /* 0x150570F3: push esi */
    PUSH32(esp, 0x40u); /* 0x150570F4: push 0x40 */
    PUSH32(esp, edi); /* 0x150570F6: push edi */
L_150570F7:
    RECOMP_CALL(sub_1508EBC0); /* 0x150570F7: call 0x1508ebc0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x150570FC: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x150570FF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505715E; /* 0x15057101: je 0x1505715e */
L_15057103:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15057103: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x15057105: push esi */
    PUSH32(esp, esi); /* 0x15057106: push esi */
    PUSH32(esp, esi); /* 0x15057107: push esi */
    PUSH32(esp, esi); /* 0x15057108: push esi */
    PUSH32(esp, esi); /* 0x15057109: push esi */
    goto L_15057156; /* 0x1505710A: jmp 0x15057156 */
L_1505710C:
    /* cmp ecx, 1 */ /* 0x1505710C: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15057125; /* 0x1505710F: jne 0x15057125 */
L_15057111:
    /* cmp eax, 0x40u */ /* 0x15057111: cmp eax, 0x40 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1505718B; /* 0x15057114: jae 0x1505718b */
L_15057116:
    /* cmp LO8(ebx), 0x5Fu */ /* 0x15057116: cmp bl, 0x5f */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x5Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505718B; /* 0x15057119: je 0x1505718b */
L_1505711B:
    PUSH32(esp, eax); /* 0x1505711B: push eax */
    PUSH32(esp, esi); /* 0x1505711C: push esi */
    PUSH32(esp, 0x40u); /* 0x1505711D: push 0x40 */
    eax = edi + 0x40; /* 0x1505711F: lea eax, [edi + 0x40] */
    PUSH32(esp, eax); /* 0x15057122: push eax */
    RECOMP_BACKEDGE();
    goto L_150570F7; /* 0x15057123: jmp 0x150570f7 */
L_15057125:
    /* cmp ecx, 2 */ /* 0x15057125: cmp ecx, 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505718B; /* 0x15057128: jne 0x1505718b */
L_1505712A:
    /* cmp eax, 0x10u */ /* 0x1505712A: cmp eax, 0x10 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1505718B; /* 0x1505712D: jae 0x1505718b */
L_1505712F:
    /* test LO8(ebx), LO8(ebx) */ /* 0x1505712F: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15057138; /* 0x15057131: je 0x15057138 */
L_15057133:
    /* cmp LO8(ebx), 0x2Cu */ /* 0x15057133: cmp bl, 0x2c */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x2Cu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505718B; /* 0x15057136: jne 0x1505718b */
L_15057138:
    PUSH32(esp, eax); /* 0x15057138: push eax */
    PUSH32(esp, esi); /* 0x15057139: push esi */
    eax = edi + 0x80; /* 0x1505713A: lea eax, [edi + 0x80] */
    PUSH32(esp, 0x10u); /* 0x15057140: push 0x10 */
    PUSH32(esp, eax); /* 0x15057142: push eax */
    RECOMP_CALL(sub_1508EBC0); /* 0x15057143: call 0x1508ebc0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15057148: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1505714B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505715E; /* 0x1505714D: je 0x1505715e */
L_1505714F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1505714F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15057151: push eax */
    PUSH32(esp, eax); /* 0x15057152: push eax */
    PUSH32(esp, eax); /* 0x15057153: push eax */
    PUSH32(esp, eax); /* 0x15057154: push eax */
    PUSH32(esp, eax); /* 0x15057155: push eax */
L_15057156:
    RECOMP_CALL(sub_1505A11B); /* 0x15057156: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505715B: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1505715E:
    /* cmp LO8(ebx), 0x2Cu */ /* 0x1505715E: cmp bl, 0x2c */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x2Cu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505708A; /* 0x15057161: je 0x1505708a */
L_15057167:
    /* test LO8(ebx), LO8(ebx) */ /* 0x15057167: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505708A; /* 0x15057169: je 0x1505708a */
L_1505716F:
    esi = MEM32(ebp + (-0x8)); /* 0x1505716F: mov esi, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x15057172: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 1; /* 0x15057173: inc dword ptr [ebp - 4] */
    _flag_k = FK_INC;
L_15057176:
    PUSH32(esp, 0x150052DCu); /* 0x15057176: push 0x150052dc */
    PUSH32(esp, esi); /* 0x1505717B: push esi */
    RECOMP_CALL(sub_1508E6C0); /* 0x1505717C: call 0x1508e6c0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15057181: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15057182: pop ecx */
    /* test eax, eax */ /* 0x15057183: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150570D1; /* 0x15057185: jne 0x150570d1 */
L_1505718B:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1505718B: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1505718E:
    edi = POP32_VAL(esp); /* 0x1505718E: pop edi */
    esi = POP32_VAL(esp); /* 0x1505718F: pop esi */
    ebx = POP32_VAL(esp); /* 0x15057190: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15057191: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15057192: ret  */
    RECOMP_REGS_OUT();
}

void sub_15057199(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15057199u);

L_15057199:
    edi = edi; /* 0x15057199: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1505719B: push ebp */
    ebp = esp; /* 0x1505719C: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1505719E: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x150571A1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505721D; /* 0x150571A3: je 0x1505721d */
L_150571A5:
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(1);
    MEM32(eax) = MEM32(eax) - 1; /* 0x150571A5: lock dec dword ptr [eax] */
    _flag_k = FK_DEC;
    ecx = MEM32(eax + 0xB0); /* 0x150571A8: mov ecx, dword ptr [eax + 0xb0] */
    /* test ecx, ecx */ /* 0x150571AE: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150571B5; /* 0x150571B0: je 0x150571b5 */
L_150571B2:
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(1);
    MEM32(ecx) = MEM32(ecx) - 1; /* 0x150571B2: lock dec dword ptr [ecx] */
    _flag_k = FK_DEC;
L_150571B5:
    ecx = MEM32(eax + 0xB8); /* 0x150571B5: mov ecx, dword ptr [eax + 0xb8] */
    /* test ecx, ecx */ /* 0x150571BB: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150571C2; /* 0x150571BD: je 0x150571c2 */
L_150571BF:
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(1);
    MEM32(ecx) = MEM32(ecx) - 1; /* 0x150571BF: lock dec dword ptr [ecx] */
    _flag_k = FK_DEC;
L_150571C2:
    ecx = MEM32(eax + 0xB4); /* 0x150571C2: mov ecx, dword ptr [eax + 0xb4] */
    /* test ecx, ecx */ /* 0x150571C8: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150571CF; /* 0x150571CA: je 0x150571cf */
L_150571CC:
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(1);
    MEM32(ecx) = MEM32(ecx) - 1; /* 0x150571CC: lock dec dword ptr [ecx] */
    _flag_k = FK_DEC;
L_150571CF:
    ecx = MEM32(eax + 0xC0); /* 0x150571CF: mov ecx, dword ptr [eax + 0xc0] */
    /* test ecx, ecx */ /* 0x150571D5: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150571DC; /* 0x150571D7: je 0x150571dc */
L_150571D9:
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(1);
    MEM32(ecx) = MEM32(ecx) - 1; /* 0x150571D9: lock dec dword ptr [ecx] */
    _flag_k = FK_DEC;
L_150571DC:
    PUSH32(esp, esi); /* 0x150571DC: push esi */
    PUSH32(esp, 6); /* 0x150571DD: push 6 */
    ecx = eax + 0x50; /* 0x150571DF: lea ecx, [eax + 0x50] */
    esi = POP32_VAL(esp); /* 0x150571E2: pop esi */
L_150571E3:
    /* cmp MEM32(ecx + (-0x8)), 0x150052E8u */ /* 0x150571E3: cmp dword ptr [ecx - 8], 0x150052e8 */
    _flag_a = (uint32_t)(MEM32(ecx + (-0x8))); _flag_b = (uint32_t)(0x150052E8u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150571F5; /* 0x150571EA: je 0x150571f5 */
L_150571EC:
    edx = MEM32(ecx); /* 0x150571EC: mov edx, dword ptr [ecx] */
    /* test edx, edx */ /* 0x150571EE: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150571F5; /* 0x150571F0: je 0x150571f5 */
L_150571F2:
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(1);
    MEM32(edx) = MEM32(edx) - 1; /* 0x150571F2: lock dec dword ptr [edx] */
    _flag_k = FK_DEC;
L_150571F5:
    /* cmp MEM32(ecx + (-0x4)), 0 */ /* 0x150571F5: cmp dword ptr [ecx - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15057205; /* 0x150571F9: je 0x15057205 */
L_150571FB:
    edx = MEM32(ecx + 0x4); /* 0x150571FB: mov edx, dword ptr [ecx + 4] */
    /* test edx, edx */ /* 0x150571FE: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15057205; /* 0x15057200: je 0x15057205 */
L_15057202:
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(1);
    MEM32(edx) = MEM32(edx) - 1; /* 0x15057202: lock dec dword ptr [edx] */
    _flag_k = FK_DEC;
L_15057205:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x10u; /* 0x15057205: add ecx, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 1; /* 0x15057208: sub esi, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_150571E3; /* 0x1505720B: jne 0x150571e3 */
L_1505720D:
    ecx = MEM32(eax + 0xD4); /* 0x1505720D: mov ecx, dword ptr [eax + 0xd4] */
    esi = POP32_VAL(esp); /* 0x15057213: pop esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xB4u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xB4u; /* 0x15057214: add ecx, 0xb4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(1);
    MEM32(ecx) = MEM32(ecx) - 1; /* 0x1505721A: lock dec dword ptr [ecx] */
    _flag_k = FK_DEC;
L_1505721D:
    ebp = POP32_VAL(esp); /* 0x1505721D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505721E: ret  */
    RECOMP_REGS_OUT();
}

void sub_15057225(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15057225u);

L_15057225:
    PUSH32(esp, 0xCu); /* 0x15057225: push 0xc */
    PUSH32(esp, 0x150B0A80u); /* 0x15057227: push 0x150b0a80 */
    RECOMP_CALL(sub_1505E988); /* 0x1505722C: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) & 0; /* 0x15057231: and dword ptr [ebp - 0x1c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_15068820); /* 0x15057235: call 0x15068820 */
    RECOMP_FLAGS_IN();
    /* test MEM8(eax + 0x70), 2 */ /* 0x1505723A: test byte ptr [eax + 0x70], 2 */
    _flag_a = (uint32_t)(MEM8(eax + 0x70)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505724E; /* 0x1505723E: jne 0x1505724e */
L_15057240:
    /* test MEM8(0x150BD32C), 1 */ /* 0x15057240: test byte ptr [0x150bd32c], 1 */
    _flag_a = (uint32_t)(MEM8(0x150BD32C)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505724E; /* 0x15057247: je 0x1505724e */
L_15057249:
    esi = eax + 0x6C; /* 0x15057249: lea esi, [eax + 0x6c] */
    goto L_15057256; /* 0x1505724C: jmp 0x15057256 */
L_1505724E:
    esi = eax + 0x6C; /* 0x1505724E: lea esi, [eax + 0x6c] */
    /* cmp MEM32(esi), 0 */ /* 0x15057251: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505728F; /* 0x15057254: jne 0x1505728f */
L_15057256:
    PUSH32(esp, 0xCu); /* 0x15057256: push 0xc */
    RECOMP_CALL(sub_15068D80); /* 0x15057258: call 0x15068d80 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505725D: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1505725E: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(0x150BC074)); /* 0x15057262: push dword ptr [0x150bc074] */
    PUSH32(esp, esi); /* 0x15057268: push esi */
    RECOMP_CALL(sub_15057FAC); /* 0x15057269: call 0x15057fac */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505726E: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1505726F: pop ecx */
    esi = eax; /* 0x15057270: mov esi, eax */
    MEM32(ebp + (-0x1C)) = esi; /* 0x15057272: mov dword ptr [ebp - 0x1c], esi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x15057275: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_15057286); /* 0x1505727C: call 0x15057286 */
    RECOMP_FLAGS_IN();
    goto L_15057297; /* 0x15057281: jmp 0x15057297 */
L_1505728F:
    RECOMP_CALL(sub_15068820); /* 0x1505728F: call 0x15068820 */
    RECOMP_FLAGS_IN();
    esi = MEM32(eax + 0x6C); /* 0x15057294: mov esi, dword ptr [eax + 0x6c] */
L_15057297:
    /* test esi, esi */ /* 0x15057297: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150572A3; /* 0x15057299: jne 0x150572a3 */
L_1505729B:
    PUSH32(esp, 0x20u); /* 0x1505729B: push 0x20 */
    RECOMP_CALL(sub_15068070); /* 0x1505729D: call 0x15068070 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150572A2: pop ecx */
L_150572A3:
    eax = esi; /* 0x150572A3: mov eax, esi */
    ecx = MEM32(ebp + (-0x10)); /* 0x150572A5: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x150572A8: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x150572AF: pop ecx */
    edi = POP32_VAL(esp); /* 0x150572B0: pop edi */
    esi = POP32_VAL(esp); /* 0x150572B1: pop esi */
    ebx = POP32_VAL(esp); /* 0x150572B2: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x150572B3: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150572B4: ret  */
    RECOMP_REGS_OUT();
}

void sub_15057286(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15057286u);

L_15057286:
    PUSH32(esp, 0xCu); /* 0x15057286: push 0xc */
    RECOMP_CALL(sub_15068F50); /* 0x15057288: call 0x15068f50 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505728D: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505728E: ret  */
    RECOMP_REGS_OUT();
}

void sub_150572BB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150572BBu);

L_150572BB:
    edi = edi; /* 0x150572BB: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150572BD: push ebp */
    ebp = esp; /* 0x150572BE: mov ebp, esp */
    PUSH32(esp, esi); /* 0x150572C0: push esi */
    esi = MEM32(ebp + 0xC); /* 0x150572C1: mov esi, dword ptr [ebp + 0xc] */
    /* test esi, esi */ /* 0x150572C4: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150572E6; /* 0x150572C6: je 0x150572e6 */
L_150572C8:
    eax = MEM32(ebp + 0x8); /* 0x150572C8: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x150572CB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150572E6; /* 0x150572CD: je 0x150572e6 */
L_150572CF:
    /* cmp eax, esi */ /* 0x150572CF: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150572E6; /* 0x150572D1: je 0x150572e6 */
L_150572D3:
    PUSH32(esp, edi); /* 0x150572D3: push edi */
    PUSH32(esp, 0x36u); /* 0x150572D4: push 0x36 */
    ecx = POP32_VAL(esp); /* 0x150572D6: pop ecx */
    edi = eax; /* 0x150572D7: mov edi, eax */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x150572D9: rep movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x150572DB: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x150572DE: push eax */
    RECOMP_CALL(sub_15056E1C); /* 0x150572DF: call 0x15056e1c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150572E4: pop ecx */
    edi = POP32_VAL(esp); /* 0x150572E5: pop edi */
L_150572E6:
    esi = POP32_VAL(esp); /* 0x150572E6: pop esi */
    ebp = POP32_VAL(esp); /* 0x150572E7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150572E8: ret  */
    RECOMP_REGS_OUT();
}

void sub_150572F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150572F0u);

L_150572F0:
    edi = edi; /* 0x150572F0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150572F2: push ebp */
    ebp = esp; /* 0x150572F3: mov ebp, esp */
    /* cmp MEM32(ebp + 0x8), 5 */ /* 0x150572F5: cmp dword ptr [ebp + 8], 5 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x150572F9: push esi */
    PUSH32(esp, edi); /* 0x150572FA: push edi */
    if (CMP_A(_flag_a, _flag_b)) goto L_15057321; /* 0x150572FB: ja 0x15057321 */
L_150572FD:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x150572FD: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15057321; /* 0x15057301: je 0x15057321 */
L_15057303:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x15057303: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x15057305: inc edi */
    _flag_k = FK_INC;
    PUSH32(esp, edi); /* 0x15057306: push edi */
    PUSH32(esp, 8); /* 0x15057307: push 8 */
    RECOMP_CALL(sub_15048EE2); /* 0x15057309: call 0x15048ee2 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1505730E: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x15057310: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15057311: pop ecx */
    /* test esi, esi */ /* 0x15057312: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15057327; /* 0x15057314: jne 0x15057327 */
L_15057316:
    RECOMP_CALL(sub_15036430); /* 0x15057316: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xCu; /* 0x1505731B: mov dword ptr [eax], 0xc */
L_15057321:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15057321: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_15057323:
    edi = POP32_VAL(esp); /* 0x15057323: pop edi */
    esi = POP32_VAL(esp); /* 0x15057324: pop esi */
    ebp = POP32_VAL(esp); /* 0x15057325: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15057326: ret  */
L_15057327:
    PUSH32(esp, edi); /* 0x15057327: push edi */
    PUSH32(esp, 0xD8u); /* 0x15057328: push 0xd8 */
    RECOMP_CALL(sub_15048EE2); /* 0x1505732D: call 0x15048ee2 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = eax; /* 0x15057332: mov dword ptr [esi], eax */
    ecx = POP32_VAL(esp); /* 0x15057334: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15057335: pop ecx */
    /* test eax, eax */ /* 0x15057336: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15057343; /* 0x15057338: jne 0x15057343 */
L_1505733A:
    PUSH32(esp, esi); /* 0x1505733A: push esi */
    RECOMP_CALL(sub_15048840); /* 0x1505733B: call 0x15048840 */
    RECOMP_FLAGS_IN();
L_15057340:
    ecx = POP32_VAL(esp); /* 0x15057340: pop ecx */
    RECOMP_BACKEDGE();
    goto L_15057316; /* 0x15057341: jmp 0x15057316 */
L_15057343:
    PUSH32(esp, edi); /* 0x15057343: push edi */
    PUSH32(esp, 0x220u); /* 0x15057344: push 0x220 */
    RECOMP_CALL(sub_15048EE2); /* 0x15057349: call 0x15048ee2 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x4) = eax; /* 0x1505734E: mov dword ptr [esi + 4], eax */
    ecx = POP32_VAL(esp); /* 0x15057351: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15057352: pop ecx */
    /* test eax, eax */ /* 0x15057353: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15057367; /* 0x15057355: jne 0x15057367 */
L_15057357:
    PUSH32(esp, MEM32(esi)); /* 0x15057357: push dword ptr [esi] */
    RECOMP_CALL(sub_15048840); /* 0x15057359: call 0x15048840 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1505735E: push esi */
    RECOMP_CALL(sub_15048840); /* 0x1505735F: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15057364: pop ecx */
    RECOMP_BACKEDGE();
    goto L_15057340; /* 0x15057365: jmp 0x15057340 */
L_15057367:
    PUSH32(esp, 0x150BC078u); /* 0x15057367: push 0x150bc078 */
    PUSH32(esp, MEM32(esi)); /* 0x1505736C: push dword ptr [esi] */
    RECOMP_CALL(sub_150572BB); /* 0x1505736E: call 0x150572bb */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15057373: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15057376: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(esi)); /* 0x15057379: push dword ptr [esi] */
    RECOMP_CALL(sub_1505797F); /* 0x1505737B: call 0x1505797f */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15057380: add esp, 0x14 */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x15057383: push dword ptr [esi + 4] */
    /* test eax, eax */ /* 0x15057386: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505739E; /* 0x15057388: je 0x1505739e */
L_1505738A:
    eax = MEM32(esi); /* 0x1505738A: mov eax, dword ptr [esi] */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x1505738C: push dword ptr [eax + 4] */
    RECOMP_CALL(sub_15050098); /* 0x1505738F: call 0x15050098 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15057394: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15057395: pop ecx */
    ecx = MEM32(esi + 0x4); /* 0x15057396: mov ecx, dword ptr [esi + 4] */
    /* test eax, eax */ /* 0x15057399: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150573BE; /* 0x1505739B: je 0x150573be */
L_1505739D:
    PUSH32(esp, ecx); /* 0x1505739D: push ecx */
L_1505739E:
    RECOMP_CALL(sub_15048840); /* 0x1505739E: call 0x15048840 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi)); /* 0x150573A3: push dword ptr [esi] */
    RECOMP_CALL(sub_15057199); /* 0x150573A5: call 0x15057199 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi)); /* 0x150573AA: push dword ptr [esi] */
    RECOMP_CALL(sub_15056EA3); /* 0x150573AC: call 0x15056ea3 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x150573B1: push esi */
    RECOMP_CALL(sub_15048840); /* 0x150573B2: call 0x15048840 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x150573B7: add esp, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x150573BA: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_150573C5; /* 0x150573BC: jmp 0x150573c5 */
L_150573BE:
    MEM32(ecx) = edi; /* 0x150573BE: mov dword ptr [ecx], edi */
    eax = MEM32(esi + 0x4); /* 0x150573C0: mov eax, dword ptr [esi + 4] */
    MEM32(eax) = edi; /* 0x150573C3: mov dword ptr [eax], edi */
L_150573C5:
    eax = esi; /* 0x150573C5: mov eax, esi */
    RECOMP_BACKEDGE();
    goto L_15057323; /* 0x150573C7: jmp 0x15057323 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_150573D2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150573D2u);

L_150573D2:
    edi = edi; /* 0x150573D2: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150573D4: push ebp */
    ebp = esp; /* 0x150573D5: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xB0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xB0u; /* 0x150573D7: sub esp, 0xb0 */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x150573DD: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x150573E2: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x150573E4: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x18); /* 0x150573E7: mov eax, dword ptr [ebp + 0x18] */
    PUSH32(esp, ebx); /* 0x150573EA: push ebx */
    ebx = MEM32(ebp + 0x14); /* 0x150573EB: mov ebx, dword ptr [ebp + 0x14] */
    PUSH32(esp, esi); /* 0x150573EE: push esi */
    esi = MEM32(ebp + 0xC); /* 0x150573EF: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x150573F2: push edi */
    edi = MEM32(ebp + 0x8); /* 0x150573F3: mov edi, dword ptr [ebp + 8] */
    MEM32(ebp + (-0xAC)) = esi; /* 0x150573F6: mov dword ptr [ebp - 0xac], esi */
    MEM32(ebp + (-0xA0)) = eax; /* 0x150573FC: mov dword ptr [ebp - 0xa0], eax */
    RECOMP_CALL(sub_15068820); /* 0x15057402: call 0x15068820 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0xA4)) = eax; /* 0x15057407: mov dword ptr [ebp - 0xa4], eax */
    ecx = eax + 0xBC; /* 0x1505740D: lea ecx, [eax + 0xbc] */
    MEM32(ebp + (-0x98)) = ecx; /* 0x15057413: mov dword ptr [ebp - 0x98], ecx */
    ecx = eax + 0xC8; /* 0x15057419: lea ecx, [eax + 0xc8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x14Bu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x14Bu; /* 0x1505741F: add eax, 0x14b */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x9C)) = ecx; /* 0x15057424: mov dword ptr [ebp - 0x9c], ecx */
    MEM32(ebp + (-0xA8)) = eax; /* 0x1505742A: mov dword ptr [ebp - 0xa8], eax */
    /* test edi, edi */ /* 0x15057430: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15057625; /* 0x15057432: je 0x15057625 */
L_15057438:
    /* test esi, esi */ /* 0x15057438: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15057625; /* 0x1505743A: je 0x15057625 */
L_15057440:
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x15057440: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15057625; /* 0x15057444: je 0x15057625 */
L_1505744A:
    /* cmp MEM8(edi), 0x43u */ /* 0x1505744A: cmp byte ptr [edi], 0x43 */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(0x43u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505749C; /* 0x1505744D: jne 0x1505749c */
L_1505744F:
    /* cmp MEM8(edi + 0x1), 0 */ /* 0x1505744F: cmp byte ptr [edi + 1], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x1)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505749C; /* 0x15057453: jne 0x1505749c */
L_15057455:
    PUSH32(esp, 0x150052D8u); /* 0x15057455: push 0x150052d8 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1505745A: push dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x1505745D: push esi */
    RECOMP_CALL(sub_1508E640); /* 0x1505745E: call 0x1508e640 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15057463: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15057466: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x15057468: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15057479; /* 0x1505746A: je 0x15057479 */
L_1505746C:
    PUSH32(esp, esi); /* 0x1505746C: push esi */
    PUSH32(esp, esi); /* 0x1505746D: push esi */
    PUSH32(esp, esi); /* 0x1505746E: push esi */
    PUSH32(esp, esi); /* 0x1505746F: push esi */
    PUSH32(esp, esi); /* 0x15057470: push esi */
    RECOMP_CALL(sub_1505A11B); /* 0x15057471: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15057476: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15057479:
    /* test ebx, ebx */ /* 0x15057479: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15057485; /* 0x1505747B: je 0x15057485 */
L_1505747D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1505747D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebx) = eax; /* 0x1505747F: mov dword ptr [ebx], eax */
    MEM16(ebx + 0x4) = (uint16_t)(LO16(eax)); /* 0x15057481: mov word ptr [ebx + 4], ax */
L_15057485:
    eax = MEM32(ebp + (-0xA0)); /* 0x15057485: mov eax, dword ptr [ebp - 0xa0] */
    /* test eax, eax */ /* 0x1505748B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15057491; /* 0x1505748D: je 0x15057491 */
L_1505748F:
    MEM32(eax) = esi; /* 0x1505748F: mov dword ptr [eax], esi */
L_15057491:
    eax = MEM32(ebp + (-0xAC)); /* 0x15057491: mov eax, dword ptr [ebp - 0xac] */
    goto L_15057627; /* 0x15057497: jmp 0x15057627 */
L_1505749C:
    ecx = edi; /* 0x1505749C: mov ecx, edi */
    edx = ecx + 0x1; /* 0x1505749E: lea edx, [ecx + 1] */
L_150574A1:
    SET_LO8(eax, MEM8(ecx)); /* 0x150574A1: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x150574A3: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x150574A4: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150574A1; /* 0x150574A6: jne 0x150574a1 */
L_150574A8:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x150574A8: sub ecx, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x150574AA: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xB0)) = ecx; /* 0x150574AC: mov dword ptr [ebp - 0xb0], ecx */
    /* cmp ecx, 0x83u */ /* 0x150574B2: cmp ecx, 0x83 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x83u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_15057524; /* 0x150574B8: jae 0x15057524 */
L_150574BA:
    eax = MEM32(ebp + (-0xA8)); /* 0x150574BA: mov eax, dword ptr [ebp - 0xa8] */
    ecx = edi; /* 0x150574C0: mov ecx, edi */
L_150574C2:
    SET_LO8(edx, MEM8(eax)); /* 0x150574C2: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x150574C4: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_150574E2; /* 0x150574C6: jne 0x150574e2 */
L_150574C8:
    /* test LO8(edx), LO8(edx) */ /* 0x150574C8: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_150574DE; /* 0x150574CA: je 0x150574de */
L_150574CC:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x150574CC: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x150574CF: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_150574E2; /* 0x150574D2: jne 0x150574e2 */
L_150574D4:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x150574D4: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x150574D7: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x150574DA: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150574C2; /* 0x150574DC: jne 0x150574c2 */
L_150574DE:
    eax = esi; /* 0x150574DE: mov eax, esi */
    goto L_150574E7; /* 0x150574E0: jmp 0x150574e7 */
L_150574E2:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x150574E2: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)((eax | 1)); _flag_b = (uint32_t)((eax | 1));
    eax = eax | 1; /* 0x150574E4: or eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_150574E7:
    /* test eax, eax */ /* 0x150574E7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150575CA; /* 0x150574E9: je 0x150575ca */
L_150574EF:
    eax = MEM32(ebp + (-0x9C)); /* 0x150574EF: mov eax, dword ptr [ebp - 0x9c] */
    ecx = edi; /* 0x150574F5: mov ecx, edi */
L_150574F7:
    SET_LO8(edx, MEM8(eax)); /* 0x150574F7: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x150574F9: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_15057517; /* 0x150574FB: jne 0x15057517 */
L_150574FD:
    /* test LO8(edx), LO8(edx) */ /* 0x150574FD: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15057513; /* 0x150574FF: je 0x15057513 */
L_15057501:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x15057501: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x15057504: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_15057517; /* 0x15057507: jne 0x15057517 */
L_15057509:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x15057509: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x1505750C: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x1505750F: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150574F7; /* 0x15057511: jne 0x150574f7 */
L_15057513:
    eax = esi; /* 0x15057513: mov eax, esi */
    goto L_1505751C; /* 0x15057515: jmp 0x1505751c */
L_15057517:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x15057517: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)((eax | 1)); _flag_b = (uint32_t)((eax | 1));
    eax = eax | 1; /* 0x15057519: or eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1505751C:
    /* test eax, eax */ /* 0x1505751C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150575CA; /* 0x1505751E: je 0x150575ca */
L_15057524:
    eax = ebp + (-0x94); /* 0x15057524: lea eax, [ebp - 0x94] */
    PUSH32(esp, edi); /* 0x1505752A: push edi */
    PUSH32(esp, eax); /* 0x1505752B: push eax */
    RECOMP_CALL(sub_15057063); /* 0x1505752C: call 0x15057063 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15057531: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15057532: pop ecx */
    /* test eax, eax */ /* 0x15057533: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15057625; /* 0x15057535: jne 0x15057625 */
L_1505753B:
    eax = ebp + (-0x94); /* 0x1505753B: lea eax, [ebp - 0x94] */
    PUSH32(esp, eax); /* 0x15057541: push eax */
    PUSH32(esp, MEM32(ebp + (-0x98))); /* 0x15057542: push dword ptr [ebp - 0x98] */
    PUSH32(esp, eax); /* 0x15057548: push eax */
    RECOMP_CALL(sub_15060A5B); /* 0x15057549: call 0x15060a5b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1505754E: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15057551: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15057625; /* 0x15057553: je 0x15057625 */
L_15057559:
    eax = MEM32(ebp + (-0x98)); /* 0x15057559: mov eax, dword ptr [ebp - 0x98] */
    ecx = MEM32(ebp + (-0xA4)); /* 0x1505755F: mov ecx, dword ptr [ebp - 0xa4] */
    eax = (uint32_t)MEM16(eax + 0x4); /* 0x15057565: movzx eax, word ptr [eax + 4] */
    MEM32(ecx + 0xC4) = eax; /* 0x15057569: mov dword ptr [ecx + 0xc4], eax */
    eax = ebp + (-0x94); /* 0x1505756F: lea eax, [ebp - 0x94] */
    PUSH32(esp, eax); /* 0x15057575: push eax */
    eax = ecx + 0x14B; /* 0x15057576: lea eax, [ecx + 0x14b] */
    PUSH32(esp, 0x83u); /* 0x1505757C: push 0x83 */
    PUSH32(esp, eax); /* 0x15057581: push eax */
    RECOMP_CALL(sub_15056FF3); /* 0x15057582: call 0x15056ff3 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15057587: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp MEM8(edi), 0 */ /* 0x1505758A: cmp byte ptr [edi], 0 */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505759C; /* 0x1505758D: je 0x1505759c */
L_1505758F:
    eax = MEM32(ebp + (-0xB0)); /* 0x1505758F: mov eax, dword ptr [ebp - 0xb0] */
    /* cmp eax, 0x83u */ /* 0x15057595: cmp eax, 0x83 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x83u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_150575A3; /* 0x1505759A: jb 0x150575a3 */
L_1505759C:
    edi = 0x15003C90u; /* 0x1505759C: mov edi, 0x15003c90 */
    eax = esi; /* 0x150575A1: mov eax, esi */
L_150575A3:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x150575A3: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x150575A4: push eax */
    PUSH32(esp, edi); /* 0x150575A5: push edi */
    PUSH32(esp, 0x83u); /* 0x150575A6: push 0x83 */
    PUSH32(esp, MEM32(ebp + (-0x9C))); /* 0x150575AB: push dword ptr [ebp - 0x9c] */
    RECOMP_CALL(sub_1508EBC0); /* 0x150575B1: call 0x1508ebc0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x150575B6: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x150575B9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150575CA; /* 0x150575BB: je 0x150575ca */
L_150575BD:
    PUSH32(esp, esi); /* 0x150575BD: push esi */
    PUSH32(esp, esi); /* 0x150575BE: push esi */
    PUSH32(esp, esi); /* 0x150575BF: push esi */
    PUSH32(esp, esi); /* 0x150575C0: push esi */
    PUSH32(esp, esi); /* 0x150575C1: push esi */
    RECOMP_CALL(sub_1505A11B); /* 0x150575C2: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150575C7: add esp, 0x14 */
    _flag_k = FK_ADD;
L_150575CA:
    /* test ebx, ebx */ /* 0x150575CA: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150575E0; /* 0x150575CC: je 0x150575e0 */
L_150575CE:
    ecx = MEM32(ebp + (-0x98)); /* 0x150575CE: mov ecx, dword ptr [ebp - 0x98] */
    eax = MEM32(ecx); /* 0x150575D4: mov eax, dword ptr [ecx] */
    MEM32(ebx) = eax; /* 0x150575D6: mov dword ptr [ebx], eax */
    SET_LO16(eax, MEM16(ecx + 0x4)); /* 0x150575D8: mov ax, word ptr [ecx + 4] */
    MEM16(ebx + 0x4) = (uint16_t)(LO16(eax)); /* 0x150575DC: mov word ptr [ebx + 4], ax */
L_150575E0:
    ecx = MEM32(ebp + (-0xA0)); /* 0x150575E0: mov ecx, dword ptr [ebp - 0xa0] */
    /* test ecx, ecx */ /* 0x150575E6: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150575F8; /* 0x150575E8: je 0x150575f8 */
L_150575EA:
    eax = MEM32(ebp + (-0xA4)); /* 0x150575EA: mov eax, dword ptr [ebp - 0xa4] */
    eax = MEM32(eax + 0xC4); /* 0x150575F0: mov eax, dword ptr [eax + 0xc4] */
    MEM32(ecx) = eax; /* 0x150575F6: mov dword ptr [ecx], eax */
L_150575F8:
    ebx = MEM32(ebp + (-0xA8)); /* 0x150575F8: mov ebx, dword ptr [ebp - 0xa8] */
    PUSH32(esp, ebx); /* 0x150575FE: push ebx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x150575FF: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + (-0xAC))); /* 0x15057602: push dword ptr [ebp - 0xac] */
    RECOMP_CALL(sub_1508E640); /* 0x15057608: call 0x1508e640 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1505760D: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15057610: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15057621; /* 0x15057612: je 0x15057621 */
L_15057614:
    PUSH32(esp, esi); /* 0x15057614: push esi */
    PUSH32(esp, esi); /* 0x15057615: push esi */
    PUSH32(esp, esi); /* 0x15057616: push esi */
    PUSH32(esp, esi); /* 0x15057617: push esi */
    PUSH32(esp, esi); /* 0x15057618: push esi */
    RECOMP_CALL(sub_1505A11B); /* 0x15057619: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505761E: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15057621:
    eax = ebx; /* 0x15057621: mov eax, ebx */
    goto L_15057627; /* 0x15057623: jmp 0x15057627 */
L_15057625:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15057625: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_15057627:
    ecx = MEM32(ebp + (-0x4)); /* 0x15057627: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x1505762A: pop edi */
    esi = POP32_VAL(esp); /* 0x1505762B: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1505762C: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1505762E: pop ebx */
    RECOMP_CALL(sub_1505E540); /* 0x1505762F: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15057634: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15057635: ret  */
    RECOMP_REGS_OUT();
}

void sub_15057640(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15057640u);

L_15057640:
    PUSH32(esp, 8); /* 0x15057640: push 8 */
    PUSH32(esp, 0x150B0A58u); /* 0x15057642: push 0x150b0a58 */
    RECOMP_CALL(sub_1505E988); /* 0x15057647: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0x8); /* 0x1505764C: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x1505764F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150576E3; /* 0x15057651: je 0x150576e3 */
L_15057657:
    PUSH32(esp, 0xDu); /* 0x15057657: push 0xd */
    RECOMP_CALL(sub_15068D80); /* 0x15057659: call 0x15068d80 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505765E: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1505765F: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(esi + 0x4); /* 0x15057663: mov ecx, dword ptr [esi + 4] */
    /* test ecx, ecx */ /* 0x15057666: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15057685; /* 0x15057668: je 0x15057685 */
L_1505766A:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1505766A: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(ecx), _sum = MEM32(ecx) + eax; eax = _old; MEM32(ecx) = _sum; } /* 0x1505766D: lock xadd dword ptr [ecx], eax */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_15057685; /* 0x15057671: jne 0x15057685 */
L_15057673:
    /* cmp MEM32(esi + 0x4), 0x150BD0E0u */ /* 0x15057673: cmp dword ptr [esi + 4], 0x150bd0e0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0x150BD0E0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15057685; /* 0x1505767A: je 0x15057685 */
L_1505767C:
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x1505767C: push dword ptr [esi + 4] */
    RECOMP_CALL(sub_15048840); /* 0x1505767F: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15057684: pop ecx */
L_15057685:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x15057685: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_150576F6); /* 0x1505768C: call 0x150576f6 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(esi), 0 */ /* 0x15057691: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150576D2; /* 0x15057694: je 0x150576d2 */
L_15057696:
    PUSH32(esp, 0xCu); /* 0x15057696: push 0xc */
    RECOMP_CALL(sub_15068D80); /* 0x15057698: call 0x15068d80 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505769D: pop ecx */
    MEM32(ebp + (-0x4)) = 1; /* 0x1505769E: mov dword ptr [ebp - 4], 1 */
    PUSH32(esp, MEM32(esi)); /* 0x150576A5: push dword ptr [esi] */
    RECOMP_CALL(sub_15057199); /* 0x150576A7: call 0x15057199 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150576AC: pop ecx */
    eax = MEM32(esi); /* 0x150576AD: mov eax, dword ptr [esi] */
    /* test eax, eax */ /* 0x150576AF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150576C6; /* 0x150576B1: je 0x150576c6 */
L_150576B3:
    /* cmp MEM32(eax), 0 */ /* 0x150576B3: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150576C6; /* 0x150576B6: jne 0x150576c6 */
L_150576B8:
    /* cmp eax, 0x150BC078u */ /* 0x150576B8: cmp eax, 0x150bc078 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x150BC078u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150576C6; /* 0x150576BD: je 0x150576c6 */
L_150576BF:
    PUSH32(esp, eax); /* 0x150576BF: push eax */
    RECOMP_CALL(sub_15056EA3); /* 0x150576C0: call 0x15056ea3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150576C5: pop ecx */
L_150576C6:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x150576C6: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_15057702); /* 0x150576CD: call 0x15057702 */
    RECOMP_FLAGS_IN();
L_150576D2:
    eax = 0xBAADF00Du; /* 0x150576D2: mov eax, 0xbaadf00d */
    MEM32(esi) = eax; /* 0x150576D7: mov dword ptr [esi], eax */
    MEM32(esi + 0x4) = eax; /* 0x150576D9: mov dword ptr [esi + 4], eax */
    PUSH32(esp, esi); /* 0x150576DC: push esi */
    RECOMP_CALL(sub_15048840); /* 0x150576DD: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150576E2: pop ecx */
L_150576E3:
    ecx = MEM32(ebp + (-0x10)); /* 0x150576E3: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x150576E6: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x150576ED: pop ecx */
    edi = POP32_VAL(esp); /* 0x150576EE: pop edi */
    esi = POP32_VAL(esp); /* 0x150576EF: pop esi */
    ebx = POP32_VAL(esp); /* 0x150576F0: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x150576F1: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150576F2: ret  */
    RECOMP_REGS_OUT();
}

void sub_150576F6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150576F6u);

L_150576F6:
    PUSH32(esp, 0xDu); /* 0x150576F6: push 0xd */
    RECOMP_CALL(sub_15068F50); /* 0x150576F8: call 0x15068f50 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150576FD: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150576FE: ret  */
    RECOMP_REGS_OUT();
}

void sub_15057702(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15057702u);

L_15057702:
    PUSH32(esp, 0xCu); /* 0x15057702: push 0xc */
    RECOMP_CALL(sub_15068F50); /* 0x15057704: call 0x15068f50 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15057709: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505770A: ret  */
    RECOMP_REGS_OUT();
}

void sub_15057720(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15057720u);

L_15057720:
    PUSH32(esp, 0x10u); /* 0x15057720: push 0x10 */
    PUSH32(esp, 0x150B0A30u); /* 0x15057722: push 0x150b0a30 */
    RECOMP_CALL(sub_1505E988); /* 0x15057727: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_15068820); /* 0x1505772C: call 0x15068820 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x15057731: mov ebx, eax */
    PUSH32(esp, 1); /* 0x15057733: push 1 */
    PUSH32(esp, 8); /* 0x15057735: push 8 */
    RECOMP_CALL(sub_15048EE2); /* 0x15057737: call 0x15048ee2 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505773C: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1505773D: pop ecx */
    esi = eax; /* 0x1505773E: mov esi, eax */
    MEM32(ebp + (-0x1C)) = esi; /* 0x15057740: mov dword ptr [ebp - 0x1c], esi */
    /* test esi, esi */ /* 0x15057743: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15057756; /* 0x15057745: jne 0x15057756 */
L_15057747:
    RECOMP_CALL(sub_15036430); /* 0x15057747: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0xCu; /* 0x1505774C: mov dword ptr [eax], 0xc */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15057752: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_150577B2; /* 0x15057754: jmp 0x150577b2 */
L_15057756:
    RECOMP_CALL(sub_15057225); /* 0x15057756: call 0x15057225 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_1504FDF6); /* 0x1505775B: call 0x1504fdf6 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0x6C); /* 0x15057760: mov eax, dword ptr [ebx + 0x6c] */
    MEM32(esi) = eax; /* 0x15057763: mov dword ptr [esi], eax */
    edi = esi + 0x4; /* 0x15057765: lea edi, [esi + 4] */
    MEM32(ebp + (-0x20)) = edi; /* 0x15057768: mov dword ptr [ebp - 0x20], edi */
    eax = MEM32(ebx + 0x68); /* 0x1505776B: mov eax, dword ptr [ebx + 0x68] */
    MEM32(edi) = eax; /* 0x1505776E: mov dword ptr [edi], eax */
    PUSH32(esp, 0xCu); /* 0x15057770: push 0xc */
    RECOMP_CALL(sub_15068D80); /* 0x15057772: call 0x15068d80 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15057777: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x15057778: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(esi)); /* 0x1505777C: push dword ptr [esi] */
    RECOMP_CALL(sub_15056E1C); /* 0x1505777E: call 0x15056e1c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15057783: pop ecx */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x15057784: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_150577C8); /* 0x1505778B: call 0x150577c8 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xDu); /* 0x15057790: push 0xd */
    RECOMP_CALL(sub_15068D80); /* 0x15057792: call 0x15068d80 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15057797: pop ecx */
    MEM32(ebp + (-0x4)) = 1; /* 0x15057798: mov dword ptr [ebp - 4], 1 */
    eax = MEM32(edi); /* 0x1505779F: mov eax, dword ptr [edi] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(1);
    MEM32(eax) = MEM32(eax) + 1; /* 0x150577A1: lock inc dword ptr [eax] */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x150577A4: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_150577D4); /* 0x150577AB: call 0x150577d4 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x150577B0: mov eax, esi */
L_150577B2:
    ecx = MEM32(ebp + (-0x10)); /* 0x150577B2: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x150577B5: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x150577BC: pop ecx */
    edi = POP32_VAL(esp); /* 0x150577BD: pop edi */
    esi = POP32_VAL(esp); /* 0x150577BE: pop esi */
    ebx = POP32_VAL(esp); /* 0x150577BF: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x150577C0: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150577C1: ret  */
    RECOMP_REGS_OUT();
}

void sub_150577C8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150577C8u);

L_150577C8:
    PUSH32(esp, 0xCu); /* 0x150577C8: push 0xc */
    RECOMP_CALL(sub_15068F50); /* 0x150577CA: call 0x15068f50 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150577CF: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150577D0: ret  */
    RECOMP_REGS_OUT();
}

void sub_150577D4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150577D4u);

L_150577D4:
    PUSH32(esp, 0xDu); /* 0x150577D4: push 0xd */
    RECOMP_CALL(sub_15068F50); /* 0x150577D6: call 0x15068f50 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150577DB: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150577DC: ret  */
    RECOMP_REGS_OUT();
}

void sub_150577E3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150577E3u);

L_150577E3:
    edi = edi; /* 0x150577E3: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150577E5: push ebp */
    ebp = esp; /* 0x150577E6: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x150577E8: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x150577EB: push ebx */
    PUSH32(esp, esi); /* 0x150577EC: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x150577ED: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x150577EF: inc esi */
    _flag_k = FK_INC;
    PUSH32(esp, 0x355u); /* 0x150577F0: push 0x355 */
    MEM32(ebp + (-0x8)) = esi; /* 0x150577F5: mov dword ptr [ebp - 8], esi */
    RECOMP_CALL(sub_15048F2F); /* 0x150577F8: call 0x15048f2f */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x150577FD: mov ebx, eax */
    MEM32(ebp + (-0x10)) = ebx; /* 0x150577FF: mov dword ptr [ebp - 0x10], ebx */
    ecx = POP32_VAL(esp); /* 0x15057802: pop ecx */
    /* test ebx, ebx */ /* 0x15057803: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15057975; /* 0x15057805: je 0x15057975 */
L_1505780B:
    PUSH32(esp, edi); /* 0x1505780B: push edi */
    MEM32(ebx) = esi; /* 0x1505780C: mov dword ptr [ebx], esi */
    edi = ebx + 0x4; /* 0x1505780E: lea edi, [ebx + 4] */
    MEM32(ebp + (-0xC)) = esi; /* 0x15057811: mov dword ptr [ebp - 0xc], esi */
    esi = MEM32(ebp + 0x8); /* 0x15057814: mov esi, dword ptr [ebp + 8] */
    MEM8(edi) = (uint8_t)(0); /* 0x15057817: mov byte ptr [edi], 0 */
    PUSH32(esp, MEM32(esi + 0x58)); /* 0x1505781A: push dword ptr [esi + 0x58] */
    PUSH32(esp, 0x15004034u); /* 0x1505781D: push 0x15004034 */
    PUSH32(esp, MEM32(0x1500125C)); /* 0x15057822: push dword ptr [0x1500125c] */
    PUSH32(esp, 3); /* 0x15057828: push 3 */
    PUSH32(esp, 0x351u); /* 0x1505782A: push 0x351 */
    PUSH32(esp, edi); /* 0x1505782F: push edi */
    RECOMP_CALL(sub_15057F64); /* 0x15057830: call 0x15057f64 */
    RECOMP_FLAGS_IN();
    eax = 0x1500125Cu; /* 0x15057835: mov eax, 0x1500125c */
    ebx = esi + 0x10; /* 0x1505783A: lea ebx, [esi + 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1505783D: add esp, 0x18 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x15057840: mov dword ptr [ebp - 4], eax */
L_15057843:
    PUSH32(esp, 0x150052D4u); /* 0x15057843: push 0x150052d4 */
    PUSH32(esp, 0x351u); /* 0x15057848: push 0x351 */
    PUSH32(esp, edi); /* 0x1505784D: push edi */
    RECOMP_CALL(sub_1508E450); /* 0x1505784E: call 0x1508e450 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15057853: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15057856: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15057869; /* 0x15057858: je 0x15057869 */
L_1505785A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1505785A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1505785C: push eax */
    PUSH32(esp, eax); /* 0x1505785D: push eax */
    PUSH32(esp, eax); /* 0x1505785E: push eax */
    PUSH32(esp, eax); /* 0x1505785F: push eax */
    PUSH32(esp, eax); /* 0x15057860: push eax */
    RECOMP_CALL(sub_1505A11B); /* 0x15057861: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15057866: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15057869:
    ecx = MEM32(ebx + 0x58); /* 0x15057869: mov ecx, dword ptr [ebx + 0x58] */
    eax = MEM32(ebx + 0x48); /* 0x1505786C: mov eax, dword ptr [ebx + 0x48] */
L_1505786F:
    SET_LO8(edx, MEM8(eax)); /* 0x1505786F: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x15057871: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505788F; /* 0x15057873: jne 0x1505788f */
L_15057875:
    /* test LO8(edx), LO8(edx) */ /* 0x15057875: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505788B; /* 0x15057877: je 0x1505788b */
L_15057879:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x15057879: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x1505787C: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505788F; /* 0x1505787F: jne 0x1505788f */
L_15057881:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x15057881: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x15057884: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x15057887: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505786F; /* 0x15057889: jne 0x1505786f */
L_1505788B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1505788B: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15057894; /* 0x1505788D: jmp 0x15057894 */
L_1505788F:
    { uint32_t _sa = ecx, _sb = ecx, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1505788F: sbb ecx, ecx */
      ecx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)((ecx | 1)); _flag_b = (uint32_t)((ecx | 1));
    ecx = ecx | 1; /* 0x15057891: or ecx, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_15057894:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15057894: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x15057896: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0x4)); /* 0x15057898: mov ecx, dword ptr [ebp - 4] */
    if (TEST_Z(_flag_a, _flag_b)) { eax = MEM32(ebp + (-0x8)); } /* 0x1505789B: cmove eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xCu; /* 0x1505789F: add ecx, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x150578A2: mov dword ptr [ebp - 8], eax */
    eax = MEM32(ebp + (-0xC)); /* 0x150578A5: mov eax, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x150578A8: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x4)) = ecx; /* 0x150578A9: mov dword ptr [ebp - 4], ecx */
    MEM32(ebp + (-0xC)) = eax; /* 0x150578AC: mov dword ptr [ebp - 0xc], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x150578AF: add eax, eax */
    _flag_k = FK_ADD;
    ebx = esi + eax * 8; /* 0x150578B1: lea ebx, [esi + eax*8] */
    PUSH32(esp, MEM32(ebx + 0x48)); /* 0x150578B4: push dword ptr [ebx + 0x48] */
    PUSH32(esp, 0x15004034u); /* 0x150578B7: push 0x15004034 */
    PUSH32(esp, MEM32(ecx)); /* 0x150578BC: push dword ptr [ecx] */
    PUSH32(esp, 3); /* 0x150578BE: push 3 */
    PUSH32(esp, 0x351u); /* 0x150578C0: push 0x351 */
    PUSH32(esp, edi); /* 0x150578C5: push edi */
    RECOMP_CALL(sub_15057F64); /* 0x150578C6: call 0x15057f64 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x150578CB: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x150578CE: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* cmp eax, 0x1500128Cu */ /* 0x150578D1: cmp eax, 0x1500128c */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1500128Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_15057843; /* 0x150578D6: jl 0x15057843 */
L_150578DC:
    /* cmp MEM32(ebp + (-0x8)), 0 */ /* 0x150578DC: cmp dword ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = MEM32(ebp + (-0x10)); /* 0x150578E0: mov ebx, dword ptr [ebp - 0x10] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505792A; /* 0x150578E3: jne 0x1505792a */
L_150578E5:
    ecx = MEM32(esi + 0x50); /* 0x150578E5: mov ecx, dword ptr [esi + 0x50] */
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x150578E8: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x150578EB: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15057900; /* 0x150578ED: je 0x15057900 */
L_150578EF:
    eax = edi; /* 0x150578EF: mov eax, edi */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(ecx), _sum = MEM32(ecx) + eax; eax = _old; MEM32(ecx) = _sum; } /* 0x150578F1: lock xadd dword ptr [ecx], eax */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_15057900; /* 0x150578F5: jne 0x15057900 */
L_150578F7:
    PUSH32(esp, MEM32(esi + 0x50)); /* 0x150578F7: push dword ptr [esi + 0x50] */
    RECOMP_CALL(sub_15048840); /* 0x150578FA: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150578FF: pop ecx */
L_15057900:
    eax = MEM32(esi + 0x54); /* 0x15057900: mov eax, dword ptr [esi + 0x54] */
    /* test eax, eax */ /* 0x15057903: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15057917; /* 0x15057905: je 0x15057917 */
L_15057907:
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(eax), _sum = MEM32(eax) + edi; edi = _old; MEM32(eax) = _sum; } /* 0x15057907: lock xadd dword ptr [eax], edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1505790B: dec edi */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_15057917; /* 0x1505790C: jne 0x15057917 */
L_1505790E:
    PUSH32(esp, MEM32(esi + 0x54)); /* 0x1505790E: push dword ptr [esi + 0x54] */
    RECOMP_CALL(sub_15048840); /* 0x15057911: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15057916: pop ecx */
L_15057917:
    _flag_a = (uint32_t)(MEM32(esi + 0x54)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x54) = MEM32(esi + 0x54) & 0; /* 0x15057917: and dword ptr [esi + 0x54], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebx + 0x4; /* 0x1505791B: lea eax, [ebx + 4] */
    _flag_a = (uint32_t)(MEM32(esi + 0x4C)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x4C) = MEM32(esi + 0x4C) & 0; /* 0x1505791E: and dword ptr [esi + 0x4c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x50) = ebx; /* 0x15057922: mov dword ptr [esi + 0x50], ebx */
    MEM32(esi + 0x48) = eax; /* 0x15057925: mov dword ptr [esi + 0x48], eax */
    goto L_15057974; /* 0x15057928: jmp 0x15057974 */
L_1505792A:
    PUSH32(esp, ebx); /* 0x1505792A: push ebx */
    RECOMP_CALL(sub_15048840); /* 0x1505792B: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15057930: pop ecx */
    ecx = MEM32(esi + 0x50); /* 0x15057931: mov ecx, dword ptr [esi + 0x50] */
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x15057934: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x15057937: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505794C; /* 0x15057939: je 0x1505794c */
L_1505793B:
    eax = edi; /* 0x1505793B: mov eax, edi */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(ecx), _sum = MEM32(ecx) + eax; eax = _old; MEM32(ecx) = _sum; } /* 0x1505793D: lock xadd dword ptr [ecx], eax */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_1505794C; /* 0x15057941: jne 0x1505794c */
L_15057943:
    PUSH32(esp, MEM32(esi + 0x50)); /* 0x15057943: push dword ptr [esi + 0x50] */
    RECOMP_CALL(sub_15048840); /* 0x15057946: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505794B: pop ecx */
L_1505794C:
    eax = MEM32(esi + 0x54); /* 0x1505794C: mov eax, dword ptr [esi + 0x54] */
    /* test eax, eax */ /* 0x1505794F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15057963; /* 0x15057951: je 0x15057963 */
L_15057953:
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(eax), _sum = MEM32(eax) + edi; edi = _old; MEM32(eax) = _sum; } /* 0x15057953: lock xadd dword ptr [eax], edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x15057957: dec edi */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_15057963; /* 0x15057958: jne 0x15057963 */
L_1505795A:
    PUSH32(esp, MEM32(esi + 0x54)); /* 0x1505795A: push dword ptr [esi + 0x54] */
    RECOMP_CALL(sub_15048840); /* 0x1505795D: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15057962: pop ecx */
L_15057963:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15057963: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x54) = eax; /* 0x15057965: mov dword ptr [esi + 0x54], eax */
    MEM32(esi + 0x4C) = eax; /* 0x15057968: mov dword ptr [esi + 0x4c], eax */
    MEM32(esi + 0x50) = eax; /* 0x1505796B: mov dword ptr [esi + 0x50], eax */
    MEM32(esi + 0x48) = eax; /* 0x1505796E: mov dword ptr [esi + 0x48], eax */
    eax = MEM32(esi + 0x68); /* 0x15057971: mov eax, dword ptr [esi + 0x68] */
L_15057974:
    edi = POP32_VAL(esp); /* 0x15057974: pop edi */
L_15057975:
    esi = POP32_VAL(esp); /* 0x15057975: pop esi */
    ebx = POP32_VAL(esp); /* 0x15057976: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15057977: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15057978: ret  */
    RECOMP_REGS_OUT();
}

void sub_1505797F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1505797Fu);

L_1505797F:
    edi = edi; /* 0x1505797F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15057981: push ebp */
    ebp = esp; /* 0x15057982: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xA0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xA0u; /* 0x15057984: sub esp, 0xa0 */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x1505798A: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1505798F: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x15057991: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0xC); /* 0x15057994: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x15057997: push ebx */
    PUSH32(esp, esi); /* 0x15057998: push esi */
    esi = MEM32(ebp + 0x10); /* 0x15057999: mov esi, dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x1505799C: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1505799D: mov edi, dword ptr [ebp + 8] */
    MEM32(ebp + (-0xA0)) = edi; /* 0x150579A0: mov dword ptr [ebp - 0xa0], edi */
    /* test eax, eax */ /* 0x150579A6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150579C9; /* 0x150579A8: je 0x150579c9 */
L_150579AA:
    /* test esi, esi */ /* 0x150579AA: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150579BE; /* 0x150579AC: je 0x150579be */
L_150579AE:
    PUSH32(esp, esi); /* 0x150579AE: push esi */
    PUSH32(esp, eax); /* 0x150579AF: push eax */
    PUSH32(esp, edi); /* 0x150579B0: push edi */
    RECOMP_CALL(sub_15057C27); /* 0x150579B1: call 0x15057c27 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x150579B6: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_15057C0C; /* 0x150579B9: jmp 0x15057c0c */
L_150579BE:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x150579BE: add eax, eax */
    _flag_k = FK_ADD;
    eax = MEM32(edi + eax * 8 + 0x48); /* 0x150579C0: mov eax, dword ptr [edi + eax*8 + 0x48] */
    goto L_15057C0C; /* 0x150579C4: jmp 0x15057c0c */
L_150579C9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150579C9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x94)) = 1; /* 0x150579CB: mov dword ptr [ebp - 0x94], 1 */
    ebx = eax; /* 0x150579D5: mov ebx, eax */
    MEM32(ebp + (-0x98)) = ebx; /* 0x150579D7: mov dword ptr [ebp - 0x98], ebx */
    /* test esi, esi */ /* 0x150579DD: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15057C05; /* 0x150579DF: je 0x15057c05 */
L_150579E5:
    /* cmp MEM8(esi), 0x4Cu */ /* 0x150579E5: cmp byte ptr [esi], 0x4c */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0x4Cu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_15057B3A; /* 0x150579E8: jne 0x15057b3a */
L_150579EE:
    /* cmp MEM8(esi + 0x1), 0x43u */ /* 0x150579EE: cmp byte ptr [esi + 1], 0x43 */
    _flag_a = (uint32_t)(MEM8(esi + 0x1)) << 24; _flag_b = (uint32_t)(0x43u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_15057B3A; /* 0x150579F2: jne 0x15057b3a */
L_150579F8:
    /* cmp MEM8(esi + 0x2), 0x5Fu */ /* 0x150579F8: cmp byte ptr [esi + 2], 0x5f */
    _flag_a = (uint32_t)(MEM8(esi + 0x2)) << 24; _flag_b = (uint32_t)(0x5Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_15057B3A; /* 0x150579FC: jne 0x15057b3a */
L_15057A02:
    PUSH32(esp, 0x150052D0u); /* 0x15057A02: push 0x150052d0 */
    PUSH32(esp, esi); /* 0x15057A07: push esi */
    RECOMP_CALL(sub_1508ED50); /* 0x15057A08: call 0x1508ed50 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x15057A0D: mov ebx, eax */
    MEM32(ebp + (-0x9C)) = ebx; /* 0x15057A0F: mov dword ptr [ebp - 0x9c], ebx */
    ecx = POP32_VAL(esp); /* 0x15057A15: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15057A16: pop ecx */
    /* test ebx, ebx */ /* 0x15057A17: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15057B33; /* 0x15057A19: je 0x15057b33 */
L_15057A1F:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x15057A1F: sub eax, esi */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x94)) = eax; /* 0x15057A21: mov dword ptr [ebp - 0x94], eax */
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15057B33; /* 0x15057A27: je 0x15057b33 */
L_15057A2D:
    /* cmp MEM8(ebx), 0x3Bu */ /* 0x15057A2D: cmp byte ptr [ebx], 0x3b */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(0x3Bu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15057B33; /* 0x15057A30: je 0x15057b33 */
L_15057A36:
    MEM32(ebp + (-0x90)) = 1; /* 0x15057A36: mov dword ptr [ebp - 0x90], 1 */
    edi = 0x1500125Cu; /* 0x15057A40: mov edi, 0x1500125c */
    ebx = eax; /* 0x15057A45: mov ebx, eax */
L_15057A47:
    PUSH32(esp, ebx); /* 0x15057A47: push ebx */
    PUSH32(esp, esi); /* 0x15057A48: push esi */
    PUSH32(esp, MEM32(edi)); /* 0x15057A49: push dword ptr [edi] */
    RECOMP_CALL(sub_1508E9E0); /* 0x15057A4B: call 0x1508e9e0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15057A50: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15057A53: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15057A69; /* 0x15057A55: jne 0x15057a69 */
L_15057A57:
    ecx = MEM32(edi); /* 0x15057A57: mov ecx, dword ptr [edi] */
    edx = ecx + 0x1; /* 0x15057A59: lea edx, [ecx + 1] */
L_15057A5C:
    SET_LO8(eax, MEM8(ecx)); /* 0x15057A5C: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15057A5E: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x15057A5F: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15057A5C; /* 0x15057A61: jne 0x15057a5c */
L_15057A63:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x15057A63: sub ecx, edx */
    _flag_k = FK_CMP;
    /* cmp ebx, ecx */ /* 0x15057A65: cmp ebx, ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15057A7A; /* 0x15057A67: je 0x15057a7a */
L_15057A69:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x90))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x90)) = MEM32(ebp + (-0x90)) + 1; /* 0x15057A69: inc dword ptr [ebp - 0x90] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0xCu; /* 0x15057A6F: add edi, 0xc */
    _flag_k = FK_ADD;
    /* cmp edi, 0x1500128Cu */ /* 0x15057A72: cmp edi, 0x1500128c */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x1500128Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_LE(_flag_a, _flag_b)) goto L_15057A47; /* 0x15057A78: jle 0x15057a47 */
L_15057A7A:
    ebx = MEM32(ebp + (-0x9C)); /* 0x15057A7A: mov ebx, dword ptr [ebp - 0x9c] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x15057A80: inc ebx */
    _flag_k = FK_INC;
    PUSH32(esp, 0x150052D4u); /* 0x15057A81: push 0x150052d4 */
    PUSH32(esp, ebx); /* 0x15057A86: push ebx */
    RECOMP_CALL(sub_1508E6C0); /* 0x15057A87: call 0x1508e6c0 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + (-0xA0)); /* 0x15057A8C: mov edi, dword ptr [ebp - 0xa0] */
    esi = eax; /* 0x15057A92: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x15057A94: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15057A95: pop ecx */
    /* test esi, esi */ /* 0x15057A96: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15057AA3; /* 0x15057A98: jne 0x15057aa3 */
L_15057A9A:
    /* cmp MEM8(ebx), 0x3Bu */ /* 0x15057A9A: cmp byte ptr [ebx], 0x3b */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(0x3Bu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_15057B33; /* 0x15057A9D: jne 0x15057b33 */
L_15057AA3:
    /* cmp MEM32(ebp + (-0x90)), 5 */ /* 0x15057AA3: cmp dword ptr [ebp - 0x90], 5 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x90))); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_15057B12; /* 0x15057AAA: jg 0x15057b12 */
L_15057AAC:
    PUSH32(esp, esi); /* 0x15057AAC: push esi */
    PUSH32(esp, ebx); /* 0x15057AAD: push ebx */
    eax = ebp + (-0x88); /* 0x15057AAE: lea eax, [ebp - 0x88] */
    PUSH32(esp, 0x83u); /* 0x15057AB4: push 0x83 */
    PUSH32(esp, eax); /* 0x15057AB9: push eax */
    RECOMP_CALL(sub_1508EBC0); /* 0x15057ABA: call 0x1508ebc0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15057ABF: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15057AC2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15057AD5; /* 0x15057AC4: je 0x15057ad5 */
L_15057AC6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15057AC6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15057AC8: push eax */
    PUSH32(esp, eax); /* 0x15057AC9: push eax */
    PUSH32(esp, eax); /* 0x15057ACA: push eax */
    PUSH32(esp, eax); /* 0x15057ACB: push eax */
    PUSH32(esp, eax); /* 0x15057ACC: push eax */
    RECOMP_CALL(sub_1505A11B); /* 0x15057ACD: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15057AD2: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15057AD5:
    /* cmp esi, 0x83u */ /* 0x15057AD5: cmp esi, 0x83 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x83u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_15057C1B; /* 0x15057ADB: jae 0x15057c1b */
L_15057AE1:
    eax = ebp + (-0x88); /* 0x15057AE1: lea eax, [ebp - 0x88] */
    MEM8(ebp + esi + (-0x88)) = (uint8_t)(0); /* 0x15057AE7: mov byte ptr [ebp + esi - 0x88], 0 */
    PUSH32(esp, eax); /* 0x15057AEF: push eax */
    PUSH32(esp, MEM32(ebp + (-0x90))); /* 0x15057AF0: push dword ptr [ebp - 0x90] */
    PUSH32(esp, edi); /* 0x15057AF6: push edi */
    RECOMP_CALL(sub_15057C27); /* 0x15057AF7: call 0x15057c27 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15057AFC: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15057AFF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x98)); /* 0x15057B01: mov eax, dword ptr [ebp - 0x98] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_15057B18; /* 0x15057B07: je 0x15057b18 */
L_15057B09:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15057B09: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x98)) = eax; /* 0x15057B0A: mov dword ptr [ebp - 0x98], eax */
    goto L_15057B18; /* 0x15057B10: jmp 0x15057b18 */
L_15057B12:
    eax = MEM32(ebp + (-0x98)); /* 0x15057B12: mov eax, dword ptr [ebp - 0x98] */
L_15057B18:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ebx; /* 0x15057B18: add esi, ebx */
    _flag_k = FK_ADD;
    SET_LO8(ecx, MEM8(esi)); /* 0x15057B1A: mov cl, byte ptr [esi] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x15057B1C: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15057B2B; /* 0x15057B1E: je 0x15057b2b */
L_15057B20:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x15057B20: inc esi */
    _flag_k = FK_INC;
    SET_LO8(ecx, MEM8(esi)); /* 0x15057B21: mov cl, byte ptr [esi] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x15057B23: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15057A02; /* 0x15057B25: jne 0x15057a02 */
L_15057B2B:
    /* test eax, eax */ /* 0x15057B2B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15057C05; /* 0x15057B2D: jne 0x15057c05 */
L_15057B33:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15057B33: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15057C0C; /* 0x15057B35: jmp 0x15057c0c */
L_15057B3A:
    PUSH32(esp, eax); /* 0x15057B3A: push eax */
    PUSH32(esp, eax); /* 0x15057B3B: push eax */
    PUSH32(esp, eax); /* 0x15057B3C: push eax */
    PUSH32(esp, 0x83u); /* 0x15057B3D: push 0x83 */
    eax = ebp + (-0x88); /* 0x15057B42: lea eax, [ebp - 0x88] */
    PUSH32(esp, eax); /* 0x15057B48: push eax */
    PUSH32(esp, esi); /* 0x15057B49: push esi */
    RECOMP_CALL(sub_150573D2); /* 0x15057B4A: call 0x150573d2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x15057B4F: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15057B52: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15057C0C; /* 0x15057B54: je 0x15057c0c */
L_15057B5A:
    edx = edi + 0x48; /* 0x15057B5A: lea edx, [edi + 0x48] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15057B5D: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x90)) = edx; /* 0x15057B5F: mov dword ptr [ebp - 0x90], edx */
L_15057B65:
    /* test esi, esi */ /* 0x15057B65: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15057BE0; /* 0x15057B67: je 0x15057be0 */
L_15057B69:
    ecx = MEM32(edx); /* 0x15057B69: mov ecx, dword ptr [edx] */
    eax = ebp + (-0x88); /* 0x15057B6B: lea eax, [ebp - 0x88] */
L_15057B71:
    SET_LO8(edx, MEM8(eax)); /* 0x15057B71: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x15057B73: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM8(ebp + (-0x89)) = (uint8_t)(LO8(edx)); /* 0x15057B75: mov byte ptr [ebp - 0x89], dl */
    edx = MEM32(ebp + (-0x90)); /* 0x15057B7B: mov edx, dword ptr [ebp - 0x90] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_15057BB3; /* 0x15057B81: jne 0x15057bb3 */
L_15057B83:
    /* cmp MEM8(ebp + (-0x89)), 0 */ /* 0x15057B83: cmp byte ptr [ebp - 0x89], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x89))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15057BAF; /* 0x15057B8A: je 0x15057baf */
L_15057B8C:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x15057B8C: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x15057B8F: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM8(ebp + (-0x89)) = (uint8_t)(LO8(edx)); /* 0x15057B92: mov byte ptr [ebp - 0x89], dl */
    edx = MEM32(ebp + (-0x90)); /* 0x15057B98: mov edx, dword ptr [ebp - 0x90] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_15057BB3; /* 0x15057B9E: jne 0x15057bb3 */
L_15057BA0:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x15057BA0: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x15057BA3: add ecx, 2 */
    _flag_k = FK_ADD;
    /* cmp MEM8(ebp + (-0x89)), 0 */ /* 0x15057BA6: cmp byte ptr [ebp - 0x89], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x89))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_15057B71; /* 0x15057BAD: jne 0x15057b71 */
L_15057BAF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15057BAF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15057BB8; /* 0x15057BB1: jmp 0x15057bb8 */
L_15057BB3:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x15057BB3: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)((eax | 1)); _flag_b = (uint32_t)((eax | 1));
    eax = eax | 1; /* 0x15057BB5: or eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_15057BB8:
    /* test eax, eax */ /* 0x15057BB8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15057BDF; /* 0x15057BBA: je 0x15057bdf */
L_15057BBC:
    eax = ebp + (-0x88); /* 0x15057BBC: lea eax, [ebp - 0x88] */
    PUSH32(esp, eax); /* 0x15057BC2: push eax */
    PUSH32(esp, esi); /* 0x15057BC3: push esi */
    PUSH32(esp, edi); /* 0x15057BC4: push edi */
    RECOMP_CALL(sub_15057C27); /* 0x15057BC5: call 0x15057c27 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x90)); /* 0x15057BCA: mov edx, dword ptr [ebp - 0x90] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15057BD0: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15057BD3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15057BDF; /* 0x15057BD5: jne 0x15057bdf */
L_15057BD7:
    MEM32(ebp + (-0x94)) = eax; /* 0x15057BD7: mov dword ptr [ebp - 0x94], eax */
    goto L_15057BE6; /* 0x15057BDD: jmp 0x15057be6 */
L_15057BDF:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x15057BDF: inc ebx */
    _flag_k = FK_INC;
L_15057BE0:
    eax = MEM32(ebp + (-0x94)); /* 0x15057BE0: mov eax, dword ptr [ebp - 0x94] */
L_15057BE6:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x15057BE6: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x10u; /* 0x15057BE7: add edx, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x90)) = edx; /* 0x15057BEA: mov dword ptr [ebp - 0x90], edx */
    /* cmp esi, 5 */ /* 0x15057BF0: cmp esi, 5 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_LE(_flag_a, _flag_b)) goto L_15057B65; /* 0x15057BF3: jle 0x15057b65 */
L_15057BF9:
    /* test eax, eax */ /* 0x15057BF9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15057C05; /* 0x15057BFB: jne 0x15057c05 */
L_15057BFD:
    /* test ebx, ebx */ /* 0x15057BFD: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15057B33; /* 0x15057BFF: je 0x15057b33 */
L_15057C05:
    PUSH32(esp, edi); /* 0x15057C05: push edi */
    RECOMP_CALL(sub_150577E3); /* 0x15057C06: call 0x150577e3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15057C0B: pop ecx */
L_15057C0C:
    ecx = MEM32(ebp + (-0x4)); /* 0x15057C0C: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x15057C0F: pop edi */
    esi = POP32_VAL(esp); /* 0x15057C10: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x15057C11: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x15057C13: pop ebx */
    RECOMP_CALL(sub_1505E540); /* 0x15057C14: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15057C19: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15057C1A: ret  */
L_15057C1B:
    RECOMP_CALL(sub_150602E7); /* 0x15057C1B: call 0x150602e7 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x15057C20u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_15057C27(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15057C27u);

L_15057C27:
    edi = edi; /* 0x15057C27: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15057C29: push ebp */
    ebp = esp; /* 0x15057C2A: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1B8u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1B8u; /* 0x15057C2C: sub esp, 0x1b8 */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x15057C32: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x15057C37: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x15057C39: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x15057C3C: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x15057C3D: mov ebx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x15057C40: push esi */
    esi = MEM32(ebp + 0x10); /* 0x15057C41: mov esi, dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x15057C44: push edi */
    edi = MEM32(ebp + 0x8); /* 0x15057C45: mov edi, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x198)) = ebx; /* 0x15057C48: mov dword ptr [ebp - 0x198], ebx */
    RECOMP_CALL(sub_15068820); /* 0x15057C4E: call 0x15068820 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1D0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x1D0u; /* 0x15057C53: add eax, 0x1d0 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x1A8)) = eax; /* 0x15057C58: mov dword ptr [ebp - 0x1a8], eax */
    eax = ebp + (-0x190); /* 0x15057C5E: lea eax, [ebp - 0x190] */
    PUSH32(esp, ebx); /* 0x15057C64: push ebx */
    PUSH32(esp, eax); /* 0x15057C65: push eax */
    eax = ebp + (-0x1B8); /* 0x15057C66: lea eax, [ebp - 0x1b8] */
    PUSH32(esp, eax); /* 0x15057C6C: push eax */
    PUSH32(esp, 0x83u); /* 0x15057C6D: push 0x83 */
    eax = ebp + (-0x88); /* 0x15057C72: lea eax, [ebp - 0x88] */
    PUSH32(esp, eax); /* 0x15057C78: push eax */
    PUSH32(esp, esi); /* 0x15057C79: push esi */
    RECOMP_CALL(sub_150573D2); /* 0x15057C7A: call 0x150573d2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x15057C7F: add esp, 0x18 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15057C82: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15057EF8; /* 0x15057C84: je 0x15057ef8 */
L_15057C8A:
    esi = ebx; /* 0x15057C8A: mov esi, ebx */
    eax = ebp + (-0x88); /* 0x15057C8C: lea eax, [ebp - 0x88] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + esi; /* 0x15057C92: add esi, esi */
    _flag_k = FK_ADD;
    edx = MEM32(edi + esi * 8 + 0x48); /* 0x15057C94: mov edx, dword ptr [edi + esi*8 + 0x48] */
    ecx = edx; /* 0x15057C98: mov ecx, edx */
L_15057C9A:
    SET_LO8(ebx, MEM8(eax)); /* 0x15057C9A: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), MEM8(ecx) */ /* 0x15057C9C: cmp bl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM8(ebp + (-0x189)) = (uint8_t)(LO8(ebx)); /* 0x15057C9E: mov byte ptr [ebp - 0x189], bl */
    ebx = MEM32(ebp + (-0x198)); /* 0x15057CA4: mov ebx, dword ptr [ebp - 0x198] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_15057CDC; /* 0x15057CAA: jne 0x15057cdc */
L_15057CAC:
    /* cmp MEM8(ebp + (-0x189)), 0 */ /* 0x15057CAC: cmp byte ptr [ebp - 0x189], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x189))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15057CD8; /* 0x15057CB3: je 0x15057cd8 */
L_15057CB5:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x15057CB5: mov bl, byte ptr [eax + 1] */
    /* cmp LO8(ebx), MEM8(ecx + 0x1) */ /* 0x15057CB8: cmp bl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM8(ebp + (-0x189)) = (uint8_t)(LO8(ebx)); /* 0x15057CBB: mov byte ptr [ebp - 0x189], bl */
    ebx = MEM32(ebp + (-0x198)); /* 0x15057CC1: mov ebx, dword ptr [ebp - 0x198] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_15057CDC; /* 0x15057CC7: jne 0x15057cdc */
L_15057CC9:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x15057CC9: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x15057CCC: add ecx, 2 */
    _flag_k = FK_ADD;
    /* cmp MEM8(ebp + (-0x189)), 0 */ /* 0x15057CCF: cmp byte ptr [ebp - 0x189], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x189))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_15057C9A; /* 0x15057CD6: jne 0x15057c9a */
L_15057CD8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15057CD8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15057CE1; /* 0x15057CDA: jmp 0x15057ce1 */
L_15057CDC:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x15057CDC: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)((eax | 1)); _flag_b = (uint32_t)((eax | 1));
    eax = eax | 1; /* 0x15057CDE: or eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_15057CE1:
    /* test eax, eax */ /* 0x15057CE1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15057CEC; /* 0x15057CE3: jne 0x15057cec */
L_15057CE5:
    eax = edx; /* 0x15057CE5: mov eax, edx */
    goto L_15057EFA; /* 0x15057CE7: jmp 0x15057efa */
L_15057CEC:
    ecx = ebp + (-0x88); /* 0x15057CEC: lea ecx, [ebp - 0x88] */
    edx = ecx + 0x1; /* 0x15057CF2: lea edx, [ecx + 1] */
L_15057CF5:
    SET_LO8(eax, MEM8(ecx)); /* 0x15057CF5: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15057CF7: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x15057CF8: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15057CF5; /* 0x15057CFA: jne 0x15057cf5 */
L_15057CFC:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x15057CFC: sub ecx, edx */
    _flag_k = FK_CMP;
    eax = ecx + 0x5; /* 0x15057CFE: lea eax, [ecx + 5] */
    PUSH32(esp, eax); /* 0x15057D01: push eax */
    MEM32(ebp + (-0x194)) = eax; /* 0x15057D02: mov dword ptr [ebp - 0x194], eax */
    RECOMP_CALL(sub_15048F2F); /* 0x15057D08: call 0x15048f2f */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x1A0)) = eax; /* 0x15057D0D: mov dword ptr [ebp - 0x1a0], eax */
    ecx = POP32_VAL(esp); /* 0x15057D13: pop ecx */
    /* test eax, eax */ /* 0x15057D14: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15057EF8; /* 0x15057D16: je 0x15057ef8 */
L_15057D1C:
    ecx = MEM32(edi + esi * 8 + 0x48); /* 0x15057D1C: mov ecx, dword ptr [edi + esi*8 + 0x48] */
    MEM32(ebp + (-0x19C)) = ecx; /* 0x15057D20: mov dword ptr [ebp - 0x19c], ecx */
    ecx = MEM32(edi + ebx * 4 + 0xC); /* 0x15057D26: mov ecx, dword ptr [edi + ebx*4 + 0xc] */
    MEM32(ebp + (-0x1AC)) = ecx; /* 0x15057D2A: mov dword ptr [ebp - 0x1ac], ecx */
    ecx = MEM32(edi + 0x4); /* 0x15057D30: mov ecx, dword ptr [edi + 4] */
    MEM32(ebp + (-0x1B0)) = ecx; /* 0x15057D33: mov dword ptr [ebp - 0x1b0], ecx */
    ecx = eax + 0x4; /* 0x15057D39: lea ecx, [eax + 4] */
    eax = ebp + (-0x88); /* 0x15057D3C: lea eax, [ebp - 0x88] */
    MEM32(ebp + (-0x1A4)) = ecx; /* 0x15057D42: mov dword ptr [ebp - 0x1a4], ecx */
    PUSH32(esp, eax); /* 0x15057D48: push eax */
    eax = MEM32(ebp + (-0x194)); /* 0x15057D49: mov eax, dword ptr [ebp - 0x194] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFFCu; /* 0x15057D4F: add eax, -4 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x15057D52: push eax */
    PUSH32(esp, ecx); /* 0x15057D53: push ecx */
    RECOMP_CALL(sub_1508E640); /* 0x15057D54: call 0x1508e640 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15057D59: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15057D5C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15057D6F; /* 0x15057D5E: je 0x15057d6f */
L_15057D60:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15057D60: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x15057D62: push eax */
    PUSH32(esp, eax); /* 0x15057D63: push eax */
    PUSH32(esp, eax); /* 0x15057D64: push eax */
    PUSH32(esp, eax); /* 0x15057D65: push eax */
    PUSH32(esp, eax); /* 0x15057D66: push eax */
    RECOMP_CALL(sub_1505A11B); /* 0x15057D67: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15057D6C: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15057D6F:
    eax = MEM32(ebp + (-0x1A4)); /* 0x15057D6F: mov eax, dword ptr [ebp - 0x1a4] */
    edx = MEM32(ebp + (-0x1B8)); /* 0x15057D75: mov edx, dword ptr [ebp - 0x1b8] */
    MEM32(edi + esi * 8 + 0x48) = eax; /* 0x15057D7B: mov dword ptr [edi + esi*8 + 0x48], eax */
    eax = (uint32_t)LO16(edx); /* 0x15057D7F: movzx eax, dx */
    MEM32(edi + ebx * 4 + 0xC) = eax; /* 0x15057D82: mov dword ptr [edi + ebx*4 + 0xc], eax */
    eax = ebx + 0x6; /* 0x15057D86: lea eax, [ebx + 6] */
    ecx = (uint32_t)((int32_t)eax * (int32_t)6); /* 0x15057D89: imul ecx, eax, 6 */
    SET_LO16(eax, MEM16(ebp + (-0x1B4))); /* 0x15057D8C: mov ax, word ptr [ebp - 0x1b4] */
    MEM32(ecx + edi) = edx; /* 0x15057D93: mov dword ptr [ecx + edi], edx */
    MEM16(ecx + edi + 0x4) = (uint16_t)(LO16(eax)); /* 0x15057D96: mov word ptr [ecx + edi + 4], ax */
    /* cmp ebx, 2 */ /* 0x15057D9B: cmp ebx, 2 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15057EA3; /* 0x15057D9E: jne 0x15057ea3 */
L_15057DA4:
    esi = MEM32(ebp + (-0x1A8)); /* 0x15057DA4: mov esi, dword ptr [ebp - 0x1a8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x15057DAA: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x190)); /* 0x15057DAC: mov eax, dword ptr [ebp - 0x190] */
    MEM32(edi + 0x4) = eax; /* 0x15057DB2: mov dword ptr [edi + 4], eax */
    eax = MEM32(esi + 0x20); /* 0x15057DB5: mov eax, dword ptr [esi + 0x20] */
    ecx = MEM32(esi + 0x24); /* 0x15057DB8: mov ecx, dword ptr [esi + 0x24] */
    MEM32(ebp + (-0x194)) = eax; /* 0x15057DBB: mov dword ptr [ebp - 0x194], eax */
    MEM32(ebp + (-0x190)) = ecx; /* 0x15057DC1: mov dword ptr [ebp - 0x190], ecx */
L_15057DC7:
    eax = MEM32(edi + 0x4); /* 0x15057DC7: mov eax, dword ptr [edi + 4] */
    /* cmp eax, MEM32(esi + edx * 8) */ /* 0x15057DCA: cmp eax, dword ptr [esi + edx*8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + edx * 8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15057E03; /* 0x15057DCD: je 0x15057e03 */
L_15057DCF:
    eax = MEM32(esi + edx * 8); /* 0x15057DCF: mov eax, dword ptr [esi + edx*8] */
    ebx = MEM32(ebp + (-0x194)); /* 0x15057DD2: mov ebx, dword ptr [ebp - 0x194] */
    ecx = MEM32(esi + edx * 8 + 0x4); /* 0x15057DD8: mov ecx, dword ptr [esi + edx*8 + 4] */
    MEM32(esi + edx * 8) = ebx; /* 0x15057DDC: mov dword ptr [esi + edx*8], ebx */
    ebx = MEM32(ebp + (-0x190)); /* 0x15057DDF: mov ebx, dword ptr [ebp - 0x190] */
    MEM32(esi + edx * 8 + 0x4) = ebx; /* 0x15057DE5: mov dword ptr [esi + edx*8 + 4], ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x15057DE9: inc edx */
    _flag_k = FK_INC;
    ebx = MEM32(ebp + (-0x198)); /* 0x15057DEA: mov ebx, dword ptr [ebp - 0x198] */
    MEM32(ebp + (-0x194)) = eax; /* 0x15057DF0: mov dword ptr [ebp - 0x194], eax */
    MEM32(ebp + (-0x190)) = ecx; /* 0x15057DF6: mov dword ptr [ebp - 0x190], ecx */
    /* cmp edx, 5 */ /* 0x15057DFC: cmp edx, 5 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_15057DC7; /* 0x15057DFF: jl 0x15057dc7 */
L_15057E01:
    goto L_15057E26; /* 0x15057E01: jmp 0x15057e26 */
L_15057E03:
    /* test edx, edx */ /* 0x15057E03: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15057E26; /* 0x15057E05: je 0x15057e26 */
L_15057E07:
    eax = MEM32(esi + edx * 8); /* 0x15057E07: mov eax, dword ptr [esi + edx*8] */
    ecx = MEM32(esi + edx * 8 + 0x4); /* 0x15057E0A: mov ecx, dword ptr [esi + edx*8 + 4] */
    MEM32(esi) = eax; /* 0x15057E0E: mov dword ptr [esi], eax */
    eax = MEM32(ebp + (-0x194)); /* 0x15057E10: mov eax, dword ptr [ebp - 0x194] */
    MEM32(esi + 0x4) = ecx; /* 0x15057E16: mov dword ptr [esi + 4], ecx */
    MEM32(esi + edx * 8) = eax; /* 0x15057E19: mov dword ptr [esi + edx*8], eax */
    eax = MEM32(ebp + (-0x190)); /* 0x15057E1C: mov eax, dword ptr [ebp - 0x190] */
    MEM32(esi + edx * 8 + 0x4) = eax; /* 0x15057E22: mov dword ptr [esi + edx*8 + 4], eax */
L_15057E26:
    /* cmp edx, 5 */ /* 0x15057E26: cmp edx, 5 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15057E98; /* 0x15057E29: jne 0x15057e98 */
L_15057E2B:
    PUSH32(esp, 1); /* 0x15057E2B: push 1 */
    PUSH32(esp, MEM32(edi + 0x14)); /* 0x15057E2D: push dword ptr [edi + 0x14] */
    eax = ebp + (-0x188); /* 0x15057E30: lea eax, [ebp - 0x188] */
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x15057E36: push dword ptr [edi + 4] */
    PUSH32(esp, eax); /* 0x15057E39: push eax */
    PUSH32(esp, 0x7Fu); /* 0x15057E3A: push 0x7f */
    PUSH32(esp, 0x15005250u); /* 0x15057E3C: push 0x15005250 */
    PUSH32(esp, 1); /* 0x15057E41: push 1 */
    PUSH32(esp, 0); /* 0x15057E43: push 0 */
    RECOMP_CALL(sub_1505E653); /* 0x15057E45: call 0x1505e653 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x15057E4A: add esp, 0x20 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15057E4D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15057E89; /* 0x15057E4F: je 0x15057e89 */
L_15057E51:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15057E51: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_15057E53:
    ecx = 0x1FFu; /* 0x15057E53: mov ecx, 0x1ff */
    _flag_a = (uint32_t)(MEM16(ebp + eax * 2 + (-0x188))) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    MEM16(ebp + eax * 2 + (-0x188)) = (uint16_t)(MEM16(ebp + eax * 2 + (-0x188)) & LO16(ecx)); /* 0x15057E58: and word ptr [ebp + eax*2 - 0x188], cx */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15057E60: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, 0x7Fu */ /* 0x15057E61: cmp eax, 0x7f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_15057E53; /* 0x15057E64: jb 0x15057e53 */
L_15057E66:
    PUSH32(esp, 0xFEu); /* 0x15057E66: push 0xfe */
    PUSH32(esp, MEM32(0x150BC070)); /* 0x15057E6B: push dword ptr [0x150bc070] */
    eax = ebp + (-0x188); /* 0x15057E71: lea eax, [ebp - 0x188] */
    PUSH32(esp, eax); /* 0x15057E77: push eax */
    RECOMP_CALL(sub_1508DB90); /* 0x15057E78: call 0x1508db90 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x15057E7D: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15057E7F: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15057E82: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(ecx, (TEST_Z(_flag_a, _flag_b)) ? 1 : 0); /* 0x15057E84: sete cl */
    goto L_15057E8B; /* 0x15057E87: jmp 0x15057e8b */
L_15057E89:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x15057E89: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_15057E8B:
    PUSH32(esp, 4); /* 0x15057E8B: push 4 */
    eax = esi; /* 0x15057E8D: mov eax, esi */
    edx = POP32_VAL(esp); /* 0x15057E8F: pop edx */
    MEM32(eax + edx) = ecx; /* 0x15057E90: mov dword ptr [eax + edx], ecx */
    eax = MEM32(edi + 0x4); /* 0x15057E93: mov eax, dword ptr [edi + 4] */
    MEM32(esi) = eax; /* 0x15057E96: mov dword ptr [esi], eax */
L_15057E98:
    eax = MEM32(esi + 0x4); /* 0x15057E98: mov eax, dword ptr [esi + 4] */
    MEM32(edi + 0xA8) = eax; /* 0x15057E9B: mov dword ptr [edi + 0xa8], eax */
    goto L_15057EB1; /* 0x15057EA1: jmp 0x15057eb1 */
L_15057EA3:
    /* cmp ebx, 1 */ /* 0x15057EA3: cmp ebx, 1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15057EB1; /* 0x15057EA6: jne 0x15057eb1 */
L_15057EA8:
    eax = MEM32(ebp + (-0x190)); /* 0x15057EA8: mov eax, dword ptr [ebp - 0x190] */
    MEM32(edi + 0x8) = eax; /* 0x15057EAE: mov dword ptr [edi + 8], eax */
L_15057EB1:
    eax = (uint32_t)((int32_t)ebx * (int32_t)0xCu); /* 0x15057EB1: imul eax, ebx, 0xc */
    PUSH32(esp, edi); /* 0x15057EB4: push edi */
    esi = MEM32(eax + 0x15001258); /* 0x15057EB5: mov esi, dword ptr [eax + 0x15001258] */
    ecx = esi; /* 0x15057EBB: mov ecx, esi */
    RECOMP_ICALL(MEM32(0x150C02B0)); /* 0x15057EBD: call dword ptr [0x150c02b0] */
    RECOMP_FLAGS_IN();
    RECOMP_ICALL(esi); /* 0x15057EC3: call esi */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15057EC5: pop ecx */
    ecx = MEM32(ebp + (-0x19C)); /* 0x15057EC6: mov ecx, dword ptr [ebp - 0x19c] */
    /* test eax, eax */ /* 0x15057ECC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15057F09; /* 0x15057ECE: je 0x15057f09 */
L_15057ED0:
    eax = ebx; /* 0x15057ED0: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x15057ED2: add eax, eax */
    _flag_k = FK_ADD;
    MEM32(edi + eax * 8 + 0x48) = ecx; /* 0x15057ED4: mov dword ptr [edi + eax*8 + 0x48], ecx */
    eax = MEM32(ebp + (-0x1A0)); /* 0x15057ED8: mov eax, dword ptr [ebp - 0x1a0] */
    PUSH32(esp, eax); /* 0x15057EDE: push eax */
    RECOMP_CALL(sub_15048840); /* 0x15057EDF: call 0x15048840 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x1AC)); /* 0x15057EE4: mov eax, dword ptr [ebp - 0x1ac] */
    MEM32(edi + ebx * 4 + 0xC) = eax; /* 0x15057EEA: mov dword ptr [edi + ebx*4 + 0xc], eax */
    eax = MEM32(ebp + (-0x1B0)); /* 0x15057EEE: mov eax, dword ptr [ebp - 0x1b0] */
    ecx = POP32_VAL(esp); /* 0x15057EF4: pop ecx */
    MEM32(edi + 0x4) = eax; /* 0x15057EF5: mov dword ptr [edi + 4], eax */
L_15057EF8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15057EF8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_15057EFA:
    ecx = MEM32(ebp + (-0x4)); /* 0x15057EFA: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x15057EFD: pop edi */
    esi = POP32_VAL(esp); /* 0x15057EFE: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x15057EFF: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x15057F01: pop ebx */
    RECOMP_CALL(sub_1505E540); /* 0x15057F02: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15057F07: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15057F08: ret  */
L_15057F09:
    /* cmp ecx, 0x150052E8u */ /* 0x15057F09: cmp ecx, 0x150052e8 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x150052E8u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15057F42; /* 0x15057F0F: je 0x15057f42 */
L_15057F11:
    edx = ebx + 0x5; /* 0x15057F11: lea edx, [ebx + 5] */
    _flag_a = (uint32_t)((ecx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ecx | 0xFFFFFFFFu));
    ecx = ecx | 0xFFFFFFFFu; /* 0x15057F14: or ecx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + edx; /* 0x15057F17: add edx, edx */
    _flag_k = FK_ADD;
    eax = MEM32(edi + edx * 8); /* 0x15057F19: mov eax, dword ptr [edi + edx*8] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(eax), _sum = MEM32(eax) + ecx; ecx = _old; MEM32(eax) = _sum; } /* 0x15057F1C: lock xadd dword ptr [eax], ecx */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_15057F42; /* 0x15057F20: jne 0x15057f42 */
L_15057F22:
    PUSH32(esp, MEM32(edi + edx * 8)); /* 0x15057F22: push dword ptr [edi + edx*8] */
    RECOMP_CALL(sub_15048840); /* 0x15057F25: call 0x15048840 */
    RECOMP_FLAGS_IN();
    eax = ebx; /* 0x15057F2A: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x15057F2C: add eax, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(edi + eax * 8 + 0x54)); /* 0x15057F2E: push dword ptr [edi + eax*8 + 0x54] */
    RECOMP_CALL(sub_15048840); /* 0x15057F32: call 0x15048840 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15057F37: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15057F38: pop ecx */
    ecx = ebx; /* 0x15057F39: mov ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x15057F3B: add ecx, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(edi + ecx * 8 + 0x4C)); _flag_b = (uint32_t)(0);
    MEM32(edi + ecx * 8 + 0x4C) = MEM32(edi + ecx * 8 + 0x4C) & 0; /* 0x15057F3D: and dword ptr [edi + ecx*8 + 0x4c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_15057F42:
    eax = MEM32(ebp + (-0x1A0)); /* 0x15057F42: mov eax, dword ptr [ebp - 0x1a0] */
    ecx = ebx + 0x5; /* 0x15057F48: lea ecx, [ebx + 5] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x15057F4B: add ecx, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + ebx; /* 0x15057F4D: add ebx, ebx */
    _flag_k = FK_ADD;
    MEM32(eax) = 1; /* 0x15057F4F: mov dword ptr [eax], 1 */
    MEM32(edi + ecx * 8) = eax; /* 0x15057F55: mov dword ptr [edi + ecx*8], eax */
    eax = MEM32(edi + ebx * 8 + 0x48); /* 0x15057F58: mov eax, dword ptr [edi + ebx*8 + 0x48] */
    RECOMP_BACKEDGE();
    goto L_15057EFA; /* 0x15057F5C: jmp 0x15057efa */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_15057F64(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15057F64u);

L_15057F64:
    edi = edi; /* 0x15057F64: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15057F66: push ebp */
    ebp = esp; /* 0x15057F67: mov ebp, esp */
    PUSH32(esp, esi); /* 0x15057F69: push esi */
    esi = MEM32(ebp + 0x10); /* 0x15057F6A: mov esi, dword ptr [ebp + 0x10] */
    /* test esi, esi */ /* 0x15057F6D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_15057FA3; /* 0x15057F6F: jle 0x15057fa3 */
L_15057F71:
    PUSH32(esp, ebx); /* 0x15057F71: push ebx */
    PUSH32(esp, edi); /* 0x15057F72: push edi */
    edi = ebp + 0x10; /* 0x15057F73: lea edi, [ebp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15057F76: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_15057F78:
    edi = edi + 0x4; /* 0x15057F78: lea edi, [edi + 4] */
    PUSH32(esp, MEM32(edi)); /* 0x15057F7B: push dword ptr [edi] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15057F7D: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15057F80: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1508E450); /* 0x15057F83: call 0x1508e450 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15057F88: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15057F8B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15057F9C; /* 0x15057F8D: je 0x15057f9c */
L_15057F8F:
    PUSH32(esp, ebx); /* 0x15057F8F: push ebx */
    PUSH32(esp, ebx); /* 0x15057F90: push ebx */
    PUSH32(esp, ebx); /* 0x15057F91: push ebx */
    PUSH32(esp, ebx); /* 0x15057F92: push ebx */
    PUSH32(esp, ebx); /* 0x15057F93: push ebx */
    RECOMP_CALL(sub_1505A11B); /* 0x15057F94: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15057F99: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15057F9C:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 1; /* 0x15057F9C: sub esi, 1 */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_15057F78; /* 0x15057F9F: jne 0x15057f78 */
L_15057FA1:
    edi = POP32_VAL(esp); /* 0x15057FA1: pop edi */
    ebx = POP32_VAL(esp); /* 0x15057FA2: pop ebx */
L_15057FA3:
    esi = POP32_VAL(esp); /* 0x15057FA3: pop esi */
    ebp = POP32_VAL(esp); /* 0x15057FA4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15057FA5: ret  */
    RECOMP_REGS_OUT();
}

void sub_15057FAC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15057FACu);

L_15057FAC:
    edi = edi; /* 0x15057FAC: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15057FAE: push ebp */
    ebp = esp; /* 0x15057FAF: mov ebp, esp */
    PUSH32(esp, edi); /* 0x15057FB1: push edi */
    edi = MEM32(ebp + 0xC); /* 0x15057FB2: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x15057FB5: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15057FF4; /* 0x15057FB7: je 0x15057ff4 */
L_15057FB9:
    eax = MEM32(ebp + 0x8); /* 0x15057FB9: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x15057FBC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15057FF4; /* 0x15057FBE: je 0x15057ff4 */
L_15057FC0:
    PUSH32(esp, esi); /* 0x15057FC0: push esi */
    esi = MEM32(eax); /* 0x15057FC1: mov esi, dword ptr [eax] */
    /* cmp esi, edi */ /* 0x15057FC3: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15057FEF; /* 0x15057FC5: je 0x15057fef */
L_15057FC7:
    PUSH32(esp, edi); /* 0x15057FC7: push edi */
    MEM32(eax) = edi; /* 0x15057FC8: mov dword ptr [eax], edi */
    RECOMP_CALL(sub_15056E1C); /* 0x15057FCA: call 0x15056e1c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15057FCF: pop ecx */
    /* test esi, esi */ /* 0x15057FD0: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15057FEF; /* 0x15057FD2: je 0x15057fef */
L_15057FD4:
    PUSH32(esp, esi); /* 0x15057FD4: push esi */
    RECOMP_CALL(sub_15057199); /* 0x15057FD5: call 0x15057199 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(esi), 0 */ /* 0x15057FDA: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x15057FDD: pop ecx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_15057FEF; /* 0x15057FDE: jne 0x15057fef */
L_15057FE0:
    /* cmp esi, 0x150BC078u */ /* 0x15057FE0: cmp esi, 0x150bc078 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x150BC078u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15057FEF; /* 0x15057FE6: je 0x15057fef */
L_15057FE8:
    PUSH32(esp, esi); /* 0x15057FE8: push esi */
    RECOMP_CALL(sub_15056EA3); /* 0x15057FE9: call 0x15056ea3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15057FEE: pop ecx */
L_15057FEF:
    eax = edi; /* 0x15057FEF: mov eax, edi */
    esi = POP32_VAL(esp); /* 0x15057FF1: pop esi */
    goto L_15057FF6; /* 0x15057FF2: jmp 0x15057ff6 */
L_15057FF4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15057FF4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_15057FF6:
    edi = POP32_VAL(esp); /* 0x15057FF6: pop edi */
    ebp = POP32_VAL(esp); /* 0x15057FF7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15057FF8: ret  */
    RECOMP_REGS_OUT();
}

void sub_15058000(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15058000u);

L_15058000:
    PUSH32(esp, 0x18u); /* 0x15058000: push 0x18 */
    PUSH32(esp, 0x150B09F8u); /* 0x15058002: push 0x150b09f8 */
    RECOMP_CALL(sub_1505E988); /* 0x15058007: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1505800C: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x20)) = ebx; /* 0x1505800E: mov dword ptr [ebp - 0x20], ebx */
    /* cmp MEM32(ebp + 0x8), 5 */ /* 0x15058011: cmp dword ptr [ebp + 8], 5 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_15058036; /* 0x15058015: jbe 0x15058036 */
L_15058017:
    RECOMP_CALL(sub_15036430); /* 0x15058017: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x1505801C: mov dword ptr [eax], 0x16 */
    PUSH32(esp, ebx); /* 0x15058022: push ebx */
    PUSH32(esp, ebx); /* 0x15058023: push ebx */
    PUSH32(esp, ebx); /* 0x15058024: push ebx */
    PUSH32(esp, ebx); /* 0x15058025: push ebx */
    PUSH32(esp, ebx); /* 0x15058026: push ebx */
    RECOMP_CALL(sub_1505A110); /* 0x15058027: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505802C: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1505802F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15058181; /* 0x15058031: jmp 0x15058181 */
L_15058036:
    RECOMP_CALL(sub_15068820); /* 0x15058036: call 0x15068820 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1505803B: mov esi, eax */
    MEM32(ebp + (-0x1C)) = esi; /* 0x1505803D: mov dword ptr [ebp - 0x1c], esi */
    RECOMP_CALL(sub_15057225); /* 0x15058040: call 0x15057225 */
    RECOMP_FLAGS_IN();
    eax = esi + 0x70; /* 0x15058045: lea eax, [esi + 0x70] */
    MEM32(ebp + (-0x28)) = eax; /* 0x15058048: mov dword ptr [ebp - 0x28], eax */
    _flag_a = (uint32_t)((MEM32(eax) | 0x10u)); _flag_b = (uint32_t)((MEM32(eax) | 0x10u));
    MEM32(eax) = MEM32(eax) | 0x10u; /* 0x1505804B: or dword ptr [eax], 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ebx; /* 0x1505804E: mov dword ptr [ebp - 4], ebx */
    PUSH32(esp, 1); /* 0x15058051: push 1 */
    PUSH32(esp, 0xD8u); /* 0x15058053: push 0xd8 */
    RECOMP_CALL(sub_15048EE2); /* 0x15058058: call 0x15048ee2 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505805D: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1505805E: pop ecx */
    edi = eax; /* 0x1505805F: mov edi, eax */
    MEM32(ebp + (-0x24)) = edi; /* 0x15058061: mov dword ptr [ebp - 0x24], edi */
    /* test edi, edi */ /* 0x15058064: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15058172; /* 0x15058066: je 0x15058172 */
L_1505806C:
    PUSH32(esp, 0xCu); /* 0x1505806C: push 0xc */
    RECOMP_CALL(sub_15068D80); /* 0x1505806E: call 0x15068d80 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15058073: pop ecx */
    MEM32(ebp + (-0x4)) = 1; /* 0x15058074: mov dword ptr [ebp - 4], 1 */
    PUSH32(esp, MEM32(esi + 0x6C)); /* 0x1505807B: push dword ptr [esi + 0x6c] */
    PUSH32(esp, edi); /* 0x1505807E: push edi */
    RECOMP_CALL(sub_150572BB); /* 0x1505807F: call 0x150572bb */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15058084: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15058085: pop ecx */
    MEM32(ebp + (-0x4)) = ebx; /* 0x15058086: mov dword ptr [ebp - 4], ebx */
    RECOMP_CALL(sub_150580DC); /* 0x15058089: call 0x150580dc */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1505808E: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15058091: push dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x15058094: push edi */
    RECOMP_CALL(sub_1505797F); /* 0x15058095: call 0x1505797f */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1505809A: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x20)) = eax; /* 0x1505809D: mov dword ptr [ebp - 0x20], eax */
    /* test eax, eax */ /* 0x150580A0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15058164; /* 0x150580A2: je 0x15058164 */
L_150580A8:
    eax = MEM32(ebp + 0xC); /* 0x150580A8: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x150580AB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150580F8; /* 0x150580AD: je 0x150580f8 */
L_150580AF:
    ecx = 0x150052E8u; /* 0x150580AF: mov ecx, 0x150052e8 */
L_150580B4:
    SET_LO8(edx, MEM8(eax)); /* 0x150580B4: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x150580B6: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_150580E5; /* 0x150580B8: jne 0x150580e5 */
L_150580BA:
    /* test LO8(edx), LO8(edx) */ /* 0x150580BA: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_150580D0; /* 0x150580BC: je 0x150580d0 */
L_150580BE:
    SET_LO8(edx, MEM8(eax + 0x1)); /* 0x150580BE: mov dl, byte ptr [eax + 1] */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x150580C1: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_150580E5; /* 0x150580C4: jne 0x150580e5 */
L_150580C6:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x150580C6: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x150580C9: add ecx, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x150580CC: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150580B4; /* 0x150580CE: jne 0x150580b4 */
L_150580D0:
    eax = ebx; /* 0x150580D0: mov eax, ebx */
    goto L_150580EA; /* 0x150580D2: jmp 0x150580ea */
L_150580E5:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x150580E5: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)((eax | 1)); _flag_b = (uint32_t)((eax | 1));
    eax = eax | 1; /* 0x150580E7: or eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
L_150580EA:
    /* test eax, eax */ /* 0x150580EA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150580F8; /* 0x150580EC: je 0x150580f8 */
L_150580EE:
    MEM32(0x150BDBA0) = 1; /* 0x150580EE: mov dword ptr [0x150bdba0], 1 */
L_150580F8:
    PUSH32(esp, 0xCu); /* 0x150580F8: push 0xc */
    RECOMP_CALL(sub_15068D80); /* 0x150580FA: call 0x15068d80 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150580FF: pop ecx */
    MEM32(ebp + (-0x4)) = 2; /* 0x15058100: mov dword ptr [ebp - 4], 2 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x6Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x6Cu; /* 0x15058107: add esi, 0x6c */
    _flag_k = FK_ADD;
    PUSH32(esp, edi); /* 0x1505810A: push edi */
    PUSH32(esp, esi); /* 0x1505810B: push esi */
    RECOMP_CALL(sub_15057FAC); /* 0x1505810C: call 0x15057fac */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x15058111: push edi */
    RECOMP_CALL(sub_15057199); /* 0x15058112: call 0x15057199 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15058117: add esp, 0xc */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x28)); /* 0x1505811A: mov eax, dword ptr [ebp - 0x28] */
    /* test MEM8(eax), 2 */ /* 0x1505811D: test byte ptr [eax], 2 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15058151; /* 0x15058120: jne 0x15058151 */
L_15058122:
    /* test MEM8(0x150BD32C), 1 */ /* 0x15058122: test byte ptr [0x150bd32c], 1 */
    _flag_a = (uint32_t)(MEM8(0x150BD32C)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15058151; /* 0x15058129: je 0x15058151 */
L_1505812B:
    PUSH32(esp, MEM32(esi)); /* 0x1505812B: push dword ptr [esi] */
    PUSH32(esp, 0x150BC074u); /* 0x1505812D: push 0x150bc074 */
    RECOMP_CALL(sub_15057FAC); /* 0x15058132: call 0x15057fac */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15058137: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15058138: pop ecx */
    esi = MEM32(0x150BC074); /* 0x15058139: mov esi, dword ptr [0x150bc074] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0xCu; /* 0x1505813F: add esi, 0xc */
    _flag_k = FK_ADD;
    PUSH32(esp, 6); /* 0x15058142: push 6 */
    ecx = POP32_VAL(esp); /* 0x15058144: pop ecx */
    edi = 0x150BDBB8u; /* 0x15058145: mov edi, 0x150bdbb8 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1505814A: rep movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_1505819F); /* 0x1505814C: call 0x1505819f */
    RECOMP_FLAGS_IN();
L_15058151:
    MEM32(ebp + (-0x4)) = ebx; /* 0x15058151: mov dword ptr [ebp - 4], ebx */
    RECOMP_CALL(sub_1505815B); /* 0x15058154: call 0x1505815b */
    RECOMP_FLAGS_IN();
    goto L_15058172; /* 0x15058159: jmp 0x15058172 */
L_15058164:
    PUSH32(esp, edi); /* 0x15058164: push edi */
    RECOMP_CALL(sub_15057199); /* 0x15058165: call 0x15057199 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x1505816A: push edi */
    RECOMP_CALL(sub_15056EA3); /* 0x1505816B: call 0x15056ea3 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15058170: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15058171: pop ecx */
L_15058172:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x15058172: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_15058191); /* 0x15058179: call 0x15058191 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x20)); /* 0x1505817E: mov eax, dword ptr [ebp - 0x20] */
L_15058181:
    ecx = MEM32(ebp + (-0x10)); /* 0x15058181: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x15058184: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x1505818B: pop ecx */
    edi = POP32_VAL(esp); /* 0x1505818C: pop edi */
    esi = POP32_VAL(esp); /* 0x1505818D: pop esi */
    ebx = POP32_VAL(esp); /* 0x1505818E: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1505818F: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15058190: ret  */
    RECOMP_REGS_OUT();
}

void sub_150580DC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150580DCu);

L_150580DC:
    PUSH32(esp, 0xCu); /* 0x150580DC: push 0xc */
    RECOMP_CALL(sub_15068F50); /* 0x150580DE: call 0x15068f50 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150580E3: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150580E4: ret  */
    RECOMP_REGS_OUT();
}

void sub_1505815B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1505815Bu);

L_1505815B:
    PUSH32(esp, 0xCu); /* 0x1505815B: push 0xc */
    RECOMP_CALL(sub_15068F50); /* 0x1505815D: call 0x15068f50 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15058162: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15058163: ret  */
    RECOMP_REGS_OUT();
}

void sub_15058191(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15058191u);

L_15058191:
    eax = MEM32(ebp + (-0x1C)); /* 0x15058191: mov eax, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(MEM32(eax + 0x70)); _flag_b = (uint32_t)(0xFFFFFFEFu);
    MEM32(eax + 0x70) = MEM32(eax + 0x70) & 0xFFFFFFEFu; /* 0x15058194: and dword ptr [eax + 0x70], 0xffffffef */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15058198: ret  */
    RECOMP_REGS_OUT();
}

void sub_1505819F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1505819Fu);

L_1505819F:
    ecx = MEM32(0x150BC074); /* 0x1505819F: mov ecx, dword ptr [0x150bc074] */
    eax = MEM32(ecx + 0x4); /* 0x150581A5: mov eax, dword ptr [ecx + 4] */
    MEM32(0x150BDBD0) = eax; /* 0x150581A8: mov dword ptr [0x150bdbd0], eax */
    eax = MEM32(ecx + 0x8); /* 0x150581AD: mov eax, dword ptr [ecx + 8] */
    MEM32(0x150BDBD4) = eax; /* 0x150581B0: mov dword ptr [0x150bdbd4], eax */
    eax = MEM32(ecx + 0xA8); /* 0x150581B5: mov eax, dword ptr [ecx + 0xa8] */
    MEM32(0x150BD310) = eax; /* 0x150581BB: mov dword ptr [0x150bd310], eax */
    eax = MEM32(ecx + 0xD4); /* 0x150581C0: mov eax, dword ptr [ecx + 0xd4] */
    MEM32(0x150BC880) = eax; /* 0x150581C6: mov dword ptr [0x150bc880], eax */
    eax = MEM32(ecx + 0xBC); /* 0x150581CB: mov eax, dword ptr [ecx + 0xbc] */
    MEM32(0x150BC170) = eax; /* 0x150581D1: mov dword ptr [0x150bc170], eax */
    eax = MEM32(ecx + 0xC8); /* 0x150581D6: mov eax, dword ptr [ecx + 0xc8] */
    MEM32(0x150BC150) = eax; /* 0x150581DC: mov dword ptr [0x150bc150], eax */
    eax = MEM32(ecx + 0xAC); /* 0x150581E1: mov eax, dword ptr [ecx + 0xac] */
    MEM32(0x150BD314) = eax; /* 0x150581E7: mov dword ptr [0x150bd314], eax */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150581EC: ret  */
    RECOMP_REGS_OUT();
}

void sub_150581F3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150581F3u);

L_150581F3:
    edi = edi; /* 0x150581F3: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150581F5: push ebp */
    ebp = esp; /* 0x150581F6: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x2Cu; /* 0x150581F8: sub esp, 0x2c */
    _flag_k = FK_CMP;
    eax = MEM32(0x150BD340); /* 0x150581FB: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x15058200: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x15058202: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x14); /* 0x15058205: mov eax, dword ptr [ebp + 0x14] */
    ecx = MEM32(ebp + 0x1C); /* 0x15058208: mov ecx, dword ptr [ebp + 0x1c] */
    PUSH32(esp, ebx); /* 0x1505820B: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x1505820C: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1505820F: push esi */
    esi = MEM32(ebp + 0x18); /* 0x15058210: mov esi, dword ptr [ebp + 0x18] */
    MEM32(ebp + (-0x20)) = eax; /* 0x15058213: mov dword ptr [ebp - 0x20], eax */
    MEM32(ebp + (-0x24)) = ecx; /* 0x15058216: mov dword ptr [ebp - 0x24], ecx */
    PUSH32(esp, edi); /* 0x15058219: push edi */
    /* test esi, esi */ /* 0x1505821A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1505822E; /* 0x1505821C: jle 0x1505822e */
L_1505821E:
    PUSH32(esp, esi); /* 0x1505821E: push esi */
    PUSH32(esp, eax); /* 0x1505821F: push eax */
    RECOMP_CALL(sub_15058490); /* 0x15058220: call 0x15058490 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15058225: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15058226: pop ecx */
    ecx = MEM32(ebp + (-0x24)); /* 0x15058227: mov ecx, dword ptr [ebp - 0x24] */
    esi = eax; /* 0x1505822A: mov esi, eax */
    goto L_15058237; /* 0x1505822C: jmp 0x15058237 */
L_1505822E:
    /* cmp esi, 0xFFFFFFFFu */ /* 0x1505822E: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_15058472; /* 0x15058231: jl 0x15058472 */
L_15058237:
    edi = MEM32(ebp + 0x20); /* 0x15058237: mov edi, dword ptr [ebp + 0x20] */
    /* test edi, edi */ /* 0x1505823A: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1505824B; /* 0x1505823C: jle 0x1505824b */
L_1505823E:
    PUSH32(esp, edi); /* 0x1505823E: push edi */
    PUSH32(esp, ecx); /* 0x1505823F: push ecx */
    RECOMP_CALL(sub_15058490); /* 0x15058240: call 0x15058490 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15058245: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15058246: pop ecx */
    edi = eax; /* 0x15058247: mov edi, eax */
    goto L_15058254; /* 0x15058249: jmp 0x15058254 */
L_1505824B:
    /* cmp edi, 0xFFFFFFFFu */ /* 0x1505824B: cmp edi, -1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_15058472; /* 0x1505824E: jl 0x15058472 */
L_15058254:
    eax = MEM32(ebp + 0x24); /* 0x15058254: mov eax, dword ptr [ebp + 0x24] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x15058257: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x2C)) = ecx; /* 0x15058259: mov dword ptr [ebp - 0x2c], ecx */
    /* test eax, eax */ /* 0x1505825C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15058268; /* 0x1505825E: jne 0x15058268 */
L_15058260:
    eax = MEM32(ebx); /* 0x15058260: mov eax, dword ptr [ebx] */
    eax = MEM32(eax + 0x4); /* 0x15058262: mov eax, dword ptr [eax + 4] */
    MEM32(ebp + 0x24) = eax; /* 0x15058265: mov dword ptr [ebp + 0x24], eax */
L_15058268:
    /* test esi, esi */ /* 0x15058268: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15058274; /* 0x1505826A: je 0x15058274 */
L_1505826C:
    /* test edi, edi */ /* 0x1505826C: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15058314; /* 0x1505826E: jne 0x15058314 */
L_15058274:
    PUSH32(esp, 2); /* 0x15058274: push 2 */
    ebx = POP32_VAL(esp); /* 0x15058276: pop ebx */
    /* cmp esi, edi */ /* 0x15058277: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505846E; /* 0x15058279: je 0x1505846e */
L_1505827F:
    /* cmp edi, 1 */ /* 0x1505827F: cmp edi, 1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1505830A; /* 0x15058282: jg 0x1505830a */
L_15058288:
    /* cmp esi, 1 */ /* 0x15058288: cmp esi, 1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_150582D1; /* 0x1505828B: jg 0x150582d1 */
L_1505828D:
    ecx = ebp + (-0x18); /* 0x1505828D: lea ecx, [ebp - 0x18] */
    PUSH32(esp, ecx); /* 0x15058290: push ecx */
    PUSH32(esp, eax); /* 0x15058291: push eax */
    RECOMP_ICALL(MEM32(0x150C0194)); /* 0x15058292: call dword ptr [0x150c0194] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x15058298: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15058472; /* 0x1505829A: je 0x15058472 */
L_150582A0:
    /* test esi, esi */ /* 0x150582A0: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_150582D9; /* 0x150582A2: jle 0x150582d9 */
L_150582A4:
    /* cmp MEM32(ebp + (-0x18)), ebx */ /* 0x150582A4: cmp dword ptr [ebp - 0x18], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_150582D1; /* 0x150582A7: jb 0x150582d1 */
L_150582A9:
    /* cmp MEM8(ebp + (-0x12)), 0 */ /* 0x150582A9: cmp byte ptr [ebp - 0x12], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x12))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = ebp + (-0x12); /* 0x150582AD: lea eax, [ebp - 0x12] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150582D1; /* 0x150582B0: je 0x150582d1 */
L_150582B2:
    esi = MEM32(ebp + (-0x20)); /* 0x150582B2: mov esi, dword ptr [ebp - 0x20] */
L_150582B5:
    SET_LO8(ecx, MEM8(eax + 0x1)); /* 0x150582B5: mov cl, byte ptr [eax + 1] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x150582B8: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_150582D1; /* 0x150582BA: je 0x150582d1 */
L_150582BC:
    SET_LO8(edx, MEM8(esi)); /* 0x150582BC: mov dl, byte ptr [esi] */
    /* cmp LO8(edx), MEM8(eax) */ /* 0x150582BE: cmp dl, byte ptr [eax] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_B(_flag_a, _flag_b)) goto L_150582CA; /* 0x150582C0: jb 0x150582ca */
L_150582C2:
    /* cmp LO8(edx), LO8(ecx) */ /* 0x150582C2: cmp dl, cl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_BE(_flag_a, _flag_b)) goto L_1505846E; /* 0x150582C4: jbe 0x1505846e */
L_150582CA:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x150582CA: add eax, ebx */
    _flag_k = FK_ADD;
    /* cmp MEM8(eax), 0 */ /* 0x150582CC: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_150582B5; /* 0x150582CF: jne 0x150582b5 */
L_150582D1:
    PUSH32(esp, 3); /* 0x150582D1: push 3 */
    eax = POP32_VAL(esp); /* 0x150582D3: pop eax */
    goto L_15058474; /* 0x150582D4: jmp 0x15058474 */
L_150582D9:
    /* test edi, edi */ /* 0x150582D9: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_15058312; /* 0x150582DB: jle 0x15058312 */
L_150582DD:
    /* cmp MEM32(ebp + (-0x18)), ebx */ /* 0x150582DD: cmp dword ptr [ebp - 0x18], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1505830A; /* 0x150582E0: jb 0x1505830a */
L_150582E2:
    /* cmp MEM8(ebp + (-0x12)), 0 */ /* 0x150582E2: cmp byte ptr [ebp - 0x12], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x12))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = ebp + (-0x12); /* 0x150582E6: lea eax, [ebp - 0x12] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505830A; /* 0x150582E9: je 0x1505830a */
L_150582EB:
    esi = MEM32(ebp + (-0x24)); /* 0x150582EB: mov esi, dword ptr [ebp - 0x24] */
L_150582EE:
    SET_LO8(ecx, MEM8(eax + 0x1)); /* 0x150582EE: mov cl, byte ptr [eax + 1] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x150582F1: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505830A; /* 0x150582F3: je 0x1505830a */
L_150582F5:
    SET_LO8(edx, MEM8(esi)); /* 0x150582F5: mov dl, byte ptr [esi] */
    /* cmp LO8(edx), MEM8(eax) */ /* 0x150582F7: cmp dl, byte ptr [eax] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_B(_flag_a, _flag_b)) goto L_15058303; /* 0x150582F9: jb 0x15058303 */
L_150582FB:
    /* cmp LO8(edx), LO8(ecx) */ /* 0x150582FB: cmp dl, cl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_BE(_flag_a, _flag_b)) goto L_1505846E; /* 0x150582FD: jbe 0x1505846e */
L_15058303:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x15058303: add eax, ebx */
    _flag_k = FK_ADD;
    /* cmp MEM8(eax), 0 */ /* 0x15058305: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_150582EE; /* 0x15058308: jne 0x150582ee */
L_1505830A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1505830A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1505830C: inc eax */
    _flag_k = FK_INC;
    goto L_15058474; /* 0x1505830D: jmp 0x15058474 */
L_15058312:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x15058312: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_15058314:
    PUSH32(esp, ecx); /* 0x15058314: push ecx */
    PUSH32(esp, ecx); /* 0x15058315: push ecx */
    PUSH32(esp, esi); /* 0x15058316: push esi */
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x15058317: push dword ptr [ebp - 0x20] */
    PUSH32(esp, 9); /* 0x1505831A: push 9 */
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x1505831C: push dword ptr [ebp + 0x24] */
    RECOMP_ICALL(MEM32(0x150C024C)); /* 0x1505831F: call dword ptr [0x150c024c] */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x15058325: mov ecx, eax */
    MEM32(ebp + (-0x28)) = ecx; /* 0x15058327: mov dword ptr [ebp - 0x28], ecx */
    /* test ecx, ecx */ /* 0x1505832A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_15058472; /* 0x1505832C: jle 0x15058472 */
L_15058332:
    PUSH32(esp, 0xFFFFFFE0u); /* 0x15058332: push -0x20 */
    eax = POP32_VAL(esp); /* 0x15058334: pop eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x15058335: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x15058337: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    PUSH32(esp, 2); /* 0x15058339: push 2 */
    ebx = POP32_VAL(esp); /* 0x1505833B: pop ebx */
    /* cmp eax, ebx */ /* 0x1505833C: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_15058472; /* 0x1505833E: jb 0x15058472 */
L_15058344:
    eax = ecx * 2 + 0x8; /* 0x15058344: lea eax, [ecx*2 + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x1505834B: add ecx, ecx */
    _flag_k = FK_ADD;
    /* cmp eax, ecx */ /* 0x1505834D: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1505838F; /* 0x1505834F: jbe 0x1505838f */
L_15058351:
    /* cmp eax, 0x400u */ /* 0x15058351: cmp eax, 0x400 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x400u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_15058375; /* 0x15058356: ja 0x15058375 */
L_15058358:
    RECOMP_CALL(sub_15069EB0); /* 0x15058358: call 0x15069eb0 */
    RECOMP_FLAGS_IN();
    eax = esp; /* 0x1505835D: mov eax, esp */
    MEM32(ebp + (-0x1C)) = eax; /* 0x1505835F: mov dword ptr [ebp - 0x1c], eax */
    /* test eax, eax */ /* 0x15058362: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15058472; /* 0x15058364: je 0x15058472 */
L_1505836A:
    MEM32(eax) = 0xCCCCu; /* 0x1505836A: mov dword ptr [eax], 0xcccc */
L_15058370:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x15058370: add eax, 8 */
    _flag_k = FK_ADD;
    goto L_15058391; /* 0x15058373: jmp 0x15058391 */
L_15058375:
    PUSH32(esp, eax); /* 0x15058375: push eax */
    RECOMP_CALL(sub_15048A30); /* 0x15058376: call 0x15048a30 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x1C)) = eax; /* 0x1505837B: mov dword ptr [ebp - 0x1c], eax */
    ecx = POP32_VAL(esp); /* 0x1505837E: pop ecx */
    /* test eax, eax */ /* 0x1505837F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15058472; /* 0x15058381: je 0x15058472 */
L_15058387:
    MEM32(eax) = 0xDDDDu; /* 0x15058387: mov dword ptr [eax], 0xdddd */
    RECOMP_BACKEDGE();
    goto L_15058370; /* 0x1505838D: jmp 0x15058370 */
L_1505838F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1505838F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_15058391:
    MEM32(ebp + (-0x1C)) = eax; /* 0x15058391: mov dword ptr [ebp - 0x1c], eax */
    /* test eax, eax */ /* 0x15058394: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15058472; /* 0x15058396: je 0x15058472 */
L_1505839C:
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x1505839C: push dword ptr [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x1505839F: push eax */
    PUSH32(esp, esi); /* 0x150583A0: push esi */
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x150583A1: push dword ptr [ebp - 0x20] */
    esi = MEM32(ebp + 0x24); /* 0x150583A4: mov esi, dword ptr [ebp + 0x24] */
    PUSH32(esp, 1); /* 0x150583A7: push 1 */
    PUSH32(esp, esi); /* 0x150583A9: push esi */
    RECOMP_ICALL(MEM32(0x150C024C)); /* 0x150583AA: call dword ptr [0x150c024c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x150583B0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505845F; /* 0x150583B2: je 0x1505845f */
L_150583B8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150583B8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x150583BA: push eax */
    PUSH32(esp, eax); /* 0x150583BB: push eax */
    PUSH32(esp, edi); /* 0x150583BC: push edi */
    PUSH32(esp, MEM32(ebp + (-0x24))); /* 0x150583BD: push dword ptr [ebp - 0x24] */
    PUSH32(esp, 9); /* 0x150583C0: push 9 */
    PUSH32(esp, esi); /* 0x150583C2: push esi */
    RECOMP_ICALL(MEM32(0x150C024C)); /* 0x150583C3: call dword ptr [0x150c024c] */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x150583C9: mov ecx, eax */
    MEM32(ebp + (-0x20)) = ecx; /* 0x150583CB: mov dword ptr [ebp - 0x20], ecx */
    /* test ecx, ecx */ /* 0x150583CE: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1505845F; /* 0x150583D0: jle 0x1505845f */
L_150583D6:
    PUSH32(esp, 0xFFFFFFE0u); /* 0x150583D6: push -0x20 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x150583D8: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = POP32_VAL(esp); /* 0x150583DA: pop eax */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x150583DB: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    /* cmp eax, ebx */ /* 0x150583DD: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1505845F; /* 0x150583DF: jb 0x1505845f */
L_150583E1:
    eax = ecx * 2 + 0x8; /* 0x150583E1: lea eax, [ecx*2 + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x150583E8: add ecx, ecx */
    _flag_k = FK_ADD;
    /* cmp eax, ecx */ /* 0x150583EA: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_15058420; /* 0x150583EC: jbe 0x15058420 */
L_150583EE:
    /* cmp eax, 0x400u */ /* 0x150583EE: cmp eax, 0x400 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x400u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_15058408; /* 0x150583F3: ja 0x15058408 */
L_150583F5:
    RECOMP_CALL(sub_15069EB0); /* 0x150583F5: call 0x15069eb0 */
    RECOMP_FLAGS_IN();
    esi = esp; /* 0x150583FA: mov esi, esp */
    /* test esi, esi */ /* 0x150583FC: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505845F; /* 0x150583FE: je 0x1505845f */
L_15058400:
    MEM32(esi) = 0xCCCCu; /* 0x15058400: mov dword ptr [esi], 0xcccc */
    goto L_1505841B; /* 0x15058406: jmp 0x1505841b */
L_15058408:
    PUSH32(esp, eax); /* 0x15058408: push eax */
    RECOMP_CALL(sub_15048A30); /* 0x15058409: call 0x15048a30 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1505840E: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x15058410: pop ecx */
    /* test esi, esi */ /* 0x15058411: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505845F; /* 0x15058413: je 0x1505845f */
L_15058415:
    MEM32(esi) = 0xDDDDu; /* 0x15058415: mov dword ptr [esi], 0xdddd */
L_1505841B:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 8; /* 0x1505841B: add esi, 8 */
    _flag_k = FK_ADD;
    goto L_15058422; /* 0x1505841E: jmp 0x15058422 */
L_15058420:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15058420: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_15058422:
    /* test esi, esi */ /* 0x15058422: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505845F; /* 0x15058424: je 0x1505845f */
L_15058426:
    ebx = MEM32(ebp + (-0x20)); /* 0x15058426: mov ebx, dword ptr [ebp - 0x20] */
    PUSH32(esp, ebx); /* 0x15058429: push ebx */
    PUSH32(esp, esi); /* 0x1505842A: push esi */
    PUSH32(esp, edi); /* 0x1505842B: push edi */
    PUSH32(esp, MEM32(ebp + (-0x24))); /* 0x1505842C: push dword ptr [ebp - 0x24] */
    PUSH32(esp, 1); /* 0x1505842F: push 1 */
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x15058431: push dword ptr [ebp + 0x24] */
    RECOMP_ICALL(MEM32(0x150C024C)); /* 0x15058434: call dword ptr [0x150c024c] */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + (-0x1C)); /* 0x1505843A: mov edi, dword ptr [ebp - 0x1c] */
    /* test eax, eax */ /* 0x1505843D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15058456; /* 0x1505843F: je 0x15058456 */
L_15058441:
    PUSH32(esp, ebx); /* 0x15058441: push ebx */
    PUSH32(esp, esi); /* 0x15058442: push esi */
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x15058443: push dword ptr [ebp - 0x28] */
    PUSH32(esp, edi); /* 0x15058446: push edi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15058447: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1505844A: push dword ptr [ebp + 0xc] */
    RECOMP_ICALL(MEM32(0x150C0250)); /* 0x1505844D: call dword ptr [0x150c0250] */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x2C)) = eax; /* 0x15058453: mov dword ptr [ebp - 0x2c], eax */
L_15058456:
    PUSH32(esp, esi); /* 0x15058456: push esi */
    RECOMP_CALL(sub_1504ABA0); /* 0x15058457: call 0x1504aba0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505845C: pop ecx */
    goto L_15058462; /* 0x1505845D: jmp 0x15058462 */
L_1505845F:
    edi = MEM32(ebp + (-0x1C)); /* 0x1505845F: mov edi, dword ptr [ebp - 0x1c] */
L_15058462:
    PUSH32(esp, edi); /* 0x15058462: push edi */
    RECOMP_CALL(sub_1504ABA0); /* 0x15058463: call 0x1504aba0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x2C)); /* 0x15058468: mov eax, dword ptr [ebp - 0x2c] */
    ecx = POP32_VAL(esp); /* 0x1505846B: pop ecx */
    goto L_15058474; /* 0x1505846C: jmp 0x15058474 */
L_1505846E:
    eax = ebx; /* 0x1505846E: mov eax, ebx */
    goto L_15058474; /* 0x15058470: jmp 0x15058474 */
L_15058472:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15058472: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_15058474:
    esp = ebp + (-0x38); /* 0x15058474: lea esp, [ebp - 0x38] */
    edi = POP32_VAL(esp); /* 0x15058477: pop edi */
    esi = POP32_VAL(esp); /* 0x15058478: pop esi */
    ebx = POP32_VAL(esp); /* 0x15058479: pop ebx */
    ecx = MEM32(ebp + (-0x4)); /* 0x1505847A: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1505847D: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1505E540); /* 0x1505847F: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15058484: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15058485: ret  */
    RECOMP_REGS_OUT();
}

void sub_15058490(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15058490u);

L_15058490:
    edi = edi; /* 0x15058490: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15058492: push ebp */
    ebp = esp; /* 0x15058493: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x15058495: mov eax, dword ptr [ebp + 0xc] */
    ecx = eax; /* 0x15058498: mov ecx, eax */
    edx = MEM32(ebp + 0x8); /* 0x1505849A: mov edx, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x1505849D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150584AC; /* 0x1505849F: je 0x150584ac */
L_150584A1:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x150584A1: dec ecx */
    _flag_k = FK_DEC;
    /* cmp MEM8(edx), 0 */ /* 0x150584A2: cmp byte ptr [edx], 0 */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150584AD; /* 0x150584A5: je 0x150584ad */
L_150584A7:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x150584A7: inc edx */
    _flag_k = FK_INC;
    /* test ecx, ecx */ /* 0x150584A8: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150584A1; /* 0x150584AA: jne 0x150584a1 */
L_150584AC:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x150584AC: dec ecx */
    _flag_k = FK_DEC;
L_150584AD:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x150584AD: sub eax, ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x150584AF: dec eax */
    _flag_k = FK_DEC;
    ebp = POP32_VAL(esp); /* 0x150584B0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150584B1: ret  */
    RECOMP_REGS_OUT();
}

void sub_150584C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150584C0u);

L_150584C0:
    edi = edi; /* 0x150584C0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150584C2: push ebp */
    ebp = esp; /* 0x150584C3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x150584C5: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150584C8: push dword ptr [ebp + 8] */
    ecx = ebp + (-0x10); /* 0x150584CB: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1502F870); /* 0x150584CE: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x150584D3: push dword ptr [ebp + 0x24] */
    eax = ebp + (-0x10); /* 0x150584D6: lea eax, [ebp - 0x10] */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x150584D9: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x150584DC: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x150584DF: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x150584E2: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x150584E5: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x150584E8: push dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x150584EB: push eax */
    RECOMP_CALL(sub_150581F3); /* 0x150584EC: call 0x150581f3 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x20u; /* 0x150584F1: add esp, 0x20 */
    _flag_k = FK_ADD;
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x150584F4: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15058501; /* 0x150584F8: je 0x15058501 */
L_150584FA:
    ecx = MEM32(ebp + (-0x8)); /* 0x150584FA: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x150584FD: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_15058501:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15058501: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15058502: ret  */
    RECOMP_REGS_OUT();
}

void sub_15058510(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15058510u);

L_15058510:
    edi = edi; /* 0x15058510: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15058512: push ebp */
    ebp = esp; /* 0x15058513: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x15058515: sub esp, 0x10 */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x10); /* 0x15058518: lea ecx, [ebp - 0x10] */
    PUSH32(esp, esi); /* 0x1505851B: push esi */
    PUSH32(esp, edi); /* 0x1505851C: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1505851D: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1502F870); /* 0x15058520: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0x18); /* 0x15058525: mov esi, dword ptr [ebp + 0x18] */
    edi = MEM32(ebp + 0x20); /* 0x15058528: mov edi, dword ptr [ebp + 0x20] */
    /* test esi, esi */ /* 0x1505852B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1505853C; /* 0x1505852D: jle 0x1505853c */
L_1505852F:
    PUSH32(esp, esi); /* 0x1505852F: push esi */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x15058530: push dword ptr [ebp + 0x14] */
    RECOMP_CALL(sub_1508F6A0); /* 0x15058533: call 0x1508f6a0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15058538: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15058539: pop ecx */
    esi = eax; /* 0x1505853A: mov esi, eax */
L_1505853C:
    /* test edi, edi */ /* 0x1505853C: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1505854D; /* 0x1505853E: jle 0x1505854d */
L_15058540:
    PUSH32(esp, edi); /* 0x15058540: push edi */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x15058541: push dword ptr [ebp + 0x1c] */
    RECOMP_CALL(sub_1508F6A0); /* 0x15058544: call 0x1508f6a0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15058549: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1505854A: pop ecx */
    edi = eax; /* 0x1505854B: mov edi, eax */
L_1505854D:
    /* test esi, esi */ /* 0x1505854D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505856D; /* 0x1505854F: je 0x1505856d */
L_15058551:
    /* test edi, edi */ /* 0x15058551: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505856D; /* 0x15058553: je 0x1505856d */
L_15058555:
    PUSH32(esp, edi); /* 0x15058555: push edi */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x15058556: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, esi); /* 0x15058559: push esi */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1505855A: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1505855D: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15058560: push dword ptr [ebp + 0xc] */
    RECOMP_ICALL(MEM32(0x150C0250)); /* 0x15058563: call dword ptr [0x150c0250] */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x15058569: mov ecx, eax */
    goto L_15058582; /* 0x1505856B: jmp 0x15058582 */
L_1505856D:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edi; /* 0x1505856D: sub esi, edi */
    _flag_k = FK_CMP;
    ecx = esi; /* 0x1505856F: mov ecx, esi */
    if (31u) _cf = (((ecx) >> 30) & 1u); /* 0x15058571: sar ecx, 0x1f */
    if (31u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 31u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 31u);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFEu);
    ecx = ecx & 0xFFFFFFFEu; /* 0x15058574: and ecx, 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 3; /* 0x15058577: add ecx, 3 */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x1505857A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 2); /* 0x1505857C: push 2 */
    eax = POP32_VAL(esp); /* 0x1505857E: pop eax */
    if (TEST_Z(_flag_a, _flag_b)) { ecx = eax; } /* 0x1505857F: cmove ecx, eax */
L_15058582:
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x15058582: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    edi = POP32_VAL(esp); /* 0x15058586: pop edi */
    esi = POP32_VAL(esp); /* 0x15058587: pop esi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15058591; /* 0x15058588: je 0x15058591 */
L_1505858A:
    eax = MEM32(ebp + (-0x8)); /* 0x1505858A: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(eax + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(eax + 0x70) = MEM32(eax + 0x70) & 0xFFFFFFFDu; /* 0x1505858D: and dword ptr [eax + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_15058591:
    eax = ecx; /* 0x15058591: mov eax, ecx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15058593: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15058594: ret  */
    RECOMP_REGS_OUT();
}

void sub_150585A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150585A0u);

L_150585A0:
    edi = edi; /* 0x150585A0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150585A2: push ebp */
    ebp = esp; /* 0x150585A3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x150585A5: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150585A8: push dword ptr [ebp + 8] */
    ecx = ebp + (-0x10); /* 0x150585AB: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1502F870); /* 0x150585AE: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x150585B3: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x150585B6: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x150585B9: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x150585BC: push dword ptr [ebp + 0xc] */
    RECOMP_ICALL(MEM32(0x150C0190)); /* 0x150585BF: call dword ptr [0x150c0190] */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x150585C5: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150585D2; /* 0x150585C9: je 0x150585d2 */
L_150585CB:
    ecx = MEM32(ebp + (-0x8)); /* 0x150585CB: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x150585CE: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_150585D2:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x150585D2: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150585D3: ret  */
    RECOMP_REGS_OUT();
}

void sub_150585E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150585E0u);

L_150585E0:
    edi = edi; /* 0x150585E0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150585E2: push ebp */
    ebp = esp; /* 0x150585E3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x150585E5: sub esp, 0x10 */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x10); /* 0x150585E8: lea ecx, [ebp - 0x10] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x150585EB: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1502F870); /* 0x150585EE: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + 0x14), 0xFFFFFFFFu */ /* 0x150585F3: cmp dword ptr [ebp + 0x14], -1 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_150585FD; /* 0x150585F7: jge 0x150585fd */
L_150585F9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150585F9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1505860F; /* 0x150585FB: jmp 0x1505860f */
L_150585FD:
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x150585FD: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x15058600: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15058603: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15058606: push dword ptr [ebp + 0xc] */
    RECOMP_ICALL(MEM32(0x150C0244)); /* 0x15058609: call dword ptr [0x150c0244] */
    RECOMP_FLAGS_IN();
L_1505860F:
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x1505860F: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505861C; /* 0x15058613: je 0x1505861c */
L_15058615:
    ecx = MEM32(ebp + (-0x8)); /* 0x15058615: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x15058618: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_1505861C:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1505861C: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505861D: ret  */
    RECOMP_REGS_OUT();
}

void sub_15058624(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15058624u);

L_15058624:
    PUSH32(esp, 0x34u); /* 0x15058624: push 0x34 */
    PUSH32(esp, 0x150B0AA0u); /* 0x15058626: push 0x150b0aa0 */
    RECOMP_CALL(sub_1505E9E8); /* 0x1505862B: call 0x1505e9e8 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + 0x18); /* 0x15058630: mov edx, dword ptr [ebp + 0x18] */
    /* test edx, edx */ /* 0x15058633: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_15058659; /* 0x15058635: jle 0x15058659 */
L_15058637:
    eax = edx; /* 0x15058637: mov eax, edx */
    ecx = MEM32(ebp + 0x14); /* 0x15058639: mov ecx, dword ptr [ebp + 0x14] */
L_1505863C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1505863C: dec eax */
    _flag_k = FK_DEC;
    /* cmp MEM8(ecx), 0 */ /* 0x1505863D: cmp byte ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15058648; /* 0x15058640: je 0x15058648 */
L_15058642:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15058642: inc ecx */
    _flag_k = FK_INC;
    /* test eax, eax */ /* 0x15058643: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505863C; /* 0x15058645: jne 0x1505863c */
L_15058647:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x15058647: dec eax */
    _flag_k = FK_DEC;
L_15058648:
    ecx = edx; /* 0x15058648: mov ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x1505864A: sub ecx, eax */
    _flag_k = FK_CMP;
    eax = ecx + (-0x1); /* 0x1505864C: lea eax, [ecx - 1] */
    /* cmp eax, edx */ /* 0x1505864F: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) { eax = ecx; } /* 0x15058651: cmovl eax, ecx */
    edx = eax; /* 0x15058654: mov edx, eax */
    MEM32(ebp + 0x18) = edx; /* 0x15058656: mov dword ptr [ebp + 0x18], edx */
L_15058659:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x15058659: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x20)) = edi; /* 0x1505865B: mov dword ptr [ebp - 0x20], edi */
    esi = edi; /* 0x1505865E: mov esi, edi */
    MEM32(ebp + (-0x28)) = esi; /* 0x15058660: mov dword ptr [ebp - 0x28], esi */
    MEM32(ebp + (-0x34)) = edi; /* 0x15058663: mov dword ptr [ebp - 0x34], edi */
    MEM32(ebp + (-0x30)) = edi; /* 0x15058666: mov dword ptr [ebp - 0x30], edi */
    /* cmp MEM32(ebp + 0x24), esi */ /* 0x15058669: cmp dword ptr [ebp + 0x24], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x24)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15058679; /* 0x1505866C: jne 0x15058679 */
L_1505866E:
    eax = MEM32(ebp + 0x8); /* 0x1505866E: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax); /* 0x15058671: mov eax, dword ptr [eax] */
    eax = MEM32(eax + 0x4); /* 0x15058673: mov eax, dword ptr [eax + 4] */
    MEM32(ebp + 0x24) = eax; /* 0x15058676: mov dword ptr [ebp + 0x24], eax */
L_15058679:
    PUSH32(esp, edi); /* 0x15058679: push edi */
    PUSH32(esp, edi); /* 0x1505867A: push edi */
    PUSH32(esp, edx); /* 0x1505867B: push edx */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1505867C: push dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1505867F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15058681: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, 9); /* 0x15058682: push 9 */
    ecx = POP32_VAL(esp); /* 0x15058684: pop ecx */
    /* cmp MEM32(ebp + 0x28), esi */ /* 0x15058685: cmp dword ptr [ebp + 0x28], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x28)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) { eax = ecx; } /* 0x15058688: cmovne eax, ecx */
    PUSH32(esp, eax); /* 0x1505868B: push eax */
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x1505868C: push dword ptr [ebp + 0x24] */
    RECOMP_ICALL(MEM32(0x150C024C)); /* 0x1505868F: call dword ptr [0x150c024c] */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x15058695: mov ecx, eax */
    MEM32(ebp + (-0x24)) = ecx; /* 0x15058697: mov dword ptr [ebp - 0x24], ecx */
    /* test ecx, ecx */ /* 0x1505869A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150588F3; /* 0x1505869C: je 0x150588f3 */
L_150586A2:
    MEM32(ebp + (-0x4)) = edi; /* 0x150586A2: mov dword ptr [ebp - 4], edi */
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_15058708; /* 0x150586A5: jle 0x15058708 */
L_150586A7:
    PUSH32(esp, 0xFFFFFFE0u); /* 0x150586A7: push -0x20 */
    eax = POP32_VAL(esp); /* 0x150586A9: pop eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x150586AA: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x150586AC: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    /* cmp eax, 2 */ /* 0x150586AE: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_15058708; /* 0x150586B1: jb 0x15058708 */
L_150586B3:
    edx = ecx * 2 + 0x8; /* 0x150586B3: lea edx, [ecx*2 + 8] */
    eax = ecx + ecx; /* 0x150586BA: lea eax, [ecx + ecx] */
    /* cmp edx, eax */ /* 0x150586BD: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_15058708; /* 0x150586BF: jbe 0x15058708 */
L_150586C1:
    /* cmp edx, 0x400u */ /* 0x150586C1: cmp edx, 0x400 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x400u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_150586EA; /* 0x150586C7: ja 0x150586ea */
L_150586C9:
    eax = edx; /* 0x150586C9: mov eax, edx */
    RECOMP_CALL(sub_15069EB0); /* 0x150586CB: call 0x15069eb0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x18)) = esp; /* 0x150586D0: mov dword ptr [ebp - 0x18], esp */
    ebx = esp; /* 0x150586D3: mov ebx, esp */
    MEM32(ebp + (-0x38)) = ebx; /* 0x150586D5: mov dword ptr [ebp - 0x38], ebx */
    /* test ebx, ebx */ /* 0x150586D8: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505870A; /* 0x150586DA: je 0x1505870a */
L_150586DC:
    MEM32(ebx) = 0xCCCCu; /* 0x150586DC: mov dword ptr [ebx], 0xcccc */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 8; /* 0x150586E2: add ebx, 8 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x38)) = ebx; /* 0x150586E5: mov dword ptr [ebp - 0x38], ebx */
    goto L_1505870A; /* 0x150586E8: jmp 0x1505870a */
L_150586EA:
    PUSH32(esp, edx); /* 0x150586EA: push edx */
    RECOMP_CALL(sub_15048A30); /* 0x150586EB: call 0x15048a30 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150586F0: pop ecx */
    ebx = eax; /* 0x150586F1: mov ebx, eax */
    MEM32(ebp + (-0x3C)) = ebx; /* 0x150586F3: mov dword ptr [ebp - 0x3c], ebx */
    /* test ebx, ebx */ /* 0x150586F6: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505870A; /* 0x150586F8: je 0x1505870a */
L_150586FA:
    MEM32(ebx) = 0xDDDDu; /* 0x150586FA: mov dword ptr [ebx], 0xdddd */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 8; /* 0x15058700: add ebx, 8 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x3C)) = ebx; /* 0x15058703: mov dword ptr [ebp - 0x3c], ebx */
    goto L_1505870A; /* 0x15058706: jmp 0x1505870a */
L_15058708:
    ebx = edi; /* 0x15058708: mov ebx, edi */
L_1505870A:
    MEM32(ebp + (-0x2C)) = ebx; /* 0x1505870A: mov dword ptr [ebp - 0x2c], ebx */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1505870D: mov dword ptr [ebp - 4], 0xfffffffe */
    goto L_15058733; /* 0x15058714: jmp 0x15058733 */
L_15058733:
    /* test ebx, ebx */ /* 0x15058733: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15058757; /* 0x15058735: jne 0x15058757 */
L_15058737:
    eax = MEM32(ebp + (-0x24)); /* 0x15058737: mov eax, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1505873A: add eax, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1505873C: push eax */
    RECOMP_CALL(sub_15048F2F); /* 0x1505873D: call 0x15048f2f */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15058742: pop ecx */
    ebx = eax; /* 0x15058743: mov ebx, eax */
    MEM32(ebp + (-0x2C)) = ebx; /* 0x15058745: mov dword ptr [ebp - 0x2c], ebx */
    /* test ebx, ebx */ /* 0x15058748: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150588F3; /* 0x1505874A: je 0x150588f3 */
L_15058750:
    MEM32(ebp + (-0x34)) = 1; /* 0x15058750: mov dword ptr [ebp - 0x34], 1 */
L_15058757:
    PUSH32(esp, MEM32(ebp + (-0x24))); /* 0x15058757: push dword ptr [ebp - 0x24] */
    PUSH32(esp, ebx); /* 0x1505875A: push ebx */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1505875B: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1505875E: push dword ptr [ebp + 0x14] */
    PUSH32(esp, 1); /* 0x15058761: push 1 */
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x15058763: push dword ptr [ebp + 0x24] */
    RECOMP_ICALL(MEM32(0x150C024C)); /* 0x15058766: call dword ptr [0x150c024c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1505876C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150587B3; /* 0x1505876E: je 0x150587b3 */
L_15058770:
    PUSH32(esp, edi); /* 0x15058770: push edi */
    PUSH32(esp, edi); /* 0x15058771: push edi */
    PUSH32(esp, MEM32(ebp + (-0x24))); /* 0x15058772: push dword ptr [ebp - 0x24] */
    PUSH32(esp, ebx); /* 0x15058775: push ebx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15058776: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15058779: push dword ptr [ebp + 0xc] */
    RECOMP_ICALL(MEM32(0x150C018C)); /* 0x1505877C: call dword ptr [0x150c018c] */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x15058782: mov ecx, eax */
    MEM32(ebp + (-0x20)) = ecx; /* 0x15058784: mov dword ptr [ebp - 0x20], ecx */
    /* test ecx, ecx */ /* 0x15058787: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150587B3; /* 0x15058789: je 0x150587b3 */
L_1505878B:
    /* test MEM32(ebp + 0x10), 0x400u */ /* 0x1505878B: test dword ptr [ebp + 0x10], 0x400 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0x400u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150587CB; /* 0x15058792: je 0x150587cb */
L_15058794:
    eax = MEM32(ebp + 0x20); /* 0x15058794: mov eax, dword ptr [ebp + 0x20] */
    /* test eax, eax */ /* 0x15058797: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150587B3; /* 0x15058799: je 0x150587b3 */
L_1505879B:
    /* cmp ecx, eax */ /* 0x1505879B: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_150587B3; /* 0x1505879D: jg 0x150587b3 */
L_1505879F:
    PUSH32(esp, eax); /* 0x1505879F: push eax */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x150587A0: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + (-0x24))); /* 0x150587A3: push dword ptr [ebp - 0x24] */
    PUSH32(esp, ebx); /* 0x150587A6: push ebx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x150587A7: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x150587AA: push dword ptr [ebp + 0xc] */
    RECOMP_ICALL(MEM32(0x150C018C)); /* 0x150587AD: call dword ptr [0x150c018c] */
    RECOMP_FLAGS_IN();
L_150587B3:
    edi = MEM32(ebp + (-0x20)); /* 0x150587B3: mov edi, dword ptr [ebp - 0x20] */
L_150587B6:
    /* cmp MEM32(ebp + (-0x30)), 0 */ /* 0x150587B6: cmp dword ptr [ebp - 0x30], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x30))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150588CB; /* 0x150587BA: je 0x150588cb */
L_150587C0:
    PUSH32(esp, esi); /* 0x150587C0: push esi */
    RECOMP_CALL(sub_15048840); /* 0x150587C1: call 0x15048840 */
    RECOMP_FLAGS_IN();
    goto L_150588D5; /* 0x150587C6: jmp 0x150588d5 */
L_150587CB:
    MEM32(ebp + (-0x4)) = 1; /* 0x150587CB: mov dword ptr [ebp - 4], 1 */
    /* test ecx, ecx */ /* 0x150587D2: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_15058839; /* 0x150587D4: jle 0x15058839 */
L_150587D6:
    PUSH32(esp, 0xFFFFFFE0u); /* 0x150587D6: push -0x20 */
    eax = POP32_VAL(esp); /* 0x150587D8: pop eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x150587D9: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x150587DB: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    /* cmp eax, 2 */ /* 0x150587DD: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_15058839; /* 0x150587E0: jb 0x15058839 */
L_150587E2:
    eax = ecx * 2 + 0x8; /* 0x150587E2: lea eax, [ecx*2 + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x150587E9: add ecx, ecx */
    _flag_k = FK_ADD;
    /* cmp eax, ecx */ /* 0x150587EB: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_15058836; /* 0x150587ED: jbe 0x15058836 */
L_150587EF:
    /* cmp eax, 0x400u */ /* 0x150587EF: cmp eax, 0x400 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x400u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_15058818; /* 0x150587F4: ja 0x15058818 */
L_150587F6:
    RECOMP_CALL(sub_15069EB0); /* 0x150587F6: call 0x15069eb0 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x18)) = esp; /* 0x150587FB: mov dword ptr [ebp - 0x18], esp */
    esi = esp; /* 0x150587FE: mov esi, esp */
    MEM32(ebp + (-0x40)) = esi; /* 0x15058800: mov dword ptr [ebp - 0x40], esi */
    /* test esi, esi */ /* 0x15058803: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15058813; /* 0x15058805: je 0x15058813 */
L_15058807:
    MEM32(esi) = 0xCCCCu; /* 0x15058807: mov dword ptr [esi], 0xcccc */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 8; /* 0x1505880D: add esi, 8 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x40)) = esi; /* 0x15058810: mov dword ptr [ebp - 0x40], esi */
L_15058813:
    ecx = MEM32(ebp + (-0x20)); /* 0x15058813: mov ecx, dword ptr [ebp - 0x20] */
    goto L_1505883B; /* 0x15058816: jmp 0x1505883b */
L_15058818:
    PUSH32(esp, eax); /* 0x15058818: push eax */
    RECOMP_CALL(sub_15048A30); /* 0x15058819: call 0x15048a30 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505881E: pop ecx */
    esi = eax; /* 0x1505881F: mov esi, eax */
    MEM32(ebp + (-0x44)) = esi; /* 0x15058821: mov dword ptr [ebp - 0x44], esi */
    /* test esi, esi */ /* 0x15058824: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_15058813; /* 0x15058826: je 0x15058813 */
L_15058828:
    MEM32(esi) = 0xDDDDu; /* 0x15058828: mov dword ptr [esi], 0xdddd */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 8; /* 0x1505882E: add esi, 8 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x44)) = esi; /* 0x15058831: mov dword ptr [ebp - 0x44], esi */
    RECOMP_BACKEDGE();
    goto L_15058813; /* 0x15058834: jmp 0x15058813 */
L_15058836:
    ecx = MEM32(ebp + (-0x20)); /* 0x15058836: mov ecx, dword ptr [ebp - 0x20] */
L_15058839:
    esi = edi; /* 0x15058839: mov esi, edi */
L_1505883B:
    MEM32(ebp + (-0x28)) = esi; /* 0x1505883B: mov dword ptr [ebp - 0x28], esi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1505883E: mov dword ptr [ebp - 4], 0xfffffffe */
    goto L_15058867; /* 0x15058845: jmp 0x15058867 */
L_15058867:
    /* test esi, esi */ /* 0x15058867: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15058889; /* 0x15058869: jne 0x15058889 */
L_1505886B:
    eax = ecx + ecx; /* 0x1505886B: lea eax, [ecx + ecx] */
    PUSH32(esp, eax); /* 0x1505886E: push eax */
    RECOMP_CALL(sub_15048F2F); /* 0x1505886F: call 0x15048f2f */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15058874: pop ecx */
    esi = eax; /* 0x15058875: mov esi, eax */
    /* test esi, esi */ /* 0x15058877: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_150587B3; /* 0x15058879: je 0x150587b3 */
L_1505887F:
    MEM32(ebp + (-0x30)) = 1; /* 0x1505887F: mov dword ptr [ebp - 0x30], 1 */
    ecx = MEM32(ebp + (-0x20)); /* 0x15058886: mov ecx, dword ptr [ebp - 0x20] */
L_15058889:
    PUSH32(esp, ecx); /* 0x15058889: push ecx */
    PUSH32(esp, esi); /* 0x1505888A: push esi */
    PUSH32(esp, MEM32(ebp + (-0x24))); /* 0x1505888B: push dword ptr [ebp - 0x24] */
    PUSH32(esp, ebx); /* 0x1505888E: push ebx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1505888F: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15058892: push dword ptr [ebp + 0xc] */
    RECOMP_ICALL(MEM32(0x150C018C)); /* 0x15058895: call dword ptr [0x150c018c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1505889B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_150587B3; /* 0x1505889D: je 0x150587b3 */
L_150588A3:
    PUSH32(esp, edi); /* 0x150588A3: push edi */
    eax = MEM32(ebp + (-0x20)); /* 0x150588A4: mov eax, dword ptr [ebp - 0x20] */
    PUSH32(esp, edi); /* 0x150588A7: push edi */
    /* cmp MEM32(ebp + 0x20), 0 */ /* 0x150588A8: cmp dword ptr [ebp + 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x20)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150588C3; /* 0x150588AC: jne 0x150588c3 */
L_150588AE:
    PUSH32(esp, edi); /* 0x150588AE: push edi */
    PUSH32(esp, edi); /* 0x150588AF: push edi */
L_150588B0:
    PUSH32(esp, eax); /* 0x150588B0: push eax */
    PUSH32(esp, esi); /* 0x150588B1: push esi */
    PUSH32(esp, edi); /* 0x150588B2: push edi */
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x150588B3: push dword ptr [ebp + 0x24] */
    RECOMP_ICALL(MEM32(0x150C0248)); /* 0x150588B6: call dword ptr [0x150c0248] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x150588BC: mov edi, eax */
    RECOMP_BACKEDGE();
    goto L_150587B6; /* 0x150588BE: jmp 0x150587b6 */
L_150588C3:
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x150588C3: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x150588C6: push dword ptr [ebp + 0x1c] */
    RECOMP_BACKEDGE();
    goto L_150588B0; /* 0x150588C9: jmp 0x150588b0 */
L_150588CB:
    /* test esi, esi */ /* 0x150588CB: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150588D6; /* 0x150588CD: je 0x150588d6 */
L_150588CF:
    PUSH32(esp, esi); /* 0x150588CF: push esi */
    RECOMP_CALL(sub_1504ABA0); /* 0x150588D0: call 0x1504aba0 */
    RECOMP_FLAGS_IN();
L_150588D5:
    ecx = POP32_VAL(esp); /* 0x150588D5: pop ecx */
L_150588D6:
    /* cmp MEM32(ebp + (-0x34)), 0 */ /* 0x150588D6: cmp dword ptr [ebp - 0x34], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x34))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150588E4; /* 0x150588DA: je 0x150588e4 */
L_150588DC:
    PUSH32(esp, ebx); /* 0x150588DC: push ebx */
    RECOMP_CALL(sub_15048840); /* 0x150588DD: call 0x15048840 */
    RECOMP_FLAGS_IN();
    goto L_150588EE; /* 0x150588E2: jmp 0x150588ee */
L_150588E4:
    /* test ebx, ebx */ /* 0x150588E4: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150588EF; /* 0x150588E6: je 0x150588ef */
L_150588E8:
    PUSH32(esp, ebx); /* 0x150588E8: push ebx */
    RECOMP_CALL(sub_1504ABA0); /* 0x150588E9: call 0x1504aba0 */
    RECOMP_FLAGS_IN();
L_150588EE:
    ecx = POP32_VAL(esp); /* 0x150588EE: pop ecx */
L_150588EF:
    eax = edi; /* 0x150588EF: mov eax, edi */
    goto L_150588F5; /* 0x150588F1: jmp 0x150588f5 */
L_150588F3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150588F3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_150588F5:
    esp = ebp + (-0x54); /* 0x150588F5: lea esp, [ebp - 0x54] */
    ecx = MEM32(ebp + (-0x10)); /* 0x150588F8: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x150588FB: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x15058902: pop ecx */
    edi = POP32_VAL(esp); /* 0x15058903: pop edi */
    esi = POP32_VAL(esp); /* 0x15058904: pop esi */
    ebx = POP32_VAL(esp); /* 0x15058905: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15058906: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15058907: ret  */
    RECOMP_REGS_OUT();
}

void sub_15058910(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15058910u);

L_15058910:
    edi = edi; /* 0x15058910: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15058912: push ebp */
    ebp = esp; /* 0x15058913: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x15058915: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15058918: push dword ptr [ebp + 8] */
    ecx = ebp + (-0x10); /* 0x1505891B: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1502F870); /* 0x1505891E: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x28)); /* 0x15058923: push dword ptr [ebp + 0x28] */
    eax = ebp + (-0x10); /* 0x15058926: lea eax, [ebp - 0x10] */
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x15058929: push dword ptr [ebp + 0x24] */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x1505892C: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1505892F: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x15058932: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x15058935: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15058938: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1505893B: push dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x1505893E: push eax */
    RECOMP_CALL(sub_15058624); /* 0x1505893F: call 0x15058624 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x24u; /* 0x15058944: add esp, 0x24 */
    _flag_k = FK_ADD;
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x15058947: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15058954; /* 0x1505894B: je 0x15058954 */
L_1505894D:
    ecx = MEM32(ebp + (-0x8)); /* 0x1505894D: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x15058950: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_15058954:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15058954: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15058955: ret  */
    RECOMP_REGS_OUT();
}

void sub_15058960(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15058960u);

L_15058960:
    edi = edi; /* 0x15058960: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15058962: push ebp */
    ebp = esp; /* 0x15058963: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x15058965: sub esp, 0x10 */
    _flag_k = FK_CMP;
    ecx = ebp + (-0x10); /* 0x15058968: lea ecx, [ebp - 0x10] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1505896B: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1502F870); /* 0x1505896E: call 0x1502f870 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x18); /* 0x15058973: mov eax, dword ptr [ebp + 0x18] */
    /* test eax, eax */ /* 0x15058976: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_15058985; /* 0x15058978: jle 0x15058985 */
L_1505897A:
    PUSH32(esp, eax); /* 0x1505897A: push eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1505897B: push dword ptr [ebp + 0x14] */
    RECOMP_CALL(sub_1508F6A0); /* 0x1505897E: call 0x1508f6a0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15058983: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15058984: pop ecx */
L_15058985:
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x15058985: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x15058988: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, eax); /* 0x1505898B: push eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1505898C: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1505898F: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15058992: push dword ptr [ebp + 0xc] */
    RECOMP_ICALL(MEM32(0x150C018C)); /* 0x15058995: call dword ptr [0x150c018c] */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(ebp + (-0x4)), 0 */ /* 0x1505899B: cmp byte ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150589A8; /* 0x1505899F: je 0x150589a8 */
L_150589A1:
    ecx = MEM32(ebp + (-0x8)); /* 0x150589A1: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x70)); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ecx + 0x70) = MEM32(ecx + 0x70) & 0xFFFFFFFDu; /* 0x150589A4: and dword ptr [ecx + 0x70], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
L_150589A8:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x150589A8: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150589A9: ret  */
    RECOMP_REGS_OUT();
}

void sub_150589B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150589B0u);

L_150589B0:
    edi = edi; /* 0x150589B0: mov edi, edi */
    PUSH32(esp, esi); /* 0x150589B2: push esi */
    PUSH32(esp, 4); /* 0x150589B3: push 4 */
    PUSH32(esp, 0x20u); /* 0x150589B5: push 0x20 */
    RECOMP_CALL(sub_15048EE2); /* 0x150589B7: call 0x15048ee2 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x150589BC: mov esi, eax */
    PUSH32(esp, esi); /* 0x150589BE: push esi */
    RECOMP_CALL(sub_15068652); /* 0x150589BF: call 0x15068652 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x150589C4: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(0x150BECCC) = eax; /* 0x150589C7: mov dword ptr [0x150beccc], eax */
    MEM32(0x150BECC8) = eax; /* 0x150589CC: mov dword ptr [0x150becc8], eax */
    /* test esi, esi */ /* 0x150589D1: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_150589DA; /* 0x150589D3: jne 0x150589da */
L_150589D5:
    PUSH32(esp, 0x18u); /* 0x150589D5: push 0x18 */
    eax = POP32_VAL(esp); /* 0x150589D7: pop eax */
    esi = POP32_VAL(esp); /* 0x150589D8: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150589D9: ret  */
L_150589DA:
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x150589DA: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150589DD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x150589DF: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150589E0: ret  */
    RECOMP_REGS_OUT();
}

void sub_150589F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150589F0u);

L_150589F0:
    PUSH32(esp, 0xCu); /* 0x150589F0: push 0xc */
    PUSH32(esp, 0x150B0AE8u); /* 0x150589F2: push 0x150b0ae8 */
    RECOMP_CALL(sub_1505E988); /* 0x150589F7: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) & 0; /* 0x150589FC: and dword ptr [ebp - 0x1c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_15068427); /* 0x15058A00: call 0x15068427 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x15058A05: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x15058A09: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x15058A0C: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15058A0F: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15058A4C); /* 0x15058A12: call 0x15058a4c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15058A17: add esp, 0xc */
    _flag_k = FK_ADD;
    esi = eax; /* 0x15058A1A: mov esi, eax */
    MEM32(ebp + (-0x1C)) = esi; /* 0x15058A1C: mov dword ptr [ebp - 0x1c], esi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x15058A1F: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_15058A40); /* 0x15058A26: call 0x15058a40 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x15058A2B: mov eax, esi */
    ecx = MEM32(ebp + (-0x10)); /* 0x15058A2D: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x15058A30: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x15058A37: pop ecx */
    edi = POP32_VAL(esp); /* 0x15058A38: pop edi */
    esi = POP32_VAL(esp); /* 0x15058A39: pop esi */
    ebx = POP32_VAL(esp); /* 0x15058A3A: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15058A3B: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15058A3C: ret  */
    RECOMP_REGS_OUT();
}

void sub_15058A40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15058A40u);

L_15058A40:
    RECOMP_CALL(sub_15068436); /* 0x15058A40: call 0x15068436 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15058A45: ret  */
    RECOMP_REGS_OUT();
}

void sub_15058A4C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15058A4Cu);

L_15058A4C:
    edi = edi; /* 0x15058A4C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15058A4E: push ebp */
    ebp = esp; /* 0x15058A4F: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x15058A51: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x15058A52: mov ebx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x15058A55: push esi */
    PUSH32(esp, edi); /* 0x15058A56: push edi */
    PUSH32(esp, MEM32(ebx)); /* 0x15058A57: push dword ptr [ebx] */
    RECOMP_CALL(sub_15048600); /* 0x15058A59: call 0x15048600 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0x10); /* 0x15058A5E: mov esi, dword ptr [ebp + 0x10] */
    edi = eax; /* 0x15058A61: mov edi, eax */
    ecx = POP32_VAL(esp); /* 0x15058A63: pop ecx */
    ecx = MEM32(esi); /* 0x15058A64: mov ecx, dword ptr [esi] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebx); /* 0x15058A66: sub ecx, dword ptr [ebx] */
    _flag_k = FK_CMP;
    /* cmp edi, ecx */ /* 0x15058A68: cmp edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_15058AB8; /* 0x15058A6A: ja 0x15058ab8 */
L_15058A6C:
    ecx = 0x800u; /* 0x15058A6C: mov ecx, 0x800 */
    /* cmp edi, ecx */ /* 0x15058A71: cmp edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, 0xFFFFFFE0u); /* 0x15058A73: push -0x20 */
    if (CMP_B(_flag_a, _flag_b)) { ecx = edi; } /* 0x15058A75: cmovb ecx, edi */
    eax = POP32_VAL(esp); /* 0x15058A78: pop eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x15058A79: sub eax, ecx */
    _flag_k = FK_CMP;
    /* cmp eax, edi */ /* 0x15058A7B: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_15058A92; /* 0x15058A7D: jb 0x15058a92 */
L_15058A7F:
    eax = ecx + edi; /* 0x15058A7F: lea eax, [ecx + edi] */
    PUSH32(esp, eax); /* 0x15058A82: push eax */
    PUSH32(esp, MEM32(ebx)); /* 0x15058A83: push dword ptr [ebx] */
    RECOMP_CALL(sub_15048F7B); /* 0x15058A85: call 0x15048f7b */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15058A8A: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15058A8B: pop ecx */
    ecx = eax; /* 0x15058A8C: mov ecx, eax */
    /* test ecx, ecx */ /* 0x15058A8E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15058AAA; /* 0x15058A90: jne 0x15058aaa */
L_15058A92:
    /* cmp edi, 0xFFFFFFD0u */ /* 0x15058A92: cmp edi, -0x30 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFD0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_15058AC7; /* 0x15058A95: ja 0x15058ac7 */
L_15058A97:
    eax = edi + 0x10; /* 0x15058A97: lea eax, [edi + 0x10] */
    PUSH32(esp, eax); /* 0x15058A9A: push eax */
    PUSH32(esp, MEM32(ebx)); /* 0x15058A9B: push dword ptr [ebx] */
    RECOMP_CALL(sub_15048F7B); /* 0x15058A9D: call 0x15048f7b */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15058AA2: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15058AA3: pop ecx */
    ecx = eax; /* 0x15058AA4: mov ecx, eax */
    /* test ecx, ecx */ /* 0x15058AA6: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15058AC7; /* 0x15058AA8: je 0x15058ac7 */
L_15058AAA:
    eax = MEM32(esi); /* 0x15058AAA: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebx); /* 0x15058AAC: sub eax, dword ptr [ebx] */
    _flag_k = FK_CMP;
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x15058AAE: sar eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 2u);
    eax = ecx + eax * 4; /* 0x15058AB1: lea eax, [ecx + eax*4] */
    MEM32(esi) = eax; /* 0x15058AB4: mov dword ptr [esi], eax */
    MEM32(ebx) = ecx; /* 0x15058AB6: mov dword ptr [ebx], ecx */
L_15058AB8:
    ecx = MEM32(esi); /* 0x15058AB8: mov ecx, dword ptr [esi] */
    eax = MEM32(ebp + 0x8); /* 0x15058ABA: mov eax, dword ptr [ebp + 8] */
    MEM32(ecx) = eax; /* 0x15058ABD: mov dword ptr [ecx], eax */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi) = MEM32(esi) + 4; /* 0x15058ABF: add dword ptr [esi], 4 */
    _flag_k = FK_ADD;
L_15058AC2:
    edi = POP32_VAL(esp); /* 0x15058AC2: pop edi */
    esi = POP32_VAL(esp); /* 0x15058AC3: pop esi */
    ebx = POP32_VAL(esp); /* 0x15058AC4: pop ebx */
    ebp = POP32_VAL(esp); /* 0x15058AC5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15058AC6: ret  */
L_15058AC7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15058AC7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_15058AC2; /* 0x15058AC9: jmp 0x15058ac2 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_15058AE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15058AE0u);

L_15058AE0:
    PUSH32(esp, 0xCu); /* 0x15058AE0: push 0xc */
    PUSH32(esp, 0x150B0AC8u); /* 0x15058AE2: push 0x150b0ac8 */
    RECOMP_CALL(sub_1505E988); /* 0x15058AE7: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) & 0; /* 0x15058AEC: and dword ptr [ebp - 0x1c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_15068427); /* 0x15058AF0: call 0x15068427 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x15058AF5: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15058AF9: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15058B34); /* 0x15058AFC: call 0x15058b34 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15058B01: pop ecx */
    esi = eax; /* 0x15058B02: mov esi, eax */
    MEM32(ebp + (-0x1C)) = esi; /* 0x15058B04: mov dword ptr [ebp - 0x1c], esi */
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x15058B07: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_15058B28); /* 0x15058B0E: call 0x15058b28 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x15058B13: mov eax, esi */
    ecx = MEM32(ebp + (-0x10)); /* 0x15058B15: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x15058B18: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x15058B1F: pop ecx */
    edi = POP32_VAL(esp); /* 0x15058B20: pop edi */
    esi = POP32_VAL(esp); /* 0x15058B21: pop esi */
    ebx = POP32_VAL(esp); /* 0x15058B22: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15058B23: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15058B24: ret  */
    RECOMP_REGS_OUT();
}

void sub_15058B28(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15058B28u);

L_15058B28:
    RECOMP_CALL(sub_15068436); /* 0x15058B28: call 0x15068436 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15058B2D: ret  */
    RECOMP_REGS_OUT();
}

void sub_15058B34(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15058B34u);

L_15058B34:
    edi = edi; /* 0x15058B34: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15058B36: push ebp */
    ebp = esp; /* 0x15058B37: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x15058B39: push ecx */
    eax = MEM32(0x150BECCC); /* 0x15058B3A: mov eax, dword ptr [0x150beccc] */
    PUSH32(esp, ebx); /* 0x15058B3F: push ebx */
    PUSH32(esp, esi); /* 0x15058B40: push esi */
    PUSH32(esp, edi); /* 0x15058B41: push edi */
    /* test eax, eax */ /* 0x15058B42: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15058BFA; /* 0x15058B44: je 0x15058bfa */
L_15058B4A:
    /* cmp MEM32(0x150BECC8), 0 */ /* 0x15058B4A: cmp dword ptr [0x150becc8], 0 */
    _flag_a = (uint32_t)(MEM32(0x150BECC8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15058BFA; /* 0x15058B51: je 0x15058bfa */
L_15058B57:
    PUSH32(esp, eax); /* 0x15058B57: push eax */
    RECOMP_CALL(sub_1506863C); /* 0x15058B58: call 0x1506863c */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(0x150BECC8)); /* 0x15058B5D: push dword ptr [0x150becc8] */
    ebx = eax; /* 0x15058B63: mov ebx, eax */
    RECOMP_CALL(sub_1506863C); /* 0x15058B65: call 0x1506863c */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = eax; /* 0x15058B6A: mov dword ptr [ebp - 4], eax */
    ecx = POP32_VAL(esp); /* 0x15058B6D: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15058B6E: pop ecx */
    /* cmp eax, ebx */ /* 0x15058B6F: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_15058BFA; /* 0x15058B71: jb 0x15058bfa */
L_15058B77:
    esi = eax; /* 0x15058B77: mov esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ebx; /* 0x15058B79: sub esi, ebx */
    _flag_k = FK_CMP;
    eax = esi + 0x4; /* 0x15058B7B: lea eax, [esi + 4] */
    /* cmp eax, 4 */ /* 0x15058B7E: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_15058BFA; /* 0x15058B81: jb 0x15058bfa */
L_15058B83:
    PUSH32(esp, ebx); /* 0x15058B83: push ebx */
    RECOMP_CALL(sub_15048600); /* 0x15058B84: call 0x15048600 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x15058B89: mov edi, eax */
    eax = esi + 0x4; /* 0x15058B8B: lea eax, [esi + 4] */
    ecx = POP32_VAL(esp); /* 0x15058B8E: pop ecx */
    /* cmp edi, eax */ /* 0x15058B8F: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_15058BD8; /* 0x15058B91: jae 0x15058bd8 */
L_15058B93:
    eax = 0x800u; /* 0x15058B93: mov eax, 0x800 */
    /* cmp edi, eax */ /* 0x15058B98: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) { eax = edi; } /* 0x15058B9A: cmovb eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x15058B9D: add eax, edi */
    _flag_k = FK_ADD;
    /* cmp eax, edi */ /* 0x15058B9F: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_15058BB0; /* 0x15058BA1: jb 0x15058bb0 */
L_15058BA3:
    PUSH32(esp, eax); /* 0x15058BA3: push eax */
    PUSH32(esp, ebx); /* 0x15058BA4: push ebx */
    RECOMP_CALL(sub_15048F7B); /* 0x15058BA5: call 0x15048f7b */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15058BAA: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15058BAB: pop ecx */
    /* test eax, eax */ /* 0x15058BAC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15058BC4; /* 0x15058BAE: jne 0x15058bc4 */
L_15058BB0:
    eax = edi + 0x10; /* 0x15058BB0: lea eax, [edi + 0x10] */
    /* cmp eax, edi */ /* 0x15058BB3: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_15058BFA; /* 0x15058BB5: jb 0x15058bfa */
L_15058BB7:
    PUSH32(esp, eax); /* 0x15058BB7: push eax */
    PUSH32(esp, ebx); /* 0x15058BB8: push ebx */
    RECOMP_CALL(sub_15048F7B); /* 0x15058BB9: call 0x15048f7b */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15058BBE: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15058BBF: pop ecx */
    /* test eax, eax */ /* 0x15058BC0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15058BFA; /* 0x15058BC2: je 0x15058bfa */
L_15058BC4:
    if (2u) _cf = (((esi) >> 1) & 1u); /* 0x15058BC4: sar esi, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)esi >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = (uint32_t)((int32_t)esi >> 2u);
    PUSH32(esp, eax); /* 0x15058BC7: push eax */
    esi = eax + esi * 4; /* 0x15058BC8: lea esi, [eax + esi*4] */
    RECOMP_CALL(sub_15068652); /* 0x15058BCB: call 0x15068652 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15058BD0: pop ecx */
    MEM32(0x150BECCC) = eax; /* 0x15058BD1: mov dword ptr [0x150beccc], eax */
    goto L_15058BDB; /* 0x15058BD6: jmp 0x15058bdb */
L_15058BD8:
    esi = MEM32(ebp + (-0x4)); /* 0x15058BD8: mov esi, dword ptr [ebp - 4] */
L_15058BDB:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15058BDB: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15068652); /* 0x15058BDE: call 0x15068652 */
    RECOMP_FLAGS_IN();
    ecx = esi + 0x4; /* 0x15058BE3: lea ecx, [esi + 4] */
    MEM32(esi) = eax; /* 0x15058BE6: mov dword ptr [esi], eax */
    PUSH32(esp, ecx); /* 0x15058BE8: push ecx */
    RECOMP_CALL(sub_15068652); /* 0x15058BE9: call 0x15068652 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15058BEE: pop ecx */
    MEM32(0x150BECC8) = eax; /* 0x15058BEF: mov dword ptr [0x150becc8], eax */
    eax = MEM32(ebp + 0x8); /* 0x15058BF4: mov eax, dword ptr [ebp + 8] */
    ecx = POP32_VAL(esp); /* 0x15058BF7: pop ecx */
    goto L_15058BFC; /* 0x15058BF8: jmp 0x15058bfc */
L_15058BFA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15058BFA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_15058BFC:
    edi = POP32_VAL(esp); /* 0x15058BFC: pop edi */
    esi = POP32_VAL(esp); /* 0x15058BFD: pop esi */
    ebx = POP32_VAL(esp); /* 0x15058BFE: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15058BFF: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15058C00: ret  */
    RECOMP_REGS_OUT();
}

void sub_15058C10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15058C10u);

L_15058C10:
    edi = edi; /* 0x15058C10: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15058C12: push ebp */
    ebp = esp; /* 0x15058C13: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15058C15: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_15058AE0); /* 0x15058C18: call 0x15058ae0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x15058C1D: neg eax */
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x15058C1F: pop ecx */
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x15058C20: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x15058C22: neg eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x15058C24: dec eax */
    _flag_k = FK_DEC;
    ebp = POP32_VAL(esp); /* 0x15058C25: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15058C26: ret  */
    RECOMP_REGS_OUT();
}

void sub_15058C30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15058C30u);

L_15058C30:
    RECOMP_CALL(sub_15068820); /* 0x15058C30: call 0x15068820 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x64u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x64u; /* 0x15058C35: add eax, 0x64 */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15058C38: ret  */
    RECOMP_REGS_OUT();
}

void sub_15058C3F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15058C3Fu);

L_15058C3F:
    PUSH32(esp, MEM32(0x150BDBAC)); /* 0x15058C3F: push dword ptr [0x150bdbac] */
    RECOMP_CALL(sub_1506863C); /* 0x15058C45: call 0x1506863c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15058C4A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15058C4B: ret  */
    RECOMP_REGS_OUT();
}

void sub_15058C60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15058C60u);

L_15058C60:
    RECOMP_CALL(sub_15068820); /* 0x15058C60: call 0x15068820 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x60u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x60u; /* 0x15058C65: add eax, 0x60 */
    _flag_k = FK_ADD;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15058C68: ret  */
    RECOMP_REGS_OUT();
}

void sub_15058C6F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15058C6Fu);

L_15058C6F:
    edi = edi; /* 0x15058C6F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15058C71: push ebp */
    ebp = esp; /* 0x15058C72: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x15058C74: mov eax, dword ptr [ebp + 8] */
    MEM32(0x150BDBA4) = eax; /* 0x15058C77: mov dword ptr [0x150bdba4], eax */
    MEM32(0x150BDBA8) = eax; /* 0x15058C7C: mov dword ptr [0x150bdba8], eax */
    MEM32(0x150BDBAC) = eax; /* 0x15058C81: mov dword ptr [0x150bdbac], eax */
    MEM32(0x150BDBB0) = eax; /* 0x15058C86: mov dword ptr [0x150bdbb0], eax */
    ebp = POP32_VAL(esp); /* 0x15058C8B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15058C8C: ret  */
    RECOMP_REGS_OUT();
}

void sub_15058CA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15058CA0u);

L_15058CA0:
    PUSH32(esp, 0x10u); /* 0x15058CA0: push 0x10 */
    PUSH32(esp, 0x150B0B48u); /* 0x15058CA2: push 0x150b0b48 */
    RECOMP_CALL(sub_1505E988); /* 0x15058CA7: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) & 0; /* 0x15058CAC: and dword ptr [ebp - 0x1c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0); /* 0x15058CB0: push 0 */
    RECOMP_CALL(sub_15068D80); /* 0x15058CB2: call 0x15068d80 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15058CB7: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x15058CB8: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x15058CBC: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15058CD7; /* 0x15058CC0: jne 0x15058cd7 */
L_15058CC2:
    ebx = 0x150BDBA4u; /* 0x15058CC2: mov ebx, 0x150bdba4 */
    PUSH32(esp, MEM32(0x150BDBA4)); /* 0x15058CC7: push dword ptr [0x150bdba4] */
    RECOMP_CALL(sub_1506863C); /* 0x15058CCD: call 0x1506863c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15058CD2: pop ecx */
    PUSH32(esp, 2); /* 0x15058CD3: push 2 */
    goto L_15058CEA; /* 0x15058CD5: jmp 0x15058cea */
L_15058CD7:
    ebx = 0x150BDBA8u; /* 0x15058CD7: mov ebx, 0x150bdba8 */
    PUSH32(esp, MEM32(0x150BDBA8)); /* 0x15058CDC: push dword ptr [0x150bdba8] */
    RECOMP_CALL(sub_1506863C); /* 0x15058CE2: call 0x1506863c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15058CE7: pop ecx */
    PUSH32(esp, 0x15u); /* 0x15058CE8: push 0x15 */
L_15058CEA:
    esi = eax; /* 0x15058CEA: mov esi, eax */
    MEM32(ebp + (-0x1C)) = esi; /* 0x15058CEC: mov dword ptr [ebp - 0x1c], esi */
    edi = POP32_VAL(esp); /* 0x15058CEF: pop edi */
    MEM32(ebp + (-0x20)) = edi; /* 0x15058CF0: mov dword ptr [ebp - 0x20], edi */
    /* test esi, esi */ /* 0x15058CF3: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15058D03; /* 0x15058CF5: je 0x15058d03 */
L_15058CF7:
    /* cmp esi, 1 */ /* 0x15058CF7: cmp esi, 1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15058D03; /* 0x15058CFA: je 0x15058d03 */
L_15058CFC:
    RECOMP_CALL(sub_15068668); /* 0x15058CFC: call 0x15068668 */
    RECOMP_FLAGS_IN();
    MEM32(ebx) = eax; /* 0x15058D01: mov dword ptr [ebx], eax */
L_15058D03:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x15058D03: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_15058D1D); /* 0x15058D0A: call 0x15058d1d */
    RECOMP_FLAGS_IN();
    /* test esi, esi */ /* 0x15058D0F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15058D26; /* 0x15058D11: jne 0x15058d26 */
L_15058D13:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15058D13: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15058D3A; /* 0x15058D15: jmp 0x15058d3a */
L_15058D26:
    /* cmp esi, 1 */ /* 0x15058D26: cmp esi, 1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15058D37; /* 0x15058D29: je 0x15058d37 */
L_15058D2B:
    PUSH32(esp, edi); /* 0x15058D2B: push edi */
    ecx = esi; /* 0x15058D2C: mov ecx, esi */
    RECOMP_ICALL(MEM32(0x150C02B0)); /* 0x15058D2E: call dword ptr [0x150c02b0] */
    RECOMP_FLAGS_IN();
    RECOMP_ICALL(esi); /* 0x15058D34: call esi */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15058D36: pop ecx */
L_15058D37:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15058D37: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x15058D39: inc eax */
    _flag_k = FK_INC;
L_15058D3A:
    ecx = MEM32(ebp + (-0x10)); /* 0x15058D3A: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x15058D3D: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x15058D44: pop ecx */
    edi = POP32_VAL(esp); /* 0x15058D45: pop edi */
    esi = POP32_VAL(esp); /* 0x15058D46: pop esi */
    ebx = POP32_VAL(esp); /* 0x15058D47: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15058D48: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x15058D49: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_15058D1D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15058D1Du);

L_15058D1D:
    PUSH32(esp, 0); /* 0x15058D1D: push 0 */
    RECOMP_CALL(sub_15068F50); /* 0x15058D1F: call 0x15068f50 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15058D24: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15058D25: ret  */
    RECOMP_REGS_OUT();
}

void sub_15058D60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15058D60u);

L_15058D60:
    PUSH32(esp, 0x28u); /* 0x15058D60: push 0x28 */
    PUSH32(esp, 0x150B0B28u); /* 0x15058D62: push 0x150b0b28 */
    RECOMP_CALL(sub_1505E988); /* 0x15058D67: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x15058D6C: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x30)) = edi; /* 0x15058D6E: mov dword ptr [ebp - 0x30], edi */
    ebx = edi; /* 0x15058D71: mov ebx, edi */
    MEM32(ebp + (-0x20)) = ebx; /* 0x15058D73: mov dword ptr [ebp - 0x20], ebx */
    MEM32(ebp + (-0x24)) = edi; /* 0x15058D76: mov dword ptr [ebp - 0x24], edi */
    esi = MEM32(ebp + 0x8); /* 0x15058D79: mov esi, dword ptr [ebp + 8] */
    /* cmp esi, 0xBu */ /* 0x15058D7C: cmp esi, 0xb */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_15058DCE; /* 0x15058D7F: jg 0x15058dce */
L_15058D81:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15058D98; /* 0x15058D81: je 0x15058d98 */
L_15058D83:
    eax = esi; /* 0x15058D83: mov eax, esi */
    PUSH32(esp, 2); /* 0x15058D85: push 2 */
    ecx = POP32_VAL(esp); /* 0x15058D87: pop ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x15058D88: sub eax, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15058DAC; /* 0x15058D8A: je 0x15058dac */
L_15058D8C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x15058D8C: sub eax, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15058D98; /* 0x15058D8E: je 0x15058d98 */
L_15058D90:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x15058D90: sub eax, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15058DF9; /* 0x15058D92: je 0x15058df9 */
L_15058D94:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x15058D94: sub eax, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_15058DDF; /* 0x15058D96: jne 0x15058ddf */
L_15058D98:
    RECOMP_CALL(sub_15068840); /* 0x15058D98: call 0x15068840 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x24)) = eax; /* 0x15058D9D: mov dword ptr [ebp - 0x24], eax */
    /* test eax, eax */ /* 0x15058DA0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15058DBA; /* 0x15058DA2: jne 0x15058dba */
L_15058DA4:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x15058DA4: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_15058F2E; /* 0x15058DA7: jmp 0x15058f2e */
L_15058DAC:
    MEM32(ebp + (-0x1C)) = 0x150BDBA4u; /* 0x15058DAC: mov dword ptr [ebp - 0x1c], 0x150bdba4 */
    eax = MEM32(0x150BDBA4); /* 0x15058DB3: mov eax, dword ptr [0x150bdba4] */
    goto L_15058E21; /* 0x15058DB8: jmp 0x15058e21 */
L_15058DBA:
    PUSH32(esp, MEM32(eax + 0x5C)); /* 0x15058DBA: push dword ptr [eax + 0x5c] */
    PUSH32(esp, esi); /* 0x15058DBD: push esi */
    RECOMP_CALL(sub_15058F4C); /* 0x15058DBE: call 0x15058f4c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15058DC3: pop ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x15058DC4: add eax, 8 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x1C)) = eax; /* 0x15058DC7: mov dword ptr [ebp - 0x1c], eax */
    eax = MEM32(eax); /* 0x15058DCA: mov eax, dword ptr [eax] */
    goto L_15058E2D; /* 0x15058DCC: jmp 0x15058e2d */
L_15058DCE:
    eax = esi; /* 0x15058DCE: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0xFu; /* 0x15058DD0: sub eax, 0xf */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15058E15; /* 0x15058DD3: je 0x15058e15 */
L_15058DD5:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 6; /* 0x15058DD5: sub eax, 6 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15058E07; /* 0x15058DD8: je 0x15058e07 */
L_15058DDA:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x15058DDA: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15058DF9; /* 0x15058DDD: je 0x15058df9 */
L_15058DDF:
    RECOMP_CALL(sub_15036430); /* 0x15058DDF: call 0x15036430 */
    RECOMP_FLAGS_IN();
    MEM32(eax) = 0x16u; /* 0x15058DE4: mov dword ptr [eax], 0x16 */
    PUSH32(esp, edi); /* 0x15058DEA: push edi */
    PUSH32(esp, edi); /* 0x15058DEB: push edi */
    PUSH32(esp, edi); /* 0x15058DEC: push edi */
    PUSH32(esp, edi); /* 0x15058DED: push edi */
    PUSH32(esp, edi); /* 0x15058DEE: push edi */
    RECOMP_CALL(sub_1505A110); /* 0x15058DEF: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15058DF4: add esp, 0x14 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_15058DA4; /* 0x15058DF7: jmp 0x15058da4 */
L_15058DF9:
    MEM32(ebp + (-0x1C)) = 0x150BDBACu; /* 0x15058DF9: mov dword ptr [ebp - 0x1c], 0x150bdbac */
    eax = MEM32(0x150BDBAC); /* 0x15058E00: mov eax, dword ptr [0x150bdbac] */
    goto L_15058E21; /* 0x15058E05: jmp 0x15058e21 */
L_15058E07:
    MEM32(ebp + (-0x1C)) = 0x150BDBA8u; /* 0x15058E07: mov dword ptr [ebp - 0x1c], 0x150bdba8 */
    eax = MEM32(0x150BDBA8); /* 0x15058E0E: mov eax, dword ptr [0x150bdba8] */
    goto L_15058E21; /* 0x15058E13: jmp 0x15058e21 */
L_15058E15:
    MEM32(ebp + (-0x1C)) = 0x150BDBB0u; /* 0x15058E15: mov dword ptr [ebp - 0x1c], 0x150bdbb0 */
    eax = MEM32(0x150BDBB0); /* 0x15058E1C: mov eax, dword ptr [0x150bdbb0] */
L_15058E21:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15058E21: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x15058E23: inc ebx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x20)) = ebx; /* 0x15058E24: mov dword ptr [ebp - 0x20], ebx */
    PUSH32(esp, eax); /* 0x15058E27: push eax */
    RECOMP_CALL(sub_1506863C); /* 0x15058E28: call 0x1506863c */
    RECOMP_FLAGS_IN();
L_15058E2D:
    MEM32(ebp + (-0x28)) = eax; /* 0x15058E2D: mov dword ptr [ebp - 0x28], eax */
    ecx = POP32_VAL(esp); /* 0x15058E30: pop ecx */
    edx = MEM32(ebp + (-0x24)); /* 0x15058E31: mov edx, dword ptr [ebp - 0x24] */
    /* cmp eax, 1 */ /* 0x15058E34: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15058F2C; /* 0x15058E37: je 0x15058f2c */
L_15058E3D:
    /* test eax, eax */ /* 0x15058E3D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15058F3E; /* 0x15058E3F: je 0x15058f3e */
L_15058E45:
    /* test ebx, ebx */ /* 0x15058E45: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15058E53; /* 0x15058E47: je 0x15058e53 */
L_15058E49:
    PUSH32(esp, edi); /* 0x15058E49: push edi */
    RECOMP_CALL(sub_15068D80); /* 0x15058E4A: call 0x15068d80 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15058E4F: pop ecx */
    edx = MEM32(ebp + (-0x24)); /* 0x15058E50: mov edx, dword ptr [ebp - 0x24] */
L_15058E53:
    MEM32(ebp + (-0x4)) = edi; /* 0x15058E53: mov dword ptr [ebp - 4], edi */
    /* cmp esi, 8 */ /* 0x15058E56: cmp esi, 8 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15058E65; /* 0x15058E59: je 0x15058e65 */
L_15058E5B:
    /* cmp esi, 0xBu */ /* 0x15058E5B: cmp esi, 0xb */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15058E65; /* 0x15058E5E: je 0x15058e65 */
L_15058E60:
    /* cmp esi, 4 */ /* 0x15058E60: cmp esi, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15058E80; /* 0x15058E63: jne 0x15058e80 */
L_15058E65:
    eax = MEM32(edx + 0x60); /* 0x15058E65: mov eax, dword ptr [edx + 0x60] */
    MEM32(ebp + (-0x30)) = eax; /* 0x15058E68: mov dword ptr [ebp - 0x30], eax */
    MEM32(edx + 0x60) = edi; /* 0x15058E6B: mov dword ptr [edx + 0x60], edi */
    /* cmp esi, 8 */ /* 0x15058E6E: cmp esi, 8 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15058EB0; /* 0x15058E71: jne 0x15058eb0 */
L_15058E73:
    eax = MEM32(edx + 0x64); /* 0x15058E73: mov eax, dword ptr [edx + 0x64] */
    MEM32(ebp + (-0x38)) = eax; /* 0x15058E76: mov dword ptr [ebp - 0x38], eax */
    MEM32(edx + 0x64) = 0x8Cu; /* 0x15058E79: mov dword ptr [edx + 0x64], 0x8c */
L_15058E80:
    /* cmp esi, 8 */ /* 0x15058E80: cmp esi, 8 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15058EB0; /* 0x15058E83: jne 0x15058eb0 */
L_15058E85:
    ecx = MEM32(0x150BD308); /* 0x15058E85: mov ecx, dword ptr [0x150bd308] */
L_15058E8B:
    MEM32(ebp + (-0x2C)) = ecx; /* 0x15058E8B: mov dword ptr [ebp - 0x2c], ecx */
    eax = MEM32(0x150BD30C); /* 0x15058E8E: mov eax, dword ptr [0x150bd30c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(0x150BD308));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(0x150BD308); /* 0x15058E93: add eax, dword ptr [0x150bd308] */
    _flag_k = FK_ADD;
    /* cmp ecx, eax */ /* 0x15058E99: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = MEM32(ebp + 0x8); /* 0x15058E9B: mov esi, dword ptr [ebp + 8] */
    if (CMP_GE(_flag_a, _flag_b)) goto L_15058EBA; /* 0x15058E9E: jge 0x15058eba */
L_15058EA0:
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xCu); /* 0x15058EA0: imul ecx, ecx, 0xc */
    eax = MEM32(edx + 0x5C); /* 0x15058EA3: mov eax, dword ptr [edx + 0x5c] */
    MEM32(eax + ecx + 0x8) = edi; /* 0x15058EA6: mov dword ptr [eax + ecx + 8], edi */
    ecx = MEM32(ebp + (-0x2C)); /* 0x15058EAA: mov ecx, dword ptr [ebp - 0x2c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x15058EAD: inc ecx */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_15058E8B; /* 0x15058EAE: jmp 0x15058e8b */
L_15058EB0:
    RECOMP_CALL(sub_15068668); /* 0x15058EB0: call 0x15068668 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x1C)); /* 0x15058EB5: mov ecx, dword ptr [ebp - 0x1c] */
    MEM32(ecx) = eax; /* 0x15058EB8: mov dword ptr [ecx], eax */
L_15058EBA:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x15058EBA: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_15058EEE); /* 0x15058EC1: call 0x15058eee */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + (-0x28)); /* 0x15058EC6: mov ebx, dword ptr [ebp - 0x28] */
    ecx = ebx; /* 0x15058EC9: mov ecx, ebx */
    /* cmp esi, 8 */ /* 0x15058ECB: cmp esi, 8 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15058EFA; /* 0x15058ECE: jne 0x15058efa */
L_15058ED0:
    edi = MEM32(ebp + (-0x24)); /* 0x15058ED0: mov edi, dword ptr [ebp - 0x24] */
    PUSH32(esp, MEM32(edi + 0x64)); /* 0x15058ED3: push dword ptr [edi + 0x64] */
    PUSH32(esp, esi); /* 0x15058ED6: push esi */
    RECOMP_ICALL(MEM32(0x150C02B0)); /* 0x15058ED7: call dword ptr [0x150c02b0] */
    RECOMP_FLAGS_IN();
    RECOMP_ICALL(ebx); /* 0x15058EDD: call ebx */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15058EDF: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15058EE0: pop ecx */
    ecx = edi + 0x64; /* 0x15058EE1: lea ecx, [edi + 0x64] */
    goto L_15058F0D; /* 0x15058EE4: jmp 0x15058f0d */
L_15058EFA:
    PUSH32(esp, esi); /* 0x15058EFA: push esi */
    RECOMP_ICALL(MEM32(0x150C02B0)); /* 0x15058EFB: call dword ptr [0x150c02b0] */
    RECOMP_FLAGS_IN();
    RECOMP_ICALL(ebx); /* 0x15058F01: call ebx */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15058F03: pop ecx */
    ecx = MEM32(ebp + (-0x24)); /* 0x15058F04: mov ecx, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x64u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x64u; /* 0x15058F07: add ecx, 0x64 */
    _flag_k = FK_ADD;
    edi = MEM32(ebp + (-0x24)); /* 0x15058F0A: mov edi, dword ptr [ebp - 0x24] */
L_15058F0D:
    /* cmp esi, 8 */ /* 0x15058F0D: cmp esi, 8 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15058F1C; /* 0x15058F10: je 0x15058f1c */
L_15058F12:
    /* cmp esi, 0xBu */ /* 0x15058F12: cmp esi, 0xb */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15058F1C; /* 0x15058F15: je 0x15058f1c */
L_15058F17:
    /* cmp esi, 4 */ /* 0x15058F17: cmp esi, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15058F2C; /* 0x15058F1A: jne 0x15058f2c */
L_15058F1C:
    eax = MEM32(ebp + (-0x30)); /* 0x15058F1C: mov eax, dword ptr [ebp - 0x30] */
    MEM32(edi + 0x60) = eax; /* 0x15058F1F: mov dword ptr [edi + 0x60], eax */
    /* cmp esi, 8 */ /* 0x15058F22: cmp esi, 8 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15058F2C; /* 0x15058F25: jne 0x15058f2c */
L_15058F27:
    eax = MEM32(ebp + (-0x38)); /* 0x15058F27: mov eax, dword ptr [ebp - 0x38] */
    MEM32(ecx) = eax; /* 0x15058F2A: mov dword ptr [ecx], eax */
L_15058F2C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15058F2C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_15058F2E:
    ecx = MEM32(ebp + (-0x10)); /* 0x15058F2E: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x15058F31: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x15058F38: pop ecx */
    edi = POP32_VAL(esp); /* 0x15058F39: pop edi */
    esi = POP32_VAL(esp); /* 0x15058F3A: pop esi */
    ebx = POP32_VAL(esp); /* 0x15058F3B: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15058F3C: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15058F3D: ret  */
L_15058F3E:
    PUSH32(esp, 3); /* 0x15058F3E: push 3 */
    RECOMP_CALL(sub_15067FB0); /* 0x15058F40: call 0x15067fb0 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x15058F45u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_15058EEE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15058EEEu);

L_15058EEE:
    /* test ebx, ebx */ /* 0x15058EEE: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15058EF9; /* 0x15058EF0: je 0x15058ef9 */
L_15058EF2:
    PUSH32(esp, edi); /* 0x15058EF2: push edi */
    RECOMP_CALL(sub_15068F50); /* 0x15058EF3: call 0x15068f50 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15058EF8: pop ecx */
L_15058EF9:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15058EF9: ret  */
    RECOMP_REGS_OUT();
}

void sub_15058F4C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15058F4Cu);

L_15058F4C:
    edi = edi; /* 0x15058F4C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15058F4E: push ebp */
    ebp = esp; /* 0x15058F4F: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x15058F51: mov edx, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0xC); /* 0x15058F54: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x15058F57: push esi */
    esi = MEM32(0x150BD300); /* 0x15058F58: mov esi, dword ptr [0x150bd300] */
L_15058F5E:
    /* cmp MEM32(ecx + 0x4), edx */ /* 0x15058F5E: cmp dword ptr [ecx + 4], edx */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15058F70; /* 0x15058F61: je 0x15058f70 */
L_15058F63:
    eax = (uint32_t)((int32_t)esi * (int32_t)0xCu); /* 0x15058F63: imul eax, esi, 0xc */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xCu; /* 0x15058F66: add ecx, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + 0xC); /* 0x15058F69: add eax, dword ptr [ebp + 0xc] */
    _flag_k = FK_ADD;
    /* cmp ecx, eax */ /* 0x15058F6C: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_15058F5E; /* 0x15058F6E: jb 0x15058f5e */
L_15058F70:
    eax = (uint32_t)((int32_t)esi * (int32_t)0xCu); /* 0x15058F70: imul eax, esi, 0xc */
    esi = POP32_VAL(esp); /* 0x15058F73: pop esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + 0xC); /* 0x15058F74: add eax, dword ptr [ebp + 0xc] */
    _flag_k = FK_ADD;
    /* cmp ecx, eax */ /* 0x15058F77: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_15058F85; /* 0x15058F79: jae 0x15058f85 */
L_15058F7B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15058F7B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ecx + 0x4), edx */ /* 0x15058F7D: cmp dword ptr [ecx + 4], edx */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) { eax = ecx; } /* 0x15058F80: cmove eax, ecx */
    ebp = POP32_VAL(esp); /* 0x15058F83: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15058F84: ret  */
L_15058F85:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15058F85: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x15058F87: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15058F88: ret  */
    RECOMP_REGS_OUT();
}

void sub_15058F90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15058F90u);

L_15058F90:
    PUSH32(esp, 0x14u); /* 0x15058F90: push 0x14 */
    PUSH32(esp, 0x150B0B08u); /* 0x15058F92: push 0x150b0b08 */
    RECOMP_CALL(sub_1505E988); /* 0x15058F97: call 0x1505e988 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15058F9C: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = ebx; /* 0x15058F9E: mov dword ptr [ebp - 0x1c], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(ebx);
    MEM32(ebp + (-0x20)) = MEM32(ebp + (-0x20)) & ebx; /* 0x15058FA1: and dword ptr [ebp - 0x20], ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(ebp + 0xC); /* 0x15058FA4: mov esi, dword ptr [ebp + 0xc] */
    /* cmp esi, 4 */ /* 0x15058FA7: cmp esi, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150591AF; /* 0x15058FAA: je 0x150591af */
L_15058FB0:
    /* cmp esi, 3 */ /* 0x15058FB0: cmp esi, 3 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150591AF; /* 0x15058FB3: je 0x150591af */
L_15058FB9:
    edi = MEM32(ebp + 0x8); /* 0x15058FB9: mov edi, dword ptr [ebp + 8] */
    /* cmp edi, 2 */ /* 0x15058FBC: cmp edi, 2 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505908D; /* 0x15058FBF: je 0x1505908d */
L_15058FC5:
    /* cmp edi, 0x15u */ /* 0x15058FC5: cmp edi, 0x15 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x15u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505908D; /* 0x15058FC8: je 0x1505908d */
L_15058FCE:
    /* cmp edi, 0x16u */ /* 0x15058FCE: cmp edi, 0x16 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x16u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505908D; /* 0x15058FD1: je 0x1505908d */
L_15058FD7:
    /* cmp edi, 6 */ /* 0x15058FD7: cmp edi, 6 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505908D; /* 0x15058FDA: je 0x1505908d */
L_15058FE0:
    /* cmp edi, 0xFu */ /* 0x15058FE0: cmp edi, 0xf */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505908D; /* 0x15058FE3: je 0x1505908d */
L_15058FE9:
    /* cmp edi, 8 */ /* 0x15058FE9: cmp edi, 8 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15058FFC; /* 0x15058FEC: je 0x15058ffc */
L_15058FEE:
    /* cmp edi, 4 */ /* 0x15058FEE: cmp edi, 4 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15058FFC; /* 0x15058FF1: je 0x15058ffc */
L_15058FF3:
    /* cmp edi, 0xBu */ /* 0x15058FF3: cmp edi, 0xb */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150591AF; /* 0x15058FF6: jne 0x150591af */
L_15058FFC:
    RECOMP_CALL(sub_15068840); /* 0x15058FFC: call 0x15068840 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x15059001: mov ebx, eax */
    MEM32(ebp + (-0x24)) = ebx; /* 0x15059003: mov dword ptr [ebp - 0x24], ebx */
    /* test ebx, ebx */ /* 0x15059006: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150591AF; /* 0x15059008: je 0x150591af */
L_1505900E:
    /* cmp MEM32(ebx + 0x5C), 0x15005198u */ /* 0x1505900E: cmp dword ptr [ebx + 0x5c], 0x15005198 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x5C)); _flag_b = (uint32_t)(0x15005198u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15059042; /* 0x15059015: jne 0x15059042 */
L_15059017:
    PUSH32(esp, MEM32(0x150BD304)); /* 0x15059017: push dword ptr [0x150bd304] */
    RECOMP_CALL(sub_15048F2F); /* 0x1505901D: call 0x15048f2f */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15059022: pop ecx */
    MEM32(ebx + 0x5C) = eax; /* 0x15059023: mov dword ptr [ebx + 0x5c], eax */
    /* test eax, eax */ /* 0x15059026: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150591AF; /* 0x15059028: je 0x150591af */
L_1505902E:
    PUSH32(esp, MEM32(0x150BD304)); /* 0x1505902E: push dword ptr [0x150bd304] */
    PUSH32(esp, 0x15005198u); /* 0x15059034: push 0x15005198 */
    PUSH32(esp, eax); /* 0x15059039: push eax */
    RECOMP_CALL(sub_1508DBF0); /* 0x1505903A: call 0x1508dbf0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1505903F: add esp, 0xc */
    _flag_k = FK_ADD;
L_15059042:
    PUSH32(esp, MEM32(ebx + 0x5C)); /* 0x15059042: push dword ptr [ebx + 0x5c] */
    PUSH32(esp, edi); /* 0x15059045: push edi */
    RECOMP_CALL(sub_15058F4C); /* 0x15059046: call 0x15058f4c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505904B: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1505904C: pop ecx */
    /* test eax, eax */ /* 0x1505904D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150591AF; /* 0x1505904F: je 0x150591af */
L_15059055:
    ebx = MEM32(eax + 0x8); /* 0x15059055: mov ebx, dword ptr [eax + 8] */
    /* cmp esi, 2 */ /* 0x15059058: cmp esi, 2 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505919F; /* 0x1505905B: je 0x1505919f */
L_15059061:
    edx = eax + 0x4; /* 0x15059061: lea edx, [eax + 4] */
    goto L_15059084; /* 0x15059064: jmp 0x15059084 */
L_15059066:
    MEM32(edx + 0x4) = esi; /* 0x15059066: mov dword ptr [edx + 4], esi */
    edx = edx + 0xC; /* 0x15059069: lea edx, [edx + 0xc] */
    ecx = (uint32_t)((int32_t)MEM32(0x150BD300) * (int32_t)0xCu); /* 0x1505906C: imul ecx, dword ptr [0x150bd300], 0xc */
    eax = MEM32(ebp + (-0x24)); /* 0x15059073: mov eax, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x5C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax + 0x5C); /* 0x15059076: add ecx, dword ptr [eax + 0x5c] */
    _flag_k = FK_ADD;
    eax = edx + (-0x4); /* 0x15059079: lea eax, [edx - 4] */
    /* cmp eax, ecx */ /* 0x1505907C: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1505919F; /* 0x1505907E: jae 0x1505919f */
L_15059084:
    /* cmp MEM32(edx), edi */ /* 0x15059084: cmp dword ptr [edx], edi */
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15059066; /* 0x15059086: je 0x15059066 */
L_15059088:
    goto L_1505919F; /* 0x15059088: jmp 0x1505919f */
L_1505908D:
    PUSH32(esp, 0); /* 0x1505908D: push 0 */
    RECOMP_CALL(sub_15068D80); /* 0x1505908F: call 0x15068d80 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15059094: pop ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(ebx);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & ebx; /* 0x15059095: and dword ptr [ebp - 4], ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edi, 2 */ /* 0x15059098: cmp edi, 2 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150590A2; /* 0x1505909B: je 0x150590a2 */
L_1505909D:
    /* cmp edi, 0x15u */ /* 0x1505909D: cmp edi, 0x15 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x15u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150590E0; /* 0x150590A0: jne 0x150590e0 */
L_150590A2:
    /* cmp MEM32(0x150BDBB4), 0 */ /* 0x150590A2: cmp dword ptr [0x150bdbb4], 0 */
    _flag_a = (uint32_t)(MEM32(0x150BDBB4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150590E0; /* 0x150590A9: jne 0x150590e0 */
L_150590AB:
    PUSH32(esp, 1); /* 0x150590AB: push 1 */
    PUSH32(esp, 0x15058CA0u); /* 0x150590AD: push 0x15058ca0 */
    RECOMP_ICALL(MEM32(0x150C002C)); /* 0x150590B2: call dword ptr [0x150c002c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x150590B8: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x150590BA: inc ecx */
    _flag_k = FK_INC;
    /* cmp eax, ecx */ /* 0x150590BB: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150590C7; /* 0x150590BD: jne 0x150590c7 */
L_150590BF:
    MEM32(0x150BDBB4) = ecx; /* 0x150590BF: mov dword ptr [0x150bdbb4], ecx */
    goto L_150590E0; /* 0x150590C5: jmp 0x150590e0 */
L_150590C7:
    RECOMP_CALL(sub_150363E0); /* 0x150590C7: call 0x150363e0 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x150590CC: mov esi, eax */
    RECOMP_ICALL(MEM32(0x150C006C)); /* 0x150590CE: call dword ptr [0x150c006c] */
    RECOMP_FLAGS_IN();
    MEM32(esi) = eax; /* 0x150590D4: mov dword ptr [esi], eax */
    MEM32(ebp + (-0x20)) = 1; /* 0x150590D6: mov dword ptr [ebp - 0x20], 1 */
    esi = MEM32(ebp + 0xC); /* 0x150590DD: mov esi, dword ptr [ebp + 0xc] */
L_150590E0:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x150590E0: dec edi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 1; /* 0x150590E1: sub edi, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1505916B; /* 0x150590E4: je 0x1505916b */
L_150590EA:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 4; /* 0x150590EA: sub edi, 4 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15059102; /* 0x150590ED: je 0x15059102 */
L_150590EF:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 9; /* 0x150590EF: sub edi, 9 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15059148; /* 0x150590F2: je 0x15059148 */
L_150590F4:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 6; /* 0x150590F4: sub edi, 6 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_15059125; /* 0x150590F7: je 0x15059125 */
L_150590F9:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 1; /* 0x150590F9: sub edi, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1505918D; /* 0x150590FC: jne 0x1505918d */
L_15059102:
    PUSH32(esp, MEM32(0x150BDBAC)); /* 0x15059102: push dword ptr [0x150bdbac] */
    RECOMP_CALL(sub_1506863C); /* 0x15059108: call 0x1506863c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505910D: pop ecx */
    ebx = eax; /* 0x1505910E: mov ebx, eax */
    MEM32(ebp + (-0x1C)) = ebx; /* 0x15059110: mov dword ptr [ebp - 0x1c], ebx */
    /* cmp esi, 2 */ /* 0x15059113: cmp esi, 2 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505918D; /* 0x15059116: je 0x1505918d */
L_15059118:
    PUSH32(esp, esi); /* 0x15059118: push esi */
    RECOMP_CALL(sub_15068652); /* 0x15059119: call 0x15068652 */
    RECOMP_FLAGS_IN();
    MEM32(0x150BDBAC) = eax; /* 0x1505911E: mov dword ptr [0x150bdbac], eax */
    goto L_1505918C; /* 0x15059123: jmp 0x1505918c */
L_15059125:
    PUSH32(esp, MEM32(0x150BDBA8)); /* 0x15059125: push dword ptr [0x150bdba8] */
    RECOMP_CALL(sub_1506863C); /* 0x1505912B: call 0x1506863c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15059130: pop ecx */
    ebx = eax; /* 0x15059131: mov ebx, eax */
    MEM32(ebp + (-0x1C)) = ebx; /* 0x15059133: mov dword ptr [ebp - 0x1c], ebx */
    /* cmp esi, 2 */ /* 0x15059136: cmp esi, 2 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505918D; /* 0x15059139: je 0x1505918d */
L_1505913B:
    PUSH32(esp, esi); /* 0x1505913B: push esi */
    RECOMP_CALL(sub_15068652); /* 0x1505913C: call 0x15068652 */
    RECOMP_FLAGS_IN();
    MEM32(0x150BDBA8) = eax; /* 0x15059141: mov dword ptr [0x150bdba8], eax */
    goto L_1505918C; /* 0x15059146: jmp 0x1505918c */
L_15059148:
    PUSH32(esp, MEM32(0x150BDBB0)); /* 0x15059148: push dword ptr [0x150bdbb0] */
    RECOMP_CALL(sub_1506863C); /* 0x1505914E: call 0x1506863c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15059153: pop ecx */
    ebx = eax; /* 0x15059154: mov ebx, eax */
    MEM32(ebp + (-0x1C)) = ebx; /* 0x15059156: mov dword ptr [ebp - 0x1c], ebx */
    /* cmp esi, 2 */ /* 0x15059159: cmp esi, 2 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505918D; /* 0x1505915C: je 0x1505918d */
L_1505915E:
    PUSH32(esp, esi); /* 0x1505915E: push esi */
    RECOMP_CALL(sub_15068652); /* 0x1505915F: call 0x15068652 */
    RECOMP_FLAGS_IN();
    MEM32(0x150BDBB0) = eax; /* 0x15059164: mov dword ptr [0x150bdbb0], eax */
    goto L_1505918C; /* 0x15059169: jmp 0x1505918c */
L_1505916B:
    PUSH32(esp, MEM32(0x150BDBA4)); /* 0x1505916B: push dword ptr [0x150bdba4] */
    RECOMP_CALL(sub_1506863C); /* 0x15059171: call 0x1506863c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x15059176: pop ecx */
    ebx = eax; /* 0x15059177: mov ebx, eax */
    MEM32(ebp + (-0x1C)) = ebx; /* 0x15059179: mov dword ptr [ebp - 0x1c], ebx */
    /* cmp esi, 2 */ /* 0x1505917C: cmp esi, 2 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505918D; /* 0x1505917F: je 0x1505918d */
L_15059181:
    PUSH32(esp, esi); /* 0x15059181: push esi */
    RECOMP_CALL(sub_15068652); /* 0x15059182: call 0x15068652 */
    RECOMP_FLAGS_IN();
    MEM32(0x150BDBA4) = eax; /* 0x15059187: mov dword ptr [0x150bdba4], eax */
L_1505918C:
    ecx = POP32_VAL(esp); /* 0x1505918C: pop ecx */
L_1505918D:
    MEM32(ebp + (-0x4)) = 0xFFFFFFFEu; /* 0x1505918D: mov dword ptr [ebp - 4], 0xfffffffe */
    RECOMP_CALL(sub_150591A6); /* 0x15059194: call 0x150591a6 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x20)), 0 */ /* 0x15059199: cmp dword ptr [ebp - 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_150591AF; /* 0x1505919D: jne 0x150591af */
L_1505919F:
    eax = ebx; /* 0x1505919F: mov eax, ebx */
    goto L_150591B2; /* 0x150591A1: jmp 0x150591b2 */
L_150591AF:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x150591AF: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_150591B2:
    ecx = MEM32(ebp + (-0x10)); /* 0x150591B2: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x150591B5: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x150591BC: pop ecx */
    edi = POP32_VAL(esp); /* 0x150591BD: pop edi */
    esi = POP32_VAL(esp); /* 0x150591BE: pop esi */
    ebx = POP32_VAL(esp); /* 0x150591BF: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x150591C0: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150591C1: ret  */
    RECOMP_REGS_OUT();
}

void sub_150591A6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150591A6u);

L_150591A6:
    PUSH32(esp, 0); /* 0x150591A6: push 0 */
    RECOMP_CALL(sub_15068F50); /* 0x150591A8: call 0x15068f50 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x150591AD: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150591AE: ret  */
    RECOMP_REGS_OUT();
}

void sub_150591D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150591D0u);

L_150591D0:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x150591D0: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(0x150BC1A0) = (uint8_t)(LO8(eax)); /* 0x150591D3: mov byte ptr [0x150bc1a0], al */
    MEM8(0x150BC1A1) = (uint8_t)(LO8(eax)); /* 0x150591D8: mov byte ptr [0x150bc1a1], al */
    MEM8(0x150BC1A2) = (uint8_t)(LO8(eax)); /* 0x150591DD: mov byte ptr [0x150bc1a2], al */
    MEM8(0x150BC1A3) = (uint8_t)(LO8(eax)); /* 0x150591E2: mov byte ptr [0x150bc1a3], al */
    MEM8(0x150BC1A4) = (uint8_t)(LO8(eax)); /* 0x150591E7: mov byte ptr [0x150bc1a4], al */
    MEM8(0x150BC1A5) = (uint8_t)(LO8(eax)); /* 0x150591EC: mov byte ptr [0x150bc1a5], al */
    MEM8(0x150BC1A6) = (uint8_t)(LO8(eax)); /* 0x150591F1: mov byte ptr [0x150bc1a6], al */
    MEM8(0x150BC1A7) = (uint8_t)(LO8(eax)); /* 0x150591F6: mov byte ptr [0x150bc1a7], al */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x150591FB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150591FD: ret  */
    RECOMP_REGS_OUT();
}

void sub_15059210(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15059210u);

L_15059210:
    RECOMP_CALL(sub_15068820); /* 0x15059210: call 0x15068820 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x15059215: mov ecx, eax */
    eax = MEM32(ecx + 0x6C); /* 0x15059217: mov eax, dword ptr [ecx + 0x6c] */
    /* cmp eax, MEM32(0x150BC074) */ /* 0x1505921A: cmp eax, dword ptr [0x150bc074] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(0x150BC074));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15059236; /* 0x15059220: je 0x15059236 */
L_15059222:
    /* test MEM8(ecx + 0x70), 2 */ /* 0x15059222: test byte ptr [ecx + 0x70], 2 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x70)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15059236; /* 0x15059226: jne 0x15059236 */
L_15059228:
    /* test MEM8(0x150BD32C), 1 */ /* 0x15059228: test byte ptr [0x150bd32c], 1 */
    _flag_a = (uint32_t)(MEM8(0x150BD32C)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_15059236; /* 0x1505922F: je 0x15059236 */
L_15059231:
    RECOMP_CALL(sub_15057225); /* 0x15059231: call 0x15057225 */
    RECOMP_FLAGS_IN();
L_15059236:
    eax = MEM32(eax + 0xC8); /* 0x15059236: mov eax, dword ptr [eax + 0xc8] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505923C: ret  */
    RECOMP_REGS_OUT();
}

void sub_15059250(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15059250u);

L_15059250:
    eax = MEM32(0x150BC154); /* 0x15059250: mov eax, dword ptr [0x150bc154] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15059255: ret  */
    RECOMP_REGS_OUT();
}

void sub_15059260(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15059260u);

L_15059260:
    edi = edi; /* 0x15059260: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15059262: push ebp */
    ebp = esp; /* 0x15059263: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15059265: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1505E710); /* 0x15059268: call 0x1505e710 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1505926D: pop ecx */
    MEM32(0x150BDB08) = eax; /* 0x1505926E: mov dword ptr [0x150bdb08], eax */
    ebp = POP32_VAL(esp); /* 0x15059273: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15059274: ret  */
    RECOMP_REGS_OUT();
}

void sub_15059280(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15059280u);

L_15059280:
    edi = edi; /* 0x15059280: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15059282: push ebp */
    ebp = esp; /* 0x15059283: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x15059285: mov ecx, dword ptr [ebp + 8] */
    eax = ecx; /* 0x15059288: mov eax, ecx */
    PUSH32(esp, esi); /* 0x1505928A: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1505928B: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x1505928D: sub eax, esi */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_150592C4; /* 0x1505928F: je 0x150592c4 */
L_15059291:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x15059291: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_150592C4; /* 0x15059294: je 0x150592c4 */
L_15059296:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x15059296: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_150592C4; /* 0x15059299: je 0x150592c4 */
L_1505929B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 1; /* 0x1505929B: sub eax, 1 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_150592BD; /* 0x1505929E: je 0x150592bd */
L_150592A0:
    RECOMP_CALL(sub_15036430); /* 0x150592A0: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x150592A5: push esi */
    PUSH32(esp, esi); /* 0x150592A6: push esi */
    PUSH32(esp, esi); /* 0x150592A7: push esi */
    PUSH32(esp, esi); /* 0x150592A8: push esi */
    PUSH32(esp, esi); /* 0x150592A9: push esi */
    MEM32(eax) = 0x16u; /* 0x150592AA: mov dword ptr [eax], 0x16 */
    RECOMP_CALL(sub_1505A110); /* 0x150592B0: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150592B5: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x150592B8: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_150592CF; /* 0x150592BB: jmp 0x150592cf */
L_150592BD:
    eax = MEM32(0x150BDB0C); /* 0x150592BD: mov eax, dword ptr [0x150bdb0c] */
    goto L_150592CF; /* 0x150592C2: jmp 0x150592cf */
L_150592C4:
    eax = MEM32(0x150BDB0C); /* 0x150592C4: mov eax, dword ptr [0x150bdb0c] */
    MEM32(0x150BDB0C) = ecx; /* 0x150592C9: mov dword ptr [0x150bdb0c], ecx */
L_150592CF:
    esi = POP32_VAL(esp); /* 0x150592CF: pop esi */
    ebp = POP32_VAL(esp); /* 0x150592D0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150592D1: ret  */
    RECOMP_REGS_OUT();
}

void sub_150592E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150592E0u);

L_150592E0:
    edi = edi; /* 0x150592E0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x150592E2: push ebp */
    ebp = esp; /* 0x150592E3: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x150592E5: push ecx */
    PUSH32(esp, ecx); /* 0x150592E6: push ecx */
    PUSH32(esp, esi); /* 0x150592E7: push esi */
    PUSH32(esp, edi); /* 0x150592E8: push edi */
    RECOMP_CALL(sub_15068840); /* 0x150592E9: call 0x15068840 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x150592EE: mov edi, eax */
    /* test edi, edi */ /* 0x150592F0: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15059423; /* 0x150592F2: je 0x15059423 */
L_150592F8:
    esi = MEM32(edi + 0x28); /* 0x150592F8: mov esi, dword ptr [edi + 0x28] */
    /* test esi, esi */ /* 0x150592FB: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505931A; /* 0x150592FD: jne 0x1505931a */
L_150592FF:
    PUSH32(esp, 2); /* 0x150592FF: push 2 */
    PUSH32(esp, 0x86u); /* 0x15059301: push 0x86 */
    RECOMP_CALL(sub_15048EE2); /* 0x15059306: call 0x15048ee2 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1505930B: mov esi, eax */
    MEM32(edi + 0x28) = esi; /* 0x1505930D: mov dword ptr [edi + 0x28], esi */
    ecx = POP32_VAL(esp); /* 0x15059310: pop ecx */
    ecx = POP32_VAL(esp); /* 0x15059311: pop ecx */
    /* test esi, esi */ /* 0x15059312: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15059423; /* 0x15059314: je 0x15059423 */
L_1505931A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1505931A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x1505931C: push ebx */
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x1505931D: mov word ptr [esi], ax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x15059320: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + 0x8); /* 0x15059322: mov eax, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x4)) = ebx; /* 0x15059325: mov dword ptr [ebp - 4], ebx */
    /* test eax, eax */ /* 0x15059328: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505937A; /* 0x1505932A: je 0x1505937a */
L_1505932C:
    /* cmp MEM16(eax), LO16(ebx) */ /* 0x1505932C: cmp word ptr [eax], bx */
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505937A; /* 0x1505932F: je 0x1505937a */
L_15059331:
    PUSH32(esp, 0x82u); /* 0x15059331: push 0x82 */
    PUSH32(esp, eax); /* 0x15059336: push eax */
    PUSH32(esp, 0x86u); /* 0x15059337: push 0x86 */
    PUSH32(esp, esi); /* 0x1505933C: push esi */
    RECOMP_CALL(sub_1508F3F0); /* 0x1505933D: call 0x1508f3f0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x15059342: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15059345: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_15059356; /* 0x15059347: je 0x15059356 */
L_15059349:
    PUSH32(esp, ebx); /* 0x15059349: push ebx */
    PUSH32(esp, ebx); /* 0x1505934A: push ebx */
    PUSH32(esp, ebx); /* 0x1505934B: push ebx */
    PUSH32(esp, ebx); /* 0x1505934C: push ebx */
    PUSH32(esp, ebx); /* 0x1505934D: push ebx */
    RECOMP_CALL(sub_1505A11B); /* 0x1505934E: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15059353: add esp, 0x14 */
    _flag_k = FK_ADD;
L_15059356:
    PUSH32(esp, 0x15005AF8u); /* 0x15059356: push 0x15005af8 */
    PUSH32(esp, 0x86u); /* 0x1505935B: push 0x86 */
    PUSH32(esp, esi); /* 0x15059360: push esi */
    RECOMP_CALL(sub_1508F120); /* 0x15059361: call 0x1508f120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15059366: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x15059369: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505937A; /* 0x1505936B: je 0x1505937a */
L_1505936D:
    PUSH32(esp, ebx); /* 0x1505936D: push ebx */
    PUSH32(esp, ebx); /* 0x1505936E: push ebx */
    PUSH32(esp, ebx); /* 0x1505936F: push ebx */
    PUSH32(esp, ebx); /* 0x15059370: push ebx */
    PUSH32(esp, ebx); /* 0x15059371: push ebx */
    RECOMP_CALL(sub_1505A11B); /* 0x15059372: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15059377: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1505937A:
    RECOMP_CALL(sub_15036430); /* 0x1505937A: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(eax)); /* 0x1505937F: push dword ptr [eax] */
    RECOMP_CALL(sub_15059547); /* 0x15059381: call 0x15059547 */
    RECOMP_FLAGS_IN();
    edx = esi; /* 0x15059386: mov edx, esi */
    MEM32(ebp + (-0x8)) = eax; /* 0x15059388: mov dword ptr [ebp - 8], eax */
    ecx = POP32_VAL(esp); /* 0x1505938B: pop ecx */
    edi = edx + 0x2; /* 0x1505938C: lea edi, [edx + 2] */
L_1505938F:
    SET_LO16(ecx, MEM16(edx)); /* 0x1505938F: mov cx, word ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x15059392: add edx, 2 */
    _flag_k = FK_ADD;
    /* cmp LO16(ecx), LO16(ebx) */ /* 0x15059395: cmp cx, bx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505938F; /* 0x15059398: jne 0x1505938f */
L_1505939A:
    ecx = esi; /* 0x1505939A: mov ecx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - edi; /* 0x1505939C: sub edx, edi */
    _flag_k = FK_CMP;
    if (1u) _cf = (((edx) >> 0) & 1u); /* 0x1505939E: sar edx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 1u);
    edi = ecx + 0x2; /* 0x150593A0: lea edi, [ecx + 2] */
L_150593A3:
    SET_LO16(eax, MEM16(ecx)); /* 0x150593A3: mov ax, word ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x150593A6: add ecx, 2 */
    _flag_k = FK_ADD;
    /* cmp LO16(eax), LO16(ebx) */ /* 0x150593A9: cmp ax, bx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_150593A3; /* 0x150593AC: jne 0x150593a3 */
L_150593AE:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edi; /* 0x150593AE: sub ecx, edi */
    _flag_k = FK_CMP;
    edi = esi; /* 0x150593B0: mov edi, esi */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x150593B2: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    ebx = edi + 0x2; /* 0x150593B4: lea ebx, [edi + 2] */
L_150593B7:
    SET_LO16(eax, MEM16(edi)); /* 0x150593B7: mov ax, word ptr [edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 2; /* 0x150593BA: add edi, 2 */
    _flag_k = FK_ADD;
    /* cmp LO16(eax), MEM16(ebp + (-0x4)) */ /* 0x150593BD: cmp ax, word ptr [ebp - 4] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0x4))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_150593B7; /* 0x150593C1: jne 0x150593b7 */
L_150593C3:
    eax = 0x84u; /* 0x150593C3: mov eax, 0x84 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ebx; /* 0x150593C8: sub edi, ebx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x150593CA: sub eax, edx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((edi) >> 0) & 1u); /* 0x150593CC: sar edi, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edi >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = (uint32_t)((int32_t)edi >> 1u);
    PUSH32(esp, eax); /* 0x150593CE: push eax */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x150593CF: push dword ptr [ebp - 8] */
    eax = 0x86u; /* 0x150593D2: mov eax, 0x86 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x150593D7: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x150593D9: sub eax, ecx */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x150593DB: push eax */
    eax = esi + edi * 2; /* 0x150593DC: lea eax, [esi + edi*2] */
    PUSH32(esp, eax); /* 0x150593DF: push eax */
    PUSH32(esp, ebx); /* 0x150593E0: push ebx */
    RECOMP_CALL(sub_15031D90); /* 0x150593E1: call 0x15031d90 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150593E6: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x150593E9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150593FA; /* 0x150593EB: je 0x150593fa */
L_150593ED:
    PUSH32(esp, ebx); /* 0x150593ED: push ebx */
    PUSH32(esp, ebx); /* 0x150593EE: push ebx */
    PUSH32(esp, ebx); /* 0x150593EF: push ebx */
    PUSH32(esp, ebx); /* 0x150593F0: push ebx */
    PUSH32(esp, ebx); /* 0x150593F1: push ebx */
    RECOMP_CALL(sub_1505A11B); /* 0x150593F2: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150593F7: add esp, 0x14 */
    _flag_k = FK_ADD;
L_150593FA:
    PUSH32(esp, 0x15005B00u); /* 0x150593FA: push 0x15005b00 */
    PUSH32(esp, 0x86u); /* 0x150593FF: push 0x86 */
    PUSH32(esp, esi); /* 0x15059404: push esi */
    RECOMP_CALL(sub_1508F120); /* 0x15059405: call 0x1508f120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1505940A: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1505940D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1505941E; /* 0x1505940F: je 0x1505941e */
L_15059411:
    PUSH32(esp, ebx); /* 0x15059411: push ebx */
    PUSH32(esp, ebx); /* 0x15059412: push ebx */
    PUSH32(esp, ebx); /* 0x15059413: push ebx */
    PUSH32(esp, ebx); /* 0x15059414: push ebx */
    PUSH32(esp, ebx); /* 0x15059415: push ebx */
    RECOMP_CALL(sub_1505A11B); /* 0x15059416: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505941B: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1505941E:
    eax = esi; /* 0x1505941E: mov eax, esi */
    ebx = POP32_VAL(esp); /* 0x15059420: pop ebx */
    goto L_15059425; /* 0x15059421: jmp 0x15059425 */
L_15059423:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x15059423: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_15059425:
    edi = POP32_VAL(esp); /* 0x15059425: pop edi */
    esi = POP32_VAL(esp); /* 0x15059426: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x15059427: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15059428: ret  */
    RECOMP_REGS_OUT();
}

void sub_15059430(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15059430u);

L_15059430:
    edi = edi; /* 0x15059430: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15059432: push ebp */
    ebp = esp; /* 0x15059433: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x15059435: push ecx */
    PUSH32(esp, esi); /* 0x15059436: push esi */
    PUSH32(esp, edi); /* 0x15059437: push edi */
    edi = MEM32(ebp + 0x8); /* 0x15059438: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x1505943B: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1505945F; /* 0x1505943D: jne 0x1505945f */
L_1505943F:
    RECOMP_CALL(sub_15036430); /* 0x1505943F: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x15059444: push 0x16 */
    edi = POP32_VAL(esp); /* 0x15059446: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x15059447: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x15059449: push esi */
    PUSH32(esp, esi); /* 0x1505944A: push esi */
    PUSH32(esp, esi); /* 0x1505944B: push esi */
    PUSH32(esp, esi); /* 0x1505944C: push esi */
    PUSH32(esp, esi); /* 0x1505944D: push esi */
    MEM32(eax) = edi; /* 0x1505944E: mov dword ptr [eax], edi */
    RECOMP_CALL(sub_1505A110); /* 0x15059450: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x15059455: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = edi; /* 0x15059458: mov eax, edi */
    goto L_1505953D; /* 0x1505945A: jmp 0x1505953d */
L_1505945F:
    PUSH32(esp, ebx); /* 0x1505945F: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x15059460: mov ebx, dword ptr [ebp + 0xc] */
    /* test ebx, ebx */ /* 0x15059463: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_15059487; /* 0x15059465: jne 0x15059487 */
L_15059467:
    RECOMP_CALL(sub_15036430); /* 0x15059467: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x16u); /* 0x1505946C: push 0x16 */
    edi = POP32_VAL(esp); /* 0x1505946E: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1505946F: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x15059471: push esi */
    PUSH32(esp, esi); /* 0x15059472: push esi */
    PUSH32(esp, esi); /* 0x15059473: push esi */
    PUSH32(esp, esi); /* 0x15059474: push esi */
    PUSH32(esp, esi); /* 0x15059475: push esi */
    MEM32(eax) = edi; /* 0x15059476: mov dword ptr [eax], edi */
    RECOMP_CALL(sub_1505A110); /* 0x15059478: call 0x1505a110 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1505947D: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = edi; /* 0x15059480: mov eax, edi */
    goto L_1505953C; /* 0x15059482: jmp 0x1505953c */
L_15059487:
    edx = MEM32(ebp + 0x10); /* 0x15059487: mov edx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1505948A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1505948C: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(edi) = (uint16_t)(LO16(eax)); /* 0x1505948E: mov word ptr [edi], ax */
    /* test edx, edx */ /* 0x15059491: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150594F5; /* 0x15059493: je 0x150594f5 */
L_15059495:
    /* cmp MEM16(edx), LO16(esi) */ /* 0x15059495: cmp word ptr [edx], si */
    _flag_a = (uint32_t)(MEM16(edx)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_150594F5; /* 0x15059498: je 0x150594f5 */
L_1505949A:
    ecx = edx; /* 0x1505949A: mov ecx, edx */
    eax = ecx + 0x2; /* 0x1505949C: lea eax, [ecx + 2] */
    MEM32(ebp + (-0x4)) = eax; /* 0x1505949F: mov dword ptr [ebp - 4], eax */
L_150594A2:
    SET_LO16(eax, MEM16(ecx)); /* 0x150594A2: mov ax, word ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x150594A5: add ecx, 2 */
    _flag_k = FK_ADD;
    /* cmp LO16(eax), LO16(esi) */ /* 0x150594A8: cmp ax, si */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_150594A2; /* 0x150594AB: jne 0x150594a2 */
L_150594AD:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + (-0x4)); /* 0x150594AD: sub ecx, dword ptr [ebp - 4] */
    _flag_k = FK_CMP;
    eax = ebx + (-0x7); /* 0x150594B0: lea eax, [ebx - 7] */
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x150594B3: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    /* cmp ecx, eax */ /* 0x150594B5: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_150594F5; /* 0x150594B7: jae 0x150594f5 */
L_150594B9:
    PUSH32(esp, edx); /* 0x150594B9: push edx */
    PUSH32(esp, ebx); /* 0x150594BA: push ebx */
    PUSH32(esp, edi); /* 0x150594BB: push edi */
    RECOMP_CALL(sub_1508F250); /* 0x150594BC: call 0x1508f250 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x150594C1: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x150594C4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150594D5; /* 0x150594C6: je 0x150594d5 */
L_150594C8:
    PUSH32(esp, esi); /* 0x150594C8: push esi */
    PUSH32(esp, esi); /* 0x150594C9: push esi */
    PUSH32(esp, esi); /* 0x150594CA: push esi */
    PUSH32(esp, esi); /* 0x150594CB: push esi */
    PUSH32(esp, esi); /* 0x150594CC: push esi */
    RECOMP_CALL(sub_1505A11B); /* 0x150594CD: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150594D2: add esp, 0x14 */
    _flag_k = FK_ADD;
L_150594D5:
    PUSH32(esp, 0x15005AF8u); /* 0x150594D5: push 0x15005af8 */
    PUSH32(esp, ebx); /* 0x150594DA: push ebx */
    PUSH32(esp, edi); /* 0x150594DB: push edi */
    RECOMP_CALL(sub_1508F120); /* 0x150594DC: call 0x1508f120 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x150594E1: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x150594E4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_150594F5; /* 0x150594E6: je 0x150594f5 */
L_150594E8:
    PUSH32(esp, esi); /* 0x150594E8: push esi */
    PUSH32(esp, esi); /* 0x150594E9: push esi */
    PUSH32(esp, esi); /* 0x150594EA: push esi */
    PUSH32(esp, esi); /* 0x150594EB: push esi */
    PUSH32(esp, esi); /* 0x150594EC: push esi */
    RECOMP_CALL(sub_1505A11B); /* 0x150594ED: call 0x1505a11b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x150594F2: add esp, 0x14 */
    _flag_k = FK_ADD;
L_150594F5:
    ebx = edi; /* 0x150594F5: mov ebx, edi */
    ecx = ebx + 0x2; /* 0x150594F7: lea ecx, [ebx + 2] */
L_150594FA:
    SET_LO16(eax, MEM16(ebx)); /* 0x150594FA: mov ax, word ptr [ebx] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 2; /* 0x150594FD: add ebx, 2 */
    _flag_k = FK_ADD;
    /* cmp LO16(eax), LO16(esi) */ /* 0x15059500: cmp ax, si */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_150594FA; /* 0x15059503: jne 0x150594fa */
L_15059505:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - ecx; /* 0x15059505: sub ebx, ecx */
    _flag_k = FK_CMP;
    ecx = edi; /* 0x15059507: mov ecx, edi */
    if (1u) _cf = (((ebx) >> 0) & 1u); /* 0x15059509: sar ebx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ebx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = (uint32_t)((int32_t)ebx >> 1u);
    edx = ecx + 0x2; /* 0x1505950B: lea edx, [ecx + 2] */
L_1505950E:
    SET_LO16(eax, MEM16(ecx)); /* 0x1505950E: mov ax, word ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x15059511: add ecx, 2 */
    _flag_k = FK_ADD;
    /* cmp LO16(eax), LO16(esi) */ /* 0x15059514: cmp ax, si */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1505950E; /* 0x15059517: jne 0x1505950e */
L_15059519:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x15059519: sub ecx, edx */
    _flag_k = FK_CMP;
    if (1u) _cf = (((ecx) >> 0) & 1u); /* 0x1505951B: sar ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 1u);
    MEM32(ebp + (-0x4)) = ecx; /* 0x1505951D: mov dword ptr [ebp - 4], ecx */
    RECOMP_CALL(sub_15036430); /* 0x15059520: call 0x15036430 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(eax)); /* 0x15059525: push dword ptr [eax] */
    eax = MEM32(ebp + 0xC); /* 0x15059527: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x1505952A: sub eax, ebx */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x1505952C: push eax */
    eax = MEM32(ebp + (-0x4)); /* 0x1505952D: mov eax, dword ptr [ebp - 4] */
    eax = edi + eax * 2; /* 0x15059530: lea eax, [edi + eax*2] */
    PUSH32(esp, eax); /* 0x15059533: push eax */
    RECOMP_CALL(sub_1505BF10); /* 0x15059534: call 0x1505bf10 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x15059539: add esp, 0xc */
    _flag_k = FK_ADD;
L_1505953C:
    ebx = POP32_VAL(esp); /* 0x1505953C: pop ebx */
L_1505953D:
    edi = POP32_VAL(esp); /* 0x1505953D: pop edi */
    esi = POP32_VAL(esp); /* 0x1505953E: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1505953F: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15059540: ret  */
    RECOMP_REGS_OUT();
}

void sub_15059547(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15059547u);

L_15059547:
    edi = edi; /* 0x15059547: mov edi, edi */
    PUSH32(esp, ebp); /* 0x15059549: push ebp */
    ebp = esp; /* 0x1505954A: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1505954C: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(0x15005FD8); /* 0x1505954F: mov ecx, dword ptr [0x15005fd8] */
    /* test eax, eax */ /* 0x15059555: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1505955D; /* 0x15059557: js 0x1505955d */
L_15059559:
    /* cmp eax, ecx */ /* 0x15059559: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1505955F; /* 0x1505955B: jl 0x1505955f */
L_1505955D:
    eax = ecx; /* 0x1505955D: mov eax, ecx */
L_1505955F:
    eax = MEM32(eax * 4 + 0x150012A0); /* 0x1505955F: mov eax, dword ptr [eax*4 + 0x150012a0] */
    ebp = POP32_VAL(esp); /* 0x15059566: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15059567: ret  */
    RECOMP_REGS_OUT();
}

void sub_15059570(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15059570u);

L_15059570:
    PUSH32(esp, ebp); /* 0x15059570: push ebp */
    ebp = esp; /* 0x15059571: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x15059573: push ebx */
    PUSH32(esp, esi); /* 0x15059574: push esi */
    PUSH32(esp, edi); /* 0x15059575: push edi */
    PUSH32(esp, ebp); /* 0x15059576: push ebp */
    PUSH32(esp, 0); /* 0x15059577: push 0 */
    PUSH32(esp, 0); /* 0x15059579: push 0 */
    PUSH32(esp, 0x15059588u); /* 0x1505957B: push 0x15059588 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x15059580: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_150AF768); /* 0x15059583: call 0x150af768 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x15059588: pop ebp */
    edi = POP32_VAL(esp); /* 0x15059589: pop edi */
    esi = POP32_VAL(esp); /* 0x1505958A: pop esi */
    ebx = POP32_VAL(esp); /* 0x1505958B: pop ebx */
    esp = ebp; /* 0x1505958C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1505958E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505958F: ret  */
    RECOMP_REGS_OUT();
}

void sub_15059588(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15059588u);

L_15059588:
    ebp = POP32_VAL(esp); /* 0x15059588: pop ebp */
    edi = POP32_VAL(esp); /* 0x15059589: pop edi */
    esi = POP32_VAL(esp); /* 0x1505958A: pop esi */
    ebx = POP32_VAL(esp); /* 0x1505958B: pop ebx */
    esp = ebp; /* 0x1505958C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1505958E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1505958F: ret  */
    RECOMP_REGS_OUT();
}

void sub_15059590(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x15059590u);

L_15059590:
    ecx = MEM32(esp + 0x4); /* 0x15059590: mov ecx, dword ptr [esp + 4] */
    /* test MEM32(ecx + 0x4), 6 */ /* 0x15059594: test dword ptr [ecx + 4], 6 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(6);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = 1; /* 0x1505959B: mov eax, 1 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_150595D4; /* 0x150595A0: je 0x150595d4 */
L_150595A2:
    eax = MEM32(esp + 0x14); /* 0x150595A2: mov eax, dword ptr [esp + 0x14] */
    ecx = MEM32(eax + (-0x4)); /* 0x150595A6: mov ecx, dword ptr [eax - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x150595A9: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1505E540); /* 0x150595AB: call 0x1505e540 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebp); /* 0x150595B0: push ebp */
    ebp = MEM32(eax + 0x10); /* 0x150595B1: mov ebp, dword ptr [eax + 0x10] */
    edx = MEM32(eax + 0x28); /* 0x150595B4: mov edx, dword ptr [eax + 0x28] */
    PUSH32(esp, edx); /* 0x150595B7: push edx */
    edx = MEM32(eax + 0x24); /* 0x150595B8: mov edx, dword ptr [eax + 0x24] */
    PUSH32(esp, edx); /* 0x150595BB: push edx */
    RECOMP_CALL(sub_150595D5); /* 0x150595BC: call 0x150595d5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 8; /* 0x150595C1: add esp, 8 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x150595C4: pop ebp */
    eax = MEM32(esp + 0x8); /* 0x150595C5: mov eax, dword ptr [esp + 8] */
    edx = MEM32(esp + 0x10); /* 0x150595C9: mov edx, dword ptr [esp + 0x10] */
    MEM32(edx) = eax; /* 0x150595CD: mov dword ptr [edx], eax */
    eax = 3; /* 0x150595CF: mov eax, 3 */
L_150595D4:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x150595D4: ret  */
    RECOMP_REGS_OUT();
}

void sub_150595D5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x150595D5u);

L_150595D5:
    PUSH32(esp, ebx); /* 0x150595D5: push ebx */
    PUSH32(esp, esi); /* 0x150595D6: push esi */
    PUSH32(esp, edi); /* 0x150595D7: push edi */
    eax = MEM32(esp + 0x10); /* 0x150595D8: mov eax, dword ptr [esp + 0x10] */
    PUSH32(esp, ebp); /* 0x150595DC: push ebp */
    PUSH32(esp, eax); /* 0x150595DD: push eax */
    PUSH32(esp, 0xFFFFFFFEu); /* 0x150595DE: push -2 */
    PUSH32(esp, 0x15059590u); /* 0x150595E0: push 0x15059590 */
    PUSH32(esp, MEM32(FS_BASE + (0))); /* 0x150595E5: push dword ptr fs:[0] */
    eax = MEM32(0x150BD340); /* 0x150595EC: mov eax, dword ptr [0x150bd340] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x150595F1: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x150595F3: push eax */
    eax = esp + 0x4; /* 0x150595F4: lea eax, [esp + 4] */
    MEM32(FS_BASE + (0)) = eax; /* 0x150595F8: mov dword ptr fs:[0], eax */
L_150595FE:
    eax = MEM32(esp + 0x28); /* 0x150595FE: mov eax, dword ptr [esp + 0x28] */
    ebx = MEM32(eax + 0x8); /* 0x15059602: mov ebx, dword ptr [eax + 8] */
    esi = MEM32(eax + 0xC); /* 0x15059605: mov esi, dword ptr [eax + 0xc] */
    /* cmp esi, 0xFFFFFFFFu */ /* 0x15059608: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_15059647; /* 0x1505960B: je 0x15059647 */
L_1505960D:
    /* cmp MEM32(esp + 0x2C), 0xFFFFFFFFu */ /* 0x1505960D: cmp dword ptr [esp + 0x2c], -1 */
    _flag_a = (uint32_t)(MEM32(esp + 0x2C)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1505961A; /* 0x15059612: je 0x1505961a */
L_15059614:
    /* cmp esi, MEM32(esp + 0x2C) */ /* 0x15059614: cmp esi, dword ptr [esp + 0x2c] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(esp + 0x2C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_15059647; /* 0x15059618: jbe 0x15059647 */
L_1505961A:
    esi = esi + esi * 2; /* 0x1505961A: lea esi, [esi + esi*2] */
    ecx = MEM32(ebx + esi * 4); /* 0x1505961D: mov ecx, dword ptr [ebx + esi*4] */
    MEM32(esp + 0xC) = ecx; /* 0x15059620: mov dword ptr [esp + 0xc], ecx */
    MEM32(eax + 0xC) = ecx; /* 0x15059624: mov dword ptr [eax + 0xc], ecx */
    /* cmp MEM32(ebx + esi * 4 + 0x4), 0 */ /* 0x15059627: cmp dword ptr [ebx + esi*4 + 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + esi * 4 + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_15059645; /* 0x1505962C: jne 0x15059645 */
L_1505962E:
    PUSH32(esp, 0x101u); /* 0x1505962E: push 0x101 */
    eax = MEM32(ebx + esi * 4 + 0x8); /* 0x15059633: mov eax, dword ptr [ebx + esi*4 + 8] */
    RECOMP_CALL(sub_15059685); /* 0x15059637: call 0x15059685 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + esi * 4 + 0x8); /* 0x1505963C: mov eax, dword ptr [ebx + esi*4 + 8] */
    RECOMP_CALL(sub_150596A4); /* 0x15059640: call 0x150596a4 */
    RECOMP_FLAGS_IN();
L_15059645:
    RECOMP_BACKEDGE();
    goto L_150595FE; /* 0x15059645: jmp 0x150595fe */
L_15059647:
    ecx = MEM32(esp + 0x4); /* 0x15059647: mov ecx, dword ptr [esp + 4] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1505964B: mov dword ptr fs:[0], ecx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x15059652: add esp, 0x18 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x15059655: pop edi */
    esi = POP32_VAL(esp); /* 0x15059656: pop esi */
    ebx = POP32_VAL(esp); /* 0x15059657: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x15059658: ret  */
    RECOMP_REGS_OUT();
}
