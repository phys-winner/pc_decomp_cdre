#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_00785169(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00785169u);

L_00785169:
    eax = MEM32(ebp + (-0x17FC)); /* 0x00785169: mov eax, dword ptr [ebp - 0x17fc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00080000u);
    eax = eax & 0x00080000u; /* 0x0078516F: and eax, 0x80000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0078518F; /* 0x00785174: je 0x78518f */
L_0078517A:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x17FC))); _flag_b = (uint32_t)(0xFFF7FFFFu);
    MEM32(ebp + (-0x17FC)) = MEM32(ebp + (-0x17FC)) & 0xFFF7FFFFu; /* 0x0078517A: and dword ptr [ebp - 0x17fc], 0xfff7ffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x718); /* 0x00785184: lea ecx, [ebp - 0x718] */
    goto L_0040A000; /* 0x0078518A: jmp 0x40a000 */
L_0078518F:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0078518F: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00785190(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00785190u);

L_00785190:
    eax = MEM32(ebp + (-0x17FC)); /* 0x00785190: mov eax, dword ptr [ebp - 0x17fc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00100000u);
    eax = eax & 0x00100000u; /* 0x00785196: and eax, 0x100000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007851B6; /* 0x0078519B: je 0x7851b6 */
L_007851A1:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x17FC))); _flag_b = (uint32_t)(0xFFEFFFFFu);
    MEM32(ebp + (-0x17FC)) = MEM32(ebp + (-0x17FC)) & 0xFFEFFFFFu; /* 0x007851A1: and dword ptr [ebp - 0x17fc], 0xffefffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0xA18); /* 0x007851AB: lea ecx, [ebp - 0xa18] */
    goto L_0040A000; /* 0x007851B1: jmp 0x40a000 */
L_007851B6:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007851B6: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007851B7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007851B7u);

L_007851B7:
    eax = MEM32(ebp + (-0x17FC)); /* 0x007851B7: mov eax, dword ptr [ebp - 0x17fc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00200000u);
    eax = eax & 0x00200000u; /* 0x007851BD: and eax, 0x200000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007851DD; /* 0x007851C2: je 0x7851dd */
L_007851C8:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x17FC))); _flag_b = (uint32_t)(0xFFDFFFFFu);
    MEM32(ebp + (-0x17FC)) = MEM32(ebp + (-0x17FC)) & 0xFFDFFFFFu; /* 0x007851C8: and dword ptr [ebp - 0x17fc], 0xffdfffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x1708); /* 0x007851D2: lea ecx, [ebp - 0x1708] */
    goto L_0040A000; /* 0x007851D8: jmp 0x40a000 */
L_007851DD:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007851DD: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007851DE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007851DEu);

L_007851DE:
    eax = MEM32(ebp + (-0x17FC)); /* 0x007851DE: mov eax, dword ptr [ebp - 0x17fc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00400000u);
    eax = eax & 0x00400000u; /* 0x007851E4: and eax, 0x400000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00785204; /* 0x007851E9: je 0x785204 */
L_007851EF:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x17FC))); _flag_b = (uint32_t)(0xFFBFFFFFu);
    MEM32(ebp + (-0x17FC)) = MEM32(ebp + (-0x17FC)) & 0xFFBFFFFFu; /* 0x007851EF: and dword ptr [ebp - 0x17fc], 0xffbfffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x10F0); /* 0x007851F9: lea ecx, [ebp - 0x10f0] */
    goto L_0040A000; /* 0x007851FF: jmp 0x40a000 */
L_00785204:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00785204: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00785205(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00785205u);

L_00785205:
    eax = MEM32(ebp + (-0x17FC)); /* 0x00785205: mov eax, dword ptr [ebp - 0x17fc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00800000u);
    eax = eax & 0x00800000u; /* 0x0078520B: and eax, 0x800000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0078522B; /* 0x00785210: je 0x78522b */
L_00785216:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x17FC))); _flag_b = (uint32_t)(0xFF7FFFFFu);
    MEM32(ebp + (-0x17FC)) = MEM32(ebp + (-0x17FC)) & 0xFF7FFFFFu; /* 0x00785216: and dword ptr [ebp - 0x17fc], 0xff7fffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x1468); /* 0x00785220: lea ecx, [ebp - 0x1468] */
    goto L_0040A000; /* 0x00785226: jmp 0x40a000 */
L_0078522B:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0078522B: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078522C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078522Cu);

L_0078522C:
    eax = MEM32(ebp + (-0x17FC)); /* 0x0078522C: mov eax, dword ptr [ebp - 0x17fc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x01000000u);
    eax = eax & 0x01000000u; /* 0x00785232: and eax, 0x1000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00785252; /* 0x00785237: je 0x785252 */
L_0078523D:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x17FC))); _flag_b = (uint32_t)(0xFEFFFFFFu);
    MEM32(ebp + (-0x17FC)) = MEM32(ebp + (-0x17FC)) & 0xFEFFFFFFu; /* 0x0078523D: and dword ptr [ebp - 0x17fc], 0xfeffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x10C0); /* 0x00785247: lea ecx, [ebp - 0x10c0] */
    goto L_0040A000; /* 0x0078524D: jmp 0x40a000 */
L_00785252:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00785252: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00785253(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00785253u);

L_00785253:
    eax = MEM32(ebp + (-0x17FC)); /* 0x00785253: mov eax, dword ptr [ebp - 0x17fc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x02000000u);
    eax = eax & 0x02000000u; /* 0x00785259: and eax, 0x2000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00785279; /* 0x0078525E: je 0x785279 */
L_00785264:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x17FC))); _flag_b = (uint32_t)(0xFDFFFFFFu);
    MEM32(ebp + (-0x17FC)) = MEM32(ebp + (-0x17FC)) & 0xFDFFFFFFu; /* 0x00785264: and dword ptr [ebp - 0x17fc], 0xfdffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x6E8); /* 0x0078526E: lea ecx, [ebp - 0x6e8] */
    goto L_0040A000; /* 0x00785274: jmp 0x40a000 */
L_00785279:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00785279: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078527A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078527Au);

L_0078527A:
    eax = MEM32(ebp + (-0x17FC)); /* 0x0078527A: mov eax, dword ptr [ebp - 0x17fc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x04000000u);
    eax = eax & 0x04000000u; /* 0x00785280: and eax, 0x4000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007852A0; /* 0x00785285: je 0x7852a0 */
L_0078528B:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x17FC))); _flag_b = (uint32_t)(0xFBFFFFFFu);
    MEM32(ebp + (-0x17FC)) = MEM32(ebp + (-0x17FC)) & 0xFBFFFFFFu; /* 0x0078528B: and dword ptr [ebp - 0x17fc], 0xfbffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x8F8); /* 0x00785295: lea ecx, [ebp - 0x8f8] */
    goto L_0040A000; /* 0x0078529B: jmp 0x40a000 */
L_007852A0:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007852A0: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007852A1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007852A1u);

L_007852A1:
    eax = MEM32(ebp + (-0x17FC)); /* 0x007852A1: mov eax, dword ptr [ebp - 0x17fc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x08000000u);
    eax = eax & 0x08000000u; /* 0x007852A7: and eax, 0x8000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007852C7; /* 0x007852AC: je 0x7852c7 */
L_007852B2:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x17FC))); _flag_b = (uint32_t)(0xF7FFFFFFu);
    MEM32(ebp + (-0x17FC)) = MEM32(ebp + (-0x17FC)) & 0xF7FFFFFFu; /* 0x007852B2: and dword ptr [ebp - 0x17fc], 0xf7ffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x1618); /* 0x007852BC: lea ecx, [ebp - 0x1618] */
    goto L_0040A000; /* 0x007852C2: jmp 0x40a000 */
L_007852C7:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007852C7: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007852C8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007852C8u);

L_007852C8:
    eax = MEM32(ebp + (-0x17FC)); /* 0x007852C8: mov eax, dword ptr [ebp - 0x17fc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10000000u);
    eax = eax & 0x10000000u; /* 0x007852CE: and eax, 0x10000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007852EE; /* 0x007852D3: je 0x7852ee */
L_007852D9:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x17FC))); _flag_b = (uint32_t)(0xEFFFFFFFu);
    MEM32(ebp + (-0x17FC)) = MEM32(ebp + (-0x17FC)) & 0xEFFFFFFFu; /* 0x007852D9: and dword ptr [ebp - 0x17fc], 0xefffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x1090); /* 0x007852E3: lea ecx, [ebp - 0x1090] */
    goto L_0040A000; /* 0x007852E9: jmp 0x40a000 */
L_007852EE:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007852EE: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007852EF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007852EFu);

L_007852EF:
    eax = MEM32(ebp + (-0x17FC)); /* 0x007852EF: mov eax, dword ptr [ebp - 0x17fc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20000000u);
    eax = eax & 0x20000000u; /* 0x007852F5: and eax, 0x20000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00785315; /* 0x007852FA: je 0x785315 */
L_00785300:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x17FC))); _flag_b = (uint32_t)(0xDFFFFFFFu);
    MEM32(ebp + (-0x17FC)) = MEM32(ebp + (-0x17FC)) & 0xDFFFFFFFu; /* 0x00785300: and dword ptr [ebp - 0x17fc], 0xdfffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x1438); /* 0x0078530A: lea ecx, [ebp - 0x1438] */
    goto L_0040A000; /* 0x00785310: jmp 0x40a000 */
L_00785315:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00785315: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00785316(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00785316u);

L_00785316:
    eax = MEM32(ebp + (-0x17FC)); /* 0x00785316: mov eax, dword ptr [ebp - 0x17fc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x40000000u);
    eax = eax & 0x40000000u; /* 0x0078531C: and eax, 0x40000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0078533C; /* 0x00785321: je 0x78533c */
L_00785327:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x17FC))); _flag_b = (uint32_t)(0xBFFFFFFFu);
    MEM32(ebp + (-0x17FC)) = MEM32(ebp + (-0x17FC)) & 0xBFFFFFFFu; /* 0x00785327: and dword ptr [ebp - 0x17fc], 0xbfffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x1060); /* 0x00785331: lea ecx, [ebp - 0x1060] */
    goto L_0040A000; /* 0x00785337: jmp 0x40a000 */
L_0078533C:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0078533C: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078533D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078533Du);

