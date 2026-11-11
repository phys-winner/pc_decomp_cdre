#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_007B6C70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B6C70u);

L_007B6C70:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B6C70: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0061DF60; /* 0x007B6C73: jmp 0x61df60 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0061DF60: RECOMP_ITAIL(0x0061DF60u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B6C78(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B6C78u);

    goto L_007B6C78;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B6C78:
    edx = MEM32(esp + 0x8); /* 0x007B6C78: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B6C7C: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xC)); /* 0x007B6C7F: mov ecx, dword ptr [edx - 0xc] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B6C82: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B6C84: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00840920u; /* 0x007B6C89: mov eax, 0x840920 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B6C8E: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B6CA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B6CA0u);

L_007B6CA0:
    eax = MEM32(0x927C28); /* 0x007B6CA0: mov eax, dword ptr [0x927c28] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    eax = eax & 0xFFFFFFFEu; /* 0x007B6CA5: and eax, 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x927C28) = eax; /* 0x007B6CA8: mov dword ptr [0x927c28], eax */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007B6CAD: ret  */
    RECOMP_REGS_OUT();
}

void sub_007B6CAE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B6CAEu);

L_007B6CAE:
    ecx = 0x00927BECu; /* 0x007B6CAE: mov ecx, 0x927bec */
    goto L_0061DF60; /* 0x007B6CB3: jmp 0x61df60 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0061DF60: RECOMP_ITAIL(0x0061DF60u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B6CB8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B6CB8u);

    goto L_007B6CB8;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B6CB8:
    edx = MEM32(esp + 0x8); /* 0x007B6CB8: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B6CBC: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x4)); /* 0x007B6CBF: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B6CC2: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B6CC4: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0084094Cu; /* 0x007B6CC9: mov eax, 0x84094c */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B6CCE: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B6CE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B6CE0u);

L_007B6CE0:
    ecx = 0x00927BECu; /* 0x007B6CE0: mov ecx, 0x927bec */
    goto L_0061DF60; /* 0x007B6CE5: jmp 0x61df60 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0061DF60: RECOMP_ITAIL(0x0061DF60u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B6CEA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B6CEAu);

    goto L_007B6CEA;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B6CEA:
    edx = MEM32(esp + 0x8); /* 0x007B6CEA: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B6CEE: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x4)); /* 0x007B6CF1: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B6CF4: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B6CF6: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00840980u; /* 0x007B6CFB: mov eax, 0x840980 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B6D00: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B6D10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B6D10u);

L_007B6D10:
    eax = MEM32(0x927C18); /* 0x007B6D10: mov eax, dword ptr [0x927c18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    eax = eax & 0xFFFFFFFEu; /* 0x007B6D15: and eax, 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x927C18) = eax; /* 0x007B6D18: mov dword ptr [0x927c18], eax */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007B6D1D: ret  */
    RECOMP_REGS_OUT();
}

void sub_007B6D1E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B6D1Eu);

L_007B6D1E:
    ecx = 0x00927C04u; /* 0x007B6D1E: mov ecx, 0x927c04 */
    goto L_0061DF60; /* 0x007B6D23: jmp 0x61df60 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0061DF60: RECOMP_ITAIL(0x0061DF60u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B6D28(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B6D28u);

    goto L_007B6D28;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B6D28:
    edx = MEM32(esp + 0x8); /* 0x007B6D28: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B6D2C: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x4)); /* 0x007B6D2F: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B6D32: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B6D34: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x008409ACu; /* 0x007B6D39: mov eax, 0x8409ac */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B6D3E: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B6D50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B6D50u);

