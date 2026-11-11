#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_00785FCC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00785FCCu);

L_00785FCC:
    eax = MEM32(ebp + (-0x1800)); /* 0x00785FCC: mov eax, dword ptr [ebp - 0x1800] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00080000u);
    eax = eax & 0x00080000u; /* 0x00785FD2: and eax, 0x80000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00785FF2; /* 0x00785FD7: je 0x785ff2 */
L_00785FDD:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1800))); _flag_b = (uint32_t)(0xFFF7FFFFu);
    MEM32(ebp + (-0x1800)) = MEM32(ebp + (-0x1800)) & 0xFFF7FFFFu; /* 0x00785FDD: and dword ptr [ebp - 0x1800], 0xfff7ffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x9A0); /* 0x00785FE7: lea ecx, [ebp - 0x9a0] */
    goto L_0040A000; /* 0x00785FED: jmp 0x40a000 */
L_00785FF2:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00785FF2: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00785FF3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00785FF3u);

L_00785FF3:
    eax = MEM32(ebp + (-0x1800)); /* 0x00785FF3: mov eax, dword ptr [ebp - 0x1800] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00100000u);
    eax = eax & 0x00100000u; /* 0x00785FF9: and eax, 0x100000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00786019; /* 0x00785FFE: je 0x786019 */
L_00786004:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1800))); _flag_b = (uint32_t)(0xFFEFFFFFu);
    MEM32(ebp + (-0x1800)) = MEM32(ebp + (-0x1800)) & 0xFFEFFFFFu; /* 0x00786004: and dword ptr [ebp - 0x1800], 0xffefffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x970); /* 0x0078600E: lea ecx, [ebp - 0x970] */
    goto L_0040A000; /* 0x00786014: jmp 0x40a000 */
L_00786019:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00786019: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078601A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078601Au);

L_0078601A:
    eax = MEM32(ebp + (-0x1800)); /* 0x0078601A: mov eax, dword ptr [ebp - 0x1800] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00200000u);
    eax = eax & 0x00200000u; /* 0x00786020: and eax, 0x200000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00786040; /* 0x00786025: je 0x786040 */
L_0078602B:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1800))); _flag_b = (uint32_t)(0xFFDFFFFFu);
    MEM32(ebp + (-0x1800)) = MEM32(ebp + (-0x1800)) & 0xFFDFFFFFu; /* 0x0078602B: and dword ptr [ebp - 0x1800], 0xffdfffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x1570); /* 0x00786035: lea ecx, [ebp - 0x1570] */
    goto L_0040A000; /* 0x0078603B: jmp 0x40a000 */
L_00786040:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00786040: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00786041(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00786041u);

L_00786041:
    eax = MEM32(ebp + (-0x1800)); /* 0x00786041: mov eax, dword ptr [ebp - 0x1800] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00400000u);
    eax = eax & 0x00400000u; /* 0x00786047: and eax, 0x400000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00786067; /* 0x0078604C: je 0x786067 */
L_00786052:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1800))); _flag_b = (uint32_t)(0xFFBFFFFFu);
    MEM32(ebp + (-0x1800)) = MEM32(ebp + (-0x1800)) & 0xFFBFFFFFu; /* 0x00786052: and dword ptr [ebp - 0x1800], 0xffbfffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x1540); /* 0x0078605C: lea ecx, [ebp - 0x1540] */
    goto L_0040A000; /* 0x00786062: jmp 0x40a000 */
L_00786067:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00786067: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00786068(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00786068u);

L_00786068:
    eax = MEM32(ebp + (-0x1800)); /* 0x00786068: mov eax, dword ptr [ebp - 0x1800] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00800000u);
    eax = eax & 0x00800000u; /* 0x0078606E: and eax, 0x800000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0078608E; /* 0x00786073: je 0x78608e */
L_00786079:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1800))); _flag_b = (uint32_t)(0xFF7FFFFFu);
    MEM32(ebp + (-0x1800)) = MEM32(ebp + (-0x1800)) & 0xFF7FFFFFu; /* 0x00786079: and dword ptr [ebp - 0x1800], 0xff7fffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x1510); /* 0x00786083: lea ecx, [ebp - 0x1510] */
    goto L_0040A000; /* 0x00786089: jmp 0x40a000 */
L_0078608E:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0078608E: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078608F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078608Fu);

L_0078608F:
    eax = MEM32(ebp + (-0x1800)); /* 0x0078608F: mov eax, dword ptr [ebp - 0x1800] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x01000000u);
    eax = eax & 0x01000000u; /* 0x00786095: and eax, 0x1000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007860B5; /* 0x0078609A: je 0x7860b5 */
L_007860A0:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1800))); _flag_b = (uint32_t)(0xFEFFFFFFu);
    MEM32(ebp + (-0x1800)) = MEM32(ebp + (-0x1800)) & 0xFEFFFFFFu; /* 0x007860A0: and dword ptr [ebp - 0x1800], 0xfeffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x14E0); /* 0x007860AA: lea ecx, [ebp - 0x14e0] */
    goto L_0040A000; /* 0x007860B0: jmp 0x40a000 */
L_007860B5:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007860B5: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007860B6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007860B6u);

L_007860B6:
    eax = MEM32(ebp + (-0x1800)); /* 0x007860B6: mov eax, dword ptr [ebp - 0x1800] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x02000000u);
    eax = eax & 0x02000000u; /* 0x007860BC: and eax, 0x2000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007860DC; /* 0x007860C1: je 0x7860dc */
L_007860C7:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1800))); _flag_b = (uint32_t)(0xFDFFFFFFu);
    MEM32(ebp + (-0x1800)) = MEM32(ebp + (-0x1800)) & 0xFDFFFFFFu; /* 0x007860C7: and dword ptr [ebp - 0x1800], 0xfdffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x940); /* 0x007860D1: lea ecx, [ebp - 0x940] */
    goto L_0040A000; /* 0x007860D7: jmp 0x40a000 */
L_007860DC:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007860DC: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007860DD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007860DDu);

L_007860DD:
    eax = MEM32(ebp + (-0x1800)); /* 0x007860DD: mov eax, dword ptr [ebp - 0x1800] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x04000000u);
    eax = eax & 0x04000000u; /* 0x007860E3: and eax, 0x4000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00786103; /* 0x007860E8: je 0x786103 */
