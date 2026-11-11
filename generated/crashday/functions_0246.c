#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_007B8B30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B8B30u);

L_007B8B30:
    ecx = MEM32(ebp + 0x8); /* 0x007B8B30: mov ecx, dword ptr [ebp + 8] */
    goto L_0040A000; /* 0x007B8B33: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B8B38(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B8B38u);

L_007B8B38:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B8B38: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040A000; /* 0x007B8B3B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B8B40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B8B40u);

L_007B8B40:
    ecx = MEM32(ebp + 0x8); /* 0x007B8B40: mov ecx, dword ptr [ebp + 8] */
    goto L_0040A000; /* 0x007B8B43: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B8B48(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B8B48u);

L_007B8B48:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B8B48: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040A000; /* 0x007B8B4B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B8B50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B8B50u);

    goto L_007B8B50;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B8B50:
    edx = MEM32(esp + 0x8); /* 0x007B8B50: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B8B54: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x007B8B57: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B8B5A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B8B5C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00842C80u; /* 0x007B8B61: mov eax, 0x842c80 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B8B66: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B8B70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B8B70u);

L_007B8B70:
    ecx = MEM32(ebp + (-0x24)); /* 0x007B8B70: mov ecx, dword ptr [ebp - 0x24] */
    goto L_0040A000; /* 0x007B8B73: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B8B78(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B8B78u);

L_007B8B78:
    ecx = MEM32(ebp + (-0x20)); /* 0x007B8B78: mov ecx, dword ptr [ebp - 0x20] */
    goto L_0040A000; /* 0x007B8B7B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B8B80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B8B80u);

L_007B8B80:
    ecx = MEM32(ebp + (-0x20)); /* 0x007B8B80: mov ecx, dword ptr [ebp - 0x20] */
    goto L_0040A000; /* 0x007B8B83: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B8B88(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B8B88u);

L_007B8B88:
    ecx = MEM32(ebp + (-0x24)); /* 0x007B8B88: mov ecx, dword ptr [ebp - 0x24] */
    goto L_0040A000; /* 0x007B8B8B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B8B90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B8B90u);

    goto L_007B8B90;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B8B90:
    edx = MEM32(esp + 0x8); /* 0x007B8B90: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0x24); /* 0x007B8B94: lea eax, [edx - 0x24] */
    ecx = MEM32(edx + (-0x28)); /* 0x007B8B97: mov ecx, dword ptr [edx - 0x28] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B8B9A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B8B9C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00842CC4u; /* 0x007B8BA1: mov eax, 0x842cc4 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B8BA6: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B8BB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B8BB0u);

L_007B8BB0:
    ecx = ebp + (-0xA4); /* 0x007B8BB0: lea ecx, [ebp - 0xa4] */
    goto L_0040A000; /* 0x007B8BB6: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B8BBB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B8BBBu);

L_007B8BBB:
    ecx = ebp + (-0xB4); /* 0x007B8BBB: lea ecx, [ebp - 0xb4] */
    goto L_00429F40; /* 0x007B8BC1: jmp 0x429f40 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00429F40: RECOMP_ITAIL(0x00429F40u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B8BC6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B8BC6u);

L_007B8BC6:
    ecx = ebp + (-0x8C); /* 0x007B8BC6: lea ecx, [ebp - 0x8c] */
    goto L_0040A000; /* 0x007B8BCC: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B8BD1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B8BD1u);

L_007B8BD1:
    ecx = ebp + (-0xA4); /* 0x007B8BD1: lea ecx, [ebp - 0xa4] */
    goto L_00429F40; /* 0x007B8BD7: jmp 0x429f40 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00429F40: RECOMP_ITAIL(0x00429F40u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B8BDC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B8BDCu);

L_007B8BDC:
    eax = MEM32(ebp + (-0xBC)); /* 0x007B8BDC: mov eax, dword ptr [ebp - 0xbc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x007B8BE2: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007B8BFD; /* 0x007B8BE5: je 0x7b8bfd */
L_007B8BEB:
    _flag_a = (uint32_t)(MEM32(ebp + (-0xBC))); _flag_b = (uint32_t)(0xFFFFFFFEu);
    MEM32(ebp + (-0xBC)) = MEM32(ebp + (-0xBC)) & 0xFFFFFFFEu; /* 0x007B8BEB: and dword ptr [ebp - 0xbc], 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x8C); /* 0x007B8BF2: lea ecx, [ebp - 0x8c] */
    goto L_0040A000; /* 0x007B8BF8: jmp 0x40a000 */
