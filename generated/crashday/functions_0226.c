#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_007B1D00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B1D00u);

    goto L_007B1D00;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B1D00:
    edx = MEM32(esp + 0x8); /* 0x007B1D00: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B1D04: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x007B1D07: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B1D0A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B1D0C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083B9F4u; /* 0x007B1D11: mov eax, 0x83b9f4 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B1D16: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B1D20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B1D20u);

L_007B1D20:
    ecx = MEM32(ebp + 0x8); /* 0x007B1D20: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x007B1D23: add ecx, 8 */
    _flag_k = FK_ADD;
    goto L_005E3440; /* 0x007B1D26: jmp 0x5e3440 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005E3440: RECOMP_ITAIL(0x005E3440u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B1D2B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B1D2Bu);

    goto L_007B1D2B;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B1D2B:
    edx = MEM32(esp + 0x8); /* 0x007B1D2B: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B1D2F: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x8)); /* 0x007B1D32: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B1D35: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B1D37: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083BA4Cu; /* 0x007B1D3C: mov eax, 0x83ba4c */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B1D41: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B1D50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B1D50u);

    goto L_007B1D50;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B1D50:
    edx = MEM32(esp + 0x8); /* 0x007B1D50: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B1D54: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x007B1D57: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B1D5A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B1D5C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083BA78u; /* 0x007B1D61: mov eax, 0x83ba78 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B1D66: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B1D70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B1D70u);

L_007B1D70:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B1D70: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040A000; /* 0x007B1D73: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B1D78(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B1D78u);

L_007B1D78:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B1D78: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x18u; /* 0x007B1D7B: add ecx, 0x18 */
    _flag_k = FK_ADD;
    goto L_0040A000; /* 0x007B1D7E: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B1D83(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B1D83u);

    goto L_007B1D83;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B1D83:
    edx = MEM32(esp + 0x8); /* 0x007B1D83: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B1D87: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x10)); /* 0x007B1D8A: mov ecx, dword ptr [edx - 0x10] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B1D8D: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B1D8F: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083BAD0u; /* 0x007B1D94: mov eax, 0x83bad0 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B1D99: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B1DA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B1DA0u);

L_007B1DA0:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B1DA0: mov ecx, dword ptr [ebp - 0x14] */
    goto L_00441610; /* 0x007B1DA3: jmp 0x441610 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00441610: RECOMP_ITAIL(0x00441610u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B1DA8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B1DA8u);

L_007B1DA8:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B1DA8: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x48u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x48u; /* 0x007B1DAB: add ecx, 0x48 */
    _flag_k = FK_ADD;
    goto L_00419790; /* 0x007B1DAE: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B1DB3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B1DB3u);

L_007B1DB3:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B1DB3: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0054EBE0; /* 0x007B1DB6: jmp 0x54ebe0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0054EBE0: RECOMP_ITAIL(0x0054EBE0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B1DBB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B1DBBu);

    goto L_007B1DBB;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B1DBB:
    edx = MEM32(esp + 0x8); /* 0x007B1DBB: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B1DBF: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x007B1DC2: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B1DC5: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B1DC7: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083BB04u; /* 0x007B1DCC: mov eax, 0x83bb04 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B1DD1: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B1DE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B1DE0u);

L_007B1DE0:
    ecx = MEM32(ebp + 0xC); /* 0x007B1DE0: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x007B1DE3: add ecx, 8 */
    _flag_k = FK_ADD;
    goto L_005E3440; /* 0x007B1DE6: jmp 0x5e3440 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005E3440: RECOMP_ITAIL(0x005E3440u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B1DEB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B1DEBu);

    goto L_007B1DEB;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B1DEB:
    edx = MEM32(esp + 0x8); /* 0x007B1DEB: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B1DEF: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x10)); /* 0x007B1DF2: mov ecx, dword ptr [edx - 0x10] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B1DF5: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B1DF7: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083BB40u; /* 0x007B1DFC: mov eax, 0x83bb40 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B1E01: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B1E10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B1E10u);

L_007B1E10:
    ecx = ebp + (-0x160); /* 0x007B1E10: lea ecx, [ebp - 0x160] */
    goto L_0054E9F0; /* 0x007B1E16: jmp 0x54e9f0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0054E9F0: RECOMP_ITAIL(0x0054E9F0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B1E1B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B1E1Bu);

L_007B1E1B:
    ecx = ebp + (-0x80); /* 0x007B1E1B: lea ecx, [ebp - 0x80] */
    goto L_0054E9F0; /* 0x007B1E1E: jmp 0x54e9f0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0054E9F0: RECOMP_ITAIL(0x0054E9F0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B1E23(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B1E23u);

L_007B1E23:
    ecx = ebp + (-0xF0); /* 0x007B1E23: lea ecx, [ebp - 0xf0] */
    goto L_0054E9F0; /* 0x007B1E29: jmp 0x54e9f0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0054E9F0: RECOMP_ITAIL(0x0054E9F0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B1E2E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B1E2Eu);

L_007B1E2E:
    ecx = ebp + (-0x1D0); /* 0x007B1E2E: lea ecx, [ebp - 0x1d0] */
    goto L_0054E9F0; /* 0x007B1E34: jmp 0x54e9f0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0054E9F0: RECOMP_ITAIL(0x0054E9F0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B1E39(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B1E39u);

L_007B1E39:
    ecx = ebp + (-0x240); /* 0x007B1E39: lea ecx, [ebp - 0x240] */
    goto L_0054E9F0; /* 0x007B1E3F: jmp 0x54e9f0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0054E9F0: RECOMP_ITAIL(0x0054E9F0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B1E44(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B1E44u);

L_007B1E44:
    ecx = ebp + (-0x320); /* 0x007B1E44: lea ecx, [ebp - 0x320] */
    goto L_0054E9F0; /* 0x007B1E4A: jmp 0x54e9f0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0054E9F0: RECOMP_ITAIL(0x0054E9F0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B1E4F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B1E4Fu);

L_007B1E4F:
    ecx = ebp + (-0x2B0); /* 0x007B1E4F: lea ecx, [ebp - 0x2b0] */
    goto L_0054E9F0; /* 0x007B1E55: jmp 0x54e9f0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0054E9F0: RECOMP_ITAIL(0x0054E9F0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B1E5A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B1E5Au);

    goto L_007B1E5A;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B1E5A:
    edx = MEM32(esp + 0x8); /* 0x007B1E5A: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B1E5E: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x33C)); /* 0x007B1E61: mov ecx, dword ptr [edx - 0x33c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B1E67: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B1E69: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x007B1E6E: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B1E71: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B1E73: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083BB6Cu; /* 0x007B1E78: mov eax, 0x83bb6c */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B1E7D: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B1E90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B1E90u);

    goto L_007B1E90;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B1E90:
    edx = MEM32(esp + 0x8); /* 0x007B1E90: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B1E94: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x1C)); /* 0x007B1E97: mov ecx, dword ptr [edx - 0x1c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B1E9A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B1E9C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083BBC8u; /* 0x007B1EA1: mov eax, 0x83bbc8 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B1EA6: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B1EB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B1EB0u);

L_007B1EB0:
    ecx = MEM32(ebp + 0x8); /* 0x007B1EB0: mov ecx, dword ptr [ebp + 8] */
    goto L_00441610; /* 0x007B1EB3: jmp 0x441610 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00441610: RECOMP_ITAIL(0x00441610u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B1EB8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B1EB8u);

L_007B1EB8:
    ecx = MEM32(ebp + 0x8); /* 0x007B1EB8: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x48u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x48u; /* 0x007B1EBB: add ecx, 0x48 */
    _flag_k = FK_ADD;
    goto L_00419790; /* 0x007B1EBE: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B1EC3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B1EC3u);

    goto L_007B1EC3;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B1EC3:
    edx = MEM32(esp + 0x8); /* 0x007B1EC3: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B1EC7: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x8)); /* 0x007B1ECA: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B1ECD: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B1ECF: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083BC20u; /* 0x007B1ED4: mov eax, 0x83bc20 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B1ED9: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B1EE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B1EE0u);

L_007B1EE0:
    ecx = MEM32(ebp + 0x8); /* 0x007B1EE0: mov ecx, dword ptr [ebp + 8] */
    goto L_0054EBE0; /* 0x007B1EE3: jmp 0x54ebe0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0054EBE0: RECOMP_ITAIL(0x0054EBE0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B1EE8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B1EE8u);

L_007B1EE8:
    ecx = MEM32(ebp + 0x8); /* 0x007B1EE8: mov ecx, dword ptr [ebp + 8] */
    goto L_00441610; /* 0x007B1EEB: jmp 0x441610 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00441610: RECOMP_ITAIL(0x00441610u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B1EF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B1EF0u);

L_007B1EF0:
    ecx = MEM32(ebp + 0x8); /* 0x007B1EF0: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x48u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x48u; /* 0x007B1EF3: add ecx, 0x48 */
    _flag_k = FK_ADD;
    goto L_00419790; /* 0x007B1EF6: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B1EFB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B1EFBu);

    goto L_007B1EFB;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B1EFB:
    edx = MEM32(esp + 0x8); /* 0x007B1EFB: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B1EFF: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x8)); /* 0x007B1F02: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B1F05: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B1F07: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083BC54u; /* 0x007B1F0C: mov eax, 0x83bc54 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B1F11: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B1F20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B1F20u);

L_007B1F20:
    ecx = ebp + (-0x84); /* 0x007B1F20: lea ecx, [ebp - 0x84] */
    goto L_0054E9F0; /* 0x007B1F26: jmp 0x54e9f0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0054E9F0: RECOMP_ITAIL(0x0054E9F0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B1F2B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B1F2Bu);

    goto L_007B1F2B;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B1F2B:
    edx = MEM32(esp + 0x8); /* 0x007B1F2B: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B1F2F: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x90)); /* 0x007B1F32: mov ecx, dword ptr [edx - 0x90] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B1F38: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B1F3A: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x8)); /* 0x007B1F3F: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B1F42: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B1F44: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083BC90u; /* 0x007B1F49: mov eax, 0x83bc90 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B1F4E: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B1F60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B1F60u);

L_007B1F60:
    ecx = ebp + (-0x84); /* 0x007B1F60: lea ecx, [ebp - 0x84] */
    goto L_0054E9F0; /* 0x007B1F66: jmp 0x54e9f0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0054E9F0: RECOMP_ITAIL(0x0054E9F0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B1F6B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B1F6Bu);

    goto L_007B1F6B;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B1F6B:
    edx = MEM32(esp + 0x8); /* 0x007B1F6B: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B1F6F: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x88)); /* 0x007B1F72: mov ecx, dword ptr [edx - 0x88] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B1F78: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B1F7A: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x8)); /* 0x007B1F7F: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B1F82: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B1F84: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083BCBCu; /* 0x007B1F89: mov eax, 0x83bcbc */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B1F8E: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B1FA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B1FA0u);