L_0078533D:
    eax = MEM32(ebp + (-0x17FC)); /* 0x0078533D: mov eax, dword ptr [ebp - 0x17fc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80000000u);
    eax = eax & 0x80000000u; /* 0x00785343: and eax, 0x80000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00785363; /* 0x00785348: je 0x785363 */
L_0078534E:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x17FC))); _flag_b = (uint32_t)(0x7FFFFFFFu);
    MEM32(ebp + (-0x17FC)) = MEM32(ebp + (-0x17FC)) & 0x7FFFFFFFu; /* 0x0078534E: and dword ptr [ebp - 0x17fc], 0x7fffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x6B8); /* 0x00785358: lea ecx, [ebp - 0x6b8] */
    goto L_0040A000; /* 0x0078535E: jmp 0x40a000 */
L_00785363:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00785363: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00785364(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00785364u);

L_00785364:
    eax = MEM32(ebp + (-0x17E8)); /* 0x00785364: mov eax, dword ptr [ebp - 0x17e8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x0078536A: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00785385; /* 0x0078536D: je 0x785385 */
L_00785373:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x17E8))); _flag_b = (uint32_t)(0xFFFFFFFEu);
    MEM32(ebp + (-0x17E8)) = MEM32(ebp + (-0x17E8)) & 0xFFFFFFFEu; /* 0x00785373: and dword ptr [ebp - 0x17e8], 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0xAD8); /* 0x0078537A: lea ecx, [ebp - 0xad8] */
    goto L_0040A000; /* 0x00785380: jmp 0x40a000 */
L_00785385:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00785385: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00785386(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00785386u);

L_00785386:
    eax = MEM32(ebp + (-0x17E8)); /* 0x00785386: mov eax, dword ptr [ebp - 0x17e8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    eax = eax & 2; /* 0x0078538C: and eax, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007853A7; /* 0x0078538F: je 0x7853a7 */
L_00785395:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x17E8))); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ebp + (-0x17E8)) = MEM32(ebp + (-0x17E8)) & 0xFFFFFFFDu; /* 0x00785395: and dword ptr [ebp - 0x17e8], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x1768); /* 0x0078539C: lea ecx, [ebp - 0x1768] */
    goto L_0040A000; /* 0x007853A2: jmp 0x40a000 */
L_007853A7:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007853A7: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007853A8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007853A8u);

L_007853A8:
    eax = MEM32(ebp + (-0x17E8)); /* 0x007853A8: mov eax, dword ptr [ebp - 0x17e8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    eax = eax & 4; /* 0x007853AE: and eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007853C9; /* 0x007853B1: je 0x7853c9 */
L_007853B7:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x17E8))); _flag_b = (uint32_t)(0xFFFFFFFBu);
    MEM32(ebp + (-0x17E8)) = MEM32(ebp + (-0x17E8)) & 0xFFFFFFFBu; /* 0x007853B7: and dword ptr [ebp - 0x17e8], 0xfffffffb */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x1030); /* 0x007853BE: lea ecx, [ebp - 0x1030] */
    goto L_0040A000; /* 0x007853C4: jmp 0x40a000 */
L_007853C9:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007853C9: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007853CA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007853CAu);

L_007853CA:
    eax = MEM32(ebp + (-0x17E8)); /* 0x007853CA: mov eax, dword ptr [ebp - 0x17e8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    eax = eax & 8; /* 0x007853D0: and eax, 8 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007853EB; /* 0x007853D3: je 0x7853eb */
L_007853D9:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x17E8))); _flag_b = (uint32_t)(0xFFFFFFF7u);
    MEM32(ebp + (-0x17E8)) = MEM32(ebp + (-0x17E8)) & 0xFFFFFFF7u; /* 0x007853D9: and dword ptr [ebp - 0x17e8], 0xfffffff7 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x1408); /* 0x007853E0: lea ecx, [ebp - 0x1408] */
    goto L_0040A000; /* 0x007853E6: jmp 0x40a000 */
L_007853EB:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007853EB: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007853EC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007853ECu);

L_007853EC:
    eax = MEM32(ebp + (-0x17E8)); /* 0x007853EC: mov eax, dword ptr [ebp - 0x17e8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    eax = eax & 0x10u; /* 0x007853F2: and eax, 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0078540D; /* 0x007853F5: je 0x78540d */
L_007853FB:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x17E8))); _flag_b = (uint32_t)(0xFFFFFFEFu);
    MEM32(ebp + (-0x17E8)) = MEM32(ebp + (-0x17E8)) & 0xFFFFFFEFu; /* 0x007853FB: and dword ptr [ebp - 0x17e8], 0xffffffef */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x1000); /* 0x00785402: lea ecx, [ebp - 0x1000] */
    goto L_0040A000; /* 0x00785408: jmp 0x40a000 */
L_0078540D:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0078540D: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078540E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078540Eu);

L_0078540E:
    eax = MEM32(ebp + (-0x17E8)); /* 0x0078540E: mov eax, dword ptr [ebp - 0x17e8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    eax = eax & 0x20u; /* 0x00785414: and eax, 0x20 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0078542F; /* 0x00785417: je 0x78542f */
L_0078541D:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x17E8))); _flag_b = (uint32_t)(0xFFFFFFDFu);
    MEM32(ebp + (-0x17E8)) = MEM32(ebp + (-0x17E8)) & 0xFFFFFFDFu; /* 0x0078541D: and dword ptr [ebp - 0x17e8], 0xffffffdf */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x688); /* 0x00785424: lea ecx, [ebp - 0x688] */
    goto L_0040A000; /* 0x0078542A: jmp 0x40a000 */
L_0078542F:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0078542F: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00785430(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00785430u);

L_00785430:
    eax = MEM32(ebp + (-0x17E8)); /* 0x00785430: mov eax, dword ptr [ebp - 0x17e8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x40u);
    eax = eax & 0x40u; /* 0x00785436: and eax, 0x40 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00785451; /* 0x00785439: je 0x785451 */
L_0078543F:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x17E8))); _flag_b = (uint32_t)(0xFFFFFFBFu);
    MEM32(ebp + (-0x17E8)) = MEM32(ebp + (-0x17E8)) & 0xFFFFFFBFu; /* 0x0078543F: and dword ptr [ebp - 0x17e8], 0xffffffbf */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x8C8); /* 0x00785446: lea ecx, [ebp - 0x8c8] */
    goto L_0040A000; /* 0x0078544C: jmp 0x40a000 */
L_00785451:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00785451: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00785452(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00785452u);

L_00785452:
    eax = MEM32(ebp + (-0x17E8)); /* 0x00785452: mov eax, dword ptr [ebp - 0x17e8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80u);
    eax = eax & 0x80u; /* 0x00785458: and eax, 0x80 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00785478; /* 0x0078545D: je 0x785478 */
L_00785463:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x17E8))); _flag_b = (uint32_t)(0xFFFFFF7Fu);
    MEM32(ebp + (-0x17E8)) = MEM32(ebp + (-0x17E8)) & 0xFFFFFF7Fu; /* 0x00785463: and dword ptr [ebp - 0x17e8], 0xffffff7f */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x15E8); /* 0x0078546D: lea ecx, [ebp - 0x15e8] */
    goto L_0040A000; /* 0x00785473: jmp 0x40a000 */
L_00785478:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00785478: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00785479(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00785479u);

L_00785479:
    eax = MEM32(ebp + (-0x17E8)); /* 0x00785479: mov eax, dword ptr [ebp - 0x17e8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x100u);
    eax = eax & 0x100u; /* 0x0078547F: and eax, 0x100 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0078549F; /* 0x00785484: je 0x78549f */
L_0078548A:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x17E8))); _flag_b = (uint32_t)(0xFFFFFEFFu);
    MEM32(ebp + (-0x17E8)) = MEM32(ebp + (-0x17E8)) & 0xFFFFFEFFu; /* 0x0078548A: and dword ptr [ebp - 0x17e8], 0xfffffeff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0xFD0); /* 0x00785494: lea ecx, [ebp - 0xfd0] */
    goto L_0040A000; /* 0x0078549A: jmp 0x40a000 */
L_0078549F:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0078549F: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007854A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007854A0u);

L_007854A0:
    eax = MEM32(ebp + (-0x17E8)); /* 0x007854A0: mov eax, dword ptr [ebp - 0x17e8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x200u);
    eax = eax & 0x200u; /* 0x007854A6: and eax, 0x200 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007854C6; /* 0x007854AB: je 0x7854c6 */
L_007854B1:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x17E8))); _flag_b = (uint32_t)(0xFFFFFDFFu);
    MEM32(ebp + (-0x17E8)) = MEM32(ebp + (-0x17E8)) & 0xFFFFFDFFu; /* 0x007854B1: and dword ptr [ebp - 0x17e8], 0xfffffdff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x13D8); /* 0x007854BB: lea ecx, [ebp - 0x13d8] */
    goto L_0040A000; /* 0x007854C1: jmp 0x40a000 */
L_007854C6:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007854C6: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007854C7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007854C7u);

L_007854C7:
    eax = MEM32(ebp + (-0x17E8)); /* 0x007854C7: mov eax, dword ptr [ebp - 0x17e8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x400u);
    eax = eax & 0x400u; /* 0x007854CD: and eax, 0x400 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007854ED; /* 0x007854D2: je 0x7854ed */
L_007854D8:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x17E8))); _flag_b = (uint32_t)(0xFFFFFBFFu);
    MEM32(ebp + (-0x17E8)) = MEM32(ebp + (-0x17E8)) & 0xFFFFFBFFu; /* 0x007854D8: and dword ptr [ebp - 0x17e8], 0xfffffbff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0xFA0); /* 0x007854E2: lea ecx, [ebp - 0xfa0] */
    goto L_0040A000; /* 0x007854E8: jmp 0x40a000 */
L_007854ED:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007854ED: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007854EE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007854EEu);

L_007854EE:
    ecx = ebp + (-0x928); /* 0x007854EE: lea ecx, [ebp - 0x928] */
    goto L_0040A000; /* 0x007854F4: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007854F9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007854F9u);

L_007854F9:
    eax = MEM32(ebp + (-0x17E8)); /* 0x007854F9: mov eax, dword ptr [ebp - 0x17e8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x800u);
    eax = eax & 0x800u; /* 0x007854FF: and eax, 0x800 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0078551F; /* 0x00785504: je 0x78551f */
