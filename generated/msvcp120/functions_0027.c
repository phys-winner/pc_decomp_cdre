#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_1103E4C8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103E4C8u);

    goto L_1103E4C8;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103E4C8:
    edx = MEM32(esp + 0x8); /* 0x1103E4C8: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103E4CC: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x1103E4CF: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103E4D2: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103E4D4: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x110447A0u; /* 0x1103E4D9: mov eax, 0x110447a0 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103E4DE: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103E503(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103E503u);

    goto L_1103E503;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103E503:
    edx = MEM32(esp + 0x8); /* 0x1103E503: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103E507: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x5C)); /* 0x1103E50A: mov ecx, dword ptr [edx - 0x5c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103E50D: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103E50F: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x1103E514: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103E517: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103E519: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11041100u; /* 0x1103E51E: mov eax, 0x11041100 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103E523: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103E548(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103E548u);

    goto L_1103E548;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103E548:
    edx = MEM32(esp + 0x8); /* 0x1103E548: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103E54C: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x5C)); /* 0x1103E54F: mov ecx, dword ptr [edx - 0x5c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103E552: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103E554: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x1103E559: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103E55C: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103E55E: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x1104126Cu; /* 0x1103E563: mov eax, 0x1104126c */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103E568: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103E595(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103E595u);

    goto L_1103E595;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103E595:
    edx = MEM32(esp + 0x8); /* 0x1103E595: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103E599: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x7C)); /* 0x1103E59C: mov ecx, dword ptr [edx - 0x7c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103E59F: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103E5A1: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x1103E5A6: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103E5A9: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103E5AB: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11040F60u; /* 0x1103E5B0: mov eax, 0x11040f60 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103E5B5: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103E5E2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103E5E2u);

    goto L_1103E5E2;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103E5E2:
    edx = MEM32(esp + 0x8); /* 0x1103E5E2: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103E5E6: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x7C)); /* 0x1103E5E9: mov ecx, dword ptr [edx - 0x7c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103E5EC: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103E5EE: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x1103E5F3: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103E5F6: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103E5F8: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x110412E8u; /* 0x1103E5FD: mov eax, 0x110412e8 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103E602: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103E60F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103E60Fu);

    goto L_1103E60F;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103E60F:
    edx = MEM32(esp + 0x8); /* 0x1103E60F: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103E613: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x4C)); /* 0x1103E616: mov ecx, dword ptr [edx - 0x4c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103E619: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103E61B: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x1103E620: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103E623: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103E625: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x110411B0u; /* 0x1103E62A: mov eax, 0x110411b0 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103E62F: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103E63C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103E63Cu);

    goto L_1103E63C;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103E63C:
    edx = MEM32(esp + 0x8); /* 0x1103E63C: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103E640: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x48)); /* 0x1103E643: mov ecx, dword ptr [edx - 0x48] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103E646: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103E648: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x1103E64D: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103E650: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103E652: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11041184u; /* 0x1103E657: mov eax, 0x11041184 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103E65C: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103E669(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103E669u);

    goto L_1103E669;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103E669:
    edx = MEM32(esp + 0x8); /* 0x1103E669: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103E66D: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x68)); /* 0x1103E670: mov ecx, dword ptr [edx - 0x68] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103E673: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103E675: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x110447CCu; /* 0x1103E67A: mov eax, 0x110447cc */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103E67F: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103E68C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103E68Cu);

    goto L_1103E68C;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103E68C:
    edx = MEM32(esp + 0x8); /* 0x1103E68C: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103E690: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x30)); /* 0x1103E693: mov ecx, dword ptr [edx - 0x30] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103E696: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103E698: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x110446BCu; /* 0x1103E69D: mov eax, 0x110446bc */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103E6A2: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103E6B7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103E6B7u);

    goto L_1103E6B7;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103E6B7:
    edx = MEM32(esp + 0x8); /* 0x1103E6B7: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103E6BB: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x5C)); /* 0x1103E6BE: mov ecx, dword ptr [edx - 0x5c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103E6C1: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103E6C3: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x1103E6C8: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103E6CB: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103E6CD: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11041078u; /* 0x1103E6D2: mov eax, 0x11041078 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103E6D7: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103E6EC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103E6ECu);

    goto L_1103E6EC;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103E6EC:
    edx = MEM32(esp + 0x8); /* 0x1103E6EC: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103E6F0: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x5C)); /* 0x1103E6F3: mov ecx, dword ptr [edx - 0x5c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103E6F6: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103E6F8: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x1103E6FD: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103E700: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103E702: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11041228u; /* 0x1103E707: mov eax, 0x11041228 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103E70C: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103E719(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103E719u);

    goto L_1103E719;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103E719:
    edx = MEM32(esp + 0x8); /* 0x1103E719: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103E71D: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x3C)); /* 0x1103E720: mov ecx, dword ptr [edx - 0x3c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103E723: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103E725: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x1103E72A: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103E72D: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103E72F: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11044748u; /* 0x1103E734: mov eax, 0x11044748 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103E739: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103E746(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103E746u);

    goto L_1103E746;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103E746:
    edx = MEM32(esp + 0x8); /* 0x1103E746: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103E74A: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x44)); /* 0x1103E74D: mov ecx, dword ptr [edx - 0x44] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103E750: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103E752: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x1103E757: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103E75A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103E75C: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11044900u; /* 0x1103E761: mov eax, 0x11044900 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103E766: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103E77B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103E77Bu);

    goto L_1103E77B;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103E77B:
    edx = MEM32(esp + 0x8); /* 0x1103E77B: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103E77F: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x24)); /* 0x1103E782: mov ecx, dword ptr [edx - 0x24] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103E785: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103E787: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11042C10u; /* 0x1103E78C: mov eax, 0x11042c10 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103E791: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103E7A6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103E7A6u);

    goto L_1103E7A6;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103E7A6:
    edx = MEM32(esp + 0x8); /* 0x1103E7A6: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103E7AA: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x28)); /* 0x1103E7AD: mov ecx, dword ptr [edx - 0x28] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103E7B0: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103E7B2: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11042BCCu; /* 0x1103E7B7: mov eax, 0x11042bcc */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103E7BC: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103E7D1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103E7D1u);

    goto L_1103E7D1;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103E7D1:
    edx = MEM32(esp + 0x8); /* 0x1103E7D1: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103E7D5: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x28)); /* 0x1103E7D8: mov ecx, dword ptr [edx - 0x28] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103E7DB: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103E7DD: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11042B64u; /* 0x1103E7E2: mov eax, 0x11042b64 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103E7E7: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103E7FC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103E7FCu);

    goto L_1103E7FC;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103E7FC:
    edx = MEM32(esp + 0x8); /* 0x1103E7FC: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103E800: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x24)); /* 0x1103E803: mov ecx, dword ptr [edx - 0x24] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103E806: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103E808: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x110440C8u; /* 0x1103E80D: mov eax, 0x110440c8 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103E812: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103E827(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103E827u);

    goto L_1103E827;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103E827:
    edx = MEM32(esp + 0x8); /* 0x1103E827: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103E82B: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x28)); /* 0x1103E82E: mov ecx, dword ptr [edx - 0x28] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103E831: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103E833: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11044084u; /* 0x1103E838: mov eax, 0x11044084 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103E83D: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103E852(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103E852u);

    goto L_1103E852;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103E852:
    edx = MEM32(esp + 0x8); /* 0x1103E852: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103E856: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x28)); /* 0x1103E859: mov ecx, dword ptr [edx - 0x28] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103E85C: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103E85E: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x1104401Cu; /* 0x1103E863: mov eax, 0x1104401c */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103E868: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103E87D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103E87Du);

    goto L_1103E87D;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103E87D:
    edx = MEM32(esp + 0x8); /* 0x1103E87D: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103E881: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x24)); /* 0x1103E884: mov ecx, dword ptr [edx - 0x24] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103E887: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103E889: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x1104366Cu; /* 0x1103E88E: mov eax, 0x1104366c */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103E893: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103E8A8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103E8A8u);

    goto L_1103E8A8;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103E8A8:
    edx = MEM32(esp + 0x8); /* 0x1103E8A8: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103E8AC: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x28)); /* 0x1103E8AF: mov ecx, dword ptr [edx - 0x28] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103E8B2: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103E8B4: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11043628u; /* 0x1103E8B9: mov eax, 0x11043628 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103E8BE: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103E8D3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103E8D3u);

    goto L_1103E8D3;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103E8D3:
    edx = MEM32(esp + 0x8); /* 0x1103E8D3: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103E8D7: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x28)); /* 0x1103E8DA: mov ecx, dword ptr [edx - 0x28] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103E8DD: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103E8DF: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x110435C0u; /* 0x1103E8E4: mov eax, 0x110435c0 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103E8E9: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103E8F6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103E8F6u);

    goto L_1103E8F6;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103E8F6:
    edx = MEM32(esp + 0x8); /* 0x1103E8F6: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103E8FA: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x30)); /* 0x1103E8FD: mov ecx, dword ptr [edx - 0x30] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103E900: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103E902: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x110445C8u; /* 0x1103E907: mov eax, 0x110445c8 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103E90C: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103E919(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103E919u);

    goto L_1103E919;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103E919:
    edx = MEM32(esp + 0x8); /* 0x1103E919: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103E91D: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x24)); /* 0x1103E920: mov ecx, dword ptr [edx - 0x24] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103E923: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103E925: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11044824u; /* 0x1103E92A: mov eax, 0x11044824 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103E92F: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103E944(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103E944u);

    goto L_1103E944;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103E944:
    edx = MEM32(esp + 0x8); /* 0x1103E944: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103E948: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x28)); /* 0x1103E94B: mov ecx, dword ptr [edx - 0x28] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103E94E: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103E950: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11042CD0u; /* 0x1103E955: mov eax, 0x11042cd0 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103E95A: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103E96F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103E96Fu);

    goto L_1103E96F;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103E96F:
    edx = MEM32(esp + 0x8); /* 0x1103E96F: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103E973: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x28)); /* 0x1103E976: mov ecx, dword ptr [edx - 0x28] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103E979: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103E97B: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11044188u; /* 0x1103E980: mov eax, 0x11044188 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103E985: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103E99A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103E99Au);

    goto L_1103E99A;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103E99A:
    edx = MEM32(esp + 0x8); /* 0x1103E99A: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103E99E: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x28)); /* 0x1103E9A1: mov ecx, dword ptr [edx - 0x28] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103E9A4: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103E9A6: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x1104372Cu; /* 0x1103E9AB: mov eax, 0x1104372c */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103E9B0: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103E9C5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103E9C5u);

    goto L_1103E9C5;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103E9C5:
    edx = MEM32(esp + 0x8); /* 0x1103E9C5: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103E9C9: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x28)); /* 0x1103E9CC: mov ecx, dword ptr [edx - 0x28] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103E9CF: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103E9D1: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11042D38u; /* 0x1103E9D6: mov eax, 0x11042d38 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103E9DB: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103E9F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103E9F0u);

    goto L_1103E9F0;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103E9F0:
    edx = MEM32(esp + 0x8); /* 0x1103E9F0: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103E9F4: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x28)); /* 0x1103E9F7: mov ecx, dword ptr [edx - 0x28] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103E9FA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103E9FC: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x110441F0u; /* 0x1103EA01: mov eax, 0x110441f0 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103EA06: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103EA1B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103EA1Bu);

    goto L_1103EA1B;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103EA1B:
    edx = MEM32(esp + 0x8); /* 0x1103EA1B: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103EA1F: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x28)); /* 0x1103EA22: mov ecx, dword ptr [edx - 0x28] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103EA25: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103EA27: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11043794u; /* 0x1103EA2C: mov eax, 0x11043794 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103EA31: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103EA4F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103EA4Fu);

    goto L_1103EA4F;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103EA4F:
    edx = MEM32(esp + 0x8); /* 0x1103EA4F: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103EA53: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x1103EA56: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103EA59: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103EA5B: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11041450u; /* 0x1103EA60: mov eax, 0x11041450 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103EA65: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103EA7A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103EA7Au);

    goto L_1103EA7A;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103EA7A:
    edx = MEM32(esp + 0x8); /* 0x1103EA7A: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103EA7E: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x28)); /* 0x1103EA81: mov ecx, dword ptr [edx - 0x28] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103EA84: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103EA86: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11042E08u; /* 0x1103EA8B: mov eax, 0x11042e08 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103EA90: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103EAA5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103EAA5u);

    goto L_1103EAA5;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103EAA5:
    edx = MEM32(esp + 0x8); /* 0x1103EAA5: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103EAA9: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x28)); /* 0x1103EAAC: mov ecx, dword ptr [edx - 0x28] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103EAAF: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103EAB1: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x110442C0u; /* 0x1103EAB6: mov eax, 0x110442c0 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103EABB: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103EAD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103EAD0u);

    goto L_1103EAD0;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103EAD0:
    edx = MEM32(esp + 0x8); /* 0x1103EAD0: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103EAD4: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x28)); /* 0x1103EAD7: mov ecx, dword ptr [edx - 0x28] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103EADA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103EADC: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11043864u; /* 0x1103EAE1: mov eax, 0x11043864 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103EAE6: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103EAF3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103EAF3u);

    goto L_1103EAF3;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103EAF3:
    edx = MEM32(esp + 0x8); /* 0x1103EAF3: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103EAF7: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x24)); /* 0x1103EAFA: mov ecx, dword ptr [edx - 0x24] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103EAFD: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103EAFF: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x110419E8u; /* 0x1103EB04: mov eax, 0x110419e8 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103EB09: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103EB16(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103EB16u);

    goto L_1103EB16;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103EB16:
    edx = MEM32(esp + 0x8); /* 0x1103EB16: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103EB1A: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x24)); /* 0x1103EB1D: mov ecx, dword ptr [edx - 0x24] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103EB20: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103EB22: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11042484u; /* 0x1103EB27: mov eax, 0x11042484 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103EB2C: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103EB39(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103EB39u);

    goto L_1103EB39;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103EB39:
    edx = MEM32(esp + 0x8); /* 0x1103EB39: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103EB3D: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x34)); /* 0x1103EB40: mov ecx, dword ptr [edx - 0x34] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103EB43: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103EB45: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x110446E8u; /* 0x1103EB4A: mov eax, 0x110446e8 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103EB4F: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103EB5C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103EB5Cu);

    goto L_1103EB5C;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103EB5C:
    edx = MEM32(esp + 0x8); /* 0x1103EB5C: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103EB60: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x28)); /* 0x1103EB63: mov ecx, dword ptr [edx - 0x28] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103EB66: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103EB68: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x110447F8u; /* 0x1103EB6D: mov eax, 0x110447f8 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103EB72: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103EB87(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103EB87u);

    goto L_1103EB87;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103EB87:
    edx = MEM32(esp + 0x8); /* 0x1103EB87: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103EB8B: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x28)); /* 0x1103EB8E: mov ecx, dword ptr [edx - 0x28] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103EB91: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103EB93: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11042E70u; /* 0x1103EB98: mov eax, 0x11042e70 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103EB9D: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103EBB2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103EBB2u);

    goto L_1103EBB2;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103EBB2:
    edx = MEM32(esp + 0x8); /* 0x1103EBB2: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103EBB6: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x28)); /* 0x1103EBB9: mov ecx, dword ptr [edx - 0x28] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103EBBC: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103EBBE: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11044328u; /* 0x1103EBC3: mov eax, 0x11044328 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103EBC8: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103EBDD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103EBDDu);

    goto L_1103EBDD;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103EBDD:
    edx = MEM32(esp + 0x8); /* 0x1103EBDD: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103EBE1: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x28)); /* 0x1103EBE4: mov ecx, dword ptr [edx - 0x28] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103EBE7: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103EBE9: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x110438CCu; /* 0x1103EBEE: mov eax, 0x110438cc */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103EBF3: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103EC08(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103EC08u);

    goto L_1103EC08;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103EC08:
    edx = MEM32(esp + 0x8); /* 0x1103EC08: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103EC0C: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x24)); /* 0x1103EC0F: mov ecx, dword ptr [edx - 0x24] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103EC12: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103EC14: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11042DA0u; /* 0x1103EC19: mov eax, 0x11042da0 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103EC1E: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103EC33(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103EC33u);

    goto L_1103EC33;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103EC33:
    edx = MEM32(esp + 0x8); /* 0x1103EC33: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103EC37: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x24)); /* 0x1103EC3A: mov ecx, dword ptr [edx - 0x24] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103EC3D: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103EC3F: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11044258u; /* 0x1103EC44: mov eax, 0x11044258 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103EC49: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103EC5E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103EC5Eu);

    goto L_1103EC5E;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103EC5E:
    edx = MEM32(esp + 0x8); /* 0x1103EC5E: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103EC62: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x24)); /* 0x1103EC65: mov ecx, dword ptr [edx - 0x24] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103EC68: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103EC6A: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x110437FCu; /* 0x1103EC6F: mov eax, 0x110437fc */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103EC74: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103EC89(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103EC89u);

    goto L_1103EC89;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103EC89:
    edx = MEM32(esp + 0x8); /* 0x1103EC89: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103EC8D: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x30)); /* 0x1103EC90: mov ecx, dword ptr [edx - 0x30] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103EC93: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103EC95: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11043968u; /* 0x1103EC9A: mov eax, 0x11043968 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103EC9F: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103ECAC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103ECACu);

    goto L_1103ECAC;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103ECAC:
    edx = MEM32(esp + 0x8); /* 0x1103ECAC: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103ECB0: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x30)); /* 0x1103ECB3: mov ecx, dword ptr [edx - 0x30] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103ECB6: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103ECB8: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11041F80u; /* 0x1103ECBD: mov eax, 0x11041f80 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103ECC2: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103ECD7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103ECD7u);

    goto L_1103ECD7;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103ECD7:
    edx = MEM32(esp + 0x8); /* 0x1103ECD7: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103ECDB: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x1103ECDE: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103ECE1: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103ECE3: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11042F0Cu; /* 0x1103ECE8: mov eax, 0x11042f0c */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103ECED: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103ECFA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103ECFAu);

    goto L_1103ECFA;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103ECFA:
    edx = MEM32(esp + 0x8); /* 0x1103ECFA: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103ECFE: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x1103ED01: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103ED04: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103ED06: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11041FACu; /* 0x1103ED0B: mov eax, 0x11041fac */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103ED10: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103ED25(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103ED25u);

    goto L_1103ED25;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103ED25:
    edx = MEM32(esp + 0x8); /* 0x1103ED25: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103ED29: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x28)); /* 0x1103ED2C: mov ecx, dword ptr [edx - 0x28] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103ED2F: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103ED31: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11042ED8u; /* 0x1103ED36: mov eax, 0x11042ed8 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103ED3B: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103ED50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103ED50u);

    goto L_1103ED50;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103ED50:
    edx = MEM32(esp + 0x8); /* 0x1103ED50: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103ED54: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x28)); /* 0x1103ED57: mov ecx, dword ptr [edx - 0x28] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103ED5A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103ED5C: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11044390u; /* 0x1103ED61: mov eax, 0x11044390 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103ED66: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103ED7B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103ED7Bu);

    goto L_1103ED7B;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103ED7B:
    edx = MEM32(esp + 0x8); /* 0x1103ED7B: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103ED7F: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x28)); /* 0x1103ED82: mov ecx, dword ptr [edx - 0x28] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103ED85: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103ED87: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11043934u; /* 0x1103ED8C: mov eax, 0x11043934 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103ED91: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103ED9E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103ED9Eu);

    goto L_1103ED9E;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103ED9E:
    edx = MEM32(esp + 0x8); /* 0x1103ED9E: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103EDA2: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x24)); /* 0x1103EDA5: mov ecx, dword ptr [edx - 0x24] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103EDA8: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103EDAA: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11041F54u; /* 0x1103EDAF: mov eax, 0x11041f54 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103EDB4: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103EDC9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103EDC9u);

    goto L_1103EDC9;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103EDC9:
    edx = MEM32(esp + 0x8); /* 0x1103EDC9: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103EDCD: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x44)); /* 0x1103EDD0: mov ecx, dword ptr [edx - 0x44] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103EDD3: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103EDD5: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11044960u; /* 0x1103EDDA: mov eax, 0x11044960 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103EDDF: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103EDF6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103EDF6u);

    goto L_1103EDF6;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103EDF6:
    edx = MEM32(esp + 0x8); /* 0x1103EDF6: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103EDFA: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x1103EDFD: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103EE00: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103EE02: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11044984u; /* 0x1103EE07: mov eax, 0x11044984 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103EE0C: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103EE32(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103EE32u);

    goto L_1103EE32;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103EE32:
    edx = MEM32(esp + 0x8); /* 0x1103EE32: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103EE36: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x1103EE39: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103EE3C: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103EE3E: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11044A08u; /* 0x1103EE43: mov eax, 0x11044a08 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103EE48: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103EE55(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103EE55u);

    goto L_1103EE55;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103EE55:
    edx = MEM32(esp + 0x8); /* 0x1103EE55: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103EE59: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x30)); /* 0x1103EE5C: mov ecx, dword ptr [edx - 0x30] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103EE5F: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103EE61: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x1103EE66: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103EE69: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103EE6B: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11044A60u; /* 0x1103EE70: mov eax, 0x11044a60 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103EE75: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103EE82(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103EE82u);

    goto L_1103EE82;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103EE82:
    edx = MEM32(esp + 0x8); /* 0x1103EE82: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103EE86: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x40)); /* 0x1103EE89: mov ecx, dword ptr [edx - 0x40] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103EE8C: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103EE8E: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x1103EE93: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103EE96: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103EE98: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11044A34u; /* 0x1103EE9D: mov eax, 0x11044a34 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103EEA2: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103EEAF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103EEAFu);

    goto L_1103EEAF;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103EEAF:
    edx = MEM32(esp + 0x8); /* 0x1103EEAF: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103EEB3: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x38)); /* 0x1103EEB6: mov ecx, dword ptr [edx - 0x38] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103EEB9: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103EEBB: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x1103EEC0: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103EEC3: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103EEC5: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11044A8Cu; /* 0x1103EECA: mov eax, 0x11044a8c */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103EECF: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103EEDC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103EEDCu);

    goto L_1103EEDC;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103EEDC:
    edx = MEM32(esp + 0x8); /* 0x1103EEDC: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103EEE0: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x280)); /* 0x1103EEE3: mov ecx, dword ptr [edx - 0x280] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103EEE9: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103EEEB: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x1103EEF0: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103EEF3: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103EEF5: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11044AB8u; /* 0x1103EEFA: mov eax, 0x11044ab8 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103EEFF: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103EF0C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103EF0Cu);

    goto L_1103EF0C;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103EF0C:
    edx = MEM32(esp + 0x8); /* 0x1103EF0C: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103EF10: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x5C)); /* 0x1103EF13: mov ecx, dword ptr [edx - 0x5c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103EF16: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103EF18: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x1103EF1D: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103EF20: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103EF22: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11044AE4u; /* 0x1103EF27: mov eax, 0x11044ae4 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103EF2C: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103EF39(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103EF39u);

    goto L_1103EF39;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103EF39:
    edx = MEM32(esp + 0x8); /* 0x1103EF39: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103EF3D: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x2C)); /* 0x1103EF40: mov ecx, dword ptr [edx - 0x2c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103EF43: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103EF45: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x1103EF4A: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103EF4D: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103EF4F: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11044B10u; /* 0x1103EF54: mov eax, 0x11044b10 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103EF59: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103EF6E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103EF6Eu);

    goto L_1103EF6E;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103EF6E:
    edx = MEM32(esp + 0x8); /* 0x1103EF6E: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103EF72: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x20)); /* 0x1103EF75: mov ecx, dword ptr [edx - 0x20] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103EF78: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103EF7A: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11044B68u; /* 0x1103EF7F: mov eax, 0x11044b68 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103EF84: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103EF89(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103EF89u);

    goto L_1103EF89;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103EF89:
    edx = MEM32(esp + 0x8); /* 0x1103EF89: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103EF8D: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x1103EF90: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103EF93: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103EF95: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11044BC0u; /* 0x1103EF9A: mov eax, 0x11044bc0 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103EF9F: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103EFAC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103EFACu);

    goto L_1103EFAC;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103EFAC:
    edx = MEM32(esp + 0x8); /* 0x1103EFAC: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103EFB0: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x1103EFB3: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103EFB6: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103EFB8: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11044C90u; /* 0x1103EFBD: mov eax, 0x11044c90 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103EFC2: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103EFD1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103EFD1u);

    goto L_1103EFD1;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103EFD1:
    edx = MEM32(esp + 0x8); /* 0x1103EFD1: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103EFD5: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x1103EFD8: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103EFDB: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103EFDD: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11044C64u; /* 0x1103EFE2: mov eax, 0x11044c64 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103EFE7: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103EFF4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103EFF4u);

    goto L_1103EFF4;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103EFF4:
    edx = MEM32(esp + 0x8); /* 0x1103EFF4: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103EFF8: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x24)); /* 0x1103EFFB: mov ecx, dword ptr [edx - 0x24] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103EFFE: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103F000: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11045044u; /* 0x1103F005: mov eax, 0x11045044 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103F00A: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103F019(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103F019u);

    goto L_1103F019;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103F019:
    edx = MEM32(esp + 0x8); /* 0x1103F019: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103F01D: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x48)); /* 0x1103F020: mov ecx, dword ptr [edx - 0x48] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103F023: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103F025: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11044F0Cu; /* 0x1103F02A: mov eax, 0x11044f0c */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103F02F: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103F105(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103F105u);

    goto L_1103F105;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103F105:
    edx = MEM32(esp + 0x8); /* 0x1103F105: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103F109: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x188)); /* 0x1103F10C: mov ecx, dword ptr [edx - 0x188] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103F112: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103F114: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x1103F119: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103F11C: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103F11E: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11044F30u; /* 0x1103F123: mov eax, 0x11044f30 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103F128: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103F12D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103F12Du);

    goto L_1103F12D;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103F12D:
    edx = MEM32(esp + 0x8); /* 0x1103F12D: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103F131: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x44)); /* 0x1103F134: mov ecx, dword ptr [edx - 0x44] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103F137: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103F139: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x1104509Cu; /* 0x1103F13E: mov eax, 0x1104509c */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103F143: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103F148(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103F148u);

    goto L_1103F148;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103F148:
    edx = MEM32(esp + 0x8); /* 0x1103F148: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103F14C: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x44)); /* 0x1103F14F: mov ecx, dword ptr [edx - 0x44] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103F152: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103F154: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11044EE0u; /* 0x1103F159: mov eax, 0x11044ee0 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103F15E: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103F1A3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103F1A3u);

    goto L_1103F1A3;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103F1A3:
    edx = MEM32(esp + 0x8); /* 0x1103F1A3: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103F1A7: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x1C)); /* 0x1103F1AA: mov ecx, dword ptr [edx - 0x1c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103F1AD: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103F1AF: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11044CB4u; /* 0x1103F1B4: mov eax, 0x11044cb4 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103F1B9: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103F1F4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103F1F4u);

    goto L_1103F1F4;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103F1F4:
    edx = MEM32(esp + 0x8); /* 0x1103F1F4: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103F1F8: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xE8)); /* 0x1103F1FB: mov ecx, dword ptr [edx - 0xe8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103F201: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103F203: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x1103F208: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103F20B: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103F20D: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11044FE8u; /* 0x1103F212: mov eax, 0x11044fe8 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103F217: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103F224(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103F224u);

    goto L_1103F224;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103F224:
    edx = MEM32(esp + 0x8); /* 0x1103F224: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103F228: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x50)); /* 0x1103F22B: mov ecx, dword ptr [edx - 0x50] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103F22E: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103F230: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x1103F235: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103F238: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103F23A: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11044E28u; /* 0x1103F23F: mov eax, 0x11044e28 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103F244: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103F251(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103F251u);

    goto L_1103F251;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103F251:
    edx = MEM32(esp + 0x8); /* 0x1103F251: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103F255: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x48)); /* 0x1103F258: mov ecx, dword ptr [edx - 0x48] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103F25B: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103F25D: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x1103F262: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103F265: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103F267: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11044E54u; /* 0x1103F26C: mov eax, 0x11044e54 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103F271: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103F286(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103F286u);

    goto L_1103F286;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103F286:
    edx = MEM32(esp + 0x8); /* 0x1103F286: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103F28A: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x6C)); /* 0x1103F28D: mov ecx, dword ptr [edx - 0x6c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103F290: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103F292: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x1103F297: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103F29A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103F29C: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11044FC4u; /* 0x1103F2A1: mov eax, 0x11044fc4 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103F2A6: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103F2BB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103F2BBu);

    goto L_1103F2BB;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103F2BB:
    edx = MEM32(esp + 0x8); /* 0x1103F2BB: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103F2BF: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x58)); /* 0x1103F2C2: mov ecx, dword ptr [edx - 0x58] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103F2C5: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103F2C7: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x1103F2CC: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103F2CF: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103F2D1: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11044E88u; /* 0x1103F2D6: mov eax, 0x11044e88 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103F2DB: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103F2F9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103F2F9u);

    goto L_1103F2F9;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103F2F9:
    edx = MEM32(esp + 0x8); /* 0x1103F2F9: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103F2FD: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x1103F300: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103F303: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103F305: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11044DFCu; /* 0x1103F30A: mov eax, 0x11044dfc */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103F30F: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103F32D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103F32Du);

    goto L_1103F32D;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103F32D:
    edx = MEM32(esp + 0x8); /* 0x1103F32D: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103F331: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x48)); /* 0x1103F334: mov ecx, dword ptr [edx - 0x48] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103F337: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103F339: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x1103F33E: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103F341: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103F343: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11044DD0u; /* 0x1103F348: mov eax, 0x11044dd0 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103F34D: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103F375(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103F375u);

    goto L_1103F375;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103F375:
    edx = MEM32(esp + 0x8); /* 0x1103F375: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103F379: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x6C)); /* 0x1103F37C: mov ecx, dword ptr [edx - 0x6c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103F37F: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103F381: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x1103F386: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103F389: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103F38B: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x1104519Cu; /* 0x1103F390: mov eax, 0x1104519c */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103F395: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103F46B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103F46Bu);

    goto L_1103F46B;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103F46B:
    edx = MEM32(esp + 0x8); /* 0x1103F46B: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103F46F: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x194)); /* 0x1103F472: mov ecx, dword ptr [edx - 0x194] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103F478: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103F47A: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x1103F47F: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103F482: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103F484: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11045244u; /* 0x1103F489: mov eax, 0x11045244 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103F48E: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103F493(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103F493u);

    goto L_1103F493;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103F493:
    edx = MEM32(esp + 0x8); /* 0x1103F493: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103F497: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x44)); /* 0x1103F49A: mov ecx, dword ptr [edx - 0x44] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103F49D: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103F49F: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x110453B8u; /* 0x1103F4A4: mov eax, 0x110453b8 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103F4A9: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103F4DC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103F4DCu);

    goto L_1103F4DC;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103F4DC:
    edx = MEM32(esp + 0x8); /* 0x1103F4DC: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103F4E0: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x1103F4E3: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103F4E6: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103F4E8: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x110450C0u; /* 0x1103F4ED: mov eax, 0x110450c0 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103F4F2: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103F52D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103F52Du);

    goto L_1103F52D;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103F52D:
    edx = MEM32(esp + 0x8); /* 0x1103F52D: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103F531: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xF0)); /* 0x1103F534: mov ecx, dword ptr [edx - 0xf0] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103F53A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103F53C: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x1103F541: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103F544: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103F546: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11045330u; /* 0x1103F54B: mov eax, 0x11045330 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103F550: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103F55D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103F55Du);

    goto L_1103F55D;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103F55D:
    edx = MEM32(esp + 0x8); /* 0x1103F55D: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103F561: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x44)); /* 0x1103F564: mov ecx, dword ptr [edx - 0x44] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103F567: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103F569: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x1103F56E: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103F571: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103F573: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x110451F4u; /* 0x1103F578: mov eax, 0x110451f4 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103F57D: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103F58A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103F58Au);

    goto L_1103F58A;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103F58A:
    edx = MEM32(esp + 0x8); /* 0x1103F58A: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103F58E: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x3C)); /* 0x1103F591: mov ecx, dword ptr [edx - 0x3c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103F594: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103F596: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x1103F59B: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103F59E: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103F5A0: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11045220u; /* 0x1103F5A5: mov eax, 0x11045220 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103F5AA: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103F5BF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103F5BFu);

    goto L_1103F5BF;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103F5BF:
    edx = MEM32(esp + 0x8); /* 0x1103F5BF: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103F5C3: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x4C)); /* 0x1103F5C6: mov ecx, dword ptr [edx - 0x4c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103F5C9: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103F5CB: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x1103F5D0: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103F5D3: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103F5D5: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x1104530Cu; /* 0x1103F5DA: mov eax, 0x1104530c */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103F5DF: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103F5F4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103F5F4u);

    goto L_1103F5F4;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103F5F4:
    edx = MEM32(esp + 0x8); /* 0x1103F5F4: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103F5F8: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x6C)); /* 0x1103F5FB: mov ecx, dword ptr [edx - 0x6c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103F5FE: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103F600: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x1103F605: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103F608: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103F60A: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x110452D8u; /* 0x1103F60F: mov eax, 0x110452d8 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103F614: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103F632(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103F632u);

    goto L_1103F632;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103F632:
    edx = MEM32(esp + 0x8); /* 0x1103F632: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103F636: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x1103F639: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103F63C: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103F63E: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x110451C8u; /* 0x1103F643: mov eax, 0x110451c8 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103F648: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103F64D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103F64Du);

L_1103F64D:
    MEM32(0x110631EC) = 0x11001630u; /* 0x1103F64D: mov dword ptr [0x110631ec], 0x11001630 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1103F657: ret  */
    RECOMP_REGS_OUT();
}

