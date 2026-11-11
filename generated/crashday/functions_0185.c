#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_007A4EAA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A4EAAu);

L_007A4EAA:
    ecx = MEM32(ebp + (-0x21B4)); /* 0x007A4EAA: mov ecx, dword ptr [ebp - 0x21b4] */
    goto L_0040A000; /* 0x007A4EB0: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A4EB5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A4EB5u);

L_007A4EB5:
    ecx = MEM32(ebp + (-0x21B8)); /* 0x007A4EB5: mov ecx, dword ptr [ebp - 0x21b8] */
    goto L_0040A000; /* 0x007A4EBB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A4EC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A4EC0u);

L_007A4EC0:
    ecx = MEM32(ebp + (-0x21B0)); /* 0x007A4EC0: mov ecx, dword ptr [ebp - 0x21b0] */
    goto L_0040A000; /* 0x007A4EC6: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A4ECB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A4ECBu);

L_007A4ECB:
    ecx = MEM32(ebp + (-0x21B4)); /* 0x007A4ECB: mov ecx, dword ptr [ebp - 0x21b4] */
    goto L_0040A000; /* 0x007A4ED1: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A4ED6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A4ED6u);

L_007A4ED6:
    eax = MEM32(ebp + (-0x21BC)); /* 0x007A4ED6: mov eax, dword ptr [ebp - 0x21bc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x08000000u);
    eax = eax & 0x08000000u; /* 0x007A4EDC: and eax, 0x8000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007A4EFC; /* 0x007A4EE1: je 0x7a4efc */
L_007A4EE7:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x21BC))); _flag_b = (uint32_t)(0xF7FFFFFFu);
    MEM32(ebp + (-0x21BC)) = MEM32(ebp + (-0x21BC)) & 0xF7FFFFFFu; /* 0x007A4EE7: and dword ptr [ebp - 0x21bc], 0xf7ffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x1248); /* 0x007A4EF1: lea ecx, [ebp - 0x1248] */
    goto L_0040A000; /* 0x007A4EF7: jmp 0x40a000 */
L_007A4EFC:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007A4EFC: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A4EFD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A4EFDu);

L_007A4EFD:
    eax = MEM32(ebp + (-0x21BC)); /* 0x007A4EFD: mov eax, dword ptr [ebp - 0x21bc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10000000u);
    eax = eax & 0x10000000u; /* 0x007A4F03: and eax, 0x10000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007A4F23; /* 0x007A4F08: je 0x7a4f23 */
L_007A4F0E:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x21BC))); _flag_b = (uint32_t)(0xEFFFFFFFu);
    MEM32(ebp + (-0x21BC)) = MEM32(ebp + (-0x21BC)) & 0xEFFFFFFFu; /* 0x007A4F0E: and dword ptr [ebp - 0x21bc], 0xefffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x1218); /* 0x007A4F18: lea ecx, [ebp - 0x1218] */
    goto L_0040A000; /* 0x007A4F1E: jmp 0x40a000 */
L_007A4F23:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007A4F23: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A4F24(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A4F24u);

