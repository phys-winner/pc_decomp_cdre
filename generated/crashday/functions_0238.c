#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_007B5A50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5A50u);

L_007B5A50:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B5A50: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x007B5A53: add ecx, 4 */
    _flag_k = FK_ADD;
    goto L_0040A000; /* 0x007B5A56: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5A5B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5A5Bu);

L_007B5A5B:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B5A5B: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x20u; /* 0x007B5A5E: add ecx, 0x20 */
    _flag_k = FK_ADD;
    goto L_0040A000; /* 0x007B5A61: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5A66(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5A66u);

    goto L_007B5A66;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B5A66:
    edx = MEM32(esp + 0x8); /* 0x007B5A66: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B5A6A: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xC)); /* 0x007B5A6D: mov ecx, dword ptr [edx - 0xc] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B5A70: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B5A72: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083F6E4u; /* 0x007B5A77: mov eax, 0x83f6e4 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B5A7C: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B5A90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5A90u);

L_007B5A90:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B5A90: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x94u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x94u; /* 0x007B5A93: add ecx, 0x94 */
    _flag_k = FK_ADD;
    goto L_0040A000; /* 0x007B5A99: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5A9E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5A9Eu);

L_007B5A9E:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B5A9E: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xB0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xB0u; /* 0x007B5AA1: add ecx, 0xb0 */
    _flag_k = FK_ADD;
    goto L_0040A000; /* 0x007B5AA7: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5AAC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5AACu);

L_007B5AAC:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B5AAC: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xC8u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xC8u; /* 0x007B5AAF: add ecx, 0xc8 */
    _flag_k = FK_ADD;
    goto L_0040A000; /* 0x007B5AB5: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5ABA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5ABAu);

L_007B5ABA:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B5ABA: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xD24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xD24u; /* 0x007B5ABD: add ecx, 0xd24 */
    _flag_k = FK_ADD;
    goto L_00610610; /* 0x007B5AC3: jmp 0x610610 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00610610: RECOMP_ITAIL(0x00610610u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5AC8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5AC8u);

L_007B5AC8:
    PUSH32(esp, 0x004296F0u); /* 0x007B5AC8: push 0x4296f0 */
    PUSH32(esp, 6); /* 0x007B5ACD: push 6 */
    PUSH32(esp, 0x1434u); /* 0x007B5ACF: push 0x1434 */
    eax = MEM32(ebp + (-0x10)); /* 0x007B5AD4: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x16A0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x16A0u; /* 0x007B5AD7: add eax, 0x16a0 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x007B5ADC: push eax */
    RECOMP_CALL(sub_0077F628); /* 0x007B5ADD: call 0x77f628 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007B5AE2: ret  */
    RECOMP_REGS_OUT();
}

void sub_007B5AE3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5AE3u);

L_007B5AE3:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B5AE3: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x8FD8u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x8FD8u; /* 0x007B5AE6: add ecx, 0x8fd8 */
    _flag_k = FK_ADD;
    goto L_00610700; /* 0x007B5AEC: jmp 0x610700 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00610700: RECOMP_ITAIL(0x00610700u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5AF1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5AF1u);

L_007B5AF1:
    PUSH32(esp, 0x00489930u); /* 0x007B5AF1: push 0x489930 */
    PUSH32(esp, 0x800u); /* 0x007B5AF6: push 0x800 */
    PUSH32(esp, 0x1D4u); /* 0x007B5AFB: push 0x1d4 */
    eax = MEM32(ebp + (-0x10)); /* 0x007B5B00: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xDE88u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xDE88u; /* 0x007B5B03: add eax, 0xde88 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x007B5B08: push eax */
    RECOMP_CALL(sub_0077F628); /* 0x007B5B09: call 0x77f628 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007B5B0E: ret  */
    RECOMP_REGS_OUT();
}

void sub_007B5B0F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5B0Fu);

