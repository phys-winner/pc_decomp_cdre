#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_007B050E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B050Eu);

L_007B050E:
    ecx = ebp + (-0x6C); /* 0x007B050E: lea ecx, [ebp - 0x6c] */
    goto L_00441610; /* 0x007B0511: jmp 0x441610 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00441610: RECOMP_ITAIL(0x00441610u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0516(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0516u);

L_007B0516:
    ecx = ebp + (-0x6C); /* 0x007B0516: lea ecx, [ebp - 0x6c] */
    goto L_00441610; /* 0x007B0519: jmp 0x441610 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00441610: RECOMP_ITAIL(0x00441610u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B051E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B051Eu);

L_007B051E:
    ecx = ebp + (-0x6C); /* 0x007B051E: lea ecx, [ebp - 0x6c] */
    goto L_00441610; /* 0x007B0521: jmp 0x441610 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00441610: RECOMP_ITAIL(0x00441610u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0526(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0526u);

    goto L_007B0526;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B0526:
    edx = MEM32(esp + 0x8); /* 0x007B0526: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B052A: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x104)); /* 0x007B052D: mov ecx, dword ptr [edx - 0x104] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B0533: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B0535: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x007B053A: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B053D: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B053F: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083A0F0u; /* 0x007B0544: mov eax, 0x83a0f0 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B0549: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B0550(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0550u);

L_007B0550:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B0550: mov ecx, dword ptr [ebp - 0x10] */
    goto L_005EB9B0; /* 0x007B0553: jmp 0x5eb9b0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005EB9B0: RECOMP_ITAIL(0x005EB9B0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0558(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0558u);

L_007B0558:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B0558: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xCu; /* 0x007B055B: add ecx, 0xc */
    _flag_k = FK_ADD;
    goto L_005EB9B0; /* 0x007B055E: jmp 0x5eb9b0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005EB9B0: RECOMP_ITAIL(0x005EB9B0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0563(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0563u);

    goto L_007B0563;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B0563:
    edx = MEM32(esp + 0x8); /* 0x007B0563: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B0567: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xC)); /* 0x007B056A: mov ecx, dword ptr [edx - 0xc] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B056D: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B056F: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083A158u; /* 0x007B0574: mov eax, 0x83a158 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B0579: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B0580(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0580u);

L_007B0580:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B0580: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x007B0583: add ecx, 8 */
    _flag_k = FK_ADD;
    goto L_005E3440; /* 0x007B0586: jmp 0x5e3440 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005E3440: RECOMP_ITAIL(0x005E3440u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B058B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B058Bu);

    goto L_007B058B;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B058B:
    edx = MEM32(esp + 0x8); /* 0x007B058B: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B058F: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x8)); /* 0x007B0592: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B0595: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B0597: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083A18Cu; /* 0x007B059C: mov eax, 0x83a18c */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B05A1: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B05B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B05B0u);

