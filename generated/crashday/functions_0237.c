#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_007B5453(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5453u);

L_007B5453:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B5453: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040B2E0; /* 0x007B5456: jmp 0x40b2e0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B2E0: RECOMP_ITAIL(0x0040B2E0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B545B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B545Bu);

L_007B545B:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B545B: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040B340; /* 0x007B545E: jmp 0x40b340 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B340: RECOMP_ITAIL(0x0040B340u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5463(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5463u);

    goto L_007B5463;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B5463:
    edx = MEM32(esp + 0x8); /* 0x007B5463: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B5467: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xC)); /* 0x007B546A: mov ecx, dword ptr [edx - 0xc] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B546D: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B546F: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083EE54u; /* 0x007B5474: mov eax, 0x83ee54 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B5479: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B5480(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5480u);

L_007B5480:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B5480: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040B340; /* 0x007B5483: jmp 0x40b340 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B340: RECOMP_ITAIL(0x0040B340u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5488(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5488u);

L_007B5488:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B5488: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040B2E0; /* 0x007B548B: jmp 0x40b2e0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B2E0: RECOMP_ITAIL(0x0040B2E0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5490(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5490u);

L_007B5490:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B5490: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0060D2A0; /* 0x007B5493: jmp 0x60d2a0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0060D2A0: RECOMP_ITAIL(0x0060D2A0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5498(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5498u);

L_007B5498:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B5498: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x007B549B: add ecx, 8 */
    _flag_k = FK_ADD;
    goto L_00419790; /* 0x007B549E: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B54A3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B54A3u);

    goto L_007B54A3;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B54A3:
    edx = MEM32(esp + 0x8); /* 0x007B54A3: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B54A7: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x007B54AA: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B54AD: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B54AF: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083EE98u; /* 0x007B54B4: mov eax, 0x83ee98 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B54B9: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B54C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B54C0u);

L_007B54C0:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B54C0: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040A000; /* 0x007B54C3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B54C8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B54C8u);

    goto L_007B54C8;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B54C8:
    edx = MEM32(esp + 0x8); /* 0x007B54C8: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B54CC: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x10)); /* 0x007B54CF: mov ecx, dword ptr [edx - 0x10] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B54D2: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B54D4: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083EEDCu; /* 0x007B54D9: mov eax, 0x83eedc */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B54DE: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B54F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B54F0u);

