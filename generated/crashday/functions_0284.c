#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_007C4EB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C4EB0u);

L_007C4EB0:
    goto L_00409980; /* 0x007C4EB0: jmp 0x409980 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00409980: RECOMP_ITAIL(0x00409980u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C4EB5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C4EB5u);

L_007C4EB5:
    ecx = MEM32(ebp + 0x8); /* 0x007C4EB5: mov ecx, dword ptr [ebp + 8] */
    goto L_0040A000; /* 0x007C4EB8: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C4EBD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C4EBDu);

L_007C4EBD:
    goto L_00409980; /* 0x007C4EBD: jmp 0x409980 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00409980: RECOMP_ITAIL(0x00409980u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C4EC2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C4EC2u);

L_007C4EC2:
    ecx = MEM32(ebp + 0x8); /* 0x007C4EC2: mov ecx, dword ptr [ebp + 8] */
    goto L_0040A000; /* 0x007C4EC5: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C4ECA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C4ECAu);

    goto L_007C4ECA;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007C4ECA:
    edx = MEM32(esp + 0x8); /* 0x007C4ECA: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007C4ECE: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x10)); /* 0x007C4ED1: mov ecx, dword ptr [edx - 0x10] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007C4ED4: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007C4ED6: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0084E1BCu; /* 0x007C4EDB: mov eax, 0x84e1bc */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007C4EE0: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007C4EF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C4EF0u);

    goto L_007C4EF0;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007C4EF0:
    edx = MEM32(esp + 0x8); /* 0x007C4EF0: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007C4EF4: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x007C4EF7: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007C4EFA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007C4EFC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0084E200u; /* 0x007C4F01: mov eax, 0x84e200 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007C4F06: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007C4F10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C4F10u);

L_007C4F10:
    goto L_00409980; /* 0x007C4F10: jmp 0x409980 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00409980: RECOMP_ITAIL(0x00409980u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C4F15(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C4F15u);

L_007C4F15:
    ecx = MEM32(ebp + 0x8); /* 0x007C4F15: mov ecx, dword ptr [ebp + 8] */
    goto L_0040A000; /* 0x007C4F18: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C4F1D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C4F1Du);

    goto L_007C4F1D;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007C4F1D:
    edx = MEM32(esp + 0x8); /* 0x007C4F1D: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007C4F21: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xC)); /* 0x007C4F24: mov ecx, dword ptr [edx - 0xc] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007C4F27: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007C4F29: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0084E258u; /* 0x007C4F2E: mov eax, 0x84e258 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007C4F33: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007C4F40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C4F40u);

L_007C4F40:
    ecx = MEM32(ebp + 0x8); /* 0x007C4F40: mov ecx, dword ptr [ebp + 8] */
    goto L_0040A000; /* 0x007C4F43: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C4F48(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C4F48u);

    goto L_007C4F48;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007C4F48:
    edx = MEM32(esp + 0x8); /* 0x007C4F48: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007C4F4C: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x8)); /* 0x007C4F4F: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007C4F52: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007C4F54: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0084E28Cu; /* 0x007C4F59: mov eax, 0x84e28c */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007C4F5E: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007C4F70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C4F70u);

    goto L_007C4F70;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007C4F70:
    edx = MEM32(esp + 0x8); /* 0x007C4F70: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007C4F74: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x1C)); /* 0x007C4F77: mov ecx, dword ptr [edx - 0x1c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007C4F7A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007C4F7C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0084E2B8u; /* 0x007C4F81: mov eax, 0x84e2b8 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007C4F86: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007C4F90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C4F90u);

L_007C4F90:
    ecx = MEM32(ebp + (-0x4C)); /* 0x007C4F90: mov ecx, dword ptr [ebp - 0x4c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x007C4F93: add ecx, 4 */
    _flag_k = FK_ADD;
    goto L_006C21D0; /* 0x007C4F96: jmp 0x6c21d0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_006C21D0: RECOMP_ITAIL(0x006C21D0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C4F9B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C4F9Bu);

L_007C4F9B:
    ecx = MEM32(ebp + (-0x48)); /* 0x007C4F9B: mov ecx, dword ptr [ebp - 0x48] */
    goto L_0040A000; /* 0x007C4F9E: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C4FA3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C4FA3u);

L_007C4FA3:
    ecx = MEM32(ebp + (-0x44)); /* 0x007C4FA3: mov ecx, dword ptr [ebp - 0x44] */
    goto L_0040A000; /* 0x007C4FA6: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C4FAB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C4FABu);

L_007C4FAB:
    ecx = ebp + (-0x40); /* 0x007C4FAB: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x007C4FAE: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C4FB3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C4FB3u);

L_007C4FB3:
    ecx = ebp + (-0x28); /* 0x007C4FB3: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007C4FB6: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C4FBB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C4FBBu);

    goto L_007C4FBB;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007C4FBB:
    edx = MEM32(esp + 0x8); /* 0x007C4FBB: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007C4FBF: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x4C)); /* 0x007C4FC2: mov ecx, dword ptr [edx - 0x4c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007C4FC5: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007C4FC7: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x007C4FCC: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007C4FCF: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007C4FD1: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0084E310u; /* 0x007C4FD6: mov eax, 0x84e310 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007C4FDB: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007C4FE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C4FE0u);

L_007C4FE0:
    ecx = ebp + (-0x58); /* 0x007C4FE0: lea ecx, [ebp - 0x58] */
    goto L_0040A000; /* 0x007C4FE3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C4FE8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C4FE8u);

L_007C4FE8:
    ecx = ebp + (-0x1E0); /* 0x007C4FE8: lea ecx, [ebp - 0x1e0] */
    goto L_0053C8D0; /* 0x007C4FEE: jmp 0x53c8d0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0053C8D0: RECOMP_ITAIL(0x0053C8D0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C4FF3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C4FF3u);

L_007C4FF3:
    ecx = ebp + (-0x1E0); /* 0x007C4FF3: lea ecx, [ebp - 0x1e0] */
    goto L_00540E10; /* 0x007C4FF9: jmp 0x540e10 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00540E10: RECOMP_ITAIL(0x00540E10u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C4FFE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C4FFEu);

L_007C4FFE:
    ecx = ebp + (-0x40); /* 0x007C4FFE: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x007C5001: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C5006(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5006u);

L_007C5006:
    ecx = MEM32(ebp + (-0x21C)); /* 0x007C5006: mov ecx, dword ptr [ebp - 0x21c] */
    goto L_0040A000; /* 0x007C500C: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C5011(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5011u);

L_007C5011:
    ecx = ebp + (-0x40); /* 0x007C5011: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x007C5014: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C5019(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5019u);

L_007C5019:
    ecx = ebp + (-0x238); /* 0x007C5019: lea ecx, [ebp - 0x238] */
    goto L_005C6270; /* 0x007C501F: jmp 0x5c6270 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005C6270: RECOMP_ITAIL(0x005C6270u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C5024(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5024u);

L_007C5024:
    ecx = ebp + (-0x288); /* 0x007C5024: lea ecx, [ebp - 0x288] */
    goto L_005C6270; /* 0x007C502A: jmp 0x5c6270 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005C6270: RECOMP_ITAIL(0x005C6270u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C502F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C502Fu);

L_007C502F:
    ecx = ebp + (-0x248); /* 0x007C502F: lea ecx, [ebp - 0x248] */
    goto L_005C6270; /* 0x007C5035: jmp 0x5c6270 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005C6270: RECOMP_ITAIL(0x005C6270u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C503A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C503Au);

L_007C503A:
    ecx = ebp + (-0x40); /* 0x007C503A: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x007C503D: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C5042(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5042u);

L_007C5042:
    ecx = ebp + (-0x258); /* 0x007C5042: lea ecx, [ebp - 0x258] */
    goto L_005C6270; /* 0x007C5048: jmp 0x5c6270 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005C6270: RECOMP_ITAIL(0x005C6270u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C504D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C504Du);

L_007C504D:
    ecx = ebp + (-0x264); /* 0x007C504D: lea ecx, [ebp - 0x264] */
    goto L_00429F40; /* 0x007C5053: jmp 0x429f40 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00429F40: RECOMP_ITAIL(0x00429F40u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C5058(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5058u);

L_007C5058:
    ecx = ebp + (-0x278); /* 0x007C5058: lea ecx, [ebp - 0x278] */
    goto L_005C6270; /* 0x007C505E: jmp 0x5c6270 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005C6270: RECOMP_ITAIL(0x005C6270u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C5063(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5063u);

L_007C5063:
    ecx = ebp + (-0x298); /* 0x007C5063: lea ecx, [ebp - 0x298] */
    goto L_005C6270; /* 0x007C5069: jmp 0x5c6270 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005C6270: RECOMP_ITAIL(0x005C6270u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C506E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C506Eu);

L_007C506E:
    ecx = ebp + (-0x28); /* 0x007C506E: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007C5071: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C5076(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5076u);

L_007C5076:
    eax = MEM32(ebp + (-0x200)); /* 0x007C5076: mov eax, dword ptr [ebp - 0x200] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x007C507C: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007C5097; /* 0x007C507F: je 0x7c5097 */
