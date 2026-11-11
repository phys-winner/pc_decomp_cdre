#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_007AD501(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AD501u);

L_007AD501:
    goto L_00409980; /* 0x007AD501: jmp 0x409980 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00409980: RECOMP_ITAIL(0x00409980u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AD506(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AD506u);

L_007AD506:
    ecx = MEM32(ebp + (-0xDC)); /* 0x007AD506: mov ecx, dword ptr [ebp - 0xdc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x18u; /* 0x007AD50C: add ecx, 0x18 */
    _flag_k = FK_ADD;
    goto L_0053C6A0; /* 0x007AD50F: jmp 0x53c6a0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0053C6A0: RECOMP_ITAIL(0x0053C6A0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AD514(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AD514u);

    goto L_007AD514;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007AD514:
    edx = MEM32(esp + 0x8); /* 0x007AD514: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007AD518: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x104)); /* 0x007AD51B: mov ecx, dword ptr [edx - 0x104] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AD521: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AD523: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x007AD528: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AD52B: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AD52D: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00836BF0u; /* 0x007AD532: mov eax, 0x836bf0 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007AD537: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007AD540(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AD540u);

L_007AD540:
    ecx = MEM32(ebp + (-0x10)); /* 0x007AD540: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xCu; /* 0x007AD543: add ecx, 0xc */
    _flag_k = FK_ADD;
    goto L_0040A000; /* 0x007AD546: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AD54B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AD54Bu);

L_007AD54B:
    ecx = MEM32(ebp + (-0x10)); /* 0x007AD54B: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x24u; /* 0x007AD54E: add ecx, 0x24 */
    _flag_k = FK_ADD;
    goto L_0040A000; /* 0x007AD551: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AD556(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AD556u);

L_007AD556:
    ecx = MEM32(ebp + (-0x10)); /* 0x007AD556: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x3Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x3Cu; /* 0x007AD559: add ecx, 0x3c */
    _flag_k = FK_ADD;
    goto L_0040A000; /* 0x007AD55C: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AD561(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AD561u);

    goto L_007AD561;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007AD561:
    edx = MEM32(esp + 0x8); /* 0x007AD561: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007AD565: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x10)); /* 0x007AD568: mov ecx, dword ptr [edx - 0x10] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AD56B: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AD56D: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00836C88u; /* 0x007AD572: mov eax, 0x836c88 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007AD577: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007AD580(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AD580u);

L_007AD580:
    ecx = ebp + (-0x28); /* 0x007AD580: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007AD583: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AD588(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AD588u);

L_007AD588:
    ecx = ebp + (-0x28); /* 0x007AD588: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007AD58B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AD590(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AD590u);

    goto L_007AD590;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007AD590:
    edx = MEM32(esp + 0x8); /* 0x007AD590: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007AD594: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x2C)); /* 0x007AD597: mov ecx, dword ptr [edx - 0x2c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AD59A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AD59C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x007AD5A1: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AD5A4: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AD5A6: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00836CC4u; /* 0x007AD5AB: mov eax, 0x836cc4 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007AD5B0: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007AD5C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AD5C0u);

L_007AD5C0:
    ecx = ebp + (-0x28); /* 0x007AD5C0: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007AD5C3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AD5C8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AD5C8u);

L_007AD5C8:
    ecx = ebp + (-0xB8); /* 0x007AD5C8: lea ecx, [ebp - 0xb8] */
    goto L_0052D890; /* 0x007AD5CE: jmp 0x52d890 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0052D890: RECOMP_ITAIL(0x0052D890u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AD5D3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AD5D3u);

L_007AD5D3:
    ecx = ebp + (-0x40); /* 0x007AD5D3: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x007AD5D6: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AD5DB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AD5DBu);

L_007AD5DB:
    ecx = ebp + (-0x28); /* 0x007AD5DB: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007AD5DE: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AD5E3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AD5E3u);

L_007AD5E3:
    ecx = ebp + (-0x40); /* 0x007AD5E3: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x007AD5E6: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AD5EB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AD5EBu);

L_007AD5EB:
    goto L_00409980; /* 0x007AD5EB: jmp 0x409980 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00409980: RECOMP_ITAIL(0x00409980u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AD5F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AD5F0u);

L_007AD5F0:
    ecx = ebp + (-0x28); /* 0x007AD5F0: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007AD5F3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AD5F8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AD5F8u);

    goto L_007AD5F8;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007AD5F8:
    edx = MEM32(esp + 0x8); /* 0x007AD5F8: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007AD5FC: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xD4)); /* 0x007AD5FF: mov ecx, dword ptr [edx - 0xd4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AD605: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AD607: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x007AD60C: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AD60F: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AD611: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00836CF8u; /* 0x007AD616: mov eax, 0x836cf8 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007AD61B: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007AD620(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AD620u);

L_007AD620:
    ecx = ebp + (-0x28); /* 0x007AD620: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007AD623: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AD628(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AD628u);

L_007AD628:
    ecx = ebp + (-0x78); /* 0x007AD628: lea ecx, [ebp - 0x78] */
    goto L_0053C8D0; /* 0x007AD62B: jmp 0x53c8d0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0053C8D0: RECOMP_ITAIL(0x0053C8D0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AD630(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AD630u);

L_007AD630:
    ecx = ebp + (-0x78); /* 0x007AD630: lea ecx, [ebp - 0x78] */
    goto L_00540E10; /* 0x007AD633: jmp 0x540e10 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00540E10: RECOMP_ITAIL(0x00540E10u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AD638(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AD638u);

L_007AD638:
    ecx = ebp + (-0x40); /* 0x007AD638: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x007AD63B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AD640(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AD640u);

L_007AD640:
    ecx = ebp + (-0x28); /* 0x007AD640: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007AD643: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AD648(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AD648u);

L_007AD648:
    ecx = ebp + (-0x40); /* 0x007AD648: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x007AD64B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AD650(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AD650u);

L_007AD650:
    ecx = MEM32(ebp + (-0xF0)); /* 0x007AD650: mov ecx, dword ptr [ebp - 0xf0] */
    goto L_0040A000; /* 0x007AD656: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AD65B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AD65Bu);

L_007AD65B:
    ecx = ebp + (-0x28); /* 0x007AD65B: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007AD65E: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AD663(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AD663u);

L_007AD663:
    ecx = ebp + (-0x100); /* 0x007AD663: lea ecx, [ebp - 0x100] */
    goto L_005C6270; /* 0x007AD669: jmp 0x5c6270 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005C6270: RECOMP_ITAIL(0x005C6270u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AD66E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AD66Eu);

L_007AD66E:
    ecx = ebp + (-0xEC); /* 0x007AD66E: lea ecx, [ebp - 0xec] */
    goto L_005C8980; /* 0x007AD674: jmp 0x5c8980 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005C8980: RECOMP_ITAIL(0x005C8980u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AD679(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AD679u);

L_007AD679:
    eax = MEM32(ebp + (-0xDC)); /* 0x007AD679: mov eax, dword ptr [ebp - 0xdc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x007AD67F: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007AD69A; /* 0x007AD682: je 0x7ad69a */