L_007B05B0:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B05B0: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x58u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 0x58u; /* 0x007B05B3: sub ecx, 0x58 */
    _flag_k = FK_CMP;
    { _itail_tgt = (uint32_t)(MEM32(0x7CC434)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B05BC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B05BCu);

L_007B05BC:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B05BC: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x60u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 0x60u; /* 0x007B05BF: sub ecx, 0x60 */
    _flag_k = FK_CMP;
    goto L_0053BD90; /* 0x007B05C2: jmp 0x53bd90 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0053BD90: RECOMP_ITAIL(0x0053BD90u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B05C7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B05C7u);

    goto L_007B05C7;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B05C7:
    edx = MEM32(esp + 0x8); /* 0x007B05C7: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B05CB: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xC)); /* 0x007B05CE: mov ecx, dword ptr [edx - 0xc] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B05D1: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B05D3: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083A1B8u; /* 0x007B05D8: mov eax, 0x83a1b8 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B05DD: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B05F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B05F0u);

L_007B05F0:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B05F0: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0054EBE0; /* 0x007B05F3: jmp 0x54ebe0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0054EBE0: RECOMP_ITAIL(0x0054EBE0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B05F8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B05F8u);

L_007B05F8:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B05F8: mov ecx, dword ptr [ebp - 0x10] */
    goto L_00441610; /* 0x007B05FB: jmp 0x441610 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00441610: RECOMP_ITAIL(0x00441610u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0600(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0600u);

L_007B0600:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B0600: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x48u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x48u; /* 0x007B0603: add ecx, 0x48 */
    _flag_k = FK_ADD;
    goto L_00419790; /* 0x007B0606: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B060B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B060Bu);

    goto L_007B060B;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B060B:
    edx = MEM32(esp + 0x8); /* 0x007B060B: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B060F: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xC)); /* 0x007B0612: mov ecx, dword ptr [edx - 0xc] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B0615: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B0617: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083A1ECu; /* 0x007B061C: mov eax, 0x83a1ec */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B0621: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B0630(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0630u);

L_007B0630:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B0630: mov ecx, dword ptr [ebp - 0x10] */
    goto L_005E1B20; /* 0x007B0633: jmp 0x5e1b20 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005E1B20: RECOMP_ITAIL(0x005E1B20u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0638(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0638u);

L_007B0638:
    goto L_005EC160; /* 0x007B0638: jmp 0x5ec160 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005EC160: RECOMP_ITAIL(0x005EC160u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B063D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B063Du);

L_007B063D:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B063D: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x70u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x70u; /* 0x007B0640: add ecx, 0x70 */
    _flag_k = FK_ADD;
    goto L_0040A000; /* 0x007B0643: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0648(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0648u);

L_007B0648:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B0648: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x88u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x88u; /* 0x007B064B: add ecx, 0x88 */
    _flag_k = FK_ADD;
    goto L_0040A000; /* 0x007B0651: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0656(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0656u);

L_007B0656:
    ecx = MEM32(ebp + (-0x18)); /* 0x007B0656: mov ecx, dword ptr [ebp - 0x18] */
    goto L_0040B340; /* 0x007B0659: jmp 0x40b340 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B340: RECOMP_ITAIL(0x0040B340u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B065E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B065Eu);

L_007B065E:
    ecx = MEM32(ebp + (-0x18)); /* 0x007B065E: mov ecx, dword ptr [ebp - 0x18] */
    goto L_0040B2E0; /* 0x007B0661: jmp 0x40b2e0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B2E0: RECOMP_ITAIL(0x0040B2E0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0666(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0666u);

L_007B0666:
    ecx = MEM32(ebp + (-0x18)); /* 0x007B0666: mov ecx, dword ptr [ebp - 0x18] */
    goto L_0040B290; /* 0x007B0669: jmp 0x40b290 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B290: RECOMP_ITAIL(0x0040B290u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B066E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B066Eu);

L_007B066E:
    ecx = MEM32(ebp + (-0x18)); /* 0x007B066E: mov ecx, dword ptr [ebp - 0x18] */
    goto L_005EB560; /* 0x007B0671: jmp 0x5eb560 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005EB560: RECOMP_ITAIL(0x005EB560u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0676(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0676u);

L_007B0676:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B0676: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x007B0679: add ecx, 4 */
    _flag_k = FK_ADD;
    goto L_005E3F50; /* 0x007B067C: jmp 0x5e3f50 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005E3F50: RECOMP_ITAIL(0x005E3F50u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0681(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0681u);

L_007B0681:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B0681: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xCu; /* 0x007B0684: add ecx, 0xc */
    _flag_k = FK_ADD;
    goto L_005EB8A0; /* 0x007B0687: jmp 0x5eb8a0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005EB8A0: RECOMP_ITAIL(0x005EB8A0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B068C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B068Cu);

L_007B068C:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B068C: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xA0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xA0u; /* 0x007B068F: add ecx, 0xa0 */
    _flag_k = FK_ADD;
    goto L_005E3B90; /* 0x007B0695: jmp 0x5e3b90 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005E3B90: RECOMP_ITAIL(0x005E3B90u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B069A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B069Au);

L_007B069A:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B069A: mov ecx, dword ptr [ebp - 0x14] */
    goto L_005EC870; /* 0x007B069D: jmp 0x5ec870 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005EC870: RECOMP_ITAIL(0x005EC870u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B06A2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B06A2u);

L_007B06A2:
    ecx = MEM32(ebp + (-0x18)); /* 0x007B06A2: mov ecx, dword ptr [ebp - 0x18] */
    goto L_005EC0F0; /* 0x007B06A5: jmp 0x5ec0f0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005EC0F0: RECOMP_ITAIL(0x005EC0F0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B06AA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B06AAu);

L_007B06AA:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B06AA: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xBCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xBCu; /* 0x007B06AD: add ecx, 0xbc */
    _flag_k = FK_ADD;
    goto L_005E3C10; /* 0x007B06B3: jmp 0x5e3c10 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005E3C10: RECOMP_ITAIL(0x005E3C10u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B06B8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B06B8u);

L_007B06B8:
    ecx = MEM32(ebp + (-0x18)); /* 0x007B06B8: mov ecx, dword ptr [ebp - 0x18] */
    goto L_005E0190; /* 0x007B06BB: jmp 0x5e0190 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005E0190: RECOMP_ITAIL(0x005E0190u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B06C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B06C0u);

L_007B06C0:
    ecx = MEM32(ebp + (-0x18)); /* 0x007B06C0: mov ecx, dword ptr [ebp - 0x18] */
    goto L_005DD990; /* 0x007B06C3: jmp 0x5dd990 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005DD990: RECOMP_ITAIL(0x005DD990u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B06C8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B06C8u);

L_007B06C8:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B06C8: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xD0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xD0u; /* 0x007B06CB: add ecx, 0xd0 */
    _flag_k = FK_ADD;
    goto L_005E3C80; /* 0x007B06D1: jmp 0x5e3c80 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005E3C80: RECOMP_ITAIL(0x005E3C80u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B06D6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B06D6u);

L_007B06D6:
    ecx = MEM32(ebp + (-0x18)); /* 0x007B06D6: mov ecx, dword ptr [ebp - 0x18] */
    goto L_0053CC70; /* 0x007B06D9: jmp 0x53cc70 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0053CC70: RECOMP_ITAIL(0x0053CC70u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B06DE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B06DEu);

L_007B06DE:
    ecx = MEM32(ebp + (-0x18)); /* 0x007B06DE: mov ecx, dword ptr [ebp - 0x18] */
    goto L_0052E240; /* 0x007B06E1: jmp 0x52e240 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0052E240: RECOMP_ITAIL(0x0052E240u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B06E6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B06E6u);

L_007B06E6:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B06E6: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xE8u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xE8u; /* 0x007B06E9: add ecx, 0xe8 */
    _flag_k = FK_ADD;
    goto L_005E3CE0; /* 0x007B06EF: jmp 0x5e3ce0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005E3CE0: RECOMP_ITAIL(0x005E3CE0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B06F4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B06F4u);

L_007B06F4:
    ecx = MEM32(ebp + (-0x18)); /* 0x007B06F4: mov ecx, dword ptr [ebp - 0x18] */
    goto L_0053CC70; /* 0x007B06F7: jmp 0x53cc70 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0053CC70: RECOMP_ITAIL(0x0053CC70u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B06FC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B06FCu);

L_007B06FC:
    ecx = MEM32(ebp + (-0x18)); /* 0x007B06FC: mov ecx, dword ptr [ebp - 0x18] */
    goto L_0052E240; /* 0x007B06FF: jmp 0x52e240 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0052E240: RECOMP_ITAIL(0x0052E240u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0704(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0704u);

L_007B0704:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B0704: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x100u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x100u; /* 0x007B0707: add ecx, 0x100 */
    _flag_k = FK_ADD;
    goto L_005E3CE0; /* 0x007B070D: jmp 0x5e3ce0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005E3CE0: RECOMP_ITAIL(0x005E3CE0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0712(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0712u);

L_007B0712:
    ecx = MEM32(ebp + (-0x18)); /* 0x007B0712: mov ecx, dword ptr [ebp - 0x18] */
    goto L_004964E0; /* 0x007B0715: jmp 0x4964e0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_004964E0: RECOMP_ITAIL(0x004964E0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B071A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B071Au);

L_007B071A:
    ecx = MEM32(ebp + (-0x18)); /* 0x007B071A: mov ecx, dword ptr [ebp - 0x18] */
    goto L_0048A290; /* 0x007B071D: jmp 0x48a290 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0048A290: RECOMP_ITAIL(0x0048A290u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0722(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0722u);

L_007B0722:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B0722: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x118u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x118u; /* 0x007B0725: add ecx, 0x118 */
    _flag_k = FK_ADD;
    goto L_005E3D40; /* 0x007B072B: jmp 0x5e3d40 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005E3D40: RECOMP_ITAIL(0x005E3D40u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0730(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0730u);

L_007B0730:
    ecx = MEM32(ebp + (-0x18)); /* 0x007B0730: mov ecx, dword ptr [ebp - 0x18] */
    goto L_005EC170; /* 0x007B0733: jmp 0x5ec170 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005EC170: RECOMP_ITAIL(0x005EC170u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0738(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0738u);

L_007B0738:
    ecx = MEM32(ebp + (-0x18)); /* 0x007B0738: mov ecx, dword ptr [ebp - 0x18] */
    goto L_005E3FC0; /* 0x007B073B: jmp 0x5e3fc0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005E3FC0: RECOMP_ITAIL(0x005E3FC0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0740(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0740u);

L_007B0740:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B0740: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x130u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x130u; /* 0x007B0743: add ecx, 0x130 */
    _flag_k = FK_ADD;
    goto L_005E3DA0; /* 0x007B0749: jmp 0x5e3da0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005E3DA0: RECOMP_ITAIL(0x005E3DA0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B074E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B074Eu);

L_007B074E:
    ecx = MEM32(ebp + (-0x18)); /* 0x007B074E: mov ecx, dword ptr [ebp - 0x18] */
    goto L_0053CC70; /* 0x007B0751: jmp 0x53cc70 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0053CC70: RECOMP_ITAIL(0x0053CC70u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0756(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0756u);

L_007B0756:
    ecx = MEM32(ebp + (-0x18)); /* 0x007B0756: mov ecx, dword ptr [ebp - 0x18] */
    goto L_0052E240; /* 0x007B0759: jmp 0x52e240 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0052E240: RECOMP_ITAIL(0x0052E240u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B075E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B075Eu);

L_007B075E:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B075E: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x148u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x148u; /* 0x007B0761: add ecx, 0x148 */
    _flag_k = FK_ADD;
    goto L_005E3CE0; /* 0x007B0767: jmp 0x5e3ce0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005E3CE0: RECOMP_ITAIL(0x005E3CE0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B076C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B076Cu);

L_007B076C:
    ecx = MEM32(ebp + (-0x18)); /* 0x007B076C: mov ecx, dword ptr [ebp - 0x18] */
    goto L_0053CC70; /* 0x007B076F: jmp 0x53cc70 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0053CC70: RECOMP_ITAIL(0x0053CC70u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0774(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0774u);

L_007B0774:
    ecx = MEM32(ebp + (-0x18)); /* 0x007B0774: mov ecx, dword ptr [ebp - 0x18] */
    goto L_0052E240; /* 0x007B0777: jmp 0x52e240 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0052E240: RECOMP_ITAIL(0x0052E240u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B077C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B077Cu);

L_007B077C:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B077C: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x160u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x160u; /* 0x007B077F: add ecx, 0x160 */
    _flag_k = FK_ADD;
    goto L_005E3CE0; /* 0x007B0785: jmp 0x5e3ce0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005E3CE0: RECOMP_ITAIL(0x005E3CE0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B078A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B078Au);

L_007B078A:
    ecx = MEM32(ebp + (-0x18)); /* 0x007B078A: mov ecx, dword ptr [ebp - 0x18] */
    goto L_005EB960; /* 0x007B078D: jmp 0x5eb960 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005EB960: RECOMP_ITAIL(0x005EB960u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0792(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0792u);

L_007B0792:
    ecx = MEM32(ebp + (-0x18)); /* 0x007B0792: mov ecx, dword ptr [ebp - 0x18] */
    goto L_005E4020; /* 0x007B0795: jmp 0x5e4020 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005E4020: RECOMP_ITAIL(0x005E4020u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B079A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B079Au);

L_007B079A:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B079A: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x178u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x178u; /* 0x007B079D: add ecx, 0x178 */
    _flag_k = FK_ADD;
    goto L_005E3E00; /* 0x007B07A3: jmp 0x5e3e00 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005E3E00: RECOMP_ITAIL(0x005E3E00u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B07A8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B07A8u);

L_007B07A8:
    ecx = MEM32(ebp + (-0x18)); /* 0x007B07A8: mov ecx, dword ptr [ebp - 0x18] */
    goto L_005EB980; /* 0x007B07AB: jmp 0x5eb980 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005EB980: RECOMP_ITAIL(0x005EB980u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B07B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B07B0u);

L_007B07B0:
    ecx = MEM32(ebp + (-0x18)); /* 0x007B07B0: mov ecx, dword ptr [ebp - 0x18] */
    goto L_005E4080; /* 0x007B07B3: jmp 0x5e4080 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005E4080: RECOMP_ITAIL(0x005E4080u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B07B8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B07B8u);

L_007B07B8:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B07B8: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x190u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x190u; /* 0x007B07BB: add ecx, 0x190 */
    _flag_k = FK_ADD;
    goto L_005E3E60; /* 0x007B07C1: jmp 0x5e3e60 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005E3E60: RECOMP_ITAIL(0x005E3E60u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B07C6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B07C6u);

L_007B07C6:
    eax = MEM32(ebp + (-0x18)); /* 0x007B07C6: mov eax, dword ptr [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x007B07C9: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007B07CA: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007B07D0: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007B07D1: ret  */
    RECOMP_REGS_OUT();
}

