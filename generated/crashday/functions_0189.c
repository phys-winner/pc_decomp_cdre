#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_007A613A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A613Au);

L_007A613A:
    ecx = ebp + (-0x1420); /* 0x007A613A: lea ecx, [ebp - 0x1420] */
    goto L_0040A000; /* 0x007A6140: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A6145(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A6145u);

L_007A6145:
    ecx = ebp + (-0x7C0); /* 0x007A6145: lea ecx, [ebp - 0x7c0] */
    goto L_0040A000; /* 0x007A614B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A6150(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A6150u);

L_007A6150:
    ecx = ebp + (-0x7F0); /* 0x007A6150: lea ecx, [ebp - 0x7f0] */
    goto L_0040A000; /* 0x007A6156: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A615B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A615Bu);

L_007A615B:
    ecx = ebp + (-0x1210); /* 0x007A615B: lea ecx, [ebp - 0x1210] */
    goto L_0040A000; /* 0x007A6161: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A6166(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A6166u);

L_007A6166:
    eax = MEM32(ebp + (-0x1638)); /* 0x007A6166: mov eax, dword ptr [ebp - 0x1638] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x007A616C: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007A6187; /* 0x007A616F: je 0x7a6187 */
L_007A6175:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1638))); _flag_b = (uint32_t)(0xFFFFFFFEu);
    MEM32(ebp + (-0x1638)) = MEM32(ebp + (-0x1638)) & 0xFFFFFFFEu; /* 0x007A6175: and dword ptr [ebp - 0x1638], 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0xE68); /* 0x007A617C: lea ecx, [ebp - 0xe68] */
    goto L_0040A000; /* 0x007A6182: jmp 0x40a000 */
L_007A6187:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007A6187: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A6188(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A6188u);

L_007A6188:
    eax = MEM32(ebp + (-0x1638)); /* 0x007A6188: mov eax, dword ptr [ebp - 0x1638] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    eax = eax & 2; /* 0x007A618E: and eax, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007A61A9; /* 0x007A6191: je 0x7a61a9 */
L_007A6197:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1638))); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ebp + (-0x1638)) = MEM32(ebp + (-0x1638)) & 0xFFFFFFFDu; /* 0x007A6197: and dword ptr [ebp - 0x1638], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0xE38); /* 0x007A619E: lea ecx, [ebp - 0xe38] */
    goto L_0040A000; /* 0x007A61A4: jmp 0x40a000 */
L_007A61A9:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007A61A9: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A61AA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A61AAu);

L_007A61AA:
    eax = MEM32(ebp + (-0x1638)); /* 0x007A61AA: mov eax, dword ptr [ebp - 0x1638] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    eax = eax & 4; /* 0x007A61B0: and eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007A61CB; /* 0x007A61B3: je 0x7a61cb */
L_007A61B9:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1638))); _flag_b = (uint32_t)(0xFFFFFFFBu);
    MEM32(ebp + (-0x1638)) = MEM32(ebp + (-0x1638)) & 0xFFFFFFFBu; /* 0x007A61B9: and dword ptr [ebp - 0x1638], 0xfffffffb */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0xE08); /* 0x007A61C0: lea ecx, [ebp - 0xe08] */
    goto L_0040A000; /* 0x007A61C6: jmp 0x40a000 */
L_007A61CB:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007A61CB: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A61CC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A61CCu);

L_007A61CC:
    eax = MEM32(ebp + (-0x1638)); /* 0x007A61CC: mov eax, dword ptr [ebp - 0x1638] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    eax = eax & 8; /* 0x007A61D2: and eax, 8 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007A61ED; /* 0x007A61D5: je 0x7a61ed */
L_007A61DB:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1638))); _flag_b = (uint32_t)(0xFFFFFFF7u);
    MEM32(ebp + (-0x1638)) = MEM32(ebp + (-0x1638)) & 0xFFFFFFF7u; /* 0x007A61DB: and dword ptr [ebp - 0x1638], 0xfffffff7 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0xDF0); /* 0x007A61E2: lea ecx, [ebp - 0xdf0] */
    goto L_0040A000; /* 0x007A61E8: jmp 0x40a000 */
L_007A61ED:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007A61ED: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A61EE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A61EEu);

