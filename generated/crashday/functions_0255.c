#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_007BBA61(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BBA61u);

L_007BBA61:
    ecx = ebp + (-0xBC); /* 0x007BBA61: lea ecx, [ebp - 0xbc] */
    goto L_0040A000; /* 0x007BBA67: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BBA6C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BBA6Cu);

L_007BBA6C:
    eax = MEM32(ebp + (-0x154)); /* 0x007BBA6C: mov eax, dword ptr [ebp - 0x154] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x007BBA72: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007BBA8D; /* 0x007BBA75: je 0x7bba8d */
L_007BBA7B:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x154))); _flag_b = (uint32_t)(0xFFFFFFFEu);
    MEM32(ebp + (-0x154)) = MEM32(ebp + (-0x154)) & 0xFFFFFFFEu; /* 0x007BBA7B: and dword ptr [ebp - 0x154], 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x11C); /* 0x007BBA82: lea ecx, [ebp - 0x11c] */
    goto L_0040A000; /* 0x007BBA88: jmp 0x40a000 */
L_007BBA8D:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007BBA8D: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BBA8E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BBA8Eu);

L_007BBA8E:
    eax = MEM32(ebp + (-0x154)); /* 0x007BBA8E: mov eax, dword ptr [ebp - 0x154] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    eax = eax & 2; /* 0x007BBA94: and eax, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007BBAAF; /* 0x007BBA97: je 0x7bbaaf */
L_007BBA9D:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x154))); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ebp + (-0x154)) = MEM32(ebp + (-0x154)) & 0xFFFFFFFDu; /* 0x007BBA9D: and dword ptr [ebp - 0x154], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x134); /* 0x007BBAA4: lea ecx, [ebp - 0x134] */
    goto L_0040A000; /* 0x007BBAAA: jmp 0x40a000 */
L_007BBAAF:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007BBAAF: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BBAB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BBAB0u);

L_007BBAB0:
    eax = MEM32(ebp + (-0x154)); /* 0x007BBAB0: mov eax, dword ptr [ebp - 0x154] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    eax = eax & 4; /* 0x007BBAB6: and eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007BBAD1; /* 0x007BBAB9: je 0x7bbad1 */
L_007BBABF:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x154))); _flag_b = (uint32_t)(0xFFFFFFFBu);
    MEM32(ebp + (-0x154)) = MEM32(ebp + (-0x154)) & 0xFFFFFFFBu; /* 0x007BBABF: and dword ptr [ebp - 0x154], 0xfffffffb */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x14C); /* 0x007BBAC6: lea ecx, [ebp - 0x14c] */
    goto L_0040A000; /* 0x007BBACC: jmp 0x40a000 */
L_007BBAD1:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007BBAD1: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BBAD2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BBAD2u);

L_007BBAD2:
    eax = MEM32(ebp + (-0x154)); /* 0x007BBAD2: mov eax, dword ptr [ebp - 0x154] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    eax = eax & 8; /* 0x007BBAD8: and eax, 8 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007BBAF3; /* 0x007BBADB: je 0x7bbaf3 */
L_007BBAE1:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x154))); _flag_b = (uint32_t)(0xFFFFFFF7u);
    MEM32(ebp + (-0x154)) = MEM32(ebp + (-0x154)) & 0xFFFFFFF7u; /* 0x007BBAE1: and dword ptr [ebp - 0x154], 0xfffffff7 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x104); /* 0x007BBAE8: lea ecx, [ebp - 0x104] */
    goto L_0040A000; /* 0x007BBAEE: jmp 0x40a000 */
L_007BBAF3:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007BBAF3: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BBAF4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BBAF4u);

L_007BBAF4:
    eax = MEM32(ebp + (-0x154)); /* 0x007BBAF4: mov eax, dword ptr [ebp - 0x154] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    eax = eax & 0x10u; /* 0x007BBAFA: and eax, 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007BBB15; /* 0x007BBAFD: je 0x7bbb15 */
L_007BBB03:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x154))); _flag_b = (uint32_t)(0xFFFFFFEFu);
    MEM32(ebp + (-0x154)) = MEM32(ebp + (-0x154)) & 0xFFFFFFEFu; /* 0x007BBB03: and dword ptr [ebp - 0x154], 0xffffffef */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0xEC); /* 0x007BBB0A: lea ecx, [ebp - 0xec] */
    goto L_0040A000; /* 0x007BBB10: jmp 0x40a000 */
L_007BBB15:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007BBB15: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BBB16(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BBB16u);