L_007B8BFD:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007B8BFD: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B8BFE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B8BFEu);

L_007B8BFE:
    ecx = ebp + (-0x74); /* 0x007B8BFE: lea ecx, [ebp - 0x74] */
    goto L_0040A000; /* 0x007B8C01: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B8C06(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B8C06u);

L_007B8C06:
    ecx = ebp + (-0xA4); /* 0x007B8C06: lea ecx, [ebp - 0xa4] */
    goto L_00429F40; /* 0x007B8C0C: jmp 0x429f40 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00429F40: RECOMP_ITAIL(0x00429F40u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B8C11(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B8C11u);

L_007B8C11:
    ecx = ebp + (-0x8C); /* 0x007B8C11: lea ecx, [ebp - 0x8c] */
    goto L_0040A000; /* 0x007B8C17: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B8C1C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B8C1Cu);

L_007B8C1C:
    ecx = ebp + (-0x5C); /* 0x007B8C1C: lea ecx, [ebp - 0x5c] */
    goto L_0040A000; /* 0x007B8C1F: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B8C24(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B8C24u);

L_007B8C24:
    ecx = ebp + (-0x74); /* 0x007B8C24: lea ecx, [ebp - 0x74] */
    goto L_0040A000; /* 0x007B8C27: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B8C2C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B8C2Cu);

L_007B8C2C:
    ecx = ebp + (-0x44); /* 0x007B8C2C: lea ecx, [ebp - 0x44] */
    goto L_0040A000; /* 0x007B8C2F: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B8C34(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B8C34u);

L_007B8C34:
    ecx = ebp + (-0x2C); /* 0x007B8C34: lea ecx, [ebp - 0x2c] */
    goto L_0040A000; /* 0x007B8C37: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B8C3C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B8C3Cu);

L_007B8C3C:
    ecx = ebp + (-0x44); /* 0x007B8C3C: lea ecx, [ebp - 0x44] */
    goto L_00441610; /* 0x007B8C3F: jmp 0x441610 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00441610: RECOMP_ITAIL(0x00441610u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B8C44(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B8C44u);

L_007B8C44:
    ecx = ebp + (-0x44); /* 0x007B8C44: lea ecx, [ebp - 0x44] */
    goto L_0040A000; /* 0x007B8C47: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B8C4C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B8C4Cu);

L_007B8C4C:
    ecx = ebp + (-0x2C); /* 0x007B8C4C: lea ecx, [ebp - 0x2c] */
    goto L_0040A000; /* 0x007B8C4F: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B8C54(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B8C54u);

L_007B8C54:
    ecx = MEM32(ebp + (-0xB8)); /* 0x007B8C54: mov ecx, dword ptr [ebp - 0xb8] */
    goto L_0040A000; /* 0x007B8C5A: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B8C5F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B8C5Fu);

L_007B8C5F:
    eax = MEM32(ebp + (-0xBC)); /* 0x007B8C5F: mov eax, dword ptr [ebp - 0xbc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    eax = eax & 2; /* 0x007B8C65: and eax, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007B8C7D; /* 0x007B8C68: je 0x7b8c7d */
L_007B8C6E:
    _flag_a = (uint32_t)(MEM32(ebp + (-0xBC))); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ebp + (-0xBC)) = MEM32(ebp + (-0xBC)) & 0xFFFFFFFDu; /* 0x007B8C6E: and dword ptr [ebp - 0xbc], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x5C); /* 0x007B8C75: lea ecx, [ebp - 0x5c] */
    goto L_0040A000; /* 0x007B8C78: jmp 0x40a000 */
