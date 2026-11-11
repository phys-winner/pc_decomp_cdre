#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_007816C8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007816C8u);

    goto L_007816C8;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007816C8:
    edx = MEM32(esp + 0x8); /* 0x007816C8: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007816CC: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xC)); /* 0x007816CF: mov ecx, dword ptr [edx - 0xc] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007816D2: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007816D4: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0080E984u; /* 0x007816D9: mov eax, 0x80e984 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007816DE: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007816F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007816F0u);

L_007816F0:
    ecx = MEM32(ebp + (-0x10)); /* 0x007816F0: mov ecx, dword ptr [ebp - 0x10] */
    goto L_004099E0; /* 0x007816F3: jmp 0x4099e0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_004099E0: RECOMP_ITAIL(0x004099E0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007816F8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007816F8u);

    goto L_007816F8;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007816F8:
    edx = MEM32(esp + 0x8); /* 0x007816F8: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007816FC: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x8)); /* 0x007816FF: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x00781702: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00781704: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0080E9B0u; /* 0x00781709: mov eax, 0x80e9b0 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0078170E: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00781720(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781720u);

L_00781720:
    eax = MEM32(ebp + (-0x10)); /* 0x00781720: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x00781723: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00781738; /* 0x00781726: je 0x781738 */
L_0078172C:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0xFFFFFFFEu);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & 0xFFFFFFFEu; /* 0x0078172C: and dword ptr [ebp - 0x10], 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0x8); /* 0x00781730: mov ecx, dword ptr [ebp + 8] */
    goto L_0040A000; /* 0x00781733: jmp 0x40a000 */
L_00781738:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00781738: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00781739(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781739u);

    goto L_00781739;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_00781739:
    edx = MEM32(esp + 0x8); /* 0x00781739: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0078173D: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xC)); /* 0x00781740: mov ecx, dword ptr [edx - 0xc] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x00781743: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00781745: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0080E9DCu; /* 0x0078174A: mov eax, 0x80e9dc */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0078174F: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00781760(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781760u);

L_00781760:
    ecx = MEM32(ebp + (-0x10)); /* 0x00781760: mov ecx, dword ptr [ebp - 0x10] */
    goto L_00409BB0; /* 0x00781763: jmp 0x409bb0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00409BB0: RECOMP_ITAIL(0x00409BB0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00781768(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781768u);

L_00781768:
    ecx = MEM32(ebp + (-0x10)); /* 0x00781768: mov ecx, dword ptr [ebp - 0x10] */
    goto L_004099E0; /* 0x0078176B: jmp 0x4099e0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_004099E0: RECOMP_ITAIL(0x004099E0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00781770(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781770u);

    goto L_00781770;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_00781770:
    edx = MEM32(esp + 0x8); /* 0x00781770: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x00781774: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xC)); /* 0x00781777: mov ecx, dword ptr [edx - 0xc] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0078177A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0078177C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0080EA08u; /* 0x00781781: mov eax, 0x80ea08 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x00781786: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00781790(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781790u);

L_00781790:
    goto L_00409980; /* 0x00781790: jmp 0x409980 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00409980: RECOMP_ITAIL(0x00409980u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00781795(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781795u);

    goto L_00781795;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_00781795:
    edx = MEM32(esp + 0x8); /* 0x00781795: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x00781799: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x1C)); /* 0x0078179C: mov ecx, dword ptr [edx - 0x1c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0078179F: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007817A1: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0080EA3Cu; /* 0x007817A6: mov eax, 0x80ea3c */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007817AB: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007817B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007817B0u);