L_007AD688:
    _flag_a = (uint32_t)(MEM32(ebp + (-0xDC))); _flag_b = (uint32_t)(0xFFFFFFFEu);
    MEM32(ebp + (-0xDC)) = MEM32(ebp + (-0xDC)) & 0xFFFFFFFEu; /* 0x007AD688: and dword ptr [ebp - 0xdc], 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x158); /* 0x007AD68F: lea ecx, [ebp - 0x158] */
    goto L_005C6270; /* 0x007AD695: jmp 0x5c6270 */
L_007AD69A:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007AD69A: ret  */
    L_005C6270: RECOMP_ITAIL(0x005C6270u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AD69B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AD69Bu);

L_007AD69B:
    eax = MEM32(ebp + (-0xDC)); /* 0x007AD69B: mov eax, dword ptr [ebp - 0xdc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    eax = eax & 2; /* 0x007AD6A1: and eax, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007AD6BC; /* 0x007AD6A4: je 0x7ad6bc */
L_007AD6AA:
    _flag_a = (uint32_t)(MEM32(ebp + (-0xDC))); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ebp + (-0xDC)) = MEM32(ebp + (-0xDC)) & 0xFFFFFFFDu; /* 0x007AD6AA: and dword ptr [ebp - 0xdc], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x138); /* 0x007AD6B1: lea ecx, [ebp - 0x138] */
    goto L_005C6270; /* 0x007AD6B7: jmp 0x5c6270 */