L_007B8C7D:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007B8C7D: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B8C7E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B8C7Eu);

    goto L_007B8C7E;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B8C7E:
    edx = MEM32(esp + 0x8); /* 0x007B8C7E: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0xCC); /* 0x007B8C82: lea eax, [edx - 0xcc] */
    ecx = MEM32(edx + (-0xD0)); /* 0x007B8C88: mov ecx, dword ptr [edx - 0xd0] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B8C8E: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B8C90: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x007B8C95: add eax, 0xc */
    _flag_k = FK_ADD;
    ecx = MEM32(edx + (-0x8)); /* 0x007B8C98: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B8C9B: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B8C9D: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00842D08u; /* 0x007B8CA2: mov eax, 0x842d08 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B8CA7: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B8CB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B8CB0u);

L_007B8CB0:
    ecx = ebp + 0x20; /* 0x007B8CB0: lea ecx, [ebp + 0x20] */
    goto L_0040A000; /* 0x007B8CB3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B8CB8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B8CB8u);

L_007B8CB8:
    ecx = ebp + 0x8; /* 0x007B8CB8: lea ecx, [ebp + 8] */
    goto L_0040A000; /* 0x007B8CBB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B8CC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B8CC0u);

L_007B8CC0:
    ecx = ebp + (-0x28); /* 0x007B8CC0: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007B8CC3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B8CC8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B8CC8u);

L_007B8CC8:
    ecx = ebp + (-0x40); /* 0x007B8CC8: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x007B8CCB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B8CD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B8CD0u);

L_007B8CD0:
    ecx = ebp + (-0x28); /* 0x007B8CD0: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007B8CD3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B8CD8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B8CD8u);

L_007B8CD8:
    ecx = MEM32(ebp + (-0x10C)); /* 0x007B8CD8: mov ecx, dword ptr [ebp - 0x10c] */
    goto L_0040A000; /* 0x007B8CDE: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B8CE3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B8CE3u);

L_007B8CE3:
    ecx = ebp + (-0x58); /* 0x007B8CE3: lea ecx, [ebp - 0x58] */
    goto L_0040A000; /* 0x007B8CE6: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B8CEB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B8CEBu);

L_007B8CEB:
    ecx = ebp + (-0x40); /* 0x007B8CEB: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x007B8CEE: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B8CF3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B8CF3u);

L_007B8CF3:
    ecx = ebp + (-0x28); /* 0x007B8CF3: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007B8CF6: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B8CFB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B8CFBu);

L_007B8CFB:
    ecx = ebp + (-0x40); /* 0x007B8CFB: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x007B8CFE: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B8D03(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B8D03u);

L_007B8D03:
    ecx = MEM32(ebp + (-0x108)); /* 0x007B8D03: mov ecx, dword ptr [ebp - 0x108] */
    goto L_0040A000; /* 0x007B8D09: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B8D0E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B8D0Eu);

L_007B8D0E:
    ecx = MEM32(ebp + (-0x10C)); /* 0x007B8D0E: mov ecx, dword ptr [ebp - 0x10c] */
    goto L_0040A000; /* 0x007B8D14: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B8D19(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B8D19u);

L_007B8D19:
    ecx = ebp + (-0xD0); /* 0x007B8D19: lea ecx, [ebp - 0xd0] */
    goto L_0040A000; /* 0x007B8D1F: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B8D24(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B8D24u);

L_007B8D24:
    ecx = ebp + (-0xE8); /* 0x007B8D24: lea ecx, [ebp - 0xe8] */
    goto L_0040A000; /* 0x007B8D2A: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B8D2F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B8D2Fu);

L_007B8D2F:
    ecx = ebp + (-0x100); /* 0x007B8D2F: lea ecx, [ebp - 0x100] */
    goto L_0040A000; /* 0x007B8D35: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B8D3A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B8D3Au);

L_007B8D3A:
    ecx = ebp + (-0xB8); /* 0x007B8D3A: lea ecx, [ebp - 0xb8] */
    goto L_0040A000; /* 0x007B8D40: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B8D45(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B8D45u);

L_007B8D45:
    ecx = ebp + (-0x88); /* 0x007B8D45: lea ecx, [ebp - 0x88] */
    goto L_0040A000; /* 0x007B8D4B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B8D50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B8D50u);

L_007B8D50:
    ecx = ebp + (-0xA0); /* 0x007B8D50: lea ecx, [ebp - 0xa0] */
    goto L_0040A000; /* 0x007B8D56: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B8D5B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B8D5Bu);

L_007B8D5B:
    ecx = ebp + (-0x70); /* 0x007B8D5B: lea ecx, [ebp - 0x70] */
    goto L_0040A000; /* 0x007B8D5E: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B8D63(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B8D63u);

L_007B8D63:
    ecx = MEM32(ebp + (-0x108)); /* 0x007B8D63: mov ecx, dword ptr [ebp - 0x108] */
    goto L_0040A000; /* 0x007B8D69: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B8D6E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B8D6Eu);

    goto L_007B8D6E;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B8D6E:
    edx = MEM32(esp + 0x8); /* 0x007B8D6E: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B8D72: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x114)); /* 0x007B8D75: mov ecx, dword ptr [edx - 0x114] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B8D7B: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B8D7D: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x007B8D82: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B8D85: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B8D87: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00842DD0u; /* 0x007B8D8C: mov eax, 0x842dd0 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B8D91: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B8DA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B8DA0u);

L_007B8DA0:
    ecx = ebp + 0x20; /* 0x007B8DA0: lea ecx, [ebp + 0x20] */
    goto L_0040A000; /* 0x007B8DA3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B8DA8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B8DA8u);

L_007B8DA8:
    ecx = ebp + 0x8; /* 0x007B8DA8: lea ecx, [ebp + 8] */
    goto L_0040A000; /* 0x007B8DAB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B8DB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B8DB0u);

L_007B8DB0:
    ecx = ebp + (-0x58); /* 0x007B8DB0: lea ecx, [ebp - 0x58] */
    goto L_0040A000; /* 0x007B8DB3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B8DB8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B8DB8u);

L_007B8DB8:
    ecx = ebp + (-0x28); /* 0x007B8DB8: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007B8DBB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B8DC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B8DC0u);

L_007B8DC0:
    ecx = ebp + (-0x70); /* 0x007B8DC0: lea ecx, [ebp - 0x70] */
    goto L_0040A000; /* 0x007B8DC3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B8DC8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B8DC8u);

L_007B8DC8:
    ecx = ebp + (-0x28); /* 0x007B8DC8: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007B8DCB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B8DD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B8DD0u);

L_007B8DD0:
    ecx = ebp + (-0x40); /* 0x007B8DD0: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x007B8DD3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B8DD8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B8DD8u);

L_007B8DD8:
    ecx = ebp + (-0x28); /* 0x007B8DD8: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007B8DDB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B8DE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B8DE0u);

L_007B8DE0:
    ecx = ebp + (-0x28); /* 0x007B8DE0: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007B8DE3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B8DE8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B8DE8u);

L_007B8DE8:
    ecx = ebp + (-0x58); /* 0x007B8DE8: lea ecx, [ebp - 0x58] */
    goto L_0040A000; /* 0x007B8DEB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B8DF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B8DF0u);

L_007B8DF0:
    ecx = MEM32(ebp + (-0x78)); /* 0x007B8DF0: mov ecx, dword ptr [ebp - 0x78] */
    goto L_0040A000; /* 0x007B8DF3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B8DF8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B8DF8u);

L_007B8DF8:
    ecx = MEM32(ebp + (-0x7C)); /* 0x007B8DF8: mov ecx, dword ptr [ebp - 0x7c] */
    goto L_0040A000; /* 0x007B8DFB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B8E00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B8E00u);

    goto L_007B8E00;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B8E00:
    edx = MEM32(esp + 0x8); /* 0x007B8E00: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B8E04: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x84)); /* 0x007B8E07: mov ecx, dword ptr [edx - 0x84] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B8E0D: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B8E0F: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x007B8E14: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B8E17: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B8E19: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00842E98u; /* 0x007B8E1E: mov eax, 0x842e98 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B8E23: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B8E30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B8E30u);

L_007B8E30:
    ecx = ebp + 0xC; /* 0x007B8E30: lea ecx, [ebp + 0xc] */
    goto L_0040A000; /* 0x007B8E33: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B8E38(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B8E38u);

    goto L_007B8E38;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B8E38:
    edx = MEM32(esp + 0x8); /* 0x007B8E38: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B8E3C: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x10)); /* 0x007B8E3F: mov ecx, dword ptr [edx - 0x10] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B8E42: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B8E44: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00842F30u; /* 0x007B8E49: mov eax, 0x842f30 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B8E4E: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B8E60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B8E60u);

L_007B8E60:
    ecx = MEM32(ebp + 0x8); /* 0x007B8E60: mov ecx, dword ptr [ebp + 8] */
    goto L_0040A000; /* 0x007B8E63: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B8E68(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B8E68u);

L_007B8E68:
    ecx = MEM32(ebp + 0xC); /* 0x007B8E68: mov ecx, dword ptr [ebp + 0xc] */
    goto L_0040A000; /* 0x007B8E6B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B8E70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B8E70u);

L_007B8E70:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B8E70: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040A000; /* 0x007B8E73: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B8E78(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B8E78u);

L_007B8E78:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B8E78: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040A000; /* 0x007B8E7B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B8E80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B8E80u);

    goto L_007B8E80;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B8E80:
    edx = MEM32(esp + 0x8); /* 0x007B8E80: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B8E84: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x007B8E87: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B8E8A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B8E8C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00842F6Cu; /* 0x007B8E91: mov eax, 0x842f6c */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B8E96: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B8EA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B8EA0u);

