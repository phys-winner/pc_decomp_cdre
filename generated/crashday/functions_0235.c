#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_007B49C8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B49C8u);

L_007B49C8:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B49C8: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x18u; /* 0x007B49CB: add ecx, 0x18 */
    _flag_k = FK_ADD;
    goto L_0040A700; /* 0x007B49CE: jmp 0x40a700 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A700: RECOMP_ITAIL(0x0040A700u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B49D3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B49D3u);

L_007B49D3:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B49D3: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x20u; /* 0x007B49D6: add ecx, 0x20 */
    _flag_k = FK_ADD;
    goto L_00419790; /* 0x007B49D9: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B49DE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B49DEu);

    goto L_007B49DE;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B49DE:
    edx = MEM32(esp + 0x8); /* 0x007B49DE: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B49E2: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x007B49E5: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B49E8: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B49EA: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083E4F0u; /* 0x007B49EF: mov eax, 0x83e4f0 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B49F4: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B4A00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B4A00u);

L_007B4A00:
    ecx = ebp + (-0x110); /* 0x007B4A00: lea ecx, [ebp - 0x110] */
    goto L_0040A000; /* 0x007B4A06: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B4A0B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B4A0Bu);

L_007B4A0B:
    ecx = MEM32(ebp + (-0x160)); /* 0x007B4A0B: mov ecx, dword ptr [ebp - 0x160] */
    goto L_0040A000; /* 0x007B4A11: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B4A16(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B4A16u);

L_007B4A16:
    ecx = MEM32(ebp + (-0x154)); /* 0x007B4A16: mov ecx, dword ptr [ebp - 0x154] */
    goto L_0040A000; /* 0x007B4A1C: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B4A21(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B4A21u);

L_007B4A21:
    ecx = MEM32(ebp + (-0x150)); /* 0x007B4A21: mov ecx, dword ptr [ebp - 0x150] */
    goto L_0040A000; /* 0x007B4A27: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B4A2C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B4A2Cu);

L_007B4A2C:
    ecx = MEM32(ebp + (-0x15C)); /* 0x007B4A2C: mov ecx, dword ptr [ebp - 0x15c] */
    goto L_0040A000; /* 0x007B4A32: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B4A37(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B4A37u);

L_007B4A37:
    ecx = ebp + (-0x140); /* 0x007B4A37: lea ecx, [ebp - 0x140] */
    goto L_0040A000; /* 0x007B4A3D: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B4A42(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B4A42u);

L_007B4A42:
    ecx = MEM32(ebp + (-0x15C)); /* 0x007B4A42: mov ecx, dword ptr [ebp - 0x15c] */
    goto L_0040A000; /* 0x007B4A48: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B4A4D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B4A4Du);

L_007B4A4D:
    ecx = ebp + (-0x128); /* 0x007B4A4D: lea ecx, [ebp - 0x128] */
    goto L_0040A000; /* 0x007B4A53: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B4A58(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B4A58u);

L_007B4A58:
    ecx = ebp + (-0xF8); /* 0x007B4A58: lea ecx, [ebp - 0xf8] */
    goto L_0040A000; /* 0x007B4A5E: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B4A63(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B4A63u);

L_007B4A63:
    ecx = MEM32(ebp + (-0x15C)); /* 0x007B4A63: mov ecx, dword ptr [ebp - 0x15c] */
    goto L_0040A000; /* 0x007B4A69: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B4A6E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B4A6Eu);

L_007B4A6E:
    ecx = MEM32(ebp + (-0x150)); /* 0x007B4A6E: mov ecx, dword ptr [ebp - 0x150] */
    goto L_0040A000; /* 0x007B4A74: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B4A79(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B4A79u);

L_007B4A79:
    ecx = MEM32(ebp + (-0x154)); /* 0x007B4A79: mov ecx, dword ptr [ebp - 0x154] */
    goto L_0040A000; /* 0x007B4A7F: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B4A84(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B4A84u);

L_007B4A84:
    ecx = MEM32(ebp + (-0x160)); /* 0x007B4A84: mov ecx, dword ptr [ebp - 0x160] */
    goto L_0040A000; /* 0x007B4A8A: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B4A8F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B4A8Fu);

L_007B4A8F:
    ecx = ebp + (-0x140); /* 0x007B4A8F: lea ecx, [ebp - 0x140] */
    goto L_0040A000; /* 0x007B4A95: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B4A9A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B4A9Au);

L_007B4A9A:
    ecx = MEM32(ebp + (-0x160)); /* 0x007B4A9A: mov ecx, dword ptr [ebp - 0x160] */
    goto L_0040A000; /* 0x007B4AA0: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B4AA5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B4AA5u);

L_007B4AA5:
    ecx = MEM32(ebp + (-0x15C)); /* 0x007B4AA5: mov ecx, dword ptr [ebp - 0x15c] */
    goto L_0040A000; /* 0x007B4AAB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B4AB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B4AB0u);

L_007B4AB0:
    ecx = MEM32(ebp + (-0x150)); /* 0x007B4AB0: mov ecx, dword ptr [ebp - 0x150] */
    goto L_0040A000; /* 0x007B4AB6: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B4ABB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B4ABBu);

L_007B4ABB:
    ecx = MEM32(ebp + (-0x154)); /* 0x007B4ABB: mov ecx, dword ptr [ebp - 0x154] */
    goto L_0040A000; /* 0x007B4AC1: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B4AC6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B4AC6u);

L_007B4AC6:
    ecx = MEM32(ebp + (-0x144)); /* 0x007B4AC6: mov ecx, dword ptr [ebp - 0x144] */
    goto L_0040A000; /* 0x007B4ACC: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B4AD1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B4AD1u);

L_007B4AD1:
    ecx = ebp + (-0xE0); /* 0x007B4AD1: lea ecx, [ebp - 0xe0] */
    goto L_0040A000; /* 0x007B4AD7: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B4ADC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B4ADCu);

L_007B4ADC:
    ecx = ebp + (-0x140); /* 0x007B4ADC: lea ecx, [ebp - 0x140] */
    goto L_0040A000; /* 0x007B4AE2: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B4AE7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B4AE7u);

L_007B4AE7:
    ecx = MEM32(ebp + (-0x148)); /* 0x007B4AE7: mov ecx, dword ptr [ebp - 0x148] */
    goto L_0040A000; /* 0x007B4AED: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B4AF2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B4AF2u);

L_007B4AF2:
    ecx = ebp + (-0xC8); /* 0x007B4AF2: lea ecx, [ebp - 0xc8] */
    goto L_004F3A60; /* 0x007B4AF8: jmp 0x4f3a60 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_004F3A60: RECOMP_ITAIL(0x004F3A60u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B4AFD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B4AFDu);

    goto L_007B4AFD;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B4AFD:
    edx = MEM32(esp + 0x8); /* 0x007B4AFD: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0x164); /* 0x007B4B01: lea eax, [edx - 0x164] */
    ecx = MEM32(edx + (-0x168)); /* 0x007B4B07: mov ecx, dword ptr [edx - 0x168] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B4B0D: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B4B0F: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x007B4B14: add eax, 8 */
    _flag_k = FK_ADD;
    ecx = MEM32(edx + (-0x8)); /* 0x007B4B17: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B4B1A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B4B1C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083E550u; /* 0x007B4B21: mov eax, 0x83e550 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B4B26: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B4B30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B4B30u);

L_007B4B30:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B4B30: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040A000; /* 0x007B4B33: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B4B38(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B4B38u);

L_007B4B38:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B4B38: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x18u; /* 0x007B4B3B: add ecx, 0x18 */
    _flag_k = FK_ADD;
    goto L_0040A000; /* 0x007B4B3E: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B4B43(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B4B43u);

L_007B4B43:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B4B43: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x30u; /* 0x007B4B46: add ecx, 0x30 */
    _flag_k = FK_ADD;
    goto L_0040A000; /* 0x007B4B49: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B4B4E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B4B4Eu);

L_007B4B4E:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B4B4E: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x68u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x68u; /* 0x007B4B51: add ecx, 0x68 */
    _flag_k = FK_ADD;
    goto L_0040A000; /* 0x007B4B54: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B4B59(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B4B59u);

    goto L_007B4B59;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B4B59:
    edx = MEM32(esp + 0x8); /* 0x007B4B59: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B4B5D: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x8)); /* 0x007B4B60: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B4B63: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B4B65: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083E650u; /* 0x007B4B6A: mov eax, 0x83e650 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B4B6F: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B4B80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B4B80u);

L_007B4B80:
    ecx = ebp + (-0x34); /* 0x007B4B80: lea ecx, [ebp - 0x34] */
    goto L_00429F40; /* 0x007B4B83: jmp 0x429f40 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00429F40: RECOMP_ITAIL(0x00429F40u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B4B88(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B4B88u);

L_007B4B88:
    ecx = ebp + (-0x28); /* 0x007B4B88: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007B4B8B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B4B90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B4B90u);

L_007B4B90:
    ecx = MEM32(ebp + (-0x44)); /* 0x007B4B90: mov ecx, dword ptr [ebp - 0x44] */
    goto L_0040A000; /* 0x007B4B93: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B4B98(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B4B98u);

L_007B4B98:
    ecx = MEM32(ebp + (-0x3C)); /* 0x007B4B98: mov ecx, dword ptr [ebp - 0x3c] */
    goto L_0040A000; /* 0x007B4B9B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B4BA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B4BA0u);

L_007B4BA0:
    ecx = MEM32(ebp + (-0x38)); /* 0x007B4BA0: mov ecx, dword ptr [ebp - 0x38] */
    goto L_0040A000; /* 0x007B4BA3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B4BA8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B4BA8u);

L_007B4BA8:
    ecx = MEM32(ebp + (-0x40)); /* 0x007B4BA8: mov ecx, dword ptr [ebp - 0x40] */
    goto L_0040A000; /* 0x007B4BAB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B4BB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B4BB0u);

    goto L_007B4BB0;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B4BB0:
    edx = MEM32(esp + 0x8); /* 0x007B4BB0: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B4BB4: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x4C)); /* 0x007B4BB7: mov ecx, dword ptr [edx - 0x4c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B4BBA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B4BBC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x007B4BC1: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B4BC4: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B4BC6: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083E694u; /* 0x007B4BCB: mov eax, 0x83e694 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B4BD0: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B4BE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B4BE0u);

    goto L_007B4BE0;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B4BE0:
    edx = MEM32(esp + 0x8); /* 0x007B4BE0: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B4BE4: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x1C)); /* 0x007B4BE7: mov ecx, dword ptr [edx - 0x1c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B4BEA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B4BEC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083E6E8u; /* 0x007B4BF1: mov eax, 0x83e6e8 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B4BF6: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B4C00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B4C00u);

L_007B4C00:
    ecx = 0x00920010u; /* 0x007B4C00: mov ecx, 0x920010 */
    goto L_0060CF00; /* 0x007B4C05: jmp 0x60cf00 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0060CF00: RECOMP_ITAIL(0x0060CF00u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B4C0A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B4C0Au);

    goto L_007B4C0A;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B4C0A:
    edx = MEM32(esp + 0x8); /* 0x007B4C0A: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B4C0E: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xC)); /* 0x007B4C11: mov ecx, dword ptr [edx - 0xc] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B4C14: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B4C16: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083E740u; /* 0x007B4C1B: mov eax, 0x83e740 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B4C20: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B4C30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B4C30u);

L_007B4C30:
    ecx = 0x00920010u; /* 0x007B4C30: mov ecx, 0x920010 */
    goto L_0060CF00; /* 0x007B4C35: jmp 0x60cf00 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0060CF00: RECOMP_ITAIL(0x0060CF00u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B4C3A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B4C3Au);

    goto L_007B4C3A;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B4C3A:
    edx = MEM32(esp + 0x8); /* 0x007B4C3A: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B4C3E: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x4)); /* 0x007B4C41: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B4C44: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B4C46: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083E76Cu; /* 0x007B4C4B: mov eax, 0x83e76c */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B4C50: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B4C60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B4C60u);