L_007B1FA0:
    ecx = ebp + (-0x80); /* 0x007B1FA0: lea ecx, [ebp - 0x80] */
    goto L_0054E9F0; /* 0x007B1FA3: jmp 0x54e9f0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0054E9F0: RECOMP_ITAIL(0x0054E9F0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B1FA8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B1FA8u);

    goto L_007B1FA8;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B1FA8:
    edx = MEM32(esp + 0x8); /* 0x007B1FA8: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B1FAC: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x94)); /* 0x007B1FAF: mov ecx, dword ptr [edx - 0x94] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B1FB5: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B1FB7: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x007B1FBC: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B1FBF: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B1FC1: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083BCE8u; /* 0x007B1FC6: mov eax, 0x83bce8 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B1FCB: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B1FD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B1FD0u);

L_007B1FD0:
    goto L_00409980; /* 0x007B1FD0: jmp 0x409980 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00409980: RECOMP_ITAIL(0x00409980u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B1FD5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B1FD5u);

    goto L_007B1FD5;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B1FD5:
    edx = MEM32(esp + 0x8); /* 0x007B1FD5: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B1FD9: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x1C)); /* 0x007B1FDC: mov ecx, dword ptr [edx - 0x1c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B1FDF: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B1FE1: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083BD14u; /* 0x007B1FE6: mov eax, 0x83bd14 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B1FEB: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B1FF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B1FF0u);

L_007B1FF0:
    goto L_00409980; /* 0x007B1FF0: jmp 0x409980 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00409980: RECOMP_ITAIL(0x00409980u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B1FF5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B1FF5u);

    goto L_007B1FF5;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B1FF5:
    edx = MEM32(esp + 0x8); /* 0x007B1FF5: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B1FF9: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x1C)); /* 0x007B1FFC: mov ecx, dword ptr [edx - 0x1c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B1FFF: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B2001: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083BD74u; /* 0x007B2006: mov eax, 0x83bd74 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B200B: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B2010(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2010u);

L_007B2010:
    goto L_00409980; /* 0x007B2010: jmp 0x409980 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00409980: RECOMP_ITAIL(0x00409980u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2015(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2015u);

L_007B2015:
    ecx = MEM32(ebp + (-0x18)); /* 0x007B2015: mov ecx, dword ptr [ebp - 0x18] */
    goto L_00441610; /* 0x007B2018: jmp 0x441610 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00441610: RECOMP_ITAIL(0x00441610u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B201D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B201Du);

L_007B201D:
    ecx = MEM32(ebp + (-0x18)); /* 0x007B201D: mov ecx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x48u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x48u; /* 0x007B2020: add ecx, 0x48 */
    _flag_k = FK_ADD;
    goto L_00419790; /* 0x007B2023: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2028(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2028u);

    goto L_007B2028;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B2028:
    edx = MEM32(esp + 0x8); /* 0x007B2028: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B202C: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x20)); /* 0x007B202F: mov ecx, dword ptr [edx - 0x20] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B2032: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B2034: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083BDD4u; /* 0x007B2039: mov eax, 0x83bdd4 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B203E: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B2050(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2050u);

L_007B2050:
    goto L_00409980; /* 0x007B2050: jmp 0x409980 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00409980: RECOMP_ITAIL(0x00409980u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2055(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2055u);

L_007B2055:
    ecx = MEM32(ebp + (-0x1C)); /* 0x007B2055: mov ecx, dword ptr [ebp - 0x1c] */
    goto L_00441610; /* 0x007B2058: jmp 0x441610 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00441610: RECOMP_ITAIL(0x00441610u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B205D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B205Du);

L_007B205D:
    ecx = MEM32(ebp + (-0x1C)); /* 0x007B205D: mov ecx, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x48u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x48u; /* 0x007B2060: add ecx, 0x48 */
    _flag_k = FK_ADD;
    goto L_00419790; /* 0x007B2063: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2068(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2068u);

L_007B2068:
    ecx = MEM32(ebp + (-0x18)); /* 0x007B2068: mov ecx, dword ptr [ebp - 0x18] */
    goto L_0054EBE0; /* 0x007B206B: jmp 0x54ebe0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0054EBE0: RECOMP_ITAIL(0x0054EBE0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2070(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2070u);

    goto L_007B2070;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B2070:
    edx = MEM32(esp + 0x8); /* 0x007B2070: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B2074: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x24)); /* 0x007B2077: mov ecx, dword ptr [edx - 0x24] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B207A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B207C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083BE44u; /* 0x007B2081: mov eax, 0x83be44 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B2086: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B2090(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2090u);

L_007B2090:
    goto L_00409980; /* 0x007B2090: jmp 0x409980 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00409980: RECOMP_ITAIL(0x00409980u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2095(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2095u);

    goto L_007B2095;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B2095:
    edx = MEM32(esp + 0x8); /* 0x007B2095: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B2099: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x1C)); /* 0x007B209C: mov ecx, dword ptr [edx - 0x1c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B209F: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B20A1: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083BEBCu; /* 0x007B20A6: mov eax, 0x83bebc */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B20AB: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B20B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B20B0u);