L_0078550A:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x17E8))); _flag_b = (uint32_t)(0xFFFFF7FFu);
    MEM32(ebp + (-0x17E8)) = MEM32(ebp + (-0x17E8)) & 0xFFFFF7FFu; /* 0x0078550A: and dword ptr [ebp - 0x17e8], 0xfffff7ff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x490); /* 0x00785514: lea ecx, [ebp - 0x490] */
    goto L_0040A000; /* 0x0078551A: jmp 0x40a000 */
L_0078551F:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0078551F: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00785520(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00785520u);

L_00785520:
    eax = MEM32(ebp + (-0x17E8)); /* 0x00785520: mov eax, dword ptr [ebp - 0x17e8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1000u);
    eax = eax & 0x1000u; /* 0x00785526: and eax, 0x1000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00785546; /* 0x0078552B: je 0x785546 */
L_00785531:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x17E8))); _flag_b = (uint32_t)(0xFFFFEFFFu);
    MEM32(ebp + (-0x17E8)) = MEM32(ebp + (-0x17E8)) & 0xFFFFEFFFu; /* 0x00785531: and dword ptr [ebp - 0x17e8], 0xffffefff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x460); /* 0x0078553B: lea ecx, [ebp - 0x460] */
    goto L_0040A000; /* 0x00785541: jmp 0x40a000 */
L_00785546:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00785546: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00785547(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00785547u);

L_00785547:
    eax = MEM32(ebp + (-0x17E8)); /* 0x00785547: mov eax, dword ptr [ebp - 0x17e8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x2000u);
    eax = eax & 0x2000u; /* 0x0078554D: and eax, 0x2000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0078556D; /* 0x00785552: je 0x78556d */
L_00785558:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x17E8))); _flag_b = (uint32_t)(0xFFFFDFFFu);
    MEM32(ebp + (-0x17E8)) = MEM32(ebp + (-0x17E8)) & 0xFFFFDFFFu; /* 0x00785558: and dword ptr [ebp - 0x17e8], 0xffffdfff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0xC58); /* 0x00785562: lea ecx, [ebp - 0xc58] */
    goto L_0040A000; /* 0x00785568: jmp 0x40a000 */
L_0078556D:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0078556D: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078556E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078556Eu);

L_0078556E:
    eax = MEM32(ebp + (-0x17E8)); /* 0x0078556E: mov eax, dword ptr [ebp - 0x17e8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x4000u);
    eax = eax & 0x4000u; /* 0x00785574: and eax, 0x4000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00785594; /* 0x00785579: je 0x785594 */
L_0078557F:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x17E8))); _flag_b = (uint32_t)(0xFFFFBFFFu);
    MEM32(ebp + (-0x17E8)) = MEM32(ebp + (-0x17E8)) & 0xFFFFBFFFu; /* 0x0078557F: and dword ptr [ebp - 0x17e8], 0xffffbfff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0xC28); /* 0x00785589: lea ecx, [ebp - 0xc28] */
    goto L_0040A000; /* 0x0078558F: jmp 0x40a000 */
L_00785594:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00785594: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00785595(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00785595u);

L_00785595:
    eax = MEM32(ebp + (-0x17E8)); /* 0x00785595: mov eax, dword ptr [ebp - 0x17e8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8000u);
    eax = eax & 0x8000u; /* 0x0078559B: and eax, 0x8000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007855BB; /* 0x007855A0: je 0x7855bb */
L_007855A6:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x17E8))); _flag_b = (uint32_t)(0xFFFF7FFFu);
    MEM32(ebp + (-0x17E8)) = MEM32(ebp + (-0x17E8)) & 0xFFFF7FFFu; /* 0x007855A6: and dword ptr [ebp - 0x17e8], 0xffff7fff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0xBF8); /* 0x007855B0: lea ecx, [ebp - 0xbf8] */
    goto L_0040A000; /* 0x007855B6: jmp 0x40a000 */
L_007855BB:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007855BB: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007855BC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007855BCu);

L_007855BC:
    eax = MEM32(ebp + (-0x17E8)); /* 0x007855BC: mov eax, dword ptr [ebp - 0x17e8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00010000u);
    eax = eax & 0x00010000u; /* 0x007855C2: and eax, 0x10000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007855E2; /* 0x007855C7: je 0x7855e2 */
L_007855CD:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x17E8))); _flag_b = (uint32_t)(0xFFFEFFFFu);
    MEM32(ebp + (-0x17E8)) = MEM32(ebp + (-0x17E8)) & 0xFFFEFFFFu; /* 0x007855CD: and dword ptr [ebp - 0x17e8], 0xfffeffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0xBC8); /* 0x007855D7: lea ecx, [ebp - 0xbc8] */
    goto L_0040A000; /* 0x007855DD: jmp 0x40a000 */
L_007855E2:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007855E2: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007855E3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007855E3u);

L_007855E3:
    eax = MEM32(ebp + (-0x17E8)); /* 0x007855E3: mov eax, dword ptr [ebp - 0x17e8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00020000u);
    eax = eax & 0x00020000u; /* 0x007855E9: and eax, 0x20000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00785609; /* 0x007855EE: je 0x785609 */
L_007855F4:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x17E8))); _flag_b = (uint32_t)(0xFFFDFFFFu);
    MEM32(ebp + (-0x17E8)) = MEM32(ebp + (-0x17E8)) & 0xFFFDFFFFu; /* 0x007855F4: and dword ptr [ebp - 0x17e8], 0xfffdffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x448); /* 0x007855FE: lea ecx, [ebp - 0x448] */
    goto L_0040A000; /* 0x00785604: jmp 0x40a000 */
L_00785609:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00785609: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078560A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078560Au);

L_0078560A:
    eax = MEM32(ebp + (-0x17E8)); /* 0x0078560A: mov eax, dword ptr [ebp - 0x17e8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00040000u);
    eax = eax & 0x00040000u; /* 0x00785610: and eax, 0x40000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00785630; /* 0x00785615: je 0x785630 */
L_0078561B:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x17E8))); _flag_b = (uint32_t)(0xFFFBFFFFu);
    MEM32(ebp + (-0x17E8)) = MEM32(ebp + (-0x17E8)) & 0xFFFBFFFFu; /* 0x0078561B: and dword ptr [ebp - 0x17e8], 0xfffbffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x7A8); /* 0x00785625: lea ecx, [ebp - 0x7a8] */
    goto L_0040A000; /* 0x0078562B: jmp 0x40a000 */
L_00785630:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00785630: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00785631(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00785631u);

L_00785631:
    eax = MEM32(ebp + (-0x17E8)); /* 0x00785631: mov eax, dword ptr [ebp - 0x17e8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00080000u);
    eax = eax & 0x00080000u; /* 0x00785637: and eax, 0x80000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00785657; /* 0x0078563C: je 0x785657 */
L_00785642:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x17E8))); _flag_b = (uint32_t)(0xFFF7FFFFu);
    MEM32(ebp + (-0x17E8)) = MEM32(ebp + (-0x17E8)) & 0xFFF7FFFFu; /* 0x00785642: and dword ptr [ebp - 0x17e8], 0xfff7ffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x17C8); /* 0x0078564C: lea ecx, [ebp - 0x17c8] */
    goto L_0040A000; /* 0x00785652: jmp 0x40a000 */
L_00785657:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00785657: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00785658(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00785658u);

L_00785658:
    eax = MEM32(ebp + (-0x17E8)); /* 0x00785658: mov eax, dword ptr [ebp - 0x17e8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00100000u);
    eax = eax & 0x00100000u; /* 0x0078565E: and eax, 0x100000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0078567E; /* 0x00785663: je 0x78567e */
L_00785669:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x17E8))); _flag_b = (uint32_t)(0xFFEFFFFFu);
    MEM32(ebp + (-0x17E8)) = MEM32(ebp + (-0x17E8)) & 0xFFEFFFFFu; /* 0x00785669: and dword ptr [ebp - 0x17e8], 0xffefffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x11B0); /* 0x00785673: lea ecx, [ebp - 0x11b0] */
    goto L_0040A000; /* 0x00785679: jmp 0x40a000 */
L_0078567E:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0078567E: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078567F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078567Fu);

L_0078567F:
    eax = MEM32(ebp + (-0x17E8)); /* 0x0078567F: mov eax, dword ptr [ebp - 0x17e8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00200000u);
    eax = eax & 0x00200000u; /* 0x00785685: and eax, 0x200000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007856A5; /* 0x0078568A: je 0x7856a5 */
L_00785690:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x17E8))); _flag_b = (uint32_t)(0xFFDFFFFFu);
    MEM32(ebp + (-0x17E8)) = MEM32(ebp + (-0x17E8)) & 0xFFDFFFFFu; /* 0x00785690: and dword ptr [ebp - 0x17e8], 0xffdfffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0xBB0); /* 0x0078569A: lea ecx, [ebp - 0xbb0] */
    goto L_0040A000; /* 0x007856A0: jmp 0x40a000 */
L_007856A5:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007856A5: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007856A6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007856A6u);

L_007856A6:
    eax = MEM32(ebp + (-0x17E8)); /* 0x007856A6: mov eax, dword ptr [ebp - 0x17e8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00400000u);
    eax = eax & 0x00400000u; /* 0x007856AC: and eax, 0x400000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007856CC; /* 0x007856B1: je 0x7856cc */
L_007856B7:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x17E8))); _flag_b = (uint32_t)(0xFFBFFFFFu);
    MEM32(ebp + (-0x17E8)) = MEM32(ebp + (-0x17E8)) & 0xFFBFFFFFu; /* 0x007856B7: and dword ptr [ebp - 0x17e8], 0xffbfffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0xB80); /* 0x007856C1: lea ecx, [ebp - 0xb80] */
    goto L_0040A000; /* 0x007856C7: jmp 0x40a000 */
L_007856CC:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007856CC: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007856CD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007856CDu);

L_007856CD:
    eax = MEM32(ebp + (-0x17E8)); /* 0x007856CD: mov eax, dword ptr [ebp - 0x17e8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00800000u);
    eax = eax & 0x00800000u; /* 0x007856D3: and eax, 0x800000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007856F3; /* 0x007856D8: je 0x7856f3 */
