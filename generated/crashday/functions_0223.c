#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_007B0A38(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0A38u);

L_007B0A38:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B0A38: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040B290; /* 0x007B0A3B: jmp 0x40b290 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B290: RECOMP_ITAIL(0x0040B290u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0A40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0A40u);

L_007B0A40:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B0A40: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040B2E0; /* 0x007B0A43: jmp 0x40b2e0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B2E0: RECOMP_ITAIL(0x0040B2E0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0A48(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0A48u);

L_007B0A48:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B0A48: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040B340; /* 0x007B0A4B: jmp 0x40b340 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B340: RECOMP_ITAIL(0x0040B340u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0A50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0A50u);

    goto L_007B0A50;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B0A50:
    edx = MEM32(esp + 0x8); /* 0x007B0A50: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B0A54: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x10)); /* 0x007B0A57: mov ecx, dword ptr [edx - 0x10] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B0A5A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B0A5C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083A5DCu; /* 0x007B0A61: mov eax, 0x83a5dc */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B0A66: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B0A70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0A70u);

L_007B0A70:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B0A70: mov ecx, dword ptr [ebp - 0x10] */
    goto L_005EC170; /* 0x007B0A73: jmp 0x5ec170 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005EC170: RECOMP_ITAIL(0x005EC170u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0A78(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0A78u);

    goto L_007B0A78;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B0A78:
    edx = MEM32(esp + 0x8); /* 0x007B0A78: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B0A7C: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x8)); /* 0x007B0A7F: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B0A82: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B0A84: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083A620u; /* 0x007B0A89: mov eax, 0x83a620 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B0A8E: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B0AA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0AA0u);

L_007B0AA0:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B0AA0: mov ecx, dword ptr [ebp - 0x10] */
    goto L_005EB960; /* 0x007B0AA3: jmp 0x5eb960 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005EB960: RECOMP_ITAIL(0x005EB960u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0AA8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0AA8u);

    goto L_007B0AA8;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B0AA8:
    edx = MEM32(esp + 0x8); /* 0x007B0AA8: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B0AAC: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x8)); /* 0x007B0AAF: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B0AB2: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B0AB4: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083A64Cu; /* 0x007B0AB9: mov eax, 0x83a64c */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B0ABE: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B0AD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0AD0u);

