#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_1100EAEA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100EAEAu);

L_1100EAEA:
    PUSH32(esp, ebp); /* 0x1100EAEA: push ebp */
    ebp = esp; /* 0x1100EAEB: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x1100EAED: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ecx + 0xC); /* 0x1100EAF0: mov ecx, dword ptr [ecx + 0xc] */
    edx = (uint32_t)LO8(eax); /* 0x1100EAF3: movzx edx, al */
    SET_LO16(eax, MEM16(ebp + 0x8)); /* 0x1100EAF6: mov ax, word ptr [ebp + 8] */
    PUSH32(esp, 0); /* 0x1100EAFA: push 0 */
    /* test MEM16(ecx + edx * 2), LO16(eax) */ /* 0x1100EAFC: test word ptr [ecx + edx*2], ax */
    _flag_a = (uint32_t)(MEM16(ecx + edx * 2)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    eax = POP32_VAL(esp); /* 0x1100EB00: pop eax */
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1100EB01: setne al */
    ebp = POP32_VAL(esp); /* 0x1100EB04: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1100EB05: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1100EB08(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100EB08u);

L_1100EB08:
    PUSH32(esp, ebp); /* 0x1100EB08: push ebp */
    ebp = esp; /* 0x1100EB09: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1100EB0B: push ecx */
    eax = MEM32(ebp + 0xC); /* 0x1100EB0C: mov eax, dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + 0x8); /* 0x1100EB0F: mov edx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x1100EB12: sub eax, edx */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1100EB14: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1100EB15: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ecx; /* 0x1100EB17: mov dword ptr [ebp - 4], ecx */
    /* cmp MEM32(ebp + 0xC), edx */ /* 0x1100EB1A: cmp dword ptr [ebp + 0xc], edx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1100EB1D: push esi */
    { uint32_t _sa = esi, _sb = esi, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1100EB1E: sbb esi, esi */
      esi = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    esi = ~esi; /* 0x1100EB20: not esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    esi = esi & eax; /* 0x1100EB22: and esi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100EB44; /* 0x1100EB24: je 0x1100eb44 */
L_1100EB26:
    PUSH32(esp, edi); /* 0x1100EB26: push edi */
    edi = MEM32(ebp + 0x10); /* 0x1100EB27: mov edi, dword ptr [ebp + 0x10] */
L_1100EB2A:
    eax = MEM32(ebp + (-0x4)); /* 0x1100EB2A: mov eax, dword ptr [ebp - 4] */
    ecx = (uint32_t)MEM8(edx); /* 0x1100EB2D: movzx ecx, byte ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1100EB30: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1100EB31: inc ebx */
    _flag_k = FK_INC;
    eax = MEM32(eax + 0xC); /* 0x1100EB32: mov eax, dword ptr [eax + 0xc] */
    SET_LO16(ecx, MEM16(eax + ecx * 2)); /* 0x1100EB35: mov cx, word ptr [eax + ecx*2] */
    MEM16(edi) = (uint16_t)(LO16(ecx)); /* 0x1100EB39: mov word ptr [edi], cx */
    edi = edi + 0x2; /* 0x1100EB3C: lea edi, [edi + 2] */
    /* cmp ebx, esi */ /* 0x1100EB3F: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1100EB2A; /* 0x1100EB41: jne 0x1100eb2a */
L_1100EB43:
    edi = POP32_VAL(esp); /* 0x1100EB43: pop edi */
L_1100EB44:
    esi = POP32_VAL(esp); /* 0x1100EB44: pop esi */
    eax = edx; /* 0x1100EB45: mov eax, edx */
    ebx = POP32_VAL(esp); /* 0x1100EB47: pop ebx */
    esp = ebp; /* 0x1100EB48: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1100EB4A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1100EB4B: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1100EB4E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100EB4Eu);

L_1100EB4E:
    PUSH32(esp, ebp); /* 0x1100EB4E: push ebp */
    ebp = esp; /* 0x1100EB4F: mov ebp, esp */
    edx = MEM32(ebp + 0xC); /* 0x1100EB51: mov edx, dword ptr [ebp + 0xc] */
    /* cmp edx, MEM32(ebp + 0x10) */ /* 0x1100EB54: cmp edx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1100EB71; /* 0x1100EB57: je 0x1100eb71 */
L_1100EB59:
    ecx = MEM32(ecx + 0xC); /* 0x1100EB59: mov ecx, dword ptr [ecx + 0xc] */
    PUSH32(esp, esi); /* 0x1100EB5C: push esi */
    SET_LO16(esi, MEM16(ebp + 0x8)); /* 0x1100EB5D: mov si, word ptr [ebp + 8] */
L_1100EB61:
    eax = (uint32_t)MEM8(edx); /* 0x1100EB61: movzx eax, byte ptr [edx] */
    /* test MEM16(ecx + eax * 2), LO16(esi) */ /* 0x1100EB64: test word ptr [ecx + eax*2], si */
    _flag_a = (uint32_t)(MEM16(ecx + eax * 2)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1100EB70; /* 0x1100EB68: jne 0x1100eb70 */
L_1100EB6A:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1100EB6A: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, MEM32(ebp + 0x10) */ /* 0x1100EB6B: cmp edx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1100EB61; /* 0x1100EB6E: jne 0x1100eb61 */
L_1100EB70:
    esi = POP32_VAL(esp); /* 0x1100EB70: pop esi */
L_1100EB71:
    eax = edx; /* 0x1100EB71: mov eax, edx */
    ebp = POP32_VAL(esp); /* 0x1100EB73: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1100EB74: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1100EB77(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100EB77u);

L_1100EB77:
    PUSH32(esp, ebp); /* 0x1100EB77: push ebp */
    ebp = esp; /* 0x1100EB78: mov ebp, esp */
    edx = MEM32(ebp + 0xC); /* 0x1100EB7A: mov edx, dword ptr [ebp + 0xc] */
    /* cmp edx, MEM32(ebp + 0x10) */ /* 0x1100EB7D: cmp edx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1100EB9A; /* 0x1100EB80: je 0x1100eb9a */
L_1100EB82:
    ecx = MEM32(ecx + 0xC); /* 0x1100EB82: mov ecx, dword ptr [ecx + 0xc] */
    PUSH32(esp, esi); /* 0x1100EB85: push esi */
    SET_LO16(esi, MEM16(ebp + 0x8)); /* 0x1100EB86: mov si, word ptr [ebp + 8] */
L_1100EB8A:
    eax = (uint32_t)MEM8(edx); /* 0x1100EB8A: movzx eax, byte ptr [edx] */
    /* test MEM16(ecx + eax * 2), LO16(esi) */ /* 0x1100EB8D: test word ptr [ecx + eax*2], si */
    _flag_a = (uint32_t)(MEM16(ecx + eax * 2)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100EB99; /* 0x1100EB91: je 0x1100eb99 */
L_1100EB93:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1100EB93: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, MEM32(ebp + 0x10) */ /* 0x1100EB94: cmp edx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1100EB8A; /* 0x1100EB97: jne 0x1100eb8a */
L_1100EB99:
    esi = POP32_VAL(esp); /* 0x1100EB99: pop esi */
L_1100EB9A:
    eax = edx; /* 0x1100EB9A: mov eax, edx */
    ebp = POP32_VAL(esp); /* 0x1100EB9C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1100EB9D: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1100EBA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100EBA0u);

L_1100EBA0:
    PUSH32(esp, ebp); /* 0x1100EBA0: push ebp */
    ebp = esp; /* 0x1100EBA1: mov ebp, esp */
    eax = MEM32(ecx); /* 0x1100EBA3: mov eax, dword ptr [ecx] */
    ebp = POP32_VAL(esp); /* 0x1100EBA5: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(eax + 0x10)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1100EBA9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100EBA9u);

L_1100EBA9:
    PUSH32(esp, ebp); /* 0x1100EBA9: push ebp */
    ebp = esp; /* 0x1100EBAA: mov ebp, esp */
    eax = MEM32(ecx); /* 0x1100EBAC: mov eax, dword ptr [ecx] */
    ebp = POP32_VAL(esp); /* 0x1100EBAE: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(eax + 0xC)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1100EBB2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100EBB2u);

L_1100EBB2:
    PUSH32(esp, ebp); /* 0x1100EBB2: push ebp */
    ebp = esp; /* 0x1100EBB3: mov ebp, esp */
    eax = MEM32(ecx); /* 0x1100EBB5: mov eax, dword ptr [ecx] */
    ebp = POP32_VAL(esp); /* 0x1100EBB7: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(eax + 0x14)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1100EBBB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100EBBBu);

L_1100EBBB:
    PUSH32(esp, ebp); /* 0x1100EBBB: push ebp */
    ebp = esp; /* 0x1100EBBC: mov ebp, esp */
    eax = MEM32(ecx); /* 0x1100EBBE: mov eax, dword ptr [ecx] */
    ebp = POP32_VAL(esp); /* 0x1100EBC0: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(eax + 0x28)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1100EBC4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100EBC4u);

L_1100EBC4:
    PUSH32(esp, 0x48u); /* 0x1100EBC4: push 0x48 */
    eax = 0x1103CC26u; /* 0x1100EBC6: mov eax, 0x1103cc26 */
    RECOMP_CALL(sub_1103B372); /* 0x1100EBCB: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    ebx = ecx; /* 0x1100EBD0: mov ebx, ecx */
    MEM32(ebp + (-0x10)) = ebx; /* 0x1100EBD2: mov dword ptr [ebp - 0x10], ebx */
    eax = MEM32(ebp + 0x10); /* 0x1100EBD5: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ebx + 0x4) = eax; /* 0x1100EBD8: mov dword ptr [ebx + 4], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1100EBDB: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x54); /* 0x1100EBDF: lea ecx, [ebp - 0x54] */
    PUSH32(esp, 0x110048B0u); /* 0x1100EBE2: push 0x110048b0 */
    MEM32(ebx) = 0x11001580u; /* 0x1100EBE7: mov dword ptr [ebx], 0x11001580 */
    RECOMP_CALL(sub_1100DEDB); /* 0x1100EBED: call 0x1100dedb */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x20); /* 0x1100EBF2: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x1100EBF5: push eax */
    RECOMP_CALL(sub_1102FFD7); /* 0x1100EBF6: call 0x1102ffd7 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1100EBFB: mov esi, eax */
    edi = ebx + 0x8; /* 0x1100EBFD: lea edi, [ebx + 8] */
    ecx = POP32_VAL(esp); /* 0x1100EC00: pop ecx */
    ecx = ebp + (-0x54); /* 0x1100EC01: lea ecx, [ebp - 0x54] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1100EC04: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1100EC05: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1100EC06: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1100EC07: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_1100DFF5); /* 0x1100EC08: call 0x1100dff5 */
    RECOMP_FLAGS_IN();
    ecx = ebx; /* 0x1100EC0D: mov ecx, ebx */
    RECOMP_CALL(sub_1100ED37); /* 0x1100EC0F: call 0x1100ed37 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1100EC14: mov eax, dword ptr [ebp + 8] */
    /* test eax, eax */ /* 0x1100EC17: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100EC2C; /* 0x1100EC19: je 0x1100ec2c */
L_1100EC1B:
    MEM32(ebx + 0xC) = eax; /* 0x1100EC1B: mov dword ptr [ebx + 0xc], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1100EC1E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(ebp + 0xC), LO8(eax) */ /* 0x1100EC20: cmp byte ptr [ebp + 0xc], al */
    _flag_a = (uint32_t)(MEM8(ebp + 0xC)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1100EC23: sete al */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1100EC26: dec eax */
    _flag_k = FK_DEC;
    MEM32(ebx + 0x10) = eax; /* 0x1100EC27: mov dword ptr [ebx + 0x10], eax */
    goto L_1100EC42; /* 0x1100EC2A: jmp 0x1100ec42 */
L_1100EC2C:
    RECOMP_CALL(sub_110305DE); /* 0x1100EC2C: call 0x110305de */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1100EC31: push eax */
    RECOMP_CALL(sub_11010F0A); /* 0x1100EC32: call 0x11010f0a */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100EC37: pop ecx */
    eax = MEM32(eax + 0xC); /* 0x1100EC38: mov eax, dword ptr [eax + 0xc] */
    _flag_a = (uint32_t)(MEM32(ebx + 0x10)); _flag_b = (uint32_t)(0);
    MEM32(ebx + 0x10) = MEM32(ebx + 0x10) & 0; /* 0x1100EC3B: and dword ptr [ebx + 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebx + 0xC) = eax; /* 0x1100EC3F: mov dword ptr [ebx + 0xc], eax */
L_1100EC42:
    eax = ebx; /* 0x1100EC42: mov eax, ebx */
    RECOMP_CALL(sub_1103B340); /* 0x1100EC44: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1100EC49: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1100EC4C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100EC4Cu);

L_1100EC4C:
    PUSH32(esp, ebp); /* 0x1100EC4C: push ebp */
    ebp = esp; /* 0x1100EC4D: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x1100EC4F: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1100EC52: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1100EC55: push ebx */
    ebx = ecx; /* 0x1100EC56: mov ebx, ecx */
    PUSH32(esp, esi); /* 0x1100EC58: push esi */
    PUSH32(esp, edi); /* 0x1100EC59: push edi */
    MEM32(ebx + 0x4) = eax; /* 0x1100EC5A: mov dword ptr [ebx + 4], eax */
    eax = ebp + (-0x10); /* 0x1100EC5D: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1100EC60: push eax */
    MEM32(ebx) = 0x11001580u; /* 0x1100EC61: mov dword ptr [ebx], 0x11001580 */
    RECOMP_CALL(sub_1102FFD7); /* 0x1100EC67: call 0x1102ffd7 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1100EC6C: mov esi, eax */
    edi = ebx + 0x8; /* 0x1100EC6E: lea edi, [ebx + 8] */
    ecx = POP32_VAL(esp); /* 0x1100EC71: pop ecx */
    eax = ebx; /* 0x1100EC72: mov eax, ebx */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1100EC74: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1100EC75: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1100EC76: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1100EC77: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x1100EC78: pop edi */
    esi = POP32_VAL(esp); /* 0x1100EC79: pop esi */
    ebx = POP32_VAL(esp); /* 0x1100EC7A: pop ebx */
    esp = ebp; /* 0x1100EC7B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1100EC7D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1100EC7E: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1100EC81(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100EC81u);

L_1100EC81:
    PUSH32(esp, 0x38u); /* 0x1100EC81: push 0x38 */
    eax = 0x1103CC03u; /* 0x1100EC83: mov eax, 0x1103cc03 */
    RECOMP_CALL(sub_1103B372); /* 0x1100EC88: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x8); /* 0x1100EC8D: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1100EC90: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = esi; /* 0x1100EC92: mov ebx, esi */
    MEM32(ebp + (-0x10)) = ebx; /* 0x1100EC94: mov dword ptr [ebp - 0x10], ebx */
    /* test edi, edi */ /* 0x1100EC97: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100ECDF; /* 0x1100EC99: je 0x1100ecdf */
L_1100EC9B:
    /* cmp MEM32(edi), esi */ /* 0x1100EC9B: cmp dword ptr [edi], esi */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1100ECDF; /* 0x1100EC9D: jne 0x1100ecdf */
L_1100EC9F:
    PUSH32(esp, 0x18u); /* 0x1100EC9F: push 0x18 */
    RECOMP_ICALL(MEM32(0x11069330)); /* 0x1100ECA1: call dword ptr [0x11069330] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100ECA7: pop ecx */
    MEM32(ebp + 0x8) = eax; /* 0x1100ECA8: mov dword ptr [ebp + 8], eax */
    MEM32(ebp + (-0x4)) = esi; /* 0x1100ECAB: mov dword ptr [ebp - 4], esi */
    /* test eax, eax */ /* 0x1100ECAE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100ECD0; /* 0x1100ECB0: je 0x1100ecd0 */
L_1100ECB2:
    ecx = MEM32(ebp + 0xC); /* 0x1100ECB2: mov ecx, dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1100E47B); /* 0x1100ECB5: call 0x1100e47b */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1100ECBA: push eax */
    ecx = ebp + (-0x44); /* 0x1100ECBB: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_1100DEDB); /* 0x1100ECBE: call 0x1100dedb */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x1100ECC3: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1100ECC6: inc ebx */
    _flag_k = FK_INC;
    PUSH32(esp, esi); /* 0x1100ECC7: push esi */
    PUSH32(esp, eax); /* 0x1100ECC8: push eax */
    RECOMP_CALL(sub_1100EC4C); /* 0x1100ECC9: call 0x1100ec4c */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1100ECCE: mov esi, eax */
L_1100ECD0:
    MEM32(edi) = esi; /* 0x1100ECD0: mov dword ptr [edi], esi */
    /* test LO8(ebx), 1 */ /* 0x1100ECD2: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100ECDF; /* 0x1100ECD5: je 0x1100ecdf */
L_1100ECD7:
    ecx = ebp + (-0x44); /* 0x1100ECD7: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_1100DFF5); /* 0x1100ECDA: call 0x1100dff5 */
    RECOMP_FLAGS_IN();
L_1100ECDF:
    PUSH32(esp, 2); /* 0x1100ECDF: push 2 */
    eax = POP32_VAL(esp); /* 0x1100ECE1: pop eax */
    RECOMP_CALL(sub_1103B340); /* 0x1100ECE2: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100ECE7: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100ECE8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100ECE8u);

L_1100ECE8:
    eax = MEM32(ecx + 0xC); /* 0x1100ECE8: mov eax, dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100ECEB: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100ECEC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100ECECu);

L_1100ECEC:
    RECOMP_CALL(sub_110305DE); /* 0x1100ECEC: call 0x110305de */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1100ECF1: push eax */
    RECOMP_CALL(sub_11010F0A); /* 0x1100ECF2: call 0x11010f0a */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100ECF7: pop ecx */
    eax = MEM32(eax + 0xC); /* 0x1100ECF8: mov eax, dword ptr [eax + 0xc] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100ECFB: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100ECFC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100ECFCu);

L_1100ECFC:
    PUSH32(esp, esi); /* 0x1100ECFC: push esi */
    esi = ecx; /* 0x1100ECFD: mov esi, ecx */
    MEM32(esi) = 0x11001580u; /* 0x1100ECFF: mov dword ptr [esi], 0x11001580 */
    RECOMP_CALL(sub_1100ED37); /* 0x1100ED05: call 0x1100ed37 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x110014CCu; /* 0x1100ED0A: mov dword ptr [esi], 0x110014cc */
    esi = POP32_VAL(esp); /* 0x1100ED10: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100ED11: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100ED12(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100ED12u);

L_1100ED12:
    PUSH32(esp, ebp); /* 0x1100ED12: push ebp */
    ebp = esp; /* 0x1100ED13: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1100ED15: sub esp, 0x10 */
    _flag_k = FK_CMP;
    eax = ebp + (-0x10); /* 0x1100ED18: lea eax, [ebp - 0x10] */
    PUSH32(esp, esi); /* 0x1100ED1B: push esi */
    PUSH32(esp, edi); /* 0x1100ED1C: push edi */
    PUSH32(esp, eax); /* 0x1100ED1D: push eax */
    edi = ecx; /* 0x1100ED1E: mov edi, ecx */
    RECOMP_CALL(sub_1102FFD7); /* 0x1100ED20: call 0x1102ffd7 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 8; /* 0x1100ED25: add edi, 8 */
    _flag_k = FK_ADD;
    esi = eax; /* 0x1100ED28: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x1100ED2A: pop ecx */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1100ED2B: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1100ED2C: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1100ED2D: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1100ED2E: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x1100ED2F: pop edi */
    esi = POP32_VAL(esp); /* 0x1100ED30: pop esi */
    esp = ebp; /* 0x1100ED31: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1100ED33: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100ED34: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100ED37(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100ED37u);

L_1100ED37:
    PUSH32(esp, esi); /* 0x1100ED37: push esi */
    esi = ecx; /* 0x1100ED38: mov esi, ecx */
    eax = MEM32(esi + 0x10); /* 0x1100ED3A: mov eax, dword ptr [esi + 0x10] */
    /* test eax, eax */ /* 0x1100ED3D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1100ED4C; /* 0x1100ED3F: jle 0x1100ed4c */
L_1100ED41:
    PUSH32(esp, MEM32(esi + 0xC)); /* 0x1100ED41: push dword ptr [esi + 0xc] */
    RECOMP_ICALL(MEM32(0x11069304)); /* 0x1100ED44: call dword ptr [0x11069304] */
    RECOMP_FLAGS_IN();
    goto L_1100ED57; /* 0x1100ED4A: jmp 0x1100ed57 */
L_1100ED4C:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NS, _cf)) goto L_1100ED58; /* 0x1100ED4C: jns 0x1100ed58 */
L_1100ED4E:
    PUSH32(esp, MEM32(esi + 0xC)); /* 0x1100ED4E: push dword ptr [esi + 0xc] */
    RECOMP_ICALL(MEM32(0x110692DC)); /* 0x1100ED51: call dword ptr [0x110692dc] */
    RECOMP_FLAGS_IN();
L_1100ED57:
    ecx = POP32_VAL(esp); /* 0x1100ED57: pop ecx */
L_1100ED58:
    PUSH32(esp, MEM32(esi + 0x14)); /* 0x1100ED58: push dword ptr [esi + 0x14] */
    RECOMP_ICALL(MEM32(0x11069304)); /* 0x1100ED5B: call dword ptr [0x11069304] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100ED61: pop ecx */
    esi = POP32_VAL(esp); /* 0x1100ED62: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100ED63: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100ED64(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100ED64u);

L_1100ED64:
    PUSH32(esp, ebp); /* 0x1100ED64: push ebp */
    ebp = esp; /* 0x1100ED65: mov ebp, esp */
    eax = ecx + 0x8; /* 0x1100ED67: lea eax, [ecx + 8] */
    PUSH32(esp, eax); /* 0x1100ED6A: push eax */
    eax = MEM32(ebp + 0x8); /* 0x1100ED6B: mov eax, dword ptr [ebp + 8] */
    eax = (uint32_t)LO8(eax); /* 0x1100ED6E: movzx eax, al */
    PUSH32(esp, eax); /* 0x1100ED71: push eax */
    RECOMP_CALL(sub_11030049); /* 0x1100ED72: call 0x11030049 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100ED77: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1100ED78: pop ecx */
    ebp = POP32_VAL(esp); /* 0x1100ED79: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100ED7A: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100ED7D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100ED7Du);

L_1100ED7D:
    PUSH32(esp, ebp); /* 0x1100ED7D: push ebp */
    ebp = esp; /* 0x1100ED7E: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x1100ED80: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x1100ED83: push ebx */
    PUSH32(esp, esi); /* 0x1100ED84: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1100ED85: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1100ED88: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x1100ED8A: sub eax, esi */
    _flag_k = FK_CMP;
    /* cmp MEM32(ebp + 0xC), esi */ /* 0x1100ED8C: cmp dword ptr [ebp + 0xc], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x1100ED8F: push edi */
    { uint32_t _sa = edi, _sb = edi, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1100ED90: sbb edi, edi */
      edi = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    edi = ~edi; /* 0x1100ED92: not edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    edi = edi & eax; /* 0x1100ED94: and edi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100EDB5; /* 0x1100ED96: je 0x1100edb5 */
L_1100ED98:
    eax = ecx + 0x8; /* 0x1100ED98: lea eax, [ecx + 8] */
    MEM32(ebp + 0xC) = eax; /* 0x1100ED9B: mov dword ptr [ebp + 0xc], eax */
L_1100ED9E:
    PUSH32(esp, eax); /* 0x1100ED9E: push eax */
    eax = (uint32_t)MEM8(esi); /* 0x1100ED9F: movzx eax, byte ptr [esi] */
    PUSH32(esp, eax); /* 0x1100EDA2: push eax */
    RECOMP_CALL(sub_11030049); /* 0x1100EDA3: call 0x11030049 */
    RECOMP_FLAGS_IN();
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x1100EDA8: mov byte ptr [esi], al */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1100EDAA: inc esi */
    _flag_k = FK_INC;
    eax = MEM32(ebp + 0xC); /* 0x1100EDAB: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1100EDAE: inc ebx */
    _flag_k = FK_INC;
    ecx = POP32_VAL(esp); /* 0x1100EDAF: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1100EDB0: pop ecx */
    /* cmp ebx, edi */ /* 0x1100EDB1: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1100ED9E; /* 0x1100EDB3: jne 0x1100ed9e */
L_1100EDB5:
    edi = POP32_VAL(esp); /* 0x1100EDB5: pop edi */
    eax = esi; /* 0x1100EDB6: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1100EDB8: pop esi */
    ebx = POP32_VAL(esp); /* 0x1100EDB9: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1100EDBA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1100EDBB: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1100EDBE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100EDBEu);

L_1100EDBE:
    PUSH32(esp, ebp); /* 0x1100EDBE: push ebp */
    ebp = esp; /* 0x1100EDBF: mov ebp, esp */
    eax = ecx + 0x8; /* 0x1100EDC1: lea eax, [ecx + 8] */
    PUSH32(esp, eax); /* 0x1100EDC4: push eax */
    eax = MEM32(ebp + 0x8); /* 0x1100EDC5: mov eax, dword ptr [ebp + 8] */
    eax = (uint32_t)LO8(eax); /* 0x1100EDC8: movzx eax, al */
    PUSH32(esp, eax); /* 0x1100EDCB: push eax */
    RECOMP_CALL(sub_11030198); /* 0x1100EDCC: call 0x11030198 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100EDD1: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1100EDD2: pop ecx */
    ebp = POP32_VAL(esp); /* 0x1100EDD3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100EDD4: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100EDD7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100EDD7u);

L_1100EDD7:
    PUSH32(esp, ebp); /* 0x1100EDD7: push ebp */
    ebp = esp; /* 0x1100EDD8: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x1100EDDA: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x1100EDDD: push ebx */
    PUSH32(esp, esi); /* 0x1100EDDE: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1100EDDF: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1100EDE2: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x1100EDE4: sub eax, esi */
    _flag_k = FK_CMP;
    /* cmp MEM32(ebp + 0xC), esi */ /* 0x1100EDE6: cmp dword ptr [ebp + 0xc], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x1100EDE9: push edi */
    { uint32_t _sa = edi, _sb = edi, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1100EDEA: sbb edi, edi */
      edi = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    edi = ~edi; /* 0x1100EDEC: not edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    edi = edi & eax; /* 0x1100EDEE: and edi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100EE0F; /* 0x1100EDF0: je 0x1100ee0f */
L_1100EDF2:
    eax = ecx + 0x8; /* 0x1100EDF2: lea eax, [ecx + 8] */
    MEM32(ebp + 0xC) = eax; /* 0x1100EDF5: mov dword ptr [ebp + 0xc], eax */
L_1100EDF8:
    PUSH32(esp, eax); /* 0x1100EDF8: push eax */
    eax = (uint32_t)MEM8(esi); /* 0x1100EDF9: movzx eax, byte ptr [esi] */
    PUSH32(esp, eax); /* 0x1100EDFC: push eax */
    RECOMP_CALL(sub_11030198); /* 0x1100EDFD: call 0x11030198 */
    RECOMP_FLAGS_IN();
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x1100EE02: mov byte ptr [esi], al */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1100EE04: inc esi */
    _flag_k = FK_INC;
    eax = MEM32(ebp + 0xC); /* 0x1100EE05: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1100EE08: inc ebx */
    _flag_k = FK_INC;
    ecx = POP32_VAL(esp); /* 0x1100EE09: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1100EE0A: pop ecx */
    /* cmp ebx, edi */ /* 0x1100EE0B: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1100EDF8; /* 0x1100EE0D: jne 0x1100edf8 */
L_1100EE0F:
    edi = POP32_VAL(esp); /* 0x1100EE0F: pop edi */
    eax = esi; /* 0x1100EE10: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1100EE12: pop esi */
    ebx = POP32_VAL(esp); /* 0x1100EE13: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1100EE14: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1100EE15: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1100EE18(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100EE18u);

L_1100EE18:
    PUSH32(esp, ebp); /* 0x1100EE18: push ebp */
    ebp = esp; /* 0x1100EE19: mov ebp, esp */
    SET_LO8(eax, MEM8(ebp + 0x8)); /* 0x1100EE1B: mov al, byte ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x1100EE1E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100EE1F: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100EE22(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100EE22u);

L_1100EE22:
    PUSH32(esp, ebp); /* 0x1100EE22: push ebp */
    ebp = esp; /* 0x1100EE23: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x1100EE25: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + 0x8); /* 0x1100EE28: sub ecx, dword ptr [ebp + 8] */
    _flag_k = FK_CMP;
    PUSH32(esp, ecx); /* 0x1100EE2B: push ecx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1100EE2C: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1100EE2F: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1103B300); /* 0x1100EE32: call 0x1103b300 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0xC); /* 0x1100EE37: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1100EE3A: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1100EE3D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1100EE3E: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1100EE41(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100EE41u);

L_1100EE41:
    PUSH32(esp, ebp); /* 0x1100EE41: push ebp */
    ebp = esp; /* 0x1100EE42: mov ebp, esp */
    SET_LO8(eax, MEM8(ebp + 0x8)); /* 0x1100EE44: mov al, byte ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x1100EE47: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1100EE48: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1100EE4B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100EE4Bu);

L_1100EE4B:
    PUSH32(esp, ebp); /* 0x1100EE4B: push ebp */
    ebp = esp; /* 0x1100EE4C: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x1100EE4E: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + 0x8); /* 0x1100EE51: sub ecx, dword ptr [ebp + 8] */
    _flag_k = FK_CMP;
    PUSH32(esp, ecx); /* 0x1100EE54: push ecx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1100EE55: push dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1100EE58: push dword ptr [ebp + 0x14] */
    RECOMP_CALL(sub_1103B300); /* 0x1100EE5B: call 0x1103b300 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0xC); /* 0x1100EE60: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1100EE63: add esp, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1100EE66: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1100EE67: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1100EE6A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100EE6Au);

L_1100EE6A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1100EE6A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1100EE6C: push eax */
    PUSH32(esp, eax); /* 0x1100EE6D: push eax */
    PUSH32(esp, eax); /* 0x1100EE6E: push eax */
    RECOMP_CALL(sub_1100EBC4); /* 0x1100EE6F: call 0x1100ebc4 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100EE74: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100EE75(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100EE75u);

L_1100EE75:
    PUSH32(esp, ebp); /* 0x1100EE75: push ebp */
    ebp = esp; /* 0x1100EE76: mov ebp, esp */
    /* test MEM8(ebp + 0x8), 2 */ /* 0x1100EE78: test byte ptr [ebp + 8], 2 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, esi); /* 0x1100EE7C: push esi */
    esi = ecx; /* 0x1100EE7D: mov esi, ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100EEA7; /* 0x1100EE7F: je 0x1100eea7 */
L_1100EE81:
    PUSH32(esp, edi); /* 0x1100EE81: push edi */
    PUSH32(esp, 0x1100ECFCu); /* 0x1100EE82: push 0x1100ecfc */
    edi = esi + (-0x4); /* 0x1100EE87: lea edi, [esi - 4] */
    PUSH32(esp, MEM32(edi)); /* 0x1100EE8A: push dword ptr [edi] */
    PUSH32(esp, 0x18u); /* 0x1100EE8C: push 0x18 */
    PUSH32(esp, esi); /* 0x1100EE8E: push esi */
    RECOMP_CALL(sub_1103B132); /* 0x1100EE8F: call 0x1103b132 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1100EE94: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100EEA2; /* 0x1100EE98: je 0x1100eea2 */
L_1100EE9A:
    PUSH32(esp, edi); /* 0x1100EE9A: push edi */
    RECOMP_ICALL(MEM32(0x110692DC)); /* 0x1100EE9B: call dword ptr [0x110692dc] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100EEA1: pop ecx */
L_1100EEA2:
    eax = edi; /* 0x1100EEA2: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1100EEA4: pop edi */
    goto L_1100EEC8; /* 0x1100EEA5: jmp 0x1100eec8 */
L_1100EEA7:
    MEM32(esi) = 0x11001580u; /* 0x1100EEA7: mov dword ptr [esi], 0x11001580 */
    RECOMP_CALL(sub_1100ED37); /* 0x1100EEAD: call 0x1100ed37 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1100EEB2: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(esi) = 0x110014CCu; /* 0x1100EEB6: mov dword ptr [esi], 0x110014cc */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100EEC6; /* 0x1100EEBC: je 0x1100eec6 */
L_1100EEBE:
    PUSH32(esp, esi); /* 0x1100EEBE: push esi */
    RECOMP_ICALL(MEM32(0x1106932C)); /* 0x1100EEBF: call dword ptr [0x1106932c] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100EEC5: pop ecx */
L_1100EEC6:
    eax = esi; /* 0x1100EEC6: mov eax, esi */
L_1100EEC8:
    esi = POP32_VAL(esp); /* 0x1100EEC8: pop esi */
    ebp = POP32_VAL(esp); /* 0x1100EEC9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100EECA: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100EECD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100EECDu);

L_1100EECD:
    PUSH32(esp, ebp); /* 0x1100EECD: push ebp */
    ebp = esp; /* 0x1100EECE: mov ebp, esp */
    eax = MEM32(ecx); /* 0x1100EED0: mov eax, dword ptr [ecx] */
    ebp = POP32_VAL(esp); /* 0x1100EED2: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(eax + 0x2C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1100EED6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100EED6u);

L_1100EED6:
    PUSH32(esp, ebp); /* 0x1100EED6: push ebp */
    ebp = esp; /* 0x1100EED7: mov ebp, esp */
    eax = MEM32(ecx); /* 0x1100EED9: mov eax, dword ptr [ecx] */
    ebp = POP32_VAL(esp); /* 0x1100EEDB: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(eax + 0x38)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1100EEDF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100EEDFu);

L_1100EEDF:
    PUSH32(esp, ebp); /* 0x1100EEDF: push ebp */
    ebp = esp; /* 0x1100EEE0: mov ebp, esp */
    eax = MEM32(ecx); /* 0x1100EEE2: mov eax, dword ptr [ecx] */
    ebp = POP32_VAL(esp); /* 0x1100EEE4: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(eax + 0x34)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1100EEE8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100EEE8u);

L_1100EEE8:
    PUSH32(esp, 0x38u); /* 0x1100EEE8: push 0x38 */
    eax = 0x1103CC49u; /* 0x1100EEEA: mov eax, 0x1103cc49 */
    RECOMP_CALL(sub_1103B372); /* 0x1100EEEF: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1100EEF4: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x1100EEF6: mov dword ptr [ebp - 0x10], esi */
    eax = MEM32(ebp + 0x8); /* 0x1100EEF9: mov eax, dword ptr [ebp + 8] */
    MEM32(esi + 0x4) = eax; /* 0x1100EEFC: mov dword ptr [esi + 4], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1100EEFF: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x44); /* 0x1100EF03: lea ecx, [ebp - 0x44] */
    PUSH32(esp, 0x110048B0u); /* 0x1100EF06: push 0x110048b0 */
    MEM32(esi) = 0x110015B0u; /* 0x1100EF0B: mov dword ptr [esi], 0x110015b0 */
    RECOMP_CALL(sub_1100DEDB); /* 0x1100EF11: call 0x1100dedb */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x44); /* 0x1100EF16: lea eax, [ebp - 0x44] */
    ecx = esi; /* 0x1100EF19: mov ecx, esi */
    PUSH32(esp, eax); /* 0x1100EF1B: push eax */
    RECOMP_CALL(sub_1100EFF0); /* 0x1100EF1C: call 0x1100eff0 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x44); /* 0x1100EF21: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_1100DFF5); /* 0x1100EF24: call 0x1100dff5 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1100EF29: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1100EF2B: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100EF30: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100EF33(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100EF33u);

L_1100EF33:
    PUSH32(esp, ebp); /* 0x1100EF33: push ebp */
    ebp = esp; /* 0x1100EF34: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x1100EF36: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x1100EF39: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1100EF3A: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x1100EF3D: mov esi, ecx */
    MEM32(esi + 0x4) = eax; /* 0x1100EF3F: mov dword ptr [esi + 4], eax */
    MEM32(esi) = 0x110015B0u; /* 0x1100EF42: mov dword ptr [esi], 0x110015b0 */
    RECOMP_CALL(sub_1100EFF0); /* 0x1100EF48: call 0x1100eff0 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1100EF4D: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1100EF4F: pop esi */
    ebp = POP32_VAL(esp); /* 0x1100EF50: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1100EF51: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1100EF54(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100EF54u);

L_1100EF54:
    PUSH32(esp, 0x38u); /* 0x1100EF54: push 0x38 */
    eax = 0x1103CC03u; /* 0x1100EF56: mov eax, 0x1103cc03 */
    RECOMP_CALL(sub_1103B372); /* 0x1100EF5B: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x8); /* 0x1100EF60: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1100EF63: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = ebx; /* 0x1100EF65: mov dword ptr [ebp - 0x10], ebx */
    /* test edi, edi */ /* 0x1100EF68: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100EFBC; /* 0x1100EF6A: je 0x1100efbc */
L_1100EF6C:
    /* cmp MEM32(edi), ebx */ /* 0x1100EF6C: cmp dword ptr [edi], ebx */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1100EFBC; /* 0x1100EF6E: jne 0x1100efbc */
L_1100EF70:
    PUSH32(esp, 0x44u); /* 0x1100EF70: push 0x44 */
    RECOMP_ICALL(MEM32(0x11069330)); /* 0x1100EF72: call dword ptr [0x11069330] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1100EF78: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x1100EF7A: pop ecx */
    MEM32(ebp + 0x8) = esi; /* 0x1100EF7B: mov dword ptr [ebp + 8], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(ebx);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & ebx; /* 0x1100EF7E: and dword ptr [ebp - 4], ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x1100EF81: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100EFAB; /* 0x1100EF83: je 0x1100efab */
L_1100EF85:
    ecx = MEM32(ebp + 0xC); /* 0x1100EF85: mov ecx, dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1100E47B); /* 0x1100EF88: call 0x1100e47b */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1100EF8D: push eax */
    ecx = ebp + (-0x44); /* 0x1100EF8E: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_1100DEDB); /* 0x1100EF91: call 0x1100dedb */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0; /* 0x1100EF96: and dword ptr [esi + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi; /* 0x1100EF9A: mov ecx, esi */
    PUSH32(esp, eax); /* 0x1100EF9C: push eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1100EF9D: inc ebx */
    _flag_k = FK_INC;
    MEM32(esi) = 0x110015B0u; /* 0x1100EF9E: mov dword ptr [esi], 0x110015b0 */
    RECOMP_CALL(sub_1100EFF0); /* 0x1100EFA4: call 0x1100eff0 */
    RECOMP_FLAGS_IN();
    goto L_1100EFAD; /* 0x1100EFA9: jmp 0x1100efad */
L_1100EFAB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1100EFAB: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1100EFAD:
    MEM32(edi) = esi; /* 0x1100EFAD: mov dword ptr [edi], esi */
    /* test LO8(ebx), 1 */ /* 0x1100EFAF: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100EFBC; /* 0x1100EFB2: je 0x1100efbc */
L_1100EFB4:
    ecx = ebp + (-0x44); /* 0x1100EFB4: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_1100DFF5); /* 0x1100EFB7: call 0x1100dff5 */
    RECOMP_FLAGS_IN();
L_1100EFBC:
    PUSH32(esp, 2); /* 0x1100EFBC: push 2 */
    eax = POP32_VAL(esp); /* 0x1100EFBE: pop eax */
    RECOMP_CALL(sub_1103B340); /* 0x1100EFBF: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100EFC4: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100EFC5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100EFC5u);

L_1100EFC5:
    PUSH32(esp, esi); /* 0x1100EFC5: push esi */
    esi = ecx; /* 0x1100EFC6: mov esi, ecx */
    /* cmp MEM32(esi + 0x10), 0 */ /* 0x1100EFC8: cmp dword ptr [esi + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi) = 0x110015B0u; /* 0x1100EFCC: mov dword ptr [esi], 0x110015b0 */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1100EFDE; /* 0x1100EFD2: je 0x1100efde */
L_1100EFD4:
    PUSH32(esp, MEM32(esi + 0xC)); /* 0x1100EFD4: push dword ptr [esi + 0xc] */
    RECOMP_ICALL(MEM32(0x11069304)); /* 0x1100EFD7: call dword ptr [0x11069304] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100EFDD: pop ecx */
L_1100EFDE:
    PUSH32(esp, MEM32(esi + 0x14)); /* 0x1100EFDE: push dword ptr [esi + 0x14] */
    RECOMP_ICALL(MEM32(0x11069304)); /* 0x1100EFE1: call dword ptr [0x11069304] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100EFE7: pop ecx */
    MEM32(esi) = 0x110014CCu; /* 0x1100EFE8: mov dword ptr [esi], 0x110014cc */
    esi = POP32_VAL(esp); /* 0x1100EFEE: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100EFEF: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100EFF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100EFF0u);

L_1100EFF0:
    PUSH32(esp, ebp); /* 0x1100EFF0: push ebp */
    ebp = esp; /* 0x1100EFF1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x3Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x3Cu; /* 0x1100EFF3: sub esp, 0x3c */
    _flag_k = FK_CMP;
    eax = ebp + (-0x10); /* 0x1100EFF6: lea eax, [ebp - 0x10] */
    PUSH32(esp, ebx); /* 0x1100EFF9: push ebx */
    PUSH32(esp, esi); /* 0x1100EFFA: push esi */
    PUSH32(esp, edi); /* 0x1100EFFB: push edi */
    PUSH32(esp, eax); /* 0x1100EFFC: push eax */
    ebx = ecx; /* 0x1100EFFD: mov ebx, ecx */
    RECOMP_CALL(sub_1102FFD7); /* 0x1100EFFF: call 0x1102ffd7 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1100F004: mov esi, eax */
    edi = ebx + 0x8; /* 0x1100F006: lea edi, [ebx + 8] */
    eax = ebp + (-0x3C); /* 0x1100F009: lea eax, [ebp - 0x3c] */
    PUSH32(esp, eax); /* 0x1100F00C: push eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1100F00D: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1100F00E: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1100F00F: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1100F010: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_1102DA53); /* 0x1100F011: call 0x1102da53 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100F016: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1100F017: pop ecx */
    PUSH32(esp, 0xBu); /* 0x1100F018: push 0xb */
    ecx = POP32_VAL(esp); /* 0x1100F01A: pop ecx */
    edi = ebx + 0x18; /* 0x1100F01B: lea edi, [ebx + 0x18] */
    esi = eax; /* 0x1100F01E: mov esi, eax */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1100F020: rep movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x1100F022: pop edi */
    esi = POP32_VAL(esp); /* 0x1100F023: pop esi */
    ebx = POP32_VAL(esp); /* 0x1100F024: pop ebx */
    esp = ebp; /* 0x1100F025: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1100F027: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100F028: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100F02B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100F02Bu);

L_1100F02B:
    PUSH32(esp, ebp); /* 0x1100F02B: push ebp */
    ebp = esp; /* 0x1100F02C: mov ebp, esp */
    eax = ecx + 0x8; /* 0x1100F02E: lea eax, [ecx + 8] */
    PUSH32(esp, eax); /* 0x1100F031: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1100F032: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1103029B); /* 0x1100F035: call 0x1103029b */
    RECOMP_FLAGS_IN();
    /* test MEM16(ebp + 0x8), LO16(eax) */ /* 0x1100F03A: test word ptr [ebp + 8], ax */
    _flag_a = (uint32_t)(MEM16(ebp + 0x8)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    ecx = POP32_VAL(esp); /* 0x1100F03E: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1100F03F: pop ecx */
    PUSH32(esp, 0); /* 0x1100F040: push 0 */
    eax = POP32_VAL(esp); /* 0x1100F042: pop eax */
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1100F043: setne al */
    ebp = POP32_VAL(esp); /* 0x1100F046: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1100F047: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1100F04A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100F04Au);

L_1100F04A:
    PUSH32(esp, ebp); /* 0x1100F04A: push ebp */
    ebp = esp; /* 0x1100F04B: mov ebp, esp */
    eax = ecx + 0x8; /* 0x1100F04D: lea eax, [ecx + 8] */
    PUSH32(esp, eax); /* 0x1100F050: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1100F051: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1100F054: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1100F057: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_110302BF); /* 0x1100F05A: call 0x110302bf */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1100F05F: add esp, 0x10 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1100F062: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1100F063: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1100F066(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100F066u);

L_1100F066:
    PUSH32(esp, ebp); /* 0x1100F066: push ebp */
    ebp = esp; /* 0x1100F067: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1100F069: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1100F06A: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1100F06D: push edi */
    edi = ecx; /* 0x1100F06E: mov edi, ecx */
    goto L_1100F087; /* 0x1100F070: jmp 0x1100f087 */
L_1100F072:
    eax = (uint32_t)MEM16(esi); /* 0x1100F072: movzx eax, word ptr [esi] */
    ecx = edi; /* 0x1100F075: mov ecx, edi */
    edx = MEM32(edi); /* 0x1100F077: mov edx, dword ptr [edi] */
    PUSH32(esp, eax); /* 0x1100F079: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1100F07A: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(edx + 0x10)); /* 0x1100F07D: call dword ptr [edx + 0x10] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1100F080: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1100F08C; /* 0x1100F082: jne 0x1100f08c */
L_1100F084:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x1100F084: add esi, 2 */
    _flag_k = FK_ADD;
L_1100F087:
    /* cmp esi, MEM32(ebp + 0x10) */ /* 0x1100F087: cmp esi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1100F072; /* 0x1100F08A: jne 0x1100f072 */
L_1100F08C:
    edi = POP32_VAL(esp); /* 0x1100F08C: pop edi */
    eax = esi; /* 0x1100F08D: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1100F08F: pop esi */
    ebp = POP32_VAL(esp); /* 0x1100F090: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1100F091: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1100F094(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100F094u);

L_1100F094:
    PUSH32(esp, ebp); /* 0x1100F094: push ebp */
    ebp = esp; /* 0x1100F095: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1100F097: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1100F098: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1100F09B: push edi */
    edi = ecx; /* 0x1100F09C: mov edi, ecx */
    goto L_1100F0B5; /* 0x1100F09E: jmp 0x1100f0b5 */
L_1100F0A0:
    eax = (uint32_t)MEM16(esi); /* 0x1100F0A0: movzx eax, word ptr [esi] */
    ecx = edi; /* 0x1100F0A3: mov ecx, edi */
    edx = MEM32(edi); /* 0x1100F0A5: mov edx, dword ptr [edi] */
    PUSH32(esp, eax); /* 0x1100F0A7: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1100F0A8: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(edx + 0x10)); /* 0x1100F0AB: call dword ptr [edx + 0x10] */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1100F0AE: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100F0BA; /* 0x1100F0B0: je 0x1100f0ba */
L_1100F0B2:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x1100F0B2: add esi, 2 */
    _flag_k = FK_ADD;
L_1100F0B5:
    /* cmp esi, MEM32(ebp + 0x10) */ /* 0x1100F0B5: cmp esi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1100F0A0; /* 0x1100F0B8: jne 0x1100f0a0 */
L_1100F0BA:
    edi = POP32_VAL(esp); /* 0x1100F0BA: pop edi */
    eax = esi; /* 0x1100F0BB: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1100F0BD: pop esi */
    ebp = POP32_VAL(esp); /* 0x1100F0BE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1100F0BF: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1100F0C2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100F0C2u);

L_1100F0C2:
    PUSH32(esp, ebp); /* 0x1100F0C2: push ebp */
    ebp = esp; /* 0x1100F0C3: mov ebp, esp */
    eax = ecx + 0x8; /* 0x1100F0C5: lea eax, [ecx + 8] */
    PUSH32(esp, eax); /* 0x1100F0C8: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1100F0C9: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_110302DE); /* 0x1100F0CC: call 0x110302de */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100F0D1: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1100F0D2: pop ecx */
    ebp = POP32_VAL(esp); /* 0x1100F0D3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100F0D4: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100F0D7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100F0D7u);

L_1100F0D7:
    PUSH32(esp, ebp); /* 0x1100F0D7: push ebp */
    ebp = esp; /* 0x1100F0D8: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x1100F0DA: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x1100F0DD: push ebx */
    PUSH32(esp, esi); /* 0x1100F0DE: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1100F0DF: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1100F0E2: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x1100F0E4: sub eax, esi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1100F0E6: inc eax */
    _flag_k = FK_INC;
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x1100F0E7: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x1100F0E7: shr eax, 1 */
    /* cmp MEM32(ebp + 0xC), esi */ /* 0x1100F0E9: cmp dword ptr [ebp + 0xc], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x1100F0EC: push edi */
    { uint32_t _sa = edi, _sb = edi, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1100F0ED: sbb edi, edi */
      edi = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    edi = ~edi; /* 0x1100F0EF: not edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    edi = edi & eax; /* 0x1100F0F1: and edi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100F115; /* 0x1100F0F3: je 0x1100f115 */
L_1100F0F5:
    eax = ecx + 0x8; /* 0x1100F0F5: lea eax, [ecx + 8] */
    MEM32(ebp + 0xC) = eax; /* 0x1100F0F8: mov dword ptr [ebp + 0xc], eax */
L_1100F0FB:
    PUSH32(esp, eax); /* 0x1100F0FB: push eax */
    eax = (uint32_t)MEM16(esi); /* 0x1100F0FC: movzx eax, word ptr [esi] */
    PUSH32(esp, eax); /* 0x1100F0FF: push eax */
    RECOMP_CALL(sub_110302DE); /* 0x1100F100: call 0x110302de */
    RECOMP_FLAGS_IN();
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x1100F105: mov word ptr [esi], ax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x1100F108: add esi, 2 */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0xC); /* 0x1100F10B: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1100F10E: inc ebx */
    _flag_k = FK_INC;
    ecx = POP32_VAL(esp); /* 0x1100F10F: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1100F110: pop ecx */
    /* cmp ebx, edi */ /* 0x1100F111: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1100F0FB; /* 0x1100F113: jne 0x1100f0fb */
L_1100F115:
    edi = POP32_VAL(esp); /* 0x1100F115: pop edi */
    eax = esi; /* 0x1100F116: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1100F118: pop esi */
    ebx = POP32_VAL(esp); /* 0x1100F119: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1100F11A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1100F11B: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1100F11E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100F11Eu);

L_1100F11E:
    PUSH32(esp, ebp); /* 0x1100F11E: push ebp */
    ebp = esp; /* 0x1100F11F: mov ebp, esp */
    eax = ecx + 0x8; /* 0x1100F121: lea eax, [ecx + 8] */
    PUSH32(esp, eax); /* 0x1100F124: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1100F125: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1103034A); /* 0x1100F128: call 0x1103034a */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100F12D: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1100F12E: pop ecx */
    ebp = POP32_VAL(esp); /* 0x1100F12F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100F130: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100F133(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100F133u);

L_1100F133:
    PUSH32(esp, ebp); /* 0x1100F133: push ebp */
    ebp = esp; /* 0x1100F134: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x1100F136: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x1100F139: push ebx */
    PUSH32(esp, esi); /* 0x1100F13A: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1100F13B: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1100F13E: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x1100F140: sub eax, esi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1100F142: inc eax */
    _flag_k = FK_INC;
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x1100F143: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x1100F143: shr eax, 1 */
    /* cmp MEM32(ebp + 0xC), esi */ /* 0x1100F145: cmp dword ptr [ebp + 0xc], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x1100F148: push edi */
    { uint32_t _sa = edi, _sb = edi, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1100F149: sbb edi, edi */
      edi = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    edi = ~edi; /* 0x1100F14B: not edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    edi = edi & eax; /* 0x1100F14D: and edi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100F171; /* 0x1100F14F: je 0x1100f171 */
L_1100F151:
    eax = ecx + 0x8; /* 0x1100F151: lea eax, [ecx + 8] */
    MEM32(ebp + 0xC) = eax; /* 0x1100F154: mov dword ptr [ebp + 0xc], eax */
L_1100F157:
    PUSH32(esp, eax); /* 0x1100F157: push eax */
    eax = (uint32_t)MEM16(esi); /* 0x1100F158: movzx eax, word ptr [esi] */
    PUSH32(esp, eax); /* 0x1100F15B: push eax */
    RECOMP_CALL(sub_1103034A); /* 0x1100F15C: call 0x1103034a */
    RECOMP_FLAGS_IN();
    MEM16(esi) = (uint16_t)(LO16(eax)); /* 0x1100F161: mov word ptr [esi], ax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x1100F164: add esi, 2 */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0xC); /* 0x1100F167: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1100F16A: inc ebx */
    _flag_k = FK_INC;
    ecx = POP32_VAL(esp); /* 0x1100F16B: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1100F16C: pop ecx */
    /* cmp ebx, edi */ /* 0x1100F16D: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1100F157; /* 0x1100F16F: jne 0x1100f157 */
L_1100F171:
    edi = POP32_VAL(esp); /* 0x1100F171: pop edi */
    eax = esi; /* 0x1100F172: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1100F174: pop esi */
    ebx = POP32_VAL(esp); /* 0x1100F175: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1100F176: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1100F177: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1100F17A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100F17Au);

L_1100F17A:
    PUSH32(esp, ebp); /* 0x1100F17A: push ebp */
    ebp = esp; /* 0x1100F17B: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1100F17D: push ecx */
    PUSH32(esp, ecx); /* 0x1100F17E: push ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x1100F17F: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ecx + 0x18; /* 0x1100F183: lea eax, [ecx + 0x18] */
    PUSH32(esp, eax); /* 0x1100F186: push eax */
    eax = ebp + (-0x8); /* 0x1100F187: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x1100F18A: push eax */
    PUSH32(esp, 1); /* 0x1100F18B: push 1 */
    eax = ebp + 0x8; /* 0x1100F18D: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x1100F190: push eax */
    eax = ebp + (-0x4); /* 0x1100F191: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x1100F194: push eax */
    RECOMP_CALL(sub_1102D797); /* 0x1100F195: call 0x1102d797 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1100F19A: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1100F19D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = 0xFFFFu; /* 0x1100F19F: mov eax, 0xffff */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1100F1AA; /* 0x1100F1A4: js 0x1100f1aa */
L_1100F1A6:
    eax = (uint32_t)MEM16(ebp + (-0x4)); /* 0x1100F1A6: movzx eax, word ptr [ebp - 4] */
L_1100F1AA:
    esp = ebp; /* 0x1100F1AA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1100F1AC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100F1AD: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100F1B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100F1B0u);

    goto L_1100F1B0;
L_1100F17A:
    PUSH32(esp, ebp); /* 0x1100F17A: push ebp */
    ebp = esp; /* 0x1100F17B: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1100F17D: push ecx */
    PUSH32(esp, ecx); /* 0x1100F17E: push ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x1100F17F: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ecx + 0x18; /* 0x1100F183: lea eax, [ecx + 0x18] */
    PUSH32(esp, eax); /* 0x1100F186: push eax */
    eax = ebp + (-0x8); /* 0x1100F187: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x1100F18A: push eax */
    PUSH32(esp, 1); /* 0x1100F18B: push 1 */
    eax = ebp + 0x8; /* 0x1100F18D: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x1100F190: push eax */
    eax = ebp + (-0x4); /* 0x1100F191: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x1100F194: push eax */
    RECOMP_CALL(sub_1102D797); /* 0x1100F195: call 0x1102d797 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x1100F19A: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x1100F19D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = 0xFFFFu; /* 0x1100F19F: mov eax, 0xffff */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1100F1AA; /* 0x1100F1A4: js 0x1100f1aa */
L_1100F1A6:
    eax = (uint32_t)MEM16(ebp + (-0x4)); /* 0x1100F1A6: movzx eax, word ptr [ebp - 4] */
L_1100F1AA:
    esp = ebp; /* 0x1100F1AA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1100F1AC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100F1AD: ret 4 */
L_1100F1B0:
    PUSH32(esp, ebp); /* 0x1100F1B0: push ebp */
    ebp = esp; /* 0x1100F1B1: mov ebp, esp */
    ebp = POP32_VAL(esp); /* 0x1100F1B3: pop ebp */
    RECOMP_BACKEDGE();
    goto L_1100F17A; /* 0x1100F1B4: jmp 0x1100f17a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1100F1B9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100F1B9u);

L_1100F1B9:
    PUSH32(esp, ebp); /* 0x1100F1B9: push ebp */
    ebp = esp; /* 0x1100F1BA: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1100F1BC: push ecx */
    PUSH32(esp, ecx); /* 0x1100F1BD: push ecx */
    eax = MEM32(ebp + 0xC); /* 0x1100F1BE: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1100F1C1: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1100F1C5: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1100F1C6: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x1100F1C9: sub eax, esi */
    _flag_k = FK_CMP;
    /* cmp MEM32(ebp + 0xC), esi */ /* 0x1100F1CB: cmp dword ptr [ebp + 0xc], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x1100F1CE: push edi */
    { uint32_t _sa = edi, _sb = edi, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1100F1CF: sbb edi, edi */
      edi = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    MEM32(ebp + (-0x8)) = ecx; /* 0x1100F1D1: mov dword ptr [ebp - 8], ecx */
    edi = ~edi; /* 0x1100F1D4: not edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    edi = edi & eax; /* 0x1100F1D6: and edi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100F1FD; /* 0x1100F1D8: je 0x1100f1fd */
L_1100F1DA:
    PUSH32(esp, ebx); /* 0x1100F1DA: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x1100F1DB: mov ebx, dword ptr [ebp + 0x10] */
L_1100F1DE:
    eax = (uint32_t)MEM8(esi); /* 0x1100F1DE: movzx eax, byte ptr [esi] */
    PUSH32(esp, eax); /* 0x1100F1E1: push eax */
    RECOMP_CALL(sub_1100F17A); /* 0x1100F1E2: call 0x1100f17a */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x8)); /* 0x1100F1E7: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1100F1EA: inc esi */
    _flag_k = FK_INC;
    MEM16(ebx) = (uint16_t)(LO16(eax)); /* 0x1100F1EB: mov word ptr [ebx], ax */
    ebx = ebx + 0x2; /* 0x1100F1EE: lea ebx, [ebx + 2] */
    eax = MEM32(ebp + (-0x4)); /* 0x1100F1F1: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1100F1F4: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x4)) = eax; /* 0x1100F1F5: mov dword ptr [ebp - 4], eax */
    /* cmp eax, edi */ /* 0x1100F1F8: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1100F1DE; /* 0x1100F1FA: jne 0x1100f1de */
L_1100F1FC:
    ebx = POP32_VAL(esp); /* 0x1100F1FC: pop ebx */
L_1100F1FD:
    edi = POP32_VAL(esp); /* 0x1100F1FD: pop edi */
    eax = esi; /* 0x1100F1FE: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1100F200: pop esi */
    esp = ebp; /* 0x1100F201: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1100F203: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1100F204: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1100F207(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100F207u);

L_1100F207:
    PUSH32(esp, ebp); /* 0x1100F207: push ebp */
    ebp = esp; /* 0x1100F208: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1100F20A: sub esp, 0x10 */
    _flag_k = FK_CMP;
    eax = MEM32(0x110631D0); /* 0x1100F20D: mov eax, dword ptr [0x110631d0] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1100F212: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1100F214: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & 0; /* 0x1100F217: and dword ptr [ebp - 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ecx + 0x18; /* 0x1100F21B: lea eax, [ecx + 0x18] */
    PUSH32(esp, eax); /* 0x1100F21E: push eax */
    eax = ebp + (-0x10); /* 0x1100F21F: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1100F222: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1100F223: push dword ptr [ebp + 8] */
    eax = ebp + (-0xC); /* 0x1100F226: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1100F229: push eax */
    RECOMP_CALL(sub_1102DAC0); /* 0x1100F22A: call 0x1102dac0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1100F22F: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* cmp eax, 1 */ /* 0x1100F232: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1100F23C; /* 0x1100F235: je 0x1100f23c */
L_1100F237:
    eax = MEM32(ebp + 0xC); /* 0x1100F237: mov eax, dword ptr [ebp + 0xc] */
    goto L_1100F23F; /* 0x1100F23A: jmp 0x1100f23f */
L_1100F23C:
    SET_LO8(eax, MEM8(ebp + (-0xC))); /* 0x1100F23C: mov al, byte ptr [ebp - 0xc] */
L_1100F23F:
    ecx = MEM32(ebp + (-0x4)); /* 0x1100F23F: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1100F242: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1100F244: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1100F249: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1100F24B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1100F24C: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1100F24F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100F24Fu);

    goto L_1100F24F;
L_1100F207:
    PUSH32(esp, ebp); /* 0x1100F207: push ebp */
    ebp = esp; /* 0x1100F208: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1100F20A: sub esp, 0x10 */
    _flag_k = FK_CMP;
    eax = MEM32(0x110631D0); /* 0x1100F20D: mov eax, dword ptr [0x110631d0] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1100F212: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1100F214: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & 0; /* 0x1100F217: and dword ptr [ebp - 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ecx + 0x18; /* 0x1100F21B: lea eax, [ecx + 0x18] */
    PUSH32(esp, eax); /* 0x1100F21E: push eax */
    eax = ebp + (-0x10); /* 0x1100F21F: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x1100F222: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1100F223: push dword ptr [ebp + 8] */
    eax = ebp + (-0xC); /* 0x1100F226: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1100F229: push eax */
    RECOMP_CALL(sub_1102DAC0); /* 0x1100F22A: call 0x1102dac0 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1100F22F: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* cmp eax, 1 */ /* 0x1100F232: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1100F23C; /* 0x1100F235: je 0x1100f23c */
L_1100F237:
    eax = MEM32(ebp + 0xC); /* 0x1100F237: mov eax, dword ptr [ebp + 0xc] */
    goto L_1100F23F; /* 0x1100F23A: jmp 0x1100f23f */
L_1100F23C:
    SET_LO8(eax, MEM8(ebp + (-0xC))); /* 0x1100F23C: mov al, byte ptr [ebp - 0xc] */
L_1100F23F:
    ecx = MEM32(ebp + (-0x4)); /* 0x1100F23F: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1100F242: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1100F244: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1100F249: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1100F24B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1100F24C: ret 8 */
L_1100F24F:
    PUSH32(esp, ebp); /* 0x1100F24F: push ebp */
    ebp = esp; /* 0x1100F250: mov ebp, esp */
    ebp = POP32_VAL(esp); /* 0x1100F252: pop ebp */
    RECOMP_BACKEDGE();
    goto L_1100F207; /* 0x1100F253: jmp 0x1100f207 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1100F258(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100F258u);

L_1100F258:
    PUSH32(esp, ebp); /* 0x1100F258: push ebp */
    ebp = esp; /* 0x1100F259: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1100F25B: push ecx */
    PUSH32(esp, ecx); /* 0x1100F25C: push ecx */
    eax = MEM32(ebp + 0xC); /* 0x1100F25D: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1100F260: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1100F264: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1100F265: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x1100F268: sub eax, esi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1100F26A: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x8)) = ecx; /* 0x1100F26B: mov dword ptr [ebp - 8], ecx */
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x1100F26E: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x1100F26E: shr eax, 1 */
    /* cmp MEM32(ebp + 0xC), esi */ /* 0x1100F270: cmp dword ptr [ebp + 0xc], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x1100F273: push edi */
    { uint32_t _sa = edi, _sb = edi, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x1100F274: sbb edi, edi */
      edi = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    edi = ~edi; /* 0x1100F276: not edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    edi = edi & eax; /* 0x1100F278: and edi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100F2A1; /* 0x1100F27A: je 0x1100f2a1 */
L_1100F27C:
    PUSH32(esp, ebx); /* 0x1100F27C: push ebx */
    ebx = MEM32(ebp + 0x14); /* 0x1100F27D: mov ebx, dword ptr [ebp + 0x14] */
L_1100F280:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1100F280: push dword ptr [ebp + 0x10] */
    eax = (uint32_t)MEM16(esi); /* 0x1100F283: movzx eax, word ptr [esi] */
    PUSH32(esp, eax); /* 0x1100F286: push eax */
    RECOMP_CALL(sub_1100F207); /* 0x1100F287: call 0x1100f207 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x8)); /* 0x1100F28C: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x1100F28F: add esi, 2 */
    _flag_k = FK_ADD;
    MEM8(ebx) = (uint8_t)(LO8(eax)); /* 0x1100F292: mov byte ptr [ebx], al */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1100F294: inc ebx */
    _flag_k = FK_INC;
    eax = MEM32(ebp + (-0x4)); /* 0x1100F295: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1100F298: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x4)) = eax; /* 0x1100F299: mov dword ptr [ebp - 4], eax */
    /* cmp eax, edi */ /* 0x1100F29C: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1100F280; /* 0x1100F29E: jne 0x1100f280 */
L_1100F2A0:
    ebx = POP32_VAL(esp); /* 0x1100F2A0: pop ebx */
L_1100F2A1:
    edi = POP32_VAL(esp); /* 0x1100F2A1: pop edi */
    eax = esi; /* 0x1100F2A2: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1100F2A4: pop esi */
    esp = ebp; /* 0x1100F2A5: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1100F2A7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1100F2A8: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1100F2AB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100F2ABu);

L_1100F2AB:
    PUSH32(esp, 0); /* 0x1100F2AB: push 0 */
    RECOMP_CALL(sub_1100EEE8); /* 0x1100F2AD: call 0x1100eee8 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100F2B2: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100F2B3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100F2B3u);

L_1100F2B3:
    PUSH32(esp, ebp); /* 0x1100F2B3: push ebp */
    ebp = esp; /* 0x1100F2B4: mov ebp, esp */
    /* test MEM8(ebp + 0x8), 2 */ /* 0x1100F2B6: test byte ptr [ebp + 8], 2 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, esi); /* 0x1100F2BA: push esi */
    esi = ecx; /* 0x1100F2BB: mov esi, ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100F2E5; /* 0x1100F2BD: je 0x1100f2e5 */
L_1100F2BF:
    PUSH32(esp, edi); /* 0x1100F2BF: push edi */
    PUSH32(esp, 0x1100EFC5u); /* 0x1100F2C0: push 0x1100efc5 */
    edi = esi + (-0x4); /* 0x1100F2C5: lea edi, [esi - 4] */
    PUSH32(esp, MEM32(edi)); /* 0x1100F2C8: push dword ptr [edi] */
    PUSH32(esp, 0x44u); /* 0x1100F2CA: push 0x44 */
    PUSH32(esp, esi); /* 0x1100F2CC: push esi */
    RECOMP_CALL(sub_1103B132); /* 0x1100F2CD: call 0x1103b132 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1100F2D2: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100F2E0; /* 0x1100F2D6: je 0x1100f2e0 */
L_1100F2D8:
    PUSH32(esp, edi); /* 0x1100F2D8: push edi */
    RECOMP_ICALL(MEM32(0x110692DC)); /* 0x1100F2D9: call dword ptr [0x110692dc] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100F2DF: pop ecx */
L_1100F2E0:
    eax = edi; /* 0x1100F2E0: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1100F2E2: pop edi */
    goto L_1100F2FA; /* 0x1100F2E3: jmp 0x1100f2fa */
L_1100F2E5:
    RECOMP_CALL(sub_1100EFC5); /* 0x1100F2E5: call 0x1100efc5 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1100F2EA: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100F2F8; /* 0x1100F2EE: je 0x1100f2f8 */
L_1100F2F0:
    PUSH32(esp, esi); /* 0x1100F2F0: push esi */
    RECOMP_ICALL(MEM32(0x1106932C)); /* 0x1100F2F1: call dword ptr [0x1106932c] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100F2F7: pop ecx */
L_1100F2F8:
    eax = esi; /* 0x1100F2F8: mov eax, esi */
L_1100F2FA:
    esi = POP32_VAL(esp); /* 0x1100F2FA: pop esi */
    ebp = POP32_VAL(esp); /* 0x1100F2FB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100F2FC: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100F2FF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100F2FFu);

L_1100F2FF:
    PUSH32(esp, 0x38u); /* 0x1100F2FF: push 0x38 */
    eax = 0x1103CC49u; /* 0x1100F301: mov eax, 0x1103cc49 */
    RECOMP_CALL(sub_1103B372); /* 0x1100F306: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1100F30B: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x1100F30D: mov dword ptr [ebp - 0x10], esi */
    eax = MEM32(ebp + 0x8); /* 0x1100F310: mov eax, dword ptr [ebp + 8] */
    MEM32(esi + 0x4) = eax; /* 0x1100F313: mov dword ptr [esi + 4], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1100F316: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x44); /* 0x1100F31A: lea ecx, [ebp - 0x44] */
    PUSH32(esp, 0x110048B0u); /* 0x1100F31D: push 0x110048b0 */
    MEM32(esi) = 0x110015F0u; /* 0x1100F322: mov dword ptr [esi], 0x110015f0 */
    RECOMP_CALL(sub_1100DEDB); /* 0x1100F328: call 0x1100dedb */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x44); /* 0x1100F32D: lea eax, [ebp - 0x44] */
    ecx = esi; /* 0x1100F330: mov ecx, esi */
    PUSH32(esp, eax); /* 0x1100F332: push eax */
    RECOMP_CALL(sub_1100EFF0); /* 0x1100F333: call 0x1100eff0 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x44); /* 0x1100F338: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_1100DFF5); /* 0x1100F33B: call 0x1100dff5 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1100F340: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1100F342: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100F347: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100F34A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100F34Au);

L_1100F34A:
    PUSH32(esp, ebp); /* 0x1100F34A: push ebp */
    ebp = esp; /* 0x1100F34B: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x1100F34D: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x1100F350: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1100F351: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x1100F354: mov esi, ecx */
    MEM32(esi + 0x4) = eax; /* 0x1100F356: mov dword ptr [esi + 4], eax */
    MEM32(esi) = 0x110015F0u; /* 0x1100F359: mov dword ptr [esi], 0x110015f0 */
    RECOMP_CALL(sub_1100EFF0); /* 0x1100F35F: call 0x1100eff0 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1100F364: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1100F366: pop esi */
    ebp = POP32_VAL(esp); /* 0x1100F367: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1100F368: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1100F36B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100F36Bu);

L_1100F36B:
    PUSH32(esp, 0x38u); /* 0x1100F36B: push 0x38 */
    eax = 0x1103CC03u; /* 0x1100F36D: mov eax, 0x1103cc03 */
    RECOMP_CALL(sub_1103B372); /* 0x1100F372: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x8); /* 0x1100F377: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1100F37A: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = ebx; /* 0x1100F37C: mov dword ptr [ebp - 0x10], ebx */
    /* test edi, edi */ /* 0x1100F37F: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100F3D3; /* 0x1100F381: je 0x1100f3d3 */
L_1100F383:
    /* cmp MEM32(edi), ebx */ /* 0x1100F383: cmp dword ptr [edi], ebx */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1100F3D3; /* 0x1100F385: jne 0x1100f3d3 */
L_1100F387:
    PUSH32(esp, 0x44u); /* 0x1100F387: push 0x44 */
    RECOMP_ICALL(MEM32(0x11069330)); /* 0x1100F389: call dword ptr [0x11069330] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1100F38F: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x1100F391: pop ecx */
    MEM32(ebp + 0x8) = esi; /* 0x1100F392: mov dword ptr [ebp + 8], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(ebx);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & ebx; /* 0x1100F395: and dword ptr [ebp - 4], ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x1100F398: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100F3C2; /* 0x1100F39A: je 0x1100f3c2 */
L_1100F39C:
    ecx = MEM32(ebp + 0xC); /* 0x1100F39C: mov ecx, dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1100E47B); /* 0x1100F39F: call 0x1100e47b */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1100F3A4: push eax */
    ecx = ebp + (-0x44); /* 0x1100F3A5: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_1100DEDB); /* 0x1100F3A8: call 0x1100dedb */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0; /* 0x1100F3AD: and dword ptr [esi + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi; /* 0x1100F3B1: mov ecx, esi */
    PUSH32(esp, eax); /* 0x1100F3B3: push eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1100F3B4: inc ebx */
    _flag_k = FK_INC;
    MEM32(esi) = 0x110015F0u; /* 0x1100F3B5: mov dword ptr [esi], 0x110015f0 */
    RECOMP_CALL(sub_1100EFF0); /* 0x1100F3BB: call 0x1100eff0 */
    RECOMP_FLAGS_IN();
    goto L_1100F3C4; /* 0x1100F3C0: jmp 0x1100f3c4 */
L_1100F3C2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1100F3C2: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1100F3C4:
    MEM32(edi) = esi; /* 0x1100F3C4: mov dword ptr [edi], esi */
    /* test LO8(ebx), 1 */ /* 0x1100F3C6: test bl, 1 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100F3D3; /* 0x1100F3C9: je 0x1100f3d3 */
L_1100F3CB:
    ecx = ebp + (-0x44); /* 0x1100F3CB: lea ecx, [ebp - 0x44] */
    RECOMP_CALL(sub_1100DFF5); /* 0x1100F3CE: call 0x1100dff5 */
    RECOMP_FLAGS_IN();
L_1100F3D3:
    PUSH32(esp, 2); /* 0x1100F3D3: push 2 */
    eax = POP32_VAL(esp); /* 0x1100F3D5: pop eax */
    RECOMP_CALL(sub_1103B340); /* 0x1100F3D6: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100F3DB: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100F3DC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100F3DCu);

L_1100F3DC:
    PUSH32(esp, esi); /* 0x1100F3DC: push esi */
    esi = ecx; /* 0x1100F3DD: mov esi, ecx */
    /* cmp MEM32(esi + 0x10), 0 */ /* 0x1100F3DF: cmp dword ptr [esi + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi) = 0x110015F0u; /* 0x1100F3E3: mov dword ptr [esi], 0x110015f0 */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1100F3F5; /* 0x1100F3E9: je 0x1100f3f5 */
L_1100F3EB:
    PUSH32(esp, MEM32(esi + 0xC)); /* 0x1100F3EB: push dword ptr [esi + 0xc] */
    RECOMP_ICALL(MEM32(0x11069304)); /* 0x1100F3EE: call dword ptr [0x11069304] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100F3F4: pop ecx */
L_1100F3F5:
    PUSH32(esp, MEM32(esi + 0x14)); /* 0x1100F3F5: push dword ptr [esi + 0x14] */
    RECOMP_ICALL(MEM32(0x11069304)); /* 0x1100F3F8: call dword ptr [0x11069304] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100F3FE: pop ecx */
    MEM32(esi) = 0x110014CCu; /* 0x1100F3FF: mov dword ptr [esi], 0x110014cc */
    esi = POP32_VAL(esp); /* 0x1100F405: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100F406: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100F407(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100F407u);

L_1100F407:
    PUSH32(esp, 0); /* 0x1100F407: push 0 */
    RECOMP_CALL(sub_1100F2FF); /* 0x1100F409: call 0x1100f2ff */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100F40E: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100F40F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100F40Fu);

L_1100F40F:
    PUSH32(esp, ebp); /* 0x1100F40F: push ebp */
    ebp = esp; /* 0x1100F410: mov ebp, esp */
    /* test MEM8(ebp + 0x8), 2 */ /* 0x1100F412: test byte ptr [ebp + 8], 2 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, esi); /* 0x1100F416: push esi */
    esi = ecx; /* 0x1100F417: mov esi, ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100F441; /* 0x1100F419: je 0x1100f441 */
L_1100F41B:
    PUSH32(esp, edi); /* 0x1100F41B: push edi */
    PUSH32(esp, 0x1100F3DCu); /* 0x1100F41C: push 0x1100f3dc */
    edi = esi + (-0x4); /* 0x1100F421: lea edi, [esi - 4] */
    PUSH32(esp, MEM32(edi)); /* 0x1100F424: push dword ptr [edi] */
    PUSH32(esp, 0x44u); /* 0x1100F426: push 0x44 */
    PUSH32(esp, esi); /* 0x1100F428: push esi */
    RECOMP_CALL(sub_1103B132); /* 0x1100F429: call 0x1103b132 */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1100F42E: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100F43C; /* 0x1100F432: je 0x1100f43c */
L_1100F434:
    PUSH32(esp, edi); /* 0x1100F434: push edi */
    RECOMP_ICALL(MEM32(0x110692DC)); /* 0x1100F435: call dword ptr [0x110692dc] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100F43B: pop ecx */
L_1100F43C:
    eax = edi; /* 0x1100F43C: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1100F43E: pop edi */
    goto L_1100F456; /* 0x1100F43F: jmp 0x1100f456 */
L_1100F441:
    RECOMP_CALL(sub_1100F3DC); /* 0x1100F441: call 0x1100f3dc */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1100F446: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100F454; /* 0x1100F44A: je 0x1100f454 */
L_1100F44C:
    PUSH32(esp, esi); /* 0x1100F44C: push esi */
    RECOMP_ICALL(MEM32(0x1106932C)); /* 0x1100F44D: call dword ptr [0x1106932c] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100F453: pop ecx */
L_1100F454:
    eax = esi; /* 0x1100F454: mov eax, esi */
L_1100F456:
    esi = POP32_VAL(esp); /* 0x1100F456: pop esi */
    ebp = POP32_VAL(esp); /* 0x1100F457: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100F458: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100F45B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100F45Bu);

L_1100F45B:
    PUSH32(esp, ebp); /* 0x1100F45B: push ebp */
    ebp = esp; /* 0x1100F45C: mov ebp, esp */
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1100F45E: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, esi); /* 0x1100F462: push esi */
    esi = ecx; /* 0x1100F463: mov esi, ecx */
    MEM32(esi) = 0x11001630u; /* 0x1100F465: mov dword ptr [esi], 0x11001630 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100F475; /* 0x1100F46B: je 0x1100f475 */
L_1100F46D:
    PUSH32(esp, esi); /* 0x1100F46D: push esi */
    RECOMP_ICALL(MEM32(0x1106932C)); /* 0x1100F46E: call dword ptr [0x1106932c] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100F474: pop ecx */
L_1100F475:
    eax = esi; /* 0x1100F475: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1100F477: pop esi */
    ebp = POP32_VAL(esp); /* 0x1100F478: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100F479: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100F47C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100F47Cu);

L_1100F47C:
    PUSH32(esp, ebp); /* 0x1100F47C: push ebp */
    ebp = esp; /* 0x1100F47D: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1100F47F: push ecx */
    eax = MEM32(ecx + 0x4); /* 0x1100F480: mov eax, dword ptr [ecx + 4] */
    PUSH32(esp, MEM32(ecx)); /* 0x1100F483: push dword ptr [ecx] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1100F485: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = eax; /* 0x1100F489: mov ecx, eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1100F48B: push dword ptr [ebp + 8] */
    edx = MEM32(eax); /* 0x1100F48E: mov edx, dword ptr [eax] */
    RECOMP_ICALL(MEM32(edx + 0x8)); /* 0x1100F490: call dword ptr [edx + 8] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1100F493: mov eax, dword ptr [ebp + 8] */
    esp = ebp; /* 0x1100F496: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1100F498: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100F499: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100F49C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100F49Cu);

L_1100F49C:
    PUSH32(esp, ebp); /* 0x1100F49C: push ebp */
    ebp = esp; /* 0x1100F49D: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x1100F49F: mov edx, dword ptr [ebp + 8] */
    eax = MEM32(ecx + 0x4); /* 0x1100F4A2: mov eax, dword ptr [ecx + 4] */
    /* cmp eax, MEM32(edx + 0x4) */ /* 0x1100F4A5: cmp eax, dword ptr [edx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1100F4B5; /* 0x1100F4A8: jne 0x1100f4b5 */
L_1100F4AA:
    eax = MEM32(ecx); /* 0x1100F4AA: mov eax, dword ptr [ecx] */
    /* cmp eax, MEM32(edx) */ /* 0x1100F4AC: cmp eax, dword ptr [edx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1100F4B5; /* 0x1100F4AE: jne 0x1100f4b5 */
L_1100F4B0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1100F4B0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1100F4B2: inc eax */
    _flag_k = FK_INC;
    goto L_1100F4B7; /* 0x1100F4B3: jmp 0x1100f4b7 */
L_1100F4B5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1100F4B5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1100F4B7:
    ebp = POP32_VAL(esp); /* 0x1100F4B7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100F4B8: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100F4BB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100F4BBu);

L_1100F4BB:
    PUSH32(esp, ebp); /* 0x1100F4BB: push ebp */
    ebp = esp; /* 0x1100F4BC: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1100F4BE: mov eax, dword ptr [ebp + 8] */
    edx = MEM32(ebp + 0xC); /* 0x1100F4C1: mov edx, dword ptr [ebp + 0xc] */
    MEM32(eax) = edx; /* 0x1100F4C4: mov dword ptr [eax], edx */
    MEM32(eax + 0x4) = ecx; /* 0x1100F4C6: mov dword ptr [eax + 4], ecx */
    ebp = POP32_VAL(esp); /* 0x1100F4C9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1100F4CA: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1100F4CD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100F4CDu);

L_1100F4CD:
    PUSH32(esp, ebp); /* 0x1100F4CD: push ebp */
    ebp = esp; /* 0x1100F4CE: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1100F4D0: push ecx */
    PUSH32(esp, ecx); /* 0x1100F4D1: push ecx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1100F4D2: push dword ptr [ebp + 0xc] */
    eax = MEM32(ecx); /* 0x1100F4D5: mov eax, dword ptr [ecx] */
    edx = ebp + (-0x8); /* 0x1100F4D7: lea edx, [ebp - 8] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1100F4DA: push dword ptr [ebp + 8] */
    PUSH32(esp, edx); /* 0x1100F4DD: push edx */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x1100F4DE: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1100F4E1: mov ecx, eax */
    RECOMP_CALL(sub_1100F49C); /* 0x1100F4E3: call 0x1100f49c */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1100F4E8: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1100F4EA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1100F4EB: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1100F4EE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100F4EEu);

