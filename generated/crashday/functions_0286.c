#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_007C5890(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5890u);

L_007C5890:
    ecx = MEM32(ebp + 0x14); /* 0x007C5890: mov ecx, dword ptr [ebp + 0x14] */
    goto L_0040A000; /* 0x007C5893: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C5898(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5898u);

L_007C5898:
    ecx = MEM32(ebp + 0x8); /* 0x007C5898: mov ecx, dword ptr [ebp + 8] */
    goto L_0040A000; /* 0x007C589B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C58A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C58A0u);

L_007C58A0:
    ecx = MEM32(ebp + 0x14); /* 0x007C58A0: mov ecx, dword ptr [ebp + 0x14] */
    goto L_0040A000; /* 0x007C58A3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C58A8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C58A8u);

    goto L_007C58A8;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007C58A8:
    edx = MEM32(esp + 0x8); /* 0x007C58A8: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007C58AC: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xC)); /* 0x007C58AF: mov ecx, dword ptr [edx - 0xc] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007C58B2: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007C58B4: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0084EA70u; /* 0x007C58B9: mov eax, 0x84ea70 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007C58BE: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007C58D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C58D0u);

L_007C58D0:
    ecx = ebp + (-0x28); /* 0x007C58D0: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007C58D3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C58D8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C58D8u);

    goto L_007C58D8;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007C58D8:
    edx = MEM32(esp + 0x8); /* 0x007C58D8: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007C58DC: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x2C)); /* 0x007C58DF: mov ecx, dword ptr [edx - 0x2c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007C58E2: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007C58E4: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0084EAACu; /* 0x007C58E9: mov eax, 0x84eaac */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007C58EE: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007C5900(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5900u);

    goto L_007C5900;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007C5900:
    edx = MEM32(esp + 0x8); /* 0x007C5900: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007C5904: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x007C5907: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007C590A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007C590C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0084EAD8u; /* 0x007C5911: mov eax, 0x84ead8 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007C5916: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007C5920(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5920u);

    goto L_007C5920;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007C5920:
    edx = MEM32(esp + 0x8); /* 0x007C5920: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007C5924: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x1C)); /* 0x007C5927: mov ecx, dword ptr [edx - 0x1c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007C592A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007C592C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0084EB30u; /* 0x007C5931: mov eax, 0x84eb30 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007C5936: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007C5940(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5940u);

L_007C5940:
    goto L_00409980; /* 0x007C5940: jmp 0x409980 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00409980: RECOMP_ITAIL(0x00409980u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C5945(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5945u);

    goto L_007C5945;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007C5945:
    edx = MEM32(esp + 0x8); /* 0x007C5945: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007C5949: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x20)); /* 0x007C594C: mov ecx, dword ptr [edx - 0x20] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007C594F: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007C5951: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0084EB88u; /* 0x007C5956: mov eax, 0x84eb88 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007C595B: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007C5960(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5960u);

L_007C5960:
    ecx = ebp + (-0xAC); /* 0x007C5960: lea ecx, [ebp - 0xac] */
    goto L_006C17D0; /* 0x007C5966: jmp 0x6c17d0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_006C17D0: RECOMP_ITAIL(0x006C17D0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C596B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C596Bu);

L_007C596B:
    ecx = ebp + (-0x148); /* 0x007C596B: lea ecx, [ebp - 0x148] */
    goto L_006C17D0; /* 0x007C5971: jmp 0x6c17d0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_006C17D0: RECOMP_ITAIL(0x006C17D0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C5976(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5976u);

L_007C5976:
    ecx = ebp + (-0x31C); /* 0x007C5976: lea ecx, [ebp - 0x31c] */
    goto L_006C17D0; /* 0x007C597C: jmp 0x6c17d0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_006C17D0: RECOMP_ITAIL(0x006C17D0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C5981(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5981u);

L_007C5981:
    ecx = ebp + (-0x454); /* 0x007C5981: lea ecx, [ebp - 0x454] */
    goto L_006C17D0; /* 0x007C5987: jmp 0x6c17d0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_006C17D0: RECOMP_ITAIL(0x006C17D0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C598C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C598Cu);

L_007C598C:
    ecx = ebp + (-0x280); /* 0x007C598C: lea ecx, [ebp - 0x280] */
    goto L_006C17D0; /* 0x007C5992: jmp 0x6c17d0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_006C17D0: RECOMP_ITAIL(0x006C17D0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C5997(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5997u);

L_007C5997:
    ecx = ebp + (-0x3B8); /* 0x007C5997: lea ecx, [ebp - 0x3b8] */
    goto L_006C17D0; /* 0x007C599D: jmp 0x6c17d0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_006C17D0: RECOMP_ITAIL(0x006C17D0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C59A2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C59A2u);

L_007C59A2:
    ecx = ebp + (-0x1E4); /* 0x007C59A2: lea ecx, [ebp - 0x1e4] */
    goto L_006C17D0; /* 0x007C59A8: jmp 0x6c17d0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_006C17D0: RECOMP_ITAIL(0x006C17D0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C59AD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C59ADu);

    goto L_007C59AD;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007C59AD:
    edx = MEM32(esp + 0x8); /* 0x007C59AD: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007C59B1: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x474)); /* 0x007C59B4: mov ecx, dword ptr [edx - 0x474] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007C59BA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007C59BC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x007C59C1: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007C59C4: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007C59C6: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0084EBE8u; /* 0x007C59CB: mov eax, 0x84ebe8 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007C59D0: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007C59E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C59E0u);

L_007C59E0:
    ecx = ebp + (-0xAC); /* 0x007C59E0: lea ecx, [ebp - 0xac] */
    goto L_006C17D0; /* 0x007C59E6: jmp 0x6c17d0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_006C17D0: RECOMP_ITAIL(0x006C17D0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C59EB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C59EBu);

    goto L_007C59EB;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007C59EB:
    edx = MEM32(esp + 0x8); /* 0x007C59EB: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007C59EF: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xAC)); /* 0x007C59F2: mov ecx, dword ptr [edx - 0xac] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007C59F8: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007C59FA: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x007C59FF: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007C5A02: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007C5A04: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0084EC44u; /* 0x007C5A09: mov eax, 0x84ec44 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007C5A0E: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007C5A20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5A20u);

L_007C5A20:
    ecx = ebp + (-0xAC); /* 0x007C5A20: lea ecx, [ebp - 0xac] */
    goto L_006C17D0; /* 0x007C5A26: jmp 0x6c17d0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_006C17D0: RECOMP_ITAIL(0x006C17D0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C5A2B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5A2Bu);

    goto L_007C5A2B;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007C5A2B:
    edx = MEM32(esp + 0x8); /* 0x007C5A2B: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007C5A2F: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xB8)); /* 0x007C5A32: mov ecx, dword ptr [edx - 0xb8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007C5A38: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007C5A3A: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x007C5A3F: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007C5A42: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007C5A44: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0084EC70u; /* 0x007C5A49: mov eax, 0x84ec70 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007C5A4E: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007C5A60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5A60u);

L_007C5A60:
    ecx = ebp + (-0xAC); /* 0x007C5A60: lea ecx, [ebp - 0xac] */
    goto L_006C17D0; /* 0x007C5A66: jmp 0x6c17d0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_006C17D0: RECOMP_ITAIL(0x006C17D0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C5A6B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5A6Bu);

    goto L_007C5A6B;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007C5A6B:
    edx = MEM32(esp + 0x8); /* 0x007C5A6B: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007C5A6F: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xC4)); /* 0x007C5A72: mov ecx, dword ptr [edx - 0xc4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007C5A78: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007C5A7A: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x007C5A7F: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007C5A82: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007C5A84: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0084EC9Cu; /* 0x007C5A89: mov eax, 0x84ec9c */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007C5A8E: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007C5AA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5AA0u);

