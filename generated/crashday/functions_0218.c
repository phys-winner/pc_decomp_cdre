#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_007AEE1A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AEE1Au);

L_007AEE1A:
    ecx = ebp + (-0x54); /* 0x007AEE1A: lea ecx, [ebp - 0x54] */
    goto L_005D7D50; /* 0x007AEE1D: jmp 0x5d7d50 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005D7D50: RECOMP_ITAIL(0x005D7D50u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AEE22(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AEE22u);

L_007AEE22:
    ecx = ebp + (-0x5C); /* 0x007AEE22: lea ecx, [ebp - 0x5c] */
    goto L_005D7C40; /* 0x007AEE25: jmp 0x5d7c40 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005D7C40: RECOMP_ITAIL(0x005D7C40u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AEE2A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AEE2Au);

L_007AEE2A:
    ecx = ebp + (-0x54); /* 0x007AEE2A: lea ecx, [ebp - 0x54] */
    goto L_005D7D50; /* 0x007AEE2D: jmp 0x5d7d50 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005D7D50: RECOMP_ITAIL(0x005D7D50u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AEE32(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AEE32u);

L_007AEE32:
    ecx = MEM32(ebp + (-0x28)); /* 0x007AEE32: mov ecx, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x007AEE35: add ecx, 4 */
    _flag_k = FK_ADD;
    goto L_005D6D20; /* 0x007AEE38: jmp 0x5d6d20 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005D6D20: RECOMP_ITAIL(0x005D6D20u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AEE3D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AEE3Du);

    goto L_007AEE3D;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007AEE3D:
    edx = MEM32(esp + 0x8); /* 0x007AEE3D: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007AEE41: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x64)); /* 0x007AEE44: mov ecx, dword ptr [edx - 0x64] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AEE47: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AEE49: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00838798u; /* 0x007AEE4E: mov eax, 0x838798 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007AEE53: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007AEE60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AEE60u);

L_007AEE60:
    ecx = ebp + (-0x30); /* 0x007AEE60: lea ecx, [ebp - 0x30] */
    goto L_005F3D00; /* 0x007AEE63: jmp 0x5f3d00 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005F3D00: RECOMP_ITAIL(0x005F3D00u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AEE68(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AEE68u);

L_007AEE68:
    ecx = ebp + (-0x1C); /* 0x007AEE68: lea ecx, [ebp - 0x1c] */
    goto L_00419790; /* 0x007AEE6B: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AEE70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AEE70u);

    goto L_007AEE70;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007AEE70:
    edx = MEM32(esp + 0x8); /* 0x007AEE70: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007AEE74: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x2C)); /* 0x007AEE77: mov ecx, dword ptr [edx - 0x2c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AEE7A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AEE7C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00838828u; /* 0x007AEE81: mov eax, 0x838828 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007AEE86: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007AEE90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AEE90u);

L_007AEE90:
    ecx = MEM32(ebp + (-0x40)); /* 0x007AEE90: mov ecx, dword ptr [ebp - 0x40] */
    goto L_0040A000; /* 0x007AEE93: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AEE98(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AEE98u);

L_007AEE98:
    ecx = MEM32(ebp + (-0x38)); /* 0x007AEE98: mov ecx, dword ptr [ebp - 0x38] */
    goto L_0040A000; /* 0x007AEE9B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AEEA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AEEA0u);

L_007AEEA0:
    ecx = ebp + (-0x30); /* 0x007AEEA0: lea ecx, [ebp - 0x30] */
    goto L_005F3D00; /* 0x007AEEA3: jmp 0x5f3d00 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005F3D00: RECOMP_ITAIL(0x005F3D00u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AEEA8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AEEA8u);

L_007AEEA8:
    ecx = ebp + (-0x1C); /* 0x007AEEA8: lea ecx, [ebp - 0x1c] */
    goto L_00419790; /* 0x007AEEAB: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AEEB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AEEB0u);

    goto L_007AEEB0;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007AEEB0:
    edx = MEM32(esp + 0x8); /* 0x007AEEB0: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0x44); /* 0x007AEEB4: lea eax, [edx - 0x44] */
    ecx = MEM32(edx + (-0x48)); /* 0x007AEEB7: mov ecx, dword ptr [edx - 0x48] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AEEBA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AEEBC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083885Cu; /* 0x007AEEC1: mov eax, 0x83885c */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007AEEC6: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007AEED0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AEED0u);