L_007B8EA0:
    ecx = ebp + (-0x2C); /* 0x007B8EA0: lea ecx, [ebp - 0x2c] */
    goto L_0040A000; /* 0x007B8EA3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B8EA8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B8EA8u);

L_007B8EA8:
    ecx = MEM32(ebp + (-0x30)); /* 0x007B8EA8: mov ecx, dword ptr [ebp - 0x30] */
    goto L_0040A000; /* 0x007B8EAB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B8EB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B8EB0u);

    goto L_007B8EB0;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B8EB0:
    edx = MEM32(esp + 0x8); /* 0x007B8EB0: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0x34); /* 0x007B8EB4: lea eax, [edx - 0x34] */
    ecx = MEM32(edx + (-0x38)); /* 0x007B8EB7: mov ecx, dword ptr [edx - 0x38] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B8EBA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B8EBC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x007B8EC1: add eax, 0xc */
    _flag_k = FK_ADD;
    ecx = MEM32(edx + (-0x8)); /* 0x007B8EC4: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B8EC7: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B8EC9: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00842FB0u; /* 0x007B8ECE: mov eax, 0x842fb0 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B8ED3: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B8EE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B8EE0u);

    goto L_007B8EE0;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B8EE0:
    edx = MEM32(esp + 0x8); /* 0x007B8EE0: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B8EE4: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x007B8EE7: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B8EEA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B8EEC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00842FE4u; /* 0x007B8EF1: mov eax, 0x842fe4 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B8EF6: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B8F00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B8F00u);

    goto L_007B8F00;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B8F00:
    edx = MEM32(esp + 0x8); /* 0x007B8F00: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B8F04: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x1C)); /* 0x007B8F07: mov ecx, dword ptr [edx - 0x1c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B8F0A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B8F0C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0084303Cu; /* 0x007B8F11: mov eax, 0x84303c */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B8F16: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B8F20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B8F20u);

