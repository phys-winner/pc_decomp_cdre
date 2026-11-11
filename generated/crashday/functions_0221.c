#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_007AFE19(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AFE19u);

L_007AFE19:
    ecx = ebp + (-0x370); /* 0x007AFE19: lea ecx, [ebp - 0x370] */
    goto L_005E0310; /* 0x007AFE1F: jmp 0x5e0310 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005E0310: RECOMP_ITAIL(0x005E0310u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AFE24(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AFE24u);

L_007AFE24:
    ecx = ebp + (-0x370); /* 0x007AFE24: lea ecx, [ebp - 0x370] */
    goto L_0040B290; /* 0x007AFE2A: jmp 0x40b290 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B290: RECOMP_ITAIL(0x0040B290u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AFE2F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AFE2Fu);

L_007AFE2F:
    ecx = ebp + (-0x370); /* 0x007AFE2F: lea ecx, [ebp - 0x370] */
    goto L_0040B2E0; /* 0x007AFE35: jmp 0x40b2e0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B2E0: RECOMP_ITAIL(0x0040B2E0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AFE3A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AFE3Au);

L_007AFE3A:
    ecx = ebp + (-0x370); /* 0x007AFE3A: lea ecx, [ebp - 0x370] */
    goto L_0040B340; /* 0x007AFE40: jmp 0x40b340 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B340: RECOMP_ITAIL(0x0040B340u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AFE45(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AFE45u);

    goto L_007AFE45;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007AFE45:
    edx = MEM32(esp + 0x8); /* 0x007AFE45: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007AFE49: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x378)); /* 0x007AFE4C: mov ecx, dword ptr [edx - 0x378] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AFE52: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AFE54: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x8)); /* 0x007AFE59: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AFE5C: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AFE5E: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x008396C0u; /* 0x007AFE63: mov eax, 0x8396c0 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007AFE68: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007AFE70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AFE70u);

L_007AFE70:
    ecx = MEM32(ebp + (-0x10)); /* 0x007AFE70: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x007AFE73: add ecx, 8 */
    _flag_k = FK_ADD;
    goto L_0040A000; /* 0x007AFE76: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AFE7B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AFE7Bu);

L_007AFE7B:
    ecx = MEM32(ebp + (-0x10)); /* 0x007AFE7B: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x20u; /* 0x007AFE7E: add ecx, 0x20 */
    _flag_k = FK_ADD;
    goto L_0040A000; /* 0x007AFE81: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AFE86(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AFE86u);

    goto L_007AFE86;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007AFE86:
    edx = MEM32(esp + 0x8); /* 0x007AFE86: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007AFE8A: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x10)); /* 0x007AFE8D: mov ecx, dword ptr [edx - 0x10] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AFE90: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AFE92: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00839910u; /* 0x007AFE97: mov eax, 0x839910 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007AFE9C: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007AFEB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AFEB0u);

L_007AFEB0:
    ecx = MEM32(ebp + (-0x30)); /* 0x007AFEB0: mov ecx, dword ptr [ebp - 0x30] */
    goto L_0040A000; /* 0x007AFEB3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AFEB8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AFEB8u);

L_007AFEB8:
    ecx = ebp + (-0x2C); /* 0x007AFEB8: lea ecx, [ebp - 0x2c] */
    goto L_0040A000; /* 0x007AFEBB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AFEC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AFEC0u);

    goto L_007AFEC0;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007AFEC0:
    edx = MEM32(esp + 0x8); /* 0x007AFEC0: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0x34); /* 0x007AFEC4: lea eax, [edx - 0x34] */
    ecx = MEM32(edx + (-0x38)); /* 0x007AFEC7: mov ecx, dword ptr [edx - 0x38] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AFECA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AFECC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x007AFED1: add eax, 0xc */
    _flag_k = FK_ADD;
    ecx = MEM32(edx + (-0x8)); /* 0x007AFED4: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AFED7: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AFED9: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00839944u; /* 0x007AFEDE: mov eax, 0x839944 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007AFEE3: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007AFEF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AFEF0u);

L_007AFEF0:
    ecx = ebp + (-0x40); /* 0x007AFEF0: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x007AFEF3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AFEF8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AFEF8u);

L_007AFEF8:
    ecx = ebp + (-0x40); /* 0x007AFEF8: lea ecx, [ebp - 0x40] */
    goto L_004296F0; /* 0x007AFEFB: jmp 0x4296f0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_004296F0: RECOMP_ITAIL(0x004296F0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AFF00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AFF00u);

L_007AFF00:
    ecx = ebp + (-0x40); /* 0x007AFF00: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x007AFF03: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AFF08(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AFF08u);

L_007AFF08:
    ecx = ebp + (-0x40); /* 0x007AFF08: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x007AFF0B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AFF10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AFF10u);

    goto L_007AFF10;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007AFF10:
    edx = MEM32(esp + 0x8); /* 0x007AFF10: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0x4C); /* 0x007AFF14: lea eax, [edx - 0x4c] */
    ecx = MEM32(edx + (-0x50)); /* 0x007AFF17: mov ecx, dword ptr [edx - 0x50] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AFF1A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AFF1C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x007AFF21: add eax, 0xc */
    _flag_k = FK_ADD;
    ecx = MEM32(edx + (-0x8)); /* 0x007AFF24: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AFF27: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AFF29: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00839978u; /* 0x007AFF2E: mov eax, 0x839978 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007AFF33: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007AFF40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AFF40u);

L_007AFF40:
    ecx = ebp + (-0x38); /* 0x007AFF40: lea ecx, [ebp - 0x38] */
    goto L_0040A000; /* 0x007AFF43: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AFF48(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AFF48u);

L_007AFF48:
    ecx = ebp + (-0x38); /* 0x007AFF48: lea ecx, [ebp - 0x38] */
    goto L_004296F0; /* 0x007AFF4B: jmp 0x4296f0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_004296F0: RECOMP_ITAIL(0x004296F0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AFF50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AFF50u);

L_007AFF50:
    ecx = ebp + (-0x38); /* 0x007AFF50: lea ecx, [ebp - 0x38] */
    goto L_0040A000; /* 0x007AFF53: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AFF58(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AFF58u);

L_007AFF58:
    ecx = ebp + (-0x38); /* 0x007AFF58: lea ecx, [ebp - 0x38] */
    goto L_0040A000; /* 0x007AFF5B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AFF60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AFF60u);

    goto L_007AFF60;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007AFF60:
    edx = MEM32(esp + 0x8); /* 0x007AFF60: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007AFF64: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x44)); /* 0x007AFF67: mov ecx, dword ptr [edx - 0x44] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AFF6A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AFF6C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x007AFF71: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AFF74: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AFF76: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x008399BCu; /* 0x007AFF7B: mov eax, 0x8399bc */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007AFF80: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007AFF90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AFF90u);