L_007B20B0:
    ecx = ebp + (-0x80); /* 0x007B20B0: lea ecx, [ebp - 0x80] */
    goto L_0054E9F0; /* 0x007B20B3: jmp 0x54e9f0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0054E9F0: RECOMP_ITAIL(0x0054E9F0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B20B8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B20B8u);

L_007B20B8:
    ecx = ebp + (-0x80); /* 0x007B20B8: lea ecx, [ebp - 0x80] */
    goto L_0054E9F0; /* 0x007B20BB: jmp 0x54e9f0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0054E9F0: RECOMP_ITAIL(0x0054E9F0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B20C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B20C0u);

L_007B20C0:
    ecx = ebp + (-0x80); /* 0x007B20C0: lea ecx, [ebp - 0x80] */
    goto L_0054E9F0; /* 0x007B20C3: jmp 0x54e9f0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0054E9F0: RECOMP_ITAIL(0x0054E9F0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B20C8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B20C8u);

    goto L_007B20C8;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B20C8:
    edx = MEM32(esp + 0x8); /* 0x007B20C8: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B20CC: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x84)); /* 0x007B20CF: mov ecx, dword ptr [edx - 0x84] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B20D5: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B20D7: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x007B20DC: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B20DF: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B20E1: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083BF1Cu; /* 0x007B20E6: mov eax, 0x83bf1c */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B20EB: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B20F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B20F0u);