L_007B4C60:
    ecx = ebp + (-0x2C); /* 0x007B4C60: lea ecx, [ebp - 0x2c] */
    goto L_0040A000; /* 0x007B4C63: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B4C68(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B4C68u);

L_007B4C68:
    ecx = MEM32(ebp + (-0x64)); /* 0x007B4C68: mov ecx, dword ptr [ebp - 0x64] */
    goto L_0040A000; /* 0x007B4C6B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B4C70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B4C70u);

L_007B4C70:
    eax = MEM32(ebp + (-0x68)); /* 0x007B4C70: mov eax, dword ptr [ebp - 0x68] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x007B4C73: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007B4C88; /* 0x007B4C76: je 0x7b4c88 */
L_007B4C7C:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x68))); _flag_b = (uint32_t)(0xFFFFFFFEu);
    MEM32(ebp + (-0x68)) = MEM32(ebp + (-0x68)) & 0xFFFFFFFEu; /* 0x007B4C7C: and dword ptr [ebp - 0x68], 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x44); /* 0x007B4C80: lea ecx, [ebp - 0x44] */
    goto L_0040A000; /* 0x007B4C83: jmp 0x40a000 */
L_007B4C88:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007B4C88: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B4C89(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B4C89u);

L_007B4C89:
    ecx = MEM32(ebp + (-0x64)); /* 0x007B4C89: mov ecx, dword ptr [ebp - 0x64] */
    goto L_0040A000; /* 0x007B4C8C: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B4C91(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B4C91u);

L_007B4C91:
    eax = MEM32(ebp + (-0x68)); /* 0x007B4C91: mov eax, dword ptr [ebp - 0x68] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    eax = eax & 2; /* 0x007B4C94: and eax, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007B4CA9; /* 0x007B4C97: je 0x7b4ca9 */