L_007856DE:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x17E8))); _flag_b = (uint32_t)(0xFF7FFFFFu);
    MEM32(ebp + (-0x17E8)) = MEM32(ebp + (-0x17E8)) & 0xFF7FFFFFu; /* 0x007856DE: and dword ptr [ebp - 0x17e8], 0xff7fffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x958); /* 0x007856E8: lea ecx, [ebp - 0x958] */
    goto L_0040A000; /* 0x007856EE: jmp 0x40a000 */
L_007856F3:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007856F3: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007856F4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007856F4u);

L_007856F4:
    eax = MEM32(ebp + (-0x17E8)); /* 0x007856F4: mov eax, dword ptr [ebp - 0x17e8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x01000000u);
    eax = eax & 0x01000000u; /* 0x007856FA: and eax, 0x1000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0078571A; /* 0x007856FF: je 0x78571a */
L_00785705:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x17E8))); _flag_b = (uint32_t)(0xFEFFFFFFu);
    MEM32(ebp + (-0x17E8)) = MEM32(ebp + (-0x17E8)) & 0xFEFFFFFFu; /* 0x00785705: and dword ptr [ebp - 0x17e8], 0xfeffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x778); /* 0x0078570F: lea ecx, [ebp - 0x778] */
    goto L_0040A000; /* 0x00785715: jmp 0x40a000 */
L_0078571A:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0078571A: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078571B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078571Bu);

L_0078571B:
    eax = MEM32(ebp + (-0x17E8)); /* 0x0078571B: mov eax, dword ptr [ebp - 0x17e8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x02000000u);
    eax = eax & 0x02000000u; /* 0x00785721: and eax, 0x2000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00785741; /* 0x00785726: je 0x785741 */
L_0078572C:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x17E8))); _flag_b = (uint32_t)(0xFDFFFFFFu);
    MEM32(ebp + (-0x17E8)) = MEM32(ebp + (-0x17E8)) & 0xFDFFFFFFu; /* 0x0078572C: and dword ptr [ebp - 0x17e8], 0xfdffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x14C8); /* 0x00785736: lea ecx, [ebp - 0x14c8] */
    goto L_0040A000; /* 0x0078573C: jmp 0x40a000 */
L_00785741:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00785741: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00785742(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00785742u);

L_00785742:
    eax = MEM32(ebp + (-0x17E8)); /* 0x00785742: mov eax, dword ptr [ebp - 0x17e8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x04000000u);
    eax = eax & 0x04000000u; /* 0x00785748: and eax, 0x4000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00785768; /* 0x0078574D: je 0x785768 */
L_00785753:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x17E8))); _flag_b = (uint32_t)(0xFBFFFFFFu);
    MEM32(ebp + (-0x17E8)) = MEM32(ebp + (-0x17E8)) & 0xFBFFFFFFu; /* 0x00785753: and dword ptr [ebp - 0x17e8], 0xfbffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x1180); /* 0x0078575D: lea ecx, [ebp - 0x1180] */
    goto L_0040A000; /* 0x00785763: jmp 0x40a000 */
L_00785768:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00785768: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00785769(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00785769u);

L_00785769:
    eax = MEM32(ebp + (-0x17E8)); /* 0x00785769: mov eax, dword ptr [ebp - 0x17e8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x08000000u);
    eax = eax & 0x08000000u; /* 0x0078576F: and eax, 0x8000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0078578F; /* 0x00785774: je 0x78578f */
L_0078577A:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x17E8))); _flag_b = (uint32_t)(0xF7FFFFFFu);
    MEM32(ebp + (-0x17E8)) = MEM32(ebp + (-0x17E8)) & 0xF7FFFFFFu; /* 0x0078577A: and dword ptr [ebp - 0x17e8], 0xf7ffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x1648); /* 0x00785784: lea ecx, [ebp - 0x1648] */
    goto L_0040A000; /* 0x0078578A: jmp 0x40a000 */
L_0078578F:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0078578F: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00785790(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00785790u);

L_00785790:
    eax = MEM32(ebp + (-0x17E8)); /* 0x00785790: mov eax, dword ptr [ebp - 0x17e8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10000000u);
    eax = eax & 0x10000000u; /* 0x00785796: and eax, 0x10000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007857B6; /* 0x0078579B: je 0x7857b6 */
L_007857A1:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x17E8))); _flag_b = (uint32_t)(0xEFFFFFFFu);
    MEM32(ebp + (-0x17E8)) = MEM32(ebp + (-0x17E8)) & 0xEFFFFFFFu; /* 0x007857A1: and dword ptr [ebp - 0x17e8], 0xefffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x1150); /* 0x007857AB: lea ecx, [ebp - 0x1150] */
    goto L_0040A000; /* 0x007857B1: jmp 0x40a000 */
L_007857B6:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007857B6: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007857B7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007857B7u);

L_007857B7:
    eax = MEM32(ebp + (-0x17E8)); /* 0x007857B7: mov eax, dword ptr [ebp - 0x17e8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20000000u);
    eax = eax & 0x20000000u; /* 0x007857BD: and eax, 0x20000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007857DD; /* 0x007857C2: je 0x7857dd */
L_007857C8:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x17E8))); _flag_b = (uint32_t)(0xDFFFFFFFu);
    MEM32(ebp + (-0x17E8)) = MEM32(ebp + (-0x17E8)) & 0xDFFFFFFFu; /* 0x007857C8: and dword ptr [ebp - 0x17e8], 0xdfffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0xAA8); /* 0x007857D2: lea ecx, [ebp - 0xaa8] */
    goto L_0040A000; /* 0x007857D8: jmp 0x40a000 */
L_007857DD:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007857DD: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007857DE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007857DEu);

L_007857DE:
    eax = MEM32(ebp + (-0x17E8)); /* 0x007857DE: mov eax, dword ptr [ebp - 0x17e8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x40000000u);
    eax = eax & 0x40000000u; /* 0x007857E4: and eax, 0x40000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00785804; /* 0x007857E9: je 0x785804 */
L_007857EF:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x17E8))); _flag_b = (uint32_t)(0xBFFFFFFFu);
    MEM32(ebp + (-0x17E8)) = MEM32(ebp + (-0x17E8)) & 0xBFFFFFFFu; /* 0x007857EF: and dword ptr [ebp - 0x17e8], 0xbfffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x748); /* 0x007857F9: lea ecx, [ebp - 0x748] */
    goto L_0040A000; /* 0x007857FF: jmp 0x40a000 */
L_00785804:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00785804: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00785805(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00785805u);

L_00785805:
    eax = MEM32(ebp + (-0x17E8)); /* 0x00785805: mov eax, dword ptr [ebp - 0x17e8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80000000u);
    eax = eax & 0x80000000u; /* 0x0078580B: and eax, 0x80000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0078582B; /* 0x00785810: je 0x78582b */
L_00785816:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x17E8))); _flag_b = (uint32_t)(0x7FFFFFFFu);
    MEM32(ebp + (-0x17E8)) = MEM32(ebp + (-0x17E8)) & 0x7FFFFFFFu; /* 0x00785816: and dword ptr [ebp - 0x17e8], 0x7fffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x1498); /* 0x00785820: lea ecx, [ebp - 0x1498] */
    goto L_0040A000; /* 0x00785826: jmp 0x40a000 */
L_0078582B:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0078582B: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078582C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078582Cu);

L_0078582C:
    eax = MEM32(ebp + (-0x17F8)); /* 0x0078582C: mov eax, dword ptr [ebp - 0x17f8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x00785832: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0078584D; /* 0x00785835: je 0x78584d */
L_0078583B:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x17F8))); _flag_b = (uint32_t)(0xFFFFFFFEu);
    MEM32(ebp + (-0x17F8)) = MEM32(ebp + (-0x17F8)) & 0xFFFFFFFEu; /* 0x0078583B: and dword ptr [ebp - 0x17f8], 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x1120); /* 0x00785842: lea ecx, [ebp - 0x1120] */
    goto L_0040A000; /* 0x00785848: jmp 0x40a000 */
L_0078584D:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0078584D: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078584E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078584Eu);

L_0078584E:
    eax = MEM32(ebp + (-0x17F8)); /* 0x0078584E: mov eax, dword ptr [ebp - 0x17f8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    eax = eax & 2; /* 0x00785854: and eax, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0078586F; /* 0x00785857: je 0x78586f */
L_0078585D:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x17F8))); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ebp + (-0x17F8)) = MEM32(ebp + (-0x17F8)) & 0xFFFFFFFDu; /* 0x0078585D: and dword ptr [ebp - 0x17f8], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0xB68); /* 0x00785864: lea ecx, [ebp - 0xb68] */
    goto L_0040A000; /* 0x0078586A: jmp 0x40a000 */
L_0078586F:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0078586F: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00785870(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00785870u);

L_00785870:
    eax = MEM32(ebp + (-0x17F8)); /* 0x00785870: mov eax, dword ptr [ebp - 0x17f8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    eax = eax & 4; /* 0x00785876: and eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00785891; /* 0x00785879: je 0x785891 */
L_0078587F:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x17F8))); _flag_b = (uint32_t)(0xFFFFFFFBu);
    MEM32(ebp + (-0x17F8)) = MEM32(ebp + (-0x17F8)) & 0xFFFFFFFBu; /* 0x0078587F: and dword ptr [ebp - 0x17f8], 0xfffffffb */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0xB50); /* 0x00785886: lea ecx, [ebp - 0xb50] */
    goto L_0040A000; /* 0x0078588C: jmp 0x40a000 */
L_00785891:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00785891: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00785892(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00785892u);

L_00785892:
    ecx = ebp + (-0x4C0); /* 0x00785892: lea ecx, [ebp - 0x4c0] */
    goto L_0040A000; /* 0x00785898: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078589D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078589Du);

L_0078589D:
    eax = MEM32(ebp + (-0x17F8)); /* 0x0078589D: mov eax, dword ptr [ebp - 0x17f8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    eax = eax & 8; /* 0x007858A3: and eax, 8 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007858BE; /* 0x007858A6: je 0x7858be */
L_007858AC:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x17F8))); _flag_b = (uint32_t)(0xFFFFFFF7u);
    MEM32(ebp + (-0x17F8)) = MEM32(ebp + (-0x17F8)) & 0xFFFFFFF7u; /* 0x007858AC: and dword ptr [ebp - 0x17f8], 0xfffffff7 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x640); /* 0x007858B3: lea ecx, [ebp - 0x640] */
    goto L_0040A000; /* 0x007858B9: jmp 0x40a000 */