L_007A4F24:
    ecx = MEM32(ebp + (-0x21B8)); /* 0x007A4F24: mov ecx, dword ptr [ebp - 0x21b8] */
    goto L_0040A000; /* 0x007A4F2A: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A4F2F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A4F2Fu);

L_007A4F2F:
    ecx = ebp + (-0x1278); /* 0x007A4F2F: lea ecx, [ebp - 0x1278] */
    goto L_0040A000; /* 0x007A4F35: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A4F3A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A4F3Au);

L_007A4F3A:
    ecx = MEM32(ebp + (-0x21B8)); /* 0x007A4F3A: mov ecx, dword ptr [ebp - 0x21b8] */
    goto L_0040A000; /* 0x007A4F40: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A4F45(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A4F45u);

L_007A4F45:
    ecx = MEM32(ebp + (-0x21B8)); /* 0x007A4F45: mov ecx, dword ptr [ebp - 0x21b8] */
    goto L_0040A000; /* 0x007A4F4B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A4F50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A4F50u);

L_007A4F50:
    ecx = ebp + (-0x12D8); /* 0x007A4F50: lea ecx, [ebp - 0x12d8] */
    goto L_0040A000; /* 0x007A4F56: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A4F5B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A4F5Bu);

L_007A4F5B:
    ecx = ebp + (-0x12A8); /* 0x007A4F5B: lea ecx, [ebp - 0x12a8] */
    goto L_0040A000; /* 0x007A4F61: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A4F66(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A4F66u);

L_007A4F66:
    ecx = ebp + (-0x21A8); /* 0x007A4F66: lea ecx, [ebp - 0x21a8] */
    goto L_0040A000; /* 0x007A4F6C: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A4F71(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A4F71u);

L_007A4F71:
    ecx = ebp + (-0x1338); /* 0x007A4F71: lea ecx, [ebp - 0x1338] */
    goto L_0040A000; /* 0x007A4F77: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A4F7C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A4F7Cu);

L_007A4F7C:
    ecx = ebp + (-0x1308); /* 0x007A4F7C: lea ecx, [ebp - 0x1308] */
    goto L_0040A000; /* 0x007A4F82: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A4F87(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A4F87u);

L_007A4F87:
    ecx = MEM32(ebp + (-0x21B8)); /* 0x007A4F87: mov ecx, dword ptr [ebp - 0x21b8] */
    goto L_0040A000; /* 0x007A4F8D: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A4F92(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A4F92u);

L_007A4F92:
    ecx = MEM32(ebp + (-0x21B0)); /* 0x007A4F92: mov ecx, dword ptr [ebp - 0x21b0] */
    goto L_0040A000; /* 0x007A4F98: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A4F9D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A4F9Du);

L_007A4F9D:
    ecx = MEM32(ebp + (-0x21B4)); /* 0x007A4F9D: mov ecx, dword ptr [ebp - 0x21b4] */
    goto L_0040A000; /* 0x007A4FA3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A4FA8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A4FA8u);

L_007A4FA8:
    ecx = ebp + (-0x1398); /* 0x007A4FA8: lea ecx, [ebp - 0x1398] */
    goto L_0040A000; /* 0x007A4FAE: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A4FB3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A4FB3u);

L_007A4FB3:
    ecx = ebp + (-0x1368); /* 0x007A4FB3: lea ecx, [ebp - 0x1368] */
    goto L_0040A000; /* 0x007A4FB9: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A4FBE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A4FBEu);

L_007A4FBE:
    ecx = MEM32(ebp + (-0x21B8)); /* 0x007A4FBE: mov ecx, dword ptr [ebp - 0x21b8] */
    goto L_0040A000; /* 0x007A4FC4: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A4FC9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A4FC9u);

L_007A4FC9:
    ecx = MEM32(ebp + (-0x21B0)); /* 0x007A4FC9: mov ecx, dword ptr [ebp - 0x21b0] */
    goto L_0040A000; /* 0x007A4FCF: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A4FD4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A4FD4u);

L_007A4FD4:
    ecx = MEM32(ebp + (-0x21B4)); /* 0x007A4FD4: mov ecx, dword ptr [ebp - 0x21b4] */
    goto L_0040A000; /* 0x007A4FDA: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A4FDF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A4FDFu);

L_007A4FDF:
    eax = MEM32(ebp + (-0x21BC)); /* 0x007A4FDF: mov eax, dword ptr [ebp - 0x21bc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20000000u);
    eax = eax & 0x20000000u; /* 0x007A4FE5: and eax, 0x20000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007A5005; /* 0x007A4FEA: je 0x7a5005 */
L_007A4FF0:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x21BC))); _flag_b = (uint32_t)(0xDFFFFFFFu);
    MEM32(ebp + (-0x21BC)) = MEM32(ebp + (-0x21BC)) & 0xDFFFFFFFu; /* 0x007A4FF0: and dword ptr [ebp - 0x21bc], 0xdfffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x13F8); /* 0x007A4FFA: lea ecx, [ebp - 0x13f8] */
    goto L_0040A000; /* 0x007A5000: jmp 0x40a000 */
L_007A5005:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007A5005: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A5006(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A5006u);

L_007A5006:
    eax = MEM32(ebp + (-0x21BC)); /* 0x007A5006: mov eax, dword ptr [ebp - 0x21bc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x40000000u);
    eax = eax & 0x40000000u; /* 0x007A500C: and eax, 0x40000000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007A502C; /* 0x007A5011: je 0x7a502c */