L_007BBB16:
    eax = MEM32(ebp + (-0x154)); /* 0x007BBB16: mov eax, dword ptr [ebp - 0x154] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    eax = eax & 0x20u; /* 0x007BBB1C: and eax, 0x20 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007BBB37; /* 0x007BBB1F: je 0x7bbb37 */
L_007BBB25:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x154))); _flag_b = (uint32_t)(0xFFFFFFDFu);
    MEM32(ebp + (-0x154)) = MEM32(ebp + (-0x154)) & 0xFFFFFFDFu; /* 0x007BBB25: and dword ptr [ebp - 0x154], 0xffffffdf */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0xD4); /* 0x007BBB2C: lea ecx, [ebp - 0xd4] */
    goto L_0040A000; /* 0x007BBB32: jmp 0x40a000 */
L_007BBB37:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007BBB37: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BBB38(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BBB38u);

    goto L_007BBB38;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BBB38:
    edx = MEM32(esp + 0x8); /* 0x007BBB38: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BBB3C: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x178)); /* 0x007BBB3F: mov ecx, dword ptr [edx - 0x178] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BBB45: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BBB47: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x8)); /* 0x007BBB4C: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BBB4F: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BBB51: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x008456A0u; /* 0x007BBB56: mov eax, 0x8456a0 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BBB5B: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BBB60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BBB60u);

L_007BBB60:
    ecx = MEM32(ebp + (-0x64)); /* 0x007BBB60: mov ecx, dword ptr [ebp - 0x64] */
    goto L_0040A000; /* 0x007BBB63: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BBB68(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BBB68u);

L_007BBB68:
    ecx = ebp + (-0x28); /* 0x007BBB68: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007BBB6B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BBB70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BBB70u);

L_007BBB70:
    ecx = MEM32(ebp + (-0x60)); /* 0x007BBB70: mov ecx, dword ptr [ebp - 0x60] */
    goto L_0040A000; /* 0x007BBB73: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BBB78(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BBB78u);

    goto L_007BBB78;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BBB78:
    edx = MEM32(esp + 0x8); /* 0x007BBB78: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BBB7C: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x64)); /* 0x007BBB7F: mov ecx, dword ptr [edx - 0x64] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BBB82: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BBB84: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x007BBB89: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BBB8C: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BBB8E: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00845738u; /* 0x007BBB93: mov eax, 0x845738 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BBB98: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BBBA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BBBA0u);

L_007BBBA0:
    ecx = MEM32(ebp + (-0xE4)); /* 0x007BBBA0: mov ecx, dword ptr [ebp - 0xe4] */
    goto L_0040A000; /* 0x007BBBA6: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BBBAB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BBBABu);

L_007BBBAB:
    ecx = MEM32(ebp + (-0xE8)); /* 0x007BBBAB: mov ecx, dword ptr [ebp - 0xe8] */
    goto L_0040A000; /* 0x007BBBB1: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BBBB6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BBBB6u);

L_007BBBB6:
    ecx = MEM32(ebp + (-0xE4)); /* 0x007BBBB6: mov ecx, dword ptr [ebp - 0xe4] */
    goto L_0040A000; /* 0x007BBBBC: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BBBC1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BBBC1u);

L_007BBBC1:
    ecx = ebp + (-0x80); /* 0x007BBBC1: lea ecx, [ebp - 0x80] */
    goto L_0040A000; /* 0x007BBBC4: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BBBC9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BBBC9u);

L_007BBBC9:
    ecx = MEM32(ebp + (-0xE4)); /* 0x007BBBC9: mov ecx, dword ptr [ebp - 0xe4] */
    goto L_0040A000; /* 0x007BBBCF: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BBBD4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BBBD4u);

L_007BBBD4:
    ecx = ebp + (-0x68); /* 0x007BBBD4: lea ecx, [ebp - 0x68] */
    goto L_0040A000; /* 0x007BBBD7: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BBBDC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BBBDCu);

L_007BBBDC:
    ecx = ebp + (-0x2C); /* 0x007BBBDC: lea ecx, [ebp - 0x2c] */
    goto L_0040A000; /* 0x007BBBDF: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BBBE4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BBBE4u);

L_007BBBE4:
    ecx = MEM32(ebp + (-0xE8)); /* 0x007BBBE4: mov ecx, dword ptr [ebp - 0xe8] */
    goto L_0040A000; /* 0x007BBBEA: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BBBEF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BBBEFu);

L_007BBBEF:
    ecx = MEM32(ebp + (-0xF4)); /* 0x007BBBEF: mov ecx, dword ptr [ebp - 0xf4] */
    goto L_0040A000; /* 0x007BBBF5: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BBBFA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BBBFAu);

L_007BBBFA:
    ecx = MEM32(ebp + (-0xF4)); /* 0x007BBBFA: mov ecx, dword ptr [ebp - 0xf4] */
    goto L_0040A000; /* 0x007BBC00: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BBC05(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BBC05u);

L_007BBC05:
    ecx = ebp + (-0x44); /* 0x007BBC05: lea ecx, [ebp - 0x44] */
    goto L_0040A000; /* 0x007BBC08: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BBC0D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BBC0Du);

L_007BBC0D:
    ecx = MEM32(ebp + (-0xEC)); /* 0x007BBC0D: mov ecx, dword ptr [ebp - 0xec] */
    goto L_0040A000; /* 0x007BBC13: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BBC18(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BBC18u);

L_007BBC18:
    ecx = ebp + (-0x44); /* 0x007BBC18: lea ecx, [ebp - 0x44] */
    goto L_0040A000; /* 0x007BBC1B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BBC20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BBC20u);

L_007BBC20:
    ecx = ebp + (-0xC8); /* 0x007BBC20: lea ecx, [ebp - 0xc8] */
    goto L_0040A000; /* 0x007BBC26: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BBC2B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BBC2Bu);

L_007BBC2B:
    ecx = ebp + (-0xE0); /* 0x007BBC2B: lea ecx, [ebp - 0xe0] */
    goto L_0040A000; /* 0x007BBC31: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BBC36(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BBC36u);

L_007BBC36:
    ecx = ebp + (-0xB0); /* 0x007BBC36: lea ecx, [ebp - 0xb0] */
    goto L_0040A000; /* 0x007BBC3C: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BBC41(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BBC41u);

L_007BBC41:
    ecx = ebp + (-0x98); /* 0x007BBC41: lea ecx, [ebp - 0x98] */
    goto L_0040A000; /* 0x007BBC47: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BBC4C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BBC4Cu);

L_007BBC4C:
    goto L_00409980; /* 0x007BBC4C: jmp 0x409980 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00409980: RECOMP_ITAIL(0x00409980u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BBC51(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BBC51u);

L_007BBC51:
    ecx = MEM32(ebp + (-0xF4)); /* 0x007BBC51: mov ecx, dword ptr [ebp - 0xf4] */
    goto L_0040A000; /* 0x007BBC57: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BBC5C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BBC5Cu);

L_007BBC5C:
    ecx = ebp + (-0x44); /* 0x007BBC5C: lea ecx, [ebp - 0x44] */
    goto L_0040A000; /* 0x007BBC5F: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BBC64(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BBC64u);

L_007BBC64:
    ecx = MEM32(ebp + (-0xEC)); /* 0x007BBC64: mov ecx, dword ptr [ebp - 0xec] */
    goto L_0040A000; /* 0x007BBC6A: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BBC6F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BBC6Fu);

    goto L_007BBC6F;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BBC6F:
    edx = MEM32(esp + 0x8); /* 0x007BBC6F: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BBC73: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xF8)); /* 0x007BBC76: mov ecx, dword ptr [edx - 0xf8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BBC7C: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BBC7E: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x8)); /* 0x007BBC83: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BBC86: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BBC88: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00845788u; /* 0x007BBC8D: mov eax, 0x845788 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BBC92: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BBCA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BBCA0u);

L_007BBCA0:
    ecx = MEM32(ebp + (-0x160)); /* 0x007BBCA0: mov ecx, dword ptr [ebp - 0x160] */
    goto L_0040A000; /* 0x007BBCA6: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BBCAB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BBCABu);

L_007BBCAB:
    ecx = ebp + (-0x128); /* 0x007BBCAB: lea ecx, [ebp - 0x128] */
    goto L_0040A000; /* 0x007BBCB1: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BBCB6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BBCB6u);

L_007BBCB6:
    ecx = MEM32(ebp + (-0x15C)); /* 0x007BBCB6: mov ecx, dword ptr [ebp - 0x15c] */
    goto L_0040A000; /* 0x007BBCBC: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BBCC1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BBCC1u);

L_007BBCC1:
    ecx = MEM32(ebp + (-0x15C)); /* 0x007BBCC1: mov ecx, dword ptr [ebp - 0x15c] */
    goto L_0040A000; /* 0x007BBCC7: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BBCCC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BBCCCu);

L_007BBCCC:
    ecx = ebp + (-0x128); /* 0x007BBCCC: lea ecx, [ebp - 0x128] */
    goto L_0040A000; /* 0x007BBCD2: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BBCD7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BBCD7u);

L_007BBCD7:
    ecx = MEM32(ebp + (-0x160)); /* 0x007BBCD7: mov ecx, dword ptr [ebp - 0x160] */
    goto L_0040A000; /* 0x007BBCDD: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BBCE2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BBCE2u);

L_007BBCE2:
    eax = MEM32(ebp + (-0x164)); /* 0x007BBCE2: mov eax, dword ptr [ebp - 0x164] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x007BBCE8: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007BBD03; /* 0x007BBCEB: je 0x7bbd03 */