L_007A61EE:
    eax = MEM32(ebp + (-0x1638)); /* 0x007A61EE: mov eax, dword ptr [ebp - 0x1638] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    eax = eax & 0x10u; /* 0x007A61F4: and eax, 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007A620F; /* 0x007A61F7: je 0x7a620f */
L_007A61FD:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1638))); _flag_b = (uint32_t)(0xFFFFFFEFu);
    MEM32(ebp + (-0x1638)) = MEM32(ebp + (-0x1638)) & 0xFFFFFFEFu; /* 0x007A61FD: and dword ptr [ebp - 0x1638], 0xffffffef */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0xF58); /* 0x007A6204: lea ecx, [ebp - 0xf58] */
    goto L_0040A000; /* 0x007A620A: jmp 0x40a000 */
L_007A620F:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007A620F: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A6210(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A6210u);

L_007A6210:
    eax = MEM32(ebp + (-0x1638)); /* 0x007A6210: mov eax, dword ptr [ebp - 0x1638] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    eax = eax & 0x20u; /* 0x007A6216: and eax, 0x20 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007A6231; /* 0x007A6219: je 0x7a6231 */
L_007A621F:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1638))); _flag_b = (uint32_t)(0xFFFFFFDFu);
    MEM32(ebp + (-0x1638)) = MEM32(ebp + (-0x1638)) & 0xFFFFFFDFu; /* 0x007A621F: and dword ptr [ebp - 0x1638], 0xffffffdf */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0xF28); /* 0x007A6226: lea ecx, [ebp - 0xf28] */
    goto L_0040A000; /* 0x007A622C: jmp 0x40a000 */
L_007A6231:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007A6231: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A6232(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A6232u);

L_007A6232:
    eax = MEM32(ebp + (-0x1638)); /* 0x007A6232: mov eax, dword ptr [ebp - 0x1638] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x40u);
    eax = eax & 0x40u; /* 0x007A6238: and eax, 0x40 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007A6253; /* 0x007A623B: je 0x7a6253 */
L_007A6241:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1638))); _flag_b = (uint32_t)(0xFFFFFFBFu);
    MEM32(ebp + (-0x1638)) = MEM32(ebp + (-0x1638)) & 0xFFFFFFBFu; /* 0x007A6241: and dword ptr [ebp - 0x1638], 0xffffffbf */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0xEF8); /* 0x007A6248: lea ecx, [ebp - 0xef8] */
    goto L_0040A000; /* 0x007A624E: jmp 0x40a000 */
L_007A6253:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007A6253: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A6254(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A6254u);

L_007A6254:
    eax = MEM32(ebp + (-0x1638)); /* 0x007A6254: mov eax, dword ptr [ebp - 0x1638] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80u);
    eax = eax & 0x80u; /* 0x007A625A: and eax, 0x80 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007A627A; /* 0x007A625F: je 0x7a627a */
L_007A6265:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1638))); _flag_b = (uint32_t)(0xFFFFFF7Fu);
    MEM32(ebp + (-0x1638)) = MEM32(ebp + (-0x1638)) & 0xFFFFFF7Fu; /* 0x007A6265: and dword ptr [ebp - 0x1638], 0xffffff7f */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0xEC8); /* 0x007A626F: lea ecx, [ebp - 0xec8] */
    goto L_0040A000; /* 0x007A6275: jmp 0x40a000 */
L_007A627A:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007A627A: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A627B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A627Bu);

L_007A627B:
    eax = MEM32(ebp + (-0x1638)); /* 0x007A627B: mov eax, dword ptr [ebp - 0x1638] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x100u);
    eax = eax & 0x100u; /* 0x007A6281: and eax, 0x100 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007A62A1; /* 0x007A6286: je 0x7a62a1 */
L_007A628C:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1638))); _flag_b = (uint32_t)(0xFFFFFEFFu);
    MEM32(ebp + (-0x1638)) = MEM32(ebp + (-0x1638)) & 0xFFFFFEFFu; /* 0x007A628C: and dword ptr [ebp - 0x1638], 0xfffffeff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0xE98); /* 0x007A6296: lea ecx, [ebp - 0xe98] */
    goto L_0040A000; /* 0x007A629C: jmp 0x40a000 */
L_007A62A1:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007A62A1: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A62A2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A62A2u);