L_007A5017:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x21BC))); _flag_b = (uint32_t)(0xBFFFFFFFu);
    MEM32(ebp + (-0x21BC)) = MEM32(ebp + (-0x21BC)) & 0xBFFFFFFFu; /* 0x007A5017: and dword ptr [ebp - 0x21bc], 0xbfffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x13C8); /* 0x007A5021: lea ecx, [ebp - 0x13c8] */
    goto L_0040A000; /* 0x007A5027: jmp 0x40a000 */
L_007A502C:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007A502C: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A502D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A502Du);

L_007A502D:
    ecx = MEM32(ebp + (-0x21B8)); /* 0x007A502D: mov ecx, dword ptr [ebp - 0x21b8] */
    goto L_0040A000; /* 0x007A5033: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A5038(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A5038u);

L_007A5038:
    ecx = ebp + (-0x1428); /* 0x007A5038: lea ecx, [ebp - 0x1428] */
    goto L_0040A000; /* 0x007A503E: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A5043(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A5043u);

L_007A5043:
    ecx = MEM32(ebp + (-0x21B8)); /* 0x007A5043: mov ecx, dword ptr [ebp - 0x21b8] */
    goto L_0040A000; /* 0x007A5049: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A504E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A504Eu);

L_007A504E:
    ecx = ebp + (-0x1488); /* 0x007A504E: lea ecx, [ebp - 0x1488] */
    goto L_0040A000; /* 0x007A5054: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A5059(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A5059u);

L_007A5059:
    ecx = ebp + (-0x1458); /* 0x007A5059: lea ecx, [ebp - 0x1458] */
    goto L_0040A000; /* 0x007A505F: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A5064(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A5064u);

L_007A5064:
    ecx = ebp + (-0x2100); /* 0x007A5064: lea ecx, [ebp - 0x2100] */
    goto L_0040A000; /* 0x007A506A: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A506F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A506Fu);

L_007A506F:
    ecx = ebp + (-0x14E8); /* 0x007A506F: lea ecx, [ebp - 0x14e8] */
    goto L_0040A000; /* 0x007A5075: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A507A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A507Au);

L_007A507A:
    ecx = ebp + (-0x14B8); /* 0x007A507A: lea ecx, [ebp - 0x14b8] */
    goto L_0040A000; /* 0x007A5080: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A5085(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A5085u);

L_007A5085:
    ecx = MEM32(ebp + (-0x21B8)); /* 0x007A5085: mov ecx, dword ptr [ebp - 0x21b8] */
    goto L_0040A000; /* 0x007A508B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A5090(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A5090u);

L_007A5090:
    ecx = MEM32(ebp + (-0x21B0)); /* 0x007A5090: mov ecx, dword ptr [ebp - 0x21b0] */
    goto L_0040A000; /* 0x007A5096: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A509B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A509Bu);

L_007A509B:
    ecx = MEM32(ebp + (-0x21B4)); /* 0x007A509B: mov ecx, dword ptr [ebp - 0x21b4] */
    goto L_0040A000; /* 0x007A50A1: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A50A6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A50A6u);

L_007A50A6:
    ecx = ebp + (-0x1548); /* 0x007A50A6: lea ecx, [ebp - 0x1548] */
    goto L_0040A000; /* 0x007A50AC: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A50B1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A50B1u);

L_007A50B1:
    ecx = ebp + (-0x1518); /* 0x007A50B1: lea ecx, [ebp - 0x1518] */
    goto L_0040A000; /* 0x007A50B7: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A50BC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A50BCu);

L_007A50BC:
    ecx = MEM32(ebp + (-0x21B8)); /* 0x007A50BC: mov ecx, dword ptr [ebp - 0x21b8] */
    goto L_0040A000; /* 0x007A50C2: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A50C7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A50C7u);

L_007A50C7:
    ecx = MEM32(ebp + (-0x21B0)); /* 0x007A50C7: mov ecx, dword ptr [ebp - 0x21b0] */
    goto L_0040A000; /* 0x007A50CD: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A50D2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A50D2u);

L_007A50D2:
    ecx = MEM32(ebp + (-0x21B4)); /* 0x007A50D2: mov ecx, dword ptr [ebp - 0x21b4] */
    goto L_0040A000; /* 0x007A50D8: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A50DD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A50DDu);

L_007A50DD:
    ecx = ebp + (-0x15A8); /* 0x007A50DD: lea ecx, [ebp - 0x15a8] */
    goto L_0040A000; /* 0x007A50E3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A50E8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A50E8u);

L_007A50E8:
    ecx = ebp + (-0x1578); /* 0x007A50E8: lea ecx, [ebp - 0x1578] */
    goto L_0040A000; /* 0x007A50EE: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A50F3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A50F3u);

L_007A50F3:
    ecx = MEM32(ebp + (-0x21B8)); /* 0x007A50F3: mov ecx, dword ptr [ebp - 0x21b8] */
    goto L_0040A000; /* 0x007A50F9: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A50FE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A50FEu);

L_007A50FE:
    ecx = MEM32(ebp + (-0x21B0)); /* 0x007A50FE: mov ecx, dword ptr [ebp - 0x21b0] */
    goto L_0040A000; /* 0x007A5104: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A5109(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A5109u);

L_007A5109:
    ecx = MEM32(ebp + (-0x21B4)); /* 0x007A5109: mov ecx, dword ptr [ebp - 0x21b4] */
    goto L_0040A000; /* 0x007A510F: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A5114(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A5114u);

L_007A5114:
    ecx = ebp + (-0x1608); /* 0x007A5114: lea ecx, [ebp - 0x1608] */
    goto L_0040A000; /* 0x007A511A: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A511F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A511Fu);

L_007A511F:
    ecx = ebp + (-0x15D8); /* 0x007A511F: lea ecx, [ebp - 0x15d8] */
    goto L_0040A000; /* 0x007A5125: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A512A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A512Au);

L_007A512A:
    ecx = MEM32(ebp + (-0x21B8)); /* 0x007A512A: mov ecx, dword ptr [ebp - 0x21b8] */
    goto L_0040A000; /* 0x007A5130: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A5135(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A5135u);

L_007A5135:
    ecx = MEM32(ebp + (-0x21B0)); /* 0x007A5135: mov ecx, dword ptr [ebp - 0x21b0] */
    goto L_0040A000; /* 0x007A513B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A5140(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A5140u);

L_007A5140:
    ecx = MEM32(ebp + (-0x21B4)); /* 0x007A5140: mov ecx, dword ptr [ebp - 0x21b4] */
    goto L_0040A000; /* 0x007A5146: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A514B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A514Bu);

L_007A514B:
    eax = MEM32(ebp + (-0x21BC)); /* 0x007A514B: mov eax, dword ptr [ebp - 0x21bc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x2000u);
    eax = eax & 0x2000u; /* 0x007A5151: and eax, 0x2000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007A5171; /* 0x007A5156: je 0x7a5171 */