L_007C5085:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x200))); _flag_b = (uint32_t)(0xFFFFFFFEu);
    MEM32(ebp + (-0x200)) = MEM32(ebp + (-0x200)) & 0xFFFFFFFEu; /* 0x007C5085: and dword ptr [ebp - 0x200], 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0xB8); /* 0x007C508C: lea ecx, [ebp - 0xb8] */
    goto L_0040A000; /* 0x007C5092: jmp 0x40a000 */
L_007C5097:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C5097: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C5098(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5098u);

L_007C5098:
    eax = MEM32(ebp + (-0x200)); /* 0x007C5098: mov eax, dword ptr [ebp - 0x200] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    eax = eax & 2; /* 0x007C509E: and eax, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007C50B9; /* 0x007C50A1: je 0x7c50b9 */
L_007C50A7:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x200))); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ebp + (-0x200)) = MEM32(ebp + (-0x200)) & 0xFFFFFFFDu; /* 0x007C50A7: and dword ptr [ebp - 0x200], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0xA0); /* 0x007C50AE: lea ecx, [ebp - 0xa0] */
    goto L_0040A000; /* 0x007C50B4: jmp 0x40a000 */
L_007C50B9:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C50B9: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C50BA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C50BAu);

L_007C50BA:
    eax = MEM32(ebp + (-0x200)); /* 0x007C50BA: mov eax, dword ptr [ebp - 0x200] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    eax = eax & 4; /* 0x007C50C0: and eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007C50DB; /* 0x007C50C3: je 0x7c50db */