L_007BBCF1:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x164))); _flag_b = (uint32_t)(0xFFFFFFFEu);
    MEM32(ebp + (-0x164)) = MEM32(ebp + (-0x164)) & 0xFFFFFFFEu; /* 0x007BBCF1: and dword ptr [ebp - 0x164], 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0x188)); /* 0x007BBCF8: mov ecx, dword ptr [ebp - 0x188] */
    goto L_00429F40; /* 0x007BBCFE: jmp 0x429f40 */
L_007BBD03:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007BBD03: ret  */
    L_00429F40: RECOMP_ITAIL(0x00429F40u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BBD04(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BBD04u);

L_007BBD04:
    ecx = MEM32(ebp + (-0x15C)); /* 0x007BBD04: mov ecx, dword ptr [ebp - 0x15c] */
    goto L_0040A000; /* 0x007BBD0A: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BBD0F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BBD0Fu);

L_007BBD0F:
    ecx = ebp + (-0x140); /* 0x007BBD0F: lea ecx, [ebp - 0x140] */
    goto L_0040A000; /* 0x007BBD15: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BBD1A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BBD1Au);

L_007BBD1A:
    ecx = MEM32(ebp + (-0x160)); /* 0x007BBD1A: mov ecx, dword ptr [ebp - 0x160] */
    goto L_0040A000; /* 0x007BBD20: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BBD25(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BBD25u);

L_007BBD25:
    ecx = ebp + (-0x128); /* 0x007BBD25: lea ecx, [ebp - 0x128] */
    goto L_0040A000; /* 0x007BBD2B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BBD30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BBD30u);

    goto L_007BBD30;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BBD30:
    edx = MEM32(esp + 0x8); /* 0x007BBD30: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BBD34: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x1E4)); /* 0x007BBD37: mov ecx, dword ptr [edx - 0x1e4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BBD3D: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BBD3F: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x007BBD44: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BBD47: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BBD49: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00845868u; /* 0x007BBD4E: mov eax, 0x845868 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BBD53: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BBD60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BBD60u);

L_007BBD60:
    goto L_00409980; /* 0x007BBD60: jmp 0x409980 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00409980: RECOMP_ITAIL(0x00409980u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BBD65(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BBD65u);

    goto L_007BBD65;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BBD65:
    edx = MEM32(esp + 0x8); /* 0x007BBD65: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BBD69: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x007BBD6C: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BBD6F: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BBD71: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00845900u; /* 0x007BBD76: mov eax, 0x845900 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BBD7B: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BBD80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BBD80u);

    goto L_007BBD80;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BBD80:
    edx = MEM32(esp + 0x8); /* 0x007BBD80: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BBD84: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x20)); /* 0x007BBD87: mov ecx, dword ptr [edx - 0x20] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BBD8A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BBD8C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00845960u; /* 0x007BBD91: mov eax, 0x845960 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BBD96: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BBDA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BBDA0u);

    goto L_007BBDA0;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BBDA0:
    edx = MEM32(esp + 0x8); /* 0x007BBDA0: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BBDA4: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x007BBDA7: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BBDAA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BBDAC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x008459B8u; /* 0x007BBDB1: mov eax, 0x8459b8 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BBDB6: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BBDC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BBDC0u);

L_007BBDC0:
    eax = MEM32(ebp + (-0x10)); /* 0x007BBDC0: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007BBDC3: push eax */
    RECOMP_ICALL(MEM32(0x7CC6A8)); /* 0x007BBDC4: call dword ptr [0x7cc6a8] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007BBDCA: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007BBDCB: ret  */
    RECOMP_REGS_OUT();
}

