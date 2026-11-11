#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_007B9BC9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B9BC9u);

L_007B9BC9:
    eax = MEM32(ebp + (-0x1E4)); /* 0x007B9BC9: mov eax, dword ptr [ebp - 0x1e4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    eax = eax & 0x20u; /* 0x007B9BCF: and eax, 0x20 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007B9BEA; /* 0x007B9BD2: je 0x7b9bea */
L_007B9BD8:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1E4))); _flag_b = (uint32_t)(0xFFFFFFDFu);
    MEM32(ebp + (-0x1E4)) = MEM32(ebp + (-0x1E4)) & 0xFFFFFFDFu; /* 0x007B9BD8: and dword ptr [ebp - 0x1e4], 0xffffffdf */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x1A8); /* 0x007B9BDF: lea ecx, [ebp - 0x1a8] */
    goto L_0040A000; /* 0x007B9BE5: jmp 0x40a000 */
L_007B9BEA:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007B9BEA: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B9BEB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B9BEBu);

L_007B9BEB:
    ecx = ebp + (-0x190); /* 0x007B9BEB: lea ecx, [ebp - 0x190] */
    goto L_0040A000; /* 0x007B9BF1: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B9BF6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B9BF6u);

L_007B9BF6:
    ecx = ebp + (-0xE8); /* 0x007B9BF6: lea ecx, [ebp - 0xe8] */
    goto L_0040A000; /* 0x007B9BFC: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B9C01(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B9C01u);

L_007B9C01:
    ecx = ebp + (-0x130); /* 0x007B9C01: lea ecx, [ebp - 0x130] */
    goto L_0040A000; /* 0x007B9C07: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B9C0C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B9C0Cu);

L_007B9C0C:
    ecx = MEM32(ebp + (-0x1F8)); /* 0x007B9C0C: mov ecx, dword ptr [ebp - 0x1f8] */
    goto L_0040A000; /* 0x007B9C12: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B9C17(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B9C17u);

L_007B9C17:
    ecx = MEM32(ebp + (-0x1E0)); /* 0x007B9C17: mov ecx, dword ptr [ebp - 0x1e0] */
    goto L_0040A000; /* 0x007B9C1D: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B9C22(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B9C22u);

L_007B9C22:
    ecx = MEM32(ebp + (-0x1F8)); /* 0x007B9C22: mov ecx, dword ptr [ebp - 0x1f8] */
    goto L_0040A000; /* 0x007B9C28: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B9C2D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B9C2Du);

L_007B9C2D:
    ecx = MEM32(ebp + (-0x1E0)); /* 0x007B9C2D: mov ecx, dword ptr [ebp - 0x1e0] */
    goto L_0040A000; /* 0x007B9C33: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B9C38(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B9C38u);

L_007B9C38:
    eax = MEM32(ebp + (-0x1F8)); /* 0x007B9C38: mov eax, dword ptr [ebp - 0x1f8] */
    PUSH32(esp, eax); /* 0x007B9C3E: push eax */
    RECOMP_ICALL(MEM32(0x7CC6A8)); /* 0x007B9C3F: call dword ptr [0x7cc6a8] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007B9C45: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007B9C46: ret  */
    RECOMP_REGS_OUT();
}

void sub_007B9C47(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B9C47u);