L_007817B0:
    ecx = 0x00866090u; /* 0x007817B0: mov ecx, 0x866090 */
    goto L_004099E0; /* 0x007817B5: jmp 0x4099e0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_004099E0: RECOMP_ITAIL(0x004099E0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007817BA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007817BAu);

    goto L_007817BA;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007817BA:
    edx = MEM32(esp + 0x8); /* 0x007817BA: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007817BE: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x4)); /* 0x007817C1: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007817C4: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007817C6: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0080EAD0u; /* 0x007817CB: mov eax, 0x80ead0 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007817D0: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007817E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007817E0u);

L_007817E0:
    ecx = 0x00866094u; /* 0x007817E0: mov ecx, 0x866094 */
    goto L_004099E0; /* 0x007817E5: jmp 0x4099e0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_004099E0: RECOMP_ITAIL(0x004099E0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007817EA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007817EAu);

L_007817EA:
    ecx = 0x00866094u; /* 0x007817EA: mov ecx, 0x866094 */
    goto L_00409BB0; /* 0x007817EF: jmp 0x409bb0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00409BB0: RECOMP_ITAIL(0x00409BB0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007817F4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007817F4u);

    goto L_007817F4;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007817F4:
    edx = MEM32(esp + 0x8); /* 0x007817F4: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007817F8: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x4)); /* 0x007817FB: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007817FE: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00781800: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0080EAFCu; /* 0x00781805: mov eax, 0x80eafc */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0078180A: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00781810(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781810u);

L_00781810:
    ecx = 0x0086608Cu; /* 0x00781810: mov ecx, 0x86608c */
    goto L_004099E0; /* 0x00781815: jmp 0x4099e0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_004099E0: RECOMP_ITAIL(0x004099E0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078181A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078181Au);

L_0078181A:
    ecx = 0x0086608Cu; /* 0x0078181A: mov ecx, 0x86608c */
    goto L_00409BB0; /* 0x0078181F: jmp 0x409bb0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00409BB0: RECOMP_ITAIL(0x00409BB0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00781824(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781824u);

    goto L_00781824;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_00781824:
    edx = MEM32(esp + 0x8); /* 0x00781824: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x00781828: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x4)); /* 0x0078182B: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0078182E: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00781830: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0080EB30u; /* 0x00781835: mov eax, 0x80eb30 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0078183A: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00781840(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781840u);

L_00781840:
    ecx = 0x0086608Cu; /* 0x00781840: mov ecx, 0x86608c */
    goto L_00409BB0; /* 0x00781845: jmp 0x409bb0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00409BB0: RECOMP_ITAIL(0x00409BB0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078184A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078184Au);

L_0078184A:
    ecx = 0x0086608Cu; /* 0x0078184A: mov ecx, 0x86608c */
    goto L_004099E0; /* 0x0078184F: jmp 0x4099e0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_004099E0: RECOMP_ITAIL(0x004099E0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00781854(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781854u);

    goto L_00781854;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_00781854:
    edx = MEM32(esp + 0x8); /* 0x00781854: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x00781858: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x4)); /* 0x0078185B: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0078185E: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00781860: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0080EB64u; /* 0x00781865: mov eax, 0x80eb64 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0078186A: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00781870(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781870u);

L_00781870:
    ecx = 0x00866094u; /* 0x00781870: mov ecx, 0x866094 */
    goto L_00409BB0; /* 0x00781875: jmp 0x409bb0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00409BB0: RECOMP_ITAIL(0x00409BB0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078187A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078187Au);

L_0078187A:
    ecx = 0x00866094u; /* 0x0078187A: mov ecx, 0x866094 */
    goto L_004099E0; /* 0x0078187F: jmp 0x4099e0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_004099E0: RECOMP_ITAIL(0x004099E0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00781884(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781884u);

    goto L_00781884;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_00781884:
    edx = MEM32(esp + 0x8); /* 0x00781884: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x00781888: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x4)); /* 0x0078188B: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0078188E: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00781890: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0080EB98u; /* 0x00781895: mov eax, 0x80eb98 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0078189A: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007818A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007818A0u);

L_007818A0:
    ecx = MEM32(ebp + (-0x10)); /* 0x007818A0: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040A000; /* 0x007818A3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007818A8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007818A8u);

L_007818A8:
    ecx = MEM32(ebp + (-0x14)); /* 0x007818A8: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040A000; /* 0x007818AB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007818B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007818B0u);

    goto L_007818B0;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007818B0:
    edx = MEM32(esp + 0x8); /* 0x007818B0: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007818B4: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xC)); /* 0x007818B7: mov ecx, dword ptr [edx - 0xc] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007818BA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007818BC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0080EBCCu; /* 0x007818C1: mov eax, 0x80ebcc */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007818C6: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007818D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007818D0u);