L_007AD6BC:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007AD6BC: ret  */
    L_005C6270: RECOMP_ITAIL(0x005C6270u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AD6BD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AD6BDu);

L_007AD6BD:
    ecx = ebp + (-0x128); /* 0x007AD6BD: lea ecx, [ebp - 0x128] */
    goto L_005C6270; /* 0x007AD6C3: jmp 0x5c6270 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005C6270: RECOMP_ITAIL(0x005C6270u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AD6C8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AD6C8u);

L_007AD6C8:
    ecx = ebp + (-0x148); /* 0x007AD6C8: lea ecx, [ebp - 0x148] */
    goto L_005C6270; /* 0x007AD6CE: jmp 0x5c6270 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005C6270: RECOMP_ITAIL(0x005C6270u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AD6D3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AD6D3u);

L_007AD6D3:
    ecx = ebp + (-0x20); /* 0x007AD6D3: lea ecx, [ebp - 0x20] */
    goto L_005C6270; /* 0x007AD6D6: jmp 0x5c6270 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005C6270: RECOMP_ITAIL(0x005C6270u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AD6DB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AD6DBu);

L_007AD6DB:
    ecx = ebp + (-0x38); /* 0x007AD6DB: lea ecx, [ebp - 0x38] */
    goto L_005C6270; /* 0x007AD6DE: jmp 0x5c6270 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005C6270: RECOMP_ITAIL(0x005C6270u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AD6E3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AD6E3u);

L_007AD6E3:
    ecx = MEM32(ebp + (-0x114)); /* 0x007AD6E3: mov ecx, dword ptr [ebp - 0x114] */
    goto L_0040A000; /* 0x007AD6E9: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AD6EE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AD6EEu);

L_007AD6EE:
    ecx = MEM32(ebp + (-0x10C)); /* 0x007AD6EE: mov ecx, dword ptr [ebp - 0x10c] */
    goto L_0040A000; /* 0x007AD6F4: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AD6F9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AD6F9u);

L_007AD6F9:
    ecx = ebp + (-0xD0); /* 0x007AD6F9: lea ecx, [ebp - 0xd0] */
    goto L_005C7920; /* 0x007AD6FF: jmp 0x5c7920 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005C7920: RECOMP_ITAIL(0x005C7920u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AD704(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AD704u);

L_007AD704:
    ecx = ebp + (-0x78); /* 0x007AD704: lea ecx, [ebp - 0x78] */
    goto L_0053C8D0; /* 0x007AD707: jmp 0x53c8d0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0053C8D0: RECOMP_ITAIL(0x0053C8D0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AD70C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AD70Cu);

L_007AD70C:
    goto L_00409980; /* 0x007AD70C: jmp 0x409980 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00409980: RECOMP_ITAIL(0x00409980u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AD711(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AD711u);

L_007AD711:
    ecx = MEM32(ebp + (-0x104)); /* 0x007AD711: mov ecx, dword ptr [ebp - 0x104] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x18u; /* 0x007AD717: add ecx, 0x18 */
    _flag_k = FK_ADD;
    goto L_0053C6A0; /* 0x007AD71A: jmp 0x53c6a0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0053C6A0: RECOMP_ITAIL(0x0053C6A0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AD71F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AD71Fu);

    goto L_007AD71F;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007AD71F:
    edx = MEM32(esp + 0x8); /* 0x007AD71F: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007AD723: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x15C)); /* 0x007AD726: mov ecx, dword ptr [edx - 0x15c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AD72C: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AD72E: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x007AD733: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AD736: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AD738: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00836D58u; /* 0x007AD73D: mov eax, 0x836d58 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007AD742: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007AD750(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AD750u);

    goto L_007AD750;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007AD750:
    edx = MEM32(esp + 0x8); /* 0x007AD750: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007AD754: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x20)); /* 0x007AD757: mov ecx, dword ptr [edx - 0x20] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AD75A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AD75C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00836E48u; /* 0x007AD761: mov eax, 0x836e48 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007AD766: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007AD770(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AD770u);

L_007AD770:
    ecx = MEM32(ebp + (-0x10)); /* 0x007AD770: mov ecx, dword ptr [ebp - 0x10] */
    goto L_005C9380; /* 0x007AD773: jmp 0x5c9380 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005C9380: RECOMP_ITAIL(0x005C9380u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AD778(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AD778u);

L_007AD778:
    ecx = MEM32(ebp + (-0x10)); /* 0x007AD778: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x007AD77B: add ecx, 8 */
    _flag_k = FK_ADD;
    goto L_00419790; /* 0x007AD77E: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AD783(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AD783u);

L_007AD783:
    ecx = MEM32(ebp + (-0x10)); /* 0x007AD783: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040B2E0; /* 0x007AD786: jmp 0x40b2e0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B2E0: RECOMP_ITAIL(0x0040B2E0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AD78B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AD78Bu);

L_007AD78B:
    ecx = MEM32(ebp + (-0x10)); /* 0x007AD78B: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040B340; /* 0x007AD78E: jmp 0x40b340 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B340: RECOMP_ITAIL(0x0040B340u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AD793(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AD793u);

    goto L_007AD793;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007AD793:
    edx = MEM32(esp + 0x8); /* 0x007AD793: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007AD797: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xC)); /* 0x007AD79A: mov ecx, dword ptr [edx - 0xc] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AD79D: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AD79F: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00836EA0u; /* 0x007AD7A4: mov eax, 0x836ea0 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007AD7A9: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007AD7B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AD7B0u);

L_007AD7B0:
    goto L_00409980; /* 0x007AD7B0: jmp 0x409980 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00409980: RECOMP_ITAIL(0x00409980u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AD7B5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AD7B5u);

L_007AD7B5:
    goto L_00409980; /* 0x007AD7B5: jmp 0x409980 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00409980: RECOMP_ITAIL(0x00409980u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AD7BA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AD7BAu);

    goto L_007AD7BA;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007AD7BA:
    edx = MEM32(esp + 0x8); /* 0x007AD7BA: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007AD7BE: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x10)); /* 0x007AD7C1: mov ecx, dword ptr [edx - 0x10] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AD7C4: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AD7C6: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00836EE4u; /* 0x007AD7CB: mov eax, 0x836ee4 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007AD7D0: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007AD7E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AD7E0u);

    goto L_007AD7E0;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007AD7E0:
    edx = MEM32(esp + 0x8); /* 0x007AD7E0: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007AD7E4: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x007AD7E7: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AD7EA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AD7EC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00836F18u; /* 0x007AD7F1: mov eax, 0x836f18 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007AD7F6: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007AD800(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AD800u);

L_007AD800:
    ecx = MEM32(ebp + (-0x10)); /* 0x007AD800: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040B340; /* 0x007AD803: jmp 0x40b340 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B340: RECOMP_ITAIL(0x0040B340u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AD808(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AD808u);

L_007AD808:
    ecx = MEM32(ebp + (-0x10)); /* 0x007AD808: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040B2E0; /* 0x007AD80B: jmp 0x40b2e0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B2E0: RECOMP_ITAIL(0x0040B2E0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AD810(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AD810u);

L_007AD810:
    ecx = MEM32(ebp + (-0x14)); /* 0x007AD810: mov ecx, dword ptr [ebp - 0x14] */
    goto L_005C9380; /* 0x007AD813: jmp 0x5c9380 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005C9380: RECOMP_ITAIL(0x005C9380u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AD818(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AD818u);

L_007AD818:
    ecx = MEM32(ebp + (-0x14)); /* 0x007AD818: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x007AD81B: add ecx, 8 */
    _flag_k = FK_ADD;
    goto L_00419790; /* 0x007AD81E: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AD823(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AD823u);

    goto L_007AD823;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007AD823:
    edx = MEM32(esp + 0x8); /* 0x007AD823: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007AD827: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x007AD82A: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AD82D: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AD82F: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00836F70u; /* 0x007AD834: mov eax, 0x836f70 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007AD839: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007AD840(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AD840u);

    goto L_007AD840;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007AD840:
    edx = MEM32(esp + 0x8); /* 0x007AD840: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007AD844: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x1C)); /* 0x007AD847: mov ecx, dword ptr [edx - 0x1c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AD84A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AD84C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00836FB4u; /* 0x007AD851: mov eax, 0x836fb4 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007AD856: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007AD860(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AD860u);

    goto L_007AD860;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007AD860:
    edx = MEM32(esp + 0x8); /* 0x007AD860: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007AD864: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x1C)); /* 0x007AD867: mov ecx, dword ptr [edx - 0x1c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AD86A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AD86C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083700Cu; /* 0x007AD871: mov eax, 0x83700c */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007AD876: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007AD880(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AD880u);

    goto L_007AD880;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007AD880:
    edx = MEM32(esp + 0x8); /* 0x007AD880: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007AD884: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x20)); /* 0x007AD887: mov ecx, dword ptr [edx - 0x20] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AD88A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AD88C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00837064u; /* 0x007AD891: mov eax, 0x837064 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007AD896: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007AD8A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AD8A0u);

L_007AD8A0:
    goto L_00409980; /* 0x007AD8A0: jmp 0x409980 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00409980: RECOMP_ITAIL(0x00409980u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AD8A5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AD8A5u);

    goto L_007AD8A5;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007AD8A5:
    edx = MEM32(esp + 0x8); /* 0x007AD8A5: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007AD8A9: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x1C)); /* 0x007AD8AC: mov ecx, dword ptr [edx - 0x1c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AD8AF: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AD8B1: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x008370BCu; /* 0x007AD8B6: mov eax, 0x8370bc */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007AD8BB: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007AD8C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AD8C0u);