L_007B20F0:
    goto L_00409980; /* 0x007B20F0: jmp 0x409980 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00409980: RECOMP_ITAIL(0x00409980u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B20F5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B20F5u);

L_007B20F5:
    ecx = MEM32(ebp + 0x10); /* 0x007B20F5: mov ecx, dword ptr [ebp + 0x10] */
    goto L_005EB9B0; /* 0x007B20F8: jmp 0x5eb9b0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005EB9B0: RECOMP_ITAIL(0x005EB9B0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B20FD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B20FDu);

L_007B20FD:
    ecx = MEM32(ebp + 0x10); /* 0x007B20FD: mov ecx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xCu; /* 0x007B2100: add ecx, 0xc */
    _flag_k = FK_ADD;
    goto L_005EB9B0; /* 0x007B2103: jmp 0x5eb9b0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005EB9B0: RECOMP_ITAIL(0x005EB9B0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2108(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2108u);

L_007B2108:
    ecx = MEM32(ebp + 0x8); /* 0x007B2108: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x007B210B: add ecx, 8 */
    _flag_k = FK_ADD;
    goto L_005E3440; /* 0x007B210E: jmp 0x5e3440 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005E3440: RECOMP_ITAIL(0x005E3440u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2113(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2113u);

L_007B2113:
    ecx = MEM32(ebp + 0x8); /* 0x007B2113: mov ecx, dword ptr [ebp + 8] */
    goto L_005E34F0; /* 0x007B2116: jmp 0x5e34f0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005E34F0: RECOMP_ITAIL(0x005E34F0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B211B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B211Bu);

    goto L_007B211B;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B211B:
    edx = MEM32(esp + 0x8); /* 0x007B211B: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B211F: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x4)); /* 0x007B2122: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B2125: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B2127: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083BF58u; /* 0x007B212C: mov eax, 0x83bf58 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B2131: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B2140(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2140u);

L_007B2140:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B2140: mov ecx, dword ptr [ebp - 0x14] */
    goto L_005F3D00; /* 0x007B2143: jmp 0x5f3d00 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005F3D00: RECOMP_ITAIL(0x005F3D00u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2148(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2148u);

    goto L_007B2148;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B2148:
    edx = MEM32(esp + 0x8); /* 0x007B2148: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B214C: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x007B214F: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B2152: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B2154: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083BFA4u; /* 0x007B2159: mov eax, 0x83bfa4 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B215E: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B2170(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2170u);

L_007B2170:
    ecx = ebp + (-0x30); /* 0x007B2170: lea ecx, [ebp - 0x30] */
    goto L_005F00D0; /* 0x007B2173: jmp 0x5f00d0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005F00D0: RECOMP_ITAIL(0x005F00D0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2178(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2178u);

L_007B2178:
    ecx = ebp + (-0x30); /* 0x007B2178: lea ecx, [ebp - 0x30] */
    goto L_005F3D00; /* 0x007B217B: jmp 0x5f3d00 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005F3D00: RECOMP_ITAIL(0x005F3D00u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2180(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2180u);

L_007B2180:
    ecx = ebp + (-0x1C); /* 0x007B2180: lea ecx, [ebp - 0x1c] */
    goto L_00419790; /* 0x007B2183: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2188(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2188u);

    goto L_007B2188;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B2188:
    edx = MEM32(esp + 0x8); /* 0x007B2188: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0x3C); /* 0x007B218C: lea eax, [edx - 0x3c] */
    ecx = MEM32(edx + (-0x40)); /* 0x007B218F: mov ecx, dword ptr [edx - 0x40] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B2192: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B2194: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083BFD0u; /* 0x007B2199: mov eax, 0x83bfd0 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B219E: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B21B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B21B0u);

L_007B21B0:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B21B0: mov ecx, dword ptr [ebp - 0x10] */
    goto L_005F3D00; /* 0x007B21B3: jmp 0x5f3d00 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005F3D00: RECOMP_ITAIL(0x005F3D00u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B21B8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B21B8u);

L_007B21B8:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B21B8: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x14u; /* 0x007B21BB: add ecx, 0x14 */
    _flag_k = FK_ADD;
    goto L_00419790; /* 0x007B21BE: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B21C3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B21C3u);

    goto L_007B21C3;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B21C3:
    edx = MEM32(esp + 0x8); /* 0x007B21C3: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B21C7: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xC)); /* 0x007B21CA: mov ecx, dword ptr [edx - 0xc] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B21CD: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B21CF: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083C00Cu; /* 0x007B21D4: mov eax, 0x83c00c */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B21D9: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B21E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B21E0u);

