#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_0079A73E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079A73Eu);

    goto L_0079A73E;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0079A73E:
    edx = MEM32(esp + 0x8); /* 0x0079A73E: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0079A742: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x10)); /* 0x0079A745: mov ecx, dword ptr [edx - 0x10] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0079A748: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0079A74A: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00825CF0u; /* 0x0079A74F: mov eax, 0x825cf0 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0079A754: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0079A760(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079A760u);

L_0079A760:
    ecx = MEM32(ebp + (-0x10)); /* 0x0079A760: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0053CC70; /* 0x0079A763: jmp 0x53cc70 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0053CC70: RECOMP_ITAIL(0x0053CC70u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079A768(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079A768u);

    goto L_0079A768;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0079A768:
    edx = MEM32(esp + 0x8); /* 0x0079A768: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0079A76C: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x8)); /* 0x0079A76F: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0079A772: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0079A774: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00825DA0u; /* 0x0079A779: mov eax, 0x825da0 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0079A77E: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0079A790(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079A790u);

L_0079A790:
    ecx = 0x00865384u; /* 0x0079A790: mov ecx, 0x865384 */
    goto L_0040A000; /* 0x0079A795: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079A79A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079A79Au);

    goto L_0079A79A;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0079A79A:
    edx = MEM32(esp + 0x8); /* 0x0079A79A: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0079A79E: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x4)); /* 0x0079A7A1: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0079A7A4: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0079A7A6: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00825DCCu; /* 0x0079A7AB: mov eax, 0x825dcc */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0079A7B0: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0079A7C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079A7C0u);

