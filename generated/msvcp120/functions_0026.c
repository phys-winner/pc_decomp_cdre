#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_1103D251(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103D251u);

    goto L_1103D251;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103D251:
    edx = MEM32(esp + 0x8); /* 0x1103D251: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103D255: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x1103D258: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103D25B: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103D25D: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x1104147Cu; /* 0x1103D262: mov eax, 0x1104147c */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103D267: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103D274(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103D274u);

    goto L_1103D274;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103D274:
    edx = MEM32(esp + 0x8); /* 0x1103D274: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103D278: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x48)); /* 0x1103D27B: mov ecx, dword ptr [edx - 0x48] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103D27E: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103D280: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x110413B4u; /* 0x1103D285: mov eax, 0x110413b4 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103D28A: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103D29F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103D29Fu);

    goto L_1103D29F;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103D29F:
    edx = MEM32(esp + 0x8); /* 0x1103D29F: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103D2A3: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x48)); /* 0x1103D2A6: mov ecx, dword ptr [edx - 0x48] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103D2A9: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103D2AB: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x110445FCu; /* 0x1103D2B0: mov eax, 0x110445fc */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103D2B5: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103D2C2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103D2C2u);

    goto L_1103D2C2;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103D2C2:
    edx = MEM32(esp + 0x8); /* 0x1103D2C2: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103D2C6: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x1103D2C9: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103D2CC: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103D2CE: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11044850u; /* 0x1103D2D3: mov eax, 0x11044850 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103D2D8: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103D2F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103D2F0u);

    goto L_1103D2F0;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103D2F0:
    edx = MEM32(esp + 0x8); /* 0x1103D2F0: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103D2F4: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x48)); /* 0x1103D2F7: mov ecx, dword ptr [edx - 0x48] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103D2FA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103D2FC: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x1104471Cu; /* 0x1103D301: mov eax, 0x1104471c */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103D306: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103D313(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103D313u);

    goto L_1103D313;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103D313:
    edx = MEM32(esp + 0x8); /* 0x1103D313: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103D317: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x1103D31A: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103D31D: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103D31F: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11040EA0u; /* 0x1103D324: mov eax, 0x11040ea0 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103D329: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103D346(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103D346u);

    goto L_1103D346;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103D346:
    edx = MEM32(esp + 0x8); /* 0x1103D346: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103D34A: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x3C)); /* 0x1103D34D: mov ecx, dword ptr [edx - 0x3c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103D350: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103D352: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11042568u; /* 0x1103D357: mov eax, 0x11042568 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103D35C: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103D379(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103D379u);

    goto L_1103D379;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103D379:
    edx = MEM32(esp + 0x8); /* 0x1103D379: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103D37D: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x38)); /* 0x1103D380: mov ecx, dword ptr [edx - 0x38] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103D383: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103D385: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x110425D8u; /* 0x1103D38A: mov eax, 0x110425d8 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103D38F: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103D3AC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103D3ACu);

    goto L_1103D3AC;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103D3AC:
    edx = MEM32(esp + 0x8); /* 0x1103D3AC: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103D3B0: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x3C)); /* 0x1103D3B3: mov ecx, dword ptr [edx - 0x3c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103D3B6: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103D3B8: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11042648u; /* 0x1103D3BD: mov eax, 0x11042648 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103D3C2: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103D3DF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103D3DFu);

    goto L_1103D3DF;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103D3DF:
    edx = MEM32(esp + 0x8); /* 0x1103D3DF: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103D3E3: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x38)); /* 0x1103D3E6: mov ecx, dword ptr [edx - 0x38] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103D3E9: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103D3EB: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x110426B8u; /* 0x1103D3F0: mov eax, 0x110426b8 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103D3F5: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103D412(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103D412u);

    goto L_1103D412;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103D412:
    edx = MEM32(esp + 0x8); /* 0x1103D412: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103D416: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x38)); /* 0x1103D419: mov ecx, dword ptr [edx - 0x38] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103D41C: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103D41E: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11042728u; /* 0x1103D423: mov eax, 0x11042728 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103D428: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103D445(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103D445u);

    goto L_1103D445;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103D445:
    edx = MEM32(esp + 0x8); /* 0x1103D445: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103D449: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x38)); /* 0x1103D44C: mov ecx, dword ptr [edx - 0x38] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103D44F: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103D451: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11042798u; /* 0x1103D456: mov eax, 0x11042798 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103D45B: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103D478(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103D478u);

    goto L_1103D478;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103D478:
    edx = MEM32(esp + 0x8); /* 0x1103D478: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103D47C: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x38)); /* 0x1103D47F: mov ecx, dword ptr [edx - 0x38] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103D482: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103D484: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x110428E8u; /* 0x1103D489: mov eax, 0x110428e8 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103D48E: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103D4AB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103D4ABu);

    goto L_1103D4AB;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103D4AB:
    edx = MEM32(esp + 0x8); /* 0x1103D4AB: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103D4AF: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x38)); /* 0x1103D4B2: mov ecx, dword ptr [edx - 0x38] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103D4B5: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103D4B7: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11042958u; /* 0x1103D4BC: mov eax, 0x11042958 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103D4C1: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103D4DE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103D4DEu);

    goto L_1103D4DE;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103D4DE:
    edx = MEM32(esp + 0x8); /* 0x1103D4DE: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103D4E2: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x38)); /* 0x1103D4E5: mov ecx, dword ptr [edx - 0x38] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103D4E8: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103D4EA: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x110429C8u; /* 0x1103D4EF: mov eax, 0x110429c8 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103D4F4: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103D511(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103D511u);

    goto L_1103D511;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103D511:
    edx = MEM32(esp + 0x8); /* 0x1103D511: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103D515: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x38)); /* 0x1103D518: mov ecx, dword ptr [edx - 0x38] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103D51B: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103D51D: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11042A38u; /* 0x1103D522: mov eax, 0x11042a38 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103D527: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103D544(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103D544u);

    goto L_1103D544;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103D544:
    edx = MEM32(esp + 0x8); /* 0x1103D544: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103D548: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x38)); /* 0x1103D54B: mov ecx, dword ptr [edx - 0x38] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103D54E: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103D550: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11042808u; /* 0x1103D555: mov eax, 0x11042808 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103D55A: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103D577(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103D577u);

    goto L_1103D577;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103D577:
    edx = MEM32(esp + 0x8); /* 0x1103D577: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103D57B: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x38)); /* 0x1103D57E: mov ecx, dword ptr [edx - 0x38] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103D581: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103D583: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11042878u; /* 0x1103D588: mov eax, 0x11042878 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103D58D: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103D5AA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103D5AAu);

    goto L_1103D5AA;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103D5AA:
    edx = MEM32(esp + 0x8); /* 0x1103D5AA: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103D5AE: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x38)); /* 0x1103D5B1: mov ecx, dword ptr [edx - 0x38] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103D5B4: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103D5B6: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x110424F8u; /* 0x1103D5BB: mov eax, 0x110424f8 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103D5C0: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103D5D5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103D5D5u);

    goto L_1103D5D5;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103D5D5:
    edx = MEM32(esp + 0x8); /* 0x1103D5D5: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103D5D9: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x28)); /* 0x1103D5DC: mov ecx, dword ptr [edx - 0x28] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103D5DF: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103D5E1: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11042AA4u; /* 0x1103D5E6: mov eax, 0x11042aa4 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103D5EB: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103D608(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103D608u);

    goto L_1103D608;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103D608:
    edx = MEM32(esp + 0x8); /* 0x1103D608: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103D60C: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x3C)); /* 0x1103D60F: mov ecx, dword ptr [edx - 0x3c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103D612: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103D614: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11043A20u; /* 0x1103D619: mov eax, 0x11043a20 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103D61E: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103D63B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103D63Bu);

    goto L_1103D63B;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103D63B:
    edx = MEM32(esp + 0x8); /* 0x1103D63B: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103D63F: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x38)); /* 0x1103D642: mov ecx, dword ptr [edx - 0x38] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103D645: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103D647: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11043A90u; /* 0x1103D64C: mov eax, 0x11043a90 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103D651: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103D66E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103D66Eu);

    goto L_1103D66E;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103D66E:
    edx = MEM32(esp + 0x8); /* 0x1103D66E: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103D672: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x3C)); /* 0x1103D675: mov ecx, dword ptr [edx - 0x3c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103D678: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103D67A: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11043B00u; /* 0x1103D67F: mov eax, 0x11043b00 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103D684: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103D6A1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103D6A1u);

    goto L_1103D6A1;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103D6A1:
    edx = MEM32(esp + 0x8); /* 0x1103D6A1: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103D6A5: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x38)); /* 0x1103D6A8: mov ecx, dword ptr [edx - 0x38] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103D6AB: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103D6AD: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11043B70u; /* 0x1103D6B2: mov eax, 0x11043b70 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103D6B7: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103D6D4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103D6D4u);

    goto L_1103D6D4;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103D6D4:
    edx = MEM32(esp + 0x8); /* 0x1103D6D4: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103D6D8: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x38)); /* 0x1103D6DB: mov ecx, dword ptr [edx - 0x38] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103D6DE: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103D6E0: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11043BE0u; /* 0x1103D6E5: mov eax, 0x11043be0 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103D6EA: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103D707(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103D707u);

    goto L_1103D707;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103D707:
    edx = MEM32(esp + 0x8); /* 0x1103D707: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103D70B: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x38)); /* 0x1103D70E: mov ecx, dword ptr [edx - 0x38] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103D711: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103D713: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11043C50u; /* 0x1103D718: mov eax, 0x11043c50 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103D71D: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103D73A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103D73Au);

    goto L_1103D73A;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103D73A:
    edx = MEM32(esp + 0x8); /* 0x1103D73A: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103D73E: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x38)); /* 0x1103D741: mov ecx, dword ptr [edx - 0x38] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103D744: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103D746: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11043DA0u; /* 0x1103D74B: mov eax, 0x11043da0 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103D750: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103D76D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103D76Du);

    goto L_1103D76D;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103D76D:
    edx = MEM32(esp + 0x8); /* 0x1103D76D: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103D771: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x38)); /* 0x1103D774: mov ecx, dword ptr [edx - 0x38] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103D777: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103D779: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11043E10u; /* 0x1103D77E: mov eax, 0x11043e10 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103D783: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103D7A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103D7A0u);

    goto L_1103D7A0;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103D7A0:
    edx = MEM32(esp + 0x8); /* 0x1103D7A0: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103D7A4: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x38)); /* 0x1103D7A7: mov ecx, dword ptr [edx - 0x38] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103D7AA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103D7AC: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11043E80u; /* 0x1103D7B1: mov eax, 0x11043e80 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103D7B6: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103D7D3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103D7D3u);

    goto L_1103D7D3;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103D7D3:
    edx = MEM32(esp + 0x8); /* 0x1103D7D3: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103D7D7: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x38)); /* 0x1103D7DA: mov ecx, dword ptr [edx - 0x38] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103D7DD: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103D7DF: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11043EF0u; /* 0x1103D7E4: mov eax, 0x11043ef0 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103D7E9: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103D806(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103D806u);

    goto L_1103D806;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103D806:
    edx = MEM32(esp + 0x8); /* 0x1103D806: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103D80A: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x38)); /* 0x1103D80D: mov ecx, dword ptr [edx - 0x38] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103D810: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103D812: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11043CC0u; /* 0x1103D817: mov eax, 0x11043cc0 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103D81C: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103D839(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103D839u);

    goto L_1103D839;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103D839:
    edx = MEM32(esp + 0x8); /* 0x1103D839: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103D83D: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x38)); /* 0x1103D840: mov ecx, dword ptr [edx - 0x38] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103D843: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103D845: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11043D30u; /* 0x1103D84A: mov eax, 0x11043d30 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103D84F: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103D86C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103D86Cu);

    goto L_1103D86C;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103D86C:
    edx = MEM32(esp + 0x8); /* 0x1103D86C: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103D870: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x38)); /* 0x1103D873: mov ecx, dword ptr [edx - 0x38] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103D876: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103D878: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x110439B0u; /* 0x1103D87D: mov eax, 0x110439b0 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103D882: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103D897(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103D897u);

    goto L_1103D897;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103D897:
    edx = MEM32(esp + 0x8); /* 0x1103D897: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103D89B: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x28)); /* 0x1103D89E: mov ecx, dword ptr [edx - 0x28] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103D8A1: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103D8A3: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11043F5Cu; /* 0x1103D8A8: mov eax, 0x11043f5c */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103D8AD: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103D8CA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103D8CAu);

    goto L_1103D8CA;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103D8CA:
    edx = MEM32(esp + 0x8); /* 0x1103D8CA: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103D8CE: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x3C)); /* 0x1103D8D1: mov ecx, dword ptr [edx - 0x3c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103D8D4: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103D8D6: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11042FC4u; /* 0x1103D8DB: mov eax, 0x11042fc4 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103D8E0: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103D8FD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103D8FDu);

    goto L_1103D8FD;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103D8FD:
    edx = MEM32(esp + 0x8); /* 0x1103D8FD: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103D901: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x38)); /* 0x1103D904: mov ecx, dword ptr [edx - 0x38] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103D907: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103D909: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11043034u; /* 0x1103D90E: mov eax, 0x11043034 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103D913: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103D930(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103D930u);

    goto L_1103D930;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103D930:
    edx = MEM32(esp + 0x8); /* 0x1103D930: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103D934: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x3C)); /* 0x1103D937: mov ecx, dword ptr [edx - 0x3c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103D93A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103D93C: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x110430A4u; /* 0x1103D941: mov eax, 0x110430a4 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103D946: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103D963(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103D963u);

    goto L_1103D963;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103D963:
    edx = MEM32(esp + 0x8); /* 0x1103D963: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103D967: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x38)); /* 0x1103D96A: mov ecx, dword ptr [edx - 0x38] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103D96D: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103D96F: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11043114u; /* 0x1103D974: mov eax, 0x11043114 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103D979: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103D996(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103D996u);

    goto L_1103D996;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103D996:
    edx = MEM32(esp + 0x8); /* 0x1103D996: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103D99A: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x38)); /* 0x1103D99D: mov ecx, dword ptr [edx - 0x38] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103D9A0: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103D9A2: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11043184u; /* 0x1103D9A7: mov eax, 0x11043184 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103D9AC: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103D9C9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103D9C9u);

    goto L_1103D9C9;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103D9C9:
    edx = MEM32(esp + 0x8); /* 0x1103D9C9: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103D9CD: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x38)); /* 0x1103D9D0: mov ecx, dword ptr [edx - 0x38] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103D9D3: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103D9D5: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x110431F4u; /* 0x1103D9DA: mov eax, 0x110431f4 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103D9DF: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103D9FC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103D9FCu);

    goto L_1103D9FC;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103D9FC:
    edx = MEM32(esp + 0x8); /* 0x1103D9FC: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103DA00: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x38)); /* 0x1103DA03: mov ecx, dword ptr [edx - 0x38] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103DA06: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103DA08: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11043344u; /* 0x1103DA0D: mov eax, 0x11043344 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103DA12: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103DA2F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103DA2Fu);

    goto L_1103DA2F;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103DA2F:
    edx = MEM32(esp + 0x8); /* 0x1103DA2F: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103DA33: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x38)); /* 0x1103DA36: mov ecx, dword ptr [edx - 0x38] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103DA39: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103DA3B: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x110433B4u; /* 0x1103DA40: mov eax, 0x110433b4 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103DA45: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103DA62(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103DA62u);

    goto L_1103DA62;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103DA62:
    edx = MEM32(esp + 0x8); /* 0x1103DA62: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103DA66: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x38)); /* 0x1103DA69: mov ecx, dword ptr [edx - 0x38] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103DA6C: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103DA6E: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11043424u; /* 0x1103DA73: mov eax, 0x11043424 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103DA78: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103DA95(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103DA95u);

    goto L_1103DA95;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103DA95:
    edx = MEM32(esp + 0x8); /* 0x1103DA95: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103DA99: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x38)); /* 0x1103DA9C: mov ecx, dword ptr [edx - 0x38] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103DA9F: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103DAA1: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11043494u; /* 0x1103DAA6: mov eax, 0x11043494 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103DAAB: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103DAC8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103DAC8u);

    goto L_1103DAC8;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103DAC8:
    edx = MEM32(esp + 0x8); /* 0x1103DAC8: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103DACC: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x38)); /* 0x1103DACF: mov ecx, dword ptr [edx - 0x38] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103DAD2: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103DAD4: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11043264u; /* 0x1103DAD9: mov eax, 0x11043264 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103DADE: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103DAFB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103DAFBu);

    goto L_1103DAFB;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103DAFB:
    edx = MEM32(esp + 0x8); /* 0x1103DAFB: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103DAFF: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x38)); /* 0x1103DB02: mov ecx, dword ptr [edx - 0x38] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103DB05: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103DB07: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x110432D4u; /* 0x1103DB0C: mov eax, 0x110432d4 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103DB11: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103DB2E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103DB2Eu);

    goto L_1103DB2E;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103DB2E:
    edx = MEM32(esp + 0x8); /* 0x1103DB2E: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103DB32: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x38)); /* 0x1103DB35: mov ecx, dword ptr [edx - 0x38] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103DB38: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103DB3A: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11042F54u; /* 0x1103DB3F: mov eax, 0x11042f54 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103DB44: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103DB59(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103DB59u);

    goto L_1103DB59;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103DB59:
    edx = MEM32(esp + 0x8); /* 0x1103DB59: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103DB5D: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x28)); /* 0x1103DB60: mov ecx, dword ptr [edx - 0x28] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103DB63: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103DB65: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11043500u; /* 0x1103DB6A: mov eax, 0x11043500 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103DB6F: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103DB84(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103DB84u);

    goto L_1103DB84;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103DB84:
    edx = MEM32(esp + 0x8); /* 0x1103DB84: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103DB88: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x34)); /* 0x1103DB8B: mov ecx, dword ptr [edx - 0x34] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103DB8E: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103DB90: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x1104154Cu; /* 0x1103DB95: mov eax, 0x1104154c */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103DB9A: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103DBAF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103DBAFu);

    goto L_1103DBAF;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103DBAF:
    edx = MEM32(esp + 0x8); /* 0x1103DBAF: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103DBB3: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x38)); /* 0x1103DBB6: mov ecx, dword ptr [edx - 0x38] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103DBB9: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103DBBB: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x110415B4u; /* 0x1103DBC0: mov eax, 0x110415b4 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103DBC5: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103DBDA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103DBDAu);

    goto L_1103DBDA;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103DBDA:
    edx = MEM32(esp + 0x8); /* 0x1103DBDA: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103DBDE: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x38)); /* 0x1103DBE1: mov ecx, dword ptr [edx - 0x38] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103DBE4: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103DBE6: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x1104161Cu; /* 0x1103DBEB: mov eax, 0x1104161c */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103DBF0: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103DC05(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103DC05u);

    goto L_1103DC05;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103DC05:
    edx = MEM32(esp + 0x8); /* 0x1103DC05: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103DC09: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x38)); /* 0x1103DC0C: mov ecx, dword ptr [edx - 0x38] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103DC0F: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103DC11: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11041684u; /* 0x1103DC16: mov eax, 0x11041684 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103DC1B: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103DC30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103DC30u);

    goto L_1103DC30;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103DC30:
    edx = MEM32(esp + 0x8); /* 0x1103DC30: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103DC34: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x38)); /* 0x1103DC37: mov ecx, dword ptr [edx - 0x38] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103DC3A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103DC3C: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x110417BCu; /* 0x1103DC41: mov eax, 0x110417bc */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103DC46: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103DC5B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103DC5Bu);

    goto L_1103DC5B;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103DC5B:
    edx = MEM32(esp + 0x8); /* 0x1103DC5B: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103DC5F: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x38)); /* 0x1103DC62: mov ecx, dword ptr [edx - 0x38] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103DC65: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103DC67: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11041824u; /* 0x1103DC6C: mov eax, 0x11041824 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103DC71: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103DC86(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103DC86u);

    goto L_1103DC86;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103DC86:
    edx = MEM32(esp + 0x8); /* 0x1103DC86: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103DC8A: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x38)); /* 0x1103DC8D: mov ecx, dword ptr [edx - 0x38] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103DC90: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103DC92: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x1104188Cu; /* 0x1103DC97: mov eax, 0x1104188c */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103DC9C: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103DCA9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103DCA9u);

    goto L_1103DCA9;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103DCA9:
    edx = MEM32(esp + 0x8); /* 0x1103DCA9: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103DCAD: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x2C)); /* 0x1103DCB0: mov ecx, dword ptr [edx - 0x2c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103DCB3: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103DCB5: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11041938u; /* 0x1103DCBA: mov eax, 0x11041938 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103DCBF: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103DCD4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103DCD4u);

    goto L_1103DCD4;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103DCD4:
    edx = MEM32(esp + 0x8); /* 0x1103DCD4: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103DCD8: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x38)); /* 0x1103DCDB: mov ecx, dword ptr [edx - 0x38] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103DCDE: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103DCE0: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x110418F4u; /* 0x1103DCE5: mov eax, 0x110418f4 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103DCEA: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103DCFF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103DCFFu);

    goto L_1103DCFF;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103DCFF:
    edx = MEM32(esp + 0x8); /* 0x1103DCFF: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103DD03: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x38)); /* 0x1103DD06: mov ecx, dword ptr [edx - 0x38] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103DD09: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103DD0B: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x110416ECu; /* 0x1103DD10: mov eax, 0x110416ec */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103DD15: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103DD2A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103DD2Au);

    goto L_1103DD2A;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103DD2A:
    edx = MEM32(esp + 0x8); /* 0x1103DD2A: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103DD2E: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x38)); /* 0x1103DD31: mov ecx, dword ptr [edx - 0x38] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103DD34: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103DD36: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11041754u; /* 0x1103DD3B: mov eax, 0x11041754 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103DD40: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103DD55(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103DD55u);

    goto L_1103DD55;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103DD55:
    edx = MEM32(esp + 0x8); /* 0x1103DD55: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103DD59: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x38)); /* 0x1103DD5C: mov ecx, dword ptr [edx - 0x38] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103DD5F: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103DD61: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x110414E4u; /* 0x1103DD66: mov eax, 0x110414e4 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103DD6B: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103DD80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103DD80u);

    goto L_1103DD80;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103DD80:
    edx = MEM32(esp + 0x8); /* 0x1103DD80: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103DD84: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x38)); /* 0x1103DD87: mov ecx, dword ptr [edx - 0x38] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103DD8A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103DD8C: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x1104207Cu; /* 0x1103DD91: mov eax, 0x1104207c */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103DD96: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103DDAB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103DDABu);

    goto L_1103DDAB;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103DDAB:
    edx = MEM32(esp + 0x8); /* 0x1103DDAB: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103DDAF: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x34)); /* 0x1103DDB2: mov ecx, dword ptr [edx - 0x34] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103DDB5: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103DDB7: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x110420E4u; /* 0x1103DDBC: mov eax, 0x110420e4 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103DDC1: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103DDD6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103DDD6u);

    goto L_1103DDD6;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103DDD6:
    edx = MEM32(esp + 0x8); /* 0x1103DDD6: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103DDDA: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x34)); /* 0x1103DDDD: mov ecx, dword ptr [edx - 0x34] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103DDE0: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103DDE2: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x1104214Cu; /* 0x1103DDE7: mov eax, 0x1104214c */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103DDEC: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103DE01(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103DE01u);

    goto L_1103DE01;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103DE01:
    edx = MEM32(esp + 0x8); /* 0x1103DE01: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103DE05: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x34)); /* 0x1103DE08: mov ecx, dword ptr [edx - 0x34] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103DE0B: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103DE0D: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x110421B4u; /* 0x1103DE12: mov eax, 0x110421b4 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103DE17: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103DE2C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103DE2Cu);

    goto L_1103DE2C;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103DE2C:
    edx = MEM32(esp + 0x8); /* 0x1103DE2C: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103DE30: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x34)); /* 0x1103DE33: mov ecx, dword ptr [edx - 0x34] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103DE36: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103DE38: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x110422ECu; /* 0x1103DE3D: mov eax, 0x110422ec */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103DE42: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103DE57(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103DE57u);

    goto L_1103DE57;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103DE57:
    edx = MEM32(esp + 0x8); /* 0x1103DE57: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103DE5B: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x34)); /* 0x1103DE5E: mov ecx, dword ptr [edx - 0x34] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103DE61: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103DE63: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11042354u; /* 0x1103DE68: mov eax, 0x11042354 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103DE6D: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103DE82(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103DE82u);

    goto L_1103DE82;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103DE82:
    edx = MEM32(esp + 0x8); /* 0x1103DE82: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103DE86: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x34)); /* 0x1103DE89: mov ecx, dword ptr [edx - 0x34] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103DE8C: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103DE8E: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x110423BCu; /* 0x1103DE93: mov eax, 0x110423bc */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103DE98: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103DEAD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103DEADu);

    goto L_1103DEAD;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103DEAD:
    edx = MEM32(esp + 0x8); /* 0x1103DEAD: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103DEB1: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x34)); /* 0x1103DEB4: mov ecx, dword ptr [edx - 0x34] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103DEB7: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103DEB9: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11042424u; /* 0x1103DEBE: mov eax, 0x11042424 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103DEC3: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103DED8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103DED8u);

    goto L_1103DED8;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103DED8:
    edx = MEM32(esp + 0x8); /* 0x1103DED8: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103DEDC: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x34)); /* 0x1103DEDF: mov ecx, dword ptr [edx - 0x34] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103DEE2: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103DEE4: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x1104221Cu; /* 0x1103DEE9: mov eax, 0x1104221c */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103DEEE: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103DF03(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103DF03u);

    goto L_1103DF03;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103DF03:
    edx = MEM32(esp + 0x8); /* 0x1103DF03: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103DF07: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x34)); /* 0x1103DF0A: mov ecx, dword ptr [edx - 0x34] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103DF0D: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103DF0F: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11042284u; /* 0x1103DF14: mov eax, 0x11042284 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103DF19: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103DF2E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103DF2Eu);

    goto L_1103DF2E;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103DF2E:
    edx = MEM32(esp + 0x8); /* 0x1103DF2E: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103DF32: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x34)); /* 0x1103DF35: mov ecx, dword ptr [edx - 0x34] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103DF38: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103DF3A: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11042014u; /* 0x1103DF3F: mov eax, 0x11042014 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103DF44: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103DF59(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103DF59u);

    goto L_1103DF59;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103DF59:
    edx = MEM32(esp + 0x8); /* 0x1103DF59: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103DF5D: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x38)); /* 0x1103DF60: mov ecx, dword ptr [edx - 0x38] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103DF63: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103DF65: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11041AB8u; /* 0x1103DF6A: mov eax, 0x11041ab8 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103DF6F: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103DF84(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103DF84u);

    goto L_1103DF84;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103DF84:
    edx = MEM32(esp + 0x8); /* 0x1103DF84: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103DF88: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x34)); /* 0x1103DF8B: mov ecx, dword ptr [edx - 0x34] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103DF8E: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103DF90: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11041B20u; /* 0x1103DF95: mov eax, 0x11041b20 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103DF9A: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103DFAF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103DFAFu);

    goto L_1103DFAF;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103DFAF:
    edx = MEM32(esp + 0x8); /* 0x1103DFAF: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103DFB3: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x34)); /* 0x1103DFB6: mov ecx, dword ptr [edx - 0x34] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103DFB9: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103DFBB: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11041B88u; /* 0x1103DFC0: mov eax, 0x11041b88 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103DFC5: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103DFDA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103DFDAu);

    goto L_1103DFDA;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103DFDA:
    edx = MEM32(esp + 0x8); /* 0x1103DFDA: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103DFDE: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x34)); /* 0x1103DFE1: mov ecx, dword ptr [edx - 0x34] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103DFE4: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103DFE6: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11041BF0u; /* 0x1103DFEB: mov eax, 0x11041bf0 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103DFF0: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103E005(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103E005u);

    goto L_1103E005;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103E005:
    edx = MEM32(esp + 0x8); /* 0x1103E005: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103E009: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x34)); /* 0x1103E00C: mov ecx, dword ptr [edx - 0x34] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103E00F: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103E011: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11041D28u; /* 0x1103E016: mov eax, 0x11041d28 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103E01B: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103E030(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103E030u);

    goto L_1103E030;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103E030:
    edx = MEM32(esp + 0x8); /* 0x1103E030: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103E034: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x34)); /* 0x1103E037: mov ecx, dword ptr [edx - 0x34] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103E03A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103E03C: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11041D90u; /* 0x1103E041: mov eax, 0x11041d90 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103E046: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103E05B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103E05Bu);

    goto L_1103E05B;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103E05B:
    edx = MEM32(esp + 0x8); /* 0x1103E05B: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103E05F: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x34)); /* 0x1103E062: mov ecx, dword ptr [edx - 0x34] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103E065: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103E067: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11041DF8u; /* 0x1103E06C: mov eax, 0x11041df8 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103E071: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103E07E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103E07Eu);

    goto L_1103E07E;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103E07E:
    edx = MEM32(esp + 0x8); /* 0x1103E07E: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103E082: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x2C)); /* 0x1103E085: mov ecx, dword ptr [edx - 0x2c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103E088: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103E08A: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11041EA4u; /* 0x1103E08F: mov eax, 0x11041ea4 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103E094: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103E0A9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103E0A9u);

    goto L_1103E0A9;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103E0A9:
    edx = MEM32(esp + 0x8); /* 0x1103E0A9: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103E0AD: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x34)); /* 0x1103E0B0: mov ecx, dword ptr [edx - 0x34] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103E0B3: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103E0B5: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11041E60u; /* 0x1103E0BA: mov eax, 0x11041e60 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103E0BF: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103E0D4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103E0D4u);

    goto L_1103E0D4;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103E0D4:
    edx = MEM32(esp + 0x8); /* 0x1103E0D4: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103E0D8: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x34)); /* 0x1103E0DB: mov ecx, dword ptr [edx - 0x34] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103E0DE: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103E0E0: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11041C58u; /* 0x1103E0E5: mov eax, 0x11041c58 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103E0EA: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103E0FF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103E0FFu);

    goto L_1103E0FF;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103E0FF:
    edx = MEM32(esp + 0x8); /* 0x1103E0FF: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103E103: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x34)); /* 0x1103E106: mov ecx, dword ptr [edx - 0x34] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103E109: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103E10B: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11041CC0u; /* 0x1103E110: mov eax, 0x11041cc0 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103E115: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103E12A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103E12Au);

    goto L_1103E12A;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103E12A:
    edx = MEM32(esp + 0x8); /* 0x1103E12A: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103E12E: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x34)); /* 0x1103E131: mov ecx, dword ptr [edx - 0x34] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103E134: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103E136: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11041A50u; /* 0x1103E13B: mov eax, 0x11041a50 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103E140: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103E145(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103E145u);

    goto L_1103E145;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103E145:
    edx = MEM32(esp + 0x8); /* 0x1103E145: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103E149: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x1C)); /* 0x1103E14C: mov ecx, dword ptr [edx - 0x1c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103E14F: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103E151: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11044574u; /* 0x1103E156: mov eax, 0x11044574 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103E15B: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103E180(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103E180u);

    goto L_1103E180;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103E180:
    edx = MEM32(esp + 0x8); /* 0x1103E180: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103E184: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x74)); /* 0x1103E187: mov ecx, dword ptr [edx - 0x74] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103E18A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103E18C: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x1103E191: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103E194: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103E196: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x110410BCu; /* 0x1103E19B: mov eax, 0x110410bc */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103E1A0: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103E1C5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103E1C5u);

    goto L_1103E1C5;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103E1C5:
    edx = MEM32(esp + 0x8); /* 0x1103E1C5: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103E1C9: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x74)); /* 0x1103E1CC: mov ecx, dword ptr [edx - 0x74] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103E1CF: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103E1D1: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x1103E1D6: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103E1D9: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103E1DB: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x110413F8u; /* 0x1103E1E0: mov eax, 0x110413f8 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103E1E5: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103E215(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103E215u);

    goto L_1103E215;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103E215:
    edx = MEM32(esp + 0x8); /* 0x1103E215: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103E219: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x48)); /* 0x1103E21C: mov ecx, dword ptr [edx - 0x48] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103E21F: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103E221: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11040EE4u; /* 0x1103E226: mov eax, 0x11040ee4 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103E22B: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103E253(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103E253u);

    goto L_1103E253;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103E253:
    edx = MEM32(esp + 0x8); /* 0x1103E253: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103E257: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x48)); /* 0x1103E25A: mov ecx, dword ptr [edx - 0x48] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103E25D: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103E25F: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11044638u; /* 0x1103E264: mov eax, 0x11044638 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103E269: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103E28E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103E28Eu);

    goto L_1103E28E;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103E28E:
    edx = MEM32(esp + 0x8); /* 0x1103E28E: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103E292: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x7C)); /* 0x1103E295: mov ecx, dword ptr [edx - 0x7c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103E298: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103E29A: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x1103E29F: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103E2A2: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103E2A4: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11041000u; /* 0x1103E2A9: mov eax, 0x11041000 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103E2AE: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103E2D6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103E2D6u);

    goto L_1103E2D6;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103E2D6:
    edx = MEM32(esp + 0x8); /* 0x1103E2D6: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103E2DA: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x8C)); /* 0x1103E2DD: mov ecx, dword ptr [edx - 0x8c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103E2E3: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103E2E5: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x1103E2EA: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103E2ED: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103E2EF: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x110411F4u; /* 0x1103E2F4: mov eax, 0x110411f4 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103E2F9: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103E321(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103E321u);

    goto L_1103E321;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103E321:
    edx = MEM32(esp + 0x8); /* 0x1103E321: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103E325: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x8C)); /* 0x1103E328: mov ecx, dword ptr [edx - 0x8c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103E32E: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103E330: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x1103E335: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103E338: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103E33A: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11041044u; /* 0x1103E33F: mov eax, 0x11041044 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103E344: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103E36F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103E36Fu);

    goto L_1103E36F;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103E36F:
    edx = MEM32(esp + 0x8); /* 0x1103E36F: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103E373: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xA8)); /* 0x1103E376: mov ecx, dword ptr [edx - 0xa8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103E37C: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103E37E: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x1103E383: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103E386: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103E388: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11041388u; /* 0x1103E38D: mov eax, 0x11041388 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103E392: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103E39F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103E39Fu);

    goto L_1103E39F;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103E39F:
    edx = MEM32(esp + 0x8); /* 0x1103E39F: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103E3A3: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x20)); /* 0x1103E3A6: mov ecx, dword ptr [edx - 0x20] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103E3A9: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103E3AB: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x110448D4u; /* 0x1103E3B0: mov eax, 0x110448d4 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103E3B5: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103E3CA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103E3CAu);

    goto L_1103E3CA;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103E3CA:
    edx = MEM32(esp + 0x8); /* 0x1103E3CA: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103E3CE: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x78)); /* 0x1103E3D1: mov ecx, dword ptr [edx - 0x78] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103E3D4: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103E3D6: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x1103E3DB: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103E3DE: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103E3E0: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11040FBCu; /* 0x1103E3E5: mov eax, 0x11040fbc */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103E3EA: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103E3FF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103E3FFu);

    goto L_1103E3FF;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103E3FF:
    edx = MEM32(esp + 0x8); /* 0x1103E3FF: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103E403: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x94)); /* 0x1103E406: mov ecx, dword ptr [edx - 0x94] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103E40C: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103E40E: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x1103E413: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103E416: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103E418: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11041344u; /* 0x1103E41D: mov eax, 0x11041344 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103E422: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103E427(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103E427u);

    goto L_1103E427;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103E427:
    edx = MEM32(esp + 0x8); /* 0x1103E427: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103E42B: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x74)); /* 0x1103E42E: mov ecx, dword ptr [edx - 0x74] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103E431: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103E433: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11040F3Cu; /* 0x1103E438: mov eax, 0x11040f3c */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103E43D: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103E442(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103E442u);

    goto L_1103E442;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103E442:
    edx = MEM32(esp + 0x8); /* 0x1103E442: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103E446: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xA8)); /* 0x1103E449: mov ecx, dword ptr [edx - 0xa8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103E44F: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103E451: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x8)); /* 0x1103E456: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103E459: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103E45B: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x110412C4u; /* 0x1103E460: mov eax, 0x110412c4 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103E465: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103E46A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103E46Au);

    goto L_1103E46A;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103E46A:
    edx = MEM32(esp + 0x8); /* 0x1103E46A: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103E46E: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xA8)); /* 0x1103E471: mov ecx, dword ptr [edx - 0xa8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103E477: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103E479: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x8)); /* 0x1103E47E: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103E481: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103E483: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11041158u; /* 0x1103E488: mov eax, 0x11041158 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103E48D: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103E492(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103E492u);

    goto L_1103E492;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103E492:
    edx = MEM32(esp + 0x8); /* 0x1103E492: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103E496: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x1103E499: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103E49C: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103E49E: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x11044690u; /* 0x1103E4A3: mov eax, 0x11044690 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103E4A8: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1103E4AD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1103E4ADu);

    goto L_1103E4AD;
L_1103B44A:
    { _itail_tgt = (uint32_t)(MEM32(0x1106908C)); goto _ljump; }
L_1103E4AD:
    edx = MEM32(esp + 0x8); /* 0x1103E4AD: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x1103E4B1: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x1103E4B4: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x1103E4B7: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1103B32A); /* 0x1103E4B9: call 0x1103b32a */
    RECOMP_FLAGS_IN();
    eax = 0x110448A8u; /* 0x1103E4BE: mov eax, 0x110448a8 */
    RECOMP_BACKEDGE();
    goto L_1103B44A; /* 0x1103E4C3: jmp 0x1103b44a */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}