L_007C50C9:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x200))); _flag_b = (uint32_t)(0xFFFFFFFBu);
    MEM32(ebp + (-0x200)) = MEM32(ebp + (-0x200)) & 0xFFFFFFFBu; /* 0x007C50C9: and dword ptr [ebp - 0x200], 0xfffffffb */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0xD0); /* 0x007C50D0: lea ecx, [ebp - 0xd0] */
    goto L_0040A000; /* 0x007C50D6: jmp 0x40a000 */
L_007C50DB:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C50DB: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C50DC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C50DCu);

L_007C50DC:
    eax = MEM32(ebp + (-0x200)); /* 0x007C50DC: mov eax, dword ptr [ebp - 0x200] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    eax = eax & 8; /* 0x007C50E2: and eax, 8 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007C50FD; /* 0x007C50E5: je 0x7c50fd */
L_007C50EB:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x200))); _flag_b = (uint32_t)(0xFFFFFFF7u);
    MEM32(ebp + (-0x200)) = MEM32(ebp + (-0x200)) & 0xFFFFFFF7u; /* 0x007C50EB: and dword ptr [ebp - 0x200], 0xfffffff7 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x118); /* 0x007C50F2: lea ecx, [ebp - 0x118] */
    goto L_0040A000; /* 0x007C50F8: jmp 0x40a000 */
L_007C50FD:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C50FD: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C50FE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C50FEu);