L_007AD8C0:
    ecx = MEM32(ebp + (-0x14)); /* 0x007AD8C0: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040A000; /* 0x007AD8C3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AD8C8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AD8C8u);

L_007AD8C8:
    ecx = MEM32(ebp + (-0x14)); /* 0x007AD8C8: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x18u; /* 0x007AD8CB: add ecx, 0x18 */
    _flag_k = FK_ADD;
    goto L_005C6270; /* 0x007AD8CE: jmp 0x5c6270 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005C6270: RECOMP_ITAIL(0x005C6270u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AD8D3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AD8D3u);

    goto L_007AD8D3;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007AD8D3:
    edx = MEM32(esp + 0x8); /* 0x007AD8D3: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007AD8D7: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x007AD8DA: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AD8DD: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AD8DF: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00837150u; /* 0x007AD8E4: mov eax, 0x837150 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007AD8E9: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007AD8F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AD8F0u);

L_007AD8F0:
    ecx = MEM32(ebp + 0x8); /* 0x007AD8F0: mov ecx, dword ptr [ebp + 8] */
    goto L_0040A000; /* 0x007AD8F3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AD8F8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AD8F8u);

L_007AD8F8:
    ecx = MEM32(ebp + 0x8); /* 0x007AD8F8: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x18u; /* 0x007AD8FB: add ecx, 0x18 */
    _flag_k = FK_ADD;
    goto L_005C6270; /* 0x007AD8FE: jmp 0x5c6270 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005C6270: RECOMP_ITAIL(0x005C6270u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AD903(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AD903u);

    goto L_007AD903;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007AD903:
    edx = MEM32(esp + 0x8); /* 0x007AD903: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007AD907: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xC)); /* 0x007AD90A: mov ecx, dword ptr [edx - 0xc] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AD90D: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AD90F: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00837184u; /* 0x007AD914: mov eax, 0x837184 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007AD919: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007AD920(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AD920u);

    goto L_007AD920;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007AD920:
    edx = MEM32(esp + 0x8); /* 0x007AD920: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007AD924: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x24)); /* 0x007AD927: mov ecx, dword ptr [edx - 0x24] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AD92A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AD92C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x008371B8u; /* 0x007AD931: mov eax, 0x8371b8 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007AD936: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007AD940(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AD940u);

L_007AD940:
    goto L_00409980; /* 0x007AD940: jmp 0x409980 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00409980: RECOMP_ITAIL(0x00409980u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AD945(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AD945u);

L_007AD945:
    goto L_00409980; /* 0x007AD945: jmp 0x409980 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00409980: RECOMP_ITAIL(0x00409980u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AD94A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AD94Au);

    goto L_007AD94A;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007AD94A:
    edx = MEM32(esp + 0x8); /* 0x007AD94A: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007AD94E: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x007AD951: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AD954: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AD956: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00837244u; /* 0x007AD95B: mov eax, 0x837244 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007AD960: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007AD970(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AD970u);

L_007AD970:
    ecx = MEM32(ebp + (-0x10)); /* 0x007AD970: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040A000; /* 0x007AD973: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AD978(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AD978u);

L_007AD978:
    ecx = MEM32(ebp + (-0x10)); /* 0x007AD978: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x18u; /* 0x007AD97B: add ecx, 0x18 */
    _flag_k = FK_ADD;
    goto L_005C6270; /* 0x007AD97E: jmp 0x5c6270 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005C6270: RECOMP_ITAIL(0x005C6270u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AD983(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AD983u);

    goto L_007AD983;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007AD983:
    edx = MEM32(esp + 0x8); /* 0x007AD983: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007AD987: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x10)); /* 0x007AD98A: mov ecx, dword ptr [edx - 0x10] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AD98D: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AD98F: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x008372ACu; /* 0x007AD994: mov eax, 0x8372ac */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007AD999: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007AD9A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AD9A0u);

