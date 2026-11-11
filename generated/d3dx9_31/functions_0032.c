#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_1716FC58(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1716FC58u);

L_1716FC58:
    edi = edi; /* 0x1716FC58: mov edi, edi */
    PUSH32(esp, esi); /* 0x1716FC5A: push esi */
    esi = MEM32(ecx + 0xC); /* 0x1716FC5B: mov esi, dword ptr [ecx + 0xc] */
    /* test esi, esi */ /* 0x1716FC5E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1716FC70; /* 0x1716FC60: je 0x1716fc70 */
L_1716FC62:
    ecx = esi; /* 0x1716FC62: mov ecx, esi */
    RECOMP_CALL(sub_1716FC58); /* 0x1716FC64: call 0x1716fc58 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1716FC69: push esi */
    RECOMP_CALL(sub_1721B010); /* 0x1716FC6A: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1716FC6F: pop ecx */
L_1716FC70:
    esi = POP32_VAL(esp); /* 0x1716FC70: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1716FC71: ret  */
    RECOMP_REGS_OUT();
}

void sub_1716FC77(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1716FC77u);

L_1716FC77:
    edi = edi; /* 0x1716FC77: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1716FC79: push ebp */
    ebp = esp; /* 0x1716FC7A: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1716FC7C: push esi */
    esi = ecx; /* 0x1716FC7D: mov esi, ecx */
    RECOMP_CALL(sub_1716FC58); /* 0x1716FC7F: call 0x1716fc58 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1716FC84: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1716FC91; /* 0x1716FC88: je 0x1716fc91 */
L_1716FC8A:
    PUSH32(esp, esi); /* 0x1716FC8A: push esi */
    RECOMP_CALL(sub_1721B010); /* 0x1716FC8B: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1716FC90: pop ecx */
L_1716FC91:
    eax = esi; /* 0x1716FC91: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1716FC93: pop esi */
    ebp = POP32_VAL(esp); /* 0x1716FC94: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1716FC95: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1716FC9D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1716FC9Du);

L_1716FC9D:
    edi = edi; /* 0x1716FC9D: mov edi, edi */
    PUSH32(esp, esi); /* 0x1716FC9F: push esi */
    esi = ecx; /* 0x1716FCA0: mov esi, ecx */
    RECOMP_CALL(sub_17173AF3); /* 0x1716FCA2: call 0x17173af3 */
    RECOMP_FLAGS_IN();
    ecx = esi + 0x3C; /* 0x1716FCA7: lea ecx, [esi + 0x3c] */
    RECOMP_CALL(sub_1721BA18); /* 0x1716FCAA: call 0x1721ba18 */
    RECOMP_FLAGS_IN();
    ecx = esi + 0x4C; /* 0x1716FCAF: lea ecx, [esi + 0x4c] */
    RECOMP_CALL(sub_170D3C30); /* 0x1716FCB2: call 0x170d3c30 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1716FCB7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x38) = eax; /* 0x1716FCB9: mov dword ptr [esi + 0x38], eax */
    MEM32(esi + 0x58) = eax; /* 0x1716FCBC: mov dword ptr [esi + 0x58], eax */
    MEM32(esi + 0x64) = eax; /* 0x1716FCBF: mov dword ptr [esi + 0x64], eax */
    MEM32(esi + 0x68) = eax; /* 0x1716FCC2: mov dword ptr [esi + 0x68], eax */
    MEM32(esi + 0x5C) = eax; /* 0x1716FCC5: mov dword ptr [esi + 0x5c], eax */
    MEM32(esi + 0x60) = eax; /* 0x1716FCC8: mov dword ptr [esi + 0x60], eax */
    MEM32(esi + 0x6C) = eax; /* 0x1716FCCB: mov dword ptr [esi + 0x6c], eax */
    eax = esi; /* 0x1716FCCE: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1716FCD0: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1716FCD1: ret  */
    RECOMP_REGS_OUT();
}

void sub_1716FCD7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1716FCD7u);

    goto L_1716FCD7;
L_17129E95:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x17129E95: ret  */
L_1716FCD7:
    edi = edi; /* 0x1716FCD7: mov edi, edi */
    PUSH32(esp, esi); /* 0x1716FCD9: push esi */
    esi = ecx; /* 0x1716FCDA: mov esi, ecx */
    ecx = MEM32(esi + 0x38); /* 0x1716FCDC: mov ecx, dword ptr [esi + 0x38] */
    /* test ecx, ecx */ /* 0x1716FCDF: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1716FCEA; /* 0x1716FCE1: je 0x1716fcea */
L_1716FCE3:
    PUSH32(esp, 1); /* 0x1716FCE3: push 1 */
    RECOMP_CALL(sub_1716FC77); /* 0x1716FCE5: call 0x1716fc77 */
    RECOMP_FLAGS_IN();
L_1716FCEA:
    PUSH32(esp, edi); /* 0x1716FCEA: push edi */
    edi = MEM32(esi + 0x6C); /* 0x1716FCEB: mov edi, dword ptr [esi + 0x6c] */
    /* test edi, edi */ /* 0x1716FCEE: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1716FD00; /* 0x1716FCF0: je 0x1716fd00 */
L_1716FCF2:
    ecx = edi; /* 0x1716FCF2: mov ecx, edi */
    RECOMP_CALL(sub_1716FCD7); /* 0x1716FCF4: call 0x1716fcd7 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x1716FCF9: push edi */
    RECOMP_CALL(sub_1721B010); /* 0x1716FCFA: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1716FCFF: pop ecx */
L_1716FD00:
    /* cmp MEM32(esi + 0x58), 0 */ /* 0x1716FD00: cmp dword ptr [esi + 0x58], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x58)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = POP32_VAL(esp); /* 0x1716FD04: pop edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1716FD18; /* 0x1716FD05: je 0x1716fd18 */
L_1716FD07:
    ecx = MEM32(esi + 0x64); /* 0x1716FD07: mov ecx, dword ptr [esi + 0x64] */
    /* test ecx, ecx */ /* 0x1716FD0A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1716FD18; /* 0x1716FD0C: je 0x1716fd18 */
L_1716FD0E:
    eax = MEM32(esi + 0x58); /* 0x1716FD0E: mov eax, dword ptr [esi + 0x58] */
    edx = MEM32(eax); /* 0x1716FD11: mov edx, dword ptr [eax] */
    PUSH32(esp, ecx); /* 0x1716FD13: push ecx */
    PUSH32(esp, eax); /* 0x1716FD14: push eax */
    RECOMP_ICALL(MEM32(edx + 0x4)); /* 0x1716FD15: call dword ptr [edx + 4] */
    RECOMP_FLAGS_IN();
L_1716FD18:
    ecx = esi + 0x4C; /* 0x1716FD18: lea ecx, [esi + 0x4c] */
    RECOMP_CALL(sub_1721BD1D); /* 0x1716FD1B: call 0x1721bd1d */
    RECOMP_FLAGS_IN();
    ecx = esi + 0x3C; /* 0x1716FD20: lea ecx, [esi + 0x3c] */
    RECOMP_CALL(sub_1721BD0D); /* 0x1716FD23: call 0x1721bd0d */
    RECOMP_FLAGS_IN();
    ecx = esi; /* 0x1716FD28: mov ecx, esi */
    esi = POP32_VAL(esp); /* 0x1716FD2A: pop esi */
    RECOMP_BACKEDGE();
    goto L_17129E95; /* 0x1716FD2B: jmp 0x17129e95 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1716FD35(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1716FD35u);

L_1716FD35:
    edi = edi; /* 0x1716FD35: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1716FD37: push ebp */
    ebp = esp; /* 0x1716FD38: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1716FD3A: push esi */
    esi = ecx; /* 0x1716FD3B: mov esi, ecx */
    RECOMP_CALL(sub_1716FCD7); /* 0x1716FD3D: call 0x1716fcd7 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1716FD42: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1716FD4F; /* 0x1716FD46: je 0x1716fd4f */
L_1716FD48:
    PUSH32(esp, esi); /* 0x1716FD48: push esi */
    RECOMP_CALL(sub_1721B010); /* 0x1716FD49: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1716FD4E: pop ecx */
L_1716FD4F:
    eax = esi; /* 0x1716FD4F: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1716FD51: pop esi */
    ebp = POP32_VAL(esp); /* 0x1716FD52: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1716FD53: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1716FD5B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1716FD5Bu);

L_1716FD5B:
    edi = edi; /* 0x1716FD5B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1716FD5D: push ebp */
    ebp = esp; /* 0x1716FD5E: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x120u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x120u; /* 0x1716FD60: sub esp, 0x120 */
    _flag_k = FK_CMP;
    eax = MEM32(0x1723C894); /* 0x1716FD66: mov eax, dword ptr [0x1723c894] */
    PUSH32(esp, ebx); /* 0x1716FD6B: push ebx */
    ebx = ecx; /* 0x1716FD6C: mov ebx, ecx */
    ecx = MEM32(ebp + 0x10); /* 0x1716FD6E: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x114)) = ecx; /* 0x1716FD71: mov dword ptr [ebp - 0x114], ecx */
    ecx = MEM32(ebp + 0x14); /* 0x1716FD77: mov ecx, dword ptr [ebp + 0x14] */
    MEM32(ebp + (-0x11C)) = ecx; /* 0x1716FD7A: mov dword ptr [ebp - 0x11c], ecx */
    ecx = MEM32(ebp + 0x18); /* 0x1716FD80: mov ecx, dword ptr [ebp + 0x18] */
    PUSH32(esp, esi); /* 0x1716FD83: push esi */
    MEM32(ebp + (-0x4)) = eax; /* 0x1716FD84: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x1716FD87: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1716FD8A: push edi */
    edi = MEM32(ebp + 0x1C); /* 0x1716FD8B: mov edi, dword ptr [ebp + 0x1c] */
    MEM32(ebp + (-0x118)) = ecx; /* 0x1716FD8E: mov dword ptr [ebp - 0x118], ecx */
    ecx = MEM32(ebp + 0x24); /* 0x1716FD94: mov ecx, dword ptr [ebp + 0x24] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1716FD97: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0xC), esi */ /* 0x1716FD99: cmp dword ptr [ebp + 0xc], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x10C)) = eax; /* 0x1716FD9C: mov dword ptr [ebp - 0x10c], eax */
    MEM32(ebp + (-0x110)) = ecx; /* 0x1716FDA2: mov dword ptr [ebp - 0x110], ecx */
    MEM32(ebx + 0x58) = edi; /* 0x1716FDA8: mov dword ptr [ebx + 0x58], edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1716FDD6; /* 0x1716FDAB: je 0x1716fdd6 */
L_1716FDAD:
    PUSH32(esp, esi); /* 0x1716FDAD: push esi */
    PUSH32(esp, esi); /* 0x1716FDAE: push esi */
    PUSH32(esp, 0x104u); /* 0x1716FDAF: push 0x104 */
    ecx = ebp + (-0x108); /* 0x1716FDB4: lea ecx, [ebp - 0x108] */
    PUSH32(esp, ecx); /* 0x1716FDBA: push ecx */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1716FDBB: push -1 */
    PUSH32(esp, eax); /* 0x1716FDBD: push eax */
    PUSH32(esp, esi); /* 0x1716FDBE: push esi */
    PUSH32(esp, 0xFDE9u); /* 0x1716FDBF: push 0xfde9 */
    RECOMP_ICALL(MEM32(0x1700111C)); /* 0x1716FDC4: call dword ptr [0x1700111c] */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x108); /* 0x1716FDCA: lea eax, [ebp - 0x108] */
    MEM32(ebp + (-0x10C)) = eax; /* 0x1716FDD0: mov dword ptr [ebp - 0x10c], eax */
L_1716FDD6:
    /* cmp edi, esi */ /* 0x1716FDD6: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1716FE7D; /* 0x1716FDD8: je 0x1716fe7d */
L_1716FDDE:
    eax = MEM32(ebp + (-0x10C)); /* 0x1716FDDE: mov eax, dword ptr [ebp - 0x10c] */
    edi = eax + 0x1; /* 0x1716FDE4: lea edi, [eax + 1] */
L_1716FDE7:
    SET_LO8(ecx, MEM8(eax)); /* 0x1716FDE7: mov cl, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1716FDE9: inc eax */
    _flag_k = FK_INC;
    /* test LO8(ecx), LO8(ecx) */ /* 0x1716FDEA: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1716FDE7; /* 0x1716FDEC: jne 0x1716fde7 */
L_1716FDEE:
    ecx = MEM32(ebp + (-0x114)); /* 0x1716FDEE: mov ecx, dword ptr [ebp - 0x114] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x1716FDF4: sub eax, edi */
    _flag_k = FK_CMP;
    edi = eax + 0x1; /* 0x1716FDF6: lea edi, [eax + 1] */
    PUSH32(esp, 1); /* 0x1716FDF9: push 1 */
    PUSH32(esp, edi); /* 0x1716FDFB: push edi */
    RECOMP_CALL(sub_1721BE6F); /* 0x1716FDFC: call 0x1721be6f */
    RECOMP_FLAGS_IN();
    /* cmp eax, esi */ /* 0x1716FE01: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebx + 0x5C) = eax; /* 0x1716FE03: mov dword ptr [ebx + 0x5c], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1716FEC8; /* 0x1716FE06: je 0x1716fec8 */
L_1716FE0C:
    esi = MEM32(ebp + (-0x10C)); /* 0x1716FE0C: mov esi, dword ptr [ebp - 0x10c] */
    ecx = edi; /* 0x1716FE12: mov ecx, edi */
    edi = eax; /* 0x1716FE14: mov edi, eax */
    eax = ecx; /* 0x1716FE16: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1716FE18: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1716FE18: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1716FE1B: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x1716FE1D: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1716FE1F: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x1716FE22: rep movsb byte ptr es:[edi], byte ptr [esi] */
    eax = MEM32(ebx + 0x58); /* 0x1716FE24: mov eax, dword ptr [ebx + 0x58] */
    ecx = MEM32(eax); /* 0x1716FE27: mov ecx, dword ptr [eax] */
    edi = ebx + 0x68; /* 0x1716FE29: lea edi, [ebx + 0x68] */
    PUSH32(esp, edi); /* 0x1716FE2C: push edi */
    esi = ebx + 0x64; /* 0x1716FE2D: lea esi, [ebx + 0x64] */
    PUSH32(esp, esi); /* 0x1716FE30: push esi */
    PUSH32(esp, MEM32(ebp + (-0x110))); /* 0x1716FE31: push dword ptr [ebp - 0x110] */
    PUSH32(esp, MEM32(ebx + 0x5C)); /* 0x1716FE37: push dword ptr [ebx + 0x5c] */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x1716FE3A: push dword ptr [ebp + 0x20] */
    PUSH32(esp, eax); /* 0x1716FE3D: push eax */
    RECOMP_ICALL(MEM32(ecx)); /* 0x1716FE3E: call dword ptr [ecx] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1716FE40: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x110)) = eax; /* 0x1716FE42: mov dword ptr [ebp - 0x110], eax */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1716FF5E; /* 0x1716FE48: jge 0x1716ff5e */
L_1716FE4E:
    PUSH32(esp, MEM32(ebp + (-0x10C))); /* 0x1716FE4E: push dword ptr [ebp - 0x10c] */
    PUSH32(esp, 0x170217C0u); /* 0x1716FE54: push 0x170217c0 */
    PUSH32(esp, 0x5E3u); /* 0x1716FE59: push 0x5e3 */
    PUSH32(esp, MEM32(ebp + (-0x11C))); /* 0x1716FE5E: push dword ptr [ebp - 0x11c] */
    PUSH32(esp, MEM32(ebp + (-0x118))); /* 0x1716FE64: push dword ptr [ebp - 0x118] */
    RECOMP_CALL(sub_17174059); /* 0x1716FE6A: call 0x17174059 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x110)); /* 0x1716FE6F: mov eax, dword ptr [ebp - 0x110] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1716FE75: add esp, 0x14 */
    _flag_k = FK_ADD;
    goto L_1716FF80; /* 0x1716FE78: jmp 0x1716ff80 */
L_1716FE7D:
    edi = MEM32(0x170010BC); /* 0x1716FE7D: mov edi, dword ptr [0x170010bc] */
    PUSH32(esp, esi); /* 0x1716FE83: push esi */
    PUSH32(esp, esi); /* 0x1716FE84: push esi */
    PUSH32(esp, esi); /* 0x1716FE85: push esi */
    PUSH32(esp, MEM32(ebp + (-0x10C))); /* 0x1716FE86: push dword ptr [ebp - 0x10c] */
    RECOMP_ICALL(edi); /* 0x1716FE8C: call edi */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x114)); /* 0x1716FE8E: mov ecx, dword ptr [ebp - 0x114] */
    esi = eax; /* 0x1716FE94: mov esi, eax */
    eax = esi + 0x1; /* 0x1716FE96: lea eax, [esi + 1] */
    PUSH32(esp, 1); /* 0x1716FE99: push 1 */
    PUSH32(esp, eax); /* 0x1716FE9B: push eax */
    MEM32(ebp + (-0x110)) = eax; /* 0x1716FE9C: mov dword ptr [ebp - 0x110], eax */
    RECOMP_CALL(sub_1721BE6F); /* 0x1716FEA2: call 0x1721be6f */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1716FEA7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebx + 0x60) = eax; /* 0x1716FEA9: mov dword ptr [ebx + 0x60], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1716FEC8; /* 0x1716FEAC: je 0x1716fec8 */
L_1716FEAE:
    ecx = MEM32(ebp + (-0x114)); /* 0x1716FEAE: mov ecx, dword ptr [ebp - 0x114] */
    PUSH32(esp, 1); /* 0x1716FEB4: push 1 */
    PUSH32(esp, MEM32(ebp + (-0x110))); /* 0x1716FEB6: push dword ptr [ebp - 0x110] */
    RECOMP_CALL(sub_1721BE6F); /* 0x1716FEBC: call 0x1721be6f */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1716FEC1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebx + 0x5C) = eax; /* 0x1716FEC3: mov dword ptr [ebx + 0x5c], eax */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1716FED2; /* 0x1716FEC6: jne 0x1716fed2 */
L_1716FEC8:
    eax = 0x8007000Eu; /* 0x1716FEC8: mov eax, 0x8007000e */
    goto L_1716FF80; /* 0x1716FECD: jmp 0x1716ff80 */
L_1716FED2:
    eax = ebp + (-0x120); /* 0x1716FED2: lea eax, [ebp - 0x120] */
    PUSH32(esp, eax); /* 0x1716FED8: push eax */
    PUSH32(esp, MEM32(ebx + 0x60)); /* 0x1716FED9: push dword ptr [ebx + 0x60] */
    PUSH32(esp, esi); /* 0x1716FEDC: push esi */
    PUSH32(esp, MEM32(ebp + (-0x10C))); /* 0x1716FEDD: push dword ptr [ebp - 0x10c] */
    RECOMP_ICALL(edi); /* 0x1716FEE3: call edi */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0x60); /* 0x1716FEE5: mov eax, dword ptr [ebx + 0x60] */
    ecx = MEM32(ebp + (-0x110)); /* 0x1716FEE8: mov ecx, dword ptr [ebp - 0x110] */
    MEM8(esi + eax) = (uint8_t)(0); /* 0x1716FEEE: mov byte ptr [esi + eax], 0 */
    esi = MEM32(ebx + 0x60); /* 0x1716FEF2: mov esi, dword ptr [ebx + 0x60] */
    edi = MEM32(ebx + 0x5C); /* 0x1716FEF5: mov edi, dword ptr [ebx + 0x5c] */
    eax = ecx; /* 0x1716FEF8: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1716FEFA: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1716FEFA: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1716FEFD: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x1716FEFF: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1716FF01: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x1716FF04: rep movsb byte ptr es:[edi], byte ptr [esi] */
    eax = MEM32(ebp + (-0x120)); /* 0x1716FF06: mov eax, dword ptr [ebp - 0x120] */
    /* test eax, eax */ /* 0x1716FF0C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1716FF13; /* 0x1716FF0E: je 0x1716ff13 */
L_1716FF10:
    MEM8(eax) = (uint8_t)(0); /* 0x1716FF10: mov byte ptr [eax], 0 */
L_1716FF13:
    PUSH32(esp, 0); /* 0x1716FF13: push 0 */
    PUSH32(esp, MEM32(ebx + 0x5C)); /* 0x1716FF15: push dword ptr [ebx + 0x5c] */
    ecx = ebx + 0x3C; /* 0x1716FF18: lea ecx, [ebx + 0x3c] */
    RECOMP_CALL(sub_1721BA2F); /* 0x1716FF1B: call 0x1721ba2f */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1716FF20: mov esi, eax */
    /* test esi, esi */ /* 0x1716FF22: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1716FF4E; /* 0x1716FF24: jge 0x1716ff4e */
L_1716FF26:
    PUSH32(esp, MEM32(ebp + (-0x10C))); /* 0x1716FF26: push dword ptr [ebp - 0x10c] */
    PUSH32(esp, 0x170217C0u); /* 0x1716FF2C: push 0x170217c0 */
    PUSH32(esp, 0x5E3u); /* 0x1716FF31: push 0x5e3 */
    PUSH32(esp, MEM32(ebp + (-0x11C))); /* 0x1716FF36: push dword ptr [ebp - 0x11c] */
    PUSH32(esp, MEM32(ebp + (-0x118))); /* 0x1716FF3C: push dword ptr [ebp - 0x118] */
    RECOMP_CALL(sub_17174059); /* 0x1716FF42: call 0x17174059 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1716FF47: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = esi; /* 0x1716FF4A: mov eax, esi */
    goto L_1716FF80; /* 0x1716FF4C: jmp 0x1716ff80 */
L_1716FF4E:
    eax = MEM32(ebx + 0x44); /* 0x1716FF4E: mov eax, dword ptr [ebx + 0x44] */
    esi = ebx + 0x64; /* 0x1716FF51: lea esi, [ebx + 0x64] */
    MEM32(esi) = eax; /* 0x1716FF54: mov dword ptr [esi], eax */
    eax = MEM32(ebx + 0x48); /* 0x1716FF56: mov eax, dword ptr [ebx + 0x48] */
    edi = ebx + 0x68; /* 0x1716FF59: lea edi, [ebx + 0x68] */
    MEM32(edi) = eax; /* 0x1716FF5C: mov dword ptr [edi], eax */
L_1716FF5E:
    PUSH32(esp, MEM32(ebp + (-0x118))); /* 0x1716FF5E: push dword ptr [ebp - 0x118] */
    ecx = ebx; /* 0x1716FF64: mov ecx, ebx */
    PUSH32(esp, MEM32(ebp + (-0x114))); /* 0x1716FF66: push dword ptr [ebp - 0x114] */
    PUSH32(esp, 1); /* 0x1716FF6C: push 1 */
    PUSH32(esp, MEM32(ebx + 0x5C)); /* 0x1716FF6E: push dword ptr [ebx + 0x5c] */
    PUSH32(esp, MEM32(edi)); /* 0x1716FF71: push dword ptr [edi] */
    PUSH32(esp, MEM32(esi)); /* 0x1716FF73: push dword ptr [esi] */
    RECOMP_CALL(sub_17173B12); /* 0x1716FF75: call 0x17173b12 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1716FF7A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1716FF80; /* 0x1716FF7C: jl 0x1716ff80 */
L_1716FF7E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1716FF7E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1716FF80:
    ecx = MEM32(ebp + (-0x4)); /* 0x1716FF80: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x1716FF83: pop edi */
    esi = POP32_VAL(esp); /* 0x1716FF84: pop esi */
    ebx = POP32_VAL(esp); /* 0x1716FF85: pop ebx */
    RECOMP_CALL(sub_1721B76C); /* 0x1716FF86: call 0x1721b76c */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1716FF8B: leave  */
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x1716FF8C: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_1716FF94(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1716FF94u);

L_1716FF94:
    edi = edi; /* 0x1716FF94: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1716FF96: push ebp */
    ebp = esp; /* 0x1716FF97: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1716FF99: push ebx */
    PUSH32(esp, esi); /* 0x1716FF9A: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1716FF9B: push dword ptr [ebp + 0x10] */
    esi = ecx; /* 0x1716FF9E: mov esi, ecx */
    PUSH32(esp, 0); /* 0x1716FFA0: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1716FFA2: push dword ptr [ebp + 0xc] */
    ecx = esi + 0x4C; /* 0x1716FFA5: lea ecx, [esi + 0x4c] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1716FFA8: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1721BD56); /* 0x1716FFAB: call 0x1721bd56 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1716FFB0: mov ebx, eax */
    /* test ebx, ebx */ /* 0x1716FFB2: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1716FFD1; /* 0x1716FFB4: jge 0x1716ffd1 */
L_1716FFB6:
    PUSH32(esp, 0x170217E4u); /* 0x1716FFB6: push 0x170217e4 */
    PUSH32(esp, 0x5E8u); /* 0x1716FFBB: push 0x5e8 */
    PUSH32(esp, 0); /* 0x1716FFC0: push 0 */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1716FFC2: push dword ptr [ebp + 0x18] */
    RECOMP_CALL(sub_17174059); /* 0x1716FFC5: call 0x17174059 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1716FFCA: add esp, 0x10 */
    _flag_k = FK_ADD;
    eax = ebx; /* 0x1716FFCD: mov eax, ebx */
    goto L_1716FFF6; /* 0x1716FFCF: jmp 0x1716fff6 */
L_1716FFD1:
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1716FFD1: push dword ptr [ebp + 0x18] */
    ecx = MEM32(esi + 0x54); /* 0x1716FFD4: mov ecx, dword ptr [esi + 0x54] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1716FFD7: push dword ptr [ebp + 0x14] */
    eax = MEM32(esi + 0x50); /* 0x1716FFDA: mov eax, dword ptr [esi + 0x50] */
    PUSH32(esp, 1); /* 0x1716FFDD: push 1 */
    PUSH32(esp, 0); /* 0x1716FFDF: push 0 */
    PUSH32(esp, ecx); /* 0x1716FFE1: push ecx */
    MEM32(esi + 0x68) = ecx; /* 0x1716FFE2: mov dword ptr [esi + 0x68], ecx */
    PUSH32(esp, eax); /* 0x1716FFE5: push eax */
    ecx = esi; /* 0x1716FFE6: mov ecx, esi */
    MEM32(esi + 0x64) = eax; /* 0x1716FFE8: mov dword ptr [esi + 0x64], eax */
    RECOMP_CALL(sub_17173B12); /* 0x1716FFEB: call 0x17173b12 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1716FFF0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1716FFF6; /* 0x1716FFF2: jl 0x1716fff6 */
L_1716FFF4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1716FFF4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1716FFF6:
    esi = POP32_VAL(esp); /* 0x1716FFF6: pop esi */
    ebx = POP32_VAL(esp); /* 0x1716FFF7: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1716FFF8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x1716FFF9: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_17170001(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17170001u);

L_17170001:
    edi = edi; /* 0x17170001: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17170003: push ebp */
    ebp = esp; /* 0x17170004: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x17170006: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x17170009: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(ebp + 0x8); /* 0x1717000B: mov edx, dword ptr [ebp + 8] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1717001B; /* 0x1717000E: je 0x1717001b */
L_17170010:
    /* test edx, edx */ /* 0x17170010: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1717001B; /* 0x17170012: jne 0x1717001b */
L_17170014:
    eax = 0x8876086Cu; /* 0x17170014: mov eax, 0x8876086c */
    goto L_17170038; /* 0x17170019: jmp 0x17170038 */
L_1717001B:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1717001B: push dword ptr [ebp + 0x14] */
    MEM32(ecx + 0x64) = edx; /* 0x1717001E: mov dword ptr [ecx + 0x64], edx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x17170021: push dword ptr [ebp + 0x10] */
    MEM32(ecx + 0x68) = eax; /* 0x17170024: mov dword ptr [ecx + 0x68], eax */
    PUSH32(esp, 1); /* 0x17170027: push 1 */
    PUSH32(esp, 0); /* 0x17170029: push 0 */
    PUSH32(esp, eax); /* 0x1717002B: push eax */
    PUSH32(esp, edx); /* 0x1717002C: push edx */
    RECOMP_CALL(sub_17173B12); /* 0x1717002D: call 0x17173b12 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17170032: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17170038; /* 0x17170034: jl 0x17170038 */
L_17170036:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17170036: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_17170038:
    ebp = POP32_VAL(esp); /* 0x17170038: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x17170039: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_17170041(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17170041u);

L_17170041:
    edi = edi; /* 0x17170041: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17170043: push ebp */
    ebp = esp; /* 0x17170044: mov ebp, esp */
    eax = ecx; /* 0x17170046: mov eax, ecx */
    ecx = MEM32(ebp + 0x8); /* 0x17170048: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) & 0; /* 0x1717004B: and dword ptr [eax + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = ecx; /* 0x1717004F: mov dword ptr [eax], ecx */
    MEM32(eax + 0x8) = 1; /* 0x17170051: mov dword ptr [eax + 8], 1 */
    ebp = POP32_VAL(esp); /* 0x17170058: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x17170059: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_17170061(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17170061u);

L_17170061:
    edi = edi; /* 0x17170061: mov edi, edi */
    PUSH32(esp, esi); /* 0x17170063: push esi */
    esi = MEM32(ecx + 0x4); /* 0x17170064: mov esi, dword ptr [ecx + 4] */
    /* test esi, esi */ /* 0x17170067: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17170079; /* 0x17170069: je 0x17170079 */
L_1717006B:
    ecx = esi; /* 0x1717006B: mov ecx, esi */
    RECOMP_CALL(sub_17170061); /* 0x1717006D: call 0x17170061 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x17170072: push esi */
    RECOMP_CALL(sub_1721B010); /* 0x17170073: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x17170078: pop ecx */
L_17170079:
    esi = POP32_VAL(esp); /* 0x17170079: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1717007A: ret  */
    RECOMP_REGS_OUT();
}

void sub_17170080(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17170080u);

L_17170080:
    edi = edi; /* 0x17170080: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17170082: push ebp */
    ebp = esp; /* 0x17170083: mov ebp, esp */
    PUSH32(esp, esi); /* 0x17170085: push esi */
    esi = ecx; /* 0x17170086: mov esi, ecx */
    RECOMP_CALL(sub_17170061); /* 0x17170088: call 0x17170061 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1717008D: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1717009A; /* 0x17170091: je 0x1717009a */
L_17170093:
    PUSH32(esp, esi); /* 0x17170093: push esi */
    RECOMP_CALL(sub_1721B010); /* 0x17170094: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x17170099: pop ecx */
L_1717009A:
    eax = esi; /* 0x1717009A: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1717009C: pop esi */
    ebp = POP32_VAL(esp); /* 0x1717009D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1717009E: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171700A6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171700A6u);

L_171700A6:
    edi = edi; /* 0x171700A6: mov edi, edi */
    PUSH32(esp, esi); /* 0x171700A8: push esi */
    esi = MEM32(ecx + 0x28); /* 0x171700A9: mov esi, dword ptr [ecx + 0x28] */
    /* test esi, esi */ /* 0x171700AC: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171700BE; /* 0x171700AE: je 0x171700be */
L_171700B0:
    ecx = esi; /* 0x171700B0: mov ecx, esi */
    RECOMP_CALL(sub_171700A6); /* 0x171700B2: call 0x171700a6 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x171700B7: push esi */
    RECOMP_CALL(sub_1721B010); /* 0x171700B8: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171700BD: pop ecx */
L_171700BE:
    esi = POP32_VAL(esp); /* 0x171700BE: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171700BF: ret  */
    RECOMP_REGS_OUT();
}

void sub_171700C5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171700C5u);

L_171700C5:
    edi = edi; /* 0x171700C5: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171700C7: push ebp */
    ebp = esp; /* 0x171700C8: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171700CA: push esi */
    esi = ecx; /* 0x171700CB: mov esi, ecx */
    RECOMP_CALL(sub_171700A6); /* 0x171700CD: call 0x171700a6 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x171700D2: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171700DF; /* 0x171700D6: je 0x171700df */
L_171700D8:
    PUSH32(esp, esi); /* 0x171700D8: push esi */
    RECOMP_CALL(sub_1721B010); /* 0x171700D9: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171700DE: pop ecx */
L_171700DF:
    eax = esi; /* 0x171700DF: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x171700E1: pop esi */
    ebp = POP32_VAL(esp); /* 0x171700E2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171700E3: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171700EB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171700EBu);

L_171700EB:
    edi = edi; /* 0x171700EB: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171700ED: push ebp */
    ebp = esp; /* 0x171700EE: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171700F0: push esi */
    PUSH32(esp, 0xCu); /* 0x171700F1: push 0xc */
    esi = ecx; /* 0x171700F3: mov esi, ecx */
    RECOMP_CALL(sub_1721B01C); /* 0x171700F5: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171700FA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(ebp + 0x8); /* 0x171700FC: mov edx, dword ptr [ebp + 8] */
    ecx = POP32_VAL(esp); /* 0x171700FF: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1717010C; /* 0x17170100: je 0x1717010c */
L_17170102:
    PUSH32(esp, edx); /* 0x17170102: push edx */
    ecx = eax; /* 0x17170103: mov ecx, eax */
    RECOMP_CALL(sub_17170041); /* 0x17170105: call 0x17170041 */
    RECOMP_FLAGS_IN();
    goto L_1717010E; /* 0x1717010A: jmp 0x1717010e */
L_1717010C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1717010C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1717010E:
    /* test eax, eax */ /* 0x1717010E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17170119; /* 0x17170110: jne 0x17170119 */
L_17170112:
    eax = 0x8007000Eu; /* 0x17170112: mov eax, 0x8007000e */
    goto L_1717012A; /* 0x17170117: jmp 0x1717012a */
L_17170119:
    ecx = MEM32(esi + 0x68); /* 0x17170119: mov ecx, dword ptr [esi + 0x68] */
    MEM32(eax + 0x4) = ecx; /* 0x1717011C: mov dword ptr [eax + 4], ecx */
    MEM32(esi + 0x68) = eax; /* 0x1717011F: mov dword ptr [esi + 0x68], eax */
    MEM32(esi + 0x298) = edx; /* 0x17170122: mov dword ptr [esi + 0x298], edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17170128: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1717012A:
    esi = POP32_VAL(esp); /* 0x1717012A: pop esi */
    ebp = POP32_VAL(esp); /* 0x1717012B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1717012C: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_17170134(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17170134u);

L_17170134:
    edi = edi; /* 0x17170134: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17170136: push ebp */
    ebp = esp; /* 0x17170137: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x17170139: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x1717013C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1717014B; /* 0x1717013E: je 0x1717014b */
L_17170140:
    edx = MEM32(ecx + 0x26C); /* 0x17170140: mov edx, dword ptr [ecx + 0x26c] */
    edx = MEM32(edx + 0x18); /* 0x17170146: mov edx, dword ptr [edx + 0x18] */
    MEM32(eax) = edx; /* 0x17170149: mov dword ptr [eax], edx */
L_1717014B:
    eax = MEM32(ebp + 0xC); /* 0x1717014B: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x1717014E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1717015D; /* 0x17170150: je 0x1717015d */
L_17170152:
    ecx = MEM32(ecx + 0x26C); /* 0x17170152: mov ecx, dword ptr [ecx + 0x26c] */
    ecx = MEM32(ecx + 0x1C); /* 0x17170158: mov ecx, dword ptr [ecx + 0x1c] */
    MEM32(eax) = ecx; /* 0x1717015B: mov dword ptr [eax], ecx */
L_1717015D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1717015D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1717015F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x17170160: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_17170168(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17170168u);

L_17170168:
    edi = edi; /* 0x17170168: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1717016A: push ebp */
    ebp = esp; /* 0x1717016B: mov ebp, esp */
    eax = MEM32(ecx + 0x268); /* 0x1717016D: mov eax, dword ptr [ecx + 0x268] */
    goto L_17170177; /* 0x17170173: jmp 0x17170177 */
L_17170175:
    eax = ecx; /* 0x17170175: mov eax, ecx */
L_17170177:
    ecx = MEM32(eax + 0x6C); /* 0x17170177: mov ecx, dword ptr [eax + 0x6c] */
    /* test ecx, ecx */ /* 0x1717017A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17170175; /* 0x1717017C: jne 0x17170175 */
L_1717017E:
    ecx = MEM32(ebp + 0x8); /* 0x1717017E: mov ecx, dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x17170181: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17170189; /* 0x17170183: je 0x17170189 */
L_17170185:
    edx = MEM32(eax); /* 0x17170185: mov edx, dword ptr [eax] */
    MEM32(ecx) = edx; /* 0x17170187: mov dword ptr [ecx], edx */
L_17170189:
    edx = MEM32(ebp + 0xC); /* 0x17170189: mov edx, dword ptr [ebp + 0xc] */
    /* test edx, edx */ /* 0x1717018C: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171701A2; /* 0x1717018E: je 0x171701a2 */
L_17170190:
    ecx = MEM32(eax + 0x4); /* 0x17170190: mov ecx, dword ptr [eax + 4] */
    eax = MEM32(eax); /* 0x17170193: mov eax, dword ptr [eax] */
    /* cmp ecx, eax */ /* 0x17170195: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1717019F; /* 0x17170197: jb 0x1717019f */
L_17170199:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x17170199: sub ecx, eax */
    _flag_k = FK_CMP;
    MEM32(edx) = ecx; /* 0x1717019B: mov dword ptr [edx], ecx */
    goto L_171701A2; /* 0x1717019D: jmp 0x171701a2 */
L_1717019F:
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(0);
    MEM32(edx) = MEM32(edx) & 0; /* 0x1717019F: and dword ptr [edx], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_171701A2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171701A2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x171701A4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171701A5: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171701AD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171701ADu);

L_171701AD:
    edi = edi; /* 0x171701AD: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171701AF: push ebp */
    ebp = esp; /* 0x171701B0: mov ebp, esp */
    eax = MEM32(ecx + 0x26C); /* 0x171701B2: mov eax, dword ptr [ecx + 0x26c] */
    edx = MEM32(ebp + 0x8); /* 0x171701B8: mov edx, dword ptr [ebp + 8] */
    MEM32(eax + 0x1C) = edx; /* 0x171701BB: mov dword ptr [eax + 0x1c], edx */
    /* cmp MEM32(ecx + 0x278), 0xCu */ /* 0x171701BE: cmp dword ptr [ecx + 0x278], 0xc */
    _flag_a = (uint32_t)(MEM32(ecx + 0x278)); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171701D0; /* 0x171701C5: je 0x171701d0 */
L_171701C7:
    eax = MEM32(ecx + 0x26C); /* 0x171701C7: mov eax, dword ptr [ecx + 0x26c] */
    _flag_a = (uint32_t)(MEM32(eax + 0x1C)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x1C) = MEM32(eax + 0x1C) - 1; /* 0x171701CD: dec dword ptr [eax + 0x1c] */
    _flag_k = FK_DEC;
L_171701D0:
    eax = MEM32(ebp + 0xC); /* 0x171701D0: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x171701D3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171701E0; /* 0x171701D5: je 0x171701e0 */
L_171701D7:
    ecx = MEM32(ecx + 0x26C); /* 0x171701D7: mov ecx, dword ptr [ecx + 0x26c] */
    MEM32(ecx + 0x18) = eax; /* 0x171701DD: mov dword ptr [ecx + 0x18], eax */
L_171701E0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171701E0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x171701E2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171701E3: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171701EB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171701EBu);

L_171701EB:
    edi = edi; /* 0x171701EB: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171701ED: push ebp */
    ebp = esp; /* 0x171701EE: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x108u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x108u; /* 0x171701F0: sub esp, 0x108 */
    _flag_k = FK_CMP;
    eax = MEM32(0x1723C894); /* 0x171701F6: mov eax, dword ptr [0x1723c894] */
    PUSH32(esp, esi); /* 0x171701FB: push esi */
    PUSH32(esp, edi); /* 0x171701FC: push edi */
    edi = ecx; /* 0x171701FD: mov edi, ecx */
    ecx = MEM32(edi + 0x26C); /* 0x171701FF: mov ecx, dword ptr [edi + 0x26c] */
    esi = MEM32(ecx); /* 0x17170205: mov esi, dword ptr [ecx] */
    MEM32(ebp + (-0x4)) = eax; /* 0x17170207: mov dword ptr [ebp - 4], eax */
    RECOMP_CALL(sub_17173B81); /* 0x1717020A: call 0x17173b81 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(edi + 0x50), 0 */ /* 0x1717020F: cmp dword ptr [edi + 0x50], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x50)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171702E0; /* 0x17170213: je 0x171702e0 */
L_17170219:
    goto L_17170226; /* 0x17170219: jmp 0x17170226 */
L_1717021B:
    SET_LO8(eax, MEM8(esi)); /* 0x1717021B: mov al, byte ptr [esi] */
    /* cmp LO8(eax), 0x20u */ /* 0x1717021D: cmp al, 0x20 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17170225; /* 0x1717021F: je 0x17170225 */
L_17170221:
    /* cmp LO8(eax), 9 */ /* 0x17170221: cmp al, 9 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(9) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17170230; /* 0x17170223: jne 0x17170230 */
L_17170225:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x17170225: inc esi */
    _flag_k = FK_INC;
L_17170226:
    eax = MEM32(edi + 0x26C); /* 0x17170226: mov eax, dword ptr [edi + 0x26c] */
    /* cmp esi, MEM32(eax) */ /* 0x1717022C: cmp esi, dword ptr [eax] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1717021B; /* 0x1717022E: jb 0x1717021b */
L_17170230:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x108))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x108)) = MEM32(ebp + (-0x108)) & 0; /* 0x17170230: and dword ptr [ebp - 0x108], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = esi + 0x2; /* 0x17170237: lea edx, [esi + 2] */
    eax = esi + 0x1; /* 0x1717023A: lea eax, [esi + 1] */
    PUSH32(esp, ebx); /* 0x1717023D: push ebx */
L_1717023E:
    ecx = MEM32(edi + 0x26C); /* 0x1717023E: mov ecx, dword ptr [edi + 0x26c] */
    ebx = MEM32(ecx); /* 0x17170244: mov ebx, dword ptr [ecx] */
    /* cmp esi, ebx */ /* 0x17170246: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_171702A7; /* 0x17170248: jae 0x171702a7 */
L_1717024A:
    SET_LO8(ecx, MEM8(esi)); /* 0x1717024A: mov cl, byte ptr [esi] */
    /* cmp LO8(ecx), 0x5Cu */ /* 0x1717024C: cmp cl, 0x5c */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x5Cu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17170280; /* 0x1717024F: jne 0x17170280 */
L_17170251:
    /* cmp eax, ebx */ /* 0x17170251: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_17170262; /* 0x17170253: jae 0x17170262 */
L_17170255:
    /* cmp MEM8(eax), 0xAu */ /* 0x17170255: cmp byte ptr [eax], 0xa */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0xAu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17170262; /* 0x17170258: jne 0x17170262 */
L_1717025A:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1717025A: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1717025B: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1717025C: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1717025D: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1717025E: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1717025F: inc edx */
    _flag_k = FK_INC;
    goto L_1717029B; /* 0x17170260: jmp 0x1717029b */
L_17170262:
    /* cmp LO8(ecx), 0x5Cu */ /* 0x17170262: cmp cl, 0x5c */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x5Cu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17170280; /* 0x17170265: jne 0x17170280 */
L_17170267:
    /* cmp edx, ebx */ /* 0x17170267: cmp edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_17170280; /* 0x17170269: jae 0x17170280 */
L_1717026B:
    /* cmp MEM8(eax), 0xDu */ /* 0x1717026B: cmp byte ptr [eax], 0xd */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0xDu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17170280; /* 0x1717026E: jne 0x17170280 */
L_17170270:
    /* cmp MEM8(edx), 0xAu */ /* 0x17170270: cmp byte ptr [edx], 0xa */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(0xAu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17170280; /* 0x17170273: jne 0x17170280 */
L_17170275:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 3; /* 0x17170275: add esi, 3 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 3; /* 0x17170278: add eax, 3 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 3; /* 0x1717027B: add edx, 3 */
    _flag_k = FK_ADD;
    goto L_1717029B; /* 0x1717027E: jmp 0x1717029b */
L_17170280:
    /* cmp LO8(ecx), 0xDu */ /* 0x17170280: cmp cl, 0xd */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0xDu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17170298; /* 0x17170283: je 0x17170298 */
L_17170285:
    ebx = MEM32(ebp + (-0x108)); /* 0x17170285: mov ebx, dword ptr [ebp - 0x108] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x108))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x108)) = MEM32(ebp + (-0x108)) + 1; /* 0x1717028B: inc dword ptr [ebp - 0x108] */
    _flag_k = FK_INC;
    MEM8(ebp + ebx + (-0x104)) = (uint8_t)(LO8(ecx)); /* 0x17170291: mov byte ptr [ebp + ebx - 0x104], cl */
L_17170298:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x17170298: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17170299: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1717029A: inc edx */
    _flag_k = FK_INC;
L_1717029B:
    /* cmp MEM32(ebp + (-0x108)), 0xFFu */ /* 0x1717029B: cmp dword ptr [ebp - 0x108], 0xff */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x108))); _flag_b = (uint32_t)(0xFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1717023E; /* 0x171702A5: jb 0x1717023e */
L_171702A7:
    eax = MEM32(ebp + (-0x108)); /* 0x171702A7: mov eax, dword ptr [ebp - 0x108] */
    MEM8(ebp + eax + (-0x104)) = (uint8_t)(0); /* 0x171702AD: mov byte ptr [ebp + eax - 0x104], 0 */
    eax = ebp + (-0x104); /* 0x171702B5: lea eax, [ebp - 0x104] */
    PUSH32(esp, eax); /* 0x171702BB: push eax */
    PUSH32(esp, 0x170217FCu); /* 0x171702BC: push 0x170217fc */
    PUSH32(esp, 0); /* 0x171702C1: push 0 */
    eax = edi + 0x278; /* 0x171702C3: lea eax, [edi + 0x278] */
    PUSH32(esp, eax); /* 0x171702C9: push eax */
    eax = edi + 0x18; /* 0x171702CA: lea eax, [edi + 0x18] */
    PUSH32(esp, eax); /* 0x171702CD: push eax */
    RECOMP_CALL(sub_17174059); /* 0x171702CE: call 0x17174059 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x171702D3: add esp, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171702D6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171702D8: inc eax */
    _flag_k = FK_INC;
    MEM32(edi + 0x48) = eax; /* 0x171702D9: mov dword ptr [edi + 0x48], eax */
    MEM32(edi + 0x44) = eax; /* 0x171702DC: mov dword ptr [edi + 0x44], eax */
    ebx = POP32_VAL(esp); /* 0x171702DF: pop ebx */
L_171702E0:
    ecx = MEM32(ebp + (-0x4)); /* 0x171702E0: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x171702E3: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171702E4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x171702E6: pop esi */
    RECOMP_CALL(sub_1721B76C); /* 0x171702E7: call 0x1721b76c */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171702EC: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171702ED: ret  */
    RECOMP_REGS_OUT();
}

void sub_171702F3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171702F3u);

L_171702F3:
    edi = edi; /* 0x171702F3: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171702F5: push ebp */
    ebp = esp; /* 0x171702F6: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171702F8: push esi */
    PUSH32(esp, 0x10u); /* 0x171702F9: push 0x10 */
    esi = ecx; /* 0x171702FB: mov esi, ecx */
    RECOMP_CALL(sub_1721B01C); /* 0x171702FD: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17170302: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x17170304: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17170316; /* 0x17170305: je 0x17170316 */
L_17170307:
    PUSH32(esp, MEM32(esi + 0x50)); /* 0x17170307: push dword ptr [esi + 0x50] */
    ecx = eax; /* 0x1717030A: mov ecx, eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1717030C: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1716FC35); /* 0x1717030F: call 0x1716fc35 */
    RECOMP_FLAGS_IN();
    goto L_17170318; /* 0x17170314: jmp 0x17170318 */
L_17170316:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17170316: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_17170318:
    /* test eax, eax */ /* 0x17170318: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17170323; /* 0x1717031A: jne 0x17170323 */
L_1717031C:
    eax = 0x8007000Eu; /* 0x1717031C: mov eax, 0x8007000e */
    goto L_1717034E; /* 0x17170321: jmp 0x1717034e */
L_17170323:
    ecx = esi + 0x268; /* 0x17170323: lea ecx, [esi + 0x268] */
    edx = MEM32(ecx); /* 0x17170329: mov edx, dword ptr [ecx] */
    edx = MEM32(edx + 0x38); /* 0x1717032B: mov edx, dword ptr [edx + 0x38] */
    MEM32(eax + 0xC) = edx; /* 0x1717032E: mov dword ptr [eax + 0xc], edx */
    ecx = MEM32(ecx); /* 0x17170331: mov ecx, dword ptr [ecx] */
    MEM32(ecx + 0x38) = eax; /* 0x17170333: mov dword ptr [ecx + 0x38], eax */
    /* cmp MEM32(esi + 0x50), 0 */ /* 0x17170336: cmp dword ptr [esi + 0x50], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x50)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17170347; /* 0x1717033A: je 0x17170347 */
L_1717033C:
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x1717033C: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17170347; /* 0x17170340: je 0x17170347 */
L_17170342:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17170342: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17170344: inc eax */
    _flag_k = FK_INC;
    goto L_17170349; /* 0x17170345: jmp 0x17170349 */
L_17170347:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17170347: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_17170349:
    MEM32(esi + 0x54) = eax; /* 0x17170349: mov dword ptr [esi + 0x54], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1717034C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1717034E:
    esi = POP32_VAL(esp); /* 0x1717034E: pop esi */
    ebp = POP32_VAL(esp); /* 0x1717034F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x17170350: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_17170358(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17170358u);

L_17170358:
    edi = edi; /* 0x17170358: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1717035A: push ebp */
    ebp = esp; /* 0x1717035B: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1717035D: push esi */
    esi = ecx; /* 0x1717035E: mov esi, ecx */
    eax = MEM32(esi + 0x268); /* 0x17170360: mov eax, dword ptr [esi + 0x268] */
    eax = MEM32(eax + 0x38); /* 0x17170366: mov eax, dword ptr [eax + 0x38] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x17170369: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, edx */ /* 0x1717036B: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1717037B; /* 0x1717036D: jne 0x1717037b */
L_1717036F:
    PUSH32(esp, 0x1702182Cu); /* 0x1717036F: push 0x1702182c */
    PUSH32(esp, 0x5E4u); /* 0x17170374: push 0x5e4 */
    goto L_1717038A; /* 0x17170379: jmp 0x1717038a */
L_1717037B:
    /* cmp MEM32(eax + 0x8), edx */ /* 0x1717037B: cmp dword ptr [eax + 8], edx */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171703AB; /* 0x1717037E: je 0x171703ab */
L_17170380:
    PUSH32(esp, 0x17021808u); /* 0x17170380: push 0x17021808 */
    PUSH32(esp, 0x5E9u); /* 0x17170385: push 0x5e9 */
L_1717038A:
    eax = esi + 0x278; /* 0x1717038A: lea eax, [esi + 0x278] */
    PUSH32(esp, eax); /* 0x17170390: push eax */
    eax = esi + 0x18; /* 0x17170391: lea eax, [esi + 0x18] */
    PUSH32(esp, eax); /* 0x17170394: push eax */
    RECOMP_CALL(sub_17174059); /* 0x17170395: call 0x17174059 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1717039A: add esp, 0x10 */
    _flag_k = FK_ADD;
    MEM32(esi + 0x44) = 1; /* 0x1717039D: mov dword ptr [esi + 0x44], 1 */
    eax = 0x80004005u; /* 0x171703A4: mov eax, 0x80004005 */
    goto L_171703D0; /* 0x171703A9: jmp 0x171703d0 */
L_171703AB:
    /* cmp MEM32(ebp + 0x8), edx */ /* 0x171703AB: cmp dword ptr [ebp + 8], edx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171703BE; /* 0x171703AE: je 0x171703be */
L_171703B0:
    /* cmp MEM32(eax), edx */ /* 0x171703B0: cmp dword ptr [eax], edx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171703BE; /* 0x171703B2: jne 0x171703be */
L_171703B4:
    /* cmp MEM32(eax + 0x4), edx */ /* 0x171703B4: cmp dword ptr [eax + 4], edx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171703BE; /* 0x171703B7: je 0x171703be */
L_171703B9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171703B9: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171703BB: inc ecx */
    _flag_k = FK_INC;
    goto L_171703C0; /* 0x171703BC: jmp 0x171703c0 */
L_171703BE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171703BE: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_171703C0:
    /* cmp MEM32(ebp + 0x8), edx */ /* 0x171703C0: cmp dword ptr [ebp + 8], edx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi + 0x54) = ecx; /* 0x171703C3: mov dword ptr [esi + 0x54], ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171703CE; /* 0x171703C6: je 0x171703ce */
L_171703C8:
    MEM32(eax) = 1; /* 0x171703C8: mov dword ptr [eax], 1 */
L_171703CE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171703CE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171703D0:
    esi = POP32_VAL(esp); /* 0x171703D0: pop esi */
    ebp = POP32_VAL(esp); /* 0x171703D1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171703D2: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171703DA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171703DAu);

L_171703DA:
    edi = edi; /* 0x171703DA: mov edi, edi */
    PUSH32(esp, esi); /* 0x171703DC: push esi */
    esi = ecx; /* 0x171703DD: mov esi, ecx */
    eax = MEM32(esi + 0x268); /* 0x171703DF: mov eax, dword ptr [esi + 0x268] */
    eax = MEM32(eax + 0x38); /* 0x171703E5: mov eax, dword ptr [eax + 0x38] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171703E8: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, edx */ /* 0x171703EA: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171703FA; /* 0x171703EC: jne 0x171703fa */
L_171703EE:
    PUSH32(esp, 0x17021864u); /* 0x171703EE: push 0x17021864 */
    PUSH32(esp, 0x5E5u); /* 0x171703F3: push 0x5e5 */
    goto L_17170409; /* 0x171703F8: jmp 0x17170409 */
L_171703FA:
    /* cmp MEM32(eax + 0x8), edx */ /* 0x171703FA: cmp dword ptr [eax + 8], edx */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1717042A; /* 0x171703FD: je 0x1717042a */
L_171703FF:
    PUSH32(esp, 0x17021840u); /* 0x171703FF: push 0x17021840 */
    PUSH32(esp, 0x5EAu); /* 0x17170404: push 0x5ea */
L_17170409:
    eax = esi + 0x278; /* 0x17170409: lea eax, [esi + 0x278] */
    PUSH32(esp, eax); /* 0x1717040F: push eax */
    eax = esi + 0x18; /* 0x17170410: lea eax, [esi + 0x18] */
    PUSH32(esp, eax); /* 0x17170413: push eax */
    RECOMP_CALL(sub_17174059); /* 0x17170414: call 0x17174059 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x17170419: add esp, 0x10 */
    _flag_k = FK_ADD;
    MEM32(esi + 0x44) = 1; /* 0x1717041C: mov dword ptr [esi + 0x44], 1 */
    eax = 0x80004005u; /* 0x17170423: mov eax, 0x80004005 */
    esi = POP32_VAL(esp); /* 0x17170428: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x17170429: ret  */
L_1717042A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1717042A: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1717042C: inc ecx */
    _flag_k = FK_INC;
    /* cmp MEM32(eax), edx */ /* 0x1717042D: cmp dword ptr [eax], edx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17170438; /* 0x1717042F: jne 0x17170438 */
L_17170431:
    /* cmp MEM32(eax + 0x4), edx */ /* 0x17170431: cmp dword ptr [eax + 4], edx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17170438; /* 0x17170434: je 0x17170438 */
L_17170436:
    edx = ecx; /* 0x17170436: mov edx, ecx */
L_17170438:
    MEM32(esi + 0x54) = edx; /* 0x17170438: mov dword ptr [esi + 0x54], edx */
    MEM32(eax) = ecx; /* 0x1717043B: mov dword ptr [eax], ecx */
    MEM32(eax + 0x8) = ecx; /* 0x1717043D: mov dword ptr [eax + 8], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17170440: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x17170442: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x17170443: ret  */
    RECOMP_REGS_OUT();
}

void sub_17170449(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17170449u);

L_17170449:
    edi = edi; /* 0x17170449: mov edi, edi */
    PUSH32(esp, esi); /* 0x1717044B: push esi */
    esi = ecx; /* 0x1717044C: mov esi, ecx */
    eax = MEM32(esi + 0x268); /* 0x1717044E: mov eax, dword ptr [esi + 0x268] */
    ecx = MEM32(eax + 0x38); /* 0x17170454: mov ecx, dword ptr [eax + 0x38] */
    /* test ecx, ecx */ /* 0x17170457: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17170486; /* 0x17170459: jne 0x17170486 */
L_1717045B:
    PUSH32(esp, 0x17021878u); /* 0x1717045B: push 0x17021878 */
    PUSH32(esp, 0x5E6u); /* 0x17170460: push 0x5e6 */
    eax = esi + 0x278; /* 0x17170465: lea eax, [esi + 0x278] */
    PUSH32(esp, eax); /* 0x1717046B: push eax */
    eax = esi + 0x18; /* 0x1717046C: lea eax, [esi + 0x18] */
    PUSH32(esp, eax); /* 0x1717046F: push eax */
    RECOMP_CALL(sub_17174059); /* 0x17170470: call 0x17174059 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x17170475: add esp, 0x10 */
    _flag_k = FK_ADD;
    MEM32(esi + 0x44) = 1; /* 0x17170478: mov dword ptr [esi + 0x44], 1 */
    eax = 0x80004005u; /* 0x1717047F: mov eax, 0x80004005 */
    esi = POP32_VAL(esp); /* 0x17170484: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x17170485: ret  */
L_17170486:
    edx = MEM32(ecx + 0x4); /* 0x17170486: mov edx, dword ptr [ecx + 4] */
    MEM32(esi + 0x54) = edx; /* 0x17170489: mov dword ptr [esi + 0x54], edx */
    edx = MEM32(ecx + 0xC); /* 0x1717048C: mov edx, dword ptr [ecx + 0xc] */
    MEM32(eax + 0x38) = edx; /* 0x1717048F: mov dword ptr [eax + 0x38], edx */
    _flag_a = (uint32_t)(MEM32(ecx + 0xC)); _flag_b = (uint32_t)(0);
    MEM32(ecx + 0xC) = MEM32(ecx + 0xC) & 0; /* 0x17170492: and dword ptr [ecx + 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 1); /* 0x17170496: push 1 */
    RECOMP_CALL(sub_1716FC77); /* 0x17170498: call 0x1716fc77 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1717049D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1717049F: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171704A0: ret  */
    RECOMP_REGS_OUT();
}

void sub_171704A6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171704A6u);

L_171704A6:
    edi = edi; /* 0x171704A6: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171704A8: push ebp */
    ebp = esp; /* 0x171704A9: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x171704AB: push ecx */
    PUSH32(esp, ebx); /* 0x171704AC: push ebx */
    ebx = ecx; /* 0x171704AD: mov ebx, ecx */
    ecx = MEM32(ebx + 0x26C); /* 0x171704AF: mov ecx, dword ptr [ebx + 0x26c] */
    PUSH32(esp, esi); /* 0x171704B5: push esi */
    esi = ebx + 0x278; /* 0x171704B6: lea esi, [ebx + 0x278] */
    PUSH32(esp, esi); /* 0x171704BC: push esi */
    PUSH32(esp, MEM32(ebx + 0x298)); /* 0x171704BD: push dword ptr [ebx + 0x298] */
    RECOMP_CALL(sub_17174BE6); /* 0x171704C3: call 0x17174be6 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171704C8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171705DA; /* 0x171704CA: jl 0x171705da */
L_171704D0:
    eax = MEM32(esi); /* 0x171704D0: mov eax, dword ptr [esi] */
    /* cmp eax, 1 */ /* 0x171704D2: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x171704D5: push edi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_171705C2; /* 0x171704D6: jne 0x171705c2 */
L_171704DC:
    PUSH32(esp, 2); /* 0x171704DC: push 2 */
    esi = ebx + 0x280; /* 0x171704DE: lea esi, [ebx + 0x280] */
    edi = 0x17008794u; /* 0x171704E4: mov edi, 0x17008794 */
    ecx = POP32_VAL(esp); /* 0x171704E9: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171704EA: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM8(esi); _b = MEM8(edi); esi += _df; edi += _df; ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x171704EC: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_171705C2; /* 0x171704EE: jne 0x171705c2 */
L_171704F4:
    ecx = MEM32(ebx + 0x26C); /* 0x171704F4: mov ecx, dword ptr [ebx + 0x26c] */
    esi = ebx + 0x278; /* 0x171704FA: lea esi, [ebx + 0x278] */
    PUSH32(esp, esi); /* 0x17170500: push esi */
    PUSH32(esp, MEM32(ebx + 0x298)); /* 0x17170501: push dword ptr [ebx + 0x298] */
    RECOMP_CALL(sub_17174BE6); /* 0x17170507: call 0x17174be6 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1717050C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171705D9; /* 0x1717050E: jl 0x171705d9 */
L_17170514:
    /* cmp MEM32(esi), 9 */ /* 0x17170514: cmp dword ptr [esi], 9 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1717053E; /* 0x17170517: jne 0x1717053e */
L_17170519:
    eax = MEM32(ebx + 0x280); /* 0x17170519: mov eax, dword ptr [ebx + 0x280] */
    ecx = MEM32(ebx + 0x26C); /* 0x1717051F: mov ecx, dword ptr [ebx + 0x26c] */
    PUSH32(esp, esi); /* 0x17170525: push esi */
    PUSH32(esp, MEM32(ebx + 0x298)); /* 0x17170526: push dword ptr [ebx + 0x298] */
    MEM32(ebp + (-0x4)) = eax; /* 0x1717052C: mov dword ptr [ebp - 4], eax */
    RECOMP_CALL(sub_17174BE6); /* 0x1717052F: call 0x17174be6 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17170534: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171705D9; /* 0x17170536: jl 0x171705d9 */
L_1717053C:
    goto L_17170542; /* 0x1717053C: jmp 0x17170542 */
L_1717053E:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1717053E: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_17170542:
    eax = MEM32(esi); /* 0x17170542: mov eax, dword ptr [esi] */
    /* cmp eax, 1 */ /* 0x17170544: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171705C2; /* 0x17170547: jne 0x171705c2 */
L_17170549:
    PUSH32(esp, 2); /* 0x17170549: push 2 */
    edi = 0x1700825Cu; /* 0x1717054B: mov edi, 0x1700825c */
    esi = ebx + 0x280; /* 0x17170550: lea esi, [ebx + 0x280] */
    ecx = POP32_VAL(esp); /* 0x17170556: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x17170557: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM8(esi); _b = MEM8(edi); esi += _df; edi += _df; ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x17170559: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_171705C2; /* 0x1717055B: jne 0x171705c2 */
L_1717055D:
    ecx = MEM32(ebx + 0x26C); /* 0x1717055D: mov ecx, dword ptr [ebx + 0x26c] */
    esi = ebx + 0x278; /* 0x17170563: lea esi, [ebx + 0x278] */
    PUSH32(esp, esi); /* 0x17170569: push esi */
    PUSH32(esp, MEM32(ebx + 0x298)); /* 0x1717056A: push dword ptr [ebx + 0x298] */
    RECOMP_CALL(sub_17174BE6); /* 0x17170570: call 0x17174be6 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17170575: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171705D9; /* 0x17170577: jl 0x171705d9 */
L_17170579:
    eax = MEM32(esi); /* 0x17170579: mov eax, dword ptr [esi] */
    /* cmp eax, 0xCu */ /* 0x1717057B: cmp eax, 0xc */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17170585; /* 0x1717057E: je 0x17170585 */
L_17170580:
    /* cmp eax, 0xDu */ /* 0x17170580: cmp eax, 0xd */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xDu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171705C2; /* 0x17170583: jne 0x171705c2 */
L_17170585:
    esi = MEM32(ebp + (-0x4)); /* 0x17170585: mov esi, dword ptr [ebp - 4] */
    /* test esi, esi */ /* 0x17170588: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17170591; /* 0x1717058A: jne 0x17170591 */
L_1717058C:
    _flag_a = (uint32_t)(MEM32(ebx + 0x38)); _flag_b = (uint32_t)(esi);
    MEM32(ebx + 0x38) = MEM32(ebx + 0x38) & esi; /* 0x1717058C: and dword ptr [ebx + 0x38], esi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_171705D7; /* 0x1717058F: jmp 0x171705d7 */
L_17170591:
    PUSH32(esp, 0xAu); /* 0x17170591: push 0xa */
    edi = 0x1701B500u; /* 0x17170593: mov edi, 0x1701b500 */
    ecx = POP32_VAL(esp); /* 0x17170598: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x17170599: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM8(esi); _b = MEM8(edi); esi += _df; edi += _df; ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x1717059B: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_171705A8; /* 0x1717059D: jne 0x171705a8 */
L_1717059F:
    MEM32(ebx + 0x38) = 0x400u; /* 0x1717059F: mov dword ptr [ebx + 0x38], 0x400 */
    goto L_171705D7; /* 0x171705A6: jmp 0x171705d7 */
L_171705A8:
    esi = MEM32(ebp + (-0x4)); /* 0x171705A8: mov esi, dword ptr [ebp - 4] */
    PUSH32(esp, 0xDu); /* 0x171705AB: push 0xd */
    edi = 0x1701B62Cu; /* 0x171705AD: mov edi, 0x1701b62c */
    ecx = POP32_VAL(esp); /* 0x171705B2: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171705B3: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM8(esi); _b = MEM8(edi); esi += _df; edi += _df; ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x171705B5: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_171705C2; /* 0x171705B7: jne 0x171705c2 */
L_171705B9:
    MEM32(ebx + 0x38) = 0x800u; /* 0x171705B9: mov dword ptr [ebx + 0x38], 0x800 */
    goto L_171705D7; /* 0x171705C0: jmp 0x171705d7 */
L_171705C2:
    /* cmp eax, 0xCu */ /* 0x171705C2: cmp eax, 0xc */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171705D7; /* 0x171705C5: je 0x171705d7 */
L_171705C7:
    /* cmp eax, 0xDu */ /* 0x171705C7: cmp eax, 0xd */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xDu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171705D7; /* 0x171705CA: je 0x171705d7 */
L_171705CC:
    ecx = MEM32(ebx + 0x26C); /* 0x171705CC: mov ecx, dword ptr [ebx + 0x26c] */
    RECOMP_CALL(sub_17173B81); /* 0x171705D2: call 0x17173b81 */
    RECOMP_FLAGS_IN();
L_171705D7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171705D7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171705D9:
    edi = POP32_VAL(esp); /* 0x171705D9: pop edi */
L_171705DA:
    esi = POP32_VAL(esp); /* 0x171705DA: pop esi */
    MEM32(ebx + 0x40) = 1; /* 0x171705DB: mov dword ptr [ebx + 0x40], 1 */
    ebx = POP32_VAL(esp); /* 0x171705E2: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171705E3: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171705E4: ret  */
    RECOMP_REGS_OUT();
}

void sub_171705EA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171705EAu);

L_171705EA:
    edi = edi; /* 0x171705EA: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171705EC: push ebp */
    ebp = esp; /* 0x171705ED: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x171705EF: sub esp, 0x18 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x171705F2: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) & 0; /* 0x171705F6: and dword ptr [ebp - 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x171705FA: push ebx */
    PUSH32(esp, esi); /* 0x171705FB: push esi */
    ebx = ecx; /* 0x171705FC: mov ebx, ecx */
    ecx = MEM32(ebx + 0x26C); /* 0x171705FE: mov ecx, dword ptr [ebx + 0x26c] */
    PUSH32(esp, edi); /* 0x17170604: push edi */
    edi = ebx + 0x278; /* 0x17170605: lea edi, [ebx + 0x278] */
    PUSH32(esp, edi); /* 0x1717060B: push edi */
    PUSH32(esp, MEM32(ebx + 0x298)); /* 0x1717060C: push dword ptr [ebx + 0x298] */
    RECOMP_CALL(sub_17174BE6); /* 0x17170612: call 0x17174be6 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x17170617: mov esi, eax */
    /* test esi, esi */ /* 0x17170619: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17170936; /* 0x1717061B: jl 0x17170936 */
L_17170621:
    /* cmp MEM32(edi), 1 */ /* 0x17170621: cmp dword ptr [edi], 1 */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17170919; /* 0x17170624: jne 0x17170919 */
L_1717062A:
    PUSH32(esp, 2); /* 0x1717062A: push 2 */
    esi = ebx + 0x280; /* 0x1717062C: lea esi, [ebx + 0x280] */
    edi = 0x17008794u; /* 0x17170632: mov edi, 0x17008794 */
    ecx = POP32_VAL(esp); /* 0x17170637: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17170638: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM8(esi); _b = MEM8(edi); esi += _df; edi += _df; ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x1717063A: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_17170919; /* 0x1717063C: jne 0x17170919 */
L_17170642:
    ecx = MEM32(ebx + 0x26C); /* 0x17170642: mov ecx, dword ptr [ebx + 0x26c] */
    eax = ebx + 0x278; /* 0x17170648: lea eax, [ebx + 0x278] */
    PUSH32(esp, eax); /* 0x1717064E: push eax */
    PUSH32(esp, MEM32(ebx + 0x298)); /* 0x1717064F: push dword ptr [ebx + 0x298] */
    RECOMP_CALL(sub_17174BE6); /* 0x17170655: call 0x17174be6 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1717065A: mov esi, eax */
    /* test esi, esi */ /* 0x1717065C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17170936; /* 0x1717065E: jl 0x17170936 */
L_17170664:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x17170664: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_17170668:
    eax = MEM32(ebx + 0x278); /* 0x17170668: mov eax, dword ptr [ebx + 0x278] */
    /* cmp eax, 1 */ /* 0x1717066E: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1717068B; /* 0x17170671: jne 0x1717068b */
L_17170673:
    PUSH32(esp, 2); /* 0x17170673: push 2 */
    edi = 0x1700825Cu; /* 0x17170675: mov edi, 0x1700825c */
    esi = ebx + 0x280; /* 0x1717067A: lea esi, [ebx + 0x280] */
    ecx = POP32_VAL(esp); /* 0x17170680: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x17170681: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM8(esi); _b = MEM8(edi); esi += _df; edi += _df; ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x17170683: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_1717095E; /* 0x17170685: je 0x1717095e */
L_1717068B:
    /* cmp eax, 9 */ /* 0x1717068B: cmp eax, 9 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171706FA; /* 0x1717068E: jne 0x171706fa */
L_17170690:
    eax = MEM32(ebx + 0x280); /* 0x17170690: mov eax, dword ptr [ebx + 0x280] */
    PUSH32(esp, 5); /* 0x17170696: push 5 */
    edi = 0x170218A4u; /* 0x17170698: mov edi, 0x170218a4 */
    esi = eax; /* 0x1717069D: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x1717069F: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171706A0: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM8(esi); _b = MEM8(edi); esi += _df; edi += _df; ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x171706A2: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_171706AF; /* 0x171706A4: jne 0x171706af */
L_171706A6:
    MEM32(ebp + (-0x10)) = 0x10u; /* 0x171706A6: mov dword ptr [ebp - 0x10], 0x10 */
    goto L_17170728; /* 0x171706AD: jmp 0x17170728 */
L_171706AF:
    PUSH32(esp, 6); /* 0x171706AF: push 6 */
    edi = 0x1702189Cu; /* 0x171706B1: mov edi, 0x1702189c */
    esi = eax; /* 0x171706B6: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x171706B8: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171706B9: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM8(esi); _b = MEM8(edi); esi += _df; edi += _df; ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x171706BB: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_171706C8; /* 0x171706BD: jne 0x171706c8 */
L_171706BF:
    MEM32(ebp + (-0x10)) = 0xFu; /* 0x171706BF: mov dword ptr [ebp - 0x10], 0xf */
    goto L_17170728; /* 0x171706C6: jmp 0x17170728 */
L_171706C8:
    PUSH32(esp, 8); /* 0x171706C8: push 8 */
    edi = 0x17021894u; /* 0x171706CA: mov edi, 0x17021894 */
    esi = eax; /* 0x171706CF: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x171706D1: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171706D2: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM8(esi); _b = MEM8(edi); esi += _df; edi += _df; ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x171706D4: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_171706DD; /* 0x171706D6: jne 0x171706dd */
L_171706D8:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(edx);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & edx; /* 0x171706D8: and dword ptr [ebp - 0x10], edx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_17170728; /* 0x171706DB: jmp 0x17170728 */
L_171706DD:
    esi = eax; /* 0x171706DD: mov esi, eax */
    PUSH32(esp, 8); /* 0x171706DF: push 8 */
    edi = 0x1701B5E8u; /* 0x171706E1: mov edi, 0x1701b5e8 */
    ecx = POP32_VAL(esp); /* 0x171706E6: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171706E7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM8(esi); _b = MEM8(edi); esi += _df; edi += _df; ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x171706E9: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_17170919; /* 0x171706EB: jne 0x17170919 */
L_171706F1:
    MEM32(ebp + (-0x10)) = 0xFFu; /* 0x171706F1: mov dword ptr [ebp - 0x10], 0xff */
    goto L_17170728; /* 0x171706F8: jmp 0x17170728 */
L_171706FA:
    /* cmp eax, 2 */ /* 0x171706FA: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1717070D; /* 0x171706FD: je 0x1717070d */
L_171706FF:
    /* cmp eax, 3 */ /* 0x171706FF: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1717070D; /* 0x17170702: je 0x1717070d */
L_17170704:
    /* cmp eax, 4 */ /* 0x17170704: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17170919; /* 0x17170707: jne 0x17170919 */
L_1717070D:
    eax = MEM32(ebx + 0x280); /* 0x1717070D: mov eax, dword ptr [ebx + 0x280] */
    /* cmp eax, 1 */ /* 0x17170713: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_17170919; /* 0x17170716: jb 0x17170919 */
L_1717071C:
    /* cmp eax, 4 */ /* 0x1717071C: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_17170919; /* 0x1717071F: ja 0x17170919 */
L_17170725:
    MEM32(ebp + (-0x10)) = eax; /* 0x17170725: mov dword ptr [ebp - 0x10], eax */
L_17170728:
    ecx = MEM32(ebx + 0x26C); /* 0x17170728: mov ecx, dword ptr [ebx + 0x26c] */
    edi = ebx + 0x278; /* 0x1717072E: lea edi, [ebx + 0x278] */
    PUSH32(esp, edi); /* 0x17170734: push edi */
    PUSH32(esp, MEM32(ebx + 0x298)); /* 0x17170735: push dword ptr [ebx + 0x298] */
    RECOMP_CALL(sub_17174BE6); /* 0x1717073B: call 0x17174be6 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x17170740: mov esi, eax */
    /* test esi, esi */ /* 0x17170742: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17170936; /* 0x17170744: jl 0x17170936 */
L_1717074A:
    /* cmp MEM32(edi), 1 */ /* 0x1717074A: cmp dword ptr [edi], 1 */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17170919; /* 0x1717074D: jne 0x17170919 */
L_17170753:
    PUSH32(esp, 2); /* 0x17170753: push 2 */
    edi = 0x17021890u; /* 0x17170755: mov edi, 0x17021890 */
    esi = ebx + 0x280; /* 0x1717075A: lea esi, [ebx + 0x280] */
    ecx = POP32_VAL(esp); /* 0x17170760: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17170761: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM8(esi); _b = MEM8(edi); esi += _df; edi += _df; ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x17170763: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_17170919; /* 0x17170765: jne 0x17170919 */
L_1717076B:
    ecx = MEM32(ebx + 0x26C); /* 0x1717076B: mov ecx, dword ptr [ebx + 0x26c] */
    eax = ebx + 0x278; /* 0x17170771: lea eax, [ebx + 0x278] */
    PUSH32(esp, eax); /* 0x17170777: push eax */
    PUSH32(esp, MEM32(ebx + 0x298)); /* 0x17170778: push dword ptr [ebx + 0x298] */
    RECOMP_CALL(sub_17174BE6); /* 0x1717077E: call 0x17174be6 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x17170783: mov esi, eax */
    /* test esi, esi */ /* 0x17170785: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17170936; /* 0x17170787: jl 0x17170936 */
L_1717078D:
    eax = MEM32(ebx + 0x278); /* 0x1717078D: mov eax, dword ptr [ebx + 0x278] */
    /* cmp eax, 2 */ /* 0x17170793: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171707A6; /* 0x17170796: je 0x171707a6 */
L_17170798:
    /* cmp eax, 3 */ /* 0x17170798: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171707A6; /* 0x1717079B: je 0x171707a6 */
L_1717079D:
    /* cmp eax, 4 */ /* 0x1717079D: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17170919; /* 0x171707A0: jne 0x17170919 */
L_171707A6:
    eax = MEM32(ebx + 0x280); /* 0x171707A6: mov eax, dword ptr [ebx + 0x280] */
    esi = MEM32(ebp + (-0x4)); /* 0x171707AC: mov esi, dword ptr [ebp - 4] */
    MEM32(ebp + (-0x18)) = eax; /* 0x171707AF: mov dword ptr [ebp - 0x18], eax */
    eax = esi; /* 0x171707B2: mov eax, esi */
    eax = ~eax; /* 0x171707B4: not eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171707B6: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    eax = eax & esi; /* 0x171707B7: and eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp esi, eax */ /* 0x171707B9: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17170857; /* 0x171707BB: jne 0x17170857 */
L_171707C1:
    /* test esi, esi */ /* 0x171707C1: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171707CA; /* 0x171707C3: je 0x171707ca */
L_171707C5:
    eax = esi + esi; /* 0x171707C5: lea eax, [esi + esi] */
    goto L_171707CD; /* 0x171707C8: jmp 0x171707cd */
L_171707CA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171707CA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171707CC: inc eax */
    _flag_k = FK_INC;
L_171707CD:
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x171707CD: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x171707CD: shl eax, 2 */
    PUSH32(esp, eax); /* 0x171707D0: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x171707D1: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x171707D6: mov edi, eax */
    /* test edi, edi */ /* 0x171707D8: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x171707DA: pop ecx */
    MEM32(ebp + (-0x14)) = edi; /* 0x171707DB: mov dword ptr [ebp - 0x14], edi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171709C8; /* 0x171707DE: je 0x171709c8 */
L_171707E4:
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x171707E4: push dword ptr [ebp - 8] */
    ecx = esi; /* 0x171707E7: mov ecx, esi */
    esi = MEM32(ebp + (-0x8)); /* 0x171707E9: mov esi, dword ptr [ebp - 8] */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x171707EC: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x171707EC: shl ecx, 2 */
    eax = ecx; /* 0x171707EF: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x171707F1: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x171707F1: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x171707F4: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x171707F6: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x171707F8: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x171707FB: rep movsb byte ptr es:[edi], byte ptr [esi] */
    RECOMP_CALL(sub_1721B010); /* 0x171707FD: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0x4)); /* 0x17170802: mov esi, dword ptr [ebp - 4] */
    /* test esi, esi */ /* 0x17170805: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x14)); /* 0x17170807: mov eax, dword ptr [ebp - 0x14] */
    ecx = POP32_VAL(esp); /* 0x1717080A: pop ecx */
    MEM32(ebp + (-0x8)) = eax; /* 0x1717080B: mov dword ptr [ebp - 8], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17170815; /* 0x1717080E: je 0x17170815 */
L_17170810:
    eax = esi + esi; /* 0x17170810: lea eax, [esi + esi] */
    goto L_17170818; /* 0x17170813: jmp 0x17170818 */
L_17170815:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17170815: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17170817: inc eax */
    _flag_k = FK_INC;
L_17170818:
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x17170818: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x17170818: shl eax, 2 */
    PUSH32(esp, eax); /* 0x1717081B: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1717081C: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x17170821: mov edi, eax */
    /* test edi, edi */ /* 0x17170823: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x17170825: pop ecx */
    MEM32(ebp + (-0x14)) = edi; /* 0x17170826: mov dword ptr [ebp - 0x14], edi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171709C8; /* 0x17170829: je 0x171709c8 */
L_1717082F:
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x1717082F: push dword ptr [ebp - 0xc] */
    ecx = esi; /* 0x17170832: mov ecx, esi */
    esi = MEM32(ebp + (-0xC)); /* 0x17170834: mov esi, dword ptr [ebp - 0xc] */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x17170837: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x17170837: shl ecx, 2 */
    eax = ecx; /* 0x1717083A: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1717083C: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1717083C: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1717083F: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x17170841: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x17170843: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x17170846: rep movsb byte ptr es:[edi], byte ptr [esi] */
    RECOMP_CALL(sub_1721B010); /* 0x17170848: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x14)); /* 0x1717084D: mov eax, dword ptr [ebp - 0x14] */
    esi = MEM32(ebp + (-0x4)); /* 0x17170850: mov esi, dword ptr [ebp - 4] */
    ecx = POP32_VAL(esp); /* 0x17170853: pop ecx */
    MEM32(ebp + (-0xC)) = eax; /* 0x17170854: mov dword ptr [ebp - 0xc], eax */
L_17170857:
    eax = MEM32(ebp + (-0x18)); /* 0x17170857: mov eax, dword ptr [ebp - 0x18] */
    ecx = MEM32(ebp + (-0xC)); /* 0x1717085A: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(ecx + esi * 4) = eax; /* 0x1717085D: mov dword ptr [ecx + esi*4], eax */
    eax = MEM32(ebp + (-0x10)); /* 0x17170860: mov eax, dword ptr [ebp - 0x10] */
    ecx = MEM32(ebp + (-0x8)); /* 0x17170863: mov ecx, dword ptr [ebp - 8] */
    MEM32(ecx + esi * 4) = eax; /* 0x17170866: mov dword ptr [ecx + esi*4], eax */
    ecx = MEM32(ebx + 0x26C); /* 0x17170869: mov ecx, dword ptr [ebx + 0x26c] */
    edi = ebx + 0x278; /* 0x1717086F: lea edi, [ebx + 0x278] */
    PUSH32(esp, edi); /* 0x17170875: push edi */
    PUSH32(esp, MEM32(ebx + 0x298)); /* 0x17170876: push dword ptr [ebx + 0x298] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1717087C: inc esi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x4)) = esi; /* 0x1717087D: mov dword ptr [ebp - 4], esi */
    RECOMP_CALL(sub_17174BE6); /* 0x17170880: call 0x17174be6 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x17170885: mov esi, eax */
    /* test esi, esi */ /* 0x17170887: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17170936; /* 0x17170889: jl 0x17170936 */
L_1717088F:
    /* cmp MEM32(edi), 1 */ /* 0x1717088F: cmp dword ptr [edi], 1 */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1717078D; /* 0x17170892: jne 0x1717078d */
L_17170898:
    eax = ebx + 0x280; /* 0x17170898: lea eax, [ebx + 0x280] */
    PUSH32(esp, 2); /* 0x1717089E: push 2 */
    edi = 0x1702188Cu; /* 0x171708A0: mov edi, 0x1702188c */
    esi = eax; /* 0x171708A5: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x171708A7: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171708A8: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM8(esi); _b = MEM8(edi); esi += _df; edi += _df; ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x171708AA: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_171708C2; /* 0x171708AC: je 0x171708c2 */
L_171708AE:
    esi = eax; /* 0x171708AE: mov esi, eax */
    PUSH32(esp, 2); /* 0x171708B0: push 2 */
    edi = 0x1700825Cu; /* 0x171708B2: mov edi, 0x1700825c */
    ecx = POP32_VAL(esp); /* 0x171708B7: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171708B8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM8(esi); _b = MEM8(edi); esi += _df; edi += _df; ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x171708BA: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
    RECOMP_BACKEDGE();
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_1717078D; /* 0x171708BC: jne 0x1717078d */
L_171708C2:
    PUSH32(esp, 2); /* 0x171708C2: push 2 */
    edi = 0x1702188Cu; /* 0x171708C4: mov edi, 0x1702188c */
    esi = ebx + 0x280; /* 0x171708C9: lea esi, [ebx + 0x280] */
    ecx = POP32_VAL(esp); /* 0x171708CF: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171708D0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM8(esi); _b = MEM8(edi); esi += _df; edi += _df; ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x171708D2: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
    RECOMP_BACKEDGE();
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_17170668; /* 0x171708D4: jne 0x17170668 */
L_171708DA:
    ecx = MEM32(ebx + 0x26C); /* 0x171708DA: mov ecx, dword ptr [ebx + 0x26c] */
    edi = ebx + 0x278; /* 0x171708E0: lea edi, [ebx + 0x278] */
    PUSH32(esp, edi); /* 0x171708E6: push edi */
    PUSH32(esp, MEM32(ebx + 0x298)); /* 0x171708E7: push dword ptr [ebx + 0x298] */
    RECOMP_CALL(sub_17174BE6); /* 0x171708ED: call 0x17174be6 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x171708F2: mov esi, eax */
    /* test esi, esi */ /* 0x171708F4: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17170936; /* 0x171708F6: jl 0x17170936 */
L_171708F8:
    /* cmp MEM32(edi), 1 */ /* 0x171708F8: cmp dword ptr [edi], 1 */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_17170668; /* 0x171708FB: jne 0x17170668 */
L_17170901:
    PUSH32(esp, 2); /* 0x17170901: push 2 */
    edi = 0x1700825Cu; /* 0x17170903: mov edi, 0x1700825c */
    esi = ebx + 0x280; /* 0x17170908: lea esi, [ebx + 0x280] */
    ecx = POP32_VAL(esp); /* 0x1717090E: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1717090F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM8(esi); _b = MEM8(edi); esi += _df; edi += _df; ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x17170911: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
    RECOMP_BACKEDGE();
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_17170668; /* 0x17170913: jne 0x17170668 */
L_17170919:
    eax = MEM32(ebx + 0x278); /* 0x17170919: mov eax, dword ptr [ebx + 0x278] */
    /* cmp eax, 0xCu */ /* 0x1717091F: cmp eax, 0xc */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17170934; /* 0x17170922: je 0x17170934 */
L_17170924:
    /* cmp eax, 0xDu */ /* 0x17170924: cmp eax, 0xd */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xDu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17170934; /* 0x17170927: je 0x17170934 */
L_17170929:
    ecx = MEM32(ebx + 0x26C); /* 0x17170929: mov ecx, dword ptr [ebx + 0x26c] */
    RECOMP_CALL(sub_17173B81); /* 0x1717092F: call 0x17173b81 */
    RECOMP_FLAGS_IN();
L_17170934:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x17170934: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_17170936:
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x17170936: push dword ptr [ebp - 8] */
    RECOMP_CALL(sub_1721B010); /* 0x17170939: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x1717093E: push dword ptr [ebp - 0xc] */
    RECOMP_CALL(sub_1721B010); /* 0x17170941: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x17170946: push 0 */
    RECOMP_CALL(sub_1721B010); /* 0x17170948: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1717094D: add esp, 0xc */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x17170950: pop edi */
    eax = esi; /* 0x17170951: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x17170953: pop esi */
    MEM32(ebx + 0x40) = 1; /* 0x17170954: mov dword ptr [ebx + 0x40], 1 */
    ebx = POP32_VAL(esp); /* 0x1717095B: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1717095C: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1717095D: ret  */
L_1717095E:
    ecx = MEM32(ebx + 0x26C); /* 0x1717095E: mov ecx, dword ptr [ebx + 0x26c] */
    edi = ebx + 0x278; /* 0x17170964: lea edi, [ebx + 0x278] */
    PUSH32(esp, edi); /* 0x1717096A: push edi */
    PUSH32(esp, MEM32(ebx + 0x298)); /* 0x1717096B: push dword ptr [ebx + 0x298] */
    RECOMP_CALL(sub_17174BE6); /* 0x17170971: call 0x17174be6 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x17170976: mov esi, eax */
    /* test esi, esi */ /* 0x17170978: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17170936; /* 0x1717097A: jl 0x17170936 */
L_1717097C:
    edi = MEM32(edi); /* 0x1717097C: mov edi, dword ptr [edi] */
    /* cmp edi, 0xCu */ /* 0x1717097E: cmp edi, 0xc */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17170988; /* 0x17170981: je 0x17170988 */
L_17170983:
    /* cmp edi, 0xDu */ /* 0x17170983: cmp edi, 0xd */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xDu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_17170919; /* 0x17170986: jne 0x17170919 */
L_17170988:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x14)) = MEM32(ebp + (-0x14)) & 0; /* 0x17170988: and dword ptr [ebp - 0x14], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x1717098C: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_BE(_flag_a, _flag_b)) goto L_17170934; /* 0x17170990: jbe 0x17170934 */
L_17170992:
    edi = MEM32(ebp + (-0xC)); /* 0x17170992: mov edi, dword ptr [ebp - 0xc] */
    eax = MEM32(ebp + (-0x8)); /* 0x17170995: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x17170998: sub eax, edi */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x18)) = eax; /* 0x1717099A: mov dword ptr [ebp - 0x18], eax */
    goto L_171709A2; /* 0x1717099D: jmp 0x171709a2 */
L_1717099F:
    eax = MEM32(ebp + (-0x18)); /* 0x1717099F: mov eax, dword ptr [ebp - 0x18] */
L_171709A2:
    PUSH32(esp, MEM32(eax + edi)); /* 0x171709A2: push dword ptr [eax + edi] */
    ecx = ebx + 0x18; /* 0x171709A5: lea ecx, [ebx + 0x18] */
    PUSH32(esp, MEM32(edi)); /* 0x171709A8: push dword ptr [edi] */
    RECOMP_CALL(sub_17173FEA); /* 0x171709AA: call 0x17173fea */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x171709AF: mov esi, eax */
    /* test esi, esi */ /* 0x171709B1: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17170936; /* 0x171709B3: jl 0x17170936 */
L_171709B5:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x14)) = MEM32(ebp + (-0x14)) + 1; /* 0x171709B5: inc dword ptr [ebp - 0x14] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + (-0x14)); /* 0x171709B8: mov eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x171709BB: add edi, 4 */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(ebp + (-0x4)) */ /* 0x171709BE: cmp eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1717099F; /* 0x171709C1: jb 0x1717099f */
L_171709C3:
    RECOMP_BACKEDGE();
    goto L_17170934; /* 0x171709C3: jmp 0x17170934 */
L_171709C8:
    esi = 0x8007000Eu; /* 0x171709C8: mov esi, 0x8007000e */
    RECOMP_BACKEDGE();
    goto L_17170936; /* 0x171709CD: jmp 0x17170936 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_171709D7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171709D7u);

L_171709D7:
    edi = edi; /* 0x171709D7: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171709D9: push ebp */
    ebp = esp; /* 0x171709DA: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x34u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x34u; /* 0x171709DC: sub esp, 0x34 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x171709DF: push ebx */
    ebx = ecx; /* 0x171709E0: mov ebx, ecx */
    ecx = MEM32(ebx + 0x26C); /* 0x171709E2: mov ecx, dword ptr [ebx + 0x26c] */
    PUSH32(esp, esi); /* 0x171709E8: push esi */
    esi = ebx + 0x278; /* 0x171709E9: lea esi, [ebx + 0x278] */
    PUSH32(esp, esi); /* 0x171709EF: push esi */
    PUSH32(esp, MEM32(ebx + 0x298)); /* 0x171709F0: push dword ptr [ebx + 0x298] */
    RECOMP_CALL(sub_17174BE6); /* 0x171709F6: call 0x17174be6 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171709FB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17170CE5; /* 0x171709FD: jl 0x17170ce5 */
L_17170A03:
    /* cmp MEM32(esi), 1 */ /* 0x17170A03: cmp dword ptr [esi], 1 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x17170A06: push edi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_17170CC7; /* 0x17170A07: jne 0x17170cc7 */
L_17170A0D:
    PUSH32(esp, 2); /* 0x17170A0D: push 2 */
    esi = ebx + 0x280; /* 0x17170A0F: lea esi, [ebx + 0x280] */
    edi = 0x17008794u; /* 0x17170A15: mov edi, 0x17008794 */
    ecx = POP32_VAL(esp); /* 0x17170A1A: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17170A1B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM8(esi); _b = MEM8(edi); esi += _df; edi += _df; ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x17170A1D: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_17170CC7; /* 0x17170A1F: jne 0x17170cc7 */
L_17170A25:
    ecx = MEM32(ebx + 0x26C); /* 0x17170A25: mov ecx, dword ptr [ebx + 0x26c] */
    esi = ebx + 0x278; /* 0x17170A2B: lea esi, [ebx + 0x278] */
    PUSH32(esp, esi); /* 0x17170A31: push esi */
    PUSH32(esp, MEM32(ebx + 0x298)); /* 0x17170A32: push dword ptr [ebx + 0x298] */
    RECOMP_CALL(sub_17174BE6); /* 0x17170A38: call 0x17174be6 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17170A3D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17170CE4; /* 0x17170A3F: jl 0x17170ce4 */
L_17170A45:
    /* cmp MEM32(esi), 9 */ /* 0x17170A45: cmp dword ptr [esi], 9 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17170CC7; /* 0x17170A48: jne 0x17170cc7 */
L_17170A4E:
    ecx = MEM32(ebx + 0x26C); /* 0x17170A4E: mov ecx, dword ptr [ebx + 0x26c] */
    edi = ebx + 0x278; /* 0x17170A54: lea edi, [ebx + 0x278] */
    PUSH32(esp, edi); /* 0x17170A5A: push edi */
    PUSH32(esp, MEM32(ebx + 0x298)); /* 0x17170A5B: push dword ptr [ebx + 0x298] */
    esi = ebx + 0x280; /* 0x17170A61: lea esi, [ebx + 0x280] */
    eax = MEM32(esi); /* 0x17170A67: mov eax, dword ptr [esi] */
    MEM32(ebp + (-0xC)) = eax; /* 0x17170A69: mov dword ptr [ebp - 0xc], eax */
    RECOMP_CALL(sub_17174BE6); /* 0x17170A6C: call 0x17174be6 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17170A71: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17170CE4; /* 0x17170A73: jl 0x17170ce4 */
L_17170A79:
    /* cmp MEM32(edi), 1 */ /* 0x17170A79: cmp dword ptr [edi], 1 */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17170CC7; /* 0x17170A7C: jne 0x17170cc7 */
L_17170A82:
    PUSH32(esp, 2); /* 0x17170A82: push 2 */
    edi = 0x17008270u; /* 0x17170A84: mov edi, 0x17008270 */
    ecx = POP32_VAL(esp); /* 0x17170A89: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17170A8A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM8(esi); _b = MEM8(edi); esi += _df; edi += _df; ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x17170A8C: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_17170CC7; /* 0x17170A8E: jne 0x17170cc7 */
L_17170A94:
    ecx = MEM32(ebx + 0x26C); /* 0x17170A94: mov ecx, dword ptr [ebx + 0x26c] */
    esi = ebx + 0x278; /* 0x17170A9A: lea esi, [ebx + 0x278] */
    PUSH32(esp, esi); /* 0x17170AA0: push esi */
    PUSH32(esp, MEM32(ebx + 0x298)); /* 0x17170AA1: push dword ptr [ebx + 0x298] */
    RECOMP_CALL(sub_17174BE6); /* 0x17170AA7: call 0x17174be6 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17170AAC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17170CE4; /* 0x17170AAE: jl 0x17170ce4 */
L_17170AB4:
    /* cmp MEM32(esi), 9 */ /* 0x17170AB4: cmp dword ptr [esi], 9 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17170CC7; /* 0x17170AB7: jne 0x17170cc7 */
L_17170ABD:
    eax = MEM32(ebx + 0x280); /* 0x17170ABD: mov eax, dword ptr [ebx + 0x280] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x17170AC3: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x17170AC7: mov dword ptr [ebp - 0x10], eax */
L_17170ACA:
    ecx = MEM32(ebx + 0x26C); /* 0x17170ACA: mov ecx, dword ptr [ebx + 0x26c] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x17170AD0: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = ebx + 0x278; /* 0x17170AD4: lea esi, [ebx + 0x278] */
    PUSH32(esp, esi); /* 0x17170ADA: push esi */
    PUSH32(esp, MEM32(ebx + 0x298)); /* 0x17170ADB: push dword ptr [ebx + 0x298] */
    RECOMP_CALL(sub_17174BE6); /* 0x17170AE1: call 0x17174be6 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17170AE6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17170CE4; /* 0x17170AE8: jl 0x17170ce4 */
L_17170AEE:
    /* cmp MEM32(esi), 1 */ /* 0x17170AEE: cmp dword ptr [esi], 1 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17170CC7; /* 0x17170AF1: jne 0x17170cc7 */
L_17170AF7:
    PUSH32(esp, 2); /* 0x17170AF7: push 2 */
    edi = 0x17008270u; /* 0x17170AF9: mov edi, 0x17008270 */
    esi = ebx + 0x280; /* 0x17170AFE: lea esi, [ebx + 0x280] */
    ecx = POP32_VAL(esp); /* 0x17170B04: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17170B05: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM8(esi); _b = MEM8(edi); esi += _df; edi += _df; ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x17170B07: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_17170CC7; /* 0x17170B09: jne 0x17170cc7 */
L_17170B0F:
    ecx = MEM32(ebx + 0x26C); /* 0x17170B0F: mov ecx, dword ptr [ebx + 0x26c] */
    esi = ebx + 0x278; /* 0x17170B15: lea esi, [ebx + 0x278] */
    PUSH32(esp, esi); /* 0x17170B1B: push esi */
    PUSH32(esp, MEM32(ebx + 0x298)); /* 0x17170B1C: push dword ptr [ebx + 0x298] */
    RECOMP_CALL(sub_17174BE6); /* 0x17170B22: call 0x17174be6 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17170B27: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17170CE4; /* 0x17170B29: jl 0x17170ce4 */
L_17170B2F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17170B2F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17170B31: inc eax */
    _flag_k = FK_INC;
    /* cmp MEM32(esi), eax */ /* 0x17170B32: cmp dword ptr [esi], eax */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17170B6D; /* 0x17170B34: jne 0x17170b6d */
L_17170B36:
    PUSH32(esp, 2); /* 0x17170B36: push 2 */
    edi = 0x170081B8u; /* 0x17170B38: mov edi, 0x170081b8 */
    esi = ebx + 0x280; /* 0x17170B3D: lea esi, [ebx + 0x280] */
    ecx = POP32_VAL(esp); /* 0x17170B43: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x17170B44: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM8(esi); _b = MEM8(edi); esi += _df; edi += _df; ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x17170B46: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_17170B6D; /* 0x17170B48: jne 0x17170b6d */
L_17170B4A:
    ecx = MEM32(ebx + 0x26C); /* 0x17170B4A: mov ecx, dword ptr [ebx + 0x26c] */
    MEM32(ebp + (-0x8)) = eax; /* 0x17170B50: mov dword ptr [ebp - 8], eax */
    eax = ebx + 0x278; /* 0x17170B53: lea eax, [ebx + 0x278] */
    PUSH32(esp, eax); /* 0x17170B59: push eax */
    PUSH32(esp, MEM32(ebx + 0x298)); /* 0x17170B5A: push dword ptr [ebx + 0x298] */
    RECOMP_CALL(sub_17174BE6); /* 0x17170B60: call 0x17174be6 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17170B65: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17170CE4; /* 0x17170B67: jl 0x17170ce4 */
L_17170B6D:
    eax = MEM32(ebx + 0x278); /* 0x17170B6D: mov eax, dword ptr [ebx + 0x278] */
    /* cmp eax, 2 */ /* 0x17170B73: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17170BAF; /* 0x17170B76: je 0x17170baf */
L_17170B78:
    /* cmp eax, 3 */ /* 0x17170B78: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17170BA0; /* 0x17170B7B: je 0x17170ba0 */
L_17170B7D:
    /* cmp eax, 4 */ /* 0x17170B7D: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17170BAF; /* 0x17170B80: je 0x17170baf */
L_17170B82:
    if (CMP_LE(_flag_a, _flag_b)) goto L_17170CC7; /* 0x17170B82: jle 0x17170cc7 */
L_17170B88:
    /* cmp eax, 8 */ /* 0x17170B88: cmp eax, 8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_17170CC7; /* 0x17170B8B: jg 0x17170cc7 */
L_17170B91:
    eax = MEM32(ebp + (-0x4)); /* 0x17170B91: mov eax, dword ptr [ebp - 4] */
    fp_push(*(double*)ADDR(ebx + 0x280)); /* 0x17170B94: fld qword ptr [ebx + 0x280] */
    eax = ebp + eax * 8 + (-0x34); /* 0x17170B9A: lea eax, [ebp + eax*8 - 0x34] */
    goto L_17170BCC; /* 0x17170B9E: jmp 0x17170bcc */
L_17170BA0:
    eax = MEM32(ebp + (-0x4)); /* 0x17170BA0: mov eax, dword ptr [ebp - 4] */
    fp_push((double)(int32_t)MEM32(ebx + 0x280)); /* 0x17170BA3: fild dword ptr [ebx + 0x280] */
    eax = ebp + eax * 8 + (-0x34); /* 0x17170BA9: lea eax, [ebp + eax*8 - 0x34] */
    goto L_17170BCC; /* 0x17170BAD: jmp 0x17170bcc */
L_17170BAF:
    ecx = MEM32(ebx + 0x280); /* 0x17170BAF: mov ecx, dword ptr [ebx + 0x280] */
    fp_push((double)(int32_t)MEM32(ebx + 0x280)); /* 0x17170BB5: fild dword ptr [ebx + 0x280] */
    /* test ecx, ecx */ /* 0x17170BBB: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x4)); /* 0x17170BBD: mov eax, dword ptr [ebp - 4] */
    eax = ebp + eax * 8 + (-0x34); /* 0x17170BC0: lea eax, [ebp + eax*8 - 0x34] */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_17170BCC; /* 0x17170BC4: jge 0x17170bcc */
L_17170BC6:
    _st[0] += *(double*)ADDR(0x17001F50); /* 0x17170BC6: fadd qword ptr [0x17001f50] */
L_17170BCC:
    /* cmp MEM32(ebp + (-0x8)), 0 */ /* 0x17170BCC: cmp dword ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { double _v = fp_pop(); *(double*)ADDR(eax) = _v; } /* 0x17170BD0: fstp qword ptr [eax] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17170BDA; /* 0x17170BD2: je 0x17170bda */
L_17170BD4:
    fp_push(*(double*)ADDR(eax)); /* 0x17170BD4: fld qword ptr [eax] */
    _st[0] = -_st[0]; /* 0x17170BD6: fchs  */
    { double _v = fp_pop(); *(double*)ADDR(eax) = _v; } /* 0x17170BD8: fstp qword ptr [eax] */
L_17170BDA:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 1; /* 0x17170BDA: inc dword ptr [ebp - 4] */
    _flag_k = FK_INC;
    /* cmp MEM32(ebp + (-0x4)), 4 */ /* 0x17170BDD: cmp dword ptr [ebp - 4], 4 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17170ACA; /* 0x17170BE1: jb 0x17170aca */
L_17170BE7:
    ecx = MEM32(ebx + 0x26C); /* 0x17170BE7: mov ecx, dword ptr [ebx + 0x26c] */
    esi = ebx + 0x278; /* 0x17170BED: lea esi, [ebx + 0x278] */
    PUSH32(esp, esi); /* 0x17170BF3: push esi */
    PUSH32(esp, MEM32(ebx + 0x298)); /* 0x17170BF4: push dword ptr [ebx + 0x298] */
    RECOMP_CALL(sub_17174BE6); /* 0x17170BFA: call 0x17174be6 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17170BFF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17170CE4; /* 0x17170C01: jl 0x17170ce4 */
L_17170C07:
    /* cmp MEM32(esi), 1 */ /* 0x17170C07: cmp dword ptr [esi], 1 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17170CC7; /* 0x17170C0A: jne 0x17170cc7 */
L_17170C10:
    PUSH32(esp, 2); /* 0x17170C10: push 2 */
    edi = 0x1700825Cu; /* 0x17170C12: mov edi, 0x1700825c */
    esi = ebx + 0x280; /* 0x17170C17: lea esi, [ebx + 0x280] */
    ecx = POP32_VAL(esp); /* 0x17170C1D: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17170C1E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM8(esi); _b = MEM8(edi); esi += _df; edi += _df; ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x17170C20: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_17170CC7; /* 0x17170C22: jne 0x17170cc7 */
L_17170C28:
    ecx = MEM32(ebx + 0x26C); /* 0x17170C28: mov ecx, dword ptr [ebx + 0x26c] */
    esi = ebx + 0x278; /* 0x17170C2E: lea esi, [ebx + 0x278] */
    PUSH32(esp, esi); /* 0x17170C34: push esi */
    PUSH32(esp, MEM32(ebx + 0x298)); /* 0x17170C35: push dword ptr [ebx + 0x298] */
    RECOMP_CALL(sub_17174BE6); /* 0x17170C3B: call 0x17174be6 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17170C40: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17170CE4; /* 0x17170C42: jl 0x17170ce4 */
L_17170C48:
    esi = MEM32(esi); /* 0x17170C48: mov esi, dword ptr [esi] */
    /* cmp esi, 0xCu */ /* 0x17170C4A: cmp esi, 0xc */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17170C54; /* 0x17170C4D: je 0x17170c54 */
L_17170C4F:
    /* cmp esi, 0xDu */ /* 0x17170C4F: cmp esi, 0xd */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xDu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17170CC7; /* 0x17170C52: jne 0x17170cc7 */
L_17170C54:
    PUSH32(esp, 0x30u); /* 0x17170C54: push 0x30 */
    RECOMP_CALL(sub_1721B01C); /* 0x17170C56: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17170C5B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x17170C5D: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17170C69; /* 0x17170C5E: je 0x17170c69 */
L_17170C60:
    _flag_a = (uint32_t)(MEM32(eax + 0x28)); _flag_b = (uint32_t)(0);
    MEM32(eax + 0x28) = MEM32(eax + 0x28) & 0; /* 0x17170C60: and dword ptr [eax + 0x28], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x17170C64: mov dword ptr [ebp - 4], eax */
    goto L_17170C70; /* 0x17170C67: jmp 0x17170c70 */
L_17170C69:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x17170C69: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x4)); /* 0x17170C6D: mov eax, dword ptr [ebp - 4] */
L_17170C70:
    /* test eax, eax */ /* 0x17170C70: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17170C7B; /* 0x17170C72: jne 0x17170c7b */
L_17170C74:
    eax = 0x8007000Eu; /* 0x17170C74: mov eax, 0x8007000e */
    goto L_17170CE4; /* 0x17170C79: jmp 0x17170ce4 */
L_17170C7B:
    ecx = MEM32(ebp + (-0xC)); /* 0x17170C7B: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(eax) = ecx; /* 0x17170C7E: mov dword ptr [eax], ecx */
    ecx = MEM32(ebp + (-0x10)); /* 0x17170C80: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(eax + 0x4) = ecx; /* 0x17170C83: mov dword ptr [eax + 4], ecx */
    PUSH32(esp, 8); /* 0x17170C86: push 8 */
    edi = eax + 0x8; /* 0x17170C88: lea edi, [eax + 8] */
    ecx = POP32_VAL(esp); /* 0x17170C8B: pop ecx */
    esi = ebp + (-0x34); /* 0x17170C8C: lea esi, [ebp - 0x34] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x17170C8F: rep movsd dword ptr es:[edi], dword ptr [esi] */
    esi = ebx + 0x3C; /* 0x17170C91: lea esi, [ebx + 0x3c] */
    ecx = MEM32(esi); /* 0x17170C94: mov ecx, dword ptr [esi] */
    /* test ecx, ecx */ /* 0x17170C96: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17170CBE; /* 0x17170C98: je 0x17170cbe */
L_17170C9A:
    goto L_17170C9F; /* 0x17170C9A: jmp 0x17170c9f */
L_17170C9C:
    eax = MEM32(ebp + (-0x4)); /* 0x17170C9C: mov eax, dword ptr [ebp - 4] */
L_17170C9F:
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x17170C9F: push dword ptr [eax + 4] */
    PUSH32(esp, MEM32(ecx + 0x4)); /* 0x17170CA2: push dword ptr [ecx + 4] */
    RECOMP_CALL(sub_1721B106); /* 0x17170CA5: call 0x1721b106 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17170CAA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x17170CAC: pop ecx */
    ecx = POP32_VAL(esp); /* 0x17170CAD: pop ecx */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_17170CBB; /* 0x17170CAE: jge 0x17170cbb */
L_17170CB0:
    esi = MEM32(esi); /* 0x17170CB0: mov esi, dword ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x28u; /* 0x17170CB2: add esi, 0x28 */
    _flag_k = FK_ADD;
    ecx = MEM32(esi); /* 0x17170CB5: mov ecx, dword ptr [esi] */
    /* test ecx, ecx */ /* 0x17170CB7: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17170C9C; /* 0x17170CB9: jne 0x17170c9c */
L_17170CBB:
    eax = MEM32(ebp + (-0x4)); /* 0x17170CBB: mov eax, dword ptr [ebp - 4] */
L_17170CBE:
    ecx = MEM32(esi); /* 0x17170CBE: mov ecx, dword ptr [esi] */
    MEM32(eax + 0x28) = ecx; /* 0x17170CC0: mov dword ptr [eax + 0x28], ecx */
    MEM32(esi) = eax; /* 0x17170CC3: mov dword ptr [esi], eax */
    goto L_17170CE2; /* 0x17170CC5: jmp 0x17170ce2 */
L_17170CC7:
    eax = MEM32(ebx + 0x278); /* 0x17170CC7: mov eax, dword ptr [ebx + 0x278] */
    /* cmp eax, 0xCu */ /* 0x17170CCD: cmp eax, 0xc */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17170CE2; /* 0x17170CD0: je 0x17170ce2 */
L_17170CD2:
    /* cmp eax, 0xDu */ /* 0x17170CD2: cmp eax, 0xd */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xDu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17170CE2; /* 0x17170CD5: je 0x17170ce2 */
L_17170CD7:
    ecx = MEM32(ebx + 0x26C); /* 0x17170CD7: mov ecx, dword ptr [ebx + 0x26c] */
    RECOMP_CALL(sub_17173B81); /* 0x17170CDD: call 0x17173b81 */
    RECOMP_FLAGS_IN();
L_17170CE2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17170CE2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_17170CE4:
    edi = POP32_VAL(esp); /* 0x17170CE4: pop edi */
L_17170CE5:
    esi = POP32_VAL(esp); /* 0x17170CE5: pop esi */
    MEM32(ebx + 0x40) = 1; /* 0x17170CE6: mov dword ptr [ebx + 0x40], 1 */
    ebx = POP32_VAL(esp); /* 0x17170CED: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17170CEE: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x17170CEF: ret  */
    RECOMP_REGS_OUT();
}

void sub_17170CF5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17170CF5u);

L_17170CF5:
    edi = edi; /* 0x17170CF5: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17170CF7: push ebp */
    ebp = esp; /* 0x17170CF8: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x17170CFA: mov edx, dword ptr [ebp + 8] */
    /* test edx, edx */ /* 0x17170CFD: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = 0x0632D80Fu; /* 0x17170CFF: mov eax, 0x632d80f */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17170D26; /* 0x17170D04: je 0x17170d26 */
L_17170D06:
    SET_LO8(ecx, MEM8(edx)); /* 0x17170D06: mov cl, byte ptr [edx] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x17170D08: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_17170D26; /* 0x17170D0A: je 0x17170d26 */
L_17170D0C:
    eax = (uint32_t)((int32_t)eax * (int32_t)0x13u); /* 0x17170D0C: imul eax, eax, 0x13 */
    ecx = (int32_t)(int8_t)LO8(ecx); /* 0x17170D0F: movsx ecx, cl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x17170D12: add eax, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x17170D14: inc edx */
    _flag_k = FK_INC;
    SET_LO8(ecx, MEM8(edx)); /* 0x17170D15: mov cl, byte ptr [edx] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x17170D17: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17170D0C; /* 0x17170D19: jne 0x17170d0c */
L_17170D1B:
    PUSH32(esp, 0x7Fu); /* 0x17170D1B: push 0x7f */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x17170D1D: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x17170D1F: pop ecx */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x17170D20: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    eax = edx; /* 0x17170D22: mov eax, edx */
    goto L_17170D28; /* 0x17170D24: jmp 0x17170d28 */
L_17170D26:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17170D26: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_17170D28:
    ebp = POP32_VAL(esp); /* 0x17170D28: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x17170D29: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_17170D31(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17170D31u);

L_17170D31:
    edi = edi; /* 0x17170D31: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17170D33: push ebp */
    ebp = esp; /* 0x17170D34: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x17170D36: sub esp, 0xc */
    _flag_k = FK_CMP;
    edx = MEM32(ebp + 0x8); /* 0x17170D39: mov edx, dword ptr [ebp + 8] */
    eax = MEM32(edx); /* 0x17170D3C: mov eax, dword ptr [edx] */
    PUSH32(esp, ebx); /* 0x17170D3E: push ebx */
    PUSH32(esp, esi); /* 0x17170D3F: push esi */
    PUSH32(esp, edi); /* 0x17170D40: push edi */
    edi = MEM32(ebp + 0xC); /* 0x17170D41: mov edi, dword ptr [ebp + 0xc] */
    esi = MEM32(edi); /* 0x17170D44: mov esi, dword ptr [edi] */
L_17170D46:
    SET_LO8(ebx, MEM8(eax)); /* 0x17170D46: mov bl, byte ptr [eax] */
    SET_LO8(ecx, LO8(ebx)); /* 0x17170D48: mov cl, bl */
    /* cmp LO8(ebx), MEM8(esi) */ /* 0x17170D4A: cmp bl, byte ptr [esi] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(esi)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17170D68; /* 0x17170D4C: jne 0x17170d68 */
L_17170D4E:
    /* test LO8(ecx), LO8(ecx) */ /* 0x17170D4E: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_17170D64; /* 0x17170D50: je 0x17170d64 */
L_17170D52:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x17170D52: mov bl, byte ptr [eax + 1] */
    SET_LO8(ecx, LO8(ebx)); /* 0x17170D55: mov cl, bl */
    /* cmp LO8(ebx), MEM8(esi + 0x1) */ /* 0x17170D57: cmp bl, byte ptr [esi + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(esi + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17170D68; /* 0x17170D5A: jne 0x17170d68 */
L_17170D5C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17170D5C: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17170D5D: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x17170D5E: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x17170D5F: inc esi */
    _flag_k = FK_INC;
    /* test LO8(ecx), LO8(ecx) */ /* 0x17170D60: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17170D46; /* 0x17170D62: jne 0x17170d46 */
L_17170D64:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17170D64: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_17170D6D; /* 0x17170D66: jmp 0x17170d6d */
L_17170D68:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17170D68: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17170D6A: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_17170D6D:
    /* test eax, eax */ /* 0x17170D6D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17170F94; /* 0x17170D6F: jne 0x17170f94 */
L_17170D75:
    eax = MEM32(edx + 0x4); /* 0x17170D75: mov eax, dword ptr [edx + 4] */
    /* test eax, eax */ /* 0x17170D78: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(edi + 0x4); /* 0x17170D7A: mov ecx, dword ptr [edi + 4] */
    MEM32(ebp + (-0x8)) = eax; /* 0x17170D7D: mov dword ptr [ebp - 8], eax */
    MEM32(ebp + (-0xC)) = ecx; /* 0x17170D80: mov dword ptr [ebp - 0xc], ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17170D9B; /* 0x17170D83: je 0x17170d9b */
L_17170D85:
    /* test ecx, ecx */ /* 0x17170D85: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17170D93; /* 0x17170D87: je 0x17170d93 */
L_17170D89:
    eax = MEM32(eax + 0xC); /* 0x17170D89: mov eax, dword ptr [eax + 0xc] */
    /* test eax, eax */ /* 0x17170D8C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ecx + 0xC); /* 0x17170D8E: mov ecx, dword ptr [ecx + 0xc] */
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17170D85; /* 0x17170D91: jne 0x17170d85 */
L_17170D93:
    /* test eax, eax */ /* 0x17170D93: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17170F94; /* 0x17170D95: jne 0x17170f94 */
L_17170D9B:
    /* test ecx, ecx */ /* 0x17170D9B: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17170F94; /* 0x17170D9D: jne 0x17170f94 */
L_17170DA3:
    edx = MEM32(edx + 0x8); /* 0x17170DA3: mov edx, dword ptr [edx + 8] */
    ecx = MEM32(edi + 0x8); /* 0x17170DA6: mov ecx, dword ptr [edi + 8] */
    goto L_17170F84; /* 0x17170DA9: jmp 0x17170f84 */
L_17170DAE:
    /* test ecx, ecx */ /* 0x17170DAE: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17170E10; /* 0x17170DB0: je 0x17170e10 */
L_17170DB2:
    eax = MEM32(edx + 0x10); /* 0x17170DB2: mov eax, dword ptr [edx + 0x10] */
    /* cmp eax, MEM32(ecx + 0x10) */ /* 0x17170DB5: cmp eax, dword ptr [ecx + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17170E10; /* 0x17170DB8: jne 0x17170e10 */
L_17170DBA:
    /* cmp eax, 8 */ /* 0x17170DBA: cmp eax, 8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_17170E3C; /* 0x17170DBD: jg 0x17170e3c */
L_17170DBF:
    /* cmp eax, 5 */ /* 0x17170DBF: cmp eax, 5 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_17170E28; /* 0x17170DC2: jge 0x17170e28 */
L_17170DC4:
    /* test eax, eax */ /* 0x17170DC4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17170DDC; /* 0x17170DC6: je 0x17170ddc */
L_17170DC8:
    /* cmp eax, 1 */ /* 0x17170DC8: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17170DEC; /* 0x17170DCB: je 0x17170dec */
L_17170DCD:
    if (CMP_LE(_flag_a, _flag_b)) goto L_17170F7E; /* 0x17170DCD: jle 0x17170f7e */
L_17170DD3:
    /* cmp eax, 4 */ /* 0x17170DD3: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_17170F7E; /* 0x17170DD6: jg 0x17170f7e */
L_17170DDC:
    eax = MEM32(edx + 0x18); /* 0x17170DDC: mov eax, dword ptr [edx + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x18));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ecx + 0x18); /* 0x17170DDF: sub eax, dword ptr [ecx + 0x18] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x17170DE2: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x17170DE4: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17170DE6: inc eax */
    _flag_k = FK_INC;
    goto L_17170F76; /* 0x17170DE7: jmp 0x17170f76 */
L_17170DEC:
    SET_LO8(eax, MEM8(edx + 0x18)); /* 0x17170DEC: mov al, byte ptr [edx + 0x18] */
    /* cmp LO8(eax), MEM8(ecx + 0x18) */ /* 0x17170DEF: cmp al, byte ptr [ecx + 0x18] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x18)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17170E10; /* 0x17170DF2: jne 0x17170e10 */
L_17170DF4:
    SET_LO8(eax, MEM8(edx + 0x19)); /* 0x17170DF4: mov al, byte ptr [edx + 0x19] */
    /* cmp LO8(eax), MEM8(ecx + 0x19) */ /* 0x17170DF7: cmp al, byte ptr [ecx + 0x19] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x19)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17170E10; /* 0x17170DFA: jne 0x17170e10 */
L_17170DFC:
    SET_LO8(eax, MEM8(edx + 0x1A)); /* 0x17170DFC: mov al, byte ptr [edx + 0x1a] */
    /* cmp LO8(eax), MEM8(ecx + 0x1A) */ /* 0x17170DFF: cmp al, byte ptr [ecx + 0x1a] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1A)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17170E10; /* 0x17170E02: jne 0x17170e10 */
L_17170E04:
    SET_LO8(eax, MEM8(edx + 0x1B)); /* 0x17170E04: mov al, byte ptr [edx + 0x1b] */
    /* cmp LO8(eax), MEM8(ecx + 0x1B) */ /* 0x17170E07: cmp al, byte ptr [ecx + 0x1b] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1B)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17170F7E; /* 0x17170E0A: je 0x17170f7e */
L_17170E10:
    /* test edx, edx */ /* 0x17170E10: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17170F94; /* 0x17170E12: jne 0x17170f94 */
L_17170E18:
    /* test ecx, ecx */ /* 0x17170E18: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17170F94; /* 0x17170E1A: jne 0x17170f94 */
L_17170E20:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17170E20: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17170E22: inc eax */
    _flag_k = FK_INC;
    goto L_17170F96; /* 0x17170E23: jmp 0x17170f96 */
L_17170E28:
    fp_push(*(double*)ADDR(ecx + 0x18)); /* 0x17170E28: fld qword ptr [ecx + 0x18] */
    fp_push(*(double*)ADDR(edx + 0x18)); /* 0x17170E2B: fld qword ptr [edx + 0x18] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x17170E2E: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17170E30: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x17170E32: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_17170E10; /* 0x17170E35: jp 0x17170e10 */
L_17170E37:
    goto L_17170F7E; /* 0x17170E37: jmp 0x17170f7e */
L_17170E3C:
    /* cmp eax, 9 */ /* 0x17170E3C: cmp eax, 9 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17170E83; /* 0x17170E3F: je 0x17170e83 */
L_17170E41:
    if (CMP_LE(_flag_a, _flag_b)) goto L_17170F7E; /* 0x17170E41: jle 0x17170f7e */
L_17170E47:
    /* cmp eax, 0xBu */ /* 0x17170E47: cmp eax, 0xb */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_17170F7E; /* 0x17170E4A: jg 0x17170f7e */
L_17170E50:
    esi = MEM32(ecx + 0x18); /* 0x17170E50: mov esi, dword ptr [ecx + 0x18] */
    eax = MEM32(edx + 0x18); /* 0x17170E53: mov eax, dword ptr [edx + 0x18] */
L_17170E56:
    SET_LO8(ebx, MEM8(eax)); /* 0x17170E56: mov bl, byte ptr [eax] */
    SET_LO8(ecx, LO8(ebx)); /* 0x17170E58: mov cl, bl */
    /* cmp LO8(ebx), MEM8(esi) */ /* 0x17170E5A: cmp bl, byte ptr [esi] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(esi)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17170F65; /* 0x17170E5C: jne 0x17170f65 */
L_17170E62:
    /* test LO8(ecx), LO8(ecx) */ /* 0x17170E62: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_17170E7C; /* 0x17170E64: je 0x17170e7c */
L_17170E66:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x17170E66: mov bl, byte ptr [eax + 1] */
    SET_LO8(ecx, LO8(ebx)); /* 0x17170E69: mov cl, bl */
    /* cmp LO8(ebx), MEM8(esi + 0x1) */ /* 0x17170E6B: cmp bl, byte ptr [esi + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(esi + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17170F65; /* 0x17170E6E: jne 0x17170f65 */
L_17170E74:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17170E74: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17170E75: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x17170E76: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x17170E77: inc esi */
    _flag_k = FK_INC;
    /* test LO8(ecx), LO8(ecx) */ /* 0x17170E78: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17170E56; /* 0x17170E7A: jne 0x17170e56 */
L_17170E7C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17170E7C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_17170F6A; /* 0x17170E7E: jmp 0x17170f6a */
L_17170E83:
    edi = MEM32(ebp + (-0x8)); /* 0x17170E83: mov edi, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x17170E86: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x17170E8A: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x8) = 1; /* 0x17170E8C: mov dword ptr [ebp + 8], 1 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17170EDC; /* 0x17170E93: je 0x17170edc */
L_17170E95:
    eax = MEM32(edi + 0x18); /* 0x17170E95: mov eax, dword ptr [edi + 0x18] */
    esi = MEM32(edx + 0x18); /* 0x17170E98: mov esi, dword ptr [edx + 0x18] */
L_17170E9B:
    SET_LO8(ebx, MEM8(esi)); /* 0x17170E9B: mov bl, byte ptr [esi] */
    SET_LO8(ecx, LO8(ebx)); /* 0x17170E9D: mov cl, bl */
    /* cmp LO8(ebx), MEM8(eax) */ /* 0x17170E9F: cmp bl, byte ptr [eax] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17170EBD; /* 0x17170EA1: jne 0x17170ebd */
L_17170EA3:
    /* test LO8(ecx), LO8(ecx) */ /* 0x17170EA3: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_17170EB9; /* 0x17170EA5: je 0x17170eb9 */
L_17170EA7:
    SET_LO8(ebx, MEM8(esi + 0x1)); /* 0x17170EA7: mov bl, byte ptr [esi + 1] */
    SET_LO8(ecx, LO8(ebx)); /* 0x17170EAA: mov cl, bl */
    /* cmp LO8(ebx), MEM8(eax + 0x1) */ /* 0x17170EAC: cmp bl, byte ptr [eax + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(eax + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17170EBD; /* 0x17170EAF: jne 0x17170ebd */
L_17170EB1:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x17170EB1: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x17170EB2: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17170EB3: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17170EB4: inc eax */
    _flag_k = FK_INC;
    /* test LO8(ecx), LO8(ecx) */ /* 0x17170EB5: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17170E9B; /* 0x17170EB7: jne 0x17170e9b */
L_17170EB9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17170EB9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_17170EC2; /* 0x17170EBB: jmp 0x17170ec2 */
L_17170EBD:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17170EBD: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17170EBF: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_17170EC2:
    /* test eax, eax */ /* 0x17170EC2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17170ED2; /* 0x17170EC4: je 0x17170ed2 */
L_17170EC6:
    edi = MEM32(edi + 0xC); /* 0x17170EC6: mov edi, dword ptr [edi + 0xc] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + 1; /* 0x17170EC9: inc dword ptr [ebp + 8] */
    _flag_k = FK_INC;
    /* test edi, edi */ /* 0x17170ECC: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17170E95; /* 0x17170ECE: jne 0x17170e95 */
L_17170ED0:
    goto L_17170ED9; /* 0x17170ED0: jmp 0x17170ed9 */
L_17170ED2:
    MEM32(ebp + (-0x4)) = 1; /* 0x17170ED2: mov dword ptr [ebp - 4], 1 */
L_17170ED9:
    ecx = MEM32(ebp + 0xC); /* 0x17170ED9: mov ecx, dword ptr [ebp + 0xc] */
L_17170EDC:
    edi = MEM32(ebp + (-0xC)); /* 0x17170EDC: mov edi, dword ptr [ebp - 0xc] */
    goto L_17170F18; /* 0x17170EDF: jmp 0x17170f18 */
L_17170EE1:
    eax = MEM32(edi + 0x18); /* 0x17170EE1: mov eax, dword ptr [edi + 0x18] */
    esi = MEM32(ecx + 0x18); /* 0x17170EE4: mov esi, dword ptr [ecx + 0x18] */
L_17170EE7:
    SET_LO8(ebx, MEM8(esi)); /* 0x17170EE7: mov bl, byte ptr [esi] */
    SET_LO8(ecx, LO8(ebx)); /* 0x17170EE9: mov cl, bl */
    /* cmp LO8(ebx), MEM8(eax) */ /* 0x17170EEB: cmp bl, byte ptr [eax] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17170F09; /* 0x17170EED: jne 0x17170f09 */
L_17170EEF:
    /* test LO8(ecx), LO8(ecx) */ /* 0x17170EEF: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_17170F05; /* 0x17170EF1: je 0x17170f05 */
L_17170EF3:
    SET_LO8(ebx, MEM8(esi + 0x1)); /* 0x17170EF3: mov bl, byte ptr [esi + 1] */
    SET_LO8(ecx, LO8(ebx)); /* 0x17170EF6: mov cl, bl */
    /* cmp LO8(ebx), MEM8(eax + 0x1) */ /* 0x17170EF8: cmp bl, byte ptr [eax + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(eax + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17170F09; /* 0x17170EFB: jne 0x17170f09 */
L_17170EFD:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x17170EFD: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x17170EFE: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17170EFF: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17170F00: inc eax */
    _flag_k = FK_INC;
    /* test LO8(ecx), LO8(ecx) */ /* 0x17170F01: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17170EE7; /* 0x17170F03: jne 0x17170ee7 */
L_17170F05:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17170F05: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_17170F0E; /* 0x17170F07: jmp 0x17170f0e */
L_17170F09:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17170F09: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17170F0B: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_17170F0E:
    /* test eax, eax */ /* 0x17170F0E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0xC); /* 0x17170F10: mov ecx, dword ptr [ebp + 0xc] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17170F21; /* 0x17170F13: je 0x17170f21 */
L_17170F15:
    edi = MEM32(edi + 0xC); /* 0x17170F15: mov edi, dword ptr [edi + 0xc] */
L_17170F18:
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) - 1; /* 0x17170F18: dec dword ptr [ebp + 8] */
    _flag_k = FK_DEC;
    /* test edi, edi */ /* 0x17170F1B: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17170EE1; /* 0x17170F1D: jne 0x17170ee1 */
L_17170F1F:
    goto L_17170F28; /* 0x17170F1F: jmp 0x17170f28 */
L_17170F21:
    MEM32(ebp + (-0x4)) = 1; /* 0x17170F21: mov dword ptr [ebp - 4], 1 */
L_17170F28:
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x17170F28: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17170F38; /* 0x17170F2C: je 0x17170f38 */
L_17170F2E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17170F2E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x8), eax */ /* 0x17170F30: cmp dword ptr [ebp + 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x17170F33: sete al */
    goto L_17170F76; /* 0x17170F36: jmp 0x17170f76 */
L_17170F38:
    esi = MEM32(ecx + 0x18); /* 0x17170F38: mov esi, dword ptr [ecx + 0x18] */
    eax = MEM32(edx + 0x18); /* 0x17170F3B: mov eax, dword ptr [edx + 0x18] */
L_17170F3E:
    SET_LO8(ebx, MEM8(eax)); /* 0x17170F3E: mov bl, byte ptr [eax] */
    SET_LO8(ecx, LO8(ebx)); /* 0x17170F40: mov cl, bl */
    /* cmp LO8(ebx), MEM8(esi) */ /* 0x17170F42: cmp bl, byte ptr [esi] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(esi)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17170F65; /* 0x17170F44: jne 0x17170f65 */
L_17170F46:
    /* test LO8(ecx), LO8(ecx) */ /* 0x17170F46: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_17170E7C; /* 0x17170F48: je 0x17170e7c */
L_17170F4E:
    SET_LO8(ebx, MEM8(eax + 0x1)); /* 0x17170F4E: mov bl, byte ptr [eax + 1] */
    SET_LO8(ecx, LO8(ebx)); /* 0x17170F51: mov cl, bl */
    /* cmp LO8(ebx), MEM8(esi + 0x1) */ /* 0x17170F53: cmp bl, byte ptr [esi + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(esi + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17170F65; /* 0x17170F56: jne 0x17170f65 */
L_17170F58:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17170F58: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17170F59: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x17170F5A: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x17170F5B: inc esi */
    _flag_k = FK_INC;
    /* test LO8(ecx), LO8(ecx) */ /* 0x17170F5C: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17170F3E; /* 0x17170F5E: jne 0x17170f3e */
L_17170F60:
    RECOMP_BACKEDGE();
    goto L_17170E7C; /* 0x17170F60: jmp 0x17170e7c */
L_17170F65:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17170F65: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17170F67: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_17170F6A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x17170F6A: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x17170F6C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(ecx, (TEST_Z(_flag_a, _flag_b)) ? 1 : 0); /* 0x17170F6E: sete cl */
    eax = ecx; /* 0x17170F71: mov eax, ecx */
    ecx = MEM32(ebp + 0xC); /* 0x17170F73: mov ecx, dword ptr [ebp + 0xc] */
L_17170F76:
    /* test eax, eax */ /* 0x17170F76: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_17170E10; /* 0x17170F78: je 0x17170e10 */
L_17170F7E:
    edx = MEM32(edx + 0xC); /* 0x17170F7E: mov edx, dword ptr [edx + 0xc] */
    ecx = MEM32(ecx + 0xC); /* 0x17170F81: mov ecx, dword ptr [ecx + 0xc] */
L_17170F84:
    /* test edx, edx */ /* 0x17170F84: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0xC) = ecx; /* 0x17170F86: mov dword ptr [ebp + 0xc], ecx */
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17170DAE; /* 0x17170F89: jne 0x17170dae */
L_17170F8F:
    RECOMP_BACKEDGE();
    goto L_17170E18; /* 0x17170F8F: jmp 0x17170e18 */
L_17170F94:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17170F94: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_17170F96:
    edi = POP32_VAL(esp); /* 0x17170F96: pop edi */
    esi = POP32_VAL(esp); /* 0x17170F97: pop esi */
    ebx = POP32_VAL(esp); /* 0x17170F98: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17170F99: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x17170F9A: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_17170FA2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17170FA2u);

L_17170FA2:
    edi = edi; /* 0x17170FA2: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17170FA4: push ebp */
    ebp = esp; /* 0x17170FA5: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x17170FA7: push ebx */
    PUSH32(esp, esi); /* 0x17170FA8: push esi */
    PUSH32(esp, edi); /* 0x17170FA9: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x17170FAA: push dword ptr [ebp + 8] */
    ebx = ecx; /* 0x17170FAD: mov ebx, ecx */
    RECOMP_CALL(sub_17170CF5); /* 0x17170FAF: call 0x17170cf5 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebx + eax * 4 + 0x6C); /* 0x17170FB4: mov esi, dword ptr [ebx + eax*4 + 0x6c] */
    goto L_17170FEF; /* 0x17170FB8: jmp 0x17170fef */
L_17170FBA:
    eax = MEM32(esi); /* 0x17170FBA: mov eax, dword ptr [esi] */
    edi = MEM32(ebp + 0x8); /* 0x17170FBC: mov edi, dword ptr [ebp + 8] */
L_17170FBF:
    SET_LO8(edx, MEM8(edi)); /* 0x17170FBF: mov dl, byte ptr [edi] */
    SET_LO8(ecx, LO8(edx)); /* 0x17170FC1: mov cl, dl */
    /* cmp LO8(edx), MEM8(eax) */ /* 0x17170FC3: cmp dl, byte ptr [eax] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17170FE1; /* 0x17170FC5: jne 0x17170fe1 */
L_17170FC7:
    /* test LO8(ecx), LO8(ecx) */ /* 0x17170FC7: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_17170FDD; /* 0x17170FC9: je 0x17170fdd */
L_17170FCB:
    SET_LO8(edx, MEM8(edi + 0x1)); /* 0x17170FCB: mov dl, byte ptr [edi + 1] */
    SET_LO8(ecx, LO8(edx)); /* 0x17170FCE: mov cl, dl */
    /* cmp LO8(edx), MEM8(eax + 0x1) */ /* 0x17170FD0: cmp dl, byte ptr [eax + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17170FE1; /* 0x17170FD3: jne 0x17170fe1 */
L_17170FD5:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x17170FD5: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x17170FD6: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17170FD7: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17170FD8: inc eax */
    _flag_k = FK_INC;
    /* test LO8(ecx), LO8(ecx) */ /* 0x17170FD9: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17170FBF; /* 0x17170FDB: jne 0x17170fbf */
L_17170FDD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17170FDD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_17170FE6; /* 0x17170FDF: jmp 0x17170fe6 */
L_17170FE1:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17170FE1: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17170FE3: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_17170FE6:
    /* test eax, eax */ /* 0x17170FE6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17170FF3; /* 0x17170FE8: jl 0x17170ff3 */
L_17170FEA:
    if (TEST_Z(_flag_a, _flag_b)) goto L_17170FF7; /* 0x17170FEA: je 0x17170ff7 */
L_17170FEC:
    esi = MEM32(esi + 0xC); /* 0x17170FEC: mov esi, dword ptr [esi + 0xc] */
L_17170FEF:
    /* test esi, esi */ /* 0x17170FEF: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17170FBA; /* 0x17170FF1: jne 0x17170fba */
L_17170FF3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17170FF3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_17171034; /* 0x17170FF5: jmp 0x17171034 */
L_17170FF7:
    /* cmp MEM32(esi + 0x10), 0 */ /* 0x17170FF7: cmp dword ptr [esi + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17171002; /* 0x17170FFB: je 0x17171002 */
L_17170FFD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17170FFD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17170FFF: inc eax */
    _flag_k = FK_INC;
    goto L_17171034; /* 0x17171000: jmp 0x17171034 */
L_17171002:
    edi = MEM32(esi + 0x8); /* 0x17171002: mov edi, dword ptr [esi + 8] */
    MEM32(esi + 0x10) = 1; /* 0x17171005: mov dword ptr [esi + 0x10], 1 */
    goto L_17171025; /* 0x1717100C: jmp 0x17171025 */
L_1717100E:
    /* cmp MEM32(edi + 0x10), 9 */ /* 0x1717100E: cmp dword ptr [edi + 0x10], 9 */
    _flag_a = (uint32_t)(MEM32(edi + 0x10)); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17171022; /* 0x17171012: jne 0x17171022 */
L_17171014:
    PUSH32(esp, MEM32(edi + 0x18)); /* 0x17171014: push dword ptr [edi + 0x18] */
    ecx = ebx; /* 0x17171017: mov ecx, ebx */
    RECOMP_CALL(sub_17170FA2); /* 0x17171019: call 0x17170fa2 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1717101E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17171029; /* 0x17171020: jne 0x17171029 */
L_17171022:
    edi = MEM32(edi + 0xC); /* 0x17171022: mov edi, dword ptr [edi + 0xc] */
L_17171025:
    /* test edi, edi */ /* 0x17171025: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1717100E; /* 0x17171027: jne 0x1717100e */
L_17171029:
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x10) = MEM32(esi + 0x10) & 0; /* 0x17171029: and dword ptr [esi + 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1717102D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x1717102F: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x17171031: setne al */
L_17171034:
    edi = POP32_VAL(esp); /* 0x17171034: pop edi */
    esi = POP32_VAL(esp); /* 0x17171035: pop esi */
    ebx = POP32_VAL(esp); /* 0x17171036: pop ebx */
    ebp = POP32_VAL(esp); /* 0x17171037: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x17171038: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_17171040(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17171040u);

L_17171040:
    edi = edi; /* 0x17171040: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17171042: push ebp */
    ebp = esp; /* 0x17171043: mov ebp, esp */
    PUSH32(esp, esi); /* 0x17171045: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x17171046: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x17171049: mov esi, ecx */
    RECOMP_CALL(sub_17170FA2); /* 0x1717104B: call 0x17170fa2 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17171050: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17171058; /* 0x17171052: je 0x17171058 */
L_17171054:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17171054: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_171710A5; /* 0x17171056: jmp 0x171710a5 */
L_17171058:
    PUSH32(esp, edi); /* 0x17171058: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x17171059: push dword ptr [ebp + 8] */
    ecx = esi; /* 0x1717105C: mov ecx, esi */
    RECOMP_CALL(sub_17170CF5); /* 0x1717105E: call 0x17170cf5 */
    RECOMP_FLAGS_IN();
    esi = MEM32(esi + eax * 4 + 0x6C); /* 0x17171063: mov esi, dword ptr [esi + eax*4 + 0x6c] */
    goto L_1717109E; /* 0x17171067: jmp 0x1717109e */
L_17171069:
    ecx = MEM32(esi); /* 0x17171069: mov ecx, dword ptr [esi] */
    edi = MEM32(ebp + 0x8); /* 0x1717106B: mov edi, dword ptr [ebp + 8] */
L_1717106E:
    SET_LO8(edx, MEM8(edi)); /* 0x1717106E: mov dl, byte ptr [edi] */
    SET_LO8(eax, LO8(edx)); /* 0x17171070: mov al, dl */
    /* cmp LO8(edx), MEM8(ecx) */ /* 0x17171072: cmp dl, byte ptr [ecx] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17171090; /* 0x17171074: jne 0x17171090 */
L_17171076:
    /* test LO8(eax), LO8(eax) */ /* 0x17171076: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1717108C; /* 0x17171078: je 0x1717108c */
L_1717107A:
    SET_LO8(edx, MEM8(edi + 0x1)); /* 0x1717107A: mov dl, byte ptr [edi + 1] */
    SET_LO8(eax, LO8(edx)); /* 0x1717107D: mov al, dl */
    /* cmp LO8(edx), MEM8(ecx + 0x1) */ /* 0x1717107F: cmp dl, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(ecx + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17171090; /* 0x17171082: jne 0x17171090 */
L_17171084:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x17171084: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x17171085: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x17171086: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x17171087: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x17171088: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1717106E; /* 0x1717108A: jne 0x1717106e */
L_1717108C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1717108C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_17171095; /* 0x1717108E: jmp 0x17171095 */
L_17171090:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17171090: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17171092: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_17171095:
    /* test eax, eax */ /* 0x17171095: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171710A2; /* 0x17171097: jl 0x171710a2 */
L_17171099:
    if (TEST_Z(_flag_a, _flag_b)) goto L_171710AA; /* 0x17171099: je 0x171710aa */
L_1717109B:
    esi = MEM32(esi + 0xC); /* 0x1717109B: mov esi, dword ptr [esi + 0xc] */
L_1717109E:
    /* test esi, esi */ /* 0x1717109E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17171069; /* 0x171710A0: jne 0x17171069 */
L_171710A2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171710A2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171710A4:
    edi = POP32_VAL(esp); /* 0x171710A4: pop edi */
L_171710A5:
    esi = POP32_VAL(esp); /* 0x171710A5: pop esi */
    ebp = POP32_VAL(esp); /* 0x171710A6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x171710A7: ret 0xc */
L_171710AA:
    eax = MEM32(ebp + 0xC); /* 0x171710AA: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x171710AD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171710B6; /* 0x171710AF: je 0x171710b6 */
L_171710B1:
    ecx = MEM32(esi + 0x4); /* 0x171710B1: mov ecx, dword ptr [esi + 4] */
    MEM32(eax) = ecx; /* 0x171710B4: mov dword ptr [eax], ecx */
L_171710B6:
    eax = MEM32(ebp + 0x10); /* 0x171710B6: mov eax, dword ptr [ebp + 0x10] */
    /* test eax, eax */ /* 0x171710B9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171710C2; /* 0x171710BB: je 0x171710c2 */
L_171710BD:
    ecx = MEM32(esi + 0x8); /* 0x171710BD: mov ecx, dword ptr [esi + 8] */
    MEM32(eax) = ecx; /* 0x171710C0: mov dword ptr [eax], ecx */
L_171710C2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171710C2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171710C4: inc eax */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_171710A4; /* 0x171710C5: jmp 0x171710a4 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_171710CC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171710CCu);

L_171710CC:
    edi = edi; /* 0x171710CC: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171710CE: push ebp */
    ebp = esp; /* 0x171710CF: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x171710D1: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x171710D4: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171710D5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171710D7: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171710D9: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x171710DB: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1717112E; /* 0x171710DD: je 0x1717112e */
L_171710DF:
    PUSH32(esp, ebx); /* 0x171710DF: push ebx */
    PUSH32(esp, esi); /* 0x171710E0: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171710E1: mov esi, dword ptr [ebp + 8] */
    MEM32(ebp + 0xC) = ecx; /* 0x171710E4: mov dword ptr [ebp + 0xc], ecx */
    ecx = MEM32(ebp + 0x10); /* 0x171710E7: mov ecx, dword ptr [ebp + 0x10] */
L_171710EA:
    /* cmp MEM8(esi), 0x22u */ /* 0x171710EA: cmp byte ptr [esi], 0x22 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0x22u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17171105; /* 0x171710ED: jne 0x17171105 */
L_171710EF:
    /* test ecx, ecx */ /* 0x171710EF: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171710F7; /* 0x171710F1: je 0x171710f7 */
L_171710F3:
    MEM8(eax + ecx) = (uint8_t)(0x5Cu); /* 0x171710F3: mov byte ptr [eax + ecx], 0x5c */
L_171710F7:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171710F7: inc eax */
    _flag_k = FK_INC;
    /* test edi, edi */ /* 0x171710F8: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17171105; /* 0x171710FA: jne 0x17171105 */
L_171710FC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x171710FC: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edx, edx */ /* 0x171710FE: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(ebx, (TEST_Z(_flag_a, _flag_b)) ? 1 : 0); /* 0x17171100: sete bl */
    edx = ebx; /* 0x17171103: mov edx, ebx */
L_17171105:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x17171105: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edx, edx */ /* 0x17171107: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1717111C; /* 0x17171109: je 0x1717111c */
L_1717110B:
    /* cmp MEM8(esi), 0x5Cu */ /* 0x1717110B: cmp byte ptr [esi], 0x5c */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0x5Cu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1717111C; /* 0x1717110E: jne 0x1717111c */
L_17171110:
    /* test ecx, ecx */ /* 0x17171110: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17171118; /* 0x17171112: je 0x17171118 */
L_17171114:
    MEM8(eax + ecx) = (uint8_t)(0x5Cu); /* 0x17171114: mov byte ptr [eax + ecx], 0x5c */
L_17171118:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x17171118: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1717111A: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1717111B: inc edi */
    _flag_k = FK_INC;
L_1717111C:
    /* test ecx, ecx */ /* 0x1717111C: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17171125; /* 0x1717111E: je 0x17171125 */
L_17171120:
    SET_LO8(ebx, MEM8(esi)); /* 0x17171120: mov bl, byte ptr [esi] */
    MEM8(eax + ecx) = (uint8_t)(LO8(ebx)); /* 0x17171122: mov byte ptr [eax + ecx], bl */
L_17171125:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17171125: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x17171126: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - 1; /* 0x17171127: dec dword ptr [ebp + 0xc] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171710EA; /* 0x1717112A: jne 0x171710ea */
L_1717112C:
    esi = POP32_VAL(esp); /* 0x1717112C: pop esi */
    ebx = POP32_VAL(esp); /* 0x1717112D: pop ebx */
L_1717112E:
    edi = POP32_VAL(esp); /* 0x1717112E: pop edi */
    ebp = POP32_VAL(esp); /* 0x1717112F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x17171130: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_17171138(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17171138u);

L_17171138:
    edi = edi; /* 0x17171138: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1717113A: push ebp */
    ebp = esp; /* 0x1717113B: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1717113D: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x17171140: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x17171142: push esi */
    esi = ecx; /* 0x17171143: mov esi, ecx */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1717116E; /* 0x17171145: jne 0x1717116e */
L_17171147:
    /* cmp MEM32(esi + 0x44), eax */ /* 0x17171147: cmp dword ptr [esi + 0x44], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0x44)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1717116C; /* 0x1717114A: jne 0x1717116c */
L_1717114C:
    PUSH32(esp, 0x1700A80Cu); /* 0x1717114C: push 0x1700a80c */
    PUSH32(esp, eax); /* 0x17171151: push eax */
    eax = esi + 0x278; /* 0x17171152: lea eax, [esi + 0x278] */
    PUSH32(esp, eax); /* 0x17171158: push eax */
    eax = esi + 0x18; /* 0x17171159: lea eax, [esi + 0x18] */
    PUSH32(esp, eax); /* 0x1717115C: push eax */
    RECOMP_CALL(sub_17174059); /* 0x1717115D: call 0x17174059 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x17171162: add esp, 0x10 */
    _flag_k = FK_ADD;
    MEM32(esi + 0x44) = 1; /* 0x17171165: mov dword ptr [esi + 0x44], 1 */
L_1717116C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1717116C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1717116E:
    esi = POP32_VAL(esp); /* 0x1717116E: pop esi */
    ebp = POP32_VAL(esp); /* 0x1717116F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x17171170: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_17171178(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17171178u);

L_17171178:
    edi = edi; /* 0x17171178: mov edi, edi */
    PUSH32(esp, esi); /* 0x1717117A: push esi */
    esi = MEM32(ecx + 0xC); /* 0x1717117B: mov esi, dword ptr [ecx + 0xc] */
    /* test esi, esi */ /* 0x1717117E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17171190; /* 0x17171180: je 0x17171190 */
L_17171182:
    ecx = esi; /* 0x17171182: mov ecx, esi */
    RECOMP_CALL(sub_17171178); /* 0x17171184: call 0x17171178 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x17171189: push esi */
    RECOMP_CALL(sub_1721B010); /* 0x1717118A: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1717118F: pop ecx */
L_17171190:
    esi = POP32_VAL(esp); /* 0x17171190: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x17171191: ret  */
    RECOMP_REGS_OUT();
}

void sub_17171197(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17171197u);

L_17171197:
    edi = edi; /* 0x17171197: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17171199: push ebp */
    ebp = esp; /* 0x1717119A: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1717119C: push esi */
    esi = ecx; /* 0x1717119D: mov esi, ecx */
    RECOMP_CALL(sub_17171178); /* 0x1717119F: call 0x17171178 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x171711A4: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171711B1; /* 0x171711A8: je 0x171711b1 */
L_171711AA:
    PUSH32(esp, esi); /* 0x171711AA: push esi */
    RECOMP_CALL(sub_1721B010); /* 0x171711AB: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171711B0: pop ecx */
L_171711B1:
    eax = esi; /* 0x171711B1: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x171711B3: pop esi */
    ebp = POP32_VAL(esp); /* 0x171711B4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171711B5: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171711BD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171711BDu);

L_171711BD:
    edi = edi; /* 0x171711BD: mov edi, edi */
    PUSH32(esp, esi); /* 0x171711BF: push esi */
    esi = ecx; /* 0x171711C0: mov esi, ecx */
    RECOMP_CALL(sub_1716FB5C); /* 0x171711C2: call 0x1716fb5c */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x2A0) = 1; /* 0x171711C7: mov dword ptr [esi + 0x2a0], 1 */
    eax = MEM32(0x1723E254); /* 0x171711D1: mov eax, dword ptr [0x1723e254] */
    MEM32(0x1723E254) = esi; /* 0x171711D6: mov dword ptr [0x1723e254], esi */
    MEM32(esi + 0x2A4) = eax; /* 0x171711DC: mov dword ptr [esi + 0x2a4], eax */
    esi = POP32_VAL(esp); /* 0x171711E2: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171711E3: ret  */
    RECOMP_REGS_OUT();
}

void sub_171711E9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171711E9u);

    goto L_171711E9;
L_1716FBB6:
    edi = edi; /* 0x1716FBB6: mov edi, edi */
    PUSH32(esp, ebx); /* 0x1716FBB8: push ebx */
    PUSH32(esp, esi); /* 0x1716FBB9: push esi */
    PUSH32(esp, edi); /* 0x1716FBBA: push edi */
    PUSH32(esp, 0x1723F658u); /* 0x1716FBBB: push 0x1723f658 */
    RECOMP_ICALL(MEM32(0x170010C0)); /* 0x1716FBC0: call dword ptr [0x170010c0] */
    RECOMP_FLAGS_IN();
    edi = MEM32(0x170010C8); /* 0x1716FBC6: mov edi, dword ptr [0x170010c8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1716FBCC: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1716FBCE: inc ebx */
    _flag_k = FK_INC;
    esi = 0x1723F674u; /* 0x1716FBCF: mov esi, 0x1723f674 */
    goto L_1716FBDD; /* 0x1716FBD4: jmp 0x1716fbdd */
L_1716FBD6:
    PUSH32(esp, ebx); /* 0x1716FBD6: push ebx */
    RECOMP_ICALL(MEM32(0x17001194)); /* 0x1716FBD7: call dword ptr [0x17001194] */
    RECOMP_FLAGS_IN();
L_1716FBDD:
    PUSH32(esp, 0); /* 0x1716FBDD: push 0 */
    PUSH32(esp, ebx); /* 0x1716FBDF: push ebx */
    PUSH32(esp, esi); /* 0x1716FBE0: push esi */
    RECOMP_ICALL(edi); /* 0x1716FBE1: call edi */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x1716FBE3: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1716FBD6; /* 0x1716FBE5: je 0x1716fbd6 */
L_1716FBE7:
    _flag_a = (uint32_t)(MEM32(0x1723F670)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(0x1723F670) = MEM32(0x1723F670) - ebx; /* 0x1716FBE7: sub dword ptr [0x1723f670], ebx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1716FBFA; /* 0x1716FBED: jne 0x1716fbfa */
L_1716FBEF:
    PUSH32(esp, 0x1723F658u); /* 0x1716FBEF: push 0x1723f658 */
    RECOMP_ICALL(MEM32(0x170010C4)); /* 0x1716FBF4: call dword ptr [0x170010c4] */
    RECOMP_FLAGS_IN();
L_1716FBFA:
    PUSH32(esp, 0); /* 0x1716FBFA: push 0 */
    PUSH32(esp, esi); /* 0x1716FBFC: push esi */
    RECOMP_ICALL(MEM32(0x170010D4)); /* 0x1716FBFD: call dword ptr [0x170010d4] */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x1716FC03: pop edi */
    esi = POP32_VAL(esp); /* 0x1716FC04: pop esi */
    ebx = POP32_VAL(esp); /* 0x1716FC05: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1716FC06: ret  */
L_171711E9:
    eax = MEM32(ecx + 0x2A4); /* 0x171711E9: mov eax, dword ptr [ecx + 0x2a4] */
    MEM32(0x1723E254) = eax; /* 0x171711EF: mov dword ptr [0x1723e254], eax */
    _flag_a = (uint32_t)(MEM32(ecx + 0x2A0)); _flag_b = (uint32_t)(0);
    MEM32(ecx + 0x2A0) = MEM32(ecx + 0x2A0) & 0; /* 0x171711F4: and dword ptr [ecx + 0x2a0], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1716FBB6; /* 0x171711FB: jmp 0x1716fbb6 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_17171205(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17171205u);

L_17171205:
    edi = edi; /* 0x17171205: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17171207: push ebp */
    ebp = esp; /* 0x17171208: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x1717120A: sub esp, 0x28 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1717120D: push ebx */
    ebx = ecx; /* 0x1717120E: mov ebx, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x17171210: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebx + 0x40), edx */ /* 0x17171212: cmp dword ptr [ebx + 0x40], edx */
    _flag_a = (uint32_t)(MEM32(ebx + 0x40)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x17171215: push esi */
    PUSH32(esp, edi); /* 0x17171216: push edi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_17171688; /* 0x17171217: jne 0x17171688 */
L_1717121D:
    /* cmp MEM32(ebx + 0x48), edx */ /* 0x1717121D: cmp dword ptr [ebx + 0x48], edx */
    _flag_a = (uint32_t)(MEM32(ebx + 0x48)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17171688; /* 0x17171220: jne 0x17171688 */
L_17171226:
    eax = MEM32(ebx + 0x64); /* 0x17171226: mov eax, dword ptr [ebx + 0x64] */
    /* cmp eax, edx */ /* 0x17171229: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17171246; /* 0x1717122B: je 0x17171246 */
L_1717122D:
    PUSH32(esp, 8); /* 0x1717122D: push 8 */
    edi = ebx + 0x278; /* 0x1717122F: lea edi, [ebx + 0x278] */
    esi = eax + 0x10; /* 0x17171235: lea esi, [eax + 0x10] */
    ecx = POP32_VAL(esp); /* 0x17171238: pop ecx */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x17171239: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = MEM32(eax + 0xC); /* 0x1717123B: mov ecx, dword ptr [eax + 0xc] */
    MEM32(ebx + 0x64) = ecx; /* 0x1717123E: mov dword ptr [ebx + 0x64], ecx */
    MEM32(eax + 0xC) = edx; /* 0x17171241: mov dword ptr [eax + 0xc], edx */
    goto L_1717126A; /* 0x17171244: jmp 0x1717126a */
L_17171246:
    ecx = MEM32(ebx + 0x26C); /* 0x17171246: mov ecx, dword ptr [ebx + 0x26c] */
    eax = ebx + 0x278; /* 0x1717124C: lea eax, [ebx + 0x278] */
    PUSH32(esp, eax); /* 0x17171252: push eax */
    eax = MEM32(ebx + 0x298); /* 0x17171253: mov eax, dword ptr [ebx + 0x298] */
    _flag_a = (uint32_t)((eax | 4)); _flag_b = (uint32_t)((eax | 4));
    eax = eax | 4; /* 0x17171259: or eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1717125C: push eax */
    RECOMP_CALL(sub_17174BE6); /* 0x1717125D: call 0x17174be6 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17171262: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17171692; /* 0x17171264: jl 0x17171692 */
L_1717126A:
    eax = MEM32(ebx + 0x278); /* 0x1717126A: mov eax, dword ptr [ebx + 0x278] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x17171270: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x17171272: inc ecx */
    _flag_k = FK_INC;
    /* cmp eax, ecx */ /* 0x17171273: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17171613; /* 0x17171275: je 0x17171613 */
L_1717127B:
    if (CMP_LE(_flag_a, _flag_b)) goto L_17171609; /* 0x1717127B: jle 0x17171609 */
L_17171281:
    /* cmp eax, 4 */ /* 0x17171281: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_171715FF; /* 0x17171284: jle 0x171715ff */
L_1717128A:
    /* cmp eax, 9 */ /* 0x1717128A: cmp eax, 9 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171712B4; /* 0x1717128D: je 0x171712b4 */
L_1717128F:
    /* cmp eax, 0xAu */ /* 0x1717128F: cmp eax, 0xa */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171712AA; /* 0x17171292: je 0x171712aa */
L_17171294:
    /* cmp eax, 0xCu */ /* 0x17171294: cmp eax, 0xc */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171712A2; /* 0x17171297: je 0x171712a2 */
L_17171299:
    /* cmp eax, 0xDu */ /* 0x17171299: cmp eax, 0xd */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xDu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17171609; /* 0x1717129C: jne 0x17171609 */
L_171712A2:
    MEM32(ebx + 0x40) = ecx; /* 0x171712A2: mov dword ptr [ebx + 0x40], ecx */
    goto L_17171692; /* 0x171712A5: jmp 0x17171692 */
L_171712AA:
    eax = 0x118u; /* 0x171712AA: mov eax, 0x118 */
    goto L_17171695; /* 0x171712AF: jmp 0x17171695 */
L_171712B4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171712B4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebx + 0x4C), eax */ /* 0x171712B6: cmp dword ptr [ebx + 0x4c], eax */
    _flag_a = (uint32_t)(MEM32(ebx + 0x4C)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1717152A; /* 0x171712B9: je 0x1717152a */
L_171712BF:
    /* cmp MEM32(ebx + 0x50), eax */ /* 0x171712BF: cmp dword ptr [ebx + 0x50], eax */
    _flag_a = (uint32_t)(MEM32(ebx + 0x50)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebx + 0x4C) = eax; /* 0x171712C2: mov dword ptr [ebx + 0x4c], eax */
    MEM32(ebx + 0x58) = eax; /* 0x171712C5: mov dword ptr [ebx + 0x58], eax */
    eax = MEM32(ebx + 0x280); /* 0x171712C8: mov eax, dword ptr [ebx + 0x280] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1717143D; /* 0x171712CE: je 0x1717143d */
L_171712D4:
    ecx = (int32_t)(int8_t)MEM8(eax); /* 0x171712D4: movsx ecx, byte ptr [eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x64u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 0x64u; /* 0x171712D7: sub ecx, 0x64 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1717141F; /* 0x171712DA: je 0x1717141f */
L_171712E0:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x171712E0: dec ecx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_171713C5; /* 0x171712E1: je 0x171713c5 */
L_171712E7:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 4; /* 0x171712E7: sub ecx, 4 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_17171359; /* 0x171712EA: je 0x17171359 */
L_171712EC:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 3; /* 0x171712EC: sub ecx, 3 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1717133B; /* 0x171712EF: je 0x1717133b */
L_171712F1:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 4; /* 0x171712F1: sub ecx, 4 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1717131D; /* 0x171712F4: je 0x1717131d */
L_171712F6:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 5; /* 0x171712F6: sub ecx, 5 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_1717151E; /* 0x171712F9: jne 0x1717151e */
L_171712FF:
    esi = eax; /* 0x171712FF: mov esi, eax */
    PUSH32(esp, 6); /* 0x17171301: push 6 */
    edi = 0x17021920u; /* 0x17171303: mov edi, 0x17021920 */
    ecx = POP32_VAL(esp); /* 0x17171308: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17171309: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM8(esi); _b = MEM8(edi); esi += _df; edi += _df; ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x1717130B: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_1717151E; /* 0x1717130D: jne 0x1717151e */
L_17171313:
    eax = 0x102u; /* 0x17171313: mov eax, 0x102 */
    goto L_17171695; /* 0x17171318: jmp 0x17171695 */
L_1717131D:
    esi = eax; /* 0x1717131D: mov esi, eax */
    PUSH32(esp, 7); /* 0x1717131F: push 7 */
    edi = 0x17021918u; /* 0x17171321: mov edi, 0x17021918 */
    ecx = POP32_VAL(esp); /* 0x17171326: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17171327: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM8(esi); _b = MEM8(edi); esi += _df; edi += _df; ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x17171329: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_1717151E; /* 0x1717132B: jne 0x1717151e */
L_17171331:
    eax = 0x10Eu; /* 0x17171331: mov eax, 0x10e */
    goto L_17171695; /* 0x17171336: jmp 0x17171695 */
L_1717133B:
    esi = eax; /* 0x1717133B: mov esi, eax */
    PUSH32(esp, 5); /* 0x1717133D: push 5 */
    edi = 0x17021910u; /* 0x1717133F: mov edi, 0x17021910 */
    ecx = POP32_VAL(esp); /* 0x17171344: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17171345: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM8(esi); _b = MEM8(edi); esi += _df; edi += _df; ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x17171347: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_1717151E; /* 0x17171349: jne 0x1717151e */
L_1717134F:
    eax = 0x103u; /* 0x1717134F: mov eax, 0x103 */
    goto L_17171695; /* 0x17171354: jmp 0x17171695 */
L_17171359:
    PUSH32(esp, 3); /* 0x17171359: push 3 */
    edi = 0x170086A8u; /* 0x1717135B: mov edi, 0x170086a8 */
    esi = eax; /* 0x17171360: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x17171362: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x17171363: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM8(esi); _b = MEM8(edi); esi += _df; edi += _df; ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x17171365: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_17171373; /* 0x17171367: jne 0x17171373 */
L_17171369:
    eax = 0x106u; /* 0x17171369: mov eax, 0x106 */
    goto L_171714E8; /* 0x1717136E: jmp 0x171714e8 */
L_17171373:
    PUSH32(esp, 6); /* 0x17171373: push 6 */
    edi = 0x17021908u; /* 0x17171375: mov edi, 0x17021908 */
    esi = eax; /* 0x1717137A: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x1717137C: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1717137D: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM8(esi); _b = MEM8(edi); esi += _df; edi += _df; ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x1717137F: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_1717138D; /* 0x17171381: jne 0x1717138d */
L_17171383:
    eax = 0x107u; /* 0x17171383: mov eax, 0x107 */
    goto L_17171695; /* 0x17171388: jmp 0x17171695 */
L_1717138D:
    PUSH32(esp, 7); /* 0x1717138D: push 7 */
    edi = 0x17021900u; /* 0x1717138F: mov edi, 0x17021900 */
    esi = eax; /* 0x17171394: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x17171396: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x17171397: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM8(esi); _b = MEM8(edi); esi += _df; edi += _df; ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x17171399: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_171713A7; /* 0x1717139B: jne 0x171713a7 */
L_1717139D:
    eax = 0x108u; /* 0x1717139D: mov eax, 0x108 */
    goto L_17171695; /* 0x171713A2: jmp 0x17171695 */
L_171713A7:
    esi = eax; /* 0x171713A7: mov esi, eax */
    PUSH32(esp, 8); /* 0x171713A9: push 8 */
    edi = 0x170218F8u; /* 0x171713AB: mov edi, 0x170218f8 */
    ecx = POP32_VAL(esp); /* 0x171713B0: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171713B1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM8(esi); _b = MEM8(edi); esi += _df; edi += _df; ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x171713B3: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_1717151E; /* 0x171713B5: jne 0x1717151e */
L_171713BB:
    eax = 0x104u; /* 0x171713BB: mov eax, 0x104 */
    goto L_17171695; /* 0x171713C0: jmp 0x17171695 */
L_171713C5:
    PUSH32(esp, 5); /* 0x171713C5: push 5 */
    edi = 0x170218F0u; /* 0x171713C7: mov edi, 0x170218f0 */
    esi = eax; /* 0x171713CC: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x171713CE: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171713CF: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM8(esi); _b = MEM8(edi); esi += _df; edi += _df; ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x171713D1: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_171714E3; /* 0x171713D3: je 0x171714e3 */
L_171713D9:
    PUSH32(esp, 5); /* 0x171713D9: push 5 */
    edi = 0x170086A0u; /* 0x171713DB: mov edi, 0x170086a0 */
    esi = eax; /* 0x171713E0: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x171713E2: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171713E3: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM8(esi); _b = MEM8(edi); esi += _df; edi += _df; ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x171713E5: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_1717149B; /* 0x171713E7: je 0x1717149b */
L_171713ED:
    PUSH32(esp, 6); /* 0x171713ED: push 6 */
    edi = 0x17008698u; /* 0x171713EF: mov edi, 0x17008698 */
    esi = eax; /* 0x171713F4: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x171713F6: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171713F7: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM8(esi); _b = MEM8(edi); esi += _df; edi += _df; ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x171713F9: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_171714B5; /* 0x171713FB: je 0x171714b5 */
L_17171401:
    esi = eax; /* 0x17171401: mov esi, eax */
    PUSH32(esp, 6); /* 0x17171403: push 6 */
    edi = 0x1702189Cu; /* 0x17171405: mov edi, 0x1702189c */
    ecx = POP32_VAL(esp); /* 0x1717140A: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1717140B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM8(esi); _b = MEM8(edi); esi += _df; edi += _df; ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x1717140D: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_1717151E; /* 0x1717140F: jne 0x1717151e */
L_17171415:
    eax = 0x105u; /* 0x17171415: mov eax, 0x105 */
    goto L_17171695; /* 0x1717141A: jmp 0x17171695 */
L_1717141F:
    esi = eax; /* 0x1717141F: mov esi, eax */
    PUSH32(esp, 7); /* 0x17171421: push 7 */
    edi = 0x170218E8u; /* 0x17171423: mov edi, 0x170218e8 */
    ecx = POP32_VAL(esp); /* 0x17171428: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17171429: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM8(esi); _b = MEM8(edi); esi += _df; edi += _df; ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x1717142B: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_1717151E; /* 0x1717142D: jne 0x1717151e */
L_17171433:
    eax = 0x101u; /* 0x17171433: mov eax, 0x101 */
    goto L_17171695; /* 0x17171438: jmp 0x17171695 */
L_1717143D:
    SET_LO8(ecx, MEM8(eax)); /* 0x1717143D: mov cl, byte ptr [eax] */
    /* cmp LO8(ecx), 0x65u */ /* 0x1717143F: cmp cl, 0x65 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x65u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1717148B; /* 0x17171442: je 0x1717148b */
L_17171444:
    /* cmp LO8(ecx), 0x69u */ /* 0x17171444: cmp cl, 0x69 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x69u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1717151E; /* 0x17171447: jne 0x1717151e */
L_1717144D:
    PUSH32(esp, 3); /* 0x1717144D: push 3 */
    edi = 0x170086A8u; /* 0x1717144F: mov edi, 0x170086a8 */
    esi = eax; /* 0x17171454: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x17171456: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x17171457: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM8(esi); _b = MEM8(edi); esi += _df; edi += _df; ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x17171459: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_17171481; /* 0x1717145B: je 0x17171481 */
L_1717145D:
    PUSH32(esp, 6); /* 0x1717145D: push 6 */
    edi = 0x17021908u; /* 0x1717145F: mov edi, 0x17021908 */
    esi = eax; /* 0x17171464: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x17171466: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x17171467: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM8(esi); _b = MEM8(edi); esi += _df; edi += _df; ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x17171469: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_17171481; /* 0x1717146B: je 0x17171481 */
L_1717146D:
    esi = eax; /* 0x1717146D: mov esi, eax */
    PUSH32(esp, 7); /* 0x1717146F: push 7 */
    edi = 0x17021900u; /* 0x17171471: mov edi, 0x17021900 */
    ecx = POP32_VAL(esp); /* 0x17171476: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17171477: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM8(esi); _b = MEM8(edi); esi += _df; edi += _df; ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x17171479: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_1717151E; /* 0x1717147B: jne 0x1717151e */
L_17171481:
    eax = 0x10Cu; /* 0x17171481: mov eax, 0x10c */
    goto L_17171695; /* 0x17171486: jmp 0x17171695 */
L_1717148B:
    PUSH32(esp, 5); /* 0x1717148B: push 5 */
    edi = 0x170086A0u; /* 0x1717148D: mov edi, 0x170086a0 */
    esi = eax; /* 0x17171492: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x17171494: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x17171495: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM8(esi); _b = MEM8(edi); esi += _df; edi += _df; ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x17171497: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_171714A5; /* 0x17171499: jne 0x171714a5 */
L_1717149B:
    eax = 0x10Au; /* 0x1717149B: mov eax, 0x10a */
    goto L_17171695; /* 0x171714A0: jmp 0x17171695 */
L_171714A5:
    PUSH32(esp, 6); /* 0x171714A5: push 6 */
    edi = 0x17008698u; /* 0x171714A7: mov edi, 0x17008698 */
    esi = eax; /* 0x171714AC: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x171714AE: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171714AF: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM8(esi); _b = MEM8(edi); esi += _df; edi += _df; ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x171714B1: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_171714BF; /* 0x171714B3: jne 0x171714bf */
L_171714B5:
    eax = 0x10Bu; /* 0x171714B5: mov eax, 0x10b */
    goto L_17171695; /* 0x171714BA: jmp 0x17171695 */
L_171714BF:
    esi = eax; /* 0x171714BF: mov esi, eax */
    PUSH32(esp, 5); /* 0x171714C1: push 5 */
    edi = 0x170218F0u; /* 0x171714C3: mov edi, 0x170218f0 */
    ecx = POP32_VAL(esp); /* 0x171714C8: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171714C9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM8(esi); _b = MEM8(edi); esi += _df; edi += _df; ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x171714CB: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_1717151E; /* 0x171714CD: jne 0x1717151e */
L_171714CF:
    eax = MEM32(ebx + 0x268); /* 0x171714CF: mov eax, dword ptr [ebx + 0x268] */
    eax = MEM32(eax + 0x38); /* 0x171714D5: mov eax, dword ptr [eax + 0x38] */
    /* test eax, eax */ /* 0x171714D8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171714F4; /* 0x171714DA: jne 0x171714f4 */
L_171714DC:
    MEM32(ebx + 0x50) = 1; /* 0x171714DC: mov dword ptr [ebx + 0x50], 1 */
L_171714E3:
    eax = 0x109u; /* 0x171714E3: mov eax, 0x109 */
L_171714E8:
    MEM32(ebx + 0x58) = 1; /* 0x171714E8: mov dword ptr [ebx + 0x58], 1 */
    goto L_17171695; /* 0x171714EF: jmp 0x17171695 */
L_171714F4:
    ecx = MEM32(eax + 0x4); /* 0x171714F4: mov ecx, dword ptr [eax + 4] */
    /* test ecx, ecx */ /* 0x171714F7: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17171514; /* 0x171714F9: je 0x17171514 */
L_171714FB:
    /* cmp MEM32(eax), 0 */ /* 0x171714FB: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17171514; /* 0x171714FE: jne 0x17171514 */
L_17171500:
    MEM32(ebx + 0x50) = ecx; /* 0x17171500: mov dword ptr [ebx + 0x50], ecx */
    MEM32(ebx + 0x58) = 1; /* 0x17171503: mov dword ptr [ebx + 0x58], 1 */
    eax = 0x109u; /* 0x1717150A: mov eax, 0x109 */
    goto L_17171695; /* 0x1717150F: jmp 0x17171695 */
L_17171514:
    eax = 0x10Du; /* 0x17171514: mov eax, 0x10d */
    goto L_17171695; /* 0x17171519: jmp 0x17171695 */
L_1717151E:
    MEM32(ebx + 0x4C) = 1; /* 0x1717151E: mov dword ptr [ebx + 0x4c], 1 */
    goto L_171715F5; /* 0x17171525: jmp 0x171715f5 */
L_1717152A:
    eax = MEM32(ebx + 0x280); /* 0x1717152A: mov eax, dword ptr [ebx + 0x280] */
    PUSH32(esp, 8); /* 0x17171530: push 8 */
    edi = 0x170218E0u; /* 0x17171532: mov edi, 0x170218e0 */
    esi = eax; /* 0x17171537: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x17171539: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1717153A: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM8(esi); _b = MEM8(edi); esi += _df; edi += _df; ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x1717153C: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_1717154D; /* 0x1717153E: jne 0x1717154d */
L_17171540:
    _flag_a = (uint32_t)(MEM32(ebx + 0x58)); _flag_b = (uint32_t)(edx);
    MEM32(ebx + 0x58) = MEM32(ebx + 0x58) & edx; /* 0x17171540: and dword ptr [ebx + 0x58], edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = 0x10Fu; /* 0x17171543: mov eax, 0x10f */
    goto L_17171695; /* 0x17171548: jmp 0x17171695 */
L_1717154D:
    /* cmp MEM32(ebx + 0x58), 0 */ /* 0x1717154D: cmp dword ptr [ebx + 0x58], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x58)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171715F5; /* 0x17171551: je 0x171715f5 */
L_17171557:
    ecx = ebp + (-0x4); /* 0x17171557: lea ecx, [ebp - 4] */
    PUSH32(esp, ecx); /* 0x1717155A: push ecx */
    ecx = ebp + (-0x8); /* 0x1717155B: lea ecx, [ebp - 8] */
    PUSH32(esp, ecx); /* 0x1717155E: push ecx */
    PUSH32(esp, eax); /* 0x1717155F: push eax */
    ecx = ebx; /* 0x17171560: mov ecx, ebx */
    RECOMP_CALL(sub_17171040); /* 0x17171562: call 0x17171040 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17171567: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171715F5; /* 0x17171569: je 0x171715f5 */
L_1717156F:
    /* cmp MEM32(ebx + 0x44), 0 */ /* 0x1717156F: cmp dword ptr [ebx + 0x44], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x44)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, 8); /* 0x17171573: push 8 */
    ecx = POP32_VAL(esp); /* 0x17171575: pop ecx */
    esi = ebx + 0x278; /* 0x17171576: lea esi, [ebx + 0x278] */
    edi = ebp + (-0x28); /* 0x1717157C: lea edi, [ebp - 0x28] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1717157F: rep movsd dword ptr es:[edi], dword ptr [esi] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1717159C; /* 0x17171581: jne 0x1717159c */
L_17171583:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x17171583: push dword ptr [ebp - 4] */
    eax = ebp + (-0x28); /* 0x17171586: lea eax, [ebp - 0x28] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x17171589: push dword ptr [ebp - 8] */
    ecx = ebx; /* 0x1717158C: mov ecx, ebx */
    PUSH32(esp, eax); /* 0x1717158E: push eax */
    RECOMP_CALL(sub_17173169); /* 0x1717158F: call 0x17173169 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17171594: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1717159C; /* 0x17171596: je 0x1717159c */
L_17171598:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17171598: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1717159F; /* 0x1717159A: jmp 0x1717159f */
L_1717159C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1717159C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1717159E: inc eax */
    _flag_k = FK_INC;
L_1717159F:
    /* test eax, eax */ /* 0x1717159F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebx + 0x44) = eax; /* 0x171715A1: mov dword ptr [ebx + 0x44], eax */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171715B6; /* 0x171715A4: jne 0x171715b6 */
L_171715A6:
    ecx = ebx; /* 0x171715A6: mov ecx, ebx */
    RECOMP_CALL(sub_17171205); /* 0x171715A8: call 0x17171205 */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0xFFFFFFFFu */ /* 0x171715AD: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171715B9; /* 0x171715B0: je 0x171715b9 */
L_171715B2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171715B2: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_171715BC; /* 0x171715B4: jmp 0x171715bc */
L_171715B6:
    eax = MEM32(ebp + (-0x8)); /* 0x171715B6: mov eax, dword ptr [ebp - 8] */
L_171715B9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171715B9: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171715BB: inc ecx */
    _flag_k = FK_INC;
L_171715BC:
    /* test ecx, ecx */ /* 0x171715BC: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebx + 0x44) = ecx; /* 0x171715BE: mov dword ptr [ebx + 0x44], ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17171695; /* 0x171715C1: je 0x17171695 */
L_171715C7:
    PUSH32(esp, 8); /* 0x171715C7: push 8 */
    ecx = POP32_VAL(esp); /* 0x171715C9: pop ecx */
    PUSH32(esp, 0x170218ACu); /* 0x171715CA: push 0x170218ac */
    eax = ebx + 0x278; /* 0x171715CF: lea eax, [ebx + 0x278] */
    PUSH32(esp, 0x5EEu); /* 0x171715D5: push 0x5ee */
    MEM32(ebx + 0x48) = 1; /* 0x171715DA: mov dword ptr [ebx + 0x48], 1 */
    PUSH32(esp, eax); /* 0x171715E1: push eax */
    edi = eax; /* 0x171715E2: mov edi, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x18u; /* 0x171715E4: add ebx, 0x18 */
    _flag_k = FK_ADD;
    esi = ebp + (-0x28); /* 0x171715E7: lea esi, [ebp - 0x28] */
    PUSH32(esp, ebx); /* 0x171715EA: push ebx */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x171715EB: rep movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_17174059); /* 0x171715ED: call 0x17174059 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x171715F2: add esp, 0x10 */
    _flag_k = FK_ADD;
L_171715F5:
    eax = 0x116u; /* 0x171715F5: mov eax, 0x116 */
    goto L_17171695; /* 0x171715FA: jmp 0x17171695 */
L_171715FF:
    eax = 0x117u; /* 0x171715FF: mov eax, 0x117 */
    goto L_17171695; /* 0x17171604: jmp 0x17171695 */
L_17171609:
    eax = 0x119u; /* 0x17171609: mov eax, 0x119 */
    goto L_17171695; /* 0x1717160E: jmp 0x17171695 */
L_17171613:
    SET_LO8(eax, MEM8(ebx + 0x281)); /* 0x17171613: mov al, byte ptr [ebx + 0x281] */
    /* test LO8(eax), LO8(eax) */ /* 0x17171619: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17171626; /* 0x1717161B: jne 0x17171626 */
L_1717161D:
    eax = (int32_t)(int8_t)MEM8(ebx + 0x280); /* 0x1717161D: movsx eax, byte ptr [ebx + 0x280] */
    goto L_17171695; /* 0x17171624: jmp 0x17171695 */
L_17171626:
    /* cmp MEM8(ebx + 0x282), 0 */ /* 0x17171626: cmp byte ptr [ebx + 0x282], 0 */
    _flag_a = (uint32_t)(MEM8(ebx + 0x282)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_17171609; /* 0x1717162D: jne 0x17171609 */
L_1717162F:
    /* cmp LO8(eax), 0x3Du */ /* 0x1717162F: cmp al, 0x3d */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x3Du) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17171666; /* 0x17171631: jne 0x17171666 */
L_17171633:
    eax = (int32_t)(int8_t)MEM8(ebx + 0x280); /* 0x17171633: movsx eax, byte ptr [ebx + 0x280] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x21u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x21u; /* 0x1717163A: sub eax, 0x21 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1717165F; /* 0x1717163D: je 0x1717165f */
L_1717163F:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Bu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x1Bu; /* 0x1717163F: sub eax, 0x1b */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_17171658; /* 0x17171642: je 0x17171658 */
L_17171644:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x17171644: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_17171651; /* 0x17171645: je 0x17171651 */
L_17171647:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x17171647: dec eax */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_17171609; /* 0x17171648: jne 0x17171609 */
L_1717164A:
    eax = 0x111u; /* 0x1717164A: mov eax, 0x111 */
    goto L_17171695; /* 0x1717164F: jmp 0x17171695 */
L_17171651:
    eax = 0x112u; /* 0x17171651: mov eax, 0x112 */
    goto L_17171695; /* 0x17171656: jmp 0x17171695 */
L_17171658:
    eax = 0x110u; /* 0x17171658: mov eax, 0x110 */
    goto L_17171695; /* 0x1717165D: jmp 0x17171695 */
L_1717165F:
    eax = 0x113u; /* 0x1717165F: mov eax, 0x113 */
    goto L_17171695; /* 0x17171664: jmp 0x17171695 */
L_17171666:
    SET_LO8(ebx, MEM8(ebx + 0x280)); /* 0x17171666: mov bl, byte ptr [ebx + 0x280] */
    /* cmp LO8(ebx), LO8(eax) */ /* 0x1717166C: cmp bl, al */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_17171609; /* 0x1717166E: jne 0x17171609 */
L_17171670:
    /* cmp LO8(ebx), 0x26u */ /* 0x17171670: cmp bl, 0x26 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x26u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17171681; /* 0x17171673: je 0x17171681 */
L_17171675:
    /* cmp LO8(ebx), 0x7Cu */ /* 0x17171675: cmp bl, 0x7c */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x7Cu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_17171609; /* 0x17171678: jne 0x17171609 */
L_1717167A:
    eax = 0x115u; /* 0x1717167A: mov eax, 0x115 */
    goto L_17171695; /* 0x1717167F: jmp 0x17171695 */
L_17171681:
    eax = 0x114u; /* 0x17171681: mov eax, 0x114 */
    goto L_17171695; /* 0x17171686: jmp 0x17171695 */
L_17171688:
    MEM32(ebx + 0x278) = 0xCu; /* 0x17171688: mov dword ptr [ebx + 0x278], 0xc */
L_17171692:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x17171692: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_17171695:
    edi = POP32_VAL(esp); /* 0x17171695: pop edi */
    esi = POP32_VAL(esp); /* 0x17171696: pop esi */
    ebx = POP32_VAL(esp); /* 0x17171697: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17171698: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x17171699: ret  */
    RECOMP_REGS_OUT();
}

void sub_1717169F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1717169Fu);

L_1717169F:
    edi = edi; /* 0x1717169F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171716A1: push ebp */
    ebp = esp; /* 0x171716A2: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171716A4: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171716A5: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x171716A8: mov esi, ecx */
    RECOMP_CALL(sub_17170CF5); /* 0x171716AA: call 0x17170cf5 */
    RECOMP_FLAGS_IN();
    eax = esi + eax * 4 + 0x6C; /* 0x171716AF: lea eax, [esi + eax*4 + 0x6c] */
    /* cmp MEM32(eax), 0 */ /* 0x171716B3: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1717170C; /* 0x171716B6: je 0x1717170c */
L_171716B8:
    PUSH32(esp, ebx); /* 0x171716B8: push ebx */
    PUSH32(esp, edi); /* 0x171716B9: push edi */
L_171716BA:
    ecx = MEM32(eax); /* 0x171716BA: mov ecx, dword ptr [eax] */
    esi = MEM32(ecx); /* 0x171716BC: mov esi, dword ptr [ecx] */
    edi = MEM32(ebp + 0x8); /* 0x171716BE: mov edi, dword ptr [ebp + 8] */
L_171716C1:
    SET_LO8(ebx, MEM8(edi)); /* 0x171716C1: mov bl, byte ptr [edi] */
    SET_LO8(edx, LO8(ebx)); /* 0x171716C3: mov dl, bl */
    /* cmp LO8(ebx), MEM8(esi) */ /* 0x171716C5: cmp bl, byte ptr [esi] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(esi)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171716E3; /* 0x171716C7: jne 0x171716e3 */
L_171716C9:
    /* test LO8(edx), LO8(edx) */ /* 0x171716C9: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171716DF; /* 0x171716CB: je 0x171716df */
L_171716CD:
    SET_LO8(ebx, MEM8(edi + 0x1)); /* 0x171716CD: mov bl, byte ptr [edi + 1] */
    SET_LO8(edx, LO8(ebx)); /* 0x171716D0: mov dl, bl */
    /* cmp LO8(ebx), MEM8(esi + 0x1) */ /* 0x171716D2: cmp bl, byte ptr [esi + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(esi + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171716E3; /* 0x171716D5: jne 0x171716e3 */
L_171716D7:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171716D7: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171716D8: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x171716D9: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x171716DA: inc esi */
    _flag_k = FK_INC;
    /* test LO8(edx), LO8(edx) */ /* 0x171716DB: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171716C1; /* 0x171716DD: jne 0x171716c1 */
L_171716DF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171716DF: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_171716E8; /* 0x171716E1: jmp 0x171716e8 */
L_171716E3:
    { uint32_t _sa = edx, _sb = edx, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x171716E3: sbb edx, edx */
      edx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = edx, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x171716E5: sbb edx, -1 */
      edx = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_171716E8:
    /* test edx, edx */ /* 0x171716E8: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1717170A; /* 0x171716EA: jl 0x1717170a */
L_171716EC:
    if (TEST_Z(_flag_a, _flag_b)) goto L_171716F8; /* 0x171716EC: je 0x171716f8 */
L_171716EE:
    eax = ecx + 0xC; /* 0x171716EE: lea eax, [ecx + 0xc] */
    /* cmp MEM32(eax), 0 */ /* 0x171716F1: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_171716BA; /* 0x171716F4: jne 0x171716ba */
L_171716F6:
    goto L_1717170A; /* 0x171716F6: jmp 0x1717170a */
L_171716F8:
    ecx = MEM32(eax); /* 0x171716F8: mov ecx, dword ptr [eax] */
    edx = MEM32(ecx + 0xC); /* 0x171716FA: mov edx, dword ptr [ecx + 0xc] */
    MEM32(eax) = edx; /* 0x171716FD: mov dword ptr [eax], edx */
    _flag_a = (uint32_t)(MEM32(ecx + 0xC)); _flag_b = (uint32_t)(0);
    MEM32(ecx + 0xC) = MEM32(ecx + 0xC) & 0; /* 0x171716FF: and dword ptr [ecx + 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 1); /* 0x17171703: push 1 */
    RECOMP_CALL(sub_17171197); /* 0x17171705: call 0x17171197 */
    RECOMP_FLAGS_IN();
L_1717170A:
    edi = POP32_VAL(esp); /* 0x1717170A: pop edi */
    ebx = POP32_VAL(esp); /* 0x1717170B: pop ebx */
L_1717170C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1717170C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1717170E: pop esi */
    ebp = POP32_VAL(esp); /* 0x1717170F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x17171710: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_17171718(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17171718u);

L_17171718:
    edi = edi; /* 0x17171718: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1717171A: push ebp */
    ebp = esp; /* 0x1717171B: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1717171D: push ecx */
    PUSH32(esp, ebx); /* 0x1717171E: push ebx */
    PUSH32(esp, esi); /* 0x1717171F: push esi */
    ebx = ecx; /* 0x17171720: mov ebx, ecx */
    ecx = MEM32(ebx + 0x26C); /* 0x17171722: mov ecx, dword ptr [ebx + 0x26c] */
    PUSH32(esp, edi); /* 0x17171728: push edi */
    esi = ebx + 0x278; /* 0x17171729: lea esi, [ebx + 0x278] */
    PUSH32(esp, esi); /* 0x1717172F: push esi */
    PUSH32(esp, MEM32(ebx + 0x298)); /* 0x17171730: push dword ptr [ebx + 0x298] */
    RECOMP_CALL(sub_17174BE6); /* 0x17171736: call 0x17174be6 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1717173B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171717B3; /* 0x1717173D: jl 0x171717b3 */
L_1717173F:
    esi = MEM32(esi); /* 0x1717173F: mov esi, dword ptr [esi] */
    /* cmp esi, 9 */ /* 0x17171741: cmp esi, 9 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = esi; /* 0x17171744: mov dword ptr [ebp - 4], esi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1717179A; /* 0x17171747: jne 0x1717179a */
L_17171749:
    eax = MEM32(ebx + 0x280); /* 0x17171749: mov eax, dword ptr [ebx + 0x280] */
    PUSH32(esp, 0xCu); /* 0x1717174F: push 0xc */
    edi = 0x17021930u; /* 0x17171751: mov edi, 0x17021930 */
    esi = eax; /* 0x17171756: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x17171758: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x17171759: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM8(esi); _b = MEM8(edi); esi += _df; edi += _df; ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x1717175B: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_17171768; /* 0x1717175D: jne 0x17171768 */
L_1717175F:
    ecx = ebx; /* 0x1717175F: mov ecx, ebx */
    RECOMP_CALL(sub_171704A6); /* 0x17171761: call 0x171704a6 */
    RECOMP_FLAGS_IN();
    goto L_171717BA; /* 0x17171766: jmp 0x171717ba */
L_17171768:
    PUSH32(esp, 8); /* 0x17171768: push 8 */
    edi = 0x17021928u; /* 0x1717176A: mov edi, 0x17021928 */
    esi = eax; /* 0x1717176F: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x17171771: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x17171772: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM8(esi); _b = MEM8(edi); esi += _df; edi += _df; ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x17171774: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_17171781; /* 0x17171776: jne 0x17171781 */
L_17171778:
    ecx = ebx; /* 0x17171778: mov ecx, ebx */
    RECOMP_CALL(sub_171705EA); /* 0x1717177A: call 0x171705ea */
    RECOMP_FLAGS_IN();
    goto L_171717BA; /* 0x1717177F: jmp 0x171717ba */
L_17171781:
    esi = eax; /* 0x17171781: mov esi, eax */
    PUSH32(esp, 4); /* 0x17171783: push 4 */
    edi = 0x17008784u; /* 0x17171785: mov edi, 0x17008784 */
    ecx = POP32_VAL(esp); /* 0x1717178A: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1717178B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM8(esi); _b = MEM8(edi); esi += _df; edi += _df; ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x1717178D: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_1717179A; /* 0x1717178F: jne 0x1717179a */
L_17171791:
    ecx = ebx; /* 0x17171791: mov ecx, ebx */
    RECOMP_CALL(sub_171709D7); /* 0x17171793: call 0x171709d7 */
    RECOMP_FLAGS_IN();
    goto L_171717BA; /* 0x17171798: jmp 0x171717ba */
L_1717179A:
    /* cmp MEM32(ebp + (-0x4)), 0xCu */ /* 0x1717179A: cmp dword ptr [ebp - 4], 0xc */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171717B1; /* 0x1717179E: je 0x171717b1 */
L_171717A0:
    /* cmp MEM32(ebp + (-0x4)), 0xDu */ /* 0x171717A0: cmp dword ptr [ebp - 4], 0xd */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0xDu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171717B1; /* 0x171717A4: je 0x171717b1 */
L_171717A6:
    ecx = MEM32(ebx + 0x26C); /* 0x171717A6: mov ecx, dword ptr [ebx + 0x26c] */
    RECOMP_CALL(sub_17173B81); /* 0x171717AC: call 0x17173b81 */
    RECOMP_FLAGS_IN();
L_171717B1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171717B1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171717B3:
    MEM32(ebx + 0x40) = 1; /* 0x171717B3: mov dword ptr [ebx + 0x40], 1 */
L_171717BA:
    edi = POP32_VAL(esp); /* 0x171717BA: pop edi */
    esi = POP32_VAL(esp); /* 0x171717BB: pop esi */
    ebx = POP32_VAL(esp); /* 0x171717BC: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171717BD: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171717BE: ret  */
    RECOMP_REGS_OUT();
}

void sub_171717C4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171717C4u);

L_171717C4:
    edi = edi; /* 0x171717C4: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171717C6: push ebp */
    ebp = esp; /* 0x171717C7: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x171717C9: push ecx */
    PUSH32(esp, esi); /* 0x171717CA: push esi */
    PUSH32(esp, edi); /* 0x171717CB: push edi */
    edi = MEM32(ebp + 0x8); /* 0x171717CC: mov edi, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(edi)); /* 0x171717CF: push dword ptr [edi] */
    esi = ecx; /* 0x171717D1: mov esi, ecx */
    MEM32(ebp + (-0x4)) = esi; /* 0x171717D3: mov dword ptr [ebp - 4], esi */
    RECOMP_CALL(sub_17170CF5); /* 0x171717D6: call 0x17170cf5 */
    RECOMP_FLAGS_IN();
    esi = esi + eax * 4 + 0x6C; /* 0x171717DB: lea esi, [esi + eax*4 + 0x6c] */
    /* cmp MEM32(esi), 0 */ /* 0x171717DF: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1717186C; /* 0x171717E2: je 0x1717186c */
L_171717E8:
    PUSH32(esp, ebx); /* 0x171717E8: push ebx */
L_171717E9:
    ecx = MEM32(esi); /* 0x171717E9: mov ecx, dword ptr [esi] */
    eax = MEM32(ecx); /* 0x171717EB: mov eax, dword ptr [ecx] */
    edi = MEM32(edi); /* 0x171717ED: mov edi, dword ptr [edi] */
L_171717EF:
    SET_LO8(ebx, MEM8(edi)); /* 0x171717EF: mov bl, byte ptr [edi] */
    SET_LO8(edx, LO8(ebx)); /* 0x171717F1: mov dl, bl */
    /* cmp LO8(ebx), MEM8(eax) */ /* 0x171717F3: cmp bl, byte ptr [eax] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17171811; /* 0x171717F5: jne 0x17171811 */
L_171717F7:
    /* test LO8(edx), LO8(edx) */ /* 0x171717F7: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1717180D; /* 0x171717F9: je 0x1717180d */
L_171717FB:
    SET_LO8(ebx, MEM8(edi + 0x1)); /* 0x171717FB: mov bl, byte ptr [edi + 1] */
    SET_LO8(edx, LO8(ebx)); /* 0x171717FE: mov dl, bl */
    /* cmp LO8(ebx), MEM8(eax + 0x1) */ /* 0x17171800: cmp bl, byte ptr [eax + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(eax + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17171811; /* 0x17171803: jne 0x17171811 */
L_17171805:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x17171805: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x17171806: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17171807: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17171808: inc eax */
    _flag_k = FK_INC;
    /* test LO8(edx), LO8(edx) */ /* 0x17171809: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171717EF; /* 0x1717180B: jne 0x171717ef */
L_1717180D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1717180D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_17171816; /* 0x1717180F: jmp 0x17171816 */
L_17171811:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17171811: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17171813: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_17171816:
    /* test eax, eax */ /* 0x17171816: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    edi = MEM32(ebp + 0x8); /* 0x17171818: mov edi, dword ptr [ebp + 8] */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1717186B; /* 0x1717181B: jl 0x1717186b */
L_1717181D:
    if (TEST_Z(_flag_a, _flag_b)) goto L_17171829; /* 0x1717181D: je 0x17171829 */
L_1717181F:
    esi = ecx + 0xC; /* 0x1717181F: lea esi, [ecx + 0xc] */
    /* cmp MEM32(esi), 0 */ /* 0x17171822: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_171717E9; /* 0x17171825: jne 0x171717e9 */
L_17171827:
    goto L_1717186B; /* 0x17171827: jmp 0x1717186b */
L_17171829:
    ebx = MEM32(ebp + (-0x4)); /* 0x17171829: mov ebx, dword ptr [ebp - 4] */
    PUSH32(esp, edi); /* 0x1717182C: push edi */
    PUSH32(esp, MEM32(esi)); /* 0x1717182D: push dword ptr [esi] */
    ecx = ebx; /* 0x1717182F: mov ecx, ebx */
    RECOMP_CALL(sub_17170D31); /* 0x17171831: call 0x17170d31 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17171836: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17171859; /* 0x17171838: jne 0x17171859 */
L_1717183A:
    PUSH32(esp, MEM32(edi)); /* 0x1717183A: push dword ptr [edi] */
    eax = ebx + 0x278; /* 0x1717183C: lea eax, [ebx + 0x278] */
    PUSH32(esp, 0x1702193Cu); /* 0x17171842: push 0x1702193c */
    PUSH32(esp, 0x5EFu); /* 0x17171847: push 0x5ef */
    PUSH32(esp, eax); /* 0x1717184C: push eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x18u; /* 0x1717184D: add ebx, 0x18 */
    _flag_k = FK_ADD;
    PUSH32(esp, ebx); /* 0x17171850: push ebx */
    RECOMP_CALL(sub_17174162); /* 0x17171851: call 0x17174162 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x17171856: add esp, 0x14 */
    _flag_k = FK_ADD;
L_17171859:
    ecx = MEM32(esi); /* 0x17171859: mov ecx, dword ptr [esi] */
    eax = MEM32(ecx + 0xC); /* 0x1717185B: mov eax, dword ptr [ecx + 0xc] */
    MEM32(esi) = eax; /* 0x1717185E: mov dword ptr [esi], eax */
    _flag_a = (uint32_t)(MEM32(ecx + 0xC)); _flag_b = (uint32_t)(0);
    MEM32(ecx + 0xC) = MEM32(ecx + 0xC) & 0; /* 0x17171860: and dword ptr [ecx + 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 1); /* 0x17171864: push 1 */
    RECOMP_CALL(sub_17171197); /* 0x17171866: call 0x17171197 */
    RECOMP_FLAGS_IN();
L_1717186B:
    ebx = POP32_VAL(esp); /* 0x1717186B: pop ebx */
L_1717186C:
    eax = MEM32(esi); /* 0x1717186C: mov eax, dword ptr [esi] */
    MEM32(edi + 0xC) = eax; /* 0x1717186E: mov dword ptr [edi + 0xc], eax */
    MEM32(esi) = edi; /* 0x17171871: mov dword ptr [esi], edi */
    edi = POP32_VAL(esp); /* 0x17171873: pop edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17171874: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x17171876: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17171877: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x17171878: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_17171880(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17171880u);

L_17171880:
    edi = edi; /* 0x17171880: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17171882: push ebp */
    ebp = esp; /* 0x17171883: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x17171885: push ecx */
    PUSH32(esp, ebx); /* 0x17171886: push ebx */
    PUSH32(esp, esi); /* 0x17171887: push esi */
    PUSH32(esp, edi); /* 0x17171888: push edi */
    edi = MEM32(ebp + 0x8); /* 0x17171889: mov edi, dword ptr [ebp + 8] */
    ebx = ecx; /* 0x1717188C: mov ebx, ecx */
    PUSH32(esp, 9); /* 0x1717188E: push 9 */
    esi = 0x1702199Cu; /* 0x17171890: mov esi, 0x1702199c */
    ecx = POP32_VAL(esp); /* 0x17171895: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17171896: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM8(esi); _b = MEM8(edi); esi += _df; edi += _df; ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x17171898: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_171718A4; /* 0x1717189A: jne 0x171718a4 */
L_1717189C:
    eax = MEM32(ebx + 0x28C); /* 0x1717189C: mov eax, dword ptr [ebx + 0x28c] */
    goto L_17171920; /* 0x171718A2: jmp 0x17171920 */
L_171718A4:
    eax = ebp + (-0x4); /* 0x171718A4: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x171718A7: push eax */
    eax = ebp + 0x8; /* 0x171718A8: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x171718AB: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171718AC: push dword ptr [ebp + 8] */
    ecx = ebx; /* 0x171718AF: mov ecx, ebx */
    RECOMP_CALL(sub_17171040); /* 0x171718B1: call 0x17171040 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171718B6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1717191E; /* 0x171718B8: je 0x1717191e */
L_171718BA:
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x171718BA: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171718E2; /* 0x171718BE: je 0x171718e2 */
L_171718C0:
    PUSH32(esp, 0x17021958u); /* 0x171718C0: push 0x17021958 */
    eax = ebx + 0x278; /* 0x171718C5: lea eax, [ebx + 0x278] */
    PUSH32(esp, 0x5EDu); /* 0x171718CB: push 0x5ed */
    PUSH32(esp, eax); /* 0x171718D0: push eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x18u; /* 0x171718D1: add ebx, 0x18 */
    _flag_k = FK_ADD;
    PUSH32(esp, ebx); /* 0x171718D4: push ebx */
    RECOMP_CALL(sub_17174059); /* 0x171718D5: call 0x17174059 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171718DA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x171718DC: add esp, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171718DF: inc eax */
    _flag_k = FK_INC;
    goto L_17171920; /* 0x171718E0: jmp 0x17171920 */
L_171718E2:
    eax = MEM32(ebp + (-0x4)); /* 0x171718E2: mov eax, dword ptr [ebp - 4] */
    /* test eax, eax */ /* 0x171718E5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17171901; /* 0x171718E7: je 0x17171901 */
L_171718E9:
    /* cmp MEM32(eax + 0xC), 0 */ /* 0x171718E9: cmp dword ptr [eax + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17171901; /* 0x171718ED: jne 0x17171901 */
L_171718EF:
    ecx = MEM32(eax + 0x10); /* 0x171718EF: mov ecx, dword ptr [eax + 0x10] */
    /* cmp ecx, 2 */ /* 0x171718F2: cmp ecx, 2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_17171901; /* 0x171718F5: jl 0x17171901 */
L_171718F7:
    /* cmp ecx, 4 */ /* 0x171718F7: cmp ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_17171901; /* 0x171718FA: jg 0x17171901 */
L_171718FC:
    eax = MEM32(eax + 0x18); /* 0x171718FC: mov eax, dword ptr [eax + 0x18] */
    goto L_17171920; /* 0x171718FF: jmp 0x17171920 */
L_17171901:
    PUSH32(esp, 0x170218ACu); /* 0x17171901: push 0x170218ac */
    eax = ebx + 0x278; /* 0x17171906: lea eax, [ebx + 0x278] */
    PUSH32(esp, 0x5EEu); /* 0x1717190C: push 0x5ee */
    PUSH32(esp, eax); /* 0x17171911: push eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x18u; /* 0x17171912: add ebx, 0x18 */
    _flag_k = FK_ADD;
    PUSH32(esp, ebx); /* 0x17171915: push ebx */
    RECOMP_CALL(sub_17174059); /* 0x17171916: call 0x17174059 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1717191B: add esp, 0x10 */
    _flag_k = FK_ADD;
L_1717191E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1717191E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_17171920:
    edi = POP32_VAL(esp); /* 0x17171920: pop edi */
    esi = POP32_VAL(esp); /* 0x17171921: pop esi */
    ebx = POP32_VAL(esp); /* 0x17171922: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17171923: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x17171924: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1717192C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1717192Cu);

L_1717192C:
    edi = edi; /* 0x1717192C: mov edi, edi */
    PUSH32(esp, ebx); /* 0x1717192E: push ebx */
    PUSH32(esp, esi); /* 0x1717192F: push esi */
    PUSH32(esp, edi); /* 0x17171930: push edi */
    PUSH32(esp, 0x00010000u); /* 0x17171931: push 0x10000 */
    PUSH32(esp, 0x00100000u); /* 0x17171936: push 0x100000 */
    ebx = ecx; /* 0x1717193B: mov ebx, ecx */
    RECOMP_CALL(sub_1721BDEB); /* 0x1717193D: call 0x1721bdeb */
    RECOMP_FLAGS_IN();
    ecx = ebx + 0x18; /* 0x17171942: lea ecx, [ebx + 0x18] */
    RECOMP_CALL(sub_1717382D); /* 0x17171945: call 0x1717382d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1717194A: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebx; /* 0x1717194C: mov ecx, ebx */
    MEM32(ebx + 0x2A0) = esi; /* 0x1717194E: mov dword ptr [ebx + 0x2a0], esi */
    RECOMP_CALL(sub_171711BD); /* 0x17171954: call 0x171711bd */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x7Fu); /* 0x17171959: push 0x7f */
    ecx = POP32_VAL(esp); /* 0x1717195B: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1717195C: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1717195E: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1717195F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebx + 0x38) = esi; /* 0x17171961: mov dword ptr [ebx + 0x38], esi */
    MEM32(ebx + 0x3C) = esi; /* 0x17171964: mov dword ptr [ebx + 0x3c], esi */
    MEM32(ebx + 0x40) = edx; /* 0x17171967: mov dword ptr [ebx + 0x40], edx */
    MEM32(ebx + 0x44) = esi; /* 0x1717196A: mov dword ptr [ebx + 0x44], esi */
    MEM32(ebx + 0x48) = esi; /* 0x1717196D: mov dword ptr [ebx + 0x48], esi */
    MEM32(ebx + 0x4C) = edx; /* 0x17171970: mov dword ptr [ebx + 0x4c], edx */
    MEM32(ebx + 0x50) = edx; /* 0x17171973: mov dword ptr [ebx + 0x50], edx */
    MEM32(ebx + 0x54) = edx; /* 0x17171976: mov dword ptr [ebx + 0x54], edx */
    MEM32(ebx + 0x58) = esi; /* 0x17171979: mov dword ptr [ebx + 0x58], esi */
    MEM32(ebx + 0x5C) = esi; /* 0x1717197C: mov dword ptr [ebx + 0x5c], esi */
    MEM32(ebx + 0x60) = esi; /* 0x1717197F: mov dword ptr [ebx + 0x60], esi */
    MEM32(ebx + 0x64) = esi; /* 0x17171982: mov dword ptr [ebx + 0x64], esi */
    MEM32(ebx + 0x68) = esi; /* 0x17171985: mov dword ptr [ebx + 0x68], esi */
    MEM32(ebx + 0x268) = esi; /* 0x17171988: mov dword ptr [ebx + 0x268], esi */
    MEM32(ebx + 0x26C) = esi; /* 0x1717198E: mov dword ptr [ebx + 0x26c], esi */
    PUSH32(esp, 8); /* 0x17171994: push 8 */
    edi = ebx + 0x6C; /* 0x17171996: lea edi, [ebx + 0x6c] */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x17171999: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    ecx = POP32_VAL(esp); /* 0x1717199B: pop ecx */
    edi = ebx + 0x278; /* 0x1717199C: lea edi, [ebx + 0x278] */
    PUSH32(esp, esi); /* 0x171719A2: push esi */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x171719A3: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    PUSH32(esp, 4); /* 0x171719A5: push 4 */
    MEM32(ebx + 0x298) = edx; /* 0x171719A7: mov dword ptr [ebx + 0x298], edx */
    RECOMP_CALL(sub_1721B23C); /* 0x171719AD: call 0x1721b23c */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x171719B2: push eax */
    RECOMP_CALL(sub_1721B230); /* 0x171719B3: call 0x1721b230 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x171719B8: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp eax, esi */ /* 0x171719BB: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebx + 0x29C) = eax; /* 0x171719BD: mov dword ptr [ebx + 0x29c], eax */
    edx = 0x17005F4Cu; /* 0x171719C3: mov edx, 0x17005f4c */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171719D7; /* 0x171719C8: je 0x171719d7 */
L_171719CA:
    esi = eax; /* 0x171719CA: mov esi, eax */
    PUSH32(esp, 2); /* 0x171719CC: push 2 */
    edi = edx; /* 0x171719CE: mov edi, edx */
    ecx = POP32_VAL(esp); /* 0x171719D0: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171719D1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM8(esi); _b = MEM8(edi); esi += _df; edi += _df; ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x171719D3: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_171719E1; /* 0x171719D5: je 0x171719e1 */
L_171719D7:
    PUSH32(esp, edx); /* 0x171719D7: push edx */
    PUSH32(esp, 4); /* 0x171719D8: push 4 */
    RECOMP_CALL(sub_1721B23C); /* 0x171719DA: call 0x1721b23c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171719DF: pop ecx */
    ecx = POP32_VAL(esp); /* 0x171719E0: pop ecx */
L_171719E1:
    RECOMP_CALL(sub_1702BC1E); /* 0x171719E1: call 0x1702bc1e */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x171719E6: pop edi */
    esi = POP32_VAL(esp); /* 0x171719E7: pop esi */
    eax = ebx; /* 0x171719E8: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x171719EA: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171719EB: ret  */
    RECOMP_REGS_OUT();
}

void sub_171719F1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171719F1u);

L_171719F1:
    edi = edi; /* 0x171719F1: mov edi, edi */
    PUSH32(esp, ebx); /* 0x171719F3: push ebx */
    ebx = ecx; /* 0x171719F4: mov ebx, ecx */
    ecx = MEM32(ebx + 0x3C); /* 0x171719F6: mov ecx, dword ptr [ebx + 0x3c] */
    /* test ecx, ecx */ /* 0x171719F9: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17171A04; /* 0x171719FB: je 0x17171a04 */
L_171719FD:
    PUSH32(esp, 1); /* 0x171719FD: push 1 */
    RECOMP_CALL(sub_171700C5); /* 0x171719FF: call 0x171700c5 */
    RECOMP_FLAGS_IN();
L_17171A04:
    ecx = MEM32(ebx + 0x68); /* 0x17171A04: mov ecx, dword ptr [ebx + 0x68] */
    /* test ecx, ecx */ /* 0x17171A07: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17171A12; /* 0x17171A09: je 0x17171a12 */
L_17171A0B:
    PUSH32(esp, 1); /* 0x17171A0B: push 1 */
    RECOMP_CALL(sub_17170080); /* 0x17171A0D: call 0x17170080 */
    RECOMP_FLAGS_IN();
L_17171A12:
    ecx = MEM32(ebx + 0x268); /* 0x17171A12: mov ecx, dword ptr [ebx + 0x268] */
    /* test ecx, ecx */ /* 0x17171A18: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17171A23; /* 0x17171A1A: je 0x17171a23 */
L_17171A1C:
    PUSH32(esp, 1); /* 0x17171A1C: push 1 */
    RECOMP_CALL(sub_1716FD35); /* 0x17171A1E: call 0x1716fd35 */
    RECOMP_FLAGS_IN();
L_17171A23:
    PUSH32(esp, esi); /* 0x17171A23: push esi */
    PUSH32(esp, edi); /* 0x17171A24: push edi */
    PUSH32(esp, 0x7Fu); /* 0x17171A25: push 0x7f */
    esi = ebx + 0x6C; /* 0x17171A27: lea esi, [ebx + 0x6c] */
    edi = POP32_VAL(esp); /* 0x17171A2A: pop edi */
L_17171A2B:
    ecx = MEM32(esi); /* 0x17171A2B: mov ecx, dword ptr [esi] */
    /* test ecx, ecx */ /* 0x17171A2D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17171A38; /* 0x17171A2F: je 0x17171a38 */
L_17171A31:
    PUSH32(esp, 1); /* 0x17171A31: push 1 */
    RECOMP_CALL(sub_17171197); /* 0x17171A33: call 0x17171197 */
    RECOMP_FLAGS_IN();
L_17171A38:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x17171A38: add esi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x17171A3B: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_17171A2B; /* 0x17171A3C: jne 0x17171a2b */
L_17171A3E:
    eax = MEM32(ebx + 0x29C); /* 0x17171A3E: mov eax, dword ptr [ebx + 0x29c] */
    /* test eax, eax */ /* 0x17171A44: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17171A62; /* 0x17171A46: je 0x17171a62 */
L_17171A48:
    PUSH32(esp, 2); /* 0x17171A48: push 2 */
    edi = 0x17005F4Cu; /* 0x17171A4A: mov edi, 0x17005f4c */
    esi = eax; /* 0x17171A4F: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x17171A51: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x17171A52: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM8(esi); _b = MEM8(edi); esi += _df; edi += _df; ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x17171A54: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_17171A62; /* 0x17171A56: je 0x17171a62 */
L_17171A58:
    PUSH32(esp, eax); /* 0x17171A58: push eax */
    PUSH32(esp, 4); /* 0x17171A59: push 4 */
    RECOMP_CALL(sub_1721B23C); /* 0x17171A5B: call 0x1721b23c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x17171A60: pop ecx */
    ecx = POP32_VAL(esp); /* 0x17171A61: pop ecx */
L_17171A62:
    eax = MEM32(ebx + 0x29C); /* 0x17171A62: mov eax, dword ptr [ebx + 0x29c] */
    /* test eax, eax */ /* 0x17171A68: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x17171A6A: pop edi */
    esi = POP32_VAL(esp); /* 0x17171A6B: pop esi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17171A75; /* 0x17171A6C: je 0x17171a75 */
L_17171A6E:
    PUSH32(esp, eax); /* 0x17171A6E: push eax */
    RECOMP_CALL(sub_1721B224); /* 0x17171A6F: call 0x1721b224 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x17171A74: pop ecx */
L_17171A75:
    /* cmp MEM32(ebx + 0x2A0), 0 */ /* 0x17171A75: cmp dword ptr [ebx + 0x2a0], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x2A0)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17171A85; /* 0x17171A7C: je 0x17171a85 */
L_17171A7E:
    ecx = ebx; /* 0x17171A7E: mov ecx, ebx */
    RECOMP_CALL(sub_171711E9); /* 0x17171A80: call 0x171711e9 */
    RECOMP_FLAGS_IN();
L_17171A85:
    ecx = ebx + 0x18; /* 0x17171A85: lea ecx, [ebx + 0x18] */
    RECOMP_CALL(sub_17173852); /* 0x17171A88: call 0x17173852 */
    RECOMP_FLAGS_IN();
    ecx = ebx; /* 0x17171A8D: mov ecx, ebx */
    ebx = POP32_VAL(esp); /* 0x17171A8F: pop ebx */
    goto L_1721BE48; /* 0x17171A90: jmp 0x1721be48 */
L_1721BE48:
    edi = edi; /* 0x1721BE48: mov edi, edi */
    PUSH32(esp, esi); /* 0x1721BE4A: push esi */
    esi = ecx; /* 0x1721BE4B: mov esi, ecx */
    goto L_1721BE63; /* 0x1721BE4D: jmp 0x1721be63 */
L_1721BE4F:
    eax = MEM32(esi); /* 0x1721BE4F: mov eax, dword ptr [esi] */
    ecx = MEM32(eax); /* 0x1721BE51: mov ecx, dword ptr [eax] */
    PUSH32(esp, 0x8000u); /* 0x1721BE53: push 0x8000 */
    PUSH32(esp, 0); /* 0x1721BE58: push 0 */
    PUSH32(esp, eax); /* 0x1721BE5A: push eax */
    MEM32(esi) = ecx; /* 0x1721BE5B: mov dword ptr [esi], ecx */
    RECOMP_ICALL(MEM32(0x17001114)); /* 0x1721BE5D: call dword ptr [0x17001114] */
    RECOMP_FLAGS_IN();
L_1721BE63:
    /* cmp MEM32(esi), 0 */ /* 0x1721BE63: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1721BE4F; /* 0x1721BE66: jne 0x1721be4f */
L_1721BE68:
    esi = POP32_VAL(esp); /* 0x1721BE68: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1721BE69: ret  */
    RECOMP_REGS_OUT();
}

void sub_17171A9A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17171A9Au);

L_17171A9A:
    edi = edi; /* 0x17171A9A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17171A9C: push ebp */
    ebp = esp; /* 0x17171A9D: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x104u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x104u; /* 0x17171A9F: sub esp, 0x104 */
    _flag_k = FK_CMP;
    eax = MEM32(0x1723C894); /* 0x17171AA5: mov eax, dword ptr [0x1723c894] */
    PUSH32(esp, ebx); /* 0x17171AAA: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x17171AAB: mov ebx, dword ptr [ebp + 8] */
    /* cmp MEM32(ebx + 0x50), 0 */ /* 0x17171AAE: cmp dword ptr [ebx + 0x50], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x50)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = eax; /* 0x17171AB2: mov dword ptr [ebp - 4], eax */
    MEM32(ebx + 0x44) = 1; /* 0x17171AB5: mov dword ptr [ebx + 0x44], 1 */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17171B4C; /* 0x17171ABC: je 0x17171b4c */
L_17171AC2:
    PUSH32(esp, esi); /* 0x17171AC2: push esi */
    esi = MEM32(ebp + 0xC); /* 0x17171AC3: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x17171AC6: push edi */
    PUSH32(esp, 0xDu); /* 0x17171AC7: push 0xd */
    ecx = POP32_VAL(esp); /* 0x17171AC9: pop ecx */
    edi = 0x1700B2F8u; /* 0x17171ACA: mov edi, 0x1700b2f8 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17171ACF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM8(esi); _b = MEM8(edi); esi += _df; edi += _df; ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x17171AD1: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
    edi = POP32_VAL(esp); /* 0x17171AD3: pop edi */
    esi = POP32_VAL(esp); /* 0x17171AD4: pop esi */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_17171B0F; /* 0x17171AD5: jne 0x17171b0f */
L_17171AD7:
    /* cmp MEM32(ebx + 0x4C), eax */ /* 0x17171AD7: cmp dword ptr [ebx + 0x4c], eax */
    _flag_a = (uint32_t)(MEM32(ebx + 0x4C)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17171AF9; /* 0x17171ADA: je 0x17171af9 */
L_17171ADC:
    eax = ebx + 0x278; /* 0x17171ADC: lea eax, [ebx + 0x278] */
    /* cmp MEM32(eax), 9 */ /* 0x17171AE2: cmp dword ptr [eax], 9 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17171AF9; /* 0x17171AE5: jne 0x17171af9 */
L_17171AE7:
    PUSH32(esp, MEM32(ebx + 0x280)); /* 0x17171AE7: push dword ptr [ebx + 0x280] */
    PUSH32(esp, 0x170219A8u); /* 0x17171AED: push 0x170219a8 */
    PUSH32(esp, 0x5E0u); /* 0x17171AF2: push 0x5e0 */
    goto L_17171B3F; /* 0x17171AF7: jmp 0x17171b3f */
L_17171AF9:
    eax = ebx + 0x278; /* 0x17171AF9: lea eax, [ebx + 0x278] */
    PUSH32(esp, eax); /* 0x17171AFF: push eax */
    PUSH32(esp, 0x5DCu); /* 0x17171B00: push 0x5dc */
    ecx = ebx + 0x18; /* 0x17171B05: lea ecx, [ebx + 0x18] */
    RECOMP_CALL(sub_17174332); /* 0x17171B08: call 0x17174332 */
    RECOMP_FLAGS_IN();
    goto L_17171B4C; /* 0x17171B0D: jmp 0x17171b4c */
L_17171B0F:
    eax = ebp + 0x10; /* 0x17171B0F: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x17171B12: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x17171B13: push dword ptr [ebp + 0xc] */
    eax = ebp + (-0x104); /* 0x17171B16: lea eax, [ebp - 0x104] */
    PUSH32(esp, 0x100u); /* 0x17171B1C: push 0x100 */
    PUSH32(esp, eax); /* 0x17171B21: push eax */
    RECOMP_CALL(sub_1704BE39); /* 0x17171B22: call 0x1704be39 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x104); /* 0x17171B27: lea eax, [ebp - 0x104] */
    PUSH32(esp, eax); /* 0x17171B2D: push eax */
    PUSH32(esp, 0x17008008u); /* 0x17171B2E: push 0x17008008 */
    MEM8(ebp + (-0x5)) = (uint8_t)(0); /* 0x17171B33: mov byte ptr [ebp - 5], 0 */
    PUSH32(esp, 0); /* 0x17171B37: push 0 */
    eax = ebx + 0x278; /* 0x17171B39: lea eax, [ebx + 0x278] */
L_17171B3F:
    PUSH32(esp, eax); /* 0x17171B3F: push eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x18u; /* 0x17171B40: add ebx, 0x18 */
    _flag_k = FK_ADD;
    PUSH32(esp, ebx); /* 0x17171B43: push ebx */
    RECOMP_CALL(sub_17174059); /* 0x17171B44: call 0x17174059 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x17171B49: add esp, 0x14 */
    _flag_k = FK_ADD;
L_17171B4C:
    ecx = MEM32(ebp + (-0x4)); /* 0x17171B4C: mov ecx, dword ptr [ebp - 4] */
    ebx = POP32_VAL(esp); /* 0x17171B4F: pop ebx */
    RECOMP_CALL(sub_1721B76C); /* 0x17171B50: call 0x1721b76c */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17171B55: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x17171B56: ret  */
    RECOMP_REGS_OUT();
}

void sub_17171B5C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17171B5Cu);

L_17171B5C:
    edi = edi; /* 0x17171B5C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17171B5E: push ebp */
    ebp = esp; /* 0x17171B5F: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x17171B61: push ecx */
    PUSH32(esp, ebx); /* 0x17171B62: push ebx */
    PUSH32(esp, esi); /* 0x17171B63: push esi */
    PUSH32(esp, edi); /* 0x17171B64: push edi */
    PUSH32(esp, 0x14u); /* 0x17171B65: push 0x14 */
    ebx = ecx; /* 0x17171B67: mov ebx, ecx */
    RECOMP_CALL(sub_1721B01C); /* 0x17171B69: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x17171B6E: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, edi */ /* 0x17171B70: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x17171B72: pop ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17171B86; /* 0x17171B73: je 0x17171b86 */
L_17171B75:
    PUSH32(esp, edi); /* 0x17171B75: push edi */
    PUSH32(esp, edi); /* 0x17171B76: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x17171B77: push dword ptr [ebp + 8] */
    ecx = eax; /* 0x17171B7A: mov ecx, eax */
    RECOMP_CALL(sub_1716FC0C); /* 0x17171B7C: call 0x1716fc0c */
    RECOMP_FLAGS_IN();
    MEM32(ebp + 0x8) = eax; /* 0x17171B81: mov dword ptr [ebp + 8], eax */
    goto L_17171B89; /* 0x17171B84: jmp 0x17171b89 */
L_17171B86:
    MEM32(ebp + 0x8) = edi; /* 0x17171B86: mov dword ptr [ebp + 8], edi */
L_17171B89:
    edx = MEM32(ebp + 0x8); /* 0x17171B89: mov edx, dword ptr [ebp + 8] */
    /* cmp edx, edi */ /* 0x17171B8C: cmp edx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17171E08; /* 0x17171B8E: je 0x17171e08 */
L_17171B94:
    /* cmp MEM32(ebp + 0xC), edi */ /* 0x17171B94: cmp dword ptr [ebp + 0xc], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17171D29; /* 0x17171B97: je 0x17171d29 */
L_17171B9D:
    ecx = MEM32(ebx + 0x26C); /* 0x17171B9D: mov ecx, dword ptr [ebx + 0x26c] */
    eax = MEM32(ecx); /* 0x17171BA3: mov eax, dword ptr [ecx] */
    /* cmp eax, MEM32(ecx + 0x4) */ /* 0x17171BA5: cmp eax, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_17171D29; /* 0x17171BA8: jae 0x17171d29 */
L_17171BAE:
    /* cmp MEM8(eax), 0x28u */ /* 0x17171BAE: cmp byte ptr [eax], 0x28 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x28u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17171D29; /* 0x17171BB1: jne 0x17171d29 */
L_17171BB7:
    eax = edx + 0x4; /* 0x17171BB7: lea eax, [edx + 4] */
    MEM32(ebp + 0xC) = eax; /* 0x17171BBA: mov dword ptr [ebp + 0xc], eax */
    eax = ebx + 0x278; /* 0x17171BBD: lea eax, [ebx + 0x278] */
    PUSH32(esp, eax); /* 0x17171BC3: push eax */
    PUSH32(esp, MEM32(ebx + 0x298)); /* 0x17171BC4: push dword ptr [ebx + 0x298] */
    RECOMP_CALL(sub_17174BE6); /* 0x17171BCA: call 0x17174be6 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x17171BCF: mov esi, eax */
    /* cmp esi, edi */ /* 0x17171BD1: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_17171E2C; /* 0x17171BD3: jl 0x17171e2c */
L_17171BD9:
    ecx = MEM32(ebx + 0x26C); /* 0x17171BD9: mov ecx, dword ptr [ebx + 0x26c] */
    edi = ebx + 0x278; /* 0x17171BDF: lea edi, [ebx + 0x278] */
    PUSH32(esp, edi); /* 0x17171BE5: push edi */
    PUSH32(esp, MEM32(ebx + 0x298)); /* 0x17171BE6: push dword ptr [ebx + 0x298] */
    RECOMP_CALL(sub_17174BE6); /* 0x17171BEC: call 0x17174be6 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x17171BF1: mov esi, eax */
    /* test esi, esi */ /* 0x17171BF3: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17171E2C; /* 0x17171BF5: jl 0x17171e2c */
L_17171BFB:
    /* cmp MEM32(edi), 9 */ /* 0x17171BFB: cmp dword ptr [edi], 9 */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17171CF1; /* 0x17171BFE: jne 0x17171cf1 */
L_17171C04:
    eax = MEM32(ebp + 0x8); /* 0x17171C04: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x17171C07: add eax, 4 */
    _flag_k = FK_ADD;
    eax = MEM32(eax); /* 0x17171C0A: mov eax, dword ptr [eax] */
    goto L_17171C45; /* 0x17171C0C: jmp 0x17171c45 */
L_17171C0E:
    esi = MEM32(eax + 0x18); /* 0x17171C0E: mov esi, dword ptr [eax + 0x18] */
    edi = MEM32(ebx + 0x280); /* 0x17171C11: mov edi, dword ptr [ebx + 0x280] */
L_17171C17:
    SET_LO8(edx, MEM8(edi)); /* 0x17171C17: mov dl, byte ptr [edi] */
    SET_LO8(ecx, LO8(edx)); /* 0x17171C19: mov cl, dl */
    /* cmp LO8(edx), MEM8(esi) */ /* 0x17171C1B: cmp dl, byte ptr [esi] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(esi)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17171C39; /* 0x17171C1D: jne 0x17171c39 */
L_17171C1F:
    /* test LO8(ecx), LO8(ecx) */ /* 0x17171C1F: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_17171C35; /* 0x17171C21: je 0x17171c35 */
L_17171C23:
    SET_LO8(edx, MEM8(edi + 0x1)); /* 0x17171C23: mov dl, byte ptr [edi + 1] */
    SET_LO8(ecx, LO8(edx)); /* 0x17171C26: mov cl, dl */
    /* cmp LO8(edx), MEM8(esi + 0x1) */ /* 0x17171C28: cmp dl, byte ptr [esi + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(esi + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17171C39; /* 0x17171C2B: jne 0x17171c39 */
L_17171C2D:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x17171C2D: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x17171C2E: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x17171C2F: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x17171C30: inc esi */
    _flag_k = FK_INC;
    /* test LO8(ecx), LO8(ecx) */ /* 0x17171C31: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17171C17; /* 0x17171C33: jne 0x17171c17 */
L_17171C35:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x17171C35: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_17171C3E; /* 0x17171C37: jmp 0x17171c3e */
L_17171C39:
    { uint32_t _sa = ecx, _sb = ecx, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17171C39: sbb ecx, ecx */
      ecx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = ecx, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17171C3B: sbb ecx, -1 */
      ecx = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_17171C3E:
    /* test ecx, ecx */ /* 0x17171C3E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17171C4B; /* 0x17171C40: je 0x17171c4b */
L_17171C42:
    eax = MEM32(eax + 0xC); /* 0x17171C42: mov eax, dword ptr [eax + 0xc] */
L_17171C45:
    /* test eax, eax */ /* 0x17171C45: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17171C0E; /* 0x17171C47: jne 0x17171c0e */
L_17171C49:
    goto L_17171C6E; /* 0x17171C49: jmp 0x17171c6e */
L_17171C4B:
    PUSH32(esp, MEM32(ebx + 0x280)); /* 0x17171C4B: push dword ptr [ebx + 0x280] */
    eax = ebx + 0x278; /* 0x17171C51: lea eax, [ebx + 0x278] */
    PUSH32(esp, 0x170219CCu); /* 0x17171C57: push 0x170219cc */
    PUSH32(esp, 0x5E7u); /* 0x17171C5C: push 0x5e7 */
    PUSH32(esp, eax); /* 0x17171C61: push eax */
    eax = ebx + 0x18; /* 0x17171C62: lea eax, [ebx + 0x18] */
    PUSH32(esp, eax); /* 0x17171C65: push eax */
    RECOMP_CALL(sub_17174059); /* 0x17171C66: call 0x17174059 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x17171C6B: add esp, 0x14 */
    _flag_k = FK_ADD;
L_17171C6E:
    PUSH32(esp, 0x30u); /* 0x17171C6E: push 0x30 */
    RECOMP_CALL(sub_170E2944); /* 0x17171C70: call 0x170e2944 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17171C75: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17171C89; /* 0x17171C77: je 0x17171c89 */
L_17171C79:
    edx = ebx + 0x278; /* 0x17171C79: lea edx, [ebx + 0x278] */
    PUSH32(esp, edx); /* 0x17171C7F: push edx */
    ecx = eax; /* 0x17171C80: mov ecx, eax */
    RECOMP_CALL(sub_1712937F); /* 0x17171C82: call 0x1712937f */
    RECOMP_FLAGS_IN();
    goto L_17171C8B; /* 0x17171C87: jmp 0x17171c8b */
L_17171C89:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17171C89: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_17171C8B:
    /* test eax, eax */ /* 0x17171C8B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0xC); /* 0x17171C8D: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(ecx) = eax; /* 0x17171C90: mov dword ptr [ecx], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17171E08; /* 0x17171C92: je 0x17171e08 */
L_17171C98:
    ecx = MEM32(ebx + 0x26C); /* 0x17171C98: mov ecx, dword ptr [ebx + 0x26c] */
    edi = ebx + 0x278; /* 0x17171C9E: lea edi, [ebx + 0x278] */
    PUSH32(esp, edi); /* 0x17171CA4: push edi */
    PUSH32(esp, MEM32(ebx + 0x298)); /* 0x17171CA5: push dword ptr [ebx + 0x298] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x17171CAB: add eax, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + 0xC) = eax; /* 0x17171CAE: mov dword ptr [ebp + 0xc], eax */
    RECOMP_CALL(sub_17174BE6); /* 0x17171CB1: call 0x17174be6 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x17171CB6: mov esi, eax */
    /* test esi, esi */ /* 0x17171CB8: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17171E2C; /* 0x17171CBA: jl 0x17171e2c */
L_17171CC0:
    /* cmp MEM32(edi), 1 */ /* 0x17171CC0: cmp dword ptr [edi], 1 */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17171CF1; /* 0x17171CC3: jne 0x17171cf1 */
L_17171CC5:
    PUSH32(esp, 2); /* 0x17171CC5: push 2 */
    edi = ebx + 0x280; /* 0x17171CC7: lea edi, [ebx + 0x280] */
    esi = 0x17008270u; /* 0x17171CCD: mov esi, 0x17008270 */
    ecx = POP32_VAL(esp); /* 0x17171CD2: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17171CD3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM8(esi); _b = MEM8(edi); esi += _df; edi += _df; ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x17171CD5: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
    RECOMP_BACKEDGE();
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_17171BD9; /* 0x17171CD7: je 0x17171bd9 */
L_17171CDD:
    PUSH32(esp, 2); /* 0x17171CDD: push 2 */
    edi = ebx + 0x280; /* 0x17171CDF: lea edi, [ebx + 0x280] */
    esi = 0x1700825Cu; /* 0x17171CE5: mov esi, 0x1700825c */
    ecx = POP32_VAL(esp); /* 0x17171CEA: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17171CEB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM8(esi); _b = MEM8(edi); esi += _df; edi += _df; ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x17171CED: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_17171D29; /* 0x17171CEF: je 0x17171d29 */
L_17171CF1:
    eax = ebx + 0x278; /* 0x17171CF1: lea eax, [ebx + 0x278] */
    ecx = MEM32(eax); /* 0x17171CF7: mov ecx, dword ptr [eax] */
    /* cmp ecx, 0xCu */ /* 0x17171CF9: cmp ecx, 0xc */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17171D03; /* 0x17171CFC: je 0x17171d03 */
L_17171CFE:
    /* cmp ecx, 0xDu */ /* 0x17171CFE: cmp ecx, 0xd */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xDu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17171D0A; /* 0x17171D01: jne 0x17171d0a */
L_17171D03:
    MEM32(ebx + 0x40) = 1; /* 0x17171D03: mov dword ptr [ebx + 0x40], 1 */
L_17171D0A:
    PUSH32(esp, eax); /* 0x17171D0A: push eax */
    PUSH32(esp, 0x5DCu); /* 0x17171D0B: push 0x5dc */
    ecx = ebx + 0x18; /* 0x17171D10: lea ecx, [ebx + 0x18] */
    RECOMP_CALL(sub_17174332); /* 0x17171D13: call 0x17174332 */
    RECOMP_FLAGS_IN();
    MEM32(ebx + 0x44) = 1; /* 0x17171D18: mov dword ptr [ebx + 0x44], 1 */
    esi = 0x80004005u; /* 0x17171D1F: mov esi, 0x80004005 */
    goto L_17171E2C; /* 0x17171D24: jmp 0x17171e2c */
L_17171D29:
    eax = MEM32(ebp + 0x8); /* 0x17171D29: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x17171D2C: add eax, 8 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x17171D2F: mov dword ptr [ebp - 4], eax */
L_17171D32:
    eax = MEM32(ebx + 0x64); /* 0x17171D32: mov eax, dword ptr [ebx + 0x64] */
    /* test eax, eax */ /* 0x17171D35: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17171D6B; /* 0x17171D37: je 0x17171d6b */
L_17171D39:
    esi = eax + 0x10; /* 0x17171D39: lea esi, [eax + 0x10] */
    PUSH32(esp, 8); /* 0x17171D3C: push 8 */
    edi = ebx + 0x278; /* 0x17171D3E: lea edi, [ebx + 0x278] */
    ecx = POP32_VAL(esp); /* 0x17171D44: pop ecx */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x17171D45: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = MEM32(eax + 0xC); /* 0x17171D47: mov ecx, dword ptr [eax + 0xc] */
    MEM32(ebx + 0x64) = ecx; /* 0x17171D4A: mov dword ptr [ebx + 0x64], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0xC)); _flag_b = (uint32_t)(0);
    MEM32(eax + 0xC) = MEM32(eax + 0xC) & 0; /* 0x17171D4D: and dword ptr [eax + 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebx + 0x26C); /* 0x17171D51: mov eax, dword ptr [ebx + 0x26c] */
    ecx = MEM32(eax + 0x18); /* 0x17171D57: mov ecx, dword ptr [eax + 0x18] */
    MEM32(ebx + 0x288) = ecx; /* 0x17171D5A: mov dword ptr [ebx + 0x288], ecx */
    eax = MEM32(eax + 0x1C); /* 0x17171D60: mov eax, dword ptr [eax + 0x1c] */
    MEM32(ebx + 0x28C) = eax; /* 0x17171D63: mov dword ptr [ebx + 0x28c], eax */
    goto L_17171D8D; /* 0x17171D69: jmp 0x17171d8d */
L_17171D6B:
    ecx = MEM32(ebx + 0x26C); /* 0x17171D6B: mov ecx, dword ptr [ebx + 0x26c] */
    eax = ebx + 0x278; /* 0x17171D71: lea eax, [ebx + 0x278] */
    PUSH32(esp, eax); /* 0x17171D77: push eax */
    PUSH32(esp, MEM32(ebx + 0x298)); /* 0x17171D78: push dword ptr [ebx + 0x298] */
    RECOMP_CALL(sub_17174BE6); /* 0x17171D7E: call 0x17174be6 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x17171D83: mov esi, eax */
    /* test esi, esi */ /* 0x17171D85: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17171E2C; /* 0x17171D87: jl 0x17171e2c */
L_17171D8D:
    eax = MEM32(ebx + 0x278); /* 0x17171D8D: mov eax, dword ptr [ebx + 0x278] */
    /* cmp eax, 0xCu */ /* 0x17171D93: cmp eax, 0xc */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17171E0F; /* 0x17171D96: je 0x17171e0f */
L_17171D98:
    /* cmp eax, 0xDu */ /* 0x17171D98: cmp eax, 0xd */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xDu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17171E0F; /* 0x17171D9B: je 0x17171e0f */
L_17171D9D:
    PUSH32(esp, 0x30u); /* 0x17171D9D: push 0x30 */
    RECOMP_CALL(sub_170E2944); /* 0x17171D9F: call 0x170e2944 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17171DA4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17171DBB; /* 0x17171DA6: je 0x17171dbb */
L_17171DA8:
    edx = ebx + 0x278; /* 0x17171DA8: lea edx, [ebx + 0x278] */
    PUSH32(esp, edx); /* 0x17171DAE: push edx */
    ecx = eax; /* 0x17171DAF: mov ecx, eax */
    RECOMP_CALL(sub_1712937F); /* 0x17171DB1: call 0x1712937f */
    RECOMP_FLAGS_IN();
    MEM32(ebp + 0xC) = eax; /* 0x17171DB6: mov dword ptr [ebp + 0xc], eax */
    goto L_17171DBF; /* 0x17171DB9: jmp 0x17171dbf */
L_17171DBB:
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) & 0; /* 0x17171DBB: and dword ptr [ebp + 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_17171DBF:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x17171DBF: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17171E08; /* 0x17171DC3: je 0x17171e08 */
L_17171DC5:
    PUSH32(esp, 1); /* 0x17171DC5: push 1 */
    esi = ebx + 0x294; /* 0x17171DC7: lea esi, [ebx + 0x294] */
    PUSH32(esp, MEM32(esi)); /* 0x17171DCD: push dword ptr [esi] */
    ecx = ebx; /* 0x17171DCF: mov ecx, ebx */
    RECOMP_CALL(sub_1721BE6F); /* 0x17171DD1: call 0x1721be6f */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17171DD6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17171E08; /* 0x17171DD8: je 0x17171e08 */
L_17171DDA:
    ecx = MEM32(esi); /* 0x17171DDA: mov ecx, dword ptr [esi] */
    esi = MEM32(ebx + 0x290); /* 0x17171DDC: mov esi, dword ptr [ebx + 0x290] */
    edx = ecx; /* 0x17171DE2: mov edx, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x17171DE4: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x17171DE4: shr ecx, 2 */
    edi = eax; /* 0x17171DE7: mov edi, eax */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x17171DE9: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = edx; /* 0x17171DEB: mov ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x17171DED: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x17171DF0: rep movsb byte ptr es:[edi], byte ptr [esi] */
    ecx = MEM32(ebp + 0xC); /* 0x17171DF2: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(ecx + 0x28) = eax; /* 0x17171DF5: mov dword ptr [ecx + 0x28], eax */
    eax = MEM32(ebp + (-0x4)); /* 0x17171DF8: mov eax, dword ptr [ebp - 4] */
    MEM32(eax) = ecx; /* 0x17171DFB: mov dword ptr [eax], ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xCu; /* 0x17171DFD: add ecx, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = ecx; /* 0x17171E00: mov dword ptr [ebp - 4], ecx */
    RECOMP_BACKEDGE();
    goto L_17171D32; /* 0x17171E03: jmp 0x17171d32 */
L_17171E08:
    esi = 0x8007000Eu; /* 0x17171E08: mov esi, 0x8007000e */
    goto L_17171E2C; /* 0x17171E0D: jmp 0x17171e2c */
L_17171E0F:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x17171E0F: push dword ptr [ebp + 8] */
    ecx = ebx; /* 0x17171E12: mov ecx, ebx */
    MEM32(ebx + 0x40) = 1; /* 0x17171E14: mov dword ptr [ebx + 0x40], 1 */
    RECOMP_CALL(sub_171717C4); /* 0x17171E1B: call 0x171717c4 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x17171E20: mov esi, eax */
    /* test esi, esi */ /* 0x17171E22: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17171E2C; /* 0x17171E24: jl 0x17171e2c */
L_17171E26:
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) & 0; /* 0x17171E26: and dword ptr [ebp + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x17171E2A: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_17171E2C:
    ecx = MEM32(ebp + 0x8); /* 0x17171E2C: mov ecx, dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x17171E2F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17171E3A; /* 0x17171E31: je 0x17171e3a */
L_17171E33:
    PUSH32(esp, 1); /* 0x17171E33: push 1 */
    RECOMP_CALL(sub_17171197); /* 0x17171E35: call 0x17171197 */
    RECOMP_FLAGS_IN();
L_17171E3A:
    edi = POP32_VAL(esp); /* 0x17171E3A: pop edi */
    eax = esi; /* 0x17171E3B: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x17171E3D: pop esi */
    ebx = POP32_VAL(esp); /* 0x17171E3E: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17171E3F: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x17171E40: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_17171E48(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17171E48u);

L_17171E48:
    edi = edi; /* 0x17171E48: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17171E4A: push ebp */
    ebp = esp; /* 0x17171E4B: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x21Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x21Cu; /* 0x17171E4D: sub esp, 0x21c */
    _flag_k = FK_CMP;
    eax = MEM32(0x1723C894); /* 0x17171E53: mov eax, dword ptr [0x1723c894] */
    PUSH32(esp, esi); /* 0x17171E58: push esi */
    esi = ecx; /* 0x17171E59: mov esi, ecx */
    ecx = MEM32(esi + 0x26C); /* 0x17171E5B: mov ecx, dword ptr [esi + 0x26c] */
    PUSH32(esp, edi); /* 0x17171E61: push edi */
    MEM32(ebp + (-0x4)) = eax; /* 0x17171E62: mov dword ptr [ebp - 4], eax */
    eax = MEM32(esi + 0x298); /* 0x17171E65: mov eax, dword ptr [esi + 0x298] */
    edi = esi + 0x278; /* 0x17171E6B: lea edi, [esi + 0x278] */
    PUSH32(esp, edi); /* 0x17171E71: push edi */
    _flag_a = (uint32_t)((eax | 0xCu)); _flag_b = (uint32_t)((eax | 0xCu));
    eax = eax | 0xCu; /* 0x17171E72: or eax, 0xc */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x17171E75: push eax */
    RECOMP_CALL(sub_17174BE6); /* 0x17171E76: call 0x17174be6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x17171E7B: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ecx */ /* 0x17171E7D: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_17172078; /* 0x17171E7F: jl 0x17172078 */
L_17171E85:
    eax = MEM32(edi); /* 0x17171E85: mov eax, dword ptr [edi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0xAu; /* 0x17171E87: sub eax, 0xa */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x17171E8A: push ebx */
    PUSH32(esp, 1); /* 0x17171E8B: push 1 */
    ebx = POP32_VAL(esp); /* 0x17171E8D: pop ebx */
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_17171EB2; /* 0x17171E8E: je 0x17171eb2 */
L_17171E90:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x17171E90: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_17171EAA; /* 0x17171E91: je 0x17171eaa */
L_17171E93:
    PUSH32(esp, 0x1700B2F8u); /* 0x17171E93: push 0x1700b2f8 */
    PUSH32(esp, esi); /* 0x17171E98: push esi */
    RECOMP_CALL(sub_17171A9A); /* 0x17171E99: call 0x17171a9a */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x17171E9E: pop ecx */
    ecx = POP32_VAL(esp); /* 0x17171E9F: pop ecx */
L_17171EA0:
    eax = 0x80004005u; /* 0x17171EA0: mov eax, 0x80004005 */
    goto L_17172077; /* 0x17171EA5: jmp 0x17172077 */
L_17171EAA:
    MEM32(ebp + (-0x214)) = ebx; /* 0x17171EAA: mov dword ptr [ebp - 0x214], ebx */
    goto L_17171EB8; /* 0x17171EB0: jmp 0x17171eb8 */
L_17171EB2:
    MEM32(ebp + (-0x214)) = ecx; /* 0x17171EB2: mov dword ptr [ebp - 0x214], ecx */
L_17171EB8:
    edx = MEM32(esi + 0x270); /* 0x17171EB8: mov edx, dword ptr [esi + 0x270] */
    /* cmp edx, ecx */ /* 0x17171EBE: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(esi + 0x280); /* 0x17171EC0: mov eax, dword ptr [esi + 0x280] */
    MEM32(ebp + (-0x210)) = eax; /* 0x17171EC6: mov dword ptr [ebp - 0x210], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_17171EE6; /* 0x17171ECC: jne 0x17171ee6 */
L_17171ECE:
    eax = MEM32(esi + 0x26C); /* 0x17171ECE: mov eax, dword ptr [esi + 0x26c] */
    /* cmp MEM32(eax + 0x18), ecx */ /* 0x17171ED4: cmp dword ptr [eax + 0x18], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x18)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17171EE6; /* 0x17171ED7: jne 0x17171ee6 */
L_17171ED9:
    PUSH32(esp, 0x17021A08u); /* 0x17171ED9: push 0x17021a08 */
    PUSH32(esp, 0x5E1u); /* 0x17171EDE: push 0x5e1 */
    PUSH32(esp, edi); /* 0x17171EE3: push edi */
    goto L_17171F0E; /* 0x17171EE4: jmp 0x17171f0e */
L_17171EE6:
    eax = MEM32(esi + 0x268); /* 0x17171EE6: mov eax, dword ptr [esi + 0x268] */
    /* test eax, eax */ /* 0x17171EEC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17171F25; /* 0x17171EEE: je 0x17171f25 */
L_17171EF0:
    eax = MEM32(eax + 0x6C); /* 0x17171EF0: mov eax, dword ptr [eax + 0x6c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x17171EF3: inc ecx */
    _flag_k = FK_INC;
    /* test eax, eax */ /* 0x17171EF4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17171EF0; /* 0x17171EF6: jne 0x17171ef0 */
L_17171EF8:
    /* cmp ecx, 0x20u */ /* 0x17171EF8: cmp ecx, 0x20 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_17171F25; /* 0x17171EFB: jb 0x17171f25 */
L_17171EFD:
    PUSH32(esp, 0x170219ECu); /* 0x17171EFD: push 0x170219ec */
    PUSH32(esp, 0x5E2u); /* 0x17171F02: push 0x5e2 */
    eax = esi + 0x278; /* 0x17171F07: lea eax, [esi + 0x278] */
    PUSH32(esp, eax); /* 0x17171F0D: push eax */
L_17171F0E:
    eax = esi + 0x18; /* 0x17171F0E: lea eax, [esi + 0x18] */
    PUSH32(esp, eax); /* 0x17171F11: push eax */
    RECOMP_CALL(sub_17174059); /* 0x17171F12: call 0x17174059 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x17171F17: add esp, 0x10 */
    _flag_k = FK_ADD;
    MEM32(esi + 0x48) = ebx; /* 0x17171F1A: mov dword ptr [esi + 0x48], ebx */
    MEM32(esi + 0x44) = ebx; /* 0x17171F1D: mov dword ptr [esi + 0x44], ebx */
    RECOMP_BACKEDGE();
    goto L_17171EA0; /* 0x17171F20: jmp 0x17171ea0 */
L_17171F25:
    /* test edx, edx */ /* 0x17171F25: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17171FD3; /* 0x17171F27: jne 0x17171fd3 */
L_17171F2D:
    eax = ebp + (-0x21C); /* 0x17171F2D: lea eax, [ebp - 0x21c] */
    PUSH32(esp, eax); /* 0x17171F33: push eax */
    eax = ebp + (-0x108); /* 0x17171F34: lea eax, [ebp - 0x108] */
    PUSH32(esp, eax); /* 0x17171F3A: push eax */
    edi = 0x104u; /* 0x17171F3B: mov edi, 0x104 */
    PUSH32(esp, edi); /* 0x17171F40: push edi */
    PUSH32(esp, MEM32(ebp + (-0x210))); /* 0x17171F41: push dword ptr [ebp - 0x210] */
    RECOMP_ICALL(MEM32(0x170010BC)); /* 0x17171F47: call dword ptr [0x170010bc] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x210)); /* 0x17171F4D: mov ecx, dword ptr [ebp - 0x210] */
    eax = ebp + (-0x108); /* 0x17171F53: lea eax, [ebp - 0x108] */
L_17171F59:
    SET_LO8(ebx, MEM8(ecx)); /* 0x17171F59: mov bl, byte ptr [ecx] */
    SET_LO8(edx, LO8(ebx)); /* 0x17171F5B: mov dl, bl */
    /* cmp LO8(ebx), MEM8(eax) */ /* 0x17171F5D: cmp bl, byte ptr [eax] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17171F7B; /* 0x17171F5F: jne 0x17171f7b */
L_17171F61:
    /* test LO8(edx), LO8(edx) */ /* 0x17171F61: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_17171F77; /* 0x17171F63: je 0x17171f77 */
L_17171F65:
    SET_LO8(ebx, MEM8(ecx + 0x1)); /* 0x17171F65: mov bl, byte ptr [ecx + 1] */
    SET_LO8(edx, LO8(ebx)); /* 0x17171F68: mov dl, bl */
    /* cmp LO8(ebx), MEM8(eax + 0x1) */ /* 0x17171F6A: cmp bl, byte ptr [eax + 1] */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(MEM8(eax + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17171F7B; /* 0x17171F6D: jne 0x17171f7b */
L_17171F6F:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x17171F6F: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x17171F70: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17171F71: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17171F72: inc eax */
    _flag_k = FK_INC;
    /* test LO8(edx), LO8(edx) */ /* 0x17171F73: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17171F59; /* 0x17171F75: jne 0x17171f59 */
L_17171F77:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17171F77: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_17171F80; /* 0x17171F79: jmp 0x17171f80 */
L_17171F7B:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17171F7B: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17171F7D: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_17171F80:
    /* test eax, eax */ /* 0x17171F80: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17171FC4; /* 0x17171F82: je 0x17171fc4 */
L_17171F84:
    PUSH32(esp, MEM32(ebp + (-0x210))); /* 0x17171F84: push dword ptr [ebp - 0x210] */
    eax = MEM32(esi + 0x268); /* 0x17171F8A: mov eax, dword ptr [esi + 0x268] */
    PUSH32(esp, MEM32(eax + 0x60)); /* 0x17171F90: push dword ptr [eax + 0x60] */
    eax = ebp + (-0x20C); /* 0x17171F93: lea eax, [ebp - 0x20c] */
    PUSH32(esp, 0x1701AB70u); /* 0x17171F99: push 0x1701ab70 */
    PUSH32(esp, edi); /* 0x17171F9E: push edi */
    PUSH32(esp, eax); /* 0x17171F9F: push eax */
    RECOMP_CALL(sub_1705338C); /* 0x17171FA0: call 0x1705338c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x17171FA5: add esp, 0x14 */
    _flag_k = FK_ADD;
    eax = ebp + (-0x21C); /* 0x17171FA8: lea eax, [ebp - 0x21c] */
    PUSH32(esp, eax); /* 0x17171FAE: push eax */
    eax = ebp + (-0x108); /* 0x17171FAF: lea eax, [ebp - 0x108] */
    PUSH32(esp, eax); /* 0x17171FB5: push eax */
    PUSH32(esp, edi); /* 0x17171FB6: push edi */
    eax = ebp + (-0x20C); /* 0x17171FB7: lea eax, [ebp - 0x20c] */
    PUSH32(esp, eax); /* 0x17171FBD: push eax */
    RECOMP_ICALL(MEM32(0x170010BC)); /* 0x17171FBE: call dword ptr [0x170010bc] */
    RECOMP_FLAGS_IN();
L_17171FC4:
    eax = ebp + (-0x108); /* 0x17171FC4: lea eax, [ebp - 0x108] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x17171FCA: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x210)) = eax; /* 0x17171FCC: mov dword ptr [ebp - 0x210], eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x17171FD2: inc ebx */
    _flag_k = FK_INC;
L_17171FD3:
    eax = MEM32(esi + 0x268); /* 0x17171FD3: mov eax, dword ptr [esi + 0x268] */
    /* test eax, eax */ /* 0x17171FD9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17171FEE; /* 0x17171FDB: je 0x17171fee */
L_17171FDD:
    /* cmp MEM32(eax + 0x58), 0 */ /* 0x17171FDD: cmp dword ptr [eax + 0x58], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x58)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17171FEE; /* 0x17171FE1: je 0x17171fee */
L_17171FE3:
    eax = MEM32(eax + 0x64); /* 0x17171FE3: mov eax, dword ptr [eax + 0x64] */
    MEM32(ebp + (-0x218)) = eax; /* 0x17171FE6: mov dword ptr [ebp - 0x218], eax */
    goto L_17171FF5; /* 0x17171FEC: jmp 0x17171ff5 */
L_17171FEE:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x218))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x218)) = MEM32(ebp + (-0x218)) & 0; /* 0x17171FEE: and dword ptr [ebp - 0x218], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_17171FF5:
    PUSH32(esp, 0x70u); /* 0x17171FF5: push 0x70 */
    RECOMP_CALL(sub_1721B01C); /* 0x17171FF7: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17171FFC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x17171FFE: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1717200C; /* 0x17171FFF: je 0x1717200c */
L_17172001:
    ecx = eax; /* 0x17172001: mov ecx, eax */
    RECOMP_CALL(sub_1716FC9D); /* 0x17172003: call 0x1716fc9d */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x17172008: mov edi, eax */
    goto L_1717200E; /* 0x1717200A: jmp 0x1717200e */
L_1717200C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1717200C: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1717200E:
    /* test edi, edi */ /* 0x1717200E: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17172019; /* 0x17172010: jne 0x17172019 */
L_17172012:
    eax = 0x8007000Eu; /* 0x17172012: mov eax, 0x8007000e */
    goto L_17172077; /* 0x17172017: jmp 0x17172077 */
L_17172019:
    PUSH32(esp, MEM32(ebp + (-0x218))); /* 0x17172019: push dword ptr [ebp - 0x218] */
    eax = esi + 0x18; /* 0x1717201F: lea eax, [esi + 0x18] */
    PUSH32(esp, MEM32(ebp + (-0x214))); /* 0x17172022: push dword ptr [ebp - 0x214] */
    ecx = edi; /* 0x17172028: mov ecx, edi */
    PUSH32(esp, MEM32(esi + 0x270)); /* 0x1717202A: push dword ptr [esi + 0x270] */
    PUSH32(esp, eax); /* 0x17172030: push eax */
    eax = esi + 0x278; /* 0x17172031: lea eax, [esi + 0x278] */
    PUSH32(esp, eax); /* 0x17172037: push eax */
    PUSH32(esp, esi); /* 0x17172038: push esi */
    PUSH32(esp, 0); /* 0x17172039: push 0 */
    PUSH32(esp, MEM32(ebp + (-0x210))); /* 0x1717203B: push dword ptr [ebp - 0x210] */
    RECOMP_CALL(sub_1716FD5B); /* 0x17172041: call 0x1716fd5b */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17172046: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x214)) = eax; /* 0x17172048: mov dword ptr [ebp - 0x214], eax */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_17172066; /* 0x1717204E: jge 0x17172066 */
L_17172050:
    PUSH32(esp, ebx); /* 0x17172050: push ebx */
    ecx = edi; /* 0x17172051: mov ecx, edi */
    MEM32(esi + 0x48) = ebx; /* 0x17172053: mov dword ptr [esi + 0x48], ebx */
    MEM32(esi + 0x44) = ebx; /* 0x17172056: mov dword ptr [esi + 0x44], ebx */
    RECOMP_CALL(sub_1716FD35); /* 0x17172059: call 0x1716fd35 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x214)); /* 0x1717205E: mov eax, dword ptr [ebp - 0x214] */
    goto L_17172077; /* 0x17172064: jmp 0x17172077 */
L_17172066:
    eax = MEM32(esi + 0x268); /* 0x17172066: mov eax, dword ptr [esi + 0x268] */
    MEM32(edi + 0x6C) = eax; /* 0x1717206C: mov dword ptr [edi + 0x6c], eax */
    MEM32(esi + 0x268) = edi; /* 0x1717206F: mov dword ptr [esi + 0x268], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17172075: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_17172077:
    ebx = POP32_VAL(esp); /* 0x17172077: pop ebx */
L_17172078:
    ecx = MEM32(ebp + (-0x4)); /* 0x17172078: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x1717207B: pop edi */
    esi = POP32_VAL(esp); /* 0x1717207C: pop esi */
    RECOMP_CALL(sub_1721B76C); /* 0x1717207D: call 0x1721b76c */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17172082: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x17172083: ret  */
    RECOMP_REGS_OUT();
}

void sub_1717201E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1717201Eu);

L_1717201E:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4A00E7BA))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4A00E7BA)) = MEM32(ebp + (-0x4A00E7BA)) - 1; /* 0x1717201E: dec dword ptr [ebp - 0x4a00e7ba] */
    _flag_k = FK_DEC;
    /* in: no port I/O under Win32 */ /* 0x17172024: in al, dx */
    _df = -1; /* 0x17172025: std  */
    RECOMP_ITAIL(0x17172026u); { RECOMP_REGS_OUT(); return; } /* falls through */
    RECOMP_REGS_OUT();
}

void sub_17172089(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17172089u);

L_17172089:
    edi = edi; /* 0x17172089: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1717208B: push ebp */
    ebp = esp; /* 0x1717208C: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x64u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x64u; /* 0x1717208E: sub esp, 0x64 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x17172091: push ebx */
    PUSH32(esp, esi); /* 0x17172092: push esi */
    PUSH32(esp, edi); /* 0x17172093: push edi */
    esi = ecx; /* 0x17172094: mov esi, ecx */
    eax = MEM32(esi + 0x26C); /* 0x17172096: mov eax, dword ptr [esi + 0x26c] */
    PUSH32(esp, 8); /* 0x1717209C: push 8 */
    MEM32(ebp + (-0xC)) = eax; /* 0x1717209E: mov dword ptr [ebp - 0xc], eax */
    ecx = POP32_VAL(esp); /* 0x171720A1: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171720A2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = ebp + (-0x2C); /* 0x171720A4: lea edi, [ebp - 0x2c] */
    PUSH32(esp, 0x14u); /* 0x171720A7: push 0x14 */
    MEM32(ebp + (-0x8)) = esi; /* 0x171720A9: mov dword ptr [ebp - 8], esi */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x171720AC: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    RECOMP_CALL(sub_1721B01C); /* 0x171720AE: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x171720B3: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ebx */ /* 0x171720B5: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x171720B7: pop ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171720D1; /* 0x171720B8: je 0x171720d1 */
L_171720BA:
    MEM32(eax) = 0x17021A7Cu; /* 0x171720BA: mov dword ptr [eax], 0x17021a7c */
    MEM32(eax + 0x4) = ebx; /* 0x171720C0: mov dword ptr [eax + 4], ebx */
    MEM32(eax + 0x8) = ebx; /* 0x171720C3: mov dword ptr [eax + 8], ebx */
    MEM32(eax + 0xC) = ebx; /* 0x171720C6: mov dword ptr [eax + 0xc], ebx */
    MEM32(eax + 0x10) = ebx; /* 0x171720C9: mov dword ptr [eax + 0x10], ebx */
    MEM32(ebp + (-0x4)) = eax; /* 0x171720CC: mov dword ptr [ebp - 4], eax */
    goto L_171720D4; /* 0x171720CF: jmp 0x171720d4 */
L_171720D1:
    MEM32(ebp + (-0x4)) = ebx; /* 0x171720D1: mov dword ptr [ebp - 4], ebx */
L_171720D4:
    /* cmp MEM32(ebp + (-0x4)), ebx */ /* 0x171720D4: cmp dword ptr [ebp - 4], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17172200; /* 0x171720D7: je 0x17172200 */
L_171720DD:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x171720DD: push dword ptr [ebp - 4] */
    ecx = esi; /* 0x171720E0: mov ecx, esi */
    RECOMP_CALL(sub_171717C4); /* 0x171720E2: call 0x171717c4 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x171720E7: mov edi, eax */
    /* cmp edi, ebx */ /* 0x171720E9: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_17172244; /* 0x171720EB: jl 0x17172244 */
L_171720F1:
    PUSH32(esp, 0x14u); /* 0x171720F1: push 0x14 */
    RECOMP_CALL(sub_1721B01C); /* 0x171720F3: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x171720F8: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x171720FA: pop ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17172114; /* 0x171720FB: je 0x17172114 */
L_171720FD:
    MEM32(eax) = 0x17021A74u; /* 0x171720FD: mov dword ptr [eax], 0x17021a74 */
    MEM32(eax + 0x4) = ebx; /* 0x17172103: mov dword ptr [eax + 4], ebx */
    MEM32(eax + 0x8) = ebx; /* 0x17172106: mov dword ptr [eax + 8], ebx */
    MEM32(eax + 0xC) = ebx; /* 0x17172109: mov dword ptr [eax + 0xc], ebx */
    MEM32(eax + 0x10) = ebx; /* 0x1717210C: mov dword ptr [eax + 0x10], ebx */
    MEM32(ebp + (-0x4)) = eax; /* 0x1717210F: mov dword ptr [ebp - 4], eax */
    goto L_17172117; /* 0x17172112: jmp 0x17172117 */
L_17172114:
    MEM32(ebp + (-0x4)) = ebx; /* 0x17172114: mov dword ptr [ebp - 4], ebx */
L_17172117:
    /* cmp MEM32(ebp + (-0x4)), ebx */ /* 0x17172117: cmp dword ptr [ebp - 4], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17172200; /* 0x1717211A: je 0x17172200 */
L_17172120:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x17172120: push dword ptr [ebp - 4] */
    ecx = esi; /* 0x17172123: mov ecx, esi */
    RECOMP_CALL(sub_171717C4); /* 0x17172125: call 0x171717c4 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1717212A: mov edi, eax */
    /* cmp edi, ebx */ /* 0x1717212C: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_17172244; /* 0x1717212E: jl 0x17172244 */
L_17172134:
    PUSH32(esp, 2); /* 0x17172134: push 2 */
    esi = POP32_VAL(esp); /* 0x17172136: pop esi */
    PUSH32(esp, 0x14u); /* 0x17172137: push 0x14 */
    MEM32(ebp + (-0x2C)) = esi; /* 0x17172139: mov dword ptr [ebp - 0x2c], esi */
    MEM32(ebp + (-0x24)) = 0x900u; /* 0x1717213C: mov dword ptr [ebp - 0x24], 0x900 */
    RECOMP_CALL(sub_1721B01C); /* 0x17172143: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x17172148: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x1717214A: pop ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17172164; /* 0x1717214B: je 0x17172164 */
L_1717214D:
    MEM32(eax) = 0x17021A60u; /* 0x1717214D: mov dword ptr [eax], 0x17021a60 */
    MEM32(eax + 0x4) = ebx; /* 0x17172153: mov dword ptr [eax + 4], ebx */
    MEM32(eax + 0x8) = ebx; /* 0x17172156: mov dword ptr [eax + 8], ebx */
    MEM32(eax + 0xC) = ebx; /* 0x17172159: mov dword ptr [eax + 0xc], ebx */
    MEM32(eax + 0x10) = ebx; /* 0x1717215C: mov dword ptr [eax + 0x10], ebx */
    MEM32(ebp + (-0x4)) = eax; /* 0x1717215F: mov dword ptr [ebp - 4], eax */
    goto L_17172167; /* 0x17172162: jmp 0x17172167 */
L_17172164:
    MEM32(ebp + (-0x4)) = ebx; /* 0x17172164: mov dword ptr [ebp - 4], ebx */
L_17172167:
    /* cmp MEM32(ebp + (-0x4)), ebx */ /* 0x17172167: cmp dword ptr [ebp - 4], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17172200; /* 0x1717216A: je 0x17172200 */
L_17172170:
    PUSH32(esp, 0x30u); /* 0x17172170: push 0x30 */
    RECOMP_CALL(sub_170E2944); /* 0x17172172: call 0x170e2944 */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x17172177: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17172188; /* 0x17172179: je 0x17172188 */
L_1717217B:
    ecx = ebp + (-0x2C); /* 0x1717217B: lea ecx, [ebp - 0x2c] */
    PUSH32(esp, ecx); /* 0x1717217E: push ecx */
    ecx = eax; /* 0x1717217F: mov ecx, eax */
    RECOMP_CALL(sub_1712937F); /* 0x17172181: call 0x1712937f */
    RECOMP_FLAGS_IN();
    goto L_1717218A; /* 0x17172186: jmp 0x1717218a */
L_17172188:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17172188: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1717218A:
    /* cmp eax, ebx */ /* 0x1717218A: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + (-0x4)); /* 0x1717218C: mov ecx, dword ptr [ebp - 4] */
    MEM32(ecx + 0x8) = eax; /* 0x1717218F: mov dword ptr [ecx + 8], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17172200; /* 0x17172192: je 0x17172200 */
L_17172194:
    PUSH32(esp, ecx); /* 0x17172194: push ecx */
    ecx = MEM32(ebp + (-0x8)); /* 0x17172195: mov ecx, dword ptr [ebp - 8] */
    RECOMP_CALL(sub_171717C4); /* 0x17172198: call 0x171717c4 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1717219D: mov edi, eax */
    /* cmp edi, ebx */ /* 0x1717219F: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_17172244; /* 0x171721A1: jl 0x17172244 */
L_171721A7:
    PUSH32(esp, 0x14u); /* 0x171721A7: push 0x14 */
    MEM32(ebp + (-0x2C)) = esi; /* 0x171721A9: mov dword ptr [ebp - 0x2c], esi */
    MEM32(ebp + (-0x24)) = 0x902u; /* 0x171721AC: mov dword ptr [ebp - 0x24], 0x902 */
    RECOMP_CALL(sub_1721B01C); /* 0x171721B3: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x171721B8: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x171721BA: pop ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171721D4; /* 0x171721BB: je 0x171721d4 */
L_171721BD:
    MEM32(eax) = 0x17021A50u; /* 0x171721BD: mov dword ptr [eax], 0x17021a50 */
    MEM32(eax + 0x4) = ebx; /* 0x171721C3: mov dword ptr [eax + 4], ebx */
    MEM32(eax + 0x8) = ebx; /* 0x171721C6: mov dword ptr [eax + 8], ebx */
    MEM32(eax + 0xC) = ebx; /* 0x171721C9: mov dword ptr [eax + 0xc], ebx */
    MEM32(eax + 0x10) = ebx; /* 0x171721CC: mov dword ptr [eax + 0x10], ebx */
    MEM32(ebp + (-0x4)) = eax; /* 0x171721CF: mov dword ptr [ebp - 4], eax */
    goto L_171721D7; /* 0x171721D2: jmp 0x171721d7 */
L_171721D4:
    MEM32(ebp + (-0x4)) = ebx; /* 0x171721D4: mov dword ptr [ebp - 4], ebx */
L_171721D7:
    /* cmp MEM32(ebp + (-0x4)), ebx */ /* 0x171721D7: cmp dword ptr [ebp - 4], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17172200; /* 0x171721DA: je 0x17172200 */
L_171721DC:
    PUSH32(esp, 0x30u); /* 0x171721DC: push 0x30 */
    RECOMP_CALL(sub_170E2944); /* 0x171721DE: call 0x170e2944 */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x171721E3: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171721F4; /* 0x171721E5: je 0x171721f4 */
L_171721E7:
    ecx = ebp + (-0x2C); /* 0x171721E7: lea ecx, [ebp - 0x2c] */
    PUSH32(esp, ecx); /* 0x171721EA: push ecx */
    ecx = eax; /* 0x171721EB: mov ecx, eax */
    RECOMP_CALL(sub_1712937F); /* 0x171721ED: call 0x1712937f */
    RECOMP_FLAGS_IN();
    goto L_171721F6; /* 0x171721F2: jmp 0x171721f6 */
L_171721F4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171721F4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171721F6:
    /* cmp eax, ebx */ /* 0x171721F6: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + (-0x4)); /* 0x171721F8: mov ecx, dword ptr [ebp - 4] */
    MEM32(ecx + 0x8) = eax; /* 0x171721FB: mov dword ptr [ecx + 8], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_17172207; /* 0x171721FE: jne 0x17172207 */
L_17172200:
    edi = 0x8007000Eu; /* 0x17172200: mov edi, 0x8007000e */
    goto L_17172244; /* 0x17172205: jmp 0x17172244 */
L_17172207:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x17172207: push dword ptr [ebp - 4] */
    ecx = MEM32(ebp + (-0x8)); /* 0x1717220A: mov ecx, dword ptr [ebp - 8] */
    RECOMP_CALL(sub_171717C4); /* 0x1717220D: call 0x171717c4 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x17172212: mov edi, eax */
    /* cmp edi, ebx */ /* 0x17172214: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_17172244; /* 0x17172216: jl 0x17172244 */
L_17172218:
    esi = MEM32(ebp + 0x8); /* 0x17172218: mov esi, dword ptr [ebp + 8] */
    /* cmp esi, ebx */ /* 0x1717221B: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = ebx; /* 0x1717221D: mov dword ptr [ebp - 4], ebx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17172242; /* 0x17172220: je 0x17172242 */
L_17172222:
    ecx = ebp + (-0x64); /* 0x17172222: lea ecx, [ebp - 0x64] */
    RECOMP_CALL(sub_17173AF3); /* 0x17172225: call 0x17173af3 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + (-0x8)); /* 0x1717222A: mov edi, dword ptr [ebp - 8] */
    eax = ebp + (-0x64); /* 0x1717222D: lea eax, [ebp - 0x64] */
    MEM32(edi + 0x26C) = eax; /* 0x17172230: mov dword ptr [edi + 0x26c], eax */
    /* cmp MEM32(esi), ebx */ /* 0x17172236: cmp dword ptr [esi], ebx */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1717226A; /* 0x17172238: jne 0x1717226a */
L_1717223A:
    ecx = ebp + (-0x64); /* 0x1717223A: lea ecx, [ebp - 0x64] */
    RECOMP_CALL(sub_17129E95); /* 0x1717223D: call 0x17129e95 */
    RECOMP_FLAGS_IN();
L_17172242:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x17172242: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_17172244:
    ecx = MEM32(ebp + (-0x8)); /* 0x17172244: mov ecx, dword ptr [ebp - 8] */
    eax = MEM32(ebp + (-0xC)); /* 0x17172247: mov eax, dword ptr [ebp - 0xc] */
    MEM32(ecx + 0x26C) = eax; /* 0x1717224A: mov dword ptr [ecx + 0x26c], eax */
    ecx = MEM32(ebp + (-0x4)); /* 0x17172250: mov ecx, dword ptr [ebp - 4] */
    /* cmp ecx, ebx */ /* 0x17172253: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1717225E; /* 0x17172255: je 0x1717225e */
L_17172257:
    PUSH32(esp, 1); /* 0x17172257: push 1 */
    RECOMP_CALL(sub_17171197); /* 0x17172259: call 0x17171197 */
    RECOMP_FLAGS_IN();
L_1717225E:
    eax = edi; /* 0x1717225E: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x17172260: pop edi */
    esi = POP32_VAL(esp); /* 0x17172261: pop esi */
    ebx = POP32_VAL(esp); /* 0x17172262: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17172263: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x17172264: ret 4 */
L_17172267:
    edi = MEM32(ebp + (-0x8)); /* 0x17172267: mov edi, dword ptr [ebp - 8] */
L_1717226A:
    edx = MEM32(esi + 0x4); /* 0x1717226A: mov edx, dword ptr [esi + 4] */
    /* cmp edx, ebx */ /* 0x1717226D: cmp edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17172285; /* 0x1717226F: je 0x17172285 */
L_17172271:
    eax = edx; /* 0x17172271: mov eax, edx */
    ecx = eax + 0x1; /* 0x17172273: lea ecx, [eax + 1] */
    MEM32(ebp + 0x8) = ecx; /* 0x17172276: mov dword ptr [ebp + 8], ecx */
L_17172279:
    SET_LO8(ecx, MEM8(eax)); /* 0x17172279: mov cl, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1717227B: inc eax */
    _flag_k = FK_INC;
    /* cmp LO8(ecx), LO8(ebx) */ /* 0x1717227C: cmp cl, bl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_17172279; /* 0x1717227E: jne 0x17172279 */
L_17172280:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + 0x8); /* 0x17172280: sub eax, dword ptr [ebp + 8] */
    _flag_k = FK_CMP;
    goto L_17172287; /* 0x17172283: jmp 0x17172287 */
L_17172285:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17172285: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_17172287:
    ecx = edi + 0x18; /* 0x17172287: lea ecx, [edi + 0x18] */
    PUSH32(esp, ecx); /* 0x1717228A: push ecx */
    PUSH32(esp, edi); /* 0x1717228B: push edi */
    PUSH32(esp, ebx); /* 0x1717228C: push ebx */
    PUSH32(esp, ebx); /* 0x1717228D: push ebx */
    PUSH32(esp, eax); /* 0x1717228E: push eax */
    PUSH32(esp, edx); /* 0x1717228F: push edx */
    ecx = ebp + (-0x64); /* 0x17172290: lea ecx, [ebp - 0x64] */
    RECOMP_CALL(sub_17173B12); /* 0x17172293: call 0x17173b12 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x17172298: mov edi, eax */
    /* cmp edi, ebx */ /* 0x1717229A: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_171722B8; /* 0x1717229C: jl 0x171722b8 */
L_1717229E:
    ecx = MEM32(ebp + (-0x8)); /* 0x1717229E: mov ecx, dword ptr [ebp - 8] */
    PUSH32(esp, ebx); /* 0x171722A1: push ebx */
    PUSH32(esp, MEM32(esi)); /* 0x171722A2: push dword ptr [esi] */
    RECOMP_CALL(sub_17171B5C); /* 0x171722A4: call 0x17171b5c */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x171722A9: mov edi, eax */
    /* cmp edi, ebx */ /* 0x171722AB: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_171722B8; /* 0x171722AD: jl 0x171722b8 */
L_171722AF:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 8; /* 0x171722AF: add esi, 8 */
    _flag_k = FK_ADD;
    /* cmp MEM32(esi), ebx */ /* 0x171722B2: cmp dword ptr [esi], ebx */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_17172267; /* 0x171722B4: jne 0x17172267 */
L_171722B6:
    RECOMP_BACKEDGE();
    goto L_1717223A; /* 0x171722B6: jmp 0x1717223a */
L_171722B8:
    ecx = ebp + (-0x64); /* 0x171722B8: lea ecx, [ebp - 0x64] */
    RECOMP_CALL(sub_17129E95); /* 0x171722BB: call 0x17129e95 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_17172244; /* 0x171722C0: jmp 0x17172244 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_171722C7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171722C7u);

L_171722C7:
    edi = edi; /* 0x171722C7: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171722C9: push ebp */
    ebp = esp; /* 0x171722CA: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x40u; /* 0x171722CC: sub esp, 0x40 */
    _flag_k = FK_CMP;
    edx = MEM32(ebp + 0xC); /* 0x171722CF: mov edx, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x171722D2: push ebx */
    PUSH32(esp, esi); /* 0x171722D3: push esi */
    PUSH32(esp, 0x10u); /* 0x171722D4: push 0x10 */
    esi = ecx; /* 0x171722D6: mov esi, ecx */
    ecx = POP32_VAL(esp); /* 0x171722D8: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x171722D9: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, ecx */ /* 0x171722DB: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_171722E6; /* 0x171722DD: jbe 0x171722e6 */
L_171722DF:
    MEM32(esi + 0x44) = 1; /* 0x171722DF: mov dword ptr [esi + 0x44], 1 */
L_171722E6:
    /* cmp MEM32(esi + 0x44), ebx */ /* 0x171722E6: cmp dword ptr [esi + 0x44], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x44)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1717262A; /* 0x171722E9: jne 0x1717262a */
L_171722EF:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x171722EF: sub ecx, edx */
    _flag_k = FK_CMP;
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x171722F1: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x171722F1: shl ecx, 2 */
    PUSH32(esp, edi); /* 0x171722F4: push edi */
    edi = ebp + edx * 4 + (-0x40); /* 0x171722F5: lea edi, [ebp + edx*4 - 0x40] */
    edx = ecx; /* 0x171722F9: mov edx, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x171722FB: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x171722FB: shr ecx, 2 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171722FE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x17172300: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    ecx = edx; /* 0x17172302: mov ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x17172304: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 1u; /* 0x17172307: rep stosb byte ptr es:[edi], al */ if (_df > 0) { memset((void*)ADDR(edi), LO8(eax), _n); edi += _b; } else { memset((void*)ADDR(edi - _b + 1u), LO8(eax), _n); edi -= _b; } ecx = 0; }
    ecx = MEM32(ebp + 0xC); /* 0x17172309: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1717230C: dec ecx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1717230D: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, edi */ /* 0x1717230F: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_17172336; /* 0x17172311: jl 0x17172336 */
L_17172313:
    eax = MEM32(esi + 0x5C); /* 0x17172313: mov eax, dword ptr [esi + 0x5c] */
    /* cmp eax, edi */ /* 0x17172316: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17172349; /* 0x17172318: je 0x17172349 */
L_1717231A:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1717231A: dec ecx */
    _flag_k = FK_DEC;
    edx = MEM32(eax + 0x8); /* 0x1717231B: mov edx, dword ptr [eax + 8] */
    MEM32(ebp + ecx * 4 + (-0x3C)) = edx; /* 0x1717231E: mov dword ptr [ebp + ecx*4 - 0x3c], edx */
    edx = MEM32(eax + 0xC); /* 0x17172322: mov edx, dword ptr [eax + 0xc] */
    MEM32(esi + 0x5C) = edx; /* 0x17172325: mov dword ptr [esi + 0x5c], edx */
    MEM32(eax + 0x8) = edi; /* 0x17172328: mov dword ptr [eax + 8], edi */
    edx = MEM32(esi + 0x60); /* 0x1717232B: mov edx, dword ptr [esi + 0x60] */
    MEM32(eax + 0xC) = edx; /* 0x1717232E: mov dword ptr [eax + 0xc], edx */
    MEM32(esi + 0x60) = eax; /* 0x17172331: mov dword ptr [esi + 0x60], eax */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NS(_flag_a, _flag_b)) goto L_17172313; /* 0x17172334: jns 0x17172313 */
L_17172336:
    eax = MEM32(ebp + 0x8); /* 0x17172336: mov eax, dword ptr [ebp + 8] */
    /* cmp eax, 0x2Eu */ /* 0x17172339: cmp eax, 0x2e */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x2Eu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1717260B; /* 0x1717233C: ja 0x1717260b */
L_17172342:
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x1717265D)); goto _ljump; }
L_17172349:
    PUSH32(esp, 0x1700B27Cu); /* 0x17172349: push 0x1700b27c */
L_1717234E:
    PUSH32(esp, edi); /* 0x1717234E: push edi */
    eax = esi + 0x278; /* 0x1717234F: lea eax, [esi + 0x278] */
    PUSH32(esp, eax); /* 0x17172355: push eax */
    eax = esi + 0x18; /* 0x17172356: lea eax, [esi + 0x18] */
    PUSH32(esp, eax); /* 0x17172359: push eax */
    RECOMP_CALL(sub_17174059); /* 0x1717235A: call 0x17174059 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1717235F: add esp, 0x10 */
    _flag_k = FK_ADD;
    MEM32(esi + 0x44) = 1; /* 0x17172362: mov dword ptr [esi + 0x44], 1 */
    goto L_17172629; /* 0x17172369: jmp 0x17172629 */
L_1717236E:
    eax = MEM32(ebp + (-0x40)); /* 0x1717236E: mov eax, dword ptr [ebp - 0x40] */
    PUSH32(esp, 1); /* 0x17172371: push 1 */
    PUSH32(esp, MEM32(eax + 0x18)); /* 0x17172373: push dword ptr [eax + 0x18] */
    ecx = esi; /* 0x17172376: mov ecx, esi */
    RECOMP_CALL(sub_17171B5C); /* 0x17172378: call 0x17171b5c */
    RECOMP_FLAGS_IN();
    goto L_1717260B; /* 0x1717237D: jmp 0x1717260b */
L_17172382:
    eax = MEM32(ebp + (-0x40)); /* 0x17172382: mov eax, dword ptr [ebp - 0x40] */
    PUSH32(esp, MEM32(eax + 0x18)); /* 0x17172385: push dword ptr [eax + 0x18] */
    ecx = esi; /* 0x17172388: mov ecx, esi */
    RECOMP_CALL(sub_1717169F); /* 0x1717238A: call 0x1717169f */
    RECOMP_FLAGS_IN();
    goto L_1717260B; /* 0x1717238F: jmp 0x1717260b */
L_17172394:
    PUSH32(esp, edi); /* 0x17172394: push edi */
L_17172395:
    eax = MEM32(ebp + (-0x40)); /* 0x17172395: mov eax, dword ptr [ebp - 0x40] */
    PUSH32(esp, MEM32(eax + 0x18)); /* 0x17172398: push dword ptr [eax + 0x18] */
    ecx = esi; /* 0x1717239B: mov ecx, esi */
    RECOMP_CALL(sub_171701AD); /* 0x1717239D: call 0x171701ad */
    RECOMP_FLAGS_IN();
    goto L_1717260B; /* 0x171723A2: jmp 0x1717260b */
L_171723A7:
    eax = MEM32(ebp + (-0x3C)); /* 0x171723A7: mov eax, dword ptr [ebp - 0x3c] */
    PUSH32(esp, MEM32(eax + 0x18)); /* 0x171723AA: push dword ptr [eax + 0x18] */
    RECOMP_BACKEDGE();
    goto L_17172395; /* 0x171723AD: jmp 0x17172395 */
L_171723AF:
    ecx = esi; /* 0x171723AF: mov ecx, esi */
    RECOMP_CALL(sub_17171E48); /* 0x171723B1: call 0x17171e48 */
    RECOMP_FLAGS_IN();
    goto L_1717260B; /* 0x171723B6: jmp 0x1717260b */
L_171723BB:
    ecx = esi; /* 0x171723BB: mov ecx, esi */
    RECOMP_CALL(sub_171701EB); /* 0x171723BD: call 0x171701eb */
    RECOMP_FLAGS_IN();
    goto L_1717260B; /* 0x171723C2: jmp 0x1717260b */
L_171723C7:
    eax = MEM32(ebp + (-0x40)); /* 0x171723C7: mov eax, dword ptr [ebp - 0x40] */
    PUSH32(esp, MEM32(eax + 0x18)); /* 0x171723CA: push dword ptr [eax + 0x18] */
L_171723CD:
    ecx = esi; /* 0x171723CD: mov ecx, esi */
    RECOMP_CALL(sub_171702F3); /* 0x171723CF: call 0x171702f3 */
    RECOMP_FLAGS_IN();
    goto L_1717260B; /* 0x171723D4: jmp 0x1717260b */
L_171723D9:
    eax = MEM32(ebp + (-0x40)); /* 0x171723D9: mov eax, dword ptr [ebp - 0x40] */
    PUSH32(esp, edi); /* 0x171723DC: push edi */
    PUSH32(esp, edi); /* 0x171723DD: push edi */
    PUSH32(esp, MEM32(eax + 0x18)); /* 0x171723DE: push dword ptr [eax + 0x18] */
    ecx = esi; /* 0x171723E1: mov ecx, esi */
    RECOMP_CALL(sub_17171040); /* 0x171723E3: call 0x17171040 */
    RECOMP_FLAGS_IN();
    goto L_171723FE; /* 0x171723E8: jmp 0x171723fe */
L_171723EA:
    eax = MEM32(ebp + (-0x40)); /* 0x171723EA: mov eax, dword ptr [ebp - 0x40] */
    PUSH32(esp, edi); /* 0x171723ED: push edi */
    PUSH32(esp, edi); /* 0x171723EE: push edi */
    PUSH32(esp, MEM32(eax + 0x18)); /* 0x171723EF: push dword ptr [eax + 0x18] */
    ecx = esi; /* 0x171723F2: mov ecx, esi */
    RECOMP_CALL(sub_17171040); /* 0x171723F4: call 0x17171040 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x171723F9: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x171723FB: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171723FD: inc eax */
    _flag_k = FK_INC;
L_171723FE:
    PUSH32(esp, eax); /* 0x171723FE: push eax */
    RECOMP_BACKEDGE();
    goto L_171723CD; /* 0x171723FF: jmp 0x171723cd */
L_17172401:
    eax = MEM32(ebp + (-0x40)); /* 0x17172401: mov eax, dword ptr [ebp - 0x40] */
    PUSH32(esp, MEM32(eax + 0x18)); /* 0x17172404: push dword ptr [eax + 0x18] */
    ecx = esi; /* 0x17172407: mov ecx, esi */
    RECOMP_CALL(sub_17170358); /* 0x17172409: call 0x17170358 */
    RECOMP_FLAGS_IN();
    goto L_1717260B; /* 0x1717240E: jmp 0x1717260b */
L_17172413:
    ecx = esi; /* 0x17172413: mov ecx, esi */
    RECOMP_CALL(sub_171703DA); /* 0x17172415: call 0x171703da */
    RECOMP_FLAGS_IN();
    goto L_1717260B; /* 0x1717241A: jmp 0x1717260b */
L_1717241F:
    ecx = esi; /* 0x1717241F: mov ecx, esi */
    RECOMP_CALL(sub_17170449); /* 0x17172421: call 0x17170449 */
    RECOMP_FLAGS_IN();
    goto L_1717260B; /* 0x17172426: jmp 0x1717260b */
L_1717242B:
    PUSH32(esp, 1); /* 0x1717242B: push 1 */
    ecx = esi; /* 0x1717242D: mov ecx, esi */
    RECOMP_CALL(sub_171702F3); /* 0x1717242F: call 0x171702f3 */
    RECOMP_FLAGS_IN();
L_17172434:
    ecx = MEM32(esi + 0x26C); /* 0x17172434: mov ecx, dword ptr [esi + 0x26c] */
    RECOMP_CALL(sub_17173B81); /* 0x1717243A: call 0x17173b81 */
    RECOMP_FLAGS_IN();
    goto L_1717260B; /* 0x1717243F: jmp 0x1717260b */
L_17172444:
    PUSH32(esp, 1); /* 0x17172444: push 1 */
    ecx = esi; /* 0x17172446: mov ecx, esi */
    RECOMP_CALL(sub_17170358); /* 0x17172448: call 0x17170358 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_17172434; /* 0x1717244D: jmp 0x17172434 */
L_1717244F:
    ecx = esi; /* 0x1717244F: mov ecx, esi */
    RECOMP_CALL(sub_17171718); /* 0x17172451: call 0x17171718 */
    RECOMP_FLAGS_IN();
    goto L_1717260B; /* 0x17172456: jmp 0x1717260b */
L_1717245B:
    ebx = MEM32(ebp + (-0x40)); /* 0x1717245B: mov ebx, dword ptr [ebp - 0x40] */
    goto L_1717260B; /* 0x1717245E: jmp 0x1717260b */
L_17172463:
    ebx = MEM32(ebp + (-0x40)); /* 0x17172463: mov ebx, dword ptr [ebp - 0x40] */
    PUSH32(esp, MEM32(ebx + 0x18)); /* 0x17172466: push dword ptr [ebx + 0x18] */
    ecx = esi; /* 0x17172469: mov ecx, esi */
    MEM32(ebx + 0x10) = 2; /* 0x1717246B: mov dword ptr [ebx + 0x10], 2 */
    RECOMP_CALL(sub_17171880); /* 0x17172472: call 0x17171880 */
    RECOMP_FLAGS_IN();
    goto L_171724E0; /* 0x17172477: jmp 0x171724e0 */
L_17172479:
    edi = MEM32(ebp + (-0x40)); /* 0x17172479: mov edi, dword ptr [ebp - 0x40] */
    PUSH32(esp, 0); /* 0x1717247C: push 0 */
    PUSH32(esp, 0); /* 0x1717247E: push 0 */
    PUSH32(esp, MEM32(edi + 0x18)); /* 0x17172480: push dword ptr [edi + 0x18] */
    ecx = esi; /* 0x17172483: mov ecx, esi */
    ebx = edi; /* 0x17172485: mov ebx, edi */
    MEM32(edi + 0x10) = 2; /* 0x17172487: mov dword ptr [edi + 0x10], 2 */
    RECOMP_CALL(sub_17171040); /* 0x1717248E: call 0x17171040 */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x18) = eax; /* 0x17172493: mov dword ptr [edi + 0x18], eax */
    MEM32(esi + 0x58) = 1; /* 0x17172496: mov dword ptr [esi + 0x58], 1 */
    goto L_171724E3; /* 0x1717249D: jmp 0x171724e3 */
L_1717249F:
    ebx = MEM32(ebp + (-0x40)); /* 0x1717249F: mov ebx, dword ptr [ebp - 0x40] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171724A2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebx + 0x18), edi */ /* 0x171724A4: cmp dword ptr [ebx + 0x18], edi */
    _flag_a = (uint32_t)(MEM32(ebx + 0x18)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x171724A7: sete al */
L_171724AA:
    MEM32(ebx + 0x18) = eax; /* 0x171724AA: mov dword ptr [ebx + 0x18], eax */
    goto L_1717260B; /* 0x171724AD: jmp 0x1717260b */
L_171724B2:
    ebx = MEM32(ebp + (-0x40)); /* 0x171724B2: mov ebx, dword ptr [ebp - 0x40] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(MEM32(ebx + 0x18));
    _cf = (MEM32(ebx + 0x18)) != 0;
    MEM32(ebx + 0x18) = (uint32_t)(-(int32_t)MEM32(ebx + 0x18)); /* 0x171724B5: neg dword ptr [ebx + 0x18] */
    _flag_k = FK_CMP;
    goto L_1717260B; /* 0x171724B8: jmp 0x1717260b */
L_171724BD:
    eax = MEM32(ebp + (-0x3C)); /* 0x171724BD: mov eax, dword ptr [ebp - 0x3c] */
    ebx = MEM32(ebp + (-0x40)); /* 0x171724C0: mov ebx, dword ptr [ebp - 0x40] */
    eax = MEM32(eax + 0x18); /* 0x171724C3: mov eax, dword ptr [eax + 0x18] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebx + 0x18)); /* 0x171724C6: imul eax, dword ptr [ebx + 0x18] */
    RECOMP_BACKEDGE();
    goto L_171724AA; /* 0x171724CA: jmp 0x171724aa */
L_171724CC:
    eax = MEM32(ebp + (-0x3C)); /* 0x171724CC: mov eax, dword ptr [ebp - 0x3c] */
    ecx = MEM32(eax + 0x18); /* 0x171724CF: mov ecx, dword ptr [eax + 0x18] */
    /* cmp ecx, edi */ /* 0x171724D2: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = MEM32(ebp + (-0x40)); /* 0x171724D4: mov ebx, dword ptr [ebp - 0x40] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171724EA; /* 0x171724D7: je 0x171724ea */
L_171724D9:
    eax = MEM32(ebx + 0x18); /* 0x171724D9: mov eax, dword ptr [ebx + 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171724DC: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x171724DE: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
L_171724E0:
    MEM32(ebx + 0x18) = eax; /* 0x171724E0: mov dword ptr [ebx + 0x18], eax */
L_171724E3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171724E3: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1717260B; /* 0x171724E5: jmp 0x1717260b */
L_171724EA:
    PUSH32(esp, 0x17021A88u); /* 0x171724EA: push 0x17021a88 */
    PUSH32(esp, 0x5DFu); /* 0x171724EF: push 0x5df */
    eax = esi + 0x278; /* 0x171724F4: lea eax, [esi + 0x278] */
    PUSH32(esp, eax); /* 0x171724FA: push eax */
    eax = esi + 0x18; /* 0x171724FB: lea eax, [esi + 0x18] */
    PUSH32(esp, eax); /* 0x171724FE: push eax */
    RECOMP_CALL(sub_17174059); /* 0x171724FF: call 0x17174059 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x17172504: add esp, 0x10 */
    _flag_k = FK_ADD;
    MEM32(esi + 0x44) = 1; /* 0x17172507: mov dword ptr [esi + 0x44], 1 */
    goto L_1717260B; /* 0x1717250E: jmp 0x1717260b */
L_17172513:
    eax = MEM32(ebp + (-0x3C)); /* 0x17172513: mov eax, dword ptr [ebp - 0x3c] */
    ebx = MEM32(ebp + (-0x40)); /* 0x17172516: mov ebx, dword ptr [ebp - 0x40] */
    eax = MEM32(eax + 0x18); /* 0x17172519: mov eax, dword ptr [eax + 0x18] */
    _flag_a = (uint32_t)(MEM32(ebx + 0x18)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebx + 0x18) = MEM32(ebx + 0x18) + eax; /* 0x1717251C: add dword ptr [ebx + 0x18], eax */
    _flag_k = FK_ADD;
    goto L_1717260B; /* 0x1717251F: jmp 0x1717260b */
L_17172524:
    eax = MEM32(ebp + (-0x3C)); /* 0x17172524: mov eax, dword ptr [ebp - 0x3c] */
    ebx = MEM32(ebp + (-0x40)); /* 0x17172527: mov ebx, dword ptr [ebp - 0x40] */
    eax = MEM32(eax + 0x18); /* 0x1717252A: mov eax, dword ptr [eax + 0x18] */
    _flag_a = (uint32_t)(MEM32(ebx + 0x18)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebx + 0x18) = MEM32(ebx + 0x18) - eax; /* 0x1717252D: sub dword ptr [ebx + 0x18], eax */
    _flag_k = FK_CMP;
    goto L_1717260B; /* 0x17172530: jmp 0x1717260b */
L_17172535:
    ebx = MEM32(ebp + (-0x40)); /* 0x17172535: mov ebx, dword ptr [ebp - 0x40] */
    eax = MEM32(ebx + 0x18); /* 0x17172538: mov eax, dword ptr [ebx + 0x18] */
    ecx = MEM32(ebp + (-0x3C)); /* 0x1717253B: mov ecx, dword ptr [ebp - 0x3c] */
    /* cmp eax, MEM32(ecx + 0x18) */ /* 0x1717253E: cmp eax, dword ptr [ecx + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x18));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_1717254F; /* 0x17172541: jmp 0x1717254f */
L_17172543:
    ebx = MEM32(ebp + (-0x40)); /* 0x17172543: mov ebx, dword ptr [ebp - 0x40] */
    eax = MEM32(ebx + 0x18); /* 0x17172546: mov eax, dword ptr [ebx + 0x18] */
    ecx = MEM32(ebp + (-0x3C)); /* 0x17172549: mov ecx, dword ptr [ebp - 0x3c] */
    /* cmp MEM32(ecx + 0x18), eax */ /* 0x1717254C: cmp dword ptr [ecx + 0x18], eax */
    _flag_a = (uint32_t)(MEM32(ecx + 0x18)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_1717254F:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1717254F: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x17172551: neg eax */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    goto L_171724AA; /* 0x17172553: jmp 0x171724aa */
L_17172558:
    ebx = MEM32(ebp + (-0x40)); /* 0x17172558: mov ebx, dword ptr [ebp - 0x40] */
    eax = MEM32(ebx + 0x18); /* 0x1717255B: mov eax, dword ptr [ebx + 0x18] */
    ecx = MEM32(ebp + (-0x3C)); /* 0x1717255E: mov ecx, dword ptr [ebp - 0x3c] */
    /* cmp MEM32(ecx + 0x18), eax */ /* 0x17172561: cmp dword ptr [ecx + 0x18], eax */
    _flag_a = (uint32_t)(MEM32(ecx + 0x18)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_17172564:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x17172564: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_17172586; /* 0x17172566: jmp 0x17172586 */
L_17172568:
    ebx = MEM32(ebp + (-0x40)); /* 0x17172568: mov ebx, dword ptr [ebp - 0x40] */
    eax = MEM32(ebx + 0x18); /* 0x1717256B: mov eax, dword ptr [ebx + 0x18] */
    ecx = MEM32(ebp + (-0x3C)); /* 0x1717256E: mov ecx, dword ptr [ebp - 0x3c] */
    /* cmp eax, MEM32(ecx + 0x18) */ /* 0x17172571: cmp eax, dword ptr [ecx + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x18));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    goto L_17172564; /* 0x17172574: jmp 0x17172564 */
L_17172576:
    ebx = MEM32(ebp + (-0x40)); /* 0x17172576: mov ebx, dword ptr [ebp - 0x40] */
    eax = MEM32(ebx + 0x18); /* 0x17172579: mov eax, dword ptr [ebx + 0x18] */
    ecx = MEM32(ebp + (-0x3C)); /* 0x1717257C: mov ecx, dword ptr [ebp - 0x3c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x18));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ecx + 0x18); /* 0x1717257F: sub eax, dword ptr [ecx + 0x18] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x17172582: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x17172584: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_17172586:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17172586: inc eax */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_171724AA; /* 0x17172587: jmp 0x171724aa */
L_1717258C:
    ebx = MEM32(ebp + (-0x40)); /* 0x1717258C: mov ebx, dword ptr [ebp - 0x40] */
    eax = MEM32(ebx + 0x18); /* 0x1717258F: mov eax, dword ptr [ebx + 0x18] */
    edx = MEM32(ebp + (-0x3C)); /* 0x17172592: mov edx, dword ptr [ebp - 0x3c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x17172595: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, MEM32(edx + 0x18) */ /* 0x17172597: cmp eax, dword ptr [edx + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x18));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(ecx, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x1717259A: setne cl */
    MEM32(ebx + 0x18) = ecx; /* 0x1717259D: mov dword ptr [ebx + 0x18], ecx */
    RECOMP_BACKEDGE();
    goto L_171724E3; /* 0x171725A0: jmp 0x171724e3 */
L_171725A5:
    ebx = MEM32(ebp + (-0x40)); /* 0x171725A5: mov ebx, dword ptr [ebp - 0x40] */
    /* cmp MEM32(ebx + 0x18), edi */ /* 0x171725A8: cmp dword ptr [ebx + 0x18], edi */
    _flag_a = (uint32_t)(MEM32(ebx + 0x18)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171725C7; /* 0x171725AB: je 0x171725c7 */
L_171725AD:
    eax = MEM32(ebp + (-0x3C)); /* 0x171725AD: mov eax, dword ptr [ebp - 0x3c] */
    /* cmp MEM32(eax + 0x18), edi */ /* 0x171725B0: cmp dword ptr [eax + 0x18], edi */
    _flag_a = (uint32_t)(MEM32(eax + 0x18)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171725C7; /* 0x171725B3: je 0x171725c7 */
L_171725B5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171725B5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171725B7: inc eax */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_171724AA; /* 0x171725B8: jmp 0x171724aa */
L_171725BD:
    ebx = MEM32(ebp + (-0x40)); /* 0x171725BD: mov ebx, dword ptr [ebp - 0x40] */
    /* cmp MEM32(ebx + 0x18), edi */ /* 0x171725C0: cmp dword ptr [ebx + 0x18], edi */
    _flag_a = (uint32_t)(MEM32(ebx + 0x18)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_171725B5; /* 0x171725C3: jne 0x171725b5 */
L_171725C5:
    RECOMP_BACKEDGE();
    goto L_171725AD; /* 0x171725C5: jmp 0x171725ad */
L_171725C7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171725C7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_171724AA; /* 0x171725C9: jmp 0x171724aa */
L_171725CE:
    ebx = MEM32(ebp + (-0x40)); /* 0x171725CE: mov ebx, dword ptr [ebp - 0x40] */
    /* cmp MEM32(ebx + 0x18), edi */ /* 0x171725D1: cmp dword ptr [ebx + 0x18], edi */
    _flag_a = (uint32_t)(MEM32(ebx + 0x18)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x3C)); /* 0x171725D4: mov eax, dword ptr [ebp - 0x3c] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_171725DC; /* 0x171725D7: jne 0x171725dc */
L_171725D9:
    eax = MEM32(ebp + (-0x38)); /* 0x171725D9: mov eax, dword ptr [ebp - 0x38] */
L_171725DC:
    eax = MEM32(eax + 0x18); /* 0x171725DC: mov eax, dword ptr [eax + 0x18] */
    RECOMP_BACKEDGE();
    goto L_171724AA; /* 0x171725DF: jmp 0x171724aa */
L_171725E4:
    PUSH32(esp, 0x30u); /* 0x171725E4: push 0x30 */
    RECOMP_CALL(sub_170E2944); /* 0x171725E6: call 0x170e2944 */
    RECOMP_FLAGS_IN();
    /* cmp eax, edi */ /* 0x171725EB: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17172601; /* 0x171725ED: je 0x17172601 */
L_171725EF:
    ecx = esi + 0x278; /* 0x171725EF: lea ecx, [esi + 0x278] */
    PUSH32(esp, ecx); /* 0x171725F5: push ecx */
    ecx = eax; /* 0x171725F6: mov ecx, eax */
    RECOMP_CALL(sub_1712937F); /* 0x171725F8: call 0x1712937f */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x171725FD: mov ebx, eax */
    goto L_17172603; /* 0x171725FF: jmp 0x17172603 */
L_17172601:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x17172601: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_17172603:
    PUSH32(esp, ebx); /* 0x17172603: push ebx */
    ecx = esi; /* 0x17172604: mov ecx, esi */
    RECOMP_CALL(sub_17171138); /* 0x17172606: call 0x17171138 */
    RECOMP_FLAGS_IN();
L_1717260B:
    /* cmp MEM32(esi + 0x44), edi */ /* 0x1717260B: cmp dword ptr [esi + 0x44], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x44)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17172629; /* 0x1717260E: jne 0x17172629 */
L_17172610:
    eax = MEM32(esi + 0x60); /* 0x17172610: mov eax, dword ptr [esi + 0x60] */
    /* cmp eax, edi */ /* 0x17172613: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17172630; /* 0x17172615: je 0x17172630 */
L_17172617:
    ecx = MEM32(eax + 0xC); /* 0x17172617: mov ecx, dword ptr [eax + 0xc] */
    MEM32(esi + 0x60) = ecx; /* 0x1717261A: mov dword ptr [esi + 0x60], ecx */
    MEM32(eax + 0x8) = ebx; /* 0x1717261D: mov dword ptr [eax + 8], ebx */
    ecx = MEM32(esi + 0x5C); /* 0x17172620: mov ecx, dword ptr [esi + 0x5c] */
    MEM32(eax + 0xC) = ecx; /* 0x17172623: mov dword ptr [eax + 0xc], ecx */
L_17172626:
    MEM32(esi + 0x5C) = eax; /* 0x17172626: mov dword ptr [esi + 0x5c], eax */
L_17172629:
    edi = POP32_VAL(esp); /* 0x17172629: pop edi */
L_1717262A:
    esi = POP32_VAL(esp); /* 0x1717262A: pop esi */
    ebx = POP32_VAL(esp); /* 0x1717262B: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1717262C: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1717262D: ret 8 */
L_17172630:
    PUSH32(esp, 0x14u); /* 0x17172630: push 0x14 */
    RECOMP_CALL(sub_170E2944); /* 0x17172632: call 0x170e2944 */
    RECOMP_FLAGS_IN();
    /* cmp eax, edi */ /* 0x17172637: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1717264D; /* 0x17172639: je 0x1717264d */
L_1717263B:
    PUSH32(esp, 0x1700B080u); /* 0x1717263B: push 0x1700b080 */
    PUSH32(esp, MEM32(esi + 0x5C)); /* 0x17172640: push dword ptr [esi + 0x5c] */
    ecx = eax; /* 0x17172643: mov ecx, eax */
    PUSH32(esp, ebx); /* 0x17172645: push ebx */
    RECOMP_CALL(sub_17129155); /* 0x17172646: call 0x17129155 */
    RECOMP_FLAGS_IN();
    goto L_1717264F; /* 0x1717264B: jmp 0x1717264f */
L_1717264D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1717264D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1717264F:
    /* cmp eax, edi */ /* 0x1717264F: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_17172626; /* 0x17172651: jne 0x17172626 */
L_17172653:
    PUSH32(esp, 0x1700B060u); /* 0x17172653: push 0x1700b060 */
    RECOMP_BACKEDGE();
    goto L_1717234E; /* 0x17172658: jmp 0x1717234e */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      case 0x1717236Eu: goto L_1717236E;
      case 0x17172382u: goto L_17172382;
      case 0x17172394u: goto L_17172394;
      case 0x171723A7u: goto L_171723A7;
      case 0x171723AFu: goto L_171723AF;
      case 0x171723BBu: goto L_171723BB;
      case 0x171723C7u: goto L_171723C7;
      case 0x171723D9u: goto L_171723D9;
      case 0x171723EAu: goto L_171723EA;
      case 0x17172401u: goto L_17172401;
      case 0x17172413u: goto L_17172413;
      case 0x1717241Fu: goto L_1717241F;
      case 0x1717242Bu: goto L_1717242B;
      case 0x17172444u: goto L_17172444;
      case 0x1717244Fu: goto L_1717244F;
      case 0x1717245Bu: goto L_1717245B;
      case 0x17172463u: goto L_17172463;
      case 0x17172479u: goto L_17172479;
      case 0x1717249Fu: goto L_1717249F;
      case 0x171724B2u: goto L_171724B2;
      case 0x171724BDu: goto L_171724BD;
      case 0x171724CCu: goto L_171724CC;
      case 0x17172513u: goto L_17172513;
      case 0x17172524u: goto L_17172524;
      case 0x17172535u: goto L_17172535;
      case 0x17172543u: goto L_17172543;
      case 0x17172558u: goto L_17172558;
      case 0x17172568u: goto L_17172568;
      case 0x17172576u: goto L_17172576;
      case 0x1717258Cu: goto L_1717258C;
      case 0x171725A5u: goto L_171725A5;
      case 0x171725BDu: goto L_171725BD;
      case 0x171725CEu: goto L_171725CE;
      case 0x171725E4u: goto L_171725E4;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1717271E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1717271Eu);

L_1717271E:
    edi = edi; /* 0x1717271E: mov edi, edi */
    PUSH32(esp, ebx); /* 0x17172720: push ebx */
    PUSH32(esp, esi); /* 0x17172721: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x17172722: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x17172724: push edi */
    MEM32(0x1723F650) = esi; /* 0x17172725: mov dword ptr [0x1723f650], esi */
    MEM32(0x1723F64C) = esi; /* 0x1717272B: mov dword ptr [0x1723f64c], esi */
    MEM32(0x1723F644) = 0x1723F250u; /* 0x17172731: mov dword ptr [0x1723f644], 0x1723f250 */
    MEM32(0x1723F640) = 0x1723EA80u; /* 0x1717273B: mov dword ptr [0x1723f640], 0x1723ea80 */
    MEM16(0x1723F250) = (uint16_t)(LO16(esi)); /* 0x17172745: mov word ptr [0x1723f250], si */
L_1717274C:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1717274C: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x1723F648) = eax; /* 0x1717274F: mov dword ptr [0x1723f648], eax */
L_17172754:
    ecx = (int32_t)(int16_t)MEM16(esi * 2 + 0x17236C98); /* 0x17172754: movsx ecx, word ptr [esi*2 + 0x17236c98] */
    /* test ecx, ecx */ /* 0x1717275C: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1717283B; /* 0x1717275E: jne 0x1717283b */
L_17172764:
    /* test eax, eax */ /* 0x17172764: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_17172783; /* 0x17172766: jge 0x17172783 */
L_17172768:
    ecx = MEM32(0x1723F678); /* 0x17172768: mov ecx, dword ptr [0x1723f678] */
    RECOMP_CALL(sub_17171205); /* 0x1717276E: call 0x17171205 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17172773: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x1723F648) = eax; /* 0x17172775: mov dword ptr [0x1723f648], eax */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_17172783; /* 0x1717277A: jge 0x17172783 */
L_1717277C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1717277C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x1723F648) = eax; /* 0x1717277E: mov dword ptr [0x1723f648], eax */
L_17172783:
    ecx = (int32_t)(int16_t)MEM16(esi * 2 + 0x17236D58); /* 0x17172783: movsx ecx, word ptr [esi*2 + 0x17236d58] */
    /* test ecx, ecx */ /* 0x1717278B: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171727FE; /* 0x1717278D: je 0x171727fe */
L_1717278F:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x1717278F: add ecx, eax */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_S)) goto L_171727FE; /* 0x17172791: js 0x171727fe */
L_17172793:
    edi = 0x171u; /* 0x17172793: mov edi, 0x171 */
    /* cmp ecx, edi */ /* 0x17172798: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_17172803; /* 0x1717279A: jg 0x17172803 */
L_1717279C:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x1717279C: add ecx, ecx */
    _flag_k = FK_ADD;
    edx = (int32_t)(int16_t)MEM16(ecx + 0x172371A0); /* 0x1717279E: movsx edx, word ptr [ecx + 0x172371a0] */
    /* cmp edx, eax */ /* 0x171727A5: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17172803; /* 0x171727A7: jne 0x17172803 */
L_171727A9:
    eax = MEM32(0x1723F644); /* 0x171727A9: mov eax, dword ptr [0x1723f644] */
    /* cmp eax, 0x1723F636u */ /* 0x171727AE: cmp eax, 0x1723f636 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1723F636u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_17172B6D; /* 0x171727B3: jae 0x17172b6d */
L_171727B9:
    esi = (int32_t)(int16_t)MEM16(ecx + 0x17236EB8); /* 0x171727B9: movsx esi, word ptr [ecx + 0x17236eb8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171727C0: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171727C1: inc eax */
    _flag_k = FK_INC;
    MEM32(0x1723F644) = eax; /* 0x171727C2: mov dword ptr [0x1723f644], eax */
    MEM16(eax) = (uint16_t)(LO16(esi)); /* 0x171727C7: mov word ptr [eax], si */
    _flag_a = (uint32_t)(MEM32(0x1723F640)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(0x1723F640) = MEM32(0x1723F640) + 4; /* 0x171727CA: add dword ptr [0x1723f640], 4 */
    _flag_k = FK_ADD;
    eax = MEM32(0x1723F638); /* 0x171727D1: mov eax, dword ptr [0x1723f638] */
    ecx = MEM32(0x1723F640); /* 0x171727D6: mov ecx, dword ptr [0x1723f640] */
    MEM32(ecx) = eax; /* 0x171727DC: mov dword ptr [ecx], eax */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x171727DE: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(0x1723F64C), 0 */ /* 0x171727E1: cmp dword ptr [0x1723f64c], 0 */
    _flag_a = (uint32_t)(MEM32(0x1723F64C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(0x1723F648) = eax; /* 0x171727E8: mov dword ptr [0x1723f648], eax */
    RECOMP_BACKEDGE();
    if (CMP_LE(_flag_a, _flag_b)) goto L_17172754; /* 0x171727ED: jle 0x17172754 */
L_171727F3:
    _flag_a = (uint32_t)(MEM32(0x1723F64C)); _flag_b = (uint32_t)(1);
    MEM32(0x1723F64C) = MEM32(0x1723F64C) - 1; /* 0x171727F3: dec dword ptr [0x1723f64c] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    goto L_17172754; /* 0x171727F9: jmp 0x17172754 */
L_171727FE:
    edi = 0x171u; /* 0x171727FE: mov edi, 0x171 */
L_17172803:
    ecx = (int32_t)(int16_t)MEM16(esi * 2 + 0x17236DF8); /* 0x17172803: movsx ecx, word ptr [esi*2 + 0x17236df8] */
    /* test ecx, ecx */ /* 0x1717280B: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17172AAB; /* 0x1717280D: je 0x17172aab */
L_17172813:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x17172813: add ecx, eax */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_S)) goto L_17172AAB; /* 0x17172815: js 0x17172aab */
L_1717281B:
    /* cmp ecx, edi */ /* 0x1717281B: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_17172AAB; /* 0x1717281D: jg 0x17172aab */
L_17172823:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x17172823: add ecx, ecx */
    _flag_k = FK_ADD;
    edx = (int32_t)(int16_t)MEM16(ecx + 0x172371A0); /* 0x17172825: movsx edx, word ptr [ecx + 0x172371a0] */
    /* cmp edx, eax */ /* 0x1717282C: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17172AAB; /* 0x1717282E: jne 0x17172aab */
L_17172834:
    ecx = (int32_t)(int16_t)MEM16(ecx + 0x17236EB8); /* 0x17172834: movsx ecx, word ptr [ecx + 0x17236eb8] */
L_1717283B:
    eax = MEM32(0x1723F640); /* 0x1717283B: mov eax, dword ptr [0x1723f640] */
    edi = ecx + ecx; /* 0x17172840: lea edi, [ecx + ecx] */
    esi = (int32_t)(int16_t)MEM16(edi + 0x17236C38); /* 0x17172843: movsx esi, word ptr [edi + 0x17236c38] */
    ebx = esi; /* 0x1717284A: mov ebx, esi */
    if (2u) _cf = (((ebx) >> 30) & 1u); /* 0x1717284C: shl ebx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ebx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 2u; /* 0x1717284C: shl ebx, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x1717284F: sub eax, ebx */
    _flag_k = FK_CMP;
    eax = MEM32(eax + 0x4); /* 0x17172851: mov eax, dword ptr [eax + 4] */
    MEM32(0x1723F63C) = eax; /* 0x17172854: mov dword ptr [0x1723f63c], eax */
    eax = ecx + (-0x1); /* 0x17172859: lea eax, [ecx - 1] */
    /* cmp eax, 0x2Eu */ /* 0x1717285C: cmp eax, 0x2e */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x2Eu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_171729DA; /* 0x1717285F: ja 0x171729da */
L_17172865:
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x17172B86)); goto _ljump; }
L_1717286C:
    PUSH32(esp, 1); /* 0x1717286C: push 1 */
    PUSH32(esp, 0); /* 0x1717286E: push 0 */
    goto L_171729CF; /* 0x17172870: jmp 0x171729cf */
L_17172875:
    PUSH32(esp, 1); /* 0x17172875: push 1 */
    PUSH32(esp, 1); /* 0x17172877: push 1 */
    goto L_171729CF; /* 0x17172879: jmp 0x171729cf */
L_1717287E:
    PUSH32(esp, 1); /* 0x1717287E: push 1 */
    PUSH32(esp, 2); /* 0x17172880: push 2 */
    goto L_171729CF; /* 0x17172882: jmp 0x171729cf */
L_17172887:
    PUSH32(esp, 2); /* 0x17172887: push 2 */
    PUSH32(esp, 3); /* 0x17172889: push 3 */
    goto L_171729CF; /* 0x1717288B: jmp 0x171729cf */
L_17172890:
    PUSH32(esp, 0); /* 0x17172890: push 0 */
    PUSH32(esp, 4); /* 0x17172892: push 4 */
    goto L_171729CF; /* 0x17172894: jmp 0x171729cf */
L_17172899:
    PUSH32(esp, 0); /* 0x17172899: push 0 */
    PUSH32(esp, 5); /* 0x1717289B: push 5 */
    goto L_171729CF; /* 0x1717289D: jmp 0x171729cf */
L_171728A2:
    PUSH32(esp, 1); /* 0x171728A2: push 1 */
    PUSH32(esp, 6); /* 0x171728A4: push 6 */
    goto L_171729CF; /* 0x171728A6: jmp 0x171729cf */
L_171728AB:
    PUSH32(esp, 1); /* 0x171728AB: push 1 */
    PUSH32(esp, 7); /* 0x171728AD: push 7 */
    goto L_171729CF; /* 0x171728AF: jmp 0x171729cf */
L_171728B4:
    PUSH32(esp, 1); /* 0x171728B4: push 1 */
    PUSH32(esp, 8); /* 0x171728B6: push 8 */
    goto L_171729CF; /* 0x171728B8: jmp 0x171729cf */
L_171728BD:
    PUSH32(esp, 1); /* 0x171728BD: push 1 */
    PUSH32(esp, 9); /* 0x171728BF: push 9 */
    goto L_171729CF; /* 0x171728C1: jmp 0x171729cf */
L_171728C6:
    PUSH32(esp, 0); /* 0x171728C6: push 0 */
    PUSH32(esp, 0xAu); /* 0x171728C8: push 0xa */
    goto L_171729CF; /* 0x171728CA: jmp 0x171729cf */
L_171728CF:
    PUSH32(esp, 0); /* 0x171728CF: push 0 */
    PUSH32(esp, 0xBu); /* 0x171728D1: push 0xb */
    goto L_171729CF; /* 0x171728D3: jmp 0x171729cf */
L_171728D8:
    PUSH32(esp, 0); /* 0x171728D8: push 0 */
    PUSH32(esp, 0xCu); /* 0x171728DA: push 0xc */
    goto L_171729CF; /* 0x171728DC: jmp 0x171729cf */
L_171728E1:
    PUSH32(esp, 0); /* 0x171728E1: push 0 */
    PUSH32(esp, 0xDu); /* 0x171728E3: push 0xd */
    goto L_171729CF; /* 0x171728E5: jmp 0x171729cf */
L_171728EA:
    PUSH32(esp, 0); /* 0x171728EA: push 0 */
    PUSH32(esp, 0xEu); /* 0x171728EC: push 0xe */
    goto L_171729CF; /* 0x171728EE: jmp 0x171729cf */
L_171728F3:
    PUSH32(esp, 1); /* 0x171728F3: push 1 */
    PUSH32(esp, 0xFu); /* 0x171728F5: push 0xf */
    goto L_171729CF; /* 0x171728F7: jmp 0x171729cf */
L_171728FC:
    PUSH32(esp, 1); /* 0x171728FC: push 1 */
    PUSH32(esp, 0x10u); /* 0x171728FE: push 0x10 */
    goto L_171729CF; /* 0x17172900: jmp 0x171729cf */
L_17172905:
    PUSH32(esp, 1); /* 0x17172905: push 1 */
    PUSH32(esp, 0x11u); /* 0x17172907: push 0x11 */
    goto L_171729CF; /* 0x17172909: jmp 0x171729cf */
L_1717290E:
    PUSH32(esp, 1); /* 0x1717290E: push 1 */
    PUSH32(esp, 0x12u); /* 0x17172910: push 0x12 */
    goto L_171729CF; /* 0x17172912: jmp 0x171729cf */
L_17172917:
    PUSH32(esp, 1); /* 0x17172917: push 1 */
    PUSH32(esp, 0x13u); /* 0x17172919: push 0x13 */
    goto L_171729CF; /* 0x1717291B: jmp 0x171729cf */
L_17172920:
    PUSH32(esp, 1); /* 0x17172920: push 1 */
    PUSH32(esp, 0x14u); /* 0x17172922: push 0x14 */
    goto L_171729CF; /* 0x17172924: jmp 0x171729cf */
L_17172929:
    PUSH32(esp, 1); /* 0x17172929: push 1 */
    PUSH32(esp, 0x15u); /* 0x1717292B: push 0x15 */
    goto L_171729CF; /* 0x1717292D: jmp 0x171729cf */
L_17172932:
    PUSH32(esp, 1); /* 0x17172932: push 1 */
    PUSH32(esp, 0x16u); /* 0x17172934: push 0x16 */
    goto L_171729CF; /* 0x17172936: jmp 0x171729cf */
L_1717293B:
    PUSH32(esp, 1); /* 0x1717293B: push 1 */
    PUSH32(esp, 0x17u); /* 0x1717293D: push 0x17 */
    goto L_171729CF; /* 0x1717293F: jmp 0x171729cf */
L_17172944:
    PUSH32(esp, 2); /* 0x17172944: push 2 */
    PUSH32(esp, 0x18u); /* 0x17172946: push 0x18 */
    goto L_171729CF; /* 0x17172948: jmp 0x171729cf */
L_1717294D:
    PUSH32(esp, 2); /* 0x1717294D: push 2 */
    PUSH32(esp, 0x19u); /* 0x1717294F: push 0x19 */
    goto L_171729CF; /* 0x17172951: jmp 0x171729cf */
L_17172953:
    PUSH32(esp, 1); /* 0x17172953: push 1 */
    PUSH32(esp, 0x1Au); /* 0x17172955: push 0x1a */
    goto L_171729CF; /* 0x17172957: jmp 0x171729cf */
L_17172959:
    PUSH32(esp, 2); /* 0x17172959: push 2 */
    PUSH32(esp, 0x1Bu); /* 0x1717295B: push 0x1b */
    goto L_171729CF; /* 0x1717295D: jmp 0x171729cf */
L_1717295F:
    PUSH32(esp, 2); /* 0x1717295F: push 2 */
    PUSH32(esp, 0x1Cu); /* 0x17172961: push 0x1c */
    goto L_171729CF; /* 0x17172963: jmp 0x171729cf */
L_17172965:
    PUSH32(esp, 1); /* 0x17172965: push 1 */
    PUSH32(esp, 0x1Du); /* 0x17172967: push 0x1d */
    goto L_171729CF; /* 0x17172969: jmp 0x171729cf */
L_1717296B:
    PUSH32(esp, 2); /* 0x1717296B: push 2 */
    PUSH32(esp, 0x1Eu); /* 0x1717296D: push 0x1e */
    goto L_171729CF; /* 0x1717296F: jmp 0x171729cf */
L_17172971:
    PUSH32(esp, 2); /* 0x17172971: push 2 */
    PUSH32(esp, 0x1Fu); /* 0x17172973: push 0x1f */
    goto L_171729CF; /* 0x17172975: jmp 0x171729cf */
L_17172977:
    PUSH32(esp, 2); /* 0x17172977: push 2 */
    PUSH32(esp, 0x20u); /* 0x17172979: push 0x20 */
    goto L_171729CF; /* 0x1717297B: jmp 0x171729cf */
L_1717297D:
    PUSH32(esp, 2); /* 0x1717297D: push 2 */
    PUSH32(esp, 0x21u); /* 0x1717297F: push 0x21 */
    goto L_171729CF; /* 0x17172981: jmp 0x171729cf */
L_17172983:
    PUSH32(esp, 1); /* 0x17172983: push 1 */
    PUSH32(esp, 0x22u); /* 0x17172985: push 0x22 */
    goto L_171729CF; /* 0x17172987: jmp 0x171729cf */
L_17172989:
    PUSH32(esp, 2); /* 0x17172989: push 2 */
    PUSH32(esp, 0x23u); /* 0x1717298B: push 0x23 */
    goto L_171729CF; /* 0x1717298D: jmp 0x171729cf */
L_1717298F:
    PUSH32(esp, 2); /* 0x1717298F: push 2 */
    PUSH32(esp, 0x24u); /* 0x17172991: push 0x24 */
    goto L_171729CF; /* 0x17172993: jmp 0x171729cf */
L_17172995:
    PUSH32(esp, 1); /* 0x17172995: push 1 */
    PUSH32(esp, 0x25u); /* 0x17172997: push 0x25 */
    goto L_171729CF; /* 0x17172999: jmp 0x171729cf */
L_1717299B:
    PUSH32(esp, 2); /* 0x1717299B: push 2 */
    PUSH32(esp, 0x26u); /* 0x1717299D: push 0x26 */
    goto L_171729CF; /* 0x1717299F: jmp 0x171729cf */
L_171729A1:
    PUSH32(esp, 1); /* 0x171729A1: push 1 */
    PUSH32(esp, 0x27u); /* 0x171729A3: push 0x27 */
    goto L_171729CF; /* 0x171729A5: jmp 0x171729cf */
L_171729A7:
    PUSH32(esp, 2); /* 0x171729A7: push 2 */
    PUSH32(esp, 0x28u); /* 0x171729A9: push 0x28 */
    goto L_171729CF; /* 0x171729AB: jmp 0x171729cf */
L_171729AD:
    PUSH32(esp, 1); /* 0x171729AD: push 1 */
    PUSH32(esp, 0x29u); /* 0x171729AF: push 0x29 */
    goto L_171729CF; /* 0x171729B1: jmp 0x171729cf */
L_171729B3:
    PUSH32(esp, 3); /* 0x171729B3: push 3 */
    PUSH32(esp, 0x2Au); /* 0x171729B5: push 0x2a */
    goto L_171729CF; /* 0x171729B7: jmp 0x171729cf */
L_171729B9:
    PUSH32(esp, 1); /* 0x171729B9: push 1 */
    PUSH32(esp, 0x2Bu); /* 0x171729BB: push 0x2b */
    goto L_171729CF; /* 0x171729BD: jmp 0x171729cf */
L_171729BF:
    PUSH32(esp, 0); /* 0x171729BF: push 0 */
    PUSH32(esp, 0x2Cu); /* 0x171729C1: push 0x2c */
    goto L_171729CF; /* 0x171729C3: jmp 0x171729cf */
L_171729C5:
    PUSH32(esp, 0); /* 0x171729C5: push 0 */
    PUSH32(esp, 0x2Du); /* 0x171729C7: push 0x2d */
    goto L_171729CF; /* 0x171729C9: jmp 0x171729cf */
L_171729CB:
    PUSH32(esp, 0); /* 0x171729CB: push 0 */
    PUSH32(esp, 0x2Eu); /* 0x171729CD: push 0x2e */
L_171729CF:
    ecx = MEM32(0x1723F678); /* 0x171729CF: mov ecx, dword ptr [0x1723f678] */
    RECOMP_CALL(sub_171722C7); /* 0x171729D5: call 0x171722c7 */
    RECOMP_FLAGS_IN();
L_171729DA:
    eax = MEM32(0x1723F644); /* 0x171729DA: mov eax, dword ptr [0x1723f644] */
    ecx = (int32_t)(int16_t)MEM16(edi + 0x17236BD8); /* 0x171729DF: movsx ecx, word ptr [edi + 0x17236bd8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(esi);
    _cf = (esi) != 0;
    esi = (uint32_t)(-(int32_t)esi); /* 0x171729E6: neg esi */
    _flag_k = FK_CMP;
    eax = eax + esi * 2; /* 0x171729E8: lea eax, [eax + esi*2] */
    MEM32(0x1723F644) = eax; /* 0x171729EB: mov dword ptr [0x1723f644], eax */
    edx = (int32_t)(int16_t)MEM16(eax); /* 0x171729F0: movsx edx, word ptr [eax] */
    _flag_a = (uint32_t)(MEM32(0x1723F640)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(0x1723F640) = MEM32(0x1723F640) - ebx; /* 0x171729F3: sub dword ptr [0x1723f640], ebx */
    _flag_k = FK_CMP;
    /* test edx, edx */ /* 0x171729F9: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17172A55; /* 0x171729FB: jne 0x17172a55 */
L_171729FD:
    /* test ecx, ecx */ /* 0x171729FD: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17172A55; /* 0x171729FF: jne 0x17172a55 */
L_17172A01:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17172A01: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17172A02: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, 0xFu); /* 0x17172A03: push 0xf */
    MEM32(0x1723F644) = eax; /* 0x17172A05: mov dword ptr [0x1723f644], eax */
    esi = POP32_VAL(esp); /* 0x17172A0A: pop esi */
    MEM16(eax) = (uint16_t)(LO16(esi)); /* 0x17172A0B: mov word ptr [eax], si */
    _flag_a = (uint32_t)(MEM32(0x1723F640)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(0x1723F640) = MEM32(0x1723F640) + 4; /* 0x17172A0E: add dword ptr [0x1723f640], 4 */
    _flag_k = FK_ADD;
    eax = MEM32(0x1723F63C); /* 0x17172A15: mov eax, dword ptr [0x1723f63c] */
    ecx = MEM32(0x1723F640); /* 0x17172A1A: mov ecx, dword ptr [0x1723f640] */
    MEM32(ecx) = eax; /* 0x17172A20: mov dword ptr [ecx], eax */
    eax = MEM32(0x1723F648); /* 0x17172A22: mov eax, dword ptr [0x1723f648] */
    /* test eax, eax */ /* 0x17172A27: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_17172A48; /* 0x17172A29: jge 0x17172a48 */
L_17172A2B:
    ecx = MEM32(0x1723F678); /* 0x17172A2B: mov ecx, dword ptr [0x1723f678] */
    RECOMP_CALL(sub_17171205); /* 0x17172A31: call 0x17171205 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17172A36: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x1723F648) = eax; /* 0x17172A38: mov dword ptr [0x1723f648], eax */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_17172A48; /* 0x17172A3D: jge 0x17172a48 */
L_17172A3F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17172A3F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x1723F648) = eax; /* 0x17172A41: mov dword ptr [0x1723f648], eax */
    /* test eax, eax */ /* 0x17172A46: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
L_17172A48:
    RECOMP_BACKEDGE();
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_17172754; /* 0x17172A48: jne 0x17172754 */
L_17172A4E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17172A4E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_17172B82; /* 0x17172A50: jmp 0x17172b82 */
L_17172A55:
    esi = ecx + ecx; /* 0x17172A55: lea esi, [ecx + ecx] */
    ecx = (int32_t)(int16_t)MEM16(esi + 0x17236E98); /* 0x17172A58: movsx ecx, word ptr [esi + 0x17236e98] */
    /* test ecx, ecx */ /* 0x17172A5F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17172A85; /* 0x17172A61: je 0x17172a85 */
L_17172A63:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x17172A63: add ecx, edx */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_S)) goto L_17172A85; /* 0x17172A65: js 0x17172a85 */
L_17172A67:
    /* cmp ecx, 0x171u */ /* 0x17172A67: cmp ecx, 0x171 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x171u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_17172A85; /* 0x17172A6D: jg 0x17172a85 */
L_17172A6F:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ecx; /* 0x17172A6F: add ecx, ecx */
    _flag_k = FK_ADD;
    edi = (int32_t)(int16_t)MEM16(ecx + 0x172371A0); /* 0x17172A71: movsx edi, word ptr [ecx + 0x172371a0] */
    /* cmp edi, edx */ /* 0x17172A78: cmp edi, edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17172A85; /* 0x17172A7A: jne 0x17172a85 */
L_17172A7C:
    esi = (int32_t)(int16_t)MEM16(ecx + 0x17236EB8); /* 0x17172A7C: movsx esi, word ptr [ecx + 0x17236eb8] */
    goto L_17172A8C; /* 0x17172A83: jmp 0x17172a8c */
L_17172A85:
    esi = (int32_t)(int16_t)MEM16(esi + 0x17236D38); /* 0x17172A85: movsx esi, word ptr [esi + 0x17236d38] */
L_17172A8C:
    /* cmp eax, 0x1723F636u */ /* 0x17172A8C: cmp eax, 0x1723f636 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1723F636u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_17172B6D; /* 0x17172A91: jae 0x17172b6d */
L_17172A97:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17172A97: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17172A98: inc eax */
    _flag_k = FK_INC;
    MEM32(0x1723F644) = eax; /* 0x17172A99: mov dword ptr [0x1723f644], eax */
    MEM16(eax) = (uint16_t)(LO16(esi)); /* 0x17172A9E: mov word ptr [eax], si */
    eax = MEM32(0x1723F63C); /* 0x17172AA1: mov eax, dword ptr [0x1723f63c] */
    goto L_17172B4B; /* 0x17172AA6: jmp 0x17172b4b */
L_17172AAB:
    /* cmp MEM32(0x1723F64C), 0 */ /* 0x17172AAB: cmp dword ptr [0x1723f64c], 0 */
    _flag_a = (uint32_t)(MEM32(0x1723F64C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17172AD1; /* 0x17172AB2: jne 0x17172ad1 */
L_17172AB4:
    PUSH32(esp, 0x1700B2F8u); /* 0x17172AB4: push 0x1700b2f8 */
    PUSH32(esp, MEM32(0x1723F678)); /* 0x17172AB9: push dword ptr [0x1723f678] */
    RECOMP_CALL(sub_17171A9A); /* 0x17172ABF: call 0x17171a9a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(0x1723F650)); _flag_b = (uint32_t)(1);
    MEM32(0x1723F650) = MEM32(0x1723F650) + 1; /* 0x17172AC4: inc dword ptr [0x1723f650] */
    _flag_k = FK_INC;
    eax = MEM32(0x1723F648); /* 0x17172ACA: mov eax, dword ptr [0x1723f648] */
    ecx = POP32_VAL(esp); /* 0x17172ACF: pop ecx */
    ecx = POP32_VAL(esp); /* 0x17172AD0: pop ecx */
L_17172AD1:
    PUSH32(esp, 3); /* 0x17172AD1: push 3 */
    ecx = POP32_VAL(esp); /* 0x17172AD3: pop ecx */
    /* cmp MEM32(0x1723F64C), ecx */ /* 0x17172AD4: cmp dword ptr [0x1723f64c], ecx */
    _flag_a = (uint32_t)(MEM32(0x1723F64C)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_17172B64; /* 0x17172ADA: jge 0x17172b64 */
L_17172AE0:
    MEM32(0x1723F64C) = ecx; /* 0x17172AE0: mov dword ptr [0x1723f64c], ecx */
    ecx = MEM32(0x1723F644); /* 0x17172AE6: mov ecx, dword ptr [0x1723f644] */
    edx = 0x100u; /* 0x17172AEC: mov edx, 0x100 */
L_17172AF1:
    eax = (int32_t)(int16_t)MEM16(ecx); /* 0x17172AF1: movsx eax, word ptr [ecx] */
    eax = (int32_t)(int16_t)MEM16(eax * 2 + 0x17236D58); /* 0x17172AF4: movsx eax, word ptr [eax*2 + 0x17236d58] */
    /* test eax, eax */ /* 0x17172AFC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17172B12; /* 0x17172AFE: je 0x17172b12 */
L_17172B00:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x17172B00: add eax, edx */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_S)) goto L_17172B12; /* 0x17172B02: js 0x17172b12 */
L_17172B04:
    /* cmp eax, edi */ /* 0x17172B04: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_17172B12; /* 0x17172B06: jg 0x17172b12 */
L_17172B08:
    /* cmp MEM16(eax * 2 + 0x172371A0), LO16(edx) */ /* 0x17172B08: cmp word ptr [eax*2 + 0x172371a0], dx */
    _flag_a = (uint32_t)(MEM16(eax * 2 + 0x172371A0)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17172B2B; /* 0x17172B10: je 0x17172b2b */
L_17172B12:
    /* cmp ecx, 0x1723F250u */ /* 0x17172B12: cmp ecx, 0x1723f250 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1723F250u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_17172B7F; /* 0x17172B18: jbe 0x17172b7f */
L_17172B1A:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x17172B1A: dec ecx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x17172B1B: dec ecx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(MEM32(0x1723F640)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(0x1723F640) = MEM32(0x1723F640) - 4; /* 0x17172B1C: sub dword ptr [0x1723f640], 4 */
    _flag_k = FK_CMP;
    MEM32(0x1723F644) = ecx; /* 0x17172B23: mov dword ptr [0x1723f644], ecx */
    RECOMP_BACKEDGE();
    goto L_17172AF1; /* 0x17172B29: jmp 0x17172af1 */
L_17172B2B:
    /* cmp ecx, 0x1723F636u */ /* 0x17172B2B: cmp ecx, 0x1723f636 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1723F636u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_17172B6D; /* 0x17172B31: jae 0x17172b6d */
L_17172B33:
    esi = (int32_t)(int16_t)MEM16(eax * 2 + 0x17236EB8); /* 0x17172B33: movsx esi, word ptr [eax*2 + 0x17236eb8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x17172B3B: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x17172B3C: inc ecx */
    _flag_k = FK_INC;
    MEM32(0x1723F644) = ecx; /* 0x17172B3D: mov dword ptr [0x1723f644], ecx */
    MEM16(ecx) = (uint16_t)(LO16(esi)); /* 0x17172B43: mov word ptr [ecx], si */
    eax = MEM32(0x1723F638); /* 0x17172B46: mov eax, dword ptr [0x1723f638] */
L_17172B4B:
    _flag_a = (uint32_t)(MEM32(0x1723F640)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(0x1723F640) = MEM32(0x1723F640) + 4; /* 0x17172B4B: add dword ptr [0x1723f640], 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(0x1723F640); /* 0x17172B52: mov ecx, dword ptr [0x1723f640] */
    MEM32(ecx) = eax; /* 0x17172B58: mov dword ptr [ecx], eax */
    eax = MEM32(0x1723F648); /* 0x17172B5A: mov eax, dword ptr [0x1723f648] */
    RECOMP_BACKEDGE();
    goto L_17172754; /* 0x17172B5F: jmp 0x17172754 */
L_17172B64:
    /* test eax, eax */ /* 0x17172B64: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17172B7F; /* 0x17172B66: je 0x17172b7f */
L_17172B68:
    RECOMP_BACKEDGE();
    goto L_1717274C; /* 0x17172B68: jmp 0x1717274c */
L_17172B6D:
    PUSH32(esp, 0x1700B308u); /* 0x17172B6D: push 0x1700b308 */
    PUSH32(esp, MEM32(0x1723F678)); /* 0x17172B72: push dword ptr [0x1723f678] */
    RECOMP_CALL(sub_17171A9A); /* 0x17172B78: call 0x17171a9a */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x17172B7D: pop ecx */
    ecx = POP32_VAL(esp); /* 0x17172B7E: pop ecx */
L_17172B7F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17172B7F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17172B81: inc eax */
    _flag_k = FK_INC;
L_17172B82:
    edi = POP32_VAL(esp); /* 0x17172B82: pop edi */
    esi = POP32_VAL(esp); /* 0x17172B83: pop esi */
    ebx = POP32_VAL(esp); /* 0x17172B84: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x17172B85: ret  */
  _ljump:
    switch (_itail_tgt) {
      case 0x1717286Cu: goto L_1717286C;
      case 0x17172875u: goto L_17172875;
      case 0x1717287Eu: goto L_1717287E;
      case 0x17172887u: goto L_17172887;
      case 0x17172890u: goto L_17172890;
      case 0x17172899u: goto L_17172899;
      case 0x171728A2u: goto L_171728A2;
      case 0x171728ABu: goto L_171728AB;
      case 0x171728B4u: goto L_171728B4;
      case 0x171728BDu: goto L_171728BD;
      case 0x171728C6u: goto L_171728C6;
      case 0x171728CFu: goto L_171728CF;
      case 0x171728D8u: goto L_171728D8;
      case 0x171728E1u: goto L_171728E1;
      case 0x171728EAu: goto L_171728EA;
      case 0x171728F3u: goto L_171728F3;
      case 0x171728FCu: goto L_171728FC;
      case 0x17172905u: goto L_17172905;
      case 0x1717290Eu: goto L_1717290E;
      case 0x17172917u: goto L_17172917;
      case 0x17172920u: goto L_17172920;
      case 0x17172929u: goto L_17172929;
      case 0x17172932u: goto L_17172932;
      case 0x1717293Bu: goto L_1717293B;
      case 0x17172944u: goto L_17172944;
      case 0x1717294Du: goto L_1717294D;
      case 0x17172953u: goto L_17172953;
      case 0x17172959u: goto L_17172959;
      case 0x1717295Fu: goto L_1717295F;
      case 0x17172965u: goto L_17172965;
      case 0x1717296Bu: goto L_1717296B;
      case 0x17172971u: goto L_17172971;
      case 0x17172977u: goto L_17172977;
      case 0x1717297Du: goto L_1717297D;
      case 0x17172983u: goto L_17172983;
      case 0x17172989u: goto L_17172989;
      case 0x1717298Fu: goto L_1717298F;
      case 0x17172995u: goto L_17172995;
      case 0x1717299Bu: goto L_1717299B;
      case 0x171729A1u: goto L_171729A1;
      case 0x171729A7u: goto L_171729A7;
      case 0x171729ADu: goto L_171729AD;
      case 0x171729B3u: goto L_171729B3;
      case 0x171729B9u: goto L_171729B9;
      case 0x171729BFu: goto L_171729BF;
      case 0x171729C5u: goto L_171729C5;
      case 0x171729CBu: goto L_171729CB;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_17172C47(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17172C47u);

L_17172C47:
    edi = edi; /* 0x17172C47: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17172C49: push ebp */
    ebp = esp; /* 0x17172C4A: mov ebp, esp */
    PUSH32(esp, esi); /* 0x17172C4C: push esi */
    PUSH32(esp, 0x70u); /* 0x17172C4D: push 0x70 */
    esi = ecx; /* 0x17172C4F: mov esi, ecx */
    RECOMP_CALL(sub_1721B01C); /* 0x17172C51: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17172C56: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x17172C58: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17172C64; /* 0x17172C59: je 0x17172c64 */
L_17172C5B:
    ecx = eax; /* 0x17172C5B: mov ecx, eax */
    RECOMP_CALL(sub_1716FC9D); /* 0x17172C5D: call 0x1716fc9d */
    RECOMP_FLAGS_IN();
    goto L_17172C66; /* 0x17172C62: jmp 0x17172c66 */
L_17172C64:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17172C64: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_17172C66:
    /* test eax, eax */ /* 0x17172C66: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x268) = eax; /* 0x17172C68: mov dword ptr [esi + 0x268], eax */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17172C77; /* 0x17172C6E: jne 0x17172c77 */
L_17172C70:
    eax = 0x8007000Eu; /* 0x17172C70: mov eax, 0x8007000e */
    goto L_17172CC0; /* 0x17172C75: jmp 0x17172cc0 */
L_17172C77:
    PUSH32(esp, edi); /* 0x17172C77: push edi */
    edi = MEM32(ebp + 0x14); /* 0x17172C78: mov edi, dword ptr [ebp + 0x14] */
    PUSH32(esp, 0); /* 0x17172C7B: push 0 */
    PUSH32(esp, 0); /* 0x17172C7D: push 0 */
    PUSH32(esp, edi); /* 0x17172C7F: push edi */
    ecx = esi + 0x18; /* 0x17172C80: lea ecx, [esi + 0x18] */
    PUSH32(esp, ecx); /* 0x17172C83: push ecx */
    ecx = esi + 0x278; /* 0x17172C84: lea ecx, [esi + 0x278] */
    PUSH32(esp, ecx); /* 0x17172C8A: push ecx */
    PUSH32(esp, esi); /* 0x17172C8B: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x17172C8C: push dword ptr [ebp + 0xc] */
    ecx = eax; /* 0x17172C8F: mov ecx, eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x17172C91: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1716FD5B); /* 0x17172C94: call 0x1716fd5b */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17172C99: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17172CBF; /* 0x17172C9B: jl 0x17172cbf */
L_17172C9D:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x17172C9D: push dword ptr [ebp + 0x10] */
    ecx = esi; /* 0x17172CA0: mov ecx, esi */
    RECOMP_CALL(sub_17172089); /* 0x17172CA2: call 0x17172089 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17172CA7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17172CBF; /* 0x17172CA9: jl 0x17172cbf */
L_17172CAB:
    eax = MEM32(esi + 0x268); /* 0x17172CAB: mov eax, dword ptr [esi + 0x268] */
    MEM32(esi + 0x26C) = eax; /* 0x17172CB1: mov dword ptr [esi + 0x26c], eax */
    MEM32(esi + 0x270) = edi; /* 0x17172CB7: mov dword ptr [esi + 0x270], edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17172CBD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_17172CBF:
    edi = POP32_VAL(esp); /* 0x17172CBF: pop edi */
L_17172CC0:
    esi = POP32_VAL(esp); /* 0x17172CC0: pop esi */
    ebp = POP32_VAL(esp); /* 0x17172CC1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x17172CC2: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_17172CCA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17172CCAu);

L_17172CCA:
    edi = edi; /* 0x17172CCA: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17172CCC: push ebp */
    ebp = esp; /* 0x17172CCD: mov ebp, esp */
    PUSH32(esp, esi); /* 0x17172CCF: push esi */
    PUSH32(esp, 0x70u); /* 0x17172CD0: push 0x70 */
    esi = ecx; /* 0x17172CD2: mov esi, ecx */
    RECOMP_CALL(sub_1721B01C); /* 0x17172CD4: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17172CD9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x17172CDB: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17172CE7; /* 0x17172CDC: je 0x17172ce7 */
L_17172CDE:
    ecx = eax; /* 0x17172CDE: mov ecx, eax */
    RECOMP_CALL(sub_1716FC9D); /* 0x17172CE0: call 0x1716fc9d */
    RECOMP_FLAGS_IN();
    goto L_17172CE9; /* 0x17172CE5: jmp 0x17172ce9 */
L_17172CE7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17172CE7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_17172CE9:
    /* test eax, eax */ /* 0x17172CE9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x268) = eax; /* 0x17172CEB: mov dword ptr [esi + 0x268], eax */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17172CFA; /* 0x17172CF1: jne 0x17172cfa */
L_17172CF3:
    eax = 0x8007000Eu; /* 0x17172CF3: mov eax, 0x8007000e */
    goto L_17172D38; /* 0x17172CF8: jmp 0x17172d38 */
L_17172CFA:
    ecx = esi + 0x18; /* 0x17172CFA: lea ecx, [esi + 0x18] */
    PUSH32(esp, ecx); /* 0x17172CFD: push ecx */
    PUSH32(esp, esi); /* 0x17172CFE: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x17172CFF: push dword ptr [ebp + 0x10] */
    ecx = eax; /* 0x17172D02: mov ecx, eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x17172D04: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x17172D07: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1716FF94); /* 0x17172D0A: call 0x1716ff94 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17172D0F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17172D38; /* 0x17172D11: jl 0x17172d38 */
L_17172D13:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x17172D13: push dword ptr [ebp + 0x14] */
    ecx = esi; /* 0x17172D16: mov ecx, esi */
    RECOMP_CALL(sub_17172089); /* 0x17172D18: call 0x17172089 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17172D1D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17172D38; /* 0x17172D1F: jl 0x17172d38 */
L_17172D21:
    eax = MEM32(esi + 0x268); /* 0x17172D21: mov eax, dword ptr [esi + 0x268] */
    MEM32(esi + 0x26C) = eax; /* 0x17172D27: mov dword ptr [esi + 0x26c], eax */
    eax = MEM32(ebp + 0x18); /* 0x17172D2D: mov eax, dword ptr [ebp + 0x18] */
    MEM32(esi + 0x270) = eax; /* 0x17172D30: mov dword ptr [esi + 0x270], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17172D36: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_17172D38:
    esi = POP32_VAL(esp); /* 0x17172D38: pop esi */
    ebp = POP32_VAL(esp); /* 0x17172D39: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x17172D3A: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_17172D42(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17172D42u);

L_17172D42:
    edi = edi; /* 0x17172D42: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17172D44: push ebp */
    ebp = esp; /* 0x17172D45: mov ebp, esp */
    PUSH32(esp, esi); /* 0x17172D47: push esi */
    PUSH32(esp, 0x70u); /* 0x17172D48: push 0x70 */
    esi = ecx; /* 0x17172D4A: mov esi, ecx */
    RECOMP_CALL(sub_1721B01C); /* 0x17172D4C: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17172D51: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x17172D53: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17172D5F; /* 0x17172D54: je 0x17172d5f */
L_17172D56:
    ecx = eax; /* 0x17172D56: mov ecx, eax */
    RECOMP_CALL(sub_1716FC9D); /* 0x17172D58: call 0x1716fc9d */
    RECOMP_FLAGS_IN();
    goto L_17172D61; /* 0x17172D5D: jmp 0x17172d61 */
L_17172D5F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17172D5F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_17172D61:
    /* test eax, eax */ /* 0x17172D61: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x268) = eax; /* 0x17172D63: mov dword ptr [esi + 0x268], eax */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17172D72; /* 0x17172D69: jne 0x17172d72 */
L_17172D6B:
    eax = 0x8007000Eu; /* 0x17172D6B: mov eax, 0x8007000e */
    goto L_17172DAD; /* 0x17172D70: jmp 0x17172dad */
L_17172D72:
    ecx = esi + 0x18; /* 0x17172D72: lea ecx, [esi + 0x18] */
    PUSH32(esp, ecx); /* 0x17172D75: push ecx */
    PUSH32(esp, esi); /* 0x17172D76: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x17172D77: push dword ptr [ebp + 0xc] */
    ecx = eax; /* 0x17172D7A: mov ecx, eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x17172D7C: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_17170001); /* 0x17172D7F: call 0x17170001 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17172D84: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17172DAD; /* 0x17172D86: jl 0x17172dad */
L_17172D88:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x17172D88: push dword ptr [ebp + 0x10] */
    ecx = esi; /* 0x17172D8B: mov ecx, esi */
    RECOMP_CALL(sub_17172089); /* 0x17172D8D: call 0x17172089 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17172D92: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17172DAD; /* 0x17172D94: jl 0x17172dad */
L_17172D96:
    eax = MEM32(esi + 0x268); /* 0x17172D96: mov eax, dword ptr [esi + 0x268] */
    MEM32(esi + 0x26C) = eax; /* 0x17172D9C: mov dword ptr [esi + 0x26c], eax */
    eax = MEM32(ebp + 0x14); /* 0x17172DA2: mov eax, dword ptr [ebp + 0x14] */
    MEM32(esi + 0x270) = eax; /* 0x17172DA5: mov dword ptr [esi + 0x270], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17172DAB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_17172DAD:
    esi = POP32_VAL(esp); /* 0x17172DAD: pop esi */
    ebp = POP32_VAL(esp); /* 0x17172DAE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x17172DAF: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_17172DB7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17172DB7u);

L_17172DB7:
    edi = edi; /* 0x17172DB7: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17172DB9: push ebp */
    ebp = esp; /* 0x17172DBA: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x17172DBC: push ecx */
    PUSH32(esp, ecx); /* 0x17172DBD: push ecx */
    PUSH32(esp, ebx); /* 0x17172DBE: push ebx */
    PUSH32(esp, esi); /* 0x17172DBF: push esi */
    PUSH32(esp, edi); /* 0x17172DC0: push edi */
    ebx = ecx; /* 0x17172DC1: mov ebx, ecx */
    goto L_17173023; /* 0x17172DC3: jmp 0x17173023 */
L_17172DC8:
    eax = MEM32(ebx + 0x68); /* 0x17172DC8: mov eax, dword ptr [ebx + 0x68] */
    /* test eax, eax */ /* 0x17172DCB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17172DD9; /* 0x17172DCD: je 0x17172dd9 */
L_17172DCF:
    /* cmp MEM32(eax + 0x8), 0 */ /* 0x17172DCF: cmp dword ptr [eax + 8], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17173034; /* 0x17172DD3: je 0x17173034 */
L_17172DD9:
    edx = MEM32(ebx + 0x64); /* 0x17172DD9: mov edx, dword ptr [ebx + 0x64] */
    /* test edx, edx */ /* 0x17172DDC: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17172E18; /* 0x17172DDE: je 0x17172e18 */
L_17172DE0:
    eax = MEM32(ebp + 0x8); /* 0x17172DE0: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, 8); /* 0x17172DE3: push 8 */
    esi = edx + 0x10; /* 0x17172DE5: lea esi, [edx + 0x10] */
    ecx = POP32_VAL(esp); /* 0x17172DE8: pop ecx */
    edi = eax; /* 0x17172DE9: mov edi, eax */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x17172DEB: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = MEM32(ebx + 0x64); /* 0x17172DED: mov ecx, dword ptr [ebx + 0x64] */
    ecx = MEM32(ecx + 0xC); /* 0x17172DF0: mov ecx, dword ptr [ecx + 0xc] */
    MEM32(ebx + 0x64) = ecx; /* 0x17172DF3: mov dword ptr [ebx + 0x64], ecx */
    _flag_a = (uint32_t)(MEM32(edx + 0xC)); _flag_b = (uint32_t)(0);
    MEM32(edx + 0xC) = MEM32(edx + 0xC) & 0; /* 0x17172DF6: and dword ptr [edx + 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebx + 0x26C); /* 0x17172DFA: mov ecx, dword ptr [ebx + 0x26c] */
    ecx = MEM32(ecx + 0x18); /* 0x17172E00: mov ecx, dword ptr [ecx + 0x18] */
    MEM32(eax + 0x10) = ecx; /* 0x17172E03: mov dword ptr [eax + 0x10], ecx */
    ecx = MEM32(ebx + 0x26C); /* 0x17172E06: mov ecx, dword ptr [ebx + 0x26c] */
    ecx = MEM32(ecx + 0x1C); /* 0x17172E0C: mov ecx, dword ptr [ecx + 0x1c] */
    MEM32(eax + 0x14) = ecx; /* 0x17172E0F: mov dword ptr [eax + 0x14], ecx */
    _flag_a = (uint32_t)(MEM32(ebx + 0x40)); _flag_b = (uint32_t)(0);
    MEM32(ebx + 0x40) = MEM32(ebx + 0x40) & 0; /* 0x17172E12: and dword ptr [ebx + 0x40], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_17172E37; /* 0x17172E16: jmp 0x17172e37 */
L_17172E18:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x17172E18: push dword ptr [ebp + 8] */
    ecx = MEM32(ebx + 0x26C); /* 0x17172E1B: mov ecx, dword ptr [ebx + 0x26c] */
    PUSH32(esp, MEM32(ebx + 0x298)); /* 0x17172E21: push dword ptr [ebx + 0x298] */
    RECOMP_CALL(sub_17174BE6); /* 0x17172E27: call 0x17174be6 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17172E2C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171730FC; /* 0x17172E2E: jl 0x171730fc */
L_17172E34:
    eax = MEM32(ebp + 0x8); /* 0x17172E34: mov eax, dword ptr [ebp + 8] */
L_17172E37:
    ecx = MEM32(eax); /* 0x17172E37: mov ecx, dword ptr [eax] */
    /* cmp ecx, 1 */ /* 0x17172E39: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17172F72; /* 0x17172E3C: jne 0x17172f72 */
L_17172E42:
    PUSH32(esp, 2); /* 0x17172E42: push 2 */
    edi = eax + 0x8; /* 0x17172E44: lea edi, [eax + 8] */
    esi = 0x17021B0Cu; /* 0x17172E47: mov esi, 0x17021b0c */
    ecx = POP32_VAL(esp); /* 0x17172E4C: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x17172E4D: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM8(esi); _b = MEM8(edi); esi += _df; edi += _df; ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x17172E4F: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_17172F72; /* 0x17172E51: jne 0x17172f72 */
L_17172E57:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x17172E57: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebx + 0x40), ecx */ /* 0x17172E59: cmp dword ptr [ebx + 0x40], ecx */
    _flag_a = (uint32_t)(MEM32(ebx + 0x40)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17172F72; /* 0x17172E5C: je 0x17172f72 */
L_17172E62:
    MEM32(0x1723F678) = ebx; /* 0x17172E62: mov dword ptr [0x1723f678], ebx */
    eax = MEM32(ebx + 0x50); /* 0x17172E68: mov eax, dword ptr [ebx + 0x50] */
    MEM32(ebx + 0x40) = ecx; /* 0x17172E6B: mov dword ptr [ebx + 0x40], ecx */
    MEM32(ebx + 0x44) = ecx; /* 0x17172E6E: mov dword ptr [ebx + 0x44], ecx */
    MEM32(ebx + 0x4C) = 1; /* 0x17172E71: mov dword ptr [ebx + 0x4c], 1 */
    MEM32(ebx + 0x54) = eax; /* 0x17172E78: mov dword ptr [ebx + 0x54], eax */
    RECOMP_CALL(sub_1717271E); /* 0x17172E7B: call 0x1717271e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x17172E80: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x17172E82: inc edi */
    _flag_k = FK_INC;
    /* test eax, eax */ /* 0x17172E83: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17172E8A; /* 0x17172E85: je 0x17172e8a */
L_17172E87:
    MEM32(ebx + 0x44) = edi; /* 0x17172E87: mov dword ptr [ebx + 0x44], edi */
L_17172E8A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17172E8A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebx + 0x40), eax */ /* 0x17172E8C: cmp dword ptr [ebx + 0x40], eax */
    _flag_a = (uint32_t)(MEM32(ebx + 0x40)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebx + 0x5C) = eax; /* 0x17172E8F: mov dword ptr [ebx + 0x5c], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_17172EEC; /* 0x17172E92: jne 0x17172eec */
L_17172E94:
    /* cmp MEM32(ebx + 0x44), eax */ /* 0x17172E94: cmp dword ptr [ebx + 0x44], eax */
    _flag_a = (uint32_t)(MEM32(ebx + 0x44)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17172EEC; /* 0x17172E97: jne 0x17172eec */
L_17172E99:
    ecx = MEM32(ebx + 0x26C); /* 0x17172E99: mov ecx, dword ptr [ebx + 0x26c] */
    esi = ebx + 0x278; /* 0x17172E9F: lea esi, [ebx + 0x278] */
    PUSH32(esp, esi); /* 0x17172EA5: push esi */
    PUSH32(esp, MEM32(ebx + 0x298)); /* 0x17172EA6: push dword ptr [ebx + 0x298] */
    RECOMP_CALL(sub_17174BE6); /* 0x17172EAC: call 0x17174be6 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17172EB1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171730FC; /* 0x17172EB3: jl 0x171730fc */
L_17172EB9:
    esi = MEM32(esi); /* 0x17172EB9: mov esi, dword ptr [esi] */
    /* cmp esi, 0xCu */ /* 0x17172EBB: cmp esi, 0xc */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17172EE9; /* 0x17172EBE: je 0x17172ee9 */
L_17172EC0:
    /* cmp esi, 0xDu */ /* 0x17172EC0: cmp esi, 0xd */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xDu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17172EE9; /* 0x17172EC3: je 0x17172ee9 */
L_17172EC5:
    /* cmp MEM32(ebx + 0x50), 0 */ /* 0x17172EC5: cmp dword ptr [ebx + 0x50], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x50)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17172EE4; /* 0x17172EC9: je 0x17172ee4 */
L_17172ECB:
    PUSH32(esp, 0x17021AD8u); /* 0x17172ECB: push 0x17021ad8 */
    PUSH32(esp, 0x5DDu); /* 0x17172ED0: push 0x5dd */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x17172ED5: push dword ptr [ebp + 8] */
    eax = ebx + 0x18; /* 0x17172ED8: lea eax, [ebx + 0x18] */
    PUSH32(esp, eax); /* 0x17172EDB: push eax */
    RECOMP_CALL(sub_17174059); /* 0x17172EDC: call 0x17174059 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x17172EE1: add esp, 0x10 */
    _flag_k = FK_ADD;
L_17172EE4:
    MEM32(ebx + 0x44) = edi; /* 0x17172EE4: mov dword ptr [ebx + 0x44], edi */
    goto L_17172EEC; /* 0x17172EE7: jmp 0x17172eec */
L_17172EE9:
    MEM32(ebx + 0x40) = edi; /* 0x17172EE9: mov dword ptr [ebx + 0x40], edi */
L_17172EEC:
    /* cmp MEM32(ebx + 0x40), 0 */ /* 0x17172EEC: cmp dword ptr [ebx + 0x40], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x40)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17172F24; /* 0x17172EF0: jne 0x17172f24 */
L_17172EF2:
    ecx = MEM32(ebx + 0x26C); /* 0x17172EF2: mov ecx, dword ptr [ebx + 0x26c] */
    RECOMP_CALL(sub_17173B81); /* 0x17172EF8: call 0x17173b81 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx + 0x26C); /* 0x17172EFD: mov ecx, dword ptr [ebx + 0x26c] */
    _flag_a = (uint32_t)(MEM32(ebx + 0x64)); _flag_b = (uint32_t)(0);
    MEM32(ebx + 0x64) = MEM32(ebx + 0x64) & 0; /* 0x17172F03: and dword ptr [ebx + 0x64], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebx + 0x278; /* 0x17172F07: lea eax, [ebx + 0x278] */
    PUSH32(esp, eax); /* 0x17172F0D: push eax */
    PUSH32(esp, MEM32(ebx + 0x298)); /* 0x17172F0E: push dword ptr [ebx + 0x298] */
    RECOMP_CALL(sub_17174BE6); /* 0x17172F14: call 0x17174be6 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17172F19: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171730FC; /* 0x17172F1B: jl 0x171730fc */
L_17172F21:
    MEM32(ebx + 0x40) = edi; /* 0x17172F21: mov dword ptr [ebx + 0x40], edi */
L_17172F24:
    eax = MEM32(ebx + 0x268); /* 0x17172F24: mov eax, dword ptr [ebx + 0x268] */
    MEM32(ebx + 0x26C) = eax; /* 0x17172F2A: mov dword ptr [ebx + 0x26c], eax */
    eax = MEM32(ebx + 0x54); /* 0x17172F30: mov eax, dword ptr [ebx + 0x54] */
    /* test eax, eax */ /* 0x17172F33: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebx + 0x50) = eax; /* 0x17172F35: mov dword ptr [ebx + 0x50], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17173023; /* 0x17172F38: je 0x17173023 */
L_17172F3E:
    edi = MEM32(ebp + 0x8); /* 0x17172F3E: mov edi, dword ptr [ebp + 8] */
    PUSH32(esp, 8); /* 0x17172F41: push 8 */
    esi = ebx + 0x278; /* 0x17172F43: lea esi, [ebx + 0x278] */
    ecx = POP32_VAL(esp); /* 0x17172F49: pop ecx */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x17172F4A: rep movsd dword ptr es:[edi], dword ptr [esi] */
    eax = MEM32(ebx + 0x268); /* 0x17172F4C: mov eax, dword ptr [ebx + 0x268] */
    /* cmp MEM32(eax + 0x6C), 0 */ /* 0x17172F52: cmp dword ptr [eax + 0x6c], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x6C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17172F61; /* 0x17172F56: je 0x17172f61 */
L_17172F58:
    eax = MEM32(ebp + 0x8); /* 0x17172F58: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = 0xCu; /* 0x17172F5B: mov dword ptr [eax], 0xc */
L_17172F61:
    eax = MEM32(ebx + 0x48); /* 0x17172F61: mov eax, dword ptr [ebx + 0x48] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x17172F64: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x17172F66: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80004005u);
    eax = eax & 0x80004005u; /* 0x17172F68: and eax, 0x80004005 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_171730FC; /* 0x17172F6D: jmp 0x171730fc */
L_17172F72:
    ecx = MEM32(eax); /* 0x17172F72: mov ecx, dword ptr [eax] */
    /* cmp ecx, 0xDu */ /* 0x17172F74: cmp ecx, 0xd */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xDu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1717305A; /* 0x17172F77: je 0x1717305a */
L_17172F7D:
    /* cmp MEM32(ebx + 0x50), 0 */ /* 0x17172F7D: cmp dword ptr [ebx + 0x50], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x50)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17172FB5; /* 0x17172F81: je 0x17172fb5 */
L_17172F83:
    /* cmp ecx, 9 */ /* 0x17172F83: cmp ecx, 9 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17172FB5; /* 0x17172F86: jne 0x17172fb5 */
L_17172F88:
    ecx = ebp + (-0x4); /* 0x17172F88: lea ecx, [ebp - 4] */
    PUSH32(esp, ecx); /* 0x17172F8B: push ecx */
    ecx = ebp + (-0x8); /* 0x17172F8C: lea ecx, [ebp - 8] */
    PUSH32(esp, ecx); /* 0x17172F8F: push ecx */
    PUSH32(esp, MEM32(eax + 0x8)); /* 0x17172F90: push dword ptr [eax + 8] */
    ecx = ebx; /* 0x17172F93: mov ecx, ebx */
    RECOMP_CALL(sub_17171040); /* 0x17172F95: call 0x17171040 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17172F9A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17172FB2; /* 0x17172F9C: je 0x17172fb2 */
L_17172F9E:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x17172F9E: push dword ptr [ebp - 4] */
    ecx = ebx; /* 0x17172FA1: mov ecx, ebx */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x17172FA3: push dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x17172FA6: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_17173169); /* 0x17172FA9: call 0x17173169 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17172FAE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17173023; /* 0x17172FB0: jne 0x17173023 */
L_17172FB2:
    eax = MEM32(ebp + 0x8); /* 0x17172FB2: mov eax, dword ptr [ebp + 8] */
L_17172FB5:
    /* cmp MEM32(eax), 9 */ /* 0x17172FB5: cmp dword ptr [eax], 9 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1717300D; /* 0x17172FB8: jne 0x1717300d */
L_17172FBA:
    esi = MEM32(eax + 0x8); /* 0x17172FBA: mov esi, dword ptr [eax + 8] */
    PUSH32(esp, 9); /* 0x17172FBD: push 9 */
    edi = 0x17021ACCu; /* 0x17172FBF: mov edi, 0x17021acc */
    ecx = POP32_VAL(esp); /* 0x17172FC4: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x17172FC5: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM8(esi); _b = MEM8(edi); esi += _df; edi += _df; ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x17172FC7: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_17172FEA; /* 0x17172FC9: jne 0x17172fea */
L_17172FCB:
    MEM32(eax) = 0xAu; /* 0x17172FCB: mov dword ptr [eax], 0xa */
    ecx = MEM32(ebx + 0x26C); /* 0x17172FD1: mov ecx, dword ptr [ebx + 0x26c] */
    ecx = MEM32(ecx + 0x18); /* 0x17172FD7: mov ecx, dword ptr [ecx + 0x18] */
    /* test ecx, ecx */ /* 0x17172FDA: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax + 0x8) = ecx; /* 0x17172FDC: mov dword ptr [eax + 8], ecx */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1717300D; /* 0x17172FDF: jne 0x1717300d */
L_17172FE1:
    MEM32(eax + 0x8) = 0x170239FCu; /* 0x17172FE1: mov dword ptr [eax + 8], 0x170239fc */
    goto L_1717300D; /* 0x17172FE8: jmp 0x1717300d */
L_17172FEA:
    esi = MEM32(eax + 0x8); /* 0x17172FEA: mov esi, dword ptr [eax + 8] */
    PUSH32(esp, 9); /* 0x17172FED: push 9 */
    edi = 0x1702199Cu; /* 0x17172FEF: mov edi, 0x1702199c */
    ecx = POP32_VAL(esp); /* 0x17172FF4: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x17172FF5: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM8(esi); _b = MEM8(edi); esi += _df; edi += _df; ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x17172FF7: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_1717300D; /* 0x17172FF9: jne 0x1717300d */
L_17172FFB:
    MEM32(eax) = 2; /* 0x17172FFB: mov dword ptr [eax], 2 */
    ecx = MEM32(ebx + 0x26C); /* 0x17173001: mov ecx, dword ptr [ebx + 0x26c] */
    ecx = MEM32(ecx + 0x1C); /* 0x17173007: mov ecx, dword ptr [ecx + 0x1c] */
    MEM32(eax + 0x8) = ecx; /* 0x1717300A: mov dword ptr [eax + 8], ecx */
L_1717300D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1717300D: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(eax), 0xCu */ /* 0x1717300F: cmp dword ptr [eax], 0xc */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(ecx, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x17173012: sete cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x17173015: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebx + 0x50), edx */ /* 0x17173017: cmp dword ptr [ebx + 0x50], edx */
    _flag_a = (uint32_t)(MEM32(ebx + 0x50)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebx + 0x40) = ecx; /* 0x1717301A: mov dword ptr [ebx + 0x40], ecx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_171730BB; /* 0x1717301D: jne 0x171730bb */
L_17173023:
    /* cmp MEM32(ebx + 0x48), 0 */ /* 0x17173023: cmp dword ptr [ebx + 0x48], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x48)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17172DC8; /* 0x17173027: je 0x17172dc8 */
L_1717302D:
    eax = 0x80004005u; /* 0x1717302D: mov eax, 0x80004005 */
    goto L_17173036; /* 0x17173032: jmp 0x17173036 */
L_17173034:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17173034: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_17173036:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x26Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x26Cu; /* 0x17173036: add ebx, 0x26c */
    _flag_k = FK_ADD;
    ecx = MEM32(ebx); /* 0x1717303C: mov ecx, dword ptr [ebx] */
    edx = MEM32(ecx + 0x18); /* 0x1717303E: mov edx, dword ptr [ecx + 0x18] */
    ecx = MEM32(ebp + 0x8); /* 0x17173041: mov ecx, dword ptr [ebp + 8] */
    MEM32(ecx + 0x10) = edx; /* 0x17173044: mov dword ptr [ecx + 0x10], edx */
    edx = MEM32(ebx); /* 0x17173047: mov edx, dword ptr [ebx] */
    edx = MEM32(edx + 0x1C); /* 0x17173049: mov edx, dword ptr [edx + 0x1c] */
    MEM32(ecx + 0x14) = edx; /* 0x1717304C: mov dword ptr [ecx + 0x14], edx */
    MEM32(ecx) = 0xDu; /* 0x1717304F: mov dword ptr [ecx], 0xd */
    goto L_171730FC; /* 0x17173055: jmp 0x171730fc */
L_1717305A:
    ecx = MEM32(ebx + 0x268); /* 0x1717305A: mov ecx, dword ptr [ebx + 0x268] */
    /* cmp MEM32(ecx + 0x38), 0 */ /* 0x17173060: cmp dword ptr [ecx + 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x38)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1717307D; /* 0x17173064: je 0x1717307d */
L_17173066:
    PUSH32(esp, 0x17021AB4u); /* 0x17173066: push 0x17021ab4 */
    PUSH32(esp, 0x5DEu); /* 0x1717306B: push 0x5de */
    PUSH32(esp, eax); /* 0x17173070: push eax */
    eax = ebx + 0x18; /* 0x17173071: lea eax, [ebx + 0x18] */
    PUSH32(esp, eax); /* 0x17173074: push eax */
    RECOMP_CALL(sub_17174059); /* 0x17173075: call 0x17174059 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1717307A: add esp, 0x10 */
    _flag_k = FK_ADD;
L_1717307D:
    ecx = MEM32(ebx + 0x268); /* 0x1717307D: mov ecx, dword ptr [ebx + 0x268] */
    /* cmp MEM32(ecx + 0x6C), 0 */ /* 0x17173083: cmp dword ptr [ecx + 0x6c], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x6C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171730FA; /* 0x17173087: je 0x171730fa */
L_17173089:
    eax = MEM32(ecx + 0x6C); /* 0x17173089: mov eax, dword ptr [ecx + 0x6c] */
    MEM32(ebx + 0x268) = eax; /* 0x1717308C: mov dword ptr [ebx + 0x268], eax */
    _flag_a = (uint32_t)(MEM32(ecx + 0x6C)); _flag_b = (uint32_t)(0);
    MEM32(ecx + 0x6C) = MEM32(ecx + 0x6C) & 0; /* 0x17173092: and dword ptr [ecx + 0x6c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 1); /* 0x17173096: push 1 */
    RECOMP_CALL(sub_1716FD35); /* 0x17173098: call 0x1716fd35 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0x268); /* 0x1717309D: mov eax, dword ptr [ebx + 0x268] */
    MEM32(ebx + 0x26C) = eax; /* 0x171730A3: mov dword ptr [ebx + 0x26c], eax */
    eax = MEM32(ebp + 0x8); /* 0x171730A9: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = 0xCu; /* 0x171730AC: mov dword ptr [eax], 0xc */
    MEM32(ebx + 0x40) = 1; /* 0x171730B2: mov dword ptr [ebx + 0x40], 1 */
    goto L_171730FA; /* 0x171730B9: jmp 0x171730fa */
L_171730BB:
    ecx = MEM32(ebx + 0x68); /* 0x171730BB: mov ecx, dword ptr [ebx + 0x68] */
    /* cmp ecx, edx */ /* 0x171730BE: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171730FA; /* 0x171730C0: je 0x171730fa */
L_171730C2:
    /* cmp MEM32(ecx + 0x4), edx */ /* 0x171730C2: cmp dword ptr [ecx + 4], edx */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171730FA; /* 0x171730C5: je 0x171730fa */
L_171730C7:
    /* cmp MEM32(eax), 1 */ /* 0x171730C7: cmp dword ptr [eax], 1 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171730EC; /* 0x171730CA: jne 0x171730ec */
L_171730CC:
    /* cmp MEM8(eax + 0x9), 0 */ /* 0x171730CC: cmp byte ptr [eax + 9], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0x9)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171730EC; /* 0x171730D0: jne 0x171730ec */
L_171730D2:
    /* cmp MEM8(eax + 0x8), 0x7Bu */ /* 0x171730D2: cmp byte ptr [eax + 8], 0x7b */
    _flag_a = (uint32_t)(MEM8(eax + 0x8)) << 24; _flag_b = (uint32_t)(0x7Bu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171730DB; /* 0x171730D6: jne 0x171730db */
L_171730D8:
    _flag_a = (uint32_t)(MEM32(ecx + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x8) = MEM32(ecx + 0x8) + 1; /* 0x171730D8: inc dword ptr [ecx + 8] */
    _flag_k = FK_INC;
L_171730DB:
    /* cmp MEM8(eax + 0x8), 0x7Du */ /* 0x171730DB: cmp byte ptr [eax + 8], 0x7d */
    _flag_a = (uint32_t)(MEM8(eax + 0x8)) << 24; _flag_b = (uint32_t)(0x7Du) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171730EC; /* 0x171730DF: jne 0x171730ec */
L_171730E1:
    ecx = MEM32(ebx + 0x68); /* 0x171730E1: mov ecx, dword ptr [ebx + 0x68] */
    /* cmp MEM32(ecx + 0x8), edx */ /* 0x171730E4: cmp dword ptr [ecx + 8], edx */
    _flag_a = (uint32_t)(MEM32(ecx + 0x8)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171730EC; /* 0x171730E7: je 0x171730ec */
L_171730E9:
    _flag_a = (uint32_t)(MEM32(ecx + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x8) = MEM32(ecx + 0x8) - 1; /* 0x171730E9: dec dword ptr [ecx + 8] */
    _flag_k = FK_DEC;
L_171730EC:
    ecx = MEM32(ebx + 0x68); /* 0x171730EC: mov ecx, dword ptr [ebx + 0x68] */
    /* cmp MEM32(ecx + 0x8), edx */ /* 0x171730EF: cmp dword ptr [ecx + 8], edx */
    _flag_a = (uint32_t)(MEM32(ecx + 0x8)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171730FA; /* 0x171730F2: jne 0x171730fa */
L_171730F4:
    MEM32(eax) = 0xDu; /* 0x171730F4: mov dword ptr [eax], 0xd */
L_171730FA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171730FA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171730FC:
    edi = POP32_VAL(esp); /* 0x171730FC: pop edi */
    esi = POP32_VAL(esp); /* 0x171730FD: pop esi */
    ebx = POP32_VAL(esp); /* 0x171730FE: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171730FF: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x17173100: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_17173108(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17173108u);

L_17173108:
    edi = edi; /* 0x17173108: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1717310A: push ebp */
    ebp = esp; /* 0x1717310B: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x1717310D: sub esp, 0x20 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x17173110: push esi */
    esi = ecx; /* 0x17173111: mov esi, ecx */
    /* cmp MEM32(esi + 0x68), 0 */ /* 0x17173113: cmp dword ptr [esi + 0x68], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x68)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17173126; /* 0x17173117: jne 0x17173126 */
L_17173119:
    eax = 0x8876086Cu; /* 0x17173119: mov eax, 0x8876086c */
    goto L_17173161; /* 0x1717311E: jmp 0x17173161 */
L_17173120:
    /* cmp MEM32(ebp + (-0x20)), 0xDu */ /* 0x17173120: cmp dword ptr [ebp - 0x20], 0xd */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(0xDu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17173137; /* 0x17173124: je 0x17173137 */
L_17173126:
    eax = ebp + (-0x20); /* 0x17173126: lea eax, [ebp - 0x20] */
    ecx = esi; /* 0x17173129: mov ecx, esi */
    PUSH32(esp, eax); /* 0x1717312B: push eax */
    RECOMP_CALL(sub_17172DB7); /* 0x1717312C: call 0x17172db7 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17173131: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_17173120; /* 0x17173133: jge 0x17173120 */
L_17173135:
    goto L_17173161; /* 0x17173135: jmp 0x17173161 */
L_17173137:
    ecx = MEM32(esi + 0x68); /* 0x17173137: mov ecx, dword ptr [esi + 0x68] */
    eax = MEM32(ecx + 0x4); /* 0x1717313A: mov eax, dword ptr [ecx + 4] */
    MEM32(esi + 0x68) = eax; /* 0x1717313D: mov dword ptr [esi + 0x68], eax */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(ecx + 0x4) = MEM32(ecx + 0x4) & 0; /* 0x17173140: and dword ptr [ecx + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 1); /* 0x17173144: push 1 */
    RECOMP_CALL(sub_17170080); /* 0x17173146: call 0x17170080 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x68); /* 0x1717314B: mov eax, dword ptr [esi + 0x68] */
    /* test eax, eax */ /* 0x1717314E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17173156; /* 0x17173150: je 0x17173156 */
L_17173152:
    eax = MEM32(eax); /* 0x17173152: mov eax, dword ptr [eax] */
    goto L_17173159; /* 0x17173154: jmp 0x17173159 */
L_17173156:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17173156: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17173158: inc eax */
    _flag_k = FK_INC;
L_17173159:
    MEM32(esi + 0x298) = eax; /* 0x17173159: mov dword ptr [esi + 0x298], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1717315F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_17173161:
    esi = POP32_VAL(esp); /* 0x17173161: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17173162: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x17173163: ret  */
    RECOMP_REGS_OUT();
}

void sub_17173169(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17173169u);

L_17173169:
    edi = edi; /* 0x17173169: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1717316B: push ebp */
    ebp = esp; /* 0x1717316C: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x78u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x78u; /* 0x1717316E: sub esp, 0x78 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x14)) = MEM32(ebp + (-0x14)) & 0; /* 0x17173171: and dword ptr [ebp - 0x14], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) & 0; /* 0x17173175: and dword ptr [ebp - 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x17173179: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1717317D: push ebx */
    PUSH32(esp, esi); /* 0x1717317E: push esi */
    eax = ecx; /* 0x1717317F: mov eax, ecx */
    PUSH32(esp, edi); /* 0x17173181: push edi */
    MEM32(ebp + (-0x4)) = eax; /* 0x17173182: mov dword ptr [ebp - 4], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_171731D5; /* 0x17173185: jne 0x171731d5 */
L_17173187:
    esi = MEM32(ebp + 0x10); /* 0x17173187: mov esi, dword ptr [ebp + 0x10] */
    /* test esi, esi */ /* 0x1717318A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    edi = ebp + (-0xC); /* 0x1717318C: lea edi, [ebp - 0xc] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171731C2; /* 0x1717318F: je 0x171731c2 */
L_17173191:
    PUSH32(esp, 0x30u); /* 0x17173191: push 0x30 */
    RECOMP_CALL(sub_170E2944); /* 0x17173193: call 0x170e2944 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17173198: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171731A9; /* 0x1717319A: je 0x171731a9 */
L_1717319C:
    ecx = esi + 0x10; /* 0x1717319C: lea ecx, [esi + 0x10] */
    PUSH32(esp, ecx); /* 0x1717319F: push ecx */
    ecx = eax; /* 0x171731A0: mov ecx, eax */
    RECOMP_CALL(sub_1712937F); /* 0x171731A2: call 0x1712937f */
    RECOMP_FLAGS_IN();
    goto L_171731AB; /* 0x171731A7: jmp 0x171731ab */
L_171731A9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171731A9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171731AB:
    /* test eax, eax */ /* 0x171731AB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi) = eax; /* 0x171731AD: mov dword ptr [edi], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1717381F; /* 0x171731AF: je 0x1717381f */
L_171731B5:
    esi = MEM32(esi + 0xC); /* 0x171731B5: mov esi, dword ptr [esi + 0xc] */
    /* test esi, esi */ /* 0x171731B8: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    edi = eax + 0xC; /* 0x171731BA: lea edi, [eax + 0xc] */
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17173191; /* 0x171731BD: jne 0x17173191 */
L_171731BF:
    eax = MEM32(ebp + (-0x4)); /* 0x171731BF: mov eax, dword ptr [ebp - 4] */
L_171731C2:
    ecx = MEM32(eax + 0x64); /* 0x171731C2: mov ecx, dword ptr [eax + 0x64] */
    MEM32(edi) = ecx; /* 0x171731C5: mov dword ptr [edi], ecx */
    ecx = MEM32(ebp + (-0xC)); /* 0x171731C7: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(eax + 0x64) = ecx; /* 0x171731CA: mov dword ptr [eax + 0x64], ecx */
L_171731CD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171731CD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171731CF: inc eax */
    _flag_k = FK_INC;
    goto L_17173821; /* 0x171731D0: jmp 0x17173821 */
L_171731D5:
    edx = MEM32(eax + 0x64); /* 0x171731D5: mov edx, dword ptr [eax + 0x64] */
    /* test edx, edx */ /* 0x171731D8: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17173225; /* 0x171731DA: je 0x17173225 */
L_171731DC:
    ebx = eax + 0x278; /* 0x171731DC: lea ebx, [eax + 0x278] */
    PUSH32(esp, 8); /* 0x171731E2: push 8 */
    esi = edx + 0x10; /* 0x171731E4: lea esi, [edx + 0x10] */
    ecx = POP32_VAL(esp); /* 0x171731E7: pop ecx */
    edi = ebx; /* 0x171731E8: mov edi, ebx */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x171731EA: rep movsd dword ptr es:[edi], dword ptr [esi] */
    /* cmp MEM32(ebx), 1 */ /* 0x171731EC: cmp dword ptr [ebx], 1 */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1717381F; /* 0x171731EF: jne 0x1717381f */
L_171731F5:
    esi = MEM32(ebp + (-0x4)); /* 0x171731F5: mov esi, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x280u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x280u; /* 0x171731F8: add esi, 0x280 */
    _flag_k = FK_ADD;
    PUSH32(esp, 2); /* 0x171731FE: push 2 */
    edi = 0x17008794u; /* 0x17173200: mov edi, 0x17008794 */
    ecx = POP32_VAL(esp); /* 0x17173205: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17173206: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = esi; /* 0x17173208: mov dword ptr [ebp - 0x10], esi */
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM8(esi); _b = MEM8(edi); esi += _df; edi += _df; ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x1717320B: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_1717381F; /* 0x1717320D: jne 0x1717381f */
L_17173213:
    eax = MEM32(edx + 0xC); /* 0x17173213: mov eax, dword ptr [edx + 0xc] */
    ecx = MEM32(ebp + (-0x4)); /* 0x17173216: mov ecx, dword ptr [ebp - 4] */
    MEM32(ecx + 0x64) = eax; /* 0x17173219: mov dword ptr [ecx + 0x64], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0xC)); _flag_b = (uint32_t)(0);
    MEM32(edx + 0xC) = MEM32(edx + 0xC) & 0; /* 0x1717321C: and dword ptr [edx + 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_171732A7; /* 0x17173220: jmp 0x171732a7 */
L_17173225:
    esi = MEM32(eax + 0x26C); /* 0x17173225: mov esi, dword ptr [eax + 0x26c] */
    edx = MEM32(esi); /* 0x1717322B: mov edx, dword ptr [esi] */
    edi = MEM32(esi + 0x4); /* 0x1717322D: mov edi, dword ptr [esi + 4] */
    /* cmp edx, edi */ /* 0x17173230: cmp edx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_17173261; /* 0x17173232: jae 0x17173261 */
L_17173234:
    SET_LO8(ecx, MEM8(edx)); /* 0x17173234: mov cl, byte ptr [edx] */
    /* cmp LO8(ecx), 0x20u */ /* 0x17173236: cmp cl, 0x20 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17173245; /* 0x17173239: je 0x17173245 */
L_1717323B:
    /* cmp LO8(ecx), 9 */ /* 0x1717323B: cmp cl, 9 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(9) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_L(_flag_a, _flag_b)) goto L_17173251; /* 0x1717323E: jl 0x17173251 */
L_17173240:
    /* cmp LO8(ecx), 0xDu */ /* 0x17173240: cmp cl, 0xd */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0xDu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_G(_flag_a, _flag_b)) goto L_17173251; /* 0x17173243: jg 0x17173251 */
L_17173245:
    ecx = MEM32(eax + 0x26C); /* 0x17173245: mov ecx, dword ptr [eax + 0x26c] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1717324B: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, MEM32(ecx + 0x4) */ /* 0x1717324C: cmp edx, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ecx + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17173234; /* 0x1717324F: jb 0x17173234 */
L_17173251:
    /* cmp edx, edi */ /* 0x17173251: cmp edx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_17173261; /* 0x17173253: jae 0x17173261 */
L_17173255:
    /* cmp MEM8(edx), 0x28u */ /* 0x17173255: cmp byte ptr [edx], 0x28 */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(0x28u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1717381F; /* 0x17173258: jne 0x1717381f */
L_1717325E:
    eax = MEM32(ebp + (-0x4)); /* 0x1717325E: mov eax, dword ptr [ebp - 4] */
L_17173261:
    ebx = eax + 0x278; /* 0x17173261: lea ebx, [eax + 0x278] */
    PUSH32(esp, ebx); /* 0x17173267: push ebx */
    PUSH32(esp, MEM32(eax + 0x298)); /* 0x17173268: push dword ptr [eax + 0x298] */
    ecx = esi; /* 0x1717326E: mov ecx, esi */
    RECOMP_CALL(sub_17174BE6); /* 0x17173270: call 0x17174be6 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17173275: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1717381F; /* 0x17173277: jl 0x1717381f */
L_1717327D:
    /* cmp MEM32(ebx), 1 */ /* 0x1717327D: cmp dword ptr [ebx], 1 */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1717381F; /* 0x17173280: jne 0x1717381f */
L_17173286:
    esi = MEM32(ebp + (-0x4)); /* 0x17173286: mov esi, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x280u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x280u; /* 0x17173289: add esi, 0x280 */
    _flag_k = FK_ADD;
    PUSH32(esp, 2); /* 0x1717328F: push 2 */
    edi = 0x17008794u; /* 0x17173291: mov edi, 0x17008794 */
    ecx = POP32_VAL(esp); /* 0x17173296: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17173297: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = esi; /* 0x17173299: mov dword ptr [ebp - 0x10], esi */
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM8(esi); _b = MEM8(edi); esi += _df; edi += _df; ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x1717329C: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_1717381F; /* 0x1717329E: jne 0x1717381f */
L_171732A4:
    ecx = MEM32(ebp + (-0x4)); /* 0x171732A4: mov ecx, dword ptr [ebp - 4] */
L_171732A7:
    MEM32(ebp + (-0x8)) = 1; /* 0x171732A7: mov dword ptr [ebp - 8], 1 */
    edi = ebp + (-0x14); /* 0x171732AE: lea edi, [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x171732B1: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_171732B3:
    PUSH32(esp, ebx); /* 0x171732B3: push ebx */
    RECOMP_CALL(sub_17172DB7); /* 0x171732B4: call 0x17172db7 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171732B9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1717381F; /* 0x171732BB: jl 0x1717381f */
L_171732C1:
    /* cmp MEM32(ebx), 0xDu */ /* 0x171732C1: cmp dword ptr [ebx], 0xd */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(0xDu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1717340F; /* 0x171732C4: je 0x1717340f */
L_171732CA:
    /* cmp MEM32(edi), 0 */ /* 0x171732CA: cmp dword ptr [edi], 0 */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171732FB; /* 0x171732CD: jne 0x171732fb */
L_171732CF:
    PUSH32(esp, 0x14u); /* 0x171732CF: push 0x14 */
    RECOMP_CALL(sub_170E2944); /* 0x171732D1: call 0x170e2944 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171732D6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171732EC; /* 0x171732D8: je 0x171732ec */
L_171732DA:
    PUSH32(esp, 0x17021B70u); /* 0x171732DA: push 0x17021b70 */
    PUSH32(esp, 0); /* 0x171732DF: push 0 */
    PUSH32(esp, 0); /* 0x171732E1: push 0 */
    ecx = eax; /* 0x171732E3: mov ecx, eax */
    RECOMP_CALL(sub_17129155); /* 0x171732E5: call 0x17129155 */
    RECOMP_FLAGS_IN();
    goto L_171732EE; /* 0x171732EA: jmp 0x171732ee */
L_171732EC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171732EC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171732EE:
    /* test eax, eax */ /* 0x171732EE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi) = eax; /* 0x171732F0: mov dword ptr [edi], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1717381F; /* 0x171732F2: je 0x1717381f */
L_171732F8:
    esi = eax + 0x8; /* 0x171732F8: lea esi, [eax + 8] */
L_171732FB:
    /* cmp MEM32(ebp + (-0x8)), 1 */ /* 0x171732FB: cmp dword ptr [ebp - 8], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17173326; /* 0x171732FF: jne 0x17173326 */
L_17173301:
    /* cmp MEM32(ebx), 1 */ /* 0x17173301: cmp dword ptr [ebx], 1 */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17173326; /* 0x17173304: jne 0x17173326 */
L_17173306:
    eax = MEM32(ebp + (-0x10)); /* 0x17173306: mov eax, dword ptr [ebp - 0x10] */
    SET_LO8(eax, MEM8(eax)); /* 0x17173309: mov al, byte ptr [eax] */
    /* cmp LO8(eax), 0x2Cu */ /* 0x1717330B: cmp al, 0x2c */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x2Cu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17173313; /* 0x1717330D: je 0x17173313 */
L_1717330F:
    /* cmp LO8(eax), 0x29u */ /* 0x1717330F: cmp al, 0x29 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x29u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17173326; /* 0x17173311: jne 0x17173326 */
L_17173313:
    ecx = MEM32(ebp + (-0x4)); /* 0x17173313: mov ecx, dword ptr [ebp - 4] */
    /* cmp MEM8(ecx + 0x281), 0 */ /* 0x17173316: cmp byte ptr [ecx + 0x281], 0 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x281)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17173326; /* 0x1717331D: jne 0x17173326 */
L_1717331F:
    edi = MEM32(edi); /* 0x1717331F: mov edi, dword ptr [edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0xCu; /* 0x17173321: add edi, 0xc */
    _flag_k = FK_ADD;
    goto L_1717334D; /* 0x17173324: jmp 0x1717334d */
L_17173326:
    PUSH32(esp, 0x30u); /* 0x17173326: push 0x30 */
    RECOMP_CALL(sub_170E2944); /* 0x17173328: call 0x170e2944 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1717332D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1717333B; /* 0x1717332F: je 0x1717333b */
L_17173331:
    PUSH32(esp, ebx); /* 0x17173331: push ebx */
    ecx = eax; /* 0x17173332: mov ecx, eax */
    RECOMP_CALL(sub_1712937F); /* 0x17173334: call 0x1712937f */
    RECOMP_FLAGS_IN();
    goto L_1717333D; /* 0x17173339: jmp 0x1717333d */
L_1717333B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1717333B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1717333D:
    /* test eax, eax */ /* 0x1717333D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = eax; /* 0x1717333F: mov dword ptr [esi], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1717381F; /* 0x17173341: je 0x1717381f */
L_17173347:
    ecx = MEM32(ebp + (-0x4)); /* 0x17173347: mov ecx, dword ptr [ebp - 4] */
    esi = eax + 0xC; /* 0x1717334A: lea esi, [eax + 0xc] */
L_1717334D:
    /* cmp MEM32(ebx), 1 */ /* 0x1717334D: cmp dword ptr [ebx], 1 */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17173383; /* 0x17173350: jne 0x17173383 */
L_17173352:
    /* cmp MEM8(ecx + 0x281), 0 */ /* 0x17173352: cmp byte ptr [ecx + 0x281], 0 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x281)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17173383; /* 0x17173359: jne 0x17173383 */
L_1717335B:
    eax = MEM32(ebp + (-0x10)); /* 0x1717335B: mov eax, dword ptr [ebp - 0x10] */
    eax = (int32_t)(int8_t)MEM8(eax); /* 0x1717335E: movsx eax, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x28u; /* 0x17173361: sub eax, 0x28 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_17173380; /* 0x17173364: je 0x17173380 */
L_17173366:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x17173366: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1717337B; /* 0x17173367: je 0x1717337b */
L_17173369:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x32u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x32u; /* 0x17173369: sub eax, 0x32 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_17173380; /* 0x1717336C: je 0x17173380 */
L_1717336E:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1717336E: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1717336F: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1717337B; /* 0x17173370: je 0x1717337b */
L_17173372:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Eu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x1Eu; /* 0x17173372: sub eax, 0x1e */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_17173380; /* 0x17173375: je 0x17173380 */
L_17173377:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x17173377: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x17173378: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_17173383; /* 0x17173379: jne 0x17173383 */
L_1717337B:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) - 1; /* 0x1717337B: dec dword ptr [ebp - 8] */
    _flag_k = FK_DEC;
    goto L_17173383; /* 0x1717337E: jmp 0x17173383 */
L_17173380:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) + 1; /* 0x17173380: inc dword ptr [ebp - 8] */
    _flag_k = FK_INC;
L_17173383:
    /* cmp MEM32(ebp + (-0x8)), 0 */ /* 0x17173383: cmp dword ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_171732B3; /* 0x17173387: jne 0x171732b3 */
L_1717338D:
    edx = MEM32(ebp + 0xC); /* 0x1717338D: mov edx, dword ptr [ebp + 0xc] */
    eax = MEM32(ebp + (-0x14)); /* 0x17173390: mov eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x17173393: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_17173395:
    /* cmp eax, esi */ /* 0x17173395: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171733A8; /* 0x17173397: je 0x171733a8 */
L_17173399:
    /* cmp MEM32(eax + 0x8), esi */ /* 0x17173399: cmp dword ptr [eax + 8], esi */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171733A8; /* 0x1717339C: je 0x171733a8 */
L_1717339E:
    edx = MEM32(edx + 0xC); /* 0x1717339E: mov edx, dword ptr [edx + 0xc] */
    /* cmp edx, esi */ /* 0x171733A1: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(eax + 0xC); /* 0x171733A3: mov eax, dword ptr [eax + 0xc] */
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_17173395; /* 0x171733A6: jne 0x17173395 */
L_171733A8:
    /* cmp edx, esi */ /* 0x171733A8: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17173802; /* 0x171733AA: jne 0x17173802 */
L_171733B0:
    /* cmp eax, esi */ /* 0x171733B0: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17173802; /* 0x171733B2: jne 0x17173802 */
L_171733B8:
    ebx = MEM32(ebp + 0x10); /* 0x171733B8: mov ebx, dword ptr [ebp + 0x10] */
    /* cmp ebx, esi */ /* 0x171733BB: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = ebp + (-0xC); /* 0x171733BD: lea eax, [ebp - 0xc] */
    MEM32(ebp + (-0x8)) = esi; /* 0x171733C0: mov dword ptr [ebp - 8], esi */
    MEM32(ebp + (-0x10)) = esi; /* 0x171733C3: mov dword ptr [ebp - 0x10], esi */
    MEM32(ebp + (-0x18)) = esi; /* 0x171733C6: mov dword ptr [ebp - 0x18], esi */
    MEM32(ebp + 0x8) = eax; /* 0x171733C9: mov dword ptr [ebp + 8], eax */
    MEM32(ebp + (-0x20)) = ebx; /* 0x171733CC: mov dword ptr [ebp - 0x20], ebx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1717366A; /* 0x171733CF: je 0x1717366a */
L_171733D5:
    eax = MEM32(ebp + 0x8); /* 0x171733D5: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x10u; /* 0x171733D8: add ebx, 0x10 */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + (-0x8)), 0 */ /* 0x171733DB: cmp dword ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x1C)) = eax; /* 0x171733DF: mov dword ptr [ebp - 0x1c], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_17173450; /* 0x171733E2: jne 0x17173450 */
L_171733E4:
    /* cmp MEM32(ebp + (-0x10)), 0 */ /* 0x171733E4: cmp dword ptr [ebp - 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17173450; /* 0x171733E8: jne 0x17173450 */
L_171733EA:
    ecx = MEM32(ebx); /* 0x171733EA: mov ecx, dword ptr [ebx] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171733EC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171733EE: inc eax */
    _flag_k = FK_INC;
    /* cmp ecx, eax */ /* 0x171733EF: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17173430; /* 0x171733F1: jne 0x17173430 */
L_171733F3:
    PUSH32(esp, 2); /* 0x171733F3: push 2 */
    edi = 0x17021B0Cu; /* 0x171733F5: mov edi, 0x17021b0c */
    esi = ebx + 0x8; /* 0x171733FA: lea esi, [ebx + 8] */
    ecx = POP32_VAL(esp); /* 0x171733FD: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171733FE: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM8(esi); _b = MEM8(edi); esi += _df; edi += _df; ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x17173400: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_17173430; /* 0x17173402: jne 0x17173430 */
L_17173404:
    MEM32(ebp + (-0x18)) = ebx; /* 0x17173404: mov dword ptr [ebp - 0x18], ebx */
    MEM32(ebp + (-0x8)) = eax; /* 0x17173407: mov dword ptr [ebp - 8], eax */
    goto L_17173654; /* 0x1717340A: jmp 0x17173654 */
L_1717340F:
    eax = MEM32(ebp + (-0x4)); /* 0x1717340F: mov eax, dword ptr [ebp - 4] */
    PUSH32(esp, 0x17021B44u); /* 0x17173412: push 0x17021b44 */
    PUSH32(esp, 0x5EBu); /* 0x17173417: push 0x5eb */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1717341C: push dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x18u; /* 0x1717341F: add eax, 0x18 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x17173422: push eax */
    RECOMP_CALL(sub_17174059); /* 0x17173423: call 0x17174059 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x17173428: add esp, 0x10 */
    _flag_k = FK_ADD;
    goto L_1717381F; /* 0x1717342B: jmp 0x1717381f */
L_17173430:
    /* cmp MEM32(ebx), eax */ /* 0x17173430: cmp dword ptr [ebx], eax */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17173450; /* 0x17173432: jne 0x17173450 */
L_17173434:
    PUSH32(esp, 3); /* 0x17173434: push 3 */
    edi = 0x17021B40u; /* 0x17173436: mov edi, 0x17021b40 */
    esi = ebx + 0x8; /* 0x1717343B: lea esi, [ebx + 8] */
    ecx = POP32_VAL(esp); /* 0x1717343E: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1717343F: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM8(esi); _b = MEM8(edi); esi += _df; edi += _df; ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x17173441: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_17173450; /* 0x17173443: jne 0x17173450 */
L_17173445:
    MEM32(ebp + (-0x18)) = ebx; /* 0x17173445: mov dword ptr [ebp - 0x18], ebx */
    MEM32(ebp + (-0x10)) = eax; /* 0x17173448: mov dword ptr [ebp - 0x10], eax */
    goto L_17173654; /* 0x1717344B: jmp 0x17173654 */
L_17173450:
    /* cmp MEM32(ebx), 9 */ /* 0x17173450: cmp dword ptr [ebx], 9 */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(9);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171734E5; /* 0x17173453: jne 0x171734e5 */
L_17173459:
    ecx = MEM32(ebp + (-0x14)); /* 0x17173459: mov ecx, dword ptr [ebp - 0x14] */
    eax = MEM32(ebp + 0xC); /* 0x1717345C: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ebp + 0x10) = ecx; /* 0x1717345F: mov dword ptr [ebp + 0x10], ecx */
L_17173462:
    edi = MEM32(ebx + 0x8); /* 0x17173462: mov edi, dword ptr [ebx + 8] */
    esi = MEM32(eax + 0x18); /* 0x17173465: mov esi, dword ptr [eax + 0x18] */
L_17173468:
    SET_LO8(edx, MEM8(esi)); /* 0x17173468: mov dl, byte ptr [esi] */
    SET_LO8(ecx, LO8(edx)); /* 0x1717346A: mov cl, dl */
    /* cmp LO8(edx), MEM8(edi) */ /* 0x1717346C: cmp dl, byte ptr [edi] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(edi)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1717348A; /* 0x1717346E: jne 0x1717348a */
L_17173470:
    /* test LO8(ecx), LO8(ecx) */ /* 0x17173470: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_17173486; /* 0x17173472: je 0x17173486 */
L_17173474:
    SET_LO8(edx, MEM8(esi + 0x1)); /* 0x17173474: mov dl, byte ptr [esi + 1] */
    SET_LO8(ecx, LO8(edx)); /* 0x17173477: mov cl, dl */
    /* cmp LO8(edx), MEM8(edi + 0x1) */ /* 0x17173479: cmp dl, byte ptr [edi + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(edi + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1717348A; /* 0x1717347C: jne 0x1717348a */
L_1717347E:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1717347E: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1717347F: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x17173480: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x17173481: inc edi */
    _flag_k = FK_INC;
    /* test LO8(ecx), LO8(ecx) */ /* 0x17173482: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17173468; /* 0x17173484: jne 0x17173468 */
L_17173486:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x17173486: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1717348F; /* 0x17173488: jmp 0x1717348f */
L_1717348A:
    { uint32_t _sa = ecx, _sb = ecx, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1717348A: sbb ecx, ecx */
      ecx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = ecx, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1717348C: sbb ecx, -1 */
      ecx = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_1717348F:
    /* test ecx, ecx */ /* 0x1717348F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171734A3; /* 0x17173491: je 0x171734a3 */
L_17173493:
    ecx = MEM32(ebp + 0x10); /* 0x17173493: mov ecx, dword ptr [ebp + 0x10] */
    eax = MEM32(eax + 0xC); /* 0x17173496: mov eax, dword ptr [eax + 0xc] */
    /* test eax, eax */ /* 0x17173499: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ecx + 0xC); /* 0x1717349B: mov ecx, dword ptr [ecx + 0xc] */
    MEM32(ebp + 0x10) = ecx; /* 0x1717349E: mov dword ptr [ebp + 0x10], ecx */
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17173462; /* 0x171734A1: jne 0x17173462 */
L_171734A3:
    /* test eax, eax */ /* 0x171734A3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171734E5; /* 0x171734A5: je 0x171734e5 */
L_171734A7:
    eax = MEM32(ebp + 0x10); /* 0x171734A7: mov eax, dword ptr [ebp + 0x10] */
    esi = MEM32(eax + 0x8); /* 0x171734AA: mov esi, dword ptr [eax + 8] */
    goto L_171734DF; /* 0x171734AD: jmp 0x171734df */
L_171734AF:
    PUSH32(esp, 0x30u); /* 0x171734AF: push 0x30 */
    RECOMP_CALL(sub_170E2944); /* 0x171734B1: call 0x170e2944 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171734B6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171734C7; /* 0x171734B8: je 0x171734c7 */
L_171734BA:
    ecx = esi + 0x10; /* 0x171734BA: lea ecx, [esi + 0x10] */
    PUSH32(esp, ecx); /* 0x171734BD: push ecx */
    ecx = eax; /* 0x171734BE: mov ecx, eax */
    RECOMP_CALL(sub_1712937F); /* 0x171734C0: call 0x1712937f */
    RECOMP_FLAGS_IN();
    goto L_171734C9; /* 0x171734C5: jmp 0x171734c9 */
L_171734C7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171734C7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171734C9:
    /* test eax, eax */ /* 0x171734C9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0x8); /* 0x171734CB: mov ecx, dword ptr [ebp + 8] */
    MEM32(ecx) = eax; /* 0x171734CE: mov dword ptr [ecx], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1717381F; /* 0x171734D0: je 0x1717381f */
L_171734D6:
    esi = MEM32(esi + 0xC); /* 0x171734D6: mov esi, dword ptr [esi + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x171734D9: add eax, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = eax; /* 0x171734DC: mov dword ptr [ebp + 8], eax */
L_171734DF:
    /* test esi, esi */ /* 0x171734DF: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171734AF; /* 0x171734E1: jne 0x171734af */
L_171734E3:
    goto L_1717350F; /* 0x171734E3: jmp 0x1717350f */
L_171734E5:
    PUSH32(esp, 0x30u); /* 0x171734E5: push 0x30 */
    RECOMP_CALL(sub_170E2944); /* 0x171734E7: call 0x170e2944 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171734EC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171734FA; /* 0x171734EE: je 0x171734fa */
L_171734F0:
    PUSH32(esp, ebx); /* 0x171734F0: push ebx */
    ecx = eax; /* 0x171734F1: mov ecx, eax */
    RECOMP_CALL(sub_1712937F); /* 0x171734F3: call 0x1712937f */
    RECOMP_FLAGS_IN();
    goto L_171734FC; /* 0x171734F8: jmp 0x171734fc */
L_171734FA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171734FA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171734FC:
    /* test eax, eax */ /* 0x171734FC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0x8); /* 0x171734FE: mov ecx, dword ptr [ebp + 8] */
    MEM32(ecx) = eax; /* 0x17173501: mov dword ptr [ecx], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1717381F; /* 0x17173503: je 0x1717381f */
L_17173509:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x17173509: add eax, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = eax; /* 0x1717350C: mov dword ptr [ebp + 8], eax */
L_1717350F:
    /* cmp MEM32(ebp + (-0x8)), 0 */ /* 0x1717350F: cmp dword ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1717351F; /* 0x17173513: jne 0x1717351f */
L_17173515:
    /* cmp MEM32(ebp + (-0x10)), 0 */ /* 0x17173515: cmp dword ptr [ebp - 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17173654; /* 0x17173519: je 0x17173654 */
L_1717351F:
    ecx = MEM32(ebp + (-0x1C)); /* 0x1717351F: mov ecx, dword ptr [ebp - 0x1c] */
    esi = MEM32(ecx); /* 0x17173522: mov esi, dword ptr [ecx] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x17173524: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17173526: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x17173528: inc edi */
    _flag_k = FK_INC;
    goto L_17173552; /* 0x17173529: jmp 0x17173552 */
L_1717352B:
    /* test eax, eax */ /* 0x1717352B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17173535; /* 0x1717352D: je 0x17173535 */
L_1717352F:
    /* cmp eax, MEM32(esi + 0x28) */ /* 0x1717352F: cmp eax, dword ptr [esi + 0x28] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x28));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17173535; /* 0x17173532: je 0x17173535 */
L_17173534:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x17173534: inc edi */
    _flag_k = FK_INC;
L_17173535:
    ecx = MEM32(ebp + (-0x4)); /* 0x17173535: mov ecx, dword ptr [ebp - 4] */
    PUSH32(esp, 0); /* 0x17173538: push 0 */
    PUSH32(esp, 0); /* 0x1717353A: push 0 */
    PUSH32(esp, MEM32(esi + 0x2C)); /* 0x1717353C: push dword ptr [esi + 0x2c] */
    PUSH32(esp, MEM32(esi + 0x28)); /* 0x1717353F: push dword ptr [esi + 0x28] */
    RECOMP_CALL(sub_171710CC); /* 0x17173542: call 0x171710cc */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x17173547: add edi, eax */
    _flag_k = FK_ADD;
    eax = MEM32(esi + 0x2C); /* 0x17173549: mov eax, dword ptr [esi + 0x2c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x28));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esi + 0x28); /* 0x1717354C: add eax, dword ptr [esi + 0x28] */
    _flag_k = FK_ADD;
    esi = MEM32(esi + 0xC); /* 0x1717354F: mov esi, dword ptr [esi + 0xc] */
L_17173552:
    /* test esi, esi */ /* 0x17173552: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1717352B; /* 0x17173554: jne 0x1717352b */
L_17173556:
    ecx = MEM32(ebp + (-0x4)); /* 0x17173556: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x17173559: inc edi */
    _flag_k = FK_INC;
    PUSH32(esp, 1); /* 0x1717355A: push 1 */
    PUSH32(esp, edi); /* 0x1717355C: push edi */
    MEM32(ebp + 0x8) = edi; /* 0x1717355D: mov dword ptr [ebp + 8], edi */
    RECOMP_CALL(sub_1721BE6F); /* 0x17173560: call 0x1721be6f */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x17173565: mov edi, eax */
    /* test edi, edi */ /* 0x17173567: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1717381F; /* 0x17173569: je 0x1717381f */
L_1717356F:
    ecx = MEM32(ebp + (-0x1C)); /* 0x1717356F: mov ecx, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17173572: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x8)), eax */ /* 0x17173574: cmp dword ptr [ebp - 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x10) = 1; /* 0x17173577: mov dword ptr [ebp + 0x10], 1 */
    SET_LO8(ebx, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1717357E: sete bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(ebx, LO8(ebx) - 1); /* 0x17173581: dec bl */
    _flag_k = FK_NARROW(FK_DEC, 24);
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0xFBu) << 24;
    SET_LO8(ebx, LO8(ebx) & 0xFBu); /* 0x17173583: and bl, 0xfb */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x27u) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(ebx, LO8(ebx) + 0x27u); /* 0x17173586: add bl, 0x27 */
    _flag_k = FK_NARROW(FK_ADD, 24);
    MEM8(edi) = (uint8_t)(LO8(ebx)); /* 0x17173589: mov byte ptr [edi], bl */
    esi = MEM32(ecx); /* 0x1717358B: mov esi, dword ptr [ecx] */
    /* cmp esi, eax */ /* 0x1717358D: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171735CB; /* 0x1717358F: je 0x171735cb */
L_17173591:
    /* test eax, eax */ /* 0x17173591: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171735A4; /* 0x17173593: je 0x171735a4 */
L_17173595:
    /* cmp eax, MEM32(esi + 0x28) */ /* 0x17173595: cmp eax, dword ptr [esi + 0x28] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x28));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171735A4; /* 0x17173598: je 0x171735a4 */
L_1717359A:
    eax = MEM32(ebp + 0x10); /* 0x1717359A: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 1; /* 0x1717359D: inc dword ptr [ebp + 0x10] */
    _flag_k = FK_INC;
    MEM8(edi + eax) = (uint8_t)(0x20u); /* 0x171735A0: mov byte ptr [edi + eax], 0x20 */
L_171735A4:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171735A4: push dword ptr [ebp + 8] */
    eax = MEM32(ebp + 0x10); /* 0x171735A7: mov eax, dword ptr [ebp + 0x10] */
    ecx = MEM32(ebp + (-0x4)); /* 0x171735AA: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x171735AD: add eax, edi */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x171735AF: push eax */
    PUSH32(esp, MEM32(esi + 0x2C)); /* 0x171735B0: push dword ptr [esi + 0x2c] */
    PUSH32(esp, MEM32(esi + 0x28)); /* 0x171735B3: push dword ptr [esi + 0x28] */
    RECOMP_CALL(sub_171710CC); /* 0x171735B6: call 0x171710cc */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + eax; /* 0x171735BB: add dword ptr [ebp + 0x10], eax */
    _flag_k = FK_ADD;
    eax = MEM32(esi + 0x2C); /* 0x171735BE: mov eax, dword ptr [esi + 0x2c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x28));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esi + 0x28); /* 0x171735C1: add eax, dword ptr [esi + 0x28] */
    _flag_k = FK_ADD;
    esi = MEM32(esi + 0xC); /* 0x171735C4: mov esi, dword ptr [esi + 0xc] */
    /* test esi, esi */ /* 0x171735C7: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17173591; /* 0x171735C9: jne 0x17173591 */
L_171735CB:
    esi = MEM32(ebp + 0x10); /* 0x171735CB: mov esi, dword ptr [ebp + 0x10] */
    ecx = ebp + (-0x78); /* 0x171735CE: lea ecx, [ebp - 0x78] */
    MEM8(edi + esi) = (uint8_t)(LO8(ebx)); /* 0x171735D1: mov byte ptr [edi + esi], bl */
    RECOMP_CALL(sub_17173AF3); /* 0x171735D4: call 0x17173af3 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + (-0x4)); /* 0x171735D9: mov ebx, dword ptr [ebp - 4] */
    eax = ebx + 0x18; /* 0x171735DC: lea eax, [ebx + 0x18] */
    PUSH32(esp, eax); /* 0x171735DF: push eax */
    eax = MEM32(ebp + (-0x18)); /* 0x171735E0: mov eax, dword ptr [ebp - 0x18] */
    PUSH32(esp, ebx); /* 0x171735E3: push ebx */
    PUSH32(esp, MEM32(eax + 0x14)); /* 0x171735E4: push dword ptr [eax + 0x14] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x171735E7: inc esi */
    _flag_k = FK_INC;
    PUSH32(esp, MEM32(eax + 0x10)); /* 0x171735E8: push dword ptr [eax + 0x10] */
    ecx = ebp + (-0x78); /* 0x171735EB: lea ecx, [ebp - 0x78] */
    PUSH32(esp, esi); /* 0x171735EE: push esi */
    PUSH32(esp, edi); /* 0x171735EF: push edi */
    RECOMP_CALL(sub_17173B12); /* 0x171735F0: call 0x17173b12 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171735F5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x78); /* 0x171735F7: lea ecx, [ebp - 0x78] */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171737FB; /* 0x171735FA: jl 0x171737fb */
L_17173600:
    eax = ebp + (-0x40); /* 0x17173600: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x17173603: push eax */
    PUSH32(esp, MEM32(ebx + 0x298)); /* 0x17173604: push dword ptr [ebx + 0x298] */
    RECOMP_CALL(sub_17174BE6); /* 0x1717360A: call 0x17174be6 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1717360F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171737F8; /* 0x17173611: jl 0x171737f8 */
L_17173617:
    PUSH32(esp, 0x30u); /* 0x17173617: push 0x30 */
    RECOMP_CALL(sub_170E2944); /* 0x17173619: call 0x170e2944 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1717361E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1717362F; /* 0x17173620: je 0x1717362f */
L_17173622:
    ecx = ebp + (-0x40); /* 0x17173622: lea ecx, [ebp - 0x40] */
    PUSH32(esp, ecx); /* 0x17173625: push ecx */
    ecx = eax; /* 0x17173626: mov ecx, eax */
    RECOMP_CALL(sub_1712937F); /* 0x17173628: call 0x1712937f */
    RECOMP_FLAGS_IN();
    goto L_17173631; /* 0x1717362D: jmp 0x17173631 */
L_1717362F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1717362F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_17173631:
    /* test eax, eax */ /* 0x17173631: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0x1C)); /* 0x17173633: mov ecx, dword ptr [ebp - 0x1c] */
    MEM32(ecx) = eax; /* 0x17173636: mov dword ptr [ecx], eax */
    ecx = ebp + (-0x78); /* 0x17173638: lea ecx, [ebp - 0x78] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171737FB; /* 0x1717363B: je 0x171737fb */
L_17173641:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & 0; /* 0x17173641: and dword ptr [ebp - 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x17173645: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x17173649: add eax, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = eax; /* 0x1717364C: mov dword ptr [ebp + 8], eax */
    RECOMP_CALL(sub_17129E95); /* 0x1717364F: call 0x17129e95 */
    RECOMP_FLAGS_IN();
L_17173654:
    eax = MEM32(ebp + (-0x20)); /* 0x17173654: mov eax, dword ptr [ebp - 0x20] */
    ebx = MEM32(eax + 0xC); /* 0x17173657: mov ebx, dword ptr [eax + 0xc] */
    /* test ebx, ebx */ /* 0x1717365A: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x20)) = ebx; /* 0x1717365C: mov dword ptr [ebp - 0x20], ebx */
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171733D5; /* 0x1717365F: jne 0x171733d5 */
L_17173665:
    ecx = MEM32(ebp + (-0x4)); /* 0x17173665: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x17173668: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1717366A:
    /* cmp MEM32(ebp + (-0xC)), esi */ /* 0x1717366A: cmp dword ptr [ebp - 0xc], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = ebp + (-0xC); /* 0x1717366D: lea eax, [ebp - 0xc] */
    MEM32(ebp + 0x8) = eax; /* 0x17173670: mov dword ptr [ebp + 8], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171737E5; /* 0x17173673: je 0x171737e5 */
L_17173679:
    eax = MEM32(ebp + 0x8); /* 0x17173679: mov eax, dword ptr [ebp + 8] */
    ebx = MEM32(eax); /* 0x1717367C: mov ebx, dword ptr [eax] */
    edx = MEM32(ebx + 0xC); /* 0x1717367E: mov edx, dword ptr [ebx + 0xc] */
    /* test edx, edx */ /* 0x17173681: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1717368A; /* 0x17173683: je 0x1717368a */
L_17173685:
    esi = MEM32(edx + 0xC); /* 0x17173685: mov esi, dword ptr [edx + 0xc] */
    goto L_1717368C; /* 0x17173688: jmp 0x1717368c */
L_1717368A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1717368A: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1717368C:
    eax = edx; /* 0x1717368C: mov eax, edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1717368E: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x17173690: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    ecx = edx + 0x10; /* 0x17173692: lea ecx, [edx + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    eax = eax & ecx; /* 0x17173695: and eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi; /* 0x17173697: mov ecx, esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x17173699: neg ecx */
    _flag_k = FK_CMP;
    { uint32_t _sa = ecx, _sb = ecx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1717369B: sbb ecx, ecx */
      ecx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    edi = esi + 0x10; /* 0x1717369D: lea edi, [esi + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    ecx = ecx & edi; /* 0x171736A0: and ecx, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edx, edx */ /* 0x171736A2: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x20)) = esi; /* 0x171736A4: mov dword ptr [ebp - 0x20], esi */
    MEM32(ebp + 0x10) = ecx; /* 0x171736A7: mov dword ptr [ebp + 0x10], ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171737D0; /* 0x171736AA: je 0x171737d0 */
L_171736B0:
    /* test esi, esi */ /* 0x171736B0: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171737D0; /* 0x171736B2: je 0x171737d0 */
L_171736B8:
    /* cmp MEM32(eax), 1 */ /* 0x171736B8: cmp dword ptr [eax], 1 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171737D0; /* 0x171736BB: jne 0x171737d0 */
L_171736C1:
    esi = eax + 0x8; /* 0x171736C1: lea esi, [eax + 8] */
    PUSH32(esp, 3); /* 0x171736C4: push 3 */
    edi = 0x17021B3Cu; /* 0x171736C6: mov edi, 0x17021b3c */
    ecx = POP32_VAL(esp); /* 0x171736CB: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171736CC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM8(esi); _b = MEM8(edi); esi += _df; edi += _df; ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x171736CE: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_171737D0; /* 0x171736D0: jne 0x171737d0 */
L_171736D6:
    eax = MEM32(ebp + 0x10); /* 0x171736D6: mov eax, dword ptr [ebp + 0x10] */
    eax = MEM32(eax + 0x1C); /* 0x171736D9: mov eax, dword ptr [eax + 0x1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x2C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebx + 0x2C); /* 0x171736DC: add eax, dword ptr [ebx + 0x2c] */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0x4)); /* 0x171736DF: mov ecx, dword ptr [ebp - 4] */
    PUSH32(esp, 1); /* 0x171736E2: push 1 */
    PUSH32(esp, eax); /* 0x171736E4: push eax */
    MEM32(ebp + (-0x1C)) = eax; /* 0x171736E5: mov dword ptr [ebp - 0x1c], eax */
    RECOMP_CALL(sub_1721BE6F); /* 0x171736E8: call 0x1721be6f */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171736ED: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0xC) = eax; /* 0x171736EF: mov dword ptr [ebp + 0xc], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1717381F; /* 0x171736F2: je 0x1717381f */
L_171736F8:
    ecx = MEM32(ebx + 0x2C); /* 0x171736F8: mov ecx, dword ptr [ebx + 0x2c] */
    esi = MEM32(ebx + 0x28); /* 0x171736FB: mov esi, dword ptr [ebx + 0x28] */
    edi = eax; /* 0x171736FE: mov edi, eax */
    eax = ecx; /* 0x17173700: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x17173702: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x17173702: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x17173705: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x17173707: mov ecx, eax */
    eax = MEM32(ebp + 0x10); /* 0x17173709: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1717370C: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x1717370F: rep movsb byte ptr es:[edi], byte ptr [esi] */
    ecx = MEM32(eax + 0x1C); /* 0x17173711: mov ecx, dword ptr [eax + 0x1c] */
    esi = MEM32(eax + 0x18); /* 0x17173714: mov esi, dword ptr [eax + 0x18] */
    edi = MEM32(ebx + 0x2C); /* 0x17173717: mov edi, dword ptr [ebx + 0x2c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ebp + 0xC); /* 0x1717371A: add edi, dword ptr [ebp + 0xc] */
    _flag_k = FK_ADD;
    eax = ecx; /* 0x1717371D: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1717371F: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1717371F: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x17173722: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x17173724: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x17173726: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x17173729: rep movsb byte ptr es:[edi], byte ptr [esi] */
    ecx = ebp + (-0x78); /* 0x1717372B: lea ecx, [ebp - 0x78] */
    RECOMP_CALL(sub_17173AF3); /* 0x1717372E: call 0x17173af3 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x17173733: mov eax, dword ptr [ebp - 4] */
    ecx = eax + 0x18; /* 0x17173736: lea ecx, [eax + 0x18] */
    PUSH32(esp, ecx); /* 0x17173739: push ecx */
    PUSH32(esp, eax); /* 0x1717373A: push eax */
    PUSH32(esp, MEM32(ebx + 0x24)); /* 0x1717373B: push dword ptr [ebx + 0x24] */
    ecx = ebp + (-0x78); /* 0x1717373E: lea ecx, [ebp - 0x78] */
    PUSH32(esp, MEM32(ebx + 0x20)); /* 0x17173741: push dword ptr [ebx + 0x20] */
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x17173744: push dword ptr [ebp - 0x1c] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x17173747: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_17173B12); /* 0x1717374A: call 0x17173b12 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1717374F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171737F8; /* 0x17173751: jl 0x171737f8 */
L_17173757:
    eax = MEM32(ebp + (-0x20)); /* 0x17173757: mov eax, dword ptr [ebp - 0x20] */
    edi = MEM32(eax + 0xC); /* 0x1717375A: mov edi, dword ptr [eax + 0xc] */
    MEM32(ebp + 0xC) = edi; /* 0x1717375D: mov dword ptr [ebp + 0xc], edi */
    esi = ebx; /* 0x17173760: mov esi, ebx */
L_17173762:
    eax = ebp + (-0x40); /* 0x17173762: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x17173765: push eax */
    eax = MEM32(ebp + (-0x4)); /* 0x17173766: mov eax, dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(eax + 0x298)); /* 0x17173769: push dword ptr [eax + 0x298] */
    ecx = ebp + (-0x78); /* 0x1717376F: lea ecx, [ebp - 0x78] */
    RECOMP_CALL(sub_17174BE6); /* 0x17173772: call 0x17174be6 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17173777: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171737F8; /* 0x17173779: jl 0x171737f8 */
L_1717377B:
    /* cmp MEM32(ebp + (-0x40)), 0xDu */ /* 0x1717377B: cmp dword ptr [ebp - 0x40], 0xd */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x40))); _flag_b = (uint32_t)(0xDu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171737B8; /* 0x1717377F: je 0x171737b8 */
L_17173781:
    /* test esi, esi */ /* 0x17173781: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17173797; /* 0x17173783: je 0x17173797 */
L_17173785:
    edi = esi + 0x10; /* 0x17173785: lea edi, [esi + 0x10] */
    PUSH32(esp, 8); /* 0x17173788: push 8 */
    ecx = POP32_VAL(esp); /* 0x1717378A: pop ecx */
    esi = ebp + (-0x40); /* 0x1717378B: lea esi, [ebp - 0x40] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1717378E: rep movsd dword ptr es:[edi], dword ptr [esi] */
    edi = MEM32(ebp + 0xC); /* 0x17173790: mov edi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x17173793: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_17173762; /* 0x17173795: jmp 0x17173762 */
L_17173797:
    PUSH32(esp, 0x30u); /* 0x17173797: push 0x30 */
    RECOMP_CALL(sub_170E2944); /* 0x17173799: call 0x170e2944 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1717379E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171737AF; /* 0x171737A0: je 0x171737af */
L_171737A2:
    ecx = ebp + (-0x40); /* 0x171737A2: lea ecx, [ebp - 0x40] */
    PUSH32(esp, ecx); /* 0x171737A5: push ecx */
    ecx = eax; /* 0x171737A6: mov ecx, eax */
    RECOMP_CALL(sub_1712937F); /* 0x171737A8: call 0x1712937f */
    RECOMP_FLAGS_IN();
    goto L_171737B1; /* 0x171737AD: jmp 0x171737b1 */
L_171737AF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171737AF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171737B1:
    MEM32(ebx + 0xC) = eax; /* 0x171737B1: mov dword ptr [ebx + 0xc], eax */
    ebx = eax; /* 0x171737B4: mov ebx, eax */
    RECOMP_BACKEDGE();
    goto L_17173762; /* 0x171737B6: jmp 0x17173762 */
L_171737B8:
    /* test esi, esi */ /* 0x171737B8: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171737C1; /* 0x171737BA: jne 0x171737c1 */
L_171737BC:
    MEM32(ebx + 0xC) = edi; /* 0x171737BC: mov dword ptr [ebx + 0xc], edi */
    goto L_171737C6; /* 0x171737BF: jmp 0x171737c6 */
L_171737C1:
    eax = MEM32(ebp + 0x8); /* 0x171737C1: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = edi; /* 0x171737C4: mov dword ptr [eax], edi */
L_171737C6:
    ecx = ebp + (-0x78); /* 0x171737C6: lea ecx, [ebp - 0x78] */
    RECOMP_CALL(sub_17129E95); /* 0x171737C9: call 0x17129e95 */
    RECOMP_FLAGS_IN();
    goto L_171737D6; /* 0x171737CE: jmp 0x171737d6 */
L_171737D0:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0xCu; /* 0x171737D0: add ebx, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = ebx; /* 0x171737D3: mov dword ptr [ebp + 8], ebx */
L_171737D6:
    eax = MEM32(ebp + 0x8); /* 0x171737D6: mov eax, dword ptr [ebp + 8] */
    /* cmp MEM32(eax), 0 */ /* 0x171737D9: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_17173679; /* 0x171737DC: jne 0x17173679 */
L_171737E2:
    ecx = MEM32(ebp + (-0x4)); /* 0x171737E2: mov ecx, dword ptr [ebp - 4] */
L_171737E5:
    eax = MEM32(ecx + 0x64); /* 0x171737E5: mov eax, dword ptr [ecx + 0x64] */
    edx = MEM32(ebp + 0x8); /* 0x171737E8: mov edx, dword ptr [ebp + 8] */
    MEM32(edx) = eax; /* 0x171737EB: mov dword ptr [edx], eax */
    eax = MEM32(ebp + (-0xC)); /* 0x171737ED: mov eax, dword ptr [ebp - 0xc] */
    MEM32(ecx + 0x64) = eax; /* 0x171737F0: mov dword ptr [ecx + 0x64], eax */
    RECOMP_BACKEDGE();
    goto L_171731CD; /* 0x171737F3: jmp 0x171731cd */
L_171737F8:
    ecx = ebp + (-0x78); /* 0x171737F8: lea ecx, [ebp - 0x78] */
L_171737FB:
    RECOMP_CALL(sub_17129E95); /* 0x171737FB: call 0x17129e95 */
    RECOMP_FLAGS_IN();
    goto L_1717381F; /* 0x17173800: jmp 0x1717381f */
L_17173802:
    eax = MEM32(ebp + 0x8); /* 0x17173802: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(eax + 0x8)); /* 0x17173805: push dword ptr [eax + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x18u; /* 0x17173808: add ecx, 0x18 */
    _flag_k = FK_ADD;
    PUSH32(esp, 0x17021B10u); /* 0x1717380B: push 0x17021b10 */
    PUSH32(esp, 0x5ECu); /* 0x17173810: push 0x5ec */
    PUSH32(esp, eax); /* 0x17173815: push eax */
    PUSH32(esp, ecx); /* 0x17173816: push ecx */
    RECOMP_CALL(sub_17174059); /* 0x17173817: call 0x17174059 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1717381C: add esp, 0x14 */
    _flag_k = FK_ADD;
L_1717381F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1717381F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_17173821:
    edi = POP32_VAL(esp); /* 0x17173821: pop edi */
    esi = POP32_VAL(esp); /* 0x17173822: pop esi */
    ebx = POP32_VAL(esp); /* 0x17173823: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17173824: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x17173825: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1717382D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1717382Du);

L_1717382D:
    eax = ecx; /* 0x1717382D: mov eax, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1717382F: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = ecx; /* 0x17173831: mov dword ptr [eax], ecx */
    MEM32(eax + 0x4) = ecx; /* 0x17173833: mov dword ptr [eax + 4], ecx */
    MEM32(eax + 0x8) = ecx; /* 0x17173836: mov dword ptr [eax + 8], ecx */
    MEM32(eax + 0xC) = ecx; /* 0x17173839: mov dword ptr [eax + 0xc], ecx */
    MEM32(eax + 0x10) = 1; /* 0x1717383C: mov dword ptr [eax + 0x10], 1 */
    MEM32(eax + 0x14) = ecx; /* 0x17173843: mov dword ptr [eax + 0x14], ecx */
    MEM32(eax + 0x18) = ecx; /* 0x17173846: mov dword ptr [eax + 0x18], ecx */
    MEM32(eax + 0x1C) = ecx; /* 0x17173849: mov dword ptr [eax + 0x1c], ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1717384C: ret  */
    RECOMP_REGS_OUT();
}

void sub_17173852(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17173852u);

L_17173852:
    edi = edi; /* 0x17173852: mov edi, edi */
    PUSH32(esp, esi); /* 0x17173854: push esi */
    esi = ecx; /* 0x17173855: mov esi, ecx */
    /* cmp MEM32(esi), 0 */ /* 0x17173857: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1717386F; /* 0x1717385A: je 0x1717386f */
L_1717385C:
    PUSH32(esp, edi); /* 0x1717385C: push edi */
L_1717385D:
    eax = MEM32(esi); /* 0x1717385D: mov eax, dword ptr [esi] */
    edi = MEM32(eax); /* 0x1717385F: mov edi, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x17173861: push eax */
    RECOMP_CALL(sub_1721B010); /* 0x17173862: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    /* test edi, edi */ /* 0x17173867: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x17173869: pop ecx */
    MEM32(esi) = edi; /* 0x1717386A: mov dword ptr [esi], edi */
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1717385D; /* 0x1717386C: jne 0x1717385d */
L_1717386E:
    edi = POP32_VAL(esp); /* 0x1717386E: pop edi */
L_1717386F:
    PUSH32(esp, MEM32(esi + 0x18)); /* 0x1717386F: push dword ptr [esi + 0x18] */
    RECOMP_CALL(sub_1721B010); /* 0x17173872: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x1C)); /* 0x17173877: push dword ptr [esi + 0x1c] */
    RECOMP_CALL(sub_1721B010); /* 0x1717387A: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1717387F: pop ecx */
    ecx = POP32_VAL(esp); /* 0x17173880: pop ecx */
    esi = POP32_VAL(esp); /* 0x17173881: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x17173882: ret  */
    RECOMP_REGS_OUT();
}

void sub_17173888(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17173888u);

L_17173888:
    edi = edi; /* 0x17173888: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1717388A: push ebp */
    ebp = esp; /* 0x1717388B: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1717388D: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x17173890: push ebx */
    ebx = ecx; /* 0x17173891: mov ebx, ecx */
    edx = MEM32(ebx + 0x14); /* 0x17173893: mov edx, dword ptr [ebx + 0x14] */
    ecx = edx; /* 0x17173896: mov ecx, edx */
    PUSH32(esp, esi); /* 0x17173898: push esi */
    PUSH32(esp, edi); /* 0x17173899: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1717389A: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ecx; /* 0x1717389C: mov eax, ecx */
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x1717389E: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x1717389E: shr eax, 1 */
    /* cmp ecx, edi */ /* 0x171738A0: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0xC)) = edi; /* 0x171738A2: mov dword ptr [ebp - 0xc], edi */
    MEM32(ebp + (-0x4)) = eax; /* 0x171738A5: mov dword ptr [ebp - 4], eax */
    if (CMP_BE(_flag_a, _flag_b)) goto L_171738D2; /* 0x171738A8: jbe 0x171738d2 */
L_171738AA:
    esi = MEM32(ebx + 0x18); /* 0x171738AA: mov esi, dword ptr [ebx + 0x18] */
    esi = MEM32(esi + eax * 4); /* 0x171738AD: mov esi, dword ptr [esi + eax*4] */
    /* cmp MEM32(ebp + 0x8), esi */ /* 0x171738B0: cmp dword ptr [ebp + 8], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_171738BA; /* 0x171738B3: jbe 0x171738ba */
L_171738B5:
    edi = eax + 0x1; /* 0x171738B5: lea edi, [eax + 1] */
    goto L_171738BE; /* 0x171738B8: jmp 0x171738be */
L_171738BA:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_AE, _cf)) goto L_171738CA; /* 0x171738BA: jae 0x171738ca */
L_171738BC:
    ecx = eax; /* 0x171738BC: mov ecx, eax */
L_171738BE:
    eax = ecx + edi; /* 0x171738BE: lea eax, [ecx + edi] */
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x171738C1: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x171738C1: shr eax, 1 */
    /* cmp edi, ecx */ /* 0x171738C3: cmp edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = eax; /* 0x171738C5: mov dword ptr [ebp - 4], eax */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171738AA; /* 0x171738C8: jb 0x171738aa */
L_171738CA:
    /* cmp edi, ecx */ /* 0x171738CA: cmp edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_171739B0; /* 0x171738CC: jb 0x171739b0 */
L_171738D2:
    ecx = edx; /* 0x171738D2: mov ecx, edx */
    ecx = ~ecx; /* 0x171738D4: not ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171738D6: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    ecx = ecx & edx; /* 0x171738D7: and ecx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, ecx */ /* 0x171738D9: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1717397D; /* 0x171738DB: jne 0x1717397d */
L_171738E1:
    /* test edx, edx */ /* 0x171738E1: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171738E9; /* 0x171738E3: je 0x171738e9 */
L_171738E5:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + edx; /* 0x171738E5: add edx, edx */
    _flag_k = FK_ADD;
    goto L_171738EC; /* 0x171738E7: jmp 0x171738ec */
L_171738E9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171738E9: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x171738EB: inc edx */
    _flag_k = FK_INC;
L_171738EC:
    eax = edx; /* 0x171738EC: mov eax, edx */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x171738EE: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x171738EE: shl eax, 2 */
    PUSH32(esp, eax); /* 0x171738F1: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x171738F2: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171738F7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x171738F9: pop ecx */
    MEM32(ebp + (-0x8)) = eax; /* 0x171738FA: mov dword ptr [ebp - 8], eax */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1717390B; /* 0x171738FD: jne 0x1717390b */
L_171738FF:
    MEM32(ebp + (-0xC)) = 0x8007000Eu; /* 0x171738FF: mov dword ptr [ebp - 0xc], 0x8007000e */
    goto L_171739B9; /* 0x17173906: jmp 0x171739b9 */
L_1717390B:
    ecx = MEM32(ebx + 0x14); /* 0x1717390B: mov ecx, dword ptr [ebx + 0x14] */
    esi = MEM32(ebx + 0x1C); /* 0x1717390E: mov esi, dword ptr [ebx + 0x1c] */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x17173911: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x17173911: shl ecx, 2 */
    edi = eax; /* 0x17173914: mov edi, eax */
    eax = ecx; /* 0x17173916: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x17173918: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x17173918: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1717391B: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x1717391D: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1717391F: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x17173922: rep movsb byte ptr es:[edi], byte ptr [esi] */
    PUSH32(esp, MEM32(ebx + 0x1C)); /* 0x17173924: push dword ptr [ebx + 0x1c] */
    RECOMP_CALL(sub_1721B010); /* 0x17173927: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x8)); /* 0x1717392C: mov eax, dword ptr [ebp - 8] */
    MEM32(ebx + 0x1C) = eax; /* 0x1717392F: mov dword ptr [ebx + 0x1c], eax */
    eax = MEM32(ebx + 0x14); /* 0x17173932: mov eax, dword ptr [ebx + 0x14] */
    /* test eax, eax */ /* 0x17173935: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x17173937: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1717393E; /* 0x17173938: je 0x1717393e */
L_1717393A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1717393A: add eax, eax */
    _flag_k = FK_ADD;
    goto L_17173941; /* 0x1717393C: jmp 0x17173941 */
L_1717393E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1717393E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17173940: inc eax */
    _flag_k = FK_INC;
L_17173941:
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x17173941: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x17173941: shl eax, 2 */
    PUSH32(esp, eax); /* 0x17173944: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x17173945: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1717394A: mov edi, eax */
    /* test edi, edi */ /* 0x1717394C: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1717394E: pop ecx */
    MEM32(ebp + (-0x8)) = edi; /* 0x1717394F: mov dword ptr [ebp - 8], edi */
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_171738FF; /* 0x17173952: je 0x171738ff */
L_17173954:
    ecx = MEM32(ebx + 0x14); /* 0x17173954: mov ecx, dword ptr [ebx + 0x14] */
    esi = MEM32(ebx + 0x18); /* 0x17173957: mov esi, dword ptr [ebx + 0x18] */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x1717395A: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x1717395A: shl ecx, 2 */
    eax = ecx; /* 0x1717395D: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1717395F: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1717395F: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x17173962: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x17173964: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x17173966: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x17173969: rep movsb byte ptr es:[edi], byte ptr [esi] */
    PUSH32(esp, MEM32(ebx + 0x18)); /* 0x1717396B: push dword ptr [ebx + 0x18] */
    RECOMP_CALL(sub_1721B010); /* 0x1717396E: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x8)); /* 0x17173973: mov eax, dword ptr [ebp - 8] */
    MEM32(ebx + 0x18) = eax; /* 0x17173976: mov dword ptr [ebx + 0x18], eax */
    eax = MEM32(ebp + (-0x4)); /* 0x17173979: mov eax, dword ptr [ebp - 4] */
    ecx = POP32_VAL(esp); /* 0x1717397C: pop ecx */
L_1717397D:
    edx = MEM32(ebx + 0x14); /* 0x1717397D: mov edx, dword ptr [ebx + 0x14] */
    goto L_17173996; /* 0x17173980: jmp 0x17173996 */
L_17173982:
    ecx = ecx + edx * 4; /* 0x17173982: lea ecx, [ecx + edx*4] */
    esi = MEM32(ecx + (-0x4)); /* 0x17173985: mov esi, dword ptr [ecx - 4] */
    MEM32(ecx) = esi; /* 0x17173988: mov dword ptr [ecx], esi */
    ecx = MEM32(ebx + 0x1C); /* 0x1717398A: mov ecx, dword ptr [ebx + 0x1c] */
    ecx = ecx + edx * 4; /* 0x1717398D: lea ecx, [ecx + edx*4] */
    esi = MEM32(ecx + (-0x4)); /* 0x17173990: mov esi, dword ptr [ecx - 4] */
    MEM32(ecx) = esi; /* 0x17173993: mov dword ptr [ecx], esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x17173995: dec edx */
    _flag_k = FK_DEC;
L_17173996:
    /* cmp edx, eax */ /* 0x17173996: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebx + 0x18); /* 0x17173998: mov ecx, dword ptr [ebx + 0x18] */
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_17173982; /* 0x1717399B: ja 0x17173982 */
L_1717399D:
    edx = MEM32(ebp + 0x8); /* 0x1717399D: mov edx, dword ptr [ebp + 8] */
    MEM32(ecx + eax * 4) = edx; /* 0x171739A0: mov dword ptr [ecx + eax*4], edx */
    ecx = MEM32(ebx + 0x1C); /* 0x171739A3: mov ecx, dword ptr [ebx + 0x1c] */
    MEM32(ecx + eax * 4) = 1; /* 0x171739A6: mov dword ptr [ecx + eax*4], 1 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(ebx + 0x14) = MEM32(ebx + 0x14) + 1; /* 0x171739AD: inc dword ptr [ebx + 0x14] */
    _flag_k = FK_INC;
L_171739B0:
    ecx = MEM32(ebp + 0xC); /* 0x171739B0: mov ecx, dword ptr [ebp + 0xc] */
    /* test ecx, ecx */ /* 0x171739B3: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171739B9; /* 0x171739B5: je 0x171739b9 */
L_171739B7:
    MEM32(ecx) = eax; /* 0x171739B7: mov dword ptr [ecx], eax */
L_171739B9:
    PUSH32(esp, 0); /* 0x171739B9: push 0 */
    RECOMP_CALL(sub_1721B010); /* 0x171739BB: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0xC)); /* 0x171739C0: mov eax, dword ptr [ebp - 0xc] */
    ecx = POP32_VAL(esp); /* 0x171739C3: pop ecx */
    edi = POP32_VAL(esp); /* 0x171739C4: pop edi */
    esi = POP32_VAL(esp); /* 0x171739C5: pop esi */
    ebx = POP32_VAL(esp); /* 0x171739C6: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171739C7: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171739C8: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171739D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171739D0u);

L_171739D0:
    edi = edi; /* 0x171739D0: mov edi, edi */
    PUSH32(esp, ebx); /* 0x171739D2: push ebx */
    PUSH32(esp, esi); /* 0x171739D3: push esi */
    esi = ecx; /* 0x171739D4: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x171739D6: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi), ebx */ /* 0x171739D8: cmp dword ptr [esi], ebx */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171739EF; /* 0x171739DA: je 0x171739ef */
L_171739DC:
    PUSH32(esp, edi); /* 0x171739DC: push edi */
L_171739DD:
    eax = MEM32(esi); /* 0x171739DD: mov eax, dword ptr [esi] */
    edi = MEM32(eax); /* 0x171739DF: mov edi, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x171739E1: push eax */
    RECOMP_CALL(sub_1721B010); /* 0x171739E2: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    /* cmp edi, ebx */ /* 0x171739E7: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x171739E9: pop ecx */
    MEM32(esi) = edi; /* 0x171739EA: mov dword ptr [esi], edi */
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_171739DD; /* 0x171739EC: jne 0x171739dd */
L_171739EE:
    edi = POP32_VAL(esp); /* 0x171739EE: pop edi */
L_171739EF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171739EF: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x14), ebx */ /* 0x171739F1: cmp dword ptr [esi + 0x14], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi + 0x4) = ebx; /* 0x171739F4: mov dword ptr [esi + 4], ebx */
    MEM32(esi + 0x8) = ebx; /* 0x171739F7: mov dword ptr [esi + 8], ebx */
    MEM32(esi + 0xC) = ebx; /* 0x171739FA: mov dword ptr [esi + 0xc], ebx */
    if (CMP_BE(_flag_a, _flag_b)) goto L_17173A0E; /* 0x171739FD: jbe 0x17173a0e */
L_171739FF:
    eax = MEM32(esi + 0x1C); /* 0x171739FF: mov eax, dword ptr [esi + 0x1c] */
    eax = eax + ecx * 4; /* 0x17173A02: lea eax, [eax + ecx*4] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0xFFFFFFDFu);
    MEM32(eax) = MEM32(eax) & 0xFFFFFFDFu; /* 0x17173A05: and dword ptr [eax], 0xffffffdf */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x17173A08: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, MEM32(esi + 0x14) */ /* 0x17173A09: cmp ecx, dword ptr [esi + 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171739FF; /* 0x17173A0C: jb 0x171739ff */
L_17173A0E:
    esi = POP32_VAL(esp); /* 0x17173A0E: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17173A0F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x17173A11: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x17173A12: ret  */
    RECOMP_REGS_OUT();
}

void sub_17173A18(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17173A18u);

L_17173A18:
    edi = edi; /* 0x17173A18: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17173A1A: push ebp */
    ebp = esp; /* 0x17173A1B: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x17173A1D: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x17173A20: push esi */
    PUSH32(esp, edi); /* 0x17173A21: push edi */
    edi = ecx; /* 0x17173A22: mov edi, ecx */
    ecx = eax + 0x1; /* 0x17173A24: lea ecx, [eax + 1] */
L_17173A27:
    SET_LO8(edx, MEM8(eax)); /* 0x17173A27: mov dl, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17173A29: inc eax */
    _flag_k = FK_INC;
    /* test LO8(edx), LO8(edx) */ /* 0x17173A2A: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17173A27; /* 0x17173A2C: jne 0x17173a27 */
L_17173A2E:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x17173A2E: sub eax, ecx */
    _flag_k = FK_CMP;
    esi = eax + 0x1; /* 0x17173A30: lea esi, [eax + 1] */
    eax = esi + 0x4; /* 0x17173A33: lea eax, [esi + 4] */
    PUSH32(esp, eax); /* 0x17173A36: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x17173A37: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17173A3C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x17173A3E: pop ecx */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17173A48; /* 0x17173A3F: jne 0x17173a48 */
L_17173A41:
    eax = 0x8007000Eu; /* 0x17173A41: mov eax, 0x8007000e */
    goto L_17173A6C; /* 0x17173A46: jmp 0x17173a6c */
L_17173A48:
    ecx = MEM32(edi); /* 0x17173A48: mov ecx, dword ptr [edi] */
    MEM32(eax) = ecx; /* 0x17173A4A: mov dword ptr [eax], ecx */
    ecx = esi + (-0x1); /* 0x17173A4C: lea ecx, [esi - 1] */
    _flag_a = (uint32_t)(MEM32(edi + 0x4)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edi + 0x4) = MEM32(edi + 0x4) + ecx; /* 0x17173A4F: add dword ptr [edi + 4], ecx */
    _flag_k = FK_ADD;
    MEM32(edi) = eax; /* 0x17173A52: mov dword ptr [edi], eax */
    ecx = esi; /* 0x17173A54: mov ecx, esi */
    esi = MEM32(ebp + 0x8); /* 0x17173A56: mov esi, dword ptr [ebp + 8] */
    edi = eax + 0x4; /* 0x17173A59: lea edi, [eax + 4] */
    eax = ecx; /* 0x17173A5C: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x17173A5E: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x17173A5E: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x17173A61: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x17173A63: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x17173A65: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x17173A68: rep movsb byte ptr es:[edi], byte ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17173A6A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_17173A6C:
    edi = POP32_VAL(esp); /* 0x17173A6C: pop edi */
    esi = POP32_VAL(esp); /* 0x17173A6D: pop esi */
    ebp = POP32_VAL(esp); /* 0x17173A6E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x17173A6F: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_17173A77(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17173A77u);

L_17173A77:
    edi = edi; /* 0x17173A77: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17173A79: push ebp */
    ebp = esp; /* 0x17173A7A: mov ebp, esp */
    PUSH32(esp, esi); /* 0x17173A7C: push esi */
    PUSH32(esp, edi); /* 0x17173A7D: push edi */
    edi = MEM32(ebp + 0x8); /* 0x17173A7E: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x17173A81: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    esi = ecx; /* 0x17173A83: mov esi, ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17173ADD; /* 0x17173A85: je 0x17173add */
L_17173A87:
    eax = MEM32(esi + 0x4); /* 0x17173A87: mov eax, dword ptr [esi + 4] */
    /* test eax, eax */ /* 0x17173A8A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17173A92; /* 0x17173A8C: jne 0x17173a92 */
L_17173A8E:
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(eax);
    MEM32(edi) = MEM32(edi) & eax; /* 0x17173A8E: and dword ptr [edi], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_17173ADD; /* 0x17173A90: jmp 0x17173add */
L_17173A92:
    PUSH32(esp, edi); /* 0x17173A92: push edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17173A93: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x17173A94: push eax */
    RECOMP_CALL(sub_1702B9BA); /* 0x17173A95: call 0x1702b9ba */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17173A9A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17173ADF; /* 0x17173A9C: jl 0x17173adf */
L_17173A9E:
    eax = MEM32(edi); /* 0x17173A9E: mov eax, dword ptr [edi] */
    ecx = MEM32(eax); /* 0x17173AA0: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x17173AA2: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xC)); /* 0x17173AA3: call dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x4));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esi + 0x4); /* 0x17173AA6: add eax, dword ptr [esi + 4] */
    _flag_k = FK_ADD;
    MEM8(eax) = (uint8_t)(0); /* 0x17173AA9: mov byte ptr [eax], 0 */
    edx = MEM32(esi); /* 0x17173AAC: mov edx, dword ptr [esi] */
    /* test edx, edx */ /* 0x17173AAE: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17173ADD; /* 0x17173AB0: je 0x17173add */
L_17173AB2:
    PUSH32(esp, ebx); /* 0x17173AB2: push ebx */
L_17173AB3:
    esi = edx + 0x4; /* 0x17173AB3: lea esi, [edx + 4] */
    ecx = esi; /* 0x17173AB6: mov ecx, esi */
    edi = ecx + 0x1; /* 0x17173AB8: lea edi, [ecx + 1] */
L_17173ABB:
    SET_LO8(ebx, MEM8(ecx)); /* 0x17173ABB: mov bl, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x17173ABD: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(ebx), LO8(ebx) */ /* 0x17173ABE: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17173ABB; /* 0x17173AC0: jne 0x17173abb */
L_17173AC2:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edi; /* 0x17173AC2: sub ecx, edi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x17173AC4: sub eax, ecx */
    _flag_k = FK_CMP;
    ebx = ecx; /* 0x17173AC6: mov ebx, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x17173AC8: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x17173AC8: shr ecx, 2 */
    edi = eax; /* 0x17173ACB: mov edi, eax */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x17173ACD: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = ebx; /* 0x17173ACF: mov ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x17173AD1: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x17173AD4: rep movsb byte ptr es:[edi], byte ptr [esi] */
    edx = MEM32(edx); /* 0x17173AD6: mov edx, dword ptr [edx] */
    /* test edx, edx */ /* 0x17173AD8: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17173AB3; /* 0x17173ADA: jne 0x17173ab3 */
L_17173ADC:
    ebx = POP32_VAL(esp); /* 0x17173ADC: pop ebx */
L_17173ADD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17173ADD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_17173ADF:
    edi = POP32_VAL(esp); /* 0x17173ADF: pop edi */
    esi = POP32_VAL(esp); /* 0x17173AE0: pop esi */
    ebp = POP32_VAL(esp); /* 0x17173AE1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x17173AE2: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_17173AEA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17173AEAu);

L_17173AEA:
    eax = MEM32(ecx + 0x8); /* 0x17173AEA: mov eax, dword ptr [ecx + 8] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x17173AED: ret  */
    RECOMP_REGS_OUT();
}

void sub_17173AF3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17173AF3u);

L_17173AF3:
    eax = ecx; /* 0x17173AF3: mov eax, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x17173AF5: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax) = ecx; /* 0x17173AF7: mov dword ptr [eax], ecx */
    MEM32(eax + 0x4) = ecx; /* 0x17173AF9: mov dword ptr [eax + 4], ecx */
    MEM32(eax + 0x18) = ecx; /* 0x17173AFC: mov dword ptr [eax + 0x18], ecx */
    MEM32(eax + 0x1C) = 1; /* 0x17173AFF: mov dword ptr [eax + 0x1c], 1 */
    MEM32(eax + 0x2C) = ecx; /* 0x17173B06: mov dword ptr [eax + 0x2c], ecx */
    MEM32(eax + 0x30) = ecx; /* 0x17173B09: mov dword ptr [eax + 0x30], ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x17173B0C: ret  */
    RECOMP_REGS_OUT();
}

void sub_17173B12(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17173B12u);

L_17173B12:
    edi = edi; /* 0x17173B12: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17173B14: push ebp */
    ebp = esp; /* 0x17173B15: mov ebp, esp */
    /* cmp MEM32(ebp + 0x18), 0 */ /* 0x17173B17: cmp dword ptr [ebp + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x17173B1B: push ebx */
    PUSH32(esp, esi); /* 0x17173B1C: push esi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17173B71; /* 0x17173B1D: je 0x17173b71 */
L_17173B1F:
    ebx = MEM32(ebp + 0x1C); /* 0x17173B1F: mov ebx, dword ptr [ebp + 0x1c] */
    /* test ebx, ebx */ /* 0x17173B22: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17173B71; /* 0x17173B24: je 0x17173b71 */
L_17173B26:
    eax = MEM32(ebp + 0xC); /* 0x17173B26: mov eax, dword ptr [ebp + 0xc] */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x17173B29: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = MEM32(ebp + 0x8); /* 0x17173B2C: mov esi, dword ptr [ebp + 8] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_17173B49; /* 0x17173B2F: jne 0x17173b49 */
L_17173B31:
    /* test esi, esi */ /* 0x17173B31: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17173B47; /* 0x17173B33: je 0x17173b47 */
L_17173B35:
    eax = esi; /* 0x17173B35: mov eax, esi */
    PUSH32(esp, edi); /* 0x17173B37: push edi */
    edi = eax + 0x1; /* 0x17173B38: lea edi, [eax + 1] */
L_17173B3B:
    SET_LO8(edx, MEM8(eax)); /* 0x17173B3B: mov dl, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17173B3D: inc eax */
    _flag_k = FK_INC;
    /* test LO8(edx), LO8(edx) */ /* 0x17173B3E: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17173B3B; /* 0x17173B40: jne 0x17173b3b */
L_17173B42:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x17173B42: sub eax, edi */
    _flag_k = FK_CMP;
    edi = POP32_VAL(esp); /* 0x17173B44: pop edi */
    goto L_17173B49; /* 0x17173B45: jmp 0x17173b49 */
L_17173B47:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17173B47: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_17173B49:
    /* test esi, esi */ /* 0x17173B49: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17173B51; /* 0x17173B4B: jne 0x17173b51 */
L_17173B4D:
    /* test eax, eax */ /* 0x17173B4D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17173B71; /* 0x17173B4F: jne 0x17173b71 */
L_17173B51:
    MEM32(ecx) = esi; /* 0x17173B51: mov dword ptr [ecx], esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x17173B53: add esi, eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x10); /* 0x17173B55: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ecx + 0x18) = eax; /* 0x17173B58: mov dword ptr [ecx + 0x18], eax */
    eax = MEM32(ebp + 0x14); /* 0x17173B5B: mov eax, dword ptr [ebp + 0x14] */
    MEM32(ecx + 0x1C) = eax; /* 0x17173B5E: mov dword ptr [ecx + 0x1c], eax */
    eax = MEM32(ebp + 0x18); /* 0x17173B61: mov eax, dword ptr [ebp + 0x18] */
    MEM32(ecx + 0x2C) = eax; /* 0x17173B64: mov dword ptr [ecx + 0x2c], eax */
    MEM32(ecx + 0x4) = esi; /* 0x17173B67: mov dword ptr [ecx + 4], esi */
    MEM32(ecx + 0x30) = ebx; /* 0x17173B6A: mov dword ptr [ecx + 0x30], ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17173B6D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_17173B76; /* 0x17173B6F: jmp 0x17173b76 */
L_17173B71:
    eax = 0x80004005u; /* 0x17173B71: mov eax, 0x80004005 */
L_17173B76:
    esi = POP32_VAL(esp); /* 0x17173B76: pop esi */
    ebx = POP32_VAL(esp); /* 0x17173B77: pop ebx */
    ebp = POP32_VAL(esp); /* 0x17173B78: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x17173B79: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_17173B81(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17173B81u);

L_17173B81:
    edi = edi; /* 0x17173B81: mov edi, edi */
    PUSH32(esp, ebx); /* 0x17173B83: push ebx */
    PUSH32(esp, esi); /* 0x17173B84: push esi */
    esi = MEM32(ecx + 0x4); /* 0x17173B85: mov esi, dword ptr [ecx + 4] */
    /* cmp MEM32(ecx), esi */ /* 0x17173B88: cmp dword ptr [ecx], esi */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_17173BD2; /* 0x17173B8A: jae 0x17173bd2 */
L_17173B8C:
    eax = MEM32(ecx); /* 0x17173B8C: mov eax, dword ptr [ecx] */
    SET_LO8(ebx, MEM8(eax)); /* 0x17173B8E: mov bl, byte ptr [eax] */
    /* cmp LO8(ebx), 0xAu */ /* 0x17173B90: cmp bl, 0xa */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0xAu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17173BD7; /* 0x17173B93: je 0x17173bd7 */
L_17173B95:
    /* cmp LO8(ebx), 0x5Cu */ /* 0x17173B95: cmp bl, 0x5c */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x5Cu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17173BCA; /* 0x17173B98: jne 0x17173bca */
L_17173B9A:
    edx = eax + 0x1; /* 0x17173B9A: lea edx, [eax + 1] */
    /* cmp edx, esi */ /* 0x17173B9D: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_17173BAB; /* 0x17173B9F: jae 0x17173bab */
L_17173BA1:
    /* cmp MEM8(edx), 0xAu */ /* 0x17173BA1: cmp byte ptr [edx], 0xa */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(0xAu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17173BAB; /* 0x17173BA4: jne 0x17173bab */
L_17173BA6:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x17173BA6: add eax, 2 */
    _flag_k = FK_ADD;
    goto L_17173BC5; /* 0x17173BA9: jmp 0x17173bc5 */
L_17173BAB:
    /* cmp LO8(ebx), 0x5Cu */ /* 0x17173BAB: cmp bl, 0x5c */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x5Cu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17173BCA; /* 0x17173BAE: jne 0x17173bca */
L_17173BB0:
    edx = eax + 0x2; /* 0x17173BB0: lea edx, [eax + 2] */
    /* cmp edx, esi */ /* 0x17173BB3: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_17173BCA; /* 0x17173BB5: jae 0x17173bca */
L_17173BB7:
    /* cmp MEM8(eax + 0x1), 0xDu */ /* 0x17173BB7: cmp byte ptr [eax + 1], 0xd */
    _flag_a = (uint32_t)(MEM8(eax + 0x1)) << 24; _flag_b = (uint32_t)(0xDu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17173BCA; /* 0x17173BBB: jne 0x17173bca */
L_17173BBD:
    /* cmp MEM8(edx), 0xAu */ /* 0x17173BBD: cmp byte ptr [edx], 0xa */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(0xAu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17173BCA; /* 0x17173BC0: jne 0x17173bca */
L_17173BC2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 3; /* 0x17173BC2: add eax, 3 */
    _flag_k = FK_ADD;
L_17173BC5:
    _flag_a = (uint32_t)(MEM32(ecx + 0x1C)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x1C) = MEM32(ecx + 0x1C) + 1; /* 0x17173BC5: inc dword ptr [ecx + 0x1c] */
    _flag_k = FK_INC;
    goto L_17173BCB; /* 0x17173BC8: jmp 0x17173bcb */
L_17173BCA:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17173BCA: inc eax */
    _flag_k = FK_INC;
L_17173BCB:
    MEM32(ecx) = eax; /* 0x17173BCB: mov dword ptr [ecx], eax */
    /* cmp eax, MEM32(ecx + 0x4) */ /* 0x17173BCD: cmp eax, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17173B8C; /* 0x17173BD0: jb 0x17173b8c */
L_17173BD2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17173BD2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_17173BD4:
    esi = POP32_VAL(esp); /* 0x17173BD4: pop esi */
    ebx = POP32_VAL(esp); /* 0x17173BD5: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x17173BD6: ret  */
L_17173BD7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17173BD7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17173BD9: inc eax */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_17173BD4; /* 0x17173BDA: jmp 0x17173bd4 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_17173BE1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17173BE1u);

L_17173BE1:
    edi = edi; /* 0x17173BE1: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17173BE3: push ebp */
    ebp = esp; /* 0x17173BE4: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x17173BE6: push ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x17173BE7: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x17173BEB: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x17173BEC: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x17173BEF: push esi */
    PUSH32(esp, edi); /* 0x17173BF0: push edi */
    edi = ecx; /* 0x17173BF1: mov edi, ecx */
    /* cmp ebx, MEM32(edi + 0x4) */ /* 0x17173BF3: cmp ebx, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(edi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_17173C06; /* 0x17173BF6: jae 0x17173c06 */
L_17173BF8:
    eax = (int32_t)(int8_t)MEM8(ebx); /* 0x17173BF8: movsx eax, byte ptr [ebx] */
    PUSH32(esp, eax); /* 0x17173BFB: push eax */
    RECOMP_CALL(sub_1721B2E4); /* 0x17173BFC: call 0x1721b2e4 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17173C01: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x17173C03: pop ecx */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17173C40; /* 0x17173C04: jne 0x17173c40 */
L_17173C06:
    eax = ebx + 0x1; /* 0x17173C06: lea eax, [ebx + 1] */
    /* cmp eax, MEM32(edi + 0x4) */ /* 0x17173C09: cmp eax, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_17173D60; /* 0x17173C0C: jae 0x17173d60 */
L_17173C12:
    /* cmp MEM8(ebx), 0x2Eu */ /* 0x17173C12: cmp byte ptr [ebx], 0x2e */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(0x2Eu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17173D60; /* 0x17173C15: jne 0x17173d60 */
L_17173C1B:
    eax = (int32_t)(int8_t)MEM8(eax); /* 0x17173C1B: movsx eax, byte ptr [eax] */
    PUSH32(esp, eax); /* 0x17173C1E: push eax */
    RECOMP_CALL(sub_1721B2E4); /* 0x17173C1F: call 0x1721b2e4 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17173C24: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x17173C26: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17173D60; /* 0x17173C27: je 0x17173d60 */
L_17173C2D:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 2; /* 0x17173C2D: add ebx, 2 */
    _flag_k = FK_ADD;
    goto L_17173C85; /* 0x17173C30: jmp 0x17173c85 */
L_17173C32:
    eax = (int32_t)(int8_t)MEM8(ebx); /* 0x17173C32: movsx eax, byte ptr [ebx] */
    PUSH32(esp, eax); /* 0x17173C35: push eax */
    RECOMP_CALL(sub_1721B2E4); /* 0x17173C36: call 0x1721b2e4 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17173C3B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x17173C3D: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17173C46; /* 0x17173C3E: je 0x17173c46 */
L_17173C40:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x17173C40: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, MEM32(edi + 0x4) */ /* 0x17173C41: cmp ebx, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(edi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17173C32; /* 0x17173C44: jb 0x17173c32 */
L_17173C46:
    eax = MEM32(edi + 0x4); /* 0x17173C46: mov eax, dword ptr [edi + 4] */
    /* cmp ebx, eax */ /* 0x17173C49: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_17173C6D; /* 0x17173C4B: jae 0x17173c6d */
L_17173C4D:
    /* cmp MEM8(ebx), 0x2Eu */ /* 0x17173C4D: cmp byte ptr [ebx], 0x2e */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(0x2Eu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17173C6D; /* 0x17173C50: jne 0x17173c6d */
L_17173C52:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x17173C52: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, eax */ /* 0x17173C53: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_17173C8A; /* 0x17173C55: jae 0x17173c8a */
L_17173C57:
    eax = (int32_t)(int8_t)MEM8(ebx); /* 0x17173C57: movsx eax, byte ptr [ebx] */
    PUSH32(esp, eax); /* 0x17173C5A: push eax */
    RECOMP_CALL(sub_1721B2E4); /* 0x17173C5B: call 0x1721b2e4 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17173C60: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x17173C62: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17173C8A; /* 0x17173C63: je 0x17173c8a */
L_17173C65:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x17173C65: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, MEM32(edi + 0x4) */ /* 0x17173C66: cmp ebx, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(edi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17173C57; /* 0x17173C69: jb 0x17173c57 */
L_17173C6B:
    goto L_17173C8A; /* 0x17173C6B: jmp 0x17173c8a */
L_17173C6D:
    MEM32(ebp + (-0x4)) = 1; /* 0x17173C6D: mov dword ptr [ebp - 4], 1 */
    goto L_17173C8A; /* 0x17173C74: jmp 0x17173c8a */
L_17173C76:
    eax = (int32_t)(int8_t)MEM8(ebx); /* 0x17173C76: movsx eax, byte ptr [ebx] */
    PUSH32(esp, eax); /* 0x17173C79: push eax */
    RECOMP_CALL(sub_1721B2E4); /* 0x17173C7A: call 0x1721b2e4 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17173C7F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x17173C81: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17173C8A; /* 0x17173C82: je 0x17173c8a */
L_17173C84:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x17173C84: inc ebx */
    _flag_k = FK_INC;
L_17173C85:
    /* cmp ebx, MEM32(edi + 0x4) */ /* 0x17173C85: cmp ebx, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(edi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17173C76; /* 0x17173C88: jb 0x17173c76 */
L_17173C8A:
    esi = ebx + 0x1; /* 0x17173C8A: lea esi, [ebx + 1] */
    /* cmp esi, MEM32(edi + 0x4) */ /* 0x17173C8D: cmp esi, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_17173CC9; /* 0x17173C90: jae 0x17173cc9 */
L_17173C92:
    eax = (int32_t)(int8_t)MEM8(ebx); /* 0x17173C92: movsx eax, byte ptr [ebx] */
    PUSH32(esp, eax); /* 0x17173C95: push eax */
    RECOMP_CALL(sub_1721B338); /* 0x17173C96: call 0x1721b338 */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0x65u */ /* 0x17173C9B: cmp eax, 0x65 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x65u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x17173C9E: pop ecx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_17173CC9; /* 0x17173C9F: jne 0x17173cc9 */
L_17173CA1:
    eax = (int32_t)(int8_t)MEM8(esi); /* 0x17173CA1: movsx eax, byte ptr [esi] */
    PUSH32(esp, eax); /* 0x17173CA4: push eax */
    RECOMP_CALL(sub_1721B2E4); /* 0x17173CA5: call 0x1721b2e4 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17173CAA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x17173CAC: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17173CC9; /* 0x17173CAD: je 0x17173cc9 */
L_17173CAF:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x17173CAF: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x17173CB0: inc ebx */
    _flag_k = FK_INC;
    goto L_17173CC2; /* 0x17173CB1: jmp 0x17173cc2 */
L_17173CB3:
    eax = (int32_t)(int8_t)MEM8(ebx); /* 0x17173CB3: movsx eax, byte ptr [ebx] */
    PUSH32(esp, eax); /* 0x17173CB6: push eax */
    RECOMP_CALL(sub_1721B2E4); /* 0x17173CB7: call 0x1721b2e4 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17173CBC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x17173CBE: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17173D15; /* 0x17173CBF: je 0x17173d15 */
L_17173CC1:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x17173CC1: inc ebx */
    _flag_k = FK_INC;
L_17173CC2:
    /* cmp ebx, MEM32(edi + 0x4) */ /* 0x17173CC2: cmp ebx, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(edi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17173CB3; /* 0x17173CC5: jb 0x17173cb3 */
L_17173CC7:
    goto L_17173D15; /* 0x17173CC7: jmp 0x17173d15 */
L_17173CC9:
    eax = ebx + 0x2; /* 0x17173CC9: lea eax, [ebx + 2] */
    /* cmp eax, MEM32(edi + 0x4) */ /* 0x17173CCC: cmp eax, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_17173D0F; /* 0x17173CCF: jae 0x17173d0f */
L_17173CD1:
    eax = (int32_t)(int8_t)MEM8(ebx); /* 0x17173CD1: movsx eax, byte ptr [ebx] */
    PUSH32(esp, eax); /* 0x17173CD4: push eax */
    RECOMP_CALL(sub_1721B338); /* 0x17173CD5: call 0x1721b338 */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0x65u */ /* 0x17173CDA: cmp eax, 0x65 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x65u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x17173CDD: pop ecx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_17173D0F; /* 0x17173CDE: jne 0x17173d0f */
L_17173CE0:
    /* cmp MEM8(esi), 0x2Du */ /* 0x17173CE0: cmp byte ptr [esi], 0x2d */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0x2Du) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17173D0F; /* 0x17173CE3: jne 0x17173d0f */
L_17173CE5:
    eax = (int32_t)(int8_t)MEM8(ebx + 0x2); /* 0x17173CE5: movsx eax, byte ptr [ebx + 2] */
    PUSH32(esp, eax); /* 0x17173CE9: push eax */
    RECOMP_CALL(sub_1721B2E4); /* 0x17173CEA: call 0x1721b2e4 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17173CEF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x17173CF1: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17173D0F; /* 0x17173CF2: je 0x17173d0f */
L_17173CF4:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 3; /* 0x17173CF4: add ebx, 3 */
    _flag_k = FK_ADD;
    goto L_17173D08; /* 0x17173CF7: jmp 0x17173d08 */
L_17173CF9:
    eax = (int32_t)(int8_t)MEM8(ebx); /* 0x17173CF9: movsx eax, byte ptr [ebx] */
    PUSH32(esp, eax); /* 0x17173CFC: push eax */
    RECOMP_CALL(sub_1721B2E4); /* 0x17173CFD: call 0x1721b2e4 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17173D02: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x17173D04: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17173D15; /* 0x17173D05: je 0x17173d15 */
L_17173D07:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x17173D07: inc ebx */
    _flag_k = FK_INC;
L_17173D08:
    /* cmp ebx, MEM32(edi + 0x4) */ /* 0x17173D08: cmp ebx, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(edi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17173CF9; /* 0x17173D0B: jb 0x17173cf9 */
L_17173D0D:
    goto L_17173D15; /* 0x17173D0D: jmp 0x17173d15 */
L_17173D0F:
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x17173D0F: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17173D60; /* 0x17173D13: jne 0x17173d60 */
L_17173D15:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x17173D15: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17173D59; /* 0x17173D19: je 0x17173d59 */
L_17173D1B:
    esi = MEM32(ebp + 0x8); /* 0x17173D1B: mov esi, dword ptr [ebp + 8] */
    edi = ebx; /* 0x17173D1E: mov edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - esi; /* 0x17173D20: sub edi, esi */
    _flag_k = FK_CMP;
    eax = edi + 0x1; /* 0x17173D22: lea eax, [edi + 1] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 3; /* 0x17173D25: add eax, 3 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFCu);
    eax = eax & 0xFFFFFFFCu; /* 0x17173D28: and eax, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = edi; /* 0x17173D2B: mov dword ptr [ebp - 4], edi */
    RECOMP_CALL(sub_1721B1B0); /* 0x17173D2E: call 0x1721b1b0 */
    RECOMP_FLAGS_IN();
    ecx = edi; /* 0x17173D33: mov ecx, edi */
    edx = ecx; /* 0x17173D35: mov edx, ecx */
    eax = esp; /* 0x17173D37: mov eax, esp */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x17173D39: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x17173D39: shr ecx, 2 */
    edi = eax; /* 0x17173D3C: mov edi, eax */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x17173D3E: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = edx; /* 0x17173D40: mov ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x17173D42: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x17173D45: rep movsb byte ptr es:[edi], byte ptr [esi] */
    ecx = edx; /* 0x17173D47: mov ecx, edx */
    PUSH32(esp, eax); /* 0x17173D49: push eax */
    MEM8(eax + ecx) = (uint8_t)(0); /* 0x17173D4A: mov byte ptr [eax + ecx], 0 */
    RECOMP_CALL(sub_1721B3FE); /* 0x17173D4E: call 0x1721b3fe */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0xC); /* 0x17173D53: mov eax, dword ptr [ebp + 0xc] */
    ecx = POP32_VAL(esp); /* 0x17173D56: pop ecx */
    { double _v = fp_pop(); *(double*)ADDR(eax) = _v; } /* 0x17173D57: fstp qword ptr [eax] */
L_17173D59:
    eax = ebx; /* 0x17173D59: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + 0x8); /* 0x17173D5B: sub eax, dword ptr [ebp + 8] */
    _flag_k = FK_CMP;
    goto L_17173D62; /* 0x17173D5E: jmp 0x17173d62 */
L_17173D60:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17173D60: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_17173D62:
    esp = ebp + (-0x10); /* 0x17173D62: lea esp, [ebp - 0x10] */
    edi = POP32_VAL(esp); /* 0x17173D65: pop edi */
    esi = POP32_VAL(esp); /* 0x17173D66: pop esi */
    ebx = POP32_VAL(esp); /* 0x17173D67: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17173D68: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x17173D69: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_17173D71(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17173D71u);

L_17173D71:
    edi = edi; /* 0x17173D71: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17173D73: push ebp */
    ebp = esp; /* 0x17173D74: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x17173D76: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x17173D77: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x17173D7A: push esi */
    esi = ecx; /* 0x17173D7B: mov esi, ecx */
    /* cmp ebx, MEM32(esi + 0x4) */ /* 0x17173D7D: cmp ebx, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(esi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x17173D80: push edi */
    if (CMP_AE(_flag_a, _flag_b)) goto L_17173DEC; /* 0x17173D81: jae 0x17173dec */
L_17173D83:
    eax = (int32_t)(int8_t)MEM8(ebx); /* 0x17173D83: movsx eax, byte ptr [ebx] */
    PUSH32(esp, eax); /* 0x17173D86: push eax */
    RECOMP_CALL(sub_1721B350); /* 0x17173D87: call 0x1721b350 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17173D8C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x17173D8E: pop ecx */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17173D96; /* 0x17173D8F: jne 0x17173d96 */
L_17173D91:
    /* cmp MEM8(ebx), 0x5Fu */ /* 0x17173D91: cmp byte ptr [ebx], 0x5f */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(0x5Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17173DEC; /* 0x17173D94: jne 0x17173dec */
L_17173D96:
    edi = ebx + 0x1; /* 0x17173D96: lea edi, [ebx + 1] */
    goto L_17173DAF; /* 0x17173D99: jmp 0x17173daf */
L_17173D9B:
    eax = (int32_t)(int8_t)MEM8(edi); /* 0x17173D9B: movsx eax, byte ptr [edi] */
    PUSH32(esp, eax); /* 0x17173D9E: push eax */
    RECOMP_CALL(sub_1721B35C); /* 0x17173D9F: call 0x1721b35c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17173DA4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x17173DA6: pop ecx */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17173DAE; /* 0x17173DA7: jne 0x17173dae */
L_17173DA9:
    /* cmp MEM8(edi), 0x5Fu */ /* 0x17173DA9: cmp byte ptr [edi], 0x5f */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(0x5Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17173DB4; /* 0x17173DAC: jne 0x17173db4 */
L_17173DAE:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x17173DAE: inc edi */
    _flag_k = FK_INC;
L_17173DAF:
    /* cmp edi, MEM32(esi + 0x4) */ /* 0x17173DAF: cmp edi, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17173D9B; /* 0x17173DB2: jb 0x17173d9b */
L_17173DB4:
    ecx = MEM32(esi + 0x2C); /* 0x17173DB4: mov ecx, dword ptr [esi + 0x2c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ebx; /* 0x17173DB7: sub edi, ebx */
    _flag_k = FK_CMP;
    ebx = edi; /* 0x17173DB9: mov ebx, edi */
    PUSH32(esp, 1); /* 0x17173DBB: push 1 */
    eax = ebx + 0x1; /* 0x17173DBD: lea eax, [ebx + 1] */
    PUSH32(esp, eax); /* 0x17173DC0: push eax */
    RECOMP_CALL(sub_1721BE6F); /* 0x17173DC1: call 0x1721be6f */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17173DC6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17173DEC; /* 0x17173DC8: je 0x17173dec */
L_17173DCA:
    esi = MEM32(ebp + 0x8); /* 0x17173DCA: mov esi, dword ptr [ebp + 8] */
    ecx = ebx; /* 0x17173DCD: mov ecx, ebx */
    edx = ecx; /* 0x17173DCF: mov edx, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x17173DD1: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x17173DD1: shr ecx, 2 */
    edi = eax; /* 0x17173DD4: mov edi, eax */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x17173DD6: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = edx; /* 0x17173DD8: mov ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x17173DDA: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x17173DDD: rep movsb byte ptr es:[edi], byte ptr [esi] */
    ecx = MEM32(ebp + 0xC); /* 0x17173DDF: mov ecx, dword ptr [ebp + 0xc] */
    MEM8(eax + ebx) = (uint8_t)(0); /* 0x17173DE2: mov byte ptr [eax + ebx], 0 */
    MEM32(ecx) = eax; /* 0x17173DE6: mov dword ptr [ecx], eax */
    eax = ebx; /* 0x17173DE8: mov eax, ebx */
    goto L_17173DEE; /* 0x17173DEA: jmp 0x17173dee */
L_17173DEC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17173DEC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_17173DEE:
    edi = POP32_VAL(esp); /* 0x17173DEE: pop edi */
    esi = POP32_VAL(esp); /* 0x17173DEF: pop esi */
    ebx = POP32_VAL(esp); /* 0x17173DF0: pop ebx */
    ebp = POP32_VAL(esp); /* 0x17173DF1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x17173DF2: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_17173DFA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17173DFAu);

L_17173DFA:
    edi = edi; /* 0x17173DFA: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17173DFC: push ebp */
    ebp = esp; /* 0x17173DFD: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x17173DFF: push ecx */
    eax = MEM32(ebp + 0xC); /* 0x17173E00: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x17173E03: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x17173E06: push ebx */
    PUSH32(esp, esi); /* 0x17173E07: push esi */
    esi = MEM32(ebp + 0x8); /* 0x17173E08: mov esi, dword ptr [ebp + 8] */
    SET_LO8(edx, MEM8(esi)); /* 0x17173E0B: mov dl, byte ptr [esi] */
    MEM8(eax) = (uint8_t)(LO8(edx)); /* 0x17173E0D: mov byte ptr [eax], dl */
    MEM32(ebp + (-0x4)) = ecx; /* 0x17173E0F: mov dword ptr [ebp - 4], ecx */
    ecx = MEM32(ecx + 0x4); /* 0x17173E12: mov ecx, dword ptr [ecx + 4] */
    edx = esi + 0x1; /* 0x17173E15: lea edx, [esi + 1] */
    /* cmp edx, ecx */ /* 0x17173E18: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x17173E1A: push edi */
    MEM32(ebp + 0xC) = ecx; /* 0x17173E1B: mov dword ptr [ebp + 0xc], ecx */
    if (CMP_AE(_flag_a, _flag_b)) goto L_17173ED3; /* 0x17173E1E: jae 0x17173ed3 */
L_17173E24:
    SET_LO8(ebx, MEM8(esi)); /* 0x17173E24: mov bl, byte ptr [esi] */
    /* cmp LO8(ebx), 0x23u */ /* 0x17173E26: cmp bl, 0x23 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x23u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17173E3E; /* 0x17173E29: jne 0x17173e3e */
L_17173E2B:
    SET_LO8(ecx, MEM8(edx)); /* 0x17173E2B: mov cl, byte ptr [edx] */
    /* cmp LO8(ecx), LO8(ebx) */ /* 0x17173E2D: cmp cl, bl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17173E36; /* 0x17173E2F: je 0x17173e36 */
L_17173E31:
    /* cmp LO8(ecx), 0x40u */ /* 0x17173E31: cmp cl, 0x40 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17173E3E; /* 0x17173E34: jne 0x17173e3e */
L_17173E36:
    MEM8(eax + 0x1) = (uint8_t)(LO8(ecx)); /* 0x17173E36: mov byte ptr [eax + 1], cl */
    goto L_17173F03; /* 0x17173E39: jmp 0x17173f03 */
L_17173E3E:
    SET_LO8(edx, MEM8(edx)); /* 0x17173E3E: mov dl, byte ptr [edx] */
    /* cmp LO8(ebx), LO8(edx) */ /* 0x17173E40: cmp bl, dl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17173EA6; /* 0x17173E42: jne 0x17173ea6 */
L_17173E44:
    edi = (int32_t)(int8_t)LO8(ebx); /* 0x17173E44: movsx edi, bl */
    /* cmp edi, 0x3Au */ /* 0x17173E47: cmp edi, 0x3a */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x3Au);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_17173E76; /* 0x17173E4A: jg 0x17173e76 */
L_17173E4C:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17173E86; /* 0x17173E4C: je 0x17173e86 */
L_17173E4E:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x26u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 0x26u; /* 0x17173E4E: sub edi, 0x26 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_17173E86; /* 0x17173E51: je 0x17173e86 */
L_17173E53:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 5; /* 0x17173E53: sub edi, 5 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_17173E86; /* 0x17173E56: je 0x17173e86 */
L_17173E58:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x17173E58: dec edi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x17173E59: dec edi */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_17173E86; /* 0x17173E5A: je 0x17173e86 */
L_17173E5C:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x17173E5C: dec edi */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_17173ED3; /* 0x17173E5D: jne 0x17173ed3 */
L_17173E5F:
    ecx = esi + 0x2; /* 0x17173E5F: lea ecx, [esi + 2] */
    /* cmp ecx, MEM32(ebp + 0xC) */ /* 0x17173E62: cmp ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_17173ED3; /* 0x17173E65: jae 0x17173ed3 */
L_17173E67:
    /* cmp MEM8(ecx), 0x2Eu */ /* 0x17173E67: cmp byte ptr [ecx], 0x2e */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0x2Eu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17173ED3; /* 0x17173E6A: jne 0x17173ed3 */
L_17173E6C:
    MEM8(eax + 0x1) = (uint8_t)(LO8(edx)); /* 0x17173E6C: mov byte ptr [eax + 1], dl */
    SET_LO8(ecx, MEM8(ecx)); /* 0x17173E6F: mov cl, byte ptr [ecx] */
    MEM8(eax + 0x2) = (uint8_t)(LO8(ecx)); /* 0x17173E71: mov byte ptr [eax + 2], cl */
    goto L_17173EA2; /* 0x17173E74: jmp 0x17173ea2 */
L_17173E76:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x3Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 0x3Cu; /* 0x17173E76: sub edi, 0x3c */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_17173E8B; /* 0x17173E79: je 0x17173e8b */
L_17173E7B:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x17173E7B: dec edi */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_17173E86; /* 0x17173E7C: je 0x17173e86 */
L_17173E7E:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x17173E7E: dec edi */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_17173E8B; /* 0x17173E7F: je 0x17173e8b */
L_17173E81:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x3Eu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 0x3Eu; /* 0x17173E81: sub edi, 0x3e */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_17173ED3; /* 0x17173E84: jne 0x17173ed3 */
L_17173E86:
    MEM8(eax + 0x1) = (uint8_t)(LO8(edx)); /* 0x17173E86: mov byte ptr [eax + 1], dl */
    goto L_17173F03; /* 0x17173E89: jmp 0x17173f03 */
L_17173E8B:
    ecx = MEM32(ebp + (-0x4)); /* 0x17173E8B: mov ecx, dword ptr [ebp - 4] */
    MEM8(eax + 0x1) = (uint8_t)(LO8(edx)); /* 0x17173E8E: mov byte ptr [eax + 1], dl */
    edx = esi + 0x2; /* 0x17173E91: lea edx, [esi + 2] */
    /* cmp edx, MEM32(ecx + 0x4) */ /* 0x17173E94: cmp edx, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ecx + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_17173F03; /* 0x17173E97: jae 0x17173f03 */
L_17173E99:
    /* cmp MEM8(edx), 0x3Du */ /* 0x17173E99: cmp byte ptr [edx], 0x3d */
    _flag_a = (uint32_t)(MEM8(edx)) << 24; _flag_b = (uint32_t)(0x3Du) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17173F03; /* 0x17173E9C: jne 0x17173f03 */
L_17173E9E:
    MEM8(eax + 0x2) = (uint8_t)(0x3Du); /* 0x17173E9E: mov byte ptr [eax + 2], 0x3d */
L_17173EA2:
    PUSH32(esp, 3); /* 0x17173EA2: push 3 */
    goto L_17173F05; /* 0x17173EA4: jmp 0x17173f05 */
L_17173EA6:
    /* cmp LO8(edx), 0x3Du */ /* 0x17173EA6: cmp dl, 0x3d */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0x3Du) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17173EF6; /* 0x17173EA9: jne 0x17173ef6 */
L_17173EAB:
    ecx = (int32_t)(int8_t)LO8(ebx); /* 0x17173EAB: movsx ecx, bl */
    /* cmp ecx, 0x2Fu */ /* 0x17173EAE: cmp ecx, 0x2f */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x2Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_17173EDD; /* 0x17173EB1: jg 0x17173edd */
L_17173EB3:
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17173EF0; /* 0x17173EB3: je 0x17173ef0 */
L_17173EB5:
    /* cmp ecx, 0x21u */ /* 0x17173EB5: cmp ecx, 0x21 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x21u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17173EF0; /* 0x17173EB8: je 0x17173ef0 */
L_17173EBA:
    /* cmp ecx, 0x24u */ /* 0x17173EBA: cmp ecx, 0x24 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_17173ED3; /* 0x17173EBD: jle 0x17173ed3 */
L_17173EBF:
    /* cmp ecx, 0x26u */ /* 0x17173EBF: cmp ecx, 0x26 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x26u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_17173EF0; /* 0x17173EC2: jle 0x17173ef0 */
L_17173EC4:
    /* cmp ecx, 0x29u */ /* 0x17173EC4: cmp ecx, 0x29 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x29u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_17173ED3; /* 0x17173EC7: jle 0x17173ed3 */
L_17173EC9:
    /* cmp ecx, 0x2Bu */ /* 0x17173EC9: cmp ecx, 0x2b */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x2Bu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_17173EF0; /* 0x17173ECC: jle 0x17173ef0 */
L_17173ECE:
    /* cmp ecx, 0x2Du */ /* 0x17173ECE: cmp ecx, 0x2d */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x2Du);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17173EF0; /* 0x17173ED1: je 0x17173ef0 */
L_17173ED3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17173ED3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17173ED5: inc eax */
    _flag_k = FK_INC;
L_17173ED6:
    edi = POP32_VAL(esp); /* 0x17173ED6: pop edi */
    esi = POP32_VAL(esp); /* 0x17173ED7: pop esi */
    ebx = POP32_VAL(esp); /* 0x17173ED8: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17173ED9: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x17173EDA: ret 8 */
L_17173EDD:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x3Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 0x3Cu; /* 0x17173EDD: sub ecx, 0x3c */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_17173EF0; /* 0x17173EE0: je 0x17173ef0 */
L_17173EE2:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x17173EE2: dec ecx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x17173EE3: dec ecx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_17173EF0; /* 0x17173EE4: je 0x17173ef0 */
L_17173EE6:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 0x20u; /* 0x17173EE6: sub ecx, 0x20 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_17173EF0; /* 0x17173EE9: je 0x17173ef0 */
L_17173EEB:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Eu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 0x1Eu; /* 0x17173EEB: sub ecx, 0x1e */
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (/* sub result */ CMP_NE(_flag_a, _flag_b)) goto L_17173ED3; /* 0x17173EEE: jne 0x17173ed3 */
L_17173EF0:
    MEM8(eax + 0x1) = (uint8_t)(0x3Du); /* 0x17173EF0: mov byte ptr [eax + 1], 0x3d */
    goto L_17173F03; /* 0x17173EF4: jmp 0x17173f03 */
L_17173EF6:
    /* cmp LO8(ebx), 0x2Du */ /* 0x17173EF6: cmp bl, 0x2d */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x2Du) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_17173ED3; /* 0x17173EF9: jne 0x17173ed3 */
L_17173EFB:
    /* cmp LO8(edx), 0x3Eu */ /* 0x17173EFB: cmp dl, 0x3e */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0x3Eu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_17173ED3; /* 0x17173EFE: jne 0x17173ed3 */
L_17173F00:
    MEM8(eax + 0x1) = (uint8_t)(LO8(edx)); /* 0x17173F00: mov byte ptr [eax + 1], dl */
L_17173F03:
    PUSH32(esp, 2); /* 0x17173F03: push 2 */
L_17173F05:
    eax = POP32_VAL(esp); /* 0x17173F05: pop eax */
    RECOMP_BACKEDGE();
    goto L_17173ED6; /* 0x17173F06: jmp 0x17173ed6 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_17173F0D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17173F0Du);

L_17173F0D:
    edi = edi; /* 0x17173F0D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17173F0F: push ebp */
    ebp = esp; /* 0x17173F10: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x17173F12: push ebx */
    PUSH32(esp, esi); /* 0x17173F13: push esi */
    esi = MEM32(ebp + 0x8); /* 0x17173F14: mov esi, dword ptr [ebp + 8] */
    /* cmp esi, MEM32(ecx + 0x4) */ /* 0x17173F17: cmp esi, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ecx + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x17173F1A: push edi */
    PUSH32(esp, 5); /* 0x17173F1B: push 5 */
    edi = esi; /* 0x17173F1D: mov edi, esi */
    ebx = POP32_VAL(esp); /* 0x17173F1F: pop ebx */
    if (CMP_B(_flag_a, _flag_b)) goto L_17173F26; /* 0x17173F20: jb 0x17173f26 */
L_17173F22:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17173F22: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_17173F50; /* 0x17173F24: jmp 0x17173f50 */
L_17173F26:
    eax = (int32_t)(int8_t)MEM8(esi); /* 0x17173F26: movsx eax, byte ptr [esi] */
    PUSH32(esp, eax); /* 0x17173F29: push eax */
    RECOMP_CALL(sub_1721B338); /* 0x17173F2A: call 0x1721b338 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x66u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x66u; /* 0x17173F2F: sub eax, 0x66 */
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x17173F32: pop ecx */
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_17173F3D; /* 0x17173F33: je 0x17173f3d */
L_17173F35:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x17173F35: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x17173F36: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_17173F43; /* 0x17173F37: jne 0x17173f43 */
L_17173F39:
    PUSH32(esp, 6); /* 0x17173F39: push 6 */
    goto L_17173F3F; /* 0x17173F3B: jmp 0x17173f3f */
L_17173F3D:
    PUSH32(esp, 7); /* 0x17173F3D: push 7 */
L_17173F3F:
    ebx = POP32_VAL(esp); /* 0x17173F3F: pop ebx */
    edi = esi + 0x1; /* 0x17173F40: lea edi, [esi + 1] */
L_17173F43:
    eax = MEM32(ebp + 0xC); /* 0x17173F43: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x17173F46: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17173F4C; /* 0x17173F48: je 0x17173f4c */
L_17173F4A:
    MEM32(eax) = ebx; /* 0x17173F4A: mov dword ptr [eax], ebx */
L_17173F4C:
    eax = edi; /* 0x17173F4C: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x17173F4E: sub eax, esi */
    _flag_k = FK_CMP;
L_17173F50:
    edi = POP32_VAL(esp); /* 0x17173F50: pop edi */
    esi = POP32_VAL(esp); /* 0x17173F51: pop esi */
    ebx = POP32_VAL(esp); /* 0x17173F52: pop ebx */
    ebp = POP32_VAL(esp); /* 0x17173F53: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x17173F54: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_17173F5C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17173F5Cu);

L_17173F5C:
    edi = edi; /* 0x17173F5C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17173F5E: push ebp */
    ebp = esp; /* 0x17173F5F: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x17173F61: push ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x17173F62: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x17173F66: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x17173F67: mov ebx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) & 0; /* 0x17173F6A: and dword ptr [ebp + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x17173F6E: push esi */
    esi = ecx; /* 0x17173F6F: mov esi, ecx */
    /* cmp ebx, MEM32(esi + 0x4) */ /* 0x17173F71: cmp ebx, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(esi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x17173F74: push edi */
    edi = ebx; /* 0x17173F75: mov edi, ebx */
    if (CMP_AE(_flag_a, _flag_b)) goto L_17173FB9; /* 0x17173F77: jae 0x17173fb9 */
L_17173F79:
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x17173F79: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17173F97; /* 0x17173F7D: jne 0x17173f97 */
L_17173F7F:
    eax = (int32_t)(int8_t)MEM8(edi); /* 0x17173F7F: movsx eax, byte ptr [edi] */
    PUSH32(esp, eax); /* 0x17173F82: push eax */
    RECOMP_CALL(sub_1721B338); /* 0x17173F83: call 0x1721b338 */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0x75u */ /* 0x17173F88: cmp eax, 0x75 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x75u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x17173F8B: pop ecx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_17173F97; /* 0x17173F8C: jne 0x17173f97 */
L_17173F8E:
    MEM32(ebp + 0x8) = 1; /* 0x17173F8E: mov dword ptr [ebp + 8], 1 */
    goto L_17173FB3; /* 0x17173F95: jmp 0x17173fb3 */
L_17173F97:
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x17173F97: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17173FB9; /* 0x17173F9B: jne 0x17173fb9 */
L_17173F9D:
    eax = (int32_t)(int8_t)MEM8(edi); /* 0x17173F9D: movsx eax, byte ptr [edi] */
    PUSH32(esp, eax); /* 0x17173FA0: push eax */
    RECOMP_CALL(sub_1721B338); /* 0x17173FA1: call 0x1721b338 */
    RECOMP_FLAGS_IN();
    /* cmp eax, 0x6Cu */ /* 0x17173FA6: cmp eax, 0x6c */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x6Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x17173FA9: pop ecx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_17173FB9; /* 0x17173FAA: jne 0x17173fb9 */
L_17173FAC:
    MEM32(ebp + (-0x4)) = 1; /* 0x17173FAC: mov dword ptr [ebp - 4], 1 */
L_17173FB3:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x17173FB3: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(esi + 0x4) */ /* 0x17173FB4: cmp edi, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17173F79; /* 0x17173FB7: jb 0x17173f79 */
L_17173FB9:
    eax = MEM32(ebp + 0xC); /* 0x17173FB9: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x17173FBC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17173FDA; /* 0x17173FBE: je 0x17173fda */
L_17173FC0:
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x17173FC0: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17173FCE; /* 0x17173FC4: je 0x17173fce */
L_17173FC6:
    MEM32(eax) = 4; /* 0x17173FC6: mov dword ptr [eax], 4 */
    goto L_17173FDA; /* 0x17173FCC: jmp 0x17173fda */
L_17173FCE:
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x17173FCE: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17173FDA; /* 0x17173FD2: je 0x17173fda */
L_17173FD4:
    MEM32(eax) = 3; /* 0x17173FD4: mov dword ptr [eax], 3 */
L_17173FDA:
    eax = edi; /* 0x17173FDA: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x17173FDC: pop edi */
    esi = POP32_VAL(esp); /* 0x17173FDD: pop esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x17173FDE: sub eax, ebx */
    _flag_k = FK_CMP;
    ebx = POP32_VAL(esp); /* 0x17173FE0: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17173FE1: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x17173FE2: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_17173FEA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17173FEAu);

L_17173FEA:
    edi = edi; /* 0x17173FEA: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17173FEC: push ebp */
    ebp = esp; /* 0x17173FED: mov ebp, esp */
    PUSH32(esp, esi); /* 0x17173FEF: push esi */
    eax = ebp + 0x8; /* 0x17173FF0: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x17173FF3: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x17173FF4: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x17173FF7: mov esi, ecx */
    RECOMP_CALL(sub_17173888); /* 0x17173FF9: call 0x17173888 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17173FFE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1717404F; /* 0x17174000: jl 0x1717404f */
L_17174002:
    ecx = MEM32(ebp + 0xC); /* 0x17174002: mov ecx, dword ptr [ebp + 0xc] */
    /* cmp ecx, 0xFFu */ /* 0x17174005: cmp ecx, 0xff */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17174025; /* 0x1717400B: jne 0x17174025 */
L_1717400D:
    ecx = MEM32(ebp + 0x8); /* 0x1717400D: mov ecx, dword ptr [ebp + 8] */
    edx = MEM32(esi + 0x1C); /* 0x17174010: mov edx, dword ptr [esi + 0x1c] */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x17174013: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x17174013: shl ecx, 2 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x17174016: add edx, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(0x20u);
    MEM32(edx) = MEM32(edx) & 0x20u; /* 0x17174018: and dword ptr [edx], 0x20 */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(esi + 0x1C); /* 0x1717401B: mov edx, dword ptr [esi + 0x1c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x1717401E: add ecx, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((MEM32(ecx) | 1)); _flag_b = (uint32_t)((MEM32(ecx) | 1));
    MEM32(ecx) = MEM32(ecx) | 1; /* 0x17174020: or dword ptr [ecx], 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1717404F; /* 0x17174023: jmp 0x1717404f */
L_17174025:
    /* cmp ecx, 0x10u */ /* 0x17174025: cmp ecx, 0x10 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edx = MEM32(ebp + 0x8); /* 0x17174028: mov edx, dword ptr [ebp + 8] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_17174038; /* 0x1717402B: jne 0x17174038 */
L_1717402D:
    ecx = MEM32(esi + 0x1C); /* 0x1717402D: mov ecx, dword ptr [esi + 0x1c] */
    ecx = ecx + edx * 4; /* 0x17174030: lea ecx, [ecx + edx*4] */
    _flag_a = (uint32_t)((MEM32(ecx) | 0x10u)); _flag_b = (uint32_t)((MEM32(ecx) | 0x10u));
    MEM32(ecx) = MEM32(ecx) | 0x10u; /* 0x17174033: or dword ptr [ecx], 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1717404F; /* 0x17174036: jmp 0x1717404f */
L_17174038:
    PUSH32(esp, edi); /* 0x17174038: push edi */
    edi = MEM32(esi + 0x1C); /* 0x17174039: mov edi, dword ptr [esi + 0x1c] */
    if (2u) _cf = (((edx) >> 30) & 1u); /* 0x1717403C: shl edx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 2u; /* 0x1717403C: shl edx, 2 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + edx; /* 0x1717403F: add edi, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0xFFFFFFF0u);
    MEM32(edi) = MEM32(edi) & 0xFFFFFFF0u; /* 0x17174041: and dword ptr [edi], 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(esi + 0x1C); /* 0x17174044: mov esi, dword ptr [esi + 0x1c] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + esi; /* 0x17174047: add edx, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFu);
    ecx = ecx & 0xFu; /* 0x17174049: and ecx, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(edx) | ecx)); _flag_b = (uint32_t)((MEM32(edx) | ecx));
    MEM32(edx) = MEM32(edx) | ecx; /* 0x1717404C: or dword ptr [edx], ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x1717404E: pop edi */
L_1717404F:
    esi = POP32_VAL(esp); /* 0x1717404F: pop esi */
    ebp = POP32_VAL(esp); /* 0x17174050: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x17174051: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_17174059(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17174059u);

L_17174059:
    edi = edi; /* 0x17174059: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1717405B: push ebp */
    ebp = esp; /* 0x1717405C: mov ebp, esp */
    eax = 0x1004u; /* 0x1717405E: mov eax, 0x1004 */
    RECOMP_CALL(sub_1721B1B0); /* 0x17174063: call 0x1721b1b0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x1723C894); /* 0x17174068: mov eax, dword ptr [0x1723c894] */
    PUSH32(esp, ebx); /* 0x1717406D: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x1717406E: mov ebx, dword ptr [ebp + 0xc] */
    /* test ebx, ebx */ /* 0x17174071: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x17174073: push esi */
    PUSH32(esp, edi); /* 0x17174074: push edi */
    MEM32(ebp + (-0x4)) = eax; /* 0x17174075: mov dword ptr [ebp - 4], eax */
    esi = ebp + (-0x1004); /* 0x17174078: lea esi, [ebp - 0x1004] */
    edi = 0xFFEu; /* 0x1717407E: mov edi, 0xffe */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171740E7; /* 0x17174083: je 0x171740e7 */
L_17174085:
    eax = MEM32(ebx + 0x10); /* 0x17174085: mov eax, dword ptr [ebx + 0x10] */
    /* test eax, eax */ /* 0x17174088: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171740B9; /* 0x1717408A: je 0x171740b9 */
L_1717408C:
    PUSH32(esp, eax); /* 0x1717408C: push eax */
    PUSH32(esp, 0x17008008u); /* 0x1717408D: push 0x17008008 */
    eax = esi; /* 0x17174092: mov eax, esi */
    PUSH32(esp, edi); /* 0x17174094: push edi */
    PUSH32(esp, eax); /* 0x17174095: push eax */
    RECOMP_CALL(sub_1705338C); /* 0x17174096: call 0x1705338c */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1717409B: mov eax, esi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1717409D: add esp, 0x10 */
    _flag_k = FK_ADD;
    edx = eax + 0x1; /* 0x171740A0: lea edx, [eax + 1] */
L_171740A3:
    SET_LO8(ecx, MEM8(eax)); /* 0x171740A3: mov cl, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171740A5: inc eax */
    _flag_k = FK_INC;
    /* test LO8(ecx), LO8(ecx) */ /* 0x171740A6: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171740A3; /* 0x171740A8: jne 0x171740a3 */
L_171740AA:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x171740AA: sub eax, edx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NS(_flag_a, _flag_b)) goto L_171740B0; /* 0x171740AC: jns 0x171740b0 */
L_171740AE:
    eax = edi; /* 0x171740AE: mov eax, edi */
L_171740B0:
    esi = ebp + eax + (-0x1004); /* 0x171740B0: lea esi, [ebp + eax - 0x1004] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - eax; /* 0x171740B7: sub edi, eax */
    _flag_k = FK_CMP;
L_171740B9:
    eax = MEM32(ebx + 0x14); /* 0x171740B9: mov eax, dword ptr [ebx + 0x14] */
    /* test eax, eax */ /* 0x171740BC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171740C1; /* 0x171740BE: jne 0x171740c1 */
L_171740C0:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171740C0: inc eax */
    _flag_k = FK_INC;
L_171740C1:
    PUSH32(esp, eax); /* 0x171740C1: push eax */
    PUSH32(esp, 0x17021B80u); /* 0x171740C2: push 0x17021b80 */
    PUSH32(esp, edi); /* 0x171740C7: push edi */
    PUSH32(esp, esi); /* 0x171740C8: push esi */
    RECOMP_CALL(sub_1705338C); /* 0x171740C9: call 0x1705338c */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x171740CE: mov eax, esi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x171740D0: add esp, 0x10 */
    _flag_k = FK_ADD;
    ecx = eax + 0x1; /* 0x171740D3: lea ecx, [eax + 1] */
L_171740D6:
    SET_LO8(edx, MEM8(eax)); /* 0x171740D6: mov dl, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171740D8: inc eax */
    _flag_k = FK_INC;
    /* test LO8(edx), LO8(edx) */ /* 0x171740D9: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171740D6; /* 0x171740DB: jne 0x171740d6 */
L_171740DD:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x171740DD: sub eax, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NS(_flag_a, _flag_b)) goto L_171740E3; /* 0x171740DF: jns 0x171740e3 */
L_171740E1:
    eax = edi; /* 0x171740E1: mov eax, edi */
L_171740E3:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x171740E3: add esi, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - eax; /* 0x171740E5: sub edi, eax */
    _flag_k = FK_CMP;
L_171740E7:
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x171740E7: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17174115; /* 0x171740EB: je 0x17174115 */
L_171740ED:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x171740ED: push dword ptr [ebp + 0x10] */
    PUSH32(esp, 0x17021B74u); /* 0x171740F0: push 0x17021b74 */
    PUSH32(esp, edi); /* 0x171740F5: push edi */
    PUSH32(esp, esi); /* 0x171740F6: push esi */
    RECOMP_CALL(sub_1705338C); /* 0x171740F7: call 0x1705338c */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x171740FC: mov eax, esi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x171740FE: add esp, 0x10 */
    _flag_k = FK_ADD;
    ecx = eax + 0x1; /* 0x17174101: lea ecx, [eax + 1] */
L_17174104:
    SET_LO8(edx, MEM8(eax)); /* 0x17174104: mov dl, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17174106: inc eax */
    _flag_k = FK_INC;
    /* test LO8(edx), LO8(edx) */ /* 0x17174107: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17174104; /* 0x17174109: jne 0x17174104 */
L_1717410B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x1717410B: sub eax, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NS(_flag_a, _flag_b)) goto L_17174111; /* 0x1717410D: jns 0x17174111 */
L_1717410F:
    eax = edi; /* 0x1717410F: mov eax, edi */
L_17174111:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x17174111: add esi, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - eax; /* 0x17174113: sub edi, eax */
    _flag_k = FK_CMP;
L_17174115:
    eax = ebp + 0x18; /* 0x17174115: lea eax, [ebp + 0x18] */
    PUSH32(esp, eax); /* 0x17174118: push eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x17174119: push dword ptr [ebp + 0x14] */
    PUSH32(esp, edi); /* 0x1717411C: push edi */
    PUSH32(esp, esi); /* 0x1717411D: push esi */
    RECOMP_CALL(sub_1704BEE8); /* 0x1717411E: call 0x1704bee8 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x17174123: mov eax, esi */
    edx = eax + 0x1; /* 0x17174125: lea edx, [eax + 1] */
L_17174128:
    SET_LO8(ecx, MEM8(eax)); /* 0x17174128: mov cl, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1717412A: inc eax */
    _flag_k = FK_INC;
    /* test LO8(ecx), LO8(ecx) */ /* 0x1717412B: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17174128; /* 0x1717412D: jne 0x17174128 */
L_1717412F:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x1717412F: sub eax, edx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NS(_flag_a, _flag_b)) goto L_17174135; /* 0x17174131: jns 0x17174135 */
L_17174133:
    eax = edi; /* 0x17174133: mov eax, edi */
L_17174135:
    ecx = MEM32(ebp + 0x8); /* 0x17174135: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x17174138: add esi, eax */
    _flag_k = FK_ADD;
    eax = ebp + (-0x1004); /* 0x1717413A: lea eax, [ebp - 0x1004] */
    MEM8(esi) = (uint8_t)(0xAu); /* 0x17174140: mov byte ptr [esi], 0xa */
    MEM8(esi + 0x1) = (uint8_t)(0); /* 0x17174143: mov byte ptr [esi + 1], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x8) = MEM32(ecx + 0x8) + 1; /* 0x17174147: inc dword ptr [ecx + 8] */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x1717414A: push eax */
    RECOMP_CALL(sub_17173A18); /* 0x1717414B: call 0x17173a18 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x17174150: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x17174153: pop edi */
    esi = POP32_VAL(esp); /* 0x17174154: pop esi */
    ebx = POP32_VAL(esp); /* 0x17174155: pop ebx */
    RECOMP_CALL(sub_1721B76C); /* 0x17174156: call 0x1721b76c */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1717415B: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1717415C: ret  */
    RECOMP_REGS_OUT();
}

void sub_17174162(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17174162u);

L_17174162:
    edi = edi; /* 0x17174162: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17174164: push ebp */
    ebp = esp; /* 0x17174165: mov ebp, esp */
    eax = 0x1010u; /* 0x17174167: mov eax, 0x1010 */
    RECOMP_CALL(sub_1721B1B0); /* 0x1717416C: call 0x1721b1b0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x1723C894); /* 0x17174171: mov eax, dword ptr [0x1723c894] */
    PUSH32(esp, ebx); /* 0x17174176: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x17174177: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1717417A: push esi */
    PUSH32(esp, edi); /* 0x1717417B: push edi */
    MEM32(ebp + (-0x4)) = eax; /* 0x1717417C: mov dword ptr [ebp - 4], eax */
    eax = ebp + (-0x1008); /* 0x1717417F: lea eax, [ebp - 0x1008] */
    PUSH32(esp, eax); /* 0x17174185: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x17174186: push dword ptr [ebp + 0x10] */
    edi = 0xFFEu; /* 0x17174189: mov edi, 0xffe */
    ecx = ebx; /* 0x1717418E: mov ecx, ebx */
    esi = ebp + (-0x1004); /* 0x17174190: lea esi, [ebp - 0x1004] */
    MEM32(ebp + (-0x1010)) = edi; /* 0x17174196: mov dword ptr [ebp - 0x1010], edi */
    RECOMP_CALL(sub_17173888); /* 0x1717419C: call 0x17173888 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171741A1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17174320; /* 0x171741A3: jl 0x17174320 */
L_171741A9:
    ecx = MEM32(ebp + (-0x1008)); /* 0x171741A9: mov ecx, dword ptr [ebp - 0x1008] */
    eax = MEM32(ebx + 0x1C); /* 0x171741AF: mov eax, dword ptr [ebx + 0x1c] */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x171741B2: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x171741B2: shl ecx, 2 */
    ebx = MEM32(ecx + eax); /* 0x171741B5: mov ebx, dword ptr [ecx + eax] */
    eax = ebx; /* 0x171741B8: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFu);
    eax = eax & 0xFu; /* 0x171741BA: and eax, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 0xFu */ /* 0x171741BD: cmp eax, 0xf */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171741DA; /* 0x171741C0: jne 0x171741da */
L_171741C2:
    eax = MEM32(ebp + 0x8); /* 0x171741C2: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x171741C5: add eax, 8 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x100C)) = 0x1702189Cu; /* 0x171741C8: mov dword ptr [ebp - 0x100c], 0x1702189c */
    MEM32(ebp + (-0x1008)) = eax; /* 0x171741D2: mov dword ptr [ebp - 0x1008], eax */
    goto L_17174227; /* 0x171741D8: jmp 0x17174227 */
L_171741DA:
    edx = MEM32(ebp + 0x8); /* 0x171741DA: mov edx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0xCu; /* 0x171741DD: add edx, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x1008)) = edx; /* 0x171741E0: mov dword ptr [ebp - 0x1008], edx */
    edx = MEM32(ebp + 0x8); /* 0x171741E6: mov edx, dword ptr [ebp + 8] */
    edx = MEM32(edx + 0x10); /* 0x171741E9: mov edx, dword ptr [edx + 0x10] */
    /* test edx, edx */ /* 0x171741EC: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x100C)) = 0x17021928u; /* 0x171741EE: mov dword ptr [ebp - 0x100c], 0x17021928 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1717431E; /* 0x171741F8: je 0x1717431e */
L_171741FE:
    /* test eax, eax */ /* 0x171741FE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1717431E; /* 0x17174200: je 0x1717431e */
L_17174206:
    /* cmp edx, eax */ /* 0x17174206: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1717431E; /* 0x17174208: jb 0x1717431e */
L_1717420E:
    /* test LO8(ebx), 0x10u */ /* 0x1717420E: test bl, 0x10 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1717421C; /* 0x17174211: je 0x1717421c */
L_17174213:
    /* test LO8(ebx), 0x20u */ /* 0x17174213: test bl, 0x20 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1717431E; /* 0x17174216: jne 0x1717431e */
L_1717421C:
    eax = MEM32(ebp + 0x8); /* 0x1717421C: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x1C); /* 0x1717421F: mov eax, dword ptr [eax + 0x1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x17174222: add eax, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)((MEM32(eax) | 0x20u)); _flag_b = (uint32_t)((MEM32(eax) | 0x20u));
    MEM32(eax) = MEM32(eax) | 0x20u; /* 0x17174224: or dword ptr [eax], 0x20 */
    _cf = 0;
    _flag_k = FK_TEST;
L_17174227:
    ebx = MEM32(ebp + 0xC); /* 0x17174227: mov ebx, dword ptr [ebp + 0xc] */
    /* test ebx, ebx */ /* 0x1717422A: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171742A2; /* 0x1717422C: je 0x171742a2 */
L_1717422E:
    eax = MEM32(ebx + 0x10); /* 0x1717422E: mov eax, dword ptr [ebx + 0x10] */
    /* test eax, eax */ /* 0x17174231: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1717426C; /* 0x17174233: je 0x1717426c */
L_17174235:
    PUSH32(esp, eax); /* 0x17174235: push eax */
    PUSH32(esp, 0x17008008u); /* 0x17174236: push 0x17008008 */
    eax = ebp + (-0x1004); /* 0x1717423B: lea eax, [ebp - 0x1004] */
    PUSH32(esp, edi); /* 0x17174241: push edi */
    PUSH32(esp, eax); /* 0x17174242: push eax */
    RECOMP_CALL(sub_1705338C); /* 0x17174243: call 0x1705338c */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x1004); /* 0x17174248: lea eax, [ebp - 0x1004] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1717424E: add esp, 0x10 */
    _flag_k = FK_ADD;
    edx = eax + 0x1; /* 0x17174251: lea edx, [eax + 1] */
L_17174254:
    SET_LO8(ecx, MEM8(eax)); /* 0x17174254: mov cl, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17174256: inc eax */
    _flag_k = FK_INC;
    /* test LO8(ecx), LO8(ecx) */ /* 0x17174257: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17174254; /* 0x17174259: jne 0x17174254 */
L_1717425B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x1717425B: sub eax, edx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NS(_flag_a, _flag_b)) goto L_17174261; /* 0x1717425D: jns 0x17174261 */
L_1717425F:
    eax = edi; /* 0x1717425F: mov eax, edi */
L_17174261:
    esi = ebp + eax + (-0x1004); /* 0x17174261: lea esi, [ebp + eax - 0x1004] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - eax; /* 0x17174268: sub edi, eax */
    _flag_k = FK_CMP;
    goto L_17174272; /* 0x1717426A: jmp 0x17174272 */
L_1717426C:
    edi = MEM32(ebp + (-0x1010)); /* 0x1717426C: mov edi, dword ptr [ebp - 0x1010] */
L_17174272:
    eax = MEM32(ebx + 0x14); /* 0x17174272: mov eax, dword ptr [ebx + 0x14] */
    /* test eax, eax */ /* 0x17174275: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1717427A; /* 0x17174277: jne 0x1717427a */
L_17174279:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17174279: inc eax */
    _flag_k = FK_INC;
L_1717427A:
    PUSH32(esp, eax); /* 0x1717427A: push eax */
    PUSH32(esp, 0x17021B80u); /* 0x1717427B: push 0x17021b80 */
    PUSH32(esp, edi); /* 0x17174280: push edi */
    PUSH32(esp, esi); /* 0x17174281: push esi */
    RECOMP_CALL(sub_1705338C); /* 0x17174282: call 0x1705338c */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x17174287: mov eax, esi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x17174289: add esp, 0x10 */
    _flag_k = FK_ADD;
    ecx = eax + 0x1; /* 0x1717428C: lea ecx, [eax + 1] */
L_1717428F:
    SET_LO8(edx, MEM8(eax)); /* 0x1717428F: mov dl, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17174291: inc eax */
    _flag_k = FK_INC;
    /* test LO8(edx), LO8(edx) */ /* 0x17174292: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1717428F; /* 0x17174294: jne 0x1717428f */
L_17174296:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x17174296: sub eax, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NS(_flag_a, _flag_b)) goto L_1717429C; /* 0x17174298: jns 0x1717429c */
L_1717429A:
    eax = edi; /* 0x1717429A: mov eax, edi */
L_1717429C:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x1717429C: add esi, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - eax; /* 0x1717429E: sub edi, eax */
    _flag_k = FK_CMP;
    goto L_171742A8; /* 0x171742A0: jmp 0x171742a8 */
L_171742A2:
    edi = MEM32(ebp + (-0x1010)); /* 0x171742A2: mov edi, dword ptr [ebp - 0x1010] */
L_171742A8:
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x171742A8: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171742DC; /* 0x171742AC: je 0x171742dc */
L_171742AE:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x171742AE: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + (-0x100C))); /* 0x171742B1: push dword ptr [ebp - 0x100c] */
    PUSH32(esp, 0x17021B88u); /* 0x171742B7: push 0x17021b88 */
    PUSH32(esp, edi); /* 0x171742BC: push edi */
    PUSH32(esp, esi); /* 0x171742BD: push esi */
    RECOMP_CALL(sub_1705338C); /* 0x171742BE: call 0x1705338c */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x171742C3: mov eax, esi */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x171742C5: add esp, 0x14 */
    _flag_k = FK_ADD;
    ecx = eax + 0x1; /* 0x171742C8: lea ecx, [eax + 1] */
L_171742CB:
    SET_LO8(edx, MEM8(eax)); /* 0x171742CB: mov dl, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171742CD: inc eax */
    _flag_k = FK_INC;
    /* test LO8(edx), LO8(edx) */ /* 0x171742CE: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171742CB; /* 0x171742D0: jne 0x171742cb */
L_171742D2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x171742D2: sub eax, ecx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NS(_flag_a, _flag_b)) goto L_171742D8; /* 0x171742D4: jns 0x171742d8 */
L_171742D6:
    eax = edi; /* 0x171742D6: mov eax, edi */
L_171742D8:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x171742D8: add esi, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - eax; /* 0x171742DA: sub edi, eax */
    _flag_k = FK_CMP;
L_171742DC:
    eax = ebp + 0x18; /* 0x171742DC: lea eax, [ebp + 0x18] */
    PUSH32(esp, eax); /* 0x171742DF: push eax */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x171742E0: push dword ptr [ebp + 0x14] */
    PUSH32(esp, edi); /* 0x171742E3: push edi */
    PUSH32(esp, esi); /* 0x171742E4: push esi */
    RECOMP_CALL(sub_1704BEE8); /* 0x171742E5: call 0x1704bee8 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x171742EA: mov eax, esi */
    edx = eax + 0x1; /* 0x171742EC: lea edx, [eax + 1] */
L_171742EF:
    SET_LO8(ecx, MEM8(eax)); /* 0x171742EF: mov cl, byte ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171742F1: inc eax */
    _flag_k = FK_INC;
    /* test LO8(ecx), LO8(ecx) */ /* 0x171742F2: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171742EF; /* 0x171742F4: jne 0x171742ef */
L_171742F6:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x171742F6: sub eax, edx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NS(_flag_a, _flag_b)) goto L_171742FC; /* 0x171742F8: jns 0x171742fc */
L_171742FA:
    eax = edi; /* 0x171742FA: mov eax, edi */
L_171742FC:
    ecx = MEM32(ebp + 0x8); /* 0x171742FC: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x171742FF: add esi, eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x1008)); /* 0x17174301: mov eax, dword ptr [ebp - 0x1008] */
    MEM8(esi) = (uint8_t)(0xAu); /* 0x17174307: mov byte ptr [esi], 0xa */
    MEM8(esi + 0x1) = (uint8_t)(0); /* 0x1717430A: mov byte ptr [esi + 1], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(1);
    MEM32(eax) = MEM32(eax) + 1; /* 0x1717430E: inc dword ptr [eax] */
    _flag_k = FK_INC;
    eax = ebp + (-0x1004); /* 0x17174310: lea eax, [ebp - 0x1004] */
    PUSH32(esp, eax); /* 0x17174316: push eax */
    RECOMP_CALL(sub_17173A18); /* 0x17174317: call 0x17173a18 */
    RECOMP_FLAGS_IN();
    goto L_17174320; /* 0x1717431C: jmp 0x17174320 */
L_1717431E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1717431E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_17174320:
    ecx = MEM32(ebp + (-0x4)); /* 0x17174320: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x17174323: pop edi */
    esi = POP32_VAL(esp); /* 0x17174324: pop esi */
    ebx = POP32_VAL(esp); /* 0x17174325: pop ebx */
    RECOMP_CALL(sub_1721B76C); /* 0x17174326: call 0x1721b76c */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1717432B: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1717432C: ret  */
    RECOMP_REGS_OUT();
}

void sub_17174332(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17174332u);

L_17174332:
    edi = edi; /* 0x17174332: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17174334: push ebp */
    ebp = esp; /* 0x17174335: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x104u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x104u; /* 0x17174337: sub esp, 0x104 */
    _flag_k = FK_CMP;
    eax = MEM32(0x1723C894); /* 0x1717433D: mov eax, dword ptr [0x1723c894] */
    PUSH32(esp, esi); /* 0x17174342: push esi */
    esi = MEM32(ebp + 0xC); /* 0x17174343: mov esi, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x4)) = eax; /* 0x17174346: mov dword ptr [ebp - 4], eax */
    eax = MEM32(esi); /* 0x17174349: mov eax, dword ptr [esi] */
    /* cmp eax, 0xDu */ /* 0x1717434B: cmp eax, 0xd */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xDu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x1717434E: push edi */
    edi = ecx; /* 0x1717434F: mov edi, ecx */
    if (CMP_A(_flag_a, _flag_b)) goto L_1717440F; /* 0x17174351: ja 0x1717440f */
L_17174357:
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x1717444F)); goto _ljump; }
L_1717435E:
    PUSH32(esp, 0x1701ABD0u); /* 0x1717435E: push 0x1701abd0 */
    goto L_17174414; /* 0x17174363: jmp 0x17174414 */
L_17174368:
    eax = esi + 0x8; /* 0x17174368: lea eax, [esi + 8] */
    PUSH32(esp, eax); /* 0x1717436B: push eax */
    goto L_171743DF; /* 0x1717436C: jmp 0x171743df */
L_1717436E:
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x1717436E: push dword ptr [esi + 8] */
    PUSH32(esp, 0x17021C04u); /* 0x17174371: push 0x17021c04 */
    goto L_171743E4; /* 0x17174376: jmp 0x171743e4 */
L_17174378:
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x17174378: push dword ptr [esi + 8] */
    PUSH32(esp, 0x17021BF4u); /* 0x1717437B: push 0x17021bf4 */
    goto L_171743E4; /* 0x17174380: jmp 0x171743e4 */
L_17174382:
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x17174382: push dword ptr [esi + 8] */
    PUSH32(esp, 0x17021BE4u); /* 0x17174385: push 0x17021be4 */
    goto L_171743E4; /* 0x1717438A: jmp 0x171743e4 */
L_1717438C:
    fp_push(*(double*)ADDR(esi + 0x8)); /* 0x1717438C: fld qword ptr [esi + 8] */
    PUSH32(esp, ecx); /* 0x1717438F: push ecx */
    PUSH32(esp, ecx); /* 0x17174390: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x17174391: fstp qword ptr [esp] */
    PUSH32(esp, 0x17021BD8u); /* 0x17174394: push 0x17021bd8 */
    goto L_171743C6; /* 0x17174399: jmp 0x171743c6 */
L_1717439B:
    fp_push(*(double*)ADDR(esi + 0x8)); /* 0x1717439B: fld qword ptr [esi + 8] */
    PUSH32(esp, ecx); /* 0x1717439E: push ecx */
    PUSH32(esp, ecx); /* 0x1717439F: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x171743A0: fstp qword ptr [esp] */
    PUSH32(esp, 0x17021BCCu); /* 0x171743A3: push 0x17021bcc */
    goto L_171743C6; /* 0x171743A8: jmp 0x171743c6 */
L_171743AA:
    fp_push(*(double*)ADDR(esi + 0x8)); /* 0x171743AA: fld qword ptr [esi + 8] */
    PUSH32(esp, ecx); /* 0x171743AD: push ecx */
    PUSH32(esp, ecx); /* 0x171743AE: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x171743AF: fstp qword ptr [esp] */
    PUSH32(esp, 0x17021BC0u); /* 0x171743B2: push 0x17021bc0 */
    goto L_171743C6; /* 0x171743B7: jmp 0x171743c6 */
L_171743B9:
    fp_push(*(double*)ADDR(esi + 0x8)); /* 0x171743B9: fld qword ptr [esi + 8] */
    PUSH32(esp, ecx); /* 0x171743BC: push ecx */
    PUSH32(esp, ecx); /* 0x171743BD: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x171743BE: fstp qword ptr [esp] */
    PUSH32(esp, 0x17021BB4u); /* 0x171743C1: push 0x17021bb4 */
L_171743C6:
    eax = ebp + (-0x104); /* 0x171743C6: lea eax, [ebp - 0x104] */
    PUSH32(esp, 0x100u); /* 0x171743CC: push 0x100 */
    PUSH32(esp, eax); /* 0x171743D1: push eax */
    RECOMP_CALL(sub_1705338C); /* 0x171743D2: call 0x1705338c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x171743D7: add esp, 0x14 */
    _flag_k = FK_ADD;
    goto L_17174428; /* 0x171743DA: jmp 0x17174428 */
L_171743DC:
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x171743DC: push dword ptr [esi + 8] */
L_171743DF:
    PUSH32(esp, 0x1701ABC4u); /* 0x171743DF: push 0x1701abc4 */
L_171743E4:
    eax = ebp + (-0x104); /* 0x171743E4: lea eax, [ebp - 0x104] */
    PUSH32(esp, 0x100u); /* 0x171743EA: push 0x100 */
    PUSH32(esp, eax); /* 0x171743EF: push eax */
    RECOMP_CALL(sub_1705338C); /* 0x171743F0: call 0x1705338c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x171743F5: add esp, 0x10 */
    _flag_k = FK_ADD;
    goto L_17174428; /* 0x171743F8: jmp 0x17174428 */
L_171743FA:
    PUSH32(esp, 0x1701AB94u); /* 0x171743FA: push 0x1701ab94 */
    goto L_17174414; /* 0x171743FF: jmp 0x17174414 */
L_17174401:
    PUSH32(esp, 0x1701ABA4u); /* 0x17174401: push 0x1701aba4 */
    goto L_17174414; /* 0x17174406: jmp 0x17174414 */
L_17174408:
    PUSH32(esp, 0x1701ABB0u); /* 0x17174408: push 0x1701abb0 */
    goto L_17174414; /* 0x1717440D: jmp 0x17174414 */
L_1717440F:
    PUSH32(esp, 0x1701ABBCu); /* 0x1717440F: push 0x1701abbc */
L_17174414:
    eax = ebp + (-0x104); /* 0x17174414: lea eax, [ebp - 0x104] */
    PUSH32(esp, 0x100u); /* 0x1717441A: push 0x100 */
    PUSH32(esp, eax); /* 0x1717441F: push eax */
    RECOMP_CALL(sub_1705338C); /* 0x17174420: call 0x1705338c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x17174425: add esp, 0xc */
    _flag_k = FK_ADD;
L_17174428:
    eax = ebp + (-0x104); /* 0x17174428: lea eax, [ebp - 0x104] */
    PUSH32(esp, eax); /* 0x1717442E: push eax */
    PUSH32(esp, 0x17021B94u); /* 0x1717442F: push 0x17021b94 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x17174434: push dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x17174437: push esi */
    PUSH32(esp, edi); /* 0x17174438: push edi */
    RECOMP_CALL(sub_17174059); /* 0x17174439: call 0x17174059 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x1717443E: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x17174441: add esp, 0x14 */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x17174444: pop edi */
    esi = POP32_VAL(esp); /* 0x17174445: pop esi */
    RECOMP_CALL(sub_1721B76C); /* 0x17174446: call 0x1721b76c */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1717444B: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1717444C: ret 8 */
  _ljump:
    switch (_itail_tgt) {
      case 0x1717435Eu: goto L_1717435E;
      case 0x17174368u: goto L_17174368;
      case 0x1717436Eu: goto L_1717436E;
      case 0x17174378u: goto L_17174378;
      case 0x17174382u: goto L_17174382;
      case 0x1717438Cu: goto L_1717438C;
      case 0x1717439Bu: goto L_1717439B;
      case 0x171743AAu: goto L_171743AA;
      case 0x171743B9u: goto L_171743B9;
      case 0x171743DCu: goto L_171743DC;
      case 0x171743FAu: goto L_171743FA;
      case 0x17174401u: goto L_17174401;
      case 0x17174408u: goto L_17174408;
      case 0x1717440Fu: goto L_1717440F;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1717448C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1717448Cu);

L_1717448C:
    edi = edi; /* 0x1717448C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1717448E: push ebp */
    ebp = esp; /* 0x1717448F: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x17174491: push ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x17174492: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x17174496: push esi */
    esi = ecx; /* 0x17174497: mov esi, ecx */
    eax = MEM32(esi); /* 0x17174499: mov eax, dword ptr [esi] */
    /* cmp eax, MEM32(esi + 0x4) */ /* 0x1717449B: cmp eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_171745AF; /* 0x1717449E: jae 0x171745af */
L_171744A4:
    PUSH32(esp, edi); /* 0x171744A4: push edi */
L_171744A5:
    eax = MEM32(esi); /* 0x171744A5: mov eax, dword ptr [esi] */
    SET_LO8(edx, MEM8(eax)); /* 0x171744A7: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), 0xAu */ /* 0x171744A9: cmp dl, 0xa */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0xAu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171744BE; /* 0x171744AC: jne 0x171744be */
L_171744AE:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171744AE: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(esi + 0x1C)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x1C) = MEM32(esi + 0x1C) + 1; /* 0x171744AF: inc dword ptr [esi + 0x1c] */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x4)) = 1; /* 0x171744B2: mov dword ptr [ebp - 4], 1 */
    goto L_171745A1; /* 0x171744B9: jmp 0x171745a1 */
L_171744BE:
    /* cmp LO8(edx), 0x20u */ /* 0x171744BE: cmp dl, 0x20 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171745A0; /* 0x171744C1: je 0x171745a0 */
L_171744C7:
    /* cmp LO8(edx), 9 */ /* 0x171744C7: cmp dl, 9 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(9) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_L(_flag_a, _flag_b)) goto L_171744D5; /* 0x171744CA: jl 0x171744d5 */
L_171744CC:
    /* cmp LO8(edx), 0xDu */ /* 0x171744CC: cmp dl, 0xd */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0xDu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_LE(_flag_a, _flag_b)) goto L_171745A0; /* 0x171744CF: jle 0x171745a0 */
L_171744D5:
    /* cmp LO8(edx), 0x2Fu */ /* 0x171744D5: cmp dl, 0x2f */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0x2Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1717455E; /* 0x171744D8: jne 0x1717455e */
L_171744DE:
    ecx = eax + 0x1; /* 0x171744DE: lea ecx, [eax + 1] */
    /* cmp ecx, MEM32(esi + 0x4) */ /* 0x171744E1: cmp ecx, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_171744F6; /* 0x171744E4: jae 0x171744f6 */
L_171744E6:
    /* cmp MEM8(ecx), LO8(edx) */ /* 0x171744E6: cmp byte ptr [ecx], dl */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171744F6; /* 0x171744E8: jne 0x171744f6 */
L_171744EA:
    ecx = esi; /* 0x171744EA: mov ecx, esi */
    RECOMP_CALL(sub_17173B81); /* 0x171744EC: call 0x17173b81 */
    RECOMP_FLAGS_IN();
    goto L_171745A3; /* 0x171744F1: jmp 0x171745a3 */
L_171744F6:
    /* cmp LO8(edx), 0x2Fu */ /* 0x171744F6: cmp dl, 0x2f */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0x2Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1717455E; /* 0x171744F9: jne 0x1717455e */
L_171744FB:
    edi = MEM32(esi + 0x4); /* 0x171744FB: mov edi, dword ptr [esi + 4] */
    ecx = eax + 0x1; /* 0x171744FE: lea ecx, [eax + 1] */
    /* cmp ecx, edi */ /* 0x17174501: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1717455E; /* 0x17174503: jae 0x1717455e */
L_17174505:
    /* cmp MEM8(ecx), 0x2Au */ /* 0x17174505: cmp byte ptr [ecx], 0x2a */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0x2Au) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1717455E; /* 0x17174508: jne 0x1717455e */
L_1717450A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x1717450A: add eax, 2 */
    _flag_k = FK_ADD;
    /* cmp eax, edi */ /* 0x1717450D: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi) = eax; /* 0x1717450F: mov dword ptr [esi], eax */
    if (CMP_AE(_flag_a, _flag_b)) goto L_17174538; /* 0x17174511: jae 0x17174538 */
L_17174513:
    eax = MEM32(esi); /* 0x17174513: mov eax, dword ptr [esi] */
    SET_LO8(edx, MEM8(eax)); /* 0x17174515: mov dl, byte ptr [eax] */
    /* cmp LO8(edx), 0x2Au */ /* 0x17174517: cmp dl, 0x2a */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0x2Au) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17174528; /* 0x1717451A: jne 0x17174528 */
L_1717451C:
    ecx = eax + 0x1; /* 0x1717451C: lea ecx, [eax + 1] */
    /* cmp ecx, edi */ /* 0x1717451F: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_17174528; /* 0x17174521: jae 0x17174528 */
L_17174523:
    /* cmp MEM8(ecx), 0x2Fu */ /* 0x17174523: cmp byte ptr [ecx], 0x2f */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0x2Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17174538; /* 0x17174526: je 0x17174538 */
L_17174528:
    /* cmp LO8(edx), 0xAu */ /* 0x17174528: cmp dl, 0xa */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0xAu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17174530; /* 0x1717452B: jne 0x17174530 */
L_1717452D:
    _flag_a = (uint32_t)(MEM32(esi + 0x1C)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x1C) = MEM32(esi + 0x1C) + 1; /* 0x1717452D: inc dword ptr [esi + 0x1c] */
    _flag_k = FK_INC;
L_17174530:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17174530: inc eax */
    _flag_k = FK_INC;
    MEM32(esi) = eax; /* 0x17174531: mov dword ptr [esi], eax */
    /* cmp eax, MEM32(esi + 0x4) */ /* 0x17174533: cmp eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17174513; /* 0x17174536: jb 0x17174513 */
L_17174538:
    eax = MEM32(esi); /* 0x17174538: mov eax, dword ptr [esi] */
    /* cmp eax, edi */ /* 0x1717453A: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_17174543; /* 0x1717453C: jae 0x17174543 */
L_1717453E:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x1717453E: add eax, 2 */
    _flag_k = FK_ADD;
    goto L_171745A1; /* 0x17174541: jmp 0x171745a1 */
L_17174543:
    PUSH32(esp, 0x17021C14u); /* 0x17174543: push 0x17021c14 */
    PUSH32(esp, 0x3E9u); /* 0x17174548: push 0x3e9 */
    eax = esi + 0x8; /* 0x1717454D: lea eax, [esi + 8] */
    PUSH32(esp, eax); /* 0x17174550: push eax */
    PUSH32(esp, MEM32(esi + 0x30)); /* 0x17174551: push dword ptr [esi + 0x30] */
    RECOMP_CALL(sub_17174059); /* 0x17174554: call 0x17174059 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x17174559: add esp, 0x10 */
    _flag_k = FK_ADD;
    goto L_171745A3; /* 0x1717455C: jmp 0x171745a3 */
L_1717455E:
    /* test MEM8(esi + 0x28), 2 */ /* 0x1717455E: test byte ptr [esi + 0x28], 2 */
    _flag_a = (uint32_t)(MEM8(esi + 0x28)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_17174569; /* 0x17174562: je 0x17174569 */
L_17174564:
    /* cmp LO8(edx), 0x3Bu */ /* 0x17174564: cmp dl, 0x3b */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0x3Bu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171744EA; /* 0x17174567: je 0x171744ea */
L_17174569:
    /* cmp LO8(edx), 0x5Cu */ /* 0x17174569: cmp dl, 0x5c */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0x5Cu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171745AE; /* 0x1717456C: jne 0x171745ae */
L_1717456E:
    ecx = eax + 0x1; /* 0x1717456E: lea ecx, [eax + 1] */
    /* cmp ecx, MEM32(esi + 0x4) */ /* 0x17174571: cmp ecx, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_17174580; /* 0x17174574: jae 0x17174580 */
L_17174576:
    /* cmp MEM8(ecx), 0xAu */ /* 0x17174576: cmp byte ptr [ecx], 0xa */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0xAu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17174580; /* 0x17174579: jne 0x17174580 */
L_1717457B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x1717457B: add eax, 2 */
    _flag_k = FK_ADD;
    goto L_1717459B; /* 0x1717457E: jmp 0x1717459b */
L_17174580:
    /* cmp LO8(edx), 0x5Cu */ /* 0x17174580: cmp dl, 0x5c */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0x5Cu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171745AE; /* 0x17174583: jne 0x171745ae */
L_17174585:
    ecx = eax + 0x2; /* 0x17174585: lea ecx, [eax + 2] */
    /* cmp ecx, MEM32(esi + 0x4) */ /* 0x17174588: cmp ecx, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_171745AE; /* 0x1717458B: jae 0x171745ae */
L_1717458D:
    /* cmp MEM8(eax + 0x1), 0xDu */ /* 0x1717458D: cmp byte ptr [eax + 1], 0xd */
    _flag_a = (uint32_t)(MEM8(eax + 0x1)) << 24; _flag_b = (uint32_t)(0xDu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171745AE; /* 0x17174591: jne 0x171745ae */
L_17174593:
    /* cmp MEM8(ecx), 0xAu */ /* 0x17174593: cmp byte ptr [ecx], 0xa */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0xAu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171745AE; /* 0x17174596: jne 0x171745ae */
L_17174598:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 3; /* 0x17174598: add eax, 3 */
    _flag_k = FK_ADD;
L_1717459B:
    _flag_a = (uint32_t)(MEM32(esi + 0x1C)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x1C) = MEM32(esi + 0x1C) + 1; /* 0x1717459B: inc dword ptr [esi + 0x1c] */
    _flag_k = FK_INC;
    goto L_171745A1; /* 0x1717459E: jmp 0x171745a1 */
L_171745A0:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171745A0: inc eax */
    _flag_k = FK_INC;
L_171745A1:
    MEM32(esi) = eax; /* 0x171745A1: mov dword ptr [esi], eax */
L_171745A3:
    eax = MEM32(esi); /* 0x171745A3: mov eax, dword ptr [esi] */
    /* cmp eax, MEM32(esi + 0x4) */ /* 0x171745A5: cmp eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171744A5; /* 0x171745A8: jb 0x171744a5 */
L_171745AE:
    edi = POP32_VAL(esp); /* 0x171745AE: pop edi */
L_171745AF:
    eax = MEM32(ebp + (-0x4)); /* 0x171745AF: mov eax, dword ptr [ebp - 4] */
    esi = POP32_VAL(esp); /* 0x171745B2: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171745B3: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171745B4: ret  */
    RECOMP_REGS_OUT();
}

void sub_171745BA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171745BAu);

L_171745BA:
    edi = edi; /* 0x171745BA: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171745BC: push ebp */
    ebp = esp; /* 0x171745BD: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x171745BF: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x171745C2: push ebx */
    PUSH32(esp, edi); /* 0x171745C3: push edi */
    ebx = ecx; /* 0x171745C4: mov ebx, ecx */
    edi = eax + 0x2; /* 0x171745C6: lea edi, [eax + 2] */
    /* cmp edi, MEM32(ebx + 0x4) */ /* 0x171745C9: cmp edi, dword ptr [ebx + 4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebx + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_17174656; /* 0x171745CC: jae 0x17174656 */
L_171745D2:
    /* cmp MEM8(eax), 0x30u */ /* 0x171745D2: cmp byte ptr [eax], 0x30 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17174656; /* 0x171745D5: jne 0x17174656 */
L_171745D7:
    /* cmp MEM8(eax + 0x1), 0x78u */ /* 0x171745D7: cmp byte ptr [eax + 1], 0x78 */
    _flag_a = (uint32_t)(MEM8(eax + 0x1)) << 24; _flag_b = (uint32_t)(0x78u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17174656; /* 0x171745DB: jne 0x17174656 */
L_171745DD:
    eax = (int32_t)(int8_t)MEM8(edi); /* 0x171745DD: movsx eax, byte ptr [edi] */
    PUSH32(esp, eax); /* 0x171745E0: push eax */
    RECOMP_CALL(sub_1721B40A); /* 0x171745E1: call 0x1721b40a */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171745E6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x171745E8: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17174656; /* 0x171745E9: je 0x17174656 */
L_171745EB:
    PUSH32(esp, esi); /* 0x171745EB: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x171745EC: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_17174622; /* 0x171745EE: jmp 0x17174622 */
L_171745F0:
    eax = (int32_t)(int8_t)MEM8(edi); /* 0x171745F0: movsx eax, byte ptr [edi] */
    PUSH32(esp, eax); /* 0x171745F3: push eax */
    RECOMP_CALL(sub_1721B40A); /* 0x171745F4: call 0x1721b40a */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171745F9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x171745FB: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17174627; /* 0x171745FC: je 0x17174627 */
L_171745FE:
    SET_LO8(eax, MEM8(edi)); /* 0x171745FE: mov al, byte ptr [edi] */
    if (4u) _cf = (((esi) >> 28) & 1u); /* 0x17174600: shl esi, 4 */
    if (4u) { _flag_a = recomp_flags_pack((esi << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 4u; /* 0x17174600: shl esi, 4 */
    /* cmp LO8(eax), 0x61u */ /* 0x17174603: cmp al, 0x61 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x61u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_L(_flag_a, _flag_b)) goto L_17174610; /* 0x17174605: jl 0x17174610 */
L_17174607:
    eax = (int32_t)(int8_t)LO8(eax); /* 0x17174607: movsx eax, al */
    esi = esi + eax + (-0x57); /* 0x1717460A: lea esi, [esi + eax - 0x57] */
    goto L_17174621; /* 0x1717460E: jmp 0x17174621 */
L_17174610:
    /* cmp LO8(eax), 0x41u */ /* 0x17174610: cmp al, 0x41 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = (int32_t)(int8_t)LO8(eax); /* 0x17174612: movsx eax, al */
    if (CMP_L(_flag_a, _flag_b)) goto L_1717461D; /* 0x17174615: jl 0x1717461d */
L_17174617:
    esi = esi + eax + (-0x37); /* 0x17174617: lea esi, [esi + eax - 0x37] */
    goto L_17174621; /* 0x1717461B: jmp 0x17174621 */
L_1717461D:
    esi = esi + eax + (-0x30); /* 0x1717461D: lea esi, [esi + eax - 0x30] */
L_17174621:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x17174621: inc edi */
    _flag_k = FK_INC;
L_17174622:
    /* cmp edi, MEM32(ebx + 0x4) */ /* 0x17174622: cmp edi, dword ptr [ebx + 4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebx + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171745F0; /* 0x17174625: jb 0x171745f0 */
L_17174627:
    eax = MEM32(ebp + 0xC); /* 0x17174627: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x1717462A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17174630; /* 0x1717462C: je 0x17174630 */
L_1717462E:
    MEM32(eax) = esi; /* 0x1717462E: mov dword ptr [eax], esi */
L_17174630:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - MEM32(ebp + 0x8); /* 0x17174630: sub edi, dword ptr [ebp + 8] */
    _flag_k = FK_CMP;
    esi = POP32_VAL(esp); /* 0x17174633: pop esi */
    /* cmp edi, 0xAu */ /* 0x17174634: cmp edi, 0xa */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_17174652; /* 0x17174637: jle 0x17174652 */
L_17174639:
    PUSH32(esp, 0x17021C38u); /* 0x17174639: push 0x17021c38 */
    PUSH32(esp, 0x3EAu); /* 0x1717463E: push 0x3ea */
    eax = ebx + 0x8; /* 0x17174643: lea eax, [ebx + 8] */
    PUSH32(esp, eax); /* 0x17174646: push eax */
    PUSH32(esp, MEM32(ebx + 0x30)); /* 0x17174647: push dword ptr [ebx + 0x30] */
    RECOMP_CALL(sub_17174059); /* 0x1717464A: call 0x17174059 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1717464F: add esp, 0x10 */
    _flag_k = FK_ADD;
L_17174652:
    eax = edi; /* 0x17174652: mov eax, edi */
    goto L_17174658; /* 0x17174654: jmp 0x17174658 */
L_17174656:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17174656: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_17174658:
    edi = POP32_VAL(esp); /* 0x17174658: pop edi */
    ebx = POP32_VAL(esp); /* 0x17174659: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1717465A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1717465B: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_17174663(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17174663u);

L_17174663:
    edi = edi; /* 0x17174663: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17174665: push ebp */
    ebp = esp; /* 0x17174666: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x17174668: push ecx */
    PUSH32(esp, ebx); /* 0x17174669: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x1717466A: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1717466D: push edi */
    edi = MEM32(ecx + 0x4); /* 0x1717466E: mov edi, dword ptr [ecx + 4] */
    /* cmp ebx, edi */ /* 0x17174671: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = ecx; /* 0x17174673: mov dword ptr [ebp - 4], ecx */
    if (CMP_AE(_flag_a, _flag_b)) goto L_171746D9; /* 0x17174676: jae 0x171746d9 */
L_17174678:
    /* cmp MEM8(ebx), 0x30u */ /* 0x17174678: cmp byte ptr [ebx], 0x30 */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171746D9; /* 0x1717467B: jne 0x171746d9 */
L_1717467D:
    PUSH32(esp, esi); /* 0x1717467D: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1717467E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x17174680: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = ebx + 0x1; /* 0x17174682: lea esi, [ebx + 1] */
    goto L_171746A5; /* 0x17174685: jmp 0x171746a5 */
L_17174687:
    SET_LO8(edx, MEM8(esi)); /* 0x17174687: mov dl, byte ptr [esi] */
    /* cmp LO8(edx), 0x30u */ /* 0x17174689: cmp dl, 0x30 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_L(_flag_a, _flag_b)) goto L_171746A9; /* 0x1717468C: jl 0x171746a9 */
L_1717468E:
    /* cmp LO8(edx), 0x37u */ /* 0x1717468E: cmp dl, 0x37 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(0x37u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_G(_flag_a, _flag_b)) goto L_171746A9; /* 0x17174691: jg 0x171746a9 */
L_17174693:
    /* test eax, 0xE0000000u */ /* 0x17174693: test eax, 0xe0000000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xE0000000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1717469D; /* 0x17174698: je 0x1717469d */
L_1717469A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1717469A: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1717469C: inc ecx */
    _flag_k = FK_INC;
L_1717469D:
    edx = (int32_t)(int8_t)LO8(edx); /* 0x1717469D: movsx edx, dl */
    eax = edx + eax * 8 + (-0x30); /* 0x171746A0: lea eax, [edx + eax*8 - 0x30] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x171746A4: inc esi */
    _flag_k = FK_INC;
L_171746A5:
    /* cmp esi, edi */ /* 0x171746A5: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17174687; /* 0x171746A7: jb 0x17174687 */
L_171746A9:
    edx = MEM32(ebp + 0xC); /* 0x171746A9: mov edx, dword ptr [ebp + 0xc] */
    /* test edx, edx */ /* 0x171746AC: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171746B2; /* 0x171746AE: je 0x171746b2 */
L_171746B0:
    MEM32(edx) = eax; /* 0x171746B0: mov dword ptr [edx], eax */
L_171746B2:
    /* test ecx, ecx */ /* 0x171746B2: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171746D2; /* 0x171746B4: je 0x171746d2 */
L_171746B6:
    eax = MEM32(ebp + (-0x4)); /* 0x171746B6: mov eax, dword ptr [ebp - 4] */
    PUSH32(esp, 0x17021C58u); /* 0x171746B9: push 0x17021c58 */
    PUSH32(esp, 0x3EBu); /* 0x171746BE: push 0x3eb */
    ecx = eax + 0x8; /* 0x171746C3: lea ecx, [eax + 8] */
    PUSH32(esp, ecx); /* 0x171746C6: push ecx */
    PUSH32(esp, MEM32(eax + 0x30)); /* 0x171746C7: push dword ptr [eax + 0x30] */
    RECOMP_CALL(sub_17174059); /* 0x171746CA: call 0x17174059 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x171746CF: add esp, 0x10 */
    _flag_k = FK_ADD;
L_171746D2:
    eax = esi; /* 0x171746D2: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x171746D4: sub eax, ebx */
    _flag_k = FK_CMP;
    esi = POP32_VAL(esp); /* 0x171746D6: pop esi */
    goto L_171746DB; /* 0x171746D7: jmp 0x171746db */
L_171746D9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171746D9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171746DB:
    edi = POP32_VAL(esp); /* 0x171746DB: pop edi */
    ebx = POP32_VAL(esp); /* 0x171746DC: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171746DD: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171746DE: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171746E6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171746E6u);

L_171746E6:
    edi = edi; /* 0x171746E6: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171746E8: push ebp */
    ebp = esp; /* 0x171746E9: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x171746EB: push ecx */
    PUSH32(esp, ebx); /* 0x171746EC: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x171746ED: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x171746F0: push edi */
    edi = ecx; /* 0x171746F1: mov edi, ecx */
    /* cmp ebx, MEM32(edi + 0x4) */ /* 0x171746F3: cmp ebx, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(edi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_17174781; /* 0x171746F6: jae 0x17174781 */
L_171746FC:
    eax = (int32_t)(int8_t)MEM8(ebx); /* 0x171746FC: movsx eax, byte ptr [ebx] */
    PUSH32(esp, eax); /* 0x171746FF: push eax */
    RECOMP_CALL(sub_1721B2E4); /* 0x17174700: call 0x1721b2e4 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17174705: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x17174707: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17174781; /* 0x17174708: je 0x17174781 */
L_1717470A:
    PUSH32(esp, esi); /* 0x1717470A: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1717470B: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebx; /* 0x1717470D: mov eax, ebx */
    /* cmp eax, MEM32(edi + 0x4) */ /* 0x1717470F: cmp eax, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = esi; /* 0x17174712: mov dword ptr [ebp - 4], esi */
    if (CMP_AE(_flag_a, _flag_b)) goto L_17174751; /* 0x17174715: jae 0x17174751 */
L_17174717:
    eax = (int32_t)(int8_t)MEM8(ebx); /* 0x17174717: movsx eax, byte ptr [ebx] */
    PUSH32(esp, eax); /* 0x1717471A: push eax */
    RECOMP_CALL(sub_1721B2E4); /* 0x1717471B: call 0x1721b2e4 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17174720: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x17174722: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17174751; /* 0x17174723: je 0x17174751 */
L_17174725:
    /* cmp esi, 0x19999999u */ /* 0x17174725: cmp esi, 0x19999999 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x19999999u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_17174734; /* 0x1717472B: jbe 0x17174734 */
L_1717472D:
    MEM32(ebp + (-0x4)) = 1; /* 0x1717472D: mov dword ptr [ebp - 4], 1 */
L_17174734:
    ecx = (int32_t)(int8_t)MEM8(ebx); /* 0x17174734: movsx ecx, byte ptr [ebx] */
    eax = esi + esi * 4; /* 0x17174737: lea eax, [esi + esi*4] */
    if (1u) _cf = (((eax) >> 31) & 1u); /* 0x1717473A: shl eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax << 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 1u; /* 0x1717473A: shl eax, 1 */
    esi = ecx + eax + (-0x30); /* 0x1717473C: lea esi, [ecx + eax - 0x30] */
    /* cmp esi, eax */ /* 0x17174740: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1717474B; /* 0x17174742: jae 0x1717474b */
L_17174744:
    MEM32(ebp + (-0x4)) = 1; /* 0x17174744: mov dword ptr [ebp - 4], 1 */
L_1717474B:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1717474B: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, MEM32(edi + 0x4) */ /* 0x1717474C: cmp ebx, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(edi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17174717; /* 0x1717474F: jb 0x17174717 */
L_17174751:
    eax = MEM32(ebp + 0xC); /* 0x17174751: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x17174754: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1717475A; /* 0x17174756: je 0x1717475a */
L_17174758:
    MEM32(eax) = esi; /* 0x17174758: mov dword ptr [eax], esi */
L_1717475A:
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x1717475A: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = POP32_VAL(esp); /* 0x1717475E: pop esi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1717477A; /* 0x1717475F: je 0x1717477a */
L_17174761:
    PUSH32(esp, 0x17021C78u); /* 0x17174761: push 0x17021c78 */
    PUSH32(esp, 0x3ECu); /* 0x17174766: push 0x3ec */
    eax = edi + 0x8; /* 0x1717476B: lea eax, [edi + 8] */
    PUSH32(esp, eax); /* 0x1717476E: push eax */
    PUSH32(esp, MEM32(edi + 0x30)); /* 0x1717476F: push dword ptr [edi + 0x30] */
    RECOMP_CALL(sub_17174059); /* 0x17174772: call 0x17174059 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x17174777: add esp, 0x10 */
    _flag_k = FK_ADD;
L_1717477A:
    eax = ebx; /* 0x1717477A: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + 0x8); /* 0x1717477C: sub eax, dword ptr [ebp + 8] */
    _flag_k = FK_CMP;
    goto L_17174783; /* 0x1717477F: jmp 0x17174783 */
L_17174781:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17174781: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_17174783:
    edi = POP32_VAL(esp); /* 0x17174783: pop edi */
    ebx = POP32_VAL(esp); /* 0x17174784: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17174785: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x17174786: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1717478E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1717478Eu);

L_1717478E:
    edi = edi; /* 0x1717478E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17174790: push ebp */
    ebp = esp; /* 0x17174791: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x17174793: push ebx */
    ebx = ecx; /* 0x17174794: mov ebx, ecx */
    eax = MEM32(ebx + 0x4); /* 0x17174796: mov eax, dword ptr [ebx + 4] */
    PUSH32(esp, edi); /* 0x17174799: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1717479A: mov edi, dword ptr [ebp + 8] */
    /* cmp edi, eax */ /* 0x1717479D: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_171747A8; /* 0x1717479F: jb 0x171747a8 */
L_171747A1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171747A1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_17174921; /* 0x171747A3: jmp 0x17174921 */
L_171747A8:
    SET_LO8(ecx, MEM8(edi)); /* 0x171747A8: mov cl, byte ptr [edi] */
    /* cmp LO8(ecx), 0x5Cu */ /* 0x171747AA: cmp cl, 0x5c */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x5Cu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    PUSH32(esp, esi); /* 0x171747AD: push esi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_17174911; /* 0x171747AE: jne 0x17174911 */
L_171747B4:
    /* test MEM8(ebx + 0x28), 4 */ /* 0x171747B4: test byte ptr [ebx + 0x28], 4 */
    _flag_a = (uint32_t)(MEM8(ebx + 0x28)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17174911; /* 0x171747B8: jne 0x17174911 */
L_171747BE:
    esi = edi + 0x1; /* 0x171747BE: lea esi, [edi + 1] */
    /* cmp esi, eax */ /* 0x171747C1: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_171747DE; /* 0x171747C3: jb 0x171747de */
L_171747C5:
    PUSH32(esp, 0x17021C9Cu); /* 0x171747C5: push 0x17021c9c */
    PUSH32(esp, 0x3EFu); /* 0x171747CA: push 0x3ef */
    eax = ebx + 0x8; /* 0x171747CF: lea eax, [ebx + 8] */
    PUSH32(esp, eax); /* 0x171747D2: push eax */
    PUSH32(esp, MEM32(ebx + 0x30)); /* 0x171747D3: push dword ptr [ebx + 0x30] */
    RECOMP_CALL(sub_17174059); /* 0x171747D6: call 0x17174059 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x171747DB: add esp, 0x10 */
    _flag_k = FK_ADD;
L_171747DE:
    SET_LO8(ecx, MEM8(esi)); /* 0x171747DE: mov cl, byte ptr [esi] */
    eax = (int32_t)(int8_t)LO8(ecx); /* 0x171747E0: movsx eax, cl */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x61u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x61u; /* 0x171747E3: sub eax, 0x61 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_17174906; /* 0x171747E6: je 0x17174906 */
L_171747EC:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x171747EC: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_171748FA; /* 0x171747ED: je 0x171748fa */
L_171747F3:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 4; /* 0x171747F3: sub eax, 4 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_171748EF; /* 0x171747F6: je 0x171748ef */
L_171747FC:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 8; /* 0x171747FC: sub eax, 8 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_171748E4; /* 0x171747FF: je 0x171748e4 */
L_17174805:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 4; /* 0x17174805: sub eax, 4 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_171748D9; /* 0x17174808: je 0x171748d9 */
L_1717480E:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1717480E: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1717480F: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_171748CE; /* 0x17174810: je 0x171748ce */
L_17174816:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x17174816: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x17174817: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_171748C3; /* 0x17174818: je 0x171748c3 */
L_1717481E:
    /* cmp LO8(ecx), 0x30u */ /* 0x1717481E: cmp cl, 0x30 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_L(_flag_a, _flag_b)) goto L_17174858; /* 0x17174821: jl 0x17174858 */
L_17174823:
    /* cmp LO8(ecx), 0x37u */ /* 0x17174823: cmp cl, 0x37 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x37u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_G(_flag_a, _flag_b)) goto L_17174858; /* 0x17174826: jg 0x17174858 */
L_17174828:
    ebx = MEM32(ebx + 0x4); /* 0x17174828: mov ebx, dword ptr [ebx + 4] */
    eax = esi + 0x3; /* 0x1717482B: lea eax, [esi + 3] */
    /* cmp eax, ebx */ /* 0x1717482E: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_17174834; /* 0x17174830: jae 0x17174834 */
L_17174832:
    ebx = eax; /* 0x17174832: mov ebx, eax */
L_17174834:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x17174834: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1717484A; /* 0x17174836: jmp 0x1717484a */
L_17174838:
    SET_LO8(eax, MEM8(esi)); /* 0x17174838: mov al, byte ptr [esi] */
    /* cmp LO8(eax), 0x30u */ /* 0x1717483A: cmp al, 0x30 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_L(_flag_a, _flag_b)) goto L_1717484E; /* 0x1717483C: jl 0x1717484e */
L_1717483E:
    /* cmp LO8(eax), 0x37u */ /* 0x1717483E: cmp al, 0x37 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x37u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_G(_flag_a, _flag_b)) goto L_1717484E; /* 0x17174840: jg 0x1717484e */
L_17174842:
    eax = (int32_t)(int8_t)LO8(eax); /* 0x17174842: movsx eax, al */
    ecx = eax + ecx * 8 + (-0x30); /* 0x17174845: lea ecx, [eax + ecx*8 - 0x30] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x17174849: inc esi */
    _flag_k = FK_INC;
L_1717484A:
    /* cmp esi, ebx */ /* 0x1717484A: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17174838; /* 0x1717484C: jb 0x17174838 */
L_1717484E:
    eax = MEM32(ebp + 0xC); /* 0x1717484E: mov eax, dword ptr [ebp + 0xc] */
    MEM32(eax) = ecx; /* 0x17174851: mov dword ptr [eax], ecx */
    goto L_1717491C; /* 0x17174853: jmp 0x1717491c */
L_17174858:
    /* cmp LO8(ecx), 0x78u */ /* 0x17174858: cmp cl, 0x78 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x78u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171748BD; /* 0x1717485B: jne 0x171748bd */
L_1717485D:
    edi = esi + 0x1; /* 0x1717485D: lea edi, [esi + 1] */
    /* cmp edi, MEM32(ebx + 0x4) */ /* 0x17174860: cmp edi, dword ptr [ebx + 4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebx + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_171748BA; /* 0x17174863: jae 0x171748ba */
L_17174865:
    eax = (int32_t)(int8_t)MEM8(edi); /* 0x17174865: movsx eax, byte ptr [edi] */
    PUSH32(esp, eax); /* 0x17174868: push eax */
    RECOMP_CALL(sub_1721B40A); /* 0x17174869: call 0x1721b40a */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1717486E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x17174870: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171748BA; /* 0x17174871: je 0x171748ba */
L_17174873:
    esi = edi; /* 0x17174873: mov esi, edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x17174875: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_171748AB; /* 0x17174877: jmp 0x171748ab */
L_17174879:
    eax = (int32_t)(int8_t)MEM8(esi); /* 0x17174879: movsx eax, byte ptr [esi] */
    PUSH32(esp, eax); /* 0x1717487C: push eax */
    RECOMP_CALL(sub_1721B40A); /* 0x1717487D: call 0x1721b40a */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17174882: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x17174884: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171748B0; /* 0x17174885: je 0x171748b0 */
L_17174887:
    SET_LO8(eax, MEM8(esi)); /* 0x17174887: mov al, byte ptr [esi] */
    if (4u) _cf = (((edi) >> 28) & 1u); /* 0x17174889: shl edi, 4 */
    if (4u) { _flag_a = recomp_flags_pack((edi << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 4u; /* 0x17174889: shl edi, 4 */
    /* cmp LO8(eax), 0x61u */ /* 0x1717488C: cmp al, 0x61 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x61u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_L(_flag_a, _flag_b)) goto L_17174899; /* 0x1717488E: jl 0x17174899 */
L_17174890:
    eax = (int32_t)(int8_t)LO8(eax); /* 0x17174890: movsx eax, al */
    edi = edi + eax + (-0x57); /* 0x17174893: lea edi, [edi + eax - 0x57] */
    goto L_171748AA; /* 0x17174897: jmp 0x171748aa */
L_17174899:
    /* cmp LO8(eax), 0x41u */ /* 0x17174899: cmp al, 0x41 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = (int32_t)(int8_t)LO8(eax); /* 0x1717489B: movsx eax, al */
    if (CMP_L(_flag_a, _flag_b)) goto L_171748A6; /* 0x1717489E: jl 0x171748a6 */
L_171748A0:
    edi = edi + eax + (-0x37); /* 0x171748A0: lea edi, [edi + eax - 0x37] */
    goto L_171748AA; /* 0x171748A4: jmp 0x171748aa */
L_171748A6:
    edi = edi + eax + (-0x30); /* 0x171748A6: lea edi, [edi + eax - 0x30] */
L_171748AA:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x171748AA: inc esi */
    _flag_k = FK_INC;
L_171748AB:
    /* cmp esi, MEM32(ebx + 0x4) */ /* 0x171748AB: cmp esi, dword ptr [ebx + 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebx + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17174879; /* 0x171748AE: jb 0x17174879 */
L_171748B0:
    eax = MEM32(ebp + 0xC); /* 0x171748B0: mov eax, dword ptr [ebp + 0xc] */
    MEM32(eax) = edi; /* 0x171748B3: mov dword ptr [eax], edi */
    edi = MEM32(ebp + 0x8); /* 0x171748B5: mov edi, dword ptr [ebp + 8] */
    goto L_1717491C; /* 0x171748B8: jmp 0x1717491c */
L_171748BA:
    edi = MEM32(ebp + 0x8); /* 0x171748BA: mov edi, dword ptr [ebp + 8] */
L_171748BD:
    eax = (int32_t)(int8_t)MEM8(esi); /* 0x171748BD: movsx eax, byte ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x171748C0: inc esi */
    _flag_k = FK_INC;
    goto L_17174917; /* 0x171748C1: jmp 0x17174917 */
L_171748C3:
    eax = MEM32(ebp + 0xC); /* 0x171748C3: mov eax, dword ptr [ebp + 0xc] */
    MEM32(eax) = 0xBu; /* 0x171748C6: mov dword ptr [eax], 0xb */
    goto L_17174903; /* 0x171748CC: jmp 0x17174903 */
L_171748CE:
    eax = MEM32(ebp + 0xC); /* 0x171748CE: mov eax, dword ptr [ebp + 0xc] */
    MEM32(eax) = 9; /* 0x171748D1: mov dword ptr [eax], 9 */
    goto L_17174903; /* 0x171748D7: jmp 0x17174903 */
L_171748D9:
    eax = MEM32(ebp + 0xC); /* 0x171748D9: mov eax, dword ptr [ebp + 0xc] */
    MEM32(eax) = 0xDu; /* 0x171748DC: mov dword ptr [eax], 0xd */
    goto L_17174903; /* 0x171748E2: jmp 0x17174903 */
L_171748E4:
    eax = MEM32(ebp + 0xC); /* 0x171748E4: mov eax, dword ptr [ebp + 0xc] */
    MEM32(eax) = 0xAu; /* 0x171748E7: mov dword ptr [eax], 0xa */
    goto L_17174903; /* 0x171748ED: jmp 0x17174903 */
L_171748EF:
    eax = MEM32(ebp + 0xC); /* 0x171748EF: mov eax, dword ptr [ebp + 0xc] */
    MEM32(eax) = 0xCu; /* 0x171748F2: mov dword ptr [eax], 0xc */
    goto L_17174903; /* 0x171748F8: jmp 0x17174903 */
L_171748FA:
    eax = MEM32(ebp + 0xC); /* 0x171748FA: mov eax, dword ptr [ebp + 0xc] */
    MEM32(eax) = 8; /* 0x171748FD: mov dword ptr [eax], 8 */
L_17174903:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x17174903: inc esi */
    _flag_k = FK_INC;
    goto L_1717491C; /* 0x17174904: jmp 0x1717491c */
L_17174906:
    eax = MEM32(ebp + 0xC); /* 0x17174906: mov eax, dword ptr [ebp + 0xc] */
    MEM32(eax) = 7; /* 0x17174909: mov dword ptr [eax], 7 */
    RECOMP_BACKEDGE();
    goto L_17174903; /* 0x1717490F: jmp 0x17174903 */
L_17174911:
    eax = (int32_t)(int8_t)LO8(ecx); /* 0x17174911: movsx eax, cl */
    esi = edi + 0x1; /* 0x17174914: lea esi, [edi + 1] */
L_17174917:
    ecx = MEM32(ebp + 0xC); /* 0x17174917: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(ecx) = eax; /* 0x1717491A: mov dword ptr [ecx], eax */
L_1717491C:
    eax = esi; /* 0x1717491C: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x1717491E: sub eax, edi */
    _flag_k = FK_CMP;
    esi = POP32_VAL(esp); /* 0x17174920: pop esi */
L_17174921:
    edi = POP32_VAL(esp); /* 0x17174921: pop edi */
    ebx = POP32_VAL(esp); /* 0x17174922: pop ebx */
    ebp = POP32_VAL(esp); /* 0x17174923: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x17174924: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1717492C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1717492Cu);

L_1717492C:
    edi = edi; /* 0x1717492C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1717492E: push ebp */
    ebp = esp; /* 0x1717492F: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x3Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x3Cu; /* 0x17174931: sub esp, 0x3c */
    _flag_k = FK_CMP;
    eax = MEM32(0x1723C894); /* 0x17174934: mov eax, dword ptr [0x1723c894] */
    PUSH32(esp, esi); /* 0x17174939: push esi */
    MEM32(ebp + (-0x4)) = eax; /* 0x1717493A: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0xC); /* 0x1717493D: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x17174940: push edi */
    edi = MEM32(ebp + 0x8); /* 0x17174941: mov edi, dword ptr [ebp + 8] */
    esi = ecx; /* 0x17174944: mov esi, ecx */
    /* test MEM8(esi + 0x28), 2 */ /* 0x17174946: test byte ptr [esi + 0x28], 2 */
    _flag_a = (uint32_t)(MEM8(esi + 0x28)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(ebp + (-0x30)) = edi; /* 0x1717494A: mov dword ptr [ebp - 0x30], edi */
    MEM32(ebp + (-0x2C)) = eax; /* 0x1717494D: mov dword ptr [ebp - 0x2c], eax */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17174959; /* 0x17174950: jne 0x17174959 */
L_17174952:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17174952: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_17174A3C; /* 0x17174954: jmp 0x17174a3c */
L_17174959:
    PUSH32(esp, ebx); /* 0x17174959: push ebx */
    ebx = edi + 0x1; /* 0x1717495A: lea ebx, [edi + 1] */
    /* cmp ebx, MEM32(esi + 0x4) */ /* 0x1717495D: cmp ebx, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(esi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_17174A39; /* 0x17174960: jae 0x17174a39 */
L_17174966:
    eax = (int32_t)(int8_t)MEM8(edi); /* 0x17174966: movsx eax, byte ptr [edi] */
    PUSH32(esp, eax); /* 0x17174969: push eax */
    RECOMP_CALL(sub_1721B350); /* 0x1717496A: call 0x1721b350 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1717496F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x17174971: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17174A39; /* 0x17174972: je 0x17174a39 */
L_17174978:
    eax = (int32_t)(int8_t)MEM8(ebx); /* 0x17174978: movsx eax, byte ptr [ebx] */
    PUSH32(esp, eax); /* 0x1717497B: push eax */
    RECOMP_CALL(sub_1721B350); /* 0x1717497C: call 0x1721b350 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17174981: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x17174983: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17174A39; /* 0x17174984: je 0x17174a39 */
L_1717498A:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 2; /* 0x1717498A: add edi, 2 */
    _flag_k = FK_ADD;
    /* cmp edi, MEM32(esi + 0x4) */ /* 0x1717498D: cmp edi, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_17174A39; /* 0x17174990: jae 0x17174a39 */
L_17174996:
    /* cmp MEM8(edi), 0x2Eu */ /* 0x17174996: cmp byte ptr [edi], 0x2e */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(0x2Eu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17174A39; /* 0x17174999: jne 0x17174a39 */
L_1717499F:
    eax = ebp + (-0x28); /* 0x1717499F: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x171749A2: push eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171749A3: inc edi */
    _flag_k = FK_INC;
    PUSH32(esp, edi); /* 0x171749A4: push edi */
    ecx = esi; /* 0x171749A5: mov ecx, esi */
    RECOMP_CALL(sub_171746E6); /* 0x171749A7: call 0x171746e6 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171749AC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17174A39; /* 0x171749AE: je 0x17174a39 */
L_171749B4:
    ebx = 0xFFu; /* 0x171749B4: mov ebx, 0xff */
    /* cmp MEM32(ebp + (-0x28)), ebx */ /* 0x171749B9: cmp dword ptr [ebp - 0x28], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x28))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_17174A39; /* 0x171749BC: ja 0x17174a39 */
L_171749BE:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x171749BE: add edi, eax */
    _flag_k = FK_ADD;
    /* cmp edi, MEM32(esi + 0x4) */ /* 0x171749C0: cmp edi, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_17174A39; /* 0x171749C3: jae 0x17174a39 */
L_171749C5:
    /* cmp MEM8(edi), 0x2Eu */ /* 0x171749C5: cmp byte ptr [edi], 0x2e */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(0x2Eu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17174A39; /* 0x171749C8: jne 0x17174a39 */
L_171749CA:
    eax = ebp + (-0x28); /* 0x171749CA: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x171749CD: push eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171749CE: inc edi */
    _flag_k = FK_INC;
    PUSH32(esp, edi); /* 0x171749CF: push edi */
    ecx = esi; /* 0x171749D0: mov ecx, esi */
    RECOMP_CALL(sub_171746E6); /* 0x171749D2: call 0x171746e6 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171749D7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171749EF; /* 0x171749D9: jne 0x171749ef */
L_171749DB:
    eax = ebp + (-0x28); /* 0x171749DB: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x171749DE: push eax */
    PUSH32(esp, edi); /* 0x171749DF: push edi */
    ecx = esi; /* 0x171749E0: mov ecx, esi */
    RECOMP_CALL(sub_17173D71); /* 0x171749E2: call 0x17173d71 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171749E7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17174A39; /* 0x171749E9: je 0x17174a39 */
L_171749EB:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x28))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x28)) = MEM32(ebp + (-0x28)) & 0; /* 0x171749EB: and dword ptr [ebp - 0x28], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_171749EF:
    /* cmp MEM32(ebp + (-0x28)), ebx */ /* 0x171749EF: cmp dword ptr [ebp - 0x28], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x28))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_17174A39; /* 0x171749F2: ja 0x17174a39 */
L_171749F4:
    esi = MEM32(ebp + (-0x30)); /* 0x171749F4: mov esi, dword ptr [ebp - 0x30] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x171749F7: add edi, eax */
    _flag_k = FK_ADD;
    ebx = edi; /* 0x171749F9: mov ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - esi; /* 0x171749FB: sub ebx, esi */
    _flag_k = FK_CMP;
    /* cmp ebx, 0x20u */ /* 0x171749FD: cmp ebx, 0x20 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_17174A39; /* 0x17174A00: jae 0x17174a39 */
L_17174A02:
    ecx = ebx; /* 0x17174A02: mov ecx, ebx */
    eax = ecx; /* 0x17174A04: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x17174A06: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x17174A06: shr ecx, 2 */
    edi = ebp + (-0x24); /* 0x17174A09: lea edi, [ebp - 0x24] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x17174A0C: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x17174A0E: mov ecx, eax */
    eax = ebp + (-0x3C); /* 0x17174A10: lea eax, [ebp - 0x3c] */
    PUSH32(esp, eax); /* 0x17174A13: push eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x17174A14: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 1); /* 0x17174A17: push 1 */
    eax = ebp + (-0x24); /* 0x17174A19: lea eax, [ebp - 0x24] */
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x17174A1C: rep movsb byte ptr es:[edi], byte ptr [esi] */
    PUSH32(esp, eax); /* 0x17174A1E: push eax */
    MEM8(ebp + ebx + (-0x24)) = (uint8_t)(0); /* 0x17174A1F: mov byte ptr [ebp + ebx - 0x24], 0 */
    RECOMP_CALL(sub_170DBF33); /* 0x17174A24: call 0x170dbf33 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17174A29: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17174A39; /* 0x17174A2B: jl 0x17174a39 */
L_17174A2D:
    eax = MEM32(ebp + (-0x38)); /* 0x17174A2D: mov eax, dword ptr [ebp - 0x38] */
    ecx = MEM32(ebp + (-0x2C)); /* 0x17174A30: mov ecx, dword ptr [ebp - 0x2c] */
    MEM32(ecx) = eax; /* 0x17174A33: mov dword ptr [ecx], eax */
    eax = ebx; /* 0x17174A35: mov eax, ebx */
    goto L_17174A3B; /* 0x17174A37: jmp 0x17174a3b */
L_17174A39:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17174A39: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_17174A3B:
    ebx = POP32_VAL(esp); /* 0x17174A3B: pop ebx */
L_17174A3C:
    ecx = MEM32(ebp + (-0x4)); /* 0x17174A3C: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x17174A3F: pop edi */
    esi = POP32_VAL(esp); /* 0x17174A40: pop esi */
    RECOMP_CALL(sub_1721B76C); /* 0x17174A41: call 0x1721b76c */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17174A46: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x17174A47: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_17174A4F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17174A4Fu);

L_17174A4F:
    edi = edi; /* 0x17174A4F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17174A51: push ebp */
    ebp = esp; /* 0x17174A52: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x17174A54: push ebx */
    PUSH32(esp, esi); /* 0x17174A55: push esi */
    PUSH32(esp, edi); /* 0x17174A56: push edi */
    edi = MEM32(ebp + 0x8); /* 0x17174A57: mov edi, dword ptr [ebp + 8] */
    ebx = ecx; /* 0x17174A5A: mov ebx, ecx */
    /* cmp edi, MEM32(ebx + 0x4) */ /* 0x17174A5C: cmp edi, dword ptr [ebx + 4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebx + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_17174A89; /* 0x17174A5F: jae 0x17174a89 */
L_17174A61:
    /* cmp MEM8(edi), 0x27u */ /* 0x17174A61: cmp byte ptr [edi], 0x27 */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(0x27u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17174A89; /* 0x17174A64: jne 0x17174a89 */
L_17174A66:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x17174A66: push dword ptr [ebp + 0xc] */
    esi = edi + 0x1; /* 0x17174A69: lea esi, [edi + 1] */
    PUSH32(esp, esi); /* 0x17174A6C: push esi */
    RECOMP_CALL(sub_1717478E); /* 0x17174A6D: call 0x1717478e */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17174A72: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17174A89; /* 0x17174A74: je 0x17174a89 */
L_17174A76:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x17174A76: add esi, eax */
    _flag_k = FK_ADD;
    /* cmp esi, MEM32(ebx + 0x4) */ /* 0x17174A78: cmp esi, dword ptr [ebx + 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebx + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_17174A89; /* 0x17174A7B: jae 0x17174a89 */
L_17174A7D:
    /* cmp MEM8(esi), 0x27u */ /* 0x17174A7D: cmp byte ptr [esi], 0x27 */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0x27u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17174A89; /* 0x17174A80: jne 0x17174a89 */
L_17174A82:
    eax = esi; /* 0x17174A82: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x17174A84: sub eax, edi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17174A86: inc eax */
    _flag_k = FK_INC;
    goto L_17174A8B; /* 0x17174A87: jmp 0x17174a8b */
L_17174A89:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17174A89: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_17174A8B:
    edi = POP32_VAL(esp); /* 0x17174A8B: pop edi */
    esi = POP32_VAL(esp); /* 0x17174A8C: pop esi */
    ebx = POP32_VAL(esp); /* 0x17174A8D: pop ebx */
    ebp = POP32_VAL(esp); /* 0x17174A8E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x17174A8F: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_17174A97(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17174A97u);

L_17174A97:
    edi = edi; /* 0x17174A97: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17174A99: push ebp */
    ebp = esp; /* 0x17174A9A: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x17174A9C: push ecx */
    PUSH32(esp, ecx); /* 0x17174A9D: push ecx */
    PUSH32(esp, ebx); /* 0x17174A9E: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x17174A9F: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x17174AA2: push esi */
    PUSH32(esp, edi); /* 0x17174AA3: push edi */
    edi = ecx; /* 0x17174AA4: mov edi, ecx */
    ecx = MEM32(edi + 0x4); /* 0x17174AA6: mov ecx, dword ptr [edi + 4] */
    /* cmp ebx, ecx */ /* 0x17174AA9: cmp ebx, ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_17174BD8; /* 0x17174AAB: jae 0x17174bd8 */
L_17174AB1:
    SET_LO8(eax, MEM8(ebx)); /* 0x17174AB1: mov al, byte ptr [ebx] */
    /* cmp LO8(eax), 0x22u */ /* 0x17174AB3: cmp al, 0x22 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x22u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17174ABC; /* 0x17174AB5: jne 0x17174abc */
L_17174AB7:
    MEM8(ebp + 0xB) = (uint8_t)(LO8(eax)); /* 0x17174AB7: mov byte ptr [ebp + 0xb], al */
    goto L_17174AD2; /* 0x17174ABA: jmp 0x17174ad2 */
L_17174ABC:
    /* cmp LO8(eax), 0x3Cu */ /* 0x17174ABC: cmp al, 0x3c */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x3Cu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17174BD8; /* 0x17174ABE: jne 0x17174bd8 */
L_17174AC4:
    /* test MEM8(edi + 0x28), 8 */ /* 0x17174AC4: test byte ptr [edi + 0x28], 8 */
    _flag_a = (uint32_t)(MEM8(edi + 0x28)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_17174BD8; /* 0x17174AC8: je 0x17174bd8 */
L_17174ACE:
    MEM8(ebp + 0xB) = (uint8_t)(0x3Eu); /* 0x17174ACE: mov byte ptr [ebp + 0xb], 0x3e */
L_17174AD2:
    esi = ebx + 0x1; /* 0x17174AD2: lea esi, [ebx + 1] */
    /* cmp esi, ecx */ /* 0x17174AD5: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = esi; /* 0x17174AD7: mov dword ptr [ebp - 4], esi */
    if (CMP_AE(_flag_a, _flag_b)) goto L_17174B1C; /* 0x17174ADA: jae 0x17174b1c */
L_17174ADC:
    ecx = esi + 0x1; /* 0x17174ADC: lea ecx, [esi + 1] */
L_17174ADF:
    SET_LO8(eax, MEM8(esi)); /* 0x17174ADF: mov al, byte ptr [esi] */
    /* cmp MEM8(ebp + 0xB), LO8(eax) */ /* 0x17174AE1: cmp byte ptr [ebp + 0xb], al */
    _flag_a = (uint32_t)(MEM8(ebp + 0xB)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17174B1C; /* 0x17174AE4: je 0x17174b1c */
L_17174AE6:
    /* cmp LO8(eax), 0xAu */ /* 0x17174AE6: cmp al, 0xa */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xAu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17174B1C; /* 0x17174AE8: je 0x17174b1c */
L_17174AEA:
    /* cmp LO8(eax), 0x5Cu */ /* 0x17174AEA: cmp al, 0x5c */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x5Cu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17174B15; /* 0x17174AEC: jne 0x17174b15 */
L_17174AEE:
    /* test MEM8(edi + 0x28), 4 */ /* 0x17174AEE: test byte ptr [edi + 0x28], 4 */
    _flag_a = (uint32_t)(MEM8(edi + 0x28)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17174B15; /* 0x17174AF2: jne 0x17174b15 */
L_17174AF4:
    edx = MEM32(edi + 0x4); /* 0x17174AF4: mov edx, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x17174AF7: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x17174AF8: inc ecx */
    _flag_k = FK_INC;
    /* cmp esi, edx */ /* 0x17174AF9: cmp esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_17174B15; /* 0x17174AFB: jae 0x17174b15 */
L_17174AFD:
    SET_LO8(eax, MEM8(esi)); /* 0x17174AFD: mov al, byte ptr [esi] */
    /* cmp LO8(eax), 0xAu */ /* 0x17174AFF: cmp al, 0xa */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xAu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17174B12; /* 0x17174B01: je 0x17174b12 */
L_17174B03:
    /* cmp LO8(eax), 0xDu */ /* 0x17174B03: cmp al, 0xd */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0xDu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17174B15; /* 0x17174B05: jne 0x17174b15 */
L_17174B07:
    /* cmp ecx, edx */ /* 0x17174B07: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_17174B15; /* 0x17174B09: jae 0x17174b15 */
L_17174B0B:
    /* cmp MEM8(ecx), 0xAu */ /* 0x17174B0B: cmp byte ptr [ecx], 0xa */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0xAu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17174B15; /* 0x17174B0E: jne 0x17174b15 */
L_17174B10:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x17174B10: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x17174B11: inc ecx */
    _flag_k = FK_INC;
L_17174B12:
    _flag_a = (uint32_t)(MEM32(edi + 0x1C)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x1C) = MEM32(edi + 0x1C) + 1; /* 0x17174B12: inc dword ptr [edi + 0x1c] */
    _flag_k = FK_INC;
L_17174B15:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x17174B15: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x17174B16: inc ecx */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(edi + 0x4) */ /* 0x17174B17: cmp esi, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17174ADF; /* 0x17174B1A: jb 0x17174adf */
L_17174B1C:
    eax = MEM32(edi + 0x4); /* 0x17174B1C: mov eax, dword ptr [edi + 4] */
    /* cmp esi, eax */ /* 0x17174B1F: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_17174B31; /* 0x17174B21: jb 0x17174b31 */
L_17174B23:
    PUSH32(esp, 0x17021CE8u); /* 0x17174B23: push 0x17021ce8 */
    esi = eax; /* 0x17174B28: mov esi, eax */
    PUSH32(esp, 0x3EEu); /* 0x17174B2A: push 0x3ee */
    goto L_17174B40; /* 0x17174B2F: jmp 0x17174b40 */
L_17174B31:
    /* cmp MEM8(esi), 0xAu */ /* 0x17174B31: cmp byte ptr [esi], 0xa */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0xAu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17174B4F; /* 0x17174B34: jne 0x17174b4f */
L_17174B36:
    PUSH32(esp, 0x17021CC4u); /* 0x17174B36: push 0x17021cc4 */
    PUSH32(esp, 0x3EDu); /* 0x17174B3B: push 0x3ed */
L_17174B40:
    eax = edi + 0x8; /* 0x17174B40: lea eax, [edi + 8] */
    PUSH32(esp, eax); /* 0x17174B43: push eax */
    PUSH32(esp, MEM32(edi + 0x30)); /* 0x17174B44: push dword ptr [edi + 0x30] */
    RECOMP_CALL(sub_17174059); /* 0x17174B47: call 0x17174059 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x17174B4C: add esp, 0x10 */
    _flag_k = FK_ADD;
L_17174B4F:
    ecx = MEM32(edi + 0x2C); /* 0x17174B4F: mov ecx, dword ptr [edi + 0x2c] */
    MEM32(ebp + 0x8) = esi; /* 0x17174B52: mov dword ptr [ebp + 8], esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ebx; /* 0x17174B55: sub esi, ebx */
    _flag_k = FK_CMP;
    PUSH32(esp, 1); /* 0x17174B57: push 1 */
    PUSH32(esp, esi); /* 0x17174B59: push esi */
    MEM32(ebp + (-0x8)) = esi; /* 0x17174B5A: mov dword ptr [ebp - 8], esi */
    RECOMP_CALL(sub_1721BE6F); /* 0x17174B5D: call 0x1721be6f */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x17174B62: mov ebx, eax */
    /* test ebx, ebx */ /* 0x17174B64: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17174BD8; /* 0x17174B66: je 0x17174bd8 */
L_17174B68:
    eax = MEM32(ebp + 0xC); /* 0x17174B68: mov eax, dword ptr [ebp + 0xc] */
    esi = MEM32(ebp + (-0x4)); /* 0x17174B6B: mov esi, dword ptr [ebp - 4] */
    MEM32(eax) = ebx; /* 0x17174B6E: mov dword ptr [eax], ebx */
L_17174B70:
    eax = esi + 0x1; /* 0x17174B70: lea eax, [esi + 1] */
    /* cmp eax, MEM32(ebp + 0x8) */ /* 0x17174B73: cmp eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_17174BB4; /* 0x17174B76: jae 0x17174bb4 */
L_17174B78:
    edx = eax; /* 0x17174B78: mov edx, eax */
    eax = esi + 0x2; /* 0x17174B7A: lea eax, [esi + 2] */
L_17174B7D:
    /* cmp MEM8(esi), 0x5Cu */ /* 0x17174B7D: cmp byte ptr [esi], 0x5c */
    _flag_a = (uint32_t)(MEM8(esi)) << 24; _flag_b = (uint32_t)(0x5Cu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17174BB4; /* 0x17174B80: jne 0x17174bb4 */
L_17174B82:
    /* test MEM8(edi + 0x28), 4 */ /* 0x17174B82: test byte ptr [edi + 0x28], 4 */
    _flag_a = (uint32_t)(MEM8(edi + 0x28)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17174BB4; /* 0x17174B86: jne 0x17174bb4 */
L_17174B88:
    SET_LO8(ecx, MEM8(edx)); /* 0x17174B88: mov cl, byte ptr [edx] */
    /* cmp LO8(ecx), 0xAu */ /* 0x17174B8A: cmp cl, 0xa */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0xAu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17174B97; /* 0x17174B8D: jne 0x17174b97 */
L_17174B8F:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x17174B8F: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x17174B90: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17174B91: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17174B92: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x17174B93: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x17174B94: inc edx */
    _flag_k = FK_INC;
    goto L_17174BAF; /* 0x17174B95: jmp 0x17174baf */
L_17174B97:
    /* cmp LO8(ecx), 0xDu */ /* 0x17174B97: cmp cl, 0xd */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0xDu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17174BB4; /* 0x17174B9A: jne 0x17174bb4 */
L_17174B9C:
    /* cmp eax, MEM32(ebp + 0x8) */ /* 0x17174B9C: cmp eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_17174BB4; /* 0x17174B9F: jae 0x17174bb4 */
L_17174BA1:
    /* cmp MEM8(eax), 0xAu */ /* 0x17174BA1: cmp byte ptr [eax], 0xa */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0xAu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17174BB4; /* 0x17174BA4: jne 0x17174bb4 */
L_17174BA6:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 3; /* 0x17174BA6: add esi, 3 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 3; /* 0x17174BA9: add eax, 3 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 3; /* 0x17174BAC: add edx, 3 */
    _flag_k = FK_ADD;
L_17174BAF:
    /* cmp edx, MEM32(ebp + 0x8) */ /* 0x17174BAF: cmp edx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17174B7D; /* 0x17174BB2: jb 0x17174b7d */
L_17174BB4:
    /* cmp esi, MEM32(ebp + 0x8) */ /* 0x17174BB4: cmp esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_17174BCF; /* 0x17174BB7: jae 0x17174bcf */
L_17174BB9:
    eax = ebp + 0xC; /* 0x17174BB9: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x17174BBC: push eax */
    PUSH32(esp, esi); /* 0x17174BBD: push esi */
    ecx = edi; /* 0x17174BBE: mov ecx, edi */
    RECOMP_CALL(sub_1717478E); /* 0x17174BC0: call 0x1717478e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x17174BC5: add esi, eax */
    _flag_k = FK_ADD;
    SET_LO8(eax, MEM8(ebp + 0xC)); /* 0x17174BC7: mov al, byte ptr [ebp + 0xc] */
    MEM8(ebx) = (uint8_t)(LO8(eax)); /* 0x17174BCA: mov byte ptr [ebx], al */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x17174BCC: inc ebx */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_17174B70; /* 0x17174BCD: jmp 0x17174b70 */
L_17174BCF:
    eax = MEM32(ebp + (-0x8)); /* 0x17174BCF: mov eax, dword ptr [ebp - 8] */
    MEM8(ebx) = (uint8_t)(0); /* 0x17174BD2: mov byte ptr [ebx], 0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17174BD5: inc eax */
    _flag_k = FK_INC;
    goto L_17174BDA; /* 0x17174BD6: jmp 0x17174bda */
L_17174BD8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17174BD8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_17174BDA:
    edi = POP32_VAL(esp); /* 0x17174BDA: pop edi */
    esi = POP32_VAL(esp); /* 0x17174BDB: pop esi */
    ebx = POP32_VAL(esp); /* 0x17174BDC: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17174BDD: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x17174BDE: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_17174BE6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17174BE6u);

L_17174BE6:
    edi = edi; /* 0x17174BE6: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17174BE8: push ebp */
    ebp = esp; /* 0x17174BE9: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x17174BEB: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x17174BEE: push ebx */
    PUSH32(esp, esi); /* 0x17174BEF: push esi */
    esi = ecx; /* 0x17174BF0: mov esi, ecx */
    MEM32(esi + 0x28) = eax; /* 0x17174BF2: mov dword ptr [esi + 0x28], eax */
    eax = MEM32(esi + 0x18); /* 0x17174BF5: mov eax, dword ptr [esi + 0x18] */
    PUSH32(esp, edi); /* 0x17174BF8: push edi */
    edi = MEM32(ebp + 0xC); /* 0x17174BF9: mov edi, dword ptr [ebp + 0xc] */
    MEM32(edi + 0x10) = eax; /* 0x17174BFC: mov dword ptr [edi + 0x10], eax */
    eax = MEM32(esi + 0x1C); /* 0x17174BFF: mov eax, dword ptr [esi + 0x1c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x17174C02: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x14) = eax; /* 0x17174C04: mov dword ptr [edi + 0x14], eax */
    RECOMP_CALL(sub_1717448C); /* 0x17174C07: call 0x1717448c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17174C0C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17174C1B; /* 0x17174C0E: je 0x17174c1b */
L_17174C10:
    MEM32(edi) = 0xCu; /* 0x17174C10: mov dword ptr [edi], 0xc */
    goto L_17174D96; /* 0x17174C16: jmp 0x17174d96 */
L_17174C1B:
    eax = MEM32(esi + 0x18); /* 0x17174C1B: mov eax, dword ptr [esi + 0x18] */
    MEM32(edi + 0x10) = eax; /* 0x17174C1E: mov dword ptr [edi + 0x10], eax */
    eax = MEM32(esi + 0x1C); /* 0x17174C21: mov eax, dword ptr [esi + 0x1c] */
    MEM32(edi + 0x14) = eax; /* 0x17174C24: mov dword ptr [edi + 0x14], eax */
    eax = MEM32(esi); /* 0x17174C27: mov eax, dword ptr [esi] */
    /* cmp eax, MEM32(esi + 0x4) */ /* 0x17174C29: cmp eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_17174C39; /* 0x17174C2C: jb 0x17174c39 */
L_17174C2E:
    MEM32(edi) = 0xDu; /* 0x17174C2E: mov dword ptr [edi], 0xd */
    goto L_17174D96; /* 0x17174C34: jmp 0x17174d96 */
L_17174C39:
    SET_LO8(ecx, MEM8(eax)); /* 0x17174C39: mov cl, byte ptr [eax] */
    /* cmp LO8(ecx), 0x30u */ /* 0x17174C3B: cmp cl, 0x30 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_L(_flag_a, _flag_b)) goto L_17174C45; /* 0x17174C3E: jl 0x17174c45 */
L_17174C40:
    /* cmp LO8(ecx), 0x39u */ /* 0x17174C40: cmp cl, 0x39 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x39u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_LE(_flag_a, _flag_b)) goto L_17174C4A; /* 0x17174C43: jle 0x17174c4a */
L_17174C45:
    /* cmp LO8(ecx), 0x2Eu */ /* 0x17174C45: cmp cl, 0x2e */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x2Eu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17174CC6; /* 0x17174C48: jne 0x17174cc6 */
L_17174C4A:
    ecx = edi + 0x8; /* 0x17174C4A: lea ecx, [edi + 8] */
    PUSH32(esp, ecx); /* 0x17174C4D: push ecx */
    PUSH32(esp, eax); /* 0x17174C4E: push eax */
    ecx = esi; /* 0x17174C4F: mov ecx, esi */
    RECOMP_CALL(sub_17173BE1); /* 0x17174C51: call 0x17173be1 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x17174C56: mov ebx, eax */
    /* test ebx, ebx */ /* 0x17174C58: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi; /* 0x17174C5A: mov ecx, esi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17174C76; /* 0x17174C5C: je 0x17174c76 */
L_17174C5E:
    MEM32(edi) = 5; /* 0x17174C5E: mov dword ptr [edi], 5 */
    eax = MEM32(esi); /* 0x17174C64: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x17174C66: push edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x17174C67: add eax, ebx */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x17174C69: push eax */
    RECOMP_CALL(sub_17173F0D); /* 0x17174C6A: call 0x17173f0d */
    RECOMP_FLAGS_IN();
L_17174C6F:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x17174C6F: add ebx, eax */
    _flag_k = FK_ADD;
    goto L_17174D96; /* 0x17174C71: jmp 0x17174d96 */
L_17174C76:
    eax = edi + 0x8; /* 0x17174C76: lea eax, [edi + 8] */
    PUSH32(esp, eax); /* 0x17174C79: push eax */
    PUSH32(esp, MEM32(esi)); /* 0x17174C7A: push dword ptr [esi] */
    RECOMP_CALL(sub_171745BA); /* 0x17174C7C: call 0x171745ba */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x17174C81: mov ebx, eax */
    /* test ebx, ebx */ /* 0x17174C83: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi; /* 0x17174C85: mov ecx, esi */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17174CB3; /* 0x17174C87: jne 0x17174cb3 */
L_17174C89:
    eax = edi + 0x8; /* 0x17174C89: lea eax, [edi + 8] */
    PUSH32(esp, eax); /* 0x17174C8C: push eax */
    PUSH32(esp, MEM32(esi)); /* 0x17174C8D: push dword ptr [esi] */
    RECOMP_CALL(sub_17174663); /* 0x17174C8F: call 0x17174663 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x17174C94: mov ebx, eax */
    /* test ebx, ebx */ /* 0x17174C96: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi; /* 0x17174C98: mov ecx, esi */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17174CB3; /* 0x17174C9A: jne 0x17174cb3 */
L_17174C9C:
    eax = edi + 0x8; /* 0x17174C9C: lea eax, [edi + 8] */
    PUSH32(esp, eax); /* 0x17174C9F: push eax */
    PUSH32(esp, MEM32(esi)); /* 0x17174CA0: push dword ptr [esi] */
    RECOMP_CALL(sub_171746E6); /* 0x17174CA2: call 0x171746e6 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x17174CA7: mov ebx, eax */
    /* test ebx, ebx */ /* 0x17174CA9: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17174D81; /* 0x17174CAB: je 0x17174d81 */
L_17174CB1:
    ecx = esi; /* 0x17174CB1: mov ecx, esi */
L_17174CB3:
    MEM32(edi) = 2; /* 0x17174CB3: mov dword ptr [edi], 2 */
    eax = MEM32(esi); /* 0x17174CB9: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x17174CBB: add eax, ebx */
    _flag_k = FK_ADD;
    PUSH32(esp, edi); /* 0x17174CBD: push edi */
    PUSH32(esp, eax); /* 0x17174CBE: push eax */
    RECOMP_CALL(sub_17173F5C); /* 0x17174CBF: call 0x17173f5c */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_17174C6F; /* 0x17174CC4: jmp 0x17174c6f */
L_17174CC6:
    /* cmp LO8(ecx), 0x27u */ /* 0x17174CC6: cmp cl, 0x27 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x27u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17174CEC; /* 0x17174CC9: jne 0x17174cec */
L_17174CCB:
    ecx = edi + 0x8; /* 0x17174CCB: lea ecx, [edi + 8] */
    PUSH32(esp, ecx); /* 0x17174CCE: push ecx */
    PUSH32(esp, eax); /* 0x17174CCF: push eax */
    ecx = esi; /* 0x17174CD0: mov ecx, esi */
    RECOMP_CALL(sub_17174A4F); /* 0x17174CD2: call 0x17174a4f */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x17174CD7: mov ebx, eax */
    /* test ebx, ebx */ /* 0x17174CD9: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17174D81; /* 0x17174CDB: je 0x17174d81 */
L_17174CE1:
    MEM32(edi) = 2; /* 0x17174CE1: mov dword ptr [edi], 2 */
    goto L_17174D96; /* 0x17174CE7: jmp 0x17174d96 */
L_17174CEC:
    /* cmp LO8(ecx), 0x22u */ /* 0x17174CEC: cmp cl, 0x22 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x22u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17174D0E; /* 0x17174CEF: jne 0x17174d0e */
L_17174CF1:
    ecx = edi + 0x8; /* 0x17174CF1: lea ecx, [edi + 8] */
    PUSH32(esp, ecx); /* 0x17174CF4: push ecx */
    PUSH32(esp, eax); /* 0x17174CF5: push eax */
    ecx = esi; /* 0x17174CF6: mov ecx, esi */
    RECOMP_CALL(sub_17174A97); /* 0x17174CF8: call 0x17174a97 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x17174CFD: mov ebx, eax */
    /* test ebx, ebx */ /* 0x17174CFF: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17174D81; /* 0x17174D01: je 0x17174d81 */
L_17174D03:
    MEM32(edi) = 0xAu; /* 0x17174D03: mov dword ptr [edi], 0xa */
    goto L_17174D96; /* 0x17174D09: jmp 0x17174d96 */
L_17174D0E:
    /* test MEM8(esi + 0x28), 4 */ /* 0x17174D0E: test byte ptr [esi + 0x28], 4 */
    _flag_a = (uint32_t)(MEM8(esi + 0x28)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_17174D33; /* 0x17174D12: je 0x17174d33 */
L_17174D14:
    /* cmp LO8(ecx), 0x3Cu */ /* 0x17174D14: cmp cl, 0x3c */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x3Cu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17174D33; /* 0x17174D17: jne 0x17174d33 */
L_17174D19:
    ecx = edi + 0x8; /* 0x17174D19: lea ecx, [edi + 8] */
    PUSH32(esp, ecx); /* 0x17174D1C: push ecx */
    PUSH32(esp, eax); /* 0x17174D1D: push eax */
    ecx = esi; /* 0x17174D1E: mov ecx, esi */
    RECOMP_CALL(sub_17174A97); /* 0x17174D20: call 0x17174a97 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x17174D25: mov ebx, eax */
    /* test ebx, ebx */ /* 0x17174D27: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17174D81; /* 0x17174D29: je 0x17174d81 */
L_17174D2B:
    MEM32(edi) = 0xBu; /* 0x17174D2B: mov dword ptr [edi], 0xb */
    goto L_17174D96; /* 0x17174D31: jmp 0x17174d96 */
L_17174D33:
    eax = (int32_t)(int8_t)LO8(ecx); /* 0x17174D33: movsx eax, cl */
    PUSH32(esp, eax); /* 0x17174D36: push eax */
    RECOMP_CALL(sub_1721B350); /* 0x17174D37: call 0x1721b350 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17174D3C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x17174D3E: pop ecx */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17174D48; /* 0x17174D3F: jne 0x17174d48 */
L_17174D41:
    eax = MEM32(esi); /* 0x17174D41: mov eax, dword ptr [esi] */
    /* cmp MEM8(eax), 0x5Fu */ /* 0x17174D43: cmp byte ptr [eax], 0x5f */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0x5Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17174D81; /* 0x17174D46: jne 0x17174d81 */
L_17174D48:
    /* test MEM8(esi + 0x28), 2 */ /* 0x17174D48: test byte ptr [esi + 0x28], 2 */
    _flag_a = (uint32_t)(MEM8(esi + 0x28)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_17174D66; /* 0x17174D4C: je 0x17174d66 */
L_17174D4E:
    eax = edi + 0x8; /* 0x17174D4E: lea eax, [edi + 8] */
    PUSH32(esp, eax); /* 0x17174D51: push eax */
    PUSH32(esp, MEM32(esi)); /* 0x17174D52: push dword ptr [esi] */
    ecx = esi; /* 0x17174D54: mov ecx, esi */
    RECOMP_CALL(sub_1717492C); /* 0x17174D56: call 0x1717492c */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x17174D5B: mov ebx, eax */
    /* test ebx, ebx */ /* 0x17174D5D: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17174D66; /* 0x17174D5F: je 0x17174d66 */
L_17174D61:
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0);
    MEM32(edi) = MEM32(edi) & 0; /* 0x17174D61: and dword ptr [edi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_17174D96; /* 0x17174D64: jmp 0x17174d96 */
L_17174D66:
    eax = edi + 0x8; /* 0x17174D66: lea eax, [edi + 8] */
    PUSH32(esp, eax); /* 0x17174D69: push eax */
    PUSH32(esp, MEM32(esi)); /* 0x17174D6A: push dword ptr [esi] */
    ecx = esi; /* 0x17174D6C: mov ecx, esi */
    RECOMP_CALL(sub_17173D71); /* 0x17174D6E: call 0x17173d71 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x17174D73: mov ebx, eax */
    /* test ebx, ebx */ /* 0x17174D75: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17174D81; /* 0x17174D77: je 0x17174d81 */
L_17174D79:
    MEM32(edi) = 9; /* 0x17174D79: mov dword ptr [edi], 9 */
    goto L_17174D96; /* 0x17174D7F: jmp 0x17174d96 */
L_17174D81:
    eax = edi + 0x8; /* 0x17174D81: lea eax, [edi + 8] */
    PUSH32(esp, eax); /* 0x17174D84: push eax */
    PUSH32(esp, MEM32(esi)); /* 0x17174D85: push dword ptr [esi] */
    ecx = esi; /* 0x17174D87: mov ecx, esi */
    RECOMP_CALL(sub_17173DFA); /* 0x17174D89: call 0x17173dfa */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x17174D8E: mov ebx, eax */
    MEM32(edi) = 1; /* 0x17174D90: mov dword ptr [edi], 1 */
L_17174D96:
    eax = MEM32(esi); /* 0x17174D96: mov eax, dword ptr [esi] */
    MEM32(edi + 0x18) = eax; /* 0x17174D98: mov dword ptr [edi + 0x18], eax */
    MEM32(edi + 0x1C) = ebx; /* 0x17174D9B: mov dword ptr [edi + 0x1c], ebx */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi) = MEM32(esi) + ebx; /* 0x17174D9E: add dword ptr [esi], ebx */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x17174DA0: pop edi */
    esi = POP32_VAL(esp); /* 0x17174DA1: pop esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17174DA2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x17174DA4: pop ebx */
    ebp = POP32_VAL(esp); /* 0x17174DA5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x17174DA6: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_17174DAE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17174DAEu);

L_17174DAE:
    edi = edi; /* 0x17174DAE: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17174DB0: push ebp */
    ebp = esp; /* 0x17174DB1: mov ebp, esp */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x17174DB3: fld dword ptr [ebp + 8] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x90); /* 0x17174DB6: fmul dword ptr [ecx + 0x90] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x17174DBC: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(0x17001430)); /* 0x17174DBF: fld dword ptr [0x17001430] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x17174DC5: fld dword ptr [ebp + 0xc] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x17174DC8: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17174DCA: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x17174DCC: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_17174DDC; /* 0x17174DCF: jnp 0x17174ddc */
L_17174DD1:
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x17174DD1: fld dword ptr [ebp + 0xc] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x90); /* 0x17174DD4: fmul dword ptr [ecx + 0x90] */
    goto L_17174DE2; /* 0x17174DDA: jmp 0x17174de2 */
L_17174DDC:
    fp_push(*(float*)&MEM32(ecx + 0x9C)); /* 0x17174DDC: fld dword ptr [ecx + 0x9c] */
L_17174DE2:
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x17174DE2: fld dword ptr [ebp + 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x17174DE5: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17174DE7: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x17174DE9: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_17174E28; /* 0x17174DEC: je 0x17174e28 */
L_17174DEE:
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + 0x8)); /* 0x17174DEE: fcom dword ptr [ebp + 8] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17174DF1: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x17174DF3: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_17174E28; /* 0x17174DF6: jnp 0x17174e28 */
L_17174DF8:
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x17174DF8: fld dword ptr [ebp + 8] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(0x17001430)); /* 0x17174DFB: fcomp dword ptr [0x17001430] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17174E01: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x17174E03: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_17174E28; /* 0x17174E06: jnp 0x17174e28 */
L_17174E08:
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(0x17001430)); /* 0x17174E08: fcom dword ptr [0x17001430] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17174E0E: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x17174E10: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_17174E28; /* 0x17174E13: jnp 0x17174e28 */
L_17174E15:
    eax = MEM32(ebp + 0x8); /* 0x17174E15: mov eax, dword ptr [ebp + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x9C) = _v; } /* 0x17174E18: fstp dword ptr [ecx + 0x9c] */
    MEM32(ecx + 0x98) = eax; /* 0x17174E1E: mov dword ptr [ecx + 0x98], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17174E24: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_17174E2F; /* 0x17174E26: jmp 0x17174e2f */
L_17174E28:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17174E28: fstp st(0) */
    eax = 0x8876086Cu; /* 0x17174E2A: mov eax, 0x8876086c */
L_17174E2F:
    ebp = POP32_VAL(esp); /* 0x17174E2F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x17174E30: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_17174E38(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17174E38u);

L_17174E38:
    edi = edi; /* 0x17174E38: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17174E3A: push ebp */
    ebp = esp; /* 0x17174E3B: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x17174E3D: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0xC); /* 0x17174E40: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(eax + 0x50) = ecx; /* 0x17174E43: mov dword ptr [eax + 0x50], ecx */
    ecx = MEM32(ebp + 0x14); /* 0x17174E46: mov ecx, dword ptr [ebp + 0x14] */
    MEM32(eax + 0x6C) = ecx; /* 0x17174E49: mov dword ptr [eax + 0x6c], ecx */
    ecx = MEM32(ebp + 0x10); /* 0x17174E4C: mov ecx, dword ptr [ebp + 0x10] */
    MEM32(eax + 0x54) = ecx; /* 0x17174E4F: mov dword ptr [eax + 0x54], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17174E52: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x17174E54: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x17174E55: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_17174E5D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17174E5Du);

L_17174E5D:
    eax = ecx; /* 0x17174E5D: mov eax, ecx */
    SET_LO8(ecx, MEM8(eax + 0x120)); /* 0x17174E5F: mov cl, byte ptr [eax + 0x120] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x17174E65: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_17174E76; /* 0x17174E67: je 0x17174e76 */
L_17174E69:
    /* cmp MEM8(eax + 0x121), 0 */ /* 0x17174E69: cmp byte ptr [eax + 0x121], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0x121)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17174E89; /* 0x17174E70: je 0x17174e89 */
L_17174E72:
    /* test LO8(ecx), LO8(ecx) */ /* 0x17174E72: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17174E89; /* 0x17174E74: jne 0x17174e89 */
L_17174E76:
    ecx = MEM32(eax + 0x4); /* 0x17174E76: mov ecx, dword ptr [eax + 4] */
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x17174E79: push dword ptr [eax + 0xc] */
    edx = MEM32(ecx); /* 0x17174E7C: mov edx, dword ptr [ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x74u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x74u; /* 0x17174E7E: add eax, 0x74 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x17174E81: push eax */
    RECOMP_ICALL(MEM32(edx + 0x20)); /* 0x17174E82: call dword ptr [edx + 0x20] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17174E85: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17174E8B; /* 0x17174E87: jl 0x17174e8b */
L_17174E89:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17174E89: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_17174E8B:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x17174E8B: ret  */
    RECOMP_REGS_OUT();
}

void sub_17174E91(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17174E91u);

L_17174E91:
    edi = edi; /* 0x17174E91: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17174E93: push ebp */
    ebp = esp; /* 0x17174E94: mov ebp, esp */
    PUSH32(esp, esi); /* 0x17174E96: push esi */
    esi = ecx; /* 0x17174E97: mov esi, ecx */
    RECOMP_CALL(sub_171820D2); /* 0x17174E99: call 0x171820d2 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x17174E9E: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_17174EAB; /* 0x17174EA2: je 0x17174eab */
L_17174EA4:
    PUSH32(esp, esi); /* 0x17174EA4: push esi */
    RECOMP_CALL(sub_1721B010); /* 0x17174EA5: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x17174EAA: pop ecx */
L_17174EAB:
    eax = esi; /* 0x17174EAB: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x17174EAD: pop esi */
    ebp = POP32_VAL(esp); /* 0x17174EAE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x17174EAF: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_17174FBB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17174FBBu);

L_17174FBB:
    edi = edi; /* 0x17174FBB: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17174FBD: push ebp */
    ebp = esp; /* 0x17174FBE: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x17174FC0: push ecx */
    PUSH32(esp, ebx); /* 0x17174FC1: push ebx */
    PUSH32(esp, esi); /* 0x17174FC2: push esi */
    esi = MEM32(ebp + 0x8); /* 0x17174FC3: mov esi, dword ptr [ebp + 8] */
    eax = esi + esi * 2; /* 0x17174FC6: lea eax, [esi + esi*2] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x17174FC9: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x17174FC9: shl eax, 2 */
    PUSH32(esp, eax); /* 0x17174FCC: push eax */
    ebx = ecx; /* 0x17174FCD: mov ebx, ecx */
    RECOMP_CALL(sub_1721B01C); /* 0x17174FCF: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17174FD4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x17174FD6: pop ecx */
    MEM32(ebp + (-0x4)) = eax; /* 0x17174FD7: mov dword ptr [ebp - 4], eax */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17174FE3; /* 0x17174FDA: jne 0x17174fe3 */
L_17174FDC:
    eax = 0x8007000Eu; /* 0x17174FDC: mov eax, 0x8007000e */
    goto L_1717502D; /* 0x17174FE1: jmp 0x1717502d */
L_17174FE3:
    /* cmp MEM32(ebx), 0 */ /* 0x17174FE3: cmp dword ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17175023; /* 0x17174FE6: je 0x17175023 */
L_17174FE8:
    eax = MEM32(ebx + 0x4); /* 0x17174FE8: mov eax, dword ptr [ebx + 4] */
    /* test eax, eax */ /* 0x17174FEB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17175016; /* 0x17174FED: je 0x17175016 */
L_17174FEF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x17174FEF: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x17174FF1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17175016; /* 0x17174FF3: jbe 0x17175016 */
L_17174FF5:
    PUSH32(esp, edi); /* 0x17174FF5: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17174FF6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_17174FF8:
    /* cmp ecx, esi */ /* 0x17174FF8: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_17175015; /* 0x17174FFA: jae 0x17175015 */
L_17174FFC:
    esi = MEM32(ebx); /* 0x17174FFC: mov esi, dword ptr [ebx] */
    edx = MEM32(ebp + (-0x4)); /* 0x17174FFE: mov edx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x17175001: add esi, eax */
    _flag_k = FK_ADD;
    edi = eax + edx; /* 0x17175003: lea edi, [eax + edx] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17175006: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17175007: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17175008: movsd dword ptr es:[edi], dword ptr [esi] */
    esi = MEM32(ebp + 0x8); /* 0x17175009: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1717500C: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x1717500D: add eax, 0xc */
    _flag_k = FK_ADD;
    /* cmp ecx, MEM32(ebx + 0x4) */ /* 0x17175010: cmp ecx, dword ptr [ebx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebx + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17174FF8; /* 0x17175013: jb 0x17174ff8 */
L_17175015:
    edi = POP32_VAL(esp); /* 0x17175015: pop edi */
L_17175016:
    eax = MEM32(ebx); /* 0x17175016: mov eax, dword ptr [ebx] */
    /* test eax, eax */ /* 0x17175018: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17175023; /* 0x1717501A: je 0x17175023 */
L_1717501C:
    PUSH32(esp, eax); /* 0x1717501C: push eax */
    RECOMP_CALL(sub_1721B010); /* 0x1717501D: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x17175022: pop ecx */
L_17175023:
    eax = MEM32(ebp + (-0x4)); /* 0x17175023: mov eax, dword ptr [ebp - 4] */
    MEM32(ebx) = eax; /* 0x17175026: mov dword ptr [ebx], eax */
    MEM32(ebx + 0x8) = esi; /* 0x17175028: mov dword ptr [ebx + 8], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1717502B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1717502D:
    esi = POP32_VAL(esp); /* 0x1717502D: pop esi */
    ebx = POP32_VAL(esp); /* 0x1717502E: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1717502F: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x17175030: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_17175038(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17175038u);

L_17175038:
    edi = edi; /* 0x17175038: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1717503A: push ebp */
    ebp = esp; /* 0x1717503B: mov ebp, esp */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x1717503D: fld dword ptr [ebp + 0x10] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x10); /* 0x17175040: fmul dword ptr [ebp + 0x10] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x17175043: fld dword ptr [ebp + 0xc] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0xC); /* 0x17175046: fmul dword ptr [ebp + 0xc] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17175049: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x1717504B: fld dword ptr [ebp + 8] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x8); /* 0x1717504E: fmul dword ptr [ebp + 8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17175051: faddp st(1) */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(0x17021EC4)); /* 0x17175053: fcom dword ptr [0x17021ec4] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17175059: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1717505B: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17175072; /* 0x1717505E: jne 0x17175072 */
L_17175060:
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(0x17021EC0)); /* 0x17175060: fcomp dword ptr [0x17021ec0] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17175066: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x17175068: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_17175074; /* 0x1717506B: jp 0x17175074 */
L_1717506D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1717506D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1717506F: inc eax */
    _flag_k = FK_INC;
    goto L_17175076; /* 0x17175070: jmp 0x17175076 */
L_17175072:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17175072: fstp st(0) */
L_17175074:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17175074: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_17175076:
    ebp = POP32_VAL(esp); /* 0x17175076: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x17175077: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_17175093(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17175093u);

L_17175093:
    edi = edi; /* 0x17175093: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17175095: push ebp */
    ebp = esp; /* 0x17175096: mov ebp, esp */
    PUSH32(esp, esi); /* 0x17175098: push esi */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x17175099: push dword ptr [ebp + 0x18] */
    esi = ecx; /* 0x1717509C: mov esi, ecx */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1717509E: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x171750A1: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171750A4: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171750A7: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1704E9C0); /* 0x171750AA: call 0x1704e9c0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x171750AF: push eax */
    ecx = esi; /* 0x171750B0: mov ecx, esi */
    RECOMP_CALL(sub_170B7D9D); /* 0x171750B2: call 0x170b7d9d */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x171750B7: pop esi */
    ebp = POP32_VAL(esp); /* 0x171750B8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x171750B9: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_171750C1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171750C1u);

L_171750C1:
    edi = edi; /* 0x171750C1: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171750C3: push ebp */
    ebp = esp; /* 0x171750C4: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171750C6: push esi */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x171750C7: push dword ptr [ebp + 0x18] */
    esi = ecx; /* 0x171750CA: mov esi, ecx */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x171750CC: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x171750CF: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171750D2: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171750D5: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1704E9C0); /* 0x171750D8: call 0x1704e9c0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x171750DD: push eax */
    ecx = esi; /* 0x171750DE: mov ecx, esi */
    RECOMP_CALL(sub_170B81B2); /* 0x171750E0: call 0x170b81b2 */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x171750E5: pop esi */
    ebp = POP32_VAL(esp); /* 0x171750E6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x171750E7: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_171750EF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171750EFu);

L_171750EF:
    eax = 0x1721BFBEu; /* 0x171750EF: mov eax, 0x1721bfbe */
    RECOMP_CALL(sub_1721B168); /* 0x171750F4: call 0x1721b168 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x171750F9: push ecx */
    PUSH32(esp, esi); /* 0x171750FA: push esi */
    esi = ecx; /* 0x171750FB: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x171750FD: mov dword ptr [ebp - 0x10], esi */
    MEM32(esi) = 0x17021ED0u; /* 0x17175100: mov dword ptr [esi], 0x17021ed0 */
    PUSH32(esp, MEM32(esi + 0x34)); /* 0x17175106: push dword ptr [esi + 0x34] */
    MEM32(ebp + (-0x4)) = 2; /* 0x17175109: mov dword ptr [ebp - 4], 2 */
    RECOMP_CALL(sub_1721B010); /* 0x17175110: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x17175115: pop ecx */
    ecx = esi + 0x24; /* 0x17175116: lea ecx, [esi + 0x24] */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x17175119: mov byte ptr [ebp - 4], 1 */
    RECOMP_CALL(sub_1717AF06); /* 0x1717511D: call 0x1717af06 */
    RECOMP_FLAGS_IN();
    ecx = esi + 0x14; /* 0x17175122: lea ecx, [esi + 0x14] */
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x17175125: mov byte ptr [ebp - 4], 0 */
    RECOMP_CALL(sub_1717AF06); /* 0x17175129: call 0x1717af06 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1717512E: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi + 0x4; /* 0x17175132: lea ecx, [esi + 4] */
    RECOMP_CALL(sub_1717AF06); /* 0x17175135: call 0x1717af06 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xC)); /* 0x1717513A: mov ecx, dword ptr [ebp - 0xc] */
    esi = POP32_VAL(esp); /* 0x1717513D: pop esi */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1717513E: mov dword ptr fs:[0], ecx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17175145: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x17175146: ret  */
    RECOMP_REGS_OUT();
}

void sub_1717514C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1717514Cu);

L_1717514C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1717514C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1717514E: ret  */
    RECOMP_REGS_OUT();
}

void sub_17175154(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17175154u);

L_17175154:
    edi = edi; /* 0x17175154: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17175156: push ebp */
    ebp = esp; /* 0x17175157: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x150u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x150u; /* 0x17175159: sub esp, 0x150 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x20)) = MEM32(ebp + (-0x20)) & 0; /* 0x1717515F: and dword ptr [ebp - 0x20], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) & 0; /* 0x17175163: and dword ptr [ebp - 0x1c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x17175167: push ebx */
    ebx = MEM32(ebp + 0x18); /* 0x17175168: mov ebx, dword ptr [ebp + 0x18] */
    PUSH32(esp, esi); /* 0x1717516B: push esi */
    PUSH32(esp, edi); /* 0x1717516C: push edi */
    edx = ebx + 0x4; /* 0x1717516D: lea edx, [ebx + 4] */
    PUSH32(esp, 9); /* 0x17175170: push 9 */
    ecx = POP32_VAL(esp); /* 0x17175172: pop ecx */
    esi = ebx; /* 0x17175173: mov esi, ebx */
    edi = ebp + (-0x108); /* 0x17175175: lea edi, [ebp - 0x108] */
    eax = edx; /* 0x1717517B: mov eax, edx */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1717517D: rep movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(ebp + (-0x44)) = edx; /* 0x1717517F: mov dword ptr [ebp - 0x44], edx */
    MEM32(ebp + (-0x24)) = eax; /* 0x17175182: mov dword ptr [ebp - 0x24], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x17175185: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1717518C; /* 0x17175187: jmp 0x1717518c */
L_17175189:
    eax = MEM32(ebp + (-0x24)); /* 0x17175189: mov eax, dword ptr [ebp - 0x24] */
L_1717518C:
    esi = MEM32(ebp + 0x8); /* 0x1717518C: mov esi, dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x1717518F: fld dword ptr [eax + 4] */
    _st[0] *= (double)*(float*)ADDR(esi + 0x8); /* 0x17175192: fmul dword ptr [esi + 8] */
    fp_push(*(float*)&MEM32(eax + (-0x4))); /* 0x17175195: fld dword ptr [eax - 4] */
    _st[0] *= (double)*(float*)ADDR(esi); /* 0x17175198: fmul dword ptr [esi] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1717519A: faddp st(1) */
    fp_push(*(float*)&MEM32(eax)); /* 0x1717519C: fld dword ptr [eax] */
    _st[0] *= (double)*(float*)ADDR(esi + 0x4); /* 0x1717519E: fmul dword ptr [esi + 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x171751A1: faddp st(1) */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + ecx + (-0x3C)) = _v; } /* 0x171751A3: fst dword ptr [ebp + ecx - 0x3c] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x171751A7: fld dword ptr [ebp + 0xc] */
    _st[0] += _st[1]; /* 0x171751AA: fadd st(1) */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(0x17001430)); /* 0x171751AC: fcomp dword ptr [0x17001430] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171751B2: fnstsw ax */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171751B4: fstp st(0) */
    /* test HI8(eax), 0x41u */ /* 0x171751B6: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171751C0; /* 0x171751B9: jp 0x171751c0 */
L_171751BB:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x171751BB: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_171751C3; /* 0x171751BE: jmp 0x171751c3 */
L_171751C0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171751C0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171751C2: inc eax */
    _flag_k = FK_INC;
L_171751C3:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x20)) = MEM32(ebp + (-0x20)) + eax; /* 0x171751C3: add dword ptr [ebp - 0x20], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24))); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x24)) = MEM32(ebp + (-0x24)) + 0xCu; /* 0x171751C6: add dword ptr [ebp - 0x24], 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + ecx + (-0x30)) = eax; /* 0x171751CA: mov dword ptr [ebp + ecx - 0x30], eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x171751CE: add ecx, 4 */
    _flag_k = FK_ADD;
    /* cmp ecx, 0xCu */ /* 0x171751D1: cmp ecx, 0xc */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17175189; /* 0x171751D4: jb 0x17175189 */
L_171751D6:
    /* cmp MEM32(ebp + (-0x20)), 0xFFFFFFFDu */ /* 0x171751D6: cmp dword ptr [ebp - 0x20], -3 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(0xFFFFFFFDu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1717556B; /* 0x171751DA: je 0x1717556b */
L_171751E0:
    PUSH32(esp, 3); /* 0x171751E0: push 3 */
    eax = POP32_VAL(esp); /* 0x171751E2: pop eax */
    /* cmp MEM32(ebp + (-0x20)), eax */ /* 0x171751E3: cmp dword ptr [ebp - 0x20], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171752C8; /* 0x171751E6: je 0x171752c8 */
L_171751EC:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x20)) = MEM32(ebp + (-0x20)) & 0; /* 0x171751EC: and dword ptr [ebp - 0x20], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x108); /* 0x171751F0: lea ecx, [ebp - 0x108] */
    MEM32(ebp + (-0x24)) = ecx; /* 0x171751F6: mov dword ptr [ebp - 0x24], ecx */
    MEM32(ebp + (-0x40)) = 1; /* 0x171751F9: mov dword ptr [ebp - 0x40], 1 */
    ecx = ebx + 0x8; /* 0x17175200: lea ecx, [ebx + 8] */
    MEM32(ebp + (-0x48)) = eax; /* 0x17175203: mov dword ptr [ebp - 0x48], eax */
L_17175206:
    eax = MEM32(ebp + (-0x20)); /* 0x17175206: mov eax, dword ptr [ebp - 0x20] */
    /* cmp MEM32(ebp + eax + (-0x30)), 1 */ /* 0x17175209: cmp dword ptr [ebp + eax - 0x30], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + eax + (-0x30))); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17175220; /* 0x1717520E: jne 0x17175220 */
L_17175210:
    edi = MEM32(ebp + (-0x24)); /* 0x17175210: mov edi, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) + 1; /* 0x17175213: inc dword ptr [ebp - 0x1c] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24))); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x24)) = MEM32(ebp + (-0x24)) + 0xCu; /* 0x17175216: add dword ptr [ebp - 0x24], 0xc */
    _flag_k = FK_ADD;
    esi = ecx + (-0x8); /* 0x1717521A: lea esi, [ecx - 8] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1717521D: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1717521E: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1717521F: movsd dword ptr es:[edi], dword ptr [esi] */
L_17175220:
    eax = MEM32(ebp + (-0x40)); /* 0x17175220: mov eax, dword ptr [ebp - 0x40] */
    PUSH32(esp, 3); /* 0x17175223: push 3 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x17175225: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x17175227: pop esi */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)esi; /* 0x17175228: div esi */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    edi = MEM32(ebp + (-0x20)); /* 0x1717522A: mov edi, dword ptr [ebp - 0x20] */
    esi = edx; /* 0x1717522D: mov esi, edx */
    if (2u) _cf = (((esi) >> 30) & 1u); /* 0x1717522F: shl esi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((esi << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 2u; /* 0x1717522F: shl esi, 2 */
    eax = MEM32(ebp + esi + (-0x30)); /* 0x17175232: mov eax, dword ptr [ebp + esi - 0x30] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + edi + (-0x30))); /* 0x17175236: imul eax, dword ptr [ebp + edi - 0x30] */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1717523B: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171752B0; /* 0x1717523E: jne 0x171752b0 */
L_17175240:
    eax = edx + edx * 2; /* 0x17175240: lea eax, [edx + edx*2] */
    eax = ebx + eax * 4; /* 0x17175243: lea eax, [ebx + eax*4] */
    fp_push(*(float*)&MEM32(eax)); /* 0x17175246: fld dword ptr [eax] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) + 1; /* 0x17175248: inc dword ptr [ebp - 0x1c] */
    _flag_k = FK_INC;
    _st[0] -= (double)*(float*)ADDR(ecx + (-0x8)); /* 0x1717524B: fsub dword ptr [ecx - 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x1717524E: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x17175251: fld dword ptr [eax + 4] */
    _st[0] -= (double)*(float*)ADDR(ecx + (-0x4)); /* 0x17175254: fsub dword ptr [ecx - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x17175257: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(eax + 0x8)); /* 0x1717525A: fld dword ptr [eax + 8] */
    eax = edi; /* 0x1717525D: mov eax, edi */
    _st[0] -= (double)*(float*)ADDR(ecx); /* 0x1717525F: fsub dword ptr [ecx] */
    eax = ebp + eax + (-0x3C); /* 0x17175261: lea eax, [ebp + eax - 0x3c] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x17175265: fld dword ptr [ebp + 0xc] */
    edi = MEM32(ebp + (-0x24)); /* 0x17175268: mov edi, dword ptr [ebp - 0x24] */
    _st[0] += (double)*(float*)ADDR(eax); /* 0x1717526B: fadd dword ptr [eax] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24))); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x24)) = MEM32(ebp + (-0x24)) + 0xCu; /* 0x1717526D: add dword ptr [ebp - 0x24], 0xc */
    _flag_k = FK_ADD;
    fp_push(*(float*)&MEM32(ebp + esi + (-0x3C))); /* 0x17175271: fld dword ptr [ebp + esi - 0x3c] */
    esi = ebp + (-0x18); /* 0x17175275: lea esi, [ebp - 0x18] */
    _st[0] -= (double)*(float*)ADDR(eax); /* 0x17175278: fsub dword ptr [eax] */
    { double _v = fp_pop(); _st[0] = _v == 0.0 ? _st[0] : _st[0] / _v; } /* 0x1717527A: fdivp st(1) */
    _st[0] = -_st[0]; /* 0x1717527C: fchs  */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x1717527E: fld dword ptr [ebp - 0xc] */
    _st[0] *= _st[1]; /* 0x17175281: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x54)) = _v; } /* 0x17175283: fstp dword ptr [ebp - 0x54] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x17175286: fld dword ptr [ebp - 8] */
    _st[0] *= _st[1]; /* 0x17175289: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x50)) = _v; } /* 0x1717528B: fstp dword ptr [ebp - 0x50] */
    fp_push(_st[1]); /* 0x1717528E: fld st(1) */
    _st[0] *= _st[1]; /* 0x17175290: fmul st(1) */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x17175292: fstp st(2) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17175294: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x54))); /* 0x17175296: fld dword ptr [ebp - 0x54] */
    _st[0] += (double)*(float*)ADDR(ecx + (-0x8)); /* 0x17175299: fadd dword ptr [ecx - 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x1717529C: fstp dword ptr [ebp - 0x18] */
    fp_push(*(float*)&MEM32(ebp + (-0x50))); /* 0x1717529F: fld dword ptr [ebp - 0x50] */
    _st[0] += (double)*(float*)ADDR(ecx + (-0x4)); /* 0x171752A2: fadd dword ptr [ecx - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x171752A5: fstp dword ptr [ebp - 0x14] */
    _st[0] += (double)*(float*)ADDR(ecx); /* 0x171752A8: fadd dword ptr [ecx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x171752AA: fstp dword ptr [ebp - 0x10] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171752AD: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171752AE: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171752AF: movsd dword ptr es:[edi], dword ptr [esi] */
L_171752B0:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x40))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x40)) = MEM32(ebp + (-0x40)) + 1; /* 0x171752B0: inc dword ptr [ebp - 0x40] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x20)) = MEM32(ebp + (-0x20)) + 4; /* 0x171752B3: add dword ptr [ebp - 0x20], 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xCu; /* 0x171752B7: add ecx, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x48))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x48)) = MEM32(ebp + (-0x48)) - 1; /* 0x171752BA: dec dword ptr [ebp - 0x48] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_17175206; /* 0x171752BD: jne 0x17175206 */
L_171752C3:
    edx = MEM32(ebp + (-0x44)); /* 0x171752C3: mov edx, dword ptr [ebp - 0x44] */
    goto L_171752CB; /* 0x171752C6: jmp 0x171752cb */
L_171752C8:
    MEM32(ebp + (-0x1C)) = eax; /* 0x171752C8: mov dword ptr [ebp - 0x1c], eax */
L_171752CB:
    fp_push(*(float*)&MEM32(ebx + 0xC)); /* 0x171752CB: fld dword ptr [ebx + 0xc] */
    esi = ebp + (-0x18); /* 0x171752CE: lea esi, [ebp - 0x18] */
    _st[0] -= (double)*(float*)ADDR(ebx); /* 0x171752D1: fsub dword ptr [ebx] */
    edi = ebp + (-0xA8); /* 0x171752D3: lea edi, [ebp - 0xa8] */
    eax = ebp + (-0xC); /* 0x171752D9: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x171752DC: push eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x171752DD: fstp dword ptr [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x171752E0: push eax */
    fp_push(*(float*)&MEM32(ebx + 0x10)); /* 0x171752E1: fld dword ptr [ebx + 0x10] */
    _st[0] -= (double)*(float*)ADDR(edx); /* 0x171752E4: fsub dword ptr [edx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x171752E6: fstp dword ptr [ebp - 0x14] */
    fp_push(*(float*)&MEM32(ebx + 0x14)); /* 0x171752E9: fld dword ptr [ebx + 0x14] */
    _st[0] -= (double)*(float*)ADDR(ebx + 0x8); /* 0x171752EC: fsub dword ptr [ebx + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x171752EF: fstp dword ptr [ebp - 0x10] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171752F2: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_push(*(float*)&MEM32(ebx + 0x18)); /* 0x171752F3: fld dword ptr [ebx + 0x18] */
    _st[0] -= (double)*(float*)ADDR(ebx); /* 0x171752F6: fsub dword ptr [ebx] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171752F8: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171752F9: movsd dword ptr es:[edi], dword ptr [esi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x171752FA: fstp dword ptr [ebp - 0x18] */
    fp_push(*(float*)&MEM32(ebx + 0x1C)); /* 0x171752FD: fld dword ptr [ebx + 0x1c] */
    _st[0] -= (double)*(float*)ADDR(edx); /* 0x17175300: fsub dword ptr [edx] */
    esi = ebp + (-0x18); /* 0x17175302: lea esi, [ebp - 0x18] */
    edi = ebp + (-0x9C); /* 0x17175305: lea edi, [ebp - 0x9c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x1717530B: fstp dword ptr [ebp - 0x14] */
    fp_push(*(float*)&MEM32(ebx + 0x20)); /* 0x1717530E: fld dword ptr [ebx + 0x20] */
    _st[0] -= (double)*(float*)ADDR(ebx + 0x8); /* 0x17175311: fsub dword ptr [ebx + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x17175314: fstp dword ptr [ebp - 0x10] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17175317: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17175318: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17175319: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_push(*(float*)&MEM32(ebp + (-0x98))); /* 0x1717531A: fld dword ptr [ebp - 0x98] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xA0)); /* 0x17175320: fmul dword ptr [ebp - 0xa0] */
    fp_push(*(float*)&MEM32(ebp + (-0x94))); /* 0x17175326: fld dword ptr [ebp - 0x94] */
    esi = ebp + (-0x18); /* 0x1717532C: lea esi, [ebp - 0x18] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xA4)); /* 0x1717532F: fmul dword ptr [ebp - 0xa4] */
    edi = ebp + (-0xC); /* 0x17175335: lea edi, [ebp - 0xc] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17175338: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x1717533A: fstp dword ptr [ebp - 0x18] */
    fp_push(*(float*)&MEM32(ebp + (-0x94))); /* 0x1717533D: fld dword ptr [ebp - 0x94] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xA8)); /* 0x17175343: fmul dword ptr [ebp - 0xa8] */
    fp_push(*(float*)&MEM32(ebp + (-0x9C))); /* 0x17175349: fld dword ptr [ebp - 0x9c] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xA0)); /* 0x1717534F: fmul dword ptr [ebp - 0xa0] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17175355: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x17175357: fstp dword ptr [ebp - 0x14] */
    fp_push(*(float*)&MEM32(ebp + (-0x9C))); /* 0x1717535A: fld dword ptr [ebp - 0x9c] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xA4)); /* 0x17175360: fmul dword ptr [ebp - 0xa4] */
    fp_push(*(float*)&MEM32(ebp + (-0x98))); /* 0x17175366: fld dword ptr [ebp - 0x98] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xA8)); /* 0x1717536C: fmul dword ptr [ebp - 0xa8] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17175372: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x17175374: fstp dword ptr [ebp - 0x10] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17175377: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17175378: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17175379: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_17040B68); /* 0x1717537A: call 0x17040b68 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x18); /* 0x1717537F: mov eax, dword ptr [ebp + 0x18] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x17175382: fld dword ptr [ebp - 8] */
    ebx = MEM32(ebp + 0x10); /* 0x17175385: mov ebx, dword ptr [ebp + 0x10] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x17175388: fld dword ptr [ebp - 0xc] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xC)); /* 0x1717538B: fmul dword ptr [ebp - 0xc] */
    fp_push(_st[1]); /* 0x1717538E: fld st(1) */
    _st[0] *= _st[2]; /* 0x17175390: fmul st(2) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17175392: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x17175394: fld dword ptr [ebp - 4] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x17175397: fmul dword ptr [ebp - 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1717539A: faddp st(1) */
    _st[0] = (double)*(float*)ADDR(0x17001424) / _st[0]; /* 0x1717539C: fdivr dword ptr [0x17001424] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x171753A2: fld dword ptr [ebp - 4] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x8); /* 0x171753A5: fmul dword ptr [eax + 8] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x171753A8: fld dword ptr [ebp - 0xc] */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x171753AB: fmul dword ptr [eax] */
    eax = MEM32(ebp + (-0x44)); /* 0x171753AD: mov eax, dword ptr [ebp - 0x44] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x171753B0: faddp st(1) */
    fp_push(_st[2]); /* 0x171753B2: fld st(2) */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x171753B4: fmul dword ptr [eax] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x171753B6: faddp st(1) */
    _st[0] = -_st[0]; /* 0x171753B8: fchs  */
    fp_push(_st[2]); /* 0x171753BA: fld st(2) */
    _st[0] *= (double)*(float*)ADDR(ebx + 0x4); /* 0x171753BC: fmul dword ptr [ebx + 4] */
    eax = MEM32(ebp + 0x8); /* 0x171753BF: mov eax, dword ptr [ebp + 8] */
    esi = ebp + (-0x54); /* 0x171753C2: lea esi, [ebp - 0x54] */
    edi = ebp + (-0x3C); /* 0x171753C5: lea edi, [ebp - 0x3c] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x171753C8: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x171753CA: fld dword ptr [ebp - 0xc] */
    _st[0] *= (double)*(float*)ADDR(ebx); /* 0x171753CD: fmul dword ptr [ebx] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x171753CF: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x171753D1: fld dword ptr [ebp - 4] */
    _st[0] *= (double)*(float*)ADDR(ebx + 0x8); /* 0x171753D4: fmul dword ptr [ebx + 8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x171753D7: faddp st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x171753D9: fmulp st(1) */
    _st[0] *= (double)*(float*)ADDR(0x170018D8); /* 0x171753DB: fmul dword ptr [0x170018d8] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + 0x18) = _v; } /* 0x171753E1: fst dword ptr [ebp + 0x18] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x171753E4: fld dword ptr [ebp - 0xc] */
    _st[0] *= _st[1]; /* 0x171753E7: fmul st(1) */
    fp_push(_st[2]); /* 0x171753E9: fld st(2) */
    _st[0] *= _st[2]; /* 0x171753EB: fmul st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x171753ED: fstp dword ptr [ebp - 0x14] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x171753F0: fld dword ptr [ebp - 4] */
    _st[0] *= _st[2]; /* 0x171753F3: fmul st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x171753F5: fstp dword ptr [ebp - 0x10] */
    _st[0] += (double)*(float*)ADDR(ebx); /* 0x171753F8: fadd dword ptr [ebx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x54)) = _v; } /* 0x171753FA: fstp dword ptr [ebp - 0x54] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171753FD: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171753FF: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x17175401: fld dword ptr [ebp - 0x14] */
    _st[0] += (double)*(float*)ADDR(ebx + 0x4); /* 0x17175404: fadd dword ptr [ebx + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x50)) = _v; } /* 0x17175407: fstp dword ptr [ebp - 0x50] */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x1717540A: fld dword ptr [ebp - 0x10] */
    _st[0] += (double)*(float*)ADDR(ebx + 0x8); /* 0x1717540D: fadd dword ptr [ebx + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4C)) = _v; } /* 0x17175410: fstp dword ptr [ebp - 0x4c] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17175413: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_push(*(float*)&MEM32(0x17005DA4)); /* 0x17175414: fld dword ptr [0x17005da4] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x1717541A: fld dword ptr [ebp - 8] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1717541D: movsd dword ptr es:[edi], dword ptr [esi] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x4); /* 0x1717541E: fmul dword ptr [eax + 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x17175421: fld dword ptr [ebp - 4] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x8); /* 0x17175424: fmul dword ptr [eax + 8] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17175427: movsd dword ptr es:[edi], dword ptr [esi] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17175428: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x1717542A: fld dword ptr [ebp - 0xc] */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x1717542D: fmul dword ptr [eax] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1717542F: faddp st(1) */
    _st[0] *= _st[1]; /* 0x17175431: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x17175433: fstp dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ebp + 0x18)); /* 0x17175436: fld dword ptr [ebp + 0x18] */
    _st[0] -= (double)*(float*)ADDR(ebp + 0xC); /* 0x17175439: fsub dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x1717543C: fld dword ptr [ebp - 0xc] */
    _st[0] *= _st[1]; /* 0x1717543F: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x30)) = _v; } /* 0x17175441: fstp dword ptr [ebp - 0x30] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x17175444: fld dword ptr [ebp - 8] */
    _st[0] *= _st[1]; /* 0x17175447: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x2C)) = _v; } /* 0x17175449: fstp dword ptr [ebp - 0x2c] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x1717544C: fld dword ptr [ebp - 4] */
    _st[0] *= _st[1]; /* 0x1717544F: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x17175451: fstp dword ptr [ebp - 0x28] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17175454: fstp st(0) */
    fp_push(*(float*)&MEM32(eax)); /* 0x17175456: fld dword ptr [eax] */
    _st[0] *= _st[1]; /* 0x17175458: fmul st(1) */
    fp_push(_st[0]); /* 0x1717545A: fld st(0) */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x1717545C: fld dword ptr [eax + 4] */
    _st[0] *= _st[3]; /* 0x1717545F: fmul st(3) */
    fp_push(*(float*)&MEM32(eax + 0x8)); /* 0x17175461: fld dword ptr [eax + 8] */
    _st[0] *= _st[4]; /* 0x17175464: fmul st(4) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x17175466: fstp dword ptr [ebp - 0x10] */
    fp_push(_st[1]); /* 0x17175469: fld st(1) */
    _st[0] += (double)*(float*)ADDR(ebx); /* 0x1717546B: fadd dword ptr [ebx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x54)) = _v; } /* 0x1717546D: fstp dword ptr [ebp - 0x54] */
    _st[0] += (double)*(float*)ADDR(ebx + 0x4); /* 0x17175470: fadd dword ptr [ebx + 4] */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x17175473: fstp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x17175475: fld dword ptr [ebp - 0x10] */
    _st[0] += (double)*(float*)ADDR(ebx + 0x8); /* 0x17175478: fadd dword ptr [ebx + 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x54))); /* 0x1717547B: fld dword ptr [ebp - 0x54] */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x30)); /* 0x1717547E: fsub dword ptr [ebp - 0x30] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x17175481: fstp dword ptr [ebp - 0x18] */
    fp_push(_st[1]); /* 0x17175484: fld st(1) */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x2C)); /* 0x17175486: fsub dword ptr [ebp - 0x2c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x17175489: fstp dword ptr [ebp - 0x14] */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x28)); /* 0x1717548C: fsub dword ptr [ebp - 0x28] */
    esi = ebp + (-0x18); /* 0x1717548F: lea esi, [ebp - 0x18] */
    edi = ebp + (-0xC0); /* 0x17175492: lea edi, [ebp - 0xc0] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x17175498: fstp dword ptr [ebp - 0x10] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1717549B: movsd dword ptr es:[edi], dword ptr [esi] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1717549C: fstp st(0) */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1717549E: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x1717549F: fld dword ptr [ebp + 0xc] */
    _st[0] += (double)*(float*)ADDR(ebp + 0x18); /* 0x171754A2: fadd dword ptr [ebp + 0x18] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x171754A5: fld dword ptr [ebp - 0xc] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171754A8: movsd dword ptr es:[edi], dword ptr [esi] */
    esi = ebp + (-0x30); /* 0x171754A9: lea esi, [ebp - 0x30] */
    _st[0] *= _st[1]; /* 0x171754AC: fmul st(1) */
    edi = ebp + (-0xB4); /* 0x171754AE: lea edi, [ebp - 0xb4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x171754B4: fstp dword ptr [ebp - 0x18] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x171754B7: fld dword ptr [ebp - 8] */
    _st[0] *= _st[1]; /* 0x171754BA: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x171754BC: fstp dword ptr [ebp - 0x14] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x171754BF: fmul dword ptr [ebp - 4] */
    fp_push(_st[1]); /* 0x171754C2: fld st(1) */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x171754C4: fld dword ptr [eax + 4] */
    _st[0] *= _st[4]; /* 0x171754C7: fmul st(4) */
    fp_push(*(float*)&MEM32(eax + 0x8)); /* 0x171754C9: fld dword ptr [eax + 8] */
    _st[0] *= _st[5]; /* 0x171754CC: fmul st(5) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x171754CE: fstp dword ptr [ebp - 0x28] */
    fp_push(*(float*)&MEM32(ebx)); /* 0x171754D1: fld dword ptr [ebx] */
    _st[0] -= _st[2]; /* 0x171754D3: fsub st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x54)) = _v; } /* 0x171754D5: fstp dword ptr [ebp - 0x54] */
    fp_push(*(float*)&MEM32(ebx + 0x4)); /* 0x171754D8: fld dword ptr [ebx + 4] */
    _st[0] -= _st[1]; /* 0x171754DB: fsub st(1) */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x171754DD: fstp st(2) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171754DF: fstp st(0) */
    fp_push(*(float*)&MEM32(ebx + 0x8)); /* 0x171754E1: fld dword ptr [ebx + 8] */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x28)); /* 0x171754E4: fsub dword ptr [ebp - 0x28] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4C)) = _v; } /* 0x171754E7: fstp dword ptr [ebp - 0x4c] */
    fp_push(*(float*)&MEM32(ebp + (-0x54))); /* 0x171754EA: fld dword ptr [ebp - 0x54] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x18)); /* 0x171754ED: fadd dword ptr [ebp - 0x18] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x30)) = _v; } /* 0x171754F0: fstp dword ptr [ebp - 0x30] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x14)); /* 0x171754F3: fadd dword ptr [ebp - 0x14] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x2C)) = _v; } /* 0x171754F6: fstp dword ptr [ebp - 0x2c] */
    fp_push(*(float*)&MEM32(ebp + (-0x4C))); /* 0x171754F9: fld dword ptr [ebp - 0x4c] */
    _st[0] += _st[1]; /* 0x171754FC: fadd st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x171754FE: fstp dword ptr [ebp - 0x28] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17175501: movsd dword ptr es:[edi], dword ptr [esi] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17175502: fstp st(0) */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17175504: movsd dword ptr es:[edi], dword ptr [esi] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17175505: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x3C))); /* 0x17175507: fld dword ptr [ebp - 0x3c] */
    _st[0] -= (double)*(float*)ADDR(ebx); /* 0x1717550A: fsub dword ptr [ebx] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1717550C: movsd dword ptr es:[edi], dword ptr [esi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x1717550D: fstp dword ptr [ebp - 0x18] */
    fp_push(*(float*)&MEM32(ebp + (-0x38))); /* 0x17175510: fld dword ptr [ebp - 0x38] */
    _st[0] -= (double)*(float*)ADDR(ebx + 0x4); /* 0x17175513: fsub dword ptr [ebx + 4] */
    esi = ebp + (-0x18); /* 0x17175516: lea esi, [ebp - 0x18] */
    edi = ebp + (-0xA8); /* 0x17175519: lea edi, [ebp - 0xa8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x1717551F: fstp dword ptr [ebp - 0x14] */
    fp_push(*(float*)&MEM32(ebp + (-0x34))); /* 0x17175522: fld dword ptr [ebp - 0x34] */
    _st[0] -= (double)*(float*)ADDR(ebx + 0x8); /* 0x17175525: fsub dword ptr [ebx + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x17175528: fstp dword ptr [ebp - 0x10] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1717552B: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_push(*(float*)&MEM32(ebp + 0x14)); /* 0x1717552C: fld dword ptr [ebp + 0x14] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x14); /* 0x1717552F: fmul dword ptr [ebp + 0x14] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17175532: movsd dword ptr es:[edi], dword ptr [esi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x18) = _v; } /* 0x17175533: fstp dword ptr [ebp + 0x18] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17175536: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_push(*(float*)&MEM32(ebp + (-0xA8))); /* 0x17175537: fld dword ptr [ebp - 0xa8] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xA8)); /* 0x1717553D: fmul dword ptr [ebp - 0xa8] */
    fp_push(*(float*)&MEM32(ebp + (-0xA4))); /* 0x17175543: fld dword ptr [ebp - 0xa4] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xA4)); /* 0x17175549: fmul dword ptr [ebp - 0xa4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1717554F: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0xA0))); /* 0x17175551: fld dword ptr [ebp - 0xa0] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xA0)); /* 0x17175557: fmul dword ptr [ebp - 0xa0] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1717555D: faddp st(1) */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + 0x18)); /* 0x1717555F: fcomp dword ptr [ebp + 0x18] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17175562: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x17175564: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17175574; /* 0x17175567: jne 0x17175574 */
L_17175569:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17175569: fstp st(0) */
L_1717556B:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x1717556B: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_1717556D:
    edi = POP32_VAL(esp); /* 0x1717556D: pop edi */
    esi = POP32_VAL(esp); /* 0x1717556E: pop esi */
    ebx = POP32_VAL(esp); /* 0x1717556F: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17175570: leave  */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x17175571: ret 0x14 */
L_17175574:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x17175574: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x1C)), ecx */ /* 0x17175576: cmp dword ptr [ebp - 0x1c], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0xC) = ecx; /* 0x17175579: mov dword ptr [ebp + 0xc], ecx */
    if (CMP_BE(_flag_a, _flag_b)) goto L_17175656; /* 0x1717557C: jbe 0x17175656 */
L_17175582:
    eax = MEM32(ebp + 0xC); /* 0x17175582: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17175585: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + 0x8) = eax; /* 0x17175586: mov dword ptr [ebp + 8], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x17175589: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)MEM32(ebp + (-0x1C)); /* 0x1717558B: div dword ptr [ebp - 0x1c] */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    esi = ebp + (-0x3C); /* 0x1717558E: lea esi, [ebp - 0x3c] */
    eax = edx + edx * 2; /* 0x17175591: lea eax, [edx + edx*2] */
    eax = ebp + eax * 4 + (-0x108); /* 0x17175594: lea eax, [ebp + eax*4 - 0x108] */
    fp_push(*(float*)&MEM32(eax)); /* 0x1717559B: fld dword ptr [eax] */
    edx = ebp + ecx + (-0xA8); /* 0x1717559D: lea edx, [ebp + ecx - 0xa8] */
    _st[0] -= (double)*(float*)ADDR(ebp + ecx + (-0x108)); /* 0x171755A4: fsub dword ptr [ebp + ecx - 0x108] */
    edi = edx; /* 0x171755AB: mov edi, edx */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x3C)) = _v; } /* 0x171755AD: fstp dword ptr [ebp - 0x3c] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x171755B0: fld dword ptr [eax + 4] */
    _st[0] -= (double)*(float*)ADDR(ebp + ecx + (-0x104)); /* 0x171755B3: fsub dword ptr [ebp + ecx - 0x104] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x38)) = _v; } /* 0x171755BA: fstp dword ptr [ebp - 0x38] */
    fp_push(*(float*)&MEM32(eax + 0x8)); /* 0x171755BD: fld dword ptr [eax + 8] */
    eax = ebp + ecx + (-0xA4); /* 0x171755C0: lea eax, [ebp + ecx - 0xa4] */
    _st[0] -= (double)*(float*)ADDR(ebp + ecx + (-0x100)); /* 0x171755C7: fsub dword ptr [ebp + ecx - 0x100] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x34)) = _v; } /* 0x171755CE: fstp dword ptr [ebp - 0x34] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171755D1: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x171755D2: fld dword ptr [ebp - 4] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171755D5: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171755D6: movsd dword ptr es:[edi], dword ptr [esi] */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x171755D7: fmul dword ptr [eax] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x171755D9: fld dword ptr [ebp - 8] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x4); /* 0x171755DC: fmul dword ptr [eax + 4] */
    esi = ebp + (-0x18); /* 0x171755DF: lea esi, [ebp - 0x18] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x171755E2: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x171755E4: fstp dword ptr [ebp - 0x18] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x171755E7: fld dword ptr [ebp - 0xc] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x4); /* 0x171755EA: fmul dword ptr [eax + 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x171755ED: fld dword ptr [ebp - 4] */
    _st[0] *= (double)*(float*)ADDR(edx); /* 0x171755F0: fmul dword ptr [edx] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x171755F2: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x171755F4: fstp dword ptr [ebp - 0x14] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x171755F7: fld dword ptr [ebp - 8] */
    _st[0] *= (double)*(float*)ADDR(edx); /* 0x171755FA: fmul dword ptr [edx] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x171755FC: fld dword ptr [ebp - 0xc] */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x171755FF: fmul dword ptr [eax] */
    eax = ebp + ecx + (-0x150); /* 0x17175601: lea eax, [ebp + ecx - 0x150] */
    edi = eax; /* 0x17175608: mov edi, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xCu; /* 0x1717560A: add ecx, 0xc */
    _flag_k = FK_ADD;
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x1717560D: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x1717560F: fstp dword ptr [ebp - 0x10] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17175612: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17175613: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17175614: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_push(*(float*)&MEM32(ebp + ecx + (-0x154))); /* 0x17175615: fld dword ptr [ebp + ecx - 0x154] */
    _st[0] *= (double)*(float*)ADDR(ebp + ecx + (-0x10C)); /* 0x1717561C: fmul dword ptr [ebp + ecx - 0x10c] */
    fp_push(*(float*)&MEM32(ebp + ecx + (-0x158))); /* 0x17175623: fld dword ptr [ebp + ecx - 0x158] */
    _st[0] *= (double)*(float*)ADDR(ebp + ecx + (-0x110)); /* 0x1717562A: fmul dword ptr [ebp + ecx - 0x110] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17175631: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + ecx + (-0x114))); /* 0x17175633: fld dword ptr [ebp + ecx - 0x114] */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x1717563A: fmul dword ptr [eax] */
    eax = MEM32(ebp + 0xC); /* 0x1717563C: mov eax, dword ptr [ebp + 0xc] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1717563F: faddp st(1) */
    _st[0] = -_st[0]; /* 0x17175641: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + eax * 4 + (-0x60)) = _v; } /* 0x17175643: fstp dword ptr [ebp + eax*4 - 0x60] */
    eax = MEM32(ebp + 0x8); /* 0x17175647: mov eax, dword ptr [ebp + 8] */
    /* cmp eax, MEM32(ebp + (-0x1C)) */ /* 0x1717564A: cmp eax, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x1C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0xC) = eax; /* 0x1717564D: mov dword ptr [ebp + 0xc], eax */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17175582; /* 0x17175650: jb 0x17175582 */
L_17175656:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x17175656: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x1C)), esi */ /* 0x17175658: cmp dword ptr [ebp - 0x1c], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(edx, 1); /* 0x1717565B: mov dl, 1 */
    if (CMP_BE(_flag_a, _flag_b)) goto L_1717588E; /* 0x1717565D: jbe 0x1717588e */
L_17175663:
    fp_push(*(float*)&MEM32(ebp + (-0xBC))); /* 0x17175663: fld dword ptr [ebp - 0xbc] */
    ecx = esi + esi * 2; /* 0x17175669: lea ecx, [esi + esi*2] */
    ecx = ebp + ecx * 4 + (-0x150); /* 0x1717566C: lea ecx, [ebp + ecx*4 - 0x150] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x4); /* 0x17175673: fmul dword ptr [ecx + 4] */
    edi = ebp + esi * 4 + (-0x60); /* 0x17175676: lea edi, [ebp + esi*4 - 0x60] */
    fp_push(*(float*)&MEM32(ebp + (-0xB8))); /* 0x1717567A: fld dword ptr [ebp - 0xb8] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x8); /* 0x17175680: fmul dword ptr [ecx + 8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17175683: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0xC0))); /* 0x17175685: fld dword ptr [ebp - 0xc0] */
    _st[0] *= (double)*(float*)ADDR(ecx); /* 0x1717568B: fmul dword ptr [ecx] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1717568D: faddp st(1) */
    _st[0] += (double)*(float*)ADDR(edi); /* 0x1717568F: fadd dword ptr [edi] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(0x17001430)); /* 0x17175691: fcomp dword ptr [0x17001430] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17175697: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x17175699: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171756D0; /* 0x1717569C: jp 0x171756d0 */
L_1717569E:
    fp_push(*(float*)&MEM32(ebp + (-0xB0))); /* 0x1717569E: fld dword ptr [ebp - 0xb0] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x4); /* 0x171756A4: fmul dword ptr [ecx + 4] */
    fp_push(*(float*)&MEM32(ebp + (-0xAC))); /* 0x171756A7: fld dword ptr [ebp - 0xac] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x8); /* 0x171756AD: fmul dword ptr [ecx + 8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x171756B0: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0xB4))); /* 0x171756B2: fld dword ptr [ebp - 0xb4] */
    _st[0] *= (double)*(float*)ADDR(ecx); /* 0x171756B8: fmul dword ptr [ecx] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x171756BA: faddp st(1) */
    _st[0] += (double)*(float*)ADDR(edi); /* 0x171756BC: fadd dword ptr [edi] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(0x17001430)); /* 0x171756BE: fcomp dword ptr [0x17001430] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171756C4: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x171756C6: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171756D0; /* 0x171756C9: jp 0x171756d0 */
L_171756CB:
    esi = MEM32(ebp + (-0x1C)); /* 0x171756CB: mov esi, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(edx, 0); /* 0x171756CE: xor dl, dl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_171756D0:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x171756D0: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(ebp + (-0x1C)) */ /* 0x171756D1: cmp esi, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x1C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17175663; /* 0x171756D4: jb 0x17175663 */
L_171756D6:
    /* test LO8(edx), LO8(edx) */ /* 0x171756D6: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1717588E; /* 0x171756D8: jne 0x1717588e */
L_171756DE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171756DE: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0xC) = ecx; /* 0x171756E0: mov dword ptr [ebp + 0xc], ecx */
L_171756E3:
    edx = ebp + ecx + (-0xA0); /* 0x171756E3: lea edx, [ebp + ecx - 0xa0] */
    fp_push(*(float*)&MEM32(edx)); /* 0x171756EA: fld dword ptr [edx] */
    esi = ebp + ecx + (-0xA8); /* 0x171756EC: lea esi, [ebp + ecx - 0xa8] */
    fp_push(*(float*)&MEM32(edx + (-0x4))); /* 0x171756F3: fld dword ptr [edx - 4] */
    fp_push(*(float*)&MEM32(esi)); /* 0x171756F6: fld dword ptr [esi] */
    fp_push(_st[1]); /* 0x171756F8: fld st(1) */
    _st[0] *= _st[2]; /* 0x171756FA: fmul st(2) */
    fp_push(_st[1]); /* 0x171756FC: fld st(1) */
    _st[0] *= _st[2]; /* 0x171756FE: fmul st(2) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17175700: faddp st(1) */
    fp_push(_st[3]); /* 0x17175702: fld st(3) */
    _st[0] *= _st[4]; /* 0x17175704: fmul st(4) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17175706: faddp st(1) */
    _st[0] = sqrt(_st[0]); /* 0x17175708: fsqrt  */
    { _st[3] = _st[0]; g_st_i64[3] = g_st_i64[0]; fp_pop(); } /* 0x1717570A: fstp st(3) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1717570C: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1717570E: fstp st(0) */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x17175710: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17175712: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x17175714: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_17175756; /* 0x17175717: jp 0x17175756 */
L_17175719:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17175719: fstp st(0) */
    fp_push(*(float*)&MEM32(ebx)); /* 0x1717571B: fld dword ptr [ebx] */
    _st[0] -= (double)*(float*)ADDR(ebp + ecx + (-0x108)); /* 0x1717571D: fsub dword ptr [ebp + ecx - 0x108] */
    fp_push(*(float*)&MEM32(ebx + 0x4)); /* 0x17175724: fld dword ptr [ebx + 4] */
    _st[0] -= (double)*(float*)ADDR(ebp + ecx + (-0x104)); /* 0x17175727: fsub dword ptr [ebp + ecx - 0x104] */
    fp_push(*(float*)&MEM32(ebx + 0x8)); /* 0x1717572E: fld dword ptr [ebx + 8] */
    _st[0] -= (double)*(float*)ADDR(ebp + ecx + (-0x100)); /* 0x17175731: fsub dword ptr [ebp + ecx - 0x100] */
    fp_push(_st[0]); /* 0x17175738: fld st(0) */
    _st[0] *= _st[1]; /* 0x1717573A: fmul st(1) */
    fp_push(_st[2]); /* 0x1717573C: fld st(2) */
    _st[0] *= _st[3]; /* 0x1717573E: fmul st(3) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17175740: faddp st(1) */
    fp_push(_st[3]); /* 0x17175742: fld st(3) */
    _st[0] *= _st[4]; /* 0x17175744: fmul st(4) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17175746: faddp st(1) */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + 0x18)); /* 0x17175748: fcomp dword ptr [ebp + 0x18] */
    fp_pop();
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1717574B: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1717574D: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1717574F: fstp st(0) */
    goto L_17175887; /* 0x17175751: jmp 0x17175887 */
L_17175756:
    fp_push(1.0); /* 0x17175756: fld1  */
    edi = ebp + ecx + (-0x108); /* 0x17175758: lea edi, [ebp + ecx - 0x108] */
    _st[0] /= _st[1]; /* 0x1717575F: fdiv st(1) */
    fp_push(_st[0]); /* 0x17175761: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(esi); /* 0x17175763: fmul dword ptr [esi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi) = _v; } /* 0x17175765: fstp dword ptr [esi] */
    fp_push(_st[0]); /* 0x17175767: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(edx + (-0x4)); /* 0x17175769: fmul dword ptr [edx - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx + (-0x4)) = _v; } /* 0x1717576C: fstp dword ptr [edx - 4] */
    _st[0] *= (double)*(float*)ADDR(edx); /* 0x1717576F: fmul dword ptr [edx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx) = _v; } /* 0x17175771: fstp dword ptr [edx] */
    fp_push(*(float*)&MEM32(ebx)); /* 0x17175773: fld dword ptr [ebx] */
    _st[0] -= (double)*(float*)ADDR(edi); /* 0x17175775: fsub dword ptr [edi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x30)) = _v; } /* 0x17175777: fstp dword ptr [ebp - 0x30] */
    fp_push(*(float*)&MEM32(ebx + 0x4)); /* 0x1717577A: fld dword ptr [ebx + 4] */
    _st[0] -= (double)*(float*)ADDR(ebp + ecx + (-0x104)); /* 0x1717577D: fsub dword ptr [ebp + ecx - 0x104] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x2C)) = _v; } /* 0x17175784: fstp dword ptr [ebp - 0x2c] */
    fp_push(*(float*)&MEM32(ebx + 0x8)); /* 0x17175787: fld dword ptr [ebx + 8] */
    _st[0] -= (double)*(float*)ADDR(ebp + ecx + (-0x100)); /* 0x1717578A: fsub dword ptr [ebp + ecx - 0x100] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x17175791: fstp dword ptr [ebp - 0x28] */
    fp_push(*(float*)&MEM32(ebp + (-0x30))); /* 0x17175794: fld dword ptr [ebp - 0x30] */
    _st[0] *= (double)*(float*)ADDR(esi); /* 0x17175797: fmul dword ptr [esi] */
    fp_push(*(float*)&MEM32(ebp + (-0x28))); /* 0x17175799: fld dword ptr [ebp - 0x28] */
    _st[0] *= (double)*(float*)ADDR(edx); /* 0x1717579C: fmul dword ptr [edx] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1717579E: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x2C))); /* 0x171757A0: fld dword ptr [ebp - 0x2c] */
    _st[0] *= (double)*(float*)ADDR(edx + (-0x4)); /* 0x171757A3: fmul dword ptr [edx - 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x171757A6: faddp st(1) */
    fp_push(_st[0]); /* 0x171757A8: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(esi); /* 0x171757AA: fmul dword ptr [esi] */
    fp_push(_st[1]); /* 0x171757AC: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(edx + (-0x4)); /* 0x171757AE: fmul dword ptr [edx - 4] */
    fp_push(_st[2]); /* 0x171757B1: fld st(2) */
    _st[0] *= (double)*(float*)ADDR(edx); /* 0x171757B3: fmul dword ptr [edx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4C)) = _v; } /* 0x171757B5: fstp dword ptr [ebp - 0x4c] */
    fp_push(*(float*)&MEM32(ebp + (-0x30))); /* 0x171757B8: fld dword ptr [ebp - 0x30] */
    _st[0] -= _st[2]; /* 0x171757BB: fsub st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x171757BD: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ebp + (-0x2C))); /* 0x171757C0: fld dword ptr [ebp - 0x2c] */
    _st[0] -= _st[1]; /* 0x171757C3: fsub st(1) */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x171757C5: fst dword ptr [ebp - 8] */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x171757C8: fstp st(2) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171757CA: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x28))); /* 0x171757CC: fld dword ptr [ebp - 0x28] */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x4C)); /* 0x171757CF: fsub dword ptr [ebp - 0x4c] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x171757D2: fst dword ptr [ebp - 4] */
    fp_push(_st[0]); /* 0x171757D5: fld st(0) */
    _st[0] *= _st[1]; /* 0x171757D7: fmul st(1) */
    fp_push(_st[2]); /* 0x171757D9: fld st(2) */
    _st[0] *= _st[3]; /* 0x171757DB: fmul st(3) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x171757DD: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x171757DF: fld dword ptr [ebp - 0xc] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xC)); /* 0x171757E2: fmul dword ptr [ebp - 0xc] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x171757E5: faddp st(1) */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + 0x18)); /* 0x171757E7: fcomp dword ptr [ebp + 0x18] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171757EA: fnstsw ax */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171757EC: fstp st(0) */
    /* test HI8(eax), 0x41u */ /* 0x171757EE: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171757F1: fstp st(0) */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17175897; /* 0x171757F3: je 0x17175897 */
L_171757F9:
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(0x17001430)); /* 0x171757F9: fcom dword ptr [0x17001430] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171757FF: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x17175801: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_17175830; /* 0x17175804: jp 0x17175830 */
L_17175806:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17175806: fstp st(0) */
    esi = ebp + (-0x3C); /* 0x17175808: lea esi, [ebp - 0x3c] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1717580B: fstp st(0) */
    fp_push(*(float*)&MEM32(edi)); /* 0x1717580D: fld dword ptr [edi] */
    _st[0] -= (double)*(float*)ADDR(ebx); /* 0x1717580F: fsub dword ptr [ebx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x3C)) = _v; } /* 0x17175811: fstp dword ptr [ebp - 0x3c] */
    fp_push(*(float*)&MEM32(ebp + ecx + (-0x104))); /* 0x17175814: fld dword ptr [ebp + ecx - 0x104] */
    _st[0] -= (double)*(float*)ADDR(ebx + 0x4); /* 0x1717581B: fsub dword ptr [ebx + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x38)) = _v; } /* 0x1717581E: fstp dword ptr [ebp - 0x38] */
    fp_push(*(float*)&MEM32(ebp + ecx + (-0x100))); /* 0x17175821: fld dword ptr [ebp + ecx - 0x100] */
    _st[0] -= (double)*(float*)ADDR(ebx + 0x8); /* 0x17175828: fsub dword ptr [ebx + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x34)) = _v; } /* 0x1717582B: fstp dword ptr [ebp - 0x34] */
    goto L_17175868; /* 0x1717582E: jmp 0x17175868 */
L_17175830:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x17175830: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17175832: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x17175834: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1717588E; /* 0x17175837: jne 0x1717588e */
L_17175839:
    eax = MEM32(ebp + 0xC); /* 0x17175839: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1717583C: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1717583D: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)MEM32(ebp + (-0x1C)); /* 0x1717583F: div dword ptr [ebp - 0x1c] */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    esi = ebp + (-0x18); /* 0x17175842: lea esi, [ebp - 0x18] */
    eax = edx + edx * 2; /* 0x17175845: lea eax, [edx + edx*2] */
    eax = ebp + eax * 4 + (-0x108); /* 0x17175848: lea eax, [ebp + eax*4 - 0x108] */
    fp_push(*(float*)&MEM32(eax)); /* 0x1717584F: fld dword ptr [eax] */
    _st[0] -= (double)*(float*)ADDR(ebx); /* 0x17175851: fsub dword ptr [ebx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x17175853: fstp dword ptr [ebp - 0x18] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x17175856: fld dword ptr [eax + 4] */
    _st[0] -= (double)*(float*)ADDR(ebx + 0x4); /* 0x17175859: fsub dword ptr [ebx + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x1717585C: fstp dword ptr [ebp - 0x14] */
    fp_push(*(float*)&MEM32(eax + 0x8)); /* 0x1717585F: fld dword ptr [eax + 8] */
    _st[0] -= (double)*(float*)ADDR(ebx + 0x8); /* 0x17175862: fsub dword ptr [ebx + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x17175865: fstp dword ptr [ebp - 0x10] */
L_17175868:
    edi = ebp + (-0xC); /* 0x17175868: lea edi, [ebp - 0xc] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1717586B: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1717586C: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1717586D: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x1717586E: fld dword ptr [ebp - 4] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x17175871: fmul dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x17175874: fld dword ptr [ebp - 8] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x8)); /* 0x17175877: fmul dword ptr [ebp - 8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1717587A: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x1717587C: fld dword ptr [ebp - 0xc] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xC)); /* 0x1717587F: fmul dword ptr [ebp - 0xc] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17175882: faddp st(1) */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + 0x18)); /* 0x17175884: fcomp dword ptr [ebp + 0x18] */
    fp_pop();
L_17175887:
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17175887: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x17175889: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1717589B; /* 0x1717588C: jp 0x1717589b */
L_1717588E:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1717588E: fstp st(0) */
    SET_LO8(eax, 1); /* 0x17175890: mov al, 1 */
    RECOMP_BACKEDGE();
    goto L_1717556D; /* 0x17175892: jmp 0x1717556d */
L_17175897:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17175897: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17175899: fstp st(0) */
L_1717589B:
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 1; /* 0x1717589B: inc dword ptr [ebp + 0xc] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + 0xC); /* 0x1717589E: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xCu; /* 0x171758A1: add ecx, 0xc */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(ebp + (-0x1C)) */ /* 0x171758A4: cmp eax, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x1C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171756E3; /* 0x171758A7: jb 0x171756e3 */
L_171758AD:
    RECOMP_BACKEDGE();
    goto L_17175569; /* 0x171758AD: jmp 0x17175569 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_171758B7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171758B7u);

L_171758B7:
    edi = edi; /* 0x171758B7: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171758B9: push ebp */
    ebp = esp; /* 0x171758BA: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xB4u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xB4u; /* 0x171758BC: sub esp, 0xb4 */
    _flag_k = FK_CMP;
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x171758C2: fld dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0x24); /* 0x171758C5: mov eax, dword ptr [ebp + 0x24] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x1C); /* 0x171758C8: fmul dword ptr [ebp + 0x1c] */
    MEM32(ebp + (-0x48)) = eax; /* 0x171758CB: mov dword ptr [ebp - 0x48], eax */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x171758CE: fld dword ptr [ebp + 0xc] */
    eax = MEM32(ebp + 0x28); /* 0x171758D1: mov eax, dword ptr [ebp + 0x28] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x18); /* 0x171758D4: fmul dword ptr [ebp + 0x18] */
    MEM32(ebp + (-0x44)) = eax; /* 0x171758D7: mov dword ptr [ebp - 0x44], eax */
    eax = MEM32(ebp + 0x2C); /* 0x171758DA: mov eax, dword ptr [ebp + 0x2c] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x2C)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x2C) = MEM32(ebp + 0x2C) & 0; /* 0x171758DD: and dword ptr [ebp + 0x2c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    { double _v = fp_pop(); _st[0] += _v; } /* 0x171758E1: faddp st(1) */
    PUSH32(esp, ebx); /* 0x171758E3: push ebx */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x171758E4: fld dword ptr [ebp + 8] */
    ebx = ecx; /* 0x171758E7: mov ebx, ecx */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x14); /* 0x171758E9: fmul dword ptr [ebp + 0x14] */
    edx = MEM32(ebx + 0x104); /* 0x171758EC: mov edx, dword ptr [ebx + 0x104] */
    ecx = MEM32(edx + 0x1C); /* 0x171758F2: mov ecx, dword ptr [edx + 0x1c] */
    MEM32(ebp + (-0x40)) = eax; /* 0x171758F5: mov dword ptr [ebp - 0x40], eax */
    eax = MEM32(ebx + 0x3C); /* 0x171758F8: mov eax, dword ptr [ebx + 0x3c] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x171758FB: faddp st(1) */
    MEM32(ebp + (-0x14)) = eax; /* 0x171758FD: mov dword ptr [ebp - 0x14], eax */
    eax = MEM32(ebx + 0x40); /* 0x17175900: mov eax, dword ptr [ebx + 0x40] */
    _st[0] = -_st[0]; /* 0x17175903: fchs  */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1FFFFFFFu);
    ecx = ecx & 0x1FFFFFFFu; /* 0x17175905: and ecx, 0x1fffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _st[0] -= (double)*(float*)ADDR(0x17005DA4); /* 0x1717590B: fsub dword ptr [0x17005da4] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x28)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x28) = MEM32(ebp + 0x28) & 0; /* 0x17175911: and dword ptr [ebp + 0x28], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x18)) = eax; /* 0x17175915: mov dword ptr [ebp - 0x18], eax */
    PUSH32(esp, esi); /* 0x17175918: push esi */
    eax = ebp + (-0x6C); /* 0x17175919: lea eax, [ebp - 0x6c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x1717591C: fstp dword ptr [ebp - 0xc] */
    PUSH32(esp, edi); /* 0x1717591F: push edi */
    MEM32(ebp + (-0x20)) = edx; /* 0x17175920: mov dword ptr [ebp - 0x20], edx */
    MEM32(ebp + (-0x24)) = ecx; /* 0x17175923: mov dword ptr [ebp - 0x24], ecx */
    MEM32(ebp + 0x24) = eax; /* 0x17175926: mov dword ptr [ebp + 0x24], eax */
L_17175929:
    eax = MEM32(ebp + 0x28); /* 0x17175929: mov eax, dword ptr [ebp + 0x28] */
    eax = MEM32(ebp + eax * 4 + (-0x48)); /* 0x1717592C: mov eax, dword ptr [ebp + eax*4 - 0x48] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x14)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x14)); /* 0x17175930: add eax, dword ptr [ebp - 0x14] */
    _flag_k = FK_ADD;
    edi = MEM32(ebp + 0x24); /* 0x17175933: mov edi, dword ptr [ebp + 0x24] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x28)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x28) = MEM32(ebp + 0x28) + 1; /* 0x17175936: inc dword ptr [ebp + 0x28] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebp + 0x24)); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x24) = MEM32(ebp + 0x24) + 0xCu; /* 0x17175939: add dword ptr [ebp + 0x24], 0xc */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + 0x28), 3 */ /* 0x1717593D: cmp dword ptr [ebp + 0x28], 3 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x28)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = eax + eax * 2; /* 0x17175941: lea esi, [eax + eax*2] */
    eax = MEM32(ebx + 0x108); /* 0x17175944: mov eax, dword ptr [ebx + 0x108] */
    esi = eax + esi * 4; /* 0x1717594A: lea esi, [eax + esi*4] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1717594D: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1717594E: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1717594F: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17175929; /* 0x17175950: jb 0x17175929 */
L_17175952:
    /* test ecx, ecx */ /* 0x17175952: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17175962; /* 0x17175954: ja 0x17175962 */
L_17175956:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17175956: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_17175958:
    edi = POP32_VAL(esp); /* 0x17175958: pop edi */
    esi = POP32_VAL(esp); /* 0x17175959: pop esi */
    ebx = POP32_VAL(esp); /* 0x1717595A: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1717595B: leave  */
    RECOMP_FLAGS_OUT(); esp += 44; { RECOMP_REGS_OUT(); return; } /* 0x1717595C: ret 0x28 */
L_1717595F:
    edx = MEM32(ebp + (-0x20)); /* 0x1717595F: mov edx, dword ptr [ebp - 0x20] */
L_17175962:
    eax = MEM32(ebp + 0x2C); /* 0x17175962: mov eax, dword ptr [ebp + 0x2c] */
    if (5u) _cf = (((eax) >> 27) & 1u); /* 0x17175965: shl eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack((eax << 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 5u; /* 0x17175965: shl eax, 5 */
    ecx = eax + edx; /* 0x17175968: lea ecx, [eax + edx] */
    MEM32(ebp + (-0x10)) = ecx; /* 0x1717596B: mov dword ptr [ebp - 0x10], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1717596E: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
L_17175970:
    fp_push(*(float*)&MEM32(ebp + edx + 0x14)); /* 0x17175970: fld dword ptr [ebp + edx + 0x14] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(0x17001430)); /* 0x17175974: fcomp dword ptr [0x17001430] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1717597A: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x1717597C: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1717598E; /* 0x1717597F: jne 0x1717598e */
L_17175981:
    fp_push(*(float*)&MEM32(ecx + edx)); /* 0x17175981: fld dword ptr [ecx + edx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + edx + (-0x3C)) = _v; } /* 0x17175984: fstp dword ptr [ebp + edx - 0x3c] */
    fp_push(*(float*)&MEM32(ecx + edx + 0xC)); /* 0x17175988: fld dword ptr [ecx + edx + 0xc] */
    goto L_17175999; /* 0x1717598C: jmp 0x17175999 */
L_1717598E:
    fp_push(*(float*)&MEM32(ecx + edx + 0xC)); /* 0x1717598E: fld dword ptr [ecx + edx + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + edx + (-0x3C)) = _v; } /* 0x17175992: fstp dword ptr [ebp + edx - 0x3c] */
    fp_push(*(float*)&MEM32(ecx + edx)); /* 0x17175996: fld dword ptr [ecx + edx] */
L_17175999:
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + edx + (-0x30)) = _v; } /* 0x17175999: fstp dword ptr [ebp + edx - 0x30] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x1717599D: add edx, 4 */
    _flag_k = FK_ADD;
    /* cmp edx, 0xCu */ /* 0x171759A0: cmp edx, 0xc */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17175970; /* 0x171759A3: jb 0x17175970 */
L_171759A5:
    fp_push(*(float*)&MEM32(ebp + (-0x34))); /* 0x171759A5: fld dword ptr [ebp - 0x34] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x1C); /* 0x171759A8: fmul dword ptr [ebp + 0x1c] */
    fp_push(*(float*)&MEM32(ebp + (-0x38))); /* 0x171759AB: fld dword ptr [ebp - 0x38] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x18); /* 0x171759AE: fmul dword ptr [ebp + 0x18] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x171759B1: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x3C))); /* 0x171759B3: fld dword ptr [ebp - 0x3c] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x14); /* 0x171759B6: fmul dword ptr [ebp + 0x14] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x171759B9: faddp st(1) */
    _st[0] += (double)*(float*)ADDR(ebp + (-0xC)); /* 0x171759BB: fadd dword ptr [ebp - 0xc] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(0x17001430)); /* 0x171759BE: fcomp dword ptr [0x17001430] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171759C4: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x171759C6: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171759F5; /* 0x171759C9: je 0x171759f5 */
L_171759CB:
    fp_push(*(float*)&MEM32(ebp + (-0x28))); /* 0x171759CB: fld dword ptr [ebp - 0x28] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x1C); /* 0x171759CE: fmul dword ptr [ebp + 0x1c] */
    fp_push(*(float*)&MEM32(ebp + (-0x2C))); /* 0x171759D1: fld dword ptr [ebp - 0x2c] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x18); /* 0x171759D4: fmul dword ptr [ebp + 0x18] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x171759D7: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x30))); /* 0x171759D9: fld dword ptr [ebp - 0x30] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x14); /* 0x171759DC: fmul dword ptr [ebp + 0x14] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x171759DF: faddp st(1) */
    _st[0] += (double)*(float*)ADDR(ebp + (-0xC)); /* 0x171759E1: fadd dword ptr [ebp - 0xc] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(0x17001430)); /* 0x171759E4: fcomp dword ptr [0x17001430] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171759EA: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x171759EC: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17175BF6; /* 0x171759EF: jne 0x17175bf6 */
L_171759F5:
    MEM32(ebp + 0x24) = ecx; /* 0x171759F5: mov dword ptr [ebp + 0x24], ecx */
    fp_push(0.0); /* 0x171759F8: fldz  */
    eax = ebp + 0x8; /* 0x171759FA: lea eax, [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171759FD: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + 0x24)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + 0x24) = MEM32(ebp + 0x24) - eax; /* 0x171759FF: sub dword ptr [ebp + 0x24], eax */
    _flag_k = FK_CMP;
L_17175A02:
    eax = MEM32(ebp + 0x24); /* 0x17175A02: mov eax, dword ptr [ebp + 0x24] */
    edx = ebp + edi * 4 + 0x8; /* 0x17175A05: lea edx, [ebp + edi*4 + 8] */
    fp_push(*(float*)&MEM32(edx)); /* 0x17175A09: fld dword ptr [edx] */
    esi = eax + edi * 4; /* 0x17175A0B: lea esi, [eax + edi*4] */
    esi = ebp + esi + 0x8; /* 0x17175A0E: lea esi, [ebp + esi + 8] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(esi)); /* 0x17175A12: fcomp dword ptr [esi] */
    fp_pop();
    fp_push(*(float*)&MEM32(edx)); /* 0x17175A14: fld dword ptr [edx] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17175A16: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x17175A18: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_17175A21; /* 0x17175A1B: jp 0x17175a21 */
L_17175A1D:
    _st[0] -= (double)*(float*)ADDR(esi); /* 0x17175A1D: fsub dword ptr [esi] */
    goto L_17175A30; /* 0x17175A1F: jmp 0x17175a30 */
L_17175A21:
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(esi + 0xC)); /* 0x17175A21: fcomp dword ptr [esi + 0xc] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17175A24: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x17175A26: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17175A38; /* 0x17175A29: jne 0x17175a38 */
L_17175A2B:
    fp_push(*(float*)&MEM32(edx)); /* 0x17175A2B: fld dword ptr [edx] */
    _st[0] -= (double)*(float*)ADDR(esi + 0xC); /* 0x17175A2D: fsub dword ptr [esi + 0xc] */
L_17175A30:
    fp_push(_st[0]); /* 0x17175A30: fld st(0) */
    _st[0] *= _st[1]; /* 0x17175A32: fmul st(1) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x17175A34: faddp st(2) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17175A36: fstp st(0) */
L_17175A38:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x17175A38: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, 3 */ /* 0x17175A39: cmp edi, 3 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17175A02; /* 0x17175A3C: jb 0x17175a02 */
L_17175A3E:
    fp_push(*(float*)&MEM32(ebp + 0x20)); /* 0x17175A3E: fld dword ptr [ebp + 0x20] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x20); /* 0x17175A41: fmul dword ptr [ebp + 0x20] */
    fp_push(_st[1]); /* 0x17175A44: fld st(1) */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x17175A46: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17175A48: fnstsw ax */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17175A4A: fstp st(0) */
    /* test HI8(eax), 0x41u */ /* 0x17175A4C: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_17175BF6; /* 0x17175A4F: jp 0x17175bf6 */
L_17175A55:
    eax = MEM32(ecx + 0x1C); /* 0x17175A55: mov eax, dword ptr [ecx + 0x1c] */
    if (29u) _cf = (((eax) >> 28) & 1u); /* 0x17175A58: shr eax, 0x1d */
    if (29u) { _flag_a = recomp_flags_pack((eax >> 29u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 29u; /* 0x17175A58: shr eax, 0x1d */
    MEM32(ebp + (-0x1C)) = eax; /* 0x17175A5B: mov dword ptr [ebp - 0x1c], eax */
    MEM32(ebp + 0x28) = 0; /* 0x17175A5E: mov dword ptr [ebp + 0x28], 0 */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_17175BF1; /* 0x17175A65: je 0x17175bf1 */
L_17175A6B:
    eax = MEM32(ecx + 0x18); /* 0x17175A6B: mov eax, dword ptr [ecx + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x28));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + 0x28); /* 0x17175A6E: add eax, dword ptr [ebp + 0x28] */
    _flag_k = FK_ADD;
    ecx = MEM32(ebx + 0xB8); /* 0x17175A71: mov ecx, dword ptr [ebx + 0xb8] */
    ecx = MEM32(ecx + eax * 4); /* 0x17175A77: mov ecx, dword ptr [ecx + eax*4] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x17175A7A: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, MEM32(ebp + (-0x18)) */ /* 0x17175A7E: cmp ecx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x18)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM8(ebp + 0x27) = (uint8_t)(1); /* 0x17175A81: mov byte ptr [ebp + 0x27], 1 */
    { uint32_t _sa = esi, _sb = esi, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x17175A85: sbb esi, esi */
      esi = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    esi = ~esi; /* 0x17175A87: not esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x14)));
    esi = esi & MEM32(ebp + (-0x14)); /* 0x17175A89: and esi, dword ptr [ebp - 0x14] */
    _cf = 0;
    _flag_k = FK_TEST;
L_17175A8C:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x17175A8C: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_17175A90:
    eax = MEM32(ebp + (-0x4)); /* 0x17175A90: mov eax, dword ptr [ebp - 4] */
    edx = MEM32(ebp + (-0x8)); /* 0x17175A93: mov edx, dword ptr [ebp - 8] */
    edi = eax + eax * 2; /* 0x17175A96: lea edi, [eax + eax*2] */
    eax = ecx + ecx * 2; /* 0x17175A99: lea eax, [ecx + ecx*2] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x17175A9C: add edx, eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebx + 0x24); /* 0x17175A9E: mov eax, dword ptr [ebx + 0x24] */
    eax = MEM32(eax + edx * 4); /* 0x17175AA1: mov eax, dword ptr [eax + edx*4] */
    edx = MEM32(ebx + 0x108); /* 0x17175AA4: mov edx, dword ptr [ebx + 0x108] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x17175AAA: add eax, esi */
    _flag_k = FK_ADD;
    eax = eax + eax * 2; /* 0x17175AAC: lea eax, [eax + eax*2] */
    eax = edx + eax * 4; /* 0x17175AAF: lea eax, [edx + eax*4] */
    fp_push(*(float*)&MEM32(eax)); /* 0x17175AB2: fld dword ptr [eax] */
    edi = ebp + edi * 4 + (-0x6C); /* 0x17175AB4: lea edi, [ebp + edi*4 - 0x6c] */
    _st[0] -= (double)*(float*)ADDR(edi); /* 0x17175AB8: fsub dword ptr [edi] */
    PUSH32(esp, 3); /* 0x17175ABA: push 3 */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x17175ABC: fld dword ptr [eax + 4] */
    _st[0] -= (double)*(float*)ADDR(edi + 0x4); /* 0x17175ABF: fsub dword ptr [edi + 4] */
    fp_push(*(float*)&MEM32(eax + 0x8)); /* 0x17175AC2: fld dword ptr [eax + 8] */
    _st[0] -= (double)*(float*)ADDR(edi + 0x8); /* 0x17175AC5: fsub dword ptr [edi + 8] */
    fp_push(_st[0]); /* 0x17175AC8: fld st(0) */
    _st[0] *= _st[1]; /* 0x17175ACA: fmul st(1) */
    fp_push(_st[2]); /* 0x17175ACC: fld st(2) */
    _st[0] *= _st[3]; /* 0x17175ACE: fmul st(3) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17175AD0: faddp st(1) */
    fp_push(_st[3]); /* 0x17175AD2: fld st(3) */
    _st[0] *= _st[4]; /* 0x17175AD4: fmul st(4) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17175AD6: faddp st(1) */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(0x17021F00)); /* 0x17175AD8: fcomp dword ptr [0x17021f00] */
    fp_pop();
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17175ADE: fstp st(0) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17175AE0: fnstsw ax */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17175AE2: fstp st(0) */
    /* test HI8(eax), 0x41u */ /* 0x17175AE4: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17175AE7: fstp st(0) */
    eax = POP32_VAL(esp); /* 0x17175AE9: pop eax */
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_17175AF6; /* 0x17175AEA: jp 0x17175af6 */
L_17175AEC:
    MEM8(ebp + 0x27) = (uint8_t)(0); /* 0x17175AEC: mov byte ptr [ebp + 0x27], 0 */
    MEM32(ebp + (-0x4)) = eax; /* 0x17175AF0: mov dword ptr [ebp - 4], eax */
    MEM32(ebp + (-0x8)) = eax; /* 0x17175AF3: mov dword ptr [ebp - 8], eax */
L_17175AF6:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) + 1; /* 0x17175AF6: inc dword ptr [ebp - 8] */
    _flag_k = FK_INC;
    /* cmp MEM32(ebp + (-0x8)), eax */ /* 0x17175AF9: cmp dword ptr [ebp - 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17175A90; /* 0x17175AFC: jb 0x17175a90 */
L_17175AFE:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 1; /* 0x17175AFE: inc dword ptr [ebp - 4] */
    _flag_k = FK_INC;
    /* cmp MEM32(ebp + (-0x4)), 3 */ /* 0x17175B01: cmp dword ptr [ebp - 4], 3 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17175A8C; /* 0x17175B05: jb 0x17175a8c */
L_17175B07:
    /* cmp MEM8(ebp + 0x27), 0 */ /* 0x17175B07: cmp byte ptr [ebp + 0x27], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x27)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17175BDF; /* 0x17175B0B: je 0x17175bdf */
L_17175B11:
    /* cmp ecx, MEM32(ebp + (-0x18)) */ /* 0x17175B11: cmp ecx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x18)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_17175B86; /* 0x17175B14: jb 0x17175b86 */
L_17175B16:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x17175B16: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_17175B18:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x17175B18: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
L_17175B1A:
    esi = MEM32(ebx + 0x24); /* 0x17175B1A: mov esi, dword ptr [ebx + 0x24] */
    eax = ecx + ecx * 2; /* 0x17175B1D: lea eax, [ecx + ecx*2] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x17175B20: add eax, edx */
    _flag_k = FK_ADD;
    eax = MEM32(esi + eax * 4); /* 0x17175B22: mov eax, dword ptr [esi + eax*4] */
    /* cmp eax, MEM32(ebp + edi * 4 + (-0x48)) */ /* 0x17175B25: cmp eax, dword ptr [ebp + edi*4 - 0x48] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + edi * 4 + (-0x48)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17175B34; /* 0x17175B29: jne 0x17175b34 */
L_17175B2B:
    PUSH32(esp, 3); /* 0x17175B2B: push 3 */
    edx = POP32_VAL(esp); /* 0x17175B2D: pop edx */
    MEM8(ebp + 0x27) = (uint8_t)(0); /* 0x17175B2E: mov byte ptr [ebp + 0x27], 0 */
    edi = edx; /* 0x17175B32: mov edi, edx */
L_17175B34:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x17175B34: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, 3 */ /* 0x17175B35: cmp edx, 3 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17175B1A; /* 0x17175B38: jb 0x17175b1a */
L_17175B3A:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x17175B3A: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, 3 */ /* 0x17175B3B: cmp edi, 3 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17175B18; /* 0x17175B3E: jb 0x17175b18 */
L_17175B40:
    /* cmp MEM8(ebp + 0x27), 0 */ /* 0x17175B40: cmp byte ptr [ebp + 0x27], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x27)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17175BDF; /* 0x17175B44: je 0x17175bdf */
L_17175B4A:
    eax = ecx + ecx * 2; /* 0x17175B4A: lea eax, [ecx + ecx*2] */
    edx = ebp + (-0x90); /* 0x17175B4D: lea edx, [ebp - 0x90] */
    ecx = esi + eax * 4; /* 0x17175B53: lea ecx, [esi + eax*4] */
    MEM32(ebp + 0x24) = 3; /* 0x17175B56: mov dword ptr [ebp + 0x24], 3 */
L_17175B5D:
    eax = MEM32(ecx); /* 0x17175B5D: mov eax, dword ptr [ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x14)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x14)); /* 0x17175B5F: add eax, dword ptr [ebp - 0x14] */
    _flag_k = FK_ADD;
    edi = edx; /* 0x17175B62: mov edi, edx */
    esi = eax + eax * 2; /* 0x17175B64: lea esi, [eax + eax*2] */
    eax = MEM32(ebx + 0x108); /* 0x17175B67: mov eax, dword ptr [ebx + 0x108] */
    esi = eax + esi * 4; /* 0x17175B6D: lea esi, [eax + esi*4] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17175B70: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17175B71: movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x17175B72: add ecx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0xCu; /* 0x17175B75: add edx, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0x24)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x24) = MEM32(ebp + 0x24) - 1; /* 0x17175B78: dec dword ptr [ebp + 0x24] */
    _flag_k = FK_DEC;
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17175B7B: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_17175B5D; /* 0x17175B7C: jne 0x17175b5d */
L_17175B7E:
    eax = ebp + (-0x90); /* 0x17175B7E: lea eax, [ebp - 0x90] */
    goto L_17175BBF; /* 0x17175B84: jmp 0x17175bbf */
L_17175B86:
    eax = ebp + (-0xB4); /* 0x17175B86: lea eax, [ebp - 0xb4] */
    MEM32(ebp + 0x24) = eax; /* 0x17175B8C: mov dword ptr [ebp + 0x24], eax */
    eax = MEM32(ebx + 0x24); /* 0x17175B8F: mov eax, dword ptr [ebx + 0x24] */
    ecx = ecx + ecx * 2; /* 0x17175B92: lea ecx, [ecx + ecx*2] */
    ecx = eax + ecx * 4; /* 0x17175B95: lea ecx, [eax + ecx*4] */
    MEM32(ebp + (-0x4)) = 3; /* 0x17175B98: mov dword ptr [ebp - 4], 3 */
L_17175B9F:
    eax = MEM32(ecx); /* 0x17175B9F: mov eax, dword ptr [ecx] */
    edi = MEM32(ebp + 0x24); /* 0x17175BA1: mov edi, dword ptr [ebp + 0x24] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x24)); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x24) = MEM32(ebp + 0x24) + 0xCu; /* 0x17175BA4: add dword ptr [ebp + 0x24], 0xc */
    _flag_k = FK_ADD;
    eax = eax + eax * 2; /* 0x17175BA8: lea eax, [eax + eax*2] */
    esi = edx + eax * 4; /* 0x17175BAB: lea esi, [edx + eax*4] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17175BAE: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17175BAF: movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x17175BB0: add ecx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) - 1; /* 0x17175BB3: dec dword ptr [ebp - 4] */
    _flag_k = FK_DEC;
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17175BB6: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_17175B9F; /* 0x17175BB7: jne 0x17175b9f */
L_17175BB9:
    eax = ebp + (-0xB4); /* 0x17175BB9: lea eax, [ebp - 0xb4] */
L_17175BBF:
    fp_push(*(float*)&MEM32(ebp + 0x20)); /* 0x17175BBF: fld dword ptr [ebp + 0x20] */
    PUSH32(esp, eax); /* 0x17175BC2: push eax */
    PUSH32(esp, ecx); /* 0x17175BC3: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x17175BC4: fstp dword ptr [esp] */
    eax = ebp + 0x8; /* 0x17175BC7: lea eax, [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x17175BCA: fld dword ptr [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x17175BCD: push eax */
    PUSH32(esp, ecx); /* 0x17175BCE: push ecx */
    eax = ebp + 0x14; /* 0x17175BCF: lea eax, [ebp + 0x14] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x17175BD2: fstp dword ptr [esp] */
    PUSH32(esp, eax); /* 0x17175BD5: push eax */
    RECOMP_CALL(sub_17175154); /* 0x17175BD6: call 0x17175154 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x17175BDB: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17175C13; /* 0x17175BDD: jne 0x17175c13 */
L_17175BDF:
    _flag_a = (uint32_t)(MEM32(ebp + 0x28)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x28) = MEM32(ebp + 0x28) + 1; /* 0x17175BDF: inc dword ptr [ebp + 0x28] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + 0x28); /* 0x17175BE2: mov eax, dword ptr [ebp + 0x28] */
    /* cmp eax, MEM32(ebp + (-0x1C)) */ /* 0x17175BE5: cmp eax, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x1C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + (-0x10)); /* 0x17175BE8: mov ecx, dword ptr [ebp - 0x10] */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17175A6B; /* 0x17175BEB: jb 0x17175a6b */
L_17175BF1:
    _flag_a = (uint32_t)(MEM32(ebp + 0x2C)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x2C) = MEM32(ebp + 0x2C) + 1; /* 0x17175BF1: inc dword ptr [ebp + 0x2c] */
    _flag_k = FK_INC;
    goto L_17175C02; /* 0x17175BF4: jmp 0x17175c02 */
L_17175BF6:
    ecx = MEM32(ecx + 0x1C); /* 0x17175BF6: mov ecx, dword ptr [ecx + 0x1c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1FFFFFFFu);
    ecx = ecx & 0x1FFFFFFFu; /* 0x17175BF9: and ecx, 0x1fffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x2C) = ecx; /* 0x17175BFF: mov dword ptr [ebp + 0x2c], ecx */
L_17175C02:
    eax = MEM32(ebp + 0x2C); /* 0x17175C02: mov eax, dword ptr [ebp + 0x2c] */
    /* cmp eax, MEM32(ebp + (-0x24)) */ /* 0x17175C05: cmp eax, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x24)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1717595F; /* 0x17175C08: jb 0x1717595f */
L_17175C0E:
    RECOMP_BACKEDGE();
    goto L_17175956; /* 0x17175C0E: jmp 0x17175956 */
L_17175C13:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17175C13: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17175C15: inc eax */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_17175958; /* 0x17175C16: jmp 0x17175958 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_17175C20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17175C20u);

L_17175C20:
    edi = edi; /* 0x17175C20: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17175C22: push ebp */
    ebp = esp; /* 0x17175C23: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x17175C25: sub esp, 0x18 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x17175C28: push esi */
    esi = MEM32(ebp + 0xC); /* 0x17175C29: mov esi, dword ptr [ebp + 0xc] */
    eax = MEM32(ebp + 0x8); /* 0x17175C2C: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x17175C2F: push edi */
    ecx = MEM32(eax + 0x4); /* 0x17175C30: mov ecx, dword ptr [eax + 4] */
    edi = ebp + (-0x18); /* 0x17175C33: lea edi, [ebp - 0x18] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17175C36: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17175C37: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17175C38: movsd dword ptr es:[edi], dword ptr [esi] */
    esi = MEM32(ebp + 0x10); /* 0x17175C39: mov esi, dword ptr [ebp + 0x10] */
    edi = ebp + (-0xC); /* 0x17175C3C: lea edi, [ebp - 0xc] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17175C3F: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17175C40: movsd dword ptr es:[edi], dword ptr [esi] */
    edx = ebp + (-0x18); /* 0x17175C41: lea edx, [ebp - 0x18] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17175C44: movsd dword ptr es:[edi], dword ptr [esi] */
    eax = MEM32(ecx); /* 0x17175C45: mov eax, dword ptr [ecx] */
    PUSH32(esp, edx); /* 0x17175C47: push edx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x17175C48: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x17175C4B: pop edi */
    esi = POP32_VAL(esp); /* 0x17175C4C: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17175C4D: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x17175C4E: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_17175C56(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17175C56u);

L_17175C56:
    edi = edi; /* 0x17175C56: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17175C58: push ebp */
    ebp = esp; /* 0x17175C59: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x17175C5B: sub esp, 0x28 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x17175C5E: push esi */
    esi = MEM32(ebp + 0xC); /* 0x17175C5F: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x17175C62: push edi */
    edi = ebp + (-0x28); /* 0x17175C63: lea edi, [ebp - 0x28] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17175C66: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17175C67: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17175C68: movsd dword ptr es:[edi], dword ptr [esi] */
    esi = MEM32(ebp + 0x10); /* 0x17175C69: mov esi, dword ptr [ebp + 0x10] */
    edi = ebp + (-0x1C); /* 0x17175C6C: lea edi, [ebp - 0x1c] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17175C6F: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17175C70: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17175C71: movsd dword ptr es:[edi], dword ptr [esi] */
    esi = MEM32(ebp + 0x8); /* 0x17175C72: mov esi, dword ptr [ebp + 8] */
    ecx = MEM32(esi + 0x4); /* 0x17175C75: mov ecx, dword ptr [esi + 4] */
    eax = MEM32(ecx); /* 0x17175C78: mov eax, dword ptr [ecx] */
    edx = ebp + (-0x10); /* 0x17175C7A: lea edx, [ebp - 0x10] */
    PUSH32(esp, edx); /* 0x17175C7D: push edx */
    edx = ebp + (-0x28); /* 0x17175C7E: lea edx, [ebp - 0x28] */
    PUSH32(esp, edx); /* 0x17175C81: push edx */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x17175C82: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17175C85: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17175CC2; /* 0x17175C87: je 0x17175cc2 */
L_17175C89:
    ecx = MEM32(ebp + 0x20); /* 0x17175C89: mov ecx, dword ptr [ebp + 0x20] */
    /* test ecx, ecx */ /* 0x17175C8C: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17175C9E; /* 0x17175C8E: je 0x17175c9e */
L_17175C90:
    edx = MEM32(esi + 0x4); /* 0x17175C90: mov edx, dword ptr [esi + 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x17175C93: fld dword ptr [ebp - 0x10] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x94); /* 0x17175C96: fmul dword ptr [edx + 0x94] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx) = _v; } /* 0x17175C9C: fstp dword ptr [ecx] */
L_17175C9E:
    ecx = MEM32(ebp + 0x14); /* 0x17175C9E: mov ecx, dword ptr [ebp + 0x14] */
    /* test ecx, ecx */ /* 0x17175CA1: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17175CAA; /* 0x17175CA3: je 0x17175caa */
L_17175CA5:
    edx = MEM32(ebp + (-0xC)); /* 0x17175CA5: mov edx, dword ptr [ebp - 0xc] */
    MEM32(ecx) = edx; /* 0x17175CA8: mov dword ptr [ecx], edx */
L_17175CAA:
    ecx = MEM32(ebp + 0x18); /* 0x17175CAA: mov ecx, dword ptr [ebp + 0x18] */
    /* test ecx, ecx */ /* 0x17175CAD: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17175CB6; /* 0x17175CAF: je 0x17175cb6 */
L_17175CB1:
    edx = MEM32(ebp + (-0x8)); /* 0x17175CB1: mov edx, dword ptr [ebp - 8] */
    MEM32(ecx) = edx; /* 0x17175CB4: mov dword ptr [ecx], edx */
L_17175CB6:
    ecx = MEM32(ebp + 0x1C); /* 0x17175CB6: mov ecx, dword ptr [ebp + 0x1c] */
    /* test ecx, ecx */ /* 0x17175CB9: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17175CC2; /* 0x17175CBB: je 0x17175cc2 */
L_17175CBD:
    edx = MEM32(ebp + (-0x4)); /* 0x17175CBD: mov edx, dword ptr [ebp - 4] */
    MEM32(ecx) = edx; /* 0x17175CC0: mov dword ptr [ecx], edx */
L_17175CC2:
    edi = POP32_VAL(esp); /* 0x17175CC2: pop edi */
    esi = POP32_VAL(esp); /* 0x17175CC3: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17175CC4: leave  */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x17175CC5: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_17175CCD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17175CCDu);

L_17175CCD:
    edi = edi; /* 0x17175CCD: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17175CCF: push ebp */
    ebp = esp; /* 0x17175CD0: mov ebp, esp */
    PUSH32(esp, esi); /* 0x17175CD2: push esi */
    esi = ecx; /* 0x17175CD3: mov esi, ecx */
    eax = MEM32(esi + 0x8); /* 0x17175CD5: mov eax, dword ptr [esi + 8] */
    /* cmp MEM32(esi + 0x4), eax */ /* 0x17175CD8: cmp dword ptr [esi + 4], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_17175CF1; /* 0x17175CDB: jne 0x17175cf1 */
L_17175CDD:
    /* test eax, eax */ /* 0x17175CDD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17175CE6; /* 0x17175CDF: je 0x17175ce6 */
L_17175CE1:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x17175CE1: add eax, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x17175CE3: push eax */
    goto L_17175CE8; /* 0x17175CE4: jmp 0x17175ce8 */
L_17175CE6:
    PUSH32(esp, 8); /* 0x17175CE6: push 8 */
L_17175CE8:
    RECOMP_CALL(sub_17194548); /* 0x17175CE8: call 0x17194548 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17175CED: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17175D01; /* 0x17175CEF: jl 0x17175d01 */
L_17175CF1:
    eax = MEM32(esi + 0x4); /* 0x17175CF1: mov eax, dword ptr [esi + 4] */
    ecx = MEM32(esi); /* 0x17175CF4: mov ecx, dword ptr [esi] */
    edx = MEM32(ebp + 0x8); /* 0x17175CF6: mov edx, dword ptr [ebp + 8] */
    MEM32(ecx + eax * 4) = edx; /* 0x17175CF9: mov dword ptr [ecx + eax*4], edx */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) + 1; /* 0x17175CFC: inc dword ptr [esi + 4] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17175CFF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_17175D01:
    esi = POP32_VAL(esp); /* 0x17175D01: pop esi */
    ebp = POP32_VAL(esp); /* 0x17175D02: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x17175D03: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_17175D0B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17175D0Bu);

L_17175D0B:
    edi = edi; /* 0x17175D0B: mov edi, edi */
    PUSH32(esp, esi); /* 0x17175D0D: push esi */
    esi = ecx; /* 0x17175D0E: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17175D10: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 8); /* 0x17175D12: push 8 */
    MEM32(esi) = eax; /* 0x17175D14: mov dword ptr [esi], eax */
    MEM32(esi + 0x4) = eax; /* 0x17175D16: mov dword ptr [esi + 4], eax */
    MEM32(esi + 0x8) = eax; /* 0x17175D19: mov dword ptr [esi + 8], eax */
    RECOMP_CALL(sub_17174FBB); /* 0x17175D1C: call 0x17174fbb */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0xC) = eax; /* 0x17175D21: mov dword ptr [esi + 0xc], eax */
    eax = esi; /* 0x17175D24: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x17175D26: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x17175D27: ret  */
    RECOMP_REGS_OUT();
}

void sub_17175D2D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17175D2Du);

L_17175D2D:
    edi = edi; /* 0x17175D2D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17175D2F: push ebp */
    ebp = esp; /* 0x17175D30: mov ebp, esp */
    PUSH32(esp, esi); /* 0x17175D32: push esi */
    PUSH32(esp, edi); /* 0x17175D33: push edi */
    edi = MEM32(ebp + 0x8); /* 0x17175D34: mov edi, dword ptr [ebp + 8] */
    esi = ecx; /* 0x17175D37: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17175D39: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x8), edi */ /* 0x17175D3B: cmp dword ptr [esi + 8], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_17175D46; /* 0x17175D3E: jae 0x17175d46 */
L_17175D40:
    PUSH32(esp, edi); /* 0x17175D40: push edi */
    RECOMP_CALL(sub_17174FBB); /* 0x17175D41: call 0x17174fbb */
    RECOMP_FLAGS_IN();
L_17175D46:
    MEM32(esi + 0x4) = edi; /* 0x17175D46: mov dword ptr [esi + 4], edi */
    edi = POP32_VAL(esp); /* 0x17175D49: pop edi */
    esi = POP32_VAL(esp); /* 0x17175D4A: pop esi */
    ebp = POP32_VAL(esp); /* 0x17175D4B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x17175D4C: ret 4 */
    RECOMP_REGS_OUT();
}