void sub_1103F658(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103F658u);

L_1103F658:
    MEM32(0x110631F4) = 0x11001630u; /* 0x1103F658: mov dword ptr [0x110631f4], 0x11001630 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1103F662: ret  */
    RECOMP_REGS_OUT();
}

void sub_1103F663(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103F663u);

L_1103F663:
    MEM32(0x110631F0) = 0x11001630u; /* 0x1103F663: mov dword ptr [0x110631f0], 0x11001630 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1103F66D: ret  */
    RECOMP_REGS_OUT();
}

void sub_1103F66E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103F66Eu);

    goto L_1103F66E;
L_11013D05:
    edx = ecx + 0x8; /* 0x11013D05: lea edx, [ecx + 8] */
    eax = MEM32(edx + (-0x8)); /* 0x11013D08: mov eax, dword ptr [edx - 8] */
    PUSH32(esp, edx); /* 0x11013D0B: push edx */
    eax = MEM32(eax + 0x4); /* 0x11013D0C: mov eax, dword ptr [eax + 4] */
    MEM32(eax + edx + (-0x8)) = 0x11001C6Cu; /* 0x11013D0F: mov dword ptr [eax + edx - 8], 0x11001c6c */
    eax = MEM32(edx + (-0x8)); /* 0x11013D17: mov eax, dword ptr [edx - 8] */
    ecx = MEM32(eax + 0x4); /* 0x11013D1A: mov ecx, dword ptr [eax + 4] */
    eax = ecx + (-0x8); /* 0x11013D1D: lea eax, [ecx - 8] */
    MEM32(ecx + edx + (-0xC)) = eax; /* 0x11013D20: mov dword ptr [ecx + edx - 0xc], eax */
    MEM32(edx) = 0x110016C4u; /* 0x11013D24: mov dword ptr [edx], 0x110016c4 */
    RECOMP_CALL(sub_110306AB); /* 0x11013D2A: call 0x110306ab */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11013D2F: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11013D30: ret  */