L_007AEED0:
    ecx = MEM32(ebp + (-0x48)); /* 0x007AEED0: mov ecx, dword ptr [ebp - 0x48] */
    goto L_0040A000; /* 0x007AEED3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AEED8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AEED8u);

L_007AEED8:
    ecx = MEM32(ebp + (-0x4C)); /* 0x007AEED8: mov ecx, dword ptr [ebp - 0x4c] */
    goto L_0040A000; /* 0x007AEEDB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AEEE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AEEE0u);

L_007AEEE0:
    ecx = ebp + (-0x30); /* 0x007AEEE0: lea ecx, [ebp - 0x30] */
    goto L_005F3D00; /* 0x007AEEE3: jmp 0x5f3d00 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005F3D00: RECOMP_ITAIL(0x005F3D00u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AEEE8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AEEE8u);

L_007AEEE8:
    ecx = MEM32(ebp + (-0x4C)); /* 0x007AEEE8: mov ecx, dword ptr [ebp - 0x4c] */
    goto L_0040A000; /* 0x007AEEEB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AEEF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AEEF0u);

L_007AEEF0:
    ecx = MEM32(ebp + (-0x50)); /* 0x007AEEF0: mov ecx, dword ptr [ebp - 0x50] */
    goto L_0040A000; /* 0x007AEEF3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AEEF8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AEEF8u);

L_007AEEF8:
    ecx = ebp + (-0x1C); /* 0x007AEEF8: lea ecx, [ebp - 0x1c] */
    goto L_00419790; /* 0x007AEEFB: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AEF00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AEF00u);

    goto L_007AEF00;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007AEF00:
    edx = MEM32(esp + 0x8); /* 0x007AEF00: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0x54); /* 0x007AEF04: lea eax, [edx - 0x54] */
    ecx = MEM32(edx + (-0x58)); /* 0x007AEF07: mov ecx, dword ptr [edx - 0x58] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AEF0A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AEF0C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x008388A0u; /* 0x007AEF11: mov eax, 0x8388a0 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007AEF16: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007AEF20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AEF20u);

L_007AEF20:
    ecx = ebp + (-0x30); /* 0x007AEF20: lea ecx, [ebp - 0x30] */
    goto L_005F3D00; /* 0x007AEF23: jmp 0x5f3d00 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005F3D00: RECOMP_ITAIL(0x005F3D00u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AEF28(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AEF28u);

L_007AEF28:
    ecx = ebp + (-0x1C); /* 0x007AEF28: lea ecx, [ebp - 0x1c] */
    goto L_00419790; /* 0x007AEF2B: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AEF30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AEF30u);

    goto L_007AEF30;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007AEF30:
    edx = MEM32(esp + 0x8); /* 0x007AEF30: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007AEF34: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x30)); /* 0x007AEF37: mov ecx, dword ptr [edx - 0x30] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AEF3A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AEF3C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00838918u; /* 0x007AEF41: mov eax, 0x838918 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007AEF46: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007AEF50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AEF50u);

L_007AEF50:
    ecx = ebp + (-0x34); /* 0x007AEF50: lea ecx, [ebp - 0x34] */
    goto L_005F3D00; /* 0x007AEF53: jmp 0x5f3d00 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005F3D00: RECOMP_ITAIL(0x005F3D00u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AEF58(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AEF58u);

L_007AEF58:
    ecx = ebp + (-0x20); /* 0x007AEF58: lea ecx, [ebp - 0x20] */
    goto L_00419790; /* 0x007AEF5B: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AEF60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AEF60u);

    goto L_007AEF60;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007AEF60:
    edx = MEM32(esp + 0x8); /* 0x007AEF60: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007AEF64: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x3C)); /* 0x007AEF67: mov ecx, dword ptr [edx - 0x3c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AEF6A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AEF6C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083894Cu; /* 0x007AEF71: mov eax, 0x83894c */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007AEF76: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007AEF80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AEF80u);

