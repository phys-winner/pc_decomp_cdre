#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_007906C8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007906C8u);

L_007906C8:
    ecx = MEM32(ebp + (-0x34)); /* 0x007906C8: mov ecx, dword ptr [ebp - 0x34] */
    goto L_0040A000; /* 0x007906CB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007906D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007906D0u);

    goto L_007906D0;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007906D0:
    edx = MEM32(esp + 0x8); /* 0x007906D0: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0x3C); /* 0x007906D4: lea eax, [edx - 0x3c] */
    ecx = MEM32(edx + (-0x40)); /* 0x007906D7: mov ecx, dword ptr [edx - 0x40] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007906DA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007906DC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x007906E1: add eax, 0xc */
    _flag_k = FK_ADD;
    ecx = MEM32(edx + (-0x8)); /* 0x007906E4: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007906E7: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007906E9: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0081BE48u; /* 0x007906EE: mov eax, 0x81be48 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007906F3: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00790700(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00790700u);

L_00790700:
    ecx = ebp + (-0x2C); /* 0x00790700: lea ecx, [ebp - 0x2c] */
    goto L_0040A000; /* 0x00790703: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00790708(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00790708u);

L_00790708:
    ecx = MEM32(ebp + (-0x30)); /* 0x00790708: mov ecx, dword ptr [ebp - 0x30] */
    goto L_0040A000; /* 0x0079070B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00790710(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00790710u);

L_00790710:
    ecx = MEM32(ebp + (-0x34)); /* 0x00790710: mov ecx, dword ptr [ebp - 0x34] */
    goto L_0040A000; /* 0x00790713: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00790718(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00790718u);

L_00790718:
    ecx = MEM32(ebp + (-0x34)); /* 0x00790718: mov ecx, dword ptr [ebp - 0x34] */
    goto L_0040A000; /* 0x0079071B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00790720(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00790720u);

L_00790720:
    ecx = MEM32(ebp + (-0x30)); /* 0x00790720: mov ecx, dword ptr [ebp - 0x30] */
    goto L_0040A000; /* 0x00790723: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00790728(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00790728u);

L_00790728:
    ecx = MEM32(ebp + (-0x34)); /* 0x00790728: mov ecx, dword ptr [ebp - 0x34] */
    goto L_0040A000; /* 0x0079072B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00790730(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00790730u);

L_00790730:
    ecx = MEM32(ebp + (-0x34)); /* 0x00790730: mov ecx, dword ptr [ebp - 0x34] */
    goto L_0040A000; /* 0x00790733: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00790738(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00790738u);

    goto L_00790738;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_00790738:
    edx = MEM32(esp + 0x8); /* 0x00790738: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0x3C); /* 0x0079073C: lea eax, [edx - 0x3c] */
    ecx = MEM32(edx + (-0x40)); /* 0x0079073F: mov ecx, dword ptr [edx - 0x40] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x00790742: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00790744: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x00790749: add eax, 0xc */
    _flag_k = FK_ADD;
    ecx = MEM32(edx + (-0x8)); /* 0x0079074C: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0079074F: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00790751: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0081BEB0u; /* 0x00790756: mov eax, 0x81beb0 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0079075B: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00790760(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00790760u);

L_00790760:
    ecx = ebp + (-0x2C); /* 0x00790760: lea ecx, [ebp - 0x2c] */
    goto L_0040A000; /* 0x00790763: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00790768(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00790768u);

L_00790768:
    ecx = MEM32(ebp + (-0x38)); /* 0x00790768: mov ecx, dword ptr [ebp - 0x38] */
    goto L_0040A000; /* 0x0079076B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00790770(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00790770u);

L_00790770:
    ecx = MEM32(ebp + (-0x34)); /* 0x00790770: mov ecx, dword ptr [ebp - 0x34] */
    goto L_0040A000; /* 0x00790773: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00790778(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00790778u);

L_00790778:
    ecx = MEM32(ebp + (-0x38)); /* 0x00790778: mov ecx, dword ptr [ebp - 0x38] */
    goto L_0040A000; /* 0x0079077B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00790780(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00790780u);

L_00790780:
    ecx = MEM32(ebp + (-0x34)); /* 0x00790780: mov ecx, dword ptr [ebp - 0x34] */
    goto L_0040A000; /* 0x00790783: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00790788(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00790788u);

L_00790788:
    ecx = MEM32(ebp + (-0x38)); /* 0x00790788: mov ecx, dword ptr [ebp - 0x38] */
    goto L_0040A000; /* 0x0079078B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00790790(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00790790u);

L_00790790:
    ecx = MEM32(ebp + (-0x34)); /* 0x00790790: mov ecx, dword ptr [ebp - 0x34] */
    goto L_0040A000; /* 0x00790793: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00790798(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00790798u);

L_00790798:
    ecx = MEM32(ebp + (-0x38)); /* 0x00790798: mov ecx, dword ptr [ebp - 0x38] */
    goto L_0040A000; /* 0x0079079B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007907A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007907A0u);

    goto L_007907A0;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007907A0:
    edx = MEM32(esp + 0x8); /* 0x007907A0: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007907A4: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x40)); /* 0x007907A7: mov ecx, dword ptr [edx - 0x40] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007907AA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007907AC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x8)); /* 0x007907B1: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007907B4: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007907B6: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0081BF10u; /* 0x007907BB: mov eax, 0x81bf10 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007907C0: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007907D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007907D0u);

L_007907D0:
    ecx = ebp + (-0x2C); /* 0x007907D0: lea ecx, [ebp - 0x2c] */
    goto L_0040A000; /* 0x007907D3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007907D8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007907D8u);

L_007907D8:
    ecx = MEM32(ebp + (-0x34)); /* 0x007907D8: mov ecx, dword ptr [ebp - 0x34] */
    goto L_0040A000; /* 0x007907DB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007907E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007907E0u);

L_007907E0:
    ecx = MEM32(ebp + (-0x38)); /* 0x007907E0: mov ecx, dword ptr [ebp - 0x38] */
    goto L_0040A000; /* 0x007907E3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007907E8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007907E8u);

L_007907E8:
    ecx = MEM32(ebp + (-0x34)); /* 0x007907E8: mov ecx, dword ptr [ebp - 0x34] */
    goto L_0040A000; /* 0x007907EB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007907F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007907F0u);

L_007907F0:
    ecx = MEM32(ebp + (-0x38)); /* 0x007907F0: mov ecx, dword ptr [ebp - 0x38] */
    goto L_0040A000; /* 0x007907F3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007907F8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007907F8u);

L_007907F8:
    ecx = MEM32(ebp + (-0x34)); /* 0x007907F8: mov ecx, dword ptr [ebp - 0x34] */
    goto L_0040A000; /* 0x007907FB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00790800(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00790800u);

    goto L_00790800;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_00790800:
    edx = MEM32(esp + 0x8); /* 0x00790800: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x00790804: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x48)); /* 0x00790807: mov ecx, dword ptr [edx - 0x48] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0079080A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0079080C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x8)); /* 0x00790811: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x00790814: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00790816: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0081BF88u; /* 0x0079081B: mov eax, 0x81bf88 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x00790820: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00790830(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00790830u);

L_00790830:
    ecx = ebp + (-0x28); /* 0x00790830: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x00790833: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00790838(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00790838u);

L_00790838:
    ecx = MEM32(ebp + (-0x30)); /* 0x00790838: mov ecx, dword ptr [ebp - 0x30] */
    goto L_0040A000; /* 0x0079083B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00790840(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00790840u);

L_00790840:
    ecx = MEM32(ebp + (-0x30)); /* 0x00790840: mov ecx, dword ptr [ebp - 0x30] */
    goto L_0040A000; /* 0x00790843: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00790848(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00790848u);

L_00790848:
    ecx = MEM32(ebp + (-0x30)); /* 0x00790848: mov ecx, dword ptr [ebp - 0x30] */
    goto L_0040A000; /* 0x0079084B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00790850(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00790850u);

    goto L_00790850;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_00790850:
    edx = MEM32(esp + 0x8); /* 0x00790850: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x00790854: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x3C)); /* 0x00790857: mov ecx, dword ptr [edx - 0x3c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0079085A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0079085C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x00790861: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x00790864: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00790866: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0081BFF0u; /* 0x0079086B: mov eax, 0x81bff0 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x00790870: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00790880(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00790880u);

L_00790880:
    ecx = MEM32(ebp + (-0x13C)); /* 0x00790880: mov ecx, dword ptr [ebp - 0x13c] */
    goto L_0040A000; /* 0x00790886: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079088B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079088Bu);

L_0079088B:
    ecx = MEM32(ebp + (-0x138)); /* 0x0079088B: mov ecx, dword ptr [ebp - 0x138] */
    goto L_0040A000; /* 0x00790891: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00790896(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00790896u);

L_00790896:
    ecx = MEM32(ebp + (-0x138)); /* 0x00790896: mov ecx, dword ptr [ebp - 0x138] */
    goto L_0040A000; /* 0x0079089C: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007908A1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007908A1u);

L_007908A1:
    ecx = MEM32(ebp + (-0x13C)); /* 0x007908A1: mov ecx, dword ptr [ebp - 0x13c] */
    goto L_0040A000; /* 0x007908A7: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007908AC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007908ACu);

L_007908AC:
    ecx = ebp + (-0x28); /* 0x007908AC: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007908AF: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007908B4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007908B4u);

L_007908B4:
    ecx = MEM32(ebp + (-0x138)); /* 0x007908B4: mov ecx, dword ptr [ebp - 0x138] */
    goto L_0040A000; /* 0x007908BA: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007908BF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007908BFu);

L_007908BF:
    ecx = MEM32(ebp + (-0x13C)); /* 0x007908BF: mov ecx, dword ptr [ebp - 0x13c] */
    goto L_0040A000; /* 0x007908C5: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007908CA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007908CAu);

L_007908CA:
    ecx = MEM32(ebp + (-0x138)); /* 0x007908CA: mov ecx, dword ptr [ebp - 0x138] */
    goto L_0040A000; /* 0x007908D0: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007908D5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007908D5u);

L_007908D5:
    ecx = ebp + (-0x40); /* 0x007908D5: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x007908D8: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007908DD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007908DDu);

L_007908DD:
    ecx = MEM32(ebp + (-0x138)); /* 0x007908DD: mov ecx, dword ptr [ebp - 0x138] */
    goto L_0040A000; /* 0x007908E3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007908E8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007908E8u);

L_007908E8:
    ecx = ebp + (-0x40); /* 0x007908E8: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x007908EB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007908F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007908F0u);

L_007908F0:
    ecx = MEM32(ebp + (-0x138)); /* 0x007908F0: mov ecx, dword ptr [ebp - 0x138] */
    goto L_0040A000; /* 0x007908F6: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007908FB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007908FBu);

L_007908FB:
    ecx = MEM32(ebp + (-0x138)); /* 0x007908FB: mov ecx, dword ptr [ebp - 0x138] */
    goto L_0040A000; /* 0x00790901: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00790906(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00790906u);

L_00790906:
    ecx = MEM32(ebp + (-0x13C)); /* 0x00790906: mov ecx, dword ptr [ebp - 0x13c] */
    goto L_0040A000; /* 0x0079090C: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00790911(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00790911u);

L_00790911:
    ecx = MEM32(ebp + (-0x138)); /* 0x00790911: mov ecx, dword ptr [ebp - 0x138] */
    goto L_0040A000; /* 0x00790917: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079091C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079091Cu);

L_0079091C:
    ecx = ebp + (-0x40); /* 0x0079091C: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x0079091F: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00790924(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00790924u);

L_00790924:
    ecx = MEM32(ebp + (-0x138)); /* 0x00790924: mov ecx, dword ptr [ebp - 0x138] */
    goto L_0040A000; /* 0x0079092A: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079092F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079092Fu);

L_0079092F:
    ecx = MEM32(ebp + (-0x138)); /* 0x0079092F: mov ecx, dword ptr [ebp - 0x138] */
    goto L_0040A000; /* 0x00790935: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079093A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079093Au);

L_0079093A:
    ecx = ebp + (-0x70); /* 0x0079093A: lea ecx, [ebp - 0x70] */
    goto L_0040A000; /* 0x0079093D: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00790942(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00790942u);

L_00790942:
    ecx = MEM32(ebp + (-0x138)); /* 0x00790942: mov ecx, dword ptr [ebp - 0x138] */
    goto L_0040A000; /* 0x00790948: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079094D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079094Du);

L_0079094D:
    ecx = MEM32(ebp + (-0x13C)); /* 0x0079094D: mov ecx, dword ptr [ebp - 0x13c] */
    goto L_0040A000; /* 0x00790953: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00790958(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00790958u);

L_00790958:
    ecx = MEM32(ebp + (-0x138)); /* 0x00790958: mov ecx, dword ptr [ebp - 0x138] */
    goto L_0040A000; /* 0x0079095E: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00790963(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00790963u);

L_00790963:
    ecx = ebp + (-0x88); /* 0x00790963: lea ecx, [ebp - 0x88] */
    goto L_0040A000; /* 0x00790969: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079096E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079096Eu);

L_0079096E:
    eax = MEM32(ebp + (-0x138)); /* 0x0079096E: mov eax, dword ptr [ebp - 0x138] */
    PUSH32(esp, eax); /* 0x00790974: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x00790975: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0079097B: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0079097C: ret  */
    RECOMP_REGS_OUT();
}