L_0079A7C0:
    ecx = 0x00865384u; /* 0x0079A7C0: mov ecx, 0x865384 */
    goto L_0040A000; /* 0x0079A7C5: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079A7CA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079A7CAu);

    goto L_0079A7CA;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0079A7CA:
    edx = MEM32(esp + 0x8); /* 0x0079A7CA: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0079A7CE: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xC)); /* 0x0079A7D1: mov ecx, dword ptr [edx - 0xc] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0079A7D4: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0079A7D6: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00825DF8u; /* 0x0079A7DB: mov eax, 0x825df8 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0079A7E0: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0079A7F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079A7F0u);

L_0079A7F0:
    ecx = ebp + (-0x1C); /* 0x0079A7F0: lea ecx, [ebp - 0x1c] */
    goto L_00429F40; /* 0x0079A7F3: jmp 0x429f40 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00429F40: RECOMP_ITAIL(0x00429F40u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079A7F8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079A7F8u);

    goto L_0079A7F8;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0079A7F8:
    edx = MEM32(esp + 0x8); /* 0x0079A7F8: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0079A7FC: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x24)); /* 0x0079A7FF: mov ecx, dword ptr [edx - 0x24] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0079A802: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0079A804: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00825E24u; /* 0x0079A809: mov eax, 0x825e24 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0079A80E: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0079A820(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079A820u);

L_0079A820:
    goto L_0053CA60; /* 0x0079A820: jmp 0x53ca60 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0053CA60: RECOMP_ITAIL(0x0053CA60u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079A825(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079A825u);

L_0079A825:
    ecx = MEM32(ebp + (-0x10)); /* 0x0079A825: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x10u; /* 0x0079A828: add ecx, 0x10 */
    _flag_k = FK_ADD;
    goto L_00419790; /* 0x0079A82B: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079A830(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079A830u);

L_0079A830:
    ecx = MEM32(ebp + (-0x10)); /* 0x0079A830: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x1Cu; /* 0x0079A833: add ecx, 0x1c */
    _flag_k = FK_ADD;
    goto L_00419790; /* 0x0079A836: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079A83B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079A83Bu);

L_0079A83B:
    ecx = MEM32(ebp + (-0x10)); /* 0x0079A83B: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x28u; /* 0x0079A83E: add ecx, 0x28 */
    _flag_k = FK_ADD;
    goto L_00419790; /* 0x0079A841: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079A846(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079A846u);

L_0079A846:
    ecx = MEM32(ebp + (-0x10)); /* 0x0079A846: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x60u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x60u; /* 0x0079A849: add ecx, 0x60 */
    _flag_k = FK_ADD;
    goto L_0040A000; /* 0x0079A84C: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079A851(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079A851u);

L_0079A851:
    ecx = MEM32(ebp + (-0x14)); /* 0x0079A851: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040B340; /* 0x0079A854: jmp 0x40b340 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B340: RECOMP_ITAIL(0x0040B340u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079A859(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079A859u);

L_0079A859:
    ecx = MEM32(ebp + (-0x14)); /* 0x0079A859: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040B2E0; /* 0x0079A85C: jmp 0x40b2e0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B2E0: RECOMP_ITAIL(0x0040B2E0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079A861(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079A861u);

L_0079A861:
    ecx = MEM32(ebp + (-0x10)); /* 0x0079A861: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x78u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x78u; /* 0x0079A864: add ecx, 0x78 */
    _flag_k = FK_ADD;
    goto L_0053CB70; /* 0x0079A867: jmp 0x53cb70 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0053CB70: RECOMP_ITAIL(0x0053CB70u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079A86C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079A86Cu);

L_0079A86C:
    ecx = MEM32(ebp + (-0x10)); /* 0x0079A86C: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x80u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x80u; /* 0x0079A86F: add ecx, 0x80 */
    _flag_k = FK_ADD;
    goto L_0052E240; /* 0x0079A875: jmp 0x52e240 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0052E240: RECOMP_ITAIL(0x0052E240u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079A87A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079A87Au);

L_0079A87A:
    ecx = MEM32(ebp + (-0x10)); /* 0x0079A87A: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x94u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x94u; /* 0x0079A87D: add ecx, 0x94 */
    _flag_k = FK_ADD;
    goto L_0052E240; /* 0x0079A883: jmp 0x52e240 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0052E240: RECOMP_ITAIL(0x0052E240u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079A888(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079A888u);

L_0079A888:
    ecx = MEM32(ebp + (-0x10)); /* 0x0079A888: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xA8u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xA8u; /* 0x0079A88B: add ecx, 0xa8 */
    _flag_k = FK_ADD;
    goto L_0053DB90; /* 0x0079A891: jmp 0x53db90 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0053DB90: RECOMP_ITAIL(0x0053DB90u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079A896(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079A896u);

L_0079A896:
    ecx = MEM32(ebp + (-0x10)); /* 0x0079A896: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xC8u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xC8u; /* 0x0079A899: add ecx, 0xc8 */
    _flag_k = FK_ADD;
    goto L_0053DC40; /* 0x0079A89F: jmp 0x53dc40 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0053DC40: RECOMP_ITAIL(0x0053DC40u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079A8A4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079A8A4u);

L_0079A8A4:
    ecx = MEM32(ebp + (-0x10)); /* 0x0079A8A4: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xE8u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xE8u; /* 0x0079A8A7: add ecx, 0xe8 */
    _flag_k = FK_ADD;
    goto L_0053DCD0; /* 0x0079A8AD: jmp 0x53dcd0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0053DCD0: RECOMP_ITAIL(0x0053DCD0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079A8B2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079A8B2u);

L_0079A8B2:
    ecx = MEM32(ebp + (-0x10)); /* 0x0079A8B2: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x108u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x108u; /* 0x0079A8B5: add ecx, 0x108 */
    _flag_k = FK_ADD;
    goto L_0053DD10; /* 0x0079A8BB: jmp 0x53dd10 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0053DD10: RECOMP_ITAIL(0x0053DD10u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079A8C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079A8C0u);

L_0079A8C0:
    ecx = MEM32(ebp + (-0x10)); /* 0x0079A8C0: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x128u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x128u; /* 0x0079A8C3: add ecx, 0x128 */
    _flag_k = FK_ADD;
    goto L_0053DD50; /* 0x0079A8C9: jmp 0x53dd50 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0053DD50: RECOMP_ITAIL(0x0053DD50u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079A8CE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079A8CEu);

    goto L_0079A8CE;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0079A8CE:
    edx = MEM32(esp + 0x8); /* 0x0079A8CE: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0079A8D2: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xC)); /* 0x0079A8D5: mov ecx, dword ptr [edx - 0xc] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0079A8D8: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0079A8DA: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00825E50u; /* 0x0079A8DF: mov eax, 0x825e50 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0079A8E4: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0079A8F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079A8F0u);

L_0079A8F0:
    ecx = MEM32(ebp + (-0x10C)); /* 0x0079A8F0: mov ecx, dword ptr [ebp - 0x10c] */
    goto L_0040A000; /* 0x0079A8F6: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079A8FB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079A8FBu);

L_0079A8FB:
    ecx = ebp + (-0x104); /* 0x0079A8FB: lea ecx, [ebp - 0x104] */
    goto L_0040A000; /* 0x0079A901: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079A906(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079A906u);

L_0079A906:
    ecx = ebp + (-0xEC); /* 0x0079A906: lea ecx, [ebp - 0xec] */
    goto L_0040A000; /* 0x0079A90C: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079A911(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079A911u);

L_0079A911:
    ecx = ebp + (-0xA4); /* 0x0079A911: lea ecx, [ebp - 0xa4] */
    goto L_0040A000; /* 0x0079A917: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079A91C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079A91Cu);

L_0079A91C:
    ecx = ebp + (-0x5C); /* 0x0079A91C: lea ecx, [ebp - 0x5c] */
    goto L_0040A000; /* 0x0079A91F: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079A924(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079A924u);

L_0079A924:
    ecx = ebp + (-0xD4); /* 0x0079A924: lea ecx, [ebp - 0xd4] */
    goto L_0040A000; /* 0x0079A92A: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079A92F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079A92Fu);

L_0079A92F:
    ecx = ebp + (-0xBC); /* 0x0079A92F: lea ecx, [ebp - 0xbc] */
    goto L_0040A000; /* 0x0079A935: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079A93A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079A93Au);

L_0079A93A:
    ecx = ebp + (-0x44); /* 0x0079A93A: lea ecx, [ebp - 0x44] */
    goto L_0040A000; /* 0x0079A93D: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079A942(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079A942u);

L_0079A942:
    ecx = ebp + (-0x74); /* 0x0079A942: lea ecx, [ebp - 0x74] */
    goto L_0040A000; /* 0x0079A945: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079A94A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079A94Au);

L_0079A94A:
    ecx = ebp + (-0x8C); /* 0x0079A94A: lea ecx, [ebp - 0x8c] */
    goto L_0040A000; /* 0x0079A950: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079A955(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079A955u);

L_0079A955:
    ecx = ebp + (-0x2C); /* 0x0079A955: lea ecx, [ebp - 0x2c] */
    goto L_0040A000; /* 0x0079A958: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079A95D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079A95Du);

L_0079A95D:
    ecx = ebp + (-0xA4); /* 0x0079A95D: lea ecx, [ebp - 0xa4] */
    goto L_0040A000; /* 0x0079A963: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079A968(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079A968u);

L_0079A968:
    ecx = ebp + (-0xEC); /* 0x0079A968: lea ecx, [ebp - 0xec] */
    goto L_0040A000; /* 0x0079A96E: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079A973(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079A973u);

L_0079A973:
    ecx = ebp + (-0xBC); /* 0x0079A973: lea ecx, [ebp - 0xbc] */
    goto L_0040A000; /* 0x0079A979: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079A97E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079A97Eu);

L_0079A97E:
    ecx = ebp + (-0xD4); /* 0x0079A97E: lea ecx, [ebp - 0xd4] */
    goto L_0040A000; /* 0x0079A984: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079A989(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079A989u);

L_0079A989:
    ecx = MEM32(ebp + (-0x10C)); /* 0x0079A989: mov ecx, dword ptr [ebp - 0x10c] */
    goto L_0040A000; /* 0x0079A98F: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079A994(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079A994u);

L_0079A994:
    ecx = MEM32(ebp + (-0x108)); /* 0x0079A994: mov ecx, dword ptr [ebp - 0x108] */
    goto L_0040A000; /* 0x0079A99A: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079A99F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079A99Fu);

L_0079A99F:
    ecx = MEM32(ebp + (-0x114)); /* 0x0079A99F: mov ecx, dword ptr [ebp - 0x114] */
    goto L_0040A000; /* 0x0079A9A5: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079A9AA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079A9AAu);

    goto L_0079A9AA;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0079A9AA:
    edx = MEM32(esp + 0x8); /* 0x0079A9AA: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0x114); /* 0x0079A9AE: lea eax, [edx - 0x114] */
    ecx = MEM32(edx + (-0x118)); /* 0x0079A9B4: mov ecx, dword ptr [edx - 0x118] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0079A9BA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0079A9BC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x0079A9C1: add eax, 8 */
    _flag_k = FK_ADD;
    ecx = MEM32(edx + (-0x8)); /* 0x0079A9C4: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0079A9C7: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0079A9C9: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00825EF0u; /* 0x0079A9CE: mov eax, 0x825ef0 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0079A9D3: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0079A9E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079A9E0u);

L_0079A9E0:
    ecx = ebp + (-0x2C); /* 0x0079A9E0: lea ecx, [ebp - 0x2c] */
    goto L_0040A000; /* 0x0079A9E3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079A9E8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079A9E8u);

L_0079A9E8:
    ecx = ebp + (-0x44); /* 0x0079A9E8: lea ecx, [ebp - 0x44] */
    goto L_0040A000; /* 0x0079A9EB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079A9F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079A9F0u);

L_0079A9F0:
    ecx = MEM32(ebp + (-0x4C)); /* 0x0079A9F0: mov ecx, dword ptr [ebp - 0x4c] */
    goto L_0040A000; /* 0x0079A9F3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079A9F8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079A9F8u);

L_0079A9F8:
    ecx = MEM32(ebp + (-0x48)); /* 0x0079A9F8: mov ecx, dword ptr [ebp - 0x48] */
    goto L_0040A000; /* 0x0079A9FB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079AA00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079AA00u);

    goto L_0079AA00;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0079AA00:
    edx = MEM32(esp + 0x8); /* 0x0079AA00: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0079AA04: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x48)); /* 0x0079AA07: mov ecx, dword ptr [edx - 0x48] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0079AA0A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0079AA0C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x8)); /* 0x0079AA11: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0079AA14: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0079AA16: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00825FA8u; /* 0x0079AA1B: mov eax, 0x825fa8 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0079AA20: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0079AA30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079AA30u);

L_0079AA30:
    ecx = ebp + (-0xD8); /* 0x0079AA30: lea ecx, [ebp - 0xd8] */
    goto L_0043D6D0; /* 0x0079AA36: jmp 0x43d6d0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0043D6D0: RECOMP_ITAIL(0x0043D6D0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079AA3B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079AA3Bu);

L_0079AA3B:
    eax = MEM32(ebp + (-0x14)); /* 0x0079AA3B: mov eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x0079AA3E: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0079AA53; /* 0x0079AA41: je 0x79aa53 */