L_007860EE:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1800))); _flag_b = (uint32_t)(0xFBFFFFFFu);
    MEM32(ebp + (-0x1800)) = MEM32(ebp + (-0x1800)) & 0xFBFFFFFFu; /* 0x007860EE: and dword ptr [ebp - 0x1800], 0xfbffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x910); /* 0x007860F8: lea ecx, [ebp - 0x910] */
    goto L_0040A000; /* 0x007860FE: jmp 0x40a000 */
L_00786103:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00786103: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00786104(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00786104u);

L_00786104:
    eax = MEM32(ebp + (-0x1800)); /* 0x00786104: mov eax, dword ptr [ebp - 0x1800] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x08000000u);
    eax = eax & 0x08000000u; /* 0x0078610A: and eax, 0x8000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0078612A; /* 0x0078610F: je 0x78612a */
L_00786115:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1800))); _flag_b = (uint32_t)(0xF7FFFFFFu);
    MEM32(ebp + (-0x1800)) = MEM32(ebp + (-0x1800)) & 0xF7FFFFFFu; /* 0x00786115: and dword ptr [ebp - 0x1800], 0xf7ffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x14B0); /* 0x0078611F: lea ecx, [ebp - 0x14b0] */
    goto L_0040A000; /* 0x00786125: jmp 0x40a000 */
L_0078612A:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0078612A: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078612B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078612Bu);

L_0078612B:
    eax = MEM32(ebp + (-0x1800)); /* 0x0078612B: mov eax, dword ptr [ebp - 0x1800] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10000000u);
    eax = eax & 0x10000000u; /* 0x00786131: and eax, 0x10000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00786151; /* 0x00786136: je 0x786151 */
L_0078613C:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1800))); _flag_b = (uint32_t)(0xEFFFFFFFu);
    MEM32(ebp + (-0x1800)) = MEM32(ebp + (-0x1800)) & 0xEFFFFFFFu; /* 0x0078613C: and dword ptr [ebp - 0x1800], 0xefffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x1480); /* 0x00786146: lea ecx, [ebp - 0x1480] */
    goto L_0040A000; /* 0x0078614C: jmp 0x40a000 */
L_00786151:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00786151: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00786152(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00786152u);

L_00786152:
    eax = MEM32(ebp + (-0x1800)); /* 0x00786152: mov eax, dword ptr [ebp - 0x1800] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20000000u);
    eax = eax & 0x20000000u; /* 0x00786158: and eax, 0x20000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00786178; /* 0x0078615D: je 0x786178 */
L_00786163:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1800))); _flag_b = (uint32_t)(0xDFFFFFFFu);
    MEM32(ebp + (-0x1800)) = MEM32(ebp + (-0x1800)) & 0xDFFFFFFFu; /* 0x00786163: and dword ptr [ebp - 0x1800], 0xdfffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x1450); /* 0x0078616D: lea ecx, [ebp - 0x1450] */
    goto L_0040A000; /* 0x00786173: jmp 0x40a000 */
L_00786178:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00786178: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00786179(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00786179u);

L_00786179:
    eax = MEM32(ebp + (-0x1800)); /* 0x00786179: mov eax, dword ptr [ebp - 0x1800] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x40000000u);
    eax = eax & 0x40000000u; /* 0x0078617F: and eax, 0x40000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0078619F; /* 0x00786184: je 0x78619f */
L_0078618A:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1800))); _flag_b = (uint32_t)(0xBFFFFFFFu);
    MEM32(ebp + (-0x1800)) = MEM32(ebp + (-0x1800)) & 0xBFFFFFFFu; /* 0x0078618A: and dword ptr [ebp - 0x1800], 0xbfffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x1420); /* 0x00786194: lea ecx, [ebp - 0x1420] */
    goto L_0040A000; /* 0x0078619A: jmp 0x40a000 */
L_0078619F:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0078619F: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007861A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007861A0u);

L_007861A0:
    eax = MEM32(ebp + (-0x1800)); /* 0x007861A0: mov eax, dword ptr [ebp - 0x1800] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80000000u);
    eax = eax & 0x80000000u; /* 0x007861A6: and eax, 0x80000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007861C6; /* 0x007861AB: je 0x7861c6 */
L_007861B1:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1800))); _flag_b = (uint32_t)(0x7FFFFFFFu);
    MEM32(ebp + (-0x1800)) = MEM32(ebp + (-0x1800)) & 0x7FFFFFFFu; /* 0x007861B1: and dword ptr [ebp - 0x1800], 0x7fffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x8E0); /* 0x007861BB: lea ecx, [ebp - 0x8e0] */
    goto L_0040A000; /* 0x007861C1: jmp 0x40a000 */
L_007861C6:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007861C6: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007861C7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007861C7u);

L_007861C7:
    eax = MEM32(ebp + (-0x17F0)); /* 0x007861C7: mov eax, dword ptr [ebp - 0x17f0] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x007861CD: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007861E8; /* 0x007861D0: je 0x7861e8 */
L_007861D6:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x17F0))); _flag_b = (uint32_t)(0xFFFFFFFEu);
    MEM32(ebp + (-0x17F0)) = MEM32(ebp + (-0x17F0)) & 0xFFFFFFFEu; /* 0x007861D6: and dword ptr [ebp - 0x17f0], 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x8B0); /* 0x007861DD: lea ecx, [ebp - 0x8b0] */
    goto L_0040A000; /* 0x007861E3: jmp 0x40a000 */
L_007861E8:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007861E8: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007861E9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007861E9u);

L_007861E9:
    eax = MEM32(ebp + (-0x17F0)); /* 0x007861E9: mov eax, dword ptr [ebp - 0x17f0] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    eax = eax & 2; /* 0x007861EF: and eax, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0078620A; /* 0x007861F2: je 0x78620a */
L_007861F8:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x17F0))); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ebp + (-0x17F0)) = MEM32(ebp + (-0x17F0)) & 0xFFFFFFFDu; /* 0x007861F8: and dword ptr [ebp - 0x17f0], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x13F0); /* 0x007861FF: lea ecx, [ebp - 0x13f0] */
    goto L_0040A000; /* 0x00786205: jmp 0x40a000 */