void sub_007BBDCC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BBDCCu);

    goto L_007BBDCC;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BBDCC:
    edx = MEM32(esp + 0x8); /* 0x007BBDCC: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BBDD0: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x10)); /* 0x007BBDD3: mov ecx, dword ptr [edx - 0x10] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BBDD6: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BBDD8: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00845A10u; /* 0x007BBDDD: mov eax, 0x845a10 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BBDE2: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BBDF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BBDF0u);

L_007BBDF0:
    ecx = MEM32(ebp + (-0x10)); /* 0x007BBDF0: mov ecx, dword ptr [ebp - 0x10] */
    { _itail_tgt = (uint32_t)(MEM32(0x7CC520)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BBDF9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BBDF9u);

    goto L_007BBDF9;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BBDF9:
    edx = MEM32(esp + 0x8); /* 0x007BBDF9: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BBDFD: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xC)); /* 0x007BBE00: mov ecx, dword ptr [edx - 0xc] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BBE03: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BBE05: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00845A3Cu; /* 0x007BBE0A: mov eax, 0x845a3c */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BBE0F: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BBE20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BBE20u);

L_007BBE20:
    ecx = MEM32(ebp + (-0x10)); /* 0x007BBE20: mov ecx, dword ptr [ebp - 0x10] */
    { _itail_tgt = (uint32_t)(MEM32(0x7CC520)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BBE29(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BBE29u);

    goto L_007BBE29;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BBE29:
    edx = MEM32(esp + 0x8); /* 0x007BBE29: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BBE2D: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x8)); /* 0x007BBE30: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BBE33: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BBE35: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00845A68u; /* 0x007BBE3A: mov eax, 0x845a68 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BBE3F: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BBE50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BBE50u);

L_007BBE50:
    ecx = MEM32(ebp + (-0x14)); /* 0x007BBE50: mov ecx, dword ptr [ebp - 0x14] */
    { _itail_tgt = (uint32_t)(MEM32(0x7CC520)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BBE59(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BBE59u);

L_007BBE59:
    ecx = MEM32(ebp + (-0x14)); /* 0x007BBE59: mov ecx, dword ptr [ebp - 0x14] */
    goto L_00664A80; /* 0x007BBE5C: jmp 0x664a80 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00664A80: RECOMP_ITAIL(0x00664A80u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BBE61(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BBE61u);

    goto L_007BBE61;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BBE61:
    edx = MEM32(esp + 0x8); /* 0x007BBE61: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BBE65: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x10)); /* 0x007BBE68: mov ecx, dword ptr [edx - 0x10] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BBE6B: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BBE6D: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00845A94u; /* 0x007BBE72: mov eax, 0x845a94 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BBE77: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BBE80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BBE80u);

L_007BBE80:
    ecx = MEM32(ebp + (-0x10)); /* 0x007BBE80: mov ecx, dword ptr [ebp - 0x10] */
    goto L_00664A80; /* 0x007BBE83: jmp 0x664a80 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00664A80: RECOMP_ITAIL(0x00664A80u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BBE88(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BBE88u);

L_007BBE88:
    ecx = MEM32(ebp + (-0x10)); /* 0x007BBE88: mov ecx, dword ptr [ebp - 0x10] */
    { _itail_tgt = (uint32_t)(MEM32(0x7CC520)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BBE91(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BBE91u);

    goto L_007BBE91;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BBE91:
    edx = MEM32(esp + 0x8); /* 0x007BBE91: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BBE95: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xC)); /* 0x007BBE98: mov ecx, dword ptr [edx - 0xc] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BBE9B: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BBE9D: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00845AC8u; /* 0x007BBEA2: mov eax, 0x845ac8 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BBEA7: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BBEB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BBEB0u);

L_007BBEB0:
    ecx = MEM32(ebp + (-0x10)); /* 0x007BBEB0: mov ecx, dword ptr [ebp - 0x10] */
    goto L_00664A80; /* 0x007BBEB3: jmp 0x664a80 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00664A80: RECOMP_ITAIL(0x00664A80u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BBEB8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BBEB8u);

L_007BBEB8:
    ecx = MEM32(ebp + (-0x10)); /* 0x007BBEB8: mov ecx, dword ptr [ebp - 0x10] */
    { _itail_tgt = (uint32_t)(MEM32(0x7CC520)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BBEC1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BBEC1u);

    goto L_007BBEC1;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BBEC1:
    edx = MEM32(esp + 0x8); /* 0x007BBEC1: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BBEC5: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x8)); /* 0x007BBEC8: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BBECB: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BBECD: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00845AFCu; /* 0x007BBED2: mov eax, 0x845afc */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BBED7: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BBEE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BBEE0u);

L_007BBEE0:
    ecx = ebp + (-0x248); /* 0x007BBEE0: lea ecx, [ebp - 0x248] */
    goto L_00558880; /* 0x007BBEE6: jmp 0x558880 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00558880: RECOMP_ITAIL(0x00558880u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BBEEB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BBEEBu);

L_007BBEEB:
    ecx = ebp + (-0x230); /* 0x007BBEEB: lea ecx, [ebp - 0x230] */
    goto L_00558880; /* 0x007BBEF1: jmp 0x558880 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00558880: RECOMP_ITAIL(0x00558880u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BBEF6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BBEF6u);

L_007BBEF6:
    eax = MEM32(ebp + (-0x24C)); /* 0x007BBEF6: mov eax, dword ptr [ebp - 0x24c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x007BBEFC: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007BBF17; /* 0x007BBEFF: je 0x7bbf17 */
L_007BBF05:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24C))); _flag_b = (uint32_t)(0xFFFFFFFEu);
    MEM32(ebp + (-0x24C)) = MEM32(ebp + (-0x24C)) & 0xFFFFFFFEu; /* 0x007BBF05: and dword ptr [ebp - 0x24c], 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0x250)); /* 0x007BBF0C: mov ecx, dword ptr [ebp - 0x250] */
    goto L_00558880; /* 0x007BBF12: jmp 0x558880 */
L_007BBF17:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007BBF17: ret  */
    L_00558880: RECOMP_ITAIL(0x00558880u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BBF18(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BBF18u);

    goto L_007BBF18;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BBF18:
    edx = MEM32(esp + 0x8); /* 0x007BBF18: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BBF1C: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x254)); /* 0x007BBF1F: mov ecx, dword ptr [edx - 0x254] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BBF25: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BBF27: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x007BBF2C: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BBF2F: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BBF31: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00845B30u; /* 0x007BBF36: mov eax, 0x845b30 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BBF3B: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BBF40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BBF40u);

L_007BBF40:
    ecx = ebp + (-0x58); /* 0x007BBF40: lea ecx, [ebp - 0x58] */
    goto L_00558880; /* 0x007BBF43: jmp 0x558880 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00558880: RECOMP_ITAIL(0x00558880u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BBF48(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BBF48u);

L_007BBF48:
    ecx = ebp + (-0x40); /* 0x007BBF48: lea ecx, [ebp - 0x40] */
    goto L_00558880; /* 0x007BBF4B: jmp 0x558880 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00558880: RECOMP_ITAIL(0x00558880u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BBF50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BBF50u);

L_007BBF50:
    ecx = ebp + (-0x28); /* 0x007BBF50: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007BBF53: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BBF58(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BBF58u);

L_007BBF58:
    eax = MEM32(ebp + (-0x5C)); /* 0x007BBF58: mov eax, dword ptr [ebp - 0x5c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x007BBF5B: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007BBF70; /* 0x007BBF5E: je 0x7bbf70 */
L_007BBF64:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x5C))); _flag_b = (uint32_t)(0xFFFFFFFEu);
    MEM32(ebp + (-0x5C)) = MEM32(ebp + (-0x5C)) & 0xFFFFFFFEu; /* 0x007BBF64: and dword ptr [ebp - 0x5c], 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0x64)); /* 0x007BBF68: mov ecx, dword ptr [ebp - 0x64] */
    goto L_00558880; /* 0x007BBF6B: jmp 0x558880 */
L_007BBF70:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007BBF70: ret  */
    L_00558880: RECOMP_ITAIL(0x00558880u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BBF71(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BBF71u);

    goto L_007BBF71;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BBF71:
    edx = MEM32(esp + 0x8); /* 0x007BBF71: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BBF75: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x6C)); /* 0x007BBF78: mov ecx, dword ptr [edx - 0x6c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BBF7B: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BBF7D: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x007BBF82: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BBF85: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BBF87: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00845B74u; /* 0x007BBF8C: mov eax, 0x845b74 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BBF91: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BBFA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BBFA0u);

L_007BBFA0:
    ecx = ebp + (-0x58); /* 0x007BBFA0: lea ecx, [ebp - 0x58] */
    goto L_00665440; /* 0x007BBFA3: jmp 0x665440 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00665440: RECOMP_ITAIL(0x00665440u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BBFA8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BBFA8u);

L_007BBFA8:
    eax = MEM32(ebp + (-0x5C)); /* 0x007BBFA8: mov eax, dword ptr [ebp - 0x5c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x007BBFAB: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007BBFC0; /* 0x007BBFAE: je 0x7bbfc0 */
L_007BBFB4:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x5C))); _flag_b = (uint32_t)(0xFFFFFFFEu);
    MEM32(ebp + (-0x5C)) = MEM32(ebp + (-0x5C)) & 0xFFFFFFFEu; /* 0x007BBFB4: and dword ptr [ebp - 0x5c], 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0x60)); /* 0x007BBFB8: mov ecx, dword ptr [ebp - 0x60] */
    goto L_00558880; /* 0x007BBFBB: jmp 0x558880 */