void sub_0079097D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079097Du);

L_0079097D:
    eax = MEM32(ebp + (-0x134)); /* 0x0079097D: mov eax, dword ptr [ebp - 0x134] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x00790983: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0079099B; /* 0x00790986: je 0x79099b */
L_0079098C:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x134))); _flag_b = (uint32_t)(0xFFFFFFFEu);
    MEM32(ebp + (-0x134)) = MEM32(ebp + (-0x134)) & 0xFFFFFFFEu; /* 0x0079098C: and dword ptr [ebp - 0x134], 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x40); /* 0x00790993: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x00790996: jmp 0x40a000 */
L_0079099B:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0079099B: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079099C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079099Cu);

L_0079099C:
    ecx = MEM32(ebp + (-0x140)); /* 0x0079099C: mov ecx, dword ptr [ebp - 0x140] */
    goto L_0040A000; /* 0x007909A2: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007909A7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007909A7u);

L_007909A7:
    ecx = MEM32(ebp + (-0x144)); /* 0x007909A7: mov ecx, dword ptr [ebp - 0x144] */
    goto L_0040A000; /* 0x007909AD: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007909B2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007909B2u);

L_007909B2:
    eax = MEM32(ebp + (-0x134)); /* 0x007909B2: mov eax, dword ptr [ebp - 0x134] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    eax = eax & 2; /* 0x007909B8: and eax, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007909D0; /* 0x007909BB: je 0x7909d0 */