L_007B0AD0:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B0AD0: mov ecx, dword ptr [ebp - 0x10] */
    goto L_005EB980; /* 0x007B0AD3: jmp 0x5eb980 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005EB980: RECOMP_ITAIL(0x005EB980u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0AD8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0AD8u);

    goto L_007B0AD8;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B0AD8:
    edx = MEM32(esp + 0x8); /* 0x007B0AD8: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B0ADC: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x8)); /* 0x007B0ADF: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B0AE2: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B0AE4: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083A678u; /* 0x007B0AE9: mov eax, 0x83a678 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B0AEE: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B0B00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0B00u);

L_007B0B00:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B0B00: mov ecx, dword ptr [ebp - 0x10] */
    goto L_005EBB70; /* 0x007B0B03: jmp 0x5ebb70 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005EBB70: RECOMP_ITAIL(0x005EBB70u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0B08(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0B08u);

L_007B0B08:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B0B08: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040B290; /* 0x007B0B0B: jmp 0x40b290 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B290: RECOMP_ITAIL(0x0040B290u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0B10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0B10u);

L_007B0B10:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B0B10: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040B2E0; /* 0x007B0B13: jmp 0x40b2e0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B2E0: RECOMP_ITAIL(0x0040B2E0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0B18(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0B18u);

L_007B0B18:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B0B18: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040B340; /* 0x007B0B1B: jmp 0x40b340 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B340: RECOMP_ITAIL(0x0040B340u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0B20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0B20u);

    goto L_007B0B20;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B0B20:
    edx = MEM32(esp + 0x8); /* 0x007B0B20: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B0B24: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x10)); /* 0x007B0B27: mov ecx, dword ptr [edx - 0x10] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B0B2A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B0B2C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083A6A4u; /* 0x007B0B31: mov eax, 0x83a6a4 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B0B36: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B0B40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0B40u);

L_007B0B40:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B0B40: mov ecx, dword ptr [ebp - 0x10] */
    goto L_005E1B20; /* 0x007B0B43: jmp 0x5e1b20 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005E1B20: RECOMP_ITAIL(0x005E1B20u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0B48(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0B48u);

L_007B0B48:
    goto L_005EC160; /* 0x007B0B48: jmp 0x5ec160 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005EC160: RECOMP_ITAIL(0x005EC160u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0B4D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0B4Du);

L_007B0B4D:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B0B4D: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x70u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x70u; /* 0x007B0B50: add ecx, 0x70 */
    _flag_k = FK_ADD;
    goto L_0040A000; /* 0x007B0B53: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0B58(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0B58u);

L_007B0B58:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B0B58: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x88u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x88u; /* 0x007B0B5B: add ecx, 0x88 */
    _flag_k = FK_ADD;
    goto L_0040A000; /* 0x007B0B61: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0B66(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0B66u);

L_007B0B66:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B0B66: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xA0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xA0u; /* 0x007B0B69: add ecx, 0xa0 */
    _flag_k = FK_ADD;
    goto L_005E3B90; /* 0x007B0B6F: jmp 0x5e3b90 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005E3B90: RECOMP_ITAIL(0x005E3B90u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0B74(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0B74u);

L_007B0B74:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B0B74: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xBCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xBCu; /* 0x007B0B77: add ecx, 0xbc */
    _flag_k = FK_ADD;
    goto L_005E3C10; /* 0x007B0B7D: jmp 0x5e3c10 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005E3C10: RECOMP_ITAIL(0x005E3C10u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0B82(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0B82u);

L_007B0B82:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B0B82: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xD0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xD0u; /* 0x007B0B85: add ecx, 0xd0 */
    _flag_k = FK_ADD;
    goto L_005E3C80; /* 0x007B0B8B: jmp 0x5e3c80 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005E3C80: RECOMP_ITAIL(0x005E3C80u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0B90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0B90u);

L_007B0B90:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B0B90: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xE8u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xE8u; /* 0x007B0B93: add ecx, 0xe8 */
    _flag_k = FK_ADD;
    goto L_005E3CE0; /* 0x007B0B99: jmp 0x5e3ce0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005E3CE0: RECOMP_ITAIL(0x005E3CE0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0B9E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0B9Eu);

L_007B0B9E:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B0B9E: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x100u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x100u; /* 0x007B0BA1: add ecx, 0x100 */
    _flag_k = FK_ADD;
    goto L_005E3CE0; /* 0x007B0BA7: jmp 0x5e3ce0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005E3CE0: RECOMP_ITAIL(0x005E3CE0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0BAC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0BACu);

L_007B0BAC:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B0BAC: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x118u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x118u; /* 0x007B0BAF: add ecx, 0x118 */
    _flag_k = FK_ADD;
    goto L_005E3D40; /* 0x007B0BB5: jmp 0x5e3d40 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005E3D40: RECOMP_ITAIL(0x005E3D40u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0BBA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0BBAu);

L_007B0BBA:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B0BBA: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x130u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x130u; /* 0x007B0BBD: add ecx, 0x130 */
    _flag_k = FK_ADD;
    goto L_005E3DA0; /* 0x007B0BC3: jmp 0x5e3da0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005E3DA0: RECOMP_ITAIL(0x005E3DA0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0BC8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0BC8u);

L_007B0BC8:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B0BC8: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x148u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x148u; /* 0x007B0BCB: add ecx, 0x148 */
    _flag_k = FK_ADD;
    goto L_005E3CE0; /* 0x007B0BD1: jmp 0x5e3ce0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005E3CE0: RECOMP_ITAIL(0x005E3CE0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0BD6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0BD6u);

L_007B0BD6:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B0BD6: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x160u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x160u; /* 0x007B0BD9: add ecx, 0x160 */
    _flag_k = FK_ADD;
    goto L_005E3CE0; /* 0x007B0BDF: jmp 0x5e3ce0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005E3CE0: RECOMP_ITAIL(0x005E3CE0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0BE4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0BE4u);

L_007B0BE4:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B0BE4: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x178u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x178u; /* 0x007B0BE7: add ecx, 0x178 */
    _flag_k = FK_ADD;
    goto L_005E3E00; /* 0x007B0BED: jmp 0x5e3e00 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005E3E00: RECOMP_ITAIL(0x005E3E00u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0BF2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0BF2u);

L_007B0BF2:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B0BF2: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x190u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x190u; /* 0x007B0BF5: add ecx, 0x190 */
    _flag_k = FK_ADD;
    goto L_005E3E60; /* 0x007B0BFB: jmp 0x5e3e60 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005E3E60: RECOMP_ITAIL(0x005E3E60u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0C00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0C00u);

L_007B0C00:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B0C00: mov ecx, dword ptr [ebp - 0x14] */
    goto L_005E4080; /* 0x007B0C03: jmp 0x5e4080 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005E4080: RECOMP_ITAIL(0x005E4080u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0C08(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0C08u);

L_007B0C08:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B0C08: mov ecx, dword ptr [ebp - 0x14] */
    goto L_005EB980; /* 0x007B0C0B: jmp 0x5eb980 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005EB980: RECOMP_ITAIL(0x005EB980u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0C10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0C10u);

L_007B0C10:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B0C10: mov ecx, dword ptr [ebp - 0x14] */
    goto L_005E4020; /* 0x007B0C13: jmp 0x5e4020 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005E4020: RECOMP_ITAIL(0x005E4020u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0C18(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0C18u);

L_007B0C18:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B0C18: mov ecx, dword ptr [ebp - 0x14] */
    goto L_005EB960; /* 0x007B0C1B: jmp 0x5eb960 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005EB960: RECOMP_ITAIL(0x005EB960u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0C20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0C20u);

L_007B0C20:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B0C20: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0052E240; /* 0x007B0C23: jmp 0x52e240 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0052E240: RECOMP_ITAIL(0x0052E240u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0C28(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0C28u);

L_007B0C28:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B0C28: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0053CC70; /* 0x007B0C2B: jmp 0x53cc70 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0053CC70: RECOMP_ITAIL(0x0053CC70u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0C30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0C30u);

L_007B0C30:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B0C30: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0052E240; /* 0x007B0C33: jmp 0x52e240 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0052E240: RECOMP_ITAIL(0x0052E240u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0C38(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0C38u);

L_007B0C38:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B0C38: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0053CC70; /* 0x007B0C3B: jmp 0x53cc70 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0053CC70: RECOMP_ITAIL(0x0053CC70u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0C40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0C40u);

L_007B0C40:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B0C40: mov ecx, dword ptr [ebp - 0x14] */
    goto L_005E3FC0; /* 0x007B0C43: jmp 0x5e3fc0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005E3FC0: RECOMP_ITAIL(0x005E3FC0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0C48(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0C48u);

L_007B0C48:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B0C48: mov ecx, dword ptr [ebp - 0x14] */
    goto L_005EC170; /* 0x007B0C4B: jmp 0x5ec170 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005EC170: RECOMP_ITAIL(0x005EC170u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0C50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0C50u);

L_007B0C50:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B0C50: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0048A290; /* 0x007B0C53: jmp 0x48a290 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0048A290: RECOMP_ITAIL(0x0048A290u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0C58(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0C58u);

L_007B0C58:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B0C58: mov ecx, dword ptr [ebp - 0x14] */
    goto L_004964E0; /* 0x007B0C5B: jmp 0x4964e0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_004964E0: RECOMP_ITAIL(0x004964E0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0C60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0C60u);

L_007B0C60:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B0C60: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0052E240; /* 0x007B0C63: jmp 0x52e240 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0052E240: RECOMP_ITAIL(0x0052E240u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0C68(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0C68u);

L_007B0C68:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B0C68: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0053CC70; /* 0x007B0C6B: jmp 0x53cc70 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0053CC70: RECOMP_ITAIL(0x0053CC70u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0C70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0C70u);

L_007B0C70:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B0C70: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0052E240; /* 0x007B0C73: jmp 0x52e240 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0052E240: RECOMP_ITAIL(0x0052E240u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0C78(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0C78u);

L_007B0C78:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B0C78: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0053CC70; /* 0x007B0C7B: jmp 0x53cc70 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0053CC70: RECOMP_ITAIL(0x0053CC70u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0C80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0C80u);

L_007B0C80:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B0C80: mov ecx, dword ptr [ebp - 0x14] */
    goto L_005DD990; /* 0x007B0C83: jmp 0x5dd990 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005DD990: RECOMP_ITAIL(0x005DD990u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0C88(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0C88u);

L_007B0C88:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B0C88: mov ecx, dword ptr [ebp - 0x14] */
    goto L_005E0190; /* 0x007B0C8B: jmp 0x5e0190 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005E0190: RECOMP_ITAIL(0x005E0190u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0C90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0C90u);

L_007B0C90:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B0C90: mov ecx, dword ptr [ebp - 0x14] */
    goto L_005EC0F0; /* 0x007B0C93: jmp 0x5ec0f0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005EC0F0: RECOMP_ITAIL(0x005EC0F0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0C98(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0C98u);

L_007B0C98:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B0C98: mov ecx, dword ptr [ebp - 0x14] */
    goto L_005EC870; /* 0x007B0C9B: jmp 0x5ec870 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005EC870: RECOMP_ITAIL(0x005EC870u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0CA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0CA0u);

L_007B0CA0:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B0CA0: mov ecx, dword ptr [ebp - 0x14] */
    goto L_005EC940; /* 0x007B0CA3: jmp 0x5ec940 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005EC940: RECOMP_ITAIL(0x005EC940u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0CA8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0CA8u);

L_007B0CA8:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B0CA8: mov ecx, dword ptr [ebp - 0x14] */
    { _itail_tgt = (uint32_t)(MEM32(0x7CC278)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B0CB1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0CB1u);

L_007B0CB1:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B0CB1: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x007B0CB4: add ecx, 4 */
    _flag_k = FK_ADD;
    goto L_005E3F50; /* 0x007B0CB7: jmp 0x5e3f50 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005E3F50: RECOMP_ITAIL(0x005E3F50u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0CBC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0CBCu);

L_007B0CBC:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B0CBC: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xCu; /* 0x007B0CBF: add ecx, 0xc */
    _flag_k = FK_ADD;
    goto L_005EB8A0; /* 0x007B0CC2: jmp 0x5eb8a0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005EB8A0: RECOMP_ITAIL(0x005EB8A0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0CC7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0CC7u);

L_007B0CC7:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B0CC7: mov ecx, dword ptr [ebp - 0x14] */
    goto L_005EB560; /* 0x007B0CCA: jmp 0x5eb560 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005EB560: RECOMP_ITAIL(0x005EB560u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0CCF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0CCFu);

L_007B0CCF:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B0CCF: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040B290; /* 0x007B0CD2: jmp 0x40b290 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B290: RECOMP_ITAIL(0x0040B290u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0CD7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0CD7u);

L_007B0CD7:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B0CD7: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040B2E0; /* 0x007B0CDA: jmp 0x40b2e0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B2E0: RECOMP_ITAIL(0x0040B2E0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0CDF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0CDFu);

L_007B0CDF:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B0CDF: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040B340; /* 0x007B0CE2: jmp 0x40b340 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B340: RECOMP_ITAIL(0x0040B340u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0CE7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0CE7u);

    goto L_007B0CE7;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B0CE7:
    edx = MEM32(esp + 0x8); /* 0x007B0CE7: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B0CEB: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x1C)); /* 0x007B0CEE: mov ecx, dword ptr [edx - 0x1c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B0CF1: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B0CF3: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083A6E8u; /* 0x007B0CF8: mov eax, 0x83a6e8 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B0CFD: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B0D10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0D10u);

L_007B0D10:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B0D10: mov ecx, dword ptr [ebp - 0x10] */
    goto L_005E40E0; /* 0x007B0D13: jmp 0x5e40e0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005E40E0: RECOMP_ITAIL(0x005E40E0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0D18(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0D18u);

L_007B0D18:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B0D18: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x007B0D1B: add ecx, 8 */
    _flag_k = FK_ADD;
    goto L_005EBE70; /* 0x007B0D1E: jmp 0x5ebe70 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005EBE70: RECOMP_ITAIL(0x005EBE70u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0D23(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0D23u);

L_007B0D23:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B0D23: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x14u; /* 0x007B0D26: add ecx, 0x14 */
    _flag_k = FK_ADD;
    goto L_005EBFC0; /* 0x007B0D29: jmp 0x5ebfc0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005EBFC0: RECOMP_ITAIL(0x005EBFC0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0D2E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0D2Eu);

L_007B0D2E:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B0D2E: mov ecx, dword ptr [ebp - 0x10] */
    goto L_005EBB70; /* 0x007B0D31: jmp 0x5ebb70 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005EBB70: RECOMP_ITAIL(0x005EBB70u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0D36(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0D36u);

L_007B0D36:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B0D36: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040B290; /* 0x007B0D39: jmp 0x40b290 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B290: RECOMP_ITAIL(0x0040B290u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0D3E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0D3Eu);

L_007B0D3E:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B0D3E: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040B2E0; /* 0x007B0D41: jmp 0x40b2e0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B2E0: RECOMP_ITAIL(0x0040B2E0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0D46(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0D46u);

L_007B0D46:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B0D46: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040B340; /* 0x007B0D49: jmp 0x40b340 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B340: RECOMP_ITAIL(0x0040B340u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0D4E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0D4Eu);

    goto L_007B0D4E;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B0D4E:
    edx = MEM32(esp + 0x8); /* 0x007B0D4E: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B0D52: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x007B0D55: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B0D58: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B0D5A: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083A868u; /* 0x007B0D5F: mov eax, 0x83a868 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B0D64: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B0D70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0D70u);

L_007B0D70:
    ecx = MEM32(ebp + (-0x38)); /* 0x007B0D70: mov ecx, dword ptr [ebp - 0x38] */
    goto L_0040A000; /* 0x007B0D73: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0D78(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0D78u);

L_007B0D78:
    ecx = MEM32(ebp + (-0x30)); /* 0x007B0D78: mov ecx, dword ptr [ebp - 0x30] */
    goto L_0040A000; /* 0x007B0D7B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0D80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0D80u);

L_007B0D80:
    eax = MEM32(ebp + (-0x38)); /* 0x007B0D80: mov eax, dword ptr [ebp - 0x38] */
    PUSH32(esp, eax); /* 0x007B0D83: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007B0D84: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007B0D8A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007B0D8B: ret  */
    RECOMP_REGS_OUT();
}