L_1103F66E:
    ecx = 0x11065F70u; /* 0x1103F66E: mov ecx, 0x11065f70 */
    RECOMP_BACKEDGE();
    goto L_11013D05; /* 0x1103F673: jmp 0x11013d05 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1103F678(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103F678u);

    goto L_1103F678;
L_11013CA2:
    PUSH32(esp, esi); /* 0x11013CA2: push esi */
    esi = ecx; /* 0x11013CA3: mov esi, ecx */
    /* cmp MEM32(esi + 0x50), 0 */ /* 0x11013CA5: cmp dword ptr [esi + 0x50], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x50)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi) = 0x11001C7Cu; /* 0x11013CA9: mov dword ptr [esi], 0x11001c7c */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11013CB6; /* 0x11013CAF: je 0x11013cb6 */
L_11013CB1:
    RECOMP_CALL(sub_11013FBC); /* 0x11013CB1: call 0x11013fbc */
    RECOMP_FLAGS_IN();
L_11013CB6:
    /* cmp MEM8(esi + 0x4C), 0 */ /* 0x11013CB6: cmp byte ptr [esi + 0x4c], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x4C)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11013CC3; /* 0x11013CBA: je 0x11013cc3 */
L_11013CBC:
    ecx = esi; /* 0x11013CBC: mov ecx, esi */
    RECOMP_CALL(sub_110140C4); /* 0x11013CBE: call 0x110140c4 */
    RECOMP_FLAGS_IN();