L_007B54F0:
    goto L_00409980; /* 0x007B54F0: jmp 0x409980 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00409980: RECOMP_ITAIL(0x00409980u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B54F5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B54F5u);

L_007B54F5:
    goto L_00409980; /* 0x007B54F5: jmp 0x409980 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00409980: RECOMP_ITAIL(0x00409980u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B54FA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B54FAu);

    goto L_007B54FA;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B54FA:
    edx = MEM32(esp + 0x8); /* 0x007B54FA: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B54FE: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x007B5501: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B5504: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B5506: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083EF08u; /* 0x007B550B: mov eax, 0x83ef08 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B5510: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B5520(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5520u);

    goto L_007B5520;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B5520:
    edx = MEM32(esp + 0x8); /* 0x007B5520: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B5524: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x24)); /* 0x007B5527: mov ecx, dword ptr [edx - 0x24] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B552A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B552C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083EF70u; /* 0x007B5531: mov eax, 0x83ef70 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B5536: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B5540(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5540u);

L_007B5540:
    goto L_00409980; /* 0x007B5540: jmp 0x409980 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00409980: RECOMP_ITAIL(0x00409980u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5545(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5545u);

L_007B5545:
    ecx = MEM32(ebp + 0x8); /* 0x007B5545: mov ecx, dword ptr [ebp + 8] */
    goto L_0040A000; /* 0x007B5548: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B554D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B554Du);

L_007B554D:
    ecx = MEM32(ebp + 0x8); /* 0x007B554D: mov ecx, dword ptr [ebp + 8] */
    goto L_004296F0; /* 0x007B5550: jmp 0x4296f0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_004296F0: RECOMP_ITAIL(0x004296F0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5555(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5555u);

    goto L_007B5555;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B5555:
    edx = MEM32(esp + 0x8); /* 0x007B5555: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B5559: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x007B555C: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B555F: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B5561: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083EFC8u; /* 0x007B5566: mov eax, 0x83efc8 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B556B: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B5570(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5570u);

L_007B5570:
    ecx = ebp + (-0x38); /* 0x007B5570: lea ecx, [ebp - 0x38] */
    goto L_005216E0; /* 0x007B5573: jmp 0x5216e0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005216E0: RECOMP_ITAIL(0x005216E0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5578(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5578u);

L_007B5578:
    ecx = MEM32(ebp + (-0x3C)); /* 0x007B5578: mov ecx, dword ptr [ebp - 0x3c] */
    goto L_0040A000; /* 0x007B557B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5580(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5580u);

L_007B5580:
    ecx = MEM32(ebp + (-0x44)); /* 0x007B5580: mov ecx, dword ptr [ebp - 0x44] */
    goto L_0040A000; /* 0x007B5583: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5588(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5588u);

    goto L_007B5588;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B5588:
    edx = MEM32(esp + 0x8); /* 0x007B5588: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B558C: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x54)); /* 0x007B558F: mov ecx, dword ptr [edx - 0x54] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B5592: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B5594: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x007B5599: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B559C: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B559E: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083F038u; /* 0x007B55A3: mov eax, 0x83f038 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B55A8: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B55B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B55B0u);

L_007B55B0:
    ecx = ebp + (-0x1C); /* 0x007B55B0: lea ecx, [ebp - 0x1c] */
    goto L_00419790; /* 0x007B55B3: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B55B8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B55B8u);

L_007B55B8:
    ecx = ebp + (-0x24); /* 0x007B55B8: lea ecx, [ebp - 0x24] */
    goto L_005218F0; /* 0x007B55BB: jmp 0x5218f0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005218F0: RECOMP_ITAIL(0x005218F0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B55C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B55C0u);

L_007B55C0:
    ecx = ebp + (-0x1C); /* 0x007B55C0: lea ecx, [ebp - 0x1c] */
    goto L_00419790; /* 0x007B55C3: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B55C8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B55C8u);

    goto L_007B55C8;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B55C8:
    edx = MEM32(esp + 0x8); /* 0x007B55C8: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B55CC: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x28)); /* 0x007B55CF: mov ecx, dword ptr [edx - 0x28] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B55D2: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B55D4: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083F0B8u; /* 0x007B55D9: mov eax, 0x83f0b8 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B55DE: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B55F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B55F0u);

    goto L_007B55F0;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B55F0:
    edx = MEM32(esp + 0x8); /* 0x007B55F0: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B55F4: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x34)); /* 0x007B55F7: mov ecx, dword ptr [edx - 0x34] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B55FA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B55FC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083F0F4u; /* 0x007B5601: mov eax, 0x83f0f4 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B5606: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B5610(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5610u);

L_007B5610:
    ecx = ebp + (-0x30); /* 0x007B5610: lea ecx, [ebp - 0x30] */
    goto L_00419790; /* 0x007B5613: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5618(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5618u);

L_007B5618:
    ecx = ebp + (-0x38); /* 0x007B5618: lea ecx, [ebp - 0x38] */
    goto L_005218F0; /* 0x007B561B: jmp 0x5218f0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005218F0: RECOMP_ITAIL(0x005218F0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5620(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5620u);

L_007B5620:
    ecx = ebp + (-0x30); /* 0x007B5620: lea ecx, [ebp - 0x30] */
    goto L_00419790; /* 0x007B5623: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5628(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5628u);

L_007B5628:
    ecx = ebp + (-0x38); /* 0x007B5628: lea ecx, [ebp - 0x38] */
    goto L_005218F0; /* 0x007B562B: jmp 0x5218f0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005218F0: RECOMP_ITAIL(0x005218F0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5630(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5630u);

    goto L_007B5630;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B5630:
    edx = MEM32(esp + 0x8); /* 0x007B5630: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B5634: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x3C)); /* 0x007B5637: mov ecx, dword ptr [edx - 0x3c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B563A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B563C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083F180u; /* 0x007B5641: mov eax, 0x83f180 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B5646: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B5650(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5650u);

L_007B5650:
    goto L_00409980; /* 0x007B5650: jmp 0x409980 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00409980: RECOMP_ITAIL(0x00409980u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5655(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5655u);

L_007B5655:
    ecx = MEM32(ebp + (-0x1C)); /* 0x007B5655: mov ecx, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x007B5658: add ecx, 8 */
    _flag_k = FK_ADD;
    goto L_00419790; /* 0x007B565B: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5660(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5660u);

    goto L_007B5660;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B5660:
    edx = MEM32(esp + 0x8); /* 0x007B5660: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B5664: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x24)); /* 0x007B5667: mov ecx, dword ptr [edx - 0x24] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B566A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B566C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083F230u; /* 0x007B5671: mov eax, 0x83f230 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B5676: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B5680(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5680u);

    goto L_007B5680;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B5680:
    edx = MEM32(esp + 0x8); /* 0x007B5680: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B5684: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x1C)); /* 0x007B5687: mov ecx, dword ptr [edx - 0x1c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B568A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B568C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083F298u; /* 0x007B5691: mov eax, 0x83f298 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B5696: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B56A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B56A0u);

L_007B56A0:
    goto L_00409980; /* 0x007B56A0: jmp 0x409980 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00409980: RECOMP_ITAIL(0x00409980u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B56A5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B56A5u);

L_007B56A5:
    ecx = MEM32(ebp + (-0x18)); /* 0x007B56A5: mov ecx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x007B56A8: add ecx, 8 */
    _flag_k = FK_ADD;
    goto L_00419790; /* 0x007B56AB: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B56B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B56B0u);

    goto L_007B56B0;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B56B0:
    edx = MEM32(esp + 0x8); /* 0x007B56B0: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B56B4: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x20)); /* 0x007B56B7: mov ecx, dword ptr [edx - 0x20] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B56BA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B56BC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083F2F0u; /* 0x007B56C1: mov eax, 0x83f2f0 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B56C6: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B56D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B56D0u);

L_007B56D0:
    ecx = ebp + (-0x28); /* 0x007B56D0: lea ecx, [ebp - 0x28] */
    goto L_00558880; /* 0x007B56D3: jmp 0x558880 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00558880: RECOMP_ITAIL(0x00558880u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B56D8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B56D8u);

L_007B56D8:
    ecx = MEM32(ebp + (-0x30)); /* 0x007B56D8: mov ecx, dword ptr [ebp - 0x30] */
    goto L_0040A000; /* 0x007B56DB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B56E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B56E0u);

L_007B56E0:
    ecx = MEM32(ebp + (-0x2C)); /* 0x007B56E0: mov ecx, dword ptr [ebp - 0x2c] */
    goto L_0040A000; /* 0x007B56E3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B56E8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B56E8u);

L_007B56E8:
    ecx = MEM32(ebp + (-0x2C)); /* 0x007B56E8: mov ecx, dword ptr [ebp - 0x2c] */
    goto L_0040A000; /* 0x007B56EB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B56F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B56F0u);

L_007B56F0:
    ecx = MEM32(ebp + (-0x30)); /* 0x007B56F0: mov ecx, dword ptr [ebp - 0x30] */
    goto L_0040A000; /* 0x007B56F3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B56F8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B56F8u);

    goto L_007B56F8;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B56F8:
    edx = MEM32(esp + 0x8); /* 0x007B56F8: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B56FC: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x34)); /* 0x007B56FF: mov ecx, dword ptr [edx - 0x34] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B5702: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B5704: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x007B5709: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B570C: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B570E: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083F358u; /* 0x007B5713: mov eax, 0x83f358 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B5718: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B5720(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5720u);

L_007B5720:
    ecx = MEM32(ebp + 0x8); /* 0x007B5720: mov ecx, dword ptr [ebp + 8] */
    goto L_0040A000; /* 0x007B5723: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5728(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5728u);

L_007B5728:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B5728: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040A000; /* 0x007B572B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5730(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5730u);

L_007B5730:
    goto L_00409980; /* 0x007B5730: jmp 0x409980 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00409980: RECOMP_ITAIL(0x00409980u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5735(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5735u);

    goto L_007B5735;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B5735:
    edx = MEM32(esp + 0x8); /* 0x007B5735: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B5739: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x007B573C: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B573F: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B5741: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083F3A4u; /* 0x007B5746: mov eax, 0x83f3a4 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B574B: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B5750(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5750u);

L_007B5750:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B5750: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0060EBE0; /* 0x007B5753: jmp 0x60ebe0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0060EBE0: RECOMP_ITAIL(0x0060EBE0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5758(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5758u);

    goto L_007B5758;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B5758:
    edx = MEM32(esp + 0x8); /* 0x007B5758: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B575C: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xC)); /* 0x007B575F: mov ecx, dword ptr [edx - 0xc] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B5762: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B5764: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083F3E0u; /* 0x007B5769: mov eax, 0x83f3e0 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B576E: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B5780(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5780u);

L_007B5780:
    ecx = MEM32(ebp + (-0x6C)); /* 0x007B5780: mov ecx, dword ptr [ebp - 0x6c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x94u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x94u; /* 0x007B5783: add ecx, 0x94 */
    _flag_k = FK_ADD;
    goto L_0040A000; /* 0x007B5789: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B578E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B578Eu);

L_007B578E:
    ecx = MEM32(ebp + (-0x6C)); /* 0x007B578E: mov ecx, dword ptr [ebp - 0x6c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xB0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xB0u; /* 0x007B5791: add ecx, 0xb0 */
    _flag_k = FK_ADD;
    goto L_0040A000; /* 0x007B5797: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B579C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B579Cu);

L_007B579C:
    ecx = MEM32(ebp + (-0x6C)); /* 0x007B579C: mov ecx, dword ptr [ebp - 0x6c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xC8u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xC8u; /* 0x007B579F: add ecx, 0xc8 */
    _flag_k = FK_ADD;
    goto L_0040A000; /* 0x007B57A5: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B57AA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B57AAu);

L_007B57AA:
    ecx = MEM32(ebp + (-0x6C)); /* 0x007B57AA: mov ecx, dword ptr [ebp - 0x6c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xD24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xD24u; /* 0x007B57AD: add ecx, 0xd24 */
    _flag_k = FK_ADD;
    goto L_00610610; /* 0x007B57B3: jmp 0x610610 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00610610: RECOMP_ITAIL(0x00610610u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B57B8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B57B8u);

L_007B57B8:
    PUSH32(esp, 0x004296F0u); /* 0x007B57B8: push 0x4296f0 */
    PUSH32(esp, 6); /* 0x007B57BD: push 6 */
    PUSH32(esp, 0x1434u); /* 0x007B57BF: push 0x1434 */
    eax = MEM32(ebp + (-0x6C)); /* 0x007B57C4: mov eax, dword ptr [ebp - 0x6c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x16A0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x16A0u; /* 0x007B57C7: add eax, 0x16a0 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x007B57CC: push eax */
    RECOMP_CALL(sub_0077F628); /* 0x007B57CD: call 0x77f628 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007B57D2: ret  */
    RECOMP_REGS_OUT();
}