L_0078620A:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0078620A: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078620B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078620Bu);

L_0078620B:
    eax = MEM32(ebp + (-0x17F0)); /* 0x0078620B: mov eax, dword ptr [ebp - 0x17f0] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    eax = eax & 4; /* 0x00786211: and eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0078622C; /* 0x00786214: je 0x78622c */
L_0078621A:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x17F0))); _flag_b = (uint32_t)(0xFFFFFFFBu);
    MEM32(ebp + (-0x17F0)) = MEM32(ebp + (-0x17F0)) & 0xFFFFFFFBu; /* 0x0078621A: and dword ptr [ebp - 0x17f0], 0xfffffffb */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x13C0); /* 0x00786221: lea ecx, [ebp - 0x13c0] */
    goto L_0040A000; /* 0x00786227: jmp 0x40a000 */
L_0078622C:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0078622C: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078622D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078622Du);

L_0078622D:
    eax = MEM32(ebp + (-0x17F0)); /* 0x0078622D: mov eax, dword ptr [ebp - 0x17f0] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    eax = eax & 8; /* 0x00786233: and eax, 8 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0078624E; /* 0x00786236: je 0x78624e */
L_0078623C:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x17F0))); _flag_b = (uint32_t)(0xFFFFFFF7u);
    MEM32(ebp + (-0x17F0)) = MEM32(ebp + (-0x17F0)) & 0xFFFFFFF7u; /* 0x0078623C: and dword ptr [ebp - 0x17f0], 0xfffffff7 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x1390); /* 0x00786243: lea ecx, [ebp - 0x1390] */
    goto L_0040A000; /* 0x00786249: jmp 0x40a000 */
L_0078624E:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0078624E: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078624F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078624Fu);

L_0078624F:
    eax = MEM32(ebp + (-0x17F0)); /* 0x0078624F: mov eax, dword ptr [ebp - 0x17f0] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    eax = eax & 0x10u; /* 0x00786255: and eax, 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00786270; /* 0x00786258: je 0x786270 */
L_0078625E:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x17F0))); _flag_b = (uint32_t)(0xFFFFFFEFu);
    MEM32(ebp + (-0x17F0)) = MEM32(ebp + (-0x17F0)) & 0xFFFFFFEFu; /* 0x0078625E: and dword ptr [ebp - 0x17f0], 0xffffffef */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x1360); /* 0x00786265: lea ecx, [ebp - 0x1360] */
    goto L_0040A000; /* 0x0078626B: jmp 0x40a000 */
L_00786270:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00786270: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00786271(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00786271u);

L_00786271:
    eax = MEM32(ebp + (-0x17F0)); /* 0x00786271: mov eax, dword ptr [ebp - 0x17f0] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    eax = eax & 0x20u; /* 0x00786277: and eax, 0x20 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00786292; /* 0x0078627A: je 0x786292 */
L_00786280:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x17F0))); _flag_b = (uint32_t)(0xFFFFFFDFu);
    MEM32(ebp + (-0x17F0)) = MEM32(ebp + (-0x17F0)) & 0xFFFFFFDFu; /* 0x00786280: and dword ptr [ebp - 0x17f0], 0xffffffdf */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x880); /* 0x00786287: lea ecx, [ebp - 0x880] */
    goto L_0040A000; /* 0x0078628D: jmp 0x40a000 */
L_00786292:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00786292: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00786293(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00786293u);

L_00786293:
    eax = MEM32(ebp + (-0x17F0)); /* 0x00786293: mov eax, dword ptr [ebp - 0x17f0] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x40u);
    eax = eax & 0x40u; /* 0x00786299: and eax, 0x40 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007862B4; /* 0x0078629C: je 0x7862b4 */
L_007862A2:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x17F0))); _flag_b = (uint32_t)(0xFFFFFFBFu);
    MEM32(ebp + (-0x17F0)) = MEM32(ebp + (-0x17F0)) & 0xFFFFFFBFu; /* 0x007862A2: and dword ptr [ebp - 0x17f0], 0xffffffbf */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x850); /* 0x007862A9: lea ecx, [ebp - 0x850] */
    goto L_0040A000; /* 0x007862AF: jmp 0x40a000 */
L_007862B4:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007862B4: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007862B5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007862B5u);

L_007862B5:
    eax = MEM32(ebp + (-0x17F0)); /* 0x007862B5: mov eax, dword ptr [ebp - 0x17f0] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80u);
    eax = eax & 0x80u; /* 0x007862BB: and eax, 0x80 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007862DB; /* 0x007862C0: je 0x7862db */
L_007862C6:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x17F0))); _flag_b = (uint32_t)(0xFFFFFF7Fu);
    MEM32(ebp + (-0x17F0)) = MEM32(ebp + (-0x17F0)) & 0xFFFFFF7Fu; /* 0x007862C6: and dword ptr [ebp - 0x17f0], 0xffffff7f */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x1330); /* 0x007862D0: lea ecx, [ebp - 0x1330] */
    goto L_0040A000; /* 0x007862D6: jmp 0x40a000 */
L_007862DB:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007862DB: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007862DC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007862DCu);

L_007862DC:
    eax = MEM32(ebp + (-0x17F0)); /* 0x007862DC: mov eax, dword ptr [ebp - 0x17f0] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x100u);
    eax = eax & 0x100u; /* 0x007862E2: and eax, 0x100 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00786302; /* 0x007862E7: je 0x786302 */
L_007862ED:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x17F0))); _flag_b = (uint32_t)(0xFFFFFEFFu);
    MEM32(ebp + (-0x17F0)) = MEM32(ebp + (-0x17F0)) & 0xFFFFFEFFu; /* 0x007862ED: and dword ptr [ebp - 0x17f0], 0xfffffeff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x1300); /* 0x007862F7: lea ecx, [ebp - 0x1300] */
    goto L_0040A000; /* 0x007862FD: jmp 0x40a000 */
L_00786302:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00786302: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00786303(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00786303u);

L_00786303:
    eax = MEM32(ebp + (-0x17F0)); /* 0x00786303: mov eax, dword ptr [ebp - 0x17f0] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x200u);
    eax = eax & 0x200u; /* 0x00786309: and eax, 0x200 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00786329; /* 0x0078630E: je 0x786329 */