L_007B9C47:
    ecx = MEM32(ebp + (-0x1F8)); /* 0x007B9C47: mov ecx, dword ptr [ebp - 0x1f8] */
    goto L_0063D370; /* 0x007B9C4D: jmp 0x63d370 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0063D370: RECOMP_ITAIL(0x0063D370u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B9C52(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B9C52u);

L_007B9C52:
    ecx = MEM32(ebp + (-0x200)); /* 0x007B9C52: mov ecx, dword ptr [ebp - 0x200] */
    goto L_0063D370; /* 0x007B9C58: jmp 0x63d370 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0063D370: RECOMP_ITAIL(0x0063D370u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B9C5D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B9C5Du);

L_007B9C5D:
    ecx = ebp + (-0x28); /* 0x007B9C5D: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007B9C60: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B9C65(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B9C65u);

    goto L_007B9C65;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B9C65:
    edx = MEM32(esp + 0x8); /* 0x007B9C65: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B9C69: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x204)); /* 0x007B9C6C: mov ecx, dword ptr [edx - 0x204] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B9C72: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B9C74: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x007B9C79: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B9C7C: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B9C7E: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00843A08u; /* 0x007B9C83: mov eax, 0x843a08 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B9C88: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B9C90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B9C90u);

L_007B9C90:
    ecx = ebp + 0x8; /* 0x007B9C90: lea ecx, [ebp + 8] */
    goto L_0040A000; /* 0x007B9C93: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B9C98(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B9C98u);

L_007B9C98:
    ecx = ebp + (-0x28); /* 0x007B9C98: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007B9C9B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B9CA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B9CA0u);

L_007B9CA0:
    ecx = ebp + (-0x40); /* 0x007B9CA0: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x007B9CA3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B9CA8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B9CA8u);

L_007B9CA8:
    ecx = MEM32(ebp + (-0x4C)); /* 0x007B9CA8: mov ecx, dword ptr [ebp - 0x4c] */
    goto L_0063D370; /* 0x007B9CAB: jmp 0x63d370 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0063D370: RECOMP_ITAIL(0x0063D370u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B9CB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B9CB0u);

    goto L_007B9CB0;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B9CB0:
    edx = MEM32(esp + 0x8); /* 0x007B9CB0: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B9CB4: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x54)); /* 0x007B9CB7: mov ecx, dword ptr [edx - 0x54] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B9CBA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B9CBC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x007B9CC1: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B9CC4: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B9CC6: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00843B58u; /* 0x007B9CCB: mov eax, 0x843b58 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B9CD0: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B9CE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B9CE0u);

L_007B9CE0:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B9CE0: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040A000; /* 0x007B9CE3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B9CE8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B9CE8u);

L_007B9CE8:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B9CE8: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040A000; /* 0x007B9CEB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B9CF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B9CF0u);

L_007B9CF0:
    ecx = MEM32(ebp + (-0x18)); /* 0x007B9CF0: mov ecx, dword ptr [ebp - 0x18] */
    goto L_0040A000; /* 0x007B9CF3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B9CF8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B9CF8u);

L_007B9CF8:
    ecx = MEM32(ebp + (-0x1C)); /* 0x007B9CF8: mov ecx, dword ptr [ebp - 0x1c] */
    goto L_0040A000; /* 0x007B9CFB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B9D00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B9D00u);

    goto L_007B9D00;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B9D00:
    edx = MEM32(esp + 0x8); /* 0x007B9D00: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B9D04: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x24)); /* 0x007B9D07: mov ecx, dword ptr [edx - 0x24] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B9D0A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B9D0C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00843B9Cu; /* 0x007B9D11: mov eax, 0x843b9c */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B9D16: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B9D20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B9D20u);

L_007B9D20:
    ecx = MEM32(ebp + (-0x234)); /* 0x007B9D20: mov ecx, dword ptr [ebp - 0x234] */
    goto L_0040A000; /* 0x007B9D26: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B9D2B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B9D2Bu);

L_007B9D2B:
    ecx = MEM32(ebp + (-0x238)); /* 0x007B9D2B: mov ecx, dword ptr [ebp - 0x238] */
    goto L_0040A000; /* 0x007B9D31: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B9D36(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B9D36u);

L_007B9D36:
    ecx = MEM32(ebp + (-0x230)); /* 0x007B9D36: mov ecx, dword ptr [ebp - 0x230] */
    goto L_0040A000; /* 0x007B9D3C: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B9D41(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B9D41u);

L_007B9D41:
    ecx = MEM32(ebp + (-0x23C)); /* 0x007B9D41: mov ecx, dword ptr [ebp - 0x23c] */
    goto L_0040A000; /* 0x007B9D47: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B9D4C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B9D4Cu);

L_007B9D4C:
    ecx = ebp + (-0x228); /* 0x007B9D4C: lea ecx, [ebp - 0x228] */
    goto L_0040A000; /* 0x007B9D52: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B9D57(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B9D57u);

    goto L_007B9D57;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B9D57:
    edx = MEM32(esp + 0x8); /* 0x007B9D57: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B9D5B: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x244)); /* 0x007B9D5E: mov ecx, dword ptr [edx - 0x244] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B9D64: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B9D66: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x007B9D6B: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B9D6E: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B9D70: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00843BE0u; /* 0x007B9D75: mov eax, 0x843be0 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B9D7A: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B9D80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B9D80u);

L_007B9D80:
    ecx = MEM32(ebp + (-0x1C)); /* 0x007B9D80: mov ecx, dword ptr [ebp - 0x1c] */
    goto L_0040A000; /* 0x007B9D83: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B9D88(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B9D88u);

L_007B9D88:
    ecx = MEM32(ebp + (-0x20)); /* 0x007B9D88: mov ecx, dword ptr [ebp - 0x20] */
    goto L_0040A000; /* 0x007B9D8B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B9D90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B9D90u);

    goto L_007B9D90;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B9D90:
    edx = MEM32(esp + 0x8); /* 0x007B9D90: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B9D94: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x24)); /* 0x007B9D97: mov ecx, dword ptr [edx - 0x24] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B9D9A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B9D9C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00843C2Cu; /* 0x007B9DA1: mov eax, 0x843c2c */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B9DA6: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B9DB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B9DB0u);

