#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_0078E9B8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078E9B8u);

L_0078E9B8:
    ecx = MEM32(ebp + (-0x18)); /* 0x0078E9B8: mov ecx, dword ptr [ebp - 0x18] */
    goto L_0040A000; /* 0x0078E9BB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078E9C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078E9C0u);

    goto L_0078E9C0;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0078E9C0:
    edx = MEM32(esp + 0x8); /* 0x0078E9C0: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0078E9C4: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x24)); /* 0x0078E9C7: mov ecx, dword ptr [edx - 0x24] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0078E9CA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0078E9CC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00819AD8u; /* 0x0078E9D1: mov eax, 0x819ad8 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0078E9D6: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0078E9E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078E9E0u);

L_0078E9E0:
    ecx = MEM32(ebp + (-0x14)); /* 0x0078E9E0: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040A000; /* 0x0078E9E3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078E9E8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078E9E8u);

L_0078E9E8:
    ecx = MEM32(ebp + (-0x18)); /* 0x0078E9E8: mov ecx, dword ptr [ebp - 0x18] */
    goto L_0040A000; /* 0x0078E9EB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078E9F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078E9F0u);

    goto L_0078E9F0;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0078E9F0:
    edx = MEM32(esp + 0x8); /* 0x0078E9F0: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0x5C); /* 0x0078E9F4: lea eax, [edx - 0x5c] */
    ecx = MEM32(edx + (-0x60)); /* 0x0078E9F7: mov ecx, dword ptr [edx - 0x60] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0078E9FA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0078E9FC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00819B1Cu; /* 0x0078EA01: mov eax, 0x819b1c */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0078EA06: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0078EA10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078EA10u);

L_0078EA10:
    eax = MEM32(ebp + (-0x24)); /* 0x0078EA10: mov eax, dword ptr [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x0078EA13: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x0078EA14: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0078EA1A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0078EA1B: ret  */
    RECOMP_REGS_OUT();
}

void sub_0078EA1C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078EA1Cu);

L_0078EA1C:
    ecx = MEM32(ebp + (-0x20)); /* 0x0078EA1C: mov ecx, dword ptr [ebp - 0x20] */
    goto L_0040A000; /* 0x0078EA1F: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078EA24(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078EA24u);

L_0078EA24:
    ecx = MEM32(ebp + (-0x24)); /* 0x0078EA24: mov ecx, dword ptr [ebp - 0x24] */
    goto L_0040A000; /* 0x0078EA27: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078EA2C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078EA2Cu);

    goto L_0078EA2C;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0078EA2C:
    edx = MEM32(esp + 0x8); /* 0x0078EA2C: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0x24); /* 0x0078EA30: lea eax, [edx - 0x24] */
    ecx = MEM32(edx + (-0x28)); /* 0x0078EA33: mov ecx, dword ptr [edx - 0x28] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0078EA36: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0078EA38: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00819B50u; /* 0x0078EA3D: mov eax, 0x819b50 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0078EA42: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0078EA50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078EA50u);

L_0078EA50:
    ecx = ebp + (-0x2C); /* 0x0078EA50: lea ecx, [ebp - 0x2c] */
    goto L_0040A000; /* 0x0078EA53: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078EA58(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078EA58u);

    goto L_0078EA58;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0078EA58:
    edx = MEM32(esp + 0x8); /* 0x0078EA58: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0x3C); /* 0x0078EA5C: lea eax, [edx - 0x3c] */
    ecx = MEM32(edx + (-0x40)); /* 0x0078EA5F: mov ecx, dword ptr [edx - 0x40] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0078EA62: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0078EA64: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x0078EA69: add eax, 8 */
    _flag_k = FK_ADD;
    ecx = MEM32(edx + (-0x8)); /* 0x0078EA6C: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0078EA6F: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0078EA71: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00819BD0u; /* 0x0078EA76: mov eax, 0x819bd0 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0078EA7B: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0078EA80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078EA80u);

L_0078EA80:
    ecx = ebp + 0x8; /* 0x0078EA80: lea ecx, [ebp + 8] */
    goto L_0040A000; /* 0x0078EA83: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078EA88(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078EA88u);

L_0078EA88:
    ecx = ebp + (-0x28); /* 0x0078EA88: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x0078EA8B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078EA90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078EA90u);

L_0078EA90:
    eax = MEM32(ebp + (-0x34)); /* 0x0078EA90: mov eax, dword ptr [ebp - 0x34] */
    PUSH32(esp, eax); /* 0x0078EA93: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x0078EA94: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0078EA9A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0078EA9B: ret  */
    RECOMP_REGS_OUT();
}