L_007B8F20:
    ecx = MEM32(ebp + (-0x18)); /* 0x007B8F20: mov ecx, dword ptr [ebp - 0x18] */
    goto L_0040A000; /* 0x007B8F23: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B8F28(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B8F28u);

L_007B8F28:
    ecx = MEM32(ebp + (-0x1C)); /* 0x007B8F28: mov ecx, dword ptr [ebp - 0x1c] */
    goto L_0040A000; /* 0x007B8F2B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B8F30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B8F30u);

    goto L_007B8F30;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B8F30:
    edx = MEM32(esp + 0x8); /* 0x007B8F30: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B8F34: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x007B8F37: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B8F3A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B8F3C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00843094u; /* 0x007B8F41: mov eax, 0x843094 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B8F46: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B8F50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B8F50u);

L_007B8F50:
    ecx = ebp + (-0x18); /* 0x007B8F50: lea ecx, [ebp - 0x18] */
    goto L_006367A0; /* 0x007B8F53: jmp 0x6367a0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_006367A0: RECOMP_ITAIL(0x006367A0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B8F58(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B8F58u);

    goto L_007B8F58;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B8F58:
    edx = MEM32(esp + 0x8); /* 0x007B8F58: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B8F5C: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x007B8F5F: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B8F62: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B8F64: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x008430C8u; /* 0x007B8F69: mov eax, 0x8430c8 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B8F6E: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B8F80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B8F80u);

L_007B8F80:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B8F80: mov ecx, dword ptr [ebp - 0x14] */
    goto L_006367A0; /* 0x007B8F83: jmp 0x6367a0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_006367A0: RECOMP_ITAIL(0x006367A0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B8F88(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B8F88u);

L_007B8F88:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B8F88: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x18u; /* 0x007B8F8B: add ecx, 0x18 */
    _flag_k = FK_ADD;
    goto L_00636260; /* 0x007B8F8E: jmp 0x636260 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00636260: RECOMP_ITAIL(0x00636260u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B8F93(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B8F93u);

L_007B8F93:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B8F93: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x28u; /* 0x007B8F96: add ecx, 0x28 */
    _flag_k = FK_ADD;
    goto L_006367A0; /* 0x007B8F99: jmp 0x6367a0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_006367A0: RECOMP_ITAIL(0x006367A0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B8F9E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B8F9Eu);

    goto L_007B8F9E;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B8F9E:
    edx = MEM32(esp + 0x8); /* 0x007B8F9E: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B8FA2: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x10)); /* 0x007B8FA5: mov ecx, dword ptr [edx - 0x10] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B8FA8: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B8FAA: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x008430F4u; /* 0x007B8FAF: mov eax, 0x8430f4 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B8FB4: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B8FC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B8FC0u);

L_007B8FC0:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B8FC0: mov ecx, dword ptr [ebp - 0x10] */
    goto L_006367A0; /* 0x007B8FC3: jmp 0x6367a0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_006367A0: RECOMP_ITAIL(0x006367A0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B8FC8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B8FC8u);

    goto L_007B8FC8;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B8FC8:
    edx = MEM32(esp + 0x8); /* 0x007B8FC8: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B8FCC: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xC)); /* 0x007B8FCF: mov ecx, dword ptr [edx - 0xc] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B8FD2: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B8FD4: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00843130u; /* 0x007B8FD9: mov eax, 0x843130 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B8FDE: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B8FF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B8FF0u);

L_007B8FF0:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B8FF0: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x18u; /* 0x007B8FF3: add ecx, 0x18 */
    _flag_k = FK_ADD;
    goto L_00636260; /* 0x007B8FF6: jmp 0x636260 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00636260: RECOMP_ITAIL(0x00636260u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B8FFB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B8FFBu);

L_007B8FFB:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B8FFB: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x28u; /* 0x007B8FFE: add ecx, 0x28 */
    _flag_k = FK_ADD;
    goto L_006367A0; /* 0x007B9001: jmp 0x6367a0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_006367A0: RECOMP_ITAIL(0x006367A0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B9006(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B9006u);

L_007B9006:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B9006: mov ecx, dword ptr [ebp - 0x10] */
    goto L_006367A0; /* 0x007B9009: jmp 0x6367a0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_006367A0: RECOMP_ITAIL(0x006367A0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B900E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B900Eu);

    goto L_007B900E;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B900E:
    edx = MEM32(esp + 0x8); /* 0x007B900E: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B9012: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xC)); /* 0x007B9015: mov ecx, dword ptr [edx - 0xc] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B9018: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B901A: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0084315Cu; /* 0x007B901F: mov eax, 0x84315c */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B9024: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B9030(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B9030u);