L_007818D0:
    ecx = 0x00864A18u; /* 0x007818D0: mov ecx, 0x864a18 */
    goto L_0040A000; /* 0x007818D5: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007818DA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007818DAu);

L_007818DA:
    ecx = 0x00864A30u; /* 0x007818DA: mov ecx, 0x864a30 */
    goto L_0040A000; /* 0x007818DF: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007818E4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007818E4u);

    goto L_007818E4;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007818E4:
    edx = MEM32(esp + 0x8); /* 0x007818E4: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007818E8: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x4)); /* 0x007818EB: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007818EE: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007818F0: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0080EC00u; /* 0x007818F5: mov eax, 0x80ec00 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007818FA: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00781900(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781900u);

L_00781900:
    ecx = MEM32(ebp + (-0x10)); /* 0x00781900: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040B220; /* 0x00781903: jmp 0x40b220 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B220: RECOMP_ITAIL(0x0040B220u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00781908(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781908u);

L_00781908:
    ecx = MEM32(ebp + (-0x10)); /* 0x00781908: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040B290; /* 0x0078190B: jmp 0x40b290 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B290: RECOMP_ITAIL(0x0040B290u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00781910(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781910u);

L_00781910:
    ecx = MEM32(ebp + (-0x10)); /* 0x00781910: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040B2E0; /* 0x00781913: jmp 0x40b2e0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B2E0: RECOMP_ITAIL(0x0040B2E0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00781918(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781918u);

L_00781918:
    ecx = MEM32(ebp + (-0x10)); /* 0x00781918: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040B340; /* 0x0078191B: jmp 0x40b340 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B340: RECOMP_ITAIL(0x0040B340u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00781920(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781920u);

    goto L_00781920;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_00781920:
    edx = MEM32(esp + 0x8); /* 0x00781920: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x00781924: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x10)); /* 0x00781927: mov ecx, dword ptr [edx - 0x10] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0078192A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0078192C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0080EC34u; /* 0x00781931: mov eax, 0x80ec34 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x00781936: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00781940(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781940u);

L_00781940:
    ecx = MEM32(ebp + (-0x10)); /* 0x00781940: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040C940; /* 0x00781943: jmp 0x40c940 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040C940: RECOMP_ITAIL(0x0040C940u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00781948(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781948u);

    goto L_00781948;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_00781948:
    edx = MEM32(esp + 0x8); /* 0x00781948: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0078194C: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xC)); /* 0x0078194F: mov ecx, dword ptr [edx - 0xc] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x00781952: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00781954: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0080EC78u; /* 0x00781959: mov eax, 0x80ec78 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0078195E: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00781970(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781970u);

L_00781970:
    ecx = ebp + (-0x10); /* 0x00781970: lea ecx, [ebp - 0x10] */
    goto L_0040B330; /* 0x00781973: jmp 0x40b330 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B330: RECOMP_ITAIL(0x0040B330u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00781978(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781978u);

L_00781978:
    ecx = ebp + (-0x10); /* 0x00781978: lea ecx, [ebp - 0x10] */
    goto L_0040B140; /* 0x0078197B: jmp 0x40b140 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B140: RECOMP_ITAIL(0x0040B140u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00781980(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781980u);

L_00781980:
    ecx = ebp + (-0x10); /* 0x00781980: lea ecx, [ebp - 0x10] */
    goto L_0040B330; /* 0x00781983: jmp 0x40b330 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B330: RECOMP_ITAIL(0x0040B330u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00781988(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781988u);

    goto L_00781988;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_00781988:
    edx = MEM32(esp + 0x8); /* 0x00781988: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0078198C: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x8)); /* 0x0078198F: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x00781992: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00781994: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0080ECA4u; /* 0x00781999: mov eax, 0x80eca4 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0078199E: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007819B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007819B0u);

L_007819B0:
    ecx = ebp + (-0x38); /* 0x007819B0: lea ecx, [ebp - 0x38] */
    goto L_0040B340; /* 0x007819B3: jmp 0x40b340 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B340: RECOMP_ITAIL(0x0040B340u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007819B8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007819B8u);

L_007819B8:
    ecx = ebp + (-0x38); /* 0x007819B8: lea ecx, [ebp - 0x38] */
    goto L_0040B2E0; /* 0x007819BB: jmp 0x40b2e0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B2E0: RECOMP_ITAIL(0x0040B2E0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007819C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007819C0u);

L_007819C0:
    ecx = ebp + (-0x38); /* 0x007819C0: lea ecx, [ebp - 0x38] */
    goto L_0040B290; /* 0x007819C3: jmp 0x40b290 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B290: RECOMP_ITAIL(0x0040B290u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007819C8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007819C8u);

L_007819C8:
    ecx = ebp + (-0x38); /* 0x007819C8: lea ecx, [ebp - 0x38] */
    goto L_0040B220; /* 0x007819CB: jmp 0x40b220 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B220: RECOMP_ITAIL(0x0040B220u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007819D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007819D0u);

L_007819D0:
    ecx = ebp + (-0x38); /* 0x007819D0: lea ecx, [ebp - 0x38] */
    goto L_0040A700; /* 0x007819D3: jmp 0x40a700 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A700: RECOMP_ITAIL(0x0040A700u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007819D8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007819D8u);

L_007819D8:
    ecx = ebp + (-0x38); /* 0x007819D8: lea ecx, [ebp - 0x38] */
    goto L_0040B220; /* 0x007819DB: jmp 0x40b220 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B220: RECOMP_ITAIL(0x0040B220u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007819E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007819E0u);

L_007819E0:
    ecx = ebp + (-0x38); /* 0x007819E0: lea ecx, [ebp - 0x38] */
    goto L_0040B290; /* 0x007819E3: jmp 0x40b290 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B290: RECOMP_ITAIL(0x0040B290u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007819E8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007819E8u);

L_007819E8:
    ecx = ebp + (-0x38); /* 0x007819E8: lea ecx, [ebp - 0x38] */
    goto L_0040B2E0; /* 0x007819EB: jmp 0x40b2e0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B2E0: RECOMP_ITAIL(0x0040B2E0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007819F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007819F0u);

L_007819F0:
    ecx = ebp + (-0x38); /* 0x007819F0: lea ecx, [ebp - 0x38] */
    goto L_0040B340; /* 0x007819F3: jmp 0x40b340 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B340: RECOMP_ITAIL(0x0040B340u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007819F8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007819F8u);

    goto L_007819F8;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007819F8:
    edx = MEM32(esp + 0x8); /* 0x007819F8: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0x44); /* 0x007819FC: lea eax, [edx - 0x44] */
    ecx = MEM32(edx + (-0x48)); /* 0x007819FF: mov ecx, dword ptr [edx - 0x48] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x00781A02: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00781A04: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0080ECE0u; /* 0x00781A09: mov eax, 0x80ece0 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x00781A0E: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00781A20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781A20u);

L_00781A20:
    ecx = ebp + (-0x18); /* 0x00781A20: lea ecx, [ebp - 0x18] */
    goto L_0040B330; /* 0x00781A23: jmp 0x40b330 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B330: RECOMP_ITAIL(0x0040B330u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00781A28(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781A28u);

L_00781A28:
    ecx = ebp + (-0x18); /* 0x00781A28: lea ecx, [ebp - 0x18] */
    goto L_0040B140; /* 0x00781A2B: jmp 0x40b140 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B140: RECOMP_ITAIL(0x0040B140u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00781A30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781A30u);

L_00781A30:
    ecx = ebp + (-0x18); /* 0x00781A30: lea ecx, [ebp - 0x18] */
    goto L_0040B330; /* 0x00781A33: jmp 0x40b330 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B330: RECOMP_ITAIL(0x0040B330u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00781A38(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781A38u);

L_00781A38:
    ecx = ebp + (-0x14); /* 0x00781A38: lea ecx, [ebp - 0x14] */
    goto L_0040B140; /* 0x00781A3B: jmp 0x40b140 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B140: RECOMP_ITAIL(0x0040B140u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00781A40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781A40u);

L_00781A40:
    ecx = ebp + (-0x14); /* 0x00781A40: lea ecx, [ebp - 0x14] */
    goto L_0040B330; /* 0x00781A43: jmp 0x40b330 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B330: RECOMP_ITAIL(0x0040B330u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00781A48(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781A48u);

L_00781A48:
    ecx = ebp + (-0x18); /* 0x00781A48: lea ecx, [ebp - 0x18] */
    goto L_0040B330; /* 0x00781A4B: jmp 0x40b330 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B330: RECOMP_ITAIL(0x0040B330u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00781A50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781A50u);

L_00781A50:
    ecx = ebp + (-0x18); /* 0x00781A50: lea ecx, [ebp - 0x18] */
    goto L_0040B140; /* 0x00781A53: jmp 0x40b140 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B140: RECOMP_ITAIL(0x0040B140u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00781A58(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781A58u);

L_00781A58:
    ecx = ebp + (-0x18); /* 0x00781A58: lea ecx, [ebp - 0x18] */
    goto L_0040B330; /* 0x00781A5B: jmp 0x40b330 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B330: RECOMP_ITAIL(0x0040B330u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00781A60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781A60u);

L_00781A60:
    ecx = ebp + (-0x14); /* 0x00781A60: lea ecx, [ebp - 0x14] */
    goto L_0040B140; /* 0x00781A63: jmp 0x40b140 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B140: RECOMP_ITAIL(0x0040B140u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00781A68(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781A68u);

L_00781A68:
    ecx = ebp + (-0x14); /* 0x00781A68: lea ecx, [ebp - 0x14] */
    goto L_0040B330; /* 0x00781A6B: jmp 0x40b330 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B330: RECOMP_ITAIL(0x0040B330u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00781A70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781A70u);

L_00781A70:
    ecx = ebp + (-0x14); /* 0x00781A70: lea ecx, [ebp - 0x14] */
    goto L_0040B140; /* 0x00781A73: jmp 0x40b140 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B140: RECOMP_ITAIL(0x0040B140u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00781A78(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781A78u);

L_00781A78:
    ecx = ebp + (-0x14); /* 0x00781A78: lea ecx, [ebp - 0x14] */
    goto L_0040B330; /* 0x00781A7B: jmp 0x40b330 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B330: RECOMP_ITAIL(0x0040B330u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00781A80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781A80u);

L_00781A80:
    ecx = ebp + (-0x18); /* 0x00781A80: lea ecx, [ebp - 0x18] */
    goto L_0040B330; /* 0x00781A83: jmp 0x40b330 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B330: RECOMP_ITAIL(0x0040B330u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00781A88(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781A88u);

L_00781A88:
    ecx = ebp + (-0x18); /* 0x00781A88: lea ecx, [ebp - 0x18] */
    goto L_0040B140; /* 0x00781A8B: jmp 0x40b140 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B140: RECOMP_ITAIL(0x0040B140u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00781A90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781A90u);

L_00781A90:
    ecx = ebp + (-0x18); /* 0x00781A90: lea ecx, [ebp - 0x18] */
    goto L_0040B330; /* 0x00781A93: jmp 0x40b330 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B330: RECOMP_ITAIL(0x0040B330u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00781A98(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781A98u);

L_00781A98:
    ecx = ebp + (-0x1C); /* 0x00781A98: lea ecx, [ebp - 0x1c] */
    goto L_0040B330; /* 0x00781A9B: jmp 0x40b330 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B330: RECOMP_ITAIL(0x0040B330u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00781AA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781AA0u);

L_00781AA0:
    ecx = ebp + (-0x1C); /* 0x00781AA0: lea ecx, [ebp - 0x1c] */
    goto L_0040B140; /* 0x00781AA3: jmp 0x40b140 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B140: RECOMP_ITAIL(0x0040B140u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00781AA8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781AA8u);

L_00781AA8:
    ecx = ebp + (-0x1C); /* 0x00781AA8: lea ecx, [ebp - 0x1c] */
    goto L_0040B330; /* 0x00781AAB: jmp 0x40b330 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B330: RECOMP_ITAIL(0x0040B330u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00781AB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781AB0u);

L_00781AB0:
    ecx = ebp + (-0x14); /* 0x00781AB0: lea ecx, [ebp - 0x14] */
    goto L_0040B140; /* 0x00781AB3: jmp 0x40b140 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B140: RECOMP_ITAIL(0x0040B140u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00781AB8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781AB8u);

L_00781AB8:
    ecx = ebp + (-0x14); /* 0x00781AB8: lea ecx, [ebp - 0x14] */
    goto L_0040B330; /* 0x00781ABB: jmp 0x40b330 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B330: RECOMP_ITAIL(0x0040B330u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00781AC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781AC0u);

L_00781AC0:
    ecx = ebp + (-0x1C); /* 0x00781AC0: lea ecx, [ebp - 0x1c] */
    goto L_0040B330; /* 0x00781AC3: jmp 0x40b330 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B330: RECOMP_ITAIL(0x0040B330u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00781AC8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781AC8u);

L_00781AC8:
    ecx = ebp + (-0x1C); /* 0x00781AC8: lea ecx, [ebp - 0x1c] */
    goto L_0040B140; /* 0x00781ACB: jmp 0x40b140 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B140: RECOMP_ITAIL(0x0040B140u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00781AD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781AD0u);

L_00781AD0:
    ecx = ebp + (-0x1C); /* 0x00781AD0: lea ecx, [ebp - 0x1c] */
    goto L_0040B330; /* 0x00781AD3: jmp 0x40b330 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B330: RECOMP_ITAIL(0x0040B330u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00781AD8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781AD8u);

    goto L_00781AD8;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_00781AD8:
    edx = MEM32(esp + 0x8); /* 0x00781AD8: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x00781ADC: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x2C)); /* 0x00781ADF: mov ecx, dword ptr [edx - 0x2c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x00781AE2: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00781AE4: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0080ED50u; /* 0x00781AE9: mov eax, 0x80ed50 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x00781AEE: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00781B00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781B00u);

L_00781B00:
    ecx = MEM32(ebp + (-0x10)); /* 0x00781B00: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040B330; /* 0x00781B03: jmp 0x40b330 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B330: RECOMP_ITAIL(0x0040B330u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00781B08(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781B08u);

    goto L_00781B08;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_00781B08:
    edx = MEM32(esp + 0x8); /* 0x00781B08: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x00781B0C: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x8)); /* 0x00781B0F: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x00781B12: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00781B14: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0080EE30u; /* 0x00781B19: mov eax, 0x80ee30 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x00781B1E: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00781B30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781B30u);

L_00781B30:
    ecx = MEM32(ebp + (-0x10)); /* 0x00781B30: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040B340; /* 0x00781B33: jmp 0x40b340 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B340: RECOMP_ITAIL(0x0040B340u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00781B38(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781B38u);

L_00781B38:
    ecx = MEM32(ebp + (-0x10)); /* 0x00781B38: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040B2E0; /* 0x00781B3B: jmp 0x40b2e0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B2E0: RECOMP_ITAIL(0x0040B2E0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00781B40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781B40u);

L_00781B40:
    ecx = MEM32(ebp + (-0x10)); /* 0x00781B40: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040B290; /* 0x00781B43: jmp 0x40b290 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B290: RECOMP_ITAIL(0x0040B290u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00781B48(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781B48u);

L_00781B48:
    ecx = MEM32(ebp + (-0x10)); /* 0x00781B48: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040B220; /* 0x00781B4B: jmp 0x40b220 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B220: RECOMP_ITAIL(0x0040B220u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00781B50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781B50u);

    goto L_00781B50;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_00781B50:
    edx = MEM32(esp + 0x8); /* 0x00781B50: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x00781B54: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xC)); /* 0x00781B57: mov ecx, dword ptr [edx - 0xc] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x00781B5A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00781B5C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0080EE5Cu; /* 0x00781B61: mov eax, 0x80ee5c */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x00781B66: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00781B70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781B70u);