void sub_0078EA9C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078EA9Cu);

L_0078EA9C:
    ecx = ebp + (-0x28); /* 0x0078EA9C: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x0078EA9F: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078EAA4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078EAA4u);

L_0078EAA4:
    eax = MEM32(ebp + (-0x38)); /* 0x0078EAA4: mov eax, dword ptr [ebp - 0x38] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x0078EAA7: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0078EABC; /* 0x0078EAAA: je 0x78eabc */
L_0078EAB0:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x38))); _flag_b = (uint32_t)(0xFFFFFFFEu);
    MEM32(ebp + (-0x38)) = MEM32(ebp + (-0x38)) & 0xFFFFFFFEu; /* 0x0078EAB0: and dword ptr [ebp - 0x38], 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0x3C)); /* 0x0078EAB4: mov ecx, dword ptr [ebp - 0x3c] */
    goto L_0040A000; /* 0x0078EAB7: jmp 0x40a000 */
L_0078EABC:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0078EABC: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078EABD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078EABDu);

    goto L_0078EABD;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0078EABD:
    edx = MEM32(esp + 0x8); /* 0x0078EABD: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0078EAC1: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x44)); /* 0x0078EAC4: mov ecx, dword ptr [edx - 0x44] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0078EAC7: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0078EAC9: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x0078EACE: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0078EAD1: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0078EAD3: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00819BFCu; /* 0x0078EAD8: mov eax, 0x819bfc */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0078EADD: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0078EAF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078EAF0u);

L_0078EAF0:
    ecx = ebp + 0x8; /* 0x0078EAF0: lea ecx, [ebp + 8] */
    goto L_0040A000; /* 0x0078EAF3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078EAF8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078EAF8u);

L_0078EAF8:
    ecx = ebp + (-0x28); /* 0x0078EAF8: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x0078EAFB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078EB00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078EB00u);

L_0078EB00:
    eax = MEM32(ebp + (-0x2C)); /* 0x0078EB00: mov eax, dword ptr [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x0078EB03: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x0078EB04: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0078EB0A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0078EB0B: ret  */
    RECOMP_REGS_OUT();
}

void sub_0078EB0C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078EB0Cu);