void sub_007B57D3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B57D3u);

L_007B57D3:
    PUSH32(esp, 0x006109D0u); /* 0x007B57D3: push 0x6109d0 */
    PUSH32(esp, 0xA0u); /* 0x007B57D8: push 0xa0 */
    PUSH32(esp, 0x74u); /* 0x007B57DD: push 0x74 */
    eax = MEM32(ebp + (-0x68)); /* 0x007B57DF: mov eax, dword ptr [ebp - 0x68] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x007B57E2: add eax, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x007B57E5: push eax */
    RECOMP_CALL(sub_0077F628); /* 0x007B57E6: call 0x77f628 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007B57EB: ret  */
    RECOMP_REGS_OUT();
}

void sub_007B57EC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B57ECu);

L_007B57EC:
    ecx = MEM32(ebp + (-0x6C)); /* 0x007B57EC: mov ecx, dword ptr [ebp - 0x6c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x8FD8u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x8FD8u; /* 0x007B57EF: add ecx, 0x8fd8 */
    _flag_k = FK_ADD;
    goto L_00610700; /* 0x007B57F5: jmp 0x610700 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00610700: RECOMP_ITAIL(0x00610700u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B57FA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B57FAu);

L_007B57FA:
    PUSH32(esp, 0x00489930u); /* 0x007B57FA: push 0x489930 */
    PUSH32(esp, 0x800u); /* 0x007B57FF: push 0x800 */
    PUSH32(esp, 0x1D4u); /* 0x007B5804: push 0x1d4 */
    eax = MEM32(ebp + (-0x6C)); /* 0x007B5809: mov eax, dword ptr [ebp - 0x6c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xDE88u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xDE88u; /* 0x007B580C: add eax, 0xde88 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x007B5811: push eax */
    RECOMP_CALL(sub_0077F628); /* 0x007B5812: call 0x77f628 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007B5817: ret  */
    RECOMP_REGS_OUT();
}