L_1100F4EE:
    PUSH32(esp, ebp); /* 0x1100F4EE: push ebp */
    ebp = esp; /* 0x1100F4EF: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1100F4F1: mov eax, dword ptr [ebp + 8] */
    /* cmp ecx, MEM32(eax + 0x4) */ /* 0x1100F4F4: cmp ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1100F505; /* 0x1100F4F7: jne 0x1100f505 */
L_1100F4F9:
    eax = MEM32(eax); /* 0x1100F4F9: mov eax, dword ptr [eax] */
    /* cmp eax, MEM32(ebp + 0xC) */ /* 0x1100F4FB: cmp eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1100F505; /* 0x1100F4FE: jne 0x1100f505 */
L_1100F500:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1100F500: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1100F502: inc eax */
    _flag_k = FK_INC;
    goto L_1100F507; /* 0x1100F503: jmp 0x1100f507 */
L_1100F505:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1100F505: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1100F507:
    ebp = POP32_VAL(esp); /* 0x1100F507: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1100F508: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1100F50B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100F50Bu);

L_1100F50B:
    PUSH32(esp, 0x20u); /* 0x1100F50B: push 0x20 */
    eax = 0x1103CC74u; /* 0x1100F50D: mov eax, 0x1103cc74 */
    RECOMP_CALL(sub_1103B3A5); /* 0x1100F512: call 0x1103b3a5 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0x8); /* 0x1100F517: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1100F51A: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x2C)) = ebx; /* 0x1100F51C: mov dword ptr [ebp - 0x2c], ebx */
    MEM32(ebp + (-0x4)) = ebx; /* 0x1100F51F: mov dword ptr [ebp - 4], ebx */
    /* cmp MEM32(ebp + 0x24), ebx */ /* 0x1100F522: cmp dword ptr [ebp + 0x24], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x24)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1100F53D; /* 0x1100F525: je 0x1100f53d */