L_007BBFC0:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007BBFC0: ret  */
    L_00558880: RECOMP_ITAIL(0x00558880u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BBFC1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BBFC1u);

    goto L_007BBFC1;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BBFC1:
    edx = MEM32(esp + 0x8); /* 0x007BBFC1: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BBFC5: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x64)); /* 0x007BBFC8: mov ecx, dword ptr [edx - 0x64] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BBFCB: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BBFCD: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x007BBFD2: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BBFD5: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BBFD7: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00845BC0u; /* 0x007BBFDC: mov eax, 0x845bc0 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BBFE1: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BBFF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BBFF0u);

L_007BBFF0:
    ecx = ebp + (-0x58); /* 0x007BBFF0: lea ecx, [ebp - 0x58] */
    goto L_00665440; /* 0x007BBFF3: jmp 0x665440 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00665440: RECOMP_ITAIL(0x00665440u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BBFF8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BBFF8u);

L_007BBFF8:
    eax = MEM32(ebp + (-0x5C)); /* 0x007BBFF8: mov eax, dword ptr [ebp - 0x5c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x007BBFFB: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007BC010; /* 0x007BBFFE: je 0x7bc010 */
L_007BC004:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x5C))); _flag_b = (uint32_t)(0xFFFFFFFEu);
    MEM32(ebp + (-0x5C)) = MEM32(ebp + (-0x5C)) & 0xFFFFFFFEu; /* 0x007BC004: and dword ptr [ebp - 0x5c], 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0x60)); /* 0x007BC008: mov ecx, dword ptr [ebp - 0x60] */
    goto L_0040A000; /* 0x007BC00B: jmp 0x40a000 */