L_007B9030:
    eax = MEM32(0x928210); /* 0x007B9030: mov eax, dword ptr [0x928210] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    eax = eax & 0xFFFFFFFEu; /* 0x007B9035: and eax, 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x928210) = eax; /* 0x007B9038: mov dword ptr [0x928210], eax */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007B903D: ret  */
    RECOMP_REGS_OUT();
}

void sub_007B903E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B903Eu);

L_007B903E:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B903E: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040A000; /* 0x007B9041: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B9046(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B9046u);

L_007B9046:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B9046: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040A000; /* 0x007B9049: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B904E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B904Eu);

    goto L_007B904E;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B904E:
    edx = MEM32(esp + 0x8); /* 0x007B904E: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B9052: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x1C)); /* 0x007B9055: mov ecx, dword ptr [edx - 0x1c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B9058: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B905A: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00843198u; /* 0x007B905F: mov eax, 0x843198 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B9064: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B9070(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B9070u);

L_007B9070:
    ecx = ebp + 0x2C; /* 0x007B9070: lea ecx, [ebp + 0x2c] */
    goto L_0040A000; /* 0x007B9073: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B9078(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B9078u);

L_007B9078:
    ecx = ebp + 0x14; /* 0x007B9078: lea ecx, [ebp + 0x14] */
    goto L_0040A000; /* 0x007B907B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B9080(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B9080u);

L_007B9080:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B9080: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040A000; /* 0x007B9083: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B9088(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B9088u);

L_007B9088:
    ecx = MEM32(ebp + (-0x18)); /* 0x007B9088: mov ecx, dword ptr [ebp - 0x18] */
    goto L_0040A000; /* 0x007B908B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B9090(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B9090u);

L_007B9090:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B9090: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0063E070; /* 0x007B9093: jmp 0x63e070 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0063E070: RECOMP_ITAIL(0x0063E070u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B9098(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B9098u);

    goto L_007B9098;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B9098:
    edx = MEM32(esp + 0x8); /* 0x007B9098: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B909C: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x007B909F: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B90A2: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B90A4: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x008431D4u; /* 0x007B90A9: mov eax, 0x8431d4 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B90AE: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B90C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B90C0u);

L_007B90C0:
    ecx = MEM32(ebp + (-0x1C)); /* 0x007B90C0: mov ecx, dword ptr [ebp - 0x1c] */
    goto L_0040A000; /* 0x007B90C3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}