L_007B6D50:
    ecx = 0x00927C04u; /* 0x007B6D50: mov ecx, 0x927c04 */
    goto L_0061DF60; /* 0x007B6D55: jmp 0x61df60 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0061DF60: RECOMP_ITAIL(0x0061DF60u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B6D5A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B6D5Au);

    goto L_007B6D5A;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B6D5A:
    edx = MEM32(esp + 0x8); /* 0x007B6D5A: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B6D5E: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x4)); /* 0x007B6D61: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B6D64: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B6D66: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x008409E0u; /* 0x007B6D6B: mov eax, 0x8409e0 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B6D70: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B6D80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B6D80u);

L_007B6D80:
    eax = MEM32(0x927C10); /* 0x007B6D80: mov eax, dword ptr [0x927c10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    eax = eax & 0xFFFFFFFEu; /* 0x007B6D85: and eax, 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x927C10) = eax; /* 0x007B6D88: mov dword ptr [0x927c10], eax */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007B6D8D: ret  */
    RECOMP_REGS_OUT();
}

void sub_007B6D8E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B6D8Eu);

L_007B6D8E:
    ecx = 0x00927BDCu; /* 0x007B6D8E: mov ecx, 0x927bdc */
    goto L_0061DF60; /* 0x007B6D93: jmp 0x61df60 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0061DF60: RECOMP_ITAIL(0x0061DF60u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B6D98(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B6D98u);

    goto L_007B6D98;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B6D98:
    edx = MEM32(esp + 0x8); /* 0x007B6D98: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B6D9C: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x4)); /* 0x007B6D9F: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B6DA2: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B6DA4: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00840A0Cu; /* 0x007B6DA9: mov eax, 0x840a0c */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B6DAE: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B6DC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B6DC0u);

L_007B6DC0:
    ecx = 0x00927BDCu; /* 0x007B6DC0: mov ecx, 0x927bdc */
    goto L_0061DF60; /* 0x007B6DC5: jmp 0x61df60 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0061DF60: RECOMP_ITAIL(0x0061DF60u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B6DCA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B6DCAu);

    goto L_007B6DCA;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B6DCA:
    edx = MEM32(esp + 0x8); /* 0x007B6DCA: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B6DCE: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x4)); /* 0x007B6DD1: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B6DD4: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B6DD6: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00840A40u; /* 0x007B6DDB: mov eax, 0x840a40 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B6DE0: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B6DF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B6DF0u);

L_007B6DF0:
    eax = MEM32(0x927C14); /* 0x007B6DF0: mov eax, dword ptr [0x927c14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    eax = eax & 0xFFFFFFFEu; /* 0x007B6DF5: and eax, 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x927C14) = eax; /* 0x007B6DF8: mov dword ptr [0x927c14], eax */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007B6DFD: ret  */
    RECOMP_REGS_OUT();
}

void sub_007B6DFE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B6DFEu);

L_007B6DFE:
    ecx = 0x00927BF8u; /* 0x007B6DFE: mov ecx, 0x927bf8 */
    goto L_0061DF60; /* 0x007B6E03: jmp 0x61df60 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0061DF60: RECOMP_ITAIL(0x0061DF60u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B6E08(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B6E08u);

    goto L_007B6E08;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B6E08:
    edx = MEM32(esp + 0x8); /* 0x007B6E08: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B6E0C: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x4)); /* 0x007B6E0F: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B6E12: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B6E14: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00840A6Cu; /* 0x007B6E19: mov eax, 0x840a6c */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B6E1E: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B6E30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B6E30u);

L_007B6E30:
    ecx = 0x00927BF8u; /* 0x007B6E30: mov ecx, 0x927bf8 */
    goto L_0061DF60; /* 0x007B6E35: jmp 0x61df60 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0061DF60: RECOMP_ITAIL(0x0061DF60u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B6E3A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B6E3Au);

    goto L_007B6E3A;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B6E3A:
    edx = MEM32(esp + 0x8); /* 0x007B6E3A: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B6E3E: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x4)); /* 0x007B6E41: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B6E44: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B6E46: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00840AA0u; /* 0x007B6E4B: mov eax, 0x840aa0 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B6E50: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B6E60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B6E60u);

L_007B6E60:
    eax = MEM32(0x927C2C); /* 0x007B6E60: mov eax, dword ptr [0x927c2c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    eax = eax & 0xFFFFFFFEu; /* 0x007B6E65: and eax, 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x927C2C) = eax; /* 0x007B6E68: mov dword ptr [0x927c2c], eax */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007B6E6D: ret  */
    RECOMP_REGS_OUT();
}