void sub_007B0D8C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0D8Cu);

L_007B0D8C:
    eax = MEM32(ebp + (-0x34)); /* 0x007B0D8C: mov eax, dword ptr [ebp - 0x34] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x007B0D8F: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007B0DA4; /* 0x007B0D92: je 0x7b0da4 */
L_007B0D98:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x34))); _flag_b = (uint32_t)(0xFFFFFFFEu);
    MEM32(ebp + (-0x34)) = MEM32(ebp + (-0x34)) & 0xFFFFFFFEu; /* 0x007B0D98: and dword ptr [ebp - 0x34], 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x2C); /* 0x007B0D9C: lea ecx, [ebp - 0x2c] */
    goto L_0040A000; /* 0x007B0D9F: jmp 0x40a000 */
L_007B0DA4:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007B0DA4: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0DA5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0DA5u);

    goto L_007B0DA5;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B0DA5:
    edx = MEM32(esp + 0x8); /* 0x007B0DA5: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0x3C); /* 0x007B0DA9: lea eax, [edx - 0x3c] */
    ecx = MEM32(edx + (-0x40)); /* 0x007B0DAC: mov ecx, dword ptr [edx - 0x40] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B0DAF: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B0DB1: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x007B0DB6: add eax, 0xc */
    _flag_k = FK_ADD;
    ecx = MEM32(edx + (-0x8)); /* 0x007B0DB9: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B0DBC: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B0DBE: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083A8C4u; /* 0x007B0DC3: mov eax, 0x83a8c4 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B0DC8: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B0DD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0DD0u);

L_007B0DD0:
    ecx = ebp + (-0x30); /* 0x007B0DD0: lea ecx, [ebp - 0x30] */
    goto L_005F3D00; /* 0x007B0DD3: jmp 0x5f3d00 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005F3D00: RECOMP_ITAIL(0x005F3D00u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0DD8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0DD8u);

L_007B0DD8:
    ecx = ebp + (-0x1C); /* 0x007B0DD8: lea ecx, [ebp - 0x1c] */
    goto L_00419790; /* 0x007B0DDB: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0DE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0DE0u);

    goto L_007B0DE0;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B0DE0:
    edx = MEM32(esp + 0x8); /* 0x007B0DE0: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0x2C); /* 0x007B0DE4: lea eax, [edx - 0x2c] */
    ecx = MEM32(edx + (-0x30)); /* 0x007B0DE7: mov ecx, dword ptr [edx - 0x30] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B0DEA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B0DEC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083A910u; /* 0x007B0DF1: mov eax, 0x83a910 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B0DF6: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B0E00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0E00u);

L_007B0E00:
    ecx = ebp + (-0x34); /* 0x007B0E00: lea ecx, [ebp - 0x34] */
    goto L_005F3D00; /* 0x007B0E03: jmp 0x5f3d00 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005F3D00: RECOMP_ITAIL(0x005F3D00u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0E08(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0E08u);

L_007B0E08:
    ecx = ebp + (-0x20); /* 0x007B0E08: lea ecx, [ebp - 0x20] */
    goto L_00419790; /* 0x007B0E0B: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0E10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0E10u);

L_007B0E10:
    ecx = ebp + (-0x2C); /* 0x007B0E10: lea ecx, [ebp - 0x2c] */
    goto L_0040A000; /* 0x007B0E13: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0E18(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0E18u);

L_007B0E18:
    ecx = ebp + (-0x4C); /* 0x007B0E18: lea ecx, [ebp - 0x4c] */
    goto L_0040A000; /* 0x007B0E1B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0E20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0E20u);

    goto L_007B0E20;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B0E20:
    edx = MEM32(esp + 0x8); /* 0x007B0E20: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B0E24: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x58)); /* 0x007B0E27: mov ecx, dword ptr [edx - 0x58] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B0E2A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B0E2C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x8)); /* 0x007B0E31: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B0E34: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B0E36: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083A944u; /* 0x007B0E3B: mov eax, 0x83a944 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B0E40: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B0E50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0E50u);

L_007B0E50:
    ecx = ebp + (-0x40); /* 0x007B0E50: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x007B0E53: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0E58(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0E58u);

L_007B0E58:
    ecx = ebp + (-0x28); /* 0x007B0E58: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007B0E5B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0E60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0E60u);

L_007B0E60:
    ecx = ebp + (-0x28); /* 0x007B0E60: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007B0E63: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0E68(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0E68u);

L_007B0E68:
    ecx = ebp + (-0x58); /* 0x007B0E68: lea ecx, [ebp - 0x58] */
    goto L_0040A000; /* 0x007B0E6B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0E70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0E70u);

    goto L_007B0E70;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B0E70:
    edx = MEM32(esp + 0x8); /* 0x007B0E70: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B0E74: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x6C)); /* 0x007B0E77: mov ecx, dword ptr [edx - 0x6c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B0E7A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B0E7C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x007B0E81: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B0E84: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B0E86: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083A988u; /* 0x007B0E8B: mov eax, 0x83a988 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B0E90: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B0EA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0EA0u);

L_007B0EA0:
    ecx = ebp + (-0x2C); /* 0x007B0EA0: lea ecx, [ebp - 0x2c] */
    goto L_0040A000; /* 0x007B0EA3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0EA8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0EA8u);

L_007B0EA8:
    ecx = ebp + (-0x44); /* 0x007B0EA8: lea ecx, [ebp - 0x44] */
    goto L_0040A000; /* 0x007B0EAB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0EB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0EB0u);

    goto L_007B0EB0;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B0EB0:
    edx = MEM32(esp + 0x8); /* 0x007B0EB0: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B0EB4: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x48)); /* 0x007B0EB7: mov ecx, dword ptr [edx - 0x48] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B0EBA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B0EBC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x8)); /* 0x007B0EC1: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B0EC4: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B0EC6: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083A9CCu; /* 0x007B0ECB: mov eax, 0x83a9cc */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B0ED0: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B0EE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0EE0u);