L_007A62A2:
    ecx = ebp + (-0xF88); /* 0x007A62A2: lea ecx, [ebp - 0xf88] */
    goto L_0040A000; /* 0x007A62A8: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A62AD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A62ADu);

L_007A62AD:
    eax = MEM32(ebp + (-0x1638)); /* 0x007A62AD: mov eax, dword ptr [ebp - 0x1638] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x200u);
    eax = eax & 0x200u; /* 0x007A62B3: and eax, 0x200 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007A62D3; /* 0x007A62B8: je 0x7a62d3 */
L_007A62BE:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1638))); _flag_b = (uint32_t)(0xFFFFFDFFu);
    MEM32(ebp + (-0x1638)) = MEM32(ebp + (-0x1638)) & 0xFFFFFDFFu; /* 0x007A62BE: and dword ptr [ebp - 0x1638], 0xfffffdff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x10A8); /* 0x007A62C8: lea ecx, [ebp - 0x10a8] */
    goto L_0040A000; /* 0x007A62CE: jmp 0x40a000 */
L_007A62D3:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007A62D3: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A62D4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A62D4u);

L_007A62D4:
    eax = MEM32(ebp + (-0x1638)); /* 0x007A62D4: mov eax, dword ptr [ebp - 0x1638] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x400u);
    eax = eax & 0x400u; /* 0x007A62DA: and eax, 0x400 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007A62FA; /* 0x007A62DF: je 0x7a62fa */
L_007A62E5:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1638))); _flag_b = (uint32_t)(0xFFFFFBFFu);
    MEM32(ebp + (-0x1638)) = MEM32(ebp + (-0x1638)) & 0xFFFFFBFFu; /* 0x007A62E5: and dword ptr [ebp - 0x1638], 0xfffffbff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x1078); /* 0x007A62EF: lea ecx, [ebp - 0x1078] */
    goto L_0040A000; /* 0x007A62F5: jmp 0x40a000 */
L_007A62FA:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007A62FA: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A62FB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A62FBu);

L_007A62FB:
    eax = MEM32(ebp + (-0x1638)); /* 0x007A62FB: mov eax, dword ptr [ebp - 0x1638] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x800u);
    eax = eax & 0x800u; /* 0x007A6301: and eax, 0x800 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007A6321; /* 0x007A6306: je 0x7a6321 */
L_007A630C:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1638))); _flag_b = (uint32_t)(0xFFFFF7FFu);
    MEM32(ebp + (-0x1638)) = MEM32(ebp + (-0x1638)) & 0xFFFFF7FFu; /* 0x007A630C: and dword ptr [ebp - 0x1638], 0xfffff7ff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x1048); /* 0x007A6316: lea ecx, [ebp - 0x1048] */
    goto L_0040A000; /* 0x007A631C: jmp 0x40a000 */
L_007A6321:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007A6321: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A6322(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A6322u);

L_007A6322:
    eax = MEM32(ebp + (-0x1638)); /* 0x007A6322: mov eax, dword ptr [ebp - 0x1638] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1000u);
    eax = eax & 0x1000u; /* 0x007A6328: and eax, 0x1000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007A6348; /* 0x007A632D: je 0x7a6348 */
L_007A6333:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1638))); _flag_b = (uint32_t)(0xFFFFEFFFu);
    MEM32(ebp + (-0x1638)) = MEM32(ebp + (-0x1638)) & 0xFFFFEFFFu; /* 0x007A6333: and dword ptr [ebp - 0x1638], 0xffffefff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x1018); /* 0x007A633D: lea ecx, [ebp - 0x1018] */
    goto L_0040A000; /* 0x007A6343: jmp 0x40a000 */
L_007A6348:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007A6348: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A6349(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A6349u);

L_007A6349:
    eax = MEM32(ebp + (-0x1638)); /* 0x007A6349: mov eax, dword ptr [ebp - 0x1638] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x2000u);
    eax = eax & 0x2000u; /* 0x007A634F: and eax, 0x2000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007A636F; /* 0x007A6354: je 0x7a636f */
L_007A635A:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1638))); _flag_b = (uint32_t)(0xFFFFDFFFu);
    MEM32(ebp + (-0x1638)) = MEM32(ebp + (-0x1638)) & 0xFFFFDFFFu; /* 0x007A635A: and dword ptr [ebp - 0x1638], 0xffffdfff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0xFE8); /* 0x007A6364: lea ecx, [ebp - 0xfe8] */
    goto L_0040A000; /* 0x007A636A: jmp 0x40a000 */