L_007B21E0:
    ecx = ebp + 0xC; /* 0x007B21E0: lea ecx, [ebp + 0xc] */
    goto L_005F3D00; /* 0x007B21E3: jmp 0x5f3d00 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005F3D00: RECOMP_ITAIL(0x005F3D00u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B21E8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B21E8u);

L_007B21E8:
    ecx = ebp + 0x20; /* 0x007B21E8: lea ecx, [ebp + 0x20] */
    goto L_00419790; /* 0x007B21EB: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B21F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B21F0u);

    goto L_007B21F0;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B21F0:
    edx = MEM32(esp + 0x8); /* 0x007B21F0: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B21F4: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x007B21F7: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B21FA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B21FC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083C040u; /* 0x007B2201: mov eax, 0x83c040 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B2206: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B2210(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2210u);

L_007B2210:
    ecx = ebp + 0xC; /* 0x007B2210: lea ecx, [ebp + 0xc] */
    goto L_005F3D00; /* 0x007B2213: jmp 0x5f3d00 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005F3D00: RECOMP_ITAIL(0x005F3D00u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2218(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2218u);

L_007B2218:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B2218: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x14u; /* 0x007B221B: add ecx, 0x14 */
    _flag_k = FK_ADD;
    goto L_00419790; /* 0x007B221E: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2223(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2223u);

L_007B2223:
    ecx = MEM32(ebp + 0x8); /* 0x007B2223: mov ecx, dword ptr [ebp + 8] */
    goto L_005F3D00; /* 0x007B2226: jmp 0x5f3d00 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005F3D00: RECOMP_ITAIL(0x005F3D00u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B222B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B222Bu);

L_007B222B:
    ecx = ebp + 0x20; /* 0x007B222B: lea ecx, [ebp + 0x20] */
    goto L_00419790; /* 0x007B222E: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2233(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2233u);

L_007B2233:
    ecx = MEM32(ebp + 0x8); /* 0x007B2233: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x14u; /* 0x007B2236: add ecx, 0x14 */
    _flag_k = FK_ADD;
    goto L_00419790; /* 0x007B2239: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B223E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B223Eu);

L_007B223E:
    ecx = ebp + (-0x50); /* 0x007B223E: lea ecx, [ebp - 0x50] */
    goto L_005F3D00; /* 0x007B2241: jmp 0x5f3d00 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005F3D00: RECOMP_ITAIL(0x005F3D00u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2246(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2246u);

L_007B2246:
    ecx = ebp + (-0x1C); /* 0x007B2246: lea ecx, [ebp - 0x1c] */
    goto L_00419790; /* 0x007B2249: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B224E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B224Eu);

L_007B224E:
    ecx = ebp + (-0x30); /* 0x007B224E: lea ecx, [ebp - 0x30] */
    goto L_005F3D00; /* 0x007B2251: jmp 0x5f3d00 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005F3D00: RECOMP_ITAIL(0x005F3D00u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2256(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2256u);

L_007B2256:
    ecx = ebp + (-0x3C); /* 0x007B2256: lea ecx, [ebp - 0x3c] */
    goto L_00419790; /* 0x007B2259: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B225E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B225Eu);

L_007B225E:
    ecx = ebp + (-0x30); /* 0x007B225E: lea ecx, [ebp - 0x30] */
    goto L_005F00D0; /* 0x007B2261: jmp 0x5f00d0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005F00D0: RECOMP_ITAIL(0x005F00D0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2266(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2266u);

L_007B2266:
    ecx = ebp + (-0x30); /* 0x007B2266: lea ecx, [ebp - 0x30] */
    goto L_005F3D00; /* 0x007B2269: jmp 0x5f3d00 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005F3D00: RECOMP_ITAIL(0x005F3D00u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B226E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B226Eu);

L_007B226E:
    ecx = ebp + (-0x1C); /* 0x007B226E: lea ecx, [ebp - 0x1c] */
    goto L_00419790; /* 0x007B2271: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2276(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2276u);

    goto L_007B2276;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B2276:
    edx = MEM32(esp + 0x8); /* 0x007B2276: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B227A: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x54)); /* 0x007B227D: mov ecx, dword ptr [edx - 0x54] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B2280: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B2282: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083C078u; /* 0x007B2287: mov eax, 0x83c078 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B228C: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B22A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B22A0u);

L_007B22A0:
    eax = MEM32(ebp + (-0x10)); /* 0x007B22A0: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007B22A3: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007B22A4: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007B22AA: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007B22AB: ret  */
    RECOMP_REGS_OUT();
}