L_007B9DB0:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B9DB0: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x007B9DB3: add ecx, 8 */
    _flag_k = FK_ADD;
    goto L_006367A0; /* 0x007B9DB6: jmp 0x6367a0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_006367A0: RECOMP_ITAIL(0x006367A0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B9DBB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B9DBBu);

    goto L_007B9DBB;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B9DBB:
    edx = MEM32(esp + 0x8); /* 0x007B9DBB: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B9DBF: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x007B9DC2: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B9DC5: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B9DC7: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00843C60u; /* 0x007B9DCC: mov eax, 0x843c60 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B9DD1: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B9DE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B9DE0u);

L_007B9DE0:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B9DE0: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040A000; /* 0x007B9DE3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B9DE8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B9DE8u);

L_007B9DE8:
    ecx = MEM32(ebp + (-0x18)); /* 0x007B9DE8: mov ecx, dword ptr [ebp - 0x18] */
    goto L_0040A000; /* 0x007B9DEB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B9DF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B9DF0u);

L_007B9DF0:
    ecx = MEM32(ebp + (-0x18)); /* 0x007B9DF0: mov ecx, dword ptr [ebp - 0x18] */
    goto L_0040A000; /* 0x007B9DF3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B9DF8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B9DF8u);

L_007B9DF8:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B9DF8: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040A000; /* 0x007B9DFB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B9E00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B9E00u);

L_007B9E00:
    ecx = MEM32(ebp + (-0x18)); /* 0x007B9E00: mov ecx, dword ptr [ebp - 0x18] */
    goto L_0040A000; /* 0x007B9E03: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B9E08(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B9E08u);

L_007B9E08:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B9E08: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040A000; /* 0x007B9E0B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B9E10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B9E10u);

L_007B9E10:
    ecx = MEM32(ebp + (-0x18)); /* 0x007B9E10: mov ecx, dword ptr [ebp - 0x18] */
    goto L_0040A000; /* 0x007B9E13: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B9E18(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B9E18u);

L_007B9E18:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B9E18: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040A000; /* 0x007B9E1B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B9E20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B9E20u);

L_007B9E20:
    eax = MEM32(ebp + 0xC); /* 0x007B9E20: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x007B9E23: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007B9E24: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007B9E2A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007B9E2B: ret  */
    RECOMP_REGS_OUT();
}

void sub_007B9E2C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B9E2Cu);