L_007B5B0F:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B5B0F: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x003CC79Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x003CC79Cu; /* 0x007B5B12: add ecx, 0x3cc79c */
    _flag_k = FK_ADD;
    goto L_006107D0; /* 0x007B5B18: jmp 0x6107d0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_006107D0: RECOMP_ITAIL(0x006107D0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5B1D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5B1Du);

L_007B5B1D:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B5B1D: mov ecx, dword ptr [ebp - 0x14] */
    goto L_006160C0; /* 0x007B5B20: jmp 0x6160c0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_006160C0: RECOMP_ITAIL(0x006160C0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5B25(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5B25u);

L_007B5B25:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B5B25: mov ecx, dword ptr [ebp - 0x14] */
    goto L_005DBCB0; /* 0x007B5B28: jmp 0x5dbcb0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005DBCB0: RECOMP_ITAIL(0x005DBCB0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5B2D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5B2Du);

L_007B5B2D:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B5B2D: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x007B5B30: add ecx, 8 */
    _flag_k = FK_ADD;
    goto L_00419790; /* 0x007B5B33: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5B38(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5B38u);

L_007B5B38:
    PUSH32(esp, 0x006109D0u); /* 0x007B5B38: push 0x6109d0 */
    PUSH32(esp, 0xA0u); /* 0x007B5B3D: push 0xa0 */
    PUSH32(esp, 0x74u); /* 0x007B5B42: push 0x74 */
    eax = MEM32(ebp + (-0x14)); /* 0x007B5B44: mov eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x007B5B47: add eax, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x007B5B4A: push eax */
    RECOMP_CALL(sub_0077F628); /* 0x007B5B4B: call 0x77f628 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007B5B50: ret  */
    RECOMP_REGS_OUT();
}