L_007909C1:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x134))); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ebp + (-0x134)) = MEM32(ebp + (-0x134)) & 0xFFFFFFFDu; /* 0x007909C1: and dword ptr [ebp - 0x134], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x58); /* 0x007909C8: lea ecx, [ebp - 0x58] */
    goto L_0040A000; /* 0x007909CB: jmp 0x40a000 */
L_007909D0:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007909D0: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007909D1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007909D1u);

L_007909D1:
    eax = MEM32(ebp + (-0x144)); /* 0x007909D1: mov eax, dword ptr [ebp - 0x144] */
    PUSH32(esp, eax); /* 0x007909D7: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007909D8: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007909DE: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007909DF: ret  */
    RECOMP_REGS_OUT();
}

void sub_007909E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007909E0u);

L_007909E0:
    eax = MEM32(ebp + (-0x134)); /* 0x007909E0: mov eax, dword ptr [ebp - 0x134] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    eax = eax & 4; /* 0x007909E6: and eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00790A01; /* 0x007909E9: je 0x790a01 */
L_007909EF:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x134))); _flag_b = (uint32_t)(0xFFFFFFFBu);
    MEM32(ebp + (-0x134)) = MEM32(ebp + (-0x134)) & 0xFFFFFFFBu; /* 0x007909EF: and dword ptr [ebp - 0x134], 0xfffffffb */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0xA0); /* 0x007909F6: lea ecx, [ebp - 0xa0] */
    goto L_0040A000; /* 0x007909FC: jmp 0x40a000 */