L_007858BE:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007858BE: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007858BF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007858BFu);

L_007858BF:
    eax = MEM32(ebp + (-0x17F8)); /* 0x007858BF: mov eax, dword ptr [ebp - 0x17f8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    eax = eax & 0x10u; /* 0x007858C5: and eax, 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007858E0; /* 0x007858C8: je 0x7858e0 */
L_007858CE:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x17F8))); _flag_b = (uint32_t)(0xFFFFFFEFu);
    MEM32(ebp + (-0x17F8)) = MEM32(ebp + (-0x17F8)) & 0xFFFFFFEFu; /* 0x007858CE: and dword ptr [ebp - 0x17f8], 0xffffffef */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x610); /* 0x007858D5: lea ecx, [ebp - 0x610] */
    goto L_0040A000; /* 0x007858DB: jmp 0x40a000 */
L_007858E0:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007858E0: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007858E1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007858E1u);

L_007858E1:
    eax = MEM32(ebp + (-0x17F8)); /* 0x007858E1: mov eax, dword ptr [ebp - 0x17f8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    eax = eax & 0x20u; /* 0x007858E7: and eax, 0x20 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00785902; /* 0x007858EA: je 0x785902 */
L_007858F0:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x17F8))); _flag_b = (uint32_t)(0xFFFFFFDFu);
    MEM32(ebp + (-0x17F8)) = MEM32(ebp + (-0x17F8)) & 0xFFFFFFDFu; /* 0x007858F0: and dword ptr [ebp - 0x17f8], 0xffffffdf */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0xF58); /* 0x007858F7: lea ecx, [ebp - 0xf58] */
    goto L_0040A000; /* 0x007858FD: jmp 0x40a000 */
L_00785902:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00785902: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00785903(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00785903u);

L_00785903:
    eax = MEM32(ebp + (-0x17F8)); /* 0x00785903: mov eax, dword ptr [ebp - 0x17f8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x40u);
    eax = eax & 0x40u; /* 0x00785909: and eax, 0x40 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00785924; /* 0x0078590C: je 0x785924 */
L_00785912:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x17F8))); _flag_b = (uint32_t)(0xFFFFFFBFu);
    MEM32(ebp + (-0x17F8)) = MEM32(ebp + (-0x17F8)) & 0xFFFFFFBFu; /* 0x00785912: and dword ptr [ebp - 0x17f8], 0xffffffbf */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0xF28); /* 0x00785919: lea ecx, [ebp - 0xf28] */
    goto L_0040A000; /* 0x0078591F: jmp 0x40a000 */
L_00785924:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00785924: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00785925(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00785925u);

L_00785925:
    eax = MEM32(ebp + (-0x17F8)); /* 0x00785925: mov eax, dword ptr [ebp - 0x17f8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80u);
    eax = eax & 0x80u; /* 0x0078592B: and eax, 0x80 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0078594B; /* 0x00785930: je 0x78594b */
L_00785936:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x17F8))); _flag_b = (uint32_t)(0xFFFFFF7Fu);
    MEM32(ebp + (-0x17F8)) = MEM32(ebp + (-0x17F8)) & 0xFFFFFF7Fu; /* 0x00785936: and dword ptr [ebp - 0x17f8], 0xffffff7f */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0xEF8); /* 0x00785940: lea ecx, [ebp - 0xef8] */
    goto L_0040A000; /* 0x00785946: jmp 0x40a000 */
L_0078594B:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0078594B: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078594C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078594Cu);

L_0078594C:
    eax = MEM32(ebp + (-0x17F8)); /* 0x0078594C: mov eax, dword ptr [ebp - 0x17f8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x100u);
    eax = eax & 0x100u; /* 0x00785952: and eax, 0x100 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00785972; /* 0x00785957: je 0x785972 */
L_0078595D:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x17F8))); _flag_b = (uint32_t)(0xFFFFFEFFu);
    MEM32(ebp + (-0x17F8)) = MEM32(ebp + (-0x17F8)) & 0xFFFFFEFFu; /* 0x0078595D: and dword ptr [ebp - 0x17f8], 0xfffffeff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0xEC8); /* 0x00785967: lea ecx, [ebp - 0xec8] */
    goto L_0040A000; /* 0x0078596D: jmp 0x40a000 */
L_00785972:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00785972: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00785973(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00785973u);

L_00785973:
    eax = MEM32(ebp + (-0x17F8)); /* 0x00785973: mov eax, dword ptr [ebp - 0x17f8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x200u);
    eax = eax & 0x200u; /* 0x00785979: and eax, 0x200 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00785999; /* 0x0078597E: je 0x785999 */
L_00785984:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x17F8))); _flag_b = (uint32_t)(0xFFFFFDFFu);
    MEM32(ebp + (-0x17F8)) = MEM32(ebp + (-0x17F8)) & 0xFFFFFDFFu; /* 0x00785984: and dword ptr [ebp - 0x17f8], 0xfffffdff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x5E0); /* 0x0078598E: lea ecx, [ebp - 0x5e0] */
    goto L_0040A000; /* 0x00785994: jmp 0x40a000 */
L_00785999:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00785999: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078599A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078599Au);

L_0078599A:
    eax = MEM32(ebp + (-0x17F8)); /* 0x0078599A: mov eax, dword ptr [ebp - 0x17f8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x400u);
    eax = eax & 0x400u; /* 0x007859A0: and eax, 0x400 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007859C0; /* 0x007859A5: je 0x7859c0 */
L_007859AB:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x17F8))); _flag_b = (uint32_t)(0xFFFFFBFFu);
    MEM32(ebp + (-0x17F8)) = MEM32(ebp + (-0x17F8)) & 0xFFFFFBFFu; /* 0x007859AB: and dword ptr [ebp - 0x17f8], 0xfffffbff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x5B0); /* 0x007859B5: lea ecx, [ebp - 0x5b0] */
    goto L_0040A000; /* 0x007859BB: jmp 0x40a000 */
L_007859C0:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007859C0: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007859C1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007859C1u);

L_007859C1:
    eax = MEM32(ebp + (-0x17F8)); /* 0x007859C1: mov eax, dword ptr [ebp - 0x17f8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x800u);
    eax = eax & 0x800u; /* 0x007859C7: and eax, 0x800 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007859E7; /* 0x007859CC: je 0x7859e7 */
L_007859D2:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x17F8))); _flag_b = (uint32_t)(0xFFFFF7FFu);
    MEM32(ebp + (-0x17F8)) = MEM32(ebp + (-0x17F8)) & 0xFFFFF7FFu; /* 0x007859D2: and dword ptr [ebp - 0x17f8], 0xfffff7ff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0xE98); /* 0x007859DC: lea ecx, [ebp - 0xe98] */
    goto L_0040A000; /* 0x007859E2: jmp 0x40a000 */
L_007859E7:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007859E7: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007859E8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007859E8u);

L_007859E8:
    eax = MEM32(ebp + (-0x17F8)); /* 0x007859E8: mov eax, dword ptr [ebp - 0x17f8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1000u);
    eax = eax & 0x1000u; /* 0x007859EE: and eax, 0x1000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00785A0E; /* 0x007859F3: je 0x785a0e */
L_007859F9:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x17F8))); _flag_b = (uint32_t)(0xFFFFEFFFu);
    MEM32(ebp + (-0x17F8)) = MEM32(ebp + (-0x17F8)) & 0xFFFFEFFFu; /* 0x007859F9: and dword ptr [ebp - 0x17f8], 0xffffefff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0xE68); /* 0x00785A03: lea ecx, [ebp - 0xe68] */
    goto L_0040A000; /* 0x00785A09: jmp 0x40a000 */
L_00785A0E:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00785A0E: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00785A0F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00785A0Fu);

L_00785A0F:
    eax = MEM32(ebp + (-0x17F8)); /* 0x00785A0F: mov eax, dword ptr [ebp - 0x17f8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x2000u);
    eax = eax & 0x2000u; /* 0x00785A15: and eax, 0x2000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00785A35; /* 0x00785A1A: je 0x785a35 */
L_00785A20:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x17F8))); _flag_b = (uint32_t)(0xFFFFDFFFu);
    MEM32(ebp + (-0x17F8)) = MEM32(ebp + (-0x17F8)) & 0xFFFFDFFFu; /* 0x00785A20: and dword ptr [ebp - 0x17f8], 0xffffdfff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0xE38); /* 0x00785A2A: lea ecx, [ebp - 0xe38] */
    goto L_0040A000; /* 0x00785A30: jmp 0x40a000 */
L_00785A35:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00785A35: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00785A36(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00785A36u);

L_00785A36:
    eax = MEM32(ebp + (-0x17F8)); /* 0x00785A36: mov eax, dword ptr [ebp - 0x17f8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x4000u);
    eax = eax & 0x4000u; /* 0x00785A3C: and eax, 0x4000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00785A5C; /* 0x00785A41: je 0x785a5c */
L_00785A47:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x17F8))); _flag_b = (uint32_t)(0xFFFFBFFFu);
    MEM32(ebp + (-0x17F8)) = MEM32(ebp + (-0x17F8)) & 0xFFFFBFFFu; /* 0x00785A47: and dword ptr [ebp - 0x17f8], 0xffffbfff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0xE08); /* 0x00785A51: lea ecx, [ebp - 0xe08] */
    goto L_0040A000; /* 0x00785A57: jmp 0x40a000 */
L_00785A5C:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00785A5C: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00785A5D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00785A5Du);

L_00785A5D:
    eax = MEM32(ebp + (-0x17F8)); /* 0x00785A5D: mov eax, dword ptr [ebp - 0x17f8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8000u);
    eax = eax & 0x8000u; /* 0x00785A63: and eax, 0x8000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00785A83; /* 0x00785A68: je 0x785a83 */
L_00785A6E:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x17F8))); _flag_b = (uint32_t)(0xFFFF7FFFu);
    MEM32(ebp + (-0x17F8)) = MEM32(ebp + (-0x17F8)) & 0xFFFF7FFFu; /* 0x00785A6E: and dword ptr [ebp - 0x17f8], 0xffff7fff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x580); /* 0x00785A78: lea ecx, [ebp - 0x580] */
    goto L_0040A000; /* 0x00785A7E: jmp 0x40a000 */