void sub_007B5B51(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5B51u);

    goto L_007B5B51;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B5B51:
    edx = MEM32(esp + 0x8); /* 0x007B5B51: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B5B55: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x1C)); /* 0x007B5B58: mov ecx, dword ptr [edx - 0x1c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B5B5B: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B5B5D: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083F718u; /* 0x007B5B62: mov eax, 0x83f718 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B5B67: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B5B70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5B70u);

L_007B5B70:
    ecx = ebp + (-0x28); /* 0x007B5B70: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007B5B73: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5B78(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5B78u);

L_007B5B78:
    ecx = ebp + (-0xD0); /* 0x007B5B78: lea ecx, [ebp - 0xd0] */
    goto L_0052D890; /* 0x007B5B7E: jmp 0x52d890 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0052D890: RECOMP_ITAIL(0x0052D890u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5B83(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5B83u);

L_007B5B83:
    ecx = ebp + (-0x58); /* 0x007B5B83: lea ecx, [ebp - 0x58] */
    goto L_0040A000; /* 0x007B5B86: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5B8B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5B8Bu);

L_007B5B8B:
    ecx = ebp + (-0x28); /* 0x007B5B8B: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007B5B8E: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5B93(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5B93u);

L_007B5B93:
    ecx = ebp + (-0x58); /* 0x007B5B93: lea ecx, [ebp - 0x58] */
    goto L_0040A000; /* 0x007B5B96: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5B9B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5B9Bu);

L_007B5B9B:
    ecx = ebp + (-0x28); /* 0x007B5B9B: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007B5B9E: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5BA3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5BA3u);

L_007B5BA3:
    ecx = ebp + (-0x58); /* 0x007B5BA3: lea ecx, [ebp - 0x58] */
    goto L_0040A000; /* 0x007B5BA6: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5BAB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5BABu);

L_007B5BAB:
    ecx = ebp + (-0x40); /* 0x007B5BAB: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x007B5BAE: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5BB3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5BB3u);

L_007B5BB3:
    ecx = ebp + (-0x28); /* 0x007B5BB3: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007B5BB6: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5BBB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5BBBu);

L_007B5BBB:
    ecx = ebp + (-0x40); /* 0x007B5BBB: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x007B5BBE: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5BC3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5BC3u);

L_007B5BC3:
    ecx = ebp + (-0x28); /* 0x007B5BC3: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007B5BC6: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5BCB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5BCBu);

L_007B5BCB:
    ecx = ebp + (-0x58); /* 0x007B5BCB: lea ecx, [ebp - 0x58] */
    goto L_0040A000; /* 0x007B5BCE: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5BD3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5BD3u);

L_007B5BD3:
    ecx = ebp + (-0x28); /* 0x007B5BD3: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007B5BD6: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5BDB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5BDBu);

L_007B5BDB:
    ecx = ebp + (-0x40); /* 0x007B5BDB: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x007B5BDE: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5BE3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5BE3u);

L_007B5BE3:
    ecx = ebp + (-0x40); /* 0x007B5BE3: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x007B5BE6: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5BEB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5BEBu);

L_007B5BEB:
    ecx = ebp + (-0x40); /* 0x007B5BEB: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x007B5BEE: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5BF3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5BF3u);

L_007B5BF3:
    ecx = ebp + (-0x40); /* 0x007B5BF3: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x007B5BF6: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5BFB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5BFBu);

L_007B5BFB:
    ecx = ebp + (-0x40); /* 0x007B5BFB: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x007B5BFE: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5C03(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5C03u);

L_007B5C03:
    ecx = ebp + (-0x40); /* 0x007B5C03: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x007B5C06: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5C0B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5C0Bu);

    goto L_007B5C0B;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B5C0B:
    edx = MEM32(esp + 0x8); /* 0x007B5C0B: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B5C0F: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xEC)); /* 0x007B5C12: mov ecx, dword ptr [edx - 0xec] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B5C18: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B5C1A: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x007B5C1F: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B5C22: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B5C24: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083F7A0u; /* 0x007B5C29: mov eax, 0x83f7a0 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B5C2E: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B5C40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5C40u);

L_007B5C40:
    ecx = ebp + (-0x28); /* 0x007B5C40: lea ecx, [ebp - 0x28] */
    goto L_005216E0; /* 0x007B5C43: jmp 0x5216e0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005216E0: RECOMP_ITAIL(0x005216E0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5C48(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5C48u);

    goto L_007B5C48;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B5C48:
    edx = MEM32(esp + 0x8); /* 0x007B5C48: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B5C4C: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x40)); /* 0x007B5C4F: mov ecx, dword ptr [edx - 0x40] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B5C52: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B5C54: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083F860u; /* 0x007B5C59: mov eax, 0x83f860 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B5C5E: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B5C70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5C70u);

L_007B5C70:
    ecx = ebp + (-0x28); /* 0x007B5C70: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007B5C73: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5C78(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5C78u);

L_007B5C78:
    ecx = ebp + (-0x40); /* 0x007B5C78: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x007B5C7B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5C80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5C80u);

L_007B5C80:
    ecx = ebp + (-0x78); /* 0x007B5C80: lea ecx, [ebp - 0x78] */
    goto L_0053C8D0; /* 0x007B5C83: jmp 0x53c8d0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0053C8D0: RECOMP_ITAIL(0x0053C8D0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5C88(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5C88u);

L_007B5C88:
    ecx = ebp + (-0x78); /* 0x007B5C88: lea ecx, [ebp - 0x78] */
    goto L_00540E10; /* 0x007B5C8B: jmp 0x540e10 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00540E10: RECOMP_ITAIL(0x00540E10u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5C90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5C90u);

L_007B5C90:
    ecx = ebp + (-0x28); /* 0x007B5C90: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007B5C93: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5C98(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5C98u);

L_007B5C98:
    ecx = ebp + (-0x40); /* 0x007B5C98: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x007B5C9B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5CA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5CA0u);

L_007B5CA0:
    ecx = ebp + (-0x28); /* 0x007B5CA0: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007B5CA3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5CA8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5CA8u);

L_007B5CA8:
    ecx = ebp + (-0x40); /* 0x007B5CA8: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x007B5CAB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5CB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5CB0u);

L_007B5CB0:
    ecx = ebp + (-0x28); /* 0x007B5CB0: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007B5CB3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5CB8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5CB8u);

L_007B5CB8:
    ecx = ebp + (-0x40); /* 0x007B5CB8: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x007B5CBB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5CC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5CC0u);

L_007B5CC0:
    ecx = ebp + (-0x28); /* 0x007B5CC0: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007B5CC3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5CC8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5CC8u);

L_007B5CC8:
    ecx = ebp + (-0x40); /* 0x007B5CC8: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x007B5CCB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5CD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5CD0u);

L_007B5CD0:
    ecx = ebp + (-0x28); /* 0x007B5CD0: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007B5CD3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5CD8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5CD8u);

L_007B5CD8:
    ecx = ebp + (-0x40); /* 0x007B5CD8: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x007B5CDB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5CE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5CE0u);

L_007B5CE0:
    ecx = ebp + (-0x28); /* 0x007B5CE0: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007B5CE3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5CE8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5CE8u);

L_007B5CE8:
    ecx = ebp + (-0x40); /* 0x007B5CE8: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x007B5CEB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5CF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5CF0u);

L_007B5CF0:
    ecx = ebp + (-0x28); /* 0x007B5CF0: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007B5CF3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5CF8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5CF8u);

L_007B5CF8:
    ecx = ebp + (-0x40); /* 0x007B5CF8: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x007B5CFB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5D00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5D00u);

L_007B5D00:
    ecx = ebp + (-0x28); /* 0x007B5D00: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007B5D03: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5D08(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5D08u);

L_007B5D08:
    eax = MEM32(ebp + (-0x80)); /* 0x007B5D08: mov eax, dword ptr [ebp - 0x80] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x007B5D0B: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007B5D20; /* 0x007B5D0E: je 0x7b5d20 */