L_11013CC3:
    ecx = esi; /* 0x11013CC3: mov ecx, esi */
    esi = POP32_VAL(esp); /* 0x11013CC5: pop esi */
    goto L_11013CE7; /* 0x11013CC6: jmp 0x11013ce7 */
L_11013CE7:
    PUSH32(esp, esi); /* 0x11013CE7: push esi */
    esi = MEM32(ecx + 0x34); /* 0x11013CE8: mov esi, dword ptr [ecx + 0x34] */
    MEM32(ecx) = 0x11001C2Cu; /* 0x11013CEB: mov dword ptr [ecx], 0x11001c2c */
    /* test esi, esi */ /* 0x11013CF1: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11013D03; /* 0x11013CF3: je 0x11013d03 */
L_11013CF5:
    ecx = esi; /* 0x11013CF5: mov ecx, esi */
    RECOMP_CALL(sub_1100E431); /* 0x11013CF7: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x11013CFC: push esi */
    RECOMP_CALL(sub_1103B126); /* 0x11013CFD: call 0x1103b126 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11013D02: pop ecx */
L_11013D03:
    esi = POP32_VAL(esp); /* 0x11013D03: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11013D04: ret  */
L_1103F678:
    ecx = 0x11065F18u; /* 0x1103F678: mov ecx, 0x11065f18 */
    RECOMP_BACKEDGE();
    goto L_11013CA2; /* 0x1103F67D: jmp 0x11013ca2 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1103F682(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103F682u);

    goto L_1103F682;
L_1102FF12:
    ecx = 0x110631C0u; /* 0x1102FF12: mov ecx, 0x110631c0 */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1102FF17: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(ecx), _sum = MEM32(ecx) + eax; eax = _old; MEM32(ecx) = _sum; } /* 0x1102FF1A: lock xadd dword ptr [ecx], eax */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NS)) goto L_1102FF39; /* 0x1102FF1E: jns 0x1102ff39 */