L_007AD9A0:
    eax = MEM32(ebp + (-0x10)); /* 0x007AD9A0: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x007AD9A3: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007AD9B8; /* 0x007AD9A6: je 0x7ad9b8 */
L_007AD9AC:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0xFFFFFFFEu);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & 0xFFFFFFFEu; /* 0x007AD9AC: and dword ptr [ebp - 0x10], 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0x14)); /* 0x007AD9B0: mov ecx, dword ptr [ebp - 0x14] */
    goto L_00558880; /* 0x007AD9B3: jmp 0x558880 */
L_007AD9B8:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007AD9B8: ret  */
    L_00558880: RECOMP_ITAIL(0x00558880u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AD9B9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AD9B9u);

    goto L_007AD9B9;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007AD9B9:
    edx = MEM32(esp + 0x8); /* 0x007AD9B9: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007AD9BD: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x007AD9C0: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007AD9C3: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007AD9C5: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x008372E0u; /* 0x007AD9CA: mov eax, 0x8372e0 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007AD9CF: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007AD9E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AD9E0u);

L_007AD9E0:
    eax = MEM32(ebp + (-0x10)); /* 0x007AD9E0: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x007AD9E3: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007AD9F8; /* 0x007AD9E6: je 0x7ad9f8 */
L_007AD9EC:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0xFFFFFFFEu);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & 0xFFFFFFFEu; /* 0x007AD9EC: and dword ptr [ebp - 0x10], 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0x14)); /* 0x007AD9F0: mov ecx, dword ptr [ebp - 0x14] */
    goto L_00558880; /* 0x007AD9F3: jmp 0x558880 */