void sub_007B5818(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5818u);

L_007B5818:
    ecx = MEM32(ebp + (-0x68)); /* 0x007B5818: mov ecx, dword ptr [ebp - 0x68] */
    goto L_006160C0; /* 0x007B581B: jmp 0x6160c0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_006160C0: RECOMP_ITAIL(0x006160C0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5820(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5820u);

L_007B5820:
    ecx = MEM32(ebp + (-0x6C)); /* 0x007B5820: mov ecx, dword ptr [ebp - 0x6c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x003CC79Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x003CC79Cu; /* 0x007B5823: add ecx, 0x3cc79c */
    _flag_k = FK_ADD;
    goto L_006107D0; /* 0x007B5829: jmp 0x6107d0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_006107D0: RECOMP_ITAIL(0x006107D0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B582E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B582Eu);

L_007B582E:
    ecx = MEM32(ebp + (-0x68)); /* 0x007B582E: mov ecx, dword ptr [ebp - 0x68] */
    goto L_0040A000; /* 0x007B5831: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5836(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5836u);

L_007B5836:
    ecx = MEM32(ebp + (-0x60)); /* 0x007B5836: mov ecx, dword ptr [ebp - 0x60] */
    goto L_0040A000; /* 0x007B5839: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B583E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B583Eu);

L_007B583E:
    ecx = MEM32(ebp + (-0x68)); /* 0x007B583E: mov ecx, dword ptr [ebp - 0x68] */
    goto L_0040A000; /* 0x007B5841: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5846(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5846u);

L_007B5846:
    ecx = MEM32(ebp + (-0x60)); /* 0x007B5846: mov ecx, dword ptr [ebp - 0x60] */
    goto L_0040A000; /* 0x007B5849: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B584E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B584Eu);

L_007B584E:
    ecx = MEM32(ebp + (-0x68)); /* 0x007B584E: mov ecx, dword ptr [ebp - 0x68] */
    goto L_0040A000; /* 0x007B5851: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5856(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5856u);

L_007B5856:
    ecx = MEM32(ebp + (-0x60)); /* 0x007B5856: mov ecx, dword ptr [ebp - 0x60] */
    goto L_0040A000; /* 0x007B5859: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B585E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B585Eu);

L_007B585E:
    ecx = ebp + (-0x2C); /* 0x007B585E: lea ecx, [ebp - 0x2c] */
    goto L_0040A000; /* 0x007B5861: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5866(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5866u);

L_007B5866:
    eax = MEM32(ebp + (-0x68)); /* 0x007B5866: mov eax, dword ptr [ebp - 0x68] */
    PUSH32(esp, eax); /* 0x007B5869: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007B586A: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007B5870: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007B5871: ret  */
    RECOMP_REGS_OUT();
}