L_1102FF20:
    PUSH32(esp, esi); /* 0x1102FF20: push esi */
    esi = 0x11068A08u; /* 0x1102FF21: mov esi, 0x11068a08 */
L_1102FF26:
    PUSH32(esp, esi); /* 0x1102FF26: push esi */
    RECOMP_CALL(sub_11039DD8); /* 0x1102FF27: call 0x11039dd8 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x18u; /* 0x1102FF2C: add esi, 0x18 */
    _flag_k = FK_ADD;
    ecx = POP32_VAL(esp); /* 0x1102FF2F: pop ecx */
    /* cmp esi, 0x11068A68u */ /* 0x1102FF30: cmp esi, 0x11068a68 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x11068A68u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1102FF26; /* 0x1102FF36: jl 0x1102ff26 */
L_1102FF38:
    esi = POP32_VAL(esp); /* 0x1102FF38: pop esi */
L_1102FF39:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102FF39: ret  */
L_1103F682:
    ecx = 0x11065F6Fu; /* 0x1103F682: mov ecx, 0x11065f6f */
    RECOMP_BACKEDGE();
    goto L_1102FF12; /* 0x1103F687: jmp 0x1102ff12 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1103F68C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103F68Cu);

    goto L_1103F68C;
L_11014B0D:
    edx = ecx + 0x18; /* 0x11014B0D: lea edx, [ecx + 0x18] */
    eax = MEM32(edx + (-0x18)); /* 0x11014B10: mov eax, dword ptr [edx - 0x18] */
    PUSH32(esp, edx); /* 0x11014B13: push edx */
    eax = MEM32(eax + 0x4); /* 0x11014B14: mov eax, dword ptr [eax + 4] */
    MEM32(eax + edx + (-0x18)) = 0x11001CE8u; /* 0x11014B17: mov dword ptr [eax + edx - 0x18], 0x11001ce8 */
    eax = MEM32(edx + (-0x18)); /* 0x11014B1F: mov eax, dword ptr [edx - 0x18] */
    ecx = MEM32(eax + 0x4); /* 0x11014B22: mov ecx, dword ptr [eax + 4] */
    eax = ecx + (-0x18); /* 0x11014B25: lea eax, [ecx - 0x18] */
    MEM32(ecx + edx + (-0x1C)) = eax; /* 0x11014B28: mov dword ptr [ecx + edx - 0x1c], eax */
    MEM32(edx) = 0x110016C4u; /* 0x11014B2C: mov dword ptr [edx], 0x110016c4 */
    RECOMP_CALL(sub_110306AB); /* 0x11014B32: call 0x110306ab */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11014B37: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11014B38: ret  */