L_007C5AA0:
    goto L_00409980; /* 0x007C5AA0: jmp 0x409980 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00409980: RECOMP_ITAIL(0x00409980u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C5AA5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5AA5u);

    goto L_007C5AA5;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007C5AA5:
    edx = MEM32(esp + 0x8); /* 0x007C5AA5: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007C5AA9: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x1C)); /* 0x007C5AAC: mov ecx, dword ptr [edx - 0x1c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007C5AAF: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007C5AB1: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0084ECC8u; /* 0x007C5AB6: mov eax, 0x84ecc8 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007C5ABB: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007C5AC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5AC0u);

L_007C5AC0:
    ecx = ebp + (-0xAC); /* 0x007C5AC0: lea ecx, [ebp - 0xac] */
    goto L_006C17D0; /* 0x007C5AC6: jmp 0x6c17d0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_006C17D0: RECOMP_ITAIL(0x006C17D0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C5ACB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5ACBu);

L_007C5ACB:
    ecx = ebp + (-0xAC); /* 0x007C5ACB: lea ecx, [ebp - 0xac] */
    goto L_006C17D0; /* 0x007C5AD1: jmp 0x6c17d0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_006C17D0: RECOMP_ITAIL(0x006C17D0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C5AD6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5AD6u);

    goto L_007C5AD6;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007C5AD6:
    edx = MEM32(esp + 0x8); /* 0x007C5AD6: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007C5ADA: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xB4)); /* 0x007C5ADD: mov ecx, dword ptr [edx - 0xb4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007C5AE3: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007C5AE5: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x007C5AEA: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007C5AED: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007C5AEF: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0084ED28u; /* 0x007C5AF4: mov eax, 0x84ed28 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007C5AF9: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007C5B00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5B00u);

L_007C5B00:
    ecx = ebp + (-0xAC); /* 0x007C5B00: lea ecx, [ebp - 0xac] */
    goto L_006C17D0; /* 0x007C5B06: jmp 0x6c17d0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_006C17D0: RECOMP_ITAIL(0x006C17D0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C5B0B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5B0Bu);

    goto L_007C5B0B;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007C5B0B:
    edx = MEM32(esp + 0x8); /* 0x007C5B0B: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007C5B0F: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xB4)); /* 0x007C5B12: mov ecx, dword ptr [edx - 0xb4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007C5B18: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007C5B1A: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x007C5B1F: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007C5B22: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007C5B24: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0084ED5Cu; /* 0x007C5B29: mov eax, 0x84ed5c */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007C5B2E: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007C5B40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5B40u);