L_007AFF90:
    ecx = ebp + (-0x1C); /* 0x007AFF90: lea ecx, [ebp - 0x1c] */
    goto L_00419790; /* 0x007AFF93: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AFF98(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AFF98u);

    goto L_007AFF98;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007AFF98:
    edx = MEM32(esp + 0x8); /* 0x007AFF98: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0x1C); /* 0x007AFF9C: lea eax, [edx - 0x1c] */
    ecx = MEM32(edx + (-0x20)); /* 0x007AFF9F: mov ecx, dword ptr [edx - 0x20] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AFFA2: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AFFA4: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00839A00u; /* 0x007AFFA9: mov eax, 0x839a00 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007AFFAE: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007AFFC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AFFC0u);

L_007AFFC0:
    ecx = ebp + (-0x2C); /* 0x007AFFC0: lea ecx, [ebp - 0x2c] */
    goto L_0040A000; /* 0x007AFFC3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AFFC8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AFFC8u);

L_007AFFC8:
    ecx = MEM32(ebp + (-0x30)); /* 0x007AFFC8: mov ecx, dword ptr [ebp - 0x30] */
    goto L_0040A000; /* 0x007AFFCB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AFFD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AFFD0u);

    goto L_007AFFD0;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007AFFD0:
    edx = MEM32(esp + 0x8); /* 0x007AFFD0: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0x2C); /* 0x007AFFD4: lea eax, [edx - 0x2c] */
    ecx = MEM32(edx + (-0x30)); /* 0x007AFFD7: mov ecx, dword ptr [edx - 0x30] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AFFDA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AFFDC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x007AFFE1: add eax, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(edx + (-0x8)); /* 0x007AFFE4: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AFFE7: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AFFE9: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00839A2Cu; /* 0x007AFFEE: mov eax, 0x839a2c */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007AFFF3: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B0000(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0000u);

    goto L_007B0000;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B0000:
    edx = MEM32(esp + 0x8); /* 0x007B0000: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B0004: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x007B0007: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B000A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B000C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00839A60u; /* 0x007B0011: mov eax, 0x839a60 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B0016: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B0020(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0020u);

L_007B0020:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B0020: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040B340; /* 0x007B0023: jmp 0x40b340 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B340: RECOMP_ITAIL(0x0040B340u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0028(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0028u);

L_007B0028:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B0028: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040B2E0; /* 0x007B002B: jmp 0x40b2e0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B2E0: RECOMP_ITAIL(0x0040B2E0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0030(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0030u);

L_007B0030:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B0030: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040B290; /* 0x007B0033: jmp 0x40b290 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B290: RECOMP_ITAIL(0x0040B290u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0038(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0038u);

L_007B0038:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B0038: mov ecx, dword ptr [ebp - 0x14] */
    goto L_005E0310; /* 0x007B003B: jmp 0x5e0310 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005E0310: RECOMP_ITAIL(0x005E0310u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0040(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0040u);

    goto L_007B0040;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B0040:
    edx = MEM32(esp + 0x8); /* 0x007B0040: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B0044: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x1C)); /* 0x007B0047: mov ecx, dword ptr [edx - 0x1c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B004A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B004C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00839AB8u; /* 0x007B0051: mov eax, 0x839ab8 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B0056: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B0060(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0060u);

L_007B0060:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B0060: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040A000; /* 0x007B0063: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0068(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0068u);

    goto L_007B0068;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B0068:
    edx = MEM32(esp + 0x8); /* 0x007B0068: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B006C: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x007B006F: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B0072: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B0074: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00839AFCu; /* 0x007B0079: mov eax, 0x839afc */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B007E: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B0090(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0090u);