L_1103F68C:
    ecx = 0x11066028u; /* 0x1103F68C: mov ecx, 0x11066028 */
    RECOMP_BACKEDGE();
    goto L_11014B0D; /* 0x1103F691: jmp 0x11014b0d */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1103F696(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103F696u);

    goto L_1103F696;
L_11013CA2:
    PUSH32(esp, esi); /* 0x11013CA2: push esi */
    esi = ecx; /* 0x11013CA3: mov esi, ecx */
    /* cmp MEM32(esi + 0x50), 0 */ /* 0x11013CA5: cmp dword ptr [esi + 0x50], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x50)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi) = 0x11001C7Cu; /* 0x11013CA9: mov dword ptr [esi], 0x11001c7c */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11013CB6; /* 0x11013CAF: je 0x11013cb6 */
L_11013CB1:
    RECOMP_CALL(sub_11013FBC); /* 0x11013CB1: call 0x11013fbc */
    RECOMP_FLAGS_IN();
L_11013CB6:
    /* cmp MEM8(esi + 0x4C), 0 */ /* 0x11013CB6: cmp byte ptr [esi + 0x4c], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x4C)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11013CC3; /* 0x11013CBA: je 0x11013cc3 */
L_11013CBC:
    ecx = esi; /* 0x11013CBC: mov ecx, esi */
    RECOMP_CALL(sub_110140C4); /* 0x11013CBE: call 0x110140c4 */
    RECOMP_FLAGS_IN();