L_1100F527:
    edi = 0x110048B8u; /* 0x1100F527: mov edi, 0x110048b8 */
    PUSH32(esp, edi); /* 0x1100F52C: push edi */
    RECOMP_CALL(sub_1100DE61); /* 0x1100F52D: call 0x1100de61 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100F532: pop ecx */
    PUSH32(esp, eax); /* 0x1100F533: push eax */
    PUSH32(esp, edi); /* 0x1100F534: push edi */
    ecx = ebp + 0x14; /* 0x1100F535: lea ecx, [ebp + 0x14] */
    RECOMP_CALL(sub_110104F9); /* 0x1100F538: call 0x110104f9 */
    RECOMP_FLAGS_IN();
L_1100F53D:
    eax = ebp + (-0x28); /* 0x1100F53D: lea eax, [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x1100F540: push eax */
    ecx = ebp + 0xC; /* 0x1100F541: lea ecx, [ebp + 0xc] */
    RECOMP_CALL(sub_1100F47C); /* 0x1100F544: call 0x1100f47c */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1100F549: push -1 */
    PUSH32(esp, ebx); /* 0x1100F54B: push ebx */
    PUSH32(esp, eax); /* 0x1100F54C: push eax */
    ecx = ebp + 0x14; /* 0x1100F54D: lea ecx, [ebp + 0x14] */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x1100F550: mov byte ptr [ebp - 4], 1 */
    RECOMP_CALL(sub_11010454); /* 0x1100F554: call 0x11010454 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x1100F559: push ebx */
    PUSH32(esp, 1); /* 0x1100F55A: push 1 */
    ecx = ebp + (-0x28); /* 0x1100F55C: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_11010630); /* 0x1100F55F: call 0x11010630 */
    RECOMP_FLAGS_IN();
    eax = ebp + 0x14; /* 0x1100F564: lea eax, [ebp + 0x14] */
    MEM32(esi + 0x14) = 0xFu; /* 0x1100F567: mov dword ptr [esi + 0x14], 0xf */
    MEM32(esi + 0x10) = ebx; /* 0x1100F56E: mov dword ptr [esi + 0x10], ebx */
    ecx = esi; /* 0x1100F571: mov ecx, esi */
    PUSH32(esp, eax); /* 0x1100F573: push eax */
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x1100F574: mov byte ptr [esi], bl */
    RECOMP_CALL(sub_11010405); /* 0x1100F576: call 0x11010405 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x1100F57B: push ebx */
    PUSH32(esp, 1); /* 0x1100F57C: push 1 */
    ecx = ebp + 0x14; /* 0x1100F57E: lea ecx, [ebp + 0x14] */
    RECOMP_CALL(sub_11010630); /* 0x1100F581: call 0x11010630 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1100F586: mov eax, esi */
    RECOMP_CALL(sub_1103B354); /* 0x1100F588: call 0x1103b354 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100F58D: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100F58E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100F58Eu);

L_1100F58E:
    PUSH32(esp, 0x20u); /* 0x1100F58E: push 0x20 */
    eax = 0x1103CCA1u; /* 0x1100F590: mov eax, 0x1103cca1 */
    RECOMP_CALL(sub_1103B3A5); /* 0x1100F595: call 0x1103b3a5 */
    RECOMP_FLAGS_IN();
    esi = ecx; /* 0x1100F59A: mov esi, ecx */
    eax = MEM32(ebp + 0x10); /* 0x1100F59C: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x1100F59F: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = esp; /* 0x1100F5A2: mov ecx, esp */
    PUSH32(esp, eax); /* 0x1100F5A4: push eax */
    RECOMP_CALL(sub_1101016B); /* 0x1100F5A5: call 0x1101016b */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1100F5AA: push dword ptr [ebp + 0xc] */
    eax = ebp + (-0x28); /* 0x1100F5AD: lea eax, [ebp - 0x28] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1100F5B0: push dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x1100F5B3: push eax */
    RECOMP_CALL(sub_1100F50B); /* 0x1100F5B4: call 0x1100f50b */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x24u; /* 0x1100F5B9: add esp, 0x24 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1100F5BC: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi; /* 0x1100F5C0: mov ecx, esi */
    PUSH32(esp, eax); /* 0x1100F5C2: push eax */
    RECOMP_CALL(sub_1100DE7E); /* 0x1100F5C3: call 0x1100de7e */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x1100F5C8: push 0 */
    PUSH32(esp, 1); /* 0x1100F5CA: push 1 */
    ecx = ebp + (-0x28); /* 0x1100F5CC: lea ecx, [ebp - 0x28] */
    RECOMP_CALL(sub_11010630); /* 0x1100F5CF: call 0x11010630 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x1100F5D4: mov ecx, dword ptr [ebp + 8] */
    eax = esi; /* 0x1100F5D7: mov eax, esi */
    MEM32(esi + 0xC) = ecx; /* 0x1100F5D9: mov dword ptr [esi + 0xc], ecx */
    ecx = MEM32(ebp + 0xC); /* 0x1100F5DC: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(esi) = 0x1100164Cu; /* 0x1100F5DF: mov dword ptr [esi], 0x1100164c */
    MEM32(esi + 0x10) = ecx; /* 0x1100F5E5: mov dword ptr [esi + 0x10], ecx */
    RECOMP_CALL(sub_1103B354); /* 0x1100F5E8: call 0x1103b354 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1100F5ED: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1100F5F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100F5F0u);

L_1100F5F0:
    PUSH32(esp, ebp); /* 0x1100F5F0: push ebp */
    ebp = esp; /* 0x1100F5F1: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x1100F5F3: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0xFFFFFFFFu); /* 0x1100F5F6: push -1 */
    PUSH32(esp, 0x1103CCCEu); /* 0x1100F5F8: push 0x1103ccce */
    eax = MEM32(FS_BASE + (0)); /* 0x1100F5FD: mov eax, dword ptr fs:[0] */
    PUSH32(esp, eax); /* 0x1100F603: push eax */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x1100F604: sub esp, 0x20 */
    _flag_k = FK_CMP;
    eax = MEM32(0x110631D0); /* 0x1100F607: mov eax, dword ptr [0x110631d0] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x1100F60C: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esp + 0x18) = eax; /* 0x1100F60E: mov dword ptr [esp + 0x18], eax */
    PUSH32(esp, esi); /* 0x1100F612: push esi */
    eax = MEM32(0x110631D0); /* 0x1100F613: mov eax, dword ptr [0x110631d0] */
    _flag_a = (uint32_t)((eax ^ esp)); _flag_b = (uint32_t)((eax ^ esp));
    eax = eax ^ esp; /* 0x1100F618: xor eax, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1100F61A: push eax */
    eax = esp + 0x28; /* 0x1100F61B: lea eax, [esp + 0x28] */
    MEM32(FS_BASE + (0)) = eax; /* 0x1100F61F: mov dword ptr fs:[0], eax */
    esi = ecx; /* 0x1100F625: mov esi, ecx */
    eax = MEM32(ebp + 0x10); /* 0x1100F627: mov eax, dword ptr [ebp + 0x10] */
    ecx = esp + 0x8; /* 0x1100F62A: lea ecx, [esp + 8] */
    PUSH32(esp, eax); /* 0x1100F62E: push eax */
    RECOMP_CALL(sub_11010191); /* 0x1100F62F: call 0x11010191 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esp + 0x30)); _flag_b = (uint32_t)(0);
    MEM32(esp + 0x30) = MEM32(esp + 0x30) & 0; /* 0x1100F634: and dword ptr [esp + 0x30], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esp + 0x8; /* 0x1100F639: lea eax, [esp + 8] */
    PUSH32(esp, eax); /* 0x1100F63D: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1100F63E: push dword ptr [ebp + 0xc] */
    ecx = esi; /* 0x1100F641: mov ecx, esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1100F643: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1100F58E); /* 0x1100F646: call 0x1100f58e */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x1100F64B: push 0 */
    PUSH32(esp, 1); /* 0x1100F64D: push 1 */
    ecx = esp + 0x10; /* 0x1100F64F: lea ecx, [esp + 0x10] */
    RECOMP_CALL(sub_11010630); /* 0x1100F653: call 0x11010630 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x11001658u; /* 0x1100F658: mov dword ptr [esi], 0x11001658 */
    eax = esi; /* 0x1100F65E: mov eax, esi */
    ecx = MEM32(esp + 0x28); /* 0x1100F660: mov ecx, dword ptr [esp + 0x28] */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1100F664: mov dword ptr fs:[0], ecx */
    ecx = POP32_VAL(esp); /* 0x1100F66B: pop ecx */
    esi = POP32_VAL(esp); /* 0x1100F66C: pop esi */
    ecx = MEM32(esp + 0x18); /* 0x1100F66D: mov ecx, dword ptr [esp + 0x18] */
    _flag_a = (uint32_t)((ecx ^ esp)); _flag_b = (uint32_t)((ecx ^ esp));
    ecx = ecx ^ esp; /* 0x1100F671: xor ecx, esp */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1100F673: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1100F678: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1100F67A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1100F67B: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1100F67E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100F67Eu);