L_007B0090:
    ecx = MEM32(ebp + 0x8); /* 0x007B0090: mov ecx, dword ptr [ebp + 8] */
    goto L_0040A000; /* 0x007B0093: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0098(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0098u);

    goto L_007B0098;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B0098:
    edx = MEM32(esp + 0x8); /* 0x007B0098: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B009C: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x007B009F: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B00A2: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B00A4: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00839B28u; /* 0x007B00A9: mov eax, 0x839b28 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B00AE: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B00C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B00C0u);

    goto L_007B00C0;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B00C0:
    edx = MEM32(esp + 0x8); /* 0x007B00C0: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B00C4: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x1C)); /* 0x007B00C7: mov ecx, dword ptr [edx - 0x1c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B00CA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B00CC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00839B54u; /* 0x007B00D1: mov eax, 0x839b54 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B00D6: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B00E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B00E0u);

L_007B00E0:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B00E0: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0053CC70; /* 0x007B00E3: jmp 0x53cc70 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0053CC70: RECOMP_ITAIL(0x0053CC70u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B00E8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B00E8u);

    goto L_007B00E8;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B00E8:
    edx = MEM32(esp + 0x8); /* 0x007B00E8: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B00EC: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x10)); /* 0x007B00EF: mov ecx, dword ptr [edx - 0x10] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B00F2: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B00F4: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00839BACu; /* 0x007B00F9: mov eax, 0x839bac */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B00FE: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B0110(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0110u);