L_007A515C:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x21BC))); _flag_b = (uint32_t)(0xFFFFDFFFu);
    MEM32(ebp + (-0x21BC)) = MEM32(ebp + (-0x21BC)) & 0xFFFFDFFFu; /* 0x007A515C: and dword ptr [ebp - 0x21bc], 0xffffdfff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x1668); /* 0x007A5166: lea ecx, [ebp - 0x1668] */
    goto L_0040A000; /* 0x007A516C: jmp 0x40a000 */
L_007A5171:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007A5171: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A5172(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A5172u);

L_007A5172:
    eax = MEM32(ebp + (-0x21BC)); /* 0x007A5172: mov eax, dword ptr [ebp - 0x21bc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x4000u);
    eax = eax & 0x4000u; /* 0x007A5178: and eax, 0x4000 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007A5198; /* 0x007A517D: je 0x7a5198 */
L_007A5183:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x21BC))); _flag_b = (uint32_t)(0xFFFFBFFFu);
    MEM32(ebp + (-0x21BC)) = MEM32(ebp + (-0x21BC)) & 0xFFFFBFFFu; /* 0x007A5183: and dword ptr [ebp - 0x21bc], 0xffffbfff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x1638); /* 0x007A518D: lea ecx, [ebp - 0x1638] */
    goto L_0040A000; /* 0x007A5193: jmp 0x40a000 */