L_007AEF80:
    ecx = ebp + (-0x30); /* 0x007AEF80: lea ecx, [ebp - 0x30] */
    goto L_005F3D00; /* 0x007AEF83: jmp 0x5f3d00 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005F3D00: RECOMP_ITAIL(0x005F3D00u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AEF88(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AEF88u);

    goto L_007AEF88;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007AEF88:
    edx = MEM32(esp + 0x8); /* 0x007AEF88: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007AEF8C: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x2C)); /* 0x007AEF8F: mov ecx, dword ptr [edx - 0x2c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AEF92: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AEF94: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00838980u; /* 0x007AEF99: mov eax, 0x838980 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007AEF9E: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007AEFB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AEFB0u);

L_007AEFB0:
    ecx = ebp + (-0x3C); /* 0x007AEFB0: lea ecx, [ebp - 0x3c] */
    goto L_005F3D00; /* 0x007AEFB3: jmp 0x5f3d00 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005F3D00: RECOMP_ITAIL(0x005F3D00u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AEFB8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AEFB8u);

L_007AEFB8:
    ecx = ebp + (-0x5C); /* 0x007AEFB8: lea ecx, [ebp - 0x5c] */
    goto L_005F3D00; /* 0x007AEFBB: jmp 0x5f3d00 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005F3D00: RECOMP_ITAIL(0x005F3D00u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AEFC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AEFC0u);

L_007AEFC0:
    ecx = ebp + (-0x48); /* 0x007AEFC0: lea ecx, [ebp - 0x48] */
    goto L_00419790; /* 0x007AEFC3: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AEFC8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AEFC8u);

L_007AEFC8:
    ecx = MEM32(ebp + (-0x10)); /* 0x007AEFC8: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x14u; /* 0x007AEFCB: add ecx, 0x14 */
    _flag_k = FK_ADD;
    goto L_00419790; /* 0x007AEFCE: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AEFD3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AEFD3u);

L_007AEFD3:
    ecx = MEM32(ebp + (-0x14)); /* 0x007AEFD3: mov ecx, dword ptr [ebp - 0x14] */
    goto L_005F3D00; /* 0x007AEFD6: jmp 0x5f3d00 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005F3D00: RECOMP_ITAIL(0x005F3D00u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AEFDB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AEFDBu);

L_007AEFDB:
    ecx = ebp + (-0x28); /* 0x007AEFDB: lea ecx, [ebp - 0x28] */
    goto L_00419790; /* 0x007AEFDE: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AEFE3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AEFE3u);

    goto L_007AEFE3;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007AEFE3:
    edx = MEM32(esp + 0x8); /* 0x007AEFE3: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007AEFE7: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x64)); /* 0x007AEFEA: mov ecx, dword ptr [edx - 0x64] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AEFED: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AEFEF: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x008389ACu; /* 0x007AEFF4: mov eax, 0x8389ac */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007AEFF9: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007AF000(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF000u);