L_1100F67E:
    eax = 0x110048BCu; /* 0x1100F67E: mov eax, 0x110048bc */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100F683: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100F684(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100F684u);

L_1100F684:
    PUSH32(esp, ebp); /* 0x1100F684: push ebp */
    ebp = esp; /* 0x1100F685: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1100F687: push ecx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1100F688: push dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1100F68B: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1102C9DC); /* 0x1100F68F: call 0x1102c9dc */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100F694: pop ecx */
    /* test eax, eax */ /* 0x1100F695: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1100F69E; /* 0x1100F697: jne 0x1100f69e */
L_1100F699:
    eax = 0x110048C4u; /* 0x1100F699: mov eax, 0x110048c4 */
L_1100F69E:
    ecx = MEM32(ebp + 0x8); /* 0x1100F69E: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x1100F6A1: push eax */
    RECOMP_CALL(sub_11010191); /* 0x1100F6A2: call 0x11010191 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1100F6A7: mov eax, dword ptr [ebp + 8] */
    esp = ebp; /* 0x1100F6AA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1100F6AC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1100F6AD: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1100F6B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100F6B0u);

L_1100F6B0:
    eax = 0x110048D4u; /* 0x1100F6B0: mov eax, 0x110048d4 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100F6B5: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100F6B6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100F6B6u);

L_1100F6B6:
    PUSH32(esp, ebp); /* 0x1100F6B6: push ebp */
    ebp = esp; /* 0x1100F6B7: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1100F6B9: push ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1100F6BA: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0xC), 1 */ /* 0x1100F6BE: cmp dword ptr [ebp + 0xc], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1100F6D3; /* 0x1100F6C2: jne 0x1100f6d3 */