L_007C50FE:
    ecx = ebp + (-0xE8); /* 0x007C50FE: lea ecx, [ebp - 0xe8] */
    goto L_0040A000; /* 0x007C5104: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C5109(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5109u);

L_007C5109:
    ecx = ebp + (-0x160); /* 0x007C5109: lea ecx, [ebp - 0x160] */
    goto L_0040A000; /* 0x007C510F: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C5114(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5114u);

L_007C5114:
    ecx = ebp + (-0x1F8); /* 0x007C5114: lea ecx, [ebp - 0x1f8] */
    goto L_0040A000; /* 0x007C511A: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C511F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C511Fu);

L_007C511F:
    ecx = ebp + (-0x70); /* 0x007C511F: lea ecx, [ebp - 0x70] */
    goto L_0040A000; /* 0x007C5122: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C5127(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5127u);

L_007C5127:
    ecx = ebp + (-0x190); /* 0x007C5127: lea ecx, [ebp - 0x190] */
    goto L_0040A000; /* 0x007C512D: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C5132(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5132u);

L_007C5132:
    ecx = ebp + (-0x20C); /* 0x007C5132: lea ecx, [ebp - 0x20c] */
    goto L_00429F40; /* 0x007C5138: jmp 0x429f40 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00429F40: RECOMP_ITAIL(0x00429F40u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C513D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C513Du);

L_007C513D:
    ecx = ebp + (-0x88); /* 0x007C513D: lea ecx, [ebp - 0x88] */
    goto L_0040A000; /* 0x007C5143: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C5148(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5148u);

L_007C5148:
    ecx = ebp + (-0x148); /* 0x007C5148: lea ecx, [ebp - 0x148] */
    goto L_0040A000; /* 0x007C514E: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C5153(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5153u);

L_007C5153:
    ecx = ebp + (-0x1A8); /* 0x007C5153: lea ecx, [ebp - 0x1a8] */
    goto L_0040A000; /* 0x007C5159: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C515E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C515Eu);

L_007C515E:
    ecx = ebp + (-0x178); /* 0x007C515E: lea ecx, [ebp - 0x178] */
    goto L_0040A000; /* 0x007C5164: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C5169(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5169u);

L_007C5169:
    ecx = ebp + (-0x58); /* 0x007C5169: lea ecx, [ebp - 0x58] */
    goto L_0040A000; /* 0x007C516C: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C5171(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5171u);

L_007C5171:
    ecx = ebp + (-0x100); /* 0x007C5171: lea ecx, [ebp - 0x100] */
    goto L_0040A000; /* 0x007C5177: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C517C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C517Cu);

L_007C517C:
    ecx = ebp + (-0x130); /* 0x007C517C: lea ecx, [ebp - 0x130] */
    goto L_0040A000; /* 0x007C5182: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C5187(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5187u);

L_007C5187:
    ecx = ebp + (-0x1E0); /* 0x007C5187: lea ecx, [ebp - 0x1e0] */
    goto L_0053C8D0; /* 0x007C518D: jmp 0x53c8d0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0053C8D0: RECOMP_ITAIL(0x0053C8D0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C5192(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5192u);

L_007C5192:
    goto L_00409980; /* 0x007C5192: jmp 0x409980 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00409980: RECOMP_ITAIL(0x00409980u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C5197(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5197u);

L_007C5197:
    ecx = MEM32(ebp + (-0x220)); /* 0x007C5197: mov ecx, dword ptr [ebp - 0x220] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x18u; /* 0x007C519D: add ecx, 0x18 */
    _flag_k = FK_ADD;
    goto L_0053C6A0; /* 0x007C51A0: jmp 0x53c6a0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0053C6A0: RECOMP_ITAIL(0x0053C6A0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C51A5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C51A5u);

    goto L_007C51A5;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007C51A5:
    edx = MEM32(esp + 0x8); /* 0x007C51A5: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007C51A9: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x29C)); /* 0x007C51AC: mov ecx, dword ptr [edx - 0x29c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007C51B2: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007C51B4: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x007C51B9: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007C51BC: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007C51BE: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0084E360u; /* 0x007C51C3: mov eax, 0x84e360 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007C51C8: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007C51D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C51D0u);

L_007C51D0:
    ecx = ebp + (-0x40); /* 0x007C51D0: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x007C51D3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C51D8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C51D8u);

L_007C51D8:
    ecx = ebp + (-0xB8); /* 0x007C51D8: lea ecx, [ebp - 0xb8] */
    goto L_0052D890; /* 0x007C51DE: jmp 0x52d890 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0052D890: RECOMP_ITAIL(0x0052D890u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C51E3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C51E3u);

L_007C51E3:
    ecx = ebp + (-0x28); /* 0x007C51E3: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007C51E6: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C51EB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C51EBu);

L_007C51EB:
    ecx = ebp + (-0x40); /* 0x007C51EB: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x007C51EE: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C51F3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C51F3u);

L_007C51F3:
    ecx = ebp + (-0x28); /* 0x007C51F3: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007C51F6: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C51FB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C51FBu);

    goto L_007C51FB;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007C51FB:
    edx = MEM32(esp + 0x8); /* 0x007C51FB: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007C51FF: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xCC)); /* 0x007C5202: mov ecx, dword ptr [edx - 0xcc] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007C5208: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007C520A: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x007C520F: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007C5212: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007C5214: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0084E4C0u; /* 0x007C5219: mov eax, 0x84e4c0 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007C521E: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007C5230(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5230u);

L_007C5230:
    ecx = ebp + (-0x44); /* 0x007C5230: lea ecx, [ebp - 0x44] */
    goto L_0040A000; /* 0x007C5233: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C5238(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5238u);

L_007C5238:
    ecx = ebp + (-0xA4); /* 0x007C5238: lea ecx, [ebp - 0xa4] */
    goto L_0040A000; /* 0x007C523E: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C5243(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5243u);

L_007C5243:
    ecx = ebp + (-0xEC); /* 0x007C5243: lea ecx, [ebp - 0xec] */
    goto L_00429F40; /* 0x007C5249: jmp 0x429f40 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00429F40: RECOMP_ITAIL(0x00429F40u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C524E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C524Eu);

L_007C524E:
    ecx = ebp + (-0x2C); /* 0x007C524E: lea ecx, [ebp - 0x2c] */
    goto L_0040A000; /* 0x007C5251: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C5256(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5256u);

L_007C5256:
    ecx = ebp + (-0x5C); /* 0x007C5256: lea ecx, [ebp - 0x5c] */
    goto L_0040A000; /* 0x007C5259: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C525E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C525Eu);

L_007C525E:
    ecx = ebp + (-0xD4); /* 0x007C525E: lea ecx, [ebp - 0xd4] */
    goto L_0040A000; /* 0x007C5264: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C5269(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5269u);

L_007C5269:
    ecx = ebp + (-0xBC); /* 0x007C5269: lea ecx, [ebp - 0xbc] */
    goto L_0040A000; /* 0x007C526F: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C5274(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5274u);

L_007C5274:
    ecx = ebp + (-0x2C); /* 0x007C5274: lea ecx, [ebp - 0x2c] */
    goto L_0040A000; /* 0x007C5277: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C527C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C527Cu);

L_007C527C:
    ecx = ebp + (-0x74); /* 0x007C527C: lea ecx, [ebp - 0x74] */
    goto L_0040A000; /* 0x007C527F: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C5284(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5284u);

L_007C5284:
    ecx = ebp + (-0x8C); /* 0x007C5284: lea ecx, [ebp - 0x8c] */
    goto L_0040A000; /* 0x007C528A: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C528F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C528Fu);

L_007C528F:
    ecx = ebp + (-0x5C); /* 0x007C528F: lea ecx, [ebp - 0x5c] */
    goto L_0040A000; /* 0x007C5292: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C5297(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5297u);

    goto L_007C5297;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007C5297:
    edx = MEM32(esp + 0x8); /* 0x007C5297: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007C529B: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x108)); /* 0x007C529E: mov ecx, dword ptr [edx - 0x108] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007C52A4: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007C52A6: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x8)); /* 0x007C52AB: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007C52AE: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007C52B0: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0084E510u; /* 0x007C52B5: mov eax, 0x84e510 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007C52BA: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007C52C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C52C0u);

L_007C52C0:
    ecx = ebp + (-0x28); /* 0x007C52C0: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007C52C3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C52C8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C52C8u);

L_007C52C8:
    ecx = ebp + (-0x40); /* 0x007C52C8: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x007C52CB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C52D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C52D0u);

L_007C52D0:
    ecx = ebp + (-0x104); /* 0x007C52D0: lea ecx, [ebp - 0x104] */
    goto L_00429F40; /* 0x007C52D6: jmp 0x429f40 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00429F40: RECOMP_ITAIL(0x00429F40u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C52DB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C52DBu);

L_007C52DB:
    ecx = MEM32(ebp + (-0xF0)); /* 0x007C52DB: mov ecx, dword ptr [ebp - 0xf0] */
    goto L_0040A000; /* 0x007C52E1: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C52E6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C52E6u);

L_007C52E6:
    ecx = MEM32(ebp + (-0xF8)); /* 0x007C52E6: mov ecx, dword ptr [ebp - 0xf8] */
    goto L_0040A000; /* 0x007C52EC: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C52F1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C52F1u);

L_007C52F1:
    ecx = ebp + (-0x70); /* 0x007C52F1: lea ecx, [ebp - 0x70] */
    goto L_0040A000; /* 0x007C52F4: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C52F9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C52F9u);

L_007C52F9:
    ecx = ebp + (-0xA0); /* 0x007C52F9: lea ecx, [ebp - 0xa0] */
    goto L_0040A000; /* 0x007C52FF: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C5304(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5304u);

L_007C5304:
    ecx = ebp + (-0xE8); /* 0x007C5304: lea ecx, [ebp - 0xe8] */
    goto L_0040A000; /* 0x007C530A: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C530F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C530Fu);

L_007C530F:
    ecx = ebp + (-0x40); /* 0x007C530F: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x007C5312: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C5317(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5317u);

L_007C5317:
    ecx = ebp + (-0x1C); /* 0x007C5317: lea ecx, [ebp - 0x1c] */
    goto L_00429F40; /* 0x007C531A: jmp 0x429f40 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00429F40: RECOMP_ITAIL(0x00429F40u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C531F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C531Fu);

L_007C531F:
    ecx = ebp + (-0x58); /* 0x007C531F: lea ecx, [ebp - 0x58] */
    goto L_0040A000; /* 0x007C5322: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C5327(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5327u);

L_007C5327:
    ecx = ebp + (-0xB8); /* 0x007C5327: lea ecx, [ebp - 0xb8] */
    goto L_0040A000; /* 0x007C532D: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C5332(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5332u);

L_007C5332:
    goto L_00409980; /* 0x007C5332: jmp 0x409980 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00409980: RECOMP_ITAIL(0x00409980u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C5337(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5337u);

L_007C5337:
    ecx = ebp + (-0xD0); /* 0x007C5337: lea ecx, [ebp - 0xd0] */
    goto L_0040A000; /* 0x007C533D: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C5342(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5342u);

L_007C5342:
    ecx = MEM32(ebp + (-0xF4)); /* 0x007C5342: mov ecx, dword ptr [ebp - 0xf4] */
    goto L_0040A000; /* 0x007C5348: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C534D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C534Du);

L_007C534D:
    ecx = ebp + (-0x88); /* 0x007C534D: lea ecx, [ebp - 0x88] */
    goto L_0040A000; /* 0x007C5353: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C5358(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5358u);

L_007C5358:
    eax = MEM32(ebp + (-0xF4)); /* 0x007C5358: mov eax, dword ptr [ebp - 0xf4] */
    PUSH32(esp, eax); /* 0x007C535E: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C535F: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007C5365: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C5366: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C5367(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5367u);

L_007C5367:
    ecx = MEM32(ebp + (-0x120)); /* 0x007C5367: mov ecx, dword ptr [ebp - 0x120] */
    goto L_0040A000; /* 0x007C536D: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C5372(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5372u);

L_007C5372:
    ecx = MEM32(ebp + (-0x10C)); /* 0x007C5372: mov ecx, dword ptr [ebp - 0x10c] */
    goto L_0040A000; /* 0x007C5378: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C537D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C537Du);

L_007C537D:
    ecx = ebp + (-0x40); /* 0x007C537D: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x007C5380: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C5385(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5385u);

L_007C5385:
    ecx = MEM32(ebp + (-0x10C)); /* 0x007C5385: mov ecx, dword ptr [ebp - 0x10c] */
    goto L_0040A000; /* 0x007C538B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C5390(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5390u);

L_007C5390:
    ecx = MEM32(ebp + (-0x120)); /* 0x007C5390: mov ecx, dword ptr [ebp - 0x120] */
    goto L_0040A000; /* 0x007C5396: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C539B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C539Bu);

L_007C539B:
    eax = MEM32(ebp + (-0x10C)); /* 0x007C539B: mov eax, dword ptr [ebp - 0x10c] */
    PUSH32(esp, eax); /* 0x007C53A1: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C53A2: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007C53A8: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C53A9: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C53AA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C53AAu);

L_007C53AA:
    ecx = ebp + (-0x40); /* 0x007C53AA: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x007C53AD: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C53B2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C53B2u);

L_007C53B2:
    ecx = ebp + (-0x40); /* 0x007C53B2: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x007C53B5: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C53BA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C53BAu);

L_007C53BA:
    ecx = ebp + (-0x1C); /* 0x007C53BA: lea ecx, [ebp - 0x1c] */
    goto L_00429F40; /* 0x007C53BD: jmp 0x429f40 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00429F40: RECOMP_ITAIL(0x00429F40u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C53C2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C53C2u);

L_007C53C2:
    ecx = ebp + (-0x28); /* 0x007C53C2: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007C53C5: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C53CA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C53CAu);

L_007C53CA:
    ecx = ebp + (-0x88); /* 0x007C53CA: lea ecx, [ebp - 0x88] */
    goto L_0040A000; /* 0x007C53D0: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}