L_007B4C9D:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x68))); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ebp + (-0x68)) = MEM32(ebp + (-0x68)) & 0xFFFFFFFDu; /* 0x007B4C9D: and dword ptr [ebp - 0x68], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x2C); /* 0x007B4CA1: lea ecx, [ebp - 0x2c] */
    goto L_0040A000; /* 0x007B4CA4: jmp 0x40a000 */
L_007B4CA9:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007B4CA9: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B4CAA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B4CAAu);

L_007B4CAA:
    ecx = MEM32(ebp + (-0x64)); /* 0x007B4CAA: mov ecx, dword ptr [ebp - 0x64] */
    goto L_0040A000; /* 0x007B4CAD: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B4CB2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B4CB2u);

L_007B4CB2:
    ecx = ebp + (-0x5C); /* 0x007B4CB2: lea ecx, [ebp - 0x5c] */
    goto L_0040A000; /* 0x007B4CB5: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B4CBA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B4CBAu);

L_007B4CBA:
    ecx = ebp + (-0x2C); /* 0x007B4CBA: lea ecx, [ebp - 0x2c] */
    goto L_0040A000; /* 0x007B4CBD: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B4CC2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B4CC2u);

L_007B4CC2:
    ecx = ebp + (-0x44); /* 0x007B4CC2: lea ecx, [ebp - 0x44] */
    goto L_0040A000; /* 0x007B4CC5: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B4CCA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B4CCAu);

L_007B4CCA:
    eax = MEM32(ebp + (-0x68)); /* 0x007B4CCA: mov eax, dword ptr [ebp - 0x68] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    eax = eax & 4; /* 0x007B4CCD: and eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007B4CE2; /* 0x007B4CD0: je 0x7b4ce2 */