L_00781B70:
    ecx = MEM32(ebp + (-0x10)); /* 0x00781B70: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040B290; /* 0x00781B73: jmp 0x40b290 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B290: RECOMP_ITAIL(0x0040B290u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00781B78(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781B78u);

L_00781B78:
    ecx = MEM32(ebp + (-0x10)); /* 0x00781B78: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040B2E0; /* 0x00781B7B: jmp 0x40b2e0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B2E0: RECOMP_ITAIL(0x0040B2E0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00781B80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781B80u);

L_00781B80:
    ecx = MEM32(ebp + (-0x10)); /* 0x00781B80: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040B340; /* 0x00781B83: jmp 0x40b340 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B340: RECOMP_ITAIL(0x0040B340u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00781B88(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781B88u);

    goto L_00781B88;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_00781B88:
    edx = MEM32(esp + 0x8); /* 0x00781B88: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x00781B8C: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x10)); /* 0x00781B8F: mov ecx, dword ptr [edx - 0x10] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x00781B92: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00781B94: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0080EEA0u; /* 0x00781B99: mov eax, 0x80eea0 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x00781B9E: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00781BB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781BB0u);

L_00781BB0:
    ecx = MEM32(ebp + (-0x10)); /* 0x00781BB0: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040B2E0; /* 0x00781BB3: jmp 0x40b2e0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B2E0: RECOMP_ITAIL(0x0040B2E0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00781BB8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781BB8u);

L_00781BB8:
    ecx = MEM32(ebp + (-0x10)); /* 0x00781BB8: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040B340; /* 0x00781BBB: jmp 0x40b340 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B340: RECOMP_ITAIL(0x0040B340u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00781BC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781BC0u);

    goto L_00781BC0;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_00781BC0:
    edx = MEM32(esp + 0x8); /* 0x00781BC0: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x00781BC4: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x8)); /* 0x00781BC7: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x00781BCA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00781BCC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0080EEDCu; /* 0x00781BD1: mov eax, 0x80eedc */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x00781BD6: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00781BE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781BE0u);