L_00786314:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x17F0))); _flag_b = (uint32_t)(0xFFFFFDFFu);
    MEM32(ebp + (-0x17F0)) = MEM32(ebp + (-0x17F0)) & 0xFFFFFDFFu; /* 0x00786314: and dword ptr [ebp - 0x17f0], 0xfffffdff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x12D0); /* 0x0078631E: lea ecx, [ebp - 0x12d0] */
    goto L_0040A000; /* 0x00786324: jmp 0x40a000 */
L_00786329:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00786329: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078632A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078632Au);

L_0078632A:
    eax = MEM32(ebp + (-0x17F0)); /* 0x0078632A: mov eax, dword ptr [ebp - 0x17f0] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x400u);
    eax = eax & 0x400u; /* 0x00786330: and eax, 0x400 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00786350; /* 0x00786335: je 0x786350 */
L_0078633B:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x17F0))); _flag_b = (uint32_t)(0xFFFFFBFFu);
    MEM32(ebp + (-0x17F0)) = MEM32(ebp + (-0x17F0)) & 0xFFFFFBFFu; /* 0x0078633B: and dword ptr [ebp - 0x17f0], 0xfffffbff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x12A0); /* 0x00786345: lea ecx, [ebp - 0x12a0] */
    goto L_0040A000; /* 0x0078634B: jmp 0x40a000 */
L_00786350:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00786350: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00786351(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00786351u);

L_00786351:
    ecx = ebp + (-0x9D0); /* 0x00786351: lea ecx, [ebp - 0x9d0] */
    goto L_0040A000; /* 0x00786357: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078635C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078635Cu);

L_0078635C:
    eax = MEM32(ebp + (-0x17F0)); /* 0x0078635C: mov eax, dword ptr [ebp - 0x17f0] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x800u);
    eax = eax & 0x800u; /* 0x00786362: and eax, 0x800 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00786382; /* 0x00786367: je 0x786382 */
L_0078636D:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x17F0))); _flag_b = (uint32_t)(0xFFFFF7FFu);
    MEM32(ebp + (-0x17F0)) = MEM32(ebp + (-0x17F0)) & 0xFFFFF7FFu; /* 0x0078636D: and dword ptr [ebp - 0x17f0], 0xfffff7ff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0xB20); /* 0x00786377: lea ecx, [ebp - 0xb20] */
    goto L_0040A000; /* 0x0078637D: jmp 0x40a000 */
L_00786382:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00786382: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00786383(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00786383u);

L_00786383:
    eax = MEM32(ebp + (-0x17F0)); /* 0x00786383: mov eax, dword ptr [ebp - 0x17f0] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1000u);
    eax = eax & 0x1000u; /* 0x00786389: and eax, 0x1000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007863A9; /* 0x0078638E: je 0x7863a9 */
L_00786394:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x17F0))); _flag_b = (uint32_t)(0xFFFFEFFFu);
    MEM32(ebp + (-0x17F0)) = MEM32(ebp + (-0x17F0)) & 0xFFFFEFFFu; /* 0x00786394: and dword ptr [ebp - 0x17f0], 0xffffefff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x430); /* 0x0078639E: lea ecx, [ebp - 0x430] */
    goto L_0040A000; /* 0x007863A4: jmp 0x40a000 */
L_007863A9:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007863A9: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007863AA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007863AAu);

L_007863AA:
    eax = MEM32(ebp + (-0x17F0)); /* 0x007863AA: mov eax, dword ptr [ebp - 0x17f0] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x2000u);
    eax = eax & 0x2000u; /* 0x007863B0: and eax, 0x2000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007863D0; /* 0x007863B5: je 0x7863d0 */
L_007863BB:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x17F0))); _flag_b = (uint32_t)(0xFFFFDFFFu);
    MEM32(ebp + (-0x17F0)) = MEM32(ebp + (-0x17F0)) & 0xFFFFDFFFu; /* 0x007863BB: and dword ptr [ebp - 0x17f0], 0xffffdfff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0xB98); /* 0x007863C5: lea ecx, [ebp - 0xb98] */
    goto L_0040A000; /* 0x007863CB: jmp 0x40a000 */
L_007863D0:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007863D0: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007863D1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007863D1u);

L_007863D1:
    eax = MEM32(ebp + (-0x17F0)); /* 0x007863D1: mov eax, dword ptr [ebp - 0x17f0] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x4000u);
    eax = eax & 0x4000u; /* 0x007863D7: and eax, 0x4000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007863F7; /* 0x007863DC: je 0x7863f7 */
L_007863E2:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x17F0))); _flag_b = (uint32_t)(0xFFFFBFFFu);
    MEM32(ebp + (-0x17F0)) = MEM32(ebp + (-0x17F0)) & 0xFFFFBFFFu; /* 0x007863E2: and dword ptr [ebp - 0x17f0], 0xffffbfff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0xBE0); /* 0x007863EC: lea ecx, [ebp - 0xbe0] */
    goto L_0040A000; /* 0x007863F2: jmp 0x40a000 */
L_007863F7:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007863F7: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007863F8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007863F8u);

L_007863F8:
    eax = MEM32(ebp + (-0x17F0)); /* 0x007863F8: mov eax, dword ptr [ebp - 0x17f0] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8000u);
    eax = eax & 0x8000u; /* 0x007863FE: and eax, 0x8000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0078641E; /* 0x00786403: je 0x78641e */
L_00786409:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x17F0))); _flag_b = (uint32_t)(0xFFFF7FFFu);
    MEM32(ebp + (-0x17F0)) = MEM32(ebp + (-0x17F0)) & 0xFFFF7FFFu; /* 0x00786409: and dword ptr [ebp - 0x17f0], 0xffff7fff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x11C8); /* 0x00786413: lea ecx, [ebp - 0x11c8] */
    goto L_0040A000; /* 0x00786419: jmp 0x40a000 */
L_0078641E:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0078641E: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078641F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078641Fu);

L_0078641F:
    eax = MEM32(ebp + (-0x17F0)); /* 0x0078641F: mov eax, dword ptr [ebp - 0x17f0] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00010000u);
    eax = eax & 0x00010000u; /* 0x00786425: and eax, 0x10000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00786445; /* 0x0078642A: je 0x786445 */