L_007B4CD6:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x68))); _flag_b = (uint32_t)(0xFFFFFFFBu);
    MEM32(ebp + (-0x68)) = MEM32(ebp + (-0x68)) & 0xFFFFFFFBu; /* 0x007B4CD6: and dword ptr [ebp - 0x68], 0xfffffffb */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x2C); /* 0x007B4CDA: lea ecx, [ebp - 0x2c] */
    goto L_0040A000; /* 0x007B4CDD: jmp 0x40a000 */
L_007B4CE2:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007B4CE2: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B4CE3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B4CE3u);

L_007B4CE3:
    eax = MEM32(ebp + (-0x68)); /* 0x007B4CE3: mov eax, dword ptr [ebp - 0x68] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    eax = eax & 8; /* 0x007B4CE6: and eax, 8 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007B4CFB; /* 0x007B4CE9: je 0x7b4cfb */
L_007B4CEF:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x68))); _flag_b = (uint32_t)(0xFFFFFFF7u);
    MEM32(ebp + (-0x68)) = MEM32(ebp + (-0x68)) & 0xFFFFFFF7u; /* 0x007B4CEF: and dword ptr [ebp - 0x68], 0xfffffff7 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x44); /* 0x007B4CF3: lea ecx, [ebp - 0x44] */
    goto L_0040A000; /* 0x007B4CF6: jmp 0x40a000 */