L_007AF000:
    ecx = MEM32(ebp + (-0x10)); /* 0x007AF000: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x14u; /* 0x007AF003: add ecx, 0x14 */
    _flag_k = FK_ADD;
    goto L_00419790; /* 0x007AF006: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF00B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF00Bu);

L_007AF00B:
    ecx = MEM32(ebp + 0xC); /* 0x007AF00B: mov ecx, dword ptr [ebp + 0xc] */
    goto L_005F3D00; /* 0x007AF00E: jmp 0x5f3d00 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005F3D00: RECOMP_ITAIL(0x005F3D00u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF013(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF013u);

    goto L_007AF013;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007AF013:
    edx = MEM32(esp + 0x8); /* 0x007AF013: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007AF017: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x007AF01A: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AF01D: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AF01F: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00838A00u; /* 0x007AF024: mov eax, 0x838a00 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007AF029: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007AF030(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF030u);

L_007AF030:
    ecx = ebp + (-0x30); /* 0x007AF030: lea ecx, [ebp - 0x30] */
    goto L_005F3D00; /* 0x007AF033: jmp 0x5f3d00 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005F3D00: RECOMP_ITAIL(0x005F3D00u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF038(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF038u);

L_007AF038:
    ecx = ebp + (-0x1C); /* 0x007AF038: lea ecx, [ebp - 0x1c] */
    goto L_00419790; /* 0x007AF03B: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF040(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF040u);

    goto L_007AF040;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007AF040:
    edx = MEM32(esp + 0x8); /* 0x007AF040: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007AF044: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x38)); /* 0x007AF047: mov ecx, dword ptr [edx - 0x38] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AF04A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AF04C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00838A34u; /* 0x007AF051: mov eax, 0x838a34 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007AF056: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007AF060(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF060u);

L_007AF060:
    ecx = ebp + (-0x80); /* 0x007AF060: lea ecx, [ebp - 0x80] */
    goto L_0054E9F0; /* 0x007AF063: jmp 0x54e9f0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0054E9F0: RECOMP_ITAIL(0x0054E9F0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF068(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF068u);

L_007AF068:
    ecx = MEM32(ebp + (-0xB4)); /* 0x007AF068: mov ecx, dword ptr [ebp - 0xb4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x007AF06E: add ecx, 4 */
    _flag_k = FK_ADD;
    goto L_005DBAA0; /* 0x007AF071: jmp 0x5dbaa0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005DBAA0: RECOMP_ITAIL(0x005DBAA0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF076(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF076u);

L_007AF076:
    ecx = MEM32(ebp + (-0xB8)); /* 0x007AF076: mov ecx, dword ptr [ebp - 0xb8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x007AF07C: add ecx, 8 */
    _flag_k = FK_ADD;
    goto L_005D6DF0; /* 0x007AF07F: jmp 0x5d6df0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005D6DF0: RECOMP_ITAIL(0x005D6DF0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF084(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF084u);

L_007AF084:
    ecx = MEM32(ebp + (-0xBC)); /* 0x007AF084: mov ecx, dword ptr [ebp - 0xbc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x007AF08A: add ecx, 4 */
    _flag_k = FK_ADD;
    goto L_005DBAA0; /* 0x007AF08D: jmp 0x5dbaa0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005DBAA0: RECOMP_ITAIL(0x005DBAA0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF092(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF092u);

L_007AF092:
    ecx = MEM32(ebp + (-0xB8)); /* 0x007AF092: mov ecx, dword ptr [ebp - 0xb8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x18u; /* 0x007AF098: add ecx, 0x18 */
    _flag_k = FK_ADD;
    goto L_005D6DF0; /* 0x007AF09B: jmp 0x5d6df0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005D6DF0: RECOMP_ITAIL(0x005D6DF0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF0A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF0A0u);

L_007AF0A0:
    ecx = ebp + (-0xA8); /* 0x007AF0A0: lea ecx, [ebp - 0xa8] */
    goto L_005D6D20; /* 0x007AF0A6: jmp 0x5d6d20 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005D6D20: RECOMP_ITAIL(0x005D6D20u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF0AB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF0ABu);

L_007AF0AB:
    ecx = ebp + (-0xAC); /* 0x007AF0AB: lea ecx, [ebp - 0xac] */
    goto L_005D7D50; /* 0x007AF0B1: jmp 0x5d7d50 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005D7D50: RECOMP_ITAIL(0x005D7D50u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF0B6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF0B6u);

L_007AF0B6:
    ecx = ebp + (-0xA8); /* 0x007AF0B6: lea ecx, [ebp - 0xa8] */
    goto L_005D6D20; /* 0x007AF0BC: jmp 0x5d6d20 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005D6D20: RECOMP_ITAIL(0x005D6D20u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF0C1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF0C1u);

    goto L_007AF0C1;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007AF0C1:
    edx = MEM32(esp + 0x8); /* 0x007AF0C1: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007AF0C5: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xC4)); /* 0x007AF0C8: mov ecx, dword ptr [edx - 0xc4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AF0CE: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AF0D0: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x007AF0D5: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AF0D8: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AF0DA: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00838A68u; /* 0x007AF0DF: mov eax, 0x838a68 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007AF0E4: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007AF0F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF0F0u);

L_007AF0F0:
    ecx = ebp + 0xC; /* 0x007AF0F0: lea ecx, [ebp + 0xc] */
    goto L_005F3D00; /* 0x007AF0F3: jmp 0x5f3d00 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005F3D00: RECOMP_ITAIL(0x005F3D00u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF0F8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF0F8u);

L_007AF0F8:
    ecx = ebp + (-0x2C); /* 0x007AF0F8: lea ecx, [ebp - 0x2c] */
    goto L_0040A000; /* 0x007AF0FB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF100(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF100u);

L_007AF100:
    ecx = ebp + (-0x5C); /* 0x007AF100: lea ecx, [ebp - 0x5c] */
    goto L_0040A000; /* 0x007AF103: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF108(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF108u);

L_007AF108:
    ecx = ebp + (-0x44); /* 0x007AF108: lea ecx, [ebp - 0x44] */
    goto L_0040A000; /* 0x007AF10B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF110(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF110u);

L_007AF110:
    ecx = MEM32(ebp + (-0xDC)); /* 0x007AF110: mov ecx, dword ptr [ebp - 0xdc] */
    goto L_0040A000; /* 0x007AF116: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF11B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF11Bu);

L_007AF11B:
    ecx = ebp + (-0x2C); /* 0x007AF11B: lea ecx, [ebp - 0x2c] */
    goto L_0040A000; /* 0x007AF11E: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF123(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF123u);

L_007AF123:
    ecx = ebp + (-0x44); /* 0x007AF123: lea ecx, [ebp - 0x44] */
    goto L_0040A000; /* 0x007AF126: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF12B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF12Bu);

L_007AF12B:
    ecx = MEM32(ebp + (-0xDC)); /* 0x007AF12B: mov ecx, dword ptr [ebp - 0xdc] */
    goto L_0040A000; /* 0x007AF131: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF136(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF136u);

L_007AF136:
    ecx = ebp + (-0x144); /* 0x007AF136: lea ecx, [ebp - 0x144] */
    goto L_005D7D50; /* 0x007AF13C: jmp 0x5d7d50 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005D7D50: RECOMP_ITAIL(0x005D7D50u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF141(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF141u);

L_007AF141:
    ecx = ebp + (-0x140); /* 0x007AF141: lea ecx, [ebp - 0x140] */
    goto L_005D6D20; /* 0x007AF147: jmp 0x5d6d20 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005D6D20: RECOMP_ITAIL(0x005D6D20u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF14C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF14Cu);

L_007AF14C:
    ecx = ebp + (-0xCC); /* 0x007AF14C: lea ecx, [ebp - 0xcc] */
    goto L_0054E9F0; /* 0x007AF152: jmp 0x54e9f0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0054E9F0: RECOMP_ITAIL(0x0054E9F0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF157(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF157u);

L_007AF157:
    ecx = ebp + (-0x10C); /* 0x007AF157: lea ecx, [ebp - 0x10c] */
    goto L_005D6D20; /* 0x007AF15D: jmp 0x5d6d20 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005D6D20: RECOMP_ITAIL(0x005D6D20u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF162(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF162u);

L_007AF162:
    ecx = ebp + (-0x110); /* 0x007AF162: lea ecx, [ebp - 0x110] */
    goto L_005D7D50; /* 0x007AF168: jmp 0x5d7d50 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005D7D50: RECOMP_ITAIL(0x005D7D50u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF16D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF16Du);

L_007AF16D:
    ecx = ebp + (-0x10C); /* 0x007AF16D: lea ecx, [ebp - 0x10c] */
    goto L_005D6D20; /* 0x007AF173: jmp 0x5d6d20 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005D6D20: RECOMP_ITAIL(0x005D6D20u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF178(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF178u);

L_007AF178:
    ecx = ebp + (-0x2C); /* 0x007AF178: lea ecx, [ebp - 0x2c] */
    goto L_0040A000; /* 0x007AF17B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF180(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF180u);

L_007AF180:
    ecx = ebp + (-0x44); /* 0x007AF180: lea ecx, [ebp - 0x44] */
    goto L_0040A000; /* 0x007AF183: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF188(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF188u);

L_007AF188:
    ecx = ebp + 0x20; /* 0x007AF188: lea ecx, [ebp + 0x20] */
    goto L_00419790; /* 0x007AF18B: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF190(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF190u);

    goto L_007AF190;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007AF190:
    edx = MEM32(esp + 0x8); /* 0x007AF190: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007AF194: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x148)); /* 0x007AF197: mov ecx, dword ptr [edx - 0x148] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AF19D: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AF19F: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x8)); /* 0x007AF1A4: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AF1A7: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AF1A9: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00838AD0u; /* 0x007AF1AE: mov eax, 0x838ad0 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007AF1B3: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007AF1C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF1C0u);

L_007AF1C0:
    ecx = ebp + (-0x38); /* 0x007AF1C0: lea ecx, [ebp - 0x38] */
    goto L_005F3D00; /* 0x007AF1C3: jmp 0x5f3d00 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005F3D00: RECOMP_ITAIL(0x005F3D00u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF1C8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF1C8u);

L_007AF1C8:
    ecx = ebp + (-0x24); /* 0x007AF1C8: lea ecx, [ebp - 0x24] */
    goto L_00419790; /* 0x007AF1CB: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF1D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF1D0u);

    goto L_007AF1D0;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007AF1D0:
    edx = MEM32(esp + 0x8); /* 0x007AF1D0: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007AF1D4: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x38)); /* 0x007AF1D7: mov ecx, dword ptr [edx - 0x38] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AF1DA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AF1DC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00838B80u; /* 0x007AF1E1: mov eax, 0x838b80 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007AF1E6: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007AF1F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF1F0u);

    goto L_007AF1F0;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007AF1F0:
    edx = MEM32(esp + 0x8); /* 0x007AF1F0: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007AF1F4: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x007AF1F7: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AF1FA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AF1FC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00838BB4u; /* 0x007AF201: mov eax, 0x838bb4 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007AF206: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007AF210(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF210u);

    goto L_007AF210;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007AF210:
    edx = MEM32(esp + 0x8); /* 0x007AF210: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007AF214: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x1C)); /* 0x007AF217: mov ecx, dword ptr [edx - 0x1c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AF21A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AF21C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00838C0Cu; /* 0x007AF221: mov eax, 0x838c0c */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007AF226: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007AF230(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF230u);