L_007A636F:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007A636F: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A6370(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A6370u);

L_007A6370:
    eax = MEM32(ebp + (-0x1638)); /* 0x007A6370: mov eax, dword ptr [ebp - 0x1638] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x4000u);
    eax = eax & 0x4000u; /* 0x007A6376: and eax, 0x4000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007A6396; /* 0x007A637B: je 0x7a6396 */
L_007A6381:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1638))); _flag_b = (uint32_t)(0xFFFFBFFFu);
    MEM32(ebp + (-0x1638)) = MEM32(ebp + (-0x1638)) & 0xFFFFBFFFu; /* 0x007A6381: and dword ptr [ebp - 0x1638], 0xffffbfff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0xFB8); /* 0x007A638B: lea ecx, [ebp - 0xfb8] */
    goto L_0040A000; /* 0x007A6391: jmp 0x40a000 */
L_007A6396:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007A6396: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A6397(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A6397u);

L_007A6397:
    eax = MEM32(ebp + (-0x1638)); /* 0x007A6397: mov eax, dword ptr [ebp - 0x1638] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8000u);
    eax = eax & 0x8000u; /* 0x007A639D: and eax, 0x8000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007A63BD; /* 0x007A63A2: je 0x7a63bd */
L_007A63A8:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1638))); _flag_b = (uint32_t)(0xFFFF7FFFu);
    MEM32(ebp + (-0x1638)) = MEM32(ebp + (-0x1638)) & 0xFFFF7FFFu; /* 0x007A63A8: and dword ptr [ebp - 0x1638], 0xffff7fff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x1198); /* 0x007A63B2: lea ecx, [ebp - 0x1198] */
    goto L_0040A000; /* 0x007A63B8: jmp 0x40a000 */
L_007A63BD:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007A63BD: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A63BE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A63BEu);

L_007A63BE:
    eax = MEM32(ebp + (-0x1638)); /* 0x007A63BE: mov eax, dword ptr [ebp - 0x1638] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00010000u);
    eax = eax & 0x00010000u; /* 0x007A63C4: and eax, 0x10000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007A63E4; /* 0x007A63C9: je 0x7a63e4 */
L_007A63CF:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1638))); _flag_b = (uint32_t)(0xFFFEFFFFu);
    MEM32(ebp + (-0x1638)) = MEM32(ebp + (-0x1638)) & 0xFFFEFFFFu; /* 0x007A63CF: and dword ptr [ebp - 0x1638], 0xfffeffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x1168); /* 0x007A63D9: lea ecx, [ebp - 0x1168] */
    goto L_0040A000; /* 0x007A63DF: jmp 0x40a000 */
L_007A63E4:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007A63E4: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A63E5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A63E5u);

L_007A63E5:
    eax = MEM32(ebp + (-0x1638)); /* 0x007A63E5: mov eax, dword ptr [ebp - 0x1638] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00020000u);
    eax = eax & 0x00020000u; /* 0x007A63EB: and eax, 0x20000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007A640B; /* 0x007A63F0: je 0x7a640b */
L_007A63F6:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1638))); _flag_b = (uint32_t)(0xFFFDFFFFu);
    MEM32(ebp + (-0x1638)) = MEM32(ebp + (-0x1638)) & 0xFFFDFFFFu; /* 0x007A63F6: and dword ptr [ebp - 0x1638], 0xfffdffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x1138); /* 0x007A6400: lea ecx, [ebp - 0x1138] */
    goto L_0040A000; /* 0x007A6406: jmp 0x40a000 */
L_007A640B:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007A640B: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A640C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A640Cu);

L_007A640C:
    eax = MEM32(ebp + (-0x1638)); /* 0x007A640C: mov eax, dword ptr [ebp - 0x1638] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00040000u);
    eax = eax & 0x00040000u; /* 0x007A6412: and eax, 0x40000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007A6432; /* 0x007A6417: je 0x7a6432 */
L_007A641D:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1638))); _flag_b = (uint32_t)(0xFFFBFFFFu);
    MEM32(ebp + (-0x1638)) = MEM32(ebp + (-0x1638)) & 0xFFFBFFFFu; /* 0x007A641D: and dword ptr [ebp - 0x1638], 0xfffbffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x1108); /* 0x007A6427: lea ecx, [ebp - 0x1108] */
    goto L_0040A000; /* 0x007A642D: jmp 0x40a000 */