L_1100F6C4:
    ecx = MEM32(ebp + 0x8); /* 0x1100F6C4: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, 0x110048E0u); /* 0x1100F6C7: push 0x110048e0 */
    RECOMP_CALL(sub_11010191); /* 0x1100F6CC: call 0x11010191 */
    RECOMP_FLAGS_IN();
    goto L_1100F6DE; /* 0x1100F6D1: jmp 0x1100f6de */
L_1100F6D3:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1100F6D3: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1100F6D6: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1100F684); /* 0x1100F6D9: call 0x1100f684 */
    RECOMP_FLAGS_IN();
L_1100F6DE:
    eax = MEM32(ebp + 0x8); /* 0x1100F6DE: mov eax, dword ptr [ebp + 8] */
    esp = ebp; /* 0x1100F6E1: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1100F6E3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1100F6E4: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1100F6E7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100F6E7u);

L_1100F6E7:
    eax = 0x110048F8u; /* 0x1100F6E7: mov eax, 0x110048f8 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100F6EC: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100F6ED(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100F6EDu);

L_1100F6ED:
    PUSH32(esp, ebp); /* 0x1100F6ED: push ebp */
    ebp = esp; /* 0x1100F6EE: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1100F6F0: push ecx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1100F6F1: push dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1100F6F4: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1102CA06); /* 0x1100F6F8: call 0x1102ca06 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100F6FD: pop ecx */
    /* test eax, eax */ /* 0x1100F6FE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1100F707; /* 0x1100F700: jne 0x1100f707 */
