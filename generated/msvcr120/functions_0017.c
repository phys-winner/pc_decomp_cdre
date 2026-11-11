#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_1006F81C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006F81Cu);

L_1006F81C:
    PUSH32(esp, MEM32(ecx + 0x24)); /* 0x1006F81C: push dword ptr [ecx + 0x24] */
    RECOMP_CALL(sub_1000ECE0); /* 0x1006F81F: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1006F824: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006F825: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006F82A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006F82Au);

L_1006F82A:
    PUSH32(esp, ebp); /* 0x1006F82A: push ebp */
    ebp = esp; /* 0x1006F82B: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1006F82D: push esi */
    esi = (uint32_t)MEM16(ecx); /* 0x1006F82E: movzx esi, word ptr [ecx] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1006F831: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1006F833: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1006F835: push edi */
    /* cmp LO16(eax), LO16(esi) */ /* 0x1006F836: cmp ax, si */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_AE(_flag_a, _flag_b)) goto L_1006F855; /* 0x1006F839: jae 0x1006f855 */
L_1006F83B:
    ecx = MEM32(ecx + 0x4); /* 0x1006F83B: mov ecx, dword ptr [ecx + 4] */
    SET_LO16(edi, MEM16(ebp + 0x8)); /* 0x1006F83E: mov di, word ptr [ebp + 8] */
L_1006F842:
    eax = (uint32_t)LO16(edx); /* 0x1006F842: movzx eax, dx */
    eax = (uint32_t)((int32_t)eax * (int32_t)0xCu); /* 0x1006F845: imul eax, eax, 0xc */
    /* cmp MEM16(eax + ecx + 0x4), LO16(edi) */ /* 0x1006F848: cmp word ptr [eax + ecx + 4], di */
    _flag_a = (uint32_t)(MEM16(eax + ecx + 0x4)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006F85D; /* 0x1006F84D: je 0x1006f85d */
L_1006F84F:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1006F84F: inc edx */
    _flag_k = FK_INC;
    /* cmp LO16(edx), LO16(esi) */ /* 0x1006F850: cmp dx, si */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1006F842; /* 0x1006F853: jb 0x1006f842 */
L_1006F855:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1006F855: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1006F857:
    edi = POP32_VAL(esp); /* 0x1006F857: pop edi */
    esi = POP32_VAL(esp); /* 0x1006F858: pop esi */
    ebp = POP32_VAL(esp); /* 0x1006F859: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1006F85A: ret 4 */
L_1006F85D:
    eax = (uint32_t)LO16(edx); /* 0x1006F85D: movzx eax, dx */
    eax = (uint32_t)((int32_t)eax * (int32_t)0xCu); /* 0x1006F860: imul eax, eax, 0xc */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1006F863: add eax, ecx */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_1006F857; /* 0x1006F865: jmp 0x1006f857 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1006F867(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006F867u);

L_1006F867:
    PUSH32(esp, ecx); /* 0x1006F867: push ecx */
    RECOMP_CALL(sub_10025D05); /* 0x1006F868: call 0x10025d05 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1006F86D: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006F86E: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006F86F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006F86Fu);

L_1006F86F:
    PUSH32(esp, ecx); /* 0x1006F86F: push ecx */
    RECOMP_CALL(sub_100258DA); /* 0x1006F870: call 0x100258da */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1006F875: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006F876: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006F877(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006F877u);

L_1006F877:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1006F877: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = 0x100E0670u; /* 0x1006F879: mov ecx, 0x100e0670 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1006F87E: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(ecx), _sum = MEM32(ecx) + eax; eax = _old; MEM32(ecx) = _sum; } /* 0x1006F87F: lock xadd dword ptr [ecx], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1006F883: inc eax */
    _flag_k = FK_INC;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006F884: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006F885(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006F885u);

L_1006F885:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1006F885: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = 0x100E29ACu; /* 0x1006F887: mov ecx, 0x100e29ac */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1006F88C: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(ecx), _sum = MEM32(ecx) + eax; eax = _old; MEM32(ecx) = _sum; } /* 0x1006F88D: lock xadd dword ptr [ecx], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1006F891: inc eax */
    _flag_k = FK_INC;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006F892: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006F893(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006F893u);

L_1006F893:
    PUSH32(esp, ebp); /* 0x1006F893: push ebp */
    ebp = esp; /* 0x1006F894: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x1006F896: mov ecx, dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x1006F899: pop ebp */
    goto L_1006FABF; /* 0x1006F89A: jmp 0x1006fabf */
L_1006FABF:
    PUSH32(esp, 0x30u); /* 0x1006FABF: push 0x30 */
    eax = 0x100DB510u; /* 0x1006FAC1: mov eax, 0x100db510 */
    RECOMP_CALL(sub_10025BA2); /* 0x1006FAC6: call 0x10025ba2 */
    RECOMP_FLAGS_IN();
    ebx = ecx; /* 0x1006FACB: mov ebx, ecx */
    ecx = 0x100E032Cu; /* 0x1006FACD: mov ecx, 0x100e032c */
    MEM32(ebp + (-0x3C)) = ecx; /* 0x1006FAD2: mov dword ptr [ebp - 0x3c], ecx */
    RECOMP_CALL(sub_10023D1E); /* 0x1006FAD5: call 0x10023d1e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1006FADA: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(0x100E0AA8), 0 */ /* 0x1006FADE: cmp dword ptr [0x100e0aa8], 0 */
    _flag_a = (uint32_t)(MEM32(0x100E0AA8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006FB04; /* 0x1006FAE5: je 0x1006fb04 */
L_1006FAE7:
    ecx = ebp + (-0x2C); /* 0x1006FAE7: lea ecx, [ebp - 0x2c] */
    RECOMP_CALL(sub_1009DD55); /* 0x1006FAEA: call 0x1009dd55 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x2C)) = 0x10067694u; /* 0x1006FAEF: mov dword ptr [ebp - 0x2c], 0x10067694 */
    eax = ebp + (-0x2C); /* 0x1006FAF6: lea eax, [ebp - 0x2c] */
    PUSH32(esp, 0x100DCF08u); /* 0x1006FAF9: push 0x100dcf08 */
L_1006FAFE:
    PUSH32(esp, eax); /* 0x1006FAFE: push eax */
    RECOMP_CALL(sub_100192EB); /* 0x1006FAFF: call 0x100192eb */
    RECOMP_FLAGS_IN();
L_1006FB04:
    /* cmp MEM32(0x100E03E4), 0 */ /* 0x1006FB04: cmp dword ptr [0x100e03e4], 0 */
    _flag_a = (uint32_t)(MEM32(0x100E03E4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1006FB12; /* 0x1006FB0B: jne 0x1006fb12 */
L_1006FB0D:
    RECOMP_CALL(sub_10026BF4); /* 0x1006FB0D: call 0x10026bf4 */
    RECOMP_FLAGS_IN();
L_1006FB12:
    RECOMP_ICALL(MEM32(0x100E504C)); /* 0x1006FB12: call dword ptr [0x100e504c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1006FB18: push eax */
    ecx = ebp + (-0x1C); /* 0x1006FB19: lea ecx, [ebp - 0x1c] */
    RECOMP_CALL(sub_1006F8AE); /* 0x1006FB1C: call 0x1006f8ae */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xCu); /* 0x1006FB21: push 0xc */
    RECOMP_CALL(sub_1000EE11); /* 0x1006FB23: call 0x1000ee11 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1006FB28: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x1006FB2A: pop ecx */
    /* test esi, esi */ /* 0x1006FB2B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006FB42; /* 0x1006FB2D: je 0x1006fb42 */
L_1006FB2F:
    ecx = (uint32_t)MEM16(ebp + (-0x18)); /* 0x1006FB2F: movzx ecx, word ptr [ebp - 0x18] */
    edi = esi; /* 0x1006FB33: mov edi, esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1006FB35: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi) = eax; edi += _df * 4; /* 0x1006FB37: stosd dword ptr es:[edi], eax */
    MEM32(edi) = eax; edi += _df * 4; /* 0x1006FB38: stosd dword ptr es:[edi], eax */
    MEM32(edi) = eax; edi += _df * 4; /* 0x1006FB39: stosd dword ptr es:[edi], eax */
    MEM16(esi + 0x4) = (uint16_t)(LO16(ecx)); /* 0x1006FB3A: mov word ptr [esi + 4], cx */
    MEM32(esi) = ebx; /* 0x1006FB3E: mov dword ptr [esi], ebx */
    goto L_1006FB44; /* 0x1006FB40: jmp 0x1006fb44 */
L_1006FB42:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1006FB42: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1006FB44:
    RECOMP_CALL(sub_10025BD8); /* 0x1006FB44: call 0x10025bd8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x100E0AB8); /* 0x1006FB49: mov eax, dword ptr [0x100e0ab8] */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(eax);
    MEM32(esi) = MEM32(esi) & eax; /* 0x1006FB4E: and dword ptr [esi], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(esi); /* 0x1006FB50: mov edx, dword ptr [esi] */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006FB78; /* 0x1006FB52: jne 0x1006fb78 */
L_1006FB54:
    eax = ebp + (-0x20); /* 0x1006FB54: lea eax, [ebp - 0x20] */
    MEM32(ebp + (-0x20)) = 0x1006FC00u; /* 0x1006FB57: mov dword ptr [ebp - 0x20], 0x1006fc00 */
    PUSH32(esp, eax); /* 0x1006FB5E: push eax */
    ecx = ebp + (-0x38); /* 0x1006FB5F: lea ecx, [ebp - 0x38] */
    RECOMP_CALL(sub_1009DD30); /* 0x1006FB62: call 0x1009dd30 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x38)) = 0x1006754Cu; /* 0x1006FB67: mov dword ptr [ebp - 0x38], 0x1006754c */
    eax = ebp + (-0x38); /* 0x1006FB6E: lea eax, [ebp - 0x38] */
    PUSH32(esp, 0x100DCEE8u); /* 0x1006FB71: push 0x100dcee8 */
    RECOMP_BACKEDGE();
    goto L_1006FAFE; /* 0x1006FB76: jmp 0x1006fafe */
L_1006FB78:
    ecx = MEM32(0x100E0A9C); /* 0x1006FB78: mov ecx, dword ptr [0x100e0a9c] */
    eax = ecx; /* 0x1006FB7E: mov eax, ecx */
    eax = ~eax; /* 0x1006FB80: not eax */
    /* test edx, eax */ /* 0x1006FB82: test edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006FB96; /* 0x1006FB84: je 0x1006fb96 */
L_1006FB86:
    _flag_a = (uint32_t)((ecx | edx)); _flag_b = (uint32_t)((ecx | edx));
    ecx = ecx | edx; /* 0x1006FB86: or ecx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1006FB88: push ecx */
    RECOMP_ICALL(MEM32(0x100E510C)); /* 0x1006FB89: call dword ptr [0x100e510c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1006FB8F: push eax */
    RECOMP_ICALL(MEM32(0x100E5194)); /* 0x1006FB90: call dword ptr [0x100e5194] */
    RECOMP_FLAGS_IN();
L_1006FB96:
    edi = MEM32(0x100E0AB0); /* 0x1006FB96: mov edi, dword ptr [0x100e0ab0] */
    /* test edi, edi */ /* 0x1006FB9C: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006FBB0; /* 0x1006FB9E: je 0x1006fbb0 */
L_1006FBA0:
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x1006FBA0: push dword ptr [edi + 4] */
    RECOMP_CALL(sub_1000ECE0); /* 0x1006FBA3: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x1006FBA8: push edi */
    RECOMP_CALL(sub_1000ECE0); /* 0x1006FBA9: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1006FBAE: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1006FBAF: pop ecx */
L_1006FBB0:
    PUSH32(esp, 8); /* 0x1006FBB0: push 8 */
    RECOMP_CALL(sub_1000EE11); /* 0x1006FBB2: call 0x1000ee11 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1006FBB7: pop ecx */
    /* test eax, eax */ /* 0x1006FBB8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006FBC7; /* 0x1006FBBA: je 0x1006fbc7 */
L_1006FBBC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1006FBBC: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax + 0x4) = esi; /* 0x1006FBBE: mov dword ptr [eax + 4], esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1006FBC1: inc ecx */
    _flag_k = FK_INC;
    MEM16(eax) = (uint16_t)(LO16(ecx)); /* 0x1006FBC2: mov word ptr [eax], cx */
    goto L_1006FBC9; /* 0x1006FBC5: jmp 0x1006fbc9 */
L_1006FBC7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1006FBC7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1006FBC9:
    esi = MEM32(0x100E0AC4); /* 0x1006FBC9: mov esi, dword ptr [0x100e0ac4] */
    MEM32(0x100E0AB0) = eax; /* 0x1006FBCF: mov dword ptr [0x100e0ab0], eax */
    /* test esi, esi */ /* 0x1006FBD4: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006FBE8; /* 0x1006FBD6: je 0x1006fbe8 */
L_1006FBD8:
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x1006FBD8: push dword ptr [esi + 4] */
    RECOMP_CALL(sub_1000ECE0); /* 0x1006FBDB: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1006FBE0: push esi */
    RECOMP_CALL(sub_1000ECE0); /* 0x1006FBE1: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1006FBE6: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1006FBE7: pop ecx */
L_1006FBE8:
    _flag_a = (uint32_t)(MEM32(0x100E0AC4)); _flag_b = (uint32_t)(0);
    MEM32(0x100E0AC4) = MEM32(0x100E0AC4) & 0; /* 0x1006FBE8: and dword ptr [0x100e0ac4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x100E032C) = 0; /* 0x1006FBEF: mov dword ptr [0x100e032c], 0 */
    RECOMP_CALL(sub_10025C1A); /* 0x1006FBF9: call 0x10025c1a */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006FBFE: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006F89F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006F89Fu);

L_1006F89F:
    PUSH32(esp, ebp); /* 0x1006F89F: push ebp */
    ebp = esp; /* 0x1006F8A0: mov ebp, esp */
    edx = MEM32(ebp + 0xC); /* 0x1006F8A2: mov edx, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x8); /* 0x1006F8A5: mov ecx, dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x1006F8A8: pop ebp */
    goto L_1006FC0F; /* 0x1006F8A9: jmp 0x1006fc0f */
L_1006FC0F:
    PUSH32(esp, 0xA8u); /* 0x1006FC0F: push 0xa8 */
    eax = 0x100DB570u; /* 0x1006FC14: mov eax, 0x100db570 */
    RECOMP_CALL(sub_100149A4); /* 0x1006FC19: call 0x100149a4 */
    RECOMP_FLAGS_IN();
    edi = edx; /* 0x1006FC1E: mov edi, edx */
    MEM32(ebp + (-0x10)) = edi; /* 0x1006FC20: mov dword ptr [ebp - 0x10], edi */
    SET_LO16(ebx, LO16(ecx)); /* 0x1006FC23: mov bx, cx */
    MEM16(ebp + (-0x36)) = (uint16_t)(LO16(ebx)); /* 0x1006FC26: mov word ptr [ebp - 0x36], bx */
    ecx = 0x100E032Cu; /* 0x1006FC2A: mov ecx, 0x100e032c */
    MEM32(ebp + (-0xA8)) = ecx; /* 0x1006FC2F: mov dword ptr [ebp - 0xa8], ecx */
    RECOMP_CALL(sub_10023D1E); /* 0x1006FC35: call 0x10023d1e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1006FC3A: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(0x100E0AA8), 0 */ /* 0x1006FC3E: cmp dword ptr [0x100e0aa8], 0 */
    _flag_a = (uint32_t)(MEM32(0x100E0AA8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006FC64; /* 0x1006FC45: je 0x1006fc64 */
L_1006FC47:
    ecx = ebp + (-0x44); /* 0x1006FC47: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_1009DD55); /* 0x1006FC4A: call 0x1009dd55 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x44)) = 0x10067694u; /* 0x1006FC4F: mov dword ptr [ebp - 0x44], 0x10067694 */
    eax = ebp + (-0x44); /* 0x1006FC56: lea eax, [ebp - 0x44] */
    PUSH32(esp, 0x100DCF08u); /* 0x1006FC59: push 0x100dcf08 */
L_1006FC5E:
    PUSH32(esp, eax); /* 0x1006FC5E: push eax */
    RECOMP_CALL(sub_100192EB); /* 0x1006FC5F: call 0x100192eb */
    RECOMP_FLAGS_IN();
L_1006FC64:
    eax = MEM32(0x100E03E4); /* 0x1006FC64: mov eax, dword ptr [0x100e03e4] */
    /* test eax, eax */ /* 0x1006FC69: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006FC77; /* 0x1006FC6B: jne 0x1006fc77 */
L_1006FC6D:
    RECOMP_CALL(sub_10026BF4); /* 0x1006FC6D: call 0x10026bf4 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x100E03E4); /* 0x1006FC72: mov eax, dword ptr [0x100e03e4] */
L_1006FC77:
    /* cmp eax, 4 */ /* 0x1006FC77: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1006FC95; /* 0x1006FC7A: jge 0x1006fc95 */
L_1006FC7C:
    ecx = ebp + (-0x68); /* 0x1006FC7C: lea ecx, [ebp - 0x68] */
    RECOMP_CALL(sub_1009DD55); /* 0x1006FC7F: call 0x1009dd55 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x68)) = 0x10067694u; /* 0x1006FC84: mov dword ptr [ebp - 0x68], 0x10067694 */
    eax = ebp + (-0x68); /* 0x1006FC8B: lea eax, [ebp - 0x68] */
    PUSH32(esp, 0x100DCF08u); /* 0x1006FC8E: push 0x100dcf08 */
    RECOMP_BACKEDGE();
    goto L_1006FC5E; /* 0x1006FC93: jmp 0x1006fc5e */
L_1006FC95:
    /* test LO16(ebx), LO16(ebx) */ /* 0x1006FC95: test bx, bx */
    _flag_a = (uint32_t)(LO16(ebx)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006FCC7; /* 0x1006FC98: jne 0x1006fcc7 */
L_1006FC9A:
    eax = ebp + (-0x14); /* 0x1006FC9A: lea eax, [ebp - 0x14] */
    MEM32(ebp + (-0x14)) = 0x100678FCu; /* 0x1006FC9D: mov dword ptr [ebp - 0x14], 0x100678fc */
    PUSH32(esp, eax); /* 0x1006FCA4: push eax */
    ecx = ebp + (-0x98); /* 0x1006FCA5: lea ecx, [ebp - 0x98] */
    RECOMP_CALL(sub_1009DD30); /* 0x1006FCAB: call 0x1009dd30 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x98)) = 0x1006754Cu; /* 0x1006FCB0: mov dword ptr [ebp - 0x98], 0x1006754c */
    eax = ebp + (-0x98); /* 0x1006FCBA: lea eax, [ebp - 0x98] */
    PUSH32(esp, 0x100DCEE8u); /* 0x1006FCC0: push 0x100dcee8 */
    RECOMP_BACKEDGE();
    goto L_1006FC5E; /* 0x1006FCC5: jmp 0x1006fc5e */
L_1006FCC7:
    /* test edi, edi */ /* 0x1006FCC7: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006FCF2; /* 0x1006FCC9: jne 0x1006fcf2 */
L_1006FCCB:
    eax = ebp + (-0x20); /* 0x1006FCCB: lea eax, [ebp - 0x20] */
    MEM32(ebp + (-0x20)) = 0x1006FFF8u; /* 0x1006FCCE: mov dword ptr [ebp - 0x20], 0x1006fff8 */
    PUSH32(esp, eax); /* 0x1006FCD5: push eax */
    ecx = ebp + (-0x80); /* 0x1006FCD6: lea ecx, [ebp - 0x80] */
    RECOMP_CALL(sub_1009DD30); /* 0x1006FCD9: call 0x1009dd30 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x80)) = 0x1006754Cu; /* 0x1006FCDE: mov dword ptr [ebp - 0x80], 0x1006754c */
    eax = ebp + (-0x80); /* 0x1006FCE5: lea eax, [ebp - 0x80] */
    PUSH32(esp, 0x100DCEE8u); /* 0x1006FCE8: push 0x100dcee8 */
    RECOMP_BACKEDGE();
    goto L_1006FC5E; /* 0x1006FCED: jmp 0x1006fc5e */
L_1006FCF2:
    esi = (uint32_t)LO16(ebx); /* 0x1006FCF2: movzx esi, bx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1006FCF5: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xCu); /* 0x1006FCF7: push 0xc */
    edx = POP32_VAL(esp); /* 0x1006FCF9: pop edx */
    eax = esi; /* 0x1006FCFA: mov eax, esi */
    MEM32(ebp + (-0x28)) = esi; /* 0x1006FCFC: mov dword ptr [ebp - 0x28], esi */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x1006FCFF: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x1006FD01: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1006FD04: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1006FD06: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1006FD08: push ecx */
    RECOMP_CALL(sub_10011683); /* 0x1006FD09: call 0x10011683 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1006FD0E: mov ebx, eax */
    MEM32(ebp + (-0x24)) = ebx; /* 0x1006FD10: mov dword ptr [ebp - 0x24], ebx */
    ecx = POP32_VAL(esp); /* 0x1006FD13: pop ecx */
    /* test ebx, ebx */ /* 0x1006FD14: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006FD3B; /* 0x1006FD16: je 0x1006fd3b */
L_1006FD18:
    edx = esi + (-0x1); /* 0x1006FD18: lea edx, [esi - 1] */
    ecx = ebx; /* 0x1006FD1B: mov ecx, ebx */
    /* test edx, edx */ /* 0x1006FD1D: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1006FD40; /* 0x1006FD1F: js 0x1006fd40 */
L_1006FD21:
    edi = ecx; /* 0x1006FD21: mov edi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1006FD23: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi) = eax; edi += _df * 4; /* 0x1006FD25: stosd dword ptr es:[edi], eax */
    MEM32(edi) = eax; edi += _df * 4; /* 0x1006FD26: stosd dword ptr es:[edi], eax */
    MEM32(edi) = eax; edi += _df * 4; /* 0x1006FD27: stosd dword ptr es:[edi], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1006FD28: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    MEM32(ecx) = MEM32(ecx) & eax; /* 0x1006FD2A: and dword ptr [ecx], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(ecx + 0x4) = (uint16_t)(LO16(eax)); /* 0x1006FD2C: mov word ptr [ecx + 4], ax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xCu; /* 0x1006FD30: add ecx, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1006FD33: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NS(_flag_a, _flag_b)) goto L_1006FD21; /* 0x1006FD34: jns 0x1006fd21 */
L_1006FD36:
    edi = MEM32(ebp + (-0x10)); /* 0x1006FD36: mov edi, dword ptr [ebp - 0x10] */
    goto L_1006FD40; /* 0x1006FD39: jmp 0x1006fd40 */
L_1006FD3B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1006FD3B: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x24)) = ebx; /* 0x1006FD3D: mov dword ptr [ebp - 0x24], ebx */
L_1006FD40:
    /* test esi, esi */ /* 0x1006FD40: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1006FD89; /* 0x1006FD42: jle 0x1006fd89 */
L_1006FD44:
    eax = ebx + 0x4; /* 0x1006FD44: lea eax, [ebx + 4] */
    MEM32(ebp + (-0x18)) = esi; /* 0x1006FD47: mov dword ptr [ebp - 0x18], esi */
    esi = MEM32(ebp + (-0x10)); /* 0x1006FD4A: mov esi, dword ptr [ebp - 0x10] */
    MEM32(ebp + (-0x14)) = eax; /* 0x1006FD4D: mov dword ptr [ebp - 0x14], eax */
    eax = edi; /* 0x1006FD50: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x1006FD52: sub eax, ebx */
    _flag_k = FK_CMP;
    ebx = MEM32(ebp + (-0x14)); /* 0x1006FD54: mov ebx, dword ptr [ebp - 0x14] */
    MEM32(ebp + (-0x20)) = eax; /* 0x1006FD57: mov dword ptr [ebp - 0x20], eax */
L_1006FD5A:
    ecx = (uint32_t)MEM16(eax + ebx); /* 0x1006FD5A: movzx ecx, word ptr [eax + ebx] */
    edi = ebp + (-0x50); /* 0x1006FD5E: lea edi, [ebp - 0x50] */
    edx = MEM32(esi); /* 0x1006FD61: mov edx, dword ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1006FD63: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x18)) = MEM32(ebp + (-0x18)) - 1; /* 0x1006FD65: dec dword ptr [ebp - 0x18] */
    _flag_k = FK_DEC;
    esi = esi + 0xC; /* 0x1006FD68: lea esi, [esi + 0xc] */
    MEM32(edi) = eax; edi += _df * 4; /* 0x1006FD6B: stosd dword ptr es:[edi], eax */
    MEM16(ebx) = (uint16_t)(LO16(ecx)); /* 0x1006FD6C: mov word ptr [ebx], cx */
    ebx = ebx + 0xC; /* 0x1006FD6F: lea ebx, [ebx + 0xc] */
    MEM32(ebx + (-0x10)) = edx; /* 0x1006FD72: mov dword ptr [ebx - 0x10], edx */
    MEM32(edi) = eax; edi += _df * 4; /* 0x1006FD75: stosd dword ptr es:[edi], eax */
    MEM32(edi) = eax; edi += _df * 4; /* 0x1006FD76: stosd dword ptr es:[edi], eax */
    eax = MEM32(ebp + (-0x20)); /* 0x1006FD77: mov eax, dword ptr [ebp - 0x20] */
    MEM16(ebp + (-0x4C)) = (uint16_t)(LO16(ecx)); /* 0x1006FD7A: mov word ptr [ebp - 0x4c], cx */
    MEM32(ebp + (-0x50)) = edx; /* 0x1006FD7E: mov dword ptr [ebp - 0x50], edx */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1006FD5A; /* 0x1006FD81: jne 0x1006fd5a */
L_1006FD83:
    ebx = MEM32(ebp + (-0x24)); /* 0x1006FD83: mov ebx, dword ptr [ebp - 0x24] */
    esi = MEM32(ebp + (-0x28)); /* 0x1006FD86: mov esi, dword ptr [ebp - 0x28] */
L_1006FD89:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1006FD89: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x1006FD8B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006FE65; /* 0x1006FD8D: je 0x1006fe65 */
L_1006FD93:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1006FD93: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = ebx; /* 0x1006FD95: mov dword ptr [ebp - 0x10], ebx */
    MEM32(ebp + (-0x18)) = ecx; /* 0x1006FD98: mov dword ptr [ebp - 0x18], ecx */
    edi = ebx; /* 0x1006FD9B: mov edi, ebx */
L_1006FD9D:
    eax = edx + 0x1; /* 0x1006FD9D: lea eax, [edx + 1] */
    MEM32(ebp + (-0x20)) = edx; /* 0x1006FDA0: mov dword ptr [ebp - 0x20], edx */
    MEM32(ebp + (-0x14)) = eax; /* 0x1006FDA3: mov dword ptr [ebp - 0x14], eax */
    MEM32(ebp + (-0x2C)) = eax; /* 0x1006FDA6: mov dword ptr [ebp - 0x2c], eax */
    /* cmp eax, esi */ /* 0x1006FDA9: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1006FE4F; /* 0x1006FDAB: jae 0x1006fe4f */
L_1006FDB1:
    PUSH32(esp, 0xFFFFFFFCu); /* 0x1006FDB1: push -4 */
    eax = POP32_VAL(esp); /* 0x1006FDB3: pop eax */
    MEM32(ebp + (-0x34)) = ecx; /* 0x1006FDB4: mov dword ptr [ebp - 0x34], ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x1006FDB7: sub eax, ebx */
    _flag_k = FK_CMP;
    ecx = edi + 0x10; /* 0x1006FDB9: lea ecx, [edi + 0x10] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x1006FDBC: mov dword ptr [ebp - 0x1c], eax */
    MEM32(ebp + (-0x24)) = ecx; /* 0x1006FDBF: mov dword ptr [ebp - 0x24], ecx */
L_1006FDC2:
    eax = (uint32_t)MEM16(ecx); /* 0x1006FDC2: movzx eax, word ptr [ecx] */
    ecx = (uint32_t)LO16(eax); /* 0x1006FDC5: movzx ecx, ax */
    MEM32(ebp + (-0x30)) = eax; /* 0x1006FDC8: mov dword ptr [ebp - 0x30], eax */
    eax = MEM32(ebp + (-0x34)); /* 0x1006FDCB: mov eax, dword ptr [ebp - 0x34] */
    eax = (uint32_t)MEM16(eax + ebx + 0x4); /* 0x1006FDCE: movzx eax, word ptr [eax + ebx + 4] */
    /* cmp LO16(ecx), LO16(eax) */ /* 0x1006FDD3: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006FEAD; /* 0x1006FDD6: je 0x1006fead */
L_1006FDDC:
    esi = MEM32(ebp + (-0x34)); /* 0x1006FDDC: mov esi, dword ptr [ebp - 0x34] */
    eax = MEM32(ebp + (-0x30)); /* 0x1006FDDF: mov eax, dword ptr [ebp - 0x30] */
    ecx = (uint32_t)LO16(eax); /* 0x1006FDE2: movzx ecx, ax */
    eax = (uint32_t)MEM16(esi + ebx + 0x4); /* 0x1006FDE5: movzx eax, word ptr [esi + ebx + 4] */
    esi = MEM32(ebp + (-0x28)); /* 0x1006FDEA: mov esi, dword ptr [ebp - 0x28] */
    /* cmp LO16(ecx), LO16(eax) */ /* 0x1006FDED: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    eax = MEM32(ebp + (-0x2C)); /* 0x1006FDF0: mov eax, dword ptr [ebp - 0x2c] */
    ecx = MEM32(ebp + (-0x24)); /* 0x1006FDF3: mov ecx, dword ptr [ebp - 0x24] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_1006FE06; /* 0x1006FDF6: jae 0x1006fe06 */
L_1006FDF8:
    edi = MEM32(ebp + (-0x1C)); /* 0x1006FDF8: mov edi, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + ecx; /* 0x1006FDFB: add edi, ecx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x20)) = eax; /* 0x1006FDFD: mov dword ptr [ebp - 0x20], eax */
    MEM32(ebp + (-0x34)) = edi; /* 0x1006FE00: mov dword ptr [ebp - 0x34], edi */
    edi = MEM32(ebp + (-0x10)); /* 0x1006FE03: mov edi, dword ptr [ebp - 0x10] */
L_1006FE06:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1006FE06: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xCu; /* 0x1006FE07: add ecx, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x2C)) = eax; /* 0x1006FE0A: mov dword ptr [ebp - 0x2c], eax */
    MEM32(ebp + (-0x24)) = ecx; /* 0x1006FE0D: mov dword ptr [ebp - 0x24], ecx */
    /* cmp eax, esi */ /* 0x1006FE10: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1006FDC2; /* 0x1006FE12: jb 0x1006fdc2 */
L_1006FE14:
    eax = MEM32(ebp + (-0x20)); /* 0x1006FE14: mov eax, dword ptr [ebp - 0x20] */
    /* cmp edx, eax */ /* 0x1006FE17: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006FE49; /* 0x1006FE19: je 0x1006fe49 */
L_1006FE1B:
    esi = edi; /* 0x1006FE1B: mov esi, edi */
    ecx = (uint32_t)((int32_t)eax * (int32_t)0xCu); /* 0x1006FE1D: imul ecx, eax, 0xc */
    edi = ebp + (-0x5C); /* 0x1006FE20: lea edi, [ebp - 0x5c] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1006FE23: movsd dword ptr es:[edi], dword ptr [esi] */
    SET_LO16(eax, MEM16(ecx + ebx + 0x4)); /* 0x1006FE24: mov ax, word ptr [ecx + ebx + 4] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1006FE29: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1006FE2A: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = MEM32(ebp + (-0x10)); /* 0x1006FE2B: mov edi, dword ptr [ebp - 0x10] */
    esi = MEM32(ebp + (-0x28)); /* 0x1006FE2E: mov esi, dword ptr [ebp - 0x28] */
    MEM16(edi + 0x4) = (uint16_t)(LO16(eax)); /* 0x1006FE31: mov word ptr [edi + 4], ax */
    eax = MEM32(ecx + ebx); /* 0x1006FE35: mov eax, dword ptr [ecx + ebx] */
    MEM32(edi) = eax; /* 0x1006FE38: mov dword ptr [edi], eax */
    SET_LO16(eax, MEM16(ebp + (-0x58))); /* 0x1006FE3A: mov ax, word ptr [ebp - 0x58] */
    MEM16(ecx + ebx + 0x4) = (uint16_t)(LO16(eax)); /* 0x1006FE3E: mov word ptr [ecx + ebx + 4], ax */
    eax = MEM32(ebp + (-0x5C)); /* 0x1006FE43: mov eax, dword ptr [ebp - 0x5c] */
    MEM32(ecx + ebx) = eax; /* 0x1006FE46: mov dword ptr [ecx + ebx], eax */
L_1006FE49:
    ecx = MEM32(ebp + (-0x18)); /* 0x1006FE49: mov ecx, dword ptr [ebp - 0x18] */
    eax = MEM32(ebp + (-0x14)); /* 0x1006FE4C: mov eax, dword ptr [ebp - 0x14] */
L_1006FE4F:
    edx = eax; /* 0x1006FE4F: mov edx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xCu; /* 0x1006FE51: add ecx, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0xCu; /* 0x1006FE54: add edi, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x18)) = ecx; /* 0x1006FE57: mov dword ptr [ebp - 0x18], ecx */
    MEM32(ebp + (-0x10)) = edi; /* 0x1006FE5A: mov dword ptr [ebp - 0x10], edi */
    /* cmp edx, esi */ /* 0x1006FE5D: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1006FD9D; /* 0x1006FE5F: jb 0x1006fd9d */
L_1006FE65:
    PUSH32(esp, 4); /* 0x1006FE65: push 4 */
    ecx = POP32_VAL(esp); /* 0x1006FE67: pop ecx */
    RECOMP_CALL(sub_10027B12); /* 0x1006FE68: call 0x10027b12 */
    RECOMP_FLAGS_IN();
    edx = MEM32(0x100E0ABC); /* 0x1006FE6D: mov edx, dword ptr [0x100e0abc] */
    SET_LO16(edi, MEM16(ebp + (-0x36))); /* 0x1006FE73: mov di, word ptr [ebp - 0x36] */
    /* cmp LO16(edi), MEM16(edx + 0xA) */ /* 0x1006FE77: cmp di, word ptr [edx + 0xa] */
    _flag_a = (uint32_t)(LO16(edi)) << 16; _flag_b = (uint32_t)(MEM16(edx + 0xA)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_BE(_flag_a, _flag_b)) goto L_1006FED4; /* 0x1006FE7B: jbe 0x1006fed4 */
L_1006FE7D:
    eax = ebp + (-0x30); /* 0x1006FE7D: lea eax, [ebp - 0x30] */
    MEM32(ebp + (-0x30)) = 0x100678FCu; /* 0x1006FE80: mov dword ptr [ebp - 0x30], 0x100678fc */
    PUSH32(esp, eax); /* 0x1006FE87: push eax */
    ecx = ebp + (-0x8C); /* 0x1006FE88: lea ecx, [ebp - 0x8c] */
    RECOMP_CALL(sub_1009DD30); /* 0x1006FE8E: call 0x1009dd30 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x8C)) = 0x1006754Cu; /* 0x1006FE93: mov dword ptr [ebp - 0x8c], 0x1006754c */
    eax = ebp + (-0x8C); /* 0x1006FE9D: lea eax, [ebp - 0x8c] */
    PUSH32(esp, 0x100DCEE8u); /* 0x1006FEA3: push 0x100dcee8 */
    RECOMP_BACKEDGE();
    goto L_1006FC5E; /* 0x1006FEA8: jmp 0x1006fc5e */
L_1006FEAD:
    eax = ebp + (-0x1C); /* 0x1006FEAD: lea eax, [ebp - 0x1c] */
    MEM32(ebp + (-0x1C)) = 0x1006FFF8u; /* 0x1006FEB0: mov dword ptr [ebp - 0x1c], 0x1006fff8 */
    PUSH32(esp, eax); /* 0x1006FEB7: push eax */
    ecx = ebp + (-0x74); /* 0x1006FEB8: lea ecx, [ebp - 0x74] */
    RECOMP_CALL(sub_1009DD30); /* 0x1006FEBB: call 0x1009dd30 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x74)) = 0x1006754Cu; /* 0x1006FEC0: mov dword ptr [ebp - 0x74], 0x1006754c */
    eax = ebp + (-0x74); /* 0x1006FEC7: lea eax, [ebp - 0x74] */
    PUSH32(esp, 0x100DCEE8u); /* 0x1006FECA: push 0x100dcee8 */
    RECOMP_BACKEDGE();
    goto L_1006FC5E; /* 0x1006FECF: jmp 0x1006fc5e */
L_1006FED4:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & 0; /* 0x1006FED4: and dword ptr [ebp - 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1006FED8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1006FEDA: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1006FEDC: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO16(eax), LO16(edi) */ /* 0x1006FEDE: cmp ax, di */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_AE(_flag_a, _flag_b)) goto L_1006FFC6; /* 0x1006FEE1: jae 0x1006ffc6 */
L_1006FEE7:
    eax = (uint32_t)LO16(esi); /* 0x1006FEE7: movzx eax, si */
    eax = (uint32_t)((int32_t)eax * (int32_t)0xCu); /* 0x1006FEEA: imul eax, eax, 0xc */
    MEM32(ebp + (-0x14)) = eax; /* 0x1006FEED: mov dword ptr [ebp - 0x14], eax */
    eax = (uint32_t)MEM16(eax + ebx + 0x4); /* 0x1006FEF0: movzx eax, word ptr [eax + ebx + 4] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x1006FEF5: mov dword ptr [ebp - 0x1c], eax */
    eax = (uint32_t)LO16(eax); /* 0x1006FEF8: movzx eax, ax */
    /* cmp LO16(ecx), LO16(eax) */ /* 0x1006FEFB: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_AE(_flag_a, _flag_b)) goto L_1006FF19; /* 0x1006FEFE: jae 0x1006ff19 */
L_1006FF00:
    eax = MEM32(ebp + (-0x1C)); /* 0x1006FF00: mov eax, dword ptr [ebp - 0x1c] */
    eax = (uint32_t)LO16(eax); /* 0x1006FF03: movzx eax, ax */
    MEM32(ebp + (-0x1C)) = eax; /* 0x1006FF06: mov dword ptr [ebp - 0x1c], eax */
    eax = (uint32_t)MEM16(edx + 0xA); /* 0x1006FF09: movzx eax, word ptr [edx + 0xa] */
L_1006FF0D:
    /* cmp LO16(ecx), LO16(eax) */ /* 0x1006FF0D: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_AE(_flag_a, _flag_b)) goto L_1006FF19; /* 0x1006FF10: jae 0x1006ff19 */
L_1006FF12:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1006FF12: inc ecx */
    _flag_k = FK_INC;
    /* cmp LO16(ecx), MEM16(ebp + (-0x1C)) */ /* 0x1006FF13: cmp cx, word ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0x1C))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1006FF0D; /* 0x1006FF17: jb 0x1006ff0d */
L_1006FF19:
    /* cmp LO16(ecx), MEM16(edx + 0xA) */ /* 0x1006FF19: cmp cx, word ptr [edx + 0xa] */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(MEM16(edx + 0xA)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006FF96; /* 0x1006FF1D: je 0x1006ff96 */
L_1006FF1F:
    eax = (uint32_t)LO16(ecx); /* 0x1006FF1F: movzx eax, cx */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2Cu); /* 0x1006FF22: imul eax, eax, 0x2c */
    eax = MEM32(eax + edx + 0x48); /* 0x1006FF25: mov eax, dword ptr [eax + edx + 0x48] */
    edx = MEM32(ebp + (-0x14)); /* 0x1006FF29: mov edx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(MEM32(edx + ebx)); _flag_b = (uint32_t)(eax);
    MEM32(edx + ebx) = MEM32(edx + ebx) & eax; /* 0x1006FF2C: and dword ptr [edx + ebx], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edx; /* 0x1006FF2F: mov eax, edx */
    edx = MEM32(ebp + (-0x10)); /* 0x1006FF31: mov edx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)((edx | MEM32(eax + ebx))); _flag_b = (uint32_t)((edx | MEM32(eax + ebx)));
    edx = edx | MEM32(eax + ebx); /* 0x1006FF34: or edx, dword ptr [eax + ebx] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1006FF37: inc esi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x10)) = edx; /* 0x1006FF38: mov dword ptr [ebp - 0x10], edx */
    edx = MEM32(0x100E0ABC); /* 0x1006FF3B: mov edx, dword ptr [0x100e0abc] */
    /* cmp LO16(esi), LO16(edi) */ /* 0x1006FF41: cmp si, di */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1006FEE7; /* 0x1006FF44: jb 0x1006fee7 */
L_1006FF46:
    /* cmp MEM32(ebp + (-0x10)), 0 */ /* 0x1006FF46: cmp dword ptr [ebp - 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006FFC6; /* 0x1006FF4A: je 0x1006ffc6 */
L_1006FF4C:
    RECOMP_CALL(sub_10025A7C); /* 0x1006FF4C: call 0x10025a7c */
    RECOMP_FLAGS_IN();
    esi = MEM32(0x100E0AB0); /* 0x1006FF51: mov esi, dword ptr [0x100e0ab0] */
    /* test esi, esi */ /* 0x1006FF57: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006FF6B; /* 0x1006FF59: je 0x1006ff6b */
L_1006FF5B:
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x1006FF5B: push dword ptr [esi + 4] */
    RECOMP_CALL(sub_1000ECE0); /* 0x1006FF5E: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1006FF63: push esi */
    RECOMP_CALL(sub_1000ECE0); /* 0x1006FF64: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1006FF69: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1006FF6A: pop ecx */
L_1006FF6B:
    PUSH32(esp, 8); /* 0x1006FF6B: push 8 */
    RECOMP_CALL(sub_1000EE11); /* 0x1006FF6D: call 0x1000ee11 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1006FF72: pop ecx */
    /* test eax, eax */ /* 0x1006FF73: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006FF7F; /* 0x1006FF75: je 0x1006ff7f */
L_1006FF77:
    MEM16(eax) = (uint16_t)(LO16(edi)); /* 0x1006FF77: mov word ptr [eax], di */
    MEM32(eax + 0x4) = ebx; /* 0x1006FF7A: mov dword ptr [eax + 4], ebx */
    goto L_1006FF81; /* 0x1006FF7D: jmp 0x1006ff81 */
L_1006FF7F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1006FF7F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1006FF81:
    MEM32(0x100E0AB0) = eax; /* 0x1006FF81: mov dword ptr [0x100e0ab0], eax */
    MEM32(0x100E032C) = 0; /* 0x1006FF86: mov dword ptr [0x100e032c], 0 */
    RECOMP_CALL(sub_100149D7); /* 0x1006FF90: call 0x100149d7 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006FF95: ret  */
L_1006FF96:
    eax = ebp + (-0x10); /* 0x1006FF96: lea eax, [ebp - 0x10] */
    MEM32(ebp + (-0x10)) = 0x1006FFF8u; /* 0x1006FF99: mov dword ptr [ebp - 0x10], 0x1006fff8 */
    PUSH32(esp, eax); /* 0x1006FFA0: push eax */
    ecx = ebp + (-0xA4); /* 0x1006FFA1: lea ecx, [ebp - 0xa4] */
    RECOMP_CALL(sub_1009DD30); /* 0x1006FFA7: call 0x1009dd30 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0xA4)) = 0x1006754Cu; /* 0x1006FFAC: mov dword ptr [ebp - 0xa4], 0x1006754c */
    eax = ebp + (-0xA4); /* 0x1006FFB6: lea eax, [ebp - 0xa4] */
    PUSH32(esp, 0x100DCEE8u); /* 0x1006FFBC: push 0x100dcee8 */
    RECOMP_BACKEDGE();
    goto L_1006FC5E; /* 0x1006FFC1: jmp 0x1006fc5e */
L_1006FFC6:
    eax = ebp + (-0x18); /* 0x1006FFC6: lea eax, [ebp - 0x18] */
    MEM32(ebp + (-0x18)) = 0x1006FFF8u; /* 0x1006FFC9: mov dword ptr [ebp - 0x18], 0x1006fff8 */
    PUSH32(esp, eax); /* 0x1006FFD0: push eax */
    ecx = ebp + (-0xB4); /* 0x1006FFD1: lea ecx, [ebp - 0xb4] */
    RECOMP_CALL(sub_1009DD30); /* 0x1006FFD7: call 0x1009dd30 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0xB4)) = 0x1006754Cu; /* 0x1006FFDC: mov dword ptr [ebp - 0xb4], 0x1006754c */
    eax = ebp + (-0xB4); /* 0x1006FFE6: lea eax, [ebp - 0xb4] */
    PUSH32(esp, 0x100DCEE8u); /* 0x1006FFEC: push 0x100dcee8 */
    RECOMP_BACKEDGE();
    goto L_1006FC5E; /* 0x1006FFF1: jmp 0x1006fc5e */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1006F8AE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006F8AEu);

L_1006F8AE:
    PUSH32(esp, ebp); /* 0x1006F8AE: push ebp */
    ebp = esp; /* 0x1006F8AF: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1006F8B1: push ecx */
    PUSH32(esp, esi); /* 0x1006F8B2: push esi */
    PUSH32(esp, edi); /* 0x1006F8B3: push edi */
    esi = ecx; /* 0x1006F8B4: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1006F8B6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = esi; /* 0x1006F8B8: mov edi, esi */
    MEM32(edi) = eax; edi += _df * 4; /* 0x1006F8BA: stosd dword ptr es:[edi], eax */
    MEM32(edi) = eax; edi += _df * 4; /* 0x1006F8BB: stosd dword ptr es:[edi], eax */
    MEM32(edi) = eax; edi += _df * 4; /* 0x1006F8BC: stosd dword ptr es:[edi], eax */
    RECOMP_CALL(sub_10023E7E); /* 0x1006F8BD: call 0x10023e7e */
    RECOMP_FLAGS_IN();
    /* cmp eax, 4 */ /* 0x1006F8C2: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1006F8DA; /* 0x1006F8C5: jl 0x1006f8da */
L_1006F8C7:
    eax = MEM32(0x100E0330); /* 0x1006F8C7: mov eax, dword ptr [0x100e0330] */
    _flag_a = (uint32_t)((eax ^ MEM32(0x100E0A98))); _flag_b = (uint32_t)((eax ^ MEM32(0x100E0A98)));
    eax = eax ^ MEM32(0x100E0A98); /* 0x1006F8CC: xor eax, dword ptr [0x100e0a98] */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1006F8D2: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1006F8D3: push dword ptr [ebp + 8] */
    RECOMP_ICALL(eax); /* 0x1006F8D6: call eax */
    RECOMP_FLAGS_IN();
    goto L_1006F8FA; /* 0x1006F8D8: jmp 0x1006f8fa */
L_1006F8DA:
    eax = ebp + (-0x4); /* 0x1006F8DA: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x1006F8DD: push eax */
    eax = ebp + 0x8; /* 0x1006F8DE: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x1006F8E1: push eax */
    RECOMP_ICALL(MEM32(0x100E510C)); /* 0x1006F8E2: call dword ptr [0x100e510c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1006F8E8: push eax */
    RECOMP_ICALL(MEM32(0x100E5178)); /* 0x1006F8E9: call dword ptr [0x100e5178] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1006F8EF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(esi + 0x4) = (uint16_t)(LO16(eax)); /* 0x1006F8F1: mov word ptr [esi + 4], ax */
    eax = MEM32(ebp + 0x8); /* 0x1006F8F5: mov eax, dword ptr [ebp + 8] */
    MEM32(esi) = eax; /* 0x1006F8F8: mov dword ptr [esi], eax */
L_1006F8FA:
    edi = POP32_VAL(esp); /* 0x1006F8FA: pop edi */
    eax = esi; /* 0x1006F8FB: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1006F8FD: pop esi */
    esp = ebp; /* 0x1006F8FE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1006F900: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1006F901: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1006F904(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006F904u);

L_1006F904:
    PUSH32(esp, ebp); /* 0x1006F904: push ebp */
    ebp = esp; /* 0x1006F905: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1006F907: push esi */
    esi = ecx; /* 0x1006F908: mov esi, ecx */
    RECOMP_CALL(sub_10023E7E); /* 0x1006F90A: call 0x10023e7e */
    RECOMP_FLAGS_IN();
    /* cmp eax, 4 */ /* 0x1006F90F: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1006F929; /* 0x1006F912: jl 0x1006f929 */
L_1006F914:
    eax = MEM32(0x100E0330); /* 0x1006F914: mov eax, dword ptr [0x100e0330] */
    _flag_a = (uint32_t)((eax ^ MEM32(0x100E0A94))); _flag_b = (uint32_t)((eax ^ MEM32(0x100E0A94)));
    eax = eax ^ MEM32(0x100E0A94); /* 0x1006F919: xor eax, dword ptr [0x100e0a94] */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0); /* 0x1006F91F: push 0 */
    PUSH32(esp, esi); /* 0x1006F921: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1006F922: push dword ptr [ebp + 8] */
    RECOMP_ICALL(eax); /* 0x1006F925: call eax */
    RECOMP_FLAGS_IN();
    goto L_1006F934; /* 0x1006F927: jmp 0x1006f934 */
L_1006F929:
    PUSH32(esp, MEM32(esi)); /* 0x1006F929: push dword ptr [esi] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1006F92B: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x100E517C)); /* 0x1006F92E: call dword ptr [0x100e517c] */
    RECOMP_FLAGS_IN();
L_1006F934:
    esi = POP32_VAL(esp); /* 0x1006F934: pop esi */
    ebp = POP32_VAL(esp); /* 0x1006F935: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1006F936: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1006FA37(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006FA37u);

L_1006FA37:
    PUSH32(esp, ebp); /* 0x1006FA37: push ebp */
    ebp = esp; /* 0x1006FA38: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1006FA3A: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1006FA3B: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x1006FA3E: mov esi, ecx */
    RECOMP_CALL(sub_1002D16D); /* 0x1006FA40: call 0x1002d16d */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x100677B4u; /* 0x1006FA45: mov dword ptr [esi], 0x100677b4 */
    eax = esi; /* 0x1006FA4B: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1006FA4D: pop esi */
    ebp = POP32_VAL(esp); /* 0x1006FA4E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1006FA4F: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1006FA70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006FA70u);

L_1006FA70:
    PUSH32(esp, ebp); /* 0x1006FA70: push ebp */
    ebp = esp; /* 0x1006FA71: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1006FA73: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1006FA76: push esi */
    PUSH32(esp, edi); /* 0x1006FA77: push edi */
    edi = ecx; /* 0x1006FA78: mov edi, ecx */
    esi = MEM32(edi + 0x64); /* 0x1006FA7A: mov esi, dword ptr [edi + 0x64] */
    /* test esi, esi */ /* 0x1006FA7D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1006FAAC; /* 0x1006FA7F: jmp 0x1006faac */
L_1006FA81:
    ecx = MEM32(esi + 0x8); /* 0x1006FA81: mov ecx, dword ptr [esi + 8] */
    edx = ebp + (-0x4); /* 0x1006FA84: lea edx, [ebp - 4] */
    eax = MEM32(esi + 0x78); /* 0x1006FA87: mov eax, dword ptr [esi + 0x78] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) & 0; /* 0x1006FA8A: and dword ptr [ebp - 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x1006FA8E: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edx); /* 0x1006FA92: push edx */
    edx = ebp + (-0x8); /* 0x1006FA93: lea edx, [ebp - 8] */
    MEM32(ebp + (-0x4)) = eax; /* 0x1006FA96: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ecx); /* 0x1006FA99: mov eax, dword ptr [ecx] */
    PUSH32(esp, edx); /* 0x1006FA9B: push edx */
    edx = ebp + (-0xC); /* 0x1006FA9C: lea edx, [ebp - 0xc] */
    PUSH32(esp, edx); /* 0x1006FA9F: push edx */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1006FAA0: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x1006FAA3: mov eax, dword ptr [ebp - 4] */
    MEM32(esi + 0x78) = eax; /* 0x1006FAA6: mov dword ptr [esi + 0x78], eax */
    /* cmp esi, MEM32(edi + 0x64) */ /* 0x1006FAA9: cmp esi, dword ptr [edi + 0x64] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edi + 0x64));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_1006FAAC:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_1006FAB3; /* 0x1006FAAC: je 0x1006fab3 */
L_1006FAAE:
    esi = MEM32(esi + 0x18); /* 0x1006FAAE: mov esi, dword ptr [esi + 0x18] */
    goto L_1006FAB5; /* 0x1006FAB1: jmp 0x1006fab5 */
L_1006FAB3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1006FAB3: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1006FAB5:
    /* test esi, esi */ /* 0x1006FAB5: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006FA81; /* 0x1006FAB7: jne 0x1006fa81 */
L_1006FAB9:
    edi = POP32_VAL(esp); /* 0x1006FAB9: pop edi */
    esi = POP32_VAL(esp); /* 0x1006FABA: pop esi */
    esp = ebp; /* 0x1006FABB: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1006FABD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006FABE: ret  */
    RECOMP_REGS_OUT();
}

void sub_1006FC00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006FC00u);

L_1006FC00:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_A, _cf)) goto L_1006FC44; /* 0x1006FC00: ja 0x1006fc44 */
L_1006FC03:
    SET_LO16(ebp, (uint32_t)((int32_t)MEM16(esi + 0x69) * (int32_t)0x7974u)); /* 0x1006FC03: imul bp, word ptr [esi + 0x69], 0x7974 */
    _flag_a = (uint32_t)(ebp); _flag_b = (uint32_t)(1);
    ebp = ebp - 1; /* 0x1006FC0A: dec ebp */
    _flag_k = FK_DEC;
    POPAD(); /* 0x1006FC0B: popal  */
    if ((_cf == 0)) goto L_1006FC79; /* 0x1006FC0C: jae 0x1006fc79 */
L_1006FC0E:
    _flag_a = (uint32_t)(MEM8(eax + (-0x58))) << 24; _flag_b = (uint32_t)(HI8(ecx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + (-0x58)) = (uint8_t)(MEM8(eax + (-0x58)) + HI8(ecx)); /* 0x1006FC0E: add byte ptr [eax - 0x58], ch */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x1006FC11: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + 0x100DB570)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + 0x100DB570) = (uint8_t)(MEM8(eax + 0x100DB570) + HI8(ebx)); /* 0x1006FC13: add byte ptr [eax + 0x100db570], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    RECOMP_CALL(sub_100149A4); /* 0x1006FC19: call 0x100149a4 */
    RECOMP_FLAGS_IN();
    edi = edx; /* 0x1006FC1E: mov edi, edx */
    MEM32(ebp + (-0x10)) = edi; /* 0x1006FC20: mov dword ptr [ebp - 0x10], edi */
    SET_LO16(ebx, LO16(ecx)); /* 0x1006FC23: mov bx, cx */
    MEM16(ebp + (-0x36)) = (uint16_t)(LO16(ebx)); /* 0x1006FC26: mov word ptr [ebp - 0x36], bx */
    ecx = 0x100E032Cu; /* 0x1006FC2A: mov ecx, 0x100e032c */
    MEM32(ebp + (-0xA8)) = ecx; /* 0x1006FC2F: mov dword ptr [ebp - 0xa8], ecx */
    RECOMP_CALL(sub_10023D1E); /* 0x1006FC35: call 0x10023d1e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1006FC3A: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(0x100E0AA8), 0 */ /* 0x1006FC3E: cmp dword ptr [0x100e0aa8], 0 */
    _flag_a = (uint32_t)(MEM32(0x100E0AA8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_1006FC45; /* falls through past a gap */
L_1006FC44:
    _flag_a = (uint32_t)(MEM8(ebp + ebx + (-0x73))) << 24; _flag_b = (uint32_t)(HI8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp + ebx + (-0x73)) = (uint8_t)(MEM8(ebp + ebx + (-0x73)) + HI8(edx)); /* 0x1006FC44: add byte ptr [ebp + ebx - 0x73], dh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_1006FC48; /* falls through past a gap */
L_1006FC45:
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_1006FC64; /* 0x1006FC45: je 0x1006fc64 */
L_1006FC47:
    ecx = ebp + (-0x44); /* 0x1006FC47: lea ecx, [ebp - 0x44] */
    goto L_1006FC4A; /* falls through past a gap */
L_1006FC48:
    _flag_a = (uint32_t)(ebp); _flag_b = (uint32_t)(1);
    ebp = ebp - 1; /* 0x1006FC48: dec ebp */
    _flag_k = FK_DEC;
    esp = 0x02E106E8u; /* 0x1006FC49: mov esp, 0x2e106e8 */
    goto L_1006FC4E; /* falls through past a gap */
L_1006FC4A:
    RECOMP_CALL(sub_1009DD55); /* 0x1006FC4A: call 0x1009dd55 */
    RECOMP_FLAGS_IN();
    goto L_1006FC4F; /* falls through past a gap */
L_1006FC4E:
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + LO8(eax)); /* 0x1006FC4E: add bh, al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_1006FC50; /* falls through past a gap */
L_1006FC4F:
    MEM32(ebp + (-0x44)) = 0x10067694u; /* 0x1006FC4F: mov dword ptr [ebp - 0x44], 0x10067694 */
    goto L_1006FC56; /* falls through past a gap */
L_1006FC50:
    _flag_a = (uint32_t)(ebp); _flag_b = (uint32_t)(1);
    ebp = ebp + 1; /* 0x1006FC50: inc ebp */
    _flag_k = FK_INC;
    esp = 0x10067694u; /* 0x1006FC51: mov esp, 0x10067694 */
L_1006FC56:
    eax = ebp + (-0x44); /* 0x1006FC56: lea eax, [ebp - 0x44] */
    PUSH32(esp, 0x100DCF08u); /* 0x1006FC59: push 0x100dcf08 */
L_1006FC5E:
    PUSH32(esp, eax); /* 0x1006FC5E: push eax */
    RECOMP_CALL(sub_100192EB); /* 0x1006FC5F: call 0x100192eb */
    RECOMP_FLAGS_IN();
L_1006FC64:
    eax = MEM32(0x100E03E4); /* 0x1006FC64: mov eax, dword ptr [0x100e03e4] */
    /* test eax, eax */ /* 0x1006FC69: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006FC77; /* 0x1006FC6B: jne 0x1006fc77 */
L_1006FC6D:
    RECOMP_CALL(sub_10026BF4); /* 0x1006FC6D: call 0x10026bf4 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x100E03E4); /* 0x1006FC72: mov eax, dword ptr [0x100e03e4] */
L_1006FC77:
    /* cmp eax, 4 */ /* 0x1006FC77: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_1006FC7A; /* falls through past a gap */
L_1006FC79:
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x7Du) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO8(eax, LO8(eax) + 0x7Du); /* 0x1006FC79: add al, 0x7d */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_1006FC7B; /* falls through past a gap */
L_1006FC7A:
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_GE)) goto L_1006FC95; /* 0x1006FC7A: jge 0x1006fc95 */
    goto L_1006FC7C; /* falls through past a gap */
L_1006FC7B:
    { uint32_t _sa = MEM32(ebp + (-0x2E1767B3)), _sb = ecx, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1006FC7B: sbb dword ptr [ebp - 0x2e1767b3], ecx */
      MEM32(ebp + (-0x2E1767B3)) = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_1006FC81; /* falls through past a gap */
L_1006FC7C:
    ecx = ebp + (-0x68); /* 0x1006FC7C: lea ecx, [ebp - 0x68] */
    RECOMP_CALL(sub_1009DD55); /* 0x1006FC7F: call 0x1009dd55 */
    RECOMP_FLAGS_IN();
    goto L_1006FC84; /* falls through past a gap */
L_1006FC81:
    { int _zc = (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)); if (--ecx != 0 && _zc) goto L_1006FC85; } /* 0x1006FC81: loopne 0x1006fc85 */
L_1006FC83:
    _flag_a = (uint32_t)(HI8(ebx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_HI8(ebx, HI8(ebx) + LO8(eax)); /* 0x1006FC83: add bh, al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    goto L_1006FC85; /* falls through past a gap */
L_1006FC84:
    MEM32(ebp + (-0x68)) = 0x10067694u; /* 0x1006FC84: mov dword ptr [ebp - 0x68], 0x10067694 */
    goto L_1006FC8B; /* falls through past a gap */
L_1006FC85:
    _flag_a = (uint32_t)(ebp); _flag_b = (uint32_t)(1);
    ebp = ebp + 1; /* 0x1006FC85: inc ebp */
    _flag_k = FK_INC;
    eax = (uint32_t)(int32_t)(int16_t)LO16(eax); /* 0x1006FC86: cwde  */
    { uint32_t _tmp = esp; /* 0x1006FC87: xchg esp, eax */
      esp = eax;
      eax = _tmp; }
    if ((_cf != 0 || recomp_cond(_flag_k, _flag_a, _flag_b, CC_E))) goto L_1006FC90; /* 0x1006FC88: jbe 0x1006fc90 */
L_1006FC8A:
    { uint32_t _aa = MEM8(ebp + 0x8689845), _ab = LO8(ecx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1006FC8A: adc byte ptr [ebp + 0x8689845], cl */
      MEM8(ebp + 0x8689845) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_1006FC90; /* falls through past a gap */
L_1006FC8B:
    eax = ebp + (-0x68); /* 0x1006FC8B: lea eax, [ebp - 0x68] */
    PUSH32(esp, 0x100DCF08u); /* 0x1006FC8E: push 0x100dcf08 */
    goto L_1006FC93; /* falls through past a gap */
L_1006FC90:
    void_lift_trap(0x1006FC90u, "iretd ");
    _flag_a = (uint32_t)((eax | 0x66C9EB10u)); _flag_b = (uint32_t)((eax | 0x66C9EB10u));
    eax = eax | 0x66C9EB10u; /* 0x1006FC91: or eax, 0x66c9eb10 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1006FC96; /* falls through past a gap */
L_1006FC93:
    RECOMP_BACKEDGE();
    goto L_1006FC5E; /* 0x1006FC93: jmp 0x1006fc5e */
L_1006FC95:
    /* test LO16(ebx), LO16(ebx) */ /* 0x1006FC95: test bx, bx */
    _flag_a = (uint32_t)(LO16(ebx)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    goto L_1006FC98; /* falls through past a gap */
L_1006FC96:
    /* test ebx, ebx */ /* 0x1006FC96: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
L_1006FC98:
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006FCC7; /* 0x1006FC98: jne 0x1006fcc7 */
L_1006FC9A:
    eax = ebp + (-0x14); /* 0x1006FC9A: lea eax, [ebp - 0x14] */
    MEM32(ebp + (-0x14)) = 0x100678FCu; /* 0x1006FC9D: mov dword ptr [ebp - 0x14], 0x100678fc */
    PUSH32(esp, eax); /* 0x1006FCA4: push eax */
    ecx = ebp + (-0x98); /* 0x1006FCA5: lea ecx, [ebp - 0x98] */
    RECOMP_CALL(sub_1009DD30); /* 0x1006FCAB: call 0x1009dd30 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x98)) = 0x1006754Cu; /* 0x1006FCB0: mov dword ptr [ebp - 0x98], 0x1006754c */
    eax = ebp + (-0x98); /* 0x1006FCBA: lea eax, [ebp - 0x98] */
    PUSH32(esp, 0x100DCEE8u); /* 0x1006FCC0: push 0x100dcee8 */
    RECOMP_BACKEDGE();
    goto L_1006FC5E; /* 0x1006FCC5: jmp 0x1006fc5e */
L_1006FCC7:
    /* test edi, edi */ /* 0x1006FCC7: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1006FCF2; /* 0x1006FCC9: jne 0x1006fcf2 */
L_1006FCCB:
    eax = ebp + (-0x20); /* 0x1006FCCB: lea eax, [ebp - 0x20] */
    MEM32(ebp + (-0x20)) = 0x1006FFF8u; /* 0x1006FCCE: mov dword ptr [ebp - 0x20], 0x1006fff8 */
    PUSH32(esp, eax); /* 0x1006FCD5: push eax */
    ecx = ebp + (-0x80); /* 0x1006FCD6: lea ecx, [ebp - 0x80] */
    RECOMP_CALL(sub_1009DD30); /* 0x1006FCD9: call 0x1009dd30 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x80)) = 0x1006754Cu; /* 0x1006FCDE: mov dword ptr [ebp - 0x80], 0x1006754c */
    eax = ebp + (-0x80); /* 0x1006FCE5: lea eax, [ebp - 0x80] */
    PUSH32(esp, 0x100DCEE8u); /* 0x1006FCE8: push 0x100dcee8 */
    RECOMP_BACKEDGE();
    goto L_1006FC5E; /* 0x1006FCED: jmp 0x1006fc5e */
L_1006FCF2:
    esi = (uint32_t)LO16(ebx); /* 0x1006FCF2: movzx esi, bx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1006FCF5: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xCu); /* 0x1006FCF7: push 0xc */
    edx = POP32_VAL(esp); /* 0x1006FCF9: pop edx */
    eax = esi; /* 0x1006FCFA: mov eax, esi */
    MEM32(ebp + (-0x28)) = esi; /* 0x1006FCFC: mov dword ptr [ebp - 0x28], esi */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x1006FCFF: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x1006FD01: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1006FD04: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x1006FD06: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x1006FD08: push ecx */
    RECOMP_CALL(sub_10011683); /* 0x1006FD09: call 0x10011683 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1006FD0E: mov ebx, eax */
    MEM32(ebp + (-0x24)) = ebx; /* 0x1006FD10: mov dword ptr [ebp - 0x24], ebx */
    ecx = POP32_VAL(esp); /* 0x1006FD13: pop ecx */
    /* test ebx, ebx */ /* 0x1006FD14: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006FD3B; /* 0x1006FD16: je 0x1006fd3b */
L_1006FD18:
    edx = esi + (-0x1); /* 0x1006FD18: lea edx, [esi - 1] */
    ecx = ebx; /* 0x1006FD1B: mov ecx, ebx */
    /* test edx, edx */ /* 0x1006FD1D: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1006FD40; /* 0x1006FD1F: js 0x1006fd40 */
L_1006FD21:
    edi = ecx; /* 0x1006FD21: mov edi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1006FD23: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi) = eax; edi += _df * 4; /* 0x1006FD25: stosd dword ptr es:[edi], eax */
    MEM32(edi) = eax; edi += _df * 4; /* 0x1006FD26: stosd dword ptr es:[edi], eax */
    MEM32(edi) = eax; edi += _df * 4; /* 0x1006FD27: stosd dword ptr es:[edi], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1006FD28: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    MEM32(ecx) = MEM32(ecx) & eax; /* 0x1006FD2A: and dword ptr [ecx], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(ecx + 0x4) = (uint16_t)(LO16(eax)); /* 0x1006FD2C: mov word ptr [ecx + 4], ax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xCu; /* 0x1006FD30: add ecx, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1006FD33: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NS(_flag_a, _flag_b)) goto L_1006FD21; /* 0x1006FD34: jns 0x1006fd21 */
L_1006FD36:
    edi = MEM32(ebp + (-0x10)); /* 0x1006FD36: mov edi, dword ptr [ebp - 0x10] */
    goto L_1006FD40; /* 0x1006FD39: jmp 0x1006fd40 */
L_1006FD3B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1006FD3B: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x24)) = ebx; /* 0x1006FD3D: mov dword ptr [ebp - 0x24], ebx */
L_1006FD40:
    /* test esi, esi */ /* 0x1006FD40: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1006FD89; /* 0x1006FD42: jle 0x1006fd89 */
L_1006FD44:
    eax = ebx + 0x4; /* 0x1006FD44: lea eax, [ebx + 4] */
    MEM32(ebp + (-0x18)) = esi; /* 0x1006FD47: mov dword ptr [ebp - 0x18], esi */
    esi = MEM32(ebp + (-0x10)); /* 0x1006FD4A: mov esi, dword ptr [ebp - 0x10] */
    MEM32(ebp + (-0x14)) = eax; /* 0x1006FD4D: mov dword ptr [ebp - 0x14], eax */
    eax = edi; /* 0x1006FD50: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x1006FD52: sub eax, ebx */
    _flag_k = FK_CMP;
    ebx = MEM32(ebp + (-0x14)); /* 0x1006FD54: mov ebx, dword ptr [ebp - 0x14] */
    MEM32(ebp + (-0x20)) = eax; /* 0x1006FD57: mov dword ptr [ebp - 0x20], eax */
L_1006FD5A:
    ecx = (uint32_t)MEM16(eax + ebx); /* 0x1006FD5A: movzx ecx, word ptr [eax + ebx] */
    edi = ebp + (-0x50); /* 0x1006FD5E: lea edi, [ebp - 0x50] */
    edx = MEM32(esi); /* 0x1006FD61: mov edx, dword ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1006FD63: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x18)) = MEM32(ebp + (-0x18)) - 1; /* 0x1006FD65: dec dword ptr [ebp - 0x18] */
    _flag_k = FK_DEC;
    esi = esi + 0xC; /* 0x1006FD68: lea esi, [esi + 0xc] */
    MEM32(edi) = eax; edi += _df * 4; /* 0x1006FD6B: stosd dword ptr es:[edi], eax */
    MEM16(ebx) = (uint16_t)(LO16(ecx)); /* 0x1006FD6C: mov word ptr [ebx], cx */
    ebx = ebx + 0xC; /* 0x1006FD6F: lea ebx, [ebx + 0xc] */
    MEM32(ebx + (-0x10)) = edx; /* 0x1006FD72: mov dword ptr [ebx - 0x10], edx */
    MEM32(edi) = eax; edi += _df * 4; /* 0x1006FD75: stosd dword ptr es:[edi], eax */
    MEM32(edi) = eax; edi += _df * 4; /* 0x1006FD76: stosd dword ptr es:[edi], eax */
    eax = MEM32(ebp + (-0x20)); /* 0x1006FD77: mov eax, dword ptr [ebp - 0x20] */
    MEM16(ebp + (-0x4C)) = (uint16_t)(LO16(ecx)); /* 0x1006FD7A: mov word ptr [ebp - 0x4c], cx */
    MEM32(ebp + (-0x50)) = edx; /* 0x1006FD7E: mov dword ptr [ebp - 0x50], edx */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1006FD5A; /* 0x1006FD81: jne 0x1006fd5a */
L_1006FD83:
    ebx = MEM32(ebp + (-0x24)); /* 0x1006FD83: mov ebx, dword ptr [ebp - 0x24] */
    esi = MEM32(ebp + (-0x28)); /* 0x1006FD86: mov esi, dword ptr [ebp - 0x28] */
L_1006FD89:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1006FD89: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x1006FD8B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006FE65; /* 0x1006FD8D: je 0x1006fe65 */
L_1006FD93:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1006FD93: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = ebx; /* 0x1006FD95: mov dword ptr [ebp - 0x10], ebx */
    MEM32(ebp + (-0x18)) = ecx; /* 0x1006FD98: mov dword ptr [ebp - 0x18], ecx */
    edi = ebx; /* 0x1006FD9B: mov edi, ebx */
L_1006FD9D:
    eax = edx + 0x1; /* 0x1006FD9D: lea eax, [edx + 1] */
    MEM32(ebp + (-0x20)) = edx; /* 0x1006FDA0: mov dword ptr [ebp - 0x20], edx */
    MEM32(ebp + (-0x14)) = eax; /* 0x1006FDA3: mov dword ptr [ebp - 0x14], eax */
    MEM32(ebp + (-0x2C)) = eax; /* 0x1006FDA6: mov dword ptr [ebp - 0x2c], eax */
    /* cmp eax, esi */ /* 0x1006FDA9: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1006FE4F; /* 0x1006FDAB: jae 0x1006fe4f */
L_1006FDB1:
    PUSH32(esp, 0xFFFFFFFCu); /* 0x1006FDB1: push -4 */
    eax = POP32_VAL(esp); /* 0x1006FDB3: pop eax */
    MEM32(ebp + (-0x34)) = ecx; /* 0x1006FDB4: mov dword ptr [ebp - 0x34], ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x1006FDB7: sub eax, ebx */
    _flag_k = FK_CMP;
    ecx = edi + 0x10; /* 0x1006FDB9: lea ecx, [edi + 0x10] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x1006FDBC: mov dword ptr [ebp - 0x1c], eax */
    MEM32(ebp + (-0x24)) = ecx; /* 0x1006FDBF: mov dword ptr [ebp - 0x24], ecx */
L_1006FDC2:
    eax = (uint32_t)MEM16(ecx); /* 0x1006FDC2: movzx eax, word ptr [ecx] */
    ecx = (uint32_t)LO16(eax); /* 0x1006FDC5: movzx ecx, ax */
    MEM32(ebp + (-0x30)) = eax; /* 0x1006FDC8: mov dword ptr [ebp - 0x30], eax */
    eax = MEM32(ebp + (-0x34)); /* 0x1006FDCB: mov eax, dword ptr [ebp - 0x34] */
    eax = (uint32_t)MEM16(eax + ebx + 0x4); /* 0x1006FDCE: movzx eax, word ptr [eax + ebx + 4] */
    /* cmp LO16(ecx), LO16(eax) */ /* 0x1006FDD3: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006FEAD; /* 0x1006FDD6: je 0x1006fead */
L_1006FDDC:
    esi = MEM32(ebp + (-0x34)); /* 0x1006FDDC: mov esi, dword ptr [ebp - 0x34] */
    eax = MEM32(ebp + (-0x30)); /* 0x1006FDDF: mov eax, dword ptr [ebp - 0x30] */
    ecx = (uint32_t)LO16(eax); /* 0x1006FDE2: movzx ecx, ax */
    eax = (uint32_t)MEM16(esi + ebx + 0x4); /* 0x1006FDE5: movzx eax, word ptr [esi + ebx + 4] */
    esi = MEM32(ebp + (-0x28)); /* 0x1006FDEA: mov esi, dword ptr [ebp - 0x28] */
    /* cmp LO16(ecx), LO16(eax) */ /* 0x1006FDED: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    eax = MEM32(ebp + (-0x2C)); /* 0x1006FDF0: mov eax, dword ptr [ebp - 0x2c] */
    ecx = MEM32(ebp + (-0x24)); /* 0x1006FDF3: mov ecx, dword ptr [ebp - 0x24] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_1006FE06; /* 0x1006FDF6: jae 0x1006fe06 */
L_1006FDF8:
    edi = MEM32(ebp + (-0x1C)); /* 0x1006FDF8: mov edi, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + ecx; /* 0x1006FDFB: add edi, ecx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x20)) = eax; /* 0x1006FDFD: mov dword ptr [ebp - 0x20], eax */
    MEM32(ebp + (-0x34)) = edi; /* 0x1006FE00: mov dword ptr [ebp - 0x34], edi */
    edi = MEM32(ebp + (-0x10)); /* 0x1006FE03: mov edi, dword ptr [ebp - 0x10] */
L_1006FE06:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1006FE06: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xCu; /* 0x1006FE07: add ecx, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x2C)) = eax; /* 0x1006FE0A: mov dword ptr [ebp - 0x2c], eax */
    MEM32(ebp + (-0x24)) = ecx; /* 0x1006FE0D: mov dword ptr [ebp - 0x24], ecx */
    /* cmp eax, esi */ /* 0x1006FE10: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1006FDC2; /* 0x1006FE12: jb 0x1006fdc2 */
L_1006FE14:
    eax = MEM32(ebp + (-0x20)); /* 0x1006FE14: mov eax, dword ptr [ebp - 0x20] */
    /* cmp edx, eax */ /* 0x1006FE17: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006FE49; /* 0x1006FE19: je 0x1006fe49 */
L_1006FE1B:
    esi = edi; /* 0x1006FE1B: mov esi, edi */
    ecx = (uint32_t)((int32_t)eax * (int32_t)0xCu); /* 0x1006FE1D: imul ecx, eax, 0xc */
    edi = ebp + (-0x5C); /* 0x1006FE20: lea edi, [ebp - 0x5c] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1006FE23: movsd dword ptr es:[edi], dword ptr [esi] */
    SET_LO16(eax, MEM16(ecx + ebx + 0x4)); /* 0x1006FE24: mov ax, word ptr [ecx + ebx + 4] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1006FE29: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1006FE2A: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = MEM32(ebp + (-0x10)); /* 0x1006FE2B: mov edi, dword ptr [ebp - 0x10] */
    esi = MEM32(ebp + (-0x28)); /* 0x1006FE2E: mov esi, dword ptr [ebp - 0x28] */
    MEM16(edi + 0x4) = (uint16_t)(LO16(eax)); /* 0x1006FE31: mov word ptr [edi + 4], ax */
    eax = MEM32(ecx + ebx); /* 0x1006FE35: mov eax, dword ptr [ecx + ebx] */
    MEM32(edi) = eax; /* 0x1006FE38: mov dword ptr [edi], eax */
    SET_LO16(eax, MEM16(ebp + (-0x58))); /* 0x1006FE3A: mov ax, word ptr [ebp - 0x58] */
    MEM16(ecx + ebx + 0x4) = (uint16_t)(LO16(eax)); /* 0x1006FE3E: mov word ptr [ecx + ebx + 4], ax */
    eax = MEM32(ebp + (-0x5C)); /* 0x1006FE43: mov eax, dword ptr [ebp - 0x5c] */
    MEM32(ecx + ebx) = eax; /* 0x1006FE46: mov dword ptr [ecx + ebx], eax */
L_1006FE49:
    ecx = MEM32(ebp + (-0x18)); /* 0x1006FE49: mov ecx, dword ptr [ebp - 0x18] */
    eax = MEM32(ebp + (-0x14)); /* 0x1006FE4C: mov eax, dword ptr [ebp - 0x14] */
L_1006FE4F:
    edx = eax; /* 0x1006FE4F: mov edx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xCu; /* 0x1006FE51: add ecx, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0xCu; /* 0x1006FE54: add edi, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x18)) = ecx; /* 0x1006FE57: mov dword ptr [ebp - 0x18], ecx */
    MEM32(ebp + (-0x10)) = edi; /* 0x1006FE5A: mov dword ptr [ebp - 0x10], edi */
    /* cmp edx, esi */ /* 0x1006FE5D: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1006FD9D; /* 0x1006FE5F: jb 0x1006fd9d */
L_1006FE65:
    PUSH32(esp, 4); /* 0x1006FE65: push 4 */
    ecx = POP32_VAL(esp); /* 0x1006FE67: pop ecx */
    RECOMP_CALL(sub_10027B12); /* 0x1006FE68: call 0x10027b12 */
    RECOMP_FLAGS_IN();
    edx = MEM32(0x100E0ABC); /* 0x1006FE6D: mov edx, dword ptr [0x100e0abc] */
    SET_LO16(edi, MEM16(ebp + (-0x36))); /* 0x1006FE73: mov di, word ptr [ebp - 0x36] */
    /* cmp LO16(edi), MEM16(edx + 0xA) */ /* 0x1006FE77: cmp di, word ptr [edx + 0xa] */
    _flag_a = (uint32_t)(LO16(edi)) << 16; _flag_b = (uint32_t)(MEM16(edx + 0xA)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_BE(_flag_a, _flag_b)) goto L_1006FED4; /* 0x1006FE7B: jbe 0x1006fed4 */
L_1006FE7D:
    eax = ebp + (-0x30); /* 0x1006FE7D: lea eax, [ebp - 0x30] */
    MEM32(ebp + (-0x30)) = 0x100678FCu; /* 0x1006FE80: mov dword ptr [ebp - 0x30], 0x100678fc */
    PUSH32(esp, eax); /* 0x1006FE87: push eax */
    ecx = ebp + (-0x8C); /* 0x1006FE88: lea ecx, [ebp - 0x8c] */
    RECOMP_CALL(sub_1009DD30); /* 0x1006FE8E: call 0x1009dd30 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x8C)) = 0x1006754Cu; /* 0x1006FE93: mov dword ptr [ebp - 0x8c], 0x1006754c */
    eax = ebp + (-0x8C); /* 0x1006FE9D: lea eax, [ebp - 0x8c] */
    PUSH32(esp, 0x100DCEE8u); /* 0x1006FEA3: push 0x100dcee8 */
    RECOMP_BACKEDGE();
    goto L_1006FC5E; /* 0x1006FEA8: jmp 0x1006fc5e */
L_1006FEAD:
    eax = ebp + (-0x1C); /* 0x1006FEAD: lea eax, [ebp - 0x1c] */
    MEM32(ebp + (-0x1C)) = 0x1006FFF8u; /* 0x1006FEB0: mov dword ptr [ebp - 0x1c], 0x1006fff8 */
    PUSH32(esp, eax); /* 0x1006FEB7: push eax */
    ecx = ebp + (-0x74); /* 0x1006FEB8: lea ecx, [ebp - 0x74] */
    RECOMP_CALL(sub_1009DD30); /* 0x1006FEBB: call 0x1009dd30 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x74)) = 0x1006754Cu; /* 0x1006FEC0: mov dword ptr [ebp - 0x74], 0x1006754c */
    eax = ebp + (-0x74); /* 0x1006FEC7: lea eax, [ebp - 0x74] */
    PUSH32(esp, 0x100DCEE8u); /* 0x1006FECA: push 0x100dcee8 */
    RECOMP_BACKEDGE();
    goto L_1006FC5E; /* 0x1006FECF: jmp 0x1006fc5e */
L_1006FED4:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & 0; /* 0x1006FED4: and dword ptr [ebp - 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1006FED8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1006FEDA: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1006FEDC: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO16(eax), LO16(edi) */ /* 0x1006FEDE: cmp ax, di */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_AE(_flag_a, _flag_b)) goto L_1006FFC6; /* 0x1006FEE1: jae 0x1006ffc6 */
L_1006FEE7:
    eax = (uint32_t)LO16(esi); /* 0x1006FEE7: movzx eax, si */
    eax = (uint32_t)((int32_t)eax * (int32_t)0xCu); /* 0x1006FEEA: imul eax, eax, 0xc */
    MEM32(ebp + (-0x14)) = eax; /* 0x1006FEED: mov dword ptr [ebp - 0x14], eax */
    eax = (uint32_t)MEM16(eax + ebx + 0x4); /* 0x1006FEF0: movzx eax, word ptr [eax + ebx + 4] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x1006FEF5: mov dword ptr [ebp - 0x1c], eax */
    eax = (uint32_t)LO16(eax); /* 0x1006FEF8: movzx eax, ax */
    /* cmp LO16(ecx), LO16(eax) */ /* 0x1006FEFB: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_AE(_flag_a, _flag_b)) goto L_1006FF19; /* 0x1006FEFE: jae 0x1006ff19 */
L_1006FF00:
    eax = MEM32(ebp + (-0x1C)); /* 0x1006FF00: mov eax, dword ptr [ebp - 0x1c] */
    eax = (uint32_t)LO16(eax); /* 0x1006FF03: movzx eax, ax */
    MEM32(ebp + (-0x1C)) = eax; /* 0x1006FF06: mov dword ptr [ebp - 0x1c], eax */
    eax = (uint32_t)MEM16(edx + 0xA); /* 0x1006FF09: movzx eax, word ptr [edx + 0xa] */
L_1006FF0D:
    /* cmp LO16(ecx), LO16(eax) */ /* 0x1006FF0D: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_AE(_flag_a, _flag_b)) goto L_1006FF19; /* 0x1006FF10: jae 0x1006ff19 */
L_1006FF12:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1006FF12: inc ecx */
    _flag_k = FK_INC;
    /* cmp LO16(ecx), MEM16(ebp + (-0x1C)) */ /* 0x1006FF13: cmp cx, word ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0x1C))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1006FF0D; /* 0x1006FF17: jb 0x1006ff0d */
L_1006FF19:
    /* cmp LO16(ecx), MEM16(edx + 0xA) */ /* 0x1006FF19: cmp cx, word ptr [edx + 0xa] */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(MEM16(edx + 0xA)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006FF96; /* 0x1006FF1D: je 0x1006ff96 */
L_1006FF1F:
    eax = (uint32_t)LO16(ecx); /* 0x1006FF1F: movzx eax, cx */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2Cu); /* 0x1006FF22: imul eax, eax, 0x2c */
    eax = MEM32(eax + edx + 0x48); /* 0x1006FF25: mov eax, dword ptr [eax + edx + 0x48] */
    edx = MEM32(ebp + (-0x14)); /* 0x1006FF29: mov edx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(MEM32(edx + ebx)); _flag_b = (uint32_t)(eax);
    MEM32(edx + ebx) = MEM32(edx + ebx) & eax; /* 0x1006FF2C: and dword ptr [edx + ebx], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edx; /* 0x1006FF2F: mov eax, edx */
    edx = MEM32(ebp + (-0x10)); /* 0x1006FF31: mov edx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)((edx | MEM32(eax + ebx))); _flag_b = (uint32_t)((edx | MEM32(eax + ebx)));
    edx = edx | MEM32(eax + ebx); /* 0x1006FF34: or edx, dword ptr [eax + ebx] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1006FF37: inc esi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x10)) = edx; /* 0x1006FF38: mov dword ptr [ebp - 0x10], edx */
    edx = MEM32(0x100E0ABC); /* 0x1006FF3B: mov edx, dword ptr [0x100e0abc] */
    /* cmp LO16(esi), LO16(edi) */ /* 0x1006FF41: cmp si, di */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1006FEE7; /* 0x1006FF44: jb 0x1006fee7 */
L_1006FF46:
    /* cmp MEM32(ebp + (-0x10)), 0 */ /* 0x1006FF46: cmp dword ptr [ebp - 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1006FFC6; /* 0x1006FF4A: je 0x1006ffc6 */
L_1006FF4C:
    RECOMP_CALL(sub_10025A7C); /* 0x1006FF4C: call 0x10025a7c */
    RECOMP_FLAGS_IN();
    esi = MEM32(0x100E0AB0); /* 0x1006FF51: mov esi, dword ptr [0x100e0ab0] */
    /* test esi, esi */ /* 0x1006FF57: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006FF6B; /* 0x1006FF59: je 0x1006ff6b */
L_1006FF5B:
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x1006FF5B: push dword ptr [esi + 4] */
    RECOMP_CALL(sub_1000ECE0); /* 0x1006FF5E: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1006FF63: push esi */
    RECOMP_CALL(sub_1000ECE0); /* 0x1006FF64: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1006FF69: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1006FF6A: pop ecx */
L_1006FF6B:
    PUSH32(esp, 8); /* 0x1006FF6B: push 8 */
    RECOMP_CALL(sub_1000EE11); /* 0x1006FF6D: call 0x1000ee11 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1006FF72: pop ecx */
    /* test eax, eax */ /* 0x1006FF73: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1006FF7F; /* 0x1006FF75: je 0x1006ff7f */
L_1006FF77:
    MEM16(eax) = (uint16_t)(LO16(edi)); /* 0x1006FF77: mov word ptr [eax], di */
    MEM32(eax + 0x4) = ebx; /* 0x1006FF7A: mov dword ptr [eax + 4], ebx */
    goto L_1006FF81; /* 0x1006FF7D: jmp 0x1006ff81 */
L_1006FF7F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1006FF7F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1006FF81:
    MEM32(0x100E0AB0) = eax; /* 0x1006FF81: mov dword ptr [0x100e0ab0], eax */
    MEM32(0x100E032C) = 0; /* 0x1006FF86: mov dword ptr [0x100e032c], 0 */
    RECOMP_CALL(sub_100149D7); /* 0x1006FF90: call 0x100149d7 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1006FF95: ret  */
L_1006FF96:
    eax = ebp + (-0x10); /* 0x1006FF96: lea eax, [ebp - 0x10] */
    MEM32(ebp + (-0x10)) = 0x1006FFF8u; /* 0x1006FF99: mov dword ptr [ebp - 0x10], 0x1006fff8 */
    PUSH32(esp, eax); /* 0x1006FFA0: push eax */
    ecx = ebp + (-0xA4); /* 0x1006FFA1: lea ecx, [ebp - 0xa4] */
    RECOMP_CALL(sub_1009DD30); /* 0x1006FFA7: call 0x1009dd30 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0xA4)) = 0x1006754Cu; /* 0x1006FFAC: mov dword ptr [ebp - 0xa4], 0x1006754c */
    eax = ebp + (-0xA4); /* 0x1006FFB6: lea eax, [ebp - 0xa4] */
    PUSH32(esp, 0x100DCEE8u); /* 0x1006FFBC: push 0x100dcee8 */
    RECOMP_BACKEDGE();
    goto L_1006FC5E; /* 0x1006FFC1: jmp 0x1006fc5e */
L_1006FFC6:
    eax = ebp + (-0x18); /* 0x1006FFC6: lea eax, [ebp - 0x18] */
    MEM32(ebp + (-0x18)) = 0x1006FFF8u; /* 0x1006FFC9: mov dword ptr [ebp - 0x18], 0x1006fff8 */
    PUSH32(esp, eax); /* 0x1006FFD0: push eax */
    ecx = ebp + (-0xB4); /* 0x1006FFD1: lea ecx, [ebp - 0xb4] */
    RECOMP_CALL(sub_1009DD30); /* 0x1006FFD7: call 0x1009dd30 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0xB4)) = 0x1006754Cu; /* 0x1006FFDC: mov dword ptr [ebp - 0xb4], 0x1006754c */
    eax = ebp + (-0xB4); /* 0x1006FFE6: lea eax, [ebp - 0xb4] */
    PUSH32(esp, 0x100DCEE8u); /* 0x1006FFEC: push 0x100dcee8 */
    RECOMP_BACKEDGE();
    goto L_1006FC5E; /* 0x1006FFF1: jmp 0x1006fc5e */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1006FFF8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1006FFF8u);

L_1006FFF8:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) goto L_10070041; /* 0x1006FFF8: jo 0x10070041 */
L_1006FFFA:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_B, _cf)) goto L_1007006B; /* 0x1006FFFA: jb 0x1007006b */
L_1006FFFC:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_1007006E; /* 0x1006FFFC: jne 0x1007006e */
L_1006FFFE:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1006FFFE: inc ecx */
    _flag_k = FK_INC;
    SET_LO16(ebp, (uint32_t)((int32_t)MEM16(esi + 0x69) * (int32_t)0x7974u)); /* 0x1006FFFF: imul bp, word ptr [esi + 0x69], 0x7974 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x75))) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(ebp + (-0x75)) = (uint8_t)(MEM8(ebp + (-0x75)) + LO8(edx)); /* 0x10070006: add byte ptr [ebp - 0x75], dl */
    _flag_k = FK_NARROW(FK_ADD, 24);
    /* in: no port I/O under Win32 */ /* 0x10070009: in al, dx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1007000A: sub esp, 0x10 */
    _flag_k = FK_CMP;
    edx = 0x00010000u; /* 0x1007000D: mov edx, 0x10000 */
    PUSH32(esp, esi); /* 0x10070012: push esi */
    PUSH32(esp, 0); /* 0x10070013: push 0 */
    esi = ecx; /* 0x10070015: mov esi, ecx */
    PUSH32(esp, 0); /* 0x10070017: push 0 */
    PUSH32(esp, esi); /* 0x10070019: push esi */
    PUSH32(esp, 0x100722EFu); /* 0x1007001A: push 0x100722ef */
    RECOMP_CALL(sub_1007A549); /* 0x1007001F: call 0x1007a549 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x10070024: add esp, 0x10 */
    _flag_k = FK_ADD;
    MEM32(esi + 0x4C) = eax; /* 0x10070027: mov dword ptr [esi + 0x4c], eax */
    esi = POP32_VAL(esp); /* 0x1007002A: pop esi */
    /* test eax, eax */ /* 0x1007002B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007003B; /* 0x1007002D: jne 0x1007003b */
L_1007002F:
    RECOMP_ICALL(MEM32(0x100E500C)); /* 0x1007002F: call dword ptr [0x100e500c] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10070035: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_10070051; /* 0x10070037: jg 0x10070051 */
L_10070039:
    goto L_10070059; /* 0x10070039: jmp 0x10070059 */
L_1007003B:
    PUSH32(esp, 0xFu); /* 0x1007003B: push 0xf */
    PUSH32(esp, eax); /* 0x1007003D: push eax */
    RECOMP_ICALL(MEM32(0x100E5158)); /* 0x1007003E: call dword ptr [0x100e5158] */
    RECOMP_FLAGS_IN();
    goto L_10070044; /* falls through past a gap */
L_10070041:
    PUSH32(esp, ecx); /* 0x10070041: push ecx */
    PUSH32(esp, _seg_cs); /* 0x10070042: push cs */
    { uint32_t _aa = MEM8(ebp + (-0x17FA8A40)), _ab = LO8(eax), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10070043: adc byte ptr [ebp - 0x17fa8a40], al */
      MEM8(ebp + (-0x17FA8A40)) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_10070049; /* falls through past a gap */
L_10070044:
    /* test eax, eax */ /* 0x10070044: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007004D; /* 0x10070046: jne 0x1007004d */
L_10070048:
    RECOMP_CALL(sub_1006EE8E); /* 0x10070048: call 0x1006ee8e */
    RECOMP_FLAGS_IN();
    goto L_1007004D; /* falls through past a gap */
L_10070049:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x10070049: inc ecx */
    _flag_k = FK_INC;
    /* out: no port I/O under Win32 */ /* 0x1007004A: out dx, al */
    RECOMP_ITAIL(0x1007004Bu); { RECOMP_REGS_OUT(); return; } /* falls through past a gap */
L_1007004D:
    esp = ebp; /* 0x1007004D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1007004F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10070050: ret  */
L_10070051:
    eax = (uint32_t)LO16(eax); /* 0x10070051: movzx eax, ax */
    _flag_a = (uint32_t)((eax | 0x80070000u)); _flag_b = (uint32_t)((eax | 0x80070000u));
    eax = eax | 0x80070000u; /* 0x10070054: or eax, 0x80070000 */
    _cf = 0;
    _flag_k = FK_TEST;
L_10070059:
    PUSH32(esp, eax); /* 0x10070059: push eax */
    ecx = ebp + (-0x10); /* 0x1007005A: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1006C31C); /* 0x1007005D: call 0x1006c31c */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x100DCF40u); /* 0x10070062: push 0x100dcf40 */
    eax = ebp + (-0x10); /* 0x10070067: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1007006A: push eax */
L_1007006B:
    RECOMP_CALL(sub_100192EB); /* 0x1007006B: call 0x100192eb */
    RECOMP_FLAGS_IN();
    goto L_10070070; /* falls through past a gap */
L_1007006E:
    void_lift_trap(0x1007006Eu, "cli ");
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(1);
    esp = esp - 1; /* 0x1007006F: dec esp */
    _flag_k = FK_DEC;
    goto L_10070071; /* falls through past a gap */
L_10070070:
    void_lift_trap(0x10070070u, "int3 ");
L_10070071:
    PUSH32(esp, ebx); /* 0x10070071: push ebx */
    PUSH32(esp, edi); /* 0x10070072: push edi */
    edi = ecx; /* 0x10070073: mov edi, ecx */
    _flag_a = (uint32_t)((ebx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ebx | 0xFFFFFFFFu));
    ebx = ebx | 0xFFFFFFFFu; /* 0x10070075: or ebx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edi + 0x4; /* 0x10070078: lea eax, [edi + 4] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(eax), _sum = MEM32(eax) + ebx; ebx = _old; MEM32(eax) = _sum; } /* 0x1007007B: lock xadd dword ptr [eax], ebx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x1007007F: dec ebx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_100700F3; /* 0x10070080: jne 0x100700f3 */
L_10070082:
    ecx = 0x100E032Cu; /* 0x10070082: mov ecx, 0x100e032c */
    RECOMP_CALL(sub_10023D1E); /* 0x10070087: call 0x10023d1e */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x100E0330); /* 0x1007008C: mov eax, dword ptr [0x100e0330] */
    ecx = edi; /* 0x10070091: mov ecx, edi */
    _flag_a = (uint32_t)((eax ^ MEM32(0x100E0AA8))); _flag_b = (uint32_t)((eax ^ MEM32(0x100E0AA8)));
    eax = eax ^ MEM32(0x100E0AA8); /* 0x10070093: xor eax, dword ptr [0x100e0aa8] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x10070099: sub ecx, eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1007009B: neg ecx */
    _flag_k = FK_CMP;
    { uint32_t _sa = ecx, _sb = ecx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1007009D: sbb ecx, ecx */
      ecx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(MEM32(0x100E0AA8)); _flag_b = (uint32_t)(ecx);
    MEM32(0x100E0AA8) = MEM32(0x100E0AA8) & ecx; /* 0x1007009F: and dword ptr [0x100e0aa8], ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x100E032C) = 0; /* 0x100700A5: mov dword ptr [0x100e032c], 0 */
    /* cmp MEM32(edi + 0x4C), 0 */ /* 0x100700AF: cmp dword ptr [edi + 0x4c], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x4C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100700E5; /* 0x100700B3: je 0x100700e5 */
L_100700B5:
    PUSH32(esp, esi); /* 0x100700B5: push esi */
    esi = edi + 0x2C; /* 0x100700B6: lea esi, [edi + 0x2c] */
    PUSH32(esp, esi); /* 0x100700B9: push esi */
    RECOMP_ICALL(MEM32(0x100E5038)); /* 0x100700BA: call dword ptr [0x100e5038] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x100700C0: push esi */
    MEM32(edi + 0x28) = 2; /* 0x100700C1: mov dword ptr [edi + 0x28], 2 */
    RECOMP_ICALL(MEM32(0x100E503C)); /* 0x100700C8: call dword ptr [0x100e503c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(edi + 0x50)); /* 0x100700CE: push dword ptr [edi + 0x50] */
    RECOMP_ICALL(MEM32(0x100E5140)); /* 0x100700D1: call dword ptr [0x100e5140] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x100700D7: push 0 */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x100700D9: push -1 */
    PUSH32(esp, MEM32(edi + 0x4C)); /* 0x100700DB: push dword ptr [edi + 0x4c] */
    RECOMP_ICALL(MEM32(0x100E5144)); /* 0x100700DE: call dword ptr [0x100e5144] */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x100700E4: pop esi */
L_100700E5:
    ecx = edi; /* 0x100700E5: mov ecx, edi */
    RECOMP_CALL(sub_10072305); /* 0x100700E7: call 0x10072305 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x100700EC: push edi */
    RECOMP_CALL(sub_1000ECE0); /* 0x100700ED: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100700F2: pop ecx */
L_100700F3:
    edi = POP32_VAL(esp); /* 0x100700F3: pop edi */
    eax = ebx; /* 0x100700F4: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x100700F6: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100700F7: ret  */
    RECOMP_REGS_OUT();
}

void sub_10070245(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10070245u);

L_10070245:
    PUSH32(esp, ebp); /* 0x10070245: push ebp */
    ebp = esp; /* 0x10070246: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x10070248: sub esp, 0x28 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1007024B: push ebx */
    ebx = ecx; /* 0x1007024C: mov ebx, ecx */
    MEM32(ebp + (-0x20)) = ebx; /* 0x1007024E: mov dword ptr [ebp - 0x20], ebx */
    /* cmp MEM32(ebx + 0x64), 0 */ /* 0x10070251: cmp dword ptr [ebx + 0x64], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x64)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100703E1; /* 0x10070255: je 0x100703e1 */
L_1007025B:
    PUSH32(esp, esi); /* 0x1007025B: push esi */
    esi = MEM32(ebx + 0x64); /* 0x1007025C: mov esi, dword ptr [ebx + 0x64] */
    /* test esi, esi */ /* 0x1007025F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10070268; /* 0x10070261: je 0x10070268 */
L_10070263:
    esi = MEM32(esi + 0x18); /* 0x10070263: mov esi, dword ptr [esi + 0x18] */
    goto L_1007026A; /* 0x10070266: jmp 0x1007026a */
L_10070268:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x10070268: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1007026A:
    PUSH32(esp, edi); /* 0x1007026A: push edi */
    edi = MEM32(esi + 0xA0); /* 0x1007026B: mov edi, dword ptr [esi + 0xa0] */
    ecx = esi; /* 0x10070271: mov ecx, esi */
    MEM32(ebp + (-0x1C)) = esi; /* 0x10070273: mov dword ptr [ebp - 0x1c], esi */
    RECOMP_CALL(sub_10027A0B); /* 0x10070276: call 0x10027a0b */
    RECOMP_FLAGS_IN();
    /* cmp edi, eax */ /* 0x1007027B: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1007028C; /* 0x1007027D: jb 0x1007028c */
L_1007027F:
    /* cmp MEM32(esi + 0xA8), 0 */ /* 0x1007027F: cmp dword ptr [esi + 0xa8], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0xA8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_100703B4; /* 0x10070286: jbe 0x100703b4 */
L_1007028C:
    ecx = esi; /* 0x1007028C: mov ecx, esi */
    RECOMP_CALL(sub_10027A0B); /* 0x1007028E: call 0x10027a0b */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x10070293: push eax */
    ecx = esi; /* 0x10070294: mov ecx, esi */
    RECOMP_CALL(sub_10075D9F); /* 0x10070296: call 0x10075d9f */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x1007029B: sub eax, edi */
    _flag_k = FK_CMP;
    ecx = esi; /* 0x1007029D: mov ecx, esi */
    MEM32(ebp + (-0xC)) = eax; /* 0x1007029F: mov dword ptr [ebp - 0xc], eax */
    eax = MEM32(esi + 0x10); /* 0x100702A2: mov eax, dword ptr [esi + 0x10] */
    MEM32(ebp + (-0x14)) = eax; /* 0x100702A5: mov dword ptr [ebp - 0x14], eax */
    eax = MEM32(esi + 0x14); /* 0x100702A8: mov eax, dword ptr [esi + 0x14] */
    MEM32(ebp + (-0x8)) = eax; /* 0x100702AB: mov dword ptr [ebp - 8], eax */
    RECOMP_CALL(sub_10027A0B); /* 0x100702AE: call 0x10027a0b */
    RECOMP_FLAGS_IN();
    /* cmp eax, MEM32(ebx + 0x1C) */ /* 0x100702B3: cmp eax, dword ptr [ebx + 0x1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x1C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = MEM32(ebx + 0x18); /* 0x100702B6: mov edi, dword ptr [ebx + 0x18] */
    SET_LO8(edx, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x100702B9: setne dl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100702BC: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x18)) = ecx; /* 0x100702BE: mov dword ptr [ebp - 0x18], ecx */
    /* test edi, edi */ /* 0x100702C1: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100703B4; /* 0x100702C3: je 0x100703b4 */
L_100702C9:
    /* cmp MEM32(ebp + (-0xC)), 0 */ /* 0x100702C9: cmp dword ptr [ebp - 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_A(_flag_a, _flag_b)) ? 1 : 0); /* 0x100702CD: seta al */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    SET_LO8(edx, LO8(edx) & LO8(eax)); /* 0x100702D0: and dl, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(edx)); /* 0x100702D2: mov byte ptr [ebp - 1], dl */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007033B; /* 0x100702D5: je 0x1007033b */
L_100702D7:
    eax = MEM32(ebp + (-0x8)); /* 0x100702D7: mov eax, dword ptr [ebp - 8] */
    edx = ecx + 0x1; /* 0x100702DA: lea edx, [ecx + 1] */
    MEM32(ebp + (-0x10)) = ecx; /* 0x100702DD: mov dword ptr [ebp - 0x10], ecx */
    eax = MEM32(eax + ecx * 4); /* 0x100702E0: mov eax, dword ptr [eax + ecx*4] */
    MEM32(ebp + (-0x28)) = eax; /* 0x100702E3: mov dword ptr [ebp - 0x28], eax */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x34u); /* 0x100702E6: imul eax, eax, 0x34 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x14)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x14)); /* 0x100702E9: add eax, dword ptr [ebp - 0x14] */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x24)) = eax; /* 0x100702EC: mov dword ptr [ebp - 0x24], eax */
    /* cmp edx, edi */ /* 0x100702EF: cmp edx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1007033B; /* 0x100702F1: jae 0x1007033b */
L_100702F3:
    esi = MEM32(ebp + (-0x8)); /* 0x100702F3: mov esi, dword ptr [ebp - 8] */
    ebx = ecx; /* 0x100702F6: mov ebx, ecx */
    ecx = eax; /* 0x100702F8: mov ecx, eax */
L_100702FA:
    eax = (uint32_t)((int32_t)MEM32(esi + edx * 4) * (int32_t)0x34u); /* 0x100702FA: imul eax, dword ptr [esi + edx*4], 0x34 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x14)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x14)); /* 0x100702FE: add eax, dword ptr [ebp - 0x14] */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x24)) = eax; /* 0x10070301: mov dword ptr [ebp - 0x24], eax */
    eax = MEM32(eax + 0x1C); /* 0x10070304: mov eax, dword ptr [eax + 0x1c] */
    /* cmp eax, MEM32(ecx + 0x1C) */ /* 0x10070307: cmp eax, dword ptr [ecx + 0x1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x1C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_10070311; /* 0x1007030A: jbe 0x10070311 */
L_1007030C:
    ecx = MEM32(ebp + (-0x24)); /* 0x1007030C: mov ecx, dword ptr [ebp - 0x24] */
    ebx = edx; /* 0x1007030F: mov ebx, edx */
L_10070311:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x10070311: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, edi */ /* 0x10070312: cmp edx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_100702FA; /* 0x10070314: jb 0x100702fa */
L_10070316:
    ecx = MEM32(ebp + (-0x18)); /* 0x10070316: mov ecx, dword ptr [ebp - 0x18] */
    /* cmp ecx, ebx */ /* 0x10070319: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = MEM32(ebp + (-0x1C)); /* 0x1007031B: mov esi, dword ptr [ebp - 0x1c] */
    MEM32(ebp + (-0x10)) = ebx; /* 0x1007031E: mov dword ptr [ebp - 0x10], ebx */
    ebx = MEM32(ebp + (-0x20)); /* 0x10070321: mov ebx, dword ptr [ebp - 0x20] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007033B; /* 0x10070324: je 0x1007033b */
L_10070326:
    edx = MEM32(ebp + (-0x10)); /* 0x10070326: mov edx, dword ptr [ebp - 0x10] */
    eax = MEM32(ebp + (-0x8)); /* 0x10070329: mov eax, dword ptr [ebp - 8] */
    edi = MEM32(ebp + (-0x8)); /* 0x1007032C: mov edi, dword ptr [ebp - 8] */
    eax = MEM32(eax + edx * 4); /* 0x1007032F: mov eax, dword ptr [eax + edx*4] */
    MEM32(edi + ecx * 4) = eax; /* 0x10070332: mov dword ptr [edi + ecx*4], eax */
    eax = MEM32(ebp + (-0x28)); /* 0x10070335: mov eax, dword ptr [ebp - 0x28] */
    MEM32(edi + edx * 4) = eax; /* 0x10070338: mov dword ptr [edi + edx*4], eax */
L_1007033B:
    edx = MEM32(ebp + (-0x8)); /* 0x1007033B: mov edx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x28))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x28)) = MEM32(ebp + (-0x28)) & 0; /* 0x1007033E: and dword ptr [ebp - 0x28], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = (uint32_t)((int32_t)MEM32(edx + ecx * 4) * (int32_t)0x34u); /* 0x10070342: imul edi, dword ptr [edx + ecx*4], 0x34 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x14)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ebp + (-0x14)); /* 0x10070346: add edi, dword ptr [ebp - 0x14] */
    _flag_k = FK_ADD;
    /* cmp MEM32(edi + 0x4), 0 */ /* 0x10070349: cmp dword ptr [edi + 4], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_100703A2; /* 0x1007034D: jbe 0x100703a2 */
L_1007034F:
    ebx = MEM32(ebp + (-0x28)); /* 0x1007034F: mov ebx, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10070352: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = ecx; /* 0x10070354: mov dword ptr [ebp - 0x10], ecx */
L_10070357:
    eax = MEM32(edi + 0x30); /* 0x10070357: mov eax, dword ptr [edi + 0x30] */
    /* cmp MEM32(eax + ecx), 1 */ /* 0x1007035A: cmp dword ptr [eax + ecx], 1 */
    _flag_a = (uint32_t)(MEM32(eax + ecx)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007037C; /* 0x1007035E: jne 0x1007037c */
L_10070360:
    /* cmp MEM32(ebp + (-0xC)), 0 */ /* 0x10070360: cmp dword ptr [ebp - 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_10070390; /* 0x10070364: jbe 0x10070390 */
L_10070366:
    eax = MEM32(eax + ecx + 0x14); /* 0x10070366: mov eax, dword ptr [eax + ecx + 0x14] */
    ecx = esi; /* 0x1007036A: mov ecx, esi */
    PUSH32(esp, 0); /* 0x1007036C: push 0 */
    PUSH32(esp, ebx); /* 0x1007036E: push ebx */
    PUSH32(esp, edi); /* 0x1007036F: push edi */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(1);
    MEM32(eax) = MEM32(eax) + 1; /* 0x10070370: inc dword ptr [eax] */
    _flag_k = FK_INC;
    RECOMP_CALL(sub_100759BA); /* 0x10070372: call 0x100759ba */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) - 1; /* 0x10070377: dec dword ptr [ebp - 0xc] */
    _flag_k = FK_DEC;
    goto L_1007038D; /* 0x1007037A: jmp 0x1007038d */
L_1007037C:
    SET_LO8(eax, MEM8(eax + ecx + 0x31)); /* 0x1007037C: mov al, byte ptr [eax + ecx + 0x31] */
    /* test LO8(eax), LO8(eax) */ /* 0x10070380: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10070390; /* 0x10070382: je 0x10070390 */
L_10070384:
    PUSH32(esp, ebx); /* 0x10070384: push ebx */
    PUSH32(esp, edi); /* 0x10070385: push edi */
    ecx = esi; /* 0x10070386: mov ecx, esi */
    RECOMP_CALL(sub_10075987); /* 0x10070388: call 0x10075987 */
    RECOMP_FLAGS_IN();
L_1007038D:
    ecx = MEM32(ebp + (-0x10)); /* 0x1007038D: mov ecx, dword ptr [ebp - 0x10] */
L_10070390:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x10070390: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x34u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x34u; /* 0x10070391: add ecx, 0x34 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x10)) = ecx; /* 0x10070394: mov dword ptr [ebp - 0x10], ecx */
    /* cmp ebx, MEM32(edi + 0x4) */ /* 0x10070397: cmp ebx, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(edi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_10070357; /* 0x1007039A: jb 0x10070357 */
L_1007039C:
    ebx = MEM32(ebp + (-0x20)); /* 0x1007039C: mov ebx, dword ptr [ebp - 0x20] */
    ecx = MEM32(ebp + (-0x18)); /* 0x1007039F: mov ecx, dword ptr [ebp - 0x18] */
L_100703A2:
    edi = MEM32(ebx + 0x18); /* 0x100703A2: mov edi, dword ptr [ebx + 0x18] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x100703A5: inc ecx */
    _flag_k = FK_INC;
    SET_LO8(edx, MEM8(ebp + (-0x1))); /* 0x100703A6: mov dl, byte ptr [ebp - 1] */
    MEM32(ebp + (-0x18)) = ecx; /* 0x100703A9: mov dword ptr [ebp - 0x18], ecx */
    /* cmp ecx, edi */ /* 0x100703AC: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_100702C9; /* 0x100703AE: jb 0x100702c9 */
L_100703B4:
    eax = MEM32(esi + 0x84); /* 0x100703B4: mov eax, dword ptr [esi + 0x84] */
    edi = POP32_VAL(esp); /* 0x100703BA: pop edi */
    /* cmp eax, MEM32(esi + 0x80) */ /* 0x100703BB: cmp eax, dword ptr [esi + 0x80] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x80));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100703CC; /* 0x100703C1: jne 0x100703cc */
L_100703C3:
    PUSH32(esp, 0); /* 0x100703C3: push 0 */
    ecx = ebx; /* 0x100703C5: mov ecx, ebx */
    RECOMP_CALL(sub_10071FE8); /* 0x100703C7: call 0x10071fe8 */
    RECOMP_FLAGS_IN();
L_100703CC:
    ecx = esi; /* 0x100703CC: mov ecx, esi */
    RECOMP_CALL(sub_10027A0B); /* 0x100703CE: call 0x10027a0b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100703D3: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0xA0), eax */ /* 0x100703D5: cmp dword ptr [esi + 0xa0], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0xA0)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = POP32_VAL(esp); /* 0x100703DB: pop esi */
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x100703DC: sete al */
    goto L_100703E3; /* 0x100703DF: jmp 0x100703e3 */
L_100703E1:
    SET_LO8(eax, 1); /* 0x100703E1: mov al, 1 */
L_100703E3:
    ebx = POP32_VAL(esp); /* 0x100703E3: pop ebx */
    esp = ebp; /* 0x100703E4: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100703E6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100703E7: ret  */
    RECOMP_REGS_OUT();
}

void sub_100703E8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100703E8u);

L_100703E8:
    PUSH32(esp, ebp); /* 0x100703E8: push ebp */
    ebp = esp; /* 0x100703E9: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x100703EB: sub esp, 0x18 */
    _flag_k = FK_CMP;
    fp_push(0.0); /* 0x100703EE: fldz  */
    PUSH32(esp, ebx); /* 0x100703F0: push ebx */
    PUSH32(esp, esi); /* 0x100703F1: push esi */
    PUSH32(esp, edi); /* 0x100703F2: push edi */
    edi = edx; /* 0x100703F3: mov edi, edx */
    ebx = ecx; /* 0x100703F5: mov ebx, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x100703F7: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    fp_push(_st[0]); /* 0x100703F9: fld st(0) */
    MEM32(ebp + (-0x18)) = edx; /* 0x100703FB: mov dword ptr [ebp - 0x18], edx */
    esi = edx; /* 0x100703FE: mov esi, edx */
    MEM32(ebp + (-0x8)) = esi; /* 0x10070400: mov dword ptr [ebp - 8], esi */
    /* test edi, edi */ /* 0x10070403: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10070441; /* 0x10070405: je 0x10070441 */
L_10070407:
    esi = MEM32(ebx + esi * 4); /* 0x10070407: mov esi, dword ptr [ebx + esi*4] */
    fp_push(*(double*)ADDR(esi + 0x8)); /* 0x1007040A: fld qword ptr [esi + 8] */
    RECOMP_CALL(sub_10051B5C); /* 0x1007040D: call 0x10051b5c */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x4) = eax; /* 0x10070412: mov dword ptr [esi + 4], eax */
    esi = MEM32(ebp + (-0x8)); /* 0x10070415: mov esi, dword ptr [ebp - 8] */
    ecx = MEM32(ebx + esi * 4); /* 0x10070418: mov ecx, dword ptr [ebx + esi*4] */
    eax = MEM32(ecx + 0x4); /* 0x1007041B: mov eax, dword ptr [ecx + 4] */
    fp_push((double)(int32_t)MEM32(ecx + 0x4)); /* 0x1007041E: fild dword ptr [ecx + 4] */
    /* test eax, eax */ /* 0x10070421: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1007042B; /* 0x10070423: jns 0x1007042b */
L_10070425:
    _st[0] += *(double*)ADDR(0x10067CE0); /* 0x10070425: fadd qword ptr [0x10067ce0] */
L_1007042B:
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x14)) = _v; } /* 0x1007042B: fstp qword ptr [ebp - 0x14] */
    fp_push(*(double*)ADDR(ebp + (-0x14))); /* 0x1007042E: fld qword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10070431: inc esi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x8)) = esi; /* 0x10070432: mov dword ptr [ebp - 8], esi */
    _st[0] = *(double*)ADDR(ecx + 0x8) - _st[0]; /* 0x10070435: fsubr qword ptr [ecx + 8] */
    { double _v = fp_pop(); *(double*)ADDR(ecx + 0x8) = _v; } /* 0x10070438: fstp qword ptr [ecx + 8] */
    /* cmp esi, edi */ /* 0x1007043B: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_10070407; /* 0x1007043D: jb 0x10070407 */
L_1007043F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1007043F: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
L_10070441:
    fp_push(*(double*)ADDR(0x100705A0)); /* 0x10070441: fld qword ptr [0x100705a0] */
    esi = edx; /* 0x10070447: mov esi, edx */
    MEM32(ebp + (-0x10)) = esi; /* 0x10070449: mov dword ptr [ebp - 0x10], esi */
    /* test edi, edi */ /* 0x1007044C: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100704AF; /* 0x1007044E: je 0x100704af */
L_10070450:
    eax = esi + 0x1; /* 0x10070450: lea eax, [esi + 1] */
    MEM32(ebp + (-0x8)) = esi; /* 0x10070453: mov dword ptr [ebp - 8], esi */
    MEM32(ebp + (-0xC)) = eax; /* 0x10070456: mov dword ptr [ebp - 0xc], eax */
    edx = eax; /* 0x10070459: mov edx, eax */
    /* cmp eax, edi */ /* 0x1007045B: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_100704A4; /* 0x1007045D: jae 0x100704a4 */
L_1007045F:
    if (2u) _cf = (((esi) >> 30) & 1u); /* 0x1007045F: shl esi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((esi << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 2u; /* 0x1007045F: shl esi, 2 */
L_10070462:
    eax = MEM32(esi + ebx); /* 0x10070462: mov eax, dword ptr [esi + ebx] */
    ecx = MEM32(ebx + edx * 4); /* 0x10070465: mov ecx, dword ptr [ebx + edx*4] */
    fp_push(*(double*)ADDR(eax + 0x8)); /* 0x10070468: fld qword ptr [eax + 8] */
    _st[0] += _st[1]; /* 0x1007046B: fadd st(1) */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ecx + 0x8)); /* 0x1007046D: fcomp qword ptr [ecx + 8] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x10070470: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x10070472: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_10070483; /* 0x10070475: jp 0x10070483 */
L_10070477:
    eax = edx; /* 0x10070477: mov eax, edx */
    esi = edx; /* 0x10070479: mov esi, edx */
    MEM32(ebp + (-0x8)) = eax; /* 0x1007047B: mov dword ptr [ebp - 8], eax */
    if (2u) _cf = (((esi) >> 30) & 1u); /* 0x1007047E: shl esi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((esi << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 2u; /* 0x1007047E: shl esi, 2 */
    goto L_10070486; /* 0x10070481: jmp 0x10070486 */
L_10070483:
    eax = MEM32(ebp + (-0x8)); /* 0x10070483: mov eax, dword ptr [ebp - 8] */
L_10070486:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x10070486: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, edi */ /* 0x10070487: cmp edx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_10070462; /* 0x10070489: jb 0x10070462 */
L_1007048B:
    esi = MEM32(ebp + (-0x10)); /* 0x1007048B: mov esi, dword ptr [ebp - 0x10] */
    /* cmp esi, eax */ /* 0x1007048E: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100704A1; /* 0x10070490: je 0x100704a1 */
L_10070492:
    eax = MEM32(ebx + eax * 4); /* 0x10070492: mov eax, dword ptr [ebx + eax*4] */
    ecx = MEM32(ebx + esi * 4); /* 0x10070495: mov ecx, dword ptr [ebx + esi*4] */
    MEM32(ebx + esi * 4) = eax; /* 0x10070498: mov dword ptr [ebx + esi*4], eax */
    eax = MEM32(ebp + (-0x8)); /* 0x1007049B: mov eax, dword ptr [ebp - 8] */
    MEM32(ebx + eax * 4) = ecx; /* 0x1007049E: mov dword ptr [ebx + eax*4], ecx */
L_100704A1:
    eax = MEM32(ebp + (-0xC)); /* 0x100704A1: mov eax, dword ptr [ebp - 0xc] */
L_100704A4:
    esi = eax; /* 0x100704A4: mov esi, eax */
    MEM32(ebp + (-0x10)) = esi; /* 0x100704A6: mov dword ptr [ebp - 0x10], esi */
    /* cmp esi, edi */ /* 0x100704A9: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_10070450; /* 0x100704AB: jb 0x10070450 */
L_100704AD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x100704AD: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
L_100704AF:
    ecx = edi + (-0x1); /* 0x100704AF: lea ecx, [edi - 1] */
    esi = edx; /* 0x100704B2: mov esi, edx */
    /* test edi, edi */ /* 0x100704B4: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10070514; /* 0x100704B6: je 0x10070514 */
L_100704B8:
    fp_push(1.0); /* 0x100704B8: fld1  */
    goto L_100704C0; /* 0x100704BA: jmp 0x100704c0 */
L_100704BC:
    fp_xch(1); /* 0x100704BC: fxch st(1) */
    fp_xch(2); /* 0x100704BE: fxch st(2) */
L_100704C0:
    fp_xch(2); /* 0x100704C0: fxch st(2) */
    goto L_100704D6; /* 0x100704C2: jmp 0x100704d6 */
L_100704C4:
    eax = MEM32(ebx + ecx * 4); /* 0x100704C4: mov eax, dword ptr [ebx + ecx*4] */
    fp_xch(1); /* 0x100704C7: fxch st(1) */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(eax + 0x8)); /* 0x100704C9: fcom qword ptr [eax + 8] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100704CC: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x100704CE: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_1007054A; /* 0x100704D1: jnp 0x1007054a */
L_100704D3:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x100704D3: dec ecx */
    _flag_k = FK_DEC;
    fp_xch(1); /* 0x100704D4: fxch st(1) */
L_100704D6:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x100704D6: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100704D8: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x100704DA: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100704C4; /* 0x100704DD: je 0x100704c4 */
L_100704DF:
    /* cmp esi, ecx */ /* 0x100704DF: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_10070569; /* 0x100704E1: ja 0x10070569 */
L_100704E7:
    eax = MEM32(ebx + esi * 4); /* 0x100704E7: mov eax, dword ptr [ebx + esi*4] */
    fp_xch(1); /* 0x100704EA: fxch st(1) */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(eax + 0x8)); /* 0x100704EC: fcom qword ptr [eax + 8] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x100704EF: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x100704F1: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1007050D; /* 0x100704F4: jp 0x1007050d */
L_100704F6:
    eax = MEM32(ebx + esi * 4); /* 0x100704F6: mov eax, dword ptr [ebx + esi*4] */
    fp_push(_st[2]); /* 0x100704F9: fld st(2) */
    _st[0] -= *(double*)ADDR(eax + 0x8); /* 0x100704FB: fsub qword ptr [eax + 8] */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x100704FE: faddp st(2) */
    fp_xch(3); /* 0x10070500: fxch st(3) */
    *(double*)ADDR(eax + 0x8) = _st[0]; /* 0x10070502: fst qword ptr [eax + 8] */
    eax = MEM32(ebx + esi * 4); /* 0x10070505: mov eax, dword ptr [ebx + esi*4] */
    fp_xch(3); /* 0x10070508: fxch st(3) */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) + 1; /* 0x1007050A: inc dword ptr [eax + 4] */
    _flag_k = FK_INC;
L_1007050D:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1007050D: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, edi */ /* 0x1007050E: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_100704BC; /* 0x10070510: jb 0x100704bc */
L_10070512:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x10070512: fstp st(0) */
L_10070514:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x10070514: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x10070516: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x10070518: fstp st(0) */
    /* test edi, edi */ /* 0x1007051A: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10070597; /* 0x1007051C: je 0x10070597 */
L_1007051E:
    eax = edx + 0x1; /* 0x1007051E: lea eax, [edx + 1] */
    MEM32(ebp + (-0x8)) = edx; /* 0x10070521: mov dword ptr [ebp - 8], edx */
    MEM32(ebp + (-0x10)) = eax; /* 0x10070524: mov dword ptr [ebp - 0x10], eax */
    esi = eax; /* 0x10070527: mov esi, eax */
    /* cmp eax, edi */ /* 0x10070529: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1007058E; /* 0x1007052B: jae 0x1007058e */
L_1007052D:
    if (2u) _cf = (((edx) >> 30) & 1u); /* 0x1007052D: shl edx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 2u; /* 0x1007052D: shl edx, 2 */
L_10070530:
    eax = MEM32(ebx + esi * 4); /* 0x10070530: mov eax, dword ptr [ebx + esi*4] */
    ecx = MEM32(edx + ebx); /* 0x10070533: mov ecx, dword ptr [edx + ebx] */
    eax = MEM32(eax); /* 0x10070536: mov eax, dword ptr [eax] */
    /* cmp eax, MEM32(ecx) */ /* 0x10070538: cmp eax, dword ptr [ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1007056D; /* 0x1007053A: jae 0x1007056d */
L_1007053C:
    eax = esi; /* 0x1007053C: mov eax, esi */
    edx = esi; /* 0x1007053E: mov edx, esi */
    MEM32(ebp + (-0x8)) = eax; /* 0x10070540: mov dword ptr [ebp - 8], eax */
    if (2u) _cf = (((edx) >> 30) & 1u); /* 0x10070543: shl edx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 2u; /* 0x10070543: shl edx, 2 */
    goto L_10070570; /* 0x10070546: jmp 0x10070570 */
L_10070548:
    fp_xch(1); /* 0x10070548: fxch st(1) */
L_1007054A:
    eax = MEM32(ebx + ecx * 4); /* 0x1007054A: mov eax, dword ptr [ebx + ecx*4] */
    fp_xch(1); /* 0x1007054D: fxch st(1) */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1007054F: dec ecx */
    _flag_k = FK_DEC;
    _st[0] -= *(double*)ADDR(eax + 0x8); /* 0x10070550: fsub qword ptr [eax + 8] */
    fp_xch(3); /* 0x10070553: fxch st(3) */
    *(double*)ADDR(eax + 0x8) = _st[0]; /* 0x10070555: fst qword ptr [eax + 8] */
    fp_xch(3); /* 0x10070558: fxch st(3) */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1007055A: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1007055C: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1007055E: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100704D6; /* 0x10070561: jne 0x100704d6 */
L_10070567:
    RECOMP_BACKEDGE();
    goto L_10070548; /* 0x10070567: jmp 0x10070548 */
L_10070569:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x10070569: fstp st(1) */
    RECOMP_BACKEDGE();
    goto L_10070514; /* 0x1007056B: jmp 0x10070514 */
L_1007056D:
    eax = MEM32(ebp + (-0x8)); /* 0x1007056D: mov eax, dword ptr [ebp - 8] */
L_10070570:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10070570: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, edi */ /* 0x10070571: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_10070530; /* 0x10070573: jb 0x10070530 */
L_10070575:
    edx = MEM32(ebp + (-0x18)); /* 0x10070575: mov edx, dword ptr [ebp - 0x18] */
    /* cmp edx, eax */ /* 0x10070578: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007058B; /* 0x1007057A: je 0x1007058b */
L_1007057C:
    eax = MEM32(ebx + eax * 4); /* 0x1007057C: mov eax, dword ptr [ebx + eax*4] */
    ecx = MEM32(ebx + edx * 4); /* 0x1007057F: mov ecx, dword ptr [ebx + edx*4] */
    MEM32(ebx + edx * 4) = eax; /* 0x10070582: mov dword ptr [ebx + edx*4], eax */
    eax = MEM32(ebp + (-0x8)); /* 0x10070585: mov eax, dword ptr [ebp - 8] */
    MEM32(ebx + eax * 4) = ecx; /* 0x10070588: mov dword ptr [ebx + eax*4], ecx */
L_1007058B:
    eax = MEM32(ebp + (-0x10)); /* 0x1007058B: mov eax, dword ptr [ebp - 0x10] */
L_1007058E:
    edx = eax; /* 0x1007058E: mov edx, eax */
    MEM32(ebp + (-0x18)) = edx; /* 0x10070590: mov dword ptr [ebp - 0x18], edx */
    /* cmp edx, edi */ /* 0x10070593: cmp edx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1007051E; /* 0x10070595: jb 0x1007051e */
L_10070597:
    edi = POP32_VAL(esp); /* 0x10070597: pop edi */
    esi = POP32_VAL(esp); /* 0x10070598: pop esi */
    ebx = POP32_VAL(esp); /* 0x10070599: pop ebx */
    esp = ebp; /* 0x1007059A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1007059C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007059D: ret  */
    RECOMP_REGS_OUT();
}

void sub_10070BFA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10070BFAu);

L_10070BFA:
    PUSH32(esp, ebp); /* 0x10070BFA: push ebp */
    ebp = esp; /* 0x10070BFB: mov ebp, esp */
    edx = MEM32(ebp + 0xC); /* 0x10070BFD: mov edx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x10070C00: push esi */
    esi = ecx; /* 0x10070C01: mov esi, ecx */
    SET_LO8(eax, MEM8(edx + 0x30)); /* 0x10070C03: mov al, byte ptr [edx + 0x30] */
    /* test LO8(eax), LO8(eax) */ /* 0x10070C06: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10070C3F; /* 0x10070C08: je 0x10070c3f */
L_10070C0A:
    eax = MEM32(ebp + 0x18); /* 0x10070C0A: mov eax, dword ptr [ebp + 0x18] */
    ecx = MEM32(ebp + 0x8); /* 0x10070C0D: mov ecx, dword ptr [ebp + 8] */
    MEM8(edx + 0x30) = (uint8_t)(0); /* 0x10070C10: mov byte ptr [edx + 0x30], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x14) = MEM32(eax + 0x14) - 1; /* 0x10070C14: dec dword ptr [eax + 0x14] */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(MEM32(ecx + 0x28)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x28) = MEM32(ecx + 0x28) - 1; /* 0x10070C17: dec dword ptr [ecx + 0x28] */
    _flag_k = FK_DEC;
    /* cmp MEM8(edx + 0x31), 0 */ /* 0x10070C1A: cmp byte ptr [edx + 0x31], 0 */
    _flag_a = (uint32_t)(MEM8(edx + 0x31)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10070C26; /* 0x10070C1E: je 0x10070c26 */
L_10070C20:
    _flag_a = (uint32_t)(MEM32(eax + 0x18)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x18) = MEM32(eax + 0x18) - 1; /* 0x10070C20: dec dword ptr [eax + 0x18] */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(MEM32(ecx + 0x2C)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x2C) = MEM32(ecx + 0x2C) - 1; /* 0x10070C23: dec dword ptr [ecx + 0x2c] */
    _flag_k = FK_DEC;
L_10070C26:
    ecx = MEM32(ebp + 0x14); /* 0x10070C26: mov ecx, dword ptr [ebp + 0x14] */
    /* cmp MEM32(ecx), 6 */ /* 0x10070C29: cmp dword ptr [ecx], 6 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10070C3A; /* 0x10070C2C: jne 0x10070c3a */
L_10070C2E:
    eax = MEM32(ebp + 0x10); /* 0x10070C2E: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0);
    MEM32(ecx) = MEM32(ecx) & 0; /* 0x10070C31: and dword ptr [ecx], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(eax + 0x1C)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x1C) = MEM32(eax + 0x1C) - 1; /* 0x10070C34: dec dword ptr [eax + 0x1c] */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(MEM32(esi + 0x20)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x20) = MEM32(esi + 0x20) - 1; /* 0x10070C37: dec dword ptr [esi + 0x20] */
    _flag_k = FK_DEC;
L_10070C3A:
    _flag_a = (uint32_t)(MEM32(ecx + 0x1C)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x1C) = MEM32(ecx + 0x1C) - 1; /* 0x10070C3A: dec dword ptr [ecx + 0x1c] */
    _flag_k = FK_DEC;
    goto L_10070C62; /* 0x10070C3D: jmp 0x10070c62 */
L_10070C3F:
    ecx = MEM32(ebp + 0x18); /* 0x10070C3F: mov ecx, dword ptr [ebp + 0x18] */
    esi = MEM32(ebp + 0x8); /* 0x10070C42: mov esi, dword ptr [ebp + 8] */
    MEM8(edx + 0x30) = (uint8_t)(1); /* 0x10070C45: mov byte ptr [edx + 0x30], 1 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x14) = MEM32(ecx + 0x14) + 1; /* 0x10070C49: inc dword ptr [ecx + 0x14] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(esi + 0x28)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x28) = MEM32(esi + 0x28) + 1; /* 0x10070C4C: inc dword ptr [esi + 0x28] */
    _flag_k = FK_INC;
    SET_LO8(eax, MEM8(edx + 0x31)); /* 0x10070C4F: mov al, byte ptr [edx + 0x31] */
    /* test LO8(eax), LO8(eax) */ /* 0x10070C52: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10070C5C; /* 0x10070C54: je 0x10070c5c */
L_10070C56:
    _flag_a = (uint32_t)(MEM32(ecx + 0x18)); _flag_b = (uint32_t)(1);
    MEM32(ecx + 0x18) = MEM32(ecx + 0x18) + 1; /* 0x10070C56: inc dword ptr [ecx + 0x18] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(esi + 0x2C)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x2C) = MEM32(esi + 0x2C) + 1; /* 0x10070C59: inc dword ptr [esi + 0x2c] */
    _flag_k = FK_INC;
L_10070C5C:
    eax = MEM32(ebp + 0x14); /* 0x10070C5C: mov eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(MEM32(eax + 0x1C)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x1C) = MEM32(eax + 0x1C) + 1; /* 0x10070C5F: inc dword ptr [eax + 0x1c] */
    _flag_k = FK_INC;
L_10070C62:
    esi = POP32_VAL(esp); /* 0x10070C62: pop esi */
    ebp = POP32_VAL(esp); /* 0x10070C63: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x10070C64: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_10070C67(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10070C67u);

L_10070C67:
    PUSH32(esp, ebp); /* 0x10070C67: push ebp */
    ebp = esp; /* 0x10070C68: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x10070C6A: sub esp, 0x14 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x10070C6D: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x10070C71: push ebx */
    PUSH32(esp, esi); /* 0x10070C72: push esi */
    esi = ecx; /* 0x10070C73: mov esi, ecx */
    PUSH32(esp, edi); /* 0x10070C75: push edi */
    MEM32(ebp + (-0x14)) = esi; /* 0x10070C76: mov dword ptr [ebp - 0x14], esi */
    RECOMP_CALL(sub_10024749); /* 0x10070C79: call 0x10024749 */
    RECOMP_FLAGS_IN();
    edi = MEM32(esi + 0x64); /* 0x10070C7E: mov edi, dword ptr [esi + 0x64] */
    /* test edi, edi */ /* 0x10070C81: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_10070D37; /* 0x10070C83: jmp 0x10070d37 */
L_10070C88:
    PUSH32(esp, 0x38u); /* 0x10070C88: push 0x38 */
    ebx = edi + 0x40; /* 0x10070C8A: lea ebx, [edi + 0x40] */
    PUSH32(esp, 0); /* 0x10070C8D: push 0 */
    PUSH32(esp, ebx); /* 0x10070C8F: push ebx */
    RECOMP_CALL(sub_10011533); /* 0x10070C90: call 0x10011533 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x10070C95: add esp, 0xc */
    _flag_k = FK_ADD;
    ecx = esi; /* 0x10070C98: mov ecx, esi */
    PUSH32(esp, ebx); /* 0x10070C9A: push ebx */
    PUSH32(esp, edi); /* 0x10070C9B: push edi */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x10070C9C: push dword ptr [ebp - 8] */
    RECOMP_CALL(sub_10027AAF); /* 0x10070C9F: call 0x10027aaf */
    RECOMP_FLAGS_IN();
    SET_LO8(eax, MEM8(edi + 0xCC)); /* 0x10070CA4: mov al, byte ptr [edi + 0xcc] */
    /* test LO8(eax), LO8(eax) */ /* 0x10070CAA: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10070D06; /* 0x10070CAC: je 0x10070d06 */
L_10070CAE:
    ecx = MEM32(edi + 0x8); /* 0x10070CAE: mov ecx, dword ptr [edi + 8] */
    edx = ebp + (-0x4); /* 0x10070CB1: lea edx, [ebp - 4] */
    eax = MEM32(edi + 0x78); /* 0x10070CB4: mov eax, dword ptr [edi + 0x78] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & 0; /* 0x10070CB7: and dword ptr [ebp - 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) & 0; /* 0x10070CBB: and dword ptr [ebp - 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(edi + 0xA0); /* 0x10070CBF: mov esi, dword ptr [edi + 0xa0] */
    PUSH32(esp, edx); /* 0x10070CC5: push edx */
    edx = ebp + (-0xC); /* 0x10070CC6: lea edx, [ebp - 0xc] */
    MEM32(ebp + (-0x4)) = eax; /* 0x10070CC9: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ecx); /* 0x10070CCC: mov eax, dword ptr [ecx] */
    PUSH32(esp, edx); /* 0x10070CCE: push edx */
    edx = ebp + (-0x10); /* 0x10070CCF: lea edx, [ebp - 0x10] */
    PUSH32(esp, edx); /* 0x10070CD2: push edx */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x10070CD3: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x10070CD6: push dword ptr [ebp - 4] */
    ecx = MEM32(edi + 0x38); /* 0x10070CD9: mov ecx, dword ptr [edi + 0x38] */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x10070CDC: push dword ptr [ebp - 0xc] */
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x10070CDF: push dword ptr [ebp - 0x10] */
    PUSH32(esp, esi); /* 0x10070CE2: push esi */
    RECOMP_CALL(sub_1006E943); /* 0x10070CE3: call 0x1006e943 */
    RECOMP_FLAGS_IN();
    MEM32(ebx + 0x24) = eax; /* 0x10070CE8: mov dword ptr [ebx + 0x24], eax */
    /* cmp eax, MEM32(edi + 0xA0) */ /* 0x10070CEB: cmp eax, dword ptr [edi + 0xa0] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0xA0));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_10070CFE; /* 0x10070CF1: jbe 0x10070cfe */
L_10070CF3:
    PUSH32(esp, eax); /* 0x10070CF3: push eax */
    ecx = edi; /* 0x10070CF4: mov ecx, edi */
    RECOMP_CALL(sub_10075D9F); /* 0x10070CF6: call 0x10075d9f */
    RECOMP_FLAGS_IN();
    MEM32(ebx + 0x24) = eax; /* 0x10070CFB: mov dword ptr [ebx + 0x24], eax */
L_10070CFE:
    eax = MEM32(ebp + (-0x4)); /* 0x10070CFE: mov eax, dword ptr [ebp - 4] */
    MEM32(edi + 0x78) = eax; /* 0x10070D01: mov dword ptr [edi + 0x78], eax */
    goto L_10070D0F; /* 0x10070D04: jmp 0x10070d0f */
L_10070D06:
    eax = MEM32(edi + 0xA0); /* 0x10070D06: mov eax, dword ptr [edi + 0xa0] */
    MEM32(ebx + 0x24) = eax; /* 0x10070D0C: mov dword ptr [ebx + 0x24], eax */
L_10070D0F:
    esi = MEM32(edi + 0xA0); /* 0x10070D0F: mov esi, dword ptr [edi + 0xa0] */
    /* test esi, esi */ /* 0x10070D15: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10070D3E; /* 0x10070D17: je 0x10070d3e */
L_10070D19:
    /* cmp MEM32(ebx + 0x14), 0 */ /* 0x10070D19: cmp dword ptr [ebx + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10070D47; /* 0x10070D1D: je 0x10070d47 */
L_10070D1F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10070D1F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_10070D21:
    esi = MEM32(ebp + (-0x14)); /* 0x10070D21: mov esi, dword ptr [ebp - 0x14] */
    ecx = MEM32(ebp + (-0x8)); /* 0x10070D24: mov ecx, dword ptr [ebp - 8] */
    MEM8(ebx + 0x21) = (uint8_t)(LO8(eax)); /* 0x10070D27: mov byte ptr [ebx + 0x21], al */
    eax = MEM32(esi + 0x54); /* 0x10070D2A: mov eax, dword ptr [esi + 0x54] */
    MEM32(eax + ecx * 4) = ebx; /* 0x10070D2D: mov dword ptr [eax + ecx*4], ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x10070D30: inc ecx */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(esi + 0x64) */ /* 0x10070D31: cmp edi, dword ptr [esi + 0x64] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x64));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x8)) = ecx; /* 0x10070D34: mov dword ptr [ebp - 8], ecx */
L_10070D37:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_10070D5C; /* 0x10070D37: je 0x10070d5c */
L_10070D39:
    edi = MEM32(edi + 0x18); /* 0x10070D39: mov edi, dword ptr [edi + 0x18] */
    goto L_10070D5E; /* 0x10070D3C: jmp 0x10070d5e */
L_10070D3E:
    /* cmp MEM32(edi + 0xC4), 0 */ /* 0x10070D3E: cmp dword ptr [edi + 0xc4], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0xC4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_BE(_flag_a, _flag_b)) goto L_10070D1F; /* 0x10070D45: jbe 0x10070d1f */
L_10070D47:
    /* cmp esi, MEM32(ebx + 0x24) */ /* 0x10070D47: cmp esi, dword ptr [ebx + 0x24] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebx + 0x24));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_10070D1F; /* 0x10070D4A: ja 0x10070d1f */
L_10070D4C:
    ecx = edi; /* 0x10070D4C: mov ecx, edi */
    RECOMP_CALL(sub_10027A0B); /* 0x10070D4E: call 0x10027a0b */
    RECOMP_FLAGS_IN();
    /* cmp esi, eax */ /* 0x10070D53: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_10070D1F; /* 0x10070D55: jae 0x10070d1f */
L_10070D57:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10070D57: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10070D59: inc eax */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_10070D21; /* 0x10070D5A: jmp 0x10070d21 */
L_10070D5C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x10070D5C: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_10070D5E:
    /* test edi, edi */ /* 0x10070D5E: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10070C88; /* 0x10070D60: jne 0x10070c88 */
L_10070D66:
    edi = POP32_VAL(esp); /* 0x10070D66: pop edi */
    esi = POP32_VAL(esp); /* 0x10070D67: pop esi */
    ebx = POP32_VAL(esp); /* 0x10070D68: pop ebx */
    esp = ebp; /* 0x10070D69: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10070D6B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10070D6C: ret  */
    RECOMP_REGS_OUT();
}

void sub_10070D6D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10070D6Du);

L_10070D6D:
    PUSH32(esp, ebp); /* 0x10070D6D: push ebp */
    ebp = esp; /* 0x10070D6E: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x10070D70: sub esp, 0x1c */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x10070D73: push esi */
    esi = MEM32(ebp + 0x8); /* 0x10070D74: mov esi, dword ptr [ebp + 8] */
    edx = ecx; /* 0x10070D77: mov edx, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10070D79: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = edx; /* 0x10070D7B: mov dword ptr [ebp - 8], edx */
    MEM32(ebp + (-0x14)) = eax; /* 0x10070D7E: mov dword ptr [ebp - 0x14], eax */
    esi = MEM32(esi + 0x10); /* 0x10070D81: mov esi, dword ptr [esi + 0x10] */
    /* cmp MEM32(edx + 0x18), eax */ /* 0x10070D84: cmp dword ptr [edx + 0x18], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x18)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_10070E81; /* 0x10070D87: jbe 0x10070e81 */
L_10070D8D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10070D8D: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x2Cu; /* 0x10070D8F: add esi, 0x2c */
    _flag_k = FK_ADD;
    PUSH32(esp, ebx); /* 0x10070D92: push ebx */
    MEM32(ebp + (-0x4)) = ecx; /* 0x10070D93: mov dword ptr [ebp - 4], ecx */
    PUSH32(esp, edi); /* 0x10070D96: push edi */
L_10070D97:
    /* cmp MEM32(esi + (-0xC)), 0 */ /* 0x10070D97: cmp dword ptr [esi - 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(esi + (-0xC))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_10070E69; /* 0x10070D9B: jbe 0x10070e69 */
L_10070DA1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10070DA1: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + (-0x28)), ebx */ /* 0x10070DA3: cmp dword ptr [esi - 0x28], ebx */
    _flag_a = (uint32_t)(MEM32(esi + (-0x28))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_10070E69; /* 0x10070DA6: jbe 0x10070e69 */
L_10070DAC:
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(ebx);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) & ebx; /* 0x10070DAC: and dword ptr [ebp - 0xc], ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10070DAF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x10070DB1: mov dword ptr [ebp - 0x10], eax */
L_10070DB4:
    edi = MEM32(esi + 0x4); /* 0x10070DB4: mov edi, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x10070DB7: add edi, eax */
    _flag_k = FK_ADD;
    /* cmp MEM32(edi), 4 */ /* 0x10070DB9: cmp dword ptr [edi], 4 */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10070E51; /* 0x10070DBC: jne 0x10070e51 */
L_10070DC2:
    SET_LO8(eax, MEM8(edi + 0x31)); /* 0x10070DC2: mov al, byte ptr [edi + 0x31] */
    /* test LO8(eax), LO8(eax) */ /* 0x10070DC5: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10070E51; /* 0x10070DC7: je 0x10070e51 */
L_10070DCD:
    eax = MEM32(edx + 0x48); /* 0x10070DCD: mov eax, dword ptr [edx + 0x48] */
    eax = MEM32(ecx + eax + 0x20); /* 0x10070DD0: mov eax, dword ptr [ecx + eax + 0x20] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0xC)); /* 0x10070DD4: add eax, dword ptr [ebp - 0xc] */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x1C)) = eax; /* 0x10070DD7: mov dword ptr [ebp - 0x1c], eax */
    ecx = MEM32(eax + 0x10); /* 0x10070DDA: mov ecx, dword ptr [eax + 0x10] */
    MEM32(ebp + (-0x18)) = ecx; /* 0x10070DDD: mov dword ptr [ebp - 0x18], ecx */
    /* cmp ecx, 1 */ /* 0x10070DE0: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10070E08; /* 0x10070DE3: jne 0x10070e08 */
L_10070DE5:
    ecx = MEM32(ebp + 0x8); /* 0x10070DE5: mov ecx, dword ptr [ebp + 8] */
    eax = esi + (-0x2C); /* 0x10070DE8: lea eax, [esi - 0x2c] */
    PUSH32(esp, ebx); /* 0x10070DEB: push ebx */
    PUSH32(esp, eax); /* 0x10070DEC: push eax */
    RECOMP_CALL(sub_10075987); /* 0x10070DED: call 0x10075987 */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(edi + 0x30), 0 */ /* 0x10070DF2: cmp byte ptr [edi + 0x30], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x30)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    edx = MEM32(ebp + (-0x8)); /* 0x10070DF6: mov edx, dword ptr [ebp - 8] */
    ecx = MEM32(ebp + (-0x4)); /* 0x10070DF9: mov ecx, dword ptr [ebp - 4] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10070E51; /* 0x10070DFC: je 0x10070e51 */
L_10070DFE:
    eax = MEM32(ebp + 0xC); /* 0x10070DFE: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(1);
    MEM32(esi) = MEM32(esi) - 1; /* 0x10070E01: dec dword ptr [esi] */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(MEM32(eax + 0x18)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x18) = MEM32(eax + 0x18) - 1; /* 0x10070E03: dec dword ptr [eax + 0x18] */
    _flag_k = FK_DEC;
    goto L_10070E51; /* 0x10070E06: jmp 0x10070e51 */
L_10070E08:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x1C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(eax + 0x1C); /* 0x10070E08: sub ecx, dword ptr [eax + 0x1c] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10070E0B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(edi + 0x30), LO8(eax) */ /* 0x10070E0D: cmp byte ptr [edi + 0x30], al */
    _flag_a = (uint32_t)(MEM8(edi + 0x30)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x10070E10: sete al */
    /* cmp ecx, eax */ /* 0x10070E13: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_10070E4E; /* 0x10070E15: jbe 0x10070e4e */
L_10070E17:
    ecx = MEM32(ebp + (-0x1C)); /* 0x10070E17: mov ecx, dword ptr [ebp - 0x1c] */
    eax = MEM32(ebp + (-0x18)); /* 0x10070E1A: mov eax, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x10070E1D: dec eax */
    _flag_k = FK_DEC;
    MEM32(ecx + 0x10) = eax; /* 0x10070E1E: mov dword ptr [ecx + 0x10], eax */
    /* cmp MEM8(edi + 0x30), 0 */ /* 0x10070E21: cmp byte ptr [edi + 0x30], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x30)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10070E3E; /* 0x10070E25: je 0x10070e3e */
L_10070E27:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10070E27: push dword ptr [ebp + 0xc] */
    eax = MEM32(edx + 0x48); /* 0x10070E2A: mov eax, dword ptr [edx + 0x48] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x4)); /* 0x10070E2D: add eax, dword ptr [ebp - 4] */
    _flag_k = FK_ADD;
    PUSH32(esp, ecx); /* 0x10070E30: push ecx */
    PUSH32(esp, eax); /* 0x10070E31: push eax */
    PUSH32(esp, edi); /* 0x10070E32: push edi */
    eax = esi + (-0x2C); /* 0x10070E33: lea eax, [esi - 0x2c] */
    ecx = edx; /* 0x10070E36: mov ecx, edx */
    PUSH32(esp, eax); /* 0x10070E38: push eax */
    RECOMP_CALL(sub_10070BFA); /* 0x10070E39: call 0x10070bfa */
    RECOMP_FLAGS_IN();
L_10070E3E:
    ecx = MEM32(ebp + 0x8); /* 0x10070E3E: mov ecx, dword ptr [ebp + 8] */
    eax = esi + (-0x2C); /* 0x10070E41: lea eax, [esi - 0x2c] */
    PUSH32(esp, ebx); /* 0x10070E44: push ebx */
    PUSH32(esp, eax); /* 0x10070E45: push eax */
    RECOMP_CALL(sub_10075A72); /* 0x10070E46: call 0x10075a72 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x8)); /* 0x10070E4B: mov edx, dword ptr [ebp - 8] */
L_10070E4E:
    ecx = MEM32(ebp + (-0x4)); /* 0x10070E4E: mov ecx, dword ptr [ebp - 4] */
L_10070E51:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0x34u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) + 0x34u; /* 0x10070E51: add dword ptr [ebp - 0x10], 0x34 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x10070E55: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) + 0x24u; /* 0x10070E56: add dword ptr [ebp - 0xc], 0x24 */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x10)); /* 0x10070E5A: mov eax, dword ptr [ebp - 0x10] */
    /* cmp ebx, MEM32(esi + (-0x28)) */ /* 0x10070E5D: cmp ebx, dword ptr [esi - 0x28] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(esi + (-0x28)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_10070DB4; /* 0x10070E60: jb 0x10070db4 */
L_10070E66:
    eax = MEM32(ebp + (-0x14)); /* 0x10070E66: mov eax, dword ptr [ebp - 0x14] */
L_10070E69:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10070E69: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x28u; /* 0x10070E6A: add ecx, 0x28 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x34u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x34u; /* 0x10070E6D: add esi, 0x34 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x14)) = eax; /* 0x10070E70: mov dword ptr [ebp - 0x14], eax */
    MEM32(ebp + (-0x4)) = ecx; /* 0x10070E73: mov dword ptr [ebp - 4], ecx */
    /* cmp eax, MEM32(edx + 0x18) */ /* 0x10070E76: cmp eax, dword ptr [edx + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x18));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_10070D97; /* 0x10070E79: jb 0x10070d97 */
L_10070E7F:
    edi = POP32_VAL(esp); /* 0x10070E7F: pop edi */
    ebx = POP32_VAL(esp); /* 0x10070E80: pop ebx */
L_10070E81:
    esi = POP32_VAL(esp); /* 0x10070E81: pop esi */
    esp = ebp; /* 0x10070E82: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10070E84: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x10070E85: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_10070E88(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10070E88u);

L_10070E88:
    PUSH32(esp, ebp); /* 0x10070E88: push ebp */
    ebp = esp; /* 0x10070E89: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x10070E8B: sub esp, 0x1c */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x10070E8E: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x10070E8F: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x10070E92: push esi */
    PUSH32(esp, edi); /* 0x10070E93: push edi */
    MEM32(ebp + (-0x8)) = ecx; /* 0x10070E94: mov dword ptr [ebp - 8], ecx */
    ecx = ebx; /* 0x10070E97: mov ecx, ebx */
    esi = MEM32(ebx + 0xA0); /* 0x10070E99: mov esi, dword ptr [ebx + 0xa0] */
    edi = esi; /* 0x10070E9F: mov edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebx + 0xA8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - MEM32(ebx + 0xA8); /* 0x10070EA1: sub edi, dword ptr [ebx + 0xa8] */
    _flag_k = FK_CMP;
    RECOMP_CALL(sub_1002472C); /* 0x10070EA7: call 0x1002472c */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + 0xC); /* 0x10070EAC: mov edx, dword ptr [ebp + 0xc] */
    ecx = edi; /* 0x10070EAF: mov ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x10070EB1: sub ecx, eax */
    _flag_k = FK_CMP;
    eax = esi; /* 0x10070EB3: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x18));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(edx + 0x18); /* 0x10070EB5: sub eax, dword ptr [edx + 0x18] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x24));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(edx + 0x24); /* 0x10070EB8: sub eax, dword ptr [edx + 0x24] */
    _flag_k = FK_CMP;
    /* cmp eax, ecx */ /* 0x10070EBB: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_10070EC7; /* 0x10070EBD: jae 0x10070ec7 */
L_10070EBF:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edx + 0x18));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - MEM32(edx + 0x18); /* 0x10070EBF: sub esi, dword ptr [edx + 0x18] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edx + 0x24));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - MEM32(edx + 0x24); /* 0x10070EC2: sub esi, dword ptr [edx + 0x24] */
    _flag_k = FK_CMP;
    goto L_10070ED2; /* 0x10070EC5: jmp 0x10070ed2 */
L_10070EC7:
    ecx = ebx; /* 0x10070EC7: mov ecx, ebx */
    RECOMP_CALL(sub_1002472C); /* 0x10070EC9: call 0x1002472c */
    RECOMP_FLAGS_IN();
    esi = edi; /* 0x10070ECE: mov esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x10070ED0: sub esi, eax */
    _flag_k = FK_CMP;
L_10070ED2:
    edi = MEM32(ebx + 0x10); /* 0x10070ED2: mov edi, dword ptr [ebx + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x10070ED5: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = edx; /* 0x10070ED7: mov dword ptr [ebp - 0x1c], edx */
    /* test esi, esi */ /* 0x10070EDA: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10070FC5; /* 0x10070EDC: je 0x10070fc5 */
L_10070EE2:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(edx);
    MEM32(ebp + (-0x14)) = MEM32(ebp + (-0x14)) & edx; /* 0x10070EE2: and dword ptr [ebp - 0x14], edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x24u; /* 0x10070EE5: add edi, 0x24 */
    _flag_k = FK_ADD;
L_10070EE8:
    eax = MEM32(ebp + (-0x8)); /* 0x10070EE8: mov eax, dword ptr [ebp - 8] */
    /* cmp edx, MEM32(eax + 0x18) */ /* 0x10070EEB: cmp edx, dword ptr [eax + 0x18] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(eax + 0x18));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_10070FC5; /* 0x10070EEE: jae 0x10070fc5 */
L_10070EF4:
    eax = MEM32(edi + (-0x8)); /* 0x10070EF4: mov eax, dword ptr [edi - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(edi); /* 0x10070EF7: sub eax, dword ptr [edi] */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10070FB2; /* 0x10070EF9: je 0x10070fb2 */
L_10070EFF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10070EFF: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xC)) = ecx; /* 0x10070F01: mov dword ptr [ebp - 0xc], ecx */
    /* test esi, esi */ /* 0x10070F04: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10070FB2; /* 0x10070F06: je 0x10070fb2 */
L_10070F0C:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(ecx);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & ecx; /* 0x10070F0C: and dword ptr [ebp - 4], ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x10070F0F: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x4)); /* 0x10070F11: mov eax, dword ptr [ebp - 4] */
    MEM32(ebp + (-0x10)) = edx; /* 0x10070F14: mov dword ptr [ebp - 0x10], edx */
L_10070F17:
    /* cmp ecx, MEM32(edi + (-0x20)) */ /* 0x10070F17: cmp ecx, dword ptr [edi - 0x20] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + (-0x20)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_10070FAF; /* 0x10070F1A: jae 0x10070faf */
L_10070F20:
    ecx = MEM32(edi + 0xC); /* 0x10070F20: mov ecx, dword ptr [edi + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x10070F23: add ecx, edx */
    _flag_k = FK_ADD;
    /* cmp MEM32(ecx), 4 */ /* 0x10070F25: cmp dword ptr [ecx], 4 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10070F94; /* 0x10070F28: jne 0x10070f94 */
L_10070F2A:
    /* cmp MEM32(ecx + 0x28), 0 */ /* 0x10070F2A: cmp dword ptr [ecx + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_10070F94; /* 0x10070F2E: ja 0x10070f94 */
L_10070F30:
    SET_LO8(eax, MEM8(ecx + 0x31)); /* 0x10070F30: mov al, byte ptr [ecx + 0x31] */
    /* test LO8(eax), LO8(eax) */ /* 0x10070F33: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10070F91; /* 0x10070F35: jne 0x10070f91 */
L_10070F37:
    eax = MEM32(ebp + (-0x8)); /* 0x10070F37: mov eax, dword ptr [ebp - 8] */
    edx = MEM32(ebp + (-0x14)); /* 0x10070F3A: mov edx, dword ptr [ebp - 0x14] */
    eax = MEM32(eax + 0x48); /* 0x10070F3D: mov eax, dword ptr [eax + 0x48] */
    eax = MEM32(edx + eax + 0x20); /* 0x10070F40: mov eax, dword ptr [edx + eax + 0x20] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x4)); /* 0x10070F44: add eax, dword ptr [ebp - 4] */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x18)) = eax; /* 0x10070F47: mov dword ptr [ebp - 0x18], eax */
    eax = MEM32(eax + 0x10); /* 0x10070F4A: mov eax, dword ptr [eax + 0x10] */
    /* cmp eax, 1 */ /* 0x10070F4D: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_10070F8E; /* 0x10070F50: jbe 0x10070f8e */
L_10070F52:
    ebx = MEM32(ebp + (-0x18)); /* 0x10070F52: mov ebx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x10070F55: dec eax */
    _flag_k = FK_DEC;
    MEM32(ebx + 0x10) = eax; /* 0x10070F56: mov dword ptr [ebx + 0x10], eax */
    SET_LO8(eax, MEM8(ecx + 0x30)); /* 0x10070F59: mov al, byte ptr [ecx + 0x30] */
    ebx = MEM32(ebp + 0x8); /* 0x10070F5C: mov ebx, dword ptr [ebp + 8] */
    /* test LO8(eax), LO8(eax) */ /* 0x10070F5F: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10070F7F; /* 0x10070F61: je 0x10070f7f */
L_10070F63:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10070F63: push dword ptr [ebp + 0xc] */
    eax = MEM32(ebp + (-0x8)); /* 0x10070F66: mov eax, dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x10070F69: push dword ptr [ebp - 0x18] */
    eax = MEM32(eax + 0x48); /* 0x10070F6C: mov eax, dword ptr [eax + 0x48] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x10070F6F: add eax, edx */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x10070F71: push eax */
    PUSH32(esp, ecx); /* 0x10070F72: push ecx */
    ecx = MEM32(ebp + (-0x8)); /* 0x10070F73: mov ecx, dword ptr [ebp - 8] */
    eax = edi + (-0x24); /* 0x10070F76: lea eax, [edi - 0x24] */
    PUSH32(esp, eax); /* 0x10070F79: push eax */
    RECOMP_CALL(sub_10070BFA); /* 0x10070F7A: call 0x10070bfa */
    RECOMP_FLAGS_IN();
L_10070F7F:
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x10070F7F: push dword ptr [ebp - 0xc] */
    eax = edi + (-0x24); /* 0x10070F82: lea eax, [edi - 0x24] */
    ecx = ebx; /* 0x10070F85: mov ecx, ebx */
    PUSH32(esp, eax); /* 0x10070F87: push eax */
    RECOMP_CALL(sub_10075A72); /* 0x10070F88: call 0x10075a72 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x10070F8D: dec esi */
    _flag_k = FK_DEC;
L_10070F8E:
    edx = MEM32(ebp + (-0x10)); /* 0x10070F8E: mov edx, dword ptr [ebp - 0x10] */
L_10070F91:
    eax = MEM32(ebp + (-0x4)); /* 0x10070F91: mov eax, dword ptr [ebp - 4] */
L_10070F94:
    ecx = MEM32(ebp + (-0xC)); /* 0x10070F94: mov ecx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x34u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x34u; /* 0x10070F97: add edx, 0x34 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x10070F9A: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x10)) = edx; /* 0x10070F9B: mov dword ptr [ebp - 0x10], edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x24u; /* 0x10070F9E: add eax, 0x24 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xC)) = ecx; /* 0x10070FA1: mov dword ptr [ebp - 0xc], ecx */
    MEM32(ebp + (-0x4)) = eax; /* 0x10070FA4: mov dword ptr [ebp - 4], eax */
    /* test esi, esi */ /* 0x10070FA7: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10070F17; /* 0x10070FA9: jne 0x10070f17 */
L_10070FAF:
    edx = MEM32(ebp + (-0x1C)); /* 0x10070FAF: mov edx, dword ptr [ebp - 0x1c] */
L_10070FB2:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x14)) = MEM32(ebp + (-0x14)) + 0x28u; /* 0x10070FB2: add dword ptr [ebp - 0x14], 0x28 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x10070FB6: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x34u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x34u; /* 0x10070FB7: add edi, 0x34 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x1C)) = edx; /* 0x10070FBA: mov dword ptr [ebp - 0x1c], edx */
    /* test esi, esi */ /* 0x10070FBD: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10070EE8; /* 0x10070FBF: jne 0x10070ee8 */
L_10070FC5:
    edi = POP32_VAL(esp); /* 0x10070FC5: pop edi */
    esi = POP32_VAL(esp); /* 0x10070FC6: pop esi */
    ebx = POP32_VAL(esp); /* 0x10070FC7: pop ebx */
    esp = ebp; /* 0x10070FC8: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10070FCA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x10070FCB: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_10070FCE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10070FCEu);

L_10070FCE:
    PUSH32(esp, ebp); /* 0x10070FCE: push ebp */
    ebp = esp; /* 0x10070FCF: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x10070FD1: push ecx */
    PUSH32(esp, ecx); /* 0x10070FD2: push ecx */
    PUSH32(esp, ebx); /* 0x10070FD3: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10070FD4: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ecx; /* 0x10070FD6: mov dword ptr [ebp - 4], ecx */
    /* cmp MEM32(ecx + 0x8), ebx */ /* 0x10070FD9: cmp dword ptr [ecx + 8], ebx */
    _flag_a = (uint32_t)(MEM32(ecx + 0x8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1007108A; /* 0x10070FDC: jbe 0x1007108a */
L_10070FE2:
    PUSH32(esp, esi); /* 0x10070FE2: push esi */
    PUSH32(esp, edi); /* 0x10070FE3: push edi */
L_10070FE4:
    eax = MEM32(ecx + 0x54); /* 0x10070FE4: mov eax, dword ptr [ecx + 0x54] */
    edi = MEM32(eax + ebx * 4); /* 0x10070FE7: mov edi, dword ptr [eax + ebx*4] */
    esi = MEM32(edi + 0x10); /* 0x10070FEA: mov esi, dword ptr [edi + 0x10] */
    /* cmp MEM32(esi + 0xA8), 0 */ /* 0x10070FED: cmp dword ptr [esi + 0xa8], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0xA8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_10070FFD; /* 0x10070FF4: jbe 0x10070ffd */
L_10070FF6:
    PUSH32(esp, edi); /* 0x10070FF6: push edi */
    PUSH32(esp, esi); /* 0x10070FF7: push esi */
    RECOMP_CALL(sub_10070D6D); /* 0x10070FF8: call 0x10070d6d */
    RECOMP_FLAGS_IN();
L_10070FFD:
    /* cmp MEM32(edi + 0x14), 0 */ /* 0x10070FFD: cmp dword ptr [edi + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_10071038; /* 0x10071001: jbe 0x10071038 */
L_10071003:
    eax = MEM32(esi + 0xA0); /* 0x10071003: mov eax, dword ptr [esi + 0xa0] */
    MEM32(ebp + (-0x8)) = eax; /* 0x10071009: mov dword ptr [ebp - 8], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(edi + 0x14); /* 0x1007100C: sub eax, dword ptr [edi + 0x14] */
    _flag_k = FK_CMP;
    /* cmp MEM32(edi + 0x24), eax */ /* 0x1007100F: cmp dword ptr [edi + 0x24], eax */
    _flag_a = (uint32_t)(MEM32(edi + 0x24)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_10071038; /* 0x10071012: jbe 0x10071038 */
L_10071014:
    ecx = esi; /* 0x10071014: mov ecx, esi */
    RECOMP_CALL(sub_1002472C); /* 0x10071016: call 0x1002472c */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x8)); /* 0x1007101B: mov edx, dword ptr [ebp - 8] */
    ecx = edx; /* 0x1007101E: mov ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(edi + 0x14); /* 0x10071020: sub ecx, dword ptr [edi + 0x14] */
    _flag_k = FK_CMP;
    /* cmp eax, ecx */ /* 0x10071023: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_10071032; /* 0x10071025: jbe 0x10071032 */
L_10071027:
    ecx = esi; /* 0x10071027: mov ecx, esi */
    RECOMP_CALL(sub_1002472C); /* 0x10071029: call 0x1002472c */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x1007102E: mov edx, eax */
    goto L_10071035; /* 0x10071030: jmp 0x10071035 */
L_10071032:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(edi + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - MEM32(edi + 0x14); /* 0x10071032: sub edx, dword ptr [edi + 0x14] */
    _flag_k = FK_CMP;
L_10071035:
    MEM32(edi + 0x24) = edx; /* 0x10071035: mov dword ptr [edi + 0x24], edx */
L_10071038:
    eax = MEM32(esi + 0xA0); /* 0x10071038: mov eax, dword ptr [esi + 0xa0] */
    MEM32(ebp + (-0x8)) = eax; /* 0x1007103E: mov dword ptr [ebp - 8], eax */
    /* cmp MEM32(edi + 0x24), eax */ /* 0x10071041: cmp dword ptr [edi + 0x24], eax */
    _flag_a = (uint32_t)(MEM32(edi + 0x24)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_10071064; /* 0x10071044: jae 0x10071064 */
L_10071046:
    ecx = esi; /* 0x10071046: mov ecx, esi */
    RECOMP_CALL(sub_1002472C); /* 0x10071048: call 0x1002472c */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x8)); /* 0x1007104D: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0xA8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(esi + 0xA8); /* 0x10071050: sub ecx, dword ptr [esi + 0xa8] */
    _flag_k = FK_CMP;
    /* cmp ecx, eax */ /* 0x10071056: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_10071064; /* 0x10071058: jbe 0x10071064 */
L_1007105A:
    ecx = MEM32(ebp + (-0x4)); /* 0x1007105A: mov ecx, dword ptr [ebp - 4] */
    PUSH32(esp, edi); /* 0x1007105D: push edi */
    PUSH32(esp, esi); /* 0x1007105E: push esi */
    RECOMP_CALL(sub_10070E88); /* 0x1007105F: call 0x10070e88 */
    RECOMP_FLAGS_IN();
L_10071064:
    /* cmp MEM8(esi + 0xCC), 0 */ /* 0x10071064: cmp byte ptr [esi + 0xcc], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0xCC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007107B; /* 0x1007106B: jne 0x1007107b */
L_1007106D:
    eax = MEM32(esi + 0xA0); /* 0x1007106D: mov eax, dword ptr [esi + 0xa0] */
    /* cmp MEM32(edi + 0x24), eax */ /* 0x10071073: cmp dword ptr [edi + 0x24], eax */
    _flag_a = (uint32_t)(MEM32(edi + 0x24)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1007107B; /* 0x10071076: jbe 0x1007107b */
L_10071078:
    MEM32(edi + 0x24) = eax; /* 0x10071078: mov dword ptr [edi + 0x24], eax */
L_1007107B:
    ecx = MEM32(ebp + (-0x4)); /* 0x1007107B: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1007107E: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, MEM32(ecx + 0x8) */ /* 0x1007107F: cmp ebx, dword ptr [ecx + 8] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ecx + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_10070FE4; /* 0x10071082: jb 0x10070fe4 */
L_10071088:
    edi = POP32_VAL(esp); /* 0x10071088: pop edi */
    esi = POP32_VAL(esp); /* 0x10071089: pop esi */
L_1007108A:
    ebx = POP32_VAL(esp); /* 0x1007108A: pop ebx */
    esp = ebp; /* 0x1007108B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1007108D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007108E: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007108F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007108Fu);

L_1007108F:
    PUSH32(esp, ebp); /* 0x1007108F: push ebp */
    ebp = esp; /* 0x10071090: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x10071092: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x10071095: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x10071098: push ebx */
    PUSH32(esp, esi); /* 0x10071099: push esi */
    PUSH32(esp, edi); /* 0x1007109A: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1007109B: mov edi, dword ptr [ebp + 8] */
    ebx = ecx; /* 0x1007109E: mov ebx, ecx */
    /* cmp edi, eax */ /* 0x100710A0: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_10071130; /* 0x100710A2: jae 0x10071130 */
L_100710A8:
    edx = MEM32(ebp + 0x10); /* 0x100710A8: mov edx, dword ptr [ebp + 0x10] */
    /* cmp edx, 1 */ /* 0x100710AB: cmp edx, 1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100710BD; /* 0x100710AE: jne 0x100710bd */
L_100710B0:
    eax = MEM32(ebx + 0x5C); /* 0x100710B0: mov eax, dword ptr [ebx + 0x5c] */
    eax = MEM32(eax); /* 0x100710B3: mov eax, dword ptr [eax] */
    MEM32(eax + 0x4) = edi; /* 0x100710B5: mov dword ptr [eax + 4], edi */
    goto L_10071157; /* 0x100710B8: jmp 0x10071157 */
L_100710BD:
    MEM32(ebp + 0x10) = edi; /* 0x100710BD: mov dword ptr [ebp + 0x10], edi */
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x100710C0: fild dword ptr [ebp + 0x10] */
    /* test edi, edi */ /* 0x100710C3: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_100710CD; /* 0x100710C5: jns 0x100710cd */
L_100710C7:
    _st[0] += *(double*)ADDR(0x10067CE0); /* 0x100710C7: fadd qword ptr [0x10067ce0] */
L_100710CD:
    MEM32(ebp + 0x10) = eax; /* 0x100710CD: mov dword ptr [ebp + 0x10], eax */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0xC)) = _v; } /* 0x100710D0: fstp qword ptr [ebp - 0xc] */
    fp_push(*(double*)ADDR(ebp + (-0xC))); /* 0x100710D3: fld qword ptr [ebp - 0xc] */
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x100710D6: fild dword ptr [ebp + 0x10] */
    /* test eax, eax */ /* 0x100710D9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_100710E3; /* 0x100710DB: jns 0x100710e3 */
L_100710DD:
    _st[0] += *(double*)ADDR(0x10067CE0); /* 0x100710DD: fadd qword ptr [0x10067ce0] */
L_100710E3:
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0xC)) = _v; } /* 0x100710E3: fstp qword ptr [ebp - 0xc] */
    _st[0] /= *(double*)ADDR(ebp + (-0xC)); /* 0x100710E6: fdiv qword ptr [ebp - 0xc] */
    /* test edx, edx */ /* 0x100710E9: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10071122; /* 0x100710EB: je 0x10071122 */
L_100710ED:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x100710ED: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_100710EF:
    eax = MEM32(ebx + 0x5C); /* 0x100710EF: mov eax, dword ptr [ebx + 0x5c] */
    esi = MEM32(eax + edi * 4); /* 0x100710F2: mov esi, dword ptr [eax + edi*4] */
    eax = MEM32(esi + 0x10); /* 0x100710F5: mov eax, dword ptr [esi + 0x10] */
    ecx = MEM32(esi + 0x24); /* 0x100710F8: mov ecx, dword ptr [esi + 0x24] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0xA0));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(eax + 0xA0); /* 0x100710FB: sub ecx, dword ptr [eax + 0xa0] */
    _flag_k = FK_CMP;
    MEM32(ebp + 0x10) = ecx; /* 0x10071101: mov dword ptr [ebp + 0x10], ecx */
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x10071104: fild dword ptr [ebp + 0x10] */
    if (/* sub result */ CMP_NS(_flag_a, _flag_b)) goto L_1007110F; /* 0x10071107: jns 0x1007110f */
L_10071109:
    _st[0] += *(double*)ADDR(0x10067CE0); /* 0x10071109: fadd qword ptr [0x10067ce0] */
L_1007110F:
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0xC)) = _v; } /* 0x1007110F: fstp qword ptr [ebp - 0xc] */
    fp_push(*(double*)ADDR(ebp + (-0xC))); /* 0x10071112: fld qword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x10071115: inc edi */
    _flag_k = FK_INC;
    _st[0] *= _st[1]; /* 0x10071116: fmul st(1) */
    { double _v = fp_pop(); *(double*)ADDR(esi + 0x8) = _v; } /* 0x10071118: fstp qword ptr [esi + 8] */
    /* cmp edi, edx */ /* 0x1007111B: cmp edi, edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_100710EF; /* 0x1007111D: jb 0x100710ef */
L_1007111F:
    edi = MEM32(ebp + 0x8); /* 0x1007111F: mov edi, dword ptr [ebp + 8] */
L_10071122:
    PUSH32(esp, ecx); /* 0x10071122: push ecx */
    ecx = MEM32(ebx + 0x5C); /* 0x10071123: mov ecx, dword ptr [ebx + 0x5c] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x10071126: fstp st(0) */
    RECOMP_CALL(sub_100703E8); /* 0x10071128: call 0x100703e8 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007112D: pop ecx */
    goto L_10071157; /* 0x1007112E: jmp 0x10071157 */
L_10071130:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x10071130: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x10), esi */ /* 0x10071132: cmp dword ptr [ebp + 0x10], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_10071155; /* 0x10071135: jbe 0x10071155 */
L_10071137:
    eax = MEM32(ebx + 0x5C); /* 0x10071137: mov eax, dword ptr [ebx + 0x5c] */
    edx = MEM32(eax + esi * 4); /* 0x1007113A: mov edx, dword ptr [eax + esi*4] */
    eax = MEM32(edx + 0x10); /* 0x1007113D: mov eax, dword ptr [edx + 0x10] */
    ecx = MEM32(edx + 0x24); /* 0x10071140: mov ecx, dword ptr [edx + 0x24] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0xA0));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(eax + 0xA0); /* 0x10071143: sub ecx, dword ptr [eax + 0xa0] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10071149: inc esi */
    _flag_k = FK_INC;
    MEM32(edx + 0x4) = ecx; /* 0x1007114A: mov dword ptr [edx + 4], ecx */
    /* cmp esi, MEM32(ebp + 0x10) */ /* 0x1007114D: cmp esi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_10071137; /* 0x10071150: jb 0x10071137 */
L_10071152:
    eax = MEM32(ebp + 0xC); /* 0x10071152: mov eax, dword ptr [ebp + 0xc] */
L_10071155:
    edi = eax; /* 0x10071155: mov edi, eax */
L_10071157:
    eax = edi; /* 0x10071157: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x10071159: pop edi */
    esi = POP32_VAL(esp); /* 0x1007115A: pop esi */
    ebx = POP32_VAL(esp); /* 0x1007115B: pop ebx */
    esp = ebp; /* 0x1007115C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1007115E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1007115F: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_10071162(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10071162u);

L_10071162:
    PUSH32(esp, ebp); /* 0x10071162: push ebp */
    ebp = esp; /* 0x10071163: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x2Cu; /* 0x10071165: sub esp, 0x2c */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x10071168: push ebx */
    PUSH32(esp, esi); /* 0x10071169: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1007116A: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1007116D: push edi */
    edi = ecx; /* 0x1007116E: mov edi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10071170: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = edi; /* 0x10071172: mov dword ptr [ebp - 0x10], edi */
    /* test esi, esi */ /* 0x10071175: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100711C0; /* 0x10071177: je 0x100711c0 */
L_10071179:
    /* cmp ecx, esi */ /* 0x10071179: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1007119D; /* 0x1007117B: jae 0x1007119d */
L_1007117D:
    edx = MEM32(edi + 0x5C); /* 0x1007117D: mov edx, dword ptr [edi + 0x5c] */
    ebx = MEM32(edx + ecx * 4); /* 0x10071180: mov ebx, dword ptr [edx + ecx*4] */
    /* cmp MEM32(ebx + 0x4), 0 */ /* 0x10071183: cmp dword ptr [ebx + 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007119A; /* 0x10071187: jne 0x1007119a */
L_10071189:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x10071189: dec esi */
    _flag_k = FK_DEC;
    eax = MEM32(edx + esi * 4); /* 0x1007118A: mov eax, dword ptr [edx + esi*4] */
    MEM32(edx + ecx * 4) = eax; /* 0x1007118D: mov dword ptr [edx + ecx*4], eax */
    eax = MEM32(edi + 0x5C); /* 0x10071190: mov eax, dword ptr [edi + 0x5c] */
    MEM32(eax + esi * 4) = ebx; /* 0x10071193: mov dword ptr [eax + esi*4], ebx */
    /* cmp ecx, esi */ /* 0x10071196: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1007117D; /* 0x10071198: jb 0x1007117d */
L_1007119A:
    MEM32(ebp + 0x8) = esi; /* 0x1007119A: mov dword ptr [ebp + 8], esi */
L_1007119D:
    eax = MEM32(edi + 0x5C); /* 0x1007119D: mov eax, dword ptr [edi + 0x5c] */
    eax = MEM32(eax + ecx * 4); /* 0x100711A0: mov eax, dword ptr [eax + ecx*4] */
    _flag_a = (uint32_t)(MEM32(eax + 0x28)); _flag_b = (uint32_t)(0);
    MEM32(eax + 0x28) = MEM32(eax + 0x28) & 0; /* 0x100711A3: and dword ptr [eax + 0x28], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(edi + 0x5C); /* 0x100711A7: mov eax, dword ptr [edi + 0x5c] */
    eax = MEM32(eax + ecx * 4); /* 0x100711AA: mov eax, dword ptr [eax + ecx*4] */
    _flag_a = (uint32_t)(MEM32(eax + 0x2C)); _flag_b = (uint32_t)(0);
    MEM32(eax + 0x2C) = MEM32(eax + 0x2C) & 0; /* 0x100711AD: and dword ptr [eax + 0x2c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(edi + 0x5C); /* 0x100711B1: mov eax, dword ptr [edi + 0x5c] */
    eax = MEM32(eax + ecx * 4); /* 0x100711B4: mov eax, dword ptr [eax + ecx*4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x100711B7: inc ecx */
    _flag_k = FK_INC;
    MEM8(eax + 0x20) = (uint8_t)(1); /* 0x100711B8: mov byte ptr [eax + 0x20], 1 */
    /* cmp ecx, esi */ /* 0x100711BC: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1007117D; /* 0x100711BE: jb 0x1007117d */
L_100711C0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100711C0: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x2C)) = esi; /* 0x100711C2: mov dword ptr [ebp - 0x2c], esi */
    /* test esi, esi */ /* 0x100711C5: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007122B; /* 0x100711C7: je 0x1007122b */
L_100711C9:
    /* cmp ecx, esi */ /* 0x100711C9: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_10071226; /* 0x100711CB: jae 0x10071226 */
L_100711CD:
    eax = MEM32(edi + 0x5C); /* 0x100711CD: mov eax, dword ptr [edi + 0x5c] */
    eax = MEM32(eax + ecx * 4); /* 0x100711D0: mov eax, dword ptr [eax + ecx*4] */
    /* cmp MEM32(eax + 0x28), 0 */ /* 0x100711D3: cmp dword ptr [eax + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10071223; /* 0x100711D7: jne 0x10071223 */
L_100711D9:
    eax = MEM32(eax + 0x10); /* 0x100711D9: mov eax, dword ptr [eax + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x100711DC: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(eax + 0x10); /* 0x100711DE: mov edx, dword ptr [eax + 0x10] */
    /* cmp MEM32(edi + 0x18), ebx */ /* 0x100711E1: cmp dword ptr [edi + 0x18], ebx */
    _flag_a = (uint32_t)(MEM32(edi + 0x18)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_10071206; /* 0x100711E4: jbe 0x10071206 */
L_100711E6:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x1Cu; /* 0x100711E6: add edx, 0x1c */
    _flag_k = FK_ADD;
L_100711E9:
    eax = MEM32(edx); /* 0x100711E9: mov eax, dword ptr [edx] */
    /* test eax, eax */ /* 0x100711EB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100711FD; /* 0x100711ED: je 0x100711fd */
L_100711EF:
    /* cmp eax, MEM32(edx + (-0x18)) */ /* 0x100711EF: cmp eax, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + (-0x18)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_100711FD; /* 0x100711F2: jae 0x100711fd */
L_100711F4:
    eax = MEM32(edi + 0x5C); /* 0x100711F4: mov eax, dword ptr [edi + 0x5c] */
    eax = MEM32(eax + ecx * 4); /* 0x100711F7: mov eax, dword ptr [eax + ecx*4] */
    _flag_a = (uint32_t)(MEM32(eax + 0x28)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x28) = MEM32(eax + 0x28) + 1; /* 0x100711FA: inc dword ptr [eax + 0x28] */
    _flag_k = FK_INC;
L_100711FD:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x100711FD: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x34u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x34u; /* 0x100711FE: add edx, 0x34 */
    _flag_k = FK_ADD;
    /* cmp ebx, MEM32(edi + 0x18) */ /* 0x10071201: cmp ebx, dword ptr [edi + 0x18] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(edi + 0x18));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_100711E9; /* 0x10071204: jb 0x100711e9 */
L_10071206:
    edx = MEM32(edi + 0x5C); /* 0x10071206: mov edx, dword ptr [edi + 0x5c] */
    ebx = MEM32(edx + ecx * 4); /* 0x10071209: mov ebx, dword ptr [edx + ecx*4] */
    /* cmp MEM32(ebx + 0x28), 0 */ /* 0x1007120C: cmp dword ptr [ebx + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007121F; /* 0x10071210: jne 0x1007121f */
L_10071212:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x10071212: dec esi */
    _flag_k = FK_DEC;
    eax = MEM32(edx + esi * 4); /* 0x10071213: mov eax, dword ptr [edx + esi*4] */
    MEM32(edx + ecx * 4) = eax; /* 0x10071216: mov dword ptr [edx + ecx*4], eax */
    eax = MEM32(edi + 0x5C); /* 0x10071219: mov eax, dword ptr [edi + 0x5c] */
    MEM32(eax + esi * 4) = ebx; /* 0x1007121C: mov dword ptr [eax + esi*4], ebx */
L_1007121F:
    /* cmp ecx, esi */ /* 0x1007121F: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_100711CD; /* 0x10071221: jb 0x100711cd */
L_10071223:
    MEM32(ebp + 0x8) = esi; /* 0x10071223: mov dword ptr [ebp + 8], esi */
L_10071226:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x10071226: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, esi */ /* 0x10071227: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_100711CD; /* 0x10071229: jb 0x100711cd */
L_1007122B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1007122B: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xC)) = ebx; /* 0x1007122D: mov dword ptr [ebp - 0xc], ebx */
    /* test esi, esi */ /* 0x10071230: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10071365; /* 0x10071232: je 0x10071365 */
L_10071238:
    eax = ebx + 0x1; /* 0x10071238: lea eax, [ebx + 1] */
    MEM32(ebp + (-0x4)) = ebx; /* 0x1007123B: mov dword ptr [ebp - 4], ebx */
    MEM32(ebp + (-0x28)) = eax; /* 0x1007123E: mov dword ptr [ebp - 0x28], eax */
    edx = eax; /* 0x10071241: mov edx, eax */
    /* cmp eax, esi */ /* 0x10071243: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_10071295; /* 0x10071245: jae 0x10071295 */
L_10071247:
    ecx = MEM32(edi + 0x5C); /* 0x10071247: mov ecx, dword ptr [edi + 0x5c] */
    edi = MEM32(ebp + (-0x4)); /* 0x1007124A: mov edi, dword ptr [ebp - 4] */
    MEM32(ebp + (-0x18)) = ecx; /* 0x1007124D: mov dword ptr [ebp - 0x18], ecx */
    if (2u) _cf = (((ebx) >> 30) & 1u); /* 0x10071250: shl ebx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ebx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 2u; /* 0x10071250: shl ebx, 2 */
L_10071253:
    eax = MEM32(ecx + edx * 4); /* 0x10071253: mov eax, dword ptr [ecx + edx*4] */
    ecx = MEM32(ebx + ecx); /* 0x10071256: mov ecx, dword ptr [ebx + ecx] */
    eax = MEM32(eax + 0x28); /* 0x10071259: mov eax, dword ptr [eax + 0x28] */
    /* cmp eax, MEM32(ecx + 0x28) */ /* 0x1007125C: cmp eax, dword ptr [ecx + 0x28] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x28));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_10071268; /* 0x1007125F: jae 0x10071268 */
L_10071261:
    ebx = edx; /* 0x10071261: mov ebx, edx */
    edi = edx; /* 0x10071263: mov edi, edx */
    if (2u) _cf = (((ebx) >> 30) & 1u); /* 0x10071265: shl ebx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ebx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 2u; /* 0x10071265: shl ebx, 2 */
L_10071268:
    ecx = MEM32(ebp + (-0x18)); /* 0x10071268: mov ecx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1007126B: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, esi */ /* 0x1007126C: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_10071253; /* 0x1007126E: jb 0x10071253 */
L_10071270:
    ebx = MEM32(ebp + (-0xC)); /* 0x10071270: mov ebx, dword ptr [ebp - 0xc] */
    /* cmp ebx, edi */ /* 0x10071273: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = edi; /* 0x10071275: mov dword ptr [ebp - 4], edi */
    edi = MEM32(ebp + (-0x10)); /* 0x10071278: mov edi, dword ptr [ebp - 0x10] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10071295; /* 0x1007127B: je 0x10071295 */
L_1007127D:
    ecx = MEM32(edi + 0x5C); /* 0x1007127D: mov ecx, dword ptr [edi + 0x5c] */
    eax = MEM32(ebp + (-0x4)); /* 0x10071280: mov eax, dword ptr [ebp - 4] */
    edx = MEM32(ecx + ebx * 4); /* 0x10071283: mov edx, dword ptr [ecx + ebx*4] */
    eax = MEM32(ecx + eax * 4); /* 0x10071286: mov eax, dword ptr [ecx + eax*4] */
    MEM32(ecx + ebx * 4) = eax; /* 0x10071289: mov dword ptr [ecx + ebx*4], eax */
    eax = MEM32(edi + 0x5C); /* 0x1007128C: mov eax, dword ptr [edi + 0x5c] */
    ecx = MEM32(ebp + (-0x4)); /* 0x1007128F: mov ecx, dword ptr [ebp - 4] */
    MEM32(eax + ecx * 4) = edx; /* 0x10071292: mov dword ptr [eax + ecx*4], edx */
L_10071295:
    eax = MEM32(edi + 0x5C); /* 0x10071295: mov eax, dword ptr [edi + 0x5c] */
    ecx = MEM32(eax + ebx * 4); /* 0x10071298: mov ecx, dword ptr [eax + ebx*4] */
    eax = MEM32(ecx + 0x10); /* 0x1007129B: mov eax, dword ptr [ecx + 0x10] */
    edx = MEM32(eax + 0x10); /* 0x1007129E: mov edx, dword ptr [eax + 0x10] */
    eax = MEM32(eax + 0x14); /* 0x100712A1: mov eax, dword ptr [eax + 0x14] */
    MEM32(ebp + (-0x4)) = edx; /* 0x100712A4: mov dword ptr [ebp - 4], edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x100712A7: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = eax; /* 0x100712A9: mov dword ptr [ebp - 0x14], eax */
    MEM32(ebp + (-0x18)) = edx; /* 0x100712AC: mov dword ptr [ebp - 0x18], edx */
    /* cmp MEM32(ecx + 0x28), edx */ /* 0x100712AF: cmp dword ptr [ecx + 0x28], edx */
    _flag_a = (uint32_t)(MEM32(ecx + 0x28)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_10071357; /* 0x100712B2: jbe 0x10071357 */
L_100712B8:
    esi = eax; /* 0x100712B8: mov esi, eax */
L_100712BA:
    eax = MEM32(esi + edx * 4); /* 0x100712BA: mov eax, dword ptr [esi + edx*4] */
    MEM32(ebp + (-0x24)) = eax; /* 0x100712BD: mov dword ptr [ebp - 0x24], eax */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x34u); /* 0x100712C0: imul eax, eax, 0x34 */
    MEM32(ebp + (-0x8)) = edx; /* 0x100712C3: mov dword ptr [ebp - 8], edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x4)); /* 0x100712C6: add eax, dword ptr [ebp - 4] */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x1C)) = eax; /* 0x100712C9: mov dword ptr [ebp - 0x1c], eax */
    eax = MEM32(edi + 0x18); /* 0x100712CC: mov eax, dword ptr [edi + 0x18] */
    MEM32(ebp + (-0x20)) = eax; /* 0x100712CF: mov dword ptr [ebp - 0x20], eax */
    eax = edx + 0x1; /* 0x100712D2: lea eax, [edx + 1] */
    ecx = eax; /* 0x100712D5: mov ecx, eax */
    MEM32(ebp + (-0x14)) = eax; /* 0x100712D7: mov dword ptr [ebp - 0x14], eax */
    /* cmp eax, MEM32(edi + 0x18) */ /* 0x100712DA: cmp eax, dword ptr [edi + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x18));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_10071340; /* 0x100712DD: jae 0x10071340 */
L_100712DF:
    ebx = MEM32(ebp + (-0x1C)); /* 0x100712DF: mov ebx, dword ptr [ebp - 0x1c] */
    edi = edx; /* 0x100712E2: mov edi, edx */
    edx = MEM32(ebp + (-0x4)); /* 0x100712E4: mov edx, dword ptr [ebp - 4] */
L_100712E7:
    eax = (uint32_t)((int32_t)MEM32(esi + ecx * 4) * (int32_t)0x34u); /* 0x100712E7: imul eax, dword ptr [esi + ecx*4], 0x34 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x100712EB: add eax, edx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x100712ED: mov dword ptr [ebp - 8], eax */
    eax = MEM32(eax + 0x1C); /* 0x100712F0: mov eax, dword ptr [eax + 0x1c] */
    /* test eax, eax */ /* 0x100712F3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10071318; /* 0x100712F5: je 0x10071318 */
L_100712F7:
    edx = MEM32(ebp + (-0x8)); /* 0x100712F7: mov edx, dword ptr [ebp - 8] */
    /* cmp eax, MEM32(edx + 0x4) */ /* 0x100712FA: cmp eax, dword ptr [edx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_10071315; /* 0x100712FD: jae 0x10071315 */
L_100712FF:
    eax = MEM32(ebx + 0x1C); /* 0x100712FF: mov eax, dword ptr [ebx + 0x1c] */
    /* test eax, eax */ /* 0x10071302: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10071310; /* 0x10071304: je 0x10071310 */
L_10071306:
    /* cmp eax, MEM32(ebx + 0x4) */ /* 0x10071306: cmp eax, dword ptr [ebx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_10071310; /* 0x10071309: jae 0x10071310 */
L_1007130B:
    /* cmp MEM32(edx + 0x1C), eax */ /* 0x1007130B: cmp dword ptr [edx + 0x1c], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x1C)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_10071315; /* 0x1007130E: jbe 0x10071315 */
L_10071310:
    ebx = MEM32(ebp + (-0x8)); /* 0x10071310: mov ebx, dword ptr [ebp - 8] */
    edi = ecx; /* 0x10071313: mov edi, ecx */
L_10071315:
    edx = MEM32(ebp + (-0x4)); /* 0x10071315: mov edx, dword ptr [ebp - 4] */
L_10071318:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x10071318: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, MEM32(ebp + (-0x20)) */ /* 0x10071319: cmp ecx, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x20)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_100712E7; /* 0x1007131C: jb 0x100712e7 */
L_1007131E:
    edx = MEM32(ebp + (-0x18)); /* 0x1007131E: mov edx, dword ptr [ebp - 0x18] */
    /* cmp edx, edi */ /* 0x10071321: cmp edx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = MEM32(ebp + (-0xC)); /* 0x10071323: mov ebx, dword ptr [ebp - 0xc] */
    MEM32(ebp + (-0x8)) = edi; /* 0x10071326: mov dword ptr [ebp - 8], edi */
    edi = MEM32(ebp + (-0x10)); /* 0x10071329: mov edi, dword ptr [ebp - 0x10] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007133D; /* 0x1007132C: je 0x1007133d */
L_1007132E:
    ecx = MEM32(ebp + (-0x8)); /* 0x1007132E: mov ecx, dword ptr [ebp - 8] */
    eax = MEM32(esi + ecx * 4); /* 0x10071331: mov eax, dword ptr [esi + ecx*4] */
    MEM32(esi + edx * 4) = eax; /* 0x10071334: mov dword ptr [esi + edx*4], eax */
    eax = MEM32(ebp + (-0x24)); /* 0x10071337: mov eax, dword ptr [ebp - 0x24] */
    MEM32(esi + ecx * 4) = eax; /* 0x1007133A: mov dword ptr [esi + ecx*4], eax */
L_1007133D:
    eax = MEM32(ebp + (-0x14)); /* 0x1007133D: mov eax, dword ptr [ebp - 0x14] */
L_10071340:
    edx = eax; /* 0x10071340: mov edx, eax */
    eax = MEM32(edi + 0x5C); /* 0x10071342: mov eax, dword ptr [edi + 0x5c] */
    MEM32(ebp + (-0x18)) = edx; /* 0x10071345: mov dword ptr [ebp - 0x18], edx */
    eax = MEM32(eax + ebx * 4); /* 0x10071348: mov eax, dword ptr [eax + ebx*4] */
    /* cmp edx, MEM32(eax + 0x28) */ /* 0x1007134B: cmp edx, dword ptr [eax + 0x28] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(eax + 0x28));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_100712BA; /* 0x1007134E: jb 0x100712ba */
L_10071354:
    esi = MEM32(ebp + 0x8); /* 0x10071354: mov esi, dword ptr [ebp + 8] */
L_10071357:
    ebx = MEM32(ebp + (-0x28)); /* 0x10071357: mov ebx, dword ptr [ebp - 0x28] */
    MEM32(ebp + (-0xC)) = ebx; /* 0x1007135A: mov dword ptr [ebp - 0xc], ebx */
    /* cmp ebx, esi */ /* 0x1007135D: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_10071238; /* 0x1007135F: jb 0x10071238 */
L_10071365:
    eax = MEM32(ebp + (-0x2C)); /* 0x10071365: mov eax, dword ptr [ebp - 0x2c] */
    edi = POP32_VAL(esp); /* 0x10071368: pop edi */
    esi = POP32_VAL(esp); /* 0x10071369: pop esi */
    ebx = POP32_VAL(esp); /* 0x1007136A: pop ebx */
    esp = ebp; /* 0x1007136B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1007136D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1007136E: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_10071371(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10071371u);

L_10071371:
    PUSH32(esp, ebp); /* 0x10071371: push ebp */
    ebp = esp; /* 0x10071372: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x10071374: push ecx */
    edx = MEM32(ebp + 0xC); /* 0x10071375: mov edx, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x10071378: push ebx */
    ebx = MEM32(ebp + 0x14); /* 0x10071379: mov ebx, dword ptr [ebp + 0x14] */
    PUSH32(esp, esi); /* 0x1007137C: push esi */
    esi = (uint32_t)((int32_t)edx * (int32_t)0x28u); /* 0x1007137D: imul esi, edx, 0x28 */
    PUSH32(esp, edi); /* 0x10071380: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x10071381: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ecx + 0x48));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ecx + 0x48); /* 0x10071383: add esi, dword ptr [ecx + 0x48] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10071386: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_10071388:
    eax = MEM32(esi + 0x20); /* 0x10071388: mov eax, dword ptr [esi + 0x20] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1007138B: add eax, ecx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = ecx; /* 0x1007138D: mov dword ptr [ebp - 4], ecx */
    /* cmp MEM32(eax), 2 */ /* 0x10071390: cmp dword ptr [eax], 2 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10071399; /* 0x10071393: jne 0x10071399 */
L_10071395:
    /* test LO8(ebx), LO8(ebx) */ /* 0x10071395: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100713A2; /* 0x10071397: je 0x100713a2 */
L_10071399:
    /* cmp MEM32(eax), 6 */ /* 0x10071399: cmp dword ptr [eax], 6 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100713D0; /* 0x1007139C: jne 0x100713d0 */
L_1007139E:
    /* test LO8(ebx), LO8(ebx) */ /* 0x1007139E: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100713D0; /* 0x100713A0: je 0x100713d0 */
L_100713A2:
    _flag_a = (uint32_t)(MEM32(eax + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x10) = MEM32(eax + 0x10) + 1; /* 0x100713A2: inc dword ptr [eax + 0x10] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x100713A5: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test LO8(ebx), LO8(ebx) */ /* 0x100713A8: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100713B1; /* 0x100713AA: je 0x100713b1 */
L_100713AC:
    _flag_a = (uint32_t)(MEM32(esi + 0x1C)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x1C) = MEM32(esi + 0x1C) - 1; /* 0x100713AC: dec dword ptr [esi + 0x1c] */
    _flag_k = FK_DEC;
    goto L_100713B4; /* 0x100713AF: jmp 0x100713b4 */
L_100713B1:
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x8) = MEM32(esi + 0x8) - 1; /* 0x100713B1: dec dword ptr [esi + 8] */
    _flag_k = FK_DEC;
L_100713B4:
    ecx = MEM32(ebp + 0x8); /* 0x100713B4: mov ecx, dword ptr [ebp + 8] */
    eax = (uint32_t)((int32_t)edx * (int32_t)0x34u); /* 0x100713B7: imul eax, edx, 0x34 */
    PUSH32(esp, ebx); /* 0x100713BA: push ebx */
    PUSH32(esp, edi); /* 0x100713BB: push edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x10));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + 0x10); /* 0x100713BC: add eax, dword ptr [ecx + 0x10] */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x100713BF: push eax */
    RECOMP_CALL(sub_100759BA); /* 0x100713C0: call 0x100759ba */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - 1; /* 0x100713C5: dec dword ptr [ebp + 0x10] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_100713D6; /* 0x100713C8: je 0x100713d6 */
L_100713CA:
    ecx = MEM32(ebp + (-0x4)); /* 0x100713CA: mov ecx, dword ptr [ebp - 4] */
    edx = MEM32(ebp + 0xC); /* 0x100713CD: mov edx, dword ptr [ebp + 0xc] */
L_100713D0:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x100713D0: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x24u; /* 0x100713D1: add ecx, 0x24 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_10071388; /* 0x100713D4: jmp 0x10071388 */
L_100713D6:
    edi = POP32_VAL(esp); /* 0x100713D6: pop edi */
    esi = POP32_VAL(esp); /* 0x100713D7: pop esi */
    ebx = POP32_VAL(esp); /* 0x100713D8: pop ebx */
    esp = ebp; /* 0x100713D9: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100713DB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x100713DC: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_100713DF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100713DFu);

L_100713DF:
    PUSH32(esp, ebp); /* 0x100713DF: push ebp */
    ebp = esp; /* 0x100713E0: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x30u; /* 0x100713E2: sub esp, 0x30 */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x8); /* 0x100713E5: mov eax, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x20)) = ecx; /* 0x100713E8: mov dword ptr [ebp - 0x20], ecx */
    ecx = (uint32_t)((int32_t)MEM32(ebp + 0x10) * (int32_t)0x34u); /* 0x100713EB: imul ecx, dword ptr [ebp + 0x10], 0x34 */
    PUSH32(esp, ebx); /* 0x100713EF: push ebx */
    eax = MEM32(eax + 0x10); /* 0x100713F0: mov eax, dword ptr [eax + 0x10] */
    ebx = MEM32(ebp + 0x14); /* 0x100713F3: mov ebx, dword ptr [ebp + 0x14] */
    MEM32(ebp + (-0x2C)) = eax; /* 0x100713F6: mov dword ptr [ebp - 0x2c], eax */
    MEM32(ebp + (-0x30)) = ecx; /* 0x100713F9: mov dword ptr [ebp - 0x30], ecx */
    eax = MEM32(eax + 0x10); /* 0x100713FC: mov eax, dword ptr [eax + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x100713FF: add ecx, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, esi); /* 0x10071401: push esi */
    PUSH32(esp, edi); /* 0x10071402: push edi */
    MEM32(ebp + (-0x14)) = ecx; /* 0x10071403: mov dword ptr [ebp - 0x14], ecx */
    edx = MEM32(ecx + 0x2C); /* 0x10071406: mov edx, dword ptr [ecx + 0x2c] */
    /* cmp ebx, edx */ /* 0x10071409: cmp ebx, edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_10071414; /* 0x1007140B: jae 0x10071414 */
L_1007140D:
    esi = ebx; /* 0x1007140D: mov esi, ebx */
    MEM32(ebp + (-0xC)) = esi; /* 0x1007140F: mov dword ptr [ebp - 0xc], esi */
    goto L_10071419; /* 0x10071412: jmp 0x10071419 */
L_10071414:
    esi = edx; /* 0x10071414: mov esi, edx */
    MEM32(ebp + (-0xC)) = edx; /* 0x10071416: mov dword ptr [ebp - 0xc], edx */
L_10071419:
    eax = MEM32(ecx + 0x20); /* 0x10071419: mov eax, dword ptr [ecx + 0x20] */
    edi = ebx; /* 0x1007141C: mov edi, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x1007141E: sub eax, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - esi; /* 0x10071420: sub edi, esi */
    _flag_k = FK_CMP;
    /* cmp edi, eax */ /* 0x10071422: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_10071428; /* 0x10071424: jb 0x10071428 */
L_10071426:
    edi = eax; /* 0x10071426: mov edi, eax */
L_10071428:
    ecx = MEM32(ecx + 0x28); /* 0x10071428: mov ecx, dword ptr [ecx + 0x28] */
    esi = ebx; /* 0x1007142B: mov esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edi; /* 0x1007142D: sub esi, edi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x1007142F: sub ecx, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - MEM32(ebp + (-0xC)); /* 0x10071431: sub esi, dword ptr [ebp - 0xc] */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x10)) = ecx; /* 0x10071434: mov dword ptr [ebp - 0x10], ecx */
    /* cmp esi, ecx */ /* 0x10071437: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_10071440; /* 0x10071439: jae 0x10071440 */
L_1007143B:
    ecx = esi; /* 0x1007143B: mov ecx, esi */
    MEM32(ebp + (-0x10)) = esi; /* 0x1007143D: mov dword ptr [ebp - 0x10], esi */
L_10071440:
    edx = MEM32(ebp + (-0x14)); /* 0x10071440: mov edx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10071443: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(eax);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) & eax; /* 0x10071445: and dword ptr [ebp - 0x1c], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x10071448: sub esi, ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(eax);
    MEM32(ebp + (-0x18)) = MEM32(ebp + (-0x18)) & eax; /* 0x1007144A: and dword ptr [ebp - 0x18], eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1007144D:
    ebx = MEM32(edx + 0x30); /* 0x1007144D: mov ebx, dword ptr [edx + 0x30] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x18)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(ebp + (-0x18)); /* 0x10071450: add ebx, dword ptr [ebp - 0x18] */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = eax; /* 0x10071453: mov dword ptr [ebp - 8], eax */
    /* cmp MEM32(ebx), 4 */ /* 0x10071456: cmp dword ptr [ebx], 4 */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10071532; /* 0x10071459: jne 0x10071532 */
L_1007145F:
    /* cmp MEM32(ebx + 0x28), 0 */ /* 0x1007145F: cmp dword ptr [ebx + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_10071532; /* 0x10071463: ja 0x10071532 */
L_10071469:
    SET_LO8(eax, MEM8(ebx + 0x31)); /* 0x10071469: mov al, byte ptr [ebx + 0x31] */
    /* test LO8(eax), LO8(eax) */ /* 0x1007146C: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    SET_LO8(eax, MEM8(ebx + 0x30)); /* 0x1007146E: mov al, byte ptr [ebx + 0x30] */
    MEM8(ebp + (-0x1)) = (uint8_t)(LO8(eax)); /* 0x10071471: mov byte ptr [ebp - 1], al */
    if (TEST_Z(_flag_a, _flag_b)) goto L_10071492; /* 0x10071474: je 0x10071492 */
L_10071476:
    /* test LO8(eax), LO8(eax) */ /* 0x10071476: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10071487; /* 0x10071478: je 0x10071487 */
L_1007147A:
    eax = MEM32(ebp + (-0xC)); /* 0x1007147A: mov eax, dword ptr [ebp - 0xc] */
    /* test eax, eax */ /* 0x1007147D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10071487; /* 0x1007147F: je 0x10071487 */
L_10071481:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x10071481: dec eax */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0xC)) = eax; /* 0x10071482: mov dword ptr [ebp - 0xc], eax */
    goto L_100714A9; /* 0x10071485: jmp 0x100714a9 */
L_10071487:
    /* test edi, edi */ /* 0x10071487: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007152F; /* 0x10071489: je 0x1007152f */
L_1007148F:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1007148F: dec edi */
    _flag_k = FK_DEC;
    goto L_100714A9; /* 0x10071490: jmp 0x100714a9 */
L_10071492:
    /* test LO8(eax), LO8(eax) */ /* 0x10071492: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100714A0; /* 0x10071494: je 0x100714a0 */
L_10071496:
    /* test ecx, ecx */ /* 0x10071496: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100714A0; /* 0x10071498: je 0x100714a0 */
L_1007149A:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1007149A: dec ecx */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x10)) = ecx; /* 0x1007149B: mov dword ptr [ebp - 0x10], ecx */
    goto L_100714A9; /* 0x1007149E: jmp 0x100714a9 */
L_100714A0:
    /* test esi, esi */ /* 0x100714A0: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007152F; /* 0x100714A2: je 0x1007152f */
L_100714A8:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x100714A8: dec esi */
    _flag_k = FK_DEC;
L_100714A9:
    ecx = (uint32_t)((int32_t)MEM32(ebp + 0x10) * (int32_t)0x28u); /* 0x100714A9: imul ecx, dword ptr [ebp + 0x10], 0x28 */
    eax = MEM32(ebp + (-0x20)); /* 0x100714AD: mov eax, dword ptr [ebp - 0x20] */
    eax = MEM32(eax + 0x48); /* 0x100714B0: mov eax, dword ptr [eax + 0x48] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x100714B3: add eax, ecx */
    _flag_k = FK_ADD;
    SET_LO8(ecx, MEM8(ebp + (-0x1))); /* 0x100714B5: mov cl, byte ptr [ebp - 1] */
    MEM32(ebp + (-0x28)) = eax; /* 0x100714B8: mov dword ptr [ebp - 0x28], eax */
    eax = MEM32(eax + 0x20); /* 0x100714BB: mov eax, dword ptr [eax + 0x20] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x1C)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x1C)); /* 0x100714BE: add eax, dword ptr [ebp - 0x1c] */
    _flag_k = FK_ADD;
    /* test LO8(ecx), LO8(ecx) */ /* 0x100714C1: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100714DC; /* 0x100714C3: je 0x100714dc */
L_100714C5:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100714C5: push dword ptr [ebp + 8] */
    ecx = MEM32(ebp + (-0x20)); /* 0x100714C8: mov ecx, dword ptr [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x100714CB: push eax */
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x100714CC: push dword ptr [ebp - 0x28] */
    PUSH32(esp, ebx); /* 0x100714CF: push ebx */
    PUSH32(esp, edx); /* 0x100714D0: push edx */
    RECOMP_CALL(sub_10070BFA); /* 0x100714D1: call 0x10070bfa */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x14)); /* 0x100714D6: mov edx, dword ptr [ebp - 0x14] */
    SET_LO8(ecx, MEM8(ebp + (-0x1))); /* 0x100714D9: mov cl, byte ptr [ebp - 1] */
L_100714DC:
    SET_LO8(eax, MEM8(ebx + 0x31)); /* 0x100714DC: mov al, byte ptr [ebx + 0x31] */
    MEM8(ebp + (-0x24)) = (uint8_t)(0); /* 0x100714DF: mov byte ptr [ebp - 0x24], 0 */
    /* test LO8(eax), LO8(eax) */ /* 0x100714E3: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100714FC; /* 0x100714E5: je 0x100714fc */
L_100714E7:
    ebx = MEM32(ebp + 0x8); /* 0x100714E7: mov ebx, dword ptr [ebp + 8] */
    MEM8(ebp + (-0x24)) = (uint8_t)(1); /* 0x100714EA: mov byte ptr [ebp - 0x24], 1 */
    /* test LO8(ecx), LO8(ecx) */ /* 0x100714EE: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100714F7; /* 0x100714F0: je 0x100714f7 */
L_100714F2:
    _flag_a = (uint32_t)(MEM32(ebx + 0x28)); _flag_b = (uint32_t)(1);
    MEM32(ebx + 0x28) = MEM32(ebx + 0x28) - 1; /* 0x100714F2: dec dword ptr [ebx + 0x28] */
    _flag_k = FK_DEC;
    goto L_10071502; /* 0x100714F5: jmp 0x10071502 */
L_100714F7:
    _flag_a = (uint32_t)(MEM32(ebx + 0x2C)); _flag_b = (uint32_t)(1);
    MEM32(ebx + 0x2C) = MEM32(ebx + 0x2C) - 1; /* 0x100714F7: dec dword ptr [ebx + 0x2c] */
    _flag_k = FK_DEC;
    goto L_10071502; /* 0x100714FA: jmp 0x10071502 */
L_100714FC:
    eax = MEM32(ebp + 0x8); /* 0x100714FC: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(eax + 0x30)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x30) = MEM32(eax + 0x30) - 1; /* 0x100714FF: dec dword ptr [eax + 0x30] */
    _flag_k = FK_DEC;
L_10071502:
    ebx = MEM32(ebp + (-0x8)); /* 0x10071502: mov ebx, dword ptr [ebp - 8] */
    ecx = MEM32(ebp + (-0x2C)); /* 0x10071505: mov ecx, dword ptr [ebp - 0x2c] */
    PUSH32(esp, ebx); /* 0x10071508: push ebx */
    PUSH32(esp, edx); /* 0x10071509: push edx */
    RECOMP_CALL(sub_10075A72); /* 0x1007150A: call 0x10075a72 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + 0xC); /* 0x1007150F: mov edx, dword ptr [ebp + 0xc] */
    ecx = edx; /* 0x10071512: mov ecx, edx */
    PUSH32(esp, MEM32(ebp + (-0x24))); /* 0x10071514: push dword ptr [ebp - 0x24] */
    PUSH32(esp, ebx); /* 0x10071517: push ebx */
    eax = MEM32(edx + 0x10); /* 0x10071518: mov eax, dword ptr [edx + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x30)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x30)); /* 0x1007151B: add eax, dword ptr [ebp - 0x30] */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1007151E: push eax */
    RECOMP_CALL(sub_100759BA); /* 0x1007151F: call 0x100759ba */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) - 1; /* 0x10071524: dec dword ptr [ebp + 0x14] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_10071540; /* 0x10071527: je 0x10071540 */
L_10071529:
    ecx = MEM32(ebp + (-0x10)); /* 0x10071529: mov ecx, dword ptr [ebp - 0x10] */
    edx = MEM32(ebp + (-0x14)); /* 0x1007152C: mov edx, dword ptr [ebp - 0x14] */
L_1007152F:
    eax = MEM32(ebp + (-0x8)); /* 0x1007152F: mov eax, dword ptr [ebp - 8] */
L_10071532:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(0x34u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x18)) = MEM32(ebp + (-0x18)) + 0x34u; /* 0x10071532: add dword ptr [ebp - 0x18], 0x34 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10071536: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) + 0x24u; /* 0x10071537: add dword ptr [ebp - 0x1c], 0x24 */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    goto L_1007144D; /* 0x1007153B: jmp 0x1007144d */
L_10071540:
    edi = POP32_VAL(esp); /* 0x10071540: pop edi */
    esi = POP32_VAL(esp); /* 0x10071541: pop esi */
    ebx = POP32_VAL(esp); /* 0x10071542: pop ebx */
    esp = ebp; /* 0x10071543: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10071545: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x10071546: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_10071549(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10071549u);

L_10071549:
    PUSH32(esp, ebp); /* 0x10071549: push ebp */
    ebp = esp; /* 0x1007154A: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1007154C: push ecx */
    PUSH32(esp, ecx); /* 0x1007154D: push ecx */
    PUSH32(esp, ebx); /* 0x1007154E: push ebx */
    PUSH32(esp, esi); /* 0x1007154F: push esi */
    esi = MEM32(ebp + 0x10); /* 0x10071550: mov esi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(ebx, 0); /* 0x10071553: xor bl, bl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(ebp + (-0x4)) = ecx; /* 0x10071555: mov dword ptr [ebp - 4], ecx */
    PUSH32(esp, edi); /* 0x10071558: push edi */
    eax = MEM32(esi + 0x10); /* 0x10071559: mov eax, dword ptr [esi + 0x10] */
    ecx = MEM32(eax + 0x10); /* 0x1007155C: mov ecx, dword ptr [eax + 0x10] */
    edx = MEM32(eax + 0x14); /* 0x1007155F: mov edx, dword ptr [eax + 0x14] */
    eax = MEM32(esi + 0x2C); /* 0x10071562: mov eax, dword ptr [esi + 0x2c] */
    MEM32(ebp + (-0x8)) = ecx; /* 0x10071565: mov dword ptr [ebp - 8], ecx */
    ecx = MEM32(edx + eax * 4); /* 0x10071568: mov ecx, dword ptr [edx + eax*4] */
    eax = MEM32(ebp + 0x8); /* 0x1007156B: mov eax, dword ptr [ebp + 8] */
    edx = MEM32(ebp + (-0x4)); /* 0x1007156E: mov edx, dword ptr [ebp - 4] */
    edi = (uint32_t)((int32_t)ecx * (int32_t)0x34u); /* 0x10071571: imul edi, ecx, 0x34 */
    MEM32(ebp + 0x10) = ecx; /* 0x10071574: mov dword ptr [ebp + 0x10], ecx */
    /* cmp MEM32(eax), 0 */ /* 0x10071577: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_100715A6; /* 0x1007157A: jbe 0x100715a6 */
L_1007157C:
    eax = MEM32(edx + 0x48); /* 0x1007157C: mov eax, dword ptr [edx + 0x48] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x28u); /* 0x1007157F: imul ecx, ecx, 0x28 */
    /* cmp MEM32(ecx + eax + 0x8), 0 */ /* 0x10071582: cmp dword ptr [ecx + eax + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + eax + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_100715A6; /* 0x10071587: jbe 0x100715a6 */
L_10071589:
    PUSH32(esp, 0); /* 0x10071589: push 0 */
    PUSH32(esp, 1); /* 0x1007158B: push 1 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1007158D: push dword ptr [ebp + 0x10] */
    ecx = edx; /* 0x10071590: mov ecx, edx */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    SET_LO8(ebx, LO8(ebx) + 1); /* 0x10071592: inc bl */
    _flag_k = FK_NARROW(FK_INC, 24);
    PUSH32(esp, MEM32(esi + 0x10)); /* 0x10071594: push dword ptr [esi + 0x10] */
    RECOMP_CALL(sub_10071371); /* 0x10071597: call 0x10071371 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1007159C: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(1);
    MEM32(eax) = MEM32(eax) - 1; /* 0x1007159F: dec dword ptr [eax] */
    _flag_k = FK_DEC;
    goto L_10071630; /* 0x100715A1: jmp 0x10071630 */
L_100715A6:
    eax = MEM32(ebp + 0xC); /* 0x100715A6: mov eax, dword ptr [ebp + 0xc] */
    /* cmp MEM32(eax), 0 */ /* 0x100715A9: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_10071645; /* 0x100715AC: jbe 0x10071645 */
L_100715B2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100715B2: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x8) = ecx; /* 0x100715B4: mov dword ptr [ebp + 8], ecx */
    /* cmp MEM32(ebp + 0x14), ecx */ /* 0x100715B7: cmp dword ptr [ebp + 0x14], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_10071645; /* 0x100715BA: jbe 0x10071645 */
L_100715C0:
    /* test LO8(ebx), LO8(ebx) */ /* 0x100715C0: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10071630; /* 0x100715C2: jne 0x10071630 */
L_100715C4:
    eax = MEM32(edx + 0x58); /* 0x100715C4: mov eax, dword ptr [edx + 0x58] */
    ecx = MEM32(eax + ecx * 4); /* 0x100715C7: mov ecx, dword ptr [eax + ecx*4] */
    eax = MEM32(ecx + 0x10); /* 0x100715CA: mov eax, dword ptr [ecx + 0x10] */
    eax = MEM32(eax + 0xA0); /* 0x100715CD: mov eax, dword ptr [eax + 0xa0] */
    /* cmp eax, MEM32(ecx + 0x24) */ /* 0x100715D3: cmp eax, dword ptr [ecx + 0x24] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x24));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_10071620; /* 0x100715D6: jbe 0x10071620 */
L_100715D8:
    edx = MEM32(ecx + 0x10); /* 0x100715D8: mov edx, dword ptr [ecx + 0x10] */
    edx = MEM32(edx + 0x10); /* 0x100715DB: mov edx, dword ptr [edx + 0x10] */
    /* cmp MEM32(edi + edx + 0x2C), 0 */ /* 0x100715DE: cmp dword ptr [edi + edx + 0x2c], 0 */
    _flag_a = (uint32_t)(MEM32(edi + edx + 0x2C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_10071605; /* 0x100715E3: ja 0x10071605 */
L_100715E5:
    eax = MEM32(edi + edx + 0x20); /* 0x100715E5: mov eax, dword ptr [edi + edx + 0x20] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + edx + 0x2C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(edi + edx + 0x2C); /* 0x100715E9: sub eax, dword ptr [edi + edx + 0x2c] */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100715F5; /* 0x100715ED: je 0x100715f5 */
L_100715EF:
    /* cmp MEM32(ecx + 0x2C), 0 */ /* 0x100715EF: cmp dword ptr [ecx + 0x2c], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x2C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_10071605; /* 0x100715F3: ja 0x10071605 */
L_100715F5:
    eax = MEM32(edi + edx + 0x1C); /* 0x100715F5: mov eax, dword ptr [edi + edx + 0x1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + edx + 0x24));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(edi + edx + 0x24); /* 0x100715F9: sub eax, dword ptr [edi + edx + 0x24] */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1007161D; /* 0x100715FD: je 0x1007161d */
L_100715FF:
    /* cmp MEM32(ecx + 0x30), 0 */ /* 0x100715FF: cmp dword ptr [ecx + 0x30], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x30)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1007161D; /* 0x10071603: jbe 0x1007161d */
L_10071605:
    PUSH32(esp, 1); /* 0x10071605: push 1 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x10071607: push dword ptr [ebp + 0x10] */
    SET_LO8(ebx, 1); /* 0x1007160A: mov bl, 1 */
    PUSH32(esp, MEM32(esi + 0x10)); /* 0x1007160C: push dword ptr [esi + 0x10] */
    PUSH32(esp, ecx); /* 0x1007160F: push ecx */
    ecx = MEM32(ebp + (-0x4)); /* 0x10071610: mov ecx, dword ptr [ebp - 4] */
    RECOMP_CALL(sub_100713DF); /* 0x10071613: call 0x100713df */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0xC); /* 0x10071618: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(1);
    MEM32(eax) = MEM32(eax) - 1; /* 0x1007161B: dec dword ptr [eax] */
    _flag_k = FK_DEC;
L_1007161D:
    edx = MEM32(ebp + (-0x4)); /* 0x1007161D: mov edx, dword ptr [ebp - 4] */
L_10071620:
    ecx = MEM32(ebp + 0x8); /* 0x10071620: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x10071623: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + 0x8) = ecx; /* 0x10071624: mov dword ptr [ebp + 8], ecx */
    /* cmp ecx, MEM32(ebp + 0x14) */ /* 0x10071627: cmp ecx, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_100715C0; /* 0x1007162A: jb 0x100715c0 */
L_1007162C:
    /* test LO8(ebx), LO8(ebx) */ /* 0x1007162C: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10071645; /* 0x1007162E: je 0x10071645 */
L_10071630:
    ecx = MEM32(ebp + (-0x8)); /* 0x10071630: mov ecx, dword ptr [ebp - 8] */
    eax = MEM32(edi + ecx + 0x1C); /* 0x10071633: mov eax, dword ptr [edi + ecx + 0x1c] */
    /* cmp eax, MEM32(edi + ecx + 0x4) */ /* 0x10071637: cmp eax, dword ptr [edi + ecx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + ecx + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10071640; /* 0x1007163B: jne 0x10071640 */
L_1007163D:
    _flag_a = (uint32_t)(MEM32(esi + 0x2C)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x2C) = MEM32(esi + 0x2C) + 1; /* 0x1007163D: inc dword ptr [esi + 0x2c] */
    _flag_k = FK_INC;
L_10071640:
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) - 1; /* 0x10071640: dec dword ptr [esi + 4] */
    _flag_k = FK_DEC;
    goto L_10071648; /* 0x10071643: jmp 0x10071648 */
L_10071645:
    _flag_a = (uint32_t)(MEM32(esi + 0x2C)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x2C) = MEM32(esi + 0x2C) + 1; /* 0x10071645: inc dword ptr [esi + 0x2c] */
    _flag_k = FK_INC;
L_10071648:
    edi = POP32_VAL(esp); /* 0x10071648: pop edi */
    esi = POP32_VAL(esp); /* 0x10071649: pop esi */
    SET_LO8(eax, LO8(ebx)); /* 0x1007164A: mov al, bl */
    ebx = POP32_VAL(esp); /* 0x1007164C: pop ebx */
    esp = ebp; /* 0x1007164D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1007164F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x10071650: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_10071653(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10071653u);

L_10071653:
    PUSH32(esp, ebp); /* 0x10071653: push ebp */
    ebp = esp; /* 0x10071654: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x50u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x50u; /* 0x10071656: sub esp, 0x50 */
    _flag_k = FK_CMP;
    edx = ecx; /* 0x10071659: mov edx, ecx */
    ecx = MEM32(ebp + 0x10); /* 0x1007165B: mov ecx, dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x1007165E: push ebx */
    PUSH32(esp, esi); /* 0x1007165F: push esi */
    PUSH32(esp, edi); /* 0x10071660: push edi */
    eax = MEM32(ecx + 0x10); /* 0x10071661: mov eax, dword ptr [ecx + 0x10] */
    MEM32(ebp + (-0x8)) = edx; /* 0x10071664: mov dword ptr [ebp - 8], edx */
    MEM32(ebp + (-0x50)) = eax; /* 0x10071667: mov dword ptr [ebp - 0x50], eax */
    ebx = MEM32(eax + 0x10); /* 0x1007166A: mov ebx, dword ptr [eax + 0x10] */
    esi = MEM32(eax + 0x14); /* 0x1007166D: mov esi, dword ptr [eax + 0x14] */
    MEM32(ebp + (-0x18)) = ebx; /* 0x10071670: mov dword ptr [ebp - 0x18], ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10071673: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x14), 1 */ /* 0x10071675: cmp dword ptr [ebp + 0x14], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0xC)) = esi; /* 0x10071679: mov dword ptr [ebp - 0xc], esi */
    MEM32(ebp + (-0x38)) = ebx; /* 0x1007167C: mov dword ptr [ebp - 0x38], ebx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_10071686; /* 0x1007167F: jne 0x10071686 */
L_10071681:
    MEM8(ebp + 0x17) = (uint8_t)(LO8(ebx)); /* 0x10071681: mov byte ptr [ebp + 0x17], bl */
    goto L_1007168C; /* 0x10071684: jmp 0x1007168c */
L_10071686:
    SET_LO8(eax, MEM8(ecx + 0x20)); /* 0x10071686: mov al, byte ptr [ecx + 0x20] */
    MEM8(ebp + 0x17) = (uint8_t)(LO8(eax)); /* 0x10071689: mov byte ptr [ebp + 0x17], al */
L_1007168C:
    eax = MEM32(ecx + 0x2C); /* 0x1007168C: mov eax, dword ptr [ecx + 0x2c] */
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x1007168F: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(edx + 0x18); /* 0x10071692: mov edx, dword ptr [edx + 0x18] */
    MEM32(ebp + (-0x3C)) = ebx; /* 0x10071695: mov dword ptr [ebp - 0x3c], ebx */
    MEM32(ebp + (-0x30)) = edi; /* 0x10071698: mov dword ptr [ebp - 0x30], edi */
    MEM32(ebp + (-0x14)) = ebx; /* 0x1007169B: mov dword ptr [ebp - 0x14], ebx */
    MEM32(ebp + (-0x28)) = ebx; /* 0x1007169E: mov dword ptr [ebp - 0x28], ebx */
    MEM32(ebp + (-0x2C)) = eax; /* 0x100716A1: mov dword ptr [ebp - 0x2c], eax */
    MEM32(ebp + (-0x4C)) = edx; /* 0x100716A4: mov dword ptr [ebp - 0x4c], edx */
    /* cmp eax, edx */ /* 0x100716A7: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_10071988; /* 0x100716A9: jae 0x10071988 */
L_100716AF:
    eax = MEM32(esi + eax * 4); /* 0x100716AF: mov eax, dword ptr [esi + eax*4] */
    edi = MEM32(ebp + (-0x18)); /* 0x100716B2: mov edi, dword ptr [ebp - 0x18] */
    edx = (uint32_t)((int32_t)eax * (int32_t)0x34u); /* 0x100716B5: imul edx, eax, 0x34 */
    MEM32(ebp + (-0x34)) = edx; /* 0x100716B8: mov dword ptr [ebp - 0x34], edx */
    /* cmp MEM32(edx + edi + 0x1C), ebx */ /* 0x100716BB: cmp dword ptr [edx + edi + 0x1c], ebx */
    _flag_a = (uint32_t)(MEM32(edx + edi + 0x1C)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = MEM32(ebp + (-0x14)); /* 0x100716BF: mov edi, dword ptr [ebp - 0x14] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007180A; /* 0x100716C2: jne 0x1007180a */
L_100716C8:
    edi = MEM32(ebp + (-0x18)); /* 0x100716C8: mov edi, dword ptr [ebp - 0x18] */
    esi = MEM32(ecx + 0x4); /* 0x100716CB: mov esi, dword ptr [ecx + 4] */
    MEM32(ebp + (-0x24)) = esi; /* 0x100716CE: mov dword ptr [ebp - 0x24], esi */
    /* cmp esi, MEM32(edx + edi + 0x4) */ /* 0x100716D1: cmp esi, dword ptr [edx + edi + 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edx + edi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_100716E0; /* 0x100716D5: jb 0x100716e0 */
L_100716D7:
    esi = edi; /* 0x100716D7: mov esi, edi */
    edx = MEM32(edx + esi + 0x4); /* 0x100716D9: mov edx, dword ptr [edx + esi + 4] */
    MEM32(ebp + (-0x24)) = edx; /* 0x100716DD: mov dword ptr [ebp - 0x24], edx */
L_100716E0:
    esi = MEM32(ebp + 0x8); /* 0x100716E0: mov esi, dword ptr [ebp + 8] */
    edx = ebx; /* 0x100716E3: mov edx, ebx */
    edi = MEM32(ebp + (-0x14)); /* 0x100716E5: mov edi, dword ptr [ebp - 0x14] */
    MEM32(ebp + (-0x20)) = ebx; /* 0x100716E8: mov dword ptr [ebp - 0x20], ebx */
    MEM32(ebp + (-0x4)) = edx; /* 0x100716EB: mov dword ptr [ebp - 4], edx */
    /* cmp MEM32(esi), 0 */ /* 0x100716EE: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_10071716; /* 0x100716F1: jbe 0x10071716 */
L_100716F3:
    ecx = (uint32_t)((int32_t)eax * (int32_t)0x28u); /* 0x100716F3: imul ecx, eax, 0x28 */
    eax = MEM32(ebp + (-0x8)); /* 0x100716F6: mov eax, dword ptr [ebp - 8] */
    eax = MEM32(eax + 0x48); /* 0x100716F9: mov eax, dword ptr [eax + 0x48] */
    eax = MEM32(ecx + eax + 0x8); /* 0x100716FC: mov eax, dword ptr [ecx + eax + 8] */
    /* test eax, eax */ /* 0x10071700: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10071713; /* 0x10071702: je 0x10071713 */
L_10071704:
    /* cmp MEM32(esi), eax */ /* 0x10071704: cmp dword ptr [esi], eax */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1007170A; /* 0x10071706: jae 0x1007170a */
L_10071708:
    eax = MEM32(esi); /* 0x10071708: mov eax, dword ptr [esi] */
L_1007170A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1007170A: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x20)) = eax; /* 0x1007170C: mov dword ptr [ebp - 0x20], eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1007170F: inc edx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x4)) = edx; /* 0x10071710: mov dword ptr [ebp - 4], edx */
L_10071713:
    ecx = MEM32(ebp + 0x10); /* 0x10071713: mov ecx, dword ptr [ebp + 0x10] */
L_10071716:
    eax = MEM32(ebp + 0xC); /* 0x10071716: mov eax, dword ptr [ebp + 0xc] */
    esi = ebx; /* 0x10071719: mov esi, ebx */
    MEM32(ebp + (-0x10)) = esi; /* 0x1007171B: mov dword ptr [ebp - 0x10], esi */
    /* cmp MEM32(eax), 0 */ /* 0x1007171E: cmp dword ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_100717E4; /* 0x10071721: jbe 0x100717e4 */
L_10071727:
    /* cmp MEM32(ebp + 0x18), 0 */ /* 0x10071727: cmp dword ptr [ebp + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x1C)) = ebx; /* 0x1007172B: mov dword ptr [ebp - 0x1c], ebx */
    if (CMP_BE(_flag_a, _flag_b)) goto L_100717E4; /* 0x1007172E: jbe 0x100717e4 */
L_10071734:
    ecx = MEM32(ebp + (-0x34)); /* 0x10071734: mov ecx, dword ptr [ebp - 0x34] */
    edi = MEM32(ebp + (-0x8)); /* 0x10071737: mov edi, dword ptr [ebp - 8] */
L_1007173A:
    /* cmp esi, MEM32(eax) */ /* 0x1007173A: cmp esi, dword ptr [eax] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_100717DC; /* 0x1007173C: jae 0x100717dc */
L_10071742:
    eax = MEM32(edi + 0x58); /* 0x10071742: mov eax, dword ptr [edi + 0x58] */
    esi = MEM32(ebp + (-0x1C)); /* 0x10071745: mov esi, dword ptr [ebp - 0x1c] */
    esi = MEM32(eax + esi * 4); /* 0x10071748: mov esi, dword ptr [eax + esi*4] */
    edx = MEM32(esi + 0x10); /* 0x1007174B: mov edx, dword ptr [esi + 0x10] */
    eax = MEM32(edx + 0xA0); /* 0x1007174E: mov eax, dword ptr [edx + 0xa0] */
    /* cmp eax, MEM32(esi + 0x24) */ /* 0x10071754: cmp eax, dword ptr [esi + 0x24] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x24));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_100717C3; /* 0x10071757: jbe 0x100717c3 */
L_10071759:
    eax = MEM32(edx + 0x10); /* 0x10071759: mov eax, dword ptr [edx + 0x10] */
    edx = MEM32(ecx + eax + 0x1C); /* 0x1007175C: mov edx, dword ptr [ecx + eax + 0x1c] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ecx + eax + 0x24));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - MEM32(ecx + eax + 0x24); /* 0x10071760: sub edx, dword ptr [ecx + eax + 0x24] */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x44)) = edx; /* 0x10071764: mov dword ptr [ebp - 0x44], edx */
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100717C3; /* 0x10071767: je 0x100717c3 */
L_10071769:
    ebx = MEM32(esi + 0x28); /* 0x10071769: mov ebx, dword ptr [esi + 0x28] */
    edx = MEM32(ecx + eax + 0x2C); /* 0x1007176C: mov edx, dword ptr [ecx + eax + 0x2c] */
    MEM32(ebp + (-0x34)) = ebx; /* 0x10071770: mov dword ptr [ebp - 0x34], ebx */
    /* cmp edx, ebx */ /* 0x10071773: cmp edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1007177A; /* 0x10071775: jae 0x1007177a */
L_10071777:
    MEM32(ebp + (-0x34)) = edx; /* 0x10071777: mov dword ptr [ebp - 0x34], edx */
L_1007177A:
    eax = MEM32(ecx + eax + 0x20); /* 0x1007177A: mov eax, dword ptr [ecx + eax + 0x20] */
    MEM32(ebp + (-0x48)) = eax; /* 0x1007177E: mov dword ptr [ebp - 0x48], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x10071781: sub eax, edx */
    _flag_k = FK_CMP;
    edx = eax; /* 0x10071783: mov edx, eax */
    MEM32(ebp + (-0x40)) = eax; /* 0x10071785: mov dword ptr [ebp - 0x40], eax */
    /* cmp eax, MEM32(esi + 0x2C) */ /* 0x10071788: cmp eax, dword ptr [esi + 0x2c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x2C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_10071790; /* 0x1007178B: jb 0x10071790 */
L_1007178D:
    edx = MEM32(esi + 0x2C); /* 0x1007178D: mov edx, dword ptr [esi + 0x2c] */
L_10071790:
    eax = MEM32(ebp + (-0x44)); /* 0x10071790: mov eax, dword ptr [ebp - 0x44] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x48)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + (-0x48)); /* 0x10071793: sub eax, dword ptr [ebp - 0x48] */
    _flag_k = FK_CMP;
    /* cmp eax, MEM32(esi + 0x30) */ /* 0x10071796: cmp eax, dword ptr [esi + 0x30] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x30));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1007179E; /* 0x10071799: jb 0x1007179e */
L_1007179B:
    eax = MEM32(esi + 0x30); /* 0x1007179B: mov eax, dword ptr [esi + 0x30] */
L_1007179E:
    esi = MEM32(ebp + (-0x10)); /* 0x1007179E: mov esi, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x100717A1: add edx, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x34)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + (-0x34)); /* 0x100717A3: add edx, dword ptr [ebp - 0x34] */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_100717C6; /* 0x100717A6: je 0x100717c6 */
L_100717A8:
    eax = MEM32(ebp + 0xC); /* 0x100717A8: mov eax, dword ptr [ebp + 0xc] */
    eax = MEM32(eax); /* 0x100717AB: mov eax, dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x100717AD: sub eax, esi */
    _flag_k = FK_CMP;
    /* cmp eax, edx */ /* 0x100717AF: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_100717B5; /* 0x100717B1: jb 0x100717b5 */
L_100717B3:
    eax = edx; /* 0x100717B3: mov eax, edx */
L_100717B5:
    edx = MEM32(ebp + (-0x4)); /* 0x100717B5: mov edx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x100717B8: add esi, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x100717BA: inc edx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x10)) = esi; /* 0x100717BB: mov dword ptr [ebp - 0x10], esi */
    MEM32(ebp + (-0x4)) = edx; /* 0x100717BE: mov dword ptr [ebp - 4], edx */
    goto L_100717C9; /* 0x100717C1: jmp 0x100717c9 */
L_100717C3:
    esi = MEM32(ebp + (-0x10)); /* 0x100717C3: mov esi, dword ptr [ebp - 0x10] */
L_100717C6:
    edx = MEM32(ebp + (-0x4)); /* 0x100717C6: mov edx, dword ptr [ebp - 4] */
L_100717C9:
    eax = MEM32(ebp + (-0x1C)); /* 0x100717C9: mov eax, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100717CC: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, MEM32(ebp + 0x18) */ /* 0x100717CD: cmp eax, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x18));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x1C)) = eax; /* 0x100717D0: mov dword ptr [ebp - 0x1c], eax */
    eax = MEM32(ebp + 0xC); /* 0x100717D3: mov eax, dword ptr [ebp + 0xc] */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1007173A; /* 0x100717D6: jb 0x1007173a */
L_100717DC:
    edi = MEM32(ebp + (-0x14)); /* 0x100717DC: mov edi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x100717DF: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0x10); /* 0x100717E1: mov ecx, dword ptr [ebp + 0x10] */
L_100717E4:
    eax = MEM32(ebp + (-0x20)); /* 0x100717E4: mov eax, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x100717E7: add eax, esi */
    _flag_k = FK_ADD;
    /* cmp MEM8(ebp + 0x17), 0 */ /* 0x100717E9: cmp byte ptr [ebp + 0x17], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x17)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007186B; /* 0x100717ED: je 0x1007186b */
L_100717EF:
    /* cmp eax, MEM32(ebp + (-0x24)) */ /* 0x100717EF: cmp eax, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x24)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_100717F2:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_10071807; /* 0x100717F2: jne 0x10071807 */
L_100717F4:
    /* cmp edx, MEM32(ebp + (-0x28)) */ /* 0x100717F4: cmp edx, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x28)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_10071807; /* 0x100717F7: jbe 0x10071807 */
L_100717F9:
    edi = MEM32(ebp + (-0x2C)); /* 0x100717F9: mov edi, dword ptr [ebp - 0x2c] */
    MEM32(ebp + (-0x30)) = edi; /* 0x100717FC: mov dword ptr [ebp - 0x30], edi */
    edi = eax; /* 0x100717FF: mov edi, eax */
    MEM32(ebp + (-0x14)) = edi; /* 0x10071801: mov dword ptr [ebp - 0x14], edi */
    MEM32(ebp + (-0x28)) = edx; /* 0x10071804: mov dword ptr [ebp - 0x28], edx */
L_10071807:
    esi = MEM32(ebp + (-0xC)); /* 0x10071807: mov esi, dword ptr [ebp - 0xc] */
L_1007180A:
    eax = MEM32(ebp + (-0x2C)); /* 0x1007180A: mov eax, dword ptr [ebp - 0x2c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1007180D: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x2C)) = eax; /* 0x1007180E: mov dword ptr [ebp - 0x2c], eax */
    /* cmp eax, MEM32(ebp + (-0x4C)) */ /* 0x10071811: cmp eax, dword ptr [ebp - 0x4c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x4C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_100716AF; /* 0x10071814: jb 0x100716af */
L_1007181A:
    eax = MEM32(ebp + (-0x30)); /* 0x1007181A: mov eax, dword ptr [ebp - 0x30] */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1007181D: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10071988; /* 0x10071820: je 0x10071988 */
L_10071826:
    edx = MEM32(esi + eax * 4); /* 0x10071826: mov edx, dword ptr [esi + eax*4] */
    eax = MEM32(ecx + 0x4); /* 0x10071829: mov eax, dword ptr [ecx + 4] */
    MEM32(ebp + 0x14) = edx; /* 0x1007182C: mov dword ptr [ebp + 0x14], edx */
    /* cmp eax, edi */ /* 0x1007182F: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_10071835; /* 0x10071831: jae 0x10071835 */
L_10071833:
    edi = eax; /* 0x10071833: mov edi, eax */
L_10071835:
    esi = MEM32(ebp + 0x8); /* 0x10071835: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x10071838: sub eax, edi */
    _flag_k = FK_CMP;
    MEM32(ecx + 0x4) = eax; /* 0x1007183A: mov dword ptr [ecx + 4], eax */
    MEM32(ebp + (-0x3C)) = edi; /* 0x1007183D: mov dword ptr [ebp - 0x3c], edi */
    esi = MEM32(esi); /* 0x10071840: mov esi, dword ptr [esi] */
    /* test esi, esi */ /* 0x10071842: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10071892; /* 0x10071844: je 0x10071892 */
L_10071846:
    eax = MEM32(ebp + (-0x8)); /* 0x10071846: mov eax, dword ptr [ebp - 8] */
    ecx = (uint32_t)((int32_t)edx * (int32_t)0x28u); /* 0x10071849: imul ecx, edx, 0x28 */
    eax = MEM32(eax + 0x48); /* 0x1007184C: mov eax, dword ptr [eax + 0x48] */
    eax = MEM32(ecx + eax + 0x8); /* 0x1007184F: mov eax, dword ptr [ecx + eax + 8] */
    /* test eax, eax */ /* 0x10071853: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10071892; /* 0x10071855: je 0x10071892 */
L_10071857:
    ecx = esi; /* 0x10071857: mov ecx, esi */
    /* cmp esi, eax */ /* 0x10071859: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1007185F; /* 0x1007185B: jb 0x1007185f */
L_1007185D:
    ecx = eax; /* 0x1007185D: mov ecx, eax */
L_1007185F:
    /* cmp ecx, edi */ /* 0x1007185F: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1007187B; /* 0x10071861: jae 0x1007187b */
L_10071863:
    /* cmp esi, eax */ /* 0x10071863: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1007187D; /* 0x10071865: jb 0x1007187d */
L_10071867:
    esi = eax; /* 0x10071867: mov esi, eax */
    goto L_1007187D; /* 0x10071869: jmp 0x1007187d */
L_1007186B:
    /* cmp edi, MEM32(ebp + (-0x24)) */ /* 0x1007186B: cmp edi, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x24)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_10071874; /* 0x1007186E: jae 0x10071874 */
L_10071870:
    /* cmp eax, edi */ /* 0x10071870: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_100717F9; /* 0x10071872: ja 0x100717f9 */
L_10071874:
    /* cmp eax, edi */ /* 0x10071874: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    goto L_100717F2; /* 0x10071876: jmp 0x100717f2 */
L_1007187B:
    esi = edi; /* 0x1007187B: mov esi, edi */
L_1007187D:
    ecx = MEM32(ebp + (-0x8)); /* 0x1007187D: mov ecx, dword ptr [ebp - 8] */
    PUSH32(esp, ebx); /* 0x10071880: push ebx */
    PUSH32(esp, esi); /* 0x10071881: push esi */
    PUSH32(esp, edx); /* 0x10071882: push edx */
    PUSH32(esp, MEM32(ebp + (-0x50))); /* 0x10071883: push dword ptr [ebp - 0x50] */
    RECOMP_CALL(sub_10071371); /* 0x10071886: call 0x10071371 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1007188B: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(eax) = MEM32(eax) - esi; /* 0x1007188E: sub dword ptr [eax], esi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - esi; /* 0x10071890: sub edi, esi */
    _flag_k = FK_CMP;
L_10071892:
    /* test edi, edi */ /* 0x10071892: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10071967; /* 0x10071894: je 0x10071967 */
L_1007189A:
    eax = MEM32(ebp + 0xC); /* 0x1007189A: mov eax, dword ptr [ebp + 0xc] */
    /* cmp MEM32(eax), ebx */ /* 0x1007189D: cmp dword ptr [eax], ebx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_10071967; /* 0x1007189F: jbe 0x10071967 */
L_100718A5:
    /* cmp ebx, MEM32(ebp + 0x18) */ /* 0x100718A5: cmp ebx, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + 0x18));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_10071967; /* 0x100718A8: jae 0x10071967 */
L_100718AE:
    esi = MEM32(eax); /* 0x100718AE: mov esi, dword ptr [eax] */
    /* test esi, esi */ /* 0x100718B0: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10071967; /* 0x100718B2: je 0x10071967 */
L_100718B8:
    eax = MEM32(ebp + (-0x8)); /* 0x100718B8: mov eax, dword ptr [ebp - 8] */
    eax = MEM32(eax + 0x58); /* 0x100718BB: mov eax, dword ptr [eax + 0x58] */
    edx = MEM32(eax + ebx * 4); /* 0x100718BE: mov edx, dword ptr [eax + ebx*4] */
    MEM32(ebp + 0x8) = edx; /* 0x100718C1: mov dword ptr [ebp + 8], edx */
    eax = MEM32(edx + 0x10); /* 0x100718C4: mov eax, dword ptr [edx + 0x10] */
    eax = MEM32(eax + 0xA0); /* 0x100718C7: mov eax, dword ptr [eax + 0xa0] */
    /* cmp eax, MEM32(edx + 0x24) */ /* 0x100718CD: cmp eax, dword ptr [edx + 0x24] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x24));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_10071958; /* 0x100718D0: jbe 0x10071958 */
L_100718D6:
    ecx = (uint32_t)((int32_t)MEM32(ebp + 0x14) * (int32_t)0x34u); /* 0x100718D6: imul ecx, dword ptr [ebp + 0x14], 0x34 */
    eax = MEM32(edx + 0x10); /* 0x100718DA: mov eax, dword ptr [edx + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x10));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(eax + 0x10); /* 0x100718DD: add ecx, dword ptr [eax + 0x10] */
    _flag_k = FK_ADD;
    eax = MEM32(ecx + 0x1C); /* 0x100718E0: mov eax, dword ptr [ecx + 0x1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x24));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ecx + 0x24); /* 0x100718E3: sub eax, dword ptr [ecx + 0x24] */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_10071958; /* 0x100718E6: je 0x10071958 */
L_100718E8:
    edx = MEM32(ecx + 0x2C); /* 0x100718E8: mov edx, dword ptr [ecx + 0x2c] */
    MEM32(ebp + (-0x50)) = edx; /* 0x100718EB: mov dword ptr [ebp - 0x50], edx */
    edx = MEM32(ebp + 0x8); /* 0x100718EE: mov edx, dword ptr [ebp + 8] */
    ebx = MEM32(edx + 0x28); /* 0x100718F1: mov ebx, dword ptr [edx + 0x28] */
    MEM32(ebp + 0x8) = ebx; /* 0x100718F4: mov dword ptr [ebp + 8], ebx */
    /* cmp MEM32(ecx + 0x2C), ebx */ /* 0x100718F7: cmp dword ptr [ecx + 0x2c], ebx */
    _flag_a = (uint32_t)(MEM32(ecx + 0x2C)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_10071902; /* 0x100718FA: jae 0x10071902 */
L_100718FC:
    ebx = MEM32(ecx + 0x2C); /* 0x100718FC: mov ebx, dword ptr [ecx + 0x2c] */
    MEM32(ebp + 0x8) = ebx; /* 0x100718FF: mov dword ptr [ebp + 8], ebx */
L_10071902:
    ebx = MEM32(ecx + 0x20); /* 0x10071902: mov ebx, dword ptr [ecx + 0x20] */
    ecx = ebx; /* 0x10071905: mov ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x50)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + (-0x50)); /* 0x10071907: sub ecx, dword ptr [ebp - 0x50] */
    _flag_k = FK_CMP;
    /* cmp ecx, MEM32(edx + 0x2C) */ /* 0x1007190A: cmp ecx, dword ptr [edx + 0x2c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edx + 0x2C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_10071912; /* 0x1007190D: jb 0x10071912 */
L_1007190F:
    ecx = MEM32(edx + 0x2C); /* 0x1007190F: mov ecx, dword ptr [edx + 0x2c] */
L_10071912:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x10071912: sub eax, ebx */
    _flag_k = FK_CMP;
    /* cmp eax, MEM32(edx + 0x30) */ /* 0x10071914: cmp eax, dword ptr [edx + 0x30] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x30));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1007191C; /* 0x10071917: jb 0x1007191c */
L_10071919:
    eax = MEM32(edx + 0x30); /* 0x10071919: mov eax, dword ptr [edx + 0x30] */
L_1007191C:
    ebx = MEM32(ebp + (-0x38)); /* 0x1007191C: mov ebx, dword ptr [ebp - 0x38] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1007191F: add eax, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + 0x8); /* 0x10071921: add eax, dword ptr [ebp + 8] */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_10071958; /* 0x10071924: je 0x10071958 */
L_10071926:
    ecx = esi; /* 0x10071926: mov ecx, esi */
    /* cmp esi, eax */ /* 0x10071928: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1007192E; /* 0x1007192A: jb 0x1007192e */
L_1007192C:
    ecx = eax; /* 0x1007192C: mov ecx, eax */
L_1007192E:
    /* cmp ecx, edi */ /* 0x1007192E: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1007193A; /* 0x10071930: jae 0x1007193a */
L_10071932:
    /* cmp esi, eax */ /* 0x10071932: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_1007193C; /* 0x10071934: jb 0x1007193c */
L_10071936:
    esi = eax; /* 0x10071936: mov esi, eax */
    goto L_1007193C; /* 0x10071938: jmp 0x1007193c */
L_1007193A:
    esi = edi; /* 0x1007193A: mov esi, edi */
L_1007193C:
    eax = MEM32(ebp + 0x10); /* 0x1007193C: mov eax, dword ptr [ebp + 0x10] */
    ecx = MEM32(ebp + (-0x8)); /* 0x1007193F: mov ecx, dword ptr [ebp - 8] */
    PUSH32(esp, esi); /* 0x10071942: push esi */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x10071943: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(eax + 0x10)); /* 0x10071946: push dword ptr [eax + 0x10] */
    PUSH32(esp, edx); /* 0x10071949: push edx */
    RECOMP_CALL(sub_100713DF); /* 0x1007194A: call 0x100713df */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0xC); /* 0x1007194F: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(eax) = MEM32(eax) - esi; /* 0x10071952: sub dword ptr [eax], esi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - esi; /* 0x10071954: sub edi, esi */
    _flag_k = FK_CMP;
    goto L_1007195B; /* 0x10071956: jmp 0x1007195b */
L_10071958:
    eax = MEM32(ebp + 0xC); /* 0x10071958: mov eax, dword ptr [ebp + 0xc] */
L_1007195B:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1007195B: inc ebx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x38)) = ebx; /* 0x1007195C: mov dword ptr [ebp - 0x38], ebx */
    /* test edi, edi */ /* 0x1007195F: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100718A5; /* 0x10071961: jne 0x100718a5 */
L_10071967:
    ebx = MEM32(ebp + 0x10); /* 0x10071967: mov ebx, dword ptr [ebp + 0x10] */
    esi = MEM32(ebp + (-0xC)); /* 0x1007196A: mov esi, dword ptr [ebp - 0xc] */
    edi = MEM32(ebp + (-0x30)); /* 0x1007196D: mov edi, dword ptr [ebp - 0x30] */
    edx = MEM32(ebx + 0x2C); /* 0x10071970: mov edx, dword ptr [ebx + 0x2c] */
    eax = MEM32(esi + edi * 4); /* 0x10071973: mov eax, dword ptr [esi + edi*4] */
    ecx = MEM32(esi + edx * 4); /* 0x10071976: mov ecx, dword ptr [esi + edx*4] */
    MEM32(esi + edx * 4) = eax; /* 0x10071979: mov dword ptr [esi + edx*4], eax */
    MEM32(esi + edi * 4) = ecx; /* 0x1007197C: mov dword ptr [esi + edi*4], ecx */
    _flag_a = (uint32_t)(MEM32(ebx + 0x2C)); _flag_b = (uint32_t)(1);
    MEM32(ebx + 0x2C) = MEM32(ebx + 0x2C) + 1; /* 0x1007197F: inc dword ptr [ebx + 0x2c] */
    _flag_k = FK_INC;
    MEM8(ebx + 0x20) = (uint8_t)(1); /* 0x10071982: mov byte ptr [ebx + 0x20], 1 */
    goto L_1007198B; /* 0x10071986: jmp 0x1007198b */
L_10071988:
    MEM8(ecx + 0x20) = (uint8_t)(LO8(ebx)); /* 0x10071988: mov byte ptr [ecx + 0x20], bl */
L_1007198B:
    eax = MEM32(ebp + (-0x3C)); /* 0x1007198B: mov eax, dword ptr [ebp - 0x3c] */
    edi = POP32_VAL(esp); /* 0x1007198E: pop edi */
    esi = POP32_VAL(esp); /* 0x1007198F: pop esi */
    ebx = POP32_VAL(esp); /* 0x10071990: pop ebx */
    esp = ebp; /* 0x10071991: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10071993: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x10071994: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_10071997(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10071997u);

L_10071997:
    PUSH32(esp, ebp); /* 0x10071997: push ebp */
    ebp = esp; /* 0x10071998: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1007199A: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1007199D: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x1007199E: mov ebx, dword ptr [ebp + 8] */
    edx = ecx; /* 0x100719A1: mov edx, ecx */
    PUSH32(esp, esi); /* 0x100719A3: push esi */
    esi = MEM32(ebp + 0x14); /* 0x100719A4: mov esi, dword ptr [ebp + 0x14] */
    PUSH32(esp, edi); /* 0x100719A7: push edi */
    MEM32(ebp + (-0x4)) = edx; /* 0x100719A8: mov dword ptr [ebp - 4], edx */
L_100719AB:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x100719AB: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x100719AD: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(ebp + 0x17) = (uint8_t)(LO8(eax)); /* 0x100719AF: mov byte ptr [ebp + 0x17], al */
    /* test esi, esi */ /* 0x100719B2: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100719F8; /* 0x100719B4: je 0x100719f8 */
L_100719B6:
    eax = MEM32(edx + 0x5C); /* 0x100719B6: mov eax, dword ptr [edx + 0x5c] */
    ecx = MEM32(eax + edi * 4); /* 0x100719B9: mov ecx, dword ptr [eax + edi*4] */
    /* cmp MEM32(ecx + 0x4), 0 */ /* 0x100719BC: cmp dword ptr [ecx + 4], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_100719E9; /* 0x100719C0: jbe 0x100719e9 */
L_100719C2:
    eax = MEM32(ecx + 0x28); /* 0x100719C2: mov eax, dword ptr [ecx + 0x28] */
    /* cmp eax, MEM32(ecx + 0x2C) */ /* 0x100719C5: cmp eax, dword ptr [ecx + 0x2c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x2C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_100719E9; /* 0x100719C8: jbe 0x100719e9 */
L_100719CA:
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x100719CA: push dword ptr [ebp + 0x18] */
    eax = ebp + 0x10; /* 0x100719CD: lea eax, [ebp + 0x10] */
    MEM8(ebp + 0x17) = (uint8_t)(1); /* 0x100719D0: mov byte ptr [ebp + 0x17], 1 */
    PUSH32(esp, ecx); /* 0x100719D4: push ecx */
    PUSH32(esp, eax); /* 0x100719D5: push eax */
    eax = ebp + 0xC; /* 0x100719D6: lea eax, [ebp + 0xc] */
    ecx = edx; /* 0x100719D9: mov ecx, edx */
    PUSH32(esp, eax); /* 0x100719DB: push eax */
    RECOMP_CALL(sub_10071549); /* 0x100719DC: call 0x10071549 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x4)); /* 0x100719E1: mov edx, dword ptr [ebp - 4] */
    /* test LO8(eax), LO8(eax) */ /* 0x100719E4: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100719E9; /* 0x100719E6: je 0x100719e9 */
L_100719E8:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x100719E8: dec ebx */
    _flag_k = FK_DEC;
L_100719E9:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x100719E9: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, esi */ /* 0x100719EA: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_100719B6; /* 0x100719EC: jb 0x100719b6 */
L_100719EE:
    SET_LO8(eax, MEM8(ebp + 0x17)); /* 0x100719EE: mov al, byte ptr [ebp + 0x17] */
    MEM32(ebp + 0x8) = ebx; /* 0x100719F1: mov dword ptr [ebp + 8], ebx */
    /* test LO8(eax), LO8(eax) */ /* 0x100719F4: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100719AB; /* 0x100719F6: jne 0x100719ab */
L_100719F8:
    /* test ebx, ebx */ /* 0x100719F8: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10071AD0; /* 0x100719FA: je 0x10071ad0 */
L_10071A00:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x10071A00: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xC)) = edi; /* 0x10071A02: mov dword ptr [ebp - 0xc], edi */
    /* test esi, esi */ /* 0x10071A05: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10071A87; /* 0x10071A07: je 0x10071a87 */
L_10071A09:
    ecx = edi + 0x1; /* 0x10071A09: lea ecx, [edi + 1] */
    MEM32(ebp + 0x14) = edi; /* 0x10071A0C: mov dword ptr [ebp + 0x14], edi */
    MEM32(ebp + (-0x8)) = ecx; /* 0x10071A0F: mov dword ptr [ebp - 8], ecx */
    MEM32(ebp + (-0x10)) = ecx; /* 0x10071A12: mov dword ptr [ebp - 0x10], ecx */
    /* cmp ecx, esi */ /* 0x10071A15: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_10071A6E; /* 0x10071A17: jae 0x10071a6e */
L_10071A19:
    ebx = MEM32(edx + 0x5C); /* 0x10071A19: mov ebx, dword ptr [edx + 0x5c] */
    edx = ecx; /* 0x10071A1C: mov edx, ecx */
    if (2u) _cf = (((edi) >> 30) & 1u); /* 0x10071A1E: shl edi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edi << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 2u; /* 0x10071A1E: shl edi, 2 */
L_10071A21:
    eax = MEM32(ebx + edx * 4); /* 0x10071A21: mov eax, dword ptr [ebx + edx*4] */
    ecx = MEM32(edi + ebx); /* 0x10071A24: mov ecx, dword ptr [edi + ebx] */
    eax = MEM32(eax + 0x4); /* 0x10071A27: mov eax, dword ptr [eax + 4] */
    /* cmp eax, MEM32(ecx + 0x4) */ /* 0x10071A2A: cmp eax, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_10071A3B; /* 0x10071A2D: jbe 0x10071a3b */
L_10071A2F:
    eax = edx; /* 0x10071A2F: mov eax, edx */
    edi = edx; /* 0x10071A31: mov edi, edx */
    MEM32(ebp + 0x14) = eax; /* 0x10071A33: mov dword ptr [ebp + 0x14], eax */
    if (2u) _cf = (((edi) >> 30) & 1u); /* 0x10071A36: shl edi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edi << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 2u; /* 0x10071A36: shl edi, 2 */
    goto L_10071A3E; /* 0x10071A39: jmp 0x10071a3e */
L_10071A3B:
    eax = MEM32(ebp + 0x14); /* 0x10071A3B: mov eax, dword ptr [ebp + 0x14] */
L_10071A3E:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x10071A3E: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, esi */ /* 0x10071A3F: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_10071A21; /* 0x10071A41: jb 0x10071a21 */
L_10071A43:
    edi = MEM32(ebp + (-0xC)); /* 0x10071A43: mov edi, dword ptr [ebp - 0xc] */
    ebx = MEM32(ebp + 0x8); /* 0x10071A46: mov ebx, dword ptr [ebp + 8] */
    edx = MEM32(ebp + (-0x4)); /* 0x10071A49: mov edx, dword ptr [ebp - 4] */
    /* cmp edi, eax */ /* 0x10071A4C: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10071A6B; /* 0x10071A4E: je 0x10071a6b */
L_10071A50:
    ecx = MEM32(edx + 0x5C); /* 0x10071A50: mov ecx, dword ptr [edx + 0x5c] */
    eax = MEM32(ecx + eax * 4); /* 0x10071A53: mov eax, dword ptr [ecx + eax*4] */
    edx = MEM32(ecx + edi * 4); /* 0x10071A56: mov edx, dword ptr [ecx + edi*4] */
    MEM32(ecx + edi * 4) = eax; /* 0x10071A59: mov dword ptr [ecx + edi*4], eax */
    eax = MEM32(ebp + (-0x4)); /* 0x10071A5C: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(ebp + 0x14); /* 0x10071A5F: mov ecx, dword ptr [ebp + 0x14] */
    eax = MEM32(eax + 0x5C); /* 0x10071A62: mov eax, dword ptr [eax + 0x5c] */
    MEM32(eax + ecx * 4) = edx; /* 0x10071A65: mov dword ptr [eax + ecx*4], edx */
    edx = MEM32(ebp + (-0x4)); /* 0x10071A68: mov edx, dword ptr [ebp - 4] */
L_10071A6B:
    ecx = MEM32(ebp + (-0x8)); /* 0x10071A6B: mov ecx, dword ptr [ebp - 8] */
L_10071A6E:
    eax = MEM32(edx + 0x5C); /* 0x10071A6E: mov eax, dword ptr [edx + 0x5c] */
    eax = MEM32(eax + edi * 4); /* 0x10071A71: mov eax, dword ptr [eax + edi*4] */
    /* cmp MEM32(eax + 0x4), 0 */ /* 0x10071A74: cmp dword ptr [eax + 4], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10071A85; /* 0x10071A78: je 0x10071a85 */
L_10071A7A:
    edi = ecx; /* 0x10071A7A: mov edi, ecx */
    MEM32(ebp + (-0xC)) = edi; /* 0x10071A7C: mov dword ptr [ebp - 0xc], edi */
    /* cmp edi, esi */ /* 0x10071A7F: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_10071A87; /* 0x10071A81: jae 0x10071a87 */
L_10071A83:
    RECOMP_BACKEDGE();
    goto L_10071A09; /* 0x10071A83: jmp 0x10071a09 */
L_10071A85:
    esi = edi; /* 0x10071A85: mov esi, edi */
L_10071A87:
    eax = esi; /* 0x10071A87: mov eax, esi */
    MEM32(ebp + 0x14) = eax; /* 0x10071A89: mov dword ptr [ebp + 0x14], eax */
L_10071A8C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x10071A8C: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x10071A8E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10071ACC; /* 0x10071A90: je 0x10071acc */
L_10071A92:
    eax = MEM32(edx + 0x5C); /* 0x10071A92: mov eax, dword ptr [edx + 0x5c] */
    eax = MEM32(eax + edi * 4); /* 0x10071A95: mov eax, dword ptr [eax + edi*4] */
    MEM32(ebp + 0x8) = eax; /* 0x10071A98: mov dword ptr [ebp + 8], eax */
    /* cmp MEM32(eax + 0x4), 0 */ /* 0x10071A9B: cmp dword ptr [eax + 4], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_10071AC4; /* 0x10071A9F: jbe 0x10071ac4 */
L_10071AA1:
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x10071AA1: push dword ptr [ebp + 0x18] */
    ecx = edx; /* 0x10071AA4: mov ecx, edx */
    PUSH32(esp, esi); /* 0x10071AA6: push esi */
    PUSH32(esp, eax); /* 0x10071AA7: push eax */
    eax = ebp + 0x10; /* 0x10071AA8: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x10071AAB: push eax */
    eax = ebp + 0xC; /* 0x10071AAC: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x10071AAF: push eax */
    RECOMP_CALL(sub_10071653); /* 0x10071AB0: call 0x10071653 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x4)); /* 0x10071AB5: mov edx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - eax; /* 0x10071AB8: sub ebx, eax */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x8); /* 0x10071ABA: mov eax, dword ptr [ebp + 8] */
    /* cmp MEM32(eax + 0x4), 0 */ /* 0x10071ABD: cmp dword ptr [eax + 4], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10071AC4; /* 0x10071AC1: jne 0x10071ac4 */
L_10071AC3:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x10071AC3: dec esi */
    _flag_k = FK_DEC;
L_10071AC4:
    eax = MEM32(ebp + 0x14); /* 0x10071AC4: mov eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x10071AC7: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, eax */ /* 0x10071AC8: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_10071A92; /* 0x10071ACA: jb 0x10071a92 */
L_10071ACC:
    /* test ebx, ebx */ /* 0x10071ACC: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10071A8C; /* 0x10071ACE: jne 0x10071a8c */
L_10071AD0:
    edi = POP32_VAL(esp); /* 0x10071AD0: pop edi */
    esi = POP32_VAL(esp); /* 0x10071AD1: pop esi */
    ebx = POP32_VAL(esp); /* 0x10071AD2: pop ebx */
    esp = ebp; /* 0x10071AD3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10071AD5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x10071AD6: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_10071AD9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10071AD9u);

L_10071AD9:
    PUSH32(esp, ebp); /* 0x10071AD9: push ebp */
    ebp = esp; /* 0x10071ADA: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x10071ADC: sub esp, 0x1c */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x10071ADF: push ebx */
    PUSH32(esp, esi); /* 0x10071AE0: push esi */
    esi = MEM32(ebp + 0xC); /* 0x10071AE1: mov esi, dword ptr [ebp + 0xc] */
    edx = ecx; /* 0x10071AE4: mov edx, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10071AE6: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = edx; /* 0x10071AE8: mov dword ptr [ebp - 0x10], edx */
    /* cmp MEM32(ebp + 0x10), 1 */ /* 0x10071AEB: cmp dword ptr [ebp + 0x10], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x10071AEF: push edi */
    eax = MEM32(esi + 0x10); /* 0x10071AF0: mov eax, dword ptr [esi + 0x10] */
    ecx = MEM32(eax + 0x10); /* 0x10071AF3: mov ecx, dword ptr [eax + 0x10] */
    edi = MEM32(eax + 0x14); /* 0x10071AF6: mov edi, dword ptr [eax + 0x14] */
    MEM32(ebp + (-0x14)) = ecx; /* 0x10071AF9: mov dword ptr [ebp - 0x14], ecx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_10071B03; /* 0x10071AFC: jne 0x10071b03 */
L_10071AFE:
    MEM8(ebp + 0xF) = (uint8_t)(LO8(ebx)); /* 0x10071AFE: mov byte ptr [ebp + 0xf], bl */
    goto L_10071B09; /* 0x10071B01: jmp 0x10071b09 */
L_10071B03:
    SET_LO8(eax, MEM8(esi + 0x20)); /* 0x10071B03: mov al, byte ptr [esi + 0x20] */
    MEM8(ebp + 0xF) = (uint8_t)(LO8(eax)); /* 0x10071B06: mov byte ptr [ebp + 0xf], al */
L_10071B09:
    ecx = MEM32(esi + 0x2C); /* 0x10071B09: mov ecx, dword ptr [esi + 0x2c] */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x10071B0C: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(edx + 0x18); /* 0x10071B0F: mov edx, dword ptr [edx + 0x18] */
    MEM32(ebp + (-0x4)) = eax; /* 0x10071B12: mov dword ptr [ebp - 4], eax */
    MEM32(ebp + 0x10) = ebx; /* 0x10071B15: mov dword ptr [ebp + 0x10], ebx */
    MEM32(ebp + (-0x8)) = ecx; /* 0x10071B18: mov dword ptr [ebp - 8], ecx */
    MEM32(ebp + (-0x1C)) = edx; /* 0x10071B1B: mov dword ptr [ebp - 0x1c], edx */
    /* cmp ecx, edx */ /* 0x10071B1E: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_10071BD9; /* 0x10071B20: jae 0x10071bd9 */
L_10071B26:
    edx = MEM32(edi + ecx * 4); /* 0x10071B26: mov edx, dword ptr [edi + ecx*4] */
    MEM32(ebp + (-0x18)) = edx; /* 0x10071B29: mov dword ptr [ebp - 0x18], edx */
    edx = (uint32_t)((int32_t)edx * (int32_t)0x34u); /* 0x10071B2C: imul edx, edx, 0x34 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x14)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + (-0x14)); /* 0x10071B2F: add edx, dword ptr [ebp - 0x14] */
    _flag_k = FK_ADD;
    /* cmp MEM32(edx + 0x1C), ebx */ /* 0x10071B32: cmp dword ptr [edx + 0x1c], ebx */
    _flag_a = (uint32_t)(MEM32(edx + 0x1C)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10071B76; /* 0x10071B35: jne 0x10071b76 */
L_10071B37:
    eax = MEM32(esi + 0x4); /* 0x10071B37: mov eax, dword ptr [esi + 4] */
    MEM32(ebp + (-0xC)) = eax; /* 0x10071B3A: mov dword ptr [ebp - 0xc], eax */
    /* cmp eax, MEM32(edx + 0x4) */ /* 0x10071B3D: cmp eax, dword ptr [edx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_10071B48; /* 0x10071B40: jb 0x10071b48 */
L_10071B42:
    eax = MEM32(edx + 0x4); /* 0x10071B42: mov eax, dword ptr [edx + 4] */
    MEM32(ebp + (-0xC)) = eax; /* 0x10071B45: mov dword ptr [ebp - 0xc], eax */
L_10071B48:
    ecx = (uint32_t)((int32_t)MEM32(ebp + (-0x18)) * (int32_t)0x28u); /* 0x10071B48: imul ecx, dword ptr [ebp - 0x18], 0x28 */
    edx = ebx; /* 0x10071B4C: mov edx, ebx */
    eax = MEM32(ebp + (-0x10)); /* 0x10071B4E: mov eax, dword ptr [ebp - 0x10] */
    eax = MEM32(eax + 0x48); /* 0x10071B51: mov eax, dword ptr [eax + 0x48] */
    eax = MEM32(ecx + eax + 0x1C); /* 0x10071B54: mov eax, dword ptr [ecx + eax + 0x1c] */
    /* test eax, eax */ /* 0x10071B58: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10071B66; /* 0x10071B5A: je 0x10071b66 */
L_10071B5C:
    edx = MEM32(ebp + 0x8); /* 0x10071B5C: mov edx, dword ptr [ebp + 8] */
    /* cmp MEM32(ebp + 0x8), eax */ /* 0x10071B5F: cmp dword ptr [ebp + 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_10071B66; /* 0x10071B62: jb 0x10071b66 */
L_10071B64:
    edx = eax; /* 0x10071B64: mov edx, eax */
L_10071B66:
    /* cmp MEM8(ebp + 0xF), LO8(ebx) */ /* 0x10071B66: cmp byte ptr [ebp + 0xf], bl */
    _flag_a = (uint32_t)(MEM8(ebp + 0xF)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10071BC2; /* 0x10071B69: je 0x10071bc2 */
L_10071B6B:
    /* cmp edx, MEM32(ebp + (-0xC)) */ /* 0x10071B6B: cmp edx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10071BC7; /* 0x10071B6E: je 0x10071bc7 */
L_10071B70:
    ecx = MEM32(ebp + (-0x8)); /* 0x10071B70: mov ecx, dword ptr [ebp - 8] */
    eax = MEM32(ebp + (-0x4)); /* 0x10071B73: mov eax, dword ptr [ebp - 4] */
L_10071B76:
    edx = MEM32(ebp + 0x10); /* 0x10071B76: mov edx, dword ptr [ebp + 0x10] */
L_10071B79:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x10071B79: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x8)) = ecx; /* 0x10071B7A: mov dword ptr [ebp - 8], ecx */
    /* cmp ecx, MEM32(ebp + (-0x1C)) */ /* 0x10071B7D: cmp ecx, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x1C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_10071B26; /* 0x10071B80: jb 0x10071b26 */
L_10071B82:
    /* cmp eax, 0xFFFFFFFFu */ /* 0x10071B82: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10071BD9; /* 0x10071B85: je 0x10071bd9 */
L_10071B87:
    ebx = MEM32(esi + 0x4); /* 0x10071B87: mov ebx, dword ptr [esi + 4] */
    /* cmp ebx, edx */ /* 0x10071B8A: cmp ebx, edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_10071B90; /* 0x10071B8C: jb 0x10071b90 */
L_10071B8E:
    ebx = edx; /* 0x10071B8E: mov ebx, edx */
L_10071B90:
    ecx = MEM32(ebp + (-0x10)); /* 0x10071B90: mov ecx, dword ptr [ebp - 0x10] */
    PUSH32(esp, 1); /* 0x10071B93: push 1 */
    PUSH32(esp, ebx); /* 0x10071B95: push ebx */
    PUSH32(esp, MEM32(edi + eax * 4)); /* 0x10071B96: push dword ptr [edi + eax*4] */
    PUSH32(esp, MEM32(esi + 0x10)); /* 0x10071B99: push dword ptr [esi + 0x10] */
    RECOMP_CALL(sub_10071371); /* 0x10071B9C: call 0x10071371 */
    RECOMP_FLAGS_IN();
    edx = MEM32(esi + 0x2C); /* 0x10071BA1: mov edx, dword ptr [esi + 0x2c] */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) - ebx; /* 0x10071BA4: sub dword ptr [esi + 4], ebx */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x4)); /* 0x10071BA7: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(edi + edx * 4); /* 0x10071BAA: mov ecx, dword ptr [edi + edx*4] */
    eax = MEM32(edi + eax * 4); /* 0x10071BAD: mov eax, dword ptr [edi + eax*4] */
    MEM32(edi + edx * 4) = eax; /* 0x10071BB0: mov dword ptr [edi + edx*4], eax */
    eax = MEM32(ebp + (-0x4)); /* 0x10071BB3: mov eax, dword ptr [ebp - 4] */
    MEM32(edi + eax * 4) = ecx; /* 0x10071BB6: mov dword ptr [edi + eax*4], ecx */
    _flag_a = (uint32_t)(MEM32(esi + 0x2C)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x2C) = MEM32(esi + 0x2C) + 1; /* 0x10071BB9: inc dword ptr [esi + 0x2c] */
    _flag_k = FK_INC;
    MEM8(esi + 0x20) = (uint8_t)(1); /* 0x10071BBC: mov byte ptr [esi + 0x20], 1 */
    goto L_10071BDC; /* 0x10071BC0: jmp 0x10071bdc */
L_10071BC2:
    /* cmp edx, MEM32(ebp + 0x10) */ /* 0x10071BC2: cmp edx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_BE(_flag_a, _flag_b)) goto L_10071B70; /* 0x10071BC5: jbe 0x10071b70 */
L_10071BC7:
    ecx = MEM32(ebp + (-0x8)); /* 0x10071BC7: mov ecx, dword ptr [ebp - 8] */
    eax = ecx; /* 0x10071BCA: mov eax, ecx */
    MEM32(ebp + (-0x4)) = eax; /* 0x10071BCC: mov dword ptr [ebp - 4], eax */
    MEM32(ebp + 0x10) = edx; /* 0x10071BCF: mov dword ptr [ebp + 0x10], edx */
    /* cmp MEM8(ebp + 0xF), LO8(ebx) */ /* 0x10071BD2: cmp byte ptr [ebp + 0xf], bl */
    _flag_a = (uint32_t)(MEM8(ebp + 0xF)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10071B79; /* 0x10071BD5: je 0x10071b79 */
L_10071BD7:
    RECOMP_BACKEDGE();
    goto L_10071B82; /* 0x10071BD7: jmp 0x10071b82 */
L_10071BD9:
    MEM8(esi + 0x20) = (uint8_t)(LO8(ebx)); /* 0x10071BD9: mov byte ptr [esi + 0x20], bl */
L_10071BDC:
    edi = POP32_VAL(esp); /* 0x10071BDC: pop edi */
    esi = POP32_VAL(esp); /* 0x10071BDD: pop esi */
    eax = ebx; /* 0x10071BDE: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x10071BE0: pop ebx */
    esp = ebp; /* 0x10071BE1: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10071BE3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x10071BE4: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_10071BE7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10071BE7u);

L_10071BE7:
    PUSH32(esp, ebp); /* 0x10071BE7: push ebp */
    ebp = esp; /* 0x10071BE8: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x10071BEA: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x10071BED: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x10071BEE: mov ebx, dword ptr [ebp + 8] */
    edx = ecx; /* 0x10071BF1: mov edx, ecx */
    PUSH32(esp, esi); /* 0x10071BF3: push esi */
    esi = MEM32(ebp + 0xC); /* 0x10071BF4: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x10071BF7: push edi */
    MEM32(ebp + (-0x4)) = edx; /* 0x10071BF8: mov dword ptr [ebp - 4], edx */
L_10071BFB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x10071BFB: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(ebp + 0xF) = (uint8_t)(0); /* 0x10071BFD: mov byte ptr [ebp + 0xf], 0 */
    MEM32(ebp + (-0x8)) = edi; /* 0x10071C01: mov dword ptr [ebp - 8], edi */
    /* test esi, esi */ /* 0x10071C04: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10071C92; /* 0x10071C06: je 0x10071c92 */
L_10071C0C:
    /* test ebx, ebx */ /* 0x10071C0C: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10071C85; /* 0x10071C0E: je 0x10071c85 */
L_10071C10:
    eax = MEM32(edx + 0x5C); /* 0x10071C10: mov eax, dword ptr [edx + 0x5c] */
    edi = MEM32(eax + edi * 4); /* 0x10071C13: mov edi, dword ptr [eax + edi*4] */
    /* cmp MEM32(edi + 0x4), 0 */ /* 0x10071C16: cmp dword ptr [edi + 4], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_10071C7A; /* 0x10071C1A: jbe 0x10071c7a */
L_10071C1C:
    ecx = MEM32(edi + 0x2C); /* 0x10071C1C: mov ecx, dword ptr [edi + 0x2c] */
    /* cmp MEM32(edi + 0x28), ecx */ /* 0x10071C1F: cmp dword ptr [edi + 0x28], ecx */
    _flag_a = (uint32_t)(MEM32(edi + 0x28)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_10071C7A; /* 0x10071C22: jbe 0x10071c7a */
L_10071C24:
    eax = MEM32(edi + 0x10); /* 0x10071C24: mov eax, dword ptr [edi + 0x10] */
    MEM8(ebp + 0xF) = (uint8_t)(1); /* 0x10071C27: mov byte ptr [ebp + 0xf], 1 */
    eax = MEM32(eax + 0x14); /* 0x10071C2B: mov eax, dword ptr [eax + 0x14] */
    eax = MEM32(eax + ecx * 4); /* 0x10071C2E: mov eax, dword ptr [eax + ecx*4] */
    ecx = MEM32(edi + 0x10); /* 0x10071C31: mov ecx, dword ptr [edi + 0x10] */
    MEM32(ebp + 0x8) = eax; /* 0x10071C34: mov dword ptr [ebp + 8], eax */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x34u); /* 0x10071C37: imul eax, eax, 0x34 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x10));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + 0x10); /* 0x10071C3A: add eax, dword ptr [ecx + 0x10] */
    _flag_k = FK_ADD;
    ecx = (uint32_t)((int32_t)MEM32(ebp + 0x8) * (int32_t)0x28u); /* 0x10071C3D: imul ecx, dword ptr [ebp + 8], 0x28 */
    MEM32(ebp + (-0xC)) = eax; /* 0x10071C41: mov dword ptr [ebp - 0xc], eax */
    eax = MEM32(edx + 0x48); /* 0x10071C44: mov eax, dword ptr [edx + 0x48] */
    /* cmp MEM32(ecx + eax + 0x1C), 0 */ /* 0x10071C47: cmp dword ptr [ecx + eax + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + eax + 0x1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_10071C77; /* 0x10071C4C: jbe 0x10071c77 */
L_10071C4E:
    eax = MEM32(edi + 0x10); /* 0x10071C4E: mov eax, dword ptr [edi + 0x10] */
    ecx = edx; /* 0x10071C51: mov ecx, edx */
    PUSH32(esp, 1); /* 0x10071C53: push 1 */
    PUSH32(esp, 1); /* 0x10071C55: push 1 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10071C57: push dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x10071C5A: push eax */
    RECOMP_CALL(sub_10071371); /* 0x10071C5B: call 0x10071371 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xC)); /* 0x10071C60: mov ecx, dword ptr [ebp - 0xc] */
    eax = MEM32(ecx + 0x1C); /* 0x10071C63: mov eax, dword ptr [ecx + 0x1c] */
    /* cmp eax, MEM32(ecx + 0x4) */ /* 0x10071C66: cmp eax, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10071C6E; /* 0x10071C69: jne 0x10071c6e */
L_10071C6B:
    _flag_a = (uint32_t)(MEM32(edi + 0x2C)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x2C) = MEM32(edi + 0x2C) + 1; /* 0x10071C6B: inc dword ptr [edi + 0x2c] */
    _flag_k = FK_INC;
L_10071C6E:
    _flag_a = (uint32_t)(MEM32(edi + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x4) = MEM32(edi + 0x4) - 1; /* 0x10071C6E: dec dword ptr [edi + 4] */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x10071C71: dec ebx */
    _flag_k = FK_DEC;
    edx = MEM32(ebp + (-0x4)); /* 0x10071C72: mov edx, dword ptr [ebp - 4] */
    goto L_10071C7A; /* 0x10071C75: jmp 0x10071c7a */
L_10071C77:
    _flag_a = (uint32_t)(MEM32(edi + 0x2C)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x2C) = MEM32(edi + 0x2C) + 1; /* 0x10071C77: inc dword ptr [edi + 0x2c] */
    _flag_k = FK_INC;
L_10071C7A:
    edi = MEM32(ebp + (-0x8)); /* 0x10071C7A: mov edi, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x10071C7D: inc edi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x8)) = edi; /* 0x10071C7E: mov dword ptr [ebp - 8], edi */
    /* cmp edi, esi */ /* 0x10071C81: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_10071C0C; /* 0x10071C83: jb 0x10071c0c */
L_10071C85:
    /* cmp MEM8(ebp + 0xF), 0 */ /* 0x10071C85: cmp byte ptr [ebp + 0xf], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0xF)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM32(ebp + 0x8) = ebx; /* 0x10071C89: mov dword ptr [ebp + 8], ebx */
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_10071BFB; /* 0x10071C8C: jne 0x10071bfb */
L_10071C92:
    /* test ebx, ebx */ /* 0x10071C92: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10071D64; /* 0x10071C94: je 0x10071d64 */
L_10071C9A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x10071C9A: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xC)) = edi; /* 0x10071C9C: mov dword ptr [ebp - 0xc], edi */
    /* test esi, esi */ /* 0x10071C9F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10071D21; /* 0x10071CA1: je 0x10071d21 */
L_10071CA3:
    ecx = edi + 0x1; /* 0x10071CA3: lea ecx, [edi + 1] */
    MEM32(ebp + 0xC) = edi; /* 0x10071CA6: mov dword ptr [ebp + 0xc], edi */
    MEM32(ebp + (-0x8)) = ecx; /* 0x10071CA9: mov dword ptr [ebp - 8], ecx */
    MEM32(ebp + (-0x10)) = ecx; /* 0x10071CAC: mov dword ptr [ebp - 0x10], ecx */
    /* cmp ecx, esi */ /* 0x10071CAF: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_10071D08; /* 0x10071CB1: jae 0x10071d08 */
L_10071CB3:
    ebx = MEM32(edx + 0x5C); /* 0x10071CB3: mov ebx, dword ptr [edx + 0x5c] */
    edx = ecx; /* 0x10071CB6: mov edx, ecx */
    if (2u) _cf = (((edi) >> 30) & 1u); /* 0x10071CB8: shl edi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edi << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 2u; /* 0x10071CB8: shl edi, 2 */
L_10071CBB:
    eax = MEM32(ebx + edx * 4); /* 0x10071CBB: mov eax, dword ptr [ebx + edx*4] */
    ecx = MEM32(edi + ebx); /* 0x10071CBE: mov ecx, dword ptr [edi + ebx] */
    eax = MEM32(eax + 0x4); /* 0x10071CC1: mov eax, dword ptr [eax + 4] */
    /* cmp eax, MEM32(ecx + 0x4) */ /* 0x10071CC4: cmp eax, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_10071CD5; /* 0x10071CC7: jbe 0x10071cd5 */
L_10071CC9:
    eax = edx; /* 0x10071CC9: mov eax, edx */
    edi = edx; /* 0x10071CCB: mov edi, edx */
    MEM32(ebp + 0xC) = eax; /* 0x10071CCD: mov dword ptr [ebp + 0xc], eax */
    if (2u) _cf = (((edi) >> 30) & 1u); /* 0x10071CD0: shl edi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edi << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 2u; /* 0x10071CD0: shl edi, 2 */
    goto L_10071CD8; /* 0x10071CD3: jmp 0x10071cd8 */
L_10071CD5:
    eax = MEM32(ebp + 0xC); /* 0x10071CD5: mov eax, dword ptr [ebp + 0xc] */
L_10071CD8:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x10071CD8: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, esi */ /* 0x10071CD9: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_10071CBB; /* 0x10071CDB: jb 0x10071cbb */
L_10071CDD:
    edi = MEM32(ebp + (-0xC)); /* 0x10071CDD: mov edi, dword ptr [ebp - 0xc] */
    ebx = MEM32(ebp + 0x8); /* 0x10071CE0: mov ebx, dword ptr [ebp + 8] */
    edx = MEM32(ebp + (-0x4)); /* 0x10071CE3: mov edx, dword ptr [ebp - 4] */
    /* cmp edi, eax */ /* 0x10071CE6: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10071D05; /* 0x10071CE8: je 0x10071d05 */
L_10071CEA:
    ecx = MEM32(edx + 0x5C); /* 0x10071CEA: mov ecx, dword ptr [edx + 0x5c] */
    eax = MEM32(ecx + eax * 4); /* 0x10071CED: mov eax, dword ptr [ecx + eax*4] */
    edx = MEM32(ecx + edi * 4); /* 0x10071CF0: mov edx, dword ptr [ecx + edi*4] */
    MEM32(ecx + edi * 4) = eax; /* 0x10071CF3: mov dword ptr [ecx + edi*4], eax */
    eax = MEM32(ebp + (-0x4)); /* 0x10071CF6: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(ebp + 0xC); /* 0x10071CF9: mov ecx, dword ptr [ebp + 0xc] */
    eax = MEM32(eax + 0x5C); /* 0x10071CFC: mov eax, dword ptr [eax + 0x5c] */
    MEM32(eax + ecx * 4) = edx; /* 0x10071CFF: mov dword ptr [eax + ecx*4], edx */
    edx = MEM32(ebp + (-0x4)); /* 0x10071D02: mov edx, dword ptr [ebp - 4] */
L_10071D05:
    ecx = MEM32(ebp + (-0x8)); /* 0x10071D05: mov ecx, dword ptr [ebp - 8] */
L_10071D08:
    eax = MEM32(edx + 0x5C); /* 0x10071D08: mov eax, dword ptr [edx + 0x5c] */
    eax = MEM32(eax + edi * 4); /* 0x10071D0B: mov eax, dword ptr [eax + edi*4] */
    /* cmp MEM32(eax + 0x4), 0 */ /* 0x10071D0E: cmp dword ptr [eax + 4], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10071D1F; /* 0x10071D12: je 0x10071d1f */
L_10071D14:
    edi = ecx; /* 0x10071D14: mov edi, ecx */
    MEM32(ebp + (-0xC)) = edi; /* 0x10071D16: mov dword ptr [ebp - 0xc], edi */
    /* cmp edi, esi */ /* 0x10071D19: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_10071D21; /* 0x10071D1B: jae 0x10071d21 */
L_10071D1D:
    RECOMP_BACKEDGE();
    goto L_10071CA3; /* 0x10071D1D: jmp 0x10071ca3 */
L_10071D1F:
    esi = edi; /* 0x10071D1F: mov esi, edi */
L_10071D21:
    eax = esi; /* 0x10071D21: mov eax, esi */
    MEM32(ebp + 0xC) = eax; /* 0x10071D23: mov dword ptr [ebp + 0xc], eax */
L_10071D26:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x10071D26: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x10071D28: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10071D60; /* 0x10071D2A: je 0x10071d60 */
L_10071D2C:
    /* test ebx, ebx */ /* 0x10071D2C: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10071D64; /* 0x10071D2E: je 0x10071d64 */
L_10071D30:
    eax = MEM32(edx + 0x5C); /* 0x10071D30: mov eax, dword ptr [edx + 0x5c] */
    eax = MEM32(eax + edi * 4); /* 0x10071D33: mov eax, dword ptr [eax + edi*4] */
    MEM32(ebp + 0x8) = eax; /* 0x10071D36: mov dword ptr [ebp + 8], eax */
    /* cmp MEM32(eax + 0x4), 0 */ /* 0x10071D39: cmp dword ptr [eax + 4], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_10071D58; /* 0x10071D3D: jbe 0x10071d58 */
L_10071D3F:
    PUSH32(esp, esi); /* 0x10071D3F: push esi */
    PUSH32(esp, eax); /* 0x10071D40: push eax */
    PUSH32(esp, ebx); /* 0x10071D41: push ebx */
    ecx = edx; /* 0x10071D42: mov ecx, edx */
    RECOMP_CALL(sub_10071AD9); /* 0x10071D44: call 0x10071ad9 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x4)); /* 0x10071D49: mov edx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - eax; /* 0x10071D4C: sub ebx, eax */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x8); /* 0x10071D4E: mov eax, dword ptr [ebp + 8] */
    /* cmp MEM32(eax + 0x4), 0 */ /* 0x10071D51: cmp dword ptr [eax + 4], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10071D58; /* 0x10071D55: jne 0x10071d58 */
L_10071D57:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x10071D57: dec esi */
    _flag_k = FK_DEC;
L_10071D58:
    eax = MEM32(ebp + 0xC); /* 0x10071D58: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x10071D5B: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, eax */ /* 0x10071D5C: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_10071D2C; /* 0x10071D5E: jb 0x10071d2c */
L_10071D60:
    /* test ebx, ebx */ /* 0x10071D60: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10071D26; /* 0x10071D62: jne 0x10071d26 */
L_10071D64:
    edi = POP32_VAL(esp); /* 0x10071D64: pop edi */
    esi = POP32_VAL(esp); /* 0x10071D65: pop esi */
    ebx = POP32_VAL(esp); /* 0x10071D66: pop ebx */
    esp = ebp; /* 0x10071D67: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10071D69: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x10071D6A: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_10071D6D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10071D6Du);

L_10071D6D:
    PUSH32(esp, ebp); /* 0x10071D6D: push ebp */
    ebp = esp; /* 0x10071D6E: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x10071D70: sub esp, 0x1c */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x10071D73: push ebx */
    PUSH32(esp, esi); /* 0x10071D74: push esi */
    PUSH32(esp, edi); /* 0x10071D75: push edi */
    edi = ecx; /* 0x10071D76: mov edi, ecx */
    RECOMP_CALL(sub_10070C67); /* 0x10071D78: call 0x10070c67 */
    RECOMP_FLAGS_IN();
    ecx = edi; /* 0x10071D7D: mov ecx, edi */
    RECOMP_CALL(sub_10070FCE); /* 0x10071D7F: call 0x10070fce */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x10071D84: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10071D88: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10071D8A: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = ecx; /* 0x10071D8C: mov dword ptr [ebp - 0x14], ecx */
    /* cmp MEM32(edi + 0x8), ecx */ /* 0x10071D8F: cmp dword ptr [edi + 8], ecx */
    _flag_a = (uint32_t)(MEM32(edi + 0x8)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_10071E2D; /* 0x10071D92: jbe 0x10071e2d */
L_10071D98:
    eax = MEM32(edi + 0x54); /* 0x10071D98: mov eax, dword ptr [edi + 0x54] */
    edx = MEM32(eax + ebx * 4); /* 0x10071D9B: mov edx, dword ptr [eax + ebx*4] */
    eax = MEM32(edx + 0x10); /* 0x10071D9E: mov eax, dword ptr [edx + 0x10] */
    eax = MEM32(eax + 0xA0); /* 0x10071DA1: mov eax, dword ptr [eax + 0xa0] */
    /* cmp eax, MEM32(edx + 0x24) */ /* 0x10071DA7: cmp eax, dword ptr [edx + 0x24] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x24));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_10071E23; /* 0x10071DAA: jbe 0x10071e23 */
L_10071DAC:
    eax = MEM32(edi + 0x58); /* 0x10071DAC: mov eax, dword ptr [edi + 0x58] */
    MEM32(eax + ecx * 4) = edx; /* 0x10071DAF: mov dword ptr [eax + ecx*4], edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x10071DB2: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x14)) = ecx; /* 0x10071DB3: mov dword ptr [ebp - 0x14], ecx */
    ecx = MEM32(edx + 0x10); /* 0x10071DB6: mov ecx, dword ptr [edx + 0x10] */
    esi = MEM32(ecx + 0xA0); /* 0x10071DB9: mov esi, dword ptr [ecx + 0xa0] */
    eax = esi; /* 0x10071DBF: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x24));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(edx + 0x24); /* 0x10071DC1: sub eax, dword ptr [edx + 0x24] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) + eax; /* 0x10071DC4: add dword ptr [ebp - 8], eax */
    _flag_k = FK_ADD;
    eax = esi; /* 0x10071DC7: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x24));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(edx + 0x24); /* 0x10071DC9: sub eax, dword ptr [edx + 0x24] */
    _flag_k = FK_CMP;
    /* cmp MEM32(edx + 0x18), eax */ /* 0x10071DCC: cmp dword ptr [edx + 0x18], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x18)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_10071DD6; /* 0x10071DCF: jae 0x10071dd6 */
L_10071DD1:
    esi = MEM32(edx + 0x18); /* 0x10071DD1: mov esi, dword ptr [edx + 0x18] */
    goto L_10071DD9; /* 0x10071DD4: jmp 0x10071dd9 */
L_10071DD6:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edx + 0x24));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - MEM32(edx + 0x24); /* 0x10071DD6: sub esi, dword ptr [edx + 0x24] */
    _flag_k = FK_CMP;
L_10071DD9:
    MEM32(edx + 0x28) = esi; /* 0x10071DD9: mov dword ptr [edx + 0x28], esi */
    eax = MEM32(ecx + 0xA8); /* 0x10071DDC: mov eax, dword ptr [ecx + 0xa8] */
    ecx = MEM32(ecx + 0xA0); /* 0x10071DE2: mov ecx, dword ptr [ecx + 0xa0] */
    MEM32(ebp + (-0xC)) = ecx; /* 0x10071DE8: mov dword ptr [ebp - 0xc], ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edx + 0x24));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(edx + 0x24); /* 0x10071DEB: sub ecx, dword ptr [edx + 0x24] */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x10)) = eax; /* 0x10071DEE: mov dword ptr [ebp - 0x10], eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x10071DF1: sub ecx, esi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x18));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(edx + 0x18); /* 0x10071DF3: sub eax, dword ptr [edx + 0x18] */
    _flag_k = FK_CMP;
    /* cmp eax, ecx */ /* 0x10071DF6: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_10071E02; /* 0x10071DF8: jae 0x10071e02 */
L_10071DFA:
    ecx = MEM32(ebp + (-0x10)); /* 0x10071DFA: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edx + 0x18));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(edx + 0x18); /* 0x10071DFD: sub ecx, dword ptr [edx + 0x18] */
    _flag_k = FK_CMP;
    goto L_10071E0A; /* 0x10071E00: jmp 0x10071e0a */
L_10071E02:
    ecx = MEM32(ebp + (-0xC)); /* 0x10071E02: mov ecx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edx + 0x24));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(edx + 0x24); /* 0x10071E05: sub ecx, dword ptr [edx + 0x24] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x10071E08: sub ecx, esi */
    _flag_k = FK_CMP;
L_10071E0A:
    eax = MEM32(edx + 0x10); /* 0x10071E0A: mov eax, dword ptr [edx + 0x10] */
    MEM32(edx + 0x2C) = ecx; /* 0x10071E0D: mov dword ptr [edx + 0x2c], ecx */
    eax = MEM32(eax + 0xA0); /* 0x10071E10: mov eax, dword ptr [eax + 0xa0] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x24));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(edx + 0x24); /* 0x10071E16: sub eax, dword ptr [edx + 0x24] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x10071E19: sub eax, ecx */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + (-0x14)); /* 0x10071E1B: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x10071E1E: sub eax, esi */
    _flag_k = FK_CMP;
    MEM32(edx + 0x30) = eax; /* 0x10071E20: mov dword ptr [edx + 0x30], eax */
L_10071E23:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x10071E23: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, MEM32(edi + 0x8) */ /* 0x10071E24: cmp ebx, dword ptr [edi + 8] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(edi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_10071D98; /* 0x10071E27: jb 0x10071d98 */
L_10071E2D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10071E2D: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x10071E2F: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(edi + 0x20)); _flag_b = (uint32_t)(ecx);
    MEM32(edi + 0x20) = MEM32(edi + 0x20) & ecx; /* 0x10071E31: and dword ptr [edi + 0x20], ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ecx; /* 0x10071E34: mov dword ptr [ebp - 4], ecx */
    MEM32(ebp + (-0x10)) = edx; /* 0x10071E37: mov dword ptr [ebp - 0x10], edx */
    /* cmp MEM32(edi + 0x18), ecx */ /* 0x10071E3A: cmp dword ptr [edi + 0x18], ecx */
    _flag_a = (uint32_t)(MEM32(edi + 0x18)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_10071EA8; /* 0x10071E3D: jbe 0x10071ea8 */
L_10071E3F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x10071E3F: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xC)) = esi; /* 0x10071E41: mov dword ptr [ebp - 0xc], esi */
L_10071E44:
    eax = MEM32(edi + 0x48); /* 0x10071E44: mov eax, dword ptr [edi + 0x48] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x18)) = MEM32(ebp + (-0x18)) & 0; /* 0x10071E47: and dword ptr [ebp - 0x18], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x10071E4B: add eax, esi */
    _flag_k = FK_ADD;
    /* cmp MEM32(eax + 0x4), 0 */ /* 0x10071E4D: cmp dword ptr [eax + 4], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_10071E99; /* 0x10071E51: jbe 0x10071e99 */
L_10071E53:
    edx = MEM32(ebp + (-0x18)); /* 0x10071E53: mov edx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10071E56: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_10071E58:
    ecx = MEM32(eax + 0x20); /* 0x10071E58: mov ecx, dword ptr [eax + 0x20] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ebx; /* 0x10071E5B: add ecx, ebx */
    _flag_k = FK_ADD;
    esi = MEM32(ecx + 0x10); /* 0x10071E5D: mov esi, dword ptr [ecx + 0x10] */
    /* test esi, esi */ /* 0x10071E60: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10071E76; /* 0x10071E62: jne 0x10071e76 */
L_10071E64:
    MEM32(ecx) = 2; /* 0x10071E64: mov dword ptr [ecx], 2 */
    ecx = MEM32(ebp + (-0x4)); /* 0x10071E6A: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x8) = MEM32(eax + 0x8) + 1; /* 0x10071E6D: inc dword ptr [eax + 8] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x10071E70: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x4)) = ecx; /* 0x10071E71: mov dword ptr [ebp - 4], ecx */
    goto L_10071E8A; /* 0x10071E74: jmp 0x10071e8a */
L_10071E76:
    /* cmp esi, MEM32(ecx + 0x1C) */ /* 0x10071E76: cmp esi, dword ptr [ecx + 0x1c] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ecx + 0x1C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10071E87; /* 0x10071E79: jne 0x10071e87 */
L_10071E7B:
    MEM32(ecx) = 6; /* 0x10071E7B: mov dword ptr [ecx], 6 */
    _flag_a = (uint32_t)(MEM32(eax + 0x1C)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x1C) = MEM32(eax + 0x1C) + 1; /* 0x10071E81: inc dword ptr [eax + 0x1c] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(edi + 0x20)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x20) = MEM32(edi + 0x20) + 1; /* 0x10071E84: inc dword ptr [edi + 0x20] */
    _flag_k = FK_INC;
L_10071E87:
    ecx = MEM32(ebp + (-0x4)); /* 0x10071E87: mov ecx, dword ptr [ebp - 4] */
L_10071E8A:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x10071E8A: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x24u; /* 0x10071E8B: add ebx, 0x24 */
    _flag_k = FK_ADD;
    /* cmp edx, MEM32(eax + 0x4) */ /* 0x10071E8E: cmp edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(eax + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_10071E58; /* 0x10071E91: jb 0x10071e58 */
L_10071E93:
    edx = MEM32(ebp + (-0x10)); /* 0x10071E93: mov edx, dword ptr [ebp - 0x10] */
    esi = MEM32(ebp + (-0xC)); /* 0x10071E96: mov esi, dword ptr [ebp - 0xc] */
L_10071E99:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x10071E99: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x28u; /* 0x10071E9A: add esi, 0x28 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x10)) = edx; /* 0x10071E9D: mov dword ptr [ebp - 0x10], edx */
    MEM32(ebp + (-0xC)) = esi; /* 0x10071EA0: mov dword ptr [ebp - 0xc], esi */
    /* cmp edx, MEM32(edi + 0x18) */ /* 0x10071EA3: cmp edx, dword ptr [edi + 0x18] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(edi + 0x18));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_10071E44; /* 0x10071EA6: jb 0x10071e44 */
L_10071EA8:
    eax = MEM32(ebp + (-0x8)); /* 0x10071EA8: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x10071EAB: add eax, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(edi + 0x24)); _flag_b = (uint32_t)(0);
    MEM32(edi + 0x24) = MEM32(edi + 0x24) & 0; /* 0x10071EAD: and dword ptr [edi + 0x24], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x10071EB1: mov dword ptr [ebp - 0x10], eax */
L_10071EB4:
    /* test eax, eax */ /* 0x10071EB4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10071EC1; /* 0x10071EB6: jne 0x10071ec1 */
L_10071EB8:
    /* cmp MEM32(edi + 0x20), eax */ /* 0x10071EB8: cmp dword ptr [edi + 0x20], eax */
    _flag_a = (uint32_t)(MEM32(edi + 0x20)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_10071FDA; /* 0x10071EBB: jbe 0x10071fda */
L_10071EC1:
    /* cmp MEM32(edi + 0x24), 2 */ /* 0x10071EC1: cmp dword ptr [edi + 0x24], 2 */
    _flag_a = (uint32_t)(MEM32(edi + 0x24)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_10071FDA; /* 0x10071EC5: jae 0x10071fda */
L_10071ECB:
    /* cmp MEM32(edi + 0x24), 1 */ /* 0x10071ECB: cmp dword ptr [edi + 0x24], 1 */
    _flag_a = (uint32_t)(MEM32(edi + 0x24)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10071EFE; /* 0x10071ECF: jne 0x10071efe */
L_10071ED1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x10071ED1: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edi + 0x8), esi */ /* 0x10071ED3: cmp dword ptr [edi + 8], esi */
    _flag_a = (uint32_t)(MEM32(edi + 0x8)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_10071EFE; /* 0x10071ED6: jbe 0x10071efe */
L_10071ED8:
    eax = MEM32(edi + 0x54); /* 0x10071ED8: mov eax, dword ptr [edi + 0x54] */
    ebx = MEM32(eax + esi * 4); /* 0x10071EDB: mov ebx, dword ptr [eax + esi*4] */
    /* cmp MEM8(ebx + 0x21), 1 */ /* 0x10071EDE: cmp byte ptr [ebx + 0x21], 1 */
    _flag_a = (uint32_t)(MEM8(ebx + 0x21)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_10071EF8; /* 0x10071EE2: jne 0x10071ef8 */
L_10071EE4:
    ecx = MEM32(ebx + 0x10); /* 0x10071EE4: mov ecx, dword ptr [ebx + 0x10] */
    RECOMP_CALL(sub_10027A0B); /* 0x10071EE7: call 0x10027a0b */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx + 0x10); /* 0x10071EEC: mov ecx, dword ptr [ebx + 0x10] */
    PUSH32(esp, eax); /* 0x10071EEF: push eax */
    RECOMP_CALL(sub_10075D9F); /* 0x10071EF0: call 0x10075d9f */
    RECOMP_FLAGS_IN();
    MEM32(ebx + 0x24) = eax; /* 0x10071EF5: mov dword ptr [ebx + 0x24], eax */
L_10071EF8:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10071EF8: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(edi + 0x8) */ /* 0x10071EF9: cmp esi, dword ptr [edi + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_10071ED8; /* 0x10071EFC: jb 0x10071ed8 */
L_10071EFE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10071EFE: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10071F00: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x10071F02: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xC)) = ecx; /* 0x10071F04: mov dword ptr [ebp - 0xc], ecx */
    /* cmp MEM32(edi + 0x8), ecx */ /* 0x10071F07: cmp dword ptr [edi + 8], ecx */
    _flag_a = (uint32_t)(MEM32(edi + 0x8)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_10071FCF; /* 0x10071F0A: jbe 0x10071fcf */
L_10071F10:
    eax = MEM32(edi + 0x54); /* 0x10071F10: mov eax, dword ptr [edi + 0x54] */
    esi = MEM32(eax + edx * 4); /* 0x10071F13: mov esi, dword ptr [eax + edx*4] */
    eax = MEM32(esi + 0x10); /* 0x10071F16: mov eax, dword ptr [esi + 0x10] */
    eax = MEM32(eax + 0xA0); /* 0x10071F19: mov eax, dword ptr [eax + 0xa0] */
    /* cmp eax, MEM32(esi + 0x24) */ /* 0x10071F1F: cmp eax, dword ptr [esi + 0x24] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x24));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_10071F3F; /* 0x10071F22: jae 0x10071f3f */
L_10071F24:
    eax = MEM32(edi + 0x5C); /* 0x10071F24: mov eax, dword ptr [edi + 0x5c] */
    MEM32(eax + ecx * 4) = esi; /* 0x10071F27: mov dword ptr [eax + ecx*4], esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x10071F2A: inc ecx */
    _flag_k = FK_INC;
    eax = MEM32(esi + 0x10); /* 0x10071F2B: mov eax, dword ptr [esi + 0x10] */
    MEM32(ebp + (-0xC)) = ecx; /* 0x10071F2E: mov dword ptr [ebp - 0xc], ecx */
    ecx = MEM32(esi + 0x24); /* 0x10071F31: mov ecx, dword ptr [esi + 0x24] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0xA0));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(eax + 0xA0); /* 0x10071F34: sub ecx, dword ptr [eax + 0xa0] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + ecx; /* 0x10071F3A: add ebx, ecx */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0xC)); /* 0x10071F3C: mov ecx, dword ptr [ebp - 0xc] */
L_10071F3F:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x10071F3F: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, MEM32(edi + 0x8) */ /* 0x10071F40: cmp edx, dword ptr [edi + 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(edi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_10071F10; /* 0x10071F43: jb 0x10071f10 */
L_10071F45:
    /* test ecx, ecx */ /* 0x10071F45: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10071FCF; /* 0x10071F47: je 0x10071fcf */
L_10071F4D:
    eax = MEM32(ebp + (-0x10)); /* 0x10071F4D: mov eax, dword ptr [ebp - 0x10] */
    /* test eax, eax */ /* 0x10071F50: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10071FA1; /* 0x10071F52: je 0x10071fa1 */
L_10071F54:
    PUSH32(esp, ecx); /* 0x10071F54: push ecx */
    PUSH32(esp, ebx); /* 0x10071F55: push ebx */
    PUSH32(esp, eax); /* 0x10071F56: push eax */
    ecx = edi; /* 0x10071F57: mov ecx, edi */
    RECOMP_CALL(sub_1007108F); /* 0x10071F59: call 0x1007108f */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x10071F5E: push dword ptr [ebp - 0xc] */
    ecx = edi; /* 0x10071F61: mov ecx, edi */
    esi = eax; /* 0x10071F63: mov esi, eax */
    RECOMP_CALL(sub_10071162); /* 0x10071F65: call 0x10071162 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x4)); /* 0x10071F6A: mov edx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10071F6D: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, esi */ /* 0x10071F6F: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_10071F75; /* 0x10071F71: jb 0x10071f75 */
L_10071F73:
    edx = esi; /* 0x10071F73: mov edx, esi */
L_10071F75:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) - edx; /* 0x10071F75: sub dword ptr [ebp - 4], edx */
    _flag_k = FK_CMP;
    /* cmp edx, esi */ /* 0x10071F78: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_10071F8B; /* 0x10071F7A: jae 0x10071f8b */
L_10071F7C:
    ecx = esi; /* 0x10071F7C: mov ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x10071F7E: sub ecx, edx */
    _flag_k = FK_CMP;
    /* cmp ecx, MEM32(ebp + (-0x8)) */ /* 0x10071F80: cmp ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_10071F88; /* 0x10071F83: jb 0x10071f88 */
L_10071F85:
    ecx = MEM32(ebp + (-0x8)); /* 0x10071F85: mov ecx, dword ptr [ebp - 8] */
L_10071F88:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) - ecx; /* 0x10071F88: sub dword ptr [ebp - 8], ecx */
    _flag_k = FK_CMP;
L_10071F8B:
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x10071F8B: push dword ptr [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x10071F8E: push eax */
    PUSH32(esp, ecx); /* 0x10071F8F: push ecx */
    PUSH32(esp, edx); /* 0x10071F90: push edx */
    PUSH32(esp, esi); /* 0x10071F91: push esi */
    ecx = edi; /* 0x10071F92: mov ecx, edi */
    RECOMP_CALL(sub_10071997); /* 0x10071F94: call 0x10071997 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) - esi; /* 0x10071F99: sub dword ptr [ebp - 0x10], esi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - esi; /* 0x10071F9C: sub ebx, esi */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + (-0xC)); /* 0x10071F9E: mov ecx, dword ptr [ebp - 0xc] */
L_10071FA1:
    /* test ebx, ebx */ /* 0x10071FA1: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10071FCF; /* 0x10071FA3: je 0x10071fcf */
L_10071FA5:
    /* cmp MEM32(edi + 0x20), 0 */ /* 0x10071FA5: cmp dword ptr [edi + 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x20)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_10071FCF; /* 0x10071FA9: jbe 0x10071fcf */
L_10071FAB:
    PUSH32(esp, ecx); /* 0x10071FAB: push ecx */
    PUSH32(esp, ebx); /* 0x10071FAC: push ebx */
    PUSH32(esp, MEM32(edi + 0x20)); /* 0x10071FAD: push dword ptr [edi + 0x20] */
    ecx = edi; /* 0x10071FB0: mov ecx, edi */
    RECOMP_CALL(sub_1007108F); /* 0x10071FB2: call 0x1007108f */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x10071FB7: push dword ptr [ebp - 0xc] */
    ecx = edi; /* 0x10071FBA: mov ecx, edi */
    esi = eax; /* 0x10071FBC: mov esi, eax */
    RECOMP_CALL(sub_10071162); /* 0x10071FBE: call 0x10071162 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x10071FC3: push eax */
    PUSH32(esp, esi); /* 0x10071FC4: push esi */
    ecx = edi; /* 0x10071FC5: mov ecx, edi */
    RECOMP_CALL(sub_10071BE7); /* 0x10071FC7: call 0x10071be7 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(edi + 0x20)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(edi + 0x20) = MEM32(edi + 0x20) - esi; /* 0x10071FCC: sub dword ptr [edi + 0x20], esi */
    _flag_k = FK_CMP;
L_10071FCF:
    _flag_a = (uint32_t)(MEM32(edi + 0x24)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x24) = MEM32(edi + 0x24) + 1; /* 0x10071FCF: inc dword ptr [edi + 0x24] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + (-0x10)); /* 0x10071FD2: mov eax, dword ptr [ebp - 0x10] */
    RECOMP_BACKEDGE();
    goto L_10071EB4; /* 0x10071FD5: jmp 0x10071eb4 */
L_10071FDA:
    ecx = edi; /* 0x10071FDA: mov ecx, edi */
    RECOMP_CALL(sub_1002477A); /* 0x10071FDC: call 0x1002477a */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x10071FE1: pop edi */
    esi = POP32_VAL(esp); /* 0x10071FE2: pop esi */
    ebx = POP32_VAL(esp); /* 0x10071FE3: pop ebx */
    esp = ebp; /* 0x10071FE4: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10071FE6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10071FE7: ret  */
    RECOMP_REGS_OUT();
}

void sub_10071FE8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10071FE8u);

L_10071FE8:
    PUSH32(esp, ebp); /* 0x10071FE8: push ebp */
    ebp = esp; /* 0x10071FE9: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x10071FEB: sub esp, 0x20 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x10071FEE: push ebx */
    PUSH32(esp, esi); /* 0x10071FEF: push esi */
    PUSH32(esp, edi); /* 0x10071FF0: push edi */
    edi = ecx; /* 0x10071FF1: mov edi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10071FF3: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x30u); /* 0x10071FF5: push 0x30 */
    ecx = ebx; /* 0x10071FF7: mov ecx, ebx */
    eax = POP32_VAL(esp); /* 0x10071FF9: pop eax */
    MEM32(ebp + (-0x18)) = ecx; /* 0x10071FFA: mov dword ptr [ebp - 0x18], ecx */
    MEM32(ebp + (-0x10)) = eax; /* 0x10071FFD: mov dword ptr [ebp - 0x10], eax */
    /* cmp MEM32(edi + 0x18), ebx */ /* 0x10072000: cmp dword ptr [edi + 0x18], ebx */
    _flag_a = (uint32_t)(MEM32(edi + 0x18)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_100720B8; /* 0x10072003: jbe 0x100720b8 */
L_10072009:
    esi = ebx; /* 0x10072009: mov esi, ebx */
    MEM32(ebp + (-0xC)) = eax; /* 0x1007200B: mov dword ptr [ebp - 0xc], eax */
    MEM32(ebp + (-0x1C)) = esi; /* 0x1007200E: mov dword ptr [ebp - 0x1c], esi */
    edx = eax; /* 0x10072011: mov edx, eax */
L_10072013:
    eax = MEM32(edi + 0x48); /* 0x10072013: mov eax, dword ptr [edi + 0x48] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x10072016: add eax, esi */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = ebx; /* 0x10072018: mov dword ptr [ebp - 4], ebx */
    /* cmp MEM32(eax + 0x4), ebx */ /* 0x1007201B: cmp dword ptr [eax + 4], ebx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1007209F; /* 0x1007201E: jbe 0x1007209f */
L_10072020:
    edx = ebx; /* 0x10072020: mov edx, ebx */
    MEM32(ebp + (-0x8)) = ebx; /* 0x10072022: mov dword ptr [ebp - 8], ebx */
    MEM32(ebp + (-0x14)) = edx; /* 0x10072025: mov dword ptr [ebp - 0x14], edx */
    ecx = ebx; /* 0x10072028: mov ecx, ebx */
L_1007202A:
    ebx = MEM32(eax + 0x20); /* 0x1007202A: mov ebx, dword ptr [eax + 0x20] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + edx; /* 0x1007202D: add ebx, edx */
    _flag_k = FK_ADD;
    eax = MEM32(ebx + 0x14); /* 0x1007202F: mov eax, dword ptr [ebx + 0x14] */
    _flag_a = (uint32_t)(MEM32(ebx + 0x14)); _flag_b = (uint32_t)(0);
    MEM32(ebx + 0x14) = MEM32(ebx + 0x14) & 0; /* 0x10072032: and dword ptr [ebx + 0x14], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebx + 0x18) = eax; /* 0x10072036: mov dword ptr [ebx + 0x18], eax */
    edx = MEM32(edi + 0x64); /* 0x10072039: mov edx, dword ptr [edi + 0x64] */
    /* test edx, edx */ /* 0x1007203C: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10072045; /* 0x1007203E: je 0x10072045 */
L_10072040:
    edx = MEM32(edx + 0x18); /* 0x10072040: mov edx, dword ptr [edx + 0x18] */
    goto L_10072047; /* 0x10072043: jmp 0x10072047 */
L_10072045:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x10072045: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
L_10072047:
    /* test edx, edx */ /* 0x10072047: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007207C; /* 0x10072049: je 0x1007207c */
L_1007204B:
    esi = MEM32(ebp + (-0xC)); /* 0x1007204B: mov esi, dword ptr [ebp - 0xc] */
L_1007204E:
    eax = MEM32(edx + 0x10); /* 0x1007204E: mov eax, dword ptr [edx + 0x10] */
    ecx = MEM32(esi + eax); /* 0x10072051: mov ecx, dword ptr [esi + eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + (-0x8)); /* 0x10072054: add ecx, dword ptr [ebp - 8] */
    _flag_k = FK_ADD;
    eax = MEM32(ecx + 0x1C); /* 0x10072057: mov eax, dword ptr [ecx + 0x1c] */
    MEM32(ecx + 0x20) = eax; /* 0x1007205A: mov dword ptr [ecx + 0x20], eax */
    eax = MEM32(ecx + 0x18); /* 0x1007205D: mov eax, dword ptr [ecx + 0x18] */
    MEM32(ecx + 0x1C) = eax; /* 0x10072060: mov dword ptr [ecx + 0x1c], eax */
    _flag_a = (uint32_t)(MEM32(ebx + 0x14)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebx + 0x14) = MEM32(ebx + 0x14) + eax; /* 0x10072063: add dword ptr [ebx + 0x14], eax */
    _flag_k = FK_ADD;
    /* cmp edx, MEM32(edi + 0x64) */ /* 0x10072066: cmp edx, dword ptr [edi + 0x64] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(edi + 0x64));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10072070; /* 0x10072069: je 0x10072070 */
L_1007206B:
    edx = MEM32(edx + 0x18); /* 0x1007206B: mov edx, dword ptr [edx + 0x18] */
    goto L_10072072; /* 0x1007206E: jmp 0x10072072 */
L_10072070:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x10072070: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
L_10072072:
    /* test edx, edx */ /* 0x10072072: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007204E; /* 0x10072074: jne 0x1007204e */
L_10072076:
    esi = MEM32(ebp + (-0x1C)); /* 0x10072076: mov esi, dword ptr [ebp - 0x1c] */
    ecx = MEM32(ebp + (-0x4)); /* 0x10072079: mov ecx, dword ptr [ebp - 4] */
L_1007207C:
    eax = MEM32(edi + 0x48); /* 0x1007207C: mov eax, dword ptr [edi + 0x48] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1007207F: inc ecx */
    _flag_k = FK_INC;
    edx = MEM32(ebp + (-0x14)); /* 0x10072080: mov edx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x10072083: add eax, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0x34u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) + 0x34u; /* 0x10072085: add dword ptr [ebp - 8], 0x34 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x24u; /* 0x10072089: add edx, 0x24 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = ecx; /* 0x1007208C: mov dword ptr [ebp - 4], ecx */
    MEM32(ebp + (-0x14)) = edx; /* 0x1007208F: mov dword ptr [ebp - 0x14], edx */
    /* cmp ecx, MEM32(eax + 0x4) */ /* 0x10072092: cmp ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1007202A; /* 0x10072095: jb 0x1007202a */
L_10072097:
    ecx = MEM32(ebp + (-0x18)); /* 0x10072097: mov ecx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1007209A: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(ebp + (-0xC)); /* 0x1007209C: mov edx, dword ptr [ebp - 0xc] */
L_1007209F:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1007209F: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x28u; /* 0x100720A0: add esi, 0x28 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x34u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x34u; /* 0x100720A3: add edx, 0x34 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x18)) = ecx; /* 0x100720A6: mov dword ptr [ebp - 0x18], ecx */
    MEM32(ebp + (-0x1C)) = esi; /* 0x100720A9: mov dword ptr [ebp - 0x1c], esi */
    MEM32(ebp + (-0xC)) = edx; /* 0x100720AC: mov dword ptr [ebp - 0xc], edx */
    /* cmp ecx, MEM32(edi + 0x18) */ /* 0x100720AF: cmp ecx, dword ptr [edi + 0x18] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + 0x18));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_10072013; /* 0x100720B2: jb 0x10072013 */
L_100720B8:
    ecx = ebx; /* 0x100720B8: mov ecx, ebx */
    MEM32(ebp + (-0x14)) = ecx; /* 0x100720BA: mov dword ptr [ebp - 0x14], ecx */
    /* cmp MEM32(edi + 0x18), ebx */ /* 0x100720BD: cmp dword ptr [edi + 0x18], ebx */
    _flag_a = (uint32_t)(MEM32(edi + 0x18)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_100721B0; /* 0x100720C0: jbe 0x100721b0 */
L_100720C6:
    MEM32(ebp + (-0x8)) = ebx; /* 0x100720C6: mov dword ptr [ebp - 8], ebx */
L_100720C9:
    eax = MEM32(edi + 0x48); /* 0x100720C9: mov eax, dword ptr [edi + 0x48] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x100720CC: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x100720CE: add eax, ebx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x1C)) = edx; /* 0x100720D0: mov dword ptr [ebp - 0x1c], edx */
    /* cmp MEM32(eax + 0x4), edx */ /* 0x100720D3: cmp dword ptr [eax + 4], edx */
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_10072199; /* 0x100720D6: jbe 0x10072199 */
L_100720DC:
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(edx);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) & edx; /* 0x100720DC: and dword ptr [ebp - 0xc], edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100720DF: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x18)) = ecx; /* 0x100720E1: mov dword ptr [ebp - 0x18], ecx */
L_100720E4:
    eax = MEM32(eax + 0x20); /* 0x100720E4: mov eax, dword ptr [eax + 0x20] */
    esi = MEM32(eax + ecx + 0x18); /* 0x100720E7: mov esi, dword ptr [eax + ecx + 0x18] */
    eax = MEM32(eax + ecx + 0x14); /* 0x100720EB: mov eax, dword ptr [eax + ecx + 0x14] */
    MEM32(ebp + (-0x20)) = esi; /* 0x100720EF: mov dword ptr [ebp - 0x20], esi */
    esi = MEM32(edi + 0x64); /* 0x100720F2: mov esi, dword ptr [edi + 0x64] */
    MEM32(ebp + (-0x4)) = eax; /* 0x100720F5: mov dword ptr [ebp - 4], eax */
    /* test esi, esi */ /* 0x100720F8: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10072101; /* 0x100720FA: je 0x10072101 */
L_100720FC:
    esi = MEM32(esi + 0x18); /* 0x100720FC: mov esi, dword ptr [esi + 0x18] */
    goto L_10072103; /* 0x100720FF: jmp 0x10072103 */
L_10072101:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x10072101: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_10072103:
    /* test esi, esi */ /* 0x10072103: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007217A; /* 0x10072105: je 0x1007217a */
L_10072107:
    ebx = MEM32(ebp + (-0x4)); /* 0x10072107: mov ebx, dword ptr [ebp - 4] */
L_1007210A:
    eax = MEM32(esi + 0x84); /* 0x1007210A: mov eax, dword ptr [esi + 0x84] */
    /* cmp eax, MEM32(esi + 0x80) */ /* 0x10072110: cmp eax, dword ptr [esi + 0x80] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x80));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10072161; /* 0x10072116: jne 0x10072161 */
L_10072118:
    eax = MEM32(esi + 0x10); /* 0x10072118: mov eax, dword ptr [esi + 0x10] */
    ecx = MEM32(ebp + (-0x10)); /* 0x1007211B: mov ecx, dword ptr [ebp - 0x10] */
    eax = MEM32(ecx + eax); /* 0x1007211E: mov eax, dword ptr [ecx + eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0xC)); /* 0x10072121: add eax, dword ptr [ebp - 0xc] */
    _flag_k = FK_ADD;
    /* cmp MEM32(eax + 0x24), 0 */ /* 0x10072124: cmp dword ptr [eax + 0x24], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x24)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_10072161; /* 0x10072128: jbe 0x10072161 */
L_1007212A:
    /* cmp esi, MEM32(ebp + 0x8) */ /* 0x1007212A: cmp esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007213A; /* 0x1007212D: jne 0x1007213a */
L_1007212F:
    ecx = esi; /* 0x1007212F: mov ecx, esi */
    /* cmp ebx, MEM32(eax + 0x1C) */ /* 0x10072131: cmp ebx, dword ptr [eax + 0x1c] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(eax + 0x1C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_10072159; /* 0x10072134: jbe 0x10072159 */
L_10072136:
    PUSH32(esp, 1); /* 0x10072136: push 1 */
    goto L_1007215B; /* 0x10072138: jmp 0x1007215b */
L_1007213A:
    ecx = MEM32(ebp + (-0x20)); /* 0x1007213A: mov ecx, dword ptr [ebp - 0x20] */
    /* cmp ecx, MEM32(eax + 0x20) */ /* 0x1007213D: cmp ecx, dword ptr [eax + 0x20] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x20));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007214D; /* 0x10072140: jne 0x1007214d */
L_10072142:
    /* cmp ebx, MEM32(eax + 0x1C) */ /* 0x10072142: cmp ebx, dword ptr [eax + 0x1c] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(eax + 0x1C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_10072150; /* 0x10072145: jbe 0x10072150 */
L_10072147:
    PUSH32(esp, 1); /* 0x10072147: push 1 */
    ecx = esi; /* 0x10072149: mov ecx, esi */
    goto L_1007215B; /* 0x1007214B: jmp 0x1007215b */
L_1007214D:
    /* cmp ebx, MEM32(eax + 0x1C) */ /* 0x1007214D: cmp ebx, dword ptr [eax + 0x1c] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(eax + 0x1C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_10072150:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_10072161; /* 0x10072150: jne 0x10072161 */
L_10072152:
    /* cmp ecx, MEM32(eax + 0x20) */ /* 0x10072152: cmp ecx, dword ptr [eax + 0x20] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x20));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_10072161; /* 0x10072155: jbe 0x10072161 */
L_10072157:
    ecx = esi; /* 0x10072157: mov ecx, esi */
L_10072159:
    PUSH32(esp, 0); /* 0x10072159: push 0 */
L_1007215B:
    PUSH32(esp, eax); /* 0x1007215B: push eax */
    RECOMP_CALL(sub_10075B3A); /* 0x1007215C: call 0x10075b3a */
    RECOMP_FLAGS_IN();
L_10072161:
    /* cmp esi, MEM32(edi + 0x64) */ /* 0x10072161: cmp esi, dword ptr [edi + 0x64] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edi + 0x64));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007216B; /* 0x10072164: je 0x1007216b */
L_10072166:
    esi = MEM32(esi + 0x18); /* 0x10072166: mov esi, dword ptr [esi + 0x18] */
    goto L_1007216D; /* 0x10072169: jmp 0x1007216d */
L_1007216B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1007216B: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1007216D:
    /* test esi, esi */ /* 0x1007216D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007210A; /* 0x1007216F: jne 0x1007210a */
L_10072171:
    ebx = MEM32(ebp + (-0x8)); /* 0x10072171: mov ebx, dword ptr [ebp - 8] */
    edx = MEM32(ebp + (-0x1C)); /* 0x10072174: mov edx, dword ptr [ebp - 0x1c] */
    ecx = MEM32(ebp + (-0x18)); /* 0x10072177: mov ecx, dword ptr [ebp - 0x18] */
L_1007217A:
    eax = MEM32(edi + 0x48); /* 0x1007217A: mov eax, dword ptr [edi + 0x48] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1007217D: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0x34u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) + 0x34u; /* 0x1007217E: add dword ptr [ebp - 0xc], 0x34 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x10072182: add eax, ebx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x24u; /* 0x10072184: add ecx, 0x24 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x1C)) = edx; /* 0x10072187: mov dword ptr [ebp - 0x1c], edx */
    MEM32(ebp + (-0x18)) = ecx; /* 0x1007218A: mov dword ptr [ebp - 0x18], ecx */
    /* cmp edx, MEM32(eax + 0x4) */ /* 0x1007218D: cmp edx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(eax + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_100720E4; /* 0x10072190: jb 0x100720e4 */
L_10072196:
    ecx = MEM32(ebp + (-0x14)); /* 0x10072196: mov ecx, dword ptr [ebp - 0x14] */
L_10072199:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0x34u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) + 0x34u; /* 0x10072199: add dword ptr [ebp - 0x10], 0x34 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1007219D: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x28u; /* 0x1007219E: add ebx, 0x28 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x14)) = ecx; /* 0x100721A1: mov dword ptr [ebp - 0x14], ecx */
    MEM32(ebp + (-0x8)) = ebx; /* 0x100721A4: mov dword ptr [ebp - 8], ebx */
    /* cmp ecx, MEM32(edi + 0x18) */ /* 0x100721A7: cmp ecx, dword ptr [edi + 0x18] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + 0x18));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_100720C9; /* 0x100721AA: jb 0x100720c9 */
L_100721B0:
    edi = POP32_VAL(esp); /* 0x100721B0: pop edi */
    esi = POP32_VAL(esp); /* 0x100721B1: pop esi */
    ebx = POP32_VAL(esp); /* 0x100721B2: pop ebx */
    esp = ebp; /* 0x100721B3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100721B5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x100721B6: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_100721B9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100721B9u);

L_100721B9:
    PUSH32(esp, ebp); /* 0x100721B9: push ebp */
    ebp = esp; /* 0x100721BA: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x100721BC: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xFFFFFFFFu); /* 0x100721BF: push -1 */
    PUSH32(esp, 0x100DB718u); /* 0x100721C1: push 0x100db718 */
    eax = MEM32(FS_BASE + (0)); /* 0x100721C6: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x100721CC: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x100721CD: sub esp, 0x18 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x100721D0: push ebx */
    PUSH32(esp, esi); /* 0x100721D1: push esi */
    PUSH32(esp, edi); /* 0x100721D2: push edi */
    eax = MEM32(0x100DF7B8); /* 0x100721D3: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x100721D8: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x100721DA: push eax */
    eax = esp + 0x28; /* 0x100721DB: lea eax, [esp + 0x28] */
    MEM32(FS_BASE + (0)) = eax; /* 0x100721DF: mov dword ptr fs:[0], eax */
    edi = ecx; /* 0x100721E5: mov edi, ecx */
    PUSH32(esp, 0x64u); /* 0x100721E7: push 0x64 */
    ebx = POP32_VAL(esp); /* 0x100721E9: pop ebx */
    RECOMP_CALL(sub_10027FD6); /* 0x100721EA: call 0x10027fd6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFE0Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFE0Cu; /* 0x100721EF: add eax, 0xfffffe0c */
    _flag_k = FK_ADD;
    MEM32(esp + 0x14) = eax; /* 0x100721F4: mov dword ptr [esp + 0x14], eax */
    { uint32_t _aa = edx, _ab = 0xFFFFFFFFu, _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x100721F8: adc edx, -1 */
      edx = _aa + _ab + _ac;
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    /* cmp MEM32(edi + 0x28), 2 */ /* 0x100721FB: cmp dword ptr [edi + 0x28], 2 */
    _flag_a = (uint32_t)(MEM32(edi + 0x28)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esp + 0x20) = edx; /* 0x100721FF: mov dword ptr [esp + 0x20], edx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100722DC; /* 0x10072203: je 0x100722dc */
L_10072209:
    esi = edi + 0x2C; /* 0x10072209: lea esi, [edi + 0x2c] */
    MEM32(esp + 0x18) = esi; /* 0x1007220C: mov dword ptr [esp + 0x18], esi */
L_10072210:
    PUSH32(esp, 0); /* 0x10072210: push 0 */
    PUSH32(esp, ebx); /* 0x10072212: push ebx */
    PUSH32(esp, MEM32(edi + 0x50)); /* 0x10072213: push dword ptr [edi + 0x50] */
    RECOMP_ICALL(MEM32(0x100E5144)); /* 0x10072216: call dword ptr [0x100e5144] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1007221C: push esi */
    MEM32(esp + 0x20) = eax; /* 0x1007221D: mov dword ptr [esp + 0x20], eax */
    RECOMP_ICALL(MEM32(0x100E5038)); /* 0x10072221: call dword ptr [0x100e5038] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x10072227: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x30) = esi; /* 0x10072229: mov dword ptr [esp + 0x30], esi */
    eax = MEM32(edi + 0x28); /* 0x1007222D: mov eax, dword ptr [edi + 0x28] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x10072230: sub eax, esi */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100722AA; /* 0x10072232: je 0x100722aa */
L_10072234:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x10072234: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_100722BE; /* 0x10072235: jne 0x100722be */
L_1007223B:
    /* cmp MEM32(esp + 0x1C), 0x102u */ /* 0x1007223B: cmp dword ptr [esp + 0x1c], 0x102 */
    _flag_a = (uint32_t)(MEM32(esp + 0x1C)); _flag_b = (uint32_t)(0x102u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007224E; /* 0x10072243: jne 0x1007224e */
L_10072245:
    ecx = edi; /* 0x10072245: mov ecx, edi */
    RECOMP_CALL(sub_10071D6D); /* 0x10072247: call 0x10071d6d */
    RECOMP_FLAGS_IN();
    goto L_10072275; /* 0x1007224C: jmp 0x10072275 */
L_1007224E:
    RECOMP_CALL(sub_10027FD6); /* 0x1007224E: call 0x10027fd6 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x10072253: mov esi, eax */
    MEM32(esp + 0x20) = edx; /* 0x10072255: mov dword ptr [esp + 0x20], edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(esp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - MEM32(esp + 0x14); /* 0x10072259: sub esi, dword ptr [esp + 0x14] */
    _flag_k = FK_CMP;
    /* cmp esi, 0x64u */ /* 0x1007225D: cmp esi, 0x64 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x64u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_10072294; /* 0x10072260: jbe 0x10072294 */
L_10072262:
    /* cmp esi, 0x82u */ /* 0x10072262: cmp esi, 0x82 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x82u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_10072273; /* 0x10072268: jbe 0x10072273 */
L_1007226A:
    ecx = edi; /* 0x1007226A: mov ecx, edi */
    RECOMP_CALL(sub_1006FA70); /* 0x1007226C: call 0x1006fa70 */
    RECOMP_FLAGS_IN();
    goto L_10072282; /* 0x10072271: jmp 0x10072282 */
L_10072273:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x10072273: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_10072275:
    /* cmp MEM32(edi + 0x10), esi */ /* 0x10072275: cmp dword ptr [edi + 0x10], esi */
    _flag_a = (uint32_t)(MEM32(edi + 0x10)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_10072282; /* 0x10072278: jbe 0x10072282 */
L_1007227A:
    PUSH32(esp, esi); /* 0x1007227A: push esi */
    ecx = edi; /* 0x1007227B: mov ecx, edi */
    RECOMP_CALL(sub_10071FE8); /* 0x1007227D: call 0x10071fe8 */
    RECOMP_FLAGS_IN();
L_10072282:
    RECOMP_CALL(sub_10027FD6); /* 0x10072282: call 0x10027fd6 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x64u); /* 0x10072287: push 0x64 */
    MEM32(esp + 0x18) = eax; /* 0x10072289: mov dword ptr [esp + 0x18], eax */
    MEM32(esp + 0x24) = edx; /* 0x1007228D: mov dword ptr [esp + 0x24], edx */
    ebx = POP32_VAL(esp); /* 0x10072291: pop ebx */
    goto L_100722BE; /* 0x10072292: jmp 0x100722be */
L_10072294:
    /* cmp MEM32(edi + 0x10), 0 */ /* 0x10072294: cmp dword ptr [edi + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_100722A3; /* 0x10072298: jbe 0x100722a3 */
L_1007229A:
    PUSH32(esp, 0); /* 0x1007229A: push 0 */
    ecx = edi; /* 0x1007229C: mov ecx, edi */
    RECOMP_CALL(sub_10071FE8); /* 0x1007229E: call 0x10071fe8 */
    RECOMP_FLAGS_IN();
L_100722A3:
    PUSH32(esp, 0x64u); /* 0x100722A3: push 0x64 */
    ebx = POP32_VAL(esp); /* 0x100722A5: pop ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - esi; /* 0x100722A6: sub ebx, esi */
    _flag_k = FK_CMP;
    goto L_100722BE; /* 0x100722A8: jmp 0x100722be */
L_100722AA:
    ecx = edi; /* 0x100722AA: mov ecx, edi */
    RECOMP_CALL(sub_10070245); /* 0x100722AC: call 0x10070245 */
    RECOMP_FLAGS_IN();
    ebx = (uint32_t)LO8(eax); /* 0x100722B1: movzx ebx, al */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ebx);
    _cf = (ebx) != 0;
    ebx = (uint32_t)(-(int32_t)ebx); /* 0x100722B4: neg ebx */
    _flag_k = FK_CMP;
    { uint32_t _sa = ebx, _sb = ebx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x100722B6: sbb ebx, ebx */
      ebx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFF9Bu);
    ebx = ebx & 0xFFFFFF9Bu; /* 0x100722B8: and ebx, 0xffffff9b */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x64u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x64u; /* 0x100722BB: add ebx, 0x64 */
    _flag_k = FK_ADD;
L_100722BE:
    _flag_a = (uint32_t)((MEM32(esp + 0x30) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(esp + 0x30) | 0xFFFFFFFFu));
    MEM32(esp + 0x30) = MEM32(esp + 0x30) | 0xFFFFFFFFu; /* 0x100722BE: or dword ptr [esp + 0x30], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(esp + 0x18)); /* 0x100722C3: push dword ptr [esp + 0x18] */
    RECOMP_ICALL(MEM32(0x100E503C)); /* 0x100722C7: call dword ptr [0x100e503c] */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(edi + 0x28), 2 */ /* 0x100722CD: cmp dword ptr [edi + 0x28], 2 */
    _flag_a = (uint32_t)(MEM32(edi + 0x28)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100722DC; /* 0x100722D1: je 0x100722dc */
L_100722D3:
    esi = MEM32(esp + 0x18); /* 0x100722D3: mov esi, dword ptr [esp + 0x18] */
    RECOMP_BACKEDGE();
    goto L_10072210; /* 0x100722D7: jmp 0x10072210 */
L_100722DC:
    ecx = MEM32(esp + 0x28); /* 0x100722DC: mov ecx, dword ptr [esp + 0x28] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x100722E0: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x100722E7: pop ecx */
    edi = POP32_VAL(esp); /* 0x100722E8: pop edi */
    esi = POP32_VAL(esp); /* 0x100722E9: pop esi */
    ebx = POP32_VAL(esp); /* 0x100722EA: pop ebx */
    esp = ebp; /* 0x100722EB: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100722ED: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100722EE: ret  */
    RECOMP_REGS_OUT();
}

void sub_100722EF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100722EFu);

L_100722EF:
    PUSH32(esp, ebp); /* 0x100722EF: push ebp */
    ebp = esp; /* 0x100722F0: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x100722F2: mov ecx, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_100721B9); /* 0x100722F5: call 0x100721b9 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_1007A591); /* 0x100722FA: call 0x1007a591 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100722FF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x10072301: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x10072302: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_10072305(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10072305u);

L_10072305:
    PUSH32(esp, 8); /* 0x10072305: push 8 */
    eax = 0x100DB76Eu; /* 0x10072307: mov eax, 0x100db76e */
    RECOMP_CALL(sub_100149A4); /* 0x1007230C: call 0x100149a4 */
    RECOMP_FLAGS_IN();
    edi = ecx; /* 0x10072311: mov edi, ecx */
    MEM32(ebp + (-0x14)) = edi; /* 0x10072313: mov dword ptr [ebp - 0x14], edi */
    MEM32(edi) = 0x10027BD4u; /* 0x10072316: mov dword ptr [edi], 0x10027bd4 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1007231C: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 1; /* 0x1007231E: mov dword ptr [ebp - 4], 1 */
    /* cmp MEM32(edi + 0x18), ebx */ /* 0x10072325: cmp dword ptr [edi + 0x18], ebx */
    _flag_a = (uint32_t)(MEM32(edi + 0x18)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_10072362; /* 0x10072328: jbe 0x10072362 */
L_1007232A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1007232A: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = ecx; /* 0x1007232C: mov dword ptr [ebp - 0x10], ecx */
L_1007232F:
    eax = MEM32(edi + 0x48); /* 0x1007232F: mov eax, dword ptr [edi + 0x48] */
    eax = MEM32(ecx + eax + 0x20); /* 0x10072332: mov eax, dword ptr [ecx + eax + 0x20] */
    /* test eax, eax */ /* 0x10072336: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10072356; /* 0x10072338: je 0x10072356 */
L_1007233A:
    PUSH32(esp, 0x10068C43u); /* 0x1007233A: push 0x10068c43 */
    esi = eax + (-0x4); /* 0x1007233F: lea esi, [eax - 4] */
    PUSH32(esp, MEM32(esi)); /* 0x10072342: push dword ptr [esi] */
    PUSH32(esp, 0x24u); /* 0x10072344: push 0x24 */
    PUSH32(esp, eax); /* 0x10072346: push eax */
    RECOMP_CALL(sub_1009E24F); /* 0x10072347: call 0x1009e24f */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1007234C: push esi */
    RECOMP_CALL(sub_1000ECE0); /* 0x1007234D: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10072352: pop ecx */
    ecx = MEM32(ebp + (-0x10)); /* 0x10072353: mov ecx, dword ptr [ebp - 0x10] */
L_10072356:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x10072356: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x28u; /* 0x10072357: add ecx, 0x28 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x10)) = ecx; /* 0x1007235A: mov dword ptr [ebp - 0x10], ecx */
    /* cmp ebx, MEM32(edi + 0x18) */ /* 0x1007235D: cmp ebx, dword ptr [edi + 0x18] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(edi + 0x18));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1007232F; /* 0x10072360: jb 0x1007232f */
L_10072362:
    eax = MEM32(edi + 0x48); /* 0x10072362: mov eax, dword ptr [edi + 0x48] */
    /* test eax, eax */ /* 0x10072365: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10072382; /* 0x10072367: je 0x10072382 */
L_10072369:
    PUSH32(esp, 0x1006F81Cu); /* 0x10072369: push 0x1006f81c */
    esi = eax + (-0x4); /* 0x1007236E: lea esi, [eax - 4] */
    PUSH32(esp, MEM32(esi)); /* 0x10072371: push dword ptr [esi] */
    PUSH32(esp, 0x28u); /* 0x10072373: push 0x28 */
    PUSH32(esp, eax); /* 0x10072375: push eax */
    RECOMP_CALL(sub_1009E24F); /* 0x10072376: call 0x1009e24f */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1007237B: push esi */
    RECOMP_CALL(sub_1000ECE0); /* 0x1007237C: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10072381: pop ecx */
L_10072382:
    PUSH32(esp, MEM32(edi + 0x44)); /* 0x10072382: push dword ptr [edi + 0x44] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10072385: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0x8C); /* 0x1007238A: mov eax, dword ptr [edi + 0x8c] */
    ecx = POP32_VAL(esp); /* 0x10072390: pop ecx */
    /* test eax, eax */ /* 0x10072391: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100723A3; /* 0x10072393: je 0x100723a3 */
L_10072395:
    PUSH32(esp, 0x8000u); /* 0x10072395: push 0x8000 */
    PUSH32(esp, 0); /* 0x1007239A: push 0 */
    PUSH32(esp, eax); /* 0x1007239C: push eax */
    RECOMP_ICALL(MEM32(0x100E5198)); /* 0x1007239D: call dword ptr [0x100e5198] */
    RECOMP_FLAGS_IN();
L_100723A3:
    PUSH32(esp, MEM32(edi + 0x50)); /* 0x100723A3: push dword ptr [edi + 0x50] */
    esi = MEM32(0x100E5074); /* 0x100723A6: mov esi, dword ptr [0x100e5074] */
    RECOMP_ICALL(esi); /* 0x100723AC: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(edi + 0x54)); /* 0x100723AE: push dword ptr [edi + 0x54] */
    RECOMP_CALL(sub_1000ECE0); /* 0x100723B1: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(edi + 0x4C), 0 */ /* 0x100723B6: cmp dword ptr [edi + 0x4c], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x4C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x100723BA: pop ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100723D4; /* 0x100723BB: je 0x100723d4 */
L_100723BD:
    PUSH32(esp, MEM32(edi + 0x4C)); /* 0x100723BD: push dword ptr [edi + 0x4c] */
    RECOMP_ICALL(esi); /* 0x100723C0: call esi */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(edi + 0x58)); /* 0x100723C2: push dword ptr [edi + 0x58] */
    RECOMP_CALL(sub_1000ECE0); /* 0x100723C5: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(edi + 0x5C)); /* 0x100723CA: push dword ptr [edi + 0x5c] */
    RECOMP_CALL(sub_1000ECE0); /* 0x100723CD: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100723D2: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100723D3: pop ecx */
L_100723D4:
    ecx = edi + 0x68; /* 0x100723D4: lea ecx, [edi + 0x68] */
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x100723D7: mov byte ptr [ebp - 4], 0 */
    RECOMP_CALL(sub_10079DC3); /* 0x100723DB: call 0x10079dc3 */
    RECOMP_FLAGS_IN();
    eax = edi + 0x2C; /* 0x100723E0: lea eax, [edi + 0x2c] */
    PUSH32(esp, eax); /* 0x100723E3: push eax */
    RECOMP_ICALL(MEM32(0x100E5040)); /* 0x100723E4: call dword ptr [0x100e5040] */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_100149D7); /* 0x100723EA: call 0x100149d7 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100723EF: ret  */
    RECOMP_REGS_OUT();
}

void sub_100723F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100723F0u);

L_100723F0:
    PUSH32(esp, ebp); /* 0x100723F0: push ebp */
    ebp = esp; /* 0x100723F1: mov ebp, esp */
    /* test MEM8(ebp + 0x8), 1 */ /* 0x100723F3: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, esi); /* 0x100723F7: push esi */
    esi = ecx; /* 0x100723F8: mov esi, ecx */
    MEM32(esi) = 0x10072414u; /* 0x100723FA: mov dword ptr [esi], 0x10072414 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_10072409; /* 0x10072400: je 0x10072409 */
L_10072402:
    PUSH32(esp, esi); /* 0x10072402: push esi */
    RECOMP_CALL(sub_1000ECE0); /* 0x10072403: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10072408: pop ecx */
L_10072409:
    eax = esi; /* 0x10072409: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1007240B: pop esi */
    ebp = POP32_VAL(esp); /* 0x1007240C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1007240D: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_10072414(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10072414u);

L_10072414:
    { uint32_t _rv = (MEM32(esi + 0xA)) & 0xFFFFFFFFu, _rn = ((LO8(ecx)) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } MEM32(esi + 0xA) = _rv; } /* 0x10072414: rol dword ptr [esi + 0xa], cl */
    { uint32_t _aa = LO8(ebx), _ab = LO8(edx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10072417: adc bl, dl */
      SET_LO8(ebx, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10072419: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)((LO8(edx) | MEM8(eax))) << 24; _flag_b = (uint32_t)((LO8(edx) | MEM8(eax))) << 24;
    SET_LO8(edx, LO8(edx) | MEM8(eax)); /* 0x1007241A: or dl, byte ptr [eax] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    { uint32_t _rv = (MEM32(esi + 0xA)) & 0xFFFFFFFFu, _rn = ((LO8(ecx)) & 31) % 32u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = (_rv >> 31) & 1u; _rv = ((_rv << 1) | _rb) & 0xFFFFFFFFu; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } MEM32(esi + 0xA) = _rv; } /* 0x1007241C: rol dword ptr [esi + 0xa], cl */
    { uint32_t _aa = LO8(ebx), _ab = LO8(edx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x1007241F: adc bl, dl */
      SET_LO8(ebx, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10072421: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)((LO8(edx) | MEM8(eax))) << 24; _flag_b = (uint32_t)((LO8(edx) | MEM8(eax))) << 24;
    SET_LO8(edx, LO8(edx) | MEM8(eax)); /* 0x10072422: or dl, byte ptr [eax] */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi));
    eax = eax & MEM32(edi); /* 0x10072424: lock and eax, dword ptr [edi] */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _aa = MEM8(ebp + (-0x75)), _ab = LO8(edx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10072427: adc byte ptr [ebp - 0x75], dl */
      MEM8(ebp + (-0x75)) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    /* in: no port I/O under Win32 */ /* 0x1007242A: in al, dx */
    PUSH32(esp, ebx); /* 0x1007242B: push ebx */
    SET_LO8(ebx, MEM8(ebp + 0x8)); /* 0x1007242C: mov bl, byte ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1007242F: push edi */
    edi = ecx; /* 0x10072430: mov edi, ecx */
    /* test LO8(ebx), LO8(ebx) */ /* 0x10072432: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007245C; /* 0x10072434: je 0x1007245c */
L_10072436:
    PUSH32(esp, esi); /* 0x10072436: push esi */
    esi = MEM32(edi + 0x5C); /* 0x10072437: mov esi, dword ptr [edi + 0x5c] */
    RECOMP_CALL(sub_10023AF4); /* 0x1007243A: call 0x10023af4 */
    RECOMP_FLAGS_IN();
    ecx = esi; /* 0x1007243F: mov ecx, esi */
    RECOMP_CALL(sub_10023D1E); /* 0x10072441: call 0x10023d1e */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0x50); /* 0x10072446: mov eax, dword ptr [edi + 0x50] */
    MEM8(edi + 0x60) = (uint8_t)(1); /* 0x10072449: mov byte ptr [edi + 0x60], 1 */
    MEM32(edi + 0x64) = eax; /* 0x1007244D: mov dword ptr [edi + 0x64], eax */
    MEM32(esi) = 0; /* 0x10072450: mov dword ptr [esi], 0 */
    RECOMP_CALL(sub_10023AF4); /* 0x10072456: call 0x10023af4 */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x1007245B: pop esi */
L_1007245C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1007245C: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edi + 0x38; /* 0x1007245E: lea eax, [edi + 0x38] */
    /* test LO8(ebx), LO8(ebx) */ /* 0x10072461: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    SET_LO8(ecx, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x10072463: setne cl */
    { uint32_t _tmp = MEM32(eax); /* 0x10072466: xchg dword ptr [eax], ecx */
      MEM32(eax) = ecx;
      ecx = _tmp; }
    edi = POP32_VAL(esp); /* 0x10072468: pop edi */
    ebx = POP32_VAL(esp); /* 0x10072469: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1007246A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1007246B: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_10072428(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10072428u);

L_10072428:
    PUSH32(esp, ebp); /* 0x10072428: push ebp */
    ebp = esp; /* 0x10072429: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1007242B: push ebx */
    SET_LO8(ebx, MEM8(ebp + 0x8)); /* 0x1007242C: mov bl, byte ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1007242F: push edi */
    edi = ecx; /* 0x10072430: mov edi, ecx */
    /* test LO8(ebx), LO8(ebx) */ /* 0x10072432: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007245C; /* 0x10072434: je 0x1007245c */
L_10072436:
    PUSH32(esp, esi); /* 0x10072436: push esi */
    esi = MEM32(edi + 0x5C); /* 0x10072437: mov esi, dword ptr [edi + 0x5c] */
    RECOMP_CALL(sub_10023AF4); /* 0x1007243A: call 0x10023af4 */
    RECOMP_FLAGS_IN();
    ecx = esi; /* 0x1007243F: mov ecx, esi */
    RECOMP_CALL(sub_10023D1E); /* 0x10072441: call 0x10023d1e */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0x50); /* 0x10072446: mov eax, dword ptr [edi + 0x50] */
    MEM8(edi + 0x60) = (uint8_t)(1); /* 0x10072449: mov byte ptr [edi + 0x60], 1 */
    MEM32(edi + 0x64) = eax; /* 0x1007244D: mov dword ptr [edi + 0x64], eax */
    MEM32(esi) = 0; /* 0x10072450: mov dword ptr [esi], 0 */
    RECOMP_CALL(sub_10023AF4); /* 0x10072456: call 0x10023af4 */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x1007245B: pop esi */
L_1007245C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1007245C: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edi + 0x38; /* 0x1007245E: lea eax, [edi + 0x38] */
    /* test LO8(ebx), LO8(ebx) */ /* 0x10072461: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    SET_LO8(ecx, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x10072463: setne cl */
    { uint32_t _tmp = MEM32(eax); /* 0x10072466: xchg dword ptr [eax], ecx */
      MEM32(eax) = ecx;
      ecx = _tmp; }
    edi = POP32_VAL(esp); /* 0x10072468: pop edi */
    ebx = POP32_VAL(esp); /* 0x10072469: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1007246A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1007246B: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_10072502(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10072502u);

L_10072502:
    PUSH32(esp, ebp); /* 0x10072502: push ebp */
    ebp = esp; /* 0x10072503: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x10072505: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x3Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x3Cu; /* 0x10072508: sub esp, 0x3c */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1007250B: push ebx */
    PUSH32(esp, esi); /* 0x1007250C: push esi */
    PUSH32(esp, edi); /* 0x1007250D: push edi */
    edi = ecx; /* 0x1007250E: mov edi, ecx */
    esi = MEM32(edi + 0x4); /* 0x10072510: mov esi, dword ptr [edi + 4] */
    RECOMP_CALL(sub_10023AF4); /* 0x10072513: call 0x10023af4 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10072518: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007253A; /* 0x1007251A: je 0x1007253a */
L_1007251C:
    /* cmp MEM32(eax + 0x1C), esi */ /* 0x1007251C: cmp dword ptr [eax + 0x1c], esi */
    _flag_a = (uint32_t)(MEM32(eax + 0x1C)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007253A; /* 0x1007251F: jne 0x1007253a */
L_10072521:
    SET_LO8(ecx, MEM8(eax + 0x4C)); /* 0x10072521: mov cl, byte ptr [eax + 0x4c] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x10072524: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007253A; /* 0x10072526: jne 0x1007253a */
L_10072528:
    eax = MEM32(eax + 0x9C); /* 0x10072528: mov eax, dword ptr [eax + 0x9c] */
    ebx = MEM32(eax + 0x50); /* 0x1007252E: mov ebx, dword ptr [eax + 0x50] */
    /* test ebx, ebx */ /* 0x10072531: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007253A; /* 0x10072533: je 0x1007253a */
L_10072535:
    ebx = MEM32(ebx + 0x4); /* 0x10072535: mov ebx, dword ptr [ebx + 4] */
    goto L_10072544; /* 0x10072538: jmp 0x10072544 */
L_1007253A:
    ecx = MEM32(edi + 0x4); /* 0x1007253A: mov ecx, dword ptr [edi + 4] */
    RECOMP_CALL(sub_10024106); /* 0x1007253D: call 0x10024106 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x10072542: mov ebx, eax */
L_10072544:
    ecx = MEM32(ebx + 0x4); /* 0x10072544: mov ecx, dword ptr [ebx + 4] */
    eax = esp + 0x18; /* 0x10072547: lea eax, [esp + 0x18] */
    PUSH32(esp, eax); /* 0x1007254B: push eax */
    RECOMP_CALL(sub_10076031); /* 0x1007254C: call 0x10076031 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esp + 0x28)); _flag_b = (uint32_t)(0);
    MEM32(esp + 0x28) = MEM32(esp + 0x28) & 0; /* 0x10072551: and dword ptr [esp + 0x28], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(esp + 0x30)); _flag_b = (uint32_t)(0);
    MEM32(esp + 0x30) = MEM32(esp + 0x30) & 0; /* 0x10072556: and dword ptr [esp + 0x30], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(esp + 0x34)); _flag_b = (uint32_t)(0);
    MEM32(esp + 0x34) = MEM32(esp + 0x34) & 0; /* 0x1007255B: and dword ptr [esp + 0x34], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(ebp + 0x8); /* 0x10072560: mov esi, dword ptr [ebp + 8] */
    MEM32(esp + 0x14) = ebx; /* 0x10072563: mov dword ptr [esp + 0x14], ebx */
L_10072567:
    eax = MEM32(esi); /* 0x10072567: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x0FFFFFFFu);
    eax = eax & 0x0FFFFFFFu; /* 0x10072569: and eax, 0xfffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x1007256E: sub eax, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_100725C0; /* 0x10072571: je 0x100725c0 */
L_10072573:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x10072573: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_100725B1; /* 0x10072574: je 0x100725b1 */
L_10072576:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x10072576: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_100725AB; /* 0x10072577: je 0x100725ab */
L_10072579:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x10072579: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_100725C6; /* 0x1007257A: jne 0x100725c6 */
L_1007257C:
    eax = MEM32(esi + 0x8); /* 0x1007257C: mov eax, dword ptr [esi + 8] */
    ecx = esp + 0x10; /* 0x1007257F: lea ecx, [esp + 0x10] */
    esi = MEM32(esp + 0x24); /* 0x10072583: mov esi, dword ptr [esp + 0x24] */
    MEM32(esp + 0x10) = eax; /* 0x10072587: mov dword ptr [esp + 0x10], eax */
    edx = MEM32(esi + 0x10); /* 0x1007258B: mov edx, dword ptr [esi + 0x10] */
    RECOMP_CALL(sub_1002614A); /* 0x1007258E: call 0x1002614a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x10072593: push eax */
    eax = esp + 0x14; /* 0x10072594: lea eax, [esp + 0x14] */
    PUSH32(esp, eax); /* 0x10072598: push eax */
    ecx = esi + 0x10; /* 0x10072599: lea ecx, [esi + 0x10] */
    RECOMP_CALL(sub_10024F4D); /* 0x1007259C: call 0x10024f4d */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0x8); /* 0x100725A1: mov esi, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x100725A4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x100725A6: setne al */
    goto L_100725C2; /* 0x100725A9: jmp 0x100725c2 */
L_100725AB:
    eax = MEM32(esp + 0x20); /* 0x100725AB: mov eax, dword ptr [esp + 0x20] */
    goto L_100725B8; /* 0x100725AF: jmp 0x100725b8 */
L_100725B1:
    eax = MEM32(esp + 0x24); /* 0x100725B1: mov eax, dword ptr [esp + 0x24] */
    eax = MEM32(eax + 0x2C); /* 0x100725B5: mov eax, dword ptr [eax + 0x2c] */
L_100725B8:
    /* cmp eax, MEM32(esi + 0x8) */ /* 0x100725B8: cmp eax, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x100725BB: sete al */
    goto L_100725C2; /* 0x100725BE: jmp 0x100725c2 */
L_100725C0:
    SET_LO8(eax, 1); /* 0x100725C0: mov al, 1 */
L_100725C2:
    /* test LO8(eax), LO8(eax) */ /* 0x100725C2: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10072600; /* 0x100725C4: jne 0x10072600 */
L_100725C6:
    ecx = MEM32(edi + 0x4); /* 0x100725C6: mov ecx, dword ptr [edi + 4] */
    PUSH32(esp, ebx); /* 0x100725C9: push ebx */
    PUSH32(esp, 0); /* 0x100725CA: push 0 */
    RECOMP_CALL(sub_100735C1); /* 0x100725CC: call 0x100735c1 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x100725D1: mov ebx, eax */
    eax = esp + 0x38; /* 0x100725D3: lea eax, [esp + 0x38] */
    PUSH32(esp, eax); /* 0x100725D7: push eax */
    ecx = MEM32(ebx + 0x4); /* 0x100725D8: mov ecx, dword ptr [ebx + 4] */
    RECOMP_CALL(sub_10076031); /* 0x100725DB: call 0x10076031 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x100725E0: push eax */
    ecx = esp + 0x1C; /* 0x100725E1: lea ecx, [esp + 0x1c] */
    RECOMP_CALL(sub_1002762F); /* 0x100725E5: call 0x1002762f */
    RECOMP_FLAGS_IN();
    /* cmp ebx, MEM32(esp + 0x14) */ /* 0x100725EA: cmp ebx, dword ptr [esp + 0x14] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(esp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_10072567; /* 0x100725EE: jne 0x10072567 */
L_100725F4:
    esi = esp + 0x28; /* 0x100725F4: lea esi, [esp + 0x28] */
    MEM32(ebp + 0x8) = esi; /* 0x100725F8: mov dword ptr [ebp + 8], esi */
    RECOMP_BACKEDGE();
    goto L_10072567; /* 0x100725FB: jmp 0x10072567 */
L_10072600:
    eax = MEM32(edi); /* 0x10072600: mov eax, dword ptr [edi] */
    ecx = edi; /* 0x10072602: mov ecx, edi */
    PUSH32(esp, ebx); /* 0x10072604: push ebx */
    PUSH32(esp, esi); /* 0x10072605: push esi */
    RECOMP_ICALL(MEM32(eax + 0x24)); /* 0x10072606: call dword ptr [eax + 0x24] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10072609: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10072637; /* 0x1007260B: jne 0x10072637 */
L_1007260D:
    /* cmp MEM8(ebp + 0xC), LO8(eax) */ /* 0x1007260D: cmp byte ptr [ebp + 0xc], al */
    _flag_a = (uint32_t)(MEM8(ebp + 0xC)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10072637; /* 0x10072610: je 0x10072637 */
L_10072612:
    ecx = edi + 0x8; /* 0x10072612: lea ecx, [edi + 8] */
    RECOMP_CALL(sub_10023D1E); /* 0x10072615: call 0x10023d1e */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi); /* 0x1007261A: mov eax, dword ptr [edi] */
    ecx = edi; /* 0x1007261C: mov ecx, edi */
    PUSH32(esp, ebx); /* 0x1007261E: push ebx */
    PUSH32(esp, esi); /* 0x1007261F: push esi */
    RECOMP_ICALL(MEM32(eax + 0x24)); /* 0x10072620: call dword ptr [eax + 0x24] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10072623: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10072630; /* 0x10072625: jne 0x10072630 */
L_10072627:
    PUSH32(esp, ebx); /* 0x10072627: push ebx */
    PUSH32(esp, esi); /* 0x10072628: push esi */
    ecx = edi; /* 0x10072629: mov ecx, edi */
    RECOMP_CALL(sub_10027388); /* 0x1007262B: call 0x10027388 */
    RECOMP_FLAGS_IN();
L_10072630:
    MEM32(edi + 0x8) = 0; /* 0x10072630: mov dword ptr [edi + 8], 0 */
L_10072637:
    edi = POP32_VAL(esp); /* 0x10072637: pop edi */
    esi = POP32_VAL(esp); /* 0x10072638: pop esi */
    ebx = POP32_VAL(esp); /* 0x10072639: pop ebx */
    esp = ebp; /* 0x1007263A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1007263C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1007263D: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1007267F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007267Fu);

L_1007267F:
    PUSH32(esp, ebp); /* 0x1007267F: push ebp */
    ebp = esp; /* 0x10072680: mov ebp, esp */
    edx = MEM32(ecx); /* 0x10072682: mov edx, dword ptr [ecx] */
    eax = ecx + 0x20; /* 0x10072684: lea eax, [ecx + 0x20] */
    PUSH32(esp, 1); /* 0x10072687: push 1 */
    PUSH32(esp, eax); /* 0x10072689: push eax */
    RECOMP_ICALL(MEM32(edx + 0x14)); /* 0x1007268A: call dword ptr [edx + 0x14] */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1007268D: mov ecx, eax */
    ebp = POP32_VAL(esp); /* 0x1007268F: pop ebp */
    goto L_100729BE; /* 0x10072690: jmp 0x100729be */
L_100729BE:
    PUSH32(esp, ebp); /* 0x100729BE: push ebp */
    ebp = esp; /* 0x100729BF: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x100729C1: sub esp, 0xc */
    _flag_k = FK_CMP;
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x100729C4: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x100729C8: push ebx */
    PUSH32(esp, esi); /* 0x100729C9: push esi */
    PUSH32(esp, edi); /* 0x100729CA: push edi */
    ebx = ecx; /* 0x100729CB: mov ebx, ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10072AE8; /* 0x100729CD: je 0x10072ae8 */
L_100729D3:
    eax = MEM32(ebx + 0x100); /* 0x100729D3: mov eax, dword ptr [ebx + 0x100] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100729D9: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100729DC: push dword ptr [ebp + 8] */
    edi = MEM32(eax + 0x4); /* 0x100729DF: mov edi, dword ptr [eax + 4] */
    ecx = edi; /* 0x100729E2: mov ecx, edi */
    RECOMP_CALL(sub_10073D4A); /* 0x100729E4: call 0x10073d4a */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx + 0x100); /* 0x100729E9: mov ecx, dword ptr [ebx + 0x100] */
    MEM32(ebp + 0x8) = eax; /* 0x100729EF: mov dword ptr [ebp + 8], eax */
    /* test MEM8(ecx + 0x30), 4 */ /* 0x100729F2: test byte ptr [ecx + 0x30], 4 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x30)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10072A02; /* 0x100729F6: jne 0x10072a02 */
L_100729F8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x100729F8: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x14u; /* 0x100729FA: add ecx, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x100729FD: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(ecx), _sum = MEM32(ecx) + edx; edx = _old; MEM32(ecx) = _sum; } /* 0x100729FE: lock xadd dword ptr [ecx], edx */
    _flag_k = FK_ADD;
L_10072A02:
    RECOMP_CALL(sub_10023AF4); /* 0x10072A02: call 0x10023af4 */
    RECOMP_FLAGS_IN();
    ecx = ebx + 0x30; /* 0x10072A07: lea ecx, [ebx + 0x30] */
    RECOMP_CALL(sub_10023D1E); /* 0x10072A0A: call 0x10023d1e */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + 0x8); /* 0x10072A0F: mov edx, dword ptr [ebp + 8] */
    ecx = edx + 0xC; /* 0x10072A12: lea ecx, [edx + 0xc] */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0);
    MEM32(ecx) = MEM32(ecx) & 0; /* 0x10072A15: and dword ptr [ecx], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebx + 0x2C); /* 0x10072A18: mov eax, dword ptr [ebx + 0x2c] */
    MEM32(eax) = edx; /* 0x10072A1B: mov dword ptr [eax], edx */
    MEM32(ebx + 0x2C) = ecx; /* 0x10072A1D: mov dword ptr [ebx + 0x2c], ecx */
    MEM32(ebx + 0x30) = 0; /* 0x10072A20: mov dword ptr [ebx + 0x30], 0 */
    RECOMP_CALL(sub_10023AF4); /* 0x10072A27: call 0x10023af4 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_10023AF4); /* 0x10072A2C: call 0x10023af4 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10072A31: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10072A50; /* 0x10072A33: je 0x10072a50 */
L_10072A35:
    /* cmp MEM32(eax + 0x1C), edi */ /* 0x10072A35: cmp dword ptr [eax + 0x1c], edi */
    _flag_a = (uint32_t)(MEM32(eax + 0x1C)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10072A50; /* 0x10072A38: jne 0x10072a50 */
L_10072A3A:
    /* cmp MEM8(eax + 0x4C), 0 */ /* 0x10072A3A: cmp byte ptr [eax + 0x4c], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0x4C)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = MEM32(eax + 0x9C); /* 0x10072A3E: mov eax, dword ptr [eax + 0x9c] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10072A4B; /* 0x10072A44: je 0x10072a4b */
L_10072A46:
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x8) = MEM32(eax + 0x8) + 1; /* 0x10072A46: inc dword ptr [eax + 8] */
    _flag_k = FK_INC;
    goto L_10072AA8; /* 0x10072A49: jmp 0x10072aa8 */
L_10072A4B:
    _flag_a = (uint32_t)(MEM32(eax + 0x68)); _flag_b = (uint32_t)(1);
    MEM32(eax + 0x68) = MEM32(eax + 0x68) + 1; /* 0x10072A4B: inc dword ptr [eax + 0x68] */
    _flag_k = FK_INC;
    goto L_10072AA8; /* 0x10072A4E: jmp 0x10072aa8 */
L_10072A50:
    PUSH32(esp, MEM32(edi + 0x18)); /* 0x10072A50: push dword ptr [edi + 0x18] */
    RECOMP_ICALL(MEM32(0x100E514C)); /* 0x10072A53: call dword ptr [0x100e514c] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x10072A59: mov esi, eax */
    /* test esi, esi */ /* 0x10072A5B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10072AA5; /* 0x10072A5D: jne 0x10072aa5 */
L_10072A5F:
    PUSH32(esp, 0x1Cu); /* 0x10072A5F: push 0x1c */
    RECOMP_CALL(sub_1000EE11); /* 0x10072A61: call 0x1000ee11 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x10072A66: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x10072A68: pop ecx */
    /* test esi, esi */ /* 0x10072A69: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10072A84; /* 0x10072A6B: je 0x10072a84 */
L_10072A6D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10072A6D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x8) = eax; /* 0x10072A6F: mov dword ptr [esi + 8], eax */
    MEM32(esi + 0xC) = eax; /* 0x10072A72: mov dword ptr [esi + 0xc], eax */
    MEM32(esi + 0x10) = eax; /* 0x10072A75: mov dword ptr [esi + 0x10], eax */
    MEM32(esi + 0x14) = eax; /* 0x10072A78: mov dword ptr [esi + 0x14], eax */
    MEM32(esi + 0x18) = 1; /* 0x10072A7B: mov dword ptr [esi + 0x18], 1 */
    goto L_10072A86; /* 0x10072A82: jmp 0x10072a86 */
L_10072A84:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x10072A84: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_10072A86:
    PUSH32(esp, esi); /* 0x10072A86: push esi */
    ecx = edi + 0xC8; /* 0x10072A87: lea ecx, [edi + 0xc8] */
    RECOMP_CALL(sub_10023B15); /* 0x10072A8D: call 0x10023b15 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x10072A92: push esi */
    PUSH32(esp, MEM32(edi + 0x18)); /* 0x10072A93: push dword ptr [edi + 0x18] */
    RECOMP_ICALL(MEM32(0x100E5154)); /* 0x10072A96: call dword ptr [0x100e5154] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10072A9C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10072AA5; /* 0x10072A9E: jne 0x10072aa5 */
L_10072AA0:
    RECOMP_CALL(sub_1006EE8E); /* 0x10072AA0: call 0x1006ee8e */
    RECOMP_FLAGS_IN();
L_10072AA5:
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x8) = MEM32(esi + 0x8) + 1; /* 0x10072AA5: inc dword ptr [esi + 8] */
    _flag_k = FK_INC;
L_10072AA8:
    esi = ebx + 0xC; /* 0x10072AA8: lea esi, [ebx + 0xc] */
    /* test MEM32(esi), 0x0FFFFFFFu */ /* 0x10072AAB: test dword ptr [esi], 0xfffffff */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0x0FFFFFFFu);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10072ABA; /* 0x10072AB1: je 0x10072aba */
L_10072AB3:
    eax = MEM32(ebx); /* 0x10072AB3: mov eax, dword ptr [ebx] */
    ecx = ebx; /* 0x10072AB5: mov ecx, ebx */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x10072AB7: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_10072ABA:
    eax = MEM32(edi + 0x1B8); /* 0x10072ABA: mov eax, dword ptr [edi + 0x1b8] */
    ecx = MEM32(edi + 0x1B4); /* 0x10072AC0: mov ecx, dword ptr [edi + 0x1b4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x10072AC6: sub ecx, eax */
    _flag_k = FK_CMP;
    /* test ecx, ecx */ /* 0x10072AC8: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_10072ADF; /* 0x10072ACA: jle 0x10072adf */
L_10072ACC:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x10072ACC: sub esp, 0x10 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x10072ACF: mov ecx, esp */
    PUSH32(esp, esi); /* 0x10072AD1: push esi */
    RECOMP_CALL(sub_1002762F); /* 0x10072AD2: call 0x1002762f */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi); /* 0x10072AD7: mov eax, dword ptr [edi] */
    ecx = edi; /* 0x10072AD9: mov ecx, edi */
    PUSH32(esp, ebx); /* 0x10072ADB: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x38)); /* 0x10072ADC: call dword ptr [eax + 0x38] */
    RECOMP_FLAGS_IN();
L_10072ADF:
    edi = POP32_VAL(esp); /* 0x10072ADF: pop edi */
    esi = POP32_VAL(esp); /* 0x10072AE0: pop esi */
    ebx = POP32_VAL(esp); /* 0x10072AE1: pop ebx */
    esp = ebp; /* 0x10072AE2: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10072AE4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x10072AE5: ret 8 */
L_10072AE8:
    eax = ebp + 0x8; /* 0x10072AE8: lea eax, [ebp + 8] */
    MEM32(ebp + 0x8) = 0x10072B14u; /* 0x10072AEB: mov dword ptr [ebp + 8], 0x10072b14 */
    PUSH32(esp, eax); /* 0x10072AF2: push eax */
    ecx = ebp + (-0xC); /* 0x10072AF3: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_1009DD30); /* 0x10072AF6: call 0x1009dd30 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x100DCEE8u); /* 0x10072AFB: push 0x100dcee8 */
    eax = ebp + (-0xC); /* 0x10072B00: lea eax, [ebp - 0xc] */
    MEM32(ebp + (-0xC)) = 0x1006754Cu; /* 0x10072B03: mov dword ptr [ebp - 0xc], 0x1006754c */
    PUSH32(esp, eax); /* 0x10072B0A: push eax */
    RECOMP_CALL(sub_100192EB); /* 0x10072B0B: call 0x100192eb */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x10072B10u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10072695(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10072695u);

L_10072695:
    PUSH32(esp, ebp); /* 0x10072695: push ebp */
    ebp = esp; /* 0x10072696: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x10072698: sub esp, 0x18 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1007269B: push ebx */
    PUSH32(esp, esi); /* 0x1007269C: push esi */
    PUSH32(esp, edi); /* 0x1007269D: push edi */
    esi = ecx; /* 0x1007269E: mov esi, ecx */
    RECOMP_CALL(sub_10023AF4); /* 0x100726A0: call 0x10023af4 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x8); /* 0x100726A5: mov edi, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x100726A8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100726B1; /* 0x100726AA: je 0x100726b1 */
L_100726AC:
    /* cmp MEM32(eax + 0x18), esi */ /* 0x100726AC: cmp dword ptr [eax + 0x18], esi */
    _flag_a = (uint32_t)(MEM32(eax + 0x18)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100726BB; /* 0x100726AF: je 0x100726bb */
L_100726B1:
    MEM32(edi + 0xE4) = 1; /* 0x100726B1: mov dword ptr [edi + 0xe4], 1 */
L_100726BB:
    eax = MEM32(esi + 0x100); /* 0x100726BB: mov eax, dword ptr [esi + 0x100] */
    ebx = MEM32(eax + 0x4); /* 0x100726C1: mov ebx, dword ptr [eax + 4] */
    /* cmp MEM32(ebx + 0x1B8), 0 */ /* 0x100726C4: cmp dword ptr [ebx + 0x1b8], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x1B8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_100726E7; /* 0x100726CB: jle 0x100726e7 */
L_100726CD:
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100726CD: sub esp, 0x10 */
    _flag_k = FK_CMP;
    eax = ebp + 0xC; /* 0x100726D0: lea eax, [ebp + 0xc] */
    ecx = esp; /* 0x100726D3: mov ecx, esp */
    PUSH32(esp, eax); /* 0x100726D5: push eax */
    RECOMP_CALL(sub_1002762F); /* 0x100726D6: call 0x1002762f */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx); /* 0x100726DB: mov eax, dword ptr [ebx] */
    ecx = ebx; /* 0x100726DD: mov ecx, ebx */
    PUSH32(esp, edi); /* 0x100726DF: push edi */
    RECOMP_ICALL(MEM32(eax + 0x3C)); /* 0x100726E0: call dword ptr [eax + 0x3c] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x100726E3: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007273F; /* 0x100726E5: jne 0x1007273f */
L_100726E7:
    eax = MEM32(esi); /* 0x100726E7: mov eax, dword ptr [esi] */
    ecx = esi; /* 0x100726E9: mov ecx, esi */
    PUSH32(esp, edi); /* 0x100726EB: push edi */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x100726EC: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    ecx = 0x0FFFFFFFu; /* 0x100726EF: mov ecx, 0xfffffff */
    /* test MEM32(esi + 0xC), ecx */ /* 0x100726F4: test dword ptr [esi + 0xc], ecx */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10072712; /* 0x100726F7: je 0x10072712 */
L_100726F9:
    eax = MEM32(esi + 0xC); /* 0x100726F9: mov eax, dword ptr [esi + 0xc] */
    _flag_a = (uint32_t)((eax ^ MEM32(ebp + 0xC))); _flag_b = (uint32_t)((eax ^ MEM32(ebp + 0xC)));
    eax = eax ^ MEM32(ebp + 0xC); /* 0x100726FC: xor eax, dword ptr [ebp + 0xc] */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, eax */ /* 0x100726FF: test ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10072712; /* 0x10072701: jne 0x10072712 */
L_10072703:
    eax = MEM32(ebp + 0x14); /* 0x10072703: mov eax, dword ptr [ebp + 0x14] */
    /* cmp eax, MEM32(esi + 0x14) */ /* 0x10072706: cmp eax, dword ptr [esi + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10072712; /* 0x10072709: jne 0x10072712 */
L_1007270B:
    eax = MEM32(esi); /* 0x1007270B: mov eax, dword ptr [esi] */
    ecx = esi; /* 0x1007270D: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1007270F: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_10072712:
    /* cmp MEM32(ebx + 0x1B4), 0 */ /* 0x10072712: cmp dword ptr [ebx + 0x1b4], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x1B4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1007273F; /* 0x10072719: jle 0x1007273f */
L_1007271B:
    eax = ebp + 0xC; /* 0x1007271B: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x1007271E: push eax */
    ecx = ebp + (-0x14); /* 0x1007271F: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_1002762F); /* 0x10072722: call 0x1002762f */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x10072727: sub esp, 0x10 */
    _flag_k = FK_CMP;
    eax = ebp + (-0x14); /* 0x1007272A: lea eax, [ebp - 0x14] */
    ecx = esp; /* 0x1007272D: mov ecx, esp */
    PUSH32(esp, eax); /* 0x1007272F: push eax */
    RECOMP_CALL(sub_1002762F); /* 0x10072730: call 0x1002762f */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xBu); /* 0x10072735: push 0xb */
    PUSH32(esp, esi); /* 0x10072737: push esi */
    ecx = ebx; /* 0x10072738: mov ecx, ebx */
    RECOMP_CALL(sub_1007370B); /* 0x1007273A: call 0x1007370b */
    RECOMP_FLAGS_IN();
L_1007273F:
    MEM32(edi + 0xE4) = 0; /* 0x1007273F: mov dword ptr [edi + 0xe4], 0 */
    edi = POP32_VAL(esp); /* 0x10072749: pop edi */
    esi = POP32_VAL(esp); /* 0x1007274A: pop esi */
    ebx = POP32_VAL(esp); /* 0x1007274B: pop ebx */
    esp = ebp; /* 0x1007274C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1007274E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x1007274F: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_10072752(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10072752u);

L_10072752:
    PUSH32(esp, ebp); /* 0x10072752: push ebp */
    ebp = esp; /* 0x10072753: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x60u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x60u; /* 0x10072755: sub esp, 0x60 */
    _flag_k = FK_CMP;
    eax = MEM32(0x100DF7B8); /* 0x10072758: mov eax, dword ptr [0x100df7b8] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1007275D: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1007275F: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x10072762: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x10072765: push ebx */
    PUSH32(esp, esi); /* 0x10072766: push esi */
    PUSH32(esp, edi); /* 0x10072767: push edi */
    edi = ecx; /* 0x10072768: mov edi, ecx */
    MEM8(ebp + (-0x5C)) = (uint8_t)(LO8(eax)); /* 0x1007276A: mov byte ptr [ebp - 0x5c], al */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1007276D: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(ebp + (-0x49)) = (uint8_t)(LO8(ebx)); /* 0x1007276F: mov byte ptr [ebp - 0x49], bl */
    ecx = MEM32(edi + 0x98); /* 0x10072772: mov ecx, dword ptr [edi + 0x98] */
    MEM32(ebp + (-0x60)) = ecx; /* 0x10072778: mov dword ptr [ebp - 0x60], ecx */
    /* test ecx, ecx */ /* 0x1007277B: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1007289C; /* 0x1007277D: jle 0x1007289c */
L_10072783:
    eax = ebx; /* 0x10072783: mov eax, ebx */
    MEM32(ebp + (-0x54)) = ebx; /* 0x10072785: mov dword ptr [ebp - 0x54], ebx */
    MEM8(ebp + (-0x4A)) = (uint8_t)(LO8(ebx)); /* 0x10072788: mov byte ptr [ebp - 0x4a], bl */
    MEM32(ebp + (-0x50)) = eax; /* 0x1007278B: mov dword ptr [ebp - 0x50], eax */
L_1007278E:
    ecx = edi + 0x58; /* 0x1007278E: lea ecx, [edi + 0x58] */
    PUSH32(esp, eax); /* 0x10072791: push eax */
    RECOMP_CALL(sub_10072F00); /* 0x10072792: call 0x10072f00 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x10072797: mov esi, eax */
    /* test esi, esi */ /* 0x10072799: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007281C; /* 0x1007279B: je 0x1007281c */
L_1007279D:
    ecx = MEM32(esi); /* 0x1007279D: mov ecx, dword ptr [esi] */
    /* cmp MEM32(esi + 0x4), ecx */ /* 0x1007279F: cmp dword ptr [esi + 4], ecx */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_100727B5; /* 0x100727A2: jg 0x100727b5 */
L_100727A4:
    eax = MEM32(esi + 0x50); /* 0x100727A4: mov eax, dword ptr [esi + 0x50] */
    /* cmp eax, MEM32(esi + 0x4C) */ /* 0x100727A7: cmp eax, dword ptr [esi + 0x4c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x4C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_100727B5; /* 0x100727AA: jg 0x100727b5 */
L_100727AC:
    /* cmp MEM32(esi + 0x38), 1 */ /* 0x100727AC: cmp dword ptr [esi + 0x38], 1 */
    _flag_a = (uint32_t)(MEM32(esi + 0x38)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x100727B0: sete al */
    goto L_10072819; /* 0x100727B3: jmp 0x10072819 */
L_100727B5:
    eax = ebp + (-0x4A); /* 0x100727B5: lea eax, [ebp - 0x4a] */
    ecx = esi; /* 0x100727B8: mov ecx, esi */
    PUSH32(esp, eax); /* 0x100727BA: push eax */
    PUSH32(esp, MEM32(ebp + (-0x5C))); /* 0x100727BB: push dword ptr [ebp - 0x5c] */
    RECOMP_CALL(sub_1007B032); /* 0x100727BE: call 0x1007b032 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x58)) = eax; /* 0x100727C3: mov dword ptr [ebp - 0x58], eax */
    /* test eax, eax */ /* 0x100727C6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100728FA; /* 0x100727C8: jne 0x100728fa */
L_100727CE:
    /* cmp MEM8(ebp + (-0x4A)), LO8(ebx) */ /* 0x100727CE: cmp byte ptr [ebp - 0x4a], bl */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4A))) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_100727FD; /* 0x100727D1: jne 0x100727fd */
L_100727D3:
    eax = MEM32(ebp + (-0x54)); /* 0x100727D3: mov eax, dword ptr [ebp - 0x54] */
    /* cmp eax, 0xFu */ /* 0x100727D6: cmp eax, 0xf */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_100727E8; /* 0x100727D9: jge 0x100727e8 */
L_100727DB:
    ecx = MEM32(ebp + (-0x50)); /* 0x100727DB: mov ecx, dword ptr [ebp - 0x50] */
    MEM32(ebp + eax * 4 + (-0x48)) = ecx; /* 0x100727DE: mov dword ptr [ebp + eax*4 - 0x48], ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x100727E2: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x54)) = eax; /* 0x100727E3: mov dword ptr [ebp - 0x54], eax */
    goto L_10072822; /* 0x100727E6: jmp 0x10072822 */
L_100727E8:
    PUSH32(esp, MEM32(ebp + (-0x5C))); /* 0x100727E8: push dword ptr [ebp - 0x5c] */
    ecx = esi; /* 0x100727EB: mov ecx, esi */
    RECOMP_CALL(sub_1007B0C4); /* 0x100727ED: call 0x1007b0c4 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x58)) = eax; /* 0x100727F2: mov dword ptr [ebp - 0x58], eax */
    /* test eax, eax */ /* 0x100727F5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100728FA; /* 0x100727F7: jne 0x100728fa */
L_100727FD:
    /* cmp MEM32(esi + 0x38), 1 */ /* 0x100727FD: cmp dword ptr [esi + 0x38], 1 */
    _flag_a = (uint32_t)(MEM32(esi + 0x38)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10072817; /* 0x10072801: jne 0x10072817 */
L_10072803:
    eax = MEM32(esi); /* 0x10072803: mov eax, dword ptr [esi] */
    /* cmp MEM32(esi + 0x4), eax */ /* 0x10072805: cmp dword ptr [esi + 4], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_10072817; /* 0x10072808: jg 0x10072817 */
L_1007280A:
    eax = MEM32(esi + 0x50); /* 0x1007280A: mov eax, dword ptr [esi + 0x50] */
    /* cmp eax, MEM32(esi + 0x4C) */ /* 0x1007280D: cmp eax, dword ptr [esi + 0x4c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x4C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_10072817; /* 0x10072810: jg 0x10072817 */
L_10072812:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10072812: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10072814: inc eax */
    _flag_k = FK_INC;
    goto L_10072819; /* 0x10072815: jmp 0x10072819 */
L_10072817:
    eax = ebx; /* 0x10072817: mov eax, ebx */
L_10072819:
    _flag_a = (uint32_t)((MEM8(ebp + (-0x49)) | LO8(eax))) << 24; _flag_b = (uint32_t)((MEM8(ebp + (-0x49)) | LO8(eax))) << 24;
    MEM8(ebp + (-0x49)) = (uint8_t)(MEM8(ebp + (-0x49)) | LO8(eax)); /* 0x10072819: or byte ptr [ebp - 0x49], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_1007281C:
    eax = MEM32(ebp + (-0x54)); /* 0x1007281C: mov eax, dword ptr [ebp - 0x54] */
    ecx = MEM32(ebp + (-0x50)); /* 0x1007281F: mov ecx, dword ptr [ebp - 0x50] */
L_10072822:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x10072822: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x50)) = ecx; /* 0x10072823: mov dword ptr [ebp - 0x50], ecx */
    /* cmp ecx, MEM32(ebp + (-0x60)) */ /* 0x10072826: cmp ecx, dword ptr [ebp - 0x60] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x60)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_10072832; /* 0x10072829: jge 0x10072832 */
L_1007282B:
    eax = ecx; /* 0x1007282B: mov eax, ecx */
    RECOMP_BACKEDGE();
    goto L_1007278E; /* 0x1007282D: jmp 0x1007278e */
L_10072832:
    /* test eax, eax */ /* 0x10072832: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1007289C; /* 0x10072834: jle 0x1007289c */
L_10072836:
    ecx = ebx; /* 0x10072836: mov ecx, ebx */
    MEM32(ebp + (-0x50)) = ecx; /* 0x10072838: mov dword ptr [ebp - 0x50], ecx */
L_1007283B:
    PUSH32(esp, MEM32(ebp + ecx * 4 + (-0x48))); /* 0x1007283B: push dword ptr [ebp + ecx*4 - 0x48] */
    ecx = edi + 0x58; /* 0x1007283F: lea ecx, [edi + 0x58] */
    RECOMP_CALL(sub_10072F00); /* 0x10072842: call 0x10072f00 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x10072847: mov esi, eax */
    /* test esi, esi */ /* 0x10072849: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10072890; /* 0x1007284B: je 0x10072890 */
L_1007284D:
    ecx = MEM32(esi + 0x4); /* 0x1007284D: mov ecx, dword ptr [esi + 4] */
    /* cmp ecx, MEM32(esi) */ /* 0x10072850: cmp ecx, dword ptr [esi] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1007285C; /* 0x10072852: jg 0x1007285c */
L_10072854:
    eax = MEM32(esi + 0x50); /* 0x10072854: mov eax, dword ptr [esi + 0x50] */
    /* cmp eax, MEM32(esi + 0x4C) */ /* 0x10072857: cmp eax, dword ptr [esi + 0x4c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x4C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_10072871; /* 0x1007285A: jle 0x10072871 */
L_1007285C:
    PUSH32(esp, MEM32(ebp + (-0x5C))); /* 0x1007285C: push dword ptr [ebp - 0x5c] */
    ecx = esi; /* 0x1007285F: mov ecx, esi */
    RECOMP_CALL(sub_1007B0C4); /* 0x10072861: call 0x1007b0c4 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x58)) = eax; /* 0x10072866: mov dword ptr [ebp - 0x58], eax */
    /* test eax, eax */ /* 0x10072869: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100728FA; /* 0x1007286B: jne 0x100728fa */
L_10072871:
    /* cmp MEM32(esi + 0x38), 1 */ /* 0x10072871: cmp dword ptr [esi + 0x38], 1 */
    _flag_a = (uint32_t)(MEM32(esi + 0x38)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007288B; /* 0x10072875: jne 0x1007288b */
L_10072877:
    eax = MEM32(esi + 0x4); /* 0x10072877: mov eax, dword ptr [esi + 4] */
    /* cmp eax, MEM32(esi) */ /* 0x1007287A: cmp eax, dword ptr [esi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1007288B; /* 0x1007287C: jg 0x1007288b */
L_1007287E:
    eax = MEM32(esi + 0x50); /* 0x1007287E: mov eax, dword ptr [esi + 0x50] */
    /* cmp eax, MEM32(esi + 0x4C) */ /* 0x10072881: cmp eax, dword ptr [esi + 0x4c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x4C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1007288B; /* 0x10072884: jg 0x1007288b */
L_10072886:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10072886: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10072888: inc eax */
    _flag_k = FK_INC;
    goto L_1007288D; /* 0x10072889: jmp 0x1007288d */
L_1007288B:
    eax = ebx; /* 0x1007288B: mov eax, ebx */
L_1007288D:
    _flag_a = (uint32_t)((MEM8(ebp + (-0x49)) | LO8(eax))) << 24; _flag_b = (uint32_t)((MEM8(ebp + (-0x49)) | LO8(eax))) << 24;
    MEM8(ebp + (-0x49)) = (uint8_t)(MEM8(ebp + (-0x49)) | LO8(eax)); /* 0x1007288D: or byte ptr [ebp - 0x49], al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_10072890:
    ecx = MEM32(ebp + (-0x50)); /* 0x10072890: mov ecx, dword ptr [ebp - 0x50] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x10072893: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x50)) = ecx; /* 0x10072894: mov dword ptr [ebp - 0x50], ecx */
    /* cmp ecx, MEM32(ebp + (-0x54)) */ /* 0x10072897: cmp ecx, dword ptr [ebp - 0x54] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x54)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1007283B; /* 0x1007289A: jl 0x1007283b */
L_1007289C:
    eax = ebp + (-0x58); /* 0x1007289C: lea eax, [ebp - 0x58] */
    PUSH32(esp, eax); /* 0x1007289F: push eax */
    ecx = edi + 0x34; /* 0x100728A0: lea ecx, [edi + 0x34] */
    RECOMP_CALL(sub_10072D7D); /* 0x100728A3: call 0x10072d7d */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x100728A8: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100728B5; /* 0x100728AA: je 0x100728b5 */
L_100728AC:
    eax = MEM32(ebp + (-0x58)); /* 0x100728AC: mov eax, dword ptr [ebp - 0x58] */
    MEM8(eax + 0x11) = (uint8_t)(1); /* 0x100728AF: mov byte ptr [eax + 0x11], 1 */
    goto L_100728FA; /* 0x100728B3: jmp 0x100728fa */
L_100728B5:
    eax = MEM32(edi + 0xE8); /* 0x100728B5: mov eax, dword ptr [edi + 0xe8] */
    /* test eax, eax */ /* 0x100728BB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_100728F8; /* 0x100728BD: jle 0x100728f8 */
L_100728BF:
    /* cmp MEM8(ebp + (-0x49)), LO8(ebx) */ /* 0x100728BF: cmp byte ptr [ebp - 0x49], bl */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x49))) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100728F8; /* 0x100728C2: je 0x100728f8 */
L_100728C4:
    /* cmp MEM32(edi + 0x98), ebx */ /* 0x100728C4: cmp dword ptr [edi + 0x98], ebx */
    _flag_a = (uint32_t)(MEM32(edi + 0x98)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_100728F8; /* 0x100728CA: jle 0x100728f8 */
L_100728CC:
    PUSH32(esp, ebx); /* 0x100728CC: push ebx */
    ecx = edi + 0x58; /* 0x100728CD: lea ecx, [edi + 0x58] */
    RECOMP_CALL(sub_10072F00); /* 0x100728D0: call 0x10072f00 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100728D5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100728EF; /* 0x100728D7: je 0x100728ef */
L_100728D9:
    /* cmp MEM32(eax + 0x38), 1 */ /* 0x100728D9: cmp dword ptr [eax + 0x38], 1 */
    _flag_a = (uint32_t)(MEM32(eax + 0x38)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100728EF; /* 0x100728DD: jne 0x100728ef */
L_100728DF:
    ecx = MEM32(eax + 0x50); /* 0x100728DF: mov ecx, dword ptr [eax + 0x50] */
    /* cmp ecx, MEM32(eax + 0x4C) */ /* 0x100728E2: cmp ecx, dword ptr [eax + 0x4c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x4C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_100728EF; /* 0x100728E5: jg 0x100728ef */
L_100728E7:
    PUSH32(esp, eax); /* 0x100728E7: push eax */
    ecx = edi; /* 0x100728E8: mov ecx, edi */
    RECOMP_CALL(sub_10072966); /* 0x100728EA: call 0x10072966 */
    RECOMP_FLAGS_IN();
L_100728EF:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x100728EF: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, MEM32(edi + 0x98) */ /* 0x100728F0: cmp ebx, dword ptr [edi + 0x98] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(edi + 0x98));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_100728CC; /* 0x100728F6: jl 0x100728cc */
L_100728F8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100728F8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_100728FA:
    ecx = MEM32(ebp + (-0x4)); /* 0x100728FA: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x100728FD: pop edi */
    esi = POP32_VAL(esp); /* 0x100728FE: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x100728FF: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x10072901: pop ebx */
    RECOMP_CALL(sub_1000F7C6); /* 0x10072902: call 0x1000f7c6 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x10072907: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10072909: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1007290A: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1007290D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007290Du);

L_1007290D:
    PUSH32(esp, ebx); /* 0x1007290D: push ebx */
    PUSH32(esp, esi); /* 0x1007290E: push esi */
    esi = ecx; /* 0x1007290F: mov esi, ecx */
    PUSH32(esp, edi); /* 0x10072911: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x10072912: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x98), edi */ /* 0x10072914: cmp dword ptr [esi + 0x98], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x98)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_10072951; /* 0x1007291A: jle 0x10072951 */
L_1007291C:
    PUSH32(esp, edi); /* 0x1007291C: push edi */
    ecx = esi + 0x58; /* 0x1007291D: lea ecx, [esi + 0x58] */
    RECOMP_CALL(sub_10072F00); /* 0x10072920: call 0x10072f00 */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x10072925: mov edx, eax */
    /* test edx, edx */ /* 0x10072927: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10072948; /* 0x10072929: je 0x10072948 */
L_1007292B:
    ecx = MEM32(edx + 0x4); /* 0x1007292B: mov ecx, dword ptr [edx + 4] */
    /* cmp ecx, MEM32(edx) */ /* 0x1007292E: cmp ecx, dword ptr [edx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_10072962; /* 0x10072930: jg 0x10072962 */
L_10072932:
    eax = MEM32(edx + 0x50); /* 0x10072932: mov eax, dword ptr [edx + 0x50] */
    /* cmp eax, MEM32(edx + 0x4C) */ /* 0x10072935: cmp eax, dword ptr [edx + 0x4c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x4C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_10072962; /* 0x10072938: jg 0x10072962 */
L_1007293A:
    /* cmp MEM32(edx + 0x38), 1 */ /* 0x1007293A: cmp dword ptr [edx + 0x38], 1 */
    _flag_a = (uint32_t)(MEM32(edx + 0x38)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10072948; /* 0x1007293E: jne 0x10072948 */
L_10072940:
    PUSH32(esp, edx); /* 0x10072940: push edx */
    ecx = esi; /* 0x10072941: mov ecx, esi */
    RECOMP_CALL(sub_10072966); /* 0x10072943: call 0x10072966 */
    RECOMP_FLAGS_IN();
L_10072948:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x10072948: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(esi + 0x98) */ /* 0x10072949: cmp edi, dword ptr [esi + 0x98] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x98));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1007291C; /* 0x1007294F: jl 0x1007291c */
L_10072951:
    edx = MEM32(esi + 0x50); /* 0x10072951: mov edx, dword ptr [esi + 0x50] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10072954: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(esi + 0x4C); /* 0x10072956: mov ecx, dword ptr [esi + 0x4c] */
    /* cmp ecx, edx */ /* 0x10072959: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x1007295B: setne al */
L_1007295E:
    edi = POP32_VAL(esp); /* 0x1007295E: pop edi */
    esi = POP32_VAL(esp); /* 0x1007295F: pop esi */
    ebx = POP32_VAL(esp); /* 0x10072960: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10072961: ret  */
L_10072962:
    eax = edx; /* 0x10072962: mov eax, edx */
    RECOMP_BACKEDGE();
    goto L_1007295E; /* 0x10072964: jmp 0x1007295e */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10072966(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10072966u);

L_10072966:
    PUSH32(esp, ebp); /* 0x10072966: push ebp */
    ebp = esp; /* 0x10072967: mov ebp, esp */
    PUSH32(esp, esi); /* 0x10072969: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1007296A: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1007296D: push edi */
    PUSH32(esp, ecx); /* 0x1007296E: push ecx */
    edi = ecx; /* 0x1007296F: mov edi, ecx */
    eax = esi + 0x2C; /* 0x10072971: lea eax, [esi + 0x2c] */
    PUSH32(esp, MEM32(eax)); /* 0x10072974: push dword ptr [eax] */
    PUSH32(esp, eax); /* 0x10072976: push eax */
    ecx = edi + 0xA8; /* 0x10072977: lea ecx, [edi + 0xa8] */
    RECOMP_CALL(sub_10072FDB); /* 0x1007297D: call 0x10072fdb */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x10072982: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_100729B6; /* 0x10072984: je 0x100729b6 */
L_10072986:
    eax = MEM32(esi + 0x50); /* 0x10072986: mov eax, dword ptr [esi + 0x50] */
    ecx = esi + 0x1C; /* 0x10072989: lea ecx, [esi + 0x1c] */
    /* cmp eax, MEM32(esi + 0x4C) */ /* 0x1007298C: cmp eax, dword ptr [esi + 0x4c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x4C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi + 0x3C) = edi; /* 0x1007298F: mov dword ptr [esi + 0x3c], edi */
    eax = MEM32(edi + 0x100); /* 0x10072992: mov eax, dword ptr [edi + 0x100] */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x10072998: push dword ptr [eax + 4] */
    PUSH32(esp, esi); /* 0x1007299B: push esi */
    if (CMP_G(_flag_a, _flag_b)) goto L_100729AC; /* 0x1007299C: jg 0x100729ac */
L_1007299E:
    PUSH32(esp, 0x1007B109u); /* 0x1007299E: push 0x1007b109 */
    RECOMP_CALL(sub_10074CBB); /* 0x100729A3: call 0x10074cbb */
    RECOMP_FLAGS_IN();
    SET_LO8(eax, 1); /* 0x100729A8: mov al, 1 */
    goto L_100729B8; /* 0x100729AA: jmp 0x100729b8 */
L_100729AC:
    PUSH32(esp, 0x1007B12Du); /* 0x100729AC: push 0x1007b12d */
    RECOMP_CALL(sub_10074CBB); /* 0x100729B1: call 0x10074cbb */
    RECOMP_FLAGS_IN();
L_100729B6:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x100729B6: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_100729B8:
    edi = POP32_VAL(esp); /* 0x100729B8: pop edi */
    esi = POP32_VAL(esp); /* 0x100729B9: pop esi */
    ebp = POP32_VAL(esp); /* 0x100729BA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x100729BB: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_10072B14(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10072B14u);

L_10072B14:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) goto L_10072B88; /* 0x10072B14: jo 0x10072b88 */
L_10072B16:
    /* outsd: no port I/O under Win32 */ /* 0x10072B16: outsd dx, dword ptr [esi] */
    void_lift_trap(0x10072B17u, "arpl word ptr [eax], ax");
    PUSH32(esp, ebp); /* 0x10072B19: push ebp */
    ebp = esp; /* 0x10072B1A: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x10072B1C: push ecx */
    PUSH32(esp, ecx); /* 0x10072B1D: push ecx */
    PUSH32(esp, ebx); /* 0x10072B1E: push ebx */
    ebx = ecx; /* 0x10072B1F: mov ebx, ecx */
    PUSH32(esp, esi); /* 0x10072B21: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x10072B22: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x10072B24: push edi */
    ecx = MEM32(ebx + 0xE8); /* 0x10072B25: mov ecx, dword ptr [ebx + 0xe8] */
    MEM32(ebp + (-0x4)) = ecx; /* 0x10072B2B: mov dword ptr [ebp - 4], ecx */
    /* test ecx, ecx */ /* 0x10072B2E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_10072B8C; /* 0x10072B30: jle 0x10072b8c */
L_10072B32:
    edi = ebx + 0xA8; /* 0x10072B32: lea edi, [ebx + 0xa8] */
    eax = ecx; /* 0x10072B38: mov eax, ecx */
L_10072B3A:
    ecx = MEM32(edi + 0x2C); /* 0x10072B3A: mov ecx, dword ptr [edi + 0x2c] */
    edx = esi; /* 0x10072B3D: mov edx, esi */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : (((edx) >> 31) & 1u)); /* 0x10072B3F: sar edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> ((LO8(ecx)) & 31))), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> ((LO8(ecx)) & 31));
    /* cmp edx, MEM32(edi + 0x3C) */ /* 0x10072B41: cmp edx, dword ptr [edi + 0x3c] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(edi + 0x3C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_10072B87; /* 0x10072B44: jge 0x10072b87 */
L_10072B46:
    ecx = MEM32(edi + 0x38); /* 0x10072B46: mov ecx, dword ptr [edi + 0x38] */
    eax = MEM32(edi + 0x34); /* 0x10072B49: mov eax, dword ptr [edi + 0x34] */
    /* cmp edx, ecx */ /* 0x10072B4C: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_10072B61; /* 0x10072B4E: jl 0x10072b61 */
L_10072B50:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x10072B50: sub edx, ecx */
    _flag_k = FK_CMP;
    eax = MEM32(eax + ecx * 4 + (-0x4)); /* 0x10072B52: mov eax, dword ptr [eax + ecx*4 - 4] */
    if (/* sub result */ CMP_S(_flag_a, _flag_b)) goto L_10072B64; /* 0x10072B56: js 0x10072b64 */
L_10072B58:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x10072B58: inc edx */
    _flag_k = FK_INC;
L_10072B59:
    eax = MEM32(eax + 0x4); /* 0x10072B59: mov eax, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x10072B5C: dec edx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_10072B64; /* 0x10072B5D: je 0x10072b64 */
L_10072B5F:
    RECOMP_BACKEDGE();
    goto L_10072B59; /* 0x10072B5F: jmp 0x10072b59 */
L_10072B61:
    eax = MEM32(eax + edx * 4); /* 0x10072B61: mov eax, dword ptr [eax + edx*4] */
L_10072B64:
    ecx = MEM32(edi + 0x28); /* 0x10072B64: mov ecx, dword ptr [edi + 0x28] */
    eax = MEM32(eax); /* 0x10072B67: mov eax, dword ptr [eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x10072B69: dec ecx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    ecx = ecx & esi; /* 0x10072B6A: and ecx, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + ecx * 4); /* 0x10072B6C: mov eax, dword ptr [eax + ecx*4] */
    MEM32(ebp + (-0x8)) = eax; /* 0x10072B6F: mov dword ptr [ebp - 8], eax */
    /* test eax, eax */ /* 0x10072B72: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10072B84; /* 0x10072B74: je 0x10072b84 */
L_10072B76:
    PUSH32(esp, ecx); /* 0x10072B76: push ecx */
    PUSH32(esp, esi); /* 0x10072B77: push esi */
    PUSH32(esp, eax); /* 0x10072B78: push eax */
    ecx = edi; /* 0x10072B79: mov ecx, edi */
    RECOMP_CALL(sub_10072FDB); /* 0x10072B7B: call 0x10072fdb */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x10072B80: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10072B95; /* 0x10072B82: jne 0x10072b95 */
L_10072B84:
    eax = MEM32(ebp + (-0x4)); /* 0x10072B84: mov eax, dword ptr [ebp - 4] */
L_10072B87:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10072B87: inc esi */
    _flag_k = FK_INC;
L_10072B88:
    /* cmp esi, eax */ /* 0x10072B88: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_10072B3A; /* 0x10072B8A: jl 0x10072b3a */
L_10072B8C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10072B8C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_10072B8E:
    edi = POP32_VAL(esp); /* 0x10072B8E: pop edi */
    esi = POP32_VAL(esp); /* 0x10072B8F: pop esi */
    ebx = POP32_VAL(esp); /* 0x10072B90: pop ebx */
    esp = ebp; /* 0x10072B91: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10072B93: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10072B94: ret  */
L_10072B95:
    esi = MEM32(ebp + (-0x8)); /* 0x10072B95: mov esi, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x10072B98: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(esi + 0x8); /* 0x10072B9A: mov esi, dword ptr [esi + 8] */
    ecx = esi + 0x38; /* 0x10072B9D: lea ecx, [esi + 0x38] */
    { uint32_t _tmp = MEM32(ecx); /* 0x10072BA0: xchg dword ptr [ecx], edx */
      MEM32(ecx) = edx;
      edx = _tmp; }
    ecx = MEM32(ebx + 0x100); /* 0x10072BA2: mov ecx, dword ptr [ebx + 0x100] */
    RECOMP_CALL(sub_1006D563); /* 0x10072BA8: call 0x1006d563 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x10072BAD: mov eax, esi */
    RECOMP_BACKEDGE();
    goto L_10072B8E; /* 0x10072BAF: jmp 0x10072b8e */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10072B19(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10072B19u);

L_10072B19:
    PUSH32(esp, ebp); /* 0x10072B19: push ebp */
    ebp = esp; /* 0x10072B1A: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x10072B1C: push ecx */
    PUSH32(esp, ecx); /* 0x10072B1D: push ecx */
    PUSH32(esp, ebx); /* 0x10072B1E: push ebx */
    ebx = ecx; /* 0x10072B1F: mov ebx, ecx */
    PUSH32(esp, esi); /* 0x10072B21: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x10072B22: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x10072B24: push edi */
    ecx = MEM32(ebx + 0xE8); /* 0x10072B25: mov ecx, dword ptr [ebx + 0xe8] */
    MEM32(ebp + (-0x4)) = ecx; /* 0x10072B2B: mov dword ptr [ebp - 4], ecx */
    /* test ecx, ecx */ /* 0x10072B2E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_10072B8C; /* 0x10072B30: jle 0x10072b8c */
L_10072B32:
    edi = ebx + 0xA8; /* 0x10072B32: lea edi, [ebx + 0xa8] */
    eax = ecx; /* 0x10072B38: mov eax, ecx */
L_10072B3A:
    ecx = MEM32(edi + 0x2C); /* 0x10072B3A: mov ecx, dword ptr [edi + 0x2c] */
    edx = esi; /* 0x10072B3D: mov edx, esi */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : (((edx) >> 31) & 1u)); /* 0x10072B3F: sar edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> ((LO8(ecx)) & 31))), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> ((LO8(ecx)) & 31));
    /* cmp edx, MEM32(edi + 0x3C) */ /* 0x10072B41: cmp edx, dword ptr [edi + 0x3c] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(edi + 0x3C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_10072B87; /* 0x10072B44: jge 0x10072b87 */
L_10072B46:
    ecx = MEM32(edi + 0x38); /* 0x10072B46: mov ecx, dword ptr [edi + 0x38] */
    eax = MEM32(edi + 0x34); /* 0x10072B49: mov eax, dword ptr [edi + 0x34] */
    /* cmp edx, ecx */ /* 0x10072B4C: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_10072B61; /* 0x10072B4E: jl 0x10072b61 */
L_10072B50:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x10072B50: sub edx, ecx */
    _flag_k = FK_CMP;
    eax = MEM32(eax + ecx * 4 + (-0x4)); /* 0x10072B52: mov eax, dword ptr [eax + ecx*4 - 4] */
    if (/* sub result */ CMP_S(_flag_a, _flag_b)) goto L_10072B64; /* 0x10072B56: js 0x10072b64 */
L_10072B58:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x10072B58: inc edx */
    _flag_k = FK_INC;
L_10072B59:
    eax = MEM32(eax + 0x4); /* 0x10072B59: mov eax, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x10072B5C: dec edx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_10072B64; /* 0x10072B5D: je 0x10072b64 */
L_10072B5F:
    RECOMP_BACKEDGE();
    goto L_10072B59; /* 0x10072B5F: jmp 0x10072b59 */
L_10072B61:
    eax = MEM32(eax + edx * 4); /* 0x10072B61: mov eax, dword ptr [eax + edx*4] */
L_10072B64:
    ecx = MEM32(edi + 0x28); /* 0x10072B64: mov ecx, dword ptr [edi + 0x28] */
    eax = MEM32(eax); /* 0x10072B67: mov eax, dword ptr [eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x10072B69: dec ecx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    ecx = ecx & esi; /* 0x10072B6A: and ecx, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + ecx * 4); /* 0x10072B6C: mov eax, dword ptr [eax + ecx*4] */
    MEM32(ebp + (-0x8)) = eax; /* 0x10072B6F: mov dword ptr [ebp - 8], eax */
    /* test eax, eax */ /* 0x10072B72: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10072B84; /* 0x10072B74: je 0x10072b84 */
L_10072B76:
    PUSH32(esp, ecx); /* 0x10072B76: push ecx */
    PUSH32(esp, esi); /* 0x10072B77: push esi */
    PUSH32(esp, eax); /* 0x10072B78: push eax */
    ecx = edi; /* 0x10072B79: mov ecx, edi */
    RECOMP_CALL(sub_10072FDB); /* 0x10072B7B: call 0x10072fdb */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x10072B80: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10072B95; /* 0x10072B82: jne 0x10072b95 */
L_10072B84:
    eax = MEM32(ebp + (-0x4)); /* 0x10072B84: mov eax, dword ptr [ebp - 4] */
L_10072B87:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10072B87: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, eax */ /* 0x10072B88: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_10072B3A; /* 0x10072B8A: jl 0x10072b3a */
L_10072B8C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10072B8C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_10072B8E:
    edi = POP32_VAL(esp); /* 0x10072B8E: pop edi */
    esi = POP32_VAL(esp); /* 0x10072B8F: pop esi */
    ebx = POP32_VAL(esp); /* 0x10072B90: pop ebx */
    esp = ebp; /* 0x10072B91: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10072B93: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10072B94: ret  */
L_10072B95:
    esi = MEM32(ebp + (-0x8)); /* 0x10072B95: mov esi, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x10072B98: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(esi + 0x8); /* 0x10072B9A: mov esi, dword ptr [esi + 8] */
    ecx = esi + 0x38; /* 0x10072B9D: lea ecx, [esi + 0x38] */
    { uint32_t _tmp = MEM32(ecx); /* 0x10072BA0: xchg dword ptr [ecx], edx */
      MEM32(ecx) = edx;
      edx = _tmp; }
    ecx = MEM32(ebx + 0x100); /* 0x10072BA2: mov ecx, dword ptr [ebx + 0x100] */
    RECOMP_CALL(sub_1006D563); /* 0x10072BA8: call 0x1006d563 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x10072BAD: mov eax, esi */
    RECOMP_BACKEDGE();
    goto L_10072B8E; /* 0x10072BAF: jmp 0x10072b8e */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10072BB1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10072BB1u);

L_10072BB1:
    PUSH32(esp, edi); /* 0x10072BB1: push edi */
    edi = ecx + 0x28; /* 0x10072BB2: lea edi, [ecx + 0x28] */
    /* cmp MEM32(edi), 0 */ /* 0x10072BB5: cmp dword ptr [edi], 0 */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10072BBE; /* 0x10072BB8: jne 0x10072bbe */
L_10072BBA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10072BBA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x10072BBC: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10072BBD: ret  */
L_10072BBE:
    PUSH32(esp, ebx); /* 0x10072BBE: push ebx */
    PUSH32(esp, esi); /* 0x10072BBF: push esi */
    RECOMP_CALL(sub_10023AF4); /* 0x10072BC0: call 0x10023af4 */
    RECOMP_FLAGS_IN();
    ecx = edi + 0x8; /* 0x10072BC5: lea ecx, [edi + 8] */
    RECOMP_CALL(sub_10023D1E); /* 0x10072BC8: call 0x10023d1e */
    RECOMP_FLAGS_IN();
    ebx = MEM32(edi); /* 0x10072BCD: mov ebx, dword ptr [edi] */
    /* test ebx, ebx */ /* 0x10072BCF: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10072BDF; /* 0x10072BD1: je 0x10072bdf */
L_10072BD3:
    eax = MEM32(ebx + 0xC); /* 0x10072BD3: mov eax, dword ptr [ebx + 0xc] */
    MEM32(edi) = eax; /* 0x10072BD6: mov dword ptr [edi], eax */
    /* test eax, eax */ /* 0x10072BD8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10072BDF; /* 0x10072BDA: jne 0x10072bdf */
L_10072BDC:
    MEM32(edi + 0x4) = edi; /* 0x10072BDC: mov dword ptr [edi + 4], edi */
L_10072BDF:
    MEM32(edi + 0x8) = 0; /* 0x10072BDF: mov dword ptr [edi + 8], 0 */
    RECOMP_CALL(sub_10023AF4); /* 0x10072BE6: call 0x10023af4 */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x10072BEB: pop esi */
    eax = ebx; /* 0x10072BEC: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x10072BEE: pop ebx */
    edi = POP32_VAL(esp); /* 0x10072BEF: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10072BF0: ret  */
    RECOMP_REGS_OUT();
}

void sub_10072BF1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10072BF1u);

L_10072BF1:
    PUSH32(esp, ebp); /* 0x10072BF1: push ebp */
    ebp = esp; /* 0x10072BF2: mov ebp, esp */
    PUSH32(esp, esi); /* 0x10072BF4: push esi */
    PUSH32(esp, edi); /* 0x10072BF5: push edi */
    edi = ecx; /* 0x10072BF6: mov edi, ecx */
    PUSH32(esp, 1); /* 0x10072BF8: push 1 */
    eax = MEM32(edi + 0x100); /* 0x10072BFA: mov eax, dword ptr [edi + 0x100] */
    ecx = MEM32(eax + 0x4); /* 0x10072C00: mov ecx, dword ptr [eax + 4] */
    RECOMP_CALL(sub_10073BC9); /* 0x10072C03: call 0x10073bc9 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x10072C08: mov esi, eax */
    /* test esi, esi */ /* 0x10072C0A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10072C1C; /* 0x10072C0C: je 0x10072c1c */
L_10072C0E:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x10072C0E: push dword ptr [ebp + 0xc] */
    ecx = esi; /* 0x10072C11: mov ecx, esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10072C13: push dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x10072C16: push edi */
    RECOMP_CALL(sub_1006E544); /* 0x10072C17: call 0x1006e544 */
    RECOMP_FLAGS_IN();
L_10072C1C:
    edi = POP32_VAL(esp); /* 0x10072C1C: pop edi */
    eax = esi; /* 0x10072C1D: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x10072C1F: pop esi */
    ebp = POP32_VAL(esp); /* 0x10072C20: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x10072C21: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_10072C24(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10072C24u);

L_10072C24:
    PUSH32(esp, ebp); /* 0x10072C24: push ebp */
    ebp = esp; /* 0x10072C25: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x10072C27: push ebx */
    PUSH32(esp, esi); /* 0x10072C28: push esi */
    esi = MEM32(ebp + 0x8); /* 0x10072C29: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x10072C2C: push edi */
    edi = ecx; /* 0x10072C2D: mov edi, ecx */
    ecx = esi + 0x4; /* 0x10072C2F: lea ecx, [esi + 4] */
    RECOMP_CALL(sub_10033D38); /* 0x10072C32: call 0x10033d38 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10072C37: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi; /* 0x10072C39: mov ecx, esi */
    PUSH32(esp, ebx); /* 0x10072C3B: push ebx */
    PUSH32(esp, ebx); /* 0x10072C3C: push ebx */
    RECOMP_CALL(sub_1006DCF1); /* 0x10072C3D: call 0x1006dcf1 */
    RECOMP_FLAGS_IN();
    MEM8(esi + 0xEC) = (uint8_t)(1); /* 0x10072C42: mov byte ptr [esi + 0xec], 1 */
    MEM32(esi + 0x48) = ebx; /* 0x10072C49: mov dword ptr [esi + 0x48], ebx */
    ecx = MEM32(edi + 0x100); /* 0x10072C4C: mov ecx, dword ptr [edi + 0x100] */
    PUSH32(esp, ebx); /* 0x10072C52: push ebx */
    PUSH32(esp, esi); /* 0x10072C53: push esi */
    ecx = MEM32(ecx + 0x4); /* 0x10072C54: mov ecx, dword ptr [ecx + 4] */
    RECOMP_CALL(sub_10073D0A); /* 0x10072C57: call 0x10073d0a */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x10072C5C: pop edi */
    esi = POP32_VAL(esp); /* 0x10072C5D: pop esi */
    ebx = POP32_VAL(esp); /* 0x10072C5E: pop ebx */
    ebp = POP32_VAL(esp); /* 0x10072C5F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x10072C60: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_10072D7D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10072D7Du);

L_10072D7D:
    PUSH32(esp, ebp); /* 0x10072D7D: push ebp */
    ebp = esp; /* 0x10072D7E: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x10072D80: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x10072D83: sub esp, 0x1c */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x10072D86: push ebx */
    PUSH32(esp, esi); /* 0x10072D87: push esi */
    esi = ecx; /* 0x10072D88: mov esi, ecx */
    PUSH32(esp, edi); /* 0x10072D8A: push edi */
    MEM32(esp + 0x10) = esi; /* 0x10072D8B: mov dword ptr [esp + 0x10], esi */
    edx = esi + 0x18; /* 0x10072D8F: lea edx, [esi + 0x18] */
L_10072D92:
    edi = MEM32(edx); /* 0x10072D92: mov edi, dword ptr [edx] */
    MEM32(esp + 0x18) = edi; /* 0x10072D94: mov dword ptr [esp + 0x18], edi */
L_10072D98:
    /* cmp edi, MEM32(esi + 0x1C) */ /* 0x10072D98: cmp edi, dword ptr [esi + 0x1c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x1C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10072E67; /* 0x10072D9B: je 0x10072e67 */
L_10072DA1:
    ecx = edi + 0x1; /* 0x10072DA1: lea ecx, [edi + 1] */
    eax = edi; /* 0x10072DA4: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(edx); if (eax == _d) { MEM32(edx) = ecx; } else { eax = _d; } } /* 0x10072DA6: lock cmpxchg dword ptr [edx], ecx */
    _flag_k = FK_CMP;
    /* cmp eax, edi */ /* 0x10072DAA: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10072DB6; /* 0x10072DAC: je 0x10072db6 */
L_10072DAE:
    edi = eax; /* 0x10072DAE: mov edi, eax */
    MEM32(esp + 0x18) = eax; /* 0x10072DB0: mov dword ptr [esp + 0x18], eax */
    RECOMP_BACKEDGE();
    goto L_10072D98; /* 0x10072DB4: jmp 0x10072d98 */
L_10072DB6:
    PUSH32(esp, 0); /* 0x10072DB6: push 0 */
    PUSH32(esp, edi); /* 0x10072DB8: push edi */
    ecx = esi; /* 0x10072DB9: mov ecx, esi */
    RECOMP_CALL(sub_10068E3E); /* 0x10072DBB: call 0x10068e3e */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x10072DC0: mov ecx, eax */
    eax = esi + 0x14; /* 0x10072DC2: lea eax, [esi + 0x14] */
    MEM32(esp + 0x14) = ecx; /* 0x10072DC5: mov dword ptr [esp + 0x14], ecx */
    MEM32(esp + 0x1C) = eax; /* 0x10072DC9: mov dword ptr [esp + 0x1c], eax */
    /* cmp ecx, MEM32(eax) */ /* 0x10072DCD: cmp ecx, dword ptr [eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10072E41; /* 0x10072DCF: je 0x10072e41 */
L_10072DD1:
    edx = MEM32(eax); /* 0x10072DD1: mov edx, dword ptr [eax] */
    ebx = edx; /* 0x10072DD3: mov ebx, edx */
    goto L_10072DDA; /* 0x10072DD5: jmp 0x10072dda */
L_10072DD7:
    ebx = MEM32(ebx + 0x18); /* 0x10072DD7: mov ebx, dword ptr [ebx + 0x18] */
L_10072DDA:
    eax = MEM32(ebx + 0x14); /* 0x10072DDA: mov eax, dword ptr [ebx + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0xC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esi + 0xC); /* 0x10072DDD: add eax, dword ptr [esi + 0xc] */
    _flag_k = FK_ADD;
    RECOMP_BACKEDGE();
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_E)) goto L_10072DD7; /* 0x10072DE0: je 0x10072dd7 */
L_10072DE2:
    eax = MEM32(ebx + 0x10); /* 0x10072DE2: mov eax, dword ptr [ebx + 0x10] */
    /* cmp eax, MEM32(edx + 0x10) */ /* 0x10072DE5: cmp eax, dword ptr [edx + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_10072E3D; /* 0x10072DE8: jbe 0x10072e3d */
L_10072DEA:
    esi = MEM32(esp + 0x1C); /* 0x10072DEA: mov esi, dword ptr [esp + 0x1c] */
    ecx = ebx; /* 0x10072DEE: mov ecx, ebx */
    eax = edx; /* 0x10072DF0: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(esi); if (eax == _d) { MEM32(esi) = ecx; } else { eax = _d; } } /* 0x10072DF2: lock cmpxchg dword ptr [esi], ecx */
    _flag_k = FK_CMP;
    esi = eax; /* 0x10072DF6: mov esi, eax */
    /* cmp esi, edx */ /* 0x10072DF8: cmp esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10072E06; /* 0x10072DFA: je 0x10072e06 */
L_10072DFC:
    ebx = esi; /* 0x10072DFC: mov ebx, esi */
    edx = esi; /* 0x10072DFE: mov edx, esi */
    esi = MEM32(esp + 0x10); /* 0x10072E00: mov esi, dword ptr [esp + 0x10] */
    RECOMP_BACKEDGE();
    goto L_10072DDA; /* 0x10072E04: jmp 0x10072dda */
L_10072E06:
    /* cmp esi, ebx */ /* 0x10072E06: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10072E39; /* 0x10072E08: je 0x10072e39 */
L_10072E0A:
    edi = MEM32(esp + 0x10); /* 0x10072E0A: mov edi, dword ptr [esp + 0x10] */
L_10072E0E:
    ecx = MEM32(edi + 0xC); /* 0x10072E0E: mov ecx, dword ptr [edi + 0xc] */
    eax = esi + 0x14; /* 0x10072E11: lea eax, [esi + 0x14] */
    edx = ecx; /* 0x10072E14: mov edx, ecx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(eax), _sum = MEM32(eax) + edx; edx = _old; MEM32(eax) = _sum; } /* 0x10072E16: lock xadd dword ptr [eax], edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x10072E1A: add edx, ecx */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NE)) goto L_10072E2E; /* 0x10072E1C: jne 0x10072e2e */
L_10072E1E:
    PUSH32(esp, MEM32(esi)); /* 0x10072E1E: push dword ptr [esi] */
    ecx = esi + 0x1C; /* 0x10072E20: lea ecx, [esi + 0x1c] */
    PUSH32(esp, esi); /* 0x10072E23: push esi */
    PUSH32(esp, 0x1006AF48u); /* 0x10072E24: push 0x1006af48 */
    RECOMP_CALL(sub_10074CBB); /* 0x10072E29: call 0x10074cbb */
    RECOMP_FLAGS_IN();
L_10072E2E:
    esi = MEM32(esi + 0x18); /* 0x10072E2E: mov esi, dword ptr [esi + 0x18] */
    /* cmp esi, ebx */ /* 0x10072E31: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_10072E0E; /* 0x10072E33: jne 0x10072e0e */
L_10072E35:
    edi = MEM32(esp + 0x18); /* 0x10072E35: mov edi, dword ptr [esp + 0x18] */
L_10072E39:
    esi = MEM32(esp + 0x10); /* 0x10072E39: mov esi, dword ptr [esp + 0x10] */
L_10072E3D:
    ecx = MEM32(esp + 0x14); /* 0x10072E3D: mov ecx, dword ptr [esp + 0x14] */
L_10072E41:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ecx + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - MEM32(ecx + 0x10); /* 0x10072E41: sub edi, dword ptr [ecx + 0x10] */
    _flag_k = FK_CMP;
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10072E44: push dword ptr [ebp + 8] */
    MEM32(esp + 0x24) = ecx; /* 0x10072E47: mov dword ptr [esp + 0x24], ecx */
    ecx = esp + 0x24; /* 0x10072E4B: lea ecx, [esp + 0x24] */
    MEM32(esp + 0x28) = edi; /* 0x10072E4F: mov dword ptr [esp + 0x28], edi */
    RECOMP_CALL(sub_1006ACAB); /* 0x10072E53: call 0x1006acab */
    RECOMP_FLAGS_IN();
    edx = esi + 0x18; /* 0x10072E58: lea edx, [esi + 0x18] */
    /* test LO8(eax), LO8(eax) */ /* 0x10072E5B: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10072D92; /* 0x10072E5D: je 0x10072d92 */
L_10072E63:
    SET_LO8(eax, 1); /* 0x10072E63: mov al, 1 */
    goto L_10072E69; /* 0x10072E65: jmp 0x10072e69 */
L_10072E67:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x10072E67: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_10072E69:
    edi = POP32_VAL(esp); /* 0x10072E69: pop edi */
    esi = POP32_VAL(esp); /* 0x10072E6A: pop esi */
    ebx = POP32_VAL(esp); /* 0x10072E6B: pop ebx */
    esp = ebp; /* 0x10072E6C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10072E6E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x10072E6F: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_10072F00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10072F00u);

L_10072F00:
    PUSH32(esp, ebp); /* 0x10072F00: push ebp */
    ebp = esp; /* 0x10072F01: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x10072F03: mov edx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x10072F06: push esi */
    esi = ecx; /* 0x10072F07: mov esi, ecx */
    ecx = MEM32(esi + 0x2C); /* 0x10072F09: mov ecx, dword ptr [esi + 0x2c] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : (((edx) >> 31) & 1u)); /* 0x10072F0C: sar edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> ((LO8(ecx)) & 31))), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> ((LO8(ecx)) & 31));
    /* cmp edx, MEM32(esi + 0x3C) */ /* 0x10072F0E: cmp edx, dword ptr [esi + 0x3c] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esi + 0x3C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_10072F17; /* 0x10072F11: jl 0x10072f17 */
L_10072F13:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10072F13: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_10072F41; /* 0x10072F15: jmp 0x10072f41 */
L_10072F17:
    ecx = MEM32(esi + 0x38); /* 0x10072F17: mov ecx, dword ptr [esi + 0x38] */
    eax = MEM32(esi + 0x34); /* 0x10072F1A: mov eax, dword ptr [esi + 0x34] */
    /* cmp edx, ecx */ /* 0x10072F1D: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_10072F32; /* 0x10072F1F: jl 0x10072f32 */
L_10072F21:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x10072F21: sub edx, ecx */
    _flag_k = FK_CMP;
    eax = MEM32(eax + ecx * 4 + (-0x4)); /* 0x10072F23: mov eax, dword ptr [eax + ecx*4 - 4] */
    if (/* sub result */ CMP_S(_flag_a, _flag_b)) goto L_10072F35; /* 0x10072F27: js 0x10072f35 */
L_10072F29:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x10072F29: inc edx */
    _flag_k = FK_INC;
L_10072F2A:
    eax = MEM32(eax + 0x4); /* 0x10072F2A: mov eax, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x10072F2D: dec edx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_10072F35; /* 0x10072F2E: je 0x10072f35 */
L_10072F30:
    RECOMP_BACKEDGE();
    goto L_10072F2A; /* 0x10072F30: jmp 0x10072f2a */
L_10072F32:
    eax = MEM32(eax + edx * 4); /* 0x10072F32: mov eax, dword ptr [eax + edx*4] */
L_10072F35:
    ecx = MEM32(esi + 0x28); /* 0x10072F35: mov ecx, dword ptr [esi + 0x28] */
    eax = MEM32(eax); /* 0x10072F38: mov eax, dword ptr [eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x10072F3A: dec ecx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    ecx = ecx & MEM32(ebp + 0x8); /* 0x10072F3B: and ecx, dword ptr [ebp + 8] */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(eax + ecx * 4); /* 0x10072F3E: mov eax, dword ptr [eax + ecx*4] */
L_10072F41:
    esi = POP32_VAL(esp); /* 0x10072F41: pop esi */
    ebp = POP32_VAL(esp); /* 0x10072F42: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x10072F43: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_10072F46(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10072F46u);

L_10072F46:
    PUSH32(esp, ebx); /* 0x10072F46: push ebx */
    ebx = MEM32(0x100E5130); /* 0x10072F47: mov ebx, dword ptr [0x100e5130] */
    PUSH32(esp, esi); /* 0x10072F4D: push esi */
    PUSH32(esp, edi); /* 0x10072F4E: push edi */
    edi = ecx; /* 0x10072F4F: mov edi, ecx */
    PUSH32(esp, edi); /* 0x10072F51: push edi */
    RECOMP_ICALL(ebx); /* 0x10072F52: call ebx */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x10072F54: mov esi, eax */
    goto L_10072F64; /* 0x10072F56: jmp 0x10072f64 */
L_10072F58:
    ecx = esi + (-0x4); /* 0x10072F58: lea ecx, [esi - 4] */
    esi = MEM32(esi); /* 0x10072F5B: mov esi, dword ptr [esi] */
    PUSH32(esp, ecx); /* 0x10072F5D: push ecx */
    RECOMP_CALL(sub_1000ECE0); /* 0x10072F5E: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10072F63: pop ecx */
L_10072F64:
    /* test esi, esi */ /* 0x10072F64: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10072F58; /* 0x10072F66: jne 0x10072f58 */
L_10072F68:
    eax = edi + 0x8; /* 0x10072F68: lea eax, [edi + 8] */
    PUSH32(esp, eax); /* 0x10072F6B: push eax */
    RECOMP_ICALL(ebx); /* 0x10072F6C: call ebx */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x10072F6E: mov esi, eax */
    goto L_10072F7E; /* 0x10072F70: jmp 0x10072f7e */
L_10072F72:
    ecx = esi + (-0x4); /* 0x10072F72: lea ecx, [esi - 4] */
    esi = MEM32(esi); /* 0x10072F75: mov esi, dword ptr [esi] */
    PUSH32(esp, ecx); /* 0x10072F77: push ecx */
    RECOMP_CALL(sub_1000ECE0); /* 0x10072F78: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10072F7D: pop ecx */
L_10072F7E:
    /* test esi, esi */ /* 0x10072F7E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10072F72; /* 0x10072F80: jne 0x10072f72 */
L_10072F82:
    esi = MEM32(edi + 0x10); /* 0x10072F82: mov esi, dword ptr [edi + 0x10] */
    goto L_10072F93; /* 0x10072F85: jmp 0x10072f93 */
L_10072F87:
    eax = esi + (-0x4); /* 0x10072F87: lea eax, [esi - 4] */
    esi = MEM32(esi); /* 0x10072F8A: mov esi, dword ptr [esi] */
    PUSH32(esp, eax); /* 0x10072F8C: push eax */
    RECOMP_CALL(sub_1000ECE0); /* 0x10072F8D: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10072F92: pop ecx */
L_10072F93:
    /* test esi, esi */ /* 0x10072F93: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10072F87; /* 0x10072F95: jne 0x10072f87 */
L_10072F97:
    ebx = MEM32(edi + 0x30); /* 0x10072F97: mov ebx, dword ptr [edi + 0x30] */
    /* test ebx, ebx */ /* 0x10072F9A: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10072FCE; /* 0x10072F9C: je 0x10072fce */
L_10072F9E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x10072F9E: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edi + 0x28), esi */ /* 0x10072FA0: cmp dword ptr [edi + 0x28], esi */
    _flag_a = (uint32_t)(MEM32(edi + 0x28)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_10072FB6; /* 0x10072FA3: jle 0x10072fb6 */
L_10072FA5:
    eax = MEM32(ebx); /* 0x10072FA5: mov eax, dword ptr [ebx] */
    PUSH32(esp, MEM32(eax + esi * 4)); /* 0x10072FA7: push dword ptr [eax + esi*4] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10072FAA: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10072FAF: inc esi */
    _flag_k = FK_INC;
    ecx = POP32_VAL(esp); /* 0x10072FB0: pop ecx */
    /* cmp esi, MEM32(edi + 0x28) */ /* 0x10072FB1: cmp esi, dword ptr [edi + 0x28] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edi + 0x28));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_10072FA5; /* 0x10072FB4: jl 0x10072fa5 */
L_10072FB6:
    PUSH32(esp, MEM32(ebx)); /* 0x10072FB6: push dword ptr [ebx] */
    esi = MEM32(ebx + 0x4); /* 0x10072FB8: mov esi, dword ptr [ebx + 4] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10072FBB: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x10072FC0: push ebx */
    RECOMP_CALL(sub_1000ECE0); /* 0x10072FC1: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ebx = esi; /* 0x10072FC6: mov ebx, esi */
    ecx = POP32_VAL(esp); /* 0x10072FC8: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10072FC9: pop ecx */
    /* test esi, esi */ /* 0x10072FCA: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10072F9E; /* 0x10072FCC: jne 0x10072f9e */
L_10072FCE:
    PUSH32(esp, MEM32(edi + 0x34)); /* 0x10072FCE: push dword ptr [edi + 0x34] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10072FD1: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10072FD6: pop ecx */
    edi = POP32_VAL(esp); /* 0x10072FD7: pop edi */
    esi = POP32_VAL(esp); /* 0x10072FD8: pop esi */
    ebx = POP32_VAL(esp); /* 0x10072FD9: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10072FDA: ret  */
    RECOMP_REGS_OUT();
}

void sub_10072FDB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10072FDBu);

L_10072FDB:
    PUSH32(esp, ebp); /* 0x10072FDB: push ebp */
    ebp = esp; /* 0x10072FDC: mov ebp, esp */
    edx = MEM32(ebp + 0xC); /* 0x10072FDE: mov edx, dword ptr [ebp + 0xc] */
    eax = ecx; /* 0x10072FE1: mov eax, ecx */
    PUSH32(esp, edi); /* 0x10072FE3: push edi */
    ecx = MEM32(eax + 0x2C); /* 0x10072FE4: mov ecx, dword ptr [eax + 0x2c] */
    edi = MEM32(eax + 0x28); /* 0x10072FE7: mov edi, dword ptr [eax + 0x28] */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> ((((LO8(ecx)) & 31)) - 1)) & 1u) : (((edx) >> 31) & 1u)); /* 0x10072FEA: sar edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> ((LO8(ecx)) & 31))), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> ((LO8(ecx)) & 31));
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x10072FEC: dec edi */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    edi = edi & MEM32(ebp + 0xC); /* 0x10072FED: and edi, dword ptr [ebp + 0xc] */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, MEM32(eax + 0x3C) */ /* 0x10072FF0: cmp edx, dword ptr [eax + 0x3c] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(eax + 0x3C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_10072FF9; /* 0x10072FF3: jl 0x10072ff9 */
L_10072FF5:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x10072FF5: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_10073048; /* 0x10072FF7: jmp 0x10073048 */
L_10072FF9:
    ecx = MEM32(eax + 0x38); /* 0x10072FF9: mov ecx, dword ptr [eax + 0x38] */
    eax = MEM32(eax + 0x34); /* 0x10072FFC: mov eax, dword ptr [eax + 0x34] */
    PUSH32(esp, esi); /* 0x10072FFF: push esi */
    /* cmp edx, ecx */ /* 0x10073000: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_10073015; /* 0x10073002: jl 0x10073015 */
L_10073004:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x10073004: sub edx, ecx */
    _flag_k = FK_CMP;
    esi = MEM32(eax + ecx * 4 + (-0x4)); /* 0x10073006: mov esi, dword ptr [eax + ecx*4 - 4] */
    if (/* sub result */ CMP_S(_flag_a, _flag_b)) goto L_10073018; /* 0x1007300A: js 0x10073018 */
L_1007300C:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1007300C: inc edx */
    _flag_k = FK_INC;
L_1007300D:
    esi = MEM32(esi + 0x4); /* 0x1007300D: mov esi, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x10073010: dec edx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_10073018; /* 0x10073011: je 0x10073018 */
L_10073013:
    RECOMP_BACKEDGE();
    goto L_1007300D; /* 0x10073013: jmp 0x1007300d */
L_10073015:
    esi = MEM32(eax + edx * 4); /* 0x10073015: mov esi, dword ptr [eax + edx*4] */
L_10073018:
    ecx = MEM32(esi); /* 0x10073018: mov ecx, dword ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1007301A: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + 0x8); /* 0x1007301C: mov eax, dword ptr [ebp + 8] */
    MEM32(ebp + 0xC) = eax; /* 0x1007301F: mov dword ptr [ebp + 0xc], eax */
    eax = MEM32(ebp + 0xC); /* 0x10073022: mov eax, dword ptr [ebp + 0xc] */
    ecx = ecx + edi * 4; /* 0x10073025: lea ecx, [ecx + edi*4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(ecx); if (eax == _d) { MEM32(ecx) = edx; } else { eax = _d; } } /* 0x10073028: lock cmpxchg dword ptr [ecx], edx */
    _flag_k = FK_CMP;
    MEM32(ebp + 0x8) = eax; /* 0x1007302C: mov dword ptr [ebp + 8], eax */
    eax = MEM32(ebp + 0x8); /* 0x1007302F: mov eax, dword ptr [ebp + 8] */
    /* cmp eax, MEM32(ebp + 0xC) */ /* 0x10073032: cmp eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10073045; /* 0x10073035: jne 0x10073045 */
L_10073037:
    PUSH32(esp, 0xFFFFFFFEu); /* 0x10073037: push -2 */
    ecx = esi + 0x8; /* 0x10073039: lea ecx, [esi + 8] */
    eax = POP32_VAL(esp); /* 0x1007303C: pop eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(ecx); if (eax == _d) { MEM32(ecx) = edi; } else { eax = _d; } } /* 0x1007303D: lock cmpxchg dword ptr [ecx], edi */
    _flag_k = FK_CMP;
    SET_LO8(eax, 1); /* 0x10073041: mov al, 1 */
    goto L_10073047; /* 0x10073043: jmp 0x10073047 */
L_10073045:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x10073045: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_10073047:
    esi = POP32_VAL(esp); /* 0x10073047: pop esi */
L_10073048:
    edi = POP32_VAL(esp); /* 0x10073048: pop edi */
    ebp = POP32_VAL(esp); /* 0x10073049: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1007304A: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_10073054(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10073054u);

L_10073054:
    PUSH32(esp, ebp); /* 0x10073054: push ebp */
    ebp = esp; /* 0x10073055: mov ebp, esp */
    /* test MEM8(ebp + 0x8), 1 */ /* 0x10073057: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, esi); /* 0x1007305B: push esi */
    esi = ecx; /* 0x1007305C: mov esi, ecx */
    MEM32(esi) = 0x10067920u; /* 0x1007305E: mov dword ptr [esi], 0x10067920 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007306D; /* 0x10073064: je 0x1007306d */
L_10073066:
    PUSH32(esp, esi); /* 0x10073066: push esi */
    RECOMP_CALL(sub_1000ECE0); /* 0x10073067: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007306C: pop ecx */
L_1007306D:
    eax = esi; /* 0x1007306D: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1007306F: pop esi */
    ebp = POP32_VAL(esp); /* 0x10073070: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x10073071: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_100730B3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100730B3u);

L_100730B3:
    PUSH32(esp, ebp); /* 0x100730B3: push ebp */
    ebp = esp; /* 0x100730B4: mov ebp, esp */
    PUSH32(esp, esi); /* 0x100730B6: push esi */
    esi = MEM32(ebp + 0x8); /* 0x100730B7: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100730BA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x100730BC: push edi */
    edi = ecx; /* 0x100730BD: mov edi, ecx */
    goto L_100730CF; /* 0x100730BF: jmp 0x100730cf */
L_100730C1:
    /* test eax, eax */ /* 0x100730C1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100730D4; /* 0x100730C3: jne 0x100730d4 */
L_100730C5:
    PUSH32(esp, esi); /* 0x100730C5: push esi */
    ecx = edi + 0x38; /* 0x100730C6: lea ecx, [edi + 0x38] */
    RECOMP_CALL(sub_10072F00); /* 0x100730C9: call 0x10072f00 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100730CE: inc esi */
    _flag_k = FK_INC;
L_100730CF:
    /* cmp esi, MEM32(ebp + 0xC) */ /* 0x100730CF: cmp esi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_100730C1; /* 0x100730D2: jl 0x100730c1 */
L_100730D4:
    ecx = MEM32(ebp + 0x10); /* 0x100730D4: mov ecx, dword ptr [ebp + 0x10] */
    edx = esi + (-0x1); /* 0x100730D7: lea edx, [esi - 1] */
    edi = POP32_VAL(esp); /* 0x100730DA: pop edi */
    esi = POP32_VAL(esp); /* 0x100730DB: pop esi */
    MEM32(ecx) = edx; /* 0x100730DC: mov dword ptr [ecx], edx */
    ebp = POP32_VAL(esp); /* 0x100730DE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x100730DF: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_100730E2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100730E2u);

L_100730E2:
    PUSH32(esp, ebp); /* 0x100730E2: push ebp */
    ebp = esp; /* 0x100730E3: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x100730E5: push ebx */
    PUSH32(esp, esi); /* 0x100730E6: push esi */
    PUSH32(esp, edi); /* 0x100730E7: push edi */
    edi = ecx; /* 0x100730E8: mov edi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100730EA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = eax; /* 0x100730EC: mov esi, eax */
    ebx = MEM32(edi + 0x78); /* 0x100730EE: mov ebx, dword ptr [edi + 0x78] */
    /* test ebx, ebx */ /* 0x100730F1: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_10073107; /* 0x100730F3: jle 0x10073107 */
L_100730F5:
    /* test eax, eax */ /* 0x100730F5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10073107; /* 0x100730F7: jne 0x10073107 */
L_100730F9:
    PUSH32(esp, esi); /* 0x100730F9: push esi */
    ecx = edi + 0x38; /* 0x100730FA: lea ecx, [edi + 0x38] */
    RECOMP_CALL(sub_10072F00); /* 0x100730FD: call 0x10072f00 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x10073102: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, ebx */ /* 0x10073103: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_100730F5; /* 0x10073105: jl 0x100730f5 */
L_10073107:
    ecx = MEM32(ebp + 0x8); /* 0x10073107: mov ecx, dword ptr [ebp + 8] */
    edx = esi + (-0x1); /* 0x1007310A: lea edx, [esi - 1] */
    edi = POP32_VAL(esp); /* 0x1007310D: pop edi */
    esi = POP32_VAL(esp); /* 0x1007310E: pop esi */
    ebx = POP32_VAL(esp); /* 0x1007310F: pop ebx */
    MEM32(ecx) = edx; /* 0x10073110: mov dword ptr [ecx], edx */
    ebp = POP32_VAL(esp); /* 0x10073112: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x10073113: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_10073116(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10073116u);

L_10073116:
    PUSH32(esp, ebp); /* 0x10073116: push ebp */
    ebp = esp; /* 0x10073117: mov ebp, esp */
    PUSH32(esp, esi); /* 0x10073119: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1007311A: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1007311D: push edi */
    edi = ecx; /* 0x1007311E: mov edi, ecx */
    edx = MEM32(esi); /* 0x10073120: mov edx, dword ptr [esi] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x10073122: inc edx */
    _flag_k = FK_INC;
    /* test edx, edx */ /* 0x10073123: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_10073138; /* 0x10073125: jle 0x10073138 */
L_10073127:
    eax = MEM32(edi + 0x78); /* 0x10073127: mov eax, dword ptr [edi + 0x78] */
    PUSH32(esp, esi); /* 0x1007312A: push esi */
    PUSH32(esp, eax); /* 0x1007312B: push eax */
    PUSH32(esp, edx); /* 0x1007312C: push edx */
    RECOMP_CALL(sub_100730B3); /* 0x1007312D: call 0x100730b3 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x10073132: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x10073134: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10073143; /* 0x10073136: jne 0x10073143 */
L_10073138:
    PUSH32(esp, esi); /* 0x10073138: push esi */
    PUSH32(esp, 0); /* 0x10073139: push 0 */
    PUSH32(esp, edx); /* 0x1007313B: push edx */
    ecx = edi; /* 0x1007313C: mov ecx, edi */
    RECOMP_CALL(sub_100730B3); /* 0x1007313E: call 0x100730b3 */
    RECOMP_FLAGS_IN();
L_10073143:
    edi = POP32_VAL(esp); /* 0x10073143: pop edi */
    esi = POP32_VAL(esp); /* 0x10073144: pop esi */
    ebp = POP32_VAL(esp); /* 0x10073145: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x10073146: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1007314D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007314Du);

    goto L_1007314D;
L_10027571:
    PUSH32(esp, ebp); /* 0x10027571: push ebp */
    ebp = esp; /* 0x10027572: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x10027574: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x10027577: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1002757A: push ebx */
    PUSH32(esp, esi); /* 0x1002757B: push esi */
    PUSH32(esp, edi); /* 0x1002757C: push edi */
    edi = ecx; /* 0x1002757D: mov edi, ecx */
    ebx = edi + 0x60; /* 0x1002757F: lea ebx, [edi + 0x60] */
    PUSH32(esp, ebx); /* 0x10027582: push ebx */
    RECOMP_ICALL(MEM32(0x100E512C)); /* 0x10027583: call dword ptr [0x100e512c] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10027589: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = ecx; /* 0x1002758B: mov esi, ecx */
    /* test eax, eax */ /* 0x1002758D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10053132; /* 0x1002758F: jne 0x10053132 */
L_10027595:
    /* cmp MEM32(edi + 0xC), ecx */ /* 0x10027595: cmp dword ptr [edi + 0xc], ecx */
    _flag_a = (uint32_t)(MEM32(edi + 0xC)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1005313F; /* 0x10027598: jne 0x1005313f */
L_1002759E:
    /* test esi, esi */ /* 0x1002759E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1005313A; /* 0x100275A0: jne 0x1005313a */
L_100275A6:
    PUSH32(esp, 0x38u); /* 0x100275A6: push 0x38 */
    RECOMP_CALL(sub_1000EE11); /* 0x100275A8: call 0x1000ee11 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x100275AD: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x100275AF: pop ecx */
    /* test esi, esi */ /* 0x100275B0: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100275DC; /* 0x100275B2: je 0x100275dc */
L_100275B4:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100275B4: push dword ptr [ebp + 8] */
    ecx = esi; /* 0x100275B7: mov ecx, esi */
    PUSH32(esp, edi); /* 0x100275B9: push edi */
    RECOMP_CALL(sub_10027666); /* 0x100275BA: call 0x10027666 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x100275E4u; /* 0x100275BF: mov dword ptr [esi], 0x100275e4 */
    MEM8(esi + 0x30) = (uint8_t)(1); /* 0x100275C5: mov byte ptr [esi + 0x30], 1 */
L_100275C9:
    PUSH32(esp, esi); /* 0x100275C9: push esi */
    ecx = ebx; /* 0x100275CA: mov ecx, ebx */
    RECOMP_CALL(sub_100274CC); /* 0x100275CC: call 0x100274cc */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x100275D1: pop edi */
    eax = esi; /* 0x100275D2: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x100275D4: pop esi */
    ebx = POP32_VAL(esp); /* 0x100275D5: pop ebx */
    esp = ebp; /* 0x100275D6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100275D8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x100275D9: ret 4 */
L_100275DC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x100275DC: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_100275C9; /* 0x100275DE: jmp 0x100275c9 */
L_10053132:
    esi = eax + (-0x34); /* 0x10053132: lea esi, [eax - 0x34] */
    RECOMP_BACKEDGE();
    goto L_10027595; /* 0x10053135: jmp 0x10027595 */
L_1005313A:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1005313A: push dword ptr [ebp + 8] */
    goto L_10053186; /* 0x1005313D: jmp 0x10053186 */
L_1005313F:
    MEM32(esp + 0x10) = ecx; /* 0x1005313F: mov dword ptr [esp + 0x10], ecx */
    MEM32(esp + 0x18) = ecx; /* 0x10053143: mov dword ptr [esp + 0x18], ecx */
    MEM32(esp + 0x1C) = ecx; /* 0x10053147: mov dword ptr [esp + 0x1c], ecx */
    /* test esi, esi */ /* 0x1005314B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10053181; /* 0x1005314D: jne 0x10053181 */
L_1005314F:
    PUSH32(esp, 0x3Cu); /* 0x1005314F: push 0x3c */
    RECOMP_CALL(sub_1000EE11); /* 0x10053151: call 0x1000ee11 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x10053156: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x10053158: pop ecx */
    /* test esi, esi */ /* 0x10053159: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_100275DC; /* 0x1005315B: je 0x100275dc */
L_10053161:
    eax = esp + 0x10; /* 0x10053161: lea eax, [esp + 0x10] */
    ecx = esi; /* 0x10053165: mov ecx, esi */
    PUSH32(esp, eax); /* 0x10053167: push eax */
    PUSH32(esp, edi); /* 0x10053168: push edi */
    RECOMP_CALL(sub_10027666); /* 0x10053169: call 0x10027666 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0x38)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x38) = MEM32(esi + 0x38) & 0; /* 0x1005316E: and dword ptr [esi + 0x38], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = 0x100531A0u; /* 0x10053172: mov dword ptr [esi], 0x100531a0 */
    MEM8(esi + 0x30) = (uint8_t)(2); /* 0x10053178: mov byte ptr [esi + 0x30], 2 */
    RECOMP_BACKEDGE();
    goto L_100275C9; /* 0x1005317C: jmp 0x100275c9 */
L_10053181:
    eax = esp + 0x10; /* 0x10053181: lea eax, [esp + 0x10] */
    PUSH32(esp, eax); /* 0x10053185: push eax */
L_10053186:
    ecx = esi + 0x20; /* 0x10053186: lea ecx, [esi + 0x20] */
    MEM32(esi + 0x14) = 1; /* 0x10053189: mov dword ptr [esi + 0x14], 1 */
    RECOMP_CALL(sub_1002762F); /* 0x10053190: call 0x1002762f */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_100275C9; /* 0x10053195: jmp 0x100275c9 */
L_1007314D:
    PUSH32(esp, ebp); /* 0x1007314D: push ebp */
    ebp = esp; /* 0x1007314E: mov ebp, esp */
    ebp = POP32_VAL(esp); /* 0x10073150: pop ebp */
    RECOMP_BACKEDGE();
    goto L_10027571; /* 0x10073151: jmp 0x10027571 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10073181(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10073181u);

L_10073181:
    PUSH32(esp, ebp); /* 0x10073181: push ebp */
    ebp = esp; /* 0x10073182: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x10073184: push ecx */
    ecx = MEM32(ebp + 0xC); /* 0x10073185: mov ecx, dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_10073A0F); /* 0x10073188: call 0x10073a0f */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007318D: pop ecx */
    ebp = POP32_VAL(esp); /* 0x1007318E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1007318F: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_10073192(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10073192u);

L_10073192:
    PUSH32(esp, ebp); /* 0x10073192: push ebp */
    ebp = esp; /* 0x10073193: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x10073195: mov ecx, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10073A0F); /* 0x10073198: call 0x10073a0f */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1007319D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1007319E: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_100731A1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100731A1u);

L_100731A1:
    PUSH32(esp, ebp); /* 0x100731A1: push ebp */
    ebp = esp; /* 0x100731A2: mov ebp, esp */
    PUSH32(esp, esi); /* 0x100731A4: push esi */
    esi = MEM32(ebp + 0x8); /* 0x100731A5: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100731A8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_100731BA; /* 0x100731AA: jmp 0x100731ba */
L_100731AC:
    /* test eax, eax */ /* 0x100731AC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100731BF; /* 0x100731AE: jne 0x100731bf */
L_100731B0:
    ecx = MEM32(ebp + 0x14); /* 0x100731B0: mov ecx, dword ptr [ebp + 0x14] */
    PUSH32(esp, esi); /* 0x100731B3: push esi */
    RECOMP_CALL(sub_10072F00); /* 0x100731B4: call 0x10072f00 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x100731B9: inc esi */
    _flag_k = FK_INC;
L_100731BA:
    /* cmp esi, MEM32(ebp + 0xC) */ /* 0x100731BA: cmp esi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_100731AC; /* 0x100731BD: jl 0x100731ac */
L_100731BF:
    ecx = MEM32(ebp + 0x10); /* 0x100731BF: mov ecx, dword ptr [ebp + 0x10] */
    edx = esi + (-0x1); /* 0x100731C2: lea edx, [esi - 1] */
    esi = POP32_VAL(esp); /* 0x100731C5: pop esi */
    MEM32(ecx) = edx; /* 0x100731C6: mov dword ptr [ecx], edx */
    ebp = POP32_VAL(esp); /* 0x100731C8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x100731C9: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_100731CC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100731CCu);

L_100731CC:
    PUSH32(esp, ebp); /* 0x100731CC: push ebp */
    ebp = esp; /* 0x100731CD: mov ebp, esp */
    PUSH32(esp, esi); /* 0x100731CF: push esi */
    esi = MEM32(ebp + 0x8); /* 0x100731D0: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x100731D3: push edi */
    edi = MEM32(ebp + 0x10); /* 0x100731D4: mov edi, dword ptr [ebp + 0x10] */
    ecx = MEM32(esi); /* 0x100731D7: mov ecx, dword ptr [esi] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x100731D9: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, MEM32(ebp + 0xC) */ /* 0x100731DA: cmp ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_100731F1; /* 0x100731DD: jle 0x100731f1 */
L_100731DF:
    eax = MEM32(edi + 0x40); /* 0x100731DF: mov eax, dword ptr [edi + 0x40] */
    PUSH32(esp, edi); /* 0x100731E2: push edi */
    PUSH32(esp, esi); /* 0x100731E3: push esi */
    PUSH32(esp, eax); /* 0x100731E4: push eax */
    PUSH32(esp, ecx); /* 0x100731E5: push ecx */
    RECOMP_CALL(sub_100731A1); /* 0x100731E6: call 0x100731a1 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100731EB: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x100731ED: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100731FC; /* 0x100731EF: jne 0x100731fc */
L_100731F1:
    PUSH32(esp, edi); /* 0x100731F1: push edi */
    PUSH32(esp, esi); /* 0x100731F2: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x100731F3: push dword ptr [ebp + 0xc] */
    PUSH32(esp, ecx); /* 0x100731F6: push ecx */
    RECOMP_CALL(sub_100731A1); /* 0x100731F7: call 0x100731a1 */
    RECOMP_FLAGS_IN();
L_100731FC:
    edi = POP32_VAL(esp); /* 0x100731FC: pop edi */
    esi = POP32_VAL(esp); /* 0x100731FD: pop esi */
    ebp = POP32_VAL(esp); /* 0x100731FE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x100731FF: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_10073214(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10073214u);

L_10073214:
    PUSH32(esp, ebp); /* 0x10073214: push ebp */
    ebp = esp; /* 0x10073215: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x10073217: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x1007321A: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(eax + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(eax + 0x4) = MEM32(eax + 0x4) & 0; /* 0x1007321D: and dword ptr [eax + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x10073221: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x10073222: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_100732DE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100732DEu);

L_100732DE:
    PUSH32(esp, ebp); /* 0x100732DE: push ebp */
    ebp = esp; /* 0x100732DF: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x100732E1: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x100732E4: push esi */
    RECOMP_CALL(sub_10026A07); /* 0x100732E5: call 0x10026a07 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x100732EA: mov esi, eax */
    ecx = esi; /* 0x100732EC: mov ecx, esi */
    RECOMP_CALL(sub_10024FC6); /* 0x100732EE: call 0x10024fc6 */
    RECOMP_FLAGS_IN();
    edx = MEM32(esi); /* 0x100732F3: mov edx, dword ptr [esi] */
    ecx = esi; /* 0x100732F5: mov ecx, esi */
    RECOMP_ICALL(MEM32(edx + 0x10)); /* 0x100732F7: call dword ptr [edx + 0x10] */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x100732FA: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x100732FC: pop esi */
    ebp = POP32_VAL(esp); /* 0x100732FD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100732FE: ret  */
    RECOMP_REGS_OUT();
}

void sub_100732FF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100732FFu);

L_100732FF:
    PUSH32(esp, ebp); /* 0x100732FF: push ebp */
    ebp = esp; /* 0x10073300: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x10073302: mov ecx, dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x10073305: pop ebp */
    goto L_10073634; /* 0x10073306: jmp 0x10073634 */
L_10073634:
    PUSH32(esp, 0x14u); /* 0x10073634: push 0x14 */
    eax = 0x100DBC32u; /* 0x10073636: mov eax, 0x100dbc32 */
    RECOMP_CALL(sub_100149A4); /* 0x1007363B: call 0x100149a4 */
    RECOMP_FLAGS_IN();
    edi = ecx; /* 0x10073640: mov edi, ecx */
    RECOMP_CALL(sub_100269D9); /* 0x10073642: call 0x100269d9 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(ebx, 0); /* 0x10073647: xor bl, bl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    /* cmp MEM32(0x100E03E8), 0 */ /* 0x10073649: cmp dword ptr [0x100e03e8], 0 */
    _flag_a = (uint32_t)(MEM32(0x100E03E8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100736BD; /* 0x10073650: jne 0x100736bd */
L_10073652:
    ecx = 0x100E0320u; /* 0x10073652: mov ecx, 0x100e0320 */
    MEM32(ebp + (-0x10)) = ecx; /* 0x10073657: mov dword ptr [ebp - 0x10], ecx */
    RECOMP_CALL(sub_10023D1E); /* 0x1007365A: call 0x10023d1e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1007365F: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(0x100E03E8), 0 */ /* 0x10073663: cmp dword ptr [0x100e03e8], 0 */
    _flag_a = (uint32_t)(MEM32(0x100E03E8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100736AB; /* 0x1007366A: jne 0x100736ab */
L_1007366C:
    esi = MEM32(0x100E0AC8); /* 0x1007366C: mov esi, dword ptr [0x100e0ac8] */
    /* test esi, esi */ /* 0x10073672: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10073685; /* 0x10073674: je 0x10073685 */
L_10073676:
    PUSH32(esp, MEM32(esi)); /* 0x10073676: push dword ptr [esi] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10073678: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1007367D: push esi */
    RECOMP_CALL(sub_1000ECE0); /* 0x1007367E: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10073683: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10073684: pop ecx */
L_10073685:
    PUSH32(esp, 4); /* 0x10073685: push 4 */
    RECOMP_CALL(sub_1000EE11); /* 0x10073687: call 0x1000ee11 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007368C: pop ecx */
    MEM32(ebp + (-0x14)) = eax; /* 0x1007368D: mov dword ptr [ebp - 0x14], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10073690: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x10073692: inc ebx */
    _flag_k = FK_INC;
    MEM8(ebp + (-0x4)) = (uint8_t)(LO8(ebx)); /* 0x10073693: mov byte ptr [ebp - 4], bl */
    /* test eax, eax */ /* 0x10073696: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100736A4; /* 0x10073698: je 0x100736a4 */
L_1007369A:
    PUSH32(esp, edi); /* 0x1007369A: push edi */
    ecx = eax; /* 0x1007369B: mov ecx, eax */
    RECOMP_CALL(sub_10026F6A); /* 0x1007369D: call 0x10026f6a */
    RECOMP_FLAGS_IN();
    goto L_100736A6; /* 0x100736A2: jmp 0x100736a6 */
L_100736A4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100736A4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_100736A6:
    MEM32(0x100E0AC8) = eax; /* 0x100736A6: mov dword ptr [0x100e0ac8], eax */
L_100736AB:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x100736AB: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x100E0320) = 0; /* 0x100736AF: mov dword ptr [0x100e0320], 0 */
    /* test LO8(ebx), LO8(ebx) */ /* 0x100736B9: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100736DA; /* 0x100736BB: jne 0x100736da */
L_100736BD:
    ecx = ebp + (-0x20); /* 0x100736BD: lea ecx, [ebp - 0x20] */
    RECOMP_CALL(sub_1009DD55); /* 0x100736C0: call 0x1009dd55 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x100736E0u); /* 0x100736C5: push 0x100736e0 */
    eax = ebp + (-0x20); /* 0x100736CA: lea eax, [ebp - 0x20] */
    MEM32(ebp + (-0x20)) = 0x10067814u; /* 0x100736CD: mov dword ptr [ebp - 0x20], 0x10067814 */
    PUSH32(esp, eax); /* 0x100736D4: push eax */
    RECOMP_CALL(sub_100192EB); /* 0x100736D5: call 0x100192eb */
    RECOMP_FLAGS_IN();
L_100736DA:
    RECOMP_CALL(sub_100149D7); /* 0x100736DA: call 0x100149d7 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100736DF: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007330B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007330Bu);

L_1007330B:
    PUSH32(esp, esi); /* 0x1007330B: push esi */
    ecx = 0x100E0320u; /* 0x1007330C: mov ecx, 0x100e0320 */
    RECOMP_CALL(sub_10023D1E); /* 0x10073311: call 0x10023d1e */
    RECOMP_FLAGS_IN();
    esi = MEM32(0x100E0AC8); /* 0x10073316: mov esi, dword ptr [0x100e0ac8] */
    /* test esi, esi */ /* 0x1007331C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10073336; /* 0x1007331E: je 0x10073336 */
L_10073320:
    PUSH32(esp, MEM32(esi)); /* 0x10073320: push dword ptr [esi] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10073322: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x10073327: push esi */
    RECOMP_CALL(sub_1000ECE0); /* 0x10073328: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(0x100E0AC8)); _flag_b = (uint32_t)(0);
    MEM32(0x100E0AC8) = MEM32(0x100E0AC8) & 0; /* 0x1007332D: and dword ptr [0x100e0ac8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x10073334: pop ecx */
    ecx = POP32_VAL(esp); /* 0x10073335: pop ecx */
L_10073336:
    MEM32(0x100E0320) = 0; /* 0x10073336: mov dword ptr [0x100e0320], 0 */
    esi = POP32_VAL(esp); /* 0x10073340: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10073341: ret  */
    RECOMP_REGS_OUT();
}

void sub_10073342(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10073342u);

L_10073342:
    PUSH32(esp, ebp); /* 0x10073342: push ebp */
    ebp = esp; /* 0x10073343: mov ebp, esp */
    PUSH32(esp, esi); /* 0x10073345: push esi */
    esi = ecx; /* 0x10073346: mov esi, ecx */
    RECOMP_CALL(sub_10073361); /* 0x10073348: call 0x10073361 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1007334D: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007335A; /* 0x10073351: je 0x1007335a */
L_10073353:
    PUSH32(esp, esi); /* 0x10073353: push esi */
    RECOMP_CALL(sub_1000ECE0); /* 0x10073354: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10073359: pop ecx */
L_1007335A:
    eax = esi; /* 0x1007335A: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1007335C: pop esi */
    ebp = POP32_VAL(esp); /* 0x1007335D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1007335E: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_10073361(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10073361u);

L_10073361:
    PUSH32(esp, 4); /* 0x10073361: push 4 */
    eax = 0x100DBA32u; /* 0x10073363: mov eax, 0x100dba32 */
    RECOMP_CALL(sub_100149A4); /* 0x10073368: call 0x100149a4 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1007336D: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x1007336F: mov dword ptr [ebp - 0x10], esi */
    MEM32(esi) = 0x10024128u; /* 0x10073372: mov dword ptr [esi], 0x10024128 */
    MEM32(ebp + (-0x4)) = 0xAu; /* 0x10073378: mov dword ptr [ebp - 4], 0xa */
    RECOMP_CALL(sub_10073412); /* 0x1007337F: call 0x10073412 */
    RECOMP_FLAGS_IN();
    ecx = esi + 0x168; /* 0x10073384: lea ecx, [esi + 0x168] */
    RECOMP_CALL(sub_10074FE2); /* 0x1007338A: call 0x10074fe2 */
    RECOMP_FLAGS_IN();
    ecx = esi + 0x15C; /* 0x1007338F: lea ecx, [esi + 0x15c] */
    RECOMP_CALL(sub_10074FE2); /* 0x10073395: call 0x10074fe2 */
    RECOMP_FLAGS_IN();
    eax = esi + 0x118; /* 0x1007339A: lea eax, [esi + 0x118] */
    PUSH32(esp, eax); /* 0x100733A0: push eax */
    RECOMP_ICALL(MEM32(0x100E5040)); /* 0x100733A1: call dword ptr [0x100e5040] */
    RECOMP_FLAGS_IN();
    ecx = esi + 0xC8; /* 0x100733A7: lea ecx, [esi + 0xc8] */
    RECOMP_CALL(sub_10072F46); /* 0x100733AD: call 0x10072f46 */
    RECOMP_FLAGS_IN();
    ecx = esi + 0x60; /* 0x100733B2: lea ecx, [esi + 0x60] */
    MEM8(ebp + (-0x4)) = (uint8_t)(5); /* 0x100733B5: mov byte ptr [ebp - 4], 5 */
    RECOMP_CALL(sub_10075035); /* 0x100733B9: call 0x10075035 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x58)); /* 0x100733BE: push dword ptr [esi + 0x58] */
    RECOMP_CALL(sub_1000ECE0); /* 0x100733C1: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100733C6: pop ecx */
    PUSH32(esp, MEM32(esi + 0x50)); /* 0x100733C7: push dword ptr [esi + 0x50] */
    RECOMP_CALL(sub_1000ECE0); /* 0x100733CA: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100733CF: pop ecx */
    PUSH32(esp, MEM32(esi + 0x4C)); /* 0x100733D0: push dword ptr [esi + 0x4c] */
    RECOMP_CALL(sub_1000ECE0); /* 0x100733D3: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100733D8: pop ecx */
    PUSH32(esp, MEM32(esi + 0x44)); /* 0x100733D9: push dword ptr [esi + 0x44] */
    RECOMP_CALL(sub_1000ECE0); /* 0x100733DC: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100733E1: pop ecx */
    PUSH32(esp, MEM32(esi + 0x40)); /* 0x100733E2: push dword ptr [esi + 0x40] */
    RECOMP_CALL(sub_1000ECE0); /* 0x100733E5: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100733EA: pop ecx */
    PUSH32(esp, MEM32(esi + 0x38)); /* 0x100733EB: push dword ptr [esi + 0x38] */
    RECOMP_CALL(sub_1000ECE0); /* 0x100733EE: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100733F3: pop ecx */
    PUSH32(esp, MEM32(esi + 0x34)); /* 0x100733F4: push dword ptr [esi + 0x34] */
    RECOMP_CALL(sub_1000ECE0); /* 0x100733F7: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100733FC: pop ecx */
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x100733FD: push dword ptr [esi + 4] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10073400: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10073405: pop ecx */
    MEM32(esi) = 0x10067920u; /* 0x10073406: mov dword ptr [esi], 0x10067920 */
    RECOMP_CALL(sub_100149D7); /* 0x1007340C: call 0x100149d7 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10073411: ret  */
    RECOMP_REGS_OUT();
}

void sub_10073412(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10073412u);

L_10073412:
    PUSH32(esp, 4); /* 0x10073412: push 4 */
    eax = 0x100DBAA1u; /* 0x10073414: mov eax, 0x100dbaa1 */
    RECOMP_CALL(sub_100149A4); /* 0x10073419: call 0x100149a4 */
    RECOMP_FLAGS_IN();
    edi = ecx; /* 0x1007341E: mov edi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x10073420: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edi + 0x2C), esi */ /* 0x10073422: cmp dword ptr [edi + 0x2c], esi */
    _flag_a = (uint32_t)(MEM32(edi + 0x2C)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_10073465; /* 0x10073425: jle 0x10073465 */
L_10073427:
    eax = MEM32(edi + 0x20); /* 0x10073427: mov eax, dword ptr [edi + 0x20] */
    ebx = MEM32(eax + esi * 4); /* 0x1007342A: mov ebx, dword ptr [eax + esi*4] */
    MEM32(ebp + (-0x10)) = ebx; /* 0x1007342D: mov dword ptr [ebp - 0x10], ebx */
    /* test ebx, ebx */ /* 0x10073430: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007345F; /* 0x10073432: je 0x1007345f */
L_10073434:
    ecx = ebx + 0x38; /* 0x10073434: lea ecx, [ebx + 0x38] */
    MEM32(ebp + (-0x4)) = 1; /* 0x10073437: mov dword ptr [ebp - 4], 1 */
    RECOMP_CALL(sub_100760FA); /* 0x1007343E: call 0x100760fa */
    RECOMP_FLAGS_IN();
    ecx = ebx + 0x10; /* 0x10073443: lea ecx, [ebx + 0x10] */
    RECOMP_CALL(sub_10074FE2); /* 0x10073446: call 0x10074fe2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1007344B: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(ebx + 0xC)); /* 0x1007344F: push dword ptr [ebx + 0xc] */
    RECOMP_CALL(sub_1000ECE0); /* 0x10073452: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10073457: pop ecx */
    PUSH32(esp, ebx); /* 0x10073458: push ebx */
    RECOMP_CALL(sub_1000ECE0); /* 0x10073459: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007345E: pop ecx */
L_1007345F:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1007345F: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(edi + 0x2C) */ /* 0x10073460: cmp esi, dword ptr [edi + 0x2c] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edi + 0x2C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_10073427; /* 0x10073463: jl 0x10073427 */
L_10073465:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x10073465: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edi + 0x2C), esi */ /* 0x10073467: cmp dword ptr [edi + 0x2c], esi */
    _flag_a = (uint32_t)(MEM32(edi + 0x2C)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_100734A5; /* 0x1007346A: jle 0x100734a5 */
L_1007346C:
    eax = MEM32(edi + 0x24); /* 0x1007346C: mov eax, dword ptr [edi + 0x24] */
    ebx = MEM32(eax + esi * 4); /* 0x1007346F: mov ebx, dword ptr [eax + esi*4] */
    MEM32(ebp + (-0x10)) = ebx; /* 0x10073472: mov dword ptr [ebp - 0x10], ebx */
    /* test ebx, ebx */ /* 0x10073475: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007349F; /* 0x10073477: je 0x1007349f */
L_10073479:
    MEM32(ebp + (-0x4)) = 2; /* 0x10073479: mov dword ptr [ebp - 4], 2 */
    ecx = ebx + 0x60; /* 0x10073480: lea ecx, [ebx + 0x60] */
    _flag_a = (uint32_t)(MEM32(ebx + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(ebx + 0x8) = MEM32(ebx + 0x8) & 0; /* 0x10073483: and dword ptr [ebx + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_100762B6); /* 0x10073487: call 0x100762b6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1007348C: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebx + 0x10; /* 0x10073490: lea ecx, [ebx + 0x10] */
    RECOMP_CALL(sub_100762B6); /* 0x10073493: call 0x100762b6 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x10073498: push ebx */
    RECOMP_CALL(sub_1000ECE0); /* 0x10073499: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007349E: pop ecx */
L_1007349F:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1007349F: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(edi + 0x2C) */ /* 0x100734A0: cmp esi, dword ptr [edi + 0x2c] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edi + 0x2C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1007346C; /* 0x100734A3: jl 0x1007346c */
L_100734A5:
    PUSH32(esp, MEM32(edi + 0x5C)); /* 0x100734A5: push dword ptr [edi + 0x5c] */
    RECOMP_CALL(sub_1000ECE0); /* 0x100734A8: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100734AD: pop ecx */
    PUSH32(esp, MEM32(edi + 0x20)); /* 0x100734AE: push dword ptr [edi + 0x20] */
    RECOMP_CALL(sub_1000ECE0); /* 0x100734B1: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100734B6: pop ecx */
    PUSH32(esp, MEM32(edi + 0x24)); /* 0x100734B7: push dword ptr [edi + 0x24] */
    RECOMP_CALL(sub_1000ECE0); /* 0x100734BA: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0x1C); /* 0x100734BF: mov eax, dword ptr [edi + 0x1c] */
    ecx = POP32_VAL(esp); /* 0x100734C2: pop ecx */
    /* test eax, eax */ /* 0x100734C3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100734E0; /* 0x100734C5: je 0x100734e0 */
L_100734C7:
    PUSH32(esp, 0x100735AAu); /* 0x100734C7: push 0x100735aa */
    esi = eax + (-0x4); /* 0x100734CC: lea esi, [eax - 4] */
    PUSH32(esp, MEM32(esi)); /* 0x100734CF: push dword ptr [esi] */
    PUSH32(esp, 0x10u); /* 0x100734D1: push 0x10 */
    PUSH32(esp, eax); /* 0x100734D3: push eax */
    RECOMP_CALL(sub_1009E24F); /* 0x100734D4: call 0x1009e24f */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x100734D9: push esi */
    RECOMP_CALL(sub_1000ECE0); /* 0x100734DA: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100734DF: pop ecx */
L_100734E0:
    PUSH32(esp, MEM32(edi + 0x18)); /* 0x100734E0: push dword ptr [edi + 0x18] */
    RECOMP_ICALL(MEM32(0x100E5188)); /* 0x100734E3: call dword ptr [0x100e5188] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi + 0x1A8); /* 0x100734E9: mov ecx, dword ptr [edi + 0x1a8] */
    _flag_a = (uint32_t)(MEM32(edi + 0x18)); _flag_b = (uint32_t)(0);
    MEM32(edi + 0x18) = MEM32(edi + 0x18) & 0; /* 0x100734EF: and dword ptr [edi + 0x18], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x100734F3: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x100734F5: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    ecx = 0x100E0328u; /* 0x100734F8: mov ecx, 0x100e0328 */
    MEM32(ebp + (-0x10)) = ecx; /* 0x100734FD: mov dword ptr [ebp - 0x10], ecx */
    RECOMP_CALL(sub_10023D1E); /* 0x10073500: call 0x10023d1e */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = 3; /* 0x10073505: mov dword ptr [ebp - 4], 3 */
    _flag_a = (uint32_t)(MEM32(0x100E0ACC)); _flag_b = (uint32_t)(1);
    MEM32(0x100E0ACC) = MEM32(0x100E0ACC) - 1; /* 0x1007350C: dec dword ptr [0x100e0acc] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1007359A; /* 0x10073512: jne 0x1007359a */
L_10073518:
    esi = MEM32(0x100E0AD8); /* 0x10073518: mov esi, dword ptr [0x100e0ad8] */
    /* test esi, esi */ /* 0x1007351E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007356B; /* 0x10073520: je 0x1007356b */
L_10073522:
    edi = MEM32(0x100E0AD0); /* 0x10073522: mov edi, dword ptr [0x100e0ad0] */
    ebx = MEM32(0x100E0AD4); /* 0x10073528: mov ebx, dword ptr [0x100e0ad4] */
    MEM8(0x100E03F0) = (uint8_t)(0); /* 0x1007352E: mov byte ptr [0x100e03f0], 0 */
    MEM32(0x100E03EC) = 0; /* 0x10073535: mov dword ptr [0x100e03ec], 0 */
    esi = MEM32(esi + 0x4); /* 0x1007353F: mov esi, dword ptr [esi + 4] */
    PUSH32(esp, 0); /* 0x10073542: push 0 */
    RECOMP_ICALL(MEM32(0x100E5000)); /* 0x10073544: call dword ptr [0x100e5000] */
    RECOMP_FLAGS_IN();
    /* cmp esi, eax */ /* 0x1007354A: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10073558; /* 0x1007354C: je 0x10073558 */
L_1007354E:
    _flag_a = (uint32_t)((esi ^ MEM32(0x100E0330))); _flag_b = (uint32_t)((esi ^ MEM32(0x100E0330)));
    esi = esi ^ MEM32(0x100E0330); /* 0x1007354E: xor esi, dword ptr [0x100e0330] */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x10073554: push ebx */
    PUSH32(esp, edi); /* 0x10073555: push edi */
    RECOMP_ICALL(esi); /* 0x10073556: call esi */
    RECOMP_FLAGS_IN();
L_10073558:
    PUSH32(esp, MEM32(0x100E0AD8)); /* 0x10073558: push dword ptr [0x100e0ad8] */
    RECOMP_CALL(sub_1000ECE0); /* 0x1007355E: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(0x100E0AD8)); _flag_b = (uint32_t)(0);
    MEM32(0x100E0AD8) = MEM32(0x100E0AD8) & 0; /* 0x10073563: and dword ptr [0x100e0ad8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1007356A: pop ecx */
L_1007356B:
    edi = MEM32(0x100E512C); /* 0x1007356B: mov edi, dword ptr [0x100e512c] */
    ebx = 0x100E0EF0u; /* 0x10073571: mov ebx, 0x100e0ef0 */
    goto L_10073591; /* 0x10073576: jmp 0x10073591 */
L_10073578:
    PUSH32(esp, 0x10077AF5u); /* 0x10073578: push 0x10077af5 */
    PUSH32(esp, 0x60u); /* 0x1007357D: push 0x60 */
    PUSH32(esp, 8); /* 0x1007357F: push 8 */
    eax = esi + 0x4; /* 0x10073581: lea eax, [esi + 4] */
    PUSH32(esp, eax); /* 0x10073584: push eax */
    RECOMP_CALL(sub_1009E24F); /* 0x10073585: call 0x1009e24f */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1007358A: push esi */
    RECOMP_CALL(sub_1000ECE0); /* 0x1007358B: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x10073590: pop ecx */
L_10073591:
    PUSH32(esp, ebx); /* 0x10073591: push ebx */
    RECOMP_ICALL(edi); /* 0x10073592: call edi */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x10073594: mov esi, eax */
    /* test esi, esi */ /* 0x10073596: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10073578; /* 0x10073598: jne 0x10073578 */
L_1007359A:
    MEM32(0x100E0328) = 0; /* 0x1007359A: mov dword ptr [0x100e0328], 0 */
    RECOMP_CALL(sub_100149D7); /* 0x100735A4: call 0x100149d7 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100735A9: ret  */
    RECOMP_REGS_OUT();
}

void sub_100735AA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100735AAu);

L_100735AA:
    PUSH32(esp, esi); /* 0x100735AA: push esi */
    esi = ecx; /* 0x100735AB: mov esi, ecx */
    PUSH32(esp, MEM32(esi + 0xC)); /* 0x100735AD: push dword ptr [esi + 0xc] */
    RECOMP_CALL(sub_1000ECE0); /* 0x100735B0: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x100735B5: push dword ptr [esi + 4] */
    RECOMP_CALL(sub_1000ECE0); /* 0x100735B8: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x100735BD: pop ecx */
    ecx = POP32_VAL(esp); /* 0x100735BE: pop ecx */
    esi = POP32_VAL(esp); /* 0x100735BF: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100735C0: ret  */
    RECOMP_REGS_OUT();
}

void sub_100735C1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100735C1u);

L_100735C1:
    PUSH32(esp, ebp); /* 0x100735C1: push ebp */
    ebp = esp; /* 0x100735C2: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x100735C4: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(eax + 0xB8)); /* 0x100735C7: push dword ptr [eax + 0xb8] */
    RECOMP_CALL(sub_100240E4); /* 0x100735CD: call 0x100240e4 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ecx + 0x24); /* 0x100735D2: mov ecx, dword ptr [ecx + 0x24] */
    ecx = MEM32(ecx + eax * 4); /* 0x100735D5: mov ecx, dword ptr [ecx + eax*4] */
    eax = ecx; /* 0x100735D8: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + 0x8); /* 0x100735DA: sub eax, dword ptr [ebp + 8] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x100735DD: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x100735DF: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    eax = eax & ecx; /* 0x100735E1: and eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x100735E3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x100735E4: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_100735E7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100735E7u);

L_100735E7:
    PUSH32(esp, ebp); /* 0x100735E7: push ebp */
    ebp = esp; /* 0x100735E8: mov ebp, esp */
    /* cmp MEM32(ecx + 0xC), 1 */ /* 0x100735EA: cmp dword ptr [ecx + 0xc], 1 */
    _flag_a = (uint32_t)(MEM32(ecx + 0xC)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10073604; /* 0x100735EE: jne 0x10073604 */
L_100735F0:
    eax = MEM32(ebp + 0x8); /* 0x100735F0: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(eax + 0xB8)); /* 0x100735F3: push dword ptr [eax + 0xb8] */
    RECOMP_CALL(sub_100240E4); /* 0x100735F9: call 0x100240e4 */
    RECOMP_FLAGS_IN();
    MEM32(ecx + 0x178) = eax; /* 0x100735FE: mov dword ptr [ecx + 0x178], eax */
L_10073604:
    ebp = POP32_VAL(esp); /* 0x10073604: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x10073605: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_10073608(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10073608u);

L_10073608:
    /* test MEM32(0x100DFDDC), 0x80000000u */ /* 0x10073608: test dword ptr [0x100dfddc], 0x80000000 */
    _flag_a = (uint32_t)(MEM32(0x100DFDDC)); _flag_b = (uint32_t)(0x80000000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10073621; /* 0x10073612: je 0x10073621 */
L_10073614:
    PUSH32(esp, MEM32(0x100DFDE0)); /* 0x10073614: push dword ptr [0x100dfde0] */
    RECOMP_ICALL(MEM32(0x100E514C)); /* 0x1007361A: call dword ptr [0x100e514c] */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10073620: ret  */
L_10073621:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10073621: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10073623: ret  */
    RECOMP_REGS_OUT();
}

void sub_10073624(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10073624u);

L_10073624:
    RECOMP_CALL(sub_10073608); /* 0x10073624: call 0x10073608 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10073629: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10073631; /* 0x1007362B: je 0x10073631 */
L_1007362D:
    eax = MEM32(eax + 0x1C); /* 0x1007362D: mov eax, dword ptr [eax + 0x1c] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10073630: ret  */
L_10073631:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10073631: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10073633: ret  */
    RECOMP_REGS_OUT();
}

void sub_100736E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100736E0u);

L_100736E0:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100736E0: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100736E2: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, 0x00100692u); /* 0x100736E4: push 0x100692 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x100736E9: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax + (-0x30))) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax + (-0x30)) = (uint8_t)(MEM8(eax + (-0x30)) + HI8(eax)); /* 0x100736EB: add byte ptr [eax - 0x30], ah */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)((eax | 0xEC8B5510u)); _flag_b = (uint32_t)((eax | 0xEC8B5510u));
    eax = eax | 0xEC8B5510u; /* 0x100736EE: or eax, 0xec8b5510 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x100736F3: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100736F4: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x100736F7: mov esi, ecx */
    RECOMP_CALL(sub_1002D16D); /* 0x100736F9: call 0x1002d16d */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x10067814u; /* 0x100736FE: mov dword ptr [esi], 0x10067814 */
    eax = esi; /* 0x10073704: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x10073706: pop esi */
    ebp = POP32_VAL(esp); /* 0x10073707: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x10073708: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1007370B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007370Bu);

L_1007370B:
    PUSH32(esp, ebp); /* 0x1007370B: push ebp */
    ebp = esp; /* 0x1007370C: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1007370E: push ecx */
    PUSH32(esp, ecx); /* 0x1007370F: push ecx */
    PUSH32(esp, ebx); /* 0x10073710: push ebx */
    PUSH32(esp, esi); /* 0x10073711: push esi */
    esi = ecx; /* 0x10073712: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10073714: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_10023AF4); /* 0x10073716: call 0x10023af4 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1007371B: push dword ptr [ebp + 0xc] */
    eax = ebp + 0x10; /* 0x1007371E: lea eax, [ebp + 0x10] */
    MEM32(ebp + (-0x8)) = ebx; /* 0x10073721: mov dword ptr [ebp - 8], ebx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x10073724: sub esp, 0x10 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x10073727: mov ecx, esp */
    PUSH32(esp, eax); /* 0x10073729: push eax */
    RECOMP_CALL(sub_1002762F); /* 0x1007372A: call 0x1002762f */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x8); /* 0x1007372F: lea eax, [ebp - 8] */
    ecx = esi; /* 0x10073732: mov ecx, esi */
    PUSH32(esp, eax); /* 0x10073734: push eax */
    RECOMP_CALL(sub_1007375E); /* 0x10073735: call 0x1007375e */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1007373A: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007374F; /* 0x1007373C: je 0x1007374f */
L_1007373E:
    ecx = MEM32(ebp + (-0x4)); /* 0x1007373E: mov ecx, dword ptr [ebp - 4] */
    PUSH32(esp, ebx); /* 0x10073741: push ebx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10073742: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x10073745: push dword ptr [ebp - 8] */
    RECOMP_CALL(sub_1007A78F); /* 0x10073748: call 0x1007a78f */
    RECOMP_FLAGS_IN();
    SET_LO8(ebx, 1); /* 0x1007374D: mov bl, 1 */
L_1007374F:
    RECOMP_CALL(sub_10023AF4); /* 0x1007374F: call 0x10023af4 */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x10073754: pop esi */
    SET_LO8(eax, LO8(ebx)); /* 0x10073755: mov al, bl */
    ebx = POP32_VAL(esp); /* 0x10073757: pop ebx */
    esp = ebp; /* 0x10073758: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1007375A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x1007375B: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_1007375E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007375Eu);

L_1007375E:
    PUSH32(esp, ebp); /* 0x1007375E: push ebp */
    ebp = esp; /* 0x1007375F: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x10073761: push ecx */
    PUSH32(esp, ecx); /* 0x10073762: push ecx */
    eax = MEM32(ebp + 0xC); /* 0x10073763: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x10073766: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10073767: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x0FFFFFFFu);
    eax = eax & 0x0FFFFFFFu; /* 0x10073769: and eax, 0xfffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1007376E: push esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1007376F: inc ebx */
    _flag_k = FK_INC;
    esi = ecx; /* 0x10073770: mov esi, ecx */
    PUSH32(esp, edi); /* 0x10073772: push edi */
    /* cmp eax, ebx */ /* 0x10073773: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100737B5; /* 0x10073775: je 0x100737b5 */
L_10073777:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFFEu; /* 0x10073777: add eax, -2 */
    _flag_k = FK_ADD;
    /* cmp eax, ebx */ /* 0x1007377A: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1007380A; /* 0x1007377C: ja 0x1007380a */
L_10073782:
    eax = ebp + 0xC; /* 0x10073782: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x10073785: push eax */
    RECOMP_CALL(sub_10074CEE); /* 0x10073786: call 0x10074cee */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1007378B: mov edi, eax */
    /* test edi, edi */ /* 0x1007378D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007380A; /* 0x1007378F: je 0x1007380a */
L_10073791:
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x10073791: push dword ptr [ebp + 0x1c] */
    eax = ebp + 0xC; /* 0x10073794: lea eax, [ebp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x10073797: sub esp, 0x10 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x1007379A: mov ecx, esp */
    PUSH32(esp, eax); /* 0x1007379C: push eax */
    RECOMP_CALL(sub_1002762F); /* 0x1007379D: call 0x1002762f */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100737A2: push dword ptr [ebp + 8] */
    ecx = edi; /* 0x100737A5: mov ecx, edi */
    RECOMP_CALL(sub_10075FC0); /* 0x100737A7: call 0x10075fc0 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x100737AC: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007380A; /* 0x100737AE: je 0x1007380a */
L_100737B0:
    goto L_10073848; /* 0x100737B0: jmp 0x10073848 */
L_100737B5:
    eax = MEM32(ebp + 0x14); /* 0x100737B5: mov eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x100737B8: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x100737BA: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x100737BA: shl eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x1C));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(esi + 0x1C); /* 0x100737BD: add eax, dword ptr [esi + 0x1c] */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = eax; /* 0x100737C0: mov dword ptr [ebp - 4], eax */
    /* cmp MEM32(esi + 0x2C), edi */ /* 0x100737C3: cmp dword ptr [esi + 0x2c], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x2C)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1007380A; /* 0x100737C6: jle 0x1007380a */
L_100737C8:
    eax = MEM32(eax + 0x4); /* 0x100737C8: mov eax, dword ptr [eax + 4] */
    ecx = edi; /* 0x100737CB: mov ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Fu);
    ecx = ecx & 0x1Fu; /* 0x100737CD: and ecx, 0x1f */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = ebx; /* 0x100737D0: mov edx, ebx */
    if (((LO8(ecx)) & 31)) _cf = ((((LO8(ecx)) & 31)) <= 32 ? (((edx) >> (32 - (((LO8(ecx)) & 31)))) & 1u) : 0u); /* 0x100737D2: shl edx, cl */
    if (((LO8(ecx)) & 31)) { _flag_a = recomp_flags_pack((edx << ((LO8(ecx)) & 31)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << ((LO8(ecx)) & 31); /* 0x100737D2: shl edx, cl */
    ecx = edi; /* 0x100737D4: mov ecx, edi */
    if (5u) _cf = (((ecx) >> 4) & 1u); /* 0x100737D6: shr ecx, 5 */
    if (5u) { _flag_a = recomp_flags_pack((ecx >> 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 5u; /* 0x100737D6: shr ecx, 5 */
    /* test MEM32(eax + ecx * 4), edx */ /* 0x100737D9: test dword ptr [eax + ecx*4], edx */
    _flag_a = (uint32_t)(MEM32(eax + ecx * 4)); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10073801; /* 0x100737DC: je 0x10073801 */
L_100737DE:
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x100737DE: push dword ptr [ebp + 0x1c] */
    eax = ebp + 0xC; /* 0x100737E1: lea eax, [ebp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x100737E4: sub esp, 0x10 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x100737E7: mov ecx, esp */
    PUSH32(esp, eax); /* 0x100737E9: push eax */
    RECOMP_CALL(sub_1002762F); /* 0x100737EA: call 0x1002762f */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x20); /* 0x100737EF: mov ecx, dword ptr [esi + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100737F2: push dword ptr [ebp + 8] */
    ecx = MEM32(ecx + edi * 4); /* 0x100737F5: mov ecx, dword ptr [ecx + edi*4] */
    RECOMP_CALL(sub_10075FC0); /* 0x100737F8: call 0x10075fc0 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x100737FD: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10073848; /* 0x100737FF: jne 0x10073848 */
L_10073801:
    eax = MEM32(ebp + (-0x4)); /* 0x10073801: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x10073804: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(esi + 0x2C) */ /* 0x10073805: cmp edi, dword ptr [esi + 0x2c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x2C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_100737C8; /* 0x10073808: jl 0x100737c8 */
L_1007380A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1007380A: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x2C), edi */ /* 0x1007380C: cmp dword ptr [esi + 0x2c], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x2C)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_10073846; /* 0x1007380F: jle 0x10073846 */
L_10073811:
    eax = MEM32(esi + 0x20); /* 0x10073811: mov eax, dword ptr [esi + 0x20] */
    ecx = MEM32(eax + edi * 4); /* 0x10073814: mov ecx, dword ptr [eax + edi*4] */
    /* test ecx, ecx */ /* 0x10073817: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10073840; /* 0x10073819: je 0x10073840 */
L_1007381B:
    /* cmp MEM32(ecx + 0x1C), 0 */ /* 0x1007381B: cmp dword ptr [ecx + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + 0x1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_10073840; /* 0x1007381F: jle 0x10073840 */
L_10073821:
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x10073821: push dword ptr [ebp + 0x1c] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x10073824: sub esp, 0x10 */
    _flag_k = FK_CMP;
    eax = esp; /* 0x10073827: mov eax, esp */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10073829: push dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x1007382C: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(eax + 0x8) = MEM32(eax + 0x8) & 0; /* 0x1007382F: and dword ptr [eax + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(eax + 0xC)); _flag_b = (uint32_t)(0);
    MEM32(eax + 0xC) = MEM32(eax + 0xC) & 0; /* 0x10073833: and dword ptr [eax + 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_10075FC0); /* 0x10073837: call 0x10075fc0 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1007383C: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10073848; /* 0x1007383E: jne 0x10073848 */
L_10073840:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x10073840: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(esi + 0x2C) */ /* 0x10073841: cmp edi, dword ptr [esi + 0x2c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x2C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_10073811; /* 0x10073844: jl 0x10073811 */
L_10073846:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(ebx, 0); /* 0x10073846: xor bl, bl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_10073848:
    edi = POP32_VAL(esp); /* 0x10073848: pop edi */
    esi = POP32_VAL(esp); /* 0x10073849: pop esi */
    SET_LO8(eax, LO8(ebx)); /* 0x1007384A: mov al, bl */
    ebx = POP32_VAL(esp); /* 0x1007384C: pop ebx */
    esp = ebp; /* 0x1007384D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1007384F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x10073850: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_100738B9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100738B9u);

L_100738B9:
    eax = MEM32(ecx + 0x190); /* 0x100738B9: mov eax, dword ptr [ecx + 0x190] */
    ecx = MEM32(ecx + 0x1CC); /* 0x100738BF: mov ecx, dword ptr [ecx + 0x1cc] */
    /* cmp eax, ecx */ /* 0x100738C5: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_100738CD; /* 0x100738C7: jae 0x100738cd */
L_100738C9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x100738C9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_10073945; /* 0x100738CB: jmp 0x10073945 */
L_100738CD:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x100738CD: sub eax, ecx */
    _flag_k = FK_CMP;
    /* cmp eax, 0x64u */ /* 0x100738CF: cmp eax, 0x64 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x64u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_100738E0; /* 0x100738D2: jae 0x100738e0 */
L_100738D4:
    PUSH32(esp, 0xAu); /* 0x100738D4: push 0xa */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x100738D6: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x100738D8: pop ecx */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x100738D9: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 5; /* 0x100738DB: add eax, 5 */
    _flag_k = FK_ADD;
    goto L_10073945; /* 0x100738DE: jmp 0x10073945 */
L_100738E0:
    /* cmp eax, 0x12Cu */ /* 0x100738E0: cmp eax, 0x12c */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x12Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_100738EF; /* 0x100738E5: jae 0x100738ef */
L_100738E7:
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x100738E7: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x100738E7: shr eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFu; /* 0x100738EA: add eax, 0xf */
    _flag_k = FK_ADD;
    goto L_10073945; /* 0x100738ED: jmp 0x10073945 */
L_100738EF:
    /* cmp eax, 0x258u */ /* 0x100738EF: cmp eax, 0x258 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x258u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_10073902; /* 0x100738F4: jae 0x10073902 */
L_100738F6:
    PUSH32(esp, 5); /* 0x100738F6: push 5 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x100738F8: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x100738FA: pop ecx */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x100738FB: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x3Cu; /* 0x100738FD: add eax, 0x3c */
    _flag_k = FK_ADD;
    goto L_10073945; /* 0x10073900: jmp 0x10073945 */
L_10073902:
    /* cmp eax, 0x5DCu */ /* 0x10073902: cmp eax, 0x5dc */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x5DCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_10073913; /* 0x10073907: jae 0x10073913 */
L_10073909:
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x10073909: shr eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 2u; /* 0x10073909: shr eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xB4u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xB4u; /* 0x1007390C: add eax, 0xb4 */
    _flag_k = FK_ADD;
    goto L_10073945; /* 0x10073911: jmp 0x10073945 */
L_10073913:
    PUSH32(esp, esi); /* 0x10073913: push esi */
    esi = 0x9C4u; /* 0x10073914: mov esi, 0x9c4 */
    /* cmp eax, esi */ /* 0x10073919: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1007392B; /* 0x1007391B: jae 0x1007392b */
L_1007391D:
    PUSH32(esp, 3); /* 0x1007391D: push 3 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1007391F: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x10073921: pop ecx */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x10073922: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x22Bu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x22Bu; /* 0x10073924: add eax, 0x22b */
    _flag_k = FK_ADD;
    goto L_10073944; /* 0x10073929: jmp 0x10073944 */
L_1007392B:
    /* cmp eax, 0xFA0u */ /* 0x1007392B: cmp eax, 0xfa0 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFA0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1007393D; /* 0x10073930: jae 0x1007393d */
L_10073932:
    PUSH32(esp, 3); /* 0x10073932: push 3 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x10073934: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x10073936: pop ecx */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x10073937: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x10073939: add eax, esi */
    _flag_k = FK_ADD;
    goto L_10073944; /* 0x1007393B: jmp 0x10073944 */
L_1007393D:
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x1007393D: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x1007393D: shr eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x2008u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x2008u; /* 0x1007393F: add eax, 0x2008 */
    _flag_k = FK_ADD;
L_10073944:
    esi = POP32_VAL(esp); /* 0x10073944: pop esi */
L_10073945:
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x10073945: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_10073948(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10073948u);

L_10073948:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10073948: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = ecx + 0x1E4; /* 0x1007394A: lea edx, [ecx + 0x1e4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10073950: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(edx), _sum = MEM32(edx) + eax; eax = _old; MEM32(edx) = _sum; } /* 0x10073951: lock xadd dword ptr [edx], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10073955: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, 1 */ /* 0x10073956: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10073967; /* 0x10073959: jne 0x10073967 */
L_1007395B:
    PUSH32(esp, MEM32(ecx + 0x1D8)); /* 0x1007395B: push dword ptr [ecx + 0x1d8] */
    RECOMP_ICALL(MEM32(0x100E5140)); /* 0x10073961: call dword ptr [0x100e5140] */
    RECOMP_FLAGS_IN();
L_10073967:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10073967: ret  */
    RECOMP_REGS_OUT();
}

void sub_10073968(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10073968u);

L_10073968:
    PUSH32(esp, ebp); /* 0x10073968: push ebp */
    ebp = esp; /* 0x10073969: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x1007396B: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1007396E: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x10073971: push esi */
    esi = ecx; /* 0x10073972: mov esi, ecx */
    RECOMP_CALL(sub_10023E7E); /* 0x10073974: call 0x10023e7e */
    RECOMP_FLAGS_IN();
    /* cmp eax, 3 */ /* 0x10073979: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_100739B3; /* 0x1007397C: jl 0x100739b3 */
L_1007397E:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1007397E: push -1 */
    PUSH32(esp, 0xFFFFD8F0u); /* 0x10073980: push 0xffffd8f0 */
    PUSH32(esp, 0); /* 0x10073985: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10073987: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_10015B8C); /* 0x1007398A: call 0x10015b8c */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x1007398F: push 0 */
    MEM32(esp + 0xC) = eax; /* 0x10073991: mov dword ptr [esp + 0xc], eax */
    eax = esp + 0xC; /* 0x10073995: lea eax, [esp + 0xc] */
    PUSH32(esp, 0x7FFFFFFFu); /* 0x10073999: push 0x7fffffff */
    PUSH32(esp, eax); /* 0x1007399E: push eax */
    PUSH32(esp, MEM32(esi + 0x1E0)); /* 0x1007399F: push dword ptr [esi + 0x1e0] */
    MEM32(esp + 0x1C) = edx; /* 0x100739A5: mov dword ptr [esp + 0x1c], edx */
    RECOMP_CALL(sub_10026FC9); /* 0x100739A9: call 0x10026fc9 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x100739AE: add esp, 0x10 */
    _flag_k = FK_ADD;
    goto L_100739C9; /* 0x100739B1: jmp 0x100739c9 */
L_100739B3:
    PUSH32(esp, 0x7FFFFFFFu); /* 0x100739B3: push 0x7fffffff */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100739B8: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(esi + 0x1E0)); /* 0x100739BB: push dword ptr [esi + 0x1e0] */
    PUSH32(esp, 0); /* 0x100739C1: push 0 */
    RECOMP_ICALL(MEM32(0x100E515C)); /* 0x100739C3: call dword ptr [0x100e515c] */
    RECOMP_FLAGS_IN();
L_100739C9:
    esi = POP32_VAL(esp); /* 0x100739C9: pop esi */
    esp = ebp; /* 0x100739CA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100739CC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x100739CD: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_100739D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100739D0u);

L_100739D0:
    PUSH32(esp, ebp); /* 0x100739D0: push ebp */
    ebp = esp; /* 0x100739D1: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x100739D3: push ecx */
    PUSH32(esp, ecx); /* 0x100739D4: push ecx */
    PUSH32(esp, esi); /* 0x100739D5: push esi */
    PUSH32(esp, edi); /* 0x100739D6: push edi */
    edi = MEM32(ebp + 0x8); /* 0x100739D7: mov edi, dword ptr [ebp + 8] */
    PUSH32(esp, ecx); /* 0x100739DA: push ecx */
    ecx = edi; /* 0x100739DB: mov ecx, edi */
    RECOMP_CALL(sub_100738B9); /* 0x100739DD: call 0x100738b9 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x100739E2: mov esi, eax */
    RECOMP_CALL(sub_10027FD6); /* 0x100739E4: call 0x10027fd6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x1D0));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(edi + 0x1D0); /* 0x100739E9: sub eax, dword ptr [edi + 0x1d0] */
    _flag_k = FK_CMP;
    ecx = edi; /* 0x100739EF: mov ecx, edi */
    MEM32(ebp + (-0x4)) = edx; /* 0x100739F1: mov dword ptr [ebp - 4], edx */
    /* cmp eax, esi */ /* 0x100739F4: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_10073A02; /* 0x100739F6: jae 0x10073a02 */
L_100739F8:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x100739F8: sub esi, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x100739FA: push esi */
    RECOMP_CALL(sub_10073968); /* 0x100739FB: call 0x10073968 */
    RECOMP_FLAGS_IN();
    goto L_10073A07; /* 0x10073A00: jmp 0x10073a07 */
L_10073A02:
    RECOMP_CALL(sub_10073A0F); /* 0x10073A02: call 0x10073a0f */
    RECOMP_FLAGS_IN();
L_10073A07:
    edi = POP32_VAL(esp); /* 0x10073A07: pop edi */
    esi = POP32_VAL(esp); /* 0x10073A08: pop esi */
    esp = ebp; /* 0x10073A09: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10073A0B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x10073A0C: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_10073A0F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10073A0Fu);

L_10073A0F:
    PUSH32(esp, ebp); /* 0x10073A0F: push ebp */
    ebp = esp; /* 0x10073A10: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x10073A12: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x10073A15: sub esp, 0x1c */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10073A18: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x10073A1A: push ebx */
    PUSH32(esp, esi); /* 0x10073A1B: push esi */
    PUSH32(esp, edi); /* 0x10073A1C: push edi */
    edi = ecx; /* 0x10073A1D: mov edi, ecx */
    esi = edi + 0x1E4; /* 0x10073A1F: lea esi, [edi + 0x1e4] */
    /* cmp MEM32(esi), eax */ /* 0x10073A25: cmp dword ptr [esi], eax */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_10073B3B; /* 0x10073A27: jle 0x10073b3b */
L_10073A2D:
    PUSH32(esp, eax); /* 0x10073A2D: push eax */
    MEM8(esp + 0x12) = (uint8_t)(LO8(eax)); /* 0x10073A2E: mov byte ptr [esp + 0x12], al */
    MEM8(esp + 0x13) = (uint8_t)(LO8(eax)); /* 0x10073A32: mov byte ptr [esp + 0x13], al */
    RECOMP_CALL(sub_10073BC9); /* 0x10073A36: call 0x10073bc9 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10073A3B: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x10073A3D: inc ebx */
    _flag_k = FK_INC;
    goto L_10073A6F; /* 0x10073A3E: jmp 0x10073a6f */
L_10073A40:
    PUSH32(esp, eax); /* 0x10073A40: push eax */
    ecx = edi; /* 0x10073A41: mov ecx, edi */
    RECOMP_CALL(sub_10073B42); /* 0x10073A43: call 0x10073b42 */
    RECOMP_FLAGS_IN();
    SET_LO8(edx, MEM8(esp + 0xE)); /* 0x10073A48: mov dl, byte ptr [esp + 0xe] */
    _flag_a = (uint32_t)((LO8(edx) | LO8(eax))) << 24; _flag_b = (uint32_t)((LO8(edx) | LO8(eax))) << 24;
    SET_LO8(edx, LO8(edx) | LO8(eax)); /* 0x10073A4C: or dl, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    /* cmp MEM32(edi + 0x1B8), 0 */ /* 0x10073A4E: cmp dword ptr [edi + 0x1b8], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x1B8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM8(esp + 0xE) = (uint8_t)(LO8(edx)); /* 0x10073A55: mov byte ptr [esp + 0xe], dl */
    if (CMP_LE(_flag_a, _flag_b)) goto L_10073A83; /* 0x10073A59: jle 0x10073a83 */
L_10073A5B:
    PUSH32(esp, ecx); /* 0x10073A5B: push ecx */
    ecx = edi; /* 0x10073A5C: mov ecx, edi */
    RECOMP_CALL(sub_100738B9); /* 0x10073A5E: call 0x100738b9 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10073A63: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10073A7F; /* 0x10073A65: jne 0x10073a7f */
L_10073A67:
    PUSH32(esp, eax); /* 0x10073A67: push eax */
    ecx = edi; /* 0x10073A68: mov ecx, edi */
    RECOMP_CALL(sub_10073BC9); /* 0x10073A6A: call 0x10073bc9 */
    RECOMP_FLAGS_IN();
L_10073A6F:
    /* test eax, eax */ /* 0x10073A6F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10073A40; /* 0x10073A71: jne 0x10073a40 */
L_10073A73:
    SET_LO8(edx, MEM8(esp + 0xE)); /* 0x10073A73: mov dl, byte ptr [esp + 0xe] */
    SET_LO8(eax, LO8(ebx)); /* 0x10073A77: mov al, bl */
    MEM8(esp + 0xF) = (uint8_t)(LO8(eax)); /* 0x10073A79: mov byte ptr [esp + 0xf], al */
    goto L_10073A87; /* 0x10073A7D: jmp 0x10073a87 */
L_10073A7F:
    SET_LO8(edx, MEM8(esp + 0xE)); /* 0x10073A7F: mov dl, byte ptr [esp + 0xe] */
L_10073A83:
    SET_LO8(eax, MEM8(esp + 0xF)); /* 0x10073A83: mov al, byte ptr [esp + 0xf] */
L_10073A87:
    /* cmp MEM32(edi + 0x198), 0 */ /* 0x10073A87: cmp dword ptr [edi + 0x198], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x198)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10073AA1; /* 0x10073A8E: jne 0x10073aa1 */
L_10073A90:
    /* test LO8(eax), LO8(eax) */ /* 0x10073A90: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10073A9D; /* 0x10073A92: jne 0x10073a9d */
L_10073A94:
    /* cmp MEM32(edi + 0x1B8), 0 */ /* 0x10073A94: cmp dword ptr [edi + 0x1b8], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x1B8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_10073AA1; /* 0x10073A9B: jle 0x10073aa1 */
L_10073A9D:
    { uint32_t _tmp = MEM32(esi); /* 0x10073A9D: xchg dword ptr [esi], ebx */
      MEM32(esi) = ebx;
      ebx = _tmp; }
    goto L_10073AFD; /* 0x10073A9F: jmp 0x10073afd */
L_10073AA1:
    ecx = MEM32(esi); /* 0x10073AA1: mov ecx, dword ptr [esi] */
    eax = ecx; /* 0x10073AA3: mov eax, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x10073AA5: neg eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(esi), _sum = MEM32(esi) + eax; eax = _old; MEM32(esi) = _sum; } /* 0x10073AA7: lock xadd dword ptr [esi], eax */
    _flag_k = FK_ADD;
    /* cmp eax, ecx */ /* 0x10073AAB: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x10073AAD: setne al */
    /* test LO8(eax), LO8(eax) */ /* 0x10073AB0: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10073AFD; /* 0x10073AB2: jne 0x10073afd */
L_10073AB4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10073AB4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edi + 0x198), eax */ /* 0x10073AB6: cmp dword ptr [edi + 0x198], eax */
    _flag_a = (uint32_t)(MEM32(edi + 0x198)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10073B3B; /* 0x10073ABC: je 0x10073b3b */
L_10073ABE:
    /* test LO8(edx), LO8(edx) */ /* 0x10073ABE: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10073B3B; /* 0x10073AC0: jne 0x10073b3b */
L_10073AC2:
    ecx = edi; /* 0x10073AC2: mov ecx, edi */
    MEM32(esp + 0x18) = eax; /* 0x10073AC4: mov dword ptr [esp + 0x18], eax */
    MEM32(esp + 0x20) = eax; /* 0x10073AC8: mov dword ptr [esp + 0x20], eax */
    MEM32(esp + 0x24) = eax; /* 0x10073ACC: mov dword ptr [esp + 0x24], eax */
    RECOMP_CALL(sub_10024106); /* 0x10073AD0: call 0x10024106 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x10073AD5: sub esp, 0x10 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x10073AD8: mov ecx, esp */
    esi = MEM32(eax + 0x8); /* 0x10073ADA: mov esi, dword ptr [eax + 8] */
    eax = esp + 0x28; /* 0x10073ADD: lea eax, [esp + 0x28] */
    PUSH32(esp, eax); /* 0x10073AE1: push eax */
    RECOMP_CALL(sub_1002762F); /* 0x10073AE2: call 0x1002762f */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xBu); /* 0x10073AE7: push 0xb */
    PUSH32(esp, esi); /* 0x10073AE9: push esi */
    ecx = edi; /* 0x10073AEA: mov ecx, edi */
    RECOMP_CALL(sub_1007370B); /* 0x10073AEC: call 0x1007370b */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x10073AF1: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10073B3B; /* 0x10073AF3: jne 0x10073b3b */
L_10073AF5:
    eax = edi + 0x1E4; /* 0x10073AF5: lea eax, [edi + 0x1e4] */
    { uint32_t _tmp = MEM32(eax); /* 0x10073AFB: xchg dword ptr [eax], ebx */
      MEM32(eax) = ebx;
      ebx = _tmp; }
L_10073AFD:
    PUSH32(esp, ecx); /* 0x10073AFD: push ecx */
    ecx = edi; /* 0x10073AFE: mov ecx, edi */
    RECOMP_CALL(sub_100738B9); /* 0x10073B00: call 0x100738b9 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x10073B05: mov esi, eax */
    RECOMP_CALL(sub_10027FD6); /* 0x10073B07: call 0x10027fd6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x1D0));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(edi + 0x1D0); /* 0x10073B0C: sub eax, dword ptr [edi + 0x1d0] */
    _flag_k = FK_CMP;
    ecx = esi; /* 0x10073B12: mov ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x10073B14: sub ecx, eax */
    _flag_k = FK_CMP;
    MEM32(esp + 0x14) = edx; /* 0x10073B16: mov dword ptr [esp + 0x14], edx */
    /* cmp eax, esi */ /* 0x10073B1A: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x10073B1C: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    eax = eax & ecx; /* 0x10073B1E: and eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(ecx, MEM8(esp + 0xF)); /* 0x10073B20: mov cl, byte ptr [esp + 0xf] */
    /* test LO8(ecx), LO8(ecx) */ /* 0x10073B24: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10073B33; /* 0x10073B26: je 0x10073b33 */
L_10073B28:
    ecx = 0x1F4u; /* 0x10073B28: mov ecx, 0x1f4 */
    /* cmp eax, ecx */ /* 0x10073B2D: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_10073B33; /* 0x10073B2F: jae 0x10073b33 */
L_10073B31:
    eax = ecx; /* 0x10073B31: mov eax, ecx */
L_10073B33:
    PUSH32(esp, eax); /* 0x10073B33: push eax */
    ecx = edi; /* 0x10073B34: mov ecx, edi */
    RECOMP_CALL(sub_10073968); /* 0x10073B36: call 0x10073968 */
    RECOMP_FLAGS_IN();
L_10073B3B:
    edi = POP32_VAL(esp); /* 0x10073B3B: pop edi */
    esi = POP32_VAL(esp); /* 0x10073B3C: pop esi */
    ebx = POP32_VAL(esp); /* 0x10073B3D: pop ebx */
    esp = ebp; /* 0x10073B3E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10073B40: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10073B41: ret  */
    RECOMP_REGS_OUT();
}

void sub_10073B42(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10073B42u);

L_10073B42:
    PUSH32(esp, ebp); /* 0x10073B42: push ebp */
    ebp = esp; /* 0x10073B43: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x10073B45: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x10073B48: push esi */
    PUSH32(esp, edi); /* 0x10073B49: push edi */
    PUSH32(esp, 0xCu); /* 0x10073B4A: push 0xc */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x10073B4C: sub esp, 0x10 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x10073B4F: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esp; /* 0x10073B51: mov eax, esp */
    MEM32(ebp + (-0x10)) = edi; /* 0x10073B53: mov dword ptr [ebp - 0x10], edi */
    esi = ecx; /* 0x10073B56: mov esi, ecx */
    MEM32(eax) = edi; /* 0x10073B58: mov dword ptr [eax], edi */
    MEM32(eax + 0x8) = edi; /* 0x10073B5A: mov dword ptr [eax + 8], edi */
    MEM32(eax + 0xC) = edi; /* 0x10073B5D: mov dword ptr [eax + 0xc], edi */
    eax = ebp + (-0x10); /* 0x10073B60: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x10073B63: push eax */
    RECOMP_CALL(sub_1007375E); /* 0x10073B64: call 0x1007375e */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x10073B69: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10073BAB; /* 0x10073B6B: je 0x10073bab */
L_10073B6D:
    /* cmp MEM32(ebp + (-0x10)), 2 */ /* 0x10073B6D: cmp dword ptr [ebp - 0x10], 2 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10073B86; /* 0x10073B71: je 0x10073b86 */
L_10073B73:
    /* cmp MEM32(ebp + (-0x10)), 8 */ /* 0x10073B73: cmp dword ptr [ebp - 0x10], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10073B86; /* 0x10073B77: je 0x10073b86 */
L_10073B79:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10073B79: push dword ptr [ebp + 8] */
    ecx = ebp + (-0x10); /* 0x10073B7C: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_1007ACB2); /* 0x10073B7F: call 0x1007acb2 */
    RECOMP_FLAGS_IN();
    goto L_10073BA7; /* 0x10073B84: jmp 0x10073ba7 */
L_10073B86:
    eax = MEM32(ebp + 0x8); /* 0x10073B86: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x10073B89: add eax, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x10073B8C: push eax */
    eax = esi + 0x200; /* 0x10073B8D: lea eax, [esi + 0x200] */
    PUSH32(esp, eax); /* 0x10073B93: push eax */
    RECOMP_ICALL(MEM32(0x100E5138)); /* 0x10073B94: call dword ptr [0x100e5138] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xC)); /* 0x10073B9A: mov ecx, dword ptr [ebp - 0xc] */
    PUSH32(esp, edi); /* 0x10073B9D: push edi */
    PUSH32(esp, edi); /* 0x10073B9E: push edi */
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x10073B9F: push dword ptr [ebp - 0x10] */
    RECOMP_CALL(sub_1007A78F); /* 0x10073BA2: call 0x1007a78f */
    RECOMP_FLAGS_IN();
L_10073BA7:
    SET_LO8(eax, 1); /* 0x10073BA7: mov al, 1 */
    goto L_10073BC1; /* 0x10073BA9: jmp 0x10073bc1 */
L_10073BAB:
    eax = MEM32(ebp + 0x8); /* 0x10073BAB: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x10073BAE: add eax, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x10073BB1: push eax */
    eax = esi + 0x200; /* 0x10073BB2: lea eax, [esi + 0x200] */
    PUSH32(esp, eax); /* 0x10073BB8: push eax */
    RECOMP_ICALL(MEM32(0x100E5138)); /* 0x10073BB9: call dword ptr [0x100e5138] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x10073BBF: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_10073BC1:
    edi = POP32_VAL(esp); /* 0x10073BC1: pop edi */
    esi = POP32_VAL(esp); /* 0x10073BC2: pop esi */
    esp = ebp; /* 0x10073BC3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10073BC5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x10073BC6: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_10073BC9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10073BC9u);

L_10073BC9:
    PUSH32(esp, 0x18u); /* 0x10073BC9: push 0x18 */
    eax = 0x100DBC74u; /* 0x10073BCB: mov eax, 0x100dbc74 */
    RECOMP_CALL(sub_1001FB2C); /* 0x10073BD0: call 0x1001fb2c */
    RECOMP_FLAGS_IN();
    edi = ecx; /* 0x10073BD5: mov edi, ecx */
    MEM32(ebp + (-0x14)) = edi; /* 0x10073BD7: mov dword ptr [ebp - 0x14], edi */
    SET_LO8(ebx, MEM8(ebp + 0x8)); /* 0x10073BDA: mov bl, byte ptr [ebp + 8] */
    /* test LO8(ebx), LO8(ebx) */ /* 0x10073BDD: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10073C2F; /* 0x10073BDF: je 0x10073c2f */
L_10073BE1:
    eax = MEM32(edi); /* 0x10073BE1: mov eax, dword ptr [edi] */
    RECOMP_ICALL(MEM32(eax + 0x58)); /* 0x10073BE3: call dword ptr [eax + 0x58] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x10073BE6: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_10073C06; /* 0x10073BE8: je 0x10073c06 */
L_10073BEA:
    eax = edi + 0x200; /* 0x10073BEA: lea eax, [edi + 0x200] */
    PUSH32(esp, eax); /* 0x10073BF0: push eax */
    RECOMP_ICALL(MEM32(0x100E512C)); /* 0x10073BF1: call dword ptr [0x100e512c] */
    RECOMP_FLAGS_IN();
    ecx = eax + (-0x8); /* 0x10073BF7: lea ecx, [eax - 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x10073BFA: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x10073BFC: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    eax = eax & ecx; /* 0x10073BFE: and eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10073D02; /* 0x10073C00: jne 0x10073d02 */
L_10073C06:
    PUSH32(esp, ecx); /* 0x10073C06: push ecx */
    ecx = edi; /* 0x10073C07: mov ecx, edi */
    RECOMP_CALL(sub_100738B9); /* 0x10073C09: call 0x100738b9 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x10073C0E: mov esi, eax */
    /* test esi, esi */ /* 0x10073C10: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10073C2F; /* 0x10073C12: je 0x10073c2f */
L_10073C14:
    RECOMP_CALL(sub_10027FD6); /* 0x10073C14: call 0x10027fd6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x1D0));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(edi + 0x1D0); /* 0x10073C19: sub eax, dword ptr [edi + 0x1d0] */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x1C)) = edx; /* 0x10073C1F: mov dword ptr [ebp - 0x1c], edx */
    /* cmp eax, esi */ /* 0x10073C22: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_10073C2D; /* 0x10073C24: jae 0x10073c2d */
L_10073C26:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10073C26: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_10073D02; /* 0x10073C28: jmp 0x10073d02 */
L_10073C2D:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(ebx, 0); /* 0x10073C2D: xor bl, bl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_10073C2F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10073C2F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = edi + 0x190; /* 0x10073C31: lea ecx, [edi + 0x190] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10073C37: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(ecx), _sum = MEM32(ecx) + eax; eax = _old; MEM32(ecx) = _sum; } /* 0x10073C38: lock xadd dword ptr [ecx], eax */
    _flag_k = FK_ADD;
    /* test LO8(ebx), LO8(ebx) */ /* 0x10073C3C: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10073C51; /* 0x10073C3E: jne 0x10073c51 */
L_10073C40:
    RECOMP_CALL(sub_10027FD6); /* 0x10073C40: call 0x10027fd6 */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x1D0) = eax; /* 0x10073C45: mov dword ptr [edi + 0x1d0], eax */
    MEM32(edi + 0x1D4) = edx; /* 0x10073C4B: mov dword ptr [edi + 0x1d4], edx */
L_10073C51:
    eax = edi + 0x1E8; /* 0x10073C51: lea eax, [edi + 0x1e8] */
    PUSH32(esp, eax); /* 0x10073C57: push eax */
    RECOMP_ICALL(MEM32(0x100E512C)); /* 0x10073C58: call dword ptr [0x100e512c] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x10073C5E: mov esi, eax */
    eax = esi + (-0x8); /* 0x10073C60: lea eax, [esi - 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(esi);
    _cf = (esi) != 0;
    esi = (uint32_t)(-(int32_t)esi); /* 0x10073C63: neg esi */
    _flag_k = FK_CMP;
    { uint32_t _sa = esi, _sb = esi, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x10073C65: sbb esi, esi */
      esi = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    esi = esi & eax; /* 0x10073C67: and esi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x8) = esi; /* 0x10073C69: mov dword ptr [ebp + 8], esi */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10073CB7; /* 0x10073C6C: jne 0x10073cb7 */
L_10073C6E:
    eax = MEM32(edi); /* 0x10073C6E: mov eax, dword ptr [edi] */
    ecx = edi; /* 0x10073C70: mov ecx, edi */
    RECOMP_ICALL(MEM32(eax + 0x40)); /* 0x10073C72: call dword ptr [eax + 0x40] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x10073C75: mov esi, eax */
    PUSH32(esp, 8); /* 0x10073C77: push 8 */
    MEM32(ebp + 0x8) = esi; /* 0x10073C79: mov dword ptr [ebp + 8], esi */
    RECOMP_CALL(sub_1000EE11); /* 0x10073C7C: call 0x1000ee11 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x10073C81: mov ebx, eax */
    ecx = POP32_VAL(esp); /* 0x10073C83: pop ecx */
    /* test ebx, ebx */ /* 0x10073C84: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10073C8D; /* 0x10073C86: je 0x10073c8d */
L_10073C88:
    MEM32(ebx + 0x4) = esi; /* 0x10073C88: mov dword ptr [ebx + 4], esi */
    goto L_10073C8F; /* 0x10073C8B: jmp 0x10073c8f */
L_10073C8D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10073C8D: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_10073C8F:
    eax = edi + 0xB4; /* 0x10073C8F: lea eax, [edi + 0xb4] */
    edi = eax; /* 0x10073C95: mov edi, eax */
L_10073C97:
    edx = MEM32(edi); /* 0x10073C97: mov edx, dword ptr [edi] */
    ecx = ebx; /* 0x10073C99: mov ecx, ebx */
    MEM32(ebx) = edx; /* 0x10073C9B: mov dword ptr [ebx], edx */
    eax = edx; /* 0x10073C9D: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(edi); if (eax == _d) { MEM32(edi) = ecx; } else { eax = _d; } } /* 0x10073C9F: lock cmpxchg dword ptr [edi], ecx */
    _flag_k = FK_CMP;
    /* cmp eax, edx */ /* 0x10073CA3: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_10073C97; /* 0x10073CA5: jne 0x10073c97 */
L_10073CA7:
    edi = MEM32(ebp + (-0x14)); /* 0x10073CA7: mov edi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10073CAA: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x10073CAC: inc ecx */
    _flag_k = FK_INC;
    eax = edi + 0x188; /* 0x10073CAD: lea eax, [edi + 0x188] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(eax), _sum = MEM32(eax) + ecx; ecx = _old; MEM32(eax) = _sum; } /* 0x10073CB3: lock xadd dword ptr [eax], ecx */
    _flag_k = FK_ADD;
L_10073CB7:
    ecx = esi; /* 0x10073CB7: mov ecx, esi */
    RECOMP_CALL(sub_1006DCC4); /* 0x10073CB9: call 0x1006dcc4 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x9C) = 0; /* 0x10073CBE: mov dword ptr [esi + 0x9c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x10073CC8: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(edi + 0x1AC); /* 0x10073CCC: mov ecx, dword ptr [edi + 0x1ac] */
    PUSH32(esp, esi); /* 0x10073CD2: push esi */
    eax = MEM32(ecx); /* 0x10073CD3: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x10073CD5: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    goto L_10073CF4; /* 0x10073CD8: jmp 0x10073cf4 */
L_10073CF4:
    /* test esi, esi */ /* 0x10073CF4: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10073D00; /* 0x10073CF6: je 0x10073d00 */
L_10073CF8:
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x10) = MEM32(esi + 0x10) & 0; /* 0x10073CF8: and dword ptr [esi + 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x14) = MEM32(esi + 0x14) & 0; /* 0x10073CFC: and dword ptr [esi + 0x14], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_10073D00:
    eax = esi; /* 0x10073D00: mov eax, esi */
L_10073D02:
    RECOMP_CALL(sub_100149D7); /* 0x10073D02: call 0x100149d7 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x10073D07: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_10073D0A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10073D0Au);

L_10073D0A:
    PUSH32(esp, ebp); /* 0x10073D0A: push ebp */
    ebp = esp; /* 0x10073D0B: mov ebp, esp */
    /* cmp MEM8(ebp + 0xC), 0 */ /* 0x10073D0D: cmp byte ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    PUSH32(esp, esi); /* 0x10073D11: push esi */
    PUSH32(esp, edi); /* 0x10073D12: push edi */
    edi = MEM32(ebp + 0x8); /* 0x10073D13: mov edi, dword ptr [ebp + 8] */
    esi = ecx; /* 0x10073D16: mov esi, ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10073D26; /* 0x10073D18: je 0x10073d26 */
L_10073D1A:
    ecx = MEM32(esi + 0x1AC); /* 0x10073D1A: mov ecx, dword ptr [esi + 0x1ac] */
    PUSH32(esp, edi); /* 0x10073D20: push edi */
    eax = MEM32(ecx); /* 0x10073D21: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x10073D23: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
L_10073D26:
    eax = esi + 0x190; /* 0x10073D26: lea eax, [esi + 0x190] */
    _flag_a = (uint32_t)((ecx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ecx | 0xFFFFFFFFu));
    ecx = ecx | 0xFFFFFFFFu; /* 0x10073D2C: or ecx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(eax), _sum = MEM32(eax) + ecx; ecx = _old; MEM32(eax) = _sum; } /* 0x10073D2F: lock xadd dword ptr [eax], ecx */
    _flag_k = FK_ADD;
    eax = edi + 0x8; /* 0x10073D33: lea eax, [edi + 8] */
    PUSH32(esp, eax); /* 0x10073D36: push eax */
    eax = esi + 0x1E8; /* 0x10073D37: lea eax, [esi + 0x1e8] */
    PUSH32(esp, eax); /* 0x10073D3D: push eax */
    RECOMP_ICALL(MEM32(0x100E5138)); /* 0x10073D3E: call dword ptr [0x100e5138] */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x10073D44: pop edi */
    esi = POP32_VAL(esp); /* 0x10073D45: pop esi */
    ebp = POP32_VAL(esp); /* 0x10073D46: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x10073D47: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_10073D4A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10073D4Au);

L_10073D4A:
    PUSH32(esp, ebp); /* 0x10073D4A: push ebp */
    ebp = esp; /* 0x10073D4B: mov ebp, esp */
    eax = ecx + 0x1F8; /* 0x10073D4D: lea eax, [ecx + 0x1f8] */
    PUSH32(esp, eax); /* 0x10073D53: push eax */
    RECOMP_ICALL(MEM32(0x100E512C)); /* 0x10073D54: call dword ptr [0x100e512c] */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x10073D5A: mov edx, eax */
    eax = edx + (-0xC); /* 0x10073D5C: lea eax, [edx - 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(edx);
    _cf = (edx) != 0;
    edx = (uint32_t)(-(int32_t)edx); /* 0x10073D5F: neg edx */
    _flag_k = FK_CMP;
    { uint32_t _sa = edx, _sb = edx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x10073D61: sbb edx, edx */
      edx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    edx = edx & eax; /* 0x10073D63: and edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10073D8D; /* 0x10073D65: jne 0x10073d8d */
L_10073D67:
    PUSH32(esp, 0x10u); /* 0x10073D67: push 0x10 */
    RECOMP_CALL(sub_1000EE11); /* 0x10073D69: call 0x1000ee11 */
    RECOMP_FLAGS_IN();
    edx = eax; /* 0x10073D6E: mov edx, eax */
    ecx = POP32_VAL(esp); /* 0x10073D70: pop ecx */
    /* test edx, edx */ /* 0x10073D71: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10073D89; /* 0x10073D73: je 0x10073d89 */
L_10073D75:
    eax = MEM32(ebp + 0x8); /* 0x10073D75: mov eax, dword ptr [ebp + 8] */
    MEM32(edx + 0x4) = eax; /* 0x10073D78: mov dword ptr [edx + 4], eax */
    eax = MEM32(ebp + 0xC); /* 0x10073D7B: mov eax, dword ptr [ebp + 0xc] */
    MEM32(edx) = 0x10073DA8u; /* 0x10073D7E: mov dword ptr [edx], 0x10073da8 */
    MEM32(edx + 0x8) = eax; /* 0x10073D84: mov dword ptr [edx + 8], eax */
    goto L_10073D99; /* 0x10073D87: jmp 0x10073d99 */
L_10073D89:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x10073D89: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_10073D9D; /* 0x10073D8B: jmp 0x10073d9d */
L_10073D8D:
    ecx = MEM32(ebp + 0x8); /* 0x10073D8D: mov ecx, dword ptr [ebp + 8] */
    MEM32(edx + 0x4) = ecx; /* 0x10073D90: mov dword ptr [edx + 4], ecx */
    ecx = MEM32(ebp + 0xC); /* 0x10073D93: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(edx + 0x8) = ecx; /* 0x10073D96: mov dword ptr [edx + 8], ecx */
L_10073D99:
    _flag_a = (uint32_t)(MEM32(edx + 0xC)); _flag_b = (uint32_t)(0);
    MEM32(edx + 0xC) = MEM32(edx + 0xC) & 0; /* 0x10073D99: and dword ptr [edx + 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_10073D9D:
    eax = edx; /* 0x10073D9D: mov eax, edx */
    ebp = POP32_VAL(esp); /* 0x10073D9F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x10073DA0: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_10073DA8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10073DA8u);

L_10073DA8:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_10073DDA; /* 0x10073DA8: je 0x10073dda */
L_10073DAA:
    _seg_es = POP32_VAL(esp); /* 0x10073DAA: pop es */
    { uint32_t _aa = MEM8(ebp + (-0x75)), _ab = LO8(edx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10073DAB: adc byte ptr [ebp - 0x75], dl */
      MEM8(ebp + (-0x75)) = (uint8_t)(_aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    /* in: no port I/O under Win32 */ /* 0x10073DAE: in al, dx */
    PUSH32(esp, esi); /* 0x10073DAF: push esi */
    esi = ecx; /* 0x10073DB0: mov esi, ecx */
    PUSH32(esp, edi); /* 0x10073DB2: push edi */
    edi = esi + 0x1F8; /* 0x10073DB3: lea edi, [esi + 0x1f8] */
    PUSH32(esp, edi); /* 0x10073DB9: push edi */
    RECOMP_ICALL(MEM32(0x100E5134)); /* 0x10073DBA: call dword ptr [0x100e5134] */
    RECOMP_FLAGS_IN();
    edx = (uint32_t)LO16(eax); /* 0x10073DC0: movzx edx, ax */
    eax = MEM32(esi + 0x14); /* 0x10073DC3: mov eax, dword ptr [esi + 0x14] */
    if (5u) _cf = (((eax) >> 27) & 1u); /* 0x10073DC6: shl eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack((eax << 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 5u; /* 0x10073DC6: shl eax, 5 */
    /* cmp edx, eax */ /* 0x10073DC9: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_10073DDD; /* 0x10073DCB: jge 0x10073ddd */
L_10073DCD:
    eax = MEM32(ebp + 0x8); /* 0x10073DCD: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x10073DD0: add eax, 0xc */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x10073DD3: push eax */
    PUSH32(esp, edi); /* 0x10073DD4: push edi */
    RECOMP_ICALL(MEM32(0x100E5138)); /* 0x10073DD5: call dword ptr [0x100e5138] */
    RECOMP_FLAGS_IN();
    goto L_10073DDB; /* falls through past a gap */
L_10073DDA:
    { uint32_t _aa = LO8(ebx), _ab = HI8(ecx), _ac = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x10073DDA: adc bl, ch */
      SET_LO8(ebx, _aa + _ab + _ac);
      _flag_a = recomp_flags_adc(_aa, _ab, _ac); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    goto L_10073DDC; /* falls through past a gap */
L_10073DDB:
    goto L_10073DEA; /* 0x10073DDB: jmp 0x10073dea */
L_10073DDC:
    _flag_a = (uint32_t)((eax | 0x85084D8Bu)); _flag_b = (uint32_t)((eax | 0x85084D8Bu));
    eax = eax | 0x85084D8Bu; /* 0x10073DDC: or eax, 0x85084d8b */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_10073DE1; /* falls through past a gap */
L_10073DDD:
    ecx = MEM32(ebp + 0x8); /* 0x10073DDD: mov ecx, dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x10073DE0: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_10073DE2; /* falls through past a gap */
L_10073DE1:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x10073DE1: leave  */
L_10073DE2:
    if (TEST_Z(_flag_a, _flag_b)) goto L_10073DEA; /* 0x10073DE2: je 0x10073dea */
L_10073DE4:
    eax = MEM32(ecx); /* 0x10073DE4: mov eax, dword ptr [ecx] */
    PUSH32(esp, 1); /* 0x10073DE6: push 1 */
    RECOMP_ICALL(MEM32(eax)); /* 0x10073DE8: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_10073DEA:
    edi = POP32_VAL(esp); /* 0x10073DEA: pop edi */
    esi = POP32_VAL(esp); /* 0x10073DEB: pop esi */
    ebp = POP32_VAL(esp); /* 0x10073DEC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x10073DED: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_10073DAC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10073DACu);

L_10073DAC:
    PUSH32(esp, ebp); /* 0x10073DAC: push ebp */
    ebp = esp; /* 0x10073DAD: mov ebp, esp */
    PUSH32(esp, esi); /* 0x10073DAF: push esi */
    esi = ecx; /* 0x10073DB0: mov esi, ecx */
    PUSH32(esp, edi); /* 0x10073DB2: push edi */
    edi = esi + 0x1F8; /* 0x10073DB3: lea edi, [esi + 0x1f8] */
    PUSH32(esp, edi); /* 0x10073DB9: push edi */
    RECOMP_ICALL(MEM32(0x100E5134)); /* 0x10073DBA: call dword ptr [0x100e5134] */
    RECOMP_FLAGS_IN();
    edx = (uint32_t)LO16(eax); /* 0x10073DC0: movzx edx, ax */
    eax = MEM32(esi + 0x14); /* 0x10073DC3: mov eax, dword ptr [esi + 0x14] */
    if (5u) _cf = (((eax) >> 27) & 1u); /* 0x10073DC6: shl eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack((eax << 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 5u; /* 0x10073DC6: shl eax, 5 */
    /* cmp edx, eax */ /* 0x10073DC9: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_10073DDD; /* 0x10073DCB: jge 0x10073ddd */
L_10073DCD:
    eax = MEM32(ebp + 0x8); /* 0x10073DCD: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x10073DD0: add eax, 0xc */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x10073DD3: push eax */
    PUSH32(esp, edi); /* 0x10073DD4: push edi */
    RECOMP_ICALL(MEM32(0x100E5138)); /* 0x10073DD5: call dword ptr [0x100e5138] */
    RECOMP_FLAGS_IN();
    goto L_10073DEA; /* 0x10073DDB: jmp 0x10073dea */
L_10073DDD:
    ecx = MEM32(ebp + 0x8); /* 0x10073DDD: mov ecx, dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x10073DE0: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10073DEA; /* 0x10073DE2: je 0x10073dea */
L_10073DE4:
    eax = MEM32(ecx); /* 0x10073DE4: mov eax, dword ptr [ecx] */
    PUSH32(esp, 1); /* 0x10073DE6: push 1 */
    RECOMP_ICALL(MEM32(eax)); /* 0x10073DE8: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_10073DEA:
    edi = POP32_VAL(esp); /* 0x10073DEA: pop edi */
    esi = POP32_VAL(esp); /* 0x10073DEB: pop esi */
    ebp = POP32_VAL(esp); /* 0x10073DEC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x10073DED: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_10073F1F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10073F1Fu);

L_10073F1F:
    PUSH32(esp, ebp); /* 0x10073F1F: push ebp */
    ebp = esp; /* 0x10073F20: mov ebp, esp */
    PUSH32(esp, esi); /* 0x10073F22: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10073F23: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x10073F26: mov esi, ecx */
    RECOMP_CALL(sub_1002D16D); /* 0x10073F28: call 0x1002d16d */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x10067634u; /* 0x10073F2D: mov dword ptr [esi], 0x10067634 */
    eax = esi; /* 0x10073F33: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x10073F35: pop esi */
    ebp = POP32_VAL(esp); /* 0x10073F36: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x10073F37: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_10073F58(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10073F58u);

L_10073F58:
    PUSH32(esp, ebp); /* 0x10073F58: push ebp */
    ebp = esp; /* 0x10073F59: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x10073F5B: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x10073F5E: push esi */
    PUSH32(esp, edi); /* 0x10073F5F: push edi */
    edi = ecx; /* 0x10073F60: mov edi, ecx */
    RECOMP_CALL(sub_10023AF4); /* 0x10073F62: call 0x10023af4 */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(eax + 0x4C), 0 */ /* 0x10073F67: cmp byte ptr [eax + 0x4c], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0x4C)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10073F95; /* 0x10073F6B: je 0x10073f95 */
L_10073F6D:
    /* cmp MEM8(eax + 0x98), 0 */ /* 0x10073F6D: cmp byte ptr [eax + 0x98], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0x98)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10073F95; /* 0x10073F74: je 0x10073f95 */
L_10073F76:
    esi = MEM32(edi + 0x174); /* 0x10073F76: mov esi, dword ptr [edi + 0x174] */
    ecx = edi; /* 0x10073F7C: mov ecx, edi */
    PUSH32(esp, 1); /* 0x10073F7E: push 1 */
    PUSH32(esp, eax); /* 0x10073F80: push eax */
    RECOMP_CALL(sub_10033DB3); /* 0x10073F81: call 0x10033db3 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x10073F86: push esi */
    PUSH32(esp, ecx); /* 0x10073F87: push ecx */
    PUSH32(esp, 8); /* 0x10073F88: push 8 */
    RECOMP_CALL(sub_1002486B); /* 0x10073F8A: call 0x1002486b */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x10073F8F: pop edi */
    esi = POP32_VAL(esp); /* 0x10073F90: pop esi */
    esp = ebp; /* 0x10073F91: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x10073F93: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10073F94: ret  */
L_10073F95:
    ecx = ebp + (-0xC); /* 0x10073F95: lea ecx, [ebp - 0xc] */
    RECOMP_CALL(sub_1009DD55); /* 0x10073F98: call 0x1009dd55 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x10073FB4u); /* 0x10073F9D: push 0x10073fb4 */
    eax = ebp + (-0xC); /* 0x10073FA2: lea eax, [ebp - 0xc] */
    MEM32(ebp + (-0xC)) = 0x10067734u; /* 0x10073FA5: mov dword ptr [ebp - 0xc], 0x10067734 */
    PUSH32(esp, eax); /* 0x10073FAC: push eax */
    RECOMP_CALL(sub_100192EB); /* 0x10073FAD: call 0x100192eb */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x10073FB2u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_10073FB4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10073FB4u);

L_10073FB4:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10073FB4: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10073FB6: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    PUSH32(esp, 0x00100692u); /* 0x10073FB8: push 0x100692 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + LO8(eax)); /* 0x10073FBD: add byte ptr [eax], al */
    _flag_k = FK_NARROW(FK_ADD, 24);
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(HI8(ebx)) << 24;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM8(eax) = (uint8_t)(MEM8(eax) + HI8(ebx)); /* 0x10073FBF: add byte ptr [eax], bh */
    _flag_k = FK_NARROW(FK_ADD, 24);
    { uint32_t _rv = (MEM8((-0x1374AAF0))) & 255u, _rn = ((1) & 31) % 8u; for (uint32_t _i=0;_i<_rn;_i++){ uint32_t _rb = _rv & 1u; _rv = ((_rv >> 1) | (_rb << 7)) & 255u; _cf = _rb; } if (_rn) { _flag_a = recomp_eflags_setcf(_flag_k, _flag_a, _flag_b, _cf, _df); _flag_b = 0; _flag_k = FK_EFLAGS; } MEM8((-0x1374AAF0)) = (uint8_t)(_rv); } /* 0x10073FC1: ror byte ptr [0xec8b5510], 1 */
    PUSH32(esp, esi); /* 0x10073FC7: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x10073FC8: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x10073FCB: mov esi, ecx */
    RECOMP_CALL(sub_1002D16D); /* 0x10073FCD: call 0x1002d16d */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x10067734u; /* 0x10073FD2: mov dword ptr [esi], 0x10067734 */
    eax = esi; /* 0x10073FD8: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x10073FDA: pop esi */
    ebp = POP32_VAL(esp); /* 0x10073FDB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x10073FDC: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_10074149(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10074149u);

L_10074149:
    PUSH32(esp, ecx); /* 0x10074149: push ecx */
    PUSH32(esp, esi); /* 0x1007414A: push esi */
    PUSH32(esp, edi); /* 0x1007414B: push edi */
    edi = 0x80000000u; /* 0x1007414C: mov edi, 0x80000000 */
    edx = ecx + 0x194; /* 0x10074151: lea edx, [ecx + 0x194] */
    esi = 0xC0000000u; /* 0x10074157: mov esi, 0xc0000000 */
    eax = edi; /* 0x1007415C: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(edx); if (eax == _d) { MEM32(edx) = esi; } else { eax = _d; } } /* 0x1007415E: lock cmpxchg dword ptr [edx], esi */
    _flag_k = FK_CMP;
    /* cmp eax, edi */ /* 0x10074162: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007416B; /* 0x10074164: jne 0x1007416b */
L_10074166:
    RECOMP_CALL(sub_100742D4); /* 0x10074166: call 0x100742d4 */
    RECOMP_FLAGS_IN();
L_1007416B:
    edi = POP32_VAL(esp); /* 0x1007416B: pop edi */
    esi = POP32_VAL(esp); /* 0x1007416C: pop esi */
    ecx = POP32_VAL(esp); /* 0x1007416D: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007416E: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007416F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007416Fu);

L_1007416F:
    PUSH32(esp, ebp); /* 0x1007416F: push ebp */
    ebp = esp; /* 0x10074170: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x10074172: push ecx */
    PUSH32(esp, ecx); /* 0x10074173: push ecx */
    eax = ecx; /* 0x10074174: mov eax, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10074176: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x10074178: push ebx */
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(ebx, 0); /* 0x10074179: xor bl, bl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(ebp + (-0x8)) = eax; /* 0x1007417B: mov dword ptr [ebp - 8], eax */
    MEM32(ebp + (-0x4)) = ecx; /* 0x1007417E: mov dword ptr [ebp - 4], ecx */
    /* cmp MEM32(eax + 0x2C), ecx */ /* 0x10074181: cmp dword ptr [eax + 0x2c], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x2C)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1007421A; /* 0x10074184: jle 0x1007421a */
L_1007418A:
    PUSH32(esp, esi); /* 0x1007418A: push esi */
    PUSH32(esp, edi); /* 0x1007418B: push edi */
L_1007418C:
    eax = MEM32(eax + 0x24); /* 0x1007418C: mov eax, dword ptr [eax + 0x24] */
    esi = MEM32(eax + ecx * 4); /* 0x1007418F: mov esi, dword ptr [eax + ecx*4] */
    /* test esi, esi */ /* 0x10074192: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10074208; /* 0x10074194: je 0x10074208 */
L_10074196:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x10074196: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x50), edi */ /* 0x10074198: cmp dword ptr [esi + 0x50], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x50)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_100741CA; /* 0x1007419B: jle 0x100741ca */
L_1007419D:
    eax = esi + 0x10; /* 0x1007419D: lea eax, [esi + 0x10] */
    PUSH32(esp, edi); /* 0x100741A0: push edi */
    ecx = eax; /* 0x100741A1: mov ecx, eax */
    RECOMP_CALL(sub_10072F00); /* 0x100741A3: call 0x10072f00 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100741A8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100741BD; /* 0x100741AA: je 0x100741bd */
L_100741AC:
    /* cmp MEM32(eax + 0x28), 0 */ /* 0x100741AC: cmp dword ptr [eax + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100741C5; /* 0x100741B0: jne 0x100741c5 */
L_100741B2:
    ecx = eax; /* 0x100741B2: mov ecx, eax */
    RECOMP_CALL(sub_1007290D); /* 0x100741B4: call 0x1007290d */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100741B9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100741C5; /* 0x100741BB: jne 0x100741c5 */
L_100741BD:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x100741BD: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(esi + 0x50) */ /* 0x100741BE: cmp edi, dword ptr [esi + 0x50] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x50));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1007419D; /* 0x100741C1: jl 0x1007419d */
L_100741C3:
    goto L_100741C7; /* 0x100741C3: jmp 0x100741c7 */
L_100741C5:
    SET_LO8(ebx, 1); /* 0x100741C5: mov bl, 1 */
L_100741C7:
    ecx = MEM32(ebp + (-0x4)); /* 0x100741C7: mov ecx, dword ptr [ebp - 4] */
L_100741CA:
    /* test LO8(ebx), LO8(ebx) */ /* 0x100741CA: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10074218; /* 0x100741CC: jne 0x10074218 */
L_100741CE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x100741CE: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0xA0), edi */ /* 0x100741D0: cmp dword ptr [esi + 0xa0], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0xA0)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_10074208; /* 0x100741D6: jle 0x10074208 */
L_100741D8:
    eax = esi + 0x60; /* 0x100741D8: lea eax, [esi + 0x60] */
    PUSH32(esp, edi); /* 0x100741DB: push edi */
    ecx = eax; /* 0x100741DC: mov ecx, eax */
    RECOMP_CALL(sub_10072F00); /* 0x100741DE: call 0x10072f00 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100741E3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100741F8; /* 0x100741E5: je 0x100741f8 */
L_100741E7:
    /* cmp MEM32(eax + 0x28), 0 */ /* 0x100741E7: cmp dword ptr [eax + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10074203; /* 0x100741EB: jne 0x10074203 */
L_100741ED:
    ecx = eax; /* 0x100741ED: mov ecx, eax */
    RECOMP_CALL(sub_1007290D); /* 0x100741EF: call 0x1007290d */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100741F4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10074203; /* 0x100741F6: jne 0x10074203 */
L_100741F8:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x100741F8: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(esi + 0xA0) */ /* 0x100741F9: cmp edi, dword ptr [esi + 0xa0] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0xA0));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_100741D8; /* 0x100741FF: jl 0x100741d8 */
L_10074201:
    goto L_10074205; /* 0x10074201: jmp 0x10074205 */
L_10074203:
    SET_LO8(ebx, 1); /* 0x10074203: mov bl, 1 */
L_10074205:
    ecx = MEM32(ebp + (-0x4)); /* 0x10074205: mov ecx, dword ptr [ebp - 4] */
L_10074208:
    eax = MEM32(ebp + (-0x8)); /* 0x10074208: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1007420B: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x4)) = ecx; /* 0x1007420C: mov dword ptr [ebp - 4], ecx */
    /* cmp ecx, MEM32(eax + 0x2C) */ /* 0x1007420F: cmp ecx, dword ptr [eax + 0x2c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x2C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1007418C; /* 0x10074212: jl 0x1007418c */
L_10074218:
    edi = POP32_VAL(esp); /* 0x10074218: pop edi */
    esi = POP32_VAL(esp); /* 0x10074219: pop esi */
L_1007421A:
    SET_LO8(eax, LO8(ebx)); /* 0x1007421A: mov al, bl */
    ebx = POP32_VAL(esp); /* 0x1007421C: pop ebx */
    esp = ebp; /* 0x1007421D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1007421F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10074220: ret  */
    RECOMP_REGS_OUT();
}

void sub_100742D4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100742D4u);

L_100742D4:
    PUSH32(esp, ecx); /* 0x100742D4: push ecx */
    PUSH32(esp, esi); /* 0x100742D5: push esi */
    PUSH32(esp, edi); /* 0x100742D6: push edi */
    esi = ecx; /* 0x100742D7: mov esi, ecx */
    RECOMP_CALL(sub_10023AF4); /* 0x100742D9: call 0x10023af4 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x100742DE: mov eax, dword ptr [esi] */
    ecx = esi; /* 0x100742E0: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax + 0x48)); /* 0x100742E2: call dword ptr [eax + 0x48] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100742E5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100742F2; /* 0x100742E7: jne 0x100742f2 */
L_100742E9:
    ecx = esi; /* 0x100742E9: mov ecx, esi */
    RECOMP_CALL(sub_100744C3); /* 0x100742EB: call 0x100744c3 */
    RECOMP_FLAGS_IN();
    goto L_10074337; /* 0x100742F0: jmp 0x10074337 */
L_100742F2:
    /* cmp eax, 2 */ /* 0x100742F2: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10074307; /* 0x100742F5: jne 0x10074307 */
L_100742F7:
    ecx = esi + 0x198; /* 0x100742F7: lea ecx, [esi + 0x198] */
    /* cmp MEM32(ecx), 0 */ /* 0x100742FD: cmp dword ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10074307; /* 0x10074300: jne 0x10074307 */
L_10074302:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x10074302: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x10074304: inc eax */
    _flag_k = FK_INC;
    { uint32_t _tmp = MEM32(ecx); /* 0x10074305: xchg dword ptr [ecx], eax */
      MEM32(ecx) = eax;
      eax = _tmp; }
L_10074307:
    edi = esi + 0x194; /* 0x10074307: lea edi, [esi + 0x194] */
    eax = MEM32(edi); /* 0x1007430D: mov eax, dword ptr [edi] */
L_1007430F:
    ecx = eax; /* 0x1007430F: mov ecx, eax */
    edx = eax; /* 0x10074311: mov edx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xBFFFFFFFu);
    ecx = ecx & 0xBFFFFFFFu; /* 0x10074313: and ecx, 0xbfffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(edi); if (eax == _d) { MEM32(edi) = ecx; } else { eax = _d; } } /* 0x10074319: lock cmpxchg dword ptr [edi], ecx */
    _flag_k = FK_CMP;
    /* cmp eax, edx */ /* 0x1007431D: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007430F; /* 0x1007431F: jne 0x1007430f */
L_10074321:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1FFFFFFFu);
    eax = eax & 0x1FFFFFFFu; /* 0x10074321: and eax, 0x1fffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_10074337; /* 0x10074326: jle 0x10074337 */
L_10074328:
    PUSH32(esp, 0); /* 0x10074328: push 0 */
    PUSH32(esp, eax); /* 0x1007432A: push eax */
    PUSH32(esp, MEM32(esi + 0x17C)); /* 0x1007432B: push dword ptr [esi + 0x17c] */
    RECOMP_ICALL(MEM32(0x100E51AC)); /* 0x10074331: call dword ptr [0x100e51ac] */
    RECOMP_FLAGS_IN();
L_10074337:
    edi = POP32_VAL(esp); /* 0x10074337: pop edi */
    esi = POP32_VAL(esp); /* 0x10074338: pop esi */
    ecx = POP32_VAL(esp); /* 0x10074339: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007433A: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007433B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007433Bu);

L_1007433B:
    PUSH32(esp, ebp); /* 0x1007433B: push ebp */
    ebp = esp; /* 0x1007433C: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x1007433E: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x10074341: sub esp, 0x14 */
    _flag_k = FK_CMP;
    /* cmp MEM8(ebp + 0x8), 0 */ /* 0x10074344: cmp byte ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    PUSH32(esp, ebx); /* 0x10074348: push ebx */
    PUSH32(esp, esi); /* 0x10074349: push esi */
    PUSH32(esp, edi); /* 0x1007434A: push edi */
    esi = ecx; /* 0x1007434B: mov esi, ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_100743B8; /* 0x1007434D: je 0x100743b8 */
L_1007434F:
    edi = esi + 0x194; /* 0x1007434F: lea edi, [esi + 0x194] */
    ebx = 0x40000000u; /* 0x10074355: mov ebx, 0x40000000 */
    eax = MEM32(edi); /* 0x1007435A: mov eax, dword ptr [edi] */
L_1007435C:
    edx = eax; /* 0x1007435C: mov edx, eax */
    /* test ebx, eax */ /* 0x1007435E: test ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10074384; /* 0x10074360: je 0x10074384 */
L_10074362:
    edx = MEM32(edi); /* 0x10074362: mov edx, dword ptr [edi] */
    /* test ebx, edx */ /* 0x10074364: test ebx, edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10074384; /* 0x10074366: je 0x10074384 */
L_10074368:
    _flag_a = (uint32_t)(MEM32(esp + 0x18)); _flag_b = (uint32_t)(0);
    MEM32(esp + 0x18) = MEM32(esp + 0x18) & 0; /* 0x10074368: and dword ptr [esp + 0x18], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x1C) = 0x1007A487u; /* 0x1007436D: mov dword ptr [esp + 0x1c], 0x1007a487 */
L_10074375:
    ecx = esp + 0x10; /* 0x10074375: lea ecx, [esp + 0x10] */
    RECOMP_CALL(sub_10068D76); /* 0x10074379: call 0x10068d76 */
    RECOMP_FLAGS_IN();
    edx = MEM32(edi); /* 0x1007437E: mov edx, dword ptr [edi] */
    /* test ebx, edx */ /* 0x10074380: test ebx, edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10074375; /* 0x10074382: jne 0x10074375 */
L_10074384:
    /* test edx, 0x20000000u */ /* 0x10074384: test edx, 0x20000000 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x20000000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100743B4; /* 0x1007438A: jne 0x100743b4 */
L_1007438C:
    ecx = edx + 0x1; /* 0x1007438C: lea ecx, [edx + 1] */
    eax = edx; /* 0x1007438F: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(edi); if (eax == _d) { MEM32(edi) = ecx; } else { eax = _d; } } /* 0x10074391: lock cmpxchg dword ptr [edi], ecx */
    _flag_k = FK_CMP;
    /* cmp eax, edx */ /* 0x10074395: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007435C; /* 0x10074397: jne 0x1007435c */
L_10074399:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x10074399: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esi + 0x1B0; /* 0x1007439B: lea eax, [esi + 0x1b0] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x100743A1: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(eax), _sum = MEM32(eax) + ecx; ecx = _old; MEM32(eax) = _sum; } /* 0x100743A2: lock xadd dword ptr [eax], ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x100743A6: inc ecx */
    _flag_k = FK_INC;
    eax = MEM32(esi); /* 0x100743A7: mov eax, dword ptr [esi] */
    PUSH32(esp, ecx); /* 0x100743A9: push ecx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x100743AA: push dword ptr [ebp + 8] */
    ecx = esi; /* 0x100743AD: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax + 0x44)); /* 0x100743AF: call dword ptr [eax + 0x44] */
    RECOMP_FLAGS_IN();
    goto L_100743F0; /* 0x100743B2: jmp 0x100743f0 */
L_100743B4:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x100743B4: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100743F2; /* 0x100743B6: jmp 0x100743f2 */
L_100743B8:
    _flag_a = (uint32_t)((edi | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edi | 0xFFFFFFFFu));
    edi = edi | 0xFFFFFFFFu; /* 0x100743B8: or edi, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esi + 0x1B0; /* 0x100743BB: lea eax, [esi + 0x1b0] */
    ecx = edi; /* 0x100743C1: mov ecx, edi */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(eax), _sum = MEM32(eax) + ecx; ecx = _old; MEM32(eax) = _sum; } /* 0x100743C3: lock xadd dword ptr [eax], ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x100743C7: dec ecx */
    _flag_k = FK_DEC;
    eax = MEM32(esi); /* 0x100743C8: mov eax, dword ptr [esi] */
    PUSH32(esp, ecx); /* 0x100743CA: push ecx */
    PUSH32(esp, 0); /* 0x100743CB: push 0 */
    ecx = esi; /* 0x100743CD: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax + 0x44)); /* 0x100743CF: call dword ptr [eax + 0x44] */
    RECOMP_FLAGS_IN();
    eax = esi + 0x194; /* 0x100743D2: lea eax, [esi + 0x194] */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(eax), _sum = MEM32(eax) + edi; edi = _old; MEM32(eax) = _sum; } /* 0x100743D8: lock xadd dword ptr [eax], edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x100743DC: dec edi */
    _flag_k = FK_DEC;
    /* test edi, 0x1FFFFFFFu */ /* 0x100743DD: test edi, 0x1fffffff */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x1FFFFFFFu);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100743F0; /* 0x100743E3: jne 0x100743f0 */
L_100743E5:
    /* test edi, edi */ /* 0x100743E5: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_100743F0; /* 0x100743E7: jns 0x100743f0 */
L_100743E9:
    ecx = esi; /* 0x100743E9: mov ecx, esi */
    RECOMP_CALL(sub_10074149); /* 0x100743EB: call 0x10074149 */
    RECOMP_FLAGS_IN();
L_100743F0:
    SET_LO8(eax, 1); /* 0x100743F0: mov al, 1 */
L_100743F2:
    edi = POP32_VAL(esp); /* 0x100743F2: pop edi */
    esi = POP32_VAL(esp); /* 0x100743F3: pop esi */
    ebx = POP32_VAL(esp); /* 0x100743F4: pop ebx */
    esp = ebp; /* 0x100743F5: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100743F7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x100743F8: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_10074459(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10074459u);

L_10074459:
    PUSH32(esp, ebp); /* 0x10074459: push ebp */
    ebp = esp; /* 0x1007445A: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1007445C: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1007445F: push ebx */
    PUSH32(esp, esi); /* 0x10074460: push esi */
    PUSH32(esp, edi); /* 0x10074461: push edi */
    edi = ecx; /* 0x10074462: mov edi, ecx */
    ebx = 0x80000000u; /* 0x10074464: mov ebx, 0x80000000 */
    esi = edi + 0x194; /* 0x10074469: lea esi, [edi + 0x194] */
    edx = MEM32(esi); /* 0x1007446F: mov edx, dword ptr [esi] */
    eax = edx; /* 0x10074471: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    eax = eax & ebx; /* 0x10074473: and eax, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ebx */ /* 0x10074475: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_10074496; /* 0x10074477: je 0x10074496 */
L_10074479:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x10074479: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 0x1007A487u; /* 0x1007447D: mov dword ptr [ebp - 4], 0x1007a487 */
L_10074484:
    ecx = ebp + (-0x10); /* 0x10074484: lea ecx, [ebp - 0x10] */
    RECOMP_CALL(sub_10068D76); /* 0x10074487: call 0x10068d76 */
    RECOMP_FLAGS_IN();
    edx = MEM32(esi); /* 0x1007448C: mov edx, dword ptr [esi] */
    eax = edx; /* 0x1007448E: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    eax = eax & ebx; /* 0x10074490: and eax, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ebx */ /* 0x10074492: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_10074484; /* 0x10074494: jne 0x10074484 */
L_10074496:
    ecx = edx; /* 0x10074496: mov ecx, edx */
    ebx = 0x7FFFFFFFu; /* 0x10074498: mov ebx, 0x7fffffff */
    eax = edx; /* 0x1007449D: mov eax, edx */
    goto L_100744A5; /* 0x1007449F: jmp 0x100744a5 */
L_100744A1:
    edx = eax; /* 0x100744A1: mov edx, eax */
    ecx = eax; /* 0x100744A3: mov ecx, eax */
L_100744A5:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    ecx = ecx & ebx; /* 0x100744A5: and ecx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(esi); if (eax == _d) { MEM32(esi) = ecx; } else { eax = _d; } } /* 0x100744A7: lock cmpxchg dword ptr [esi], ecx */
    _flag_k = FK_CMP;
    /* cmp eax, edx */ /* 0x100744AB: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_100744A1; /* 0x100744AD: jne 0x100744a1 */
L_100744AF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x100744AF: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edi + 0x188; /* 0x100744B1: lea eax, [edi + 0x188] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x100744B7: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(eax), _sum = MEM32(eax) + ecx; ecx = _old; MEM32(eax) = _sum; } /* 0x100744B8: lock xadd dword ptr [eax], ecx */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x100744BC: pop edi */
    esi = POP32_VAL(esp); /* 0x100744BD: pop esi */
    ebx = POP32_VAL(esp); /* 0x100744BE: pop ebx */
    esp = ebp; /* 0x100744BF: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x100744C1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100744C2: ret  */
    RECOMP_REGS_OUT();
}

void sub_100744C3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100744C3u);

L_100744C3:
    PUSH32(esp, ebx); /* 0x100744C3: push ebx */
    PUSH32(esp, esi); /* 0x100744C4: push esi */
    PUSH32(esp, edi); /* 0x100744C5: push edi */
    esi = ecx; /* 0x100744C6: mov esi, ecx */
    RECOMP_CALL(sub_10023AF4); /* 0x100744C8: call 0x10023af4 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x100744CD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100744E1; /* 0x100744CF: je 0x100744e1 */
L_100744D1:
    SET_LO8(edx, MEM8(eax + 0x4C)); /* 0x100744D1: mov dl, byte ptr [eax + 0x4c] */
    /* test LO8(edx), LO8(edx) */ /* 0x100744D4: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100744E1; /* 0x100744D6: jne 0x100744e1 */
L_100744D8:
    /* cmp MEM32(eax + 0x1C), esi */ /* 0x100744D8: cmp dword ptr [eax + 0x1c], esi */
    _flag_a = (uint32_t)(MEM32(eax + 0x1C)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_100744E1; /* 0x100744DB: jne 0x100744e1 */
L_100744DD:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(ebx, 0); /* 0x100744DD: xor bl, bl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_100744F0; /* 0x100744DF: jmp 0x100744f0 */
L_100744E1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x100744E1: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esi + 0x188; /* 0x100744E3: lea eax, [esi + 0x188] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x100744E9: inc ebx */
    _flag_k = FK_INC;
    ecx = ebx; /* 0x100744EA: mov ecx, ebx */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(eax), _sum = MEM32(eax) + ecx; ecx = _old; MEM32(eax) = _sum; } /* 0x100744EC: lock xadd dword ptr [eax], ecx */
    _flag_k = FK_ADD;
L_100744F0:
    PUSH32(esp, 0); /* 0x100744F0: push 0 */
    ecx = esi; /* 0x100744F2: mov ecx, esi */
    RECOMP_CALL(sub_10074A82); /* 0x100744F4: call 0x10074a82 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x100744F9: mov eax, dword ptr [esi] */
    ecx = esi; /* 0x100744FB: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax + 0x54)); /* 0x100744FD: call dword ptr [eax + 0x54] */
    RECOMP_FLAGS_IN();
    edi = esi + 0x194; /* 0x10074500: lea edi, [esi + 0x194] */
    eax = MEM32(edi); /* 0x10074506: mov eax, dword ptr [edi] */
L_10074508:
    ecx = eax; /* 0x10074508: mov ecx, eax */
    edx = eax; /* 0x1007450A: mov edx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xBFFFFFFFu);
    ecx = ecx & 0xBFFFFFFFu; /* 0x1007450C: and ecx, 0xbfffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ecx | 0x20000000u)); _flag_b = (uint32_t)((ecx | 0x20000000u));
    ecx = ecx | 0x20000000u; /* 0x10074512: or ecx, 0x20000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)((uint32_t)_flag_a < (uint32_t)_flag_b);
    { uint32_t _d = MEM32(edi); if (eax == _d) { MEM32(edi) = ecx; } else { eax = _d; } } /* 0x10074518: lock cmpxchg dword ptr [edi], ecx */
    _flag_k = FK_CMP;
    /* cmp eax, edx */ /* 0x1007451C: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_10074508; /* 0x1007451E: jne 0x10074508 */
L_10074520:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1FFFFFFFu);
    eax = eax & 0x1FFFFFFFu; /* 0x10074520: and eax, 0x1fffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_10074536; /* 0x10074525: jle 0x10074536 */
L_10074527:
    PUSH32(esp, 0); /* 0x10074527: push 0 */
    PUSH32(esp, eax); /* 0x10074529: push eax */
    PUSH32(esp, MEM32(esi + 0x17C)); /* 0x1007452A: push dword ptr [esi + 0x17c] */
    RECOMP_ICALL(MEM32(0x100E51AC)); /* 0x10074530: call dword ptr [0x100e51ac] */
    RECOMP_FLAGS_IN();
L_10074536:
    eax = MEM32(esi); /* 0x10074536: mov eax, dword ptr [esi] */
    ecx = esi; /* 0x10074538: mov ecx, esi */
    RECOMP_ICALL(MEM32(eax + 0x50)); /* 0x1007453A: call dword ptr [eax + 0x50] */
    RECOMP_FLAGS_IN();
    /* test LO8(ebx), LO8(ebx) */ /* 0x1007453D: test bl, bl */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007454B; /* 0x1007453F: je 0x1007454b */
L_10074541:
    ecx = esi; /* 0x10074541: mov ecx, esi */
    edi = POP32_VAL(esp); /* 0x10074543: pop edi */
    esi = POP32_VAL(esp); /* 0x10074544: pop esi */
    ebx = POP32_VAL(esp); /* 0x10074545: pop ebx */
    goto L_10074683; /* 0x10074546: jmp 0x10074683 */
L_1007454B:
    edi = POP32_VAL(esp); /* 0x1007454B: pop edi */
    esi = POP32_VAL(esp); /* 0x1007454C: pop esi */
    ebx = POP32_VAL(esp); /* 0x1007454D: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1007454E: ret  */
L_10074683:
    PUSH32(esp, ebp); /* 0x10074683: push ebp */
    ebp = esp; /* 0x10074684: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x10074686: push ecx */
    PUSH32(esp, ecx); /* 0x10074687: push ecx */
    eax = ecx + 0x188; /* 0x10074688: lea eax, [ecx + 0x188] */
    _flag_a = (uint32_t)((edx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edx | 0xFFFFFFFFu));
    edx = edx | 0xFFFFFFFFu; /* 0x1007468E: or edx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(eax), _sum = MEM32(eax) + edx; edx = _old; MEM32(eax) = _sum; } /* 0x10074691: lock xadd dword ptr [eax], edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x10074695: dec edx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1007469D; /* 0x10074696: jne 0x1007469d */
L_10074698:
    RECOMP_CALL(sub_1007454F); /* 0x10074698: call 0x1007454f */
    RECOMP_FLAGS_IN();
L_1007469D:
    esp = ebp; /* 0x1007469D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1007469F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100746A0: ret  */
    RECOMP_REGS_OUT();
}

void sub_1007454F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1007454Fu);

L_1007454F:
    PUSH32(esp, ebx); /* 0x1007454F: push ebx */
    PUSH32(esp, esi); /* 0x10074550: push esi */
    PUSH32(esp, edi); /* 0x10074551: push edi */
    edi = ecx; /* 0x10074552: mov edi, ecx */
    ecx = MEM32(edi + 0x1AC); /* 0x10074554: mov ecx, dword ptr [edi + 0x1ac] */
    eax = MEM32(ecx); /* 0x1007455A: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1007455C: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(edi + 0x17C)); /* 0x1007455F: push dword ptr [edi + 0x17c] */
    RECOMP_ICALL(MEM32(0x100E5074)); /* 0x10074565: call dword ptr [0x100e5074] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1007456B: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edi + 0xB4; /* 0x1007456D: lea eax, [edi + 0xb4] */
    { uint32_t _tmp = MEM32(eax); /* 0x10074573: xchg dword ptr [eax], esi */
      MEM32(eax) = esi;
      esi = _tmp; }
    /* test esi, esi */ /* 0x10074575: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10074599; /* 0x10074577: je 0x10074599 */
L_10074579:
    ecx = MEM32(esi + 0x4); /* 0x10074579: mov ecx, dword ptr [esi + 4] */
    ebx = MEM32(esi); /* 0x1007457C: mov ebx, dword ptr [esi] */
    /* test ecx, ecx */ /* 0x1007457E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007458C; /* 0x10074580: je 0x1007458c */
L_10074582:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x10074582: add ecx, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, 1); /* 0x10074585: push 1 */
    eax = MEM32(ecx); /* 0x10074587: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x10074589: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
L_1007458C:
    PUSH32(esp, esi); /* 0x1007458C: push esi */
    RECOMP_CALL(sub_1000ECE0); /* 0x1007458D: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    esi = ebx; /* 0x10074592: mov esi, ebx */
    ecx = POP32_VAL(esp); /* 0x10074594: pop ecx */
    /* test ebx, ebx */ /* 0x10074595: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10074579; /* 0x10074597: jne 0x10074579 */
L_10074599:
    ebx = MEM32(0x100E5130); /* 0x10074599: mov ebx, dword ptr [0x100e5130] */
    eax = edi + 0x1F0; /* 0x1007459F: lea eax, [edi + 0x1f0] */
    PUSH32(esp, eax); /* 0x100745A5: push eax */
    RECOMP_ICALL(ebx); /* 0x100745A6: call ebx */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x100745A8: mov ecx, eax */
    eax = ecx + (-0x4); /* 0x100745AA: lea eax, [ecx - 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x100745AD: neg ecx */
    _flag_k = FK_CMP;
    { uint32_t _sa = ecx, _sb = ecx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x100745AF: sbb ecx, ecx */
      ecx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    ecx = ecx & eax; /* 0x100745B1: and ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100745CE; /* 0x100745B3: je 0x100745ce */
L_100745B5:
    esi = MEM32(ecx + 0x4); /* 0x100745B5: mov esi, dword ptr [ecx + 4] */
    PUSH32(esp, 1); /* 0x100745B8: push 1 */
    eax = esi + (-0x4); /* 0x100745BA: lea eax, [esi - 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(esi);
    _cf = (esi) != 0;
    esi = (uint32_t)(-(int32_t)esi); /* 0x100745BD: neg esi */
    _flag_k = FK_CMP;
    { uint32_t _sa = esi, _sb = esi, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x100745BF: sbb esi, esi */
      esi = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    esi = esi & eax; /* 0x100745C1: and esi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x100745C3: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x100745C5: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
    ecx = esi; /* 0x100745C8: mov ecx, esi */
    /* test esi, esi */ /* 0x100745CA: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100745B5; /* 0x100745CC: jne 0x100745b5 */
L_100745CE:
    eax = edi + 0x1F8; /* 0x100745CE: lea eax, [edi + 0x1f8] */
    PUSH32(esp, eax); /* 0x100745D4: push eax */
    RECOMP_ICALL(ebx); /* 0x100745D5: call ebx */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x100745D7: mov ecx, eax */
    eax = ecx + (-0xC); /* 0x100745D9: lea eax, [ecx - 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x100745DC: neg ecx */
    _flag_k = FK_CMP;
    { uint32_t _sa = ecx, _sb = ecx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x100745DE: sbb ecx, ecx */
      ecx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    ecx = ecx & eax; /* 0x100745E0: and ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_100745FC; /* 0x100745E2: je 0x100745fc */
L_100745E4:
    esi = MEM32(ecx + 0xC); /* 0x100745E4: mov esi, dword ptr [ecx + 0xc] */
    PUSH32(esp, 1); /* 0x100745E7: push 1 */
    eax = esi + (-0xC); /* 0x100745E9: lea eax, [esi - 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(esi);
    _cf = (esi) != 0;
    esi = (uint32_t)(-(int32_t)esi); /* 0x100745EC: neg esi */
    _flag_k = FK_CMP;
    { uint32_t _sa = esi, _sb = esi, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x100745EE: sbb esi, esi */
      esi = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    esi = esi & eax; /* 0x100745F0: and esi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx); /* 0x100745F2: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax)); /* 0x100745F4: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    ecx = esi; /* 0x100745F6: mov ecx, esi */
    /* test esi, esi */ /* 0x100745F8: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_100745E4; /* 0x100745FA: jne 0x100745e4 */
L_100745FC:
    PUSH32(esp, MEM32(edi + 0x174)); /* 0x100745FC: push dword ptr [edi + 0x174] */
    PUSH32(esp, ecx); /* 0x10074602: push ecx */
    PUSH32(esp, 2); /* 0x10074603: push 2 */
    RECOMP_CALL(sub_1002486B); /* 0x10074605: call 0x1002486b */
    RECOMP_FLAGS_IN();
    goto L_1007466E; /* 0x1007460A: jmp 0x1007466e */
L_1007460C:
    esi = edi + 0xBC; /* 0x1007460C: lea esi, [edi + 0xbc] */
    ecx = esi; /* 0x10074612: mov ecx, esi */
    RECOMP_CALL(sub_1006F14E); /* 0x10074614: call 0x1006f14e */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi + 0xB8); /* 0x10074619: mov ecx, dword ptr [edi + 0xb8] */
    /* test ecx, ecx */ /* 0x1007461F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_10074627; /* 0x10074621: jne 0x10074627 */
L_10074623:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x10074623: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_10074645; /* 0x10074625: jmp 0x10074645 */
L_10074627:
    ebx = MEM32(ecx); /* 0x10074627: mov ebx, dword ptr [ecx] */
    /* cmp ecx, ebx */ /* 0x10074629: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_10074636; /* 0x1007462B: jne 0x10074636 */
L_1007462D:
    _flag_a = (uint32_t)(MEM32(edi + 0xB8)); _flag_b = (uint32_t)(0);
    MEM32(edi + 0xB8) = MEM32(edi + 0xB8) & 0; /* 0x1007462D: and dword ptr [edi + 0xb8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_10074645; /* 0x10074634: jmp 0x10074645 */
L_10074636:
    eax = MEM32(ebx); /* 0x10074636: mov eax, dword ptr [ebx] */
    MEM32(eax + 0x4) = ecx; /* 0x10074638: mov dword ptr [eax + 4], ecx */
    ecx = MEM32(edi + 0xB8); /* 0x1007463B: mov ecx, dword ptr [edi + 0xb8] */
    eax = MEM32(ebx); /* 0x10074641: mov eax, dword ptr [ebx] */
    MEM32(ecx) = eax; /* 0x10074643: mov dword ptr [ecx], eax */
L_10074645:
    MEM32(esi) = 0; /* 0x10074645: mov dword ptr [esi], 0 */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1007464B: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x1007464E: add esi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(esi), _sum = MEM32(esi) + eax; eax = _old; MEM32(esi) = _sum; } /* 0x10074651: lock xadd dword ptr [esi], eax */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(ebx + 0x8)); /* 0x10074655: push dword ptr [ebx + 8] */
    RECOMP_ICALL(MEM32(0x100E5140)); /* 0x10074658: call dword ptr [0x100e5140] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebx + 0x8)); /* 0x1007465E: push dword ptr [ebx + 8] */
    RECOMP_ICALL(MEM32(0x100E5074)); /* 0x10074661: call dword ptr [0x100e5074] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x10074667: push ebx */
    RECOMP_CALL(sub_1000ECE0); /* 0x10074668: call 0x1000ece0 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1007466D: pop ecx */
L_1007466E:
    /* cmp MEM32(edi + 0xB8), 0 */ /* 0x1007466E: cmp dword ptr [edi + 0xb8], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0xB8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1007460C; /* 0x10074675: jne 0x1007460c */
L_10074677:
    eax = MEM32(edi); /* 0x10074677: mov eax, dword ptr [edi] */
    ecx = edi; /* 0x10074679: mov ecx, edi */
    PUSH32(esp, 1); /* 0x1007467B: push 1 */
    RECOMP_ICALL(MEM32(eax)); /* 0x1007467D: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x1007467F: pop edi */
    esi = POP32_VAL(esp); /* 0x10074680: pop esi */
    ebx = POP32_VAL(esp); /* 0x10074681: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x10074682: ret  */
    RECOMP_REGS_OUT();
}

void sub_10074683(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x10074683u);

L_10074683:
    PUSH32(esp, ebp); /* 0x10074683: push ebp */
    ebp = esp; /* 0x10074684: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x10074686: push ecx */
    PUSH32(esp, ecx); /* 0x10074687: push ecx */
    eax = ecx + 0x188; /* 0x10074688: lea eax, [ecx + 0x188] */
    _flag_a = (uint32_t)((edx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((edx | 0xFFFFFFFFu));
    edx = edx | 0xFFFFFFFFu; /* 0x1007468E: or edx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(eax), _sum = MEM32(eax) + edx; edx = _old; MEM32(eax) = _sum; } /* 0x10074691: lock xadd dword ptr [eax], edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x10074695: dec edx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1007469D; /* 0x10074696: jne 0x1007469d */
L_10074698:
    RECOMP_CALL(sub_1007454F); /* 0x10074698: call 0x1007454f */
    RECOMP_FLAGS_IN();
L_1007469D:
    esp = ebp; /* 0x1007469D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1007469F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x100746A0: ret  */
    RECOMP_REGS_OUT();
}

void sub_100746A1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x100746A1u);

L_100746A1:
    PUSH32(esp, ebp); /* 0x100746A1: push ebp */
    ebp = esp; /* 0x100746A2: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x100746A4: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x100746A7: sub esp, 0x14 */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x8); /* 0x100746AA: mov eax, dword ptr [ebp + 8] */
    MEM32(esp) = ecx; /* 0x100746AD: mov dword ptr [esp], ecx */
    PUSH32(esp, ebx); /* 0x100746B0: push ebx */
    PUSH32(esp, esi); /* 0x100746B1: push esi */
    PUSH32(esp, edi); /* 0x100746B2: push edi */
    /* test eax, eax */ /* 0x100746B3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007478F; /* 0x100746B5: je 0x1007478f */
L_100746BB:
    edi = MEM32(ebp + 0xC); /* 0x100746BB: mov edi, dword ptr [ebp + 0xc] */
    /* cmp edi, 1 */ /* 0x100746BE: cmp edi, 1 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_100746EF; /* 0x100746C1: jae 0x100746ef */
L_100746C3:
    eax = esp + 0xC; /* 0x100746C3: lea eax, [esp + 0xc] */
    MEM32(esp + 0xC) = 0x100678FCu; /* 0x100746C7: mov dword ptr [esp + 0xc], 0x100678fc */
    PUSH32(esp, eax); /* 0x100746CF: push eax */
    ecx = esp + 0x14; /* 0x100746D0: lea ecx, [esp + 0x14] */
    RECOMP_CALL(sub_1009DD30); /* 0x100746D4: call 0x1009dd30 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x10) = 0x1006754Cu; /* 0x100746D9: mov dword ptr [esp + 0x10], 0x1006754c */
    eax = esp + 0x10; /* 0x100746E1: lea eax, [esp + 0x10] */
    PUSH32(esp, 0x100DCEE8u); /* 0x100746E5: push 0x100dcee8 */
    goto L_100747B6; /* 0x100746EA: jmp 0x100747b6 */
L_100746EF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x100746EF: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x100746F1: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_10074786; /* 0x100746F3: je 0x10074786 */
L_100746F9:
    ebx = MEM32(eax + esi * 4); /* 0x100746F9: mov ebx, dword ptr [eax + esi*4] */
    ecx = ebx; /* 0x100746FC: mov ecx, ebx */
    eax = MEM32(ebx); /* 0x100746FE: mov eax, dword ptr [ebx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x10074700: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx); /* 0x10074703: mov eax, dword ptr [ebx] */
    ecx = ebx; /* 0x10074705: mov ecx, ebx */
    PUSH32(esp, ebx); /* 0x10074707: push ebx */
    RECOMP_ICALL(MEM32(eax)); /* 0x10074708: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esp + 0x10); /* 0x1007470A: mov ecx, dword ptr [esp + 0x10] */
    ecx = MEM32(ecx + 0x20); /* 0x1007470E: mov ecx, dword ptr [ecx + 0x20] */
    ecx = MEM32(ecx + eax * 4); /* 0x10074711: mov ecx, dword ptr [ecx + eax*4] */
    RECOMP_CALL(sub_10075F81); /* 0x10074714: call 0x10075f81 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10074719: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007475A; /* 0x1007471B: jne 0x1007475a */
L_1007471D:
    edi = MEM32(esp + 0xC); /* 0x1007471D: mov edi, dword ptr [esp + 0xc] */
L_10074721:
    _flag_a = (uint32_t)(MEM32(esp + 0x18)); _flag_b = (uint32_t)(0);
    MEM32(esp + 0x18) = MEM32(esp + 0x18) & 0; /* 0x10074721: and dword ptr [esp + 0x18], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x1C) = 0x1007A46Cu; /* 0x10074726: mov dword ptr [esp + 0x1c], 0x1007a46c */
L_1007472E:
    ecx = esp + 0x10; /* 0x1007472E: lea ecx, [esp + 0x10] */
    RECOMP_CALL(sub_10068D76); /* 0x10074732: call 0x10068d76 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x10074737: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1007472E; /* 0x10074739: jne 0x1007472e */
L_1007473B:
    RECOMP_ICALL(MEM32(0x100E518C)); /* 0x1007473B: call dword ptr [0x100e518c] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx); /* 0x10074741: mov eax, dword ptr [ebx] */
    ecx = ebx; /* 0x10074743: mov ecx, ebx */
    PUSH32(esp, ebx); /* 0x10074745: push ebx */
    RECOMP_ICALL(MEM32(eax)); /* 0x10074746: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi + 0x20); /* 0x10074748: mov ecx, dword ptr [edi + 0x20] */
    ecx = MEM32(ecx + eax * 4); /* 0x1007474B: mov ecx, dword ptr [ecx + eax*4] */
    RECOMP_CALL(sub_10075F81); /* 0x1007474E: call 0x10075f81 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x10074753: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_10074721; /* 0x10074755: je 0x10074721 */
L_10074757:
    edi = MEM32(ebp + 0xC); /* 0x10074757: mov edi, dword ptr [ebp + 0xc] */
L_1007475A:
    /* cmp MEM8(eax + 0xAC), 0 */ /* 0x1007475A: cmp byte ptr [eax + 0xac], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0xAC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1007476F; /* 0x10074761: je 0x1007476f */
L_10074763:
    ecx = MEM32(eax + 0xB0); /* 0x10074763: mov ecx, dword ptr [eax + 0xb0] */
    PUSH32(esp, eax); /* 0x10074769: push eax */
    RECOMP_CALL(sub_1006DAF8); /* 0x1007476A: call 0x1006daf8 */
    RECOMP_FLAGS_IN();
L_1007476F:
    /* test eax, eax */ /* 0x1007476F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1007477A; /* 0x10074771: je 0x1007477a */
L_10074773:
    ecx = eax; /* 0x10074773: mov ecx, eax */
    RECOMP_CALL(sub_1007A8D9); /* 0x10074775: call 0x1007a8d9 */
    RECOMP_FLAGS_IN();
L_1007477A:
    eax = MEM32(ebp + 0x8); /* 0x1007477A: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1007477D: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, edi */ /* 0x1007477E: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_100746F9; /* 0x10074780: jb 0x100746f9 */
L_10074786:
    edi = POP32_VAL(esp); /* 0x10074786: pop edi */
    esi = POP32_VAL(esp); /* 0x10074787: pop esi */
    ebx = POP32_VAL(esp); /* 0x10074788: pop ebx */
    esp = ebp; /* 0x10074789: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1007478B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1007478C: ret 8 */
L_1007478F:
    eax = esp + 0xC; /* 0x1007478F: lea eax, [esp + 0xc] */
    MEM32(esp + 0xC) = 0x10067904u; /* 0x10074793: mov dword ptr [esp + 0xc], 0x10067904 */
    PUSH32(esp, eax); /* 0x1007479B: push eax */
    ecx = esp + 0x14; /* 0x1007479C: lea ecx, [esp + 0x14] */
    RECOMP_CALL(sub_1009DD30); /* 0x100747A0: call 0x1009dd30 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x10) = 0x1006754Cu; /* 0x100747A5: mov dword ptr [esp + 0x10], 0x1006754c */
    eax = esp + 0x10; /* 0x100747AD: lea eax, [esp + 0x10] */
    PUSH32(esp, 0x100DCEE8u); /* 0x100747B1: push 0x100dcee8 */
L_100747B6:
    PUSH32(esp, eax); /* 0x100747B6: push eax */
    RECOMP_CALL(sub_100192EB); /* 0x100747B7: call 0x100192eb */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x100747BCu, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}