void sub_007B22AC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B22ACu);

    goto L_007B22AC;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B22AC:
    edx = MEM32(esp + 0x8); /* 0x007B22AC: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B22B0: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x007B22B3: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B22B6: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B22B8: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083C100u; /* 0x007B22BD: mov eax, 0x83c100 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B22C2: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B22D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B22D0u);

L_007B22D0:
    ecx = MEM32(ebp + (-0x38)); /* 0x007B22D0: mov ecx, dword ptr [ebp - 0x38] */
    goto L_0040A000; /* 0x007B22D3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B22D8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B22D8u);

L_007B22D8:
    ecx = MEM32(ebp + (-0x38)); /* 0x007B22D8: mov ecx, dword ptr [ebp - 0x38] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x20u; /* 0x007B22DB: add ecx, 0x20 */
    _flag_k = FK_ADD;
    goto L_0048A1D0; /* 0x007B22DE: jmp 0x48a1d0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0048A1D0: RECOMP_ITAIL(0x0048A1D0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B22E3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B22E3u);

L_007B22E3:
    ecx = MEM32(ebp + (-0x38)); /* 0x007B22E3: mov ecx, dword ptr [ebp - 0x38] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x34u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x34u; /* 0x007B22E6: add ecx, 0x34 */
    _flag_k = FK_ADD;
    goto L_005E4020; /* 0x007B22E9: jmp 0x5e4020 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005E4020: RECOMP_ITAIL(0x005E4020u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B22EE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B22EEu);

L_007B22EE:
    ecx = MEM32(ebp + (-0x38)); /* 0x007B22EE: mov ecx, dword ptr [ebp - 0x38] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x48u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x48u; /* 0x007B22F1: add ecx, 0x48 */
    _flag_k = FK_ADD;
    goto L_005F0D00; /* 0x007B22F4: jmp 0x5f0d00 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005F0D00: RECOMP_ITAIL(0x005F0D00u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B22F9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B22F9u);

L_007B22F9:
    ecx = MEM32(ebp + (-0x38)); /* 0x007B22F9: mov ecx, dword ptr [ebp - 0x38] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x5Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x5Cu; /* 0x007B22FC: add ecx, 0x5c */
    _flag_k = FK_ADD;
    goto L_0048A1D0; /* 0x007B22FF: jmp 0x48a1d0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0048A1D0: RECOMP_ITAIL(0x0048A1D0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2304(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2304u);

L_007B2304:
    ecx = MEM32(ebp + (-0x38)); /* 0x007B2304: mov ecx, dword ptr [ebp - 0x38] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x70u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x70u; /* 0x007B2307: add ecx, 0x70 */
    _flag_k = FK_ADD;
    goto L_005F0D60; /* 0x007B230A: jmp 0x5f0d60 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005F0D60: RECOMP_ITAIL(0x005F0D60u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B230F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B230Fu);

L_007B230F:
    ecx = MEM32(ebp + (-0x38)); /* 0x007B230F: mov ecx, dword ptr [ebp - 0x38] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x84u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x84u; /* 0x007B2312: add ecx, 0x84 */
    _flag_k = FK_ADD;
    goto L_005E4020; /* 0x007B2318: jmp 0x5e4020 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005E4020: RECOMP_ITAIL(0x005E4020u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B231D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B231Du);

L_007B231D:
    ecx = MEM32(ebp + (-0x38)); /* 0x007B231D: mov ecx, dword ptr [ebp - 0x38] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x98u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x98u; /* 0x007B2320: add ecx, 0x98 */
    _flag_k = FK_ADD;
    goto L_005E4080; /* 0x007B2326: jmp 0x5e4080 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005E4080: RECOMP_ITAIL(0x005E4080u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B232B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B232Bu);

L_007B232B:
    ecx = MEM32(ebp + (-0x38)); /* 0x007B232B: mov ecx, dword ptr [ebp - 0x38] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xB8u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xB8u; /* 0x007B232E: add ecx, 0xb8 */
    _flag_k = FK_ADD;
    goto L_0040A000; /* 0x007B2334: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2339(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2339u);

L_007B2339:
    ecx = MEM32(ebp + (-0x2C)); /* 0x007B2339: mov ecx, dword ptr [ebp - 0x2c] */
    goto L_005EC870; /* 0x007B233C: jmp 0x5ec870 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005EC870: RECOMP_ITAIL(0x005EC870u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2341(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2341u);

L_007B2341:
    ecx = MEM32(ebp + (-0x30)); /* 0x007B2341: mov ecx, dword ptr [ebp - 0x30] */
    goto L_005EC0F0; /* 0x007B2344: jmp 0x5ec0f0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005EC0F0: RECOMP_ITAIL(0x005EC0F0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2349(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2349u);

L_007B2349:
    ecx = MEM32(ebp + (-0x38)); /* 0x007B2349: mov ecx, dword ptr [ebp - 0x38] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xD0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xD0u; /* 0x007B234C: add ecx, 0xd0 */
    _flag_k = FK_ADD;
    goto L_005E3C10; /* 0x007B2352: jmp 0x5e3c10 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005E3C10: RECOMP_ITAIL(0x005E3C10u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2357(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2357u);

L_007B2357:
    ecx = MEM32(ebp + (-0x38)); /* 0x007B2357: mov ecx, dword ptr [ebp - 0x38] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xE4u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xE4u; /* 0x007B235A: add ecx, 0xe4 */
    _flag_k = FK_ADD;
    goto L_00419790; /* 0x007B2360: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}