L_007B0110:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B0110: mov ecx, dword ptr [ebp - 0x10] */
    goto L_005E0190; /* 0x007B0113: jmp 0x5e0190 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005E0190: RECOMP_ITAIL(0x005E0190u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0118(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0118u);

    goto L_007B0118;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B0118:
    edx = MEM32(esp + 0x8); /* 0x007B0118: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B011C: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x10)); /* 0x007B011F: mov ecx, dword ptr [edx - 0x10] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B0122: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B0124: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00839BD8u; /* 0x007B0129: mov eax, 0x839bd8 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B012E: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B0140(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0140u);

    goto L_007B0140;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B0140:
    edx = MEM32(esp + 0x8); /* 0x007B0140: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B0144: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x007B0147: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B014A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B014C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00839C04u; /* 0x007B0151: mov eax, 0x839c04 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B0156: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B0160(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0160u);

    goto L_007B0160;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B0160:
    edx = MEM32(esp + 0x8); /* 0x007B0160: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B0164: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x1C)); /* 0x007B0167: mov ecx, dword ptr [edx - 0x1c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B016A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B016C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00839C5Cu; /* 0x007B0171: mov eax, 0x839c5c */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B0176: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B0180(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0180u);

    goto L_007B0180;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B0180:
    edx = MEM32(esp + 0x8); /* 0x007B0180: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B0184: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x1C)); /* 0x007B0187: mov ecx, dword ptr [edx - 0x1c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B018A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B018C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00839CB4u; /* 0x007B0191: mov eax, 0x839cb4 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B0196: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B01A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B01A0u);

L_007B01A0:
    ecx = MEM32(ebp + 0x8); /* 0x007B01A0: mov ecx, dword ptr [ebp + 8] */
    goto L_0040A000; /* 0x007B01A3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B01A8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B01A8u);

    goto L_007B01A8;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B01A8:
    edx = MEM32(esp + 0x8); /* 0x007B01A8: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B01AC: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xC)); /* 0x007B01AF: mov ecx, dword ptr [edx - 0xc] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B01B2: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B01B4: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00839D0Cu; /* 0x007B01B9: mov eax, 0x839d0c */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B01BE: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B01D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B01D0u);

    goto L_007B01D0;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B01D0:
    edx = MEM32(esp + 0x8); /* 0x007B01D0: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B01D4: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x007B01D7: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B01DA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B01DC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00839D38u; /* 0x007B01E1: mov eax, 0x839d38 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B01E6: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B01F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B01F0u);

L_007B01F0:
    ecx = MEM32(ebp + 0xC); /* 0x007B01F0: mov ecx, dword ptr [ebp + 0xc] */
    goto L_0040A000; /* 0x007B01F3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B01F8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B01F8u);

    goto L_007B01F8;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B01F8:
    edx = MEM32(esp + 0x8); /* 0x007B01F8: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B01FC: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x10)); /* 0x007B01FF: mov ecx, dword ptr [edx - 0x10] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B0202: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B0204: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00839D90u; /* 0x007B0209: mov eax, 0x839d90 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B020E: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B0220(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0220u);

    goto L_007B0220;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B0220:
    edx = MEM32(esp + 0x8); /* 0x007B0220: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B0224: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x1C)); /* 0x007B0227: mov ecx, dword ptr [edx - 0x1c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B022A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B022C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00839DBCu; /* 0x007B0231: mov eax, 0x839dbc */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B0236: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B0240(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0240u);