void sub_007B07D2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B07D2u);

L_007B07D2:
    eax = MEM32(ebp + (-0x18)); /* 0x007B07D2: mov eax, dword ptr [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x007B07D5: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007B07D6: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007B07DC: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007B07DD: ret  */
    RECOMP_REGS_OUT();
}

void sub_007B07DE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B07DEu);

L_007B07DE:
    eax = MEM32(ebp + (-0x18)); /* 0x007B07DE: mov eax, dword ptr [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x007B07E1: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007B07E2: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007B07E8: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007B07E9: ret  */
    RECOMP_REGS_OUT();
}

void sub_007B07EA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B07EAu);

    goto L_007B07EA;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B07EA:
    edx = MEM32(esp + 0x8); /* 0x007B07EA: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B07EE: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x24)); /* 0x007B07F1: mov ecx, dword ptr [edx - 0x24] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B07F4: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B07F6: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083A228u; /* 0x007B07FB: mov eax, 0x83a228 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B0800: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B0810(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0810u);

L_007B0810:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B0810: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x007B0813: add ecx, 4 */
    _flag_k = FK_ADD;
    goto L_005E3F50; /* 0x007B0816: jmp 0x5e3f50 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005E3F50: RECOMP_ITAIL(0x005E3F50u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B081B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B081Bu);

L_007B081B:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B081B: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xCu; /* 0x007B081E: add ecx, 0xc */
    _flag_k = FK_ADD;
    goto L_005EB8A0; /* 0x007B0821: jmp 0x5eb8a0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005EB8A0: RECOMP_ITAIL(0x005EB8A0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0826(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0826u);

L_007B0826:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B0826: mov ecx, dword ptr [ebp - 0x10] */
    goto L_005EB560; /* 0x007B0829: jmp 0x5eb560 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005EB560: RECOMP_ITAIL(0x005EB560u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B082E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B082Eu);

L_007B082E:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B082E: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040B290; /* 0x007B0831: jmp 0x40b290 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B290: RECOMP_ITAIL(0x0040B290u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0836(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0836u);

L_007B0836:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B0836: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040B2E0; /* 0x007B0839: jmp 0x40b2e0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B2E0: RECOMP_ITAIL(0x0040B2E0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B083E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B083Eu);

L_007B083E:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B083E: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040B340; /* 0x007B0841: jmp 0x40b340 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B340: RECOMP_ITAIL(0x0040B340u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0846(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0846u);

    goto L_007B0846;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B0846:
    edx = MEM32(esp + 0x8); /* 0x007B0846: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B084A: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x10)); /* 0x007B084D: mov ecx, dword ptr [edx - 0x10] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B0850: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B0852: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083A3B0u; /* 0x007B0857: mov eax, 0x83a3b0 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B085C: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B0870(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0870u);

L_007B0870:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B0870: mov ecx, dword ptr [ebp - 0x10] */
    goto L_005EC0F0; /* 0x007B0873: jmp 0x5ec0f0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005EC0F0: RECOMP_ITAIL(0x005EC0F0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0878(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0878u);

L_007B0878:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B0878: mov ecx, dword ptr [ebp - 0x10] */
    goto L_005EC870; /* 0x007B087B: jmp 0x5ec870 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005EC870: RECOMP_ITAIL(0x005EC870u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0880(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0880u);

L_007B0880:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B0880: mov ecx, dword ptr [ebp - 0x10] */
    goto L_005EC940; /* 0x007B0883: jmp 0x5ec940 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005EC940: RECOMP_ITAIL(0x005EC940u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0888(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0888u);

L_007B0888:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B0888: mov ecx, dword ptr [ebp - 0x10] */
    { _itail_tgt = (uint32_t)(MEM32(0x7CC278)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B0891(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0891u);

    goto L_007B0891;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B0891:
    edx = MEM32(esp + 0x8); /* 0x007B0891: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B0895: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xC)); /* 0x007B0898: mov ecx, dword ptr [edx - 0xc] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B089B: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B089D: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083A404u; /* 0x007B08A2: mov eax, 0x83a404 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B08A7: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B08B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B08B0u);

L_007B08B0:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B08B0: mov ecx, dword ptr [ebp - 0x10] */
    goto L_005DD990; /* 0x007B08B3: jmp 0x5dd990 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005DD990: RECOMP_ITAIL(0x005DD990u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B08B8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B08B8u);

L_007B08B8:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B08B8: mov ecx, dword ptr [ebp - 0x10] */
    goto L_005E0190; /* 0x007B08BB: jmp 0x5e0190 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005E0190: RECOMP_ITAIL(0x005E0190u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B08C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B08C0u);

    goto L_007B08C0;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B08C0:
    edx = MEM32(esp + 0x8); /* 0x007B08C0: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B08C4: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x8)); /* 0x007B08C7: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B08CA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B08CC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083A448u; /* 0x007B08D1: mov eax, 0x83a448 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B08D6: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B08E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B08E0u);

L_007B08E0:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B08E0: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0052E240; /* 0x007B08E3: jmp 0x52e240 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0052E240: RECOMP_ITAIL(0x0052E240u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B08E8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B08E8u);

L_007B08E8:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B08E8: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0053CC70; /* 0x007B08EB: jmp 0x53cc70 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0053CC70: RECOMP_ITAIL(0x0053CC70u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B08F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B08F0u);

    goto L_007B08F0;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B08F0:
    edx = MEM32(esp + 0x8); /* 0x007B08F0: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B08F4: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x8)); /* 0x007B08F7: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B08FA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B08FC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083A47Cu; /* 0x007B0901: mov eax, 0x83a47c */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B0906: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B0910(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0910u);

L_007B0910:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B0910: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0048A290; /* 0x007B0913: jmp 0x48a290 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0048A290: RECOMP_ITAIL(0x0048A290u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0918(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0918u);

L_007B0918:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B0918: mov ecx, dword ptr [ebp - 0x10] */
    goto L_004964E0; /* 0x007B091B: jmp 0x4964e0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_004964E0: RECOMP_ITAIL(0x004964E0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0920(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0920u);

    goto L_007B0920;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B0920:
    edx = MEM32(esp + 0x8); /* 0x007B0920: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B0924: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x8)); /* 0x007B0927: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B092A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B092C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083A4B0u; /* 0x007B0931: mov eax, 0x83a4b0 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B0936: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B0940(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0940u);

L_007B0940:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B0940: mov ecx, dword ptr [ebp - 0x10] */
    goto L_005E3FC0; /* 0x007B0943: jmp 0x5e3fc0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005E3FC0: RECOMP_ITAIL(0x005E3FC0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0948(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0948u);

L_007B0948:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B0948: mov ecx, dword ptr [ebp - 0x10] */
    goto L_005EC170; /* 0x007B094B: jmp 0x5ec170 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005EC170: RECOMP_ITAIL(0x005EC170u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0950(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0950u);

    goto L_007B0950;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B0950:
    edx = MEM32(esp + 0x8); /* 0x007B0950: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B0954: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x8)); /* 0x007B0957: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B095A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B095C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083A4E4u; /* 0x007B0961: mov eax, 0x83a4e4 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B0966: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B0970(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0970u);

L_007B0970:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B0970: mov ecx, dword ptr [ebp - 0x10] */
    goto L_005E4020; /* 0x007B0973: jmp 0x5e4020 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005E4020: RECOMP_ITAIL(0x005E4020u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0978(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0978u);

L_007B0978:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B0978: mov ecx, dword ptr [ebp - 0x10] */
    goto L_005EB960; /* 0x007B097B: jmp 0x5eb960 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005EB960: RECOMP_ITAIL(0x005EB960u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0980(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0980u);

    goto L_007B0980;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B0980:
    edx = MEM32(esp + 0x8); /* 0x007B0980: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B0984: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x8)); /* 0x007B0987: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B098A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B098C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083A518u; /* 0x007B0991: mov eax, 0x83a518 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B0996: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B09A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B09A0u);

L_007B09A0:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B09A0: mov ecx, dword ptr [ebp - 0x10] */
    goto L_005E4080; /* 0x007B09A3: jmp 0x5e4080 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005E4080: RECOMP_ITAIL(0x005E4080u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B09A8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B09A8u);

L_007B09A8:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B09A8: mov ecx, dword ptr [ebp - 0x10] */
    goto L_005EB980; /* 0x007B09AB: jmp 0x5eb980 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005EB980: RECOMP_ITAIL(0x005EB980u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B09B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B09B0u);

    goto L_007B09B0;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B09B0:
    edx = MEM32(esp + 0x8); /* 0x007B09B0: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B09B4: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x8)); /* 0x007B09B7: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B09BA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B09BC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083A54Cu; /* 0x007B09C1: mov eax, 0x83a54c */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B09C6: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B09D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B09D0u);

L_007B09D0:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B09D0: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040B340; /* 0x007B09D3: jmp 0x40b340 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B340: RECOMP_ITAIL(0x0040B340u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B09D8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B09D8u);

L_007B09D8:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B09D8: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040B2E0; /* 0x007B09DB: jmp 0x40b2e0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B2E0: RECOMP_ITAIL(0x0040B2E0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B09E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B09E0u);

L_007B09E0:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B09E0: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040B290; /* 0x007B09E3: jmp 0x40b290 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B290: RECOMP_ITAIL(0x0040B290u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B09E8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B09E8u);

L_007B09E8:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B09E8: mov ecx, dword ptr [ebp - 0x14] */
    goto L_005EBB70; /* 0x007B09EB: jmp 0x5ebb70 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005EBB70: RECOMP_ITAIL(0x005EBB70u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B09F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B09F0u);

L_007B09F0:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B09F0: mov ecx, dword ptr [ebp - 0x10] */
    goto L_005E40E0; /* 0x007B09F3: jmp 0x5e40e0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005E40E0: RECOMP_ITAIL(0x005E40E0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B09F8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B09F8u);

L_007B09F8:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B09F8: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x007B09FB: add ecx, 8 */
    _flag_k = FK_ADD;
    goto L_005EBE70; /* 0x007B09FE: jmp 0x5ebe70 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005EBE70: RECOMP_ITAIL(0x005EBE70u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0A03(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0A03u);

L_007B0A03:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B0A03: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x14u; /* 0x007B0A06: add ecx, 0x14 */
    _flag_k = FK_ADD;
    goto L_005EBFC0; /* 0x007B0A09: jmp 0x5ebfc0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005EBFC0: RECOMP_ITAIL(0x005EBFC0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0A0E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0A0Eu);

    goto L_007B0A0E;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B0A0E:
    edx = MEM32(esp + 0x8); /* 0x007B0A0E: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B0A12: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x10)); /* 0x007B0A15: mov ecx, dword ptr [edx - 0x10] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B0A18: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B0A1A: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083A580u; /* 0x007B0A1F: mov eax, 0x83a580 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B0A24: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B0A30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0A30u);

L_007B0A30:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B0A30: mov ecx, dword ptr [ebp - 0x10] */
    goto L_005EB560; /* 0x007B0A33: jmp 0x5eb560 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005EB560: RECOMP_ITAIL(0x005EB560u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}