L_00781BE0:
    ecx = MEM32(ebp + (-0x10)); /* 0x00781BE0: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040B340; /* 0x00781BE3: jmp 0x40b340 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B340: RECOMP_ITAIL(0x0040B340u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00781BE8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781BE8u);

    goto L_00781BE8;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_00781BE8:
    edx = MEM32(esp + 0x8); /* 0x00781BE8: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x00781BEC: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x8)); /* 0x00781BEF: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x00781BF2: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00781BF4: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0080EF10u; /* 0x00781BF9: mov eax, 0x80ef10 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x00781BFE: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00781C10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781C10u);

    goto L_00781C10;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_00781C10:
    edx = MEM32(esp + 0x8); /* 0x00781C10: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x00781C14: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x1C)); /* 0x00781C17: mov ecx, dword ptr [edx - 0x1c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x00781C1A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00781C1C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0080EF3Cu; /* 0x00781C21: mov eax, 0x80ef3c */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x00781C26: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00781C30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781C30u);

L_00781C30:
    ecx = MEM32(ebp + (-0x10)); /* 0x00781C30: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040B330; /* 0x00781C33: jmp 0x40b330 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B330: RECOMP_ITAIL(0x0040B330u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00781C38(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781C38u);

L_00781C38:
    eax = MEM32(ebp + (-0x14)); /* 0x00781C38: mov eax, dword ptr [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x00781C3B: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x00781C3C: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00781C42: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00781C43: ret  */
    RECOMP_REGS_OUT();
}