L_1100F702:
    eax = 0x110048C4u; /* 0x1100F702: mov eax, 0x110048c4 */
L_1100F707:
    ecx = MEM32(ebp + 0x8); /* 0x1100F707: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x1100F70A: push eax */
    RECOMP_CALL(sub_11010191); /* 0x1100F70B: call 0x11010191 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1100F710: mov eax, dword ptr [ebp + 8] */
    esp = ebp; /* 0x1100F713: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1100F715: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1100F716: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1100F719(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100F719u);

L_1100F719:
    PUSH32(esp, ebp); /* 0x1100F719: push ebp */
    ebp = esp; /* 0x1100F71A: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1100F71C: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1100F71D: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x1100F720: push esi */
    RECOMP_CALL(sub_1102C9DC); /* 0x1100F721: call 0x1102c9dc */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1100F726: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + 0x8); /* 0x1100F728: mov eax, dword ptr [ebp + 8] */
    ecx = POP32_VAL(esp); /* 0x1100F72B: pop ecx */
    MEM32(eax) = esi; /* 0x1100F72C: mov dword ptr [eax], esi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100F739; /* 0x1100F72E: je 0x1100f739 */
L_1100F730:
    MEM32(eax + 0x4) = 0x110631F0u; /* 0x1100F730: mov dword ptr [eax + 4], 0x110631f0 */
    goto L_1100F740; /* 0x1100F737: jmp 0x1100f740 */