L_007B5D14:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x80))); _flag_b = (uint32_t)(0xFFFFFFFEu);
    MEM32(ebp + (-0x80)) = MEM32(ebp + (-0x80)) & 0xFFFFFFFEu; /* 0x007B5D14: and dword ptr [ebp - 0x80], 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x28); /* 0x007B5D18: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007B5D1B: jmp 0x40a000 */
L_007B5D20:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007B5D20: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5D21(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5D21u);

L_007B5D21:
    ecx = ebp + (-0x28); /* 0x007B5D21: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007B5D24: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5D29(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5D29u);

L_007B5D29:
    ecx = ebp + (-0x78); /* 0x007B5D29: lea ecx, [ebp - 0x78] */
    goto L_0053C8D0; /* 0x007B5D2C: jmp 0x53c8d0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0053C8D0: RECOMP_ITAIL(0x0053C8D0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5D31(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5D31u);

L_007B5D31:
    goto L_00409980; /* 0x007B5D31: jmp 0x409980 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00409980: RECOMP_ITAIL(0x00409980u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5D36(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5D36u);

L_007B5D36:
    ecx = MEM32(ebp + (-0x84)); /* 0x007B5D36: mov ecx, dword ptr [ebp - 0x84] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x18u; /* 0x007B5D3C: add ecx, 0x18 */
    _flag_k = FK_ADD;
    goto L_0053C6A0; /* 0x007B5D3F: jmp 0x53c6a0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0053C6A0: RECOMP_ITAIL(0x0053C6A0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5D44(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5D44u);

    goto L_007B5D44;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B5D44:
    edx = MEM32(esp + 0x8); /* 0x007B5D44: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B5D48: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x8C)); /* 0x007B5D4B: mov ecx, dword ptr [edx - 0x8c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B5D51: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B5D53: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x007B5D58: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B5D5B: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B5D5D: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083F890u; /* 0x007B5D62: mov eax, 0x83f890 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B5D67: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B5D70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5D70u);

L_007B5D70:
    ecx = ebp + (-0x28); /* 0x007B5D70: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007B5D73: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5D78(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5D78u);

L_007B5D78:
    ecx = ebp + (-0xD0); /* 0x007B5D78: lea ecx, [ebp - 0xd0] */
    goto L_0052D890; /* 0x007B5D7E: jmp 0x52d890 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0052D890: RECOMP_ITAIL(0x0052D890u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5D83(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5D83u);

L_007B5D83:
    ecx = ebp + (-0x40); /* 0x007B5D83: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x007B5D86: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5D8B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5D8Bu);

L_007B5D8B:
    ecx = ebp + (-0x28); /* 0x007B5D8B: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007B5D8E: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5D93(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5D93u);

L_007B5D93:
    ecx = ebp + (-0x40); /* 0x007B5D93: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x007B5D96: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5D9B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5D9Bu);

L_007B5D9B:
    ecx = ebp + (-0x28); /* 0x007B5D9B: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007B5D9E: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5DA3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5DA3u);

L_007B5DA3:
    ecx = ebp + (-0x40); /* 0x007B5DA3: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x007B5DA6: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5DAB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5DABu);

L_007B5DAB:
    ecx = ebp + (-0x28); /* 0x007B5DAB: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007B5DAE: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5DB3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5DB3u);

L_007B5DB3:
    ecx = ebp + (-0x40); /* 0x007B5DB3: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x007B5DB6: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5DBB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5DBBu);

L_007B5DBB:
    ecx = ebp + (-0x28); /* 0x007B5DBB: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007B5DBE: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5DC3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5DC3u);

L_007B5DC3:
    ecx = ebp + (-0x40); /* 0x007B5DC3: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x007B5DC6: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5DCB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5DCBu);

L_007B5DCB:
    ecx = ebp + (-0x28); /* 0x007B5DCB: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007B5DCE: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5DD3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5DD3u);

L_007B5DD3:
    ecx = ebp + (-0x40); /* 0x007B5DD3: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x007B5DD6: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5DDB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5DDBu);

L_007B5DDB:
    ecx = ebp + (-0x28); /* 0x007B5DDB: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007B5DDE: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5DE3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5DE3u);

L_007B5DE3:
    ecx = ebp + (-0x40); /* 0x007B5DE3: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x007B5DE6: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5DEB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5DEBu);

L_007B5DEB:
    ecx = ebp + (-0x58); /* 0x007B5DEB: lea ecx, [ebp - 0x58] */
    goto L_0040A000; /* 0x007B5DEE: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5DF3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5DF3u);

L_007B5DF3:
    ecx = ebp + (-0x28); /* 0x007B5DF3: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007B5DF6: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5DFB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5DFBu);

L_007B5DFB:
    ecx = ebp + (-0x58); /* 0x007B5DFB: lea ecx, [ebp - 0x58] */
    goto L_0040A000; /* 0x007B5DFE: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5E03(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5E03u);

L_007B5E03:
    ecx = ebp + (-0x58); /* 0x007B5E03: lea ecx, [ebp - 0x58] */
    goto L_0040A000; /* 0x007B5E06: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5E0B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5E0Bu);

    goto L_007B5E0B;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B5E0B:
    edx = MEM32(esp + 0x8); /* 0x007B5E0B: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B5E0F: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xE4)); /* 0x007B5E12: mov ecx, dword ptr [edx - 0xe4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B5E18: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B5E1A: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x007B5E1F: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B5E22: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B5E24: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083F9A8u; /* 0x007B5E29: mov eax, 0x83f9a8 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B5E2E: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B5E40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5E40u);

L_007B5E40:
    ecx = ebp + 0x34; /* 0x007B5E40: lea ecx, [ebp + 0x34] */
    goto L_0040A000; /* 0x007B5E43: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5E48(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5E48u);

L_007B5E48:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B5E48: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040A000; /* 0x007B5E4B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5E50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5E50u);

L_007B5E50:
    ecx = MEM32(ebp + (-0x18)); /* 0x007B5E50: mov ecx, dword ptr [ebp - 0x18] */
    goto L_0040A000; /* 0x007B5E53: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5E58(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5E58u);

L_007B5E58:
    ecx = MEM32(ebp + (-0x18)); /* 0x007B5E58: mov ecx, dword ptr [ebp - 0x18] */
    goto L_0040A000; /* 0x007B5E5B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5E60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5E60u);

    goto L_007B5E60;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B5E60:
    edx = MEM32(esp + 0x8); /* 0x007B5E60: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B5E64: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x20)); /* 0x007B5E67: mov ecx, dword ptr [edx - 0x20] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B5E6A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B5E6C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083FA88u; /* 0x007B5E71: mov eax, 0x83fa88 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B5E76: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B5E80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5E80u);

L_007B5E80:
    ecx = ebp + (-0xE0); /* 0x007B5E80: lea ecx, [ebp - 0xe0] */
    goto L_004296F0; /* 0x007B5E86: jmp 0x4296f0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_004296F0: RECOMP_ITAIL(0x004296F0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5E8B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5E8Bu);

L_007B5E8B:
    ecx = ebp + (-0xE0); /* 0x007B5E8B: lea ecx, [ebp - 0xe0] */
    goto L_00429680; /* 0x007B5E91: jmp 0x429680 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00429680: RECOMP_ITAIL(0x00429680u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5E96(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5E96u);

L_007B5E96:
    ecx = MEM32(ebp + (-0xF0)); /* 0x007B5E96: mov ecx, dword ptr [ebp - 0xf0] */
    goto L_0040A000; /* 0x007B5E9C: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5EA1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5EA1u);

L_007B5EA1:
    ecx = ebp + (-0xE0); /* 0x007B5EA1: lea ecx, [ebp - 0xe0] */
    goto L_004296F0; /* 0x007B5EA7: jmp 0x4296f0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_004296F0: RECOMP_ITAIL(0x004296F0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5EAC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5EACu);

L_007B5EAC:
    ecx = MEM32(ebp + (-0xF0)); /* 0x007B5EAC: mov ecx, dword ptr [ebp - 0xf0] */
    goto L_0040A000; /* 0x007B5EB2: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5EB7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5EB7u);

    goto L_007B5EB7;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B5EB7:
    edx = MEM32(esp + 0x8); /* 0x007B5EB7: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B5EBB: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x134)); /* 0x007B5EBE: mov ecx, dword ptr [edx - 0x134] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B5EC4: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B5EC6: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x007B5ECB: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B5ECE: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B5ED0: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083FAD0u; /* 0x007B5ED5: mov eax, 0x83fad0 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B5EDA: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B5EE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5EE0u);

L_007B5EE0:
    ecx = ebp + 0x8; /* 0x007B5EE0: lea ecx, [ebp + 8] */
    goto L_0040A000; /* 0x007B5EE3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5EE8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5EE8u);

L_007B5EE8:
    ecx = MEM32(ebp + (-0xEC)); /* 0x007B5EE8: mov ecx, dword ptr [ebp - 0xec] */
    goto L_0040A000; /* 0x007B5EEE: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5EF3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5EF3u);

L_007B5EF3:
    ecx = MEM32(ebp + (-0xF0)); /* 0x007B5EF3: mov ecx, dword ptr [ebp - 0xf0] */
    goto L_0040A000; /* 0x007B5EF9: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5EFE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5EFEu);

L_007B5EFE:
    ecx = ebp + (-0x40); /* 0x007B5EFE: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x007B5F01: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5F06(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5F06u);

L_007B5F06:
    ecx = ebp + (-0x28); /* 0x007B5F06: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007B5F09: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5F0E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5F0Eu);

L_007B5F0E:
    ecx = ebp + (-0xE8); /* 0x007B5F0E: lea ecx, [ebp - 0xe8] */
    goto L_0040A000; /* 0x007B5F14: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}