L_00786430:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x17F0))); _flag_b = (uint32_t)(0xFFFEFFFFu);
    MEM32(ebp + (-0x17F0)) = MEM32(ebp + (-0x17F0)) & 0xFFFEFFFFu; /* 0x00786430: and dword ptr [ebp - 0x17f0], 0xfffeffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x17E0); /* 0x0078643A: lea ecx, [ebp - 0x17e0] */
    goto L_0040A000; /* 0x00786440: jmp 0x40a000 */
L_00786445:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00786445: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00786446(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00786446u);

L_00786446:
    eax = MEM32(ebp + (-0x17F0)); /* 0x00786446: mov eax, dword ptr [ebp - 0x17f0] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00020000u);
    eax = eax & 0x00020000u; /* 0x0078644C: and eax, 0x20000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0078646C; /* 0x00786451: je 0x78646c */
L_00786457:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x17F0))); _flag_b = (uint32_t)(0xFFFDFFFFu);
    MEM32(ebp + (-0x17F0)) = MEM32(ebp + (-0x17F0)) & 0xFFFDFFFFu; /* 0x00786457: and dword ptr [ebp - 0x17f0], 0xfffdffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0xAF0); /* 0x00786461: lea ecx, [ebp - 0xaf0] */
    goto L_0040A000; /* 0x00786467: jmp 0x40a000 */
L_0078646C:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0078646C: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078646D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078646Du);

L_0078646D:
    eax = MEM32(ebp + (-0x17F0)); /* 0x0078646D: mov eax, dword ptr [ebp - 0x17f0] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00040000u);
    eax = eax & 0x00040000u; /* 0x00786473: and eax, 0x40000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00786493; /* 0x00786478: je 0x786493 */
L_0078647E:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x17F0))); _flag_b = (uint32_t)(0xFFFBFFFFu);
    MEM32(ebp + (-0x17F0)) = MEM32(ebp + (-0x17F0)) & 0xFFFBFFFFu; /* 0x0078647E: and dword ptr [ebp - 0x17f0], 0xfffbffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0xAC0); /* 0x00786488: lea ecx, [ebp - 0xac0] */
    goto L_0040A000; /* 0x0078648E: jmp 0x40a000 */
L_00786493:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00786493: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00786494(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00786494u);

L_00786494:
    eax = MEM32(ebp + (-0x17F0)); /* 0x00786494: mov eax, dword ptr [ebp - 0x17f0] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00080000u);
    eax = eax & 0x00080000u; /* 0x0078649A: and eax, 0x80000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007864BA; /* 0x0078649F: je 0x7864ba */
L_007864A5:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x17F0))); _flag_b = (uint32_t)(0xFFF7FFFFu);
    MEM32(ebp + (-0x17F0)) = MEM32(ebp + (-0x17F0)) & 0xFFF7FFFFu; /* 0x007864A5: and dword ptr [ebp - 0x17f0], 0xfff7ffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x17B0); /* 0x007864AF: lea ecx, [ebp - 0x17b0] */
    goto L_0040A000; /* 0x007864B5: jmp 0x40a000 */
L_007864BA:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007864BA: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007864BB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007864BBu);

L_007864BB:
    eax = MEM32(ebp + (-0x17F0)); /* 0x007864BB: mov eax, dword ptr [ebp - 0x17f0] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00100000u);
    eax = eax & 0x00100000u; /* 0x007864C1: and eax, 0x100000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007864E1; /* 0x007864C6: je 0x7864e1 */
L_007864CC:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x17F0))); _flag_b = (uint32_t)(0xFFEFFFFFu);
    MEM32(ebp + (-0x17F0)) = MEM32(ebp + (-0x17F0)) & 0xFFEFFFFFu; /* 0x007864CC: and dword ptr [ebp - 0x17f0], 0xffefffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x1780); /* 0x007864D6: lea ecx, [ebp - 0x1780] */
    goto L_0040A000; /* 0x007864DC: jmp 0x40a000 */
L_007864E1:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007864E1: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007864E2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007864E2u);

L_007864E2:
    eax = MEM32(ebp + (-0x17F0)); /* 0x007864E2: mov eax, dword ptr [ebp - 0x17f0] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00200000u);
    eax = eax & 0x00200000u; /* 0x007864E8: and eax, 0x200000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00786508; /* 0x007864ED: je 0x786508 */
L_007864F3:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x17F0))); _flag_b = (uint32_t)(0xFFDFFFFFu);
    MEM32(ebp + (-0x17F0)) = MEM32(ebp + (-0x17F0)) & 0xFFDFFFFFu; /* 0x007864F3: and dword ptr [ebp - 0x17f0], 0xffdfffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x1750); /* 0x007864FD: lea ecx, [ebp - 0x1750] */
    goto L_0040A000; /* 0x00786503: jmp 0x40a000 */
L_00786508:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00786508: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00786509(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00786509u);

L_00786509:
    eax = MEM32(ebp + (-0x17F0)); /* 0x00786509: mov eax, dword ptr [ebp - 0x17f0] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00400000u);
    eax = eax & 0x00400000u; /* 0x0078650F: and eax, 0x400000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0078652F; /* 0x00786514: je 0x78652f */
L_0078651A:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x17F0))); _flag_b = (uint32_t)(0xFFBFFFFFu);
    MEM32(ebp + (-0x17F0)) = MEM32(ebp + (-0x17F0)) & 0xFFBFFFFFu; /* 0x0078651A: and dword ptr [ebp - 0x17f0], 0xffbfffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x1720); /* 0x00786524: lea ecx, [ebp - 0x1720] */
    goto L_0040A000; /* 0x0078652A: jmp 0x40a000 */
L_0078652F:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0078652F: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00786530(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00786530u);

L_00786530:
    eax = MEM32(ebp + (-0x17F0)); /* 0x00786530: mov eax, dword ptr [ebp - 0x17f0] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00800000u);
    eax = eax & 0x00800000u; /* 0x00786536: and eax, 0x800000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00786556; /* 0x0078653B: je 0x786556 */