void sub_00781C44(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781C44u);

L_00781C44:
    ecx = MEM32(ebp + (-0x14)); /* 0x00781C44: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040B660; /* 0x00781C47: jmp 0x40b660 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B660: RECOMP_ITAIL(0x0040B660u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00781C4C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781C4Cu);

    goto L_00781C4C;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_00781C4C:
    edx = MEM32(esp + 0x8); /* 0x00781C4C: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x00781C50: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x10)); /* 0x00781C53: mov ecx, dword ptr [edx - 0x10] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x00781C56: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00781C58: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0080EF94u; /* 0x00781C5D: mov eax, 0x80ef94 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x00781C62: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00781C70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781C70u);

L_00781C70:
    goto L_00409980; /* 0x00781C70: jmp 0x409980 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00409980: RECOMP_ITAIL(0x00409980u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00781C75(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781C75u);

    goto L_00781C75;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_00781C75:
    edx = MEM32(esp + 0x8); /* 0x00781C75: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x00781C79: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x4)); /* 0x00781C7C: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x00781C7F: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00781C81: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0080EFD0u; /* 0x00781C86: mov eax, 0x80efd0 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x00781C8B: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00781C90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781C90u);

L_00781C90:
    ecx = MEM32(ebp + (-0x10)); /* 0x00781C90: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040B660; /* 0x00781C93: jmp 0x40b660 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B660: RECOMP_ITAIL(0x0040B660u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00781C98(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00781C98u);

    goto L_00781C98;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_00781C98:
    edx = MEM32(esp + 0x8); /* 0x00781C98: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x00781C9C: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xC)); /* 0x00781C9F: mov ecx, dword ptr [edx - 0xc] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x00781CA2: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00781CA4: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0080EFFCu; /* 0x00781CA9: mov eax, 0x80effc */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x00781CAE: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}