L_00785A83:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00785A83: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00785A84(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00785A84u);

L_00785A84:
    eax = MEM32(ebp + (-0x17F8)); /* 0x00785A84: mov eax, dword ptr [ebp - 0x17f8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00010000u);
    eax = eax & 0x00010000u; /* 0x00785A8A: and eax, 0x10000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00785AAA; /* 0x00785A8F: je 0x785aaa */
L_00785A95:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x17F8))); _flag_b = (uint32_t)(0xFFFEFFFFu);
    MEM32(ebp + (-0x17F8)) = MEM32(ebp + (-0x17F8)) & 0xFFFEFFFFu; /* 0x00785A95: and dword ptr [ebp - 0x17f8], 0xfffeffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x550); /* 0x00785A9F: lea ecx, [ebp - 0x550] */
    goto L_0040A000; /* 0x00785AA5: jmp 0x40a000 */
L_00785AAA:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00785AAA: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00785AAB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00785AABu);

L_00785AAB:
    eax = MEM32(ebp + (-0x17F8)); /* 0x00785AAB: mov eax, dword ptr [ebp - 0x17f8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00020000u);
    eax = eax & 0x00020000u; /* 0x00785AB1: and eax, 0x20000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00785AD1; /* 0x00785AB6: je 0x785ad1 */
L_00785ABC:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x17F8))); _flag_b = (uint32_t)(0xFFFDFFFFu);
    MEM32(ebp + (-0x17F8)) = MEM32(ebp + (-0x17F8)) & 0xFFFDFFFFu; /* 0x00785ABC: and dword ptr [ebp - 0x17f8], 0xfffdffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0xDD8); /* 0x00785AC6: lea ecx, [ebp - 0xdd8] */
    goto L_0040A000; /* 0x00785ACC: jmp 0x40a000 */
L_00785AD1:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00785AD1: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00785AD2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00785AD2u);

L_00785AD2:
    eax = MEM32(ebp + (-0x17F8)); /* 0x00785AD2: mov eax, dword ptr [ebp - 0x17f8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00040000u);
    eax = eax & 0x00040000u; /* 0x00785AD8: and eax, 0x40000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00785AF8; /* 0x00785ADD: je 0x785af8 */
L_00785AE3:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x17F8))); _flag_b = (uint32_t)(0xFFFBFFFFu);
    MEM32(ebp + (-0x17F8)) = MEM32(ebp + (-0x17F8)) & 0xFFFBFFFFu; /* 0x00785AE3: and dword ptr [ebp - 0x17f8], 0xfffbffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0xDA8); /* 0x00785AED: lea ecx, [ebp - 0xda8] */
    goto L_0040A000; /* 0x00785AF3: jmp 0x40a000 */
L_00785AF8:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00785AF8: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00785AF9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00785AF9u);

L_00785AF9:
    eax = MEM32(ebp + (-0x17F8)); /* 0x00785AF9: mov eax, dword ptr [ebp - 0x17f8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00080000u);
    eax = eax & 0x00080000u; /* 0x00785AFF: and eax, 0x80000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00785B1F; /* 0x00785B04: je 0x785b1f */
L_00785B0A:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x17F8))); _flag_b = (uint32_t)(0xFFF7FFFFu);
    MEM32(ebp + (-0x17F8)) = MEM32(ebp + (-0x17F8)) & 0xFFF7FFFFu; /* 0x00785B0A: and dword ptr [ebp - 0x17f8], 0xfff7ffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0xD78); /* 0x00785B14: lea ecx, [ebp - 0xd78] */
    goto L_0040A000; /* 0x00785B1A: jmp 0x40a000 */
L_00785B1F:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00785B1F: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00785B20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00785B20u);

L_00785B20:
    eax = MEM32(ebp + (-0x17F8)); /* 0x00785B20: mov eax, dword ptr [ebp - 0x17f8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00100000u);
    eax = eax & 0x00100000u; /* 0x00785B26: and eax, 0x100000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00785B46; /* 0x00785B2B: je 0x785b46 */
L_00785B31:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x17F8))); _flag_b = (uint32_t)(0xFFEFFFFFu);
    MEM32(ebp + (-0x17F8)) = MEM32(ebp + (-0x17F8)) & 0xFFEFFFFFu; /* 0x00785B31: and dword ptr [ebp - 0x17f8], 0xffefffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0xD48); /* 0x00785B3B: lea ecx, [ebp - 0xd48] */
    goto L_0040A000; /* 0x00785B41: jmp 0x40a000 */
L_00785B46:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00785B46: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00785B47(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00785B47u);

L_00785B47:
    eax = MEM32(ebp + (-0x17F8)); /* 0x00785B47: mov eax, dword ptr [ebp - 0x17f8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00200000u);
    eax = eax & 0x00200000u; /* 0x00785B4D: and eax, 0x200000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00785B6D; /* 0x00785B52: je 0x785b6d */
L_00785B58:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x17F8))); _flag_b = (uint32_t)(0xFFDFFFFFu);
    MEM32(ebp + (-0x17F8)) = MEM32(ebp + (-0x17F8)) & 0xFFDFFFFFu; /* 0x00785B58: and dword ptr [ebp - 0x17f8], 0xffdfffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x520); /* 0x00785B62: lea ecx, [ebp - 0x520] */
    goto L_0040A000; /* 0x00785B68: jmp 0x40a000 */
L_00785B6D:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00785B6D: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00785B6E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00785B6Eu);

L_00785B6E:
    eax = MEM32(ebp + (-0x17F8)); /* 0x00785B6E: mov eax, dword ptr [ebp - 0x17f8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00400000u);
    eax = eax & 0x00400000u; /* 0x00785B74: and eax, 0x400000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00785B94; /* 0x00785B79: je 0x785b94 */
L_00785B7F:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x17F8))); _flag_b = (uint32_t)(0xFFBFFFFFu);
    MEM32(ebp + (-0x17F8)) = MEM32(ebp + (-0x17F8)) & 0xFFBFFFFFu; /* 0x00785B7F: and dword ptr [ebp - 0x17f8], 0xffbfffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x4F0); /* 0x00785B89: lea ecx, [ebp - 0x4f0] */
    goto L_0040A000; /* 0x00785B8F: jmp 0x40a000 */
L_00785B94:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00785B94: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00785B95(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00785B95u);

L_00785B95:
    eax = MEM32(ebp + (-0x17F8)); /* 0x00785B95: mov eax, dword ptr [ebp - 0x17f8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00800000u);
    eax = eax & 0x00800000u; /* 0x00785B9B: and eax, 0x800000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00785BBB; /* 0x00785BA0: je 0x785bbb */
L_00785BA6:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x17F8))); _flag_b = (uint32_t)(0xFF7FFFFFu);
    MEM32(ebp + (-0x17F8)) = MEM32(ebp + (-0x17F8)) & 0xFF7FFFFFu; /* 0x00785BA6: and dword ptr [ebp - 0x17f8], 0xff7fffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0xD18); /* 0x00785BB0: lea ecx, [ebp - 0xd18] */
    goto L_0040A000; /* 0x00785BB6: jmp 0x40a000 */
L_00785BBB:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00785BBB: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00785BBC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00785BBCu);

L_00785BBC:
    eax = MEM32(ebp + (-0x17F8)); /* 0x00785BBC: mov eax, dword ptr [ebp - 0x17f8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x01000000u);
    eax = eax & 0x01000000u; /* 0x00785BC2: and eax, 0x1000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00785BE2; /* 0x00785BC7: je 0x785be2 */
L_00785BCD:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x17F8))); _flag_b = (uint32_t)(0xFEFFFFFFu);
    MEM32(ebp + (-0x17F8)) = MEM32(ebp + (-0x17F8)) & 0xFEFFFFFFu; /* 0x00785BCD: and dword ptr [ebp - 0x17f8], 0xfeffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0xCE8); /* 0x00785BD7: lea ecx, [ebp - 0xce8] */
    goto L_0040A000; /* 0x00785BDD: jmp 0x40a000 */
L_00785BE2:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00785BE2: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00785BE3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00785BE3u);

L_00785BE3:
    eax = MEM32(ebp + (-0x17F8)); /* 0x00785BE3: mov eax, dword ptr [ebp - 0x17f8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x02000000u);
    eax = eax & 0x02000000u; /* 0x00785BE9: and eax, 0x2000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00785C09; /* 0x00785BEE: je 0x785c09 */
L_00785BF4:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x17F8))); _flag_b = (uint32_t)(0xFDFFFFFFu);
    MEM32(ebp + (-0x17F8)) = MEM32(ebp + (-0x17F8)) & 0xFDFFFFFFu; /* 0x00785BF4: and dword ptr [ebp - 0x17f8], 0xfdffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0xCB8); /* 0x00785BFE: lea ecx, [ebp - 0xcb8] */
    goto L_0040A000; /* 0x00785C04: jmp 0x40a000 */
L_00785C09:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00785C09: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00785C0A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00785C0Au);

L_00785C0A:
    eax = MEM32(ebp + (-0x17F8)); /* 0x00785C0A: mov eax, dword ptr [ebp - 0x17f8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x04000000u);
    eax = eax & 0x04000000u; /* 0x00785C10: and eax, 0x4000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00785C30; /* 0x00785C15: je 0x785c30 */
L_00785C1B:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x17F8))); _flag_b = (uint32_t)(0xFBFFFFFFu);
    MEM32(ebp + (-0x17F8)) = MEM32(ebp + (-0x17F8)) & 0xFBFFFFFFu; /* 0x00785C1B: and dword ptr [ebp - 0x17f8], 0xfbffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0xC88); /* 0x00785C25: lea ecx, [ebp - 0xc88] */
    goto L_0040A000; /* 0x00785C2B: jmp 0x40a000 */
L_00785C30:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00785C30: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00785C31(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00785C31u);

L_00785C31:
    ecx = ebp + (-0x670); /* 0x00785C31: lea ecx, [ebp - 0x670] */
    goto L_0040A000; /* 0x00785C37: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00785C3C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00785C3Cu);

L_00785C3C:
    eax = MEM32(ebp + (-0x17F8)); /* 0x00785C3C: mov eax, dword ptr [ebp - 0x17f8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x08000000u);
    eax = eax & 0x08000000u; /* 0x00785C42: and eax, 0x8000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00785C62; /* 0x00785C47: je 0x785c62 */