void sub_007B6E6E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B6E6Eu);

L_007B6E6E:
    ecx = 0x00927C1Cu; /* 0x007B6E6E: mov ecx, 0x927c1c */
    goto L_0061DF60; /* 0x007B6E73: jmp 0x61df60 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0061DF60: RECOMP_ITAIL(0x0061DF60u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B6E78(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B6E78u);

    goto L_007B6E78;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B6E78:
    edx = MEM32(esp + 0x8); /* 0x007B6E78: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B6E7C: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x4)); /* 0x007B6E7F: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B6E82: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B6E84: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00840ACCu; /* 0x007B6E89: mov eax, 0x840acc */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B6E8E: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B6EA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B6EA0u);

L_007B6EA0:
    ecx = 0x00927C1Cu; /* 0x007B6EA0: mov ecx, 0x927c1c */
    goto L_0061DF60; /* 0x007B6EA5: jmp 0x61df60 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0061DF60: RECOMP_ITAIL(0x0061DF60u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B6EAA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B6EAAu);

    goto L_007B6EAA;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B6EAA:
    edx = MEM32(esp + 0x8); /* 0x007B6EAA: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B6EAE: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x4)); /* 0x007B6EB1: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B6EB4: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B6EB6: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00840B00u; /* 0x007B6EBB: mov eax, 0x840b00 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B6EC0: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B6ED0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B6ED0u);

L_007B6ED0:
    eax = MEM32(0x927BE8); /* 0x007B6ED0: mov eax, dword ptr [0x927be8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    eax = eax & 0xFFFFFFFEu; /* 0x007B6ED5: and eax, 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x927BE8) = eax; /* 0x007B6ED8: mov dword ptr [0x927be8], eax */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007B6EDD: ret  */
    RECOMP_REGS_OUT();
}

void sub_007B6EDE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B6EDEu);

L_007B6EDE:
    ecx = 0x00927C30u; /* 0x007B6EDE: mov ecx, 0x927c30 */
    goto L_0061DF60; /* 0x007B6EE3: jmp 0x61df60 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0061DF60: RECOMP_ITAIL(0x0061DF60u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B6EE8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B6EE8u);

    goto L_007B6EE8;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B6EE8:
    edx = MEM32(esp + 0x8); /* 0x007B6EE8: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B6EEC: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x4)); /* 0x007B6EEF: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B6EF2: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B6EF4: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00840B2Cu; /* 0x007B6EF9: mov eax, 0x840b2c */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B6EFE: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B6F10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B6F10u);

L_007B6F10:
    ecx = 0x00927C30u; /* 0x007B6F10: mov ecx, 0x927c30 */
    goto L_0061DF60; /* 0x007B6F15: jmp 0x61df60 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0061DF60: RECOMP_ITAIL(0x0061DF60u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B6F1A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B6F1Au);

    goto L_007B6F1A;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B6F1A:
    edx = MEM32(esp + 0x8); /* 0x007B6F1A: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B6F1E: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x4)); /* 0x007B6F21: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B6F24: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B6F26: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00840B60u; /* 0x007B6F2B: mov eax, 0x840b60 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B6F30: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B6F40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B6F40u);

L_007B6F40:
    ecx = 0x00865E80u; /* 0x007B6F40: mov ecx, 0x865e80 */
    goto L_0061DF60; /* 0x007B6F45: jmp 0x61df60 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0061DF60: RECOMP_ITAIL(0x0061DF60u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B6F4A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B6F4Au);

L_007B6F4A:
    ecx = 0x00865E8Cu; /* 0x007B6F4A: mov ecx, 0x865e8c */
    goto L_00419790; /* 0x007B6F4F: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B6F54(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B6F54u);

    goto L_007B6F54;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B6F54:
    edx = MEM32(esp + 0x8); /* 0x007B6F54: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B6F58: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x4)); /* 0x007B6F5B: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B6F5E: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B6F60: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00840B8Cu; /* 0x007B6F65: mov eax, 0x840b8c */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B6F6A: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B6F70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B6F70u);

