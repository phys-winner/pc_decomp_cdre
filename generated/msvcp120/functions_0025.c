#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_1103BE40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103BE40u);

L_1103BE40:
    { _itail_tgt = (uint32_t)(MEM32(0x110692B4)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103BE46(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103BE46u);

L_1103BE46:
    { _itail_tgt = (uint32_t)(MEM32(0x1106900C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103BE57(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103BE57u);

    goto L_1103BE57;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103BE57:
    edx = MEM32(esp + 0x8); /* 0x1103BE57: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103BE5B: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x1103BE5E: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103BE61: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103BE63: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x1103F818u; /* 0x1103BE68: mov eax, 0x1103f818 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103BE6D: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103BE7D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103BE7Du);

    goto L_1103BE7D;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103BE7D:
    edx = MEM32(esp + 0x8); /* 0x1103BE7D: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103BE81: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x1103BE84: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103BE87: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103BE89: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x1103F844u; /* 0x1103BE8E: mov eax, 0x1103f844 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103BE93: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103BEA8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103BEA8u);

    goto L_1103BEA8;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103BEA8:
    edx = MEM32(esp + 0x8); /* 0x1103BEA8: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0x34); /* 0x1103BEAC: lea eax, [edx - 0x34] */
    ecx = MEM32(edx + (-0x38)); /* 0x1103BEAF: mov ecx, dword ptr [edx - 0x38] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103BEB2: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103BEB4: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x1103BEB9: add eax, 0xc */
    _flag_k = FK_ADD;
    ecx = MEM32(edx + (-0x8)); /* 0x1103BEBC: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103BEBF: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103BEC1: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x1103F870u; /* 0x1103BEC6: mov eax, 0x1103f870 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103BECB: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103BEE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103BEE0u);

    goto L_1103BEE0;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103BEE0:
    edx = MEM32(esp + 0x8); /* 0x1103BEE0: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0x3C); /* 0x1103BEE4: lea eax, [edx - 0x3c] */
    ecx = MEM32(edx + (-0x40)); /* 0x1103BEE7: mov ecx, dword ptr [edx - 0x40] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103BEEA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103BEEC: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1103BEF1: add eax, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(edx + (-0x8)); /* 0x1103BEF4: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103BEF7: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103BEF9: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x1103F8A4u; /* 0x1103BEFE: mov eax, 0x1103f8a4 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103BF03: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103BF3F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103BF3Fu);

    goto L_1103BF3F;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103BF3F:
    edx = MEM32(esp + 0x8); /* 0x1103BF3F: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0x2E4); /* 0x1103BF43: lea eax, [edx - 0x2e4] */
    ecx = MEM32(edx + (-0x2E8)); /* 0x1103BF49: mov ecx, dword ptr [edx - 0x2e8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103BF4F: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103BF51: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x1103BF56: add eax, 0xc */
    _flag_k = FK_ADD;
    ecx = MEM32(edx + (-0x8)); /* 0x1103BF59: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103BF5C: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103BF5E: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x1103F8D8u; /* 0x1103BF63: mov eax, 0x1103f8d8 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103BF68: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103BF83(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103BF83u);

    goto L_1103BF83;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103BF83:
    edx = MEM32(esp + 0x8); /* 0x1103BF83: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0x1AC); /* 0x1103BF87: lea eax, [edx - 0x1ac] */
    ecx = MEM32(edx + (-0x1B0)); /* 0x1103BF8D: mov ecx, dword ptr [edx - 0x1b0] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103BF93: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103BF95: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x1103BF9A: add eax, 8 */
    _flag_k = FK_ADD;
    ecx = MEM32(edx + (-0x8)); /* 0x1103BF9D: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103BFA0: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103BFA2: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x1103F92Cu; /* 0x1103BFA7: mov eax, 0x1103f92c */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103BFAC: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103BFDF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103BFDFu);

    goto L_1103BFDF;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103BFDF:
    edx = MEM32(esp + 0x8); /* 0x1103BFDF: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103BFE3: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x30)); /* 0x1103BFE6: mov ecx, dword ptr [edx - 0x30] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103BFE9: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103BFEB: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x1103BFF0: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103BFF3: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103BFF5: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x1103F960u; /* 0x1103BFFA: mov eax, 0x1103f960 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103BFFF: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103C00C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103C00Cu);

    goto L_1103C00C;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103C00C:
    edx = MEM32(esp + 0x8); /* 0x1103C00C: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103C010: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x1103C013: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103C016: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103C018: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x1103F9ACu; /* 0x1103C01D: mov eax, 0x1103f9ac */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103C022: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103C032(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103C032u);

    goto L_1103C032;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103C032:
    edx = MEM32(esp + 0x8); /* 0x1103C032: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103C036: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x20)); /* 0x1103C039: mov ecx, dword ptr [edx - 0x20] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103C03C: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103C03E: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x1103F9D8u; /* 0x1103C043: mov eax, 0x1103f9d8 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103C048: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103C071(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103C071u);

    goto L_1103C071;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103C071:
    edx = MEM32(esp + 0x8); /* 0x1103C071: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103C075: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x1103C078: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103C07B: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103C07D: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x1103FA04u; /* 0x1103C082: mov eax, 0x1103fa04 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103C087: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103C094(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103C094u);

    goto L_1103C094;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103C094:
    edx = MEM32(esp + 0x8); /* 0x1103C094: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103C098: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x2C)); /* 0x1103C09B: mov ecx, dword ptr [edx - 0x2c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103C09E: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103C0A0: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x1103FA40u; /* 0x1103C0A5: mov eax, 0x1103fa40 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103C0AA: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103C0DB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103C0DBu);

    goto L_1103C0DB;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103C0DB:
    edx = MEM32(esp + 0x8); /* 0x1103C0DB: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103C0DF: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x1103C0E2: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103C0E5: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103C0E7: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x1103FA6Cu; /* 0x1103C0EC: mov eax, 0x1103fa6c */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103C0F1: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103C0FF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103C0FFu);

    goto L_1103C0FF;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103C0FF:
    edx = MEM32(esp + 0x8); /* 0x1103C0FF: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103C103: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x38)); /* 0x1103C106: mov ecx, dword ptr [edx - 0x38] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103C109: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103C10B: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x1103FAB0u; /* 0x1103C110: mov eax, 0x1103fab0 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103C115: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103C123(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103C123u);

    goto L_1103C123;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103C123:
    edx = MEM32(esp + 0x8); /* 0x1103C123: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103C127: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x2C)); /* 0x1103C12A: mov ecx, dword ptr [edx - 0x2c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103C12D: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103C12F: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x1103FADCu; /* 0x1103C134: mov eax, 0x1103fadc */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103C139: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103C178(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103C178u);

    goto L_1103C178;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103C178:
    edx = MEM32(esp + 0x8); /* 0x1103C178: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103C17C: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x1103C17F: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103C182: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103C184: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x1103FB08u; /* 0x1103C189: mov eax, 0x1103fb08 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103C18E: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103C19C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103C19Cu);

    goto L_1103C19C;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103C19C:
    edx = MEM32(esp + 0x8); /* 0x1103C19C: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0x3C); /* 0x1103C1A0: lea eax, [edx - 0x3c] */
    ecx = MEM32(edx + (-0x40)); /* 0x1103C1A3: mov ecx, dword ptr [edx - 0x40] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103C1A6: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103C1A8: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x1103FB54u; /* 0x1103C1AD: mov eax, 0x1103fb54 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103C1B2: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103C1DD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103C1DDu);

    goto L_1103C1DD;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103C1DD:
    edx = MEM32(esp + 0x8); /* 0x1103C1DD: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103C1E1: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x34)); /* 0x1103C1E4: mov ecx, dword ptr [edx - 0x34] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103C1E7: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103C1E9: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x1103C1EE: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103C1F1: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103C1F3: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x1103FB80u; /* 0x1103C1F8: mov eax, 0x1103fb80 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103C1FD: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103C218(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103C218u);

    goto L_1103C218;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103C218:
    edx = MEM32(esp + 0x8); /* 0x1103C218: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103C21C: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x1103C21F: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103C222: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103C224: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x1103FBC4u; /* 0x1103C229: mov eax, 0x1103fbc4 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103C22E: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103C23C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103C23Cu);

    goto L_1103C23C;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103C23C:
    edx = MEM32(esp + 0x8); /* 0x1103C23C: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103C240: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x2C)); /* 0x1103C243: mov ecx, dword ptr [edx - 0x2c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103C246: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103C248: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x1103FBF8u; /* 0x1103C24D: mov eax, 0x1103fbf8 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103C252: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103C27B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103C27Bu);

    goto L_1103C27B;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103C27B:
    edx = MEM32(esp + 0x8); /* 0x1103C27B: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103C27F: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x1103C282: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103C285: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103C287: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x1103FC24u; /* 0x1103C28C: mov eax, 0x1103fc24 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103C291: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103C29E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103C29Eu);

    goto L_1103C29E;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103C29E:
    edx = MEM32(esp + 0x8); /* 0x1103C29E: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103C2A2: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x2C)); /* 0x1103C2A5: mov ecx, dword ptr [edx - 0x2c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103C2A8: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103C2AA: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x1103FC60u; /* 0x1103C2AF: mov eax, 0x1103fc60 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103C2B4: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103C2E5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103C2E5u);

    goto L_1103C2E5;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103C2E5:
    edx = MEM32(esp + 0x8); /* 0x1103C2E5: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103C2E9: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x1103C2EC: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103C2EF: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103C2F1: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x1103FC8Cu; /* 0x1103C2F6: mov eax, 0x1103fc8c */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103C2FB: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103C33A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103C33Au);

    goto L_1103C33A;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103C33A:
    edx = MEM32(esp + 0x8); /* 0x1103C33A: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103C33E: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x1103C341: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103C344: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103C346: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x1103FCD0u; /* 0x1103C34B: mov eax, 0x1103fcd0 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103C350: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103C3B9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103C3B9u);

    goto L_1103C3B9;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103C3B9:
    edx = MEM32(esp + 0x8); /* 0x1103C3B9: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103C3BD: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x68)); /* 0x1103C3C0: mov ecx, dword ptr [edx - 0x68] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103C3C3: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103C3C5: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x1103C3CA: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103C3CD: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103C3CF: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x1103FD20u; /* 0x1103C3D4: mov eax, 0x1103fd20 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103C3D9: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103C3F4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103C3F4u);

    goto L_1103C3F4;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103C3F4:
    edx = MEM32(esp + 0x8); /* 0x1103C3F4: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103C3F8: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x1103C3FB: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103C3FE: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103C400: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x1103FDA0u; /* 0x1103C405: mov eax, 0x1103fda0 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103C40A: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103C42D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103C42Du);

    goto L_1103C42D;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103C42D:
    edx = MEM32(esp + 0x8); /* 0x1103C42D: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103C431: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x1103C434: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103C437: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103C439: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x1103FDD4u; /* 0x1103C43E: mov eax, 0x1103fdd4 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103C443: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103C474(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103C474u);

    goto L_1103C474;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103C474:
    edx = MEM32(esp + 0x8); /* 0x1103C474: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103C478: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x40)); /* 0x1103C47B: mov ecx, dword ptr [edx - 0x40] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103C47E: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103C480: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x1103C485: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103C488: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103C48A: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x1103FE10u; /* 0x1103C48F: mov eax, 0x1103fe10 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103C494: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103C4A2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103C4A2u);

    goto L_1103C4A2;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103C4A2:
    edx = MEM32(esp + 0x8); /* 0x1103C4A2: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103C4A6: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x3C)); /* 0x1103C4A9: mov ecx, dword ptr [edx - 0x3c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103C4AC: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103C4AE: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x1103FE54u; /* 0x1103C4B3: mov eax, 0x1103fe54 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103C4B8: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103C4D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103C4D0u);

    goto L_1103C4D0;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103C4D0:
    edx = MEM32(esp + 0x8); /* 0x1103C4D0: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103C4D4: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x1103C4D7: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103C4DA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103C4DC: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x1103FE80u; /* 0x1103C4E1: mov eax, 0x1103fe80 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103C4E6: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103C4F4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103C4F4u);

    goto L_1103C4F4;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103C4F4:
    edx = MEM32(esp + 0x8); /* 0x1103C4F4: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103C4F8: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x30)); /* 0x1103C4FB: mov ecx, dword ptr [edx - 0x30] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103C4FE: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103C500: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x1103FEB4u; /* 0x1103C505: mov eax, 0x1103feb4 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103C50A: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103C551(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103C551u);

    goto L_1103C551;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103C551:
    edx = MEM32(esp + 0x8); /* 0x1103C551: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103C555: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x1103C558: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103C55B: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103C55D: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x1103FEE0u; /* 0x1103C562: mov eax, 0x1103fee0 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103C567: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103C577(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103C577u);

    goto L_1103C577;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103C577:
    edx = MEM32(esp + 0x8); /* 0x1103C577: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103C57B: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x1103C57E: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103C581: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103C583: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x1103FF34u; /* 0x1103C588: mov eax, 0x1103ff34 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103C58D: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103C5C1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103C5C1u);

    goto L_1103C5C1;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103C5C1:
    edx = MEM32(esp + 0x8); /* 0x1103C5C1: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103C5C5: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x20)); /* 0x1103C5C8: mov ecx, dword ptr [edx - 0x20] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103C5CB: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103C5CD: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x1103FF60u; /* 0x1103C5D2: mov eax, 0x1103ff60 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103C5D7: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103C5F6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103C5F6u);

    goto L_1103C5F6;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103C5F6:
    edx = MEM32(esp + 0x8); /* 0x1103C5F6: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103C5FA: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x64)); /* 0x1103C5FD: mov ecx, dword ptr [edx - 0x64] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103C600: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103C602: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x1103FFA4u; /* 0x1103C607: mov eax, 0x1103ffa4 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103C60C: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103C619(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103C619u);

    goto L_1103C619;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103C619:
    edx = MEM32(esp + 0x8); /* 0x1103C619: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103C61D: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x1103C620: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103C623: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103C625: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x1103FFE0u; /* 0x1103C62A: mov eax, 0x1103ffe0 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103C62F: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103C658(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103C658u);

    goto L_1103C658;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103C658:
    edx = MEM32(esp + 0x8); /* 0x1103C658: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103C65C: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x1103C65F: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103C662: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103C664: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x1104000Cu; /* 0x1103C669: mov eax, 0x1104000c */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103C66E: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103C69F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103C69Fu);

    goto L_1103C69F;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103C69F:
    edx = MEM32(esp + 0x8); /* 0x1103C69F: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103C6A3: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x1103C6A6: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103C6A9: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103C6AB: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11040048u; /* 0x1103C6B0: mov eax, 0x11040048 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103C6B5: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103C6DE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103C6DEu);

    goto L_1103C6DE;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103C6DE:
    edx = MEM32(esp + 0x8); /* 0x1103C6DE: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103C6E2: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x1103C6E5: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103C6E8: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103C6EA: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x1104008Cu; /* 0x1103C6EF: mov eax, 0x1104008c */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103C6F4: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103C730(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103C730u);

    goto L_1103C730;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103C730:
    edx = MEM32(esp + 0x8); /* 0x1103C730: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103C734: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x1103C737: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103C73A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103C73C: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x110400C8u; /* 0x1103C741: mov eax, 0x110400c8 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103C746: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103C753(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103C753u);

    goto L_1103C753;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103C753:
    edx = MEM32(esp + 0x8); /* 0x1103C753: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103C757: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x40)); /* 0x1103C75A: mov ecx, dword ptr [edx - 0x40] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103C75D: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103C75F: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11040114u; /* 0x1103C764: mov eax, 0x11040114 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103C769: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103C779(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103C779u);

    goto L_1103C779;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103C779:
    edx = MEM32(esp + 0x8); /* 0x1103C779: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103C77D: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x1103C780: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103C783: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103C785: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11040140u; /* 0x1103C78A: mov eax, 0x11040140 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103C78F: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103C7A8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103C7A8u);

    goto L_1103C7A8;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103C7A8:
    edx = MEM32(esp + 0x8); /* 0x1103C7A8: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103C7AC: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x3C)); /* 0x1103C7AF: mov ecx, dword ptr [edx - 0x3c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103C7B2: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103C7B4: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x1104016Cu; /* 0x1103C7B9: mov eax, 0x1104016c */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103C7BE: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103C7CB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103C7CBu);

    goto L_1103C7CB;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103C7CB:
    edx = MEM32(esp + 0x8); /* 0x1103C7CB: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103C7CF: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x1103C7D2: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103C7D5: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103C7D7: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x110401A0u; /* 0x1103C7DC: mov eax, 0x110401a0 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103C7E1: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103C828(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103C828u);

    goto L_1103C828;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103C828:
    edx = MEM32(esp + 0x8); /* 0x1103C828: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103C82C: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x1103C82F: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103C832: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103C834: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x110401CCu; /* 0x1103C839: mov eax, 0x110401cc */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103C83E: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103C853(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103C853u);

    goto L_1103C853;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103C853:
    edx = MEM32(esp + 0x8); /* 0x1103C853: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103C857: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x2C)); /* 0x1103C85A: mov ecx, dword ptr [edx - 0x2c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103C85D: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103C85F: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x1103C864: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103C867: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103C869: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11040220u; /* 0x1103C86E: mov eax, 0x11040220 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103C873: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103C880(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103C880u);

    goto L_1103C880;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103C880:
    edx = MEM32(esp + 0x8); /* 0x1103C880: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103C884: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x1103C887: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103C88A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103C88C: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11040254u; /* 0x1103C891: mov eax, 0x11040254 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103C896: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103C8AE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103C8AEu);

    goto L_1103C8AE;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103C8AE:
    edx = MEM32(esp + 0x8); /* 0x1103C8AE: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0x8C); /* 0x1103C8B2: lea eax, [edx - 0x8c] */
    ecx = MEM32(edx + (-0x90)); /* 0x1103C8B8: mov ecx, dword ptr [edx - 0x90] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103C8BE: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103C8C0: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11040280u; /* 0x1103C8C5: mov eax, 0x11040280 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103C8CA: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103C8D7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103C8D7u);

    goto L_1103C8D7;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103C8D7:
    edx = MEM32(esp + 0x8); /* 0x1103C8D7: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0x4C); /* 0x1103C8DB: lea eax, [edx - 0x4c] */
    ecx = MEM32(edx + (-0x50)); /* 0x1103C8DE: mov ecx, dword ptr [edx - 0x50] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103C8E1: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103C8E3: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x110402B4u; /* 0x1103C8E8: mov eax, 0x110402b4 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103C8ED: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103C906(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103C906u);

    goto L_1103C906;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103C906:
    edx = MEM32(esp + 0x8); /* 0x1103C906: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103C90A: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x1103C90D: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103C910: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103C912: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x110402E8u; /* 0x1103C917: mov eax, 0x110402e8 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103C91C: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103C940(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103C940u);

    goto L_1103C940;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103C940:
    edx = MEM32(esp + 0x8); /* 0x1103C940: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103C944: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x1103C947: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103C94A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103C94C: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x1104031Cu; /* 0x1103C951: mov eax, 0x1104031c */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103C956: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103C96F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103C96Fu);

    goto L_1103C96F;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103C96F:
    edx = MEM32(esp + 0x8); /* 0x1103C96F: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103C973: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x1103C976: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103C979: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103C97B: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11040358u; /* 0x1103C980: mov eax, 0x11040358 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103C985: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103C99E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103C99Eu);

    goto L_1103C99E;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103C99E:
    edx = MEM32(esp + 0x8); /* 0x1103C99E: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103C9A2: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x1103C9A5: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103C9A8: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103C9AA: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x1104038Cu; /* 0x1103C9AF: mov eax, 0x1104038c */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103C9B4: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103C9CD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103C9CDu);

    goto L_1103C9CD;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103C9CD:
    edx = MEM32(esp + 0x8); /* 0x1103C9CD: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103C9D1: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x1103C9D4: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103C9D7: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103C9D9: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x110403C0u; /* 0x1103C9DE: mov eax, 0x110403c0 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103C9E3: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103CA0C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103CA0Cu);

    goto L_1103CA0C;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103CA0C:
    edx = MEM32(esp + 0x8); /* 0x1103CA0C: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0x84); /* 0x1103CA10: lea eax, [edx - 0x84] */
    ecx = MEM32(edx + (-0x88)); /* 0x1103CA16: mov ecx, dword ptr [edx - 0x88] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103CA1C: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103CA1E: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x110403F4u; /* 0x1103CA23: mov eax, 0x110403f4 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103CA28: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103CA51(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103CA51u);

    goto L_1103CA51;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103CA51:
    edx = MEM32(esp + 0x8); /* 0x1103CA51: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0x84); /* 0x1103CA55: lea eax, [edx - 0x84] */
    ecx = MEM32(edx + (-0x88)); /* 0x1103CA5B: mov ecx, dword ptr [edx - 0x88] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103CA61: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103CA63: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11040438u; /* 0x1103CA68: mov eax, 0x11040438 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103CA6D: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103CA7A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103CA7Au);

    goto L_1103CA7A;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103CA7A:
    edx = MEM32(esp + 0x8); /* 0x1103CA7A: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103CA7E: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x1103CA81: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103CA84: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103CA86: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x1104047Cu; /* 0x1103CA8B: mov eax, 0x1104047c */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103CA90: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103CABF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103CABFu);

    goto L_1103CABF;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103CABF:
    edx = MEM32(esp + 0x8); /* 0x1103CABF: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103CAC3: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x24)); /* 0x1103CAC6: mov ecx, dword ptr [edx - 0x24] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103CAC9: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103CACB: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x110404A8u; /* 0x1103CAD0: mov eax, 0x110404a8 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103CAD5: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103CAE2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103CAE2u);

    goto L_1103CAE2;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103CAE2:
    edx = MEM32(esp + 0x8); /* 0x1103CAE2: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103CAE6: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x1103CAE9: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103CAEC: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103CAEE: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x110404ECu; /* 0x1103CAF3: mov eax, 0x110404ec */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103CAF8: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103CB27(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103CB27u);

    goto L_1103CB27;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103CB27:
    edx = MEM32(esp + 0x8); /* 0x1103CB27: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103CB2B: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x24)); /* 0x1103CB2E: mov ecx, dword ptr [edx - 0x24] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103CB31: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103CB33: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11040518u; /* 0x1103CB38: mov eax, 0x11040518 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103CB3D: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103CB8C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103CB8Cu);

    goto L_1103CB8C;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103CB8C:
    edx = MEM32(esp + 0x8); /* 0x1103CB8C: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103CB90: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x20)); /* 0x1103CB93: mov ecx, dword ptr [edx - 0x20] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103CB96: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103CB98: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x1104055Cu; /* 0x1103CB9D: mov eax, 0x1104055c */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103CBA2: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103CBBA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103CBBAu);

    goto L_1103CBBA;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103CBBA:
    edx = MEM32(esp + 0x8); /* 0x1103CBBA: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103CBBE: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x1103CBC1: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103CBC4: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103CBC6: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x110405B8u; /* 0x1103CBCB: mov eax, 0x110405b8 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103CBD0: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103CBDD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103CBDDu);

    goto L_1103CBDD;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103CBDD:
    edx = MEM32(esp + 0x8); /* 0x1103CBDD: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103CBE1: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x74)); /* 0x1103CBE4: mov ecx, dword ptr [edx - 0x74] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103CBE7: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103CBE9: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x110405ECu; /* 0x1103CBEE: mov eax, 0x110405ec */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103CBF3: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103CC03(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103CC03u);

    goto L_1103CC03;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103CC03:
    edx = MEM32(esp + 0x8); /* 0x1103CC03: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103CC07: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x48)); /* 0x1103CC0A: mov ecx, dword ptr [edx - 0x48] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103CC0D: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103CC0F: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11040618u; /* 0x1103CC14: mov eax, 0x11040618 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103CC19: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103CC26(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103CC26u);

    goto L_1103CC26;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103CC26:
    edx = MEM32(esp + 0x8); /* 0x1103CC26: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103CC2A: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x58)); /* 0x1103CC2D: mov ecx, dword ptr [edx - 0x58] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103CC30: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103CC32: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11040644u; /* 0x1103CC37: mov eax, 0x11040644 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103CC3C: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103CC49(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103CC49u);

    goto L_1103CC49;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103CC49:
    edx = MEM32(esp + 0x8); /* 0x1103CC49: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103CC4D: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x48)); /* 0x1103CC50: mov ecx, dword ptr [edx - 0x48] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103CC53: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103CC55: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11040670u; /* 0x1103CC5A: mov eax, 0x11040670 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103CC5F: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103CC74(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103CC74u);

    goto L_1103CC74;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103CC74:
    edx = MEM32(esp + 0x8); /* 0x1103CC74: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103CC78: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x30)); /* 0x1103CC7B: mov ecx, dword ptr [edx - 0x30] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103CC7E: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103CC80: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x1103CC85: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103CC88: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103CC8A: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x1104069Cu; /* 0x1103CC8F: mov eax, 0x1104069c */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103CC94: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103CCA1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103CCA1u);

    goto L_1103CCA1;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103CCA1:
    edx = MEM32(esp + 0x8); /* 0x1103CCA1: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103CCA5: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x30)); /* 0x1103CCA8: mov ecx, dword ptr [edx - 0x30] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103CCAB: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103CCAD: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x1103CCB2: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103CCB5: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103CCB7: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x110406D0u; /* 0x1103CCBC: mov eax, 0x110406d0 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103CCC1: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103CCCE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103CCCEu);

    goto L_1103CCCE;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103CCCE:
    edx = MEM32(esp + 0x8); /* 0x1103CCCE: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0x24); /* 0x1103CCD2: lea eax, [edx - 0x24] */
    ecx = MEM32(edx + (-0x28)); /* 0x1103CCD5: mov ecx, dword ptr [edx - 0x28] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103CCD8: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103CCDA: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1103CCDF: add eax, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(edx + (-0x8)); /* 0x1103CCE2: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103CCE5: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103CCE7: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x110406FCu; /* 0x1103CCEC: mov eax, 0x110406fc */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103CCF1: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103CD0F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103CD0Fu);

    goto L_1103CD0F;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103CD0F:
    edx = MEM32(esp + 0x8); /* 0x1103CD0F: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103CD13: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x1103CD16: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103CD19: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103CD1B: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11040728u; /* 0x1103CD20: mov eax, 0x11040728 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103CD25: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103CD42(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103CD42u);

    goto L_1103CD42;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103CD42:
    edx = MEM32(esp + 0x8); /* 0x1103CD42: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103CD46: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x28)); /* 0x1103CD49: mov ecx, dword ptr [edx - 0x28] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103CD4C: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103CD4E: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11040754u; /* 0x1103CD53: mov eax, 0x11040754 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103CD58: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103CD75(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103CD75u);

    goto L_1103CD75;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103CD75:
    edx = MEM32(esp + 0x8); /* 0x1103CD75: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103CD79: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x28)); /* 0x1103CD7C: mov ecx, dword ptr [edx - 0x28] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103CD7F: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103CD81: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x110407C4u; /* 0x1103CD86: mov eax, 0x110407c4 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103CD8B: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103CDA8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103CDA8u);

    goto L_1103CDA8;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103CDA8:
    edx = MEM32(esp + 0x8); /* 0x1103CDA8: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103CDAC: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x28)); /* 0x1103CDAF: mov ecx, dword ptr [edx - 0x28] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103CDB2: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103CDB4: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11040834u; /* 0x1103CDB9: mov eax, 0x11040834 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103CDBE: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103CDCB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103CDCBu);

    goto L_1103CDCB;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103CDCB:
    edx = MEM32(esp + 0x8); /* 0x1103CDCB: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103CDCF: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x1103CDD2: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103CDD5: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103CDD7: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x110408A4u; /* 0x1103CDDC: mov eax, 0x110408a4 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103CDE1: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103CDEE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103CDEEu);

    goto L_1103CDEE;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103CDEE:
    edx = MEM32(esp + 0x8); /* 0x1103CDEE: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103CDF2: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x1103CDF5: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103CDF8: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103CDFA: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11040904u; /* 0x1103CDFF: mov eax, 0x11040904 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103CE04: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103CE11(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103CE11u);

    goto L_1103CE11;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103CE11:
    edx = MEM32(esp + 0x8); /* 0x1103CE11: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103CE15: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x1103CE18: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103CE1B: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103CE1D: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11040964u; /* 0x1103CE22: mov eax, 0x11040964 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103CE27: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103CE34(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103CE34u);

    goto L_1103CE34;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103CE34:
    edx = MEM32(esp + 0x8); /* 0x1103CE34: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0x14); /* 0x1103CE38: lea eax, [edx - 0x14] */
    ecx = MEM32(edx + (-0x18)); /* 0x1103CE3B: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103CE3E: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103CE40: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x110409C4u; /* 0x1103CE45: mov eax, 0x110409c4 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103CE4A: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103CE4F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103CE4Fu);

    goto L_1103CE4F;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103CE4F:
    edx = MEM32(esp + 0x8); /* 0x1103CE4F: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103CE53: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x1C)); /* 0x1103CE56: mov ecx, dword ptr [edx - 0x1c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103CE59: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103CE5B: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x110409F0u; /* 0x1103CE60: mov eax, 0x110409f0 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103CE65: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103CE72(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103CE72u);

    goto L_1103CE72;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103CE72:
    edx = MEM32(esp + 0x8); /* 0x1103CE72: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103CE76: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x1103CE79: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103CE7C: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103CE7E: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11040A7Cu; /* 0x1103CE83: mov eax, 0x11040a7c */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103CE88: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103CE8D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103CE8Du);

    goto L_1103CE8D;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103CE8D:
    edx = MEM32(esp + 0x8); /* 0x1103CE8D: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103CE91: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x1103CE94: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103CE97: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103CE99: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11040AA8u; /* 0x1103CE9E: mov eax, 0x11040aa8 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103CEA3: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103CEB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103CEB0u);

    goto L_1103CEB0;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103CEB0:
    edx = MEM32(esp + 0x8); /* 0x1103CEB0: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103CEB4: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x24)); /* 0x1103CEB7: mov ecx, dword ptr [edx - 0x24] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103CEBA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103CEBC: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11040B00u; /* 0x1103CEC1: mov eax, 0x11040b00 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103CEC6: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103CEDC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103CEDCu);

    goto L_1103CEDC;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103CEDC:
    edx = MEM32(esp + 0x8); /* 0x1103CEDC: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103CEE0: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x48)); /* 0x1103CEE3: mov ecx, dword ptr [edx - 0x48] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103CEE6: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103CEE8: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11040B2Cu; /* 0x1103CEED: mov eax, 0x11040b2c */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103CEF2: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103CEFF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103CEFFu);

    goto L_1103CEFF;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103CEFF:
    edx = MEM32(esp + 0x8); /* 0x1103CEFF: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103CF03: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x48)); /* 0x1103CF06: mov ecx, dword ptr [edx - 0x48] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103CF09: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103CF0B: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11040B94u; /* 0x1103CF10: mov eax, 0x11040b94 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103CF15: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103CF1A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103CF1Au);

    goto L_1103CF1A;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103CF1A:
    edx = MEM32(esp + 0x8); /* 0x1103CF1A: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103CF1E: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x50)); /* 0x1103CF21: mov ecx, dword ptr [edx - 0x50] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103CF24: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103CF26: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11040BC0u; /* 0x1103CF2B: mov eax, 0x11040bc0 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103CF30: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103CF35(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103CF35u);

    goto L_1103CF35;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103CF35:
    edx = MEM32(esp + 0x8); /* 0x1103CF35: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103CF39: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x28)); /* 0x1103CF3C: mov ecx, dword ptr [edx - 0x28] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103CF3F: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103CF41: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11040C4Cu; /* 0x1103CF46: mov eax, 0x11040c4c */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103CF4B: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103CF50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103CF50u);

    goto L_1103CF50;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103CF50:
    edx = MEM32(esp + 0x8); /* 0x1103CF50: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103CF54: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x28)); /* 0x1103CF57: mov ecx, dword ptr [edx - 0x28] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103CF5A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103CF5C: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11040CA4u; /* 0x1103CF61: mov eax, 0x11040ca4 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103CF66: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103CF73(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103CF73u);

    goto L_1103CF73;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103CF73:
    edx = MEM32(esp + 0x8); /* 0x1103CF73: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103CF77: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x3C)); /* 0x1103CF7A: mov ecx, dword ptr [edx - 0x3c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103CF7D: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103CF7F: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x1103CF84: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103CF87: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103CF89: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11040DB4u; /* 0x1103CF8E: mov eax, 0x11040db4 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103CF93: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103CFA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103CFA0u);

    goto L_1103CFA0;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103CFA0:
    edx = MEM32(esp + 0x8); /* 0x1103CFA0: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103CFA4: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x1103CFA7: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103CFAA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103CFAC: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11040E38u; /* 0x1103CFB1: mov eax, 0x11040e38 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103CFB6: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103CFC3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103CFC3u);

    goto L_1103CFC3;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103CFC3:
    edx = MEM32(esp + 0x8); /* 0x1103CFC3: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103CFC7: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x3C)); /* 0x1103CFCA: mov ecx, dword ptr [edx - 0x3c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103CFCD: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103CFCF: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11040E0Cu; /* 0x1103CFD4: mov eax, 0x11040e0c */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103CFD9: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103CFE6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103CFE6u);

    goto L_1103CFE6;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103CFE6:
    edx = MEM32(esp + 0x8); /* 0x1103CFE6: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103CFEA: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x10)); /* 0x1103CFED: mov ecx, dword ptr [edx - 0x10] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103CFF0: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103CFF2: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11040DE0u; /* 0x1103CFF7: mov eax, 0x11040de0 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103CFFC: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103D009(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103D009u);

    goto L_1103D009;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103D009:
    edx = MEM32(esp + 0x8); /* 0x1103D009: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103D00D: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x44)); /* 0x1103D010: mov ecx, dword ptr [edx - 0x44] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103D013: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103D015: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x1103D01A: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103D01D: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103D01F: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x1104492Cu; /* 0x1103D024: mov eax, 0x1104492c */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103D029: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103D036(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103D036u);

    goto L_1103D036;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103D036:
    edx = MEM32(esp + 0x8); /* 0x1103D036: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103D03A: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x1103D03D: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103D040: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103D042: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11041424u; /* 0x1103D047: mov eax, 0x11041424 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103D04C: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103D083(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103D083u);

    goto L_1103D083;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103D083:
    edx = MEM32(esp + 0x8); /* 0x1103D083: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103D087: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x1103D08A: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103D08D: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103D08F: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11044410u; /* 0x1103D094: mov eax, 0x11044410 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103D099: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103D0C5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103D0C5u);

    goto L_1103D0C5;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103D0C5:
    edx = MEM32(esp + 0x8); /* 0x1103D0C5: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103D0C9: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x1103D0CC: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103D0CF: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103D0D1: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x110443CCu; /* 0x1103D0D6: mov eax, 0x110443cc */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103D0DB: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103D112(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103D112u);

    goto L_1103D112;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103D112:
    edx = MEM32(esp + 0x8); /* 0x1103D112: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103D116: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x1103D119: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103D11C: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103D11E: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11044510u; /* 0x1103D123: mov eax, 0x11044510 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103D128: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103D154(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103D154u);

    goto L_1103D154;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103D154:
    edx = MEM32(esp + 0x8); /* 0x1103D154: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103D158: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x1103D15B: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103D15E: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103D160: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x110444CCu; /* 0x1103D165: mov eax, 0x110444cc */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103D16A: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103D1A1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103D1A1u);

    goto L_1103D1A1;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103D1A1:
    edx = MEM32(esp + 0x8); /* 0x1103D1A1: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103D1A5: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x1103D1A8: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103D1AB: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103D1AD: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11044490u; /* 0x1103D1B2: mov eax, 0x11044490 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103D1B7: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103D1E3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103D1E3u);

    goto L_1103D1E3;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103D1E3:
    edx = MEM32(esp + 0x8); /* 0x1103D1E3: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103D1E7: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x1103D1EA: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103D1ED: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103D1EF: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x1104444Cu; /* 0x1103D1F4: mov eax, 0x1104444c */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103D1F9: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103D21A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103D21Au);

    goto L_1103D21A;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103D21A:
    edx = MEM32(esp + 0x8); /* 0x1103D21A: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103D21E: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x1103D221: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103D224: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103D226: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x110424B0u; /* 0x1103D22B: mov eax, 0x110424b0 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103D230: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}