L_007B0EE0:
    ecx = ebp + (-0x44); /* 0x007B0EE0: lea ecx, [ebp - 0x44] */
    goto L_0040A000; /* 0x007B0EE3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0EE8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0EE8u);

L_007B0EE8:
    ecx = ebp + (-0x2C); /* 0x007B0EE8: lea ecx, [ebp - 0x2c] */
    goto L_0040A000; /* 0x007B0EEB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0EF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0EF0u);

    goto L_007B0EF0;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B0EF0:
    edx = MEM32(esp + 0x8); /* 0x007B0EF0: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0x44); /* 0x007B0EF4: lea eax, [edx - 0x44] */
    ecx = MEM32(edx + (-0x48)); /* 0x007B0EF7: mov ecx, dword ptr [edx - 0x48] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B0EFA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B0EFC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x007B0F01: add eax, 8 */
    _flag_k = FK_ADD;
    ecx = MEM32(edx + (-0x8)); /* 0x007B0F04: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B0F07: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B0F09: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083AA00u; /* 0x007B0F0E: mov eax, 0x83aa00 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B0F13: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B0F20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0F20u);

L_007B0F20:
    ecx = ebp + (-0x30); /* 0x007B0F20: lea ecx, [ebp - 0x30] */
    goto L_005F3D00; /* 0x007B0F23: jmp 0x5f3d00 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005F3D00: RECOMP_ITAIL(0x005F3D00u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0F28(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0F28u);

    goto L_007B0F28;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B0F28:
    edx = MEM32(esp + 0x8); /* 0x007B0F28: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0x34); /* 0x007B0F2C: lea eax, [edx - 0x34] */
    ecx = MEM32(edx + (-0x38)); /* 0x007B0F2F: mov ecx, dword ptr [edx - 0x38] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B0F32: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B0F34: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083AA34u; /* 0x007B0F39: mov eax, 0x83aa34 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B0F3E: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B0F50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0F50u);

L_007B0F50:
    eax = MEM32(0x928128); /* 0x007B0F50: mov eax, dword ptr [0x928128] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    eax = eax & 0xFFFFFFFEu; /* 0x007B0F55: and eax, 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x928128) = eax; /* 0x007B0F58: mov dword ptr [0x928128], eax */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007B0F5D: ret  */
    RECOMP_REGS_OUT();
}