L_007B6F70:
    ecx = 0x00865E80u; /* 0x007B6F70: mov ecx, 0x865e80 */
    goto L_0061DF60; /* 0x007B6F75: jmp 0x61df60 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0061DF60: RECOMP_ITAIL(0x0061DF60u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B6F7A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B6F7Au);

L_007B6F7A:
    ecx = 0x00865E8Cu; /* 0x007B6F7A: mov ecx, 0x865e8c */
    goto L_00419790; /* 0x007B6F7F: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B6F84(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B6F84u);

    goto L_007B6F84;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B6F84:
    edx = MEM32(esp + 0x8); /* 0x007B6F84: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B6F88: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x8)); /* 0x007B6F8B: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B6F8E: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B6F90: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00840BC0u; /* 0x007B6F95: mov eax, 0x840bc0 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B6F9A: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B6FA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B6FA0u);

L_007B6FA0:
    ecx = ebp + (-0x40); /* 0x007B6FA0: lea ecx, [ebp - 0x40] */
    goto L_00419790; /* 0x007B6FA3: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B6FA8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B6FA8u);

    goto L_007B6FA8;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B6FA8:
    edx = MEM32(esp + 0x8); /* 0x007B6FA8: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B6FAC: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x40)); /* 0x007B6FAF: mov ecx, dword ptr [edx - 0x40] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B6FB2: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B6FB4: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x007B6FB9: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B6FBC: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B6FBE: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00840BF4u; /* 0x007B6FC3: mov eax, 0x840bf4 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B6FC8: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B6FD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B6FD0u);

L_007B6FD0:
    PUSH32(esp, 0x0040A000u); /* 0x007B6FD0: push 0x40a000 */
    PUSH32(esp, 0x25u); /* 0x007B6FD5: push 0x25 */
    PUSH32(esp, 0x18u); /* 0x007B6FD7: push 0x18 */
    eax = MEM32(ebp + (-0x1EC)); /* 0x007B6FD9: mov eax, dword ptr [ebp - 0x1ec] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x28u; /* 0x007B6FDF: add eax, 0x28 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x007B6FE2: push eax */
    RECOMP_CALL(sub_0077F628); /* 0x007B6FE3: call 0x77f628 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007B6FE8: ret  */
    RECOMP_REGS_OUT();
}

void sub_007B6FE9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B6FE9u);