L_007C5B40:
    ecx = ebp + (-0xD8); /* 0x007C5B40: lea ecx, [ebp - 0xd8] */
    goto L_0043D6D0; /* 0x007C5B46: jmp 0x43d6d0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0043D6D0: RECOMP_ITAIL(0x0043D6D0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C5B4B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5B4Bu);

L_007C5B4B:
    eax = MEM32(ebp + (-0x10)); /* 0x007C5B4B: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x007C5B4E: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007C5B63; /* 0x007C5B51: je 0x7c5b63 */
L_007C5B57:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0xFFFFFFFEu);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & 0xFFFFFFFEu; /* 0x007C5B57: and dword ptr [ebp - 0x10], 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0x14)); /* 0x007C5B5B: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040A000; /* 0x007C5B5E: jmp 0x40a000 */
L_007C5B63:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C5B63: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C5B64(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5B64u);

    goto L_007C5B64;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007C5B64:
    edx = MEM32(esp + 0x8); /* 0x007C5B64: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007C5B68: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xDC)); /* 0x007C5B6B: mov ecx, dword ptr [edx - 0xdc] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007C5B71: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007C5B73: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0084ED88u; /* 0x007C5B78: mov eax, 0x84ed88 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007C5B7D: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007C5B90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5B90u);

L_007C5B90:
    ecx = ebp + (-0xC0); /* 0x007C5B90: lea ecx, [ebp - 0xc0] */
    goto L_0043D6D0; /* 0x007C5B96: jmp 0x43d6d0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0043D6D0: RECOMP_ITAIL(0x0043D6D0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C5B9B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5B9Bu);

    goto L_007C5B9B;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007C5B9B:
    edx = MEM32(esp + 0x8); /* 0x007C5B9B: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007C5B9F: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xBC)); /* 0x007C5BA2: mov ecx, dword ptr [edx - 0xbc] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007C5BA8: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007C5BAA: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0084EDBCu; /* 0x007C5BAF: mov eax, 0x84edbc */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007C5BB4: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007C5BC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5BC0u);