L_00790A01:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00790A01: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00790A02(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00790A02u);

L_00790A02:
    ecx = MEM32(ebp + (-0x140)); /* 0x00790A02: mov ecx, dword ptr [ebp - 0x140] */
    goto L_0040A000; /* 0x00790A08: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00790A0D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00790A0Du);

L_00790A0D:
    ecx = MEM32(ebp + (-0x138)); /* 0x00790A0D: mov ecx, dword ptr [ebp - 0x138] */
    goto L_0040A000; /* 0x00790A13: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00790A18(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00790A18u);

L_00790A18:
    eax = MEM32(ebp + (-0x134)); /* 0x00790A18: mov eax, dword ptr [ebp - 0x134] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    eax = eax & 8; /* 0x00790A1E: and eax, 8 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00790A39; /* 0x00790A21: je 0x790a39 */
L_00790A27:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x134))); _flag_b = (uint32_t)(0xFFFFFFF7u);
    MEM32(ebp + (-0x134)) = MEM32(ebp + (-0x134)) & 0xFFFFFFF7u; /* 0x00790A27: and dword ptr [ebp - 0x134], 0xfffffff7 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0xE8); /* 0x00790A2E: lea ecx, [ebp - 0xe8] */
    goto L_0040A000; /* 0x00790A34: jmp 0x40a000 */