L_007A5198:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007A5198: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A5199(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A5199u);

L_007A5199:
    ecx = MEM32(ebp + (-0x21B8)); /* 0x007A5199: mov ecx, dword ptr [ebp - 0x21b8] */
    goto L_0040A000; /* 0x007A519F: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A51A4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A51A4u);

L_007A51A4:
    ecx = ebp + (-0x1698); /* 0x007A51A4: lea ecx, [ebp - 0x1698] */
    goto L_0040A000; /* 0x007A51AA: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A51AF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A51AFu);

L_007A51AF:
    ecx = MEM32(ebp + (-0x21B8)); /* 0x007A51AF: mov ecx, dword ptr [ebp - 0x21b8] */
    goto L_0040A000; /* 0x007A51B5: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A51BA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A51BAu);

L_007A51BA:
    ecx = MEM32(ebp + (-0x21B8)); /* 0x007A51BA: mov ecx, dword ptr [ebp - 0x21b8] */
    goto L_0040A000; /* 0x007A51C0: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A51C5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A51C5u);

L_007A51C5:
    ecx = ebp + (-0x16F8); /* 0x007A51C5: lea ecx, [ebp - 0x16f8] */
    goto L_0040A000; /* 0x007A51CB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A51D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A51D0u);

L_007A51D0:
    ecx = ebp + (-0x16C8); /* 0x007A51D0: lea ecx, [ebp - 0x16c8] */
    goto L_0040A000; /* 0x007A51D6: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A51DB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A51DBu);

L_007A51DB:
    ecx = ebp + (-0x1E78); /* 0x007A51DB: lea ecx, [ebp - 0x1e78] */
    goto L_0040A000; /* 0x007A51E1: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A51E6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A51E6u);

L_007A51E6:
    ecx = ebp + (-0x1758); /* 0x007A51E6: lea ecx, [ebp - 0x1758] */
    goto L_0040A000; /* 0x007A51EC: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A51F1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A51F1u);

L_007A51F1:
    ecx = ebp + (-0x1728); /* 0x007A51F1: lea ecx, [ebp - 0x1728] */
    goto L_0040A000; /* 0x007A51F7: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A51FC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A51FCu);

L_007A51FC:
    ecx = MEM32(ebp + (-0x21B8)); /* 0x007A51FC: mov ecx, dword ptr [ebp - 0x21b8] */
    goto L_0040A000; /* 0x007A5202: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A5207(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A5207u);

L_007A5207:
    ecx = MEM32(ebp + (-0x21B0)); /* 0x007A5207: mov ecx, dword ptr [ebp - 0x21b0] */
    goto L_0040A000; /* 0x007A520D: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A5212(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A5212u);

L_007A5212:
    ecx = MEM32(ebp + (-0x21B4)); /* 0x007A5212: mov ecx, dword ptr [ebp - 0x21b4] */
    goto L_0040A000; /* 0x007A5218: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A521D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A521Du);

L_007A521D:
    ecx = ebp + (-0x17B8); /* 0x007A521D: lea ecx, [ebp - 0x17b8] */
    goto L_0040A000; /* 0x007A5223: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A5228(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A5228u);

L_007A5228:
    ecx = ebp + (-0x1788); /* 0x007A5228: lea ecx, [ebp - 0x1788] */
    goto L_0040A000; /* 0x007A522E: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A5233(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A5233u);

L_007A5233:
    ecx = MEM32(ebp + (-0x21B8)); /* 0x007A5233: mov ecx, dword ptr [ebp - 0x21b8] */
    goto L_0040A000; /* 0x007A5239: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A523E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A523Eu);

L_007A523E:
    ecx = MEM32(ebp + (-0x21B0)); /* 0x007A523E: mov ecx, dword ptr [ebp - 0x21b0] */
    goto L_0040A000; /* 0x007A5244: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A5249(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A5249u);

L_007A5249:
    ecx = MEM32(ebp + (-0x21B4)); /* 0x007A5249: mov ecx, dword ptr [ebp - 0x21b4] */
    goto L_0040A000; /* 0x007A524F: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A5254(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A5254u);

L_007A5254:
    ecx = ebp + (-0x1818); /* 0x007A5254: lea ecx, [ebp - 0x1818] */
    goto L_0040A000; /* 0x007A525A: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A525F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A525Fu);

L_007A525F:
    ecx = ebp + (-0x17E8); /* 0x007A525F: lea ecx, [ebp - 0x17e8] */
    goto L_0040A000; /* 0x007A5265: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A526A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A526Au);

L_007A526A:
    ecx = MEM32(ebp + (-0x21B8)); /* 0x007A526A: mov ecx, dword ptr [ebp - 0x21b8] */
    goto L_0040A000; /* 0x007A5270: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A5275(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A5275u);

L_007A5275:
    ecx = MEM32(ebp + (-0x21B0)); /* 0x007A5275: mov ecx, dword ptr [ebp - 0x21b0] */
    goto L_0040A000; /* 0x007A527B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A5280(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A5280u);

L_007A5280:
    ecx = MEM32(ebp + (-0x21B4)); /* 0x007A5280: mov ecx, dword ptr [ebp - 0x21b4] */
    goto L_0040A000; /* 0x007A5286: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A528B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A528Bu);

L_007A528B:
    ecx = ebp + (-0x1878); /* 0x007A528B: lea ecx, [ebp - 0x1878] */
    goto L_0040A000; /* 0x007A5291: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A5296(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A5296u);

L_007A5296:
    ecx = ebp + (-0x1848); /* 0x007A5296: lea ecx, [ebp - 0x1848] */
    goto L_0040A000; /* 0x007A529C: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A52A1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A52A1u);

L_007A52A1:
    ecx = MEM32(ebp + (-0x21B8)); /* 0x007A52A1: mov ecx, dword ptr [ebp - 0x21b8] */
    goto L_0040A000; /* 0x007A52A7: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A52AC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A52ACu);

L_007A52AC:
    ecx = MEM32(ebp + (-0x21B0)); /* 0x007A52AC: mov ecx, dword ptr [ebp - 0x21b0] */
    goto L_0040A000; /* 0x007A52B2: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A52B7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A52B7u);

L_007A52B7:
    ecx = MEM32(ebp + (-0x21B4)); /* 0x007A52B7: mov ecx, dword ptr [ebp - 0x21b4] */
    goto L_0040A000; /* 0x007A52BD: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A52C2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A52C2u);

L_007A52C2:
    ecx = ebp + (-0x18D8); /* 0x007A52C2: lea ecx, [ebp - 0x18d8] */
    goto L_0040A000; /* 0x007A52C8: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A52CD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A52CDu);

L_007A52CD:
    ecx = ebp + (-0x18A8); /* 0x007A52CD: lea ecx, [ebp - 0x18a8] */
    goto L_0040A000; /* 0x007A52D3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A52D8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A52D8u);

L_007A52D8:
    ecx = MEM32(ebp + (-0x21B8)); /* 0x007A52D8: mov ecx, dword ptr [ebp - 0x21b8] */
    goto L_0040A000; /* 0x007A52DE: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A52E3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A52E3u);

L_007A52E3:
    ecx = MEM32(ebp + (-0x21B0)); /* 0x007A52E3: mov ecx, dword ptr [ebp - 0x21b0] */
    goto L_0040A000; /* 0x007A52E9: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A52EE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A52EEu);

L_007A52EE:
    ecx = MEM32(ebp + (-0x21B4)); /* 0x007A52EE: mov ecx, dword ptr [ebp - 0x21b4] */
    goto L_0040A000; /* 0x007A52F4: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A52F9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A52F9u);

L_007A52F9:
    ecx = ebp + (-0x1938); /* 0x007A52F9: lea ecx, [ebp - 0x1938] */
    goto L_0040A000; /* 0x007A52FF: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A5304(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A5304u);

L_007A5304:
    ecx = ebp + (-0x1908); /* 0x007A5304: lea ecx, [ebp - 0x1908] */
    goto L_0040A000; /* 0x007A530A: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A530F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A530Fu);

L_007A530F:
    ecx = MEM32(ebp + (-0x21B8)); /* 0x007A530F: mov ecx, dword ptr [ebp - 0x21b8] */
    goto L_0040A000; /* 0x007A5315: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A531A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A531Au);

L_007A531A:
    ecx = MEM32(ebp + (-0x21B0)); /* 0x007A531A: mov ecx, dword ptr [ebp - 0x21b0] */
    goto L_0040A000; /* 0x007A5320: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A5325(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A5325u);

L_007A5325:
    ecx = MEM32(ebp + (-0x21B4)); /* 0x007A5325: mov ecx, dword ptr [ebp - 0x21b4] */
    goto L_0040A000; /* 0x007A532B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A5330(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A5330u);

L_007A5330:
    ecx = ebp + (-0x1998); /* 0x007A5330: lea ecx, [ebp - 0x1998] */
    goto L_0040A000; /* 0x007A5336: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A533B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A533Bu);

L_007A533B:
    ecx = ebp + (-0x1968); /* 0x007A533B: lea ecx, [ebp - 0x1968] */
    goto L_0040A000; /* 0x007A5341: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A5346(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A5346u);

L_007A5346:
    ecx = MEM32(ebp + (-0x21B8)); /* 0x007A5346: mov ecx, dword ptr [ebp - 0x21b8] */
    goto L_0040A000; /* 0x007A534C: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A5351(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A5351u);

L_007A5351:
    ecx = MEM32(ebp + (-0x21B0)); /* 0x007A5351: mov ecx, dword ptr [ebp - 0x21b0] */
    goto L_0040A000; /* 0x007A5357: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A535C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A535Cu);

L_007A535C:
    ecx = MEM32(ebp + (-0x21B4)); /* 0x007A535C: mov ecx, dword ptr [ebp - 0x21b4] */
    goto L_0040A000; /* 0x007A5362: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A5367(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A5367u);

L_007A5367:
    eax = MEM32(ebp + (-0x21BC)); /* 0x007A5367: mov eax, dword ptr [ebp - 0x21bc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x200u);
    eax = eax & 0x200u; /* 0x007A536D: and eax, 0x200 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007A538D; /* 0x007A5372: je 0x7a538d */