L_007AF230:
    ecx = MEM32(ebp + (-0x10)); /* 0x007AF230: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040B2E0; /* 0x007AF233: jmp 0x40b2e0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B2E0: RECOMP_ITAIL(0x0040B2E0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF238(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF238u);

L_007AF238:
    ecx = MEM32(ebp + (-0x10)); /* 0x007AF238: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040B340; /* 0x007AF23B: jmp 0x40b340 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B340: RECOMP_ITAIL(0x0040B340u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF240(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF240u);

    goto L_007AF240;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007AF240:
    edx = MEM32(esp + 0x8); /* 0x007AF240: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007AF244: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x007AF247: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AF24A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AF24C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00838C64u; /* 0x007AF251: mov eax, 0x838c64 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007AF256: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007AF260(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF260u);

L_007AF260:
    ecx = MEM32(ebp + (-0x14)); /* 0x007AF260: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x007AF263: add ecx, 8 */
    _flag_k = FK_ADD;
    goto L_005D7D50; /* 0x007AF266: jmp 0x5d7d50 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005D7D50: RECOMP_ITAIL(0x005D7D50u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF26B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF26Bu);

L_007AF26B:
    ecx = MEM32(ebp + (-0x14)); /* 0x007AF26B: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x007AF26E: add ecx, 4 */
    _flag_k = FK_ADD;
    goto L_005D6D20; /* 0x007AF271: jmp 0x5d6d20 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005D6D20: RECOMP_ITAIL(0x005D6D20u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF276(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF276u);

    goto L_007AF276;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007AF276:
    edx = MEM32(esp + 0x8); /* 0x007AF276: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007AF27A: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x007AF27D: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AF280: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AF282: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00838C98u; /* 0x007AF287: mov eax, 0x838c98 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007AF28C: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007AF2A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF2A0u);

L_007AF2A0:
    ecx = MEM32(ebp + 0x8); /* 0x007AF2A0: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x007AF2A3: add ecx, 8 */
    _flag_k = FK_ADD;
    goto L_005D7D50; /* 0x007AF2A6: jmp 0x5d7d50 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005D7D50: RECOMP_ITAIL(0x005D7D50u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF2AB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF2ABu);

L_007AF2AB:
    ecx = MEM32(ebp + 0x8); /* 0x007AF2AB: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x007AF2AE: add ecx, 4 */
    _flag_k = FK_ADD;
    goto L_005D6D20; /* 0x007AF2B1: jmp 0x5d6d20 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005D6D20: RECOMP_ITAIL(0x005D6D20u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF2B6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF2B6u);

    goto L_007AF2B6;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007AF2B6:
    edx = MEM32(esp + 0x8); /* 0x007AF2B6: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007AF2BA: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x007AF2BD: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AF2C0: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AF2C2: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00838CCCu; /* 0x007AF2C7: mov eax, 0x838ccc */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007AF2CC: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007AF2E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF2E0u);

    goto L_007AF2E0;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007AF2E0:
    edx = MEM32(esp + 0x8); /* 0x007AF2E0: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007AF2E4: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x1C)); /* 0x007AF2E7: mov ecx, dword ptr [edx - 0x1c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AF2EA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AF2EC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00838D00u; /* 0x007AF2F1: mov eax, 0x838d00 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007AF2F6: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007AF300(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF300u);

L_007AF300:
    ecx = MEM32(ebp + 0xC); /* 0x007AF300: mov ecx, dword ptr [ebp + 0xc] */
    goto L_0040A000; /* 0x007AF303: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF308(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF308u);

L_007AF308:
    ecx = MEM32(ebp + (-0x10)); /* 0x007AF308: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040A000; /* 0x007AF30B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF310(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF310u);

L_007AF310:
    ecx = MEM32(ebp + 0xC); /* 0x007AF310: mov ecx, dword ptr [ebp + 0xc] */
    goto L_0040A000; /* 0x007AF313: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF318(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF318u);

L_007AF318:
    ecx = MEM32(ebp + 0x8); /* 0x007AF318: mov ecx, dword ptr [ebp + 8] */
    goto L_0040A000; /* 0x007AF31B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF320(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF320u);

L_007AF320:
    ecx = MEM32(ebp + 0xC); /* 0x007AF320: mov ecx, dword ptr [ebp + 0xc] */
    goto L_0040A000; /* 0x007AF323: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF328(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF328u);

L_007AF328:
    ecx = MEM32(ebp + 0x8); /* 0x007AF328: mov ecx, dword ptr [ebp + 8] */
    goto L_0040A000; /* 0x007AF32B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF330(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF330u);

    goto L_007AF330;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007AF330:
    edx = MEM32(esp + 0x8); /* 0x007AF330: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007AF334: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x10)); /* 0x007AF337: mov ecx, dword ptr [edx - 0x10] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AF33A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AF33C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00838D58u; /* 0x007AF341: mov eax, 0x838d58 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007AF346: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007AF350(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF350u);

L_007AF350:
    goto L_00409980; /* 0x007AF350: jmp 0x409980 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00409980: RECOMP_ITAIL(0x00409980u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF355(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF355u);

    goto L_007AF355;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007AF355:
    edx = MEM32(esp + 0x8); /* 0x007AF355: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007AF359: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x007AF35C: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AF35F: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AF361: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00838DACu; /* 0x007AF366: mov eax, 0x838dac */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007AF36B: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007AF370(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF370u);