L_00790A39:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00790A39: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00790A3A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00790A3Au);

L_00790A3A:
    eax = MEM32(ebp + (-0x144)); /* 0x00790A3A: mov eax, dword ptr [ebp - 0x144] */
    PUSH32(esp, eax); /* 0x00790A40: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x00790A41: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00790A47: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00790A48: ret  */
    RECOMP_REGS_OUT();
}

void sub_00790A49(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00790A49u);

L_00790A49:
    eax = MEM32(ebp + (-0x134)); /* 0x00790A49: mov eax, dword ptr [ebp - 0x134] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    eax = eax & 0x10u; /* 0x00790A4F: and eax, 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00790A6A; /* 0x00790A52: je 0x790a6a */
L_00790A58:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x134))); _flag_b = (uint32_t)(0xFFFFFFEFu);
    MEM32(ebp + (-0x134)) = MEM32(ebp + (-0x134)) & 0xFFFFFFEFu; /* 0x00790A58: and dword ptr [ebp - 0x134], 0xffffffef */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0xB8); /* 0x00790A5F: lea ecx, [ebp - 0xb8] */
    goto L_0040A000; /* 0x00790A65: jmp 0x40a000 */
L_00790A6A:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00790A6A: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00790A6B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00790A6Bu);

L_00790A6B:
    ecx = MEM32(ebp + (-0x140)); /* 0x00790A6B: mov ecx, dword ptr [ebp - 0x140] */
    goto L_0040A000; /* 0x00790A71: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00790A76(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00790A76u);

L_00790A76:
    ecx = MEM32(ebp + (-0x138)); /* 0x00790A76: mov ecx, dword ptr [ebp - 0x138] */
    goto L_0040A000; /* 0x00790A7C: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00790A81(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00790A81u);

L_00790A81:
    eax = MEM32(ebp + (-0x134)); /* 0x00790A81: mov eax, dword ptr [ebp - 0x134] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    eax = eax & 0x20u; /* 0x00790A87: and eax, 0x20 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00790AA2; /* 0x00790A8A: je 0x790aa2 */