L_11013CC3:
    ecx = esi; /* 0x11013CC3: mov ecx, esi */
    esi = POP32_VAL(esp); /* 0x11013CC5: pop esi */
    goto L_11013CE7; /* 0x11013CC6: jmp 0x11013ce7 */
L_11013CE7:
    PUSH32(esp, esi); /* 0x11013CE7: push esi */
    esi = MEM32(ecx + 0x34); /* 0x11013CE8: mov esi, dword ptr [ecx + 0x34] */
    MEM32(ecx) = 0x11001C2Cu; /* 0x11013CEB: mov dword ptr [ecx], 0x11001c2c */
    /* test esi, esi */ /* 0x11013CF1: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11013D03; /* 0x11013CF3: je 0x11013d03 */
L_11013CF5:
    ecx = esi; /* 0x11013CF5: mov ecx, esi */
    RECOMP_CALL(sub_1100E431); /* 0x11013CF7: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x11013CFC: push esi */
    RECOMP_CALL(sub_1103B126); /* 0x11013CFD: call 0x1103b126 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11013D02: pop ecx */
L_11013D03:
    esi = POP32_VAL(esp); /* 0x11013D03: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11013D04: ret  */
L_1103F696:
    ecx = 0x11065FD0u; /* 0x1103F696: mov ecx, 0x11065fd0 */
    RECOMP_BACKEDGE();
    goto L_11013CA2; /* 0x1103F69B: jmp 0x11013ca2 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1103F6A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103F6A0u);

    goto L_1103F6A0;
L_1102FF12:
    ecx = 0x110631C0u; /* 0x1102FF12: mov ecx, 0x110631c0 */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1102FF17: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(ecx), _sum = MEM32(ecx) + eax; eax = _old; MEM32(ecx) = _sum; } /* 0x1102FF1A: lock xadd dword ptr [ecx], eax */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NS)) goto L_1102FF39; /* 0x1102FF1E: jns 0x1102ff39 */
L_1102FF20:
    PUSH32(esp, esi); /* 0x1102FF20: push esi */
    esi = 0x11068A08u; /* 0x1102FF21: mov esi, 0x11068a08 */
L_1102FF26:
    PUSH32(esp, esi); /* 0x1102FF26: push esi */
    RECOMP_CALL(sub_11039DD8); /* 0x1102FF27: call 0x11039dd8 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x18u; /* 0x1102FF2C: add esi, 0x18 */
    _flag_k = FK_ADD;
    ecx = POP32_VAL(esp); /* 0x1102FF2F: pop ecx */
    /* cmp esi, 0x11068A68u */ /* 0x1102FF30: cmp esi, 0x11068a68 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x11068A68u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1102FF26; /* 0x1102FF36: jl 0x1102ff26 */