L_00786541:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x17F0))); _flag_b = (uint32_t)(0xFF7FFFFFu);
    MEM32(ebp + (-0x17F0)) = MEM32(ebp + (-0x17F0)) & 0xFF7FFFFFu; /* 0x00786541: and dword ptr [ebp - 0x17f0], 0xff7fffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0xA90); /* 0x0078654B: lea ecx, [ebp - 0xa90] */
    goto L_0040A000; /* 0x00786551: jmp 0x40a000 */
L_00786556:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00786556: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00786557(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00786557u);

L_00786557:
    eax = MEM32(ebp + (-0x17F0)); /* 0x00786557: mov eax, dword ptr [ebp - 0x17f0] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x01000000u);
    eax = eax & 0x01000000u; /* 0x0078655D: and eax, 0x1000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0078657D; /* 0x00786562: je 0x78657d */
L_00786568:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x17F0))); _flag_b = (uint32_t)(0xFEFFFFFFu);
    MEM32(ebp + (-0x17F0)) = MEM32(ebp + (-0x17F0)) & 0xFEFFFFFFu; /* 0x00786568: and dword ptr [ebp - 0x17f0], 0xfeffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0xA60); /* 0x00786572: lea ecx, [ebp - 0xa60] */
    goto L_0040A000; /* 0x00786578: jmp 0x40a000 */
L_0078657D:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0078657D: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078657E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078657Eu);

L_0078657E:
    eax = MEM32(ebp + (-0x17F0)); /* 0x0078657E: mov eax, dword ptr [ebp - 0x17f0] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x02000000u);
    eax = eax & 0x02000000u; /* 0x00786584: and eax, 0x2000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007865A4; /* 0x00786589: je 0x7865a4 */
L_0078658F:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x17F0))); _flag_b = (uint32_t)(0xFDFFFFFFu);
    MEM32(ebp + (-0x17F0)) = MEM32(ebp + (-0x17F0)) & 0xFDFFFFFFu; /* 0x0078658F: and dword ptr [ebp - 0x17f0], 0xfdffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x16F0); /* 0x00786599: lea ecx, [ebp - 0x16f0] */
    goto L_0040A000; /* 0x0078659F: jmp 0x40a000 */
L_007865A4:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007865A4: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007865A5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007865A5u);

L_007865A5:
    eax = MEM32(ebp + (-0x17F0)); /* 0x007865A5: mov eax, dword ptr [ebp - 0x17f0] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x04000000u);
    eax = eax & 0x04000000u; /* 0x007865AB: and eax, 0x4000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007865CB; /* 0x007865B0: je 0x7865cb */
L_007865B6:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x17F0))); _flag_b = (uint32_t)(0xFBFFFFFFu);
    MEM32(ebp + (-0x17F0)) = MEM32(ebp + (-0x17F0)) & 0xFBFFFFFFu; /* 0x007865B6: and dword ptr [ebp - 0x17f0], 0xfbffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x16C0); /* 0x007865C0: lea ecx, [ebp - 0x16c0] */
    goto L_0040A000; /* 0x007865C6: jmp 0x40a000 */
L_007865CB:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007865CB: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007865CC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007865CCu);

L_007865CC:
    eax = MEM32(ebp + (-0x17F0)); /* 0x007865CC: mov eax, dword ptr [ebp - 0x17f0] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x08000000u);
    eax = eax & 0x08000000u; /* 0x007865D2: and eax, 0x8000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007865F2; /* 0x007865D7: je 0x7865f2 */
L_007865DD:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x17F0))); _flag_b = (uint32_t)(0xF7FFFFFFu);
    MEM32(ebp + (-0x17F0)) = MEM32(ebp + (-0x17F0)) & 0xF7FFFFFFu; /* 0x007865DD: and dword ptr [ebp - 0x17f0], 0xf7ffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x1690); /* 0x007865E7: lea ecx, [ebp - 0x1690] */
    goto L_0040A000; /* 0x007865ED: jmp 0x40a000 */
L_007865F2:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007865F2: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007865F3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007865F3u);

L_007865F3:
    eax = MEM32(ebp + (-0x17F0)); /* 0x007865F3: mov eax, dword ptr [ebp - 0x17f0] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10000000u);
    eax = eax & 0x10000000u; /* 0x007865F9: and eax, 0x10000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00786619; /* 0x007865FE: je 0x786619 */
L_00786604:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x17F0))); _flag_b = (uint32_t)(0xEFFFFFFFu);
    MEM32(ebp + (-0x17F0)) = MEM32(ebp + (-0x17F0)) & 0xEFFFFFFFu; /* 0x00786604: and dword ptr [ebp - 0x17f0], 0xefffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x1660); /* 0x0078660E: lea ecx, [ebp - 0x1660] */
    goto L_0040A000; /* 0x00786614: jmp 0x40a000 */
L_00786619:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00786619: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078661A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078661Au);

L_0078661A:
    eax = MEM32(ebp + (-0x17F0)); /* 0x0078661A: mov eax, dword ptr [ebp - 0x17f0] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20000000u);
    eax = eax & 0x20000000u; /* 0x00786620: and eax, 0x20000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00786640; /* 0x00786625: je 0x786640 */
L_0078662B:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x17F0))); _flag_b = (uint32_t)(0xDFFFFFFFu);
    MEM32(ebp + (-0x17F0)) = MEM32(ebp + (-0x17F0)) & 0xDFFFFFFFu; /* 0x0078662B: and dword ptr [ebp - 0x17f0], 0xdfffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0xA30); /* 0x00786635: lea ecx, [ebp - 0xa30] */
    goto L_0040A000; /* 0x0078663B: jmp 0x40a000 */
L_00786640:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00786640: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00786641(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00786641u);

L_00786641:
    eax = MEM32(ebp + (-0x17F0)); /* 0x00786641: mov eax, dword ptr [ebp - 0x17f0] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x40000000u);
    eax = eax & 0x40000000u; /* 0x00786647: and eax, 0x40000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00786667; /* 0x0078664C: je 0x786667 */