L_007A6432:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007A6432: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A6433(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A6433u);

L_007A6433:
    eax = MEM32(ebp + (-0x1638)); /* 0x007A6433: mov eax, dword ptr [ebp - 0x1638] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00080000u);
    eax = eax & 0x00080000u; /* 0x007A6439: and eax, 0x80000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007A6459; /* 0x007A643E: je 0x7a6459 */
L_007A6444:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1638))); _flag_b = (uint32_t)(0xFFF7FFFFu);
    MEM32(ebp + (-0x1638)) = MEM32(ebp + (-0x1638)) & 0xFFF7FFFFu; /* 0x007A6444: and dword ptr [ebp - 0x1638], 0xfff7ffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x10D8); /* 0x007A644E: lea ecx, [ebp - 0x10d8] */
    goto L_0040A000; /* 0x007A6454: jmp 0x40a000 */
L_007A6459:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007A6459: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A645A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A645Au);

L_007A645A:
    ecx = ebp + (-0x850); /* 0x007A645A: lea ecx, [ebp - 0x850] */
    goto L_0040A000; /* 0x007A6460: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A6465(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A6465u);

L_007A6465:
    ecx = ebp + (-0x820); /* 0x007A6465: lea ecx, [ebp - 0x820] */
    goto L_0040A000; /* 0x007A646B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A6470(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A6470u);

L_007A6470:
    ecx = ebp + (-0x11C8); /* 0x007A6470: lea ecx, [ebp - 0x11c8] */
    goto L_0040A000; /* 0x007A6476: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A647B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A647Bu);

L_007A647B:
    ecx = ebp + (-0x3A0); /* 0x007A647B: lea ecx, [ebp - 0x3a0] */
    goto L_0040A000; /* 0x007A6481: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A6486(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A6486u);

L_007A6486:
    ecx = ebp + (-0x880); /* 0x007A6486: lea ecx, [ebp - 0x880] */
    goto L_0040A000; /* 0x007A648C: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A6491(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A6491u);

L_007A6491:
    ecx = ebp + (-0x11F8); /* 0x007A6491: lea ecx, [ebp - 0x11f8] */
    goto L_0040A000; /* 0x007A6497: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A649C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A649Cu);

L_007A649C:
    ecx = ebp + (-0x8E0); /* 0x007A649C: lea ecx, [ebp - 0x8e0] */
    goto L_0040A000; /* 0x007A64A2: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A64A7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A64A7u);

L_007A64A7:
    ecx = ebp + (-0x8B0); /* 0x007A64A7: lea ecx, [ebp - 0x8b0] */
    goto L_0040A000; /* 0x007A64AD: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A64B2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A64B2u);

L_007A64B2:
    ecx = ebp + (-0x1228); /* 0x007A64B2: lea ecx, [ebp - 0x1228] */
    goto L_0040A000; /* 0x007A64B8: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A64BD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A64BDu);

L_007A64BD:
    ecx = ebp + (-0x940); /* 0x007A64BD: lea ecx, [ebp - 0x940] */
    goto L_0040A000; /* 0x007A64C3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A64C8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A64C8u);

L_007A64C8:
    ecx = ebp + (-0x910); /* 0x007A64C8: lea ecx, [ebp - 0x910] */
    goto L_0040A000; /* 0x007A64CE: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A64D3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A64D3u);

L_007A64D3:
    ecx = ebp + (-0x1258); /* 0x007A64D3: lea ecx, [ebp - 0x1258] */
    goto L_0040A000; /* 0x007A64D9: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A64DE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A64DEu);

L_007A64DE:
    ecx = ebp + (-0x9A0); /* 0x007A64DE: lea ecx, [ebp - 0x9a0] */
    goto L_0040A000; /* 0x007A64E4: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A64E9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A64E9u);

L_007A64E9:
    ecx = ebp + (-0x970); /* 0x007A64E9: lea ecx, [ebp - 0x970] */
    goto L_0040A000; /* 0x007A64EF: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A64F4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A64F4u);

L_007A64F4:
    ecx = ebp + (-0x1288); /* 0x007A64F4: lea ecx, [ebp - 0x1288] */
    goto L_0040A000; /* 0x007A64FA: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A64FF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A64FFu);

L_007A64FF:
    ecx = ebp + (-0xA00); /* 0x007A64FF: lea ecx, [ebp - 0xa00] */
    goto L_0040A000; /* 0x007A6505: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A650A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A650Au);

L_007A650A:
    ecx = ebp + (-0x9D0); /* 0x007A650A: lea ecx, [ebp - 0x9d0] */
    goto L_0040A000; /* 0x007A6510: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A6515(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A6515u);

L_007A6515:
    ecx = ebp + (-0x12B8); /* 0x007A6515: lea ecx, [ebp - 0x12b8] */
    goto L_0040A000; /* 0x007A651B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A6520(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A6520u);

L_007A6520:
    ecx = ebp + (-0xA60); /* 0x007A6520: lea ecx, [ebp - 0xa60] */
    goto L_0040A000; /* 0x007A6526: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A652B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A652Bu);

L_007A652B:
    ecx = ebp + (-0xA30); /* 0x007A652B: lea ecx, [ebp - 0xa30] */
    goto L_0040A000; /* 0x007A6531: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A6536(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A6536u);

L_007A6536:
    ecx = ebp + (-0x12E8); /* 0x007A6536: lea ecx, [ebp - 0x12e8] */
    goto L_0040A000; /* 0x007A653C: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A6541(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A6541u);

L_007A6541:
    ecx = ebp + (-0xAC0); /* 0x007A6541: lea ecx, [ebp - 0xac0] */
    goto L_0040A000; /* 0x007A6547: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A654C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A654Cu);

L_007A654C:
    ecx = ebp + (-0xA90); /* 0x007A654C: lea ecx, [ebp - 0xa90] */
    goto L_0040A000; /* 0x007A6552: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A6557(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A6557u);

L_007A6557:
    ecx = ebp + (-0x1318); /* 0x007A6557: lea ecx, [ebp - 0x1318] */
    goto L_0040A000; /* 0x007A655D: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A6562(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A6562u);

L_007A6562:
    ecx = ebp + (-0xAF0); /* 0x007A6562: lea ecx, [ebp - 0xaf0] */
    goto L_0040A000; /* 0x007A6568: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A656D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A656Du);

L_007A656D:
    ecx = ebp + (-0xB20); /* 0x007A656D: lea ecx, [ebp - 0xb20] */
    goto L_0040A000; /* 0x007A6573: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A6578(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A6578u);

L_007A6578:
    ecx = ebp + (-0x1348); /* 0x007A6578: lea ecx, [ebp - 0x1348] */
    goto L_0040A000; /* 0x007A657E: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A6583(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A6583u);

L_007A6583:
    ecx = ebp + (-0x1378); /* 0x007A6583: lea ecx, [ebp - 0x1378] */
    goto L_0040A000; /* 0x007A6589: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A658E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A658Eu);

L_007A658E:
    ecx = ebp + (-0xB50); /* 0x007A658E: lea ecx, [ebp - 0xb50] */
    goto L_0040A000; /* 0x007A6594: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A6599(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A6599u);

L_007A6599:
    ecx = ebp + (-0x13D8); /* 0x007A6599: lea ecx, [ebp - 0x13d8] */
    goto L_0040A000; /* 0x007A659F: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A65A4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A65A4u);

L_007A65A4:
    ecx = ebp + (-0x13A8); /* 0x007A65A4: lea ecx, [ebp - 0x13a8] */
    goto L_0040A000; /* 0x007A65AA: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A65AF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A65AFu);

L_007A65AF:
    ecx = ebp + (-0xB80); /* 0x007A65AF: lea ecx, [ebp - 0xb80] */
    goto L_0040A000; /* 0x007A65B5: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A65BA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A65BAu);

L_007A65BA:
    ecx = MEM32(ebp + (-0x1648)); /* 0x007A65BA: mov ecx, dword ptr [ebp - 0x1648] */
    goto L_0040A000; /* 0x007A65C0: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A65C5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A65C5u);

L_007A65C5:
    ecx = ebp + (-0x1408); /* 0x007A65C5: lea ecx, [ebp - 0x1408] */
    goto L_0040A000; /* 0x007A65CB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A65D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A65D0u);

L_007A65D0:
    ecx = ebp + (-0xBB0); /* 0x007A65D0: lea ecx, [ebp - 0xbb0] */
    goto L_0040A000; /* 0x007A65D6: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A65DB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A65DBu);

L_007A65DB:
    ecx = ebp + (-0xBE0); /* 0x007A65DB: lea ecx, [ebp - 0xbe0] */
    goto L_0040A000; /* 0x007A65E1: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A65E6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A65E6u);

L_007A65E6:
    ecx = ebp + (-0x1438); /* 0x007A65E6: lea ecx, [ebp - 0x1438] */
    goto L_0040A000; /* 0x007A65EC: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A65F1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A65F1u);

L_007A65F1:
    ecx = ebp + (-0x3B8); /* 0x007A65F1: lea ecx, [ebp - 0x3b8] */
    goto L_0040A000; /* 0x007A65F7: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A65FC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A65FCu);

L_007A65FC:
    ecx = ebp + (-0x1498); /* 0x007A65FC: lea ecx, [ebp - 0x1498] */
    goto L_0040A000; /* 0x007A6602: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A6607(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A6607u);

L_007A6607:
    ecx = ebp + (-0x1468); /* 0x007A6607: lea ecx, [ebp - 0x1468] */
    goto L_0040A000; /* 0x007A660D: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A6612(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A6612u);

L_007A6612:
    ecx = ebp + (-0x3D0); /* 0x007A6612: lea ecx, [ebp - 0x3d0] */
    goto L_0040A000; /* 0x007A6618: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A661D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A661Du);

L_007A661D:
    ecx = ebp + (-0xC10); /* 0x007A661D: lea ecx, [ebp - 0xc10] */
    goto L_0040A000; /* 0x007A6623: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A6628(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A6628u);

L_007A6628:
    ecx = ebp + (-0x14C8); /* 0x007A6628: lea ecx, [ebp - 0x14c8] */
    goto L_0040A000; /* 0x007A662E: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A6633(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A6633u);

L_007A6633:
    ecx = ebp + (-0x3E8); /* 0x007A6633: lea ecx, [ebp - 0x3e8] */
    goto L_0040A000; /* 0x007A6639: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A663E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A663Eu);

L_007A663E:
    ecx = ebp + (-0x1528); /* 0x007A663E: lea ecx, [ebp - 0x1528] */
    goto L_0040A000; /* 0x007A6644: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A6649(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A6649u);

L_007A6649:
    ecx = ebp + (-0x14F8); /* 0x007A6649: lea ecx, [ebp - 0x14f8] */
    goto L_0040A000; /* 0x007A664F: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A6654(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A6654u);

L_007A6654:
    ecx = ebp + (-0x400); /* 0x007A6654: lea ecx, [ebp - 0x400] */
    goto L_0040A000; /* 0x007A665A: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A665F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A665Fu);

L_007A665F:
    ecx = ebp + (-0x418); /* 0x007A665F: lea ecx, [ebp - 0x418] */
    goto L_0040A000; /* 0x007A6665: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A666A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A666Au);

L_007A666A:
    ecx = ebp + (-0x1570); /* 0x007A666A: lea ecx, [ebp - 0x1570] */
    goto L_0040A000; /* 0x007A6670: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A6675(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A6675u);

L_007A6675:
    ecx = ebp + (-0xC70); /* 0x007A6675: lea ecx, [ebp - 0xc70] */
    goto L_0040A000; /* 0x007A667B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A6680(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A6680u);

L_007A6680:
    ecx = ebp + (-0x15D0); /* 0x007A6680: lea ecx, [ebp - 0x15d0] */
    goto L_0040A000; /* 0x007A6686: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A668B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A668Bu);

L_007A668B:
    ecx = ebp + (-0x15A0); /* 0x007A668B: lea ecx, [ebp - 0x15a0] */
    goto L_0040A000; /* 0x007A6691: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A6696(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A6696u);

L_007A6696:
    ecx = ebp + (-0x388); /* 0x007A6696: lea ecx, [ebp - 0x388] */
    goto L_0040A000; /* 0x007A669C: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A66A1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A66A1u);

L_007A66A1:
    ecx = ebp + (-0xCA0); /* 0x007A66A1: lea ecx, [ebp - 0xca0] */
    goto L_0040A000; /* 0x007A66A7: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A66AC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A66ACu);

L_007A66AC:
    ecx = ebp + (-0xD00); /* 0x007A66AC: lea ecx, [ebp - 0xd00] */
    goto L_0040A000; /* 0x007A66B2: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A66B7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A66B7u);

L_007A66B7:
    ecx = ebp + (-0xCD0); /* 0x007A66B7: lea ecx, [ebp - 0xcd0] */
    goto L_0040A000; /* 0x007A66BD: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A66C2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A66C2u);

L_007A66C2:
    ecx = ebp + (-0x1600); /* 0x007A66C2: lea ecx, [ebp - 0x1600] */
    goto L_0040A000; /* 0x007A66C8: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A66CD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A66CDu);

L_007A66CD:
    ecx = ebp + (-0xD30); /* 0x007A66CD: lea ecx, [ebp - 0xd30] */
    goto L_0040A000; /* 0x007A66D3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A66D8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A66D8u);

L_007A66D8:
    ecx = ebp + (-0x1630); /* 0x007A66D8: lea ecx, [ebp - 0x1630] */
    goto L_0040A000; /* 0x007A66DE: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A66E3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A66E3u);

L_007A66E3:
    ecx = ebp + (-0xD60); /* 0x007A66E3: lea ecx, [ebp - 0xd60] */
    goto L_0040A000; /* 0x007A66E9: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A66EE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A66EEu);

L_007A66EE:
    ecx = ebp + (-0x1558); /* 0x007A66EE: lea ecx, [ebp - 0x1558] */
    goto L_0040A000; /* 0x007A66F4: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A66F9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A66F9u);

L_007A66F9:
    ecx = ebp + (-0xD90); /* 0x007A66F9: lea ecx, [ebp - 0xd90] */
    goto L_0040A000; /* 0x007A66FF: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A6704(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A6704u);

L_007A6704:
    ecx = ebp + (-0xDC0); /* 0x007A6704: lea ecx, [ebp - 0xdc0] */
    goto L_0040A000; /* 0x007A670A: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A670F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A670Fu);

L_007A670F:
    ecx = ebp + (-0xDD8); /* 0x007A670F: lea ecx, [ebp - 0xdd8] */
    goto L_0040A000; /* 0x007A6715: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A671A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A671Au);

L_007A671A:
    ecx = ebp + (-0x448); /* 0x007A671A: lea ecx, [ebp - 0x448] */
    goto L_0040A000; /* 0x007A6720: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A6725(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A6725u);

L_007A6725:
    ecx = ebp + (-0xE20); /* 0x007A6725: lea ecx, [ebp - 0xe20] */
    goto L_0040A000; /* 0x007A672B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A6730(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A6730u);

L_007A6730:
    ecx = ebp + (-0x28); /* 0x007A6730: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007A6733: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A6738(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A6738u);

L_007A6738:
    ecx = ebp + (-0x28); /* 0x007A6738: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007A673B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A6740(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A6740u);

L_007A6740:
    ecx = ebp + (-0x40); /* 0x007A6740: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x007A6743: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A6748(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A6748u);

L_007A6748:
    ecx = ebp + (-0x58); /* 0x007A6748: lea ecx, [ebp - 0x58] */
    goto L_0040A000; /* 0x007A674B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A6750(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A6750u);

L_007A6750:
    ecx = ebp + (-0x28); /* 0x007A6750: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007A6753: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A6758(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A6758u);

L_007A6758:
    ecx = ebp + (-0x40); /* 0x007A6758: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x007A675B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A6760(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A6760u);

    goto L_007A6760;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007A6760:
    edx = MEM32(esp + 0x8); /* 0x007A6760: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007A6764: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x1654)); /* 0x007A6767: mov ecx, dword ptr [edx - 0x1654] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007A676D: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007A676F: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x007A6774: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007A6777: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007A6779: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0082FB30u; /* 0x007A677E: mov eax, 0x82fb30 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007A6783: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007A6790(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A6790u);

L_007A6790:
    ecx = ebp + (-0x134); /* 0x007A6790: lea ecx, [ebp - 0x134] */
    goto L_0040A000; /* 0x007A6796: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A679B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A679Bu);

L_007A679B:
    ecx = ebp + (-0x11C); /* 0x007A679B: lea ecx, [ebp - 0x11c] */
    goto L_0040A000; /* 0x007A67A1: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}