L_007AF370:
    goto L_00409980; /* 0x007AF370: jmp 0x409980 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00409980: RECOMP_ITAIL(0x00409980u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF375(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF375u);

L_007AF375:
    ecx = MEM32(ebp + (-0x1C)); /* 0x007AF375: mov ecx, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x007AF378: add ecx, 4 */
    _flag_k = FK_ADD;
    goto L_005D6D20; /* 0x007AF37B: jmp 0x5d6d20 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005D6D20: RECOMP_ITAIL(0x005D6D20u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF380(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF380u);

L_007AF380:
    ecx = MEM32(ebp + (-0x18)); /* 0x007AF380: mov ecx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x007AF383: add ecx, 8 */
    _flag_k = FK_ADD;
    goto L_005D7D50; /* 0x007AF386: jmp 0x5d7d50 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005D7D50: RECOMP_ITAIL(0x005D7D50u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF38B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF38Bu);

L_007AF38B:
    ecx = MEM32(ebp + (-0x18)); /* 0x007AF38B: mov ecx, dword ptr [ebp - 0x18] */
    goto L_005D7C40; /* 0x007AF38E: jmp 0x5d7c40 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005D7C40: RECOMP_ITAIL(0x005D7C40u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF393(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF393u);

    goto L_007AF393;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007AF393:
    edx = MEM32(esp + 0x8); /* 0x007AF393: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007AF397: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x20)); /* 0x007AF39A: mov ecx, dword ptr [edx - 0x20] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AF39D: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AF39F: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00838E0Cu; /* 0x007AF3A4: mov eax, 0x838e0c */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007AF3A9: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007AF3B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF3B0u);

    goto L_007AF3B0;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007AF3B0:
    edx = MEM32(esp + 0x8); /* 0x007AF3B0: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007AF3B4: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x20)); /* 0x007AF3B7: mov ecx, dword ptr [edx - 0x20] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AF3BA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AF3BC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00838E84u; /* 0x007AF3C1: mov eax, 0x838e84 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007AF3C6: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007AF3D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF3D0u);

L_007AF3D0:
    ecx = MEM32(ebp + (-0x10)); /* 0x007AF3D0: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xCCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xCCu; /* 0x007AF3D3: add ecx, 0xcc */
    _flag_k = FK_ADD;
    goto L_00419790; /* 0x007AF3D9: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AF3DE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AF3DEu);

    goto L_007AF3DE;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007AF3DE:
    edx = MEM32(esp + 0x8); /* 0x007AF3DE: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007AF3E2: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x007AF3E5: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AF3E8: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AF3EA: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00838EDCu; /* 0x007AF3EF: mov eax, 0x838edc */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007AF3F4: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}