L_007C5BC0:
    ecx = ebp + 0xC; /* 0x007C5BC0: lea ecx, [ebp + 0xc] */
    goto L_0040A000; /* 0x007C5BC3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C5BC8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5BC8u);

L_007C5BC8:
    ecx = MEM32(ebp + (-0x88)); /* 0x007C5BC8: mov ecx, dword ptr [ebp - 0x88] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x14u; /* 0x007C5BCE: add ecx, 0x14 */
    _flag_k = FK_ADD;
    goto L_0040A000; /* 0x007C5BD1: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C5BD6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5BD6u);

L_007C5BD6:
    ecx = MEM32(ebp + (-0x88)); /* 0x007C5BD6: mov ecx, dword ptr [ebp - 0x88] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xA3Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xA3Cu; /* 0x007C5BDC: add ecx, 0xa3c */
    _flag_k = FK_ADD;
    goto L_0040A000; /* 0x007C5BE2: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C5BE7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5BE7u);

L_007C5BE7:
    ecx = MEM32(ebp + (-0x88)); /* 0x007C5BE7: mov ecx, dword ptr [ebp - 0x88] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xA54u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xA54u; /* 0x007C5BED: add ecx, 0xa54 */
    _flag_k = FK_ADD;
    goto L_0040A000; /* 0x007C5BF3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C5BF8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5BF8u);

L_007C5BF8:
    ecx = MEM32(ebp + (-0x68)); /* 0x007C5BF8: mov ecx, dword ptr [ebp - 0x68] */
    goto L_0040A000; /* 0x007C5BFB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C5C00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5C00u);

L_007C5C00:
    ecx = MEM32(ebp + (-0x60)); /* 0x007C5C00: mov ecx, dword ptr [ebp - 0x60] */
    goto L_0040A000; /* 0x007C5C03: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C5C08(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5C08u);

L_007C5C08:
    eax = MEM32(ebp + (-0x60)); /* 0x007C5C08: mov eax, dword ptr [ebp - 0x60] */
    PUSH32(esp, eax); /* 0x007C5C0B: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C5C0C: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007C5C12: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C5C13: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C5C14(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5C14u);

L_007C5C14:
    eax = MEM32(ebp + (-0x60)); /* 0x007C5C14: mov eax, dword ptr [ebp - 0x60] */
    PUSH32(esp, eax); /* 0x007C5C17: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C5C18: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007C5C1E: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C5C1F: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C5C20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5C20u);

L_007C5C20:
    PUSH32(esp, 0x0052B4B0u); /* 0x007C5C20: push 0x52b4b0 */
    PUSH32(esp, 0x1Du); /* 0x007C5C25: push 0x1d */
    PUSH32(esp, 0x144u); /* 0x007C5C27: push 0x144 */
    eax = MEM32(ebp + (-0x60)); /* 0x007C5C2C: mov eax, dword ptr [ebp - 0x60] */
    PUSH32(esp, eax); /* 0x007C5C2F: push eax */
    RECOMP_CALL(sub_0077F628); /* 0x007C5C30: call 0x77f628 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C5C35: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C5C36(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5C36u);

L_007C5C36:
    eax = MEM32(ebp + (-0x60)); /* 0x007C5C36: mov eax, dword ptr [ebp - 0x60] */
    PUSH32(esp, eax); /* 0x007C5C39: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C5C3A: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007C5C40: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C5C41: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C5C42(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5C42u);

L_007C5C42:
    eax = MEM32(ebp + (-0x60)); /* 0x007C5C42: mov eax, dword ptr [ebp - 0x60] */
    PUSH32(esp, eax); /* 0x007C5C45: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C5C46: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007C5C4C: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C5C4D: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C5C4E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5C4Eu);

L_007C5C4E:
    PUSH32(esp, 0x006BC2A0u); /* 0x007C5C4E: push 0x6bc2a0 */
    PUSH32(esp, 5); /* 0x007C5C53: push 5 */
    PUSH32(esp, 0xCu); /* 0x007C5C55: push 0xc */
    eax = MEM32(ebp + (-0x60)); /* 0x007C5C57: mov eax, dword ptr [ebp - 0x60] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x007C5C5A: add eax, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x007C5C5D: push eax */
    RECOMP_CALL(sub_0077F628); /* 0x007C5C5E: call 0x77f628 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C5C63: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C5C64(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5C64u);

L_007C5C64:
    ecx = ebp + (-0x5C); /* 0x007C5C64: lea ecx, [ebp - 0x5c] */
    goto L_0040A000; /* 0x007C5C67: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C5C6C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5C6Cu);

L_007C5C6C:
    eax = MEM32(ebp + (-0x60)); /* 0x007C5C6C: mov eax, dword ptr [ebp - 0x60] */
    PUSH32(esp, eax); /* 0x007C5C6F: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007C5C70: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007C5C76: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C5C77: ret  */
    RECOMP_REGS_OUT();
}