L_0078EB0C:
    ecx = ebp + (-0x28); /* 0x0078EB0C: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x0078EB0F: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078EB14(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078EB14u);

    goto L_0078EB14;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0078EB14:
    edx = MEM32(esp + 0x8); /* 0x0078EB14: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0078EB18: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x34)); /* 0x0078EB1B: mov ecx, dword ptr [edx - 0x34] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0078EB1E: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0078EB20: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x0078EB25: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0078EB28: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0078EB2A: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00819C48u; /* 0x0078EB2F: mov eax, 0x819c48 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0078EB34: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0078EB40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078EB40u);

L_0078EB40:
    ecx = ebp + 0x30; /* 0x0078EB40: lea ecx, [ebp + 0x30] */
    goto L_0040A000; /* 0x0078EB43: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078EB48(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078EB48u);

L_0078EB48:
    ecx = ebp + 0x18; /* 0x0078EB48: lea ecx, [ebp + 0x18] */
    goto L_0040A000; /* 0x0078EB4B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078EB50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078EB50u);

L_0078EB50:
    ecx = MEM32(ebp + (-0x4C)); /* 0x0078EB50: mov ecx, dword ptr [ebp - 0x4c] */
    goto L_0063E070; /* 0x0078EB53: jmp 0x63e070 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0063E070: RECOMP_ITAIL(0x0063E070u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078EB58(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078EB58u);

L_0078EB58:
    ecx = MEM32(ebp + (-0x4C)); /* 0x0078EB58: mov ecx, dword ptr [ebp - 0x4c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x950u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x950u; /* 0x0078EB5B: add ecx, 0x950 */
    _flag_k = FK_ADD;
    goto L_0040A000; /* 0x0078EB61: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078EB66(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078EB66u);

L_0078EB66:
    ecx = ebp + (-0x40); /* 0x0078EB66: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x0078EB69: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078EB6E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078EB6Eu);

L_0078EB6E:
    ecx = ebp + (-0x28); /* 0x0078EB6E: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x0078EB71: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078EB76(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078EB76u);

L_0078EB76:
    ecx = ebp + (-0x40); /* 0x0078EB76: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x0078EB79: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078EB7E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078EB7Eu);

L_0078EB7E:
    ecx = ebp + (-0x28); /* 0x0078EB7E: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x0078EB81: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078EB86(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078EB86u);

L_0078EB86:
    ecx = ebp + (-0x40); /* 0x0078EB86: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x0078EB89: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078EB8E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078EB8Eu);

L_0078EB8E:
    ecx = ebp + (-0x28); /* 0x0078EB8E: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x0078EB91: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078EB96(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078EB96u);

L_0078EB96:
    ecx = MEM32(ebp + (-0x48)); /* 0x0078EB96: mov ecx, dword ptr [ebp - 0x48] */
    goto L_0040A000; /* 0x0078EB99: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078EB9E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078EB9Eu);

L_0078EB9E:
    ecx = MEM32(ebp + (-0x44)); /* 0x0078EB9E: mov ecx, dword ptr [ebp - 0x44] */
    goto L_0040A000; /* 0x0078EBA1: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078EBA6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078EBA6u);

L_0078EBA6:
    ecx = MEM32(ebp + (-0x44)); /* 0x0078EBA6: mov ecx, dword ptr [ebp - 0x44] */
    goto L_0040A000; /* 0x0078EBA9: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078EBAE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078EBAEu);

L_0078EBAE:
    ecx = MEM32(ebp + (-0x48)); /* 0x0078EBAE: mov ecx, dword ptr [ebp - 0x48] */
    goto L_0040A000; /* 0x0078EBB1: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078EBB6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078EBB6u);

L_0078EBB6:
    ecx = MEM32(ebp + (-0x44)); /* 0x0078EBB6: mov ecx, dword ptr [ebp - 0x44] */
    goto L_0040A000; /* 0x0078EBB9: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078EBBE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078EBBEu);

L_0078EBBE:
    ecx = MEM32(ebp + (-0x44)); /* 0x0078EBBE: mov ecx, dword ptr [ebp - 0x44] */
    goto L_0040A000; /* 0x0078EBC1: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078EBC6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078EBC6u);

L_0078EBC6:
    ecx = MEM32(ebp + (-0x48)); /* 0x0078EBC6: mov ecx, dword ptr [ebp - 0x48] */
    goto L_0040A000; /* 0x0078EBC9: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078EBCE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078EBCEu);

    goto L_0078EBCE;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0078EBCE:
    edx = MEM32(esp + 0x8); /* 0x0078EBCE: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0078EBD2: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x54)); /* 0x0078EBD5: mov ecx, dword ptr [edx - 0x54] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0078EBD8: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0078EBDA: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x0078EBDF: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0078EBE2: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0078EBE4: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00819C90u; /* 0x0078EBE9: mov eax, 0x819c90 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0078EBEE: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0078EC00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078EC00u);

L_0078EC00:
    ecx = ebp + 0x50; /* 0x0078EC00: lea ecx, [ebp + 0x50] */
    goto L_0040A000; /* 0x0078EC03: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078EC08(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078EC08u);

L_0078EC08:
    ecx = ebp + 0x38; /* 0x0078EC08: lea ecx, [ebp + 0x38] */
    goto L_0040A000; /* 0x0078EC0B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078EC10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078EC10u);

L_0078EC10:
    ecx = ebp + 0x20; /* 0x0078EC10: lea ecx, [ebp + 0x20] */
    goto L_0040A000; /* 0x0078EC13: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078EC18(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078EC18u);

L_0078EC18:
    ecx = MEM32(ebp + (-0x4C)); /* 0x0078EC18: mov ecx, dword ptr [ebp - 0x4c] */
    goto L_0063E070; /* 0x0078EC1B: jmp 0x63e070 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0063E070: RECOMP_ITAIL(0x0063E070u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078EC20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078EC20u);

L_0078EC20:
    ecx = MEM32(ebp + (-0x4C)); /* 0x0078EC20: mov ecx, dword ptr [ebp - 0x4c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x950u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x950u; /* 0x0078EC23: add ecx, 0x950 */
    _flag_k = FK_ADD;
    goto L_0040A000; /* 0x0078EC29: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078EC2E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078EC2Eu);

L_0078EC2E:
    ecx = ebp + (-0x40); /* 0x0078EC2E: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x0078EC31: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078EC36(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078EC36u);

L_0078EC36:
    ecx = ebp + (-0x28); /* 0x0078EC36: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x0078EC39: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078EC3E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078EC3Eu);

L_0078EC3E:
    ecx = ebp + (-0x40); /* 0x0078EC3E: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x0078EC41: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078EC46(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078EC46u);

L_0078EC46:
    ecx = ebp + (-0x28); /* 0x0078EC46: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x0078EC49: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078EC4E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078EC4Eu);

L_0078EC4E:
    ecx = ebp + (-0x40); /* 0x0078EC4E: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x0078EC51: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078EC56(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078EC56u);

L_0078EC56:
    ecx = ebp + (-0x28); /* 0x0078EC56: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x0078EC59: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078EC5E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078EC5Eu);

L_0078EC5E:
    ecx = MEM32(ebp + (-0x48)); /* 0x0078EC5E: mov ecx, dword ptr [ebp - 0x48] */
    goto L_0040A000; /* 0x0078EC61: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078EC66(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078EC66u);

L_0078EC66:
    ecx = MEM32(ebp + (-0x44)); /* 0x0078EC66: mov ecx, dword ptr [ebp - 0x44] */
    goto L_0040A000; /* 0x0078EC69: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078EC6E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078EC6Eu);

L_0078EC6E:
    ecx = MEM32(ebp + (-0x44)); /* 0x0078EC6E: mov ecx, dword ptr [ebp - 0x44] */
    goto L_0040A000; /* 0x0078EC71: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078EC76(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078EC76u);

L_0078EC76:
    ecx = MEM32(ebp + (-0x48)); /* 0x0078EC76: mov ecx, dword ptr [ebp - 0x48] */
    goto L_0040A000; /* 0x0078EC79: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078EC7E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078EC7Eu);

L_0078EC7E:
    ecx = MEM32(ebp + (-0x44)); /* 0x0078EC7E: mov ecx, dword ptr [ebp - 0x44] */
    goto L_0040A000; /* 0x0078EC81: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078EC86(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078EC86u);

L_0078EC86:
    ecx = MEM32(ebp + (-0x48)); /* 0x0078EC86: mov ecx, dword ptr [ebp - 0x48] */
    goto L_0040A000; /* 0x0078EC89: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078EC8E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078EC8Eu);

    goto L_0078EC8E;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0078EC8E:
    edx = MEM32(esp + 0x8); /* 0x0078EC8E: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0078EC92: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x54)); /* 0x0078EC95: mov ecx, dword ptr [edx - 0x54] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0078EC98: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0078EC9A: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x0078EC9F: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0078ECA2: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0078ECA4: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00819D40u; /* 0x0078ECA9: mov eax, 0x819d40 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0078ECAE: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0078ECC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078ECC0u);

L_0078ECC0:
    ecx = ebp + 0x38; /* 0x0078ECC0: lea ecx, [ebp + 0x38] */
    goto L_0040A000; /* 0x0078ECC3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078ECC8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078ECC8u);

L_0078ECC8:
    ecx = ebp + 0x20; /* 0x0078ECC8: lea ecx, [ebp + 0x20] */
    goto L_0040A000; /* 0x0078ECCB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078ECD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078ECD0u);

L_0078ECD0:
    ecx = MEM32(ebp + (-0x4C)); /* 0x0078ECD0: mov ecx, dword ptr [ebp - 0x4c] */
    goto L_0063E070; /* 0x0078ECD3: jmp 0x63e070 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0063E070: RECOMP_ITAIL(0x0063E070u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078ECD8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078ECD8u);

L_0078ECD8:
    ecx = MEM32(ebp + (-0x4C)); /* 0x0078ECD8: mov ecx, dword ptr [ebp - 0x4c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x950u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x950u; /* 0x0078ECDB: add ecx, 0x950 */
    _flag_k = FK_ADD;
    goto L_0040A000; /* 0x0078ECE1: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078ECE6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078ECE6u);

L_0078ECE6:
    ecx = ebp + (-0x40); /* 0x0078ECE6: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x0078ECE9: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078ECEE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078ECEEu);

L_0078ECEE:
    ecx = ebp + (-0x28); /* 0x0078ECEE: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x0078ECF1: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078ECF6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078ECF6u);

L_0078ECF6:
    ecx = ebp + (-0x40); /* 0x0078ECF6: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x0078ECF9: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078ECFE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078ECFEu);

L_0078ECFE:
    ecx = ebp + (-0x28); /* 0x0078ECFE: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x0078ED01: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078ED06(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078ED06u);

L_0078ED06:
    ecx = ebp + (-0x40); /* 0x0078ED06: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x0078ED09: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078ED0E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078ED0Eu);

L_0078ED0E:
    ecx = ebp + (-0x28); /* 0x0078ED0E: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x0078ED11: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078ED16(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078ED16u);

L_0078ED16:
    ecx = MEM32(ebp + (-0x48)); /* 0x0078ED16: mov ecx, dword ptr [ebp - 0x48] */
    goto L_0040A000; /* 0x0078ED19: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078ED1E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078ED1Eu);

L_0078ED1E:
    ecx = MEM32(ebp + (-0x44)); /* 0x0078ED1E: mov ecx, dword ptr [ebp - 0x44] */
    goto L_0040A000; /* 0x0078ED21: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078ED26(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078ED26u);

L_0078ED26:
    ecx = MEM32(ebp + (-0x44)); /* 0x0078ED26: mov ecx, dword ptr [ebp - 0x44] */
    goto L_0040A000; /* 0x0078ED29: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078ED2E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078ED2Eu);

L_0078ED2E:
    ecx = MEM32(ebp + (-0x48)); /* 0x0078ED2E: mov ecx, dword ptr [ebp - 0x48] */
    goto L_0040A000; /* 0x0078ED31: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078ED36(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078ED36u);

L_0078ED36:
    ecx = MEM32(ebp + (-0x44)); /* 0x0078ED36: mov ecx, dword ptr [ebp - 0x44] */
    goto L_0040A000; /* 0x0078ED39: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078ED3E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078ED3Eu);

    goto L_0078ED3E;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0078ED3E:
    edx = MEM32(esp + 0x8); /* 0x0078ED3E: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0078ED42: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x54)); /* 0x0078ED45: mov ecx, dword ptr [edx - 0x54] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0078ED48: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0078ED4A: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x0078ED4F: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0078ED52: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0078ED54: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00819DF0u; /* 0x0078ED59: mov eax, 0x819df0 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0078ED5E: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0078ED70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078ED70u);

L_0078ED70:
    ecx = ebp + 0xC; /* 0x0078ED70: lea ecx, [ebp + 0xc] */
    goto L_0040A000; /* 0x0078ED73: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078ED78(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078ED78u);

L_0078ED78:
    ecx = MEM32(ebp + (-0x50)); /* 0x0078ED78: mov ecx, dword ptr [ebp - 0x50] */
    goto L_0063E070; /* 0x0078ED7B: jmp 0x63e070 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0063E070: RECOMP_ITAIL(0x0063E070u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078ED80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078ED80u);

L_0078ED80:
    ecx = MEM32(ebp + (-0x50)); /* 0x0078ED80: mov ecx, dword ptr [ebp - 0x50] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x950u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x950u; /* 0x0078ED83: add ecx, 0x950 */
    _flag_k = FK_ADD;
    goto L_0040A000; /* 0x0078ED89: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078ED8E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078ED8Eu);

L_0078ED8E:
    ecx = ebp + (-0x44); /* 0x0078ED8E: lea ecx, [ebp - 0x44] */
    goto L_0040A000; /* 0x0078ED91: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078ED96(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078ED96u);

L_0078ED96:
    ecx = ebp + (-0x2C); /* 0x0078ED96: lea ecx, [ebp - 0x2c] */
    goto L_0040A000; /* 0x0078ED99: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078ED9E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078ED9Eu);

L_0078ED9E:
    ecx = ebp + (-0x44); /* 0x0078ED9E: lea ecx, [ebp - 0x44] */
    goto L_0040A000; /* 0x0078EDA1: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078EDA6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078EDA6u);

L_0078EDA6:
    ecx = ebp + (-0x2C); /* 0x0078EDA6: lea ecx, [ebp - 0x2c] */
    goto L_0040A000; /* 0x0078EDA9: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078EDAE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078EDAEu);

L_0078EDAE:
    ecx = ebp + (-0x44); /* 0x0078EDAE: lea ecx, [ebp - 0x44] */
    goto L_0040A000; /* 0x0078EDB1: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078EDB6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078EDB6u);

L_0078EDB6:
    ecx = ebp + (-0x2C); /* 0x0078EDB6: lea ecx, [ebp - 0x2c] */
    goto L_0040A000; /* 0x0078EDB9: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078EDBE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078EDBEu);

L_0078EDBE:
    ecx = MEM32(ebp + (-0x4C)); /* 0x0078EDBE: mov ecx, dword ptr [ebp - 0x4c] */
    goto L_0040A000; /* 0x0078EDC1: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078EDC6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078EDC6u);

L_0078EDC6:
    ecx = MEM32(ebp + (-0x48)); /* 0x0078EDC6: mov ecx, dword ptr [ebp - 0x48] */
    goto L_0040A000; /* 0x0078EDC9: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078EDCE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078EDCEu);

L_0078EDCE:
    ecx = MEM32(ebp + (-0x48)); /* 0x0078EDCE: mov ecx, dword ptr [ebp - 0x48] */
    goto L_0040A000; /* 0x0078EDD1: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078EDD6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078EDD6u);

L_0078EDD6:
    ecx = MEM32(ebp + (-0x4C)); /* 0x0078EDD6: mov ecx, dword ptr [ebp - 0x4c] */
    goto L_0040A000; /* 0x0078EDD9: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078EDDE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078EDDEu);

    goto L_0078EDDE;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0078EDDE:
    edx = MEM32(esp + 0x8); /* 0x0078EDDE: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0078EDE2: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x58)); /* 0x0078EDE5: mov ecx, dword ptr [edx - 0x58] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0078EDE8: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0078EDEA: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x8)); /* 0x0078EDEF: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0078EDF2: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0078EDF4: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00819E90u; /* 0x0078EDF9: mov eax, 0x819e90 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0078EDFE: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0078EE10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078EE10u);

L_0078EE10:
    ecx = MEM32(ebp + (-0x10)); /* 0x0078EE10: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0063E070; /* 0x0078EE13: jmp 0x63e070 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0063E070: RECOMP_ITAIL(0x0063E070u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078EE18(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078EE18u);

L_0078EE18:
    ecx = MEM32(ebp + (-0x10)); /* 0x0078EE18: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x950u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x950u; /* 0x0078EE1B: add ecx, 0x950 */
    _flag_k = FK_ADD;
    goto L_0040A000; /* 0x0078EE21: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078EE26(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078EE26u);

    goto L_0078EE26;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0078EE26:
    edx = MEM32(esp + 0x8); /* 0x0078EE26: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0078EE2A: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xC)); /* 0x0078EE2D: mov ecx, dword ptr [edx - 0xc] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0078EE30: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0078EE32: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00819F20u; /* 0x0078EE37: mov eax, 0x819f20 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0078EE3C: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0078EE50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078EE50u);

L_0078EE50:
    ecx = ebp + 0x8; /* 0x0078EE50: lea ecx, [ebp + 8] */
    goto L_0040A000; /* 0x0078EE53: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078EE58(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078EE58u);

L_0078EE58:
    ecx = ebp + (-0x40); /* 0x0078EE58: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x0078EE5B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078EE60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078EE60u);

L_0078EE60:
    eax = MEM32(ebp + (-0x78)); /* 0x0078EE60: mov eax, dword ptr [ebp - 0x78] */
    PUSH32(esp, eax); /* 0x0078EE63: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x0078EE64: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0078EE6A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0078EE6B: ret  */
    RECOMP_REGS_OUT();
}

void sub_0078EE6C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078EE6Cu);

L_0078EE6C:
    ecx = ebp + (-0x28); /* 0x0078EE6C: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x0078EE6F: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078EE74(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078EE74u);

L_0078EE74:
    ecx = MEM32(ebp + (-0x78)); /* 0x0078EE74: mov ecx, dword ptr [ebp - 0x78] */
    goto L_0040A000; /* 0x0078EE77: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078EE7C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078EE7Cu);

L_0078EE7C:
    ecx = ebp + (-0x28); /* 0x0078EE7C: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x0078EE7F: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078EE84(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078EE84u);

L_0078EE84:
    ecx = ebp + (-0x28); /* 0x0078EE84: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x0078EE87: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078EE8C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078EE8Cu);

L_0078EE8C:
    ecx = MEM32(ebp + (-0x78)); /* 0x0078EE8C: mov ecx, dword ptr [ebp - 0x78] */
    goto L_0040A000; /* 0x0078EE8F: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078EE94(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078EE94u);

L_0078EE94:
    ecx = MEM32(ebp + (-0x84)); /* 0x0078EE94: mov ecx, dword ptr [ebp - 0x84] */
    goto L_0040A000; /* 0x0078EE9A: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}