L_00790A90:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x134))); _flag_b = (uint32_t)(0xFFFFFFDFu);
    MEM32(ebp + (-0x134)) = MEM32(ebp + (-0x134)) & 0xFFFFFFDFu; /* 0x00790A90: and dword ptr [ebp - 0x134], 0xffffffdf */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x130); /* 0x00790A97: lea ecx, [ebp - 0x130] */
    goto L_0040A000; /* 0x00790A9D: jmp 0x40a000 */
L_00790AA2:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00790AA2: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00790AA3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00790AA3u);

L_00790AA3:
    eax = MEM32(ebp + (-0x144)); /* 0x00790AA3: mov eax, dword ptr [ebp - 0x144] */
    PUSH32(esp, eax); /* 0x00790AA9: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x00790AAA: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00790AB0: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00790AB1: ret  */
    RECOMP_REGS_OUT();
}

void sub_00790AB2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00790AB2u);

L_00790AB2:
    eax = MEM32(ebp + (-0x134)); /* 0x00790AB2: mov eax, dword ptr [ebp - 0x134] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x40u);
    eax = eax & 0x40u; /* 0x00790AB8: and eax, 0x40 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00790AD3; /* 0x00790ABB: je 0x790ad3 */
L_00790AC1:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x134))); _flag_b = (uint32_t)(0xFFFFFFBFu);
    MEM32(ebp + (-0x134)) = MEM32(ebp + (-0x134)) & 0xFFFFFFBFu; /* 0x00790AC1: and dword ptr [ebp - 0x134], 0xffffffbf */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x88); /* 0x00790AC8: lea ecx, [ebp - 0x88] */
    goto L_0040A000; /* 0x00790ACE: jmp 0x40a000 */
L_00790AD3:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00790AD3: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00790AD4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00790AD4u);

L_00790AD4:
    ecx = MEM32(ebp + (-0x140)); /* 0x00790AD4: mov ecx, dword ptr [ebp - 0x140] */
    goto L_0040A000; /* 0x00790ADA: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00790ADF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00790ADFu);

L_00790ADF:
    ecx = MEM32(ebp + (-0x138)); /* 0x00790ADF: mov ecx, dword ptr [ebp - 0x138] */
    goto L_0040A000; /* 0x00790AE5: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00790AEA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00790AEAu);

L_00790AEA:
    eax = MEM32(ebp + (-0x134)); /* 0x00790AEA: mov eax, dword ptr [ebp - 0x134] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80u);
    eax = eax & 0x80u; /* 0x00790AF0: and eax, 0x80 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00790B10; /* 0x00790AF5: je 0x790b10 */
L_00790AFB:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x134))); _flag_b = (uint32_t)(0xFFFFFF7Fu);
    MEM32(ebp + (-0x134)) = MEM32(ebp + (-0x134)) & 0xFFFFFF7Fu; /* 0x00790AFB: and dword ptr [ebp - 0x134], 0xffffff7f */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x118); /* 0x00790B05: lea ecx, [ebp - 0x118] */
    goto L_0040A000; /* 0x00790B0B: jmp 0x40a000 */
L_00790B10:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00790B10: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00790B11(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00790B11u);

L_00790B11:
    eax = MEM32(ebp + (-0x144)); /* 0x00790B11: mov eax, dword ptr [ebp - 0x144] */
    PUSH32(esp, eax); /* 0x00790B17: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x00790B18: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00790B1E: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00790B1F: ret  */
    RECOMP_REGS_OUT();
}