L_007AD9F8:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007AD9F8: ret  */
    L_00558880: RECOMP_ITAIL(0x00558880u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007AD9F9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007AD9F9u);

    goto L_007AD9F9;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007AD9F9:
    edx = MEM32(esp + 0x8); /* 0x007AD9F9: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007AD9FD: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x007ADA00: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007ADA03: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007ADA05: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083730Cu; /* 0x007ADA0A: mov eax, 0x83730c */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007ADA0F: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007ADA20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007ADA20u);

L_007ADA20:
    eax = MEM32(ebp + (-0x10)); /* 0x007ADA20: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x007ADA23: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007ADA38; /* 0x007ADA26: je 0x7ada38 */
L_007ADA2C:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0xFFFFFFFEu);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & 0xFFFFFFFEu; /* 0x007ADA2C: and dword ptr [ebp - 0x10], 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0x14)); /* 0x007ADA30: mov ecx, dword ptr [ebp - 0x14] */
    goto L_00558880; /* 0x007ADA33: jmp 0x558880 */
L_007ADA38:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007ADA38: ret  */
    L_00558880: RECOMP_ITAIL(0x00558880u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007ADA39(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007ADA39u);

    goto L_007ADA39;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007ADA39:
    edx = MEM32(esp + 0x8); /* 0x007ADA39: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007ADA3D: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x10)); /* 0x007ADA40: mov ecx, dword ptr [edx - 0x10] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007ADA43: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007ADA45: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00837338u; /* 0x007ADA4A: mov eax, 0x837338 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007ADA4F: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007ADA60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007ADA60u);

    goto L_007ADA60;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007ADA60:
    edx = MEM32(esp + 0x8); /* 0x007ADA60: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007ADA64: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x24)); /* 0x007ADA67: mov ecx, dword ptr [edx - 0x24] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007ADA6A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007ADA6C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00837364u; /* 0x007ADA71: mov eax, 0x837364 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007ADA76: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007ADA80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007ADA80u);

    goto L_007ADA80;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007ADA80:
    edx = MEM32(esp + 0x8); /* 0x007ADA80: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007ADA84: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x1C)); /* 0x007ADA87: mov ecx, dword ptr [edx - 0x1c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007ADA8A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007ADA8C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x008373BCu; /* 0x007ADA91: mov eax, 0x8373bc */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007ADA96: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007ADAA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007ADAA0u);