L_007B9E2C:
    ecx = MEM32(ebp + 0x8); /* 0x007B9E2C: mov ecx, dword ptr [ebp + 8] */
    goto L_004E0E80; /* 0x007B9E2F: jmp 0x4e0e80 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_004E0E80: RECOMP_ITAIL(0x004E0E80u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B9E34(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B9E34u);

L_007B9E34:
    ecx = MEM32(ebp + 0x8); /* 0x007B9E34: mov ecx, dword ptr [ebp + 8] */
    goto L_004E0E80; /* 0x007B9E37: jmp 0x4e0e80 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_004E0E80: RECOMP_ITAIL(0x004E0E80u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B9E3C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B9E3Cu);

    goto L_007B9E3C;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B9E3C:
    edx = MEM32(esp + 0x8); /* 0x007B9E3C: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B9E40: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x1C)); /* 0x007B9E43: mov ecx, dword ptr [edx - 0x1c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B9E46: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B9E48: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00843C90u; /* 0x007B9E4D: mov eax, 0x843c90 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B9E52: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B9E60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B9E60u);

L_007B9E60:
    ecx = MEM32(ebp + 0x8); /* 0x007B9E60: mov ecx, dword ptr [ebp + 8] */
    goto L_0040A000; /* 0x007B9E63: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B9E68(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B9E68u);

L_007B9E68:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B9E68: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040A000; /* 0x007B9E6B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B9E70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B9E70u);

L_007B9E70:
    ecx = MEM32(ebp + 0x8); /* 0x007B9E70: mov ecx, dword ptr [ebp + 8] */
    goto L_0040A000; /* 0x007B9E73: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B9E78(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B9E78u);

L_007B9E78:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B9E78: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040A000; /* 0x007B9E7B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B9E80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B9E80u);

L_007B9E80:
    ecx = MEM32(ebp + 0x8); /* 0x007B9E80: mov ecx, dword ptr [ebp + 8] */
    goto L_0040A000; /* 0x007B9E83: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B9E88(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B9E88u);

L_007B9E88:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B9E88: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040A000; /* 0x007B9E8B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B9E90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B9E90u);

L_007B9E90:
    ecx = MEM32(ebp + 0x8); /* 0x007B9E90: mov ecx, dword ptr [ebp + 8] */
    goto L_0040A000; /* 0x007B9E93: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B9E98(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B9E98u);

L_007B9E98:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B9E98: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040A000; /* 0x007B9E9B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B9EA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B9EA0u);

    goto L_007B9EA0;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B9EA0:
    edx = MEM32(esp + 0x8); /* 0x007B9EA0: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B9EA4: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x10)); /* 0x007B9EA7: mov ecx, dword ptr [edx - 0x10] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B9EAA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B9EAC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00843D10u; /* 0x007B9EB1: mov eax, 0x843d10 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B9EB6: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B9EC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B9EC0u);

L_007B9EC0:
    ecx = MEM32(ebp + (-0x140)); /* 0x007B9EC0: mov ecx, dword ptr [ebp - 0x140] */
    goto L_0040A000; /* 0x007B9EC6: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B9ECB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B9ECBu);

L_007B9ECB:
    ecx = MEM32(ebp + (-0x13C)); /* 0x007B9ECB: mov ecx, dword ptr [ebp - 0x13c] */
    goto L_0040A000; /* 0x007B9ED1: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B9ED6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B9ED6u);

L_007B9ED6:
    ecx = ebp + (-0x28); /* 0x007B9ED6: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007B9ED9: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B9EDE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B9EDEu);

L_007B9EDE:
    eax = MEM32(ebp + (-0x13C)); /* 0x007B9EDE: mov eax, dword ptr [ebp - 0x13c] */
    PUSH32(esp, eax); /* 0x007B9EE4: push eax */
    RECOMP_ICALL(MEM32(0x7CC6A8)); /* 0x007B9EE5: call dword ptr [0x7cc6a8] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007B9EEB: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007B9EEC: ret  */
    RECOMP_REGS_OUT();
}

void sub_007B9EED(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B9EEDu);

L_007B9EED:
    eax = MEM32(ebp + (-0x13C)); /* 0x007B9EED: mov eax, dword ptr [ebp - 0x13c] */
    PUSH32(esp, eax); /* 0x007B9EF3: push eax */
    RECOMP_ICALL(MEM32(0x7CC6A8)); /* 0x007B9EF4: call dword ptr [0x7cc6a8] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007B9EFA: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007B9EFB: ret  */
    RECOMP_REGS_OUT();
}