L_007B6FE9:
    ecx = MEM32(ebp + (-0x1F0)); /* 0x007B6FE9: mov ecx, dword ptr [ebp - 0x1f0] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x34u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x34u; /* 0x007B6FEF: add ecx, 0x34 */
    _flag_k = FK_ADD;
    goto L_0061F130; /* 0x007B6FF2: jmp 0x61f130 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0061F130: RECOMP_ITAIL(0x0061F130u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B6FF7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B6FF7u);

L_007B6FF7:
    ecx = MEM32(ebp + (-0x1F0)); /* 0x007B6FF7: mov ecx, dword ptr [ebp - 0x1f0] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x504u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x504u; /* 0x007B6FFD: add ecx, 0x504 */
    _flag_k = FK_ADD;
    goto L_00625820; /* 0x007B7003: jmp 0x625820 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00625820: RECOMP_ITAIL(0x00625820u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B7008(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B7008u);

L_007B7008:
    ecx = MEM32(ebp + (-0x1F0)); /* 0x007B7008: mov ecx, dword ptr [ebp - 0x1f0] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x510u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x510u; /* 0x007B700E: add ecx, 0x510 */
    _flag_k = FK_ADD;
    goto L_0040A000; /* 0x007B7014: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B7019(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B7019u);

L_007B7019:
    ecx = MEM32(ebp + (-0x1F0)); /* 0x007B7019: mov ecx, dword ptr [ebp - 0x1f0] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x528u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x528u; /* 0x007B701F: add ecx, 0x528 */
    _flag_k = FK_ADD;
    goto L_00419790; /* 0x007B7025: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B702A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B702Au);

L_007B702A:
    ecx = MEM32(ebp + (-0x1EC)); /* 0x007B702A: mov ecx, dword ptr [ebp - 0x1ec] */
    goto L_006160C0; /* 0x007B7030: jmp 0x6160c0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_006160C0: RECOMP_ITAIL(0x006160C0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B7035(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B7035u);

L_007B7035:
    ecx = MEM32(ebp + (-0x1F0)); /* 0x007B7035: mov ecx, dword ptr [ebp - 0x1f0] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x534u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x534u; /* 0x007B703B: add ecx, 0x534 */
    _flag_k = FK_ADD;
    goto L_006107D0; /* 0x007B7041: jmp 0x6107d0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_006107D0: RECOMP_ITAIL(0x006107D0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B7046(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B7046u);

L_007B7046:
    ecx = MEM32(ebp + (-0x1EC)); /* 0x007B7046: mov ecx, dword ptr [ebp - 0x1ec] */
    goto L_006160C0; /* 0x007B704C: jmp 0x6160c0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_006160C0: RECOMP_ITAIL(0x006160C0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B7051(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B7051u);

L_007B7051:
    ecx = MEM32(ebp + (-0x1F0)); /* 0x007B7051: mov ecx, dword ptr [ebp - 0x1f0] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x554u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x554u; /* 0x007B7057: add ecx, 0x554 */
    _flag_k = FK_ADD;
    goto L_006107D0; /* 0x007B705D: jmp 0x6107d0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_006107D0: RECOMP_ITAIL(0x006107D0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B7062(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B7062u);

L_007B7062:
    ecx = MEM32(ebp + (-0x1EC)); /* 0x007B7062: mov ecx, dword ptr [ebp - 0x1ec] */
    goto L_006160C0; /* 0x007B7068: jmp 0x6160c0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_006160C0: RECOMP_ITAIL(0x006160C0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B706D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B706Du);

L_007B706D:
    ecx = MEM32(ebp + (-0x1F0)); /* 0x007B706D: mov ecx, dword ptr [ebp - 0x1f0] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x574u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x574u; /* 0x007B7073: add ecx, 0x574 */
    _flag_k = FK_ADD;
    goto L_006107D0; /* 0x007B7079: jmp 0x6107d0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_006107D0: RECOMP_ITAIL(0x006107D0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B707E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B707Eu);

L_007B707E:
    ecx = MEM32(ebp + (-0x1EC)); /* 0x007B707E: mov ecx, dword ptr [ebp - 0x1ec] */
    goto L_006160C0; /* 0x007B7084: jmp 0x6160c0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_006160C0: RECOMP_ITAIL(0x006160C0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B7089(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B7089u);

L_007B7089:
    ecx = MEM32(ebp + (-0x1F0)); /* 0x007B7089: mov ecx, dword ptr [ebp - 0x1f0] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x594u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x594u; /* 0x007B708F: add ecx, 0x594 */
    _flag_k = FK_ADD;
    goto L_006107D0; /* 0x007B7095: jmp 0x6107d0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_006107D0: RECOMP_ITAIL(0x006107D0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B709A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B709Au);

L_007B709A:
    ecx = MEM32(ebp + (-0x1EC)); /* 0x007B709A: mov ecx, dword ptr [ebp - 0x1ec] */
    goto L_006160C0; /* 0x007B70A0: jmp 0x6160c0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_006160C0: RECOMP_ITAIL(0x006160C0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B70A5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B70A5u);

L_007B70A5:
    ecx = MEM32(ebp + (-0x1F0)); /* 0x007B70A5: mov ecx, dword ptr [ebp - 0x1f0] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x5B4u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x5B4u; /* 0x007B70AB: add ecx, 0x5b4 */
    _flag_k = FK_ADD;
    goto L_006107D0; /* 0x007B70B1: jmp 0x6107d0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_006107D0: RECOMP_ITAIL(0x006107D0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B70B6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B70B6u);

L_007B70B6:
    ecx = ebp + (-0x1E8); /* 0x007B70B6: lea ecx, [ebp - 0x1e8] */
    goto L_0061F180; /* 0x007B70BC: jmp 0x61f180 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0061F180: RECOMP_ITAIL(0x0061F180u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B70C1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B70C1u);

    goto L_007B70C1;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B70C1:
    edx = MEM32(esp + 0x8); /* 0x007B70C1: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B70C5: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x1F4)); /* 0x007B70C8: mov ecx, dword ptr [edx - 0x1f4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B70CE: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B70D0: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x007B70D5: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B70D8: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B70DA: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00840C20u; /* 0x007B70DF: mov eax, 0x840c20 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B70E4: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B70F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B70F0u);

L_007B70F0:
    PUSH32(esp, 0x0040A000u); /* 0x007B70F0: push 0x40a000 */
    PUSH32(esp, 0x25u); /* 0x007B70F5: push 0x25 */
    PUSH32(esp, 0x18u); /* 0x007B70F7: push 0x18 */
    eax = MEM32(ebp + (-0x10)); /* 0x007B70F9: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x28u; /* 0x007B70FC: add eax, 0x28 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x007B70FF: push eax */
    RECOMP_CALL(sub_0077F628); /* 0x007B7100: call 0x77f628 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007B7105: ret  */
    RECOMP_REGS_OUT();
}