L_007A5378:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x21BC))); _flag_b = (uint32_t)(0xFFFFFDFFu);
    MEM32(ebp + (-0x21BC)) = MEM32(ebp + (-0x21BC)) & 0xFFFFFDFFu; /* 0x007A5378: and dword ptr [ebp - 0x21bc], 0xfffffdff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x19F8); /* 0x007A5382: lea ecx, [ebp - 0x19f8] */
    goto L_0040A000; /* 0x007A5388: jmp 0x40a000 */
L_007A538D:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007A538D: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A538E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A538Eu);

L_007A538E:
    eax = MEM32(ebp + (-0x21BC)); /* 0x007A538E: mov eax, dword ptr [ebp - 0x21bc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x400u);
    eax = eax & 0x400u; /* 0x007A5394: and eax, 0x400 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007A53B4; /* 0x007A5399: je 0x7a53b4 */
L_007A539F:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x21BC))); _flag_b = (uint32_t)(0xFFFFFBFFu);
    MEM32(ebp + (-0x21BC)) = MEM32(ebp + (-0x21BC)) & 0xFFFFFBFFu; /* 0x007A539F: and dword ptr [ebp - 0x21bc], 0xfffffbff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x19C8); /* 0x007A53A9: lea ecx, [ebp - 0x19c8] */
    goto L_0040A000; /* 0x007A53AF: jmp 0x40a000 */
L_007A53B4:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007A53B4: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A53B5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A53B5u);

L_007A53B5:
    ecx = MEM32(ebp + (-0x21B8)); /* 0x007A53B5: mov ecx, dword ptr [ebp - 0x21b8] */
    goto L_0040A000; /* 0x007A53BB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A53C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A53C0u);

L_007A53C0:
    ecx = ebp + (-0x1A28); /* 0x007A53C0: lea ecx, [ebp - 0x1a28] */
    goto L_0040A000; /* 0x007A53C6: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A53CB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A53CBu);

L_007A53CB:
    ecx = MEM32(ebp + (-0x21B8)); /* 0x007A53CB: mov ecx, dword ptr [ebp - 0x21b8] */
    goto L_0040A000; /* 0x007A53D1: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}