void sub_00790B20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00790B20u);

L_00790B20:
    eax = MEM32(ebp + (-0x134)); /* 0x00790B20: mov eax, dword ptr [ebp - 0x134] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x100u);
    eax = eax & 0x100u; /* 0x00790B26: and eax, 0x100 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00790B43; /* 0x00790B2B: je 0x790b43 */
L_00790B31:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x134))); _flag_b = (uint32_t)(0xFFFFFEFFu);
    MEM32(ebp + (-0x134)) = MEM32(ebp + (-0x134)) & 0xFFFFFEFFu; /* 0x00790B31: and dword ptr [ebp - 0x134], 0xfffffeff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x70); /* 0x00790B3B: lea ecx, [ebp - 0x70] */
    goto L_0040A000; /* 0x00790B3E: jmp 0x40a000 */
L_00790B43:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00790B43: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00790B44(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00790B44u);

L_00790B44:
    ecx = MEM32(ebp + (-0x140)); /* 0x00790B44: mov ecx, dword ptr [ebp - 0x140] */
    goto L_0040A000; /* 0x00790B4A: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00790B4F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00790B4Fu);

L_00790B4F:
    ecx = MEM32(ebp + (-0x138)); /* 0x00790B4F: mov ecx, dword ptr [ebp - 0x138] */
    goto L_0040A000; /* 0x00790B55: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00790B5A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00790B5Au);

L_00790B5A:
    eax = MEM32(ebp + (-0x134)); /* 0x00790B5A: mov eax, dword ptr [ebp - 0x134] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x200u);
    eax = eax & 0x200u; /* 0x00790B60: and eax, 0x200 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00790B80; /* 0x00790B65: je 0x790b80 */
L_00790B6B:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x134))); _flag_b = (uint32_t)(0xFFFFFDFFu);
    MEM32(ebp + (-0x134)) = MEM32(ebp + (-0x134)) & 0xFFFFFDFFu; /* 0x00790B6B: and dword ptr [ebp - 0x134], 0xfffffdff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x100); /* 0x00790B75: lea ecx, [ebp - 0x100] */
    goto L_0040A000; /* 0x00790B7B: jmp 0x40a000 */
L_00790B80:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00790B80: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00790B81(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00790B81u);

L_00790B81:
    ecx = MEM32(ebp + (-0x144)); /* 0x00790B81: mov ecx, dword ptr [ebp - 0x144] */
    goto L_0040A000; /* 0x00790B87: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00790B8C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00790B8Cu);

L_00790B8C:
    ecx = ebp + (-0xD0); /* 0x00790B8C: lea ecx, [ebp - 0xd0] */
    goto L_0040A000; /* 0x00790B92: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00790B97(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00790B97u);

L_00790B97:
    ecx = MEM32(ebp + (-0x140)); /* 0x00790B97: mov ecx, dword ptr [ebp - 0x140] */
    goto L_0040A000; /* 0x00790B9D: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00790BA2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00790BA2u);

L_00790BA2:
    eax = MEM32(ebp + (-0x144)); /* 0x00790BA2: mov eax, dword ptr [ebp - 0x144] */
    PUSH32(esp, eax); /* 0x00790BA8: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x00790BA9: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00790BAF: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00790BB0: ret  */
    RECOMP_REGS_OUT();
}

void sub_00790BB1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00790BB1u);