void sub_007B5872(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5872u);

L_007B5872:
    ecx = MEM32(ebp + (-0x68)); /* 0x007B5872: mov ecx, dword ptr [ebp - 0x68] */
    goto L_0060EBE0; /* 0x007B5875: jmp 0x60ebe0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0060EBE0: RECOMP_ITAIL(0x0060EBE0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B587A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B587Au);

L_007B587A:
    ecx = ebp + (-0x44); /* 0x007B587A: lea ecx, [ebp - 0x44] */
    goto L_0040A000; /* 0x007B587D: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5882(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5882u);

L_007B5882:
    ecx = ebp + (-0x2C); /* 0x007B5882: lea ecx, [ebp - 0x2c] */
    goto L_0040A000; /* 0x007B5885: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B588A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B588Au);

L_007B588A:
    ecx = ebp + (-0x2C); /* 0x007B588A: lea ecx, [ebp - 0x2c] */
    goto L_0040A000; /* 0x007B588D: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5892(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5892u);

L_007B5892:
    ecx = ebp + (-0x44); /* 0x007B5892: lea ecx, [ebp - 0x44] */
    goto L_0040A000; /* 0x007B5895: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B589A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B589Au);

L_007B589A:
    ecx = MEM32(ebp + (-0x68)); /* 0x007B589A: mov ecx, dword ptr [ebp - 0x68] */
    goto L_0040A000; /* 0x007B589D: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B58A2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B58A2u);

L_007B58A2:
    ecx = MEM32(ebp + (-0x60)); /* 0x007B58A2: mov ecx, dword ptr [ebp - 0x60] */
    goto L_0040A000; /* 0x007B58A5: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B58AA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B58AAu);

L_007B58AA:
    ecx = MEM32(ebp + (-0x68)); /* 0x007B58AA: mov ecx, dword ptr [ebp - 0x68] */
    goto L_0040A000; /* 0x007B58AD: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B58B2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B58B2u);

L_007B58B2:
    ecx = MEM32(ebp + (-0x60)); /* 0x007B58B2: mov ecx, dword ptr [ebp - 0x60] */
    goto L_0040A000; /* 0x007B58B5: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B58BA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B58BAu);

    goto L_007B58BA;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B58BA:
    edx = MEM32(esp + 0x8); /* 0x007B58BA: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B58BE: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x70)); /* 0x007B58C1: mov ecx, dword ptr [edx - 0x70] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B58C4: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B58C6: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x8)); /* 0x007B58CB: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B58CE: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B58D0: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083F410u; /* 0x007B58D5: mov eax, 0x83f410 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B58DA: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B58E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B58E0u);

L_007B58E0:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B58E0: mov ecx, dword ptr [ebp - 0x14] */
    goto L_004296F0; /* 0x007B58E3: jmp 0x4296f0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_004296F0: RECOMP_ITAIL(0x004296F0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B58E8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B58E8u);

L_007B58E8:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B58E8: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1D4u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x1D4u; /* 0x007B58EB: add ecx, 0x1d4 */
    _flag_k = FK_ADD;
    goto L_00429680; /* 0x007B58F1: jmp 0x429680 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00429680: RECOMP_ITAIL(0x00429680u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B58F6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B58F6u);

L_007B58F6:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B58F6: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x394u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x394u; /* 0x007B58F9: add ecx, 0x394 */
    _flag_k = FK_ADD;
    goto L_004296F0; /* 0x007B58FF: jmp 0x4296f0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_004296F0: RECOMP_ITAIL(0x004296F0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5904(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5904u);

L_007B5904:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B5904: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x950u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x950u; /* 0x007B5907: add ecx, 0x950 */
    _flag_k = FK_ADD;
    goto L_0040A000; /* 0x007B590D: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5912(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5912u);

    goto L_007B5912;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B5912:
    edx = MEM32(esp + 0x8); /* 0x007B5912: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B5916: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x10)); /* 0x007B5919: mov ecx, dword ptr [edx - 0x10] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B591C: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B591E: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083F5B0u; /* 0x007B5923: mov eax, 0x83f5b0 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B5928: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B5930(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5930u);

L_007B5930:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B5930: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1D4u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x1D4u; /* 0x007B5933: add ecx, 0x1d4 */
    _flag_k = FK_ADD;
    goto L_00429680; /* 0x007B5939: jmp 0x429680 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00429680: RECOMP_ITAIL(0x00429680u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B593E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B593Eu);

L_007B593E:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B593E: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x394u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x394u; /* 0x007B5941: add ecx, 0x394 */
    _flag_k = FK_ADD;
    goto L_004296F0; /* 0x007B5947: jmp 0x4296f0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_004296F0: RECOMP_ITAIL(0x004296F0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B594C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B594Cu);

L_007B594C:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B594C: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x950u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x950u; /* 0x007B594F: add ecx, 0x950 */
    _flag_k = FK_ADD;
    goto L_0040A000; /* 0x007B5955: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B595A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B595Au);

L_007B595A:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B595A: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040A000; /* 0x007B595D: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5962(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5962u);

L_007B5962:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B5962: mov ecx, dword ptr [ebp - 0x14] */
    goto L_004296F0; /* 0x007B5965: jmp 0x4296f0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_004296F0: RECOMP_ITAIL(0x004296F0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B596A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B596Au);

L_007B596A:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B596A: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040A000; /* 0x007B596D: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5972(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5972u);

    goto L_007B5972;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B5972:
    edx = MEM32(esp + 0x8); /* 0x007B5972: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B5976: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x007B5979: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B597C: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B597E: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083F5F4u; /* 0x007B5983: mov eax, 0x83f5f4 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B5988: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B5990(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5990u);

L_007B5990:
    PUSH32(esp, 0x006109D0u); /* 0x007B5990: push 0x6109d0 */
    PUSH32(esp, 0xA0u); /* 0x007B5995: push 0xa0 */
    PUSH32(esp, 0x74u); /* 0x007B599A: push 0x74 */
    eax = MEM32(ebp + (-0x10)); /* 0x007B599C: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x007B599F: add eax, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x007B59A2: push eax */
    RECOMP_CALL(sub_0077F628); /* 0x007B59A3: call 0x77f628 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007B59A8: ret  */
    RECOMP_REGS_OUT();
}