L_007ADAA0:
    goto L_00409980; /* 0x007ADAA0: jmp 0x409980 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00409980: RECOMP_ITAIL(0x00409980u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007ADAA5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007ADAA5u);

L_007ADAA5:
    ecx = MEM32(ebp + 0x8); /* 0x007ADAA5: mov ecx, dword ptr [ebp + 8] */
    goto L_0040A000; /* 0x007ADAA8: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007ADAAD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007ADAADu);

L_007ADAAD:
    ecx = MEM32(ebp + 0x8); /* 0x007ADAAD: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x18u; /* 0x007ADAB0: add ecx, 0x18 */
    _flag_k = FK_ADD;
    goto L_005C6270; /* 0x007ADAB3: jmp 0x5c6270 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005C6270: RECOMP_ITAIL(0x005C6270u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007ADAB8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007ADAB8u);

    goto L_007ADAB8;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007ADAB8:
    edx = MEM32(esp + 0x8); /* 0x007ADAB8: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007ADABC: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x007ADABF: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007ADAC2: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007ADAC4: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00837414u; /* 0x007ADAC9: mov eax, 0x837414 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007ADACE: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007ADAE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007ADAE0u);

L_007ADAE0:
    goto L_00409980; /* 0x007ADAE0: jmp 0x409980 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00409980: RECOMP_ITAIL(0x00409980u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007ADAE5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007ADAE5u);

    goto L_007ADAE5;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007ADAE5:
    edx = MEM32(esp + 0x8); /* 0x007ADAE5: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007ADAE9: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x1C)); /* 0x007ADAEC: mov ecx, dword ptr [edx - 0x1c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007ADAEF: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007ADAF1: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00837484u; /* 0x007ADAF6: mov eax, 0x837484 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007ADAFB: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007ADB00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007ADB00u);

L_007ADB00:
    goto L_00409980; /* 0x007ADB00: jmp 0x409980 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00409980: RECOMP_ITAIL(0x00409980u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007ADB05(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007ADB05u);

    goto L_007ADB05;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007ADB05:
    edx = MEM32(esp + 0x8); /* 0x007ADB05: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007ADB09: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x1C)); /* 0x007ADB0C: mov ecx, dword ptr [edx - 0x1c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007ADB0F: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007ADB11: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x008374E4u; /* 0x007ADB16: mov eax, 0x8374e4 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007ADB1B: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007ADB20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007ADB20u);

    goto L_007ADB20;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007ADB20:
    edx = MEM32(esp + 0x8); /* 0x007ADB20: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007ADB24: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x1C)); /* 0x007ADB27: mov ecx, dword ptr [edx - 0x1c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007ADB2A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007ADB2C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00837544u; /* 0x007ADB31: mov eax, 0x837544 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007ADB36: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007ADB40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007ADB40u);

L_007ADB40:
    goto L_00409980; /* 0x007ADB40: jmp 0x409980 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00409980: RECOMP_ITAIL(0x00409980u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007ADB45(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007ADB45u);

    goto L_007ADB45;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007ADB45:
    edx = MEM32(esp + 0x8); /* 0x007ADB45: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007ADB49: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x007ADB4C: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007ADB4F: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007ADB51: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083759Cu; /* 0x007ADB56: mov eax, 0x83759c */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007ADB5B: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007ADB60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007ADB60u);