L_00790BB1:
    ecx = MEM32(ebp + (-0x140)); /* 0x00790BB1: mov ecx, dword ptr [ebp - 0x140] */
    goto L_0040A000; /* 0x00790BB7: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00790BBC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00790BBCu);

L_00790BBC:
    ecx = MEM32(ebp + (-0x138)); /* 0x00790BBC: mov ecx, dword ptr [ebp - 0x138] */
    goto L_0040A000; /* 0x00790BC2: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00790BC7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00790BC7u);

    goto L_00790BC7;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_00790BC7:
    edx = MEM32(esp + 0x8); /* 0x00790BC7: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x00790BCB: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14C)); /* 0x00790BCE: mov ecx, dword ptr [edx - 0x14c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x00790BD4: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00790BD6: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x00790BDB: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x00790BDE: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00790BE0: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0081C038u; /* 0x00790BE5: mov eax, 0x81c038 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x00790BEA: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00790BF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00790BF0u);

L_00790BF0:
    ecx = MEM32(ebp + (-0x30)); /* 0x00790BF0: mov ecx, dword ptr [ebp - 0x30] */
    goto L_0040A000; /* 0x00790BF3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00790BF8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00790BF8u);

L_00790BF8:
    ecx = MEM32(ebp + (-0x2C)); /* 0x00790BF8: mov ecx, dword ptr [ebp - 0x2c] */
    goto L_0040A000; /* 0x00790BFB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00790C00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00790C00u);

L_00790C00:
    ecx = MEM32(ebp + (-0x30)); /* 0x00790C00: mov ecx, dword ptr [ebp - 0x30] */
    goto L_0040A000; /* 0x00790C03: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00790C08(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00790C08u);

L_00790C08:
    ecx = MEM32(ebp + (-0x2C)); /* 0x00790C08: mov ecx, dword ptr [ebp - 0x2c] */
    goto L_0040A000; /* 0x00790C0B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00790C10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00790C10u);

L_00790C10:
    ecx = ebp + (-0x28); /* 0x00790C10: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x00790C13: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00790C18(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00790C18u);

    goto L_00790C18;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_00790C18:
    edx = MEM32(esp + 0x8); /* 0x00790C18: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x00790C1C: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x4C)); /* 0x00790C1F: mov ecx, dword ptr [edx - 0x4c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x00790C22: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00790C24: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x00790C29: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x00790C2C: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00790C2E: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0081C278u; /* 0x00790C33: mov eax, 0x81c278 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x00790C38: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00790C40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00790C40u);

L_00790C40:
    ecx = ebp + (-0x28); /* 0x00790C40: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x00790C43: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00790C48(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00790C48u);

L_00790C48:
    ecx = ebp + (-0x40); /* 0x00790C48: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x00790C4B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00790C50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00790C50u);

L_00790C50:
    ecx = MEM32(ebp + (-0x44)); /* 0x00790C50: mov ecx, dword ptr [ebp - 0x44] */
    goto L_0040A000; /* 0x00790C53: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00790C58(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00790C58u);

L_00790C58:
    ecx = MEM32(ebp + (-0x48)); /* 0x00790C58: mov ecx, dword ptr [ebp - 0x48] */
    goto L_0040A000; /* 0x00790C5B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00790C60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00790C60u);

    goto L_00790C60;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_00790C60:
    edx = MEM32(esp + 0x8); /* 0x00790C60: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x00790C64: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x4C)); /* 0x00790C67: mov ecx, dword ptr [edx - 0x4c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x00790C6A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00790C6C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x00790C71: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x00790C74: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00790C76: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0081C2C4u; /* 0x00790C7B: mov eax, 0x81c2c4 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x00790C80: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00790C90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00790C90u);

L_00790C90:
    ecx = MEM32(ebp + (-0x10)); /* 0x00790C90: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040A000; /* 0x00790C93: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00790C98(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00790C98u);

L_00790C98:
    ecx = MEM32(ebp + (-0x14)); /* 0x00790C98: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040A000; /* 0x00790C9B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00790CA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00790CA0u);

L_00790CA0:
    eax = MEM32(ebp + (-0x14)); /* 0x00790CA0: mov eax, dword ptr [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x00790CA3: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x00790CA4: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00790CAA: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00790CAB: ret  */
    RECOMP_REGS_OUT();
}