L_0079AA47:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0xFFFFFFFEu);
    MEM32(ebp + (-0x14)) = MEM32(ebp + (-0x14)) & 0xFFFFFFFEu; /* 0x0079AA47: and dword ptr [ebp - 0x14], 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0x18)); /* 0x0079AA4B: mov ecx, dword ptr [ebp - 0x18] */
    goto L_0040A000; /* 0x0079AA4E: jmp 0x40a000 */
L_0079AA53:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0079AA53: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079AA54(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079AA54u);

    goto L_0079AA54;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0079AA54:
    edx = MEM32(esp + 0x8); /* 0x0079AA54: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0079AA58: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xDC)); /* 0x0079AA5B: mov ecx, dword ptr [edx - 0xdc] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0079AA61: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0079AA63: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00825FECu; /* 0x0079AA68: mov eax, 0x825fec */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0079AA6D: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0079AA80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079AA80u);

L_0079AA80:
    ecx = ebp + (-0x58); /* 0x0079AA80: lea ecx, [ebp - 0x58] */
    goto L_0040A000; /* 0x0079AA83: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079AA88(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079AA88u);

L_0079AA88:
    ecx = ebp + (-0x70); /* 0x0079AA88: lea ecx, [ebp - 0x70] */
    goto L_0040A000; /* 0x0079AA8B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079AA90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079AA90u);

L_0079AA90:
    ecx = ebp + (-0x40); /* 0x0079AA90: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x0079AA93: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079AA98(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079AA98u);

L_0079AA98:
    ecx = ebp + (-0x28); /* 0x0079AA98: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x0079AA9B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079AAA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079AAA0u);

L_0079AAA0:
    ecx = ebp + (-0xE8); /* 0x0079AAA0: lea ecx, [ebp - 0xe8] */
    goto L_0040A000; /* 0x0079AAA6: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079AAAB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079AAABu);

L_0079AAAB:
    ecx = ebp + (-0x130); /* 0x0079AAAB: lea ecx, [ebp - 0x130] */
    goto L_0040A000; /* 0x0079AAB1: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079AAB6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079AAB6u);

L_0079AAB6:
    ecx = ebp + (-0x178); /* 0x0079AAB6: lea ecx, [ebp - 0x178] */
    goto L_0040A000; /* 0x0079AABC: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079AAC1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079AAC1u);

L_0079AAC1:
    ecx = ebp + (-0x148); /* 0x0079AAC1: lea ecx, [ebp - 0x148] */
    goto L_0040A000; /* 0x0079AAC7: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079AACC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079AACCu);

L_0079AACC:
    ecx = ebp + (-0x100); /* 0x0079AACC: lea ecx, [ebp - 0x100] */
    goto L_0040A000; /* 0x0079AAD2: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079AAD7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079AAD7u);

L_0079AAD7:
    ecx = ebp + (-0xD0); /* 0x0079AAD7: lea ecx, [ebp - 0xd0] */
    goto L_0040A000; /* 0x0079AADD: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079AAE2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079AAE2u);

L_0079AAE2:
    ecx = ebp + (-0xB8); /* 0x0079AAE2: lea ecx, [ebp - 0xb8] */
    goto L_0040A000; /* 0x0079AAE8: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079AAED(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079AAEDu);

L_0079AAED:
    ecx = ebp + (-0xA0); /* 0x0079AAED: lea ecx, [ebp - 0xa0] */
    goto L_0040A000; /* 0x0079AAF3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079AAF8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079AAF8u);

L_0079AAF8:
    ecx = ebp + (-0x118); /* 0x0079AAF8: lea ecx, [ebp - 0x118] */
    goto L_0040A000; /* 0x0079AAFE: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079AB03(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079AB03u);

L_0079AB03:
    ecx = ebp + (-0x88); /* 0x0079AB03: lea ecx, [ebp - 0x88] */
    goto L_0040A000; /* 0x0079AB09: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079AB0E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079AB0Eu);

L_0079AB0E:
    ecx = ebp + (-0x160); /* 0x0079AB0E: lea ecx, [ebp - 0x160] */
    goto L_0040A000; /* 0x0079AB14: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079AB19(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079AB19u);

L_0079AB19:
    ecx = MEM32(ebp + (-0x180)); /* 0x0079AB19: mov ecx, dword ptr [ebp - 0x180] */
    goto L_0040A000; /* 0x0079AB1F: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079AB24(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079AB24u);

    goto L_0079AB24;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0079AB24:
    edx = MEM32(esp + 0x8); /* 0x0079AB24: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0079AB28: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18C)); /* 0x0079AB2B: mov ecx, dword ptr [edx - 0x18c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0079AB31: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0079AB33: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x0079AB38: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0079AB3B: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0079AB3D: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00826020u; /* 0x0079AB42: mov eax, 0x826020 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0079AB47: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0079AB50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079AB50u);

L_0079AB50:
    ecx = ebp + (-0x2C); /* 0x0079AB50: lea ecx, [ebp - 0x2c] */
    goto L_0040A000; /* 0x0079AB53: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079AB58(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079AB58u);

    goto L_0079AB58;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0079AB58:
    edx = MEM32(esp + 0x8); /* 0x0079AB58: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0x3C); /* 0x0079AB5C: lea eax, [edx - 0x3c] */
    ecx = MEM32(edx + (-0x40)); /* 0x0079AB5F: mov ecx, dword ptr [edx - 0x40] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0079AB62: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0079AB64: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x0079AB69: add eax, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(edx + (-0x8)); /* 0x0079AB6C: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0079AB6F: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0079AB71: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x008260D8u; /* 0x0079AB76: mov eax, 0x8260d8 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0079AB7B: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0079AB80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079AB80u);

L_0079AB80:
    ecx = ebp + (-0x5C); /* 0x0079AB80: lea ecx, [ebp - 0x5c] */
    goto L_0040A000; /* 0x0079AB83: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079AB88(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079AB88u);

L_0079AB88:
    ecx = ebp + (-0x74); /* 0x0079AB88: lea ecx, [ebp - 0x74] */
    goto L_0040A000; /* 0x0079AB8B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079AB90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079AB90u);

L_0079AB90:
    ecx = ebp + (-0x44); /* 0x0079AB90: lea ecx, [ebp - 0x44] */
    goto L_0040A000; /* 0x0079AB93: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079AB98(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079AB98u);

L_0079AB98:
    ecx = ebp + (-0x8C); /* 0x0079AB98: lea ecx, [ebp - 0x8c] */
    goto L_0040A000; /* 0x0079AB9E: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079ABA3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079ABA3u);

L_0079ABA3:
    ecx = MEM32(ebp + (-0x94)); /* 0x0079ABA3: mov ecx, dword ptr [ebp - 0x94] */
    goto L_0040A000; /* 0x0079ABA9: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079ABAE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079ABAEu);

L_0079ABAE:
    ecx = ebp + (-0x2C); /* 0x0079ABAE: lea ecx, [ebp - 0x2c] */
    goto L_0040A000; /* 0x0079ABB1: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079ABB6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079ABB6u);

L_0079ABB6:
    ecx = MEM32(ebp + (-0x98)); /* 0x0079ABB6: mov ecx, dword ptr [ebp - 0x98] */
    goto L_0040A000; /* 0x0079ABBC: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079ABC1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079ABC1u);

L_0079ABC1:
    ecx = MEM32(ebp + (-0x90)); /* 0x0079ABC1: mov ecx, dword ptr [ebp - 0x90] */
    goto L_0040A000; /* 0x0079ABC7: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079ABCC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079ABCCu);

    goto L_0079ABCC;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0079ABCC:
    edx = MEM32(esp + 0x8); /* 0x0079ABCC: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0x9C); /* 0x0079ABD0: lea eax, [edx - 0x9c] */
    ecx = MEM32(edx + (-0xA0)); /* 0x0079ABD6: mov ecx, dword ptr [edx - 0xa0] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0079ABDC: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0079ABDE: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x0079ABE3: add eax, 0xc */
    _flag_k = FK_ADD;
    ecx = MEM32(edx + (-0x8)); /* 0x0079ABE6: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0079ABE9: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0079ABEB: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00826108u; /* 0x0079ABF0: mov eax, 0x826108 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0079ABF5: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0079AC00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079AC00u);

L_0079AC00:
    ecx = ebp + (-0x130); /* 0x0079AC00: lea ecx, [ebp - 0x130] */
    goto L_0040A000; /* 0x0079AC06: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079AC0B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079AC0Bu);

L_0079AC0B:
    ecx = ebp + (-0x13C); /* 0x0079AC0B: lea ecx, [ebp - 0x13c] */
    goto L_00429F40; /* 0x0079AC11: jmp 0x429f40 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00429F40: RECOMP_ITAIL(0x00429F40u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079AC16(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079AC16u);

    goto L_0079AC16;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0079AC16:
    edx = MEM32(esp + 0x8); /* 0x0079AC16: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0x144); /* 0x0079AC1A: lea eax, [edx - 0x144] */
    ecx = MEM32(edx + (-0x148)); /* 0x0079AC20: mov ecx, dword ptr [edx - 0x148] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0079AC26: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0079AC28: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x0079AC2D: add eax, 0xc */
    _flag_k = FK_ADD;
    ecx = MEM32(edx + (-0x8)); /* 0x0079AC30: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0079AC33: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0079AC35: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00826178u; /* 0x0079AC3A: mov eax, 0x826178 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0079AC3F: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0079AC50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079AC50u);

L_0079AC50:
    ecx = ebp + (-0x70); /* 0x0079AC50: lea ecx, [ebp - 0x70] */
    goto L_0040A000; /* 0x0079AC53: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079AC58(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079AC58u);

L_0079AC58:
    ecx = ebp + (-0xA0); /* 0x0079AC58: lea ecx, [ebp - 0xa0] */
    goto L_0040A000; /* 0x0079AC5E: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079AC63(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079AC63u);

L_0079AC63:
    ecx = ebp + (-0x88); /* 0x0079AC63: lea ecx, [ebp - 0x88] */
    goto L_0040A000; /* 0x0079AC69: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079AC6E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079AC6Eu);

L_0079AC6E:
    ecx = ebp + (-0x58); /* 0x0079AC6E: lea ecx, [ebp - 0x58] */
    goto L_0040A000; /* 0x0079AC71: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079AC76(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079AC76u);

L_0079AC76:
    ecx = ebp + (-0x40); /* 0x0079AC76: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x0079AC79: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079AC7E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079AC7Eu);

L_0079AC7E:
    ecx = ebp + (-0x28); /* 0x0079AC7E: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x0079AC81: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079AC86(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079AC86u);

L_0079AC86:
    ecx = MEM32(ebp + (-0xA8)); /* 0x0079AC86: mov ecx, dword ptr [ebp - 0xa8] */
    goto L_0040A000; /* 0x0079AC8C: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079AC91(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079AC91u);

L_0079AC91:
    ecx = MEM32(ebp + (-0xB0)); /* 0x0079AC91: mov ecx, dword ptr [ebp - 0xb0] */
    goto L_0040A000; /* 0x0079AC97: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079AC9C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079AC9Cu);

L_0079AC9C:
    ecx = MEM32(ebp + (-0xAC)); /* 0x0079AC9C: mov ecx, dword ptr [ebp - 0xac] */
    goto L_0040A000; /* 0x0079ACA2: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079ACA7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079ACA7u);

    goto L_0079ACA7;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0079ACA7:
    edx = MEM32(esp + 0x8); /* 0x0079ACA7: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0079ACAB: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xB4)); /* 0x0079ACAE: mov ecx, dword ptr [edx - 0xb4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0079ACB4: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0079ACB6: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x0079ACBB: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0079ACBE: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0079ACC0: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x008261B0u; /* 0x0079ACC5: mov eax, 0x8261b0 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0079ACCA: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0079ACD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079ACD0u);

L_0079ACD0:
    ecx = MEM32(ebp + (-0x30)); /* 0x0079ACD0: mov ecx, dword ptr [ebp - 0x30] */
    goto L_0040A000; /* 0x0079ACD3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079ACD8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079ACD8u);

L_0079ACD8:
    ecx = MEM32(ebp + (-0x2C)); /* 0x0079ACD8: mov ecx, dword ptr [ebp - 0x2c] */
    goto L_0040A000; /* 0x0079ACDB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079ACE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079ACE0u);

L_0079ACE0:
    ecx = MEM32(ebp + (-0x28)); /* 0x0079ACE0: mov ecx, dword ptr [ebp - 0x28] */
    goto L_0040A000; /* 0x0079ACE3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079ACE8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079ACE8u);

    goto L_0079ACE8;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0079ACE8:
    edx = MEM32(esp + 0x8); /* 0x0079ACE8: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0x2C); /* 0x0079ACEC: lea eax, [edx - 0x2c] */
    ecx = MEM32(edx + (-0x30)); /* 0x0079ACEF: mov ecx, dword ptr [edx - 0x30] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0079ACF2: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0079ACF4: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00826230u; /* 0x0079ACF9: mov eax, 0x826230 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0079ACFE: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_0079AD10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079AD10u);

L_0079AD10:
    ecx = ebp + (-0x2C); /* 0x0079AD10: lea ecx, [ebp - 0x2c] */
    goto L_0040A000; /* 0x0079AD13: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079AD18(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079AD18u);

L_0079AD18:
    ecx = ebp + (-0x74); /* 0x0079AD18: lea ecx, [ebp - 0x74] */
    goto L_0040A000; /* 0x0079AD1B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079AD20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079AD20u);

L_0079AD20:
    ecx = ebp + (-0x8C); /* 0x0079AD20: lea ecx, [ebp - 0x8c] */
    goto L_0040A000; /* 0x0079AD26: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}