L_00786652:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x17F0))); _flag_b = (uint32_t)(0xBFFFFFFFu);
    MEM32(ebp + (-0x17F0)) = MEM32(ebp + (-0x17F0)) & 0xBFFFFFFFu; /* 0x00786652: and dword ptr [ebp - 0x17f0], 0xbfffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0xA00); /* 0x0078665C: lea ecx, [ebp - 0xa00] */
    goto L_0040A000; /* 0x00786662: jmp 0x40a000 */
L_00786667:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00786667: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00786668(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00786668u);

L_00786668:
    eax = MEM32(ebp + (-0x17F0)); /* 0x00786668: mov eax, dword ptr [ebp - 0x17f0] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80000000u);
    eax = eax & 0x80000000u; /* 0x0078666E: and eax, 0x80000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0078668E; /* 0x00786673: je 0x78668e */
L_00786679:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x17F0))); _flag_b = (uint32_t)(0x7FFFFFFFu);
    MEM32(ebp + (-0x17F0)) = MEM32(ebp + (-0x17F0)) & 0x7FFFFFFFu; /* 0x00786679: and dword ptr [ebp - 0x17f0], 0x7fffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x1630); /* 0x00786683: lea ecx, [ebp - 0x1630] */
    goto L_0040A000; /* 0x00786689: jmp 0x40a000 */
L_0078668E:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0078668E: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078668F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078668Fu);

L_0078668F:
    eax = MEM32(ebp + (-0x1814)); /* 0x0078668F: mov eax, dword ptr [ebp - 0x1814] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x00786695: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007866B0; /* 0x00786698: je 0x7866b0 */
L_0078669E:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1814))); _flag_b = (uint32_t)(0xFFFFFFFEu);
    MEM32(ebp + (-0x1814)) = MEM32(ebp + (-0x1814)) & 0xFFFFFFFEu; /* 0x0078669E: and dword ptr [ebp - 0x1814], 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x1600); /* 0x007866A5: lea ecx, [ebp - 0x1600] */
    goto L_0040A000; /* 0x007866AB: jmp 0x40a000 */
L_007866B0:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007866B0: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007866B1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007866B1u);

L_007866B1:
    eax = MEM32(ebp + (-0x1814)); /* 0x007866B1: mov eax, dword ptr [ebp - 0x1814] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    eax = eax & 2; /* 0x007866B7: and eax, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007866D2; /* 0x007866BA: je 0x7866d2 */
L_007866C0:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1814))); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ebp + (-0x1814)) = MEM32(ebp + (-0x1814)) & 0xFFFFFFFDu; /* 0x007866C0: and dword ptr [ebp - 0x1814], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x15D0); /* 0x007866C7: lea ecx, [ebp - 0x15d0] */
    goto L_0040A000; /* 0x007866CD: jmp 0x40a000 */
L_007866D2:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007866D2: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007866D3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007866D3u);

L_007866D3:
    eax = MEM32(ebp + (-0x1814)); /* 0x007866D3: mov eax, dword ptr [ebp - 0x1814] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    eax = eax & 4; /* 0x007866D9: and eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007866F4; /* 0x007866DC: je 0x7866f4 */
L_007866E2:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1814))); _flag_b = (uint32_t)(0xFFFFFFFBu);
    MEM32(ebp + (-0x1814)) = MEM32(ebp + (-0x1814)) & 0xFFFFFFFBu; /* 0x007866E2: and dword ptr [ebp - 0x1814], 0xfffffffb */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x15A0); /* 0x007866E9: lea ecx, [ebp - 0x15a0] */
    goto L_0040A000; /* 0x007866EF: jmp 0x40a000 */
L_007866F4:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007866F4: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007866F5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007866F5u);

L_007866F5:
    ecx = ebp + (-0xA48); /* 0x007866F5: lea ecx, [ebp - 0xa48] */
    goto L_0040A000; /* 0x007866FB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00786700(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00786700u);

    goto L_00786700;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_00786700:
    edx = MEM32(esp + 0x8); /* 0x00786700: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x00786704: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x1844)); /* 0x00786707: mov ecx, dword ptr [edx - 0x1844] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0078670D: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0078670F: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x00786714: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x00786717: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00786719: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00811A18u; /* 0x0078671E: mov eax, 0x811a18 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x00786723: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00786730(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00786730u);

L_00786730:
    ecx = ebp + 0x8; /* 0x00786730: lea ecx, [ebp + 8] */
    goto L_0040A000; /* 0x00786733: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00786738(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00786738u);

L_00786738:
    ecx = ebp + (-0x40); /* 0x00786738: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x0078673B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00786740(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00786740u);

L_00786740:
    ecx = ebp + (-0x28); /* 0x00786740: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x00786743: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00786748(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00786748u);

L_00786748:
    ecx = ebp + (-0x40); /* 0x00786748: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x0078674B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00786750(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00786750u);

L_00786750:
    ecx = ebp + (-0x28); /* 0x00786750: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x00786753: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00786758(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00786758u);

    goto L_00786758;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_00786758:
    edx = MEM32(esp + 0x8); /* 0x00786758: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0078675C: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x54)); /* 0x0078675F: mov ecx, dword ptr [edx - 0x54] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x00786762: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00786764: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x00786769: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0078676C: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0078676E: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x008122B8u; /* 0x00786773: mov eax, 0x8122b8 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x00786778: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00786780(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00786780u);

L_00786780:
    ecx = ebp + 0x8; /* 0x00786780: lea ecx, [ebp + 8] */
    goto L_0040A000; /* 0x00786783: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00786788(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00786788u);

L_00786788:
    ecx = ebp + (-0x28); /* 0x00786788: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x0078678B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00786790(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00786790u);

L_00786790:
    ecx = MEM32(ebp + (-0x5C)); /* 0x00786790: mov ecx, dword ptr [ebp - 0x5c] */
    goto L_0040A000; /* 0x00786793: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00786798(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00786798u);

L_00786798:
    ecx = MEM32(ebp + (-0x74)); /* 0x00786798: mov ecx, dword ptr [ebp - 0x74] */
    goto L_0040A000; /* 0x0078679B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007867A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007867A0u);

L_007867A0:
    ecx = ebp + (-0x58); /* 0x007867A0: lea ecx, [ebp - 0x58] */
    goto L_0040A000; /* 0x007867A3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007867A8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007867A8u);

L_007867A8:
    eax = MEM32(ebp + (-0x74)); /* 0x007867A8: mov eax, dword ptr [ebp - 0x74] */
    PUSH32(esp, eax); /* 0x007867AB: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007867AC: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007867B2: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007867B3: ret  */
    RECOMP_REGS_OUT();
}