void sub_007C5C78(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5C78u);

L_007C5C78:
    eax = MEM32(ebp + (-0x64)); /* 0x007C5C78: mov eax, dword ptr [ebp - 0x64] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x007C5C7B: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007C5C90; /* 0x007C5C7E: je 0x7c5c90 */
L_007C5C84:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x64))); _flag_b = (uint32_t)(0xFFFFFFFEu);
    MEM32(ebp + (-0x64)) = MEM32(ebp + (-0x64)) & 0xFFFFFFFEu; /* 0x007C5C84: and dword ptr [ebp - 0x64], 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x2C); /* 0x007C5C88: lea ecx, [ebp - 0x2c] */
    goto L_0040A000; /* 0x007C5C8B: jmp 0x40a000 */
L_007C5C90:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C5C90: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C5C91(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5C91u);

L_007C5C91:
    eax = MEM32(ebp + (-0x64)); /* 0x007C5C91: mov eax, dword ptr [ebp - 0x64] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    eax = eax & 2; /* 0x007C5C94: and eax, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007C5CA9; /* 0x007C5C97: je 0x7c5ca9 */
L_007C5C9D:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x64))); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ebp + (-0x64)) = MEM32(ebp + (-0x64)) & 0xFFFFFFFDu; /* 0x007C5C9D: and dword ptr [ebp - 0x64], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x44); /* 0x007C5CA1: lea ecx, [ebp - 0x44] */
    goto L_0040A000; /* 0x007C5CA4: jmp 0x40a000 */
L_007C5CA9:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007C5CA9: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C5CAA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5CAAu);