L_00785C4D:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x17F8))); _flag_b = (uint32_t)(0xF7FFFFFFu);
    MEM32(ebp + (-0x17F8)) = MEM32(ebp + (-0x17F8)) & 0xF7FFFFFFu; /* 0x00785C4D: and dword ptr [ebp - 0x17f8], 0xf7ffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x7F0); /* 0x00785C57: lea ecx, [ebp - 0x7f0] */
    goto L_0040A000; /* 0x00785C5D: jmp 0x40a000 */
L_00785C62:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00785C62: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00785C63(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00785C63u);

L_00785C63:
    eax = MEM32(ebp + (-0x17F8)); /* 0x00785C63: mov eax, dword ptr [ebp - 0x17f8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10000000u);
    eax = eax & 0x10000000u; /* 0x00785C69: and eax, 0x10000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00785C89; /* 0x00785C6E: je 0x785c89 */
L_00785C74:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x17F8))); _flag_b = (uint32_t)(0xEFFFFFFFu);
    MEM32(ebp + (-0x17F8)) = MEM32(ebp + (-0x17F8)) & 0xEFFFFFFFu; /* 0x00785C74: and dword ptr [ebp - 0x17f8], 0xefffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x7C0); /* 0x00785C7E: lea ecx, [ebp - 0x7c0] */
    goto L_0040A000; /* 0x00785C84: jmp 0x40a000 */
L_00785C89:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00785C89: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00785C8A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00785C8Au);

L_00785C8A:
    eax = MEM32(ebp + (-0x17F8)); /* 0x00785C8A: mov eax, dword ptr [ebp - 0x17f8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20000000u);
    eax = eax & 0x20000000u; /* 0x00785C90: and eax, 0x20000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00785CB0; /* 0x00785C95: je 0x785cb0 */
L_00785C9B:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x17F8))); _flag_b = (uint32_t)(0xDFFFFFFFu);
    MEM32(ebp + (-0x17F8)) = MEM32(ebp + (-0x17F8)) & 0xDFFFFFFFu; /* 0x00785C9B: and dword ptr [ebp - 0x17f8], 0xdfffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x1270); /* 0x00785CA5: lea ecx, [ebp - 0x1270] */
    goto L_0040A000; /* 0x00785CAB: jmp 0x40a000 */
L_00785CB0:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00785CB0: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00785CB1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00785CB1u);

L_00785CB1:
    eax = MEM32(ebp + (-0x17F8)); /* 0x00785CB1: mov eax, dword ptr [ebp - 0x17f8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x40000000u);
    eax = eax & 0x40000000u; /* 0x00785CB7: and eax, 0x40000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00785CD7; /* 0x00785CBC: je 0x785cd7 */
L_00785CC2:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x17F8))); _flag_b = (uint32_t)(0xBFFFFFFFu);
    MEM32(ebp + (-0x17F8)) = MEM32(ebp + (-0x17F8)) & 0xBFFFFFFFu; /* 0x00785CC2: and dword ptr [ebp - 0x17f8], 0xbfffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x1240); /* 0x00785CCC: lea ecx, [ebp - 0x1240] */
    goto L_0040A000; /* 0x00785CD2: jmp 0x40a000 */
L_00785CD7:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00785CD7: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00785CD8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00785CD8u);

L_00785CD8:
    eax = MEM32(ebp + (-0x17F8)); /* 0x00785CD8: mov eax, dword ptr [ebp - 0x17f8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80000000u);
    eax = eax & 0x80000000u; /* 0x00785CDE: and eax, 0x80000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00785CFE; /* 0x00785CE3: je 0x785cfe */
L_00785CE9:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x17F8))); _flag_b = (uint32_t)(0x7FFFFFFFu);
    MEM32(ebp + (-0x17F8)) = MEM32(ebp + (-0x17F8)) & 0x7FFFFFFFu; /* 0x00785CE9: and dword ptr [ebp - 0x17f8], 0x7fffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x1210); /* 0x00785CF3: lea ecx, [ebp - 0x1210] */
    goto L_0040A000; /* 0x00785CF9: jmp 0x40a000 */
L_00785CFE:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00785CFE: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00785CFF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00785CFFu);

L_00785CFF:
    eax = MEM32(ebp + (-0x1800)); /* 0x00785CFF: mov eax, dword ptr [ebp - 0x1800] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x00785D05: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00785D20; /* 0x00785D08: je 0x785d20 */
L_00785D0E:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1800))); _flag_b = (uint32_t)(0xFFFFFFFEu);
    MEM32(ebp + (-0x1800)) = MEM32(ebp + (-0x1800)) & 0xFFFFFFFEu; /* 0x00785D0E: and dword ptr [ebp - 0x1800], 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x11E0); /* 0x00785D15: lea ecx, [ebp - 0x11e0] */
    goto L_0040A000; /* 0x00785D1B: jmp 0x40a000 */
L_00785D20:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00785D20: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00785D21(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00785D21u);

L_00785D21:
    eax = MEM32(ebp + (-0x1800)); /* 0x00785D21: mov eax, dword ptr [ebp - 0x1800] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    eax = eax & 2; /* 0x00785D27: and eax, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00785D42; /* 0x00785D2A: je 0x785d42 */
L_00785D30:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1800))); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ebp + (-0x1800)) = MEM32(ebp + (-0x1800)) & 0xFFFFFFFDu; /* 0x00785D30: and dword ptr [ebp - 0x1800], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x790); /* 0x00785D37: lea ecx, [ebp - 0x790] */
    goto L_0040A000; /* 0x00785D3D: jmp 0x40a000 */
L_00785D42:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00785D42: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00785D43(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00785D43u);

L_00785D43:
    eax = MEM32(ebp + (-0x1800)); /* 0x00785D43: mov eax, dword ptr [ebp - 0x1800] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    eax = eax & 4; /* 0x00785D49: and eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00785D64; /* 0x00785D4C: je 0x785d64 */
L_00785D52:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1800))); _flag_b = (uint32_t)(0xFFFFFFFBu);
    MEM32(ebp + (-0x1800)) = MEM32(ebp + (-0x1800)) & 0xFFFFFFFBu; /* 0x00785D52: and dword ptr [ebp - 0x1800], 0xfffffffb */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x760); /* 0x00785D59: lea ecx, [ebp - 0x760] */
    goto L_0040A000; /* 0x00785D5F: jmp 0x40a000 */
L_00785D64:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00785D64: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00785D65(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00785D65u);

L_00785D65:
    eax = MEM32(ebp + (-0x1800)); /* 0x00785D65: mov eax, dword ptr [ebp - 0x1800] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    eax = eax & 8; /* 0x00785D6B: and eax, 8 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00785D86; /* 0x00785D6E: je 0x785d86 */
L_00785D74:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1800))); _flag_b = (uint32_t)(0xFFFFFFF7u);
    MEM32(ebp + (-0x1800)) = MEM32(ebp + (-0x1800)) & 0xFFFFFFF7u; /* 0x00785D74: and dword ptr [ebp - 0x1800], 0xfffffff7 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x1198); /* 0x00785D7B: lea ecx, [ebp - 0x1198] */
    goto L_0040A000; /* 0x00785D81: jmp 0x40a000 */
L_00785D86:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00785D86: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00785D87(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00785D87u);

L_00785D87:
    eax = MEM32(ebp + (-0x1800)); /* 0x00785D87: mov eax, dword ptr [ebp - 0x1800] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    eax = eax & 0x10u; /* 0x00785D8D: and eax, 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00785DA8; /* 0x00785D90: je 0x785da8 */
L_00785D96:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1800))); _flag_b = (uint32_t)(0xFFFFFFEFu);
    MEM32(ebp + (-0x1800)) = MEM32(ebp + (-0x1800)) & 0xFFFFFFEFu; /* 0x00785D96: and dword ptr [ebp - 0x1800], 0xffffffef */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x1168); /* 0x00785D9D: lea ecx, [ebp - 0x1168] */
    goto L_0040A000; /* 0x00785DA3: jmp 0x40a000 */
L_00785DA8:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00785DA8: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00785DA9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00785DA9u);

L_00785DA9:
    eax = MEM32(ebp + (-0x1800)); /* 0x00785DA9: mov eax, dword ptr [ebp - 0x1800] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    eax = eax & 0x20u; /* 0x00785DAF: and eax, 0x20 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00785DCA; /* 0x00785DB2: je 0x785dca */
L_00785DB8:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1800))); _flag_b = (uint32_t)(0xFFFFFFDFu);
    MEM32(ebp + (-0x1800)) = MEM32(ebp + (-0x1800)) & 0xFFFFFFDFu; /* 0x00785DB8: and dword ptr [ebp - 0x1800], 0xffffffdf */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x1138); /* 0x00785DBF: lea ecx, [ebp - 0x1138] */
    goto L_0040A000; /* 0x00785DC5: jmp 0x40a000 */
L_00785DCA:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00785DCA: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00785DCB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00785DCBu);

L_00785DCB:
    eax = MEM32(ebp + (-0x1800)); /* 0x00785DCB: mov eax, dword ptr [ebp - 0x1800] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x40u);
    eax = eax & 0x40u; /* 0x00785DD1: and eax, 0x40 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00785DEC; /* 0x00785DD4: je 0x785dec */
L_00785DDA:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1800))); _flag_b = (uint32_t)(0xFFFFFFBFu);
    MEM32(ebp + (-0x1800)) = MEM32(ebp + (-0x1800)) & 0xFFFFFFBFu; /* 0x00785DDA: and dword ptr [ebp - 0x1800], 0xffffffbf */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x1108); /* 0x00785DE1: lea ecx, [ebp - 0x1108] */
    goto L_0040A000; /* 0x00785DE7: jmp 0x40a000 */
L_00785DEC:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00785DEC: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00785DED(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00785DEDu);

L_00785DED:
    eax = MEM32(ebp + (-0x1800)); /* 0x00785DED: mov eax, dword ptr [ebp - 0x1800] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80u);
    eax = eax & 0x80u; /* 0x00785DF3: and eax, 0x80 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00785E13; /* 0x00785DF8: je 0x785e13 */