L_1100F739:
    MEM32(eax + 0x4) = 0x110631ECu; /* 0x1100F739: mov dword ptr [eax + 4], 0x110631ec */
L_1100F740:
    esi = POP32_VAL(esp); /* 0x1100F740: pop esi */
    ebp = POP32_VAL(esp); /* 0x1100F741: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1100F742: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1100F745(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100F745u);

L_1100F745:
    PUSH32(esp, esi); /* 0x1100F745: push esi */
    esi = ecx; /* 0x1100F746: mov esi, ecx */
    PUSH32(esp, esi); /* 0x1100F748: push esi */
    RECOMP_CALL(sub_1102C409); /* 0x1100F749: call 0x1102c409 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100F74E: pop ecx */
    eax = esi; /* 0x1100F74F: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1100F751: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100F752: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100F753(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100F753u);

L_1100F753:
    PUSH32(esp, ecx); /* 0x1100F753: push ecx */
    RECOMP_CALL(sub_1102C424); /* 0x1100F754: call 0x1102c424 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100F759: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100F75A: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100F75B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100F75Bu);

L_1100F75B:
    /* test MEM8(ecx + 0xC), 6 */ /* 0x1100F75B: test byte ptr [ecx + 0xc], 6 */
    _flag_a = (uint32_t)(MEM8(ecx + 0xC)) << 24; _flag_b = (uint32_t)(6) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, 0); /* 0x1100F75F: push 0 */
    eax = POP32_VAL(esp); /* 0x1100F761: pop eax */
    SET_LO8(eax, (TEST_Z(_flag_a, _flag_b)) ? 1 : 0); /* 0x1100F762: sete al */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100F765: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100F766(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100F766u);

L_1100F766:
    /* test MEM8(ecx + 0xC), 6 */ /* 0x1100F766: test byte ptr [ecx + 0xc], 6 */
    _flag_a = (uint32_t)(MEM8(ecx + 0xC)) << 24; _flag_b = (uint32_t)(6) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, 0); /* 0x1100F76A: push 0 */
    eax = POP32_VAL(esp); /* 0x1100F76C: pop eax */
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1100F76D: setne al */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100F770: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100F771(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100F771u);

L_1100F771:
    PUSH32(esp, ebp); /* 0x1100F771: push ebp */
    ebp = esp; /* 0x1100F772: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF8u);
    esp = esp & 0xFFFFFFF8u; /* 0x1100F774: and esp, 0xfffffff8 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + 0x8); /* 0x1100F777: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x1100F77A: sub esp, 0x18 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    eax = eax & 0x17u; /* 0x1100F77D: and eax, 0x17 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx + 0xC) = eax; /* 0x1100F780: mov dword ptr [ecx + 0xc], eax */
    ecx = MEM32(ecx + 0x10); /* 0x1100F783: mov ecx, dword ptr [ecx + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    ecx = ecx & eax; /* 0x1100F786: and ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100F817; /* 0x1100F788: je 0x1100f817 */
L_1100F78E:
    /* cmp MEM8(ebp + 0xC), 0 */ /* 0x1100F78E: cmp byte ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1100F81D; /* 0x1100F792: jne 0x1100f81d */
L_1100F798:
    /* test LO8(ecx), 4 */ /* 0x1100F798: test cl, 4 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100F7C6; /* 0x1100F79B: je 0x1100f7c6 */
L_1100F79D:
    PUSH32(esp, 0x11004900u); /* 0x1100F79D: push 0x11004900 */
    PUSH32(esp, 0x110631F4u); /* 0x1100F7A2: push 0x110631f4 */
    PUSH32(esp, 1); /* 0x1100F7A7: push 1 */
    ecx = esp + 0x10; /* 0x1100F7A9: lea ecx, [esp + 0x10] */
    RECOMP_CALL(sub_1100F5F0); /* 0x1100F7AD: call 0x1100f5f0 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x4) = 0x110016B8u; /* 0x1100F7B2: mov dword ptr [esp + 4], 0x110016b8 */
    eax = esp + 0x4; /* 0x1100F7BA: lea eax, [esp + 4] */
    PUSH32(esp, 0x11045668u); /* 0x1100F7BE: push 0x11045668 */
L_1100F7C3:
    PUSH32(esp, eax); /* 0x1100F7C3: push eax */
    goto L_1100F821; /* 0x1100F7C4: jmp 0x1100f821 */
L_1100F7C6:
    /* test LO8(ecx), 2 */ /* 0x1100F7C6: test cl, 2 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ecx = esp + 0x4; /* 0x1100F7C9: lea ecx, [esp + 4] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100F7F3; /* 0x1100F7CD: je 0x1100f7f3 */
L_1100F7CF:
    PUSH32(esp, 0x11004918u); /* 0x1100F7CF: push 0x11004918 */
    PUSH32(esp, 0x110631F4u); /* 0x1100F7D4: push 0x110631f4 */
    PUSH32(esp, 1); /* 0x1100F7D9: push 1 */
    RECOMP_CALL(sub_1100F5F0); /* 0x1100F7DB: call 0x1100f5f0 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x4) = 0x110016B8u; /* 0x1100F7E0: mov dword ptr [esp + 4], 0x110016b8 */
    eax = esp + 0x4; /* 0x1100F7E8: lea eax, [esp + 4] */
    PUSH32(esp, 0x11045668u); /* 0x1100F7EC: push 0x11045668 */
    RECOMP_BACKEDGE();
    goto L_1100F7C3; /* 0x1100F7F1: jmp 0x1100f7c3 */
L_1100F7F3:
    PUSH32(esp, 0x11004930u); /* 0x1100F7F3: push 0x11004930 */
    PUSH32(esp, 0x110631F4u); /* 0x1100F7F8: push 0x110631f4 */
    PUSH32(esp, 1); /* 0x1100F7FD: push 1 */
    RECOMP_CALL(sub_1100F5F0); /* 0x1100F7FF: call 0x1100f5f0 */
    RECOMP_FLAGS_IN();
    MEM32(esp + 0x4) = 0x110016B8u; /* 0x1100F804: mov dword ptr [esp + 4], 0x110016b8 */
    eax = esp + 0x4; /* 0x1100F80C: lea eax, [esp + 4] */
    PUSH32(esp, 0x11045668u); /* 0x1100F810: push 0x11045668 */
    RECOMP_BACKEDGE();
    goto L_1100F7C3; /* 0x1100F815: jmp 0x1100f7c3 */
L_1100F817:
    esp = ebp; /* 0x1100F817: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1100F819: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1100F81A: ret 8 */
L_1100F81D:
    PUSH32(esp, 0); /* 0x1100F81D: push 0 */
    PUSH32(esp, 0); /* 0x1100F81F: push 0 */
L_1100F821:
    RECOMP_CALL(sub_1103B33A); /* 0x1100F821: call 0x1103b33a */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x1100F826u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1100F827(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100F827u);

L_1100F827:
    PUSH32(esp, ebp); /* 0x1100F827: push ebp */
    ebp = esp; /* 0x1100F828: mov ebp, esp */
    PUSH32(esp, 0); /* 0x1100F82A: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1100F82C: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1100F771); /* 0x1100F82F: call 0x1100f771 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1100F834: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100F835: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100F838(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100F838u);

L_1100F838:
    PUSH32(esp, ebp); /* 0x1100F838: push ebp */
    ebp = esp; /* 0x1100F839: mov ebp, esp */
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x1100F83B: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1100F850; /* 0x1100F83F: je 0x1100f850 */
L_1100F841:
    eax = MEM32(ecx + 0xC); /* 0x1100F841: mov eax, dword ptr [ecx + 0xc] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1100F844: push dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)((eax | MEM32(ebp + 0x8))); _flag_b = (uint32_t)((eax | MEM32(ebp + 0x8)));
    eax = eax | MEM32(ebp + 0x8); /* 0x1100F847: or eax, dword ptr [ebp + 8] */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x1100F84A: push eax */
    RECOMP_CALL(sub_1100F771); /* 0x1100F84B: call 0x1100f771 */
    RECOMP_FLAGS_IN();
L_1100F850:
    ebp = POP32_VAL(esp); /* 0x1100F850: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1100F851: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1100F854(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100F854u);

L_1100F854:
    PUSH32(esp, ebp); /* 0x1100F854: push ebp */
    ebp = esp; /* 0x1100F855: mov ebp, esp */
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x1100F857: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1100F86B; /* 0x1100F85B: je 0x1100f86b */
L_1100F85D:
    eax = MEM32(ecx + 0xC); /* 0x1100F85D: mov eax, dword ptr [ecx + 0xc] */
    _flag_a = (uint32_t)((eax | MEM32(ebp + 0x8))); _flag_b = (uint32_t)((eax | MEM32(ebp + 0x8)));
    eax = eax | MEM32(ebp + 0x8); /* 0x1100F860: or eax, dword ptr [ebp + 8] */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0); /* 0x1100F863: push 0 */
    PUSH32(esp, eax); /* 0x1100F865: push eax */
    RECOMP_CALL(sub_1100F771); /* 0x1100F866: call 0x1100f771 */
    RECOMP_FLAGS_IN();