L_007B4CFB:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007B4CFB: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B4CFC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B4CFCu);

L_007B4CFC:
    eax = MEM32(ebp + (-0x64)); /* 0x007B4CFC: mov eax, dword ptr [ebp - 0x64] */
    PUSH32(esp, eax); /* 0x007B4CFF: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007B4D00: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007B4D06: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007B4D07: ret  */
    RECOMP_REGS_OUT();
}

void sub_007B4D08(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B4D08u);

L_007B4D08:
    ecx = ebp + (-0x2C); /* 0x007B4D08: lea ecx, [ebp - 0x2c] */
    goto L_0040A000; /* 0x007B4D0B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B4D10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B4D10u);

L_007B4D10:
    ecx = ebp + (-0x44); /* 0x007B4D10: lea ecx, [ebp - 0x44] */
    goto L_0040A000; /* 0x007B4D13: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B4D18(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B4D18u);

    goto L_007B4D18;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B4D18:
    edx = MEM32(esp + 0x8); /* 0x007B4D18: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B4D1C: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x80)); /* 0x007B4D1F: mov ecx, dword ptr [edx - 0x80] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B4D22: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B4D24: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x8)); /* 0x007B4D29: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B4D2C: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B4D2E: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083E798u; /* 0x007B4D33: mov eax, 0x83e798 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B4D38: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B4D40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B4D40u);

L_007B4D40:
    ecx = ebp + (-0x2C); /* 0x007B4D40: lea ecx, [ebp - 0x2c] */
    goto L_0040A000; /* 0x007B4D43: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B4D48(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B4D48u);

L_007B4D48:
    ecx = ebp + (-0x44); /* 0x007B4D48: lea ecx, [ebp - 0x44] */
    goto L_0040A000; /* 0x007B4D4B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B4D50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B4D50u);

L_007B4D50:
    ecx = MEM32(ebp + (-0x48)); /* 0x007B4D50: mov ecx, dword ptr [ebp - 0x48] */
    goto L_0040A000; /* 0x007B4D53: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B4D58(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B4D58u);

L_007B4D58:
    ecx = MEM32(ebp + (-0x58)); /* 0x007B4D58: mov ecx, dword ptr [ebp - 0x58] */
    goto L_0040A000; /* 0x007B4D5B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B4D60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B4D60u);

L_007B4D60:
    ecx = MEM32(ebp + (-0x50)); /* 0x007B4D60: mov ecx, dword ptr [ebp - 0x50] */
    goto L_0040A000; /* 0x007B4D63: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B4D68(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B4D68u);

L_007B4D68:
    eax = MEM32(ebp + (-0x50)); /* 0x007B4D68: mov eax, dword ptr [ebp - 0x50] */
    PUSH32(esp, eax); /* 0x007B4D6B: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007B4D6C: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007B4D72: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007B4D73: ret  */
    RECOMP_REGS_OUT();
}

void sub_007B4D74(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B4D74u);

    goto L_007B4D74;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B4D74:
    edx = MEM32(esp + 0x8); /* 0x007B4D74: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B4D78: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x60)); /* 0x007B4D7B: mov ecx, dword ptr [edx - 0x60] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B4D7E: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B4D80: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x8)); /* 0x007B4D85: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B4D88: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B4D8A: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083E830u; /* 0x007B4D8F: mov eax, 0x83e830 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B4D94: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B4DA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B4DA0u);

L_007B4DA0:
    ecx = ebp + (-0x44); /* 0x007B4DA0: lea ecx, [ebp - 0x44] */
    goto L_0040A000; /* 0x007B4DA3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B4DA8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B4DA8u);

L_007B4DA8:
    ecx = MEM32(ebp + (-0x58)); /* 0x007B4DA8: mov ecx, dword ptr [ebp - 0x58] */
    goto L_0040A000; /* 0x007B4DAB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B4DB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B4DB0u);

L_007B4DB0:
    ecx = MEM32(ebp + (-0x48)); /* 0x007B4DB0: mov ecx, dword ptr [ebp - 0x48] */
    goto L_0040A000; /* 0x007B4DB3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B4DB8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B4DB8u);

L_007B4DB8:
    ecx = MEM32(ebp + (-0x50)); /* 0x007B4DB8: mov ecx, dword ptr [ebp - 0x50] */
    goto L_0040A000; /* 0x007B4DBB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B4DC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B4DC0u);

L_007B4DC0:
    ecx = ebp + (-0x2C); /* 0x007B4DC0: lea ecx, [ebp - 0x2c] */
    goto L_0040A000; /* 0x007B4DC3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B4DC8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B4DC8u);

L_007B4DC8:
    eax = MEM32(ebp + (-0x50)); /* 0x007B4DC8: mov eax, dword ptr [ebp - 0x50] */
    PUSH32(esp, eax); /* 0x007B4DCB: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007B4DCC: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007B4DD2: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007B4DD3: ret  */
    RECOMP_REGS_OUT();
}