L_1102FF38:
    esi = POP32_VAL(esp); /* 0x1102FF38: pop esi */
L_1102FF39:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102FF39: ret  */
L_1103F6A0:
    ecx = 0x11066027u; /* 0x1103F6A0: mov ecx, 0x11066027 */
    RECOMP_BACKEDGE();
    goto L_1102FF12; /* 0x1103F6A5: jmp 0x1102ff12 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1103F6AA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103F6AAu);

    goto L_1103F6AA;
L_11013D05:
    edx = ecx + 0x8; /* 0x11013D05: lea edx, [ecx + 8] */
    eax = MEM32(edx + (-0x8)); /* 0x11013D08: mov eax, dword ptr [edx - 8] */
    PUSH32(esp, edx); /* 0x11013D0B: push edx */
    eax = MEM32(eax + 0x4); /* 0x11013D0C: mov eax, dword ptr [eax + 4] */
    MEM32(eax + edx + (-0x8)) = 0x11001C6Cu; /* 0x11013D0F: mov dword ptr [eax + edx - 8], 0x11001c6c */
    eax = MEM32(edx + (-0x8)); /* 0x11013D17: mov eax, dword ptr [edx - 8] */
    ecx = MEM32(eax + 0x4); /* 0x11013D1A: mov ecx, dword ptr [eax + 4] */
    eax = ecx + (-0x8); /* 0x11013D1D: lea eax, [ecx - 8] */
    MEM32(ecx + edx + (-0xC)) = eax; /* 0x11013D20: mov dword ptr [ecx + edx - 0xc], eax */
    MEM32(edx) = 0x110016C4u; /* 0x11013D24: mov dword ptr [edx], 0x110016c4 */
    RECOMP_CALL(sub_110306AB); /* 0x11013D2A: call 0x110306ab */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11013D2F: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11013D30: ret  */
L_1103F6AA:
    ecx = 0x110660E8u; /* 0x1103F6AA: mov ecx, 0x110660e8 */
    RECOMP_BACKEDGE();
    goto L_11013D05; /* 0x1103F6AF: jmp 0x11013d05 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1103F6B4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103F6B4u);

    goto L_1103F6B4;
L_11013CA2:
    PUSH32(esp, esi); /* 0x11013CA2: push esi */
    esi = ecx; /* 0x11013CA3: mov esi, ecx */
    /* cmp MEM32(esi + 0x50), 0 */ /* 0x11013CA5: cmp dword ptr [esi + 0x50], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x50)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi) = 0x11001C7Cu; /* 0x11013CA9: mov dword ptr [esi], 0x11001c7c */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11013CB6; /* 0x11013CAF: je 0x11013cb6 */
L_11013CB1:
    RECOMP_CALL(sub_11013FBC); /* 0x11013CB1: call 0x11013fbc */
    RECOMP_FLAGS_IN();
L_11013CB6:
    /* cmp MEM8(esi + 0x4C), 0 */ /* 0x11013CB6: cmp byte ptr [esi + 0x4c], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x4C)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_11013CC3; /* 0x11013CBA: je 0x11013cc3 */
L_11013CBC:
    ecx = esi; /* 0x11013CBC: mov ecx, esi */
    RECOMP_CALL(sub_110140C4); /* 0x11013CBE: call 0x110140c4 */
    RECOMP_FLAGS_IN();
L_11013CC3:
    ecx = esi; /* 0x11013CC3: mov ecx, esi */
    esi = POP32_VAL(esp); /* 0x11013CC5: pop esi */
    goto L_11013CE7; /* 0x11013CC6: jmp 0x11013ce7 */
L_11013CE7:
    PUSH32(esp, esi); /* 0x11013CE7: push esi */
    esi = MEM32(ecx + 0x34); /* 0x11013CE8: mov esi, dword ptr [ecx + 0x34] */
    MEM32(ecx) = 0x11001C2Cu; /* 0x11013CEB: mov dword ptr [ecx], 0x11001c2c */
    /* test esi, esi */ /* 0x11013CF1: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_11013D03; /* 0x11013CF3: je 0x11013d03 */
L_11013CF5:
    ecx = esi; /* 0x11013CF5: mov ecx, esi */
    RECOMP_CALL(sub_1100E431); /* 0x11013CF7: call 0x1100e431 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x11013CFC: push esi */
    RECOMP_CALL(sub_1103B126); /* 0x11013CFD: call 0x1103b126 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x11013D02: pop ecx */
L_11013D03:
    esi = POP32_VAL(esp); /* 0x11013D03: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x11013D04: ret  */
L_1103F6B4:
    ecx = 0x11066090u; /* 0x1103F6B4: mov ecx, 0x11066090 */
    RECOMP_BACKEDGE();
    goto L_11013CA2; /* 0x1103F6B9: jmp 0x11013ca2 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1103F6BE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103F6BEu);

    goto L_1103F6BE;
L_1102FF12:
    ecx = 0x110631C0u; /* 0x1102FF12: mov ecx, 0x110631c0 */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1102FF17: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    { uint32_t _old = MEM32(ecx), _sum = MEM32(ecx) + eax; eax = _old; MEM32(ecx) = _sum; } /* 0x1102FF1A: lock xadd dword ptr [ecx], eax */
    _flag_k = FK_ADD;
    if (/* add result */ recomp_cond(_flag_k, _flag_a, _flag_b, CC_NS)) goto L_1102FF39; /* 0x1102FF1E: jns 0x1102ff39 */
L_1102FF20:
    PUSH32(esp, esi); /* 0x1102FF20: push esi */
    esi = 0x11068A08u; /* 0x1102FF21: mov esi, 0x11068a08 */
L_1102FF26:
    PUSH32(esp, esi); /* 0x1102FF26: push esi */
    RECOMP_CALL(sub_11039DD8); /* 0x1102FF27: call 0x11039dd8 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x18u; /* 0x1102FF2C: add esi, 0x18 */
    _flag_k = FK_ADD;
    ecx = POP32_VAL(esp); /* 0x1102FF2F: pop ecx */
    /* cmp esi, 0x11068A68u */ /* 0x1102FF30: cmp esi, 0x11068a68 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x11068A68u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1102FF26; /* 0x1102FF36: jl 0x1102ff26 */
L_1102FF38:
    esi = POP32_VAL(esp); /* 0x1102FF38: pop esi */
L_1102FF39:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1102FF39: ret  */
L_1103F6BE:
    ecx = 0x1106608Bu; /* 0x1103F6BE: mov ecx, 0x1106608b */
    RECOMP_BACKEDGE();
    goto L_1102FF12; /* 0x1103F6C3: jmp 0x1102ff12 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}