L_007C5CAA:
    ecx = MEM32(ebp + (-0x68)); /* 0x007C5CAA: mov ecx, dword ptr [ebp - 0x68] */
    goto L_0040A000; /* 0x007C5CAD: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C5CB2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5CB2u);

L_007C5CB2:
    ecx = ebp + (-0x84); /* 0x007C5CB2: lea ecx, [ebp - 0x84] */
    goto L_0040A000; /* 0x007C5CB8: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C5CBD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5CBDu);

L_007C5CBD:
    ecx = ebp + (-0x84); /* 0x007C5CBD: lea ecx, [ebp - 0x84] */
    goto L_0040A000; /* 0x007C5CC3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C5CC8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5CC8u);

L_007C5CC8:
    ecx = ebp + (-0x2C); /* 0x007C5CC8: lea ecx, [ebp - 0x2c] */
    goto L_0040A000; /* 0x007C5CCB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C5CD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5CD0u);

L_007C5CD0:
    ecx = MEM32(ebp + (-0x60)); /* 0x007C5CD0: mov ecx, dword ptr [ebp - 0x60] */
    goto L_0040A000; /* 0x007C5CD3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C5CD8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5CD8u);

L_007C5CD8:
    ecx = MEM32(ebp + (-0x60)); /* 0x007C5CD8: mov ecx, dword ptr [ebp - 0x60] */
    goto L_0040A000; /* 0x007C5CDB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C5CE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5CE0u);

L_007C5CE0:
    ecx = MEM32(ebp + (-0x68)); /* 0x007C5CE0: mov ecx, dword ptr [ebp - 0x68] */
    goto L_0040A000; /* 0x007C5CE3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C5CE8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5CE8u);

    goto L_007C5CE8;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007C5CE8:
    edx = MEM32(esp + 0x8); /* 0x007C5CE8: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007C5CEC: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x90)); /* 0x007C5CEF: mov ecx, dword ptr [edx - 0x90] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007C5CF5: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007C5CF7: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x8)); /* 0x007C5CFC: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007C5CFF: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007C5D01: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0084EDE8u; /* 0x007C5D06: mov eax, 0x84ede8 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007C5D0B: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007C5D10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5D10u);

L_007C5D10:
    ecx = ebp + (-0x28); /* 0x007C5D10: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007C5D13: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C5D18(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5D18u);

L_007C5D18:
    ecx = ebp + (-0xB8); /* 0x007C5D18: lea ecx, [ebp - 0xb8] */
    goto L_0052D890; /* 0x007C5D1E: jmp 0x52d890 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0052D890: RECOMP_ITAIL(0x0052D890u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C5D23(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5D23u);

L_007C5D23:
    ecx = ebp + (-0x40); /* 0x007C5D23: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x007C5D26: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C5D2B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5D2Bu);

L_007C5D2B:
    ecx = ebp + (-0x40); /* 0x007C5D2B: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x007C5D2E: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C5D33(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5D33u);

L_007C5D33:
    ecx = ebp + (-0x28); /* 0x007C5D33: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007C5D36: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C5D3B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5D3Bu);

L_007C5D3B:
    ecx = ebp + (-0x40); /* 0x007C5D3B: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x007C5D3E: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C5D43(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5D43u);

L_007C5D43:
    ecx = ebp + (-0x28); /* 0x007C5D43: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007C5D46: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C5D4B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5D4Bu);

L_007C5D4B:
    ecx = ebp + (-0x40); /* 0x007C5D4B: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x007C5D4E: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C5D53(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5D53u);

L_007C5D53:
    ecx = ebp + (-0x28); /* 0x007C5D53: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007C5D56: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C5D5B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5D5Bu);

L_007C5D5B:
    ecx = ebp + (-0x28); /* 0x007C5D5B: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007C5D5E: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C5D63(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5D63u);

L_007C5D63:
    ecx = ebp + (-0x28); /* 0x007C5D63: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007C5D66: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C5D6B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5D6Bu);

L_007C5D6B:
    ecx = ebp + (-0x28); /* 0x007C5D6B: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007C5D6E: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C5D73(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5D73u);

L_007C5D73:
    ecx = ebp + (-0x28); /* 0x007C5D73: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007C5D76: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C5D7B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5D7Bu);

L_007C5D7B:
    ecx = ebp + (-0x40); /* 0x007C5D7B: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x007C5D7E: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C5D83(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5D83u);

L_007C5D83:
    ecx = ebp + (-0x28); /* 0x007C5D83: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007C5D86: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C5D8B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5D8Bu);

    goto L_007C5D8B;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007C5D8B:
    edx = MEM32(esp + 0x8); /* 0x007C5D8B: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007C5D8F: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xBC)); /* 0x007C5D92: mov ecx, dword ptr [edx - 0xbc] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007C5D98: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007C5D9A: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x007C5D9F: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007C5DA2: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007C5DA4: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0084EED8u; /* 0x007C5DA9: mov eax, 0x84eed8 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007C5DAE: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007C5DC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5DC0u);

L_007C5DC0:
    ecx = ebp + 0x8; /* 0x007C5DC0: lea ecx, [ebp + 8] */
    goto L_0040A000; /* 0x007C5DC3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C5DC8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5DC8u);

L_007C5DC8:
    ecx = ebp + (-0x70); /* 0x007C5DC8: lea ecx, [ebp - 0x70] */
    goto L_0040A000; /* 0x007C5DCB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C5DD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5DD0u);

L_007C5DD0:
    ecx = ebp + (-0x40); /* 0x007C5DD0: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x007C5DD3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C5DD8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5DD8u);

L_007C5DD8:
    ecx = ebp + (-0x120); /* 0x007C5DD8: lea ecx, [ebp - 0x120] */
    goto L_0053C8D0; /* 0x007C5DDE: jmp 0x53c8d0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0053C8D0: RECOMP_ITAIL(0x0053C8D0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C5DE3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5DE3u);

L_007C5DE3:
    ecx = ebp + (-0x120); /* 0x007C5DE3: lea ecx, [ebp - 0x120] */
    goto L_00540E10; /* 0x007C5DE9: jmp 0x540e10 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00540E10: RECOMP_ITAIL(0x00540E10u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C5DEE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5DEEu);

L_007C5DEE:
    ecx = ebp + (-0x40); /* 0x007C5DEE: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x007C5DF1: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C5DF6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5DF6u);

L_007C5DF6:
    ecx = ebp + (-0x58); /* 0x007C5DF6: lea ecx, [ebp - 0x58] */
    goto L_0040A000; /* 0x007C5DF9: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C5DFE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5DFEu);

L_007C5DFE:
    ecx = ebp + (-0x40); /* 0x007C5DFE: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x007C5E01: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C5E06(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5E06u);

L_007C5E06:
    ecx = ebp + (-0x58); /* 0x007C5E06: lea ecx, [ebp - 0x58] */
    goto L_0040A000; /* 0x007C5E09: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C5E0E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5E0Eu);

L_007C5E0E:
    ecx = ebp + (-0x40); /* 0x007C5E0E: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x007C5E11: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C5E16(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5E16u);

L_007C5E16:
    ecx = ebp + (-0x58); /* 0x007C5E16: lea ecx, [ebp - 0x58] */
    goto L_0040A000; /* 0x007C5E19: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C5E1E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5E1Eu);

L_007C5E1E:
    ecx = ebp + (-0x40); /* 0x007C5E1E: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x007C5E21: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C5E26(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5E26u);

L_007C5E26:
    ecx = ebp + (-0x58); /* 0x007C5E26: lea ecx, [ebp - 0x58] */
    goto L_0040A000; /* 0x007C5E29: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C5E2E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5E2Eu);

L_007C5E2E:
    ecx = ebp + (-0x40); /* 0x007C5E2E: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x007C5E31: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C5E36(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5E36u);

L_007C5E36:
    ecx = ebp + (-0x58); /* 0x007C5E36: lea ecx, [ebp - 0x58] */
    goto L_0040A000; /* 0x007C5E39: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C5E3E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5E3Eu);

L_007C5E3E:
    ecx = ebp + (-0x40); /* 0x007C5E3E: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x007C5E41: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C5E46(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5E46u);

L_007C5E46:
    ecx = ebp + (-0x58); /* 0x007C5E46: lea ecx, [ebp - 0x58] */
    goto L_0040A000; /* 0x007C5E49: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C5E4E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5E4Eu);

L_007C5E4E:
    ecx = ebp + (-0x70); /* 0x007C5E4E: lea ecx, [ebp - 0x70] */
    goto L_0040A000; /* 0x007C5E51: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C5E56(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5E56u);

L_007C5E56:
    ecx = ebp + (-0x40); /* 0x007C5E56: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x007C5E59: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C5E5E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5E5Eu);

L_007C5E5E:
    ecx = ebp + (-0x58); /* 0x007C5E5E: lea ecx, [ebp - 0x58] */
    goto L_0040A000; /* 0x007C5E61: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C5E66(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5E66u);

L_007C5E66:
    ecx = ebp + (-0x178); /* 0x007C5E66: lea ecx, [ebp - 0x178] */
    goto L_00419790; /* 0x007C5E6C: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C5E71(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5E71u);

L_007C5E71:
    ecx = ebp + (-0x178); /* 0x007C5E71: lea ecx, [ebp - 0x178] */
    goto L_006675A0; /* 0x007C5E77: jmp 0x6675a0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_006675A0: RECOMP_ITAIL(0x006675A0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C5E7C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5E7Cu);

L_007C5E7C:
    ecx = MEM32(ebp + (-0x5C)); /* 0x007C5E7C: mov ecx, dword ptr [ebp - 0x5c] */
    goto L_0040A000; /* 0x007C5E7F: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007C5E84(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007C5E84u);

L_007C5E84:
    ecx = MEM32(ebp + (-0x18)); /* 0x007C5E84: mov ecx, dword ptr [ebp - 0x18] */
    goto L_0040A000; /* 0x007C5E87: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}