L_007B0240:
    goto L_00409980; /* 0x007B0240: jmp 0x409980 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00409980: RECOMP_ITAIL(0x00409980u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0245(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0245u);

L_007B0245:
    ecx = MEM32(ebp + (-0x18)); /* 0x007B0245: mov ecx, dword ptr [ebp - 0x18] */
    goto L_0040A000; /* 0x007B0248: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B024D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B024Du);

    goto L_007B024D;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B024D:
    edx = MEM32(esp + 0x8); /* 0x007B024D: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B0251: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x1C)); /* 0x007B0254: mov ecx, dword ptr [edx - 0x1c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B0257: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B0259: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00839E14u; /* 0x007B025E: mov eax, 0x839e14 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B0263: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B0270(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0270u);

L_007B0270:
    goto L_00409980; /* 0x007B0270: jmp 0x409980 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00409980: RECOMP_ITAIL(0x00409980u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0275(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0275u);

L_007B0275:
    ecx = MEM32(ebp + 0x8); /* 0x007B0275: mov ecx, dword ptr [ebp + 8] */
    goto L_0040A000; /* 0x007B0278: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B027D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B027Du);

L_007B027D:
    ecx = MEM32(ebp + 0x8); /* 0x007B027D: mov ecx, dword ptr [ebp + 8] */
    goto L_004296F0; /* 0x007B0280: jmp 0x4296f0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_004296F0: RECOMP_ITAIL(0x004296F0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0285(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0285u);

    goto L_007B0285;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B0285:
    edx = MEM32(esp + 0x8); /* 0x007B0285: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B0289: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x8)); /* 0x007B028C: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B028F: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B0291: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00839E7Cu; /* 0x007B0296: mov eax, 0x839e7c */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B029B: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B02A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B02A0u);