void sub_007B9EFC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B9EFCu);

    goto L_007B9EFC;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B9EFC:
    edx = MEM32(esp + 0x8); /* 0x007B9EFC: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B9F00: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x144)); /* 0x007B9F03: mov ecx, dword ptr [edx - 0x144] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B9F09: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B9F0B: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x007B9F10: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B9F13: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B9F15: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00843D78u; /* 0x007B9F1A: mov eax, 0x843d78 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B9F1F: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B9F30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B9F30u);

L_007B9F30:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B9F30: mov ecx, dword ptr [ebp - 0x10] */
    goto L_006377A0; /* 0x007B9F33: jmp 0x6377a0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_006377A0: RECOMP_ITAIL(0x006377A0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B9F38(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B9F38u);

    goto L_007B9F38;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B9F38:
    edx = MEM32(esp + 0x8); /* 0x007B9F38: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B9F3C: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x007B9F3F: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B9F42: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B9F44: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00843DC4u; /* 0x007B9F49: mov eax, 0x843dc4 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B9F4E: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B9F60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B9F60u);

L_007B9F60:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B9F60: mov ecx, dword ptr [ebp - 0x10] */
    goto L_00648880; /* 0x007B9F63: jmp 0x648880 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00648880: RECOMP_ITAIL(0x00648880u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B9F68(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B9F68u);

L_007B9F68:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B9F68: mov ecx, dword ptr [ebp - 0x10] */
    goto L_006377A0; /* 0x007B9F6B: jmp 0x6377a0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_006377A0: RECOMP_ITAIL(0x006377A0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B9F70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B9F70u);

    goto L_007B9F70;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B9F70:
    edx = MEM32(esp + 0x8); /* 0x007B9F70: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B9F74: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x007B9F77: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B9F7A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B9F7C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00843DF0u; /* 0x007B9F81: mov eax, 0x843df0 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B9F86: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B9F90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B9F90u);

L_007B9F90:
    ecx = MEM32(ebp + (-0x144)); /* 0x007B9F90: mov ecx, dword ptr [ebp - 0x144] */
    goto L_0040A000; /* 0x007B9F96: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B9F9B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B9F9Bu);

L_007B9F9B:
    ecx = MEM32(ebp + (-0x148)); /* 0x007B9F9B: mov ecx, dword ptr [ebp - 0x148] */
    goto L_0040A000; /* 0x007B9FA1: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B9FA6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B9FA6u);

L_007B9FA6:
    ecx = ebp + (-0x140); /* 0x007B9FA6: lea ecx, [ebp - 0x140] */
    goto L_0040A000; /* 0x007B9FAC: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B9FB1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B9FB1u);

    goto L_007B9FB1;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B9FB1:
    edx = MEM32(esp + 0x8); /* 0x007B9FB1: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0x14C); /* 0x007B9FB5: lea eax, [edx - 0x14c] */
    ecx = MEM32(edx + (-0x150)); /* 0x007B9FBB: mov ecx, dword ptr [edx - 0x150] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B9FC1: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B9FC3: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x007B9FC8: add eax, 0xc */
    _flag_k = FK_ADD;
    ecx = MEM32(edx + (-0x8)); /* 0x007B9FCB: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B9FCE: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B9FD0: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00843E24u; /* 0x007B9FD5: mov eax, 0x843e24 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B9FDA: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B9FE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B9FE0u);

L_007B9FE0:
    ecx = MEM32(ebp + (-0xE4)); /* 0x007B9FE0: mov ecx, dword ptr [ebp - 0xe4] */
    goto L_0040A000; /* 0x007B9FE6: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B9FEB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B9FEBu);

L_007B9FEB:
    ecx = MEM32(ebp + (-0xCC)); /* 0x007B9FEB: mov ecx, dword ptr [ebp - 0xcc] */
    goto L_0040A000; /* 0x007B9FF1: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B9FF6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B9FF6u);

L_007B9FF6:
    ecx = ebp + (-0x58); /* 0x007B9FF6: lea ecx, [ebp - 0x58] */
    goto L_0040A000; /* 0x007B9FF9: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B9FFE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B9FFEu);

L_007B9FFE:
    ecx = ebp + (-0x40); /* 0x007B9FFE: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x007BA001: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BA006(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BA006u);

L_007BA006:
    ecx = ebp + (-0x58); /* 0x007BA006: lea ecx, [ebp - 0x58] */
    goto L_0040A000; /* 0x007BA009: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BA00E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BA00Eu);

L_007BA00E:
    ecx = MEM32(ebp + (-0xCC)); /* 0x007BA00E: mov ecx, dword ptr [ebp - 0xcc] */
    goto L_0040A000; /* 0x007BA014: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BA019(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BA019u);

L_007BA019:
    ecx = MEM32(ebp + (-0xC4)); /* 0x007BA019: mov ecx, dword ptr [ebp - 0xc4] */
    goto L_0040A000; /* 0x007BA01F: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BA024(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BA024u);

L_007BA024:
    ecx = MEM32(ebp + (-0xC0)); /* 0x007BA024: mov ecx, dword ptr [ebp - 0xc0] */
    goto L_0040A000; /* 0x007BA02A: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BA02F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BA02Fu);

L_007BA02F:
    ecx = MEM32(ebp + (-0xBC)); /* 0x007BA02F: mov ecx, dword ptr [ebp - 0xbc] */
    goto L_0040A000; /* 0x007BA035: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BA03A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BA03Au);

L_007BA03A:
    ecx = ebp + (-0x28); /* 0x007BA03A: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007BA03D: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BA042(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BA042u);

L_007BA042:
    eax = MEM32(ebp + (-0xC4)); /* 0x007BA042: mov eax, dword ptr [ebp - 0xc4] */
    PUSH32(esp, eax); /* 0x007BA048: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007BA049: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007BA04F: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007BA050: ret  */
    RECOMP_REGS_OUT();
}