L_007ADB60:
    goto L_00409980; /* 0x007ADB60: jmp 0x409980 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00409980: RECOMP_ITAIL(0x00409980u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007ADB65(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007ADB65u);

L_007ADB65:
    ecx = MEM32(ebp + 0x8); /* 0x007ADB65: mov ecx, dword ptr [ebp + 8] */
    goto L_0040A000; /* 0x007ADB68: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007ADB6D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007ADB6Du);

L_007ADB6D:
    ecx = MEM32(ebp + 0x8); /* 0x007ADB6D: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x18u; /* 0x007ADB70: add ecx, 0x18 */
    _flag_k = FK_ADD;
    goto L_005C6270; /* 0x007ADB73: jmp 0x5c6270 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005C6270: RECOMP_ITAIL(0x005C6270u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007ADB78(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007ADB78u);

    goto L_007ADB78;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007ADB78:
    edx = MEM32(esp + 0x8); /* 0x007ADB78: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007ADB7C: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x007ADB7F: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007ADB82: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007ADB84: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x008375FCu; /* 0x007ADB89: mov eax, 0x8375fc */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007ADB8E: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007ADBA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007ADBA0u);

L_007ADBA0:
    ecx = MEM32(ebp + (-0x10)); /* 0x007ADBA0: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xCu; /* 0x007ADBA3: add ecx, 0xc */
    _flag_k = FK_ADD;
    goto L_0040A000; /* 0x007ADBA6: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007ADBAB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007ADBABu);

L_007ADBAB:
    ecx = MEM32(ebp + (-0x10)); /* 0x007ADBAB: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x24u; /* 0x007ADBAE: add ecx, 0x24 */
    _flag_k = FK_ADD;
    goto L_0040A000; /* 0x007ADBB1: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007ADBB6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007ADBB6u);

L_007ADBB6:
    ecx = MEM32(ebp + (-0x10)); /* 0x007ADBB6: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x3Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x3Cu; /* 0x007ADBB9: add ecx, 0x3c */
    _flag_k = FK_ADD;
    goto L_0040A000; /* 0x007ADBBC: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}