void sub_007B7106(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B7106u);

    goto L_007B7106;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B7106:
    edx = MEM32(esp + 0x8); /* 0x007B7106: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B710A: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x8)); /* 0x007B710D: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B7110: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B7112: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00840CC8u; /* 0x007B7117: mov eax, 0x840cc8 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B711C: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B7130(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B7130u);

L_007B7130:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B7130: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x007B7133: add ecx, 8 */
    _flag_k = FK_ADD;
    goto L_00419790; /* 0x007B7136: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B713B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B713Bu);

L_007B713B:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B713B: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x14u; /* 0x007B713E: add ecx, 0x14 */
    _flag_k = FK_ADD;
    goto L_00419790; /* 0x007B7141: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B7146(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B7146u);

L_007B7146:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B7146: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x30u; /* 0x007B7149: add ecx, 0x30 */
    _flag_k = FK_ADD;
    goto L_0061F250; /* 0x007B714C: jmp 0x61f250 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0061F250: RECOMP_ITAIL(0x0061F250u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B7151(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B7151u);

L_007B7151:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B7151: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1CCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x1CCu; /* 0x007B7154: add ecx, 0x1cc */
    _flag_k = FK_ADD;
    goto L_0061F2E0; /* 0x007B715A: jmp 0x61f2e0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0061F2E0: RECOMP_ITAIL(0x0061F2E0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B715F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B715Fu);

L_007B715F:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B715F: mov ecx, dword ptr [ebp - 0x14] */
    goto L_00625690; /* 0x007B7162: jmp 0x625690 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00625690: RECOMP_ITAIL(0x00625690u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B7167(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B7167u);

L_007B7167:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B7167: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040B290; /* 0x007B716A: jmp 0x40b290 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B290: RECOMP_ITAIL(0x0040B290u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B716F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B716Fu);

L_007B716F:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B716F: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040B2E0; /* 0x007B7172: jmp 0x40b2e0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B2E0: RECOMP_ITAIL(0x0040B2E0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B7177(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B7177u);

L_007B7177:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B7177: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040B340; /* 0x007B717A: jmp 0x40b340 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B340: RECOMP_ITAIL(0x0040B340u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B717F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B717Fu);

    goto L_007B717F;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B717F:
    edx = MEM32(esp + 0x8); /* 0x007B717F: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B7183: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x007B7186: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B7189: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B718B: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00840CF8u; /* 0x007B7190: mov eax, 0x840cf8 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B7195: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B71A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B71A0u);

L_007B71A0:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B71A0: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x14u; /* 0x007B71A3: add ecx, 0x14 */
    _flag_k = FK_ADD;
    goto L_0040A000; /* 0x007B71A6: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B71AB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B71ABu);

L_007B71AB:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B71AB: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x2Cu; /* 0x007B71AE: add ecx, 0x2c */
    _flag_k = FK_ADD;
    goto L_0040A000; /* 0x007B71B1: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B71B6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B71B6u);

    goto L_007B71B6;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B71B6:
    edx = MEM32(esp + 0x8); /* 0x007B71B6: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B71BA: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xC)); /* 0x007B71BD: mov ecx, dword ptr [edx - 0xc] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B71C0: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B71C2: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00840D60u; /* 0x007B71C7: mov eax, 0x840d60 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B71CC: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B71E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B71E0u);

L_007B71E0:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B71E0: mov ecx, dword ptr [ebp - 0x10] */
    goto L_00625690; /* 0x007B71E3: jmp 0x625690 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00625690: RECOMP_ITAIL(0x00625690u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B71E8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B71E8u);

L_007B71E8:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B71E8: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040B290; /* 0x007B71EB: jmp 0x40b290 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B290: RECOMP_ITAIL(0x0040B290u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B71F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B71F0u);

L_007B71F0:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B71F0: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040B2E0; /* 0x007B71F3: jmp 0x40b2e0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B2E0: RECOMP_ITAIL(0x0040B2E0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B71F8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B71F8u);

L_007B71F8:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B71F8: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040B340; /* 0x007B71FB: jmp 0x40b340 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B340: RECOMP_ITAIL(0x0040B340u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B7200(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B7200u);

    goto L_007B7200;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B7200:
    edx = MEM32(esp + 0x8); /* 0x007B7200: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B7204: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x10)); /* 0x007B7207: mov ecx, dword ptr [edx - 0x10] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B720A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B720C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00840D94u; /* 0x007B7211: mov eax, 0x840d94 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B7216: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B7220(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B7220u);

L_007B7220:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B7220: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x34u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x34u; /* 0x007B7223: add ecx, 0x34 */
    _flag_k = FK_ADD;
    goto L_0061F130; /* 0x007B7226: jmp 0x61f130 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0061F130: RECOMP_ITAIL(0x0061F130u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B722B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B722Bu);

L_007B722B:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B722B: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x504u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x504u; /* 0x007B722E: add ecx, 0x504 */
    _flag_k = FK_ADD;
    goto L_00625820; /* 0x007B7234: jmp 0x625820 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00625820: RECOMP_ITAIL(0x00625820u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B7239(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B7239u);

L_007B7239:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B7239: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x510u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x510u; /* 0x007B723C: add ecx, 0x510 */
    _flag_k = FK_ADD;
    goto L_0040A000; /* 0x007B7242: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B7247(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B7247u);

L_007B7247:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B7247: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x528u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x528u; /* 0x007B724A: add ecx, 0x528 */
    _flag_k = FK_ADD;
    goto L_00419790; /* 0x007B7250: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B7255(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B7255u);

L_007B7255:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B7255: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x534u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x534u; /* 0x007B7258: add ecx, 0x534 */
    _flag_k = FK_ADD;
    goto L_006107D0; /* 0x007B725E: jmp 0x6107d0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_006107D0: RECOMP_ITAIL(0x006107D0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B7263(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B7263u);

L_007B7263:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B7263: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x554u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x554u; /* 0x007B7266: add ecx, 0x554 */
    _flag_k = FK_ADD;
    goto L_006107D0; /* 0x007B726C: jmp 0x6107d0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_006107D0: RECOMP_ITAIL(0x006107D0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B7271(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B7271u);

L_007B7271:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B7271: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x574u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x574u; /* 0x007B7274: add ecx, 0x574 */
    _flag_k = FK_ADD;
    goto L_006107D0; /* 0x007B727A: jmp 0x6107d0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_006107D0: RECOMP_ITAIL(0x006107D0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B727F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B727Fu);

L_007B727F:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B727F: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x594u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x594u; /* 0x007B7282: add ecx, 0x594 */
    _flag_k = FK_ADD;
    goto L_006107D0; /* 0x007B7288: jmp 0x6107d0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_006107D0: RECOMP_ITAIL(0x006107D0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B728D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B728Du);

L_007B728D:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B728D: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x5B4u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x5B4u; /* 0x007B7290: add ecx, 0x5b4 */
    _flag_k = FK_ADD;
    goto L_006107D0; /* 0x007B7296: jmp 0x6107d0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_006107D0: RECOMP_ITAIL(0x006107D0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B729B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B729Bu);

L_007B729B:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B729B: mov ecx, dword ptr [ebp - 0x10] */
    goto L_006160C0; /* 0x007B729E: jmp 0x6160c0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_006160C0: RECOMP_ITAIL(0x006160C0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B72A3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B72A3u);

L_007B72A3:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B72A3: mov ecx, dword ptr [ebp - 0x10] */
    goto L_005DBCB0; /* 0x007B72A6: jmp 0x5dbcb0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005DBCB0: RECOMP_ITAIL(0x005DBCB0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B72AB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B72ABu);

L_007B72AB:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B72AB: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x007B72AE: add ecx, 8 */
    _flag_k = FK_ADD;
    goto L_00419790; /* 0x007B72B1: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B72B6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B72B6u);

L_007B72B6:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B72B6: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040B2E0; /* 0x007B72B9: jmp 0x40b2e0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B2E0: RECOMP_ITAIL(0x0040B2E0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B72BE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B72BEu);

L_007B72BE:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B72BE: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040B340; /* 0x007B72C1: jmp 0x40b340 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B340: RECOMP_ITAIL(0x0040B340u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B72C6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B72C6u);

L_007B72C6:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B72C6: mov ecx, dword ptr [ebp - 0x10] */
    goto L_006160C0; /* 0x007B72C9: jmp 0x6160c0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_006160C0: RECOMP_ITAIL(0x006160C0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B72CE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B72CEu);

L_007B72CE:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B72CE: mov ecx, dword ptr [ebp - 0x10] */
    goto L_005DBCB0; /* 0x007B72D1: jmp 0x5dbcb0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005DBCB0: RECOMP_ITAIL(0x005DBCB0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B72D6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B72D6u);

L_007B72D6:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B72D6: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x007B72D9: add ecx, 8 */
    _flag_k = FK_ADD;
    goto L_00419790; /* 0x007B72DC: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B72E1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B72E1u);

L_007B72E1:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B72E1: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040B2E0; /* 0x007B72E4: jmp 0x40b2e0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B2E0: RECOMP_ITAIL(0x0040B2E0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B72E9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B72E9u);

L_007B72E9:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B72E9: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040B340; /* 0x007B72EC: jmp 0x40b340 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B340: RECOMP_ITAIL(0x0040B340u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B72F1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B72F1u);

L_007B72F1:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B72F1: mov ecx, dword ptr [ebp - 0x10] */
    goto L_006160C0; /* 0x007B72F4: jmp 0x6160c0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_006160C0: RECOMP_ITAIL(0x006160C0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B72F9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B72F9u);

L_007B72F9:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B72F9: mov ecx, dword ptr [ebp - 0x10] */
    goto L_005DBCB0; /* 0x007B72FC: jmp 0x5dbcb0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005DBCB0: RECOMP_ITAIL(0x005DBCB0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B7301(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B7301u);

L_007B7301:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B7301: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x007B7304: add ecx, 8 */
    _flag_k = FK_ADD;
    goto L_00419790; /* 0x007B7307: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B730C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B730Cu);

L_007B730C:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B730C: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040B2E0; /* 0x007B730F: jmp 0x40b2e0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B2E0: RECOMP_ITAIL(0x0040B2E0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B7314(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B7314u);

L_007B7314:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B7314: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040B340; /* 0x007B7317: jmp 0x40b340 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B340: RECOMP_ITAIL(0x0040B340u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}