L_007B02A0:
    goto L_00409980; /* 0x007B02A0: jmp 0x409980 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00409980: RECOMP_ITAIL(0x00409980u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B02A5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B02A5u);

    goto L_007B02A5;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B02A5:
    edx = MEM32(esp + 0x8); /* 0x007B02A5: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B02A9: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x1C)); /* 0x007B02AC: mov ecx, dword ptr [edx - 0x1c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B02AF: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B02B1: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00839EB8u; /* 0x007B02B6: mov eax, 0x839eb8 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B02BB: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B02C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B02C0u);

L_007B02C0:
    ecx = ebp + (-0x54); /* 0x007B02C0: lea ecx, [ebp - 0x54] */
    goto L_0051C800; /* 0x007B02C3: jmp 0x51c800 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0051C800: RECOMP_ITAIL(0x0051C800u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B02C8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B02C8u);

    goto L_007B02C8;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B02C8:
    edx = MEM32(esp + 0x8); /* 0x007B02C8: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B02CC: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x58)); /* 0x007B02CF: mov ecx, dword ptr [edx - 0x58] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B02D2: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B02D4: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x007B02D9: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B02DC: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B02DE: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00839F18u; /* 0x007B02E3: mov eax, 0x839f18 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B02E8: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B02F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B02F0u);

L_007B02F0:
    ecx = ebp + (-0x30); /* 0x007B02F0: lea ecx, [ebp - 0x30] */
    goto L_005EB9B0; /* 0x007B02F3: jmp 0x5eb9b0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005EB9B0: RECOMP_ITAIL(0x005EB9B0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B02F8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B02F8u);

L_007B02F8:
    ecx = ebp + (-0x24); /* 0x007B02F8: lea ecx, [ebp - 0x24] */
    goto L_005EB9B0; /* 0x007B02FB: jmp 0x5eb9b0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005EB9B0: RECOMP_ITAIL(0x005EB9B0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0300(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0300u);

L_007B0300:
    ecx = ebp + (-0x30); /* 0x007B0300: lea ecx, [ebp - 0x30] */
    goto L_005E3440; /* 0x007B0303: jmp 0x5e3440 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005E3440: RECOMP_ITAIL(0x005E3440u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0308(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0308u);

L_007B0308:
    ecx = MEM32(ebp + 0x8); /* 0x007B0308: mov ecx, dword ptr [ebp + 8] */
    goto L_005EB9B0; /* 0x007B030B: jmp 0x5eb9b0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005EB9B0: RECOMP_ITAIL(0x005EB9B0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0310(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0310u);

L_007B0310:
    ecx = MEM32(ebp + 0x8); /* 0x007B0310: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xCu; /* 0x007B0313: add ecx, 0xc */
    _flag_k = FK_ADD;
    goto L_005EB9B0; /* 0x007B0316: jmp 0x5eb9b0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005EB9B0: RECOMP_ITAIL(0x005EB9B0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B031B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B031Bu);

L_007B031B:
    ecx = ebp + (-0x48); /* 0x007B031B: lea ecx, [ebp - 0x48] */
    goto L_005E3440; /* 0x007B031E: jmp 0x5e3440 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005E3440: RECOMP_ITAIL(0x005E3440u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0323(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0323u);

L_007B0323:
    ecx = ebp + (-0x50); /* 0x007B0323: lea ecx, [ebp - 0x50] */
    goto L_005E34F0; /* 0x007B0326: jmp 0x5e34f0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005E34F0: RECOMP_ITAIL(0x005E34F0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B032B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B032Bu);

L_007B032B:
    ecx = ebp + (-0x48); /* 0x007B032B: lea ecx, [ebp - 0x48] */
    goto L_005E3440; /* 0x007B032E: jmp 0x5e3440 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005E3440: RECOMP_ITAIL(0x005E3440u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0333(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0333u);

    goto L_007B0333;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B0333:
    edx = MEM32(esp + 0x8); /* 0x007B0333: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B0337: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x58)); /* 0x007B033A: mov ecx, dword ptr [edx - 0x58] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B033D: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B033F: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00839F48u; /* 0x007B0344: mov eax, 0x839f48 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B0349: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B0350(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0350u);

L_007B0350:
    ecx = ebp + (-0x8A0); /* 0x007B0350: lea ecx, [ebp - 0x8a0] */
    goto L_005E3540; /* 0x007B0356: jmp 0x5e3540 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005E3540: RECOMP_ITAIL(0x005E3540u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B035B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B035Bu);

L_007B035B:
    ecx = ebp + (-0x8C0); /* 0x007B035B: lea ecx, [ebp - 0x8c0] */
    goto L_005F3D00; /* 0x007B0361: jmp 0x5f3d00 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005F3D00: RECOMP_ITAIL(0x005F3D00u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0366(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0366u);

L_007B0366:
    ecx = ebp + (-0x8E4); /* 0x007B0366: lea ecx, [ebp - 0x8e4] */
    goto L_00419790; /* 0x007B036C: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0371(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0371u);

L_007B0371:
    ecx = ebp + (-0x8F8); /* 0x007B0371: lea ecx, [ebp - 0x8f8] */
    goto L_005F3D00; /* 0x007B0377: jmp 0x5f3d00 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005F3D00: RECOMP_ITAIL(0x005F3D00u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B037C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B037Cu);

L_007B037C:
    ecx = ebp + (-0x8E4); /* 0x007B037C: lea ecx, [ebp - 0x8e4] */
    goto L_00419790; /* 0x007B0382: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0387(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0387u);

L_007B0387:
    ecx = ebp + (-0x8AC); /* 0x007B0387: lea ecx, [ebp - 0x8ac] */
    goto L_00419790; /* 0x007B038D: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0392(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0392u);

L_007B0392:
    ecx = MEM32(ebp + (-0x8D4)); /* 0x007B0392: mov ecx, dword ptr [ebp - 0x8d4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x58u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 0x58u; /* 0x007B0398: sub ecx, 0x58 */
    _flag_k = FK_CMP;
    { _itail_tgt = (uint32_t)(MEM32(0x7CC434)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B03A1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B03A1u);

L_007B03A1:
    ecx = MEM32(ebp + (-0x8D4)); /* 0x007B03A1: mov ecx, dword ptr [ebp - 0x8d4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x60u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 0x60u; /* 0x007B03A7: sub ecx, 0x60 */
    _flag_k = FK_CMP;
    goto L_0053BD90; /* 0x007B03AA: jmp 0x53bd90 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0053BD90: RECOMP_ITAIL(0x0053BD90u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B03AF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B03AFu);

    goto L_007B03AF;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B03AF:
    edx = MEM32(esp + 0x8); /* 0x007B03AF: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0x8FC); /* 0x007B03B3: lea eax, [edx - 0x8fc] */
    ecx = MEM32(edx + (-0x900)); /* 0x007B03B9: mov ecx, dword ptr [edx - 0x900] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B03BF: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B03C1: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x007B03C6: add eax, 0xc */
    _flag_k = FK_ADD;
    ecx = MEM32(edx + (-0x8)); /* 0x007B03C9: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B03CC: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B03CE: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00839FB0u; /* 0x007B03D3: mov eax, 0x839fb0 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B03D8: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B03E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B03E0u);

L_007B03E0:
    ecx = ebp + (-0x60); /* 0x007B03E0: lea ecx, [ebp - 0x60] */
    goto L_0040A000; /* 0x007B03E3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B03E8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B03E8u);

L_007B03E8:
    ecx = ebp + (-0x48); /* 0x007B03E8: lea ecx, [ebp - 0x48] */
    goto L_0040A000; /* 0x007B03EB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B03F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B03F0u);

L_007B03F0:
    ecx = ebp + (-0x60); /* 0x007B03F0: lea ecx, [ebp - 0x60] */
    goto L_00441610; /* 0x007B03F3: jmp 0x441610 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00441610: RECOMP_ITAIL(0x00441610u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B03F8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B03F8u);

L_007B03F8:
    ecx = ebp + (-0x80); /* 0x007B03F8: lea ecx, [ebp - 0x80] */
    goto L_005F3D00; /* 0x007B03FB: jmp 0x5f3d00 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005F3D00: RECOMP_ITAIL(0x005F3D00u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0400(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0400u);

    goto L_007B0400;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B0400:
    edx = MEM32(esp + 0x8); /* 0x007B0400: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0x8C); /* 0x007B0404: lea eax, [edx - 0x8c] */
    ecx = MEM32(edx + (-0x90)); /* 0x007B040A: mov ecx, dword ptr [edx - 0x90] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B0410: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B0412: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x007B0417: add eax, 0xc */
    _flag_k = FK_ADD;
    ecx = MEM32(edx + (-0x8)); /* 0x007B041A: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B041D: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B041F: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083A018u; /* 0x007B0424: mov eax, 0x83a018 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B0429: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B0430(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0430u);

L_007B0430:
    ecx = ebp + (-0xA8); /* 0x007B0430: lea ecx, [ebp - 0xa8] */
    goto L_005F3D00; /* 0x007B0436: jmp 0x5f3d00 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005F3D00: RECOMP_ITAIL(0x005F3D00u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B043B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B043Bu);

L_007B043B:
    ecx = ebp + (-0x88); /* 0x007B043B: lea ecx, [ebp - 0x88] */
    goto L_0054EBE0; /* 0x007B0441: jmp 0x54ebe0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0054EBE0: RECOMP_ITAIL(0x0054EBE0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0446(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0446u);

L_007B0446:
    ecx = ebp + (-0x88); /* 0x007B0446: lea ecx, [ebp - 0x88] */
    goto L_005E35C0; /* 0x007B044C: jmp 0x5e35c0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005E35C0: RECOMP_ITAIL(0x005E35C0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0451(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0451u);

L_007B0451:
    ecx = ebp + (-0x88); /* 0x007B0451: lea ecx, [ebp - 0x88] */
    goto L_0054EBE0; /* 0x007B0457: jmp 0x54ebe0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0054EBE0: RECOMP_ITAIL(0x0054EBE0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B045C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B045Cu);

L_007B045C:
    ecx = MEM32(ebp + (-0xBC)); /* 0x007B045C: mov ecx, dword ptr [ebp - 0xbc] */
    goto L_00441610; /* 0x007B0462: jmp 0x441610 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00441610: RECOMP_ITAIL(0x00441610u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0467(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0467u);

L_007B0467:
    ecx = MEM32(ebp + (-0xBC)); /* 0x007B0467: mov ecx, dword ptr [ebp - 0xbc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x48u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x48u; /* 0x007B046D: add ecx, 0x48 */
    _flag_k = FK_ADD;
    goto L_00419790; /* 0x007B0470: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0475(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0475u);

L_007B0475:
    ecx = ebp + (-0x94); /* 0x007B0475: lea ecx, [ebp - 0x94] */
    goto L_00419790; /* 0x007B047B: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0480(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0480u);

    goto L_007B0480;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B0480:
    edx = MEM32(esp + 0x8); /* 0x007B0480: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0xBC); /* 0x007B0484: lea eax, [edx - 0xbc] */
    ecx = MEM32(edx + (-0xC0)); /* 0x007B048A: mov ecx, dword ptr [edx - 0xc0] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B0490: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B0492: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x007B0497: add eax, 0xc */
    _flag_k = FK_ADD;
    ecx = MEM32(edx + (-0x8)); /* 0x007B049A: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B049D: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B049F: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083A05Cu; /* 0x007B04A4: mov eax, 0x83a05c */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B04A9: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B04B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B04B0u);