void sub_007B4DD4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B4DD4u);

L_007B4DD4:
    ecx = MEM32(ebp + (-0x48)); /* 0x007B4DD4: mov ecx, dword ptr [ebp - 0x48] */
    goto L_0040A000; /* 0x007B4DD7: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B4DDC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B4DDCu);

L_007B4DDC:
    ecx = ebp + (-0x2C); /* 0x007B4DDC: lea ecx, [ebp - 0x2c] */
    goto L_0040A000; /* 0x007B4DDF: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B4DE4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B4DE4u);

L_007B4DE4:
    eax = MEM32(ebp + (-0x50)); /* 0x007B4DE4: mov eax, dword ptr [ebp - 0x50] */
    PUSH32(esp, eax); /* 0x007B4DE7: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007B4DE8: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007B4DEE: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007B4DEF: ret  */
    RECOMP_REGS_OUT();
}

void sub_007B4DF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B4DF0u);

    goto L_007B4DF0;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B4DF0:
    edx = MEM32(esp + 0x8); /* 0x007B4DF0: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0x5C); /* 0x007B4DF4: lea eax, [edx - 0x5c] */
    ecx = MEM32(edx + (-0x60)); /* 0x007B4DF7: mov ecx, dword ptr [edx - 0x60] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B4DFA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B4DFC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x007B4E01: add eax, 0xc */
    _flag_k = FK_ADD;
    ecx = MEM32(edx + (-0x8)); /* 0x007B4E04: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B4E07: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B4E09: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083E888u; /* 0x007B4E0E: mov eax, 0x83e888 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B4E13: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B4E20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B4E20u);

L_007B4E20:
    ecx = ebp + (-0x28); /* 0x007B4E20: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007B4E23: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B4E28(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B4E28u);

L_007B4E28:
    ecx = MEM32(ebp + (-0x48)); /* 0x007B4E28: mov ecx, dword ptr [ebp - 0x48] */
    goto L_0040A000; /* 0x007B4E2B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B4E30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B4E30u);

L_007B4E30:
    ecx = MEM32(ebp + (-0x58)); /* 0x007B4E30: mov ecx, dword ptr [ebp - 0x58] */
    goto L_0040A000; /* 0x007B4E33: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B4E38(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B4E38u);

L_007B4E38:
    ecx = MEM32(ebp + (-0x50)); /* 0x007B4E38: mov ecx, dword ptr [ebp - 0x50] */
    goto L_0040A000; /* 0x007B4E3B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B4E40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B4E40u);

L_007B4E40:
    ecx = ebp + (-0x40); /* 0x007B4E40: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x007B4E43: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B4E48(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B4E48u);

L_007B4E48:
    eax = MEM32(ebp + (-0x50)); /* 0x007B4E48: mov eax, dword ptr [ebp - 0x50] */
    PUSH32(esp, eax); /* 0x007B4E4B: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007B4E4C: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007B4E52: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007B4E53: ret  */
    RECOMP_REGS_OUT();
}

void sub_007B4E54(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B4E54u);

L_007B4E54:
    ecx = MEM32(ebp + (-0x58)); /* 0x007B4E54: mov ecx, dword ptr [ebp - 0x58] */
    goto L_0040A000; /* 0x007B4E57: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B4E5C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B4E5Cu);

L_007B4E5C:
    ecx = ebp + (-0x40); /* 0x007B4E5C: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x007B4E5F: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B4E64(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B4E64u);

L_007B4E64:
    eax = MEM32(ebp + (-0x50)); /* 0x007B4E64: mov eax, dword ptr [ebp - 0x50] */
    PUSH32(esp, eax); /* 0x007B4E67: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007B4E68: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007B4E6E: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007B4E6F: ret  */
    RECOMP_REGS_OUT();
}