L_00785DFE:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1800))); _flag_b = (uint32_t)(0xFFFFFF7Fu);
    MEM32(ebp + (-0x1800)) = MEM32(ebp + (-0x1800)) & 0xFFFFFF7Fu; /* 0x00785DFE: and dword ptr [ebp - 0x1800], 0xffffff7f */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x730); /* 0x00785E08: lea ecx, [ebp - 0x730] */
    goto L_0040A000; /* 0x00785E0E: jmp 0x40a000 */
L_00785E13:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00785E13: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00785E14(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00785E14u);

L_00785E14:
    eax = MEM32(ebp + (-0x1800)); /* 0x00785E14: mov eax, dword ptr [ebp - 0x1800] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x100u);
    eax = eax & 0x100u; /* 0x00785E1A: and eax, 0x100 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00785E3A; /* 0x00785E1F: je 0x785e3a */
L_00785E25:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1800))); _flag_b = (uint32_t)(0xFFFFFEFFu);
    MEM32(ebp + (-0x1800)) = MEM32(ebp + (-0x1800)) & 0xFFFFFEFFu; /* 0x00785E25: and dword ptr [ebp - 0x1800], 0xfffffeff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x700); /* 0x00785E2F: lea ecx, [ebp - 0x700] */
    goto L_0040A000; /* 0x00785E35: jmp 0x40a000 */
L_00785E3A:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00785E3A: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00785E3B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00785E3Bu);

L_00785E3B:
    eax = MEM32(ebp + (-0x1800)); /* 0x00785E3B: mov eax, dword ptr [ebp - 0x1800] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x200u);
    eax = eax & 0x200u; /* 0x00785E41: and eax, 0x200 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00785E61; /* 0x00785E46: je 0x785e61 */
L_00785E4C:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1800))); _flag_b = (uint32_t)(0xFFFFFDFFu);
    MEM32(ebp + (-0x1800)) = MEM32(ebp + (-0x1800)) & 0xFFFFFDFFu; /* 0x00785E4C: and dword ptr [ebp - 0x1800], 0xfffffdff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x10D8); /* 0x00785E56: lea ecx, [ebp - 0x10d8] */
    goto L_0040A000; /* 0x00785E5C: jmp 0x40a000 */
L_00785E61:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00785E61: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00785E62(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00785E62u);

L_00785E62:
    eax = MEM32(ebp + (-0x1800)); /* 0x00785E62: mov eax, dword ptr [ebp - 0x1800] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x400u);
    eax = eax & 0x400u; /* 0x00785E68: and eax, 0x400 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00785E88; /* 0x00785E6D: je 0x785e88 */
L_00785E73:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1800))); _flag_b = (uint32_t)(0xFFFFFBFFu);
    MEM32(ebp + (-0x1800)) = MEM32(ebp + (-0x1800)) & 0xFFFFFBFFu; /* 0x00785E73: and dword ptr [ebp - 0x1800], 0xfffffbff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x10A8); /* 0x00785E7D: lea ecx, [ebp - 0x10a8] */
    goto L_0040A000; /* 0x00785E83: jmp 0x40a000 */
L_00785E88:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00785E88: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00785E89(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00785E89u);

L_00785E89:
    eax = MEM32(ebp + (-0x1800)); /* 0x00785E89: mov eax, dword ptr [ebp - 0x1800] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x800u);
    eax = eax & 0x800u; /* 0x00785E8F: and eax, 0x800 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00785EAF; /* 0x00785E94: je 0x785eaf */
L_00785E9A:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1800))); _flag_b = (uint32_t)(0xFFFFF7FFu);
    MEM32(ebp + (-0x1800)) = MEM32(ebp + (-0x1800)) & 0xFFFFF7FFu; /* 0x00785E9A: and dword ptr [ebp - 0x1800], 0xfffff7ff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x1078); /* 0x00785EA4: lea ecx, [ebp - 0x1078] */
    goto L_0040A000; /* 0x00785EAA: jmp 0x40a000 */
L_00785EAF:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00785EAF: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00785EB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00785EB0u);

L_00785EB0:
    eax = MEM32(ebp + (-0x1800)); /* 0x00785EB0: mov eax, dword ptr [ebp - 0x1800] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1000u);
    eax = eax & 0x1000u; /* 0x00785EB6: and eax, 0x1000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00785ED6; /* 0x00785EBB: je 0x785ed6 */
L_00785EC1:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1800))); _flag_b = (uint32_t)(0xFFFFEFFFu);
    MEM32(ebp + (-0x1800)) = MEM32(ebp + (-0x1800)) & 0xFFFFEFFFu; /* 0x00785EC1: and dword ptr [ebp - 0x1800], 0xffffefff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x1048); /* 0x00785ECB: lea ecx, [ebp - 0x1048] */
    goto L_0040A000; /* 0x00785ED1: jmp 0x40a000 */
L_00785ED6:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00785ED6: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00785ED7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00785ED7u);

L_00785ED7:
    eax = MEM32(ebp + (-0x1800)); /* 0x00785ED7: mov eax, dword ptr [ebp - 0x1800] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x2000u);
    eax = eax & 0x2000u; /* 0x00785EDD: and eax, 0x2000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00785EFD; /* 0x00785EE2: je 0x785efd */
L_00785EE8:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1800))); _flag_b = (uint32_t)(0xFFFFDFFFu);
    MEM32(ebp + (-0x1800)) = MEM32(ebp + (-0x1800)) & 0xFFFFDFFFu; /* 0x00785EE8: and dword ptr [ebp - 0x1800], 0xffffdfff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x6D0); /* 0x00785EF2: lea ecx, [ebp - 0x6d0] */
    goto L_0040A000; /* 0x00785EF8: jmp 0x40a000 */
L_00785EFD:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00785EFD: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00785EFE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00785EFEu);

L_00785EFE:
    eax = MEM32(ebp + (-0x1800)); /* 0x00785EFE: mov eax, dword ptr [ebp - 0x1800] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x4000u);
    eax = eax & 0x4000u; /* 0x00785F04: and eax, 0x4000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00785F24; /* 0x00785F09: je 0x785f24 */
L_00785F0F:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1800))); _flag_b = (uint32_t)(0xFFFFBFFFu);
    MEM32(ebp + (-0x1800)) = MEM32(ebp + (-0x1800)) & 0xFFFFBFFFu; /* 0x00785F0F: and dword ptr [ebp - 0x1800], 0xffffbfff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x6A0); /* 0x00785F19: lea ecx, [ebp - 0x6a0] */
    goto L_0040A000; /* 0x00785F1F: jmp 0x40a000 */
L_00785F24:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00785F24: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00785F25(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00785F25u);

L_00785F25:
    eax = MEM32(ebp + (-0x1800)); /* 0x00785F25: mov eax, dword ptr [ebp - 0x1800] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8000u);
    eax = eax & 0x8000u; /* 0x00785F2B: and eax, 0x8000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00785F4B; /* 0x00785F30: je 0x785f4b */
L_00785F36:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1800))); _flag_b = (uint32_t)(0xFFFF7FFFu);
    MEM32(ebp + (-0x1800)) = MEM32(ebp + (-0x1800)) & 0xFFFF7FFFu; /* 0x00785F36: and dword ptr [ebp - 0x1800], 0xffff7fff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x1018); /* 0x00785F40: lea ecx, [ebp - 0x1018] */
    goto L_0040A000; /* 0x00785F46: jmp 0x40a000 */
L_00785F4B:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00785F4B: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00785F4C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00785F4Cu);

L_00785F4C:
    eax = MEM32(ebp + (-0x1800)); /* 0x00785F4C: mov eax, dword ptr [ebp - 0x1800] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00010000u);
    eax = eax & 0x00010000u; /* 0x00785F52: and eax, 0x10000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00785F72; /* 0x00785F57: je 0x785f72 */
L_00785F5D:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1800))); _flag_b = (uint32_t)(0xFFFEFFFFu);
    MEM32(ebp + (-0x1800)) = MEM32(ebp + (-0x1800)) & 0xFFFEFFFFu; /* 0x00785F5D: and dword ptr [ebp - 0x1800], 0xfffeffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0xFE8); /* 0x00785F67: lea ecx, [ebp - 0xfe8] */
    goto L_0040A000; /* 0x00785F6D: jmp 0x40a000 */
L_00785F72:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00785F72: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00785F73(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00785F73u);

L_00785F73:
    eax = MEM32(ebp + (-0x1800)); /* 0x00785F73: mov eax, dword ptr [ebp - 0x1800] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00020000u);
    eax = eax & 0x00020000u; /* 0x00785F79: and eax, 0x20000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00785F99; /* 0x00785F7E: je 0x785f99 */
L_00785F84:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1800))); _flag_b = (uint32_t)(0xFFFDFFFFu);
    MEM32(ebp + (-0x1800)) = MEM32(ebp + (-0x1800)) & 0xFFFDFFFFu; /* 0x00785F84: and dword ptr [ebp - 0x1800], 0xfffdffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0xFB8); /* 0x00785F8E: lea ecx, [ebp - 0xfb8] */
    goto L_0040A000; /* 0x00785F94: jmp 0x40a000 */
L_00785F99:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00785F99: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00785F9A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00785F9Au);

L_00785F9A:
    eax = MEM32(ebp + (-0x1800)); /* 0x00785F9A: mov eax, dword ptr [ebp - 0x1800] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00040000u);
    eax = eax & 0x00040000u; /* 0x00785FA0: and eax, 0x40000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00785FC0; /* 0x00785FA5: je 0x785fc0 */
L_00785FAB:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1800))); _flag_b = (uint32_t)(0xFFFBFFFFu);
    MEM32(ebp + (-0x1800)) = MEM32(ebp + (-0x1800)) & 0xFFFBFFFFu; /* 0x00785FAB: and dword ptr [ebp - 0x1800], 0xfffbffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0xF88); /* 0x00785FB5: lea ecx, [ebp - 0xf88] */
    goto L_0040A000; /* 0x00785FBB: jmp 0x40a000 */
L_00785FC0:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00785FC0: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00785FC1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00785FC1u);

L_00785FC1:
    ecx = ebp + (-0x820); /* 0x00785FC1: lea ecx, [ebp - 0x820] */
    goto L_0040A000; /* 0x00785FC7: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}