L_007BC010:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007BC010: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BC011(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC011u);

    goto L_007BC011;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BC011:
    edx = MEM32(esp + 0x8); /* 0x007BC011: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BC015: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x64)); /* 0x007BC018: mov ecx, dword ptr [edx - 0x64] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BC01B: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BC01D: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x007BC022: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BC025: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BC027: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00845BF4u; /* 0x007BC02C: mov eax, 0x845bf4 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BC031: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BC040(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC040u);

L_007BC040:
    ecx = MEM32(ebp + (-0x10)); /* 0x007BC040: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x007BC043: add ecx, 8 */
    _flag_k = FK_ADD;
    goto L_0052C530; /* 0x007BC046: jmp 0x52c530 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0052C530: RECOMP_ITAIL(0x0052C530u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BC04B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC04Bu);

L_007BC04B:
    ecx = MEM32(ebp + (-0x10)); /* 0x007BC04B: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xCu; /* 0x007BC04E: add ecx, 0xc */
    _flag_k = FK_ADD;
    goto L_0040A000; /* 0x007BC051: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BC056(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC056u);

L_007BC056:
    ecx = MEM32(ebp + (-0x10)); /* 0x007BC056: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x24u; /* 0x007BC059: add ecx, 0x24 */
    _flag_k = FK_ADD;
    goto L_00558880; /* 0x007BC05C: jmp 0x558880 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00558880: RECOMP_ITAIL(0x00558880u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BC061(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC061u);

L_007BC061:
    eax = MEM32(ebp + (-0x14)); /* 0x007BC061: mov eax, dword ptr [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x007BC064: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007BC065: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007BC06B: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007BC06C: ret  */
    RECOMP_REGS_OUT();
}