L_007B04B0:
    ecx = ebp + (-0x30); /* 0x007B04B0: lea ecx, [ebp - 0x30] */
    goto L_005F3D00; /* 0x007B04B3: jmp 0x5f3d00 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005F3D00: RECOMP_ITAIL(0x005F3D00u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B04B8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B04B8u);

L_007B04B8:
    ecx = ebp + (-0x1C); /* 0x007B04B8: lea ecx, [ebp - 0x1c] */
    goto L_00419790; /* 0x007B04BB: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B04C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B04C0u);

    goto L_007B04C0;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B04C0:
    edx = MEM32(esp + 0x8); /* 0x007B04C0: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0x44); /* 0x007B04C4: lea eax, [edx - 0x44] */
    ecx = MEM32(edx + (-0x48)); /* 0x007B04C7: mov ecx, dword ptr [edx - 0x48] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B04CA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B04CC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083A0B8u; /* 0x007B04D1: mov eax, 0x83a0b8 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B04D6: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B04E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B04E0u);

L_007B04E0:
    ecx = ebp + 0xC; /* 0x007B04E0: lea ecx, [ebp + 0xc] */
    goto L_005F3D00; /* 0x007B04E3: jmp 0x5f3d00 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005F3D00: RECOMP_ITAIL(0x005F3D00u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B04E8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B04E8u);

L_007B04E8:
    ecx = ebp + (-0xF8); /* 0x007B04E8: lea ecx, [ebp - 0xf8] */
    goto L_005F3D00; /* 0x007B04EE: jmp 0x5f3d00 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005F3D00: RECOMP_ITAIL(0x005F3D00u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B04F3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B04F3u);

L_007B04F3:
    ecx = ebp + (-0x6C); /* 0x007B04F3: lea ecx, [ebp - 0x6c] */
    goto L_00441610; /* 0x007B04F6: jmp 0x441610 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00441610: RECOMP_ITAIL(0x00441610u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B04FB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B04FBu);

L_007B04FB:
    ecx = ebp + (-0xE4); /* 0x007B04FB: lea ecx, [ebp - 0xe4] */
    goto L_00419790; /* 0x007B0501: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B0506(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B0506u);

L_007B0506:
    ecx = ebp + 0x20; /* 0x007B0506: lea ecx, [ebp + 0x20] */
    goto L_00419790; /* 0x007B0509: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}