L_1100F86B:
    ebp = POP32_VAL(esp); /* 0x1100F86B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100F86C: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100F86F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100F86Fu);

L_1100F86F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1100F86F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ecx + 0xC), eax */ /* 0x1100F871: cmp dword ptr [ecx + 0xc], eax */
    _flag_a = (uint32_t)(MEM32(ecx + 0xC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x1100F874: sete al */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100F877: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100F878(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100F878u);

L_1100F878:
    eax = MEM32(ecx + 0xC); /* 0x1100F878: mov eax, dword ptr [ecx + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x1100F87B: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100F87E: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100F87F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100F87Fu);

L_1100F87F:
    eax = MEM32(ecx + 0xC); /* 0x1100F87F: mov eax, dword ptr [ecx + 0xc] */
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x1100F882: shr eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 2u; /* 0x1100F882: shr eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x1100F885: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100F888: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100F889(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100F889u);

L_1100F889:
    eax = MEM32(ecx + 0x10); /* 0x1100F889: mov eax, dword ptr [ecx + 0x10] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100F88C: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100F88D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100F88Du);

L_1100F88D:
    PUSH32(esp, ebp); /* 0x1100F88D: push ebp */
    ebp = esp; /* 0x1100F88E: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1100F890: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, 0); /* 0x1100F893: push 0 */
    PUSH32(esp, MEM32(ecx + 0xC)); /* 0x1100F895: push dword ptr [ecx + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x17u);
    eax = eax & 0x17u; /* 0x1100F898: and eax, 0x17 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx + 0x10) = eax; /* 0x1100F89B: mov dword ptr [ecx + 0x10], eax */
    RECOMP_CALL(sub_1100F771); /* 0x1100F89E: call 0x1100f771 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1100F8A3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100F8A4: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100F8A7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100F8A7u);

L_1100F8A7:
    eax = MEM32(ecx + 0x14); /* 0x1100F8A7: mov eax, dword ptr [ecx + 0x14] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100F8AA: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100F8AB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100F8ABu);

L_1100F8AB:
    PUSH32(esp, ebp); /* 0x1100F8AB: push ebp */
    ebp = esp; /* 0x1100F8AC: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x1100F8AE: mov edx, dword ptr [ebp + 8] */
    eax = MEM32(ecx + 0x14); /* 0x1100F8B1: mov eax, dword ptr [ecx + 0x14] */
    edx = (uint32_t)LO16(edx); /* 0x1100F8B4: movzx edx, dx */
    MEM32(ecx + 0x14) = edx; /* 0x1100F8B7: mov dword ptr [ecx + 0x14], edx */
    ebp = POP32_VAL(esp); /* 0x1100F8BA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100F8BB: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100F8BE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100F8BEu);

L_1100F8BE:
    PUSH32(esp, ebp); /* 0x1100F8BE: push ebp */
    ebp = esp; /* 0x1100F8BF: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x1100F8C1: mov edx, dword ptr [ebp + 8] */
    eax = MEM32(ecx + 0x14); /* 0x1100F8C4: mov eax, dword ptr [ecx + 0x14] */
    edx = (uint32_t)LO16(edx); /* 0x1100F8C7: movzx edx, dx */
    _flag_a = (uint32_t)((edx | eax)); _flag_b = (uint32_t)((edx | eax));
    edx = edx | eax; /* 0x1100F8CA: or edx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx + 0x14) = edx; /* 0x1100F8CC: mov dword ptr [ecx + 0x14], edx */
    ebp = POP32_VAL(esp); /* 0x1100F8CF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100F8D0: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100F8D3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100F8D3u);

L_1100F8D3:
    PUSH32(esp, ebp); /* 0x1100F8D3: push ebp */
    ebp = esp; /* 0x1100F8D4: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x1100F8D6: mov edx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    edx = edx & MEM32(ebp + 0xC); /* 0x1100F8D9: and edx, dword ptr [ebp + 0xc] */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx + 0x14); /* 0x1100F8DC: mov eax, dword ptr [ecx + 0x14] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFu);
    edx = edx & 0xFFFFu; /* 0x1100F8DF: and edx, 0xffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x1100F8E5: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1100F8E6: mov esi, dword ptr [ebp + 0xc] */
    esi = ~esi; /* 0x1100F8E9: not esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    esi = esi & eax; /* 0x1100F8EB: and esi, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((esi | edx)); _flag_b = (uint32_t)((esi | edx));
    esi = esi | edx; /* 0x1100F8ED: or esi, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx + 0x14) = esi; /* 0x1100F8EF: mov dword ptr [ecx + 0x14], esi */
    esi = POP32_VAL(esp); /* 0x1100F8F2: pop esi */
    ebp = POP32_VAL(esp); /* 0x1100F8F3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1100F8F4: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1100F8F7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100F8F7u);

L_1100F8F7:
    PUSH32(esp, ebp); /* 0x1100F8F7: push ebp */
    ebp = esp; /* 0x1100F8F8: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1100F8FA: mov eax, dword ptr [ebp + 8] */
    eax = ~eax; /* 0x1100F8FD: not eax */
    _flag_a = (uint32_t)(MEM32(ecx + 0x14)); _flag_b = (uint32_t)(eax);
    MEM32(ecx + 0x14) = MEM32(ecx + 0x14) & eax; /* 0x1100F8FF: and dword ptr [ecx + 0x14], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1100F902: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100F903: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100F906(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100F906u);

L_1100F906:
    eax = MEM32(ecx + 0x18); /* 0x1100F906: mov eax, dword ptr [ecx + 0x18] */
    edx = MEM32(ecx + 0x1C); /* 0x1100F909: mov edx, dword ptr [ecx + 0x1c] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100F90C: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100F90D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100F90Du);

L_1100F90D:
    PUSH32(esp, ebp); /* 0x1100F90D: push ebp */
    ebp = esp; /* 0x1100F90E: mov ebp, esp */
    eax = MEM32(ecx + 0x18); /* 0x1100F910: mov eax, dword ptr [ecx + 0x18] */
    edx = MEM32(ecx + 0x1C); /* 0x1100F913: mov edx, dword ptr [ecx + 0x1c] */
    PUSH32(esp, esi); /* 0x1100F916: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1100F917: mov esi, dword ptr [ebp + 8] */
    MEM32(ecx + 0x18) = esi; /* 0x1100F91A: mov dword ptr [ecx + 0x18], esi */
    esi = MEM32(ebp + 0xC); /* 0x1100F91D: mov esi, dword ptr [ebp + 0xc] */
    MEM32(ecx + 0x1C) = esi; /* 0x1100F920: mov dword ptr [ecx + 0x1c], esi */
    esi = POP32_VAL(esp); /* 0x1100F923: pop esi */
    ebp = POP32_VAL(esp); /* 0x1100F924: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1100F925: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1100F928(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100F928u);

L_1100F928:
    eax = MEM32(ecx + 0x20); /* 0x1100F928: mov eax, dword ptr [ecx + 0x20] */
    edx = MEM32(ecx + 0x24); /* 0x1100F92B: mov edx, dword ptr [ecx + 0x24] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100F92E: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100F92F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100F92Fu);

L_1100F92F:
    PUSH32(esp, ebp); /* 0x1100F92F: push ebp */
    ebp = esp; /* 0x1100F930: mov ebp, esp */
    eax = MEM32(ecx + 0x20); /* 0x1100F932: mov eax, dword ptr [ecx + 0x20] */
    edx = MEM32(ecx + 0x24); /* 0x1100F935: mov edx, dword ptr [ecx + 0x24] */
    PUSH32(esp, esi); /* 0x1100F938: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1100F939: mov esi, dword ptr [ebp + 8] */
    MEM32(ecx + 0x20) = esi; /* 0x1100F93C: mov dword ptr [ecx + 0x20], esi */
    esi = MEM32(ebp + 0xC); /* 0x1100F93F: mov esi, dword ptr [ebp + 0xc] */
    MEM32(ecx + 0x24) = esi; /* 0x1100F942: mov dword ptr [ecx + 0x24], esi */
    esi = POP32_VAL(esp); /* 0x1100F945: pop esi */
    ebp = POP32_VAL(esp); /* 0x1100F946: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1100F947: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1100F94A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100F94Au);

L_1100F94A:
    PUSH32(esp, ebp); /* 0x1100F94A: push ebp */
    ebp = esp; /* 0x1100F94B: mov ebp, esp */
    eax = MEM32(ecx + 0x30); /* 0x1100F94D: mov eax, dword ptr [ecx + 0x30] */
    PUSH32(esp, esi); /* 0x1100F950: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1100F951: mov esi, dword ptr [ebp + 8] */
    ecx = MEM32(eax); /* 0x1100F954: mov ecx, dword ptr [eax] */
    MEM32(esi) = ecx; /* 0x1100F956: mov dword ptr [esi], ecx */
    edx = MEM32(ecx); /* 0x1100F958: mov edx, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(edx + 0x4)); /* 0x1100F95A: call dword ptr [edx + 4] */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1100F95D: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1100F95F: pop esi */
    ebp = POP32_VAL(esp); /* 0x1100F960: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100F961: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100F964(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100F964u);

L_1100F964:
    PUSH32(esp, 4); /* 0x1100F964: push 4 */
    eax = 0x1103CD0Fu; /* 0x1100F966: mov eax, 0x1103cd0f */
    RECOMP_CALL(sub_1103B372); /* 0x1100F96B: call 0x1103b372 */
    RECOMP_FLAGS_IN();
    edi = ecx; /* 0x1100F970: mov edi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1100F972: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ebx; /* 0x1100F974: mov dword ptr [ebp - 4], ebx */
    MEM32(ebp + (-0x10)) = ebx; /* 0x1100F977: mov dword ptr [ebp - 0x10], ebx */
    eax = MEM32(edi + 0x30); /* 0x1100F97A: mov eax, dword ptr [edi + 0x30] */
    esi = MEM32(ebp + 0x8); /* 0x1100F97D: mov esi, dword ptr [ebp + 8] */
    ecx = MEM32(eax); /* 0x1100F980: mov ecx, dword ptr [eax] */
    MEM32(esi) = ecx; /* 0x1100F982: mov dword ptr [esi], ecx */
    eax = MEM32(ecx); /* 0x1100F984: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1100F986: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1100F989: push dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x4)) = ebx; /* 0x1100F98C: mov dword ptr [ebp - 4], ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1100F98F: inc ebx */
    _flag_k = FK_INC;
    ecx = MEM32(edi + 0x30); /* 0x1100F990: mov ecx, dword ptr [edi + 0x30] */
    MEM32(ebp + (-0x10)) = ebx; /* 0x1100F993: mov dword ptr [ebp - 0x10], ebx */
    RECOMP_CALL(sub_1100E449); /* 0x1100F996: call 0x1100e449 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x1100F99B: push ebx */
    ecx = edi; /* 0x1100F99C: mov ecx, edi */
    RECOMP_CALL(sub_1100FC0E); /* 0x1100F99E: call 0x1100fc0e */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1100F9A3: mov eax, esi */
    RECOMP_CALL(sub_1103B340); /* 0x1100F9A5: call 0x1103b340 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1100F9AA: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1100F9AD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100F9ADu);

L_1100F9AD:
    PUSH32(esp, ebp); /* 0x1100F9AD: push ebp */
    ebp = esp; /* 0x1100F9AE: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1100F9B0: push ecx */
    PUSH32(esp, esi); /* 0x1100F9B1: push esi */
    PUSH32(esp, 2); /* 0x1100F9B2: push 2 */
    ecx = ebp + (-0x4); /* 0x1100F9B4: lea ecx, [ebp - 4] */
    RECOMP_CALL(sub_1102FE81); /* 0x1100F9B7: call 0x1102fe81 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x11068A9C); /* 0x1100F9BC: mov ecx, dword ptr [0x11068a9c] */
    esi = ecx; /* 0x1100F9C2: mov esi, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1100F9C4: inc ecx */
    _flag_k = FK_INC;
    MEM32(0x11068A9C) = ecx; /* 0x1100F9C5: mov dword ptr [0x11068a9c], ecx */
    ecx = ebp + (-0x4); /* 0x1100F9CB: lea ecx, [ebp - 4] */
    RECOMP_CALL(sub_1102FEC6); /* 0x1100F9CE: call 0x1102fec6 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1100F9D3: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1100F9D5: pop esi */
    esp = ebp; /* 0x1100F9D6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1100F9D8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1100F9D9: ret  */
    RECOMP_REGS_OUT();
}

void sub_1100F9DA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100F9DAu);

L_1100F9DA:
    PUSH32(esp, ebp); /* 0x1100F9DA: push ebp */
    ebp = esp; /* 0x1100F9DB: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1100F9DD: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1100FC33); /* 0x1100F9E0: call 0x1100fc33 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x1100F9E5: add eax, 8 */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1100F9E8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100F9E9: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100F9EC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100F9ECu);

L_1100F9EC:
    PUSH32(esp, ebp); /* 0x1100F9EC: push ebp */
    ebp = esp; /* 0x1100F9ED: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1100F9EF: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1100FC33); /* 0x1100F9F2: call 0x1100fc33 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x1100F9F7: add eax, 0xc */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x1100F9FA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1100F9FB: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1100F9FE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1100F9FEu);

L_1100F9FE:
    PUSH32(esp, ebp); /* 0x1100F9FE: push ebp */
    ebp = esp; /* 0x1100F9FF: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1100FA01: push esi */
    PUSH32(esp, 0xCu); /* 0x1100FA02: push 0xc */
    esi = ecx; /* 0x1100FA04: mov esi, ecx */
    RECOMP_ICALL(MEM32(0x11069330)); /* 0x1100FA06: call dword ptr [0x11069330] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1100FA0C: pop ecx */
    /* test eax, eax */ /* 0x1100FA0D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1100FA24; /* 0x1100FA0F: je 0x1100fa24 */
L_1100FA11:
    edx = MEM32(esi + 0x2C); /* 0x1100FA11: mov edx, dword ptr [esi + 0x2c] */
    ecx = MEM32(ebp + 0xC); /* 0x1100FA14: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(eax + 0x4) = ecx; /* 0x1100FA17: mov dword ptr [eax + 4], ecx */
    ecx = MEM32(ebp + 0x8); /* 0x1100FA1A: mov ecx, dword ptr [ebp + 8] */
    MEM32(eax) = edx; /* 0x1100FA1D: mov dword ptr [eax], edx */
    MEM32(eax + 0x8) = ecx; /* 0x1100FA1F: mov dword ptr [eax + 8], ecx */
    goto L_1100FA26; /* 0x1100FA22: jmp 0x1100fa26 */
L_1100FA24:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1100FA24: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1100FA26:
    MEM32(esi + 0x2C) = eax; /* 0x1100FA26: mov dword ptr [esi + 0x2c], eax */
    esi = POP32_VAL(esp); /* 0x1100FA29: pop esi */
    ebp = POP32_VAL(esp); /* 0x1100FA2A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1100FA2B: ret 8 */
    RECOMP_REGS_OUT();
}