void sub_007B59A9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B59A9u);

    goto L_007B59A9;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B59A9:
    edx = MEM32(esp + 0x8); /* 0x007B59A9: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B59AD: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x8)); /* 0x007B59B0: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B59B3: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B59B5: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083F648u; /* 0x007B59BA: mov eax, 0x83f648 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B59BF: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B59D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B59D0u);

L_007B59D0:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B59D0: mov ecx, dword ptr [ebp - 0x10] */
    goto L_006160C0; /* 0x007B59D3: jmp 0x6160c0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_006160C0: RECOMP_ITAIL(0x006160C0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B59D8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B59D8u);

L_007B59D8:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B59D8: mov ecx, dword ptr [ebp - 0x10] */
    goto L_005DBCB0; /* 0x007B59DB: jmp 0x5dbcb0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005DBCB0: RECOMP_ITAIL(0x005DBCB0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B59E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B59E0u);

L_007B59E0:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B59E0: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x007B59E3: add ecx, 8 */
    _flag_k = FK_ADD;
    goto L_00419790; /* 0x007B59E6: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B59EB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B59EBu);

    goto L_007B59EB;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B59EB:
    edx = MEM32(esp + 0x8); /* 0x007B59EB: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B59EF: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xC)); /* 0x007B59F2: mov ecx, dword ptr [edx - 0xc] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B59F5: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B59F7: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083F674u; /* 0x007B59FC: mov eax, 0x83f674 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B5A01: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B5A10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5A10u);

L_007B5A10:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B5A10: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x007B5A13: add ecx, 4 */
    _flag_k = FK_ADD;
    goto L_0040A000; /* 0x007B5A16: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5A1B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5A1Bu);

L_007B5A1B:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B5A1B: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x20u; /* 0x007B5A1E: add ecx, 0x20 */
    _flag_k = FK_ADD;
    goto L_0040A000; /* 0x007B5A21: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B5A26(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B5A26u);

    goto L_007B5A26;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B5A26:
    edx = MEM32(esp + 0x8); /* 0x007B5A26: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B5A2A: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x8)); /* 0x007B5A2D: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B5A30: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B5A32: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083F6B0u; /* 0x007B5A37: mov eax, 0x83f6b0 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B5A3C: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}