void sub_007BA051(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BA051u);

L_007BA051:
    ecx = ebp + (-0x40); /* 0x007BA051: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x007BA054: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BA059(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BA059u);

L_007BA059:
    ecx = ebp + (-0x58); /* 0x007BA059: lea ecx, [ebp - 0x58] */
    goto L_0040A000; /* 0x007BA05C: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BA061(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BA061u);

L_007BA061:
    ecx = MEM32(ebp + (-0xC4)); /* 0x007BA061: mov ecx, dword ptr [ebp - 0xc4] */
    goto L_0040A000; /* 0x007BA067: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BA06C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BA06Cu);

L_007BA06C:
    ecx = MEM32(ebp + (-0xC0)); /* 0x007BA06C: mov ecx, dword ptr [ebp - 0xc0] */
    goto L_0040A000; /* 0x007BA072: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BA077(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BA077u);

L_007BA077:
    ecx = MEM32(ebp + (-0xBC)); /* 0x007BA077: mov ecx, dword ptr [ebp - 0xbc] */
    goto L_0040A000; /* 0x007BA07D: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BA082(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BA082u);

L_007BA082:
    ecx = MEM32(ebp + (-0xD4)); /* 0x007BA082: mov ecx, dword ptr [ebp - 0xd4] */
    goto L_0040A000; /* 0x007BA088: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BA08D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BA08Du);

L_007BA08D:
    ecx = MEM32(ebp + (-0xD4)); /* 0x007BA08D: mov ecx, dword ptr [ebp - 0xd4] */
    goto L_0040A000; /* 0x007BA093: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BA098(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BA098u);

L_007BA098:
    ecx = MEM32(ebp + (-0xD8)); /* 0x007BA098: mov ecx, dword ptr [ebp - 0xd8] */
    goto L_0040A000; /* 0x007BA09E: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BA0A3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BA0A3u);

L_007BA0A3:
    ecx = MEM32(ebp + (-0xE0)); /* 0x007BA0A3: mov ecx, dword ptr [ebp - 0xe0] */
    goto L_0040A000; /* 0x007BA0A9: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BA0AE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BA0AEu);

L_007BA0AE:
    ecx = MEM32(ebp + (-0xDC)); /* 0x007BA0AE: mov ecx, dword ptr [ebp - 0xdc] */
    goto L_0040A000; /* 0x007BA0B4: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BA0B9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BA0B9u);

L_007BA0B9:
    ecx = MEM32(ebp + (-0xDC)); /* 0x007BA0B9: mov ecx, dword ptr [ebp - 0xdc] */
    goto L_0040A000; /* 0x007BA0BF: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BA0C4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BA0C4u);

L_007BA0C4:
    ecx = MEM32(ebp + (-0xE0)); /* 0x007BA0C4: mov ecx, dword ptr [ebp - 0xe0] */
    goto L_0040A000; /* 0x007BA0CA: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BA0CF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BA0CFu);

L_007BA0CF:
    ecx = MEM32(ebp + (-0xD8)); /* 0x007BA0CF: mov ecx, dword ptr [ebp - 0xd8] */
    goto L_0040A000; /* 0x007BA0D5: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BA0DA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BA0DAu);

L_007BA0DA:
    ecx = MEM32(ebp + (-0xD4)); /* 0x007BA0DA: mov ecx, dword ptr [ebp - 0xd4] */
    goto L_0040A000; /* 0x007BA0E0: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BA0E5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BA0E5u);

L_007BA0E5:
    ecx = ebp + (-0x40); /* 0x007BA0E5: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x007BA0E8: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BA0ED(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BA0EDu);

L_007BA0ED:
    ecx = ebp + (-0x58); /* 0x007BA0ED: lea ecx, [ebp - 0x58] */
    goto L_0040A000; /* 0x007BA0F0: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BA0F5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BA0F5u);

L_007BA0F5:
    ecx = ebp + (-0xA0); /* 0x007BA0F5: lea ecx, [ebp - 0xa0] */
    goto L_0040A000; /* 0x007BA0FB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BA100(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BA100u);

L_007BA100:
    ecx = ebp + (-0xB8); /* 0x007BA100: lea ecx, [ebp - 0xb8] */
    goto L_0040A000; /* 0x007BA106: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BA10B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BA10Bu);

L_007BA10B:
    ecx = ebp + (-0x88); /* 0x007BA10B: lea ecx, [ebp - 0x88] */
    goto L_0040A000; /* 0x007BA111: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}