void sub_007B4E70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B4E70u);

    goto L_007B4E70;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B4E70:
    edx = MEM32(esp + 0x8); /* 0x007B4E70: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B4E74: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x5C)); /* 0x007B4E77: mov ecx, dword ptr [edx - 0x5c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B4E7A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B4E7C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x007B4E81: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B4E84: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B4E86: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083E8F8u; /* 0x007B4E8B: mov eax, 0x83e8f8 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B4E90: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B4EA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B4EA0u);

L_007B4EA0:
    ecx = ebp + (-0x40); /* 0x007B4EA0: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x007B4EA3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B4EA8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B4EA8u);

L_007B4EA8:
    ecx = ebp + (-0x28); /* 0x007B4EA8: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007B4EAB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B4EB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B4EB0u);

L_007B4EB0:
    ecx = MEM32(ebp + (-0x48)); /* 0x007B4EB0: mov ecx, dword ptr [ebp - 0x48] */
    goto L_0040A000; /* 0x007B4EB3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B4EB8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B4EB8u);

L_007B4EB8:
    ecx = MEM32(ebp + (-0x5C)); /* 0x007B4EB8: mov ecx, dword ptr [ebp - 0x5c] */
    goto L_0040A000; /* 0x007B4EBB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B4EC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B4EC0u);

L_007B4EC0:
    ecx = MEM32(ebp + (-0x50)); /* 0x007B4EC0: mov ecx, dword ptr [ebp - 0x50] */
    goto L_0040A000; /* 0x007B4EC3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B4EC8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B4EC8u);

L_007B4EC8:
    eax = MEM32(ebp + (-0x50)); /* 0x007B4EC8: mov eax, dword ptr [ebp - 0x50] */
    PUSH32(esp, eax); /* 0x007B4ECB: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007B4ECC: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007B4ED2: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007B4ED3: ret  */
    RECOMP_REGS_OUT();
}

void sub_007B4ED4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B4ED4u);

L_007B4ED4:
    eax = MEM32(ebp + (-0x50)); /* 0x007B4ED4: mov eax, dword ptr [ebp - 0x50] */
    PUSH32(esp, eax); /* 0x007B4ED7: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007B4ED8: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007B4EDE: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007B4EDF: ret  */
    RECOMP_REGS_OUT();
}

void sub_007B4EE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B4EE0u);

    goto L_007B4EE0;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B4EE0:
    edx = MEM32(esp + 0x8); /* 0x007B4EE0: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B4EE4: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x64)); /* 0x007B4EE7: mov ecx, dword ptr [edx - 0x64] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B4EEA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B4EEC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x007B4EF1: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B4EF4: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B4EF6: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083E968u; /* 0x007B4EFB: mov eax, 0x83e968 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B4F00: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B4F10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B4F10u);

L_007B4F10:
    ecx = MEM32(ebp + (-0x90)); /* 0x007B4F10: mov ecx, dword ptr [ebp - 0x90] */
    goto L_0040A000; /* 0x007B4F16: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B4F1B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B4F1Bu);

L_007B4F1B:
    ecx = MEM32(ebp + (-0xA0)); /* 0x007B4F1B: mov ecx, dword ptr [ebp - 0xa0] */
    goto L_0040A000; /* 0x007B4F21: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B4F26(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B4F26u);

L_007B4F26:
    ecx = MEM32(ebp + (-0x90)); /* 0x007B4F26: mov ecx, dword ptr [ebp - 0x90] */
    goto L_0040A000; /* 0x007B4F2C: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B4F31(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B4F31u);

L_007B4F31:
    ecx = MEM32(ebp + (-0xA0)); /* 0x007B4F31: mov ecx, dword ptr [ebp - 0xa0] */
    goto L_0040A000; /* 0x007B4F37: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B4F3C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B4F3Cu);

L_007B4F3C:
    ecx = ebp + (-0x70); /* 0x007B4F3C: lea ecx, [ebp - 0x70] */
    goto L_0040A000; /* 0x007B4F3F: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B4F44(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B4F44u);

L_007B4F44:
    ecx = ebp + (-0x28); /* 0x007B4F44: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007B4F47: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}