void sub_007B0F5E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0F5Eu);

    goto L_007B0F5E;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B0F5E:
    edx = MEM32(esp + 0x8); /* 0x007B0F5E: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B0F62: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x007B0F65: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B0F68: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B0F6A: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083AA60u; /* 0x007B0F6F: mov eax, 0x83aa60 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B0F74: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B0F80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0F80u);

L_007B0F80:
    ecx = ebp + (-0x28); /* 0x007B0F80: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007B0F83: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0F88(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0F88u);

    goto L_007B0F88;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B0F88:
    edx = MEM32(esp + 0x8); /* 0x007B0F88: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B0F8C: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x3C)); /* 0x007B0F8F: mov ecx, dword ptr [edx - 0x3c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B0F92: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B0F94: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x007B0F99: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B0F9C: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B0F9E: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083AA8Cu; /* 0x007B0FA3: mov eax, 0x83aa8c */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B0FA8: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B0FB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0FB0u);

L_007B0FB0:
    ecx = ebp + (-0x74); /* 0x007B0FB0: lea ecx, [ebp - 0x74] */
    goto L_0040A000; /* 0x007B0FB3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0FB8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0FB8u);

L_007B0FB8:
    ecx = ebp + (-0x5C); /* 0x007B0FB8: lea ecx, [ebp - 0x5c] */
    goto L_0040A000; /* 0x007B0FBB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0FC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0FC0u);

L_007B0FC0:
    ecx = ebp + (-0x7C); /* 0x007B0FC0: lea ecx, [ebp - 0x7c] */
    goto L_0051C800; /* 0x007B0FC3: jmp 0x51c800 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0051C800: RECOMP_ITAIL(0x0051C800u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}