void sub_007BC06D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC06Du);

L_007BC06D:
    ecx = MEM32(ebp + (-0x14)); /* 0x007BC06D: mov ecx, dword ptr [ebp - 0x14] */
    { _itail_tgt = (uint32_t)(MEM32(0x7CC25C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BC076(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC076u);

    goto L_007BC076;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BC076:
    edx = MEM32(esp + 0x8); /* 0x007BC076: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BC07A: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x007BC07D: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BC080: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BC082: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00845C28u; /* 0x007BC087: mov eax, 0x845c28 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BC08C: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BC0A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC0A0u);

L_007BC0A0:
    ecx = MEM32(ebp + (-0x10)); /* 0x007BC0A0: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x007BC0A3: add ecx, 8 */
    _flag_k = FK_ADD;
    goto L_0052C530; /* 0x007BC0A6: jmp 0x52c530 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0052C530: RECOMP_ITAIL(0x0052C530u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BC0AB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC0ABu);

L_007BC0AB:
    ecx = MEM32(ebp + (-0x10)); /* 0x007BC0AB: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xCu; /* 0x007BC0AE: add ecx, 0xc */
    _flag_k = FK_ADD;
    goto L_0040A000; /* 0x007BC0B1: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BC0B6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC0B6u);

L_007BC0B6:
    ecx = MEM32(ebp + (-0x10)); /* 0x007BC0B6: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x24u; /* 0x007BC0B9: add ecx, 0x24 */
    _flag_k = FK_ADD;
    goto L_00558880; /* 0x007BC0BC: jmp 0x558880 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00558880: RECOMP_ITAIL(0x00558880u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BC0C1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC0C1u);

    goto L_007BC0C1;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BC0C1:
    edx = MEM32(esp + 0x8); /* 0x007BC0C1: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BC0C5: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xC)); /* 0x007BC0C8: mov ecx, dword ptr [edx - 0xc] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BC0CB: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BC0CD: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00845C74u; /* 0x007BC0D2: mov eax, 0x845c74 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BC0D7: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BC0E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC0E0u);

L_007BC0E0:
    ecx = MEM32(ebp + (-0x10)); /* 0x007BC0E0: mov ecx, dword ptr [ebp - 0x10] */
    { _itail_tgt = (uint32_t)(MEM32(0x7CC25C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BC0E9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC0E9u);

L_007BC0E9:
    ecx = MEM32(ebp + (-0x10)); /* 0x007BC0E9: mov ecx, dword ptr [ebp - 0x10] */
    { _itail_tgt = (uint32_t)(MEM32(0x7CC248)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BC0F2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC0F2u);

L_007BC0F2:
    ecx = MEM32(ebp + (-0x10)); /* 0x007BC0F2: mov ecx, dword ptr [ebp - 0x10] */
    { _itail_tgt = (uint32_t)(MEM32(0x7CC2B8)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BC0FB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC0FBu);

L_007BC0FB:
    ecx = MEM32(ebp + (-0x10)); /* 0x007BC0FB: mov ecx, dword ptr [ebp - 0x10] */
    { _itail_tgt = (uint32_t)(MEM32(0x7CC2A8)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BC104(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC104u);

    goto L_007BC104;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BC104:
    edx = MEM32(esp + 0x8); /* 0x007BC104: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BC108: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xC)); /* 0x007BC10B: mov ecx, dword ptr [edx - 0xc] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BC10E: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BC110: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00845CB0u; /* 0x007BC115: mov eax, 0x845cb0 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BC11A: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BC120(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC120u);

L_007BC120:
    ecx = ebp + 0x8; /* 0x007BC120: lea ecx, [ebp + 8] */
    goto L_0052C530; /* 0x007BC123: jmp 0x52c530 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0052C530: RECOMP_ITAIL(0x0052C530u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BC128(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC128u);

    goto L_007BC128;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BC128:
    edx = MEM32(esp + 0x8); /* 0x007BC128: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BC12C: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x10)); /* 0x007BC12F: mov ecx, dword ptr [edx - 0x10] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BC132: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BC134: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00845CF4u; /* 0x007BC139: mov eax, 0x845cf4 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BC13E: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BC150(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC150u);

L_007BC150:
    ecx = ebp + (-0x44); /* 0x007BC150: lea ecx, [ebp - 0x44] */
    goto L_00558880; /* 0x007BC153: jmp 0x558880 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00558880: RECOMP_ITAIL(0x00558880u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BC158(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC158u);

L_007BC158:
    ecx = ebp + (-0x2C); /* 0x007BC158: lea ecx, [ebp - 0x2c] */
    goto L_00558880; /* 0x007BC15B: jmp 0x558880 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00558880: RECOMP_ITAIL(0x00558880u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BC160(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC160u);

L_007BC160:
    eax = MEM32(ebp + (-0x54)); /* 0x007BC160: mov eax, dword ptr [ebp - 0x54] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x007BC163: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007BC178; /* 0x007BC166: je 0x7bc178 */
L_007BC16C:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x54))); _flag_b = (uint32_t)(0xFFFFFFFEu);
    MEM32(ebp + (-0x54)) = MEM32(ebp + (-0x54)) & 0xFFFFFFFEu; /* 0x007BC16C: and dword ptr [ebp - 0x54], 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0x68)); /* 0x007BC170: mov ecx, dword ptr [ebp - 0x68] */
    goto L_00558880; /* 0x007BC173: jmp 0x558880 */
L_007BC178:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007BC178: ret  */
    L_00558880: RECOMP_ITAIL(0x00558880u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}