void sub_007867B4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007867B4u);

L_007867B4:
    ecx = MEM32(ebp + (-0x6C)); /* 0x007867B4: mov ecx, dword ptr [ebp - 0x6c] */
    goto L_0040A000; /* 0x007867B7: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007867BC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007867BCu);

L_007867BC:
    ecx = ebp + (-0x40); /* 0x007867BC: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x007867BF: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007867C4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007867C4u);

L_007867C4:
    eax = MEM32(ebp + (-0x6C)); /* 0x007867C4: mov eax, dword ptr [ebp - 0x6c] */
    PUSH32(esp, eax); /* 0x007867C7: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007867C8: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007867CE: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007867CF: ret  */
    RECOMP_REGS_OUT();
}

void sub_007867D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007867D0u);

L_007867D0:
    ecx = MEM32(ebp + (-0x74)); /* 0x007867D0: mov ecx, dword ptr [ebp - 0x74] */
    goto L_0040A000; /* 0x007867D3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007867D8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007867D8u);

L_007867D8:
    ecx = MEM32(ebp + (-0x7C)); /* 0x007867D8: mov ecx, dword ptr [ebp - 0x7c] */
    goto L_0040A000; /* 0x007867DB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007867E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007867E0u);

L_007867E0:
    ecx = MEM32(ebp + (-0x7C)); /* 0x007867E0: mov ecx, dword ptr [ebp - 0x7c] */
    goto L_0040A000; /* 0x007867E3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007867E8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007867E8u);

L_007867E8:
    ecx = MEM32(ebp + (-0x6C)); /* 0x007867E8: mov ecx, dword ptr [ebp - 0x6c] */
    goto L_0040A000; /* 0x007867EB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007867F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007867F0u);

    goto L_007867F0;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007867F0:
    edx = MEM32(esp + 0x8); /* 0x007867F0: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007867F4: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xA4)); /* 0x007867F7: mov ecx, dword ptr [edx - 0xa4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007867FD: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007867FF: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x00786804: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x00786807: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00786809: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00812308u; /* 0x0078680E: mov eax, 0x812308 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x00786813: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00786820(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00786820u);

L_00786820:
    ecx = MEM32(ebp + 0x8); /* 0x00786820: mov ecx, dword ptr [ebp + 8] */
    goto L_0040A000; /* 0x00786823: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00786828(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00786828u);

L_00786828:
    ecx = MEM32(ebp + (-0x10)); /* 0x00786828: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040A000; /* 0x0078682B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00786830(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00786830u);

    goto L_00786830;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_00786830:
    edx = MEM32(esp + 0x8); /* 0x00786830: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x00786834: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x00786837: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0078683A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0078683C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x008123A8u; /* 0x00786841: mov eax, 0x8123a8 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x00786846: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00786850(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00786850u);

L_00786850:
    ecx = ebp + (-0x40); /* 0x00786850: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x00786853: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00786858(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00786858u);

L_00786858:
    ecx = ebp + (-0x28); /* 0x00786858: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x0078685B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00786860(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00786860u);

L_00786860:
    ecx = ebp + (-0x40); /* 0x00786860: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x00786863: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00786868(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00786868u);

L_00786868:
    ecx = ebp + (-0x28); /* 0x00786868: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x0078686B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00786870(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00786870u);

L_00786870:
    ecx = ebp + (-0x40); /* 0x00786870: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x00786873: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00786878(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00786878u);

L_00786878:
    ecx = ebp + (-0x28); /* 0x00786878: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x0078687B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00786880(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00786880u);

L_00786880:
    ecx = ebp + (-0x40); /* 0x00786880: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x00786883: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00786888(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00786888u);

L_00786888:
    ecx = ebp + (-0x28); /* 0x00786888: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x0078688B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00786890(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00786890u);

L_00786890:
    ecx = ebp + (-0x40); /* 0x00786890: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x00786893: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00786898(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00786898u);

L_00786898:
    ecx = ebp + (-0x28); /* 0x00786898: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x0078689B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007868A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007868A0u);

L_007868A0:
    ecx = ebp + (-0x40); /* 0x007868A0: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x007868A3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007868A8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007868A8u);

L_007868A8:
    ecx = ebp + (-0x28); /* 0x007868A8: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007868AB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007868B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007868B0u);

L_007868B0:
    ecx = ebp + (-0x40); /* 0x007868B0: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x007868B3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007868B8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007868B8u);

L_007868B8:
    ecx = ebp + (-0x28); /* 0x007868B8: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007868BB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007868C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007868C0u);

L_007868C0:
    ecx = ebp + (-0x40); /* 0x007868C0: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x007868C3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007868C8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007868C8u);

L_007868C8:
    ecx = ebp + (-0x28); /* 0x007868C8: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007868CB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007868D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007868D0u);

L_007868D0:
    ecx = ebp + (-0x40); /* 0x007868D0: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x007868D3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007868D8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007868D8u);

L_007868D8:
    ecx = ebp + (-0x28); /* 0x007868D8: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007868DB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007868E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007868E0u);

L_007868E0:
    ecx = ebp + (-0x40); /* 0x007868E0: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x007868E3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007868E8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007868E8u);

L_007868E8:
    ecx = ebp + (-0x28); /* 0x007868E8: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007868EB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007868F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007868F0u);

L_007868F0:
    ecx = ebp + (-0x28); /* 0x007868F0: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007868F3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007868F8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007868F8u);

L_007868F8:
    ecx = ebp + (-0x28); /* 0x007868F8: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007868FB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00786900(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00786900u);

L_00786900:
    ecx = ebp + (-0x28); /* 0x00786900: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x00786903: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00786908(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00786908u);

L_00786908:
    ecx = ebp + (-0x28); /* 0x00786908: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x0078690B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00786910(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00786910u);

L_00786910:
    ecx = ebp + (-0x28); /* 0x00786910: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x00786913: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00786918(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00786918u);

L_00786918:
    ecx = ebp + (-0x28); /* 0x00786918: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x0078691B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}
