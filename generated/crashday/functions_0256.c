#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_007BC179(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC179u);

L_007BC179:
    ecx = ebp + (-0x64); /* 0x007BC179: lea ecx, [ebp - 0x64] */
    { _itail_tgt = (uint32_t)(MEM32(0x7CC520)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BC182(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC182u);

L_007BC182:
    ecx = ebp + (-0x64); /* 0x007BC182: lea ecx, [ebp - 0x64] */
    goto L_00664A80; /* 0x007BC185: jmp 0x664a80 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00664A80: RECOMP_ITAIL(0x00664A80u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BC18A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC18Au);

L_007BC18A:
    goto L_00409980; /* 0x007BC18A: jmp 0x409980 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00409980: RECOMP_ITAIL(0x00409980u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BC18F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC18Fu);

    goto L_007BC18F;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BC18F:
    edx = MEM32(esp + 0x8); /* 0x007BC18F: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BC193: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x78)); /* 0x007BC196: mov ecx, dword ptr [edx - 0x78] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BC199: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BC19B: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x8)); /* 0x007BC1A0: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BC1A3: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BC1A5: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00845D20u; /* 0x007BC1AA: mov eax, 0x845d20 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BC1AF: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BC1C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC1C0u);

L_007BC1C0:
    ecx = ebp + (-0x44); /* 0x007BC1C0: lea ecx, [ebp - 0x44] */
    goto L_0040A000; /* 0x007BC1C3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BC1C8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC1C8u);

L_007BC1C8:
    ecx = ebp + (-0x2C); /* 0x007BC1C8: lea ecx, [ebp - 0x2c] */
    goto L_0040A000; /* 0x007BC1CB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BC1D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC1D0u);

L_007BC1D0:
    eax = MEM32(ebp + (-0x54)); /* 0x007BC1D0: mov eax, dword ptr [ebp - 0x54] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x007BC1D3: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007BC1E8; /* 0x007BC1D6: je 0x7bc1e8 */
L_007BC1DC:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x54))); _flag_b = (uint32_t)(0xFFFFFFFEu);
    MEM32(ebp + (-0x54)) = MEM32(ebp + (-0x54)) & 0xFFFFFFFEu; /* 0x007BC1DC: and dword ptr [ebp - 0x54], 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0x68)); /* 0x007BC1E0: mov ecx, dword ptr [ebp - 0x68] */
    goto L_0040A000; /* 0x007BC1E3: jmp 0x40a000 */
L_007BC1E8:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007BC1E8: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BC1E9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC1E9u);

L_007BC1E9:
    ecx = ebp + (-0x64); /* 0x007BC1E9: lea ecx, [ebp - 0x64] */
    { _itail_tgt = (uint32_t)(MEM32(0x7CC520)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BC1F2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC1F2u);

L_007BC1F2:
    ecx = ebp + (-0x64); /* 0x007BC1F2: lea ecx, [ebp - 0x64] */
    goto L_00664A80; /* 0x007BC1F5: jmp 0x664a80 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00664A80: RECOMP_ITAIL(0x00664A80u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BC1FA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC1FAu);

L_007BC1FA:
    goto L_00409980; /* 0x007BC1FA: jmp 0x409980 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00409980: RECOMP_ITAIL(0x00409980u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BC1FF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC1FFu);

    goto L_007BC1FF;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BC1FF:
    edx = MEM32(esp + 0x8); /* 0x007BC1FF: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BC203: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x78)); /* 0x007BC206: mov ecx, dword ptr [edx - 0x78] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BC209: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BC20B: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x8)); /* 0x007BC210: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BC213: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BC215: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00845D74u; /* 0x007BC21A: mov eax, 0x845d74 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BC21F: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BC230(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC230u);

L_007BC230:
    ecx = MEM32(ebp + (-0x10)); /* 0x007BC230: mov ecx, dword ptr [ebp - 0x10] */
    { _itail_tgt = (uint32_t)(MEM32(0x7CC520)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BC239(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC239u);

L_007BC239:
    ecx = MEM32(ebp + (-0x10)); /* 0x007BC239: mov ecx, dword ptr [ebp - 0x10] */
    goto L_00664A80; /* 0x007BC23C: jmp 0x664a80 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00664A80: RECOMP_ITAIL(0x00664A80u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BC241(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC241u);

    goto L_007BC241;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BC241:
    edx = MEM32(esp + 0x8); /* 0x007BC241: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BC245: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xC)); /* 0x007BC248: mov ecx, dword ptr [edx - 0xc] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BC24B: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BC24D: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00845DC8u; /* 0x007BC252: mov eax, 0x845dc8 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BC257: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BC260(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC260u);

L_007BC260:
    ecx = 0x00921990u; /* 0x007BC260: mov ecx, 0x921990 */
    goto L_0040B340; /* 0x007BC265: jmp 0x40b340 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B340: RECOMP_ITAIL(0x0040B340u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BC26A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC26Au);

L_007BC26A:
    ecx = 0x00921990u; /* 0x007BC26A: mov ecx, 0x921990 */
    goto L_0040B2E0; /* 0x007BC26F: jmp 0x40b2e0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B2E0: RECOMP_ITAIL(0x0040B2E0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BC274(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC274u);

L_007BC274:
    ecx = 0x00921990u; /* 0x007BC274: mov ecx, 0x921990 */
    goto L_0040B290; /* 0x007BC279: jmp 0x40b290 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B290: RECOMP_ITAIL(0x0040B290u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BC27E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC27Eu);

L_007BC27E:
    ecx = 0x00921990u; /* 0x007BC27E: mov ecx, 0x921990 */
    goto L_00666750; /* 0x007BC283: jmp 0x666750 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00666750: RECOMP_ITAIL(0x00666750u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BC288(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC288u);

    goto L_007BC288;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BC288:
    edx = MEM32(esp + 0x8); /* 0x007BC288: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BC28C: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x4)); /* 0x007BC28F: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BC292: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BC294: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00845DFCu; /* 0x007BC299: mov eax, 0x845dfc */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BC29E: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BC2B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC2B0u);

L_007BC2B0:
    ecx = 0x00921990u; /* 0x007BC2B0: mov ecx, 0x921990 */
    goto L_00666750; /* 0x007BC2B5: jmp 0x666750 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00666750: RECOMP_ITAIL(0x00666750u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BC2BA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC2BAu);

L_007BC2BA:
    ecx = 0x00921990u; /* 0x007BC2BA: mov ecx, 0x921990 */
    goto L_0040B290; /* 0x007BC2BF: jmp 0x40b290 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B290: RECOMP_ITAIL(0x0040B290u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BC2C4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC2C4u);

L_007BC2C4:
    ecx = 0x00921990u; /* 0x007BC2C4: mov ecx, 0x921990 */
    goto L_0040B2E0; /* 0x007BC2C9: jmp 0x40b2e0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B2E0: RECOMP_ITAIL(0x0040B2E0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BC2CE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC2CEu);

L_007BC2CE:
    ecx = 0x00921990u; /* 0x007BC2CE: mov ecx, 0x921990 */
    goto L_0040B340; /* 0x007BC2D3: jmp 0x40b340 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B340: RECOMP_ITAIL(0x0040B340u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BC2D8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC2D8u);

    goto L_007BC2D8;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BC2D8:
    edx = MEM32(esp + 0x8); /* 0x007BC2D8: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BC2DC: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x10)); /* 0x007BC2DF: mov ecx, dword ptr [edx - 0x10] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BC2E2: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BC2E4: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00845E40u; /* 0x007BC2E9: mov eax, 0x845e40 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BC2EE: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BC300(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC300u);

L_007BC300:
    ecx = MEM32(ebp + (-0x10)); /* 0x007BC300: mov ecx, dword ptr [ebp - 0x10] */
    goto L_00666750; /* 0x007BC303: jmp 0x666750 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00666750: RECOMP_ITAIL(0x00666750u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BC308(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC308u);

L_007BC308:
    ecx = MEM32(ebp + (-0x10)); /* 0x007BC308: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040B290; /* 0x007BC30B: jmp 0x40b290 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B290: RECOMP_ITAIL(0x0040B290u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BC310(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC310u);

L_007BC310:
    ecx = MEM32(ebp + (-0x10)); /* 0x007BC310: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040B2E0; /* 0x007BC313: jmp 0x40b2e0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B2E0: RECOMP_ITAIL(0x0040B2E0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BC318(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC318u);

L_007BC318:
    ecx = MEM32(ebp + (-0x10)); /* 0x007BC318: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040B340; /* 0x007BC31B: jmp 0x40b340 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B340: RECOMP_ITAIL(0x0040B340u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BC320(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC320u);

    goto L_007BC320;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BC320:
    edx = MEM32(esp + 0x8); /* 0x007BC320: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BC324: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x10)); /* 0x007BC327: mov ecx, dword ptr [edx - 0x10] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BC32A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BC32C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00845E84u; /* 0x007BC331: mov eax, 0x845e84 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BC336: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BC340(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC340u);

L_007BC340:
    ecx = MEM32(ebp + (-0x14)); /* 0x007BC340: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040A000; /* 0x007BC343: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BC348(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC348u);

L_007BC348:
    ecx = MEM32(ebp + (-0x14)); /* 0x007BC348: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x18u; /* 0x007BC34B: add ecx, 0x18 */
    _flag_k = FK_ADD;
    goto L_0041A4B0; /* 0x007BC34E: jmp 0x41a4b0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0041A4B0: RECOMP_ITAIL(0x0041A4B0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BC353(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC353u);

L_007BC353:
    ecx = MEM32(ebp + (-0x18)); /* 0x007BC353: mov ecx, dword ptr [ebp - 0x18] */
    goto L_0040B140; /* 0x007BC356: jmp 0x40b140 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B140: RECOMP_ITAIL(0x0040B140u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BC35B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC35Bu);

L_007BC35B:
    ecx = MEM32(ebp + (-0x18)); /* 0x007BC35B: mov ecx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x007BC35E: add ecx, 4 */
    _flag_k = FK_ADD;
    goto L_0040B140; /* 0x007BC361: jmp 0x40b140 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B140: RECOMP_ITAIL(0x0040B140u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BC366(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC366u);

L_007BC366:
    ecx = MEM32(ebp + (-0x18)); /* 0x007BC366: mov ecx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x007BC369: add ecx, 8 */
    _flag_k = FK_ADD;
    goto L_0040B140; /* 0x007BC36C: jmp 0x40b140 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B140: RECOMP_ITAIL(0x0040B140u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BC371(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC371u);

L_007BC371:
    ecx = MEM32(ebp + (-0x1C)); /* 0x007BC371: mov ecx, dword ptr [ebp - 0x1c] */
    goto L_0040B330; /* 0x007BC374: jmp 0x40b330 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B330: RECOMP_ITAIL(0x0040B330u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BC379(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC379u);

L_007BC379:
    ecx = MEM32(ebp + (-0x1C)); /* 0x007BC379: mov ecx, dword ptr [ebp - 0x1c] */
    goto L_0040B330; /* 0x007BC37C: jmp 0x40b330 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B330: RECOMP_ITAIL(0x0040B330u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BC381(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC381u);

L_007BC381:
    ecx = MEM32(ebp + (-0x1C)); /* 0x007BC381: mov ecx, dword ptr [ebp - 0x1c] */
    goto L_0040B330; /* 0x007BC384: jmp 0x40b330 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B330: RECOMP_ITAIL(0x0040B330u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BC389(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC389u);

    goto L_007BC389;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BC389:
    edx = MEM32(esp + 0x8); /* 0x007BC389: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BC38D: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x20)); /* 0x007BC390: mov ecx, dword ptr [edx - 0x20] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BC393: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BC395: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00845EC8u; /* 0x007BC39A: mov eax, 0x845ec8 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BC39F: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BC3B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC3B0u);

    goto L_007BC3B0;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BC3B0:
    edx = MEM32(esp + 0x8); /* 0x007BC3B0: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BC3B4: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x1C)); /* 0x007BC3B7: mov ecx, dword ptr [edx - 0x1c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BC3BA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BC3BC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00845F30u; /* 0x007BC3C1: mov eax, 0x845f30 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BC3C6: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BC3D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC3D0u);

L_007BC3D0:
    goto L_00409980; /* 0x007BC3D0: jmp 0x409980 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00409980: RECOMP_ITAIL(0x00409980u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BC3D5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC3D5u);

L_007BC3D5:
    ecx = MEM32(ebp + (-0x20)); /* 0x007BC3D5: mov ecx, dword ptr [ebp - 0x20] */
    goto L_00667480; /* 0x007BC3D8: jmp 0x667480 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00667480: RECOMP_ITAIL(0x00667480u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BC3DD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC3DDu);

    goto L_007BC3DD;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BC3DD:
    edx = MEM32(esp + 0x8); /* 0x007BC3DD: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BC3E1: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x24)); /* 0x007BC3E4: mov ecx, dword ptr [edx - 0x24] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BC3E7: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BC3E9: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00845F88u; /* 0x007BC3EE: mov eax, 0x845f88 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BC3F3: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BC400(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC400u);

    goto L_007BC400;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BC400:
    edx = MEM32(esp + 0x8); /* 0x007BC400: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BC404: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x1C)); /* 0x007BC407: mov ecx, dword ptr [edx - 0x1c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BC40A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BC40C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00845FF0u; /* 0x007BC411: mov eax, 0x845ff0 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BC416: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BC420(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC420u);

L_007BC420:
    ecx = MEM32(ebp + 0x8); /* 0x007BC420: mov ecx, dword ptr [ebp + 8] */
    goto L_0040A000; /* 0x007BC423: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BC428(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC428u);

L_007BC428:
    ecx = MEM32(ebp + 0x8); /* 0x007BC428: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x18u; /* 0x007BC42B: add ecx, 0x18 */
    _flag_k = FK_ADD;
    goto L_0041A4B0; /* 0x007BC42E: jmp 0x41a4b0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0041A4B0: RECOMP_ITAIL(0x0041A4B0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BC433(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC433u);

    goto L_007BC433;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BC433:
    edx = MEM32(esp + 0x8); /* 0x007BC433: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BC437: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xC)); /* 0x007BC43A: mov ecx, dword ptr [edx - 0xc] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BC43D: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BC43F: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00846048u; /* 0x007BC444: mov eax, 0x846048 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BC449: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BC450(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC450u);

    goto L_007BC450;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BC450:
    edx = MEM32(esp + 0x8); /* 0x007BC450: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BC454: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x007BC457: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BC45A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BC45C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0084607Cu; /* 0x007BC461: mov eax, 0x84607c */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BC466: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BC470(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC470u);

    goto L_007BC470;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BC470:
    edx = MEM32(esp + 0x8); /* 0x007BC470: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BC474: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x1C)); /* 0x007BC477: mov ecx, dword ptr [edx - 0x1c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BC47A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BC47C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x008460D4u; /* 0x007BC481: mov eax, 0x8460d4 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BC486: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BC490(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC490u);

L_007BC490:
    ecx = MEM32(ebp + (-0x10)); /* 0x007BC490: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040A000; /* 0x007BC493: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BC498(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC498u);

L_007BC498:
    ecx = MEM32(ebp + (-0x10)); /* 0x007BC498: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x18u; /* 0x007BC49B: add ecx, 0x18 */
    _flag_k = FK_ADD;
    goto L_0041A4B0; /* 0x007BC49E: jmp 0x41a4b0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0041A4B0: RECOMP_ITAIL(0x0041A4B0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BC4A3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC4A3u);

    goto L_007BC4A3;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BC4A3:
    edx = MEM32(esp + 0x8); /* 0x007BC4A3: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BC4A7: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xC)); /* 0x007BC4AA: mov ecx, dword ptr [edx - 0xc] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BC4AD: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BC4AF: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0084612Cu; /* 0x007BC4B4: mov eax, 0x84612c */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BC4B9: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BC4C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC4C0u);

L_007BC4C0:
    ecx = MEM32(ebp + (-0x10)); /* 0x007BC4C0: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040A000; /* 0x007BC4C3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BC4C8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC4C8u);

L_007BC4C8:
    ecx = MEM32(ebp + (-0x14)); /* 0x007BC4C8: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040B330; /* 0x007BC4CB: jmp 0x40b330 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B330: RECOMP_ITAIL(0x0040B330u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BC4D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC4D0u);

L_007BC4D0:
    ecx = MEM32(ebp + 0x8); /* 0x007BC4D0: mov ecx, dword ptr [ebp + 8] */
    goto L_0040B140; /* 0x007BC4D3: jmp 0x40b140 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B140: RECOMP_ITAIL(0x0040B140u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BC4D8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC4D8u);

L_007BC4D8:
    ecx = MEM32(ebp + (-0x14)); /* 0x007BC4D8: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040B330; /* 0x007BC4DB: jmp 0x40b330 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B330: RECOMP_ITAIL(0x0040B330u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BC4E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC4E0u);

L_007BC4E0:
    ecx = MEM32(ebp + 0x8); /* 0x007BC4E0: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x007BC4E3: add ecx, 4 */
    _flag_k = FK_ADD;
    goto L_0040B140; /* 0x007BC4E6: jmp 0x40b140 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B140: RECOMP_ITAIL(0x0040B140u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BC4EB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC4EBu);

L_007BC4EB:
    ecx = MEM32(ebp + (-0x14)); /* 0x007BC4EB: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040B330; /* 0x007BC4EE: jmp 0x40b330 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B330: RECOMP_ITAIL(0x0040B330u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BC4F3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC4F3u);

L_007BC4F3:
    ecx = MEM32(ebp + 0x8); /* 0x007BC4F3: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x007BC4F6: add ecx, 8 */
    _flag_k = FK_ADD;
    goto L_0040B140; /* 0x007BC4F9: jmp 0x40b140 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B140: RECOMP_ITAIL(0x0040B140u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BC4FE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC4FEu);

L_007BC4FE:
    ecx = MEM32(ebp + (-0x10)); /* 0x007BC4FE: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x18u; /* 0x007BC501: add ecx, 0x18 */
    _flag_k = FK_ADD;
    goto L_0041A4B0; /* 0x007BC504: jmp 0x41a4b0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0041A4B0: RECOMP_ITAIL(0x0041A4B0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BC509(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC509u);

    goto L_007BC509;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BC509:
    edx = MEM32(esp + 0x8); /* 0x007BC509: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BC50D: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x10)); /* 0x007BC510: mov ecx, dword ptr [edx - 0x10] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BC513: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BC515: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00846160u; /* 0x007BC51A: mov eax, 0x846160 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BC51F: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BC530(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC530u);

L_007BC530:
    ecx = MEM32(ebp + (-0x10)); /* 0x007BC530: mov ecx, dword ptr [ebp - 0x10] */
    goto L_00419790; /* 0x007BC533: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BC538(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC538u);

    goto L_007BC538;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BC538:
    edx = MEM32(esp + 0x8); /* 0x007BC538: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BC53C: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xC)); /* 0x007BC53F: mov ecx, dword ptr [edx - 0xc] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BC542: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BC544: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x008461C8u; /* 0x007BC549: mov eax, 0x8461c8 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BC54E: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BC560(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC560u);

L_007BC560:
    goto L_00409980; /* 0x007BC560: jmp 0x409980 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00409980: RECOMP_ITAIL(0x00409980u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BC565(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC565u);

L_007BC565:
    goto L_00409980; /* 0x007BC565: jmp 0x409980 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00409980: RECOMP_ITAIL(0x00409980u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BC56A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC56Au);

L_007BC56A:
    ecx = MEM32(ebp + (-0x120)); /* 0x007BC56A: mov ecx, dword ptr [ebp - 0x120] */
    goto L_0040A000; /* 0x007BC570: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BC575(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC575u);

L_007BC575:
    ecx = MEM32(ebp + (-0x14)); /* 0x007BC575: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040A000; /* 0x007BC578: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BC57D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC57Du);

    goto L_007BC57D;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BC57D:
    edx = MEM32(esp + 0x8); /* 0x007BC57D: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BC581: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x134)); /* 0x007BC584: mov ecx, dword ptr [edx - 0x134] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BC58A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BC58C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x007BC591: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BC594: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BC596: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x008461F4u; /* 0x007BC59B: mov eax, 0x8461f4 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BC5A0: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BC5B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC5B0u);

    goto L_007BC5B0;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BC5B0:
    edx = MEM32(esp + 0x8); /* 0x007BC5B0: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BC5B4: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x007BC5B7: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BC5BA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BC5BC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00846238u; /* 0x007BC5C1: mov eax, 0x846238 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BC5C6: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BC5D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC5D0u);

L_007BC5D0:
    ecx = MEM32(ebp + (-0x11C)); /* 0x007BC5D0: mov ecx, dword ptr [ebp - 0x11c] */
    goto L_0040A000; /* 0x007BC5D6: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BC5DB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC5DBu);

L_007BC5DB:
    ecx = MEM32(ebp + (-0x14)); /* 0x007BC5DB: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040A000; /* 0x007BC5DE: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BC5E3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC5E3u);

    goto L_007BC5E3;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BC5E3:
    edx = MEM32(esp + 0x8); /* 0x007BC5E3: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BC5E7: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x12C)); /* 0x007BC5EA: mov ecx, dword ptr [edx - 0x12c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BC5F0: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BC5F2: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x007BC5F7: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BC5FA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BC5FC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00846290u; /* 0x007BC601: mov eax, 0x846290 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BC606: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BC610(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC610u);

    goto L_007BC610;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BC610:
    edx = MEM32(esp + 0x8); /* 0x007BC610: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BC614: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x1C)); /* 0x007BC617: mov ecx, dword ptr [edx - 0x1c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BC61A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BC61C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x008462C4u; /* 0x007BC621: mov eax, 0x8462c4 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BC626: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BC630(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC630u);

L_007BC630:
    ecx = ebp + (-0x130); /* 0x007BC630: lea ecx, [ebp - 0x130] */
    goto L_0040A000; /* 0x007BC636: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BC63B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC63Bu);

L_007BC63B:
    ecx = ebp + (-0x148); /* 0x007BC63B: lea ecx, [ebp - 0x148] */
    goto L_0040A000; /* 0x007BC641: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BC646(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC646u);

    goto L_007BC646;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BC646:
    edx = MEM32(esp + 0x8); /* 0x007BC646: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0x15C); /* 0x007BC64A: lea eax, [edx - 0x15c] */
    ecx = MEM32(edx + (-0x160)); /* 0x007BC650: mov ecx, dword ptr [edx - 0x160] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BC656: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BC658: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x007BC65D: add eax, 8 */
    _flag_k = FK_ADD;
    ecx = MEM32(edx + (-0x8)); /* 0x007BC660: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BC663: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BC665: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0084631Cu; /* 0x007BC66A: mov eax, 0x84631c */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BC66F: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BC680(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC680u);

L_007BC680:
    ecx = ebp + 0x20; /* 0x007BC680: lea ecx, [ebp + 0x20] */
    goto L_0040A000; /* 0x007BC683: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BC688(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC688u);

L_007BC688:
    ecx = ebp + 0x8; /* 0x007BC688: lea ecx, [ebp + 8] */
    goto L_0040A000; /* 0x007BC68B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BC690(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC690u);

L_007BC690:
    ecx = ebp + (-0x3C); /* 0x007BC690: lea ecx, [ebp - 0x3c] */
    goto L_0040A000; /* 0x007BC693: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BC698(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC698u);

L_007BC698:
    ecx = ebp + (-0xB4); /* 0x007BC698: lea ecx, [ebp - 0xb4] */
    goto L_0040A000; /* 0x007BC69E: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BC6A3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC6A3u);

L_007BC6A3:
    ecx = ebp + (-0x84); /* 0x007BC6A3: lea ecx, [ebp - 0x84] */
    goto L_0040A000; /* 0x007BC6A9: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BC6AE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC6AEu);

L_007BC6AE:
    ecx = ebp + (-0x6C); /* 0x007BC6AE: lea ecx, [ebp - 0x6c] */
    goto L_0040A000; /* 0x007BC6B1: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BC6B6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC6B6u);

L_007BC6B6:
    ecx = ebp + (-0x54); /* 0x007BC6B6: lea ecx, [ebp - 0x54] */
    goto L_0040A000; /* 0x007BC6B9: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BC6BE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC6BEu);

L_007BC6BE:
    ecx = ebp + (-0x9C); /* 0x007BC6BE: lea ecx, [ebp - 0x9c] */
    goto L_0040A000; /* 0x007BC6C4: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BC6C9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC6C9u);

    goto L_007BC6C9;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BC6C9:
    edx = MEM32(esp + 0x8); /* 0x007BC6C9: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BC6CD: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xB4)); /* 0x007BC6D0: mov ecx, dword ptr [edx - 0xb4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BC6D6: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BC6D8: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x007BC6DD: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BC6E0: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BC6E2: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00846370u; /* 0x007BC6E7: mov eax, 0x846370 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BC6EC: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BC700(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC700u);

L_007BC700:
    ecx = ebp + 0x38; /* 0x007BC700: lea ecx, [ebp + 0x38] */
    goto L_0040A000; /* 0x007BC703: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BC708(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC708u);

L_007BC708:
    ecx = ebp + 0x20; /* 0x007BC708: lea ecx, [ebp + 0x20] */
    goto L_0040A000; /* 0x007BC70B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BC710(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC710u);

L_007BC710:
    ecx = ebp + 0x8; /* 0x007BC710: lea ecx, [ebp + 8] */
    goto L_0040A000; /* 0x007BC713: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BC718(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC718u);

L_007BC718:
    ecx = ebp + (-0x3C); /* 0x007BC718: lea ecx, [ebp - 0x3c] */
    goto L_0040A000; /* 0x007BC71B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BC720(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC720u);

L_007BC720:
    ecx = ebp + (-0x9C); /* 0x007BC720: lea ecx, [ebp - 0x9c] */
    goto L_0040A000; /* 0x007BC726: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BC72B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC72Bu);

L_007BC72B:
    ecx = ebp + (-0x6C); /* 0x007BC72B: lea ecx, [ebp - 0x6c] */
    goto L_0040A000; /* 0x007BC72E: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BC733(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC733u);

L_007BC733:
    ecx = ebp + (-0x84); /* 0x007BC733: lea ecx, [ebp - 0x84] */
    goto L_0040A000; /* 0x007BC739: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BC73E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC73Eu);

L_007BC73E:
    ecx = ebp + (-0x54); /* 0x007BC73E: lea ecx, [ebp - 0x54] */
    goto L_0040A000; /* 0x007BC741: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BC746(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC746u);

L_007BC746:
    ecx = ebp + (-0x54); /* 0x007BC746: lea ecx, [ebp - 0x54] */
    goto L_0040A000; /* 0x007BC749: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BC74E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC74Eu);

L_007BC74E:
    ecx = ebp + (-0x84); /* 0x007BC74E: lea ecx, [ebp - 0x84] */
    goto L_0040A000; /* 0x007BC754: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BC759(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC759u);

L_007BC759:
    ecx = ebp + (-0x6C); /* 0x007BC759: lea ecx, [ebp - 0x6c] */
    goto L_0040A000; /* 0x007BC75C: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BC761(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC761u);

L_007BC761:
    ecx = ebp + (-0x9C); /* 0x007BC761: lea ecx, [ebp - 0x9c] */
    goto L_0040A000; /* 0x007BC767: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BC76C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC76Cu);

    goto L_007BC76C;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BC76C:
    edx = MEM32(esp + 0x8); /* 0x007BC76C: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BC770: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xA4)); /* 0x007BC773: mov ecx, dword ptr [edx - 0xa4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BC779: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BC77B: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x007BC780: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BC783: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BC785: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x008463D8u; /* 0x007BC78A: mov eax, 0x8463d8 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BC78F: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BC7A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC7A0u);

L_007BC7A0:
    ecx = ebp + 0x50; /* 0x007BC7A0: lea ecx, [ebp + 0x50] */
    goto L_0040A000; /* 0x007BC7A3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BC7A8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC7A8u);

L_007BC7A8:
    ecx = ebp + 0x38; /* 0x007BC7A8: lea ecx, [ebp + 0x38] */
    goto L_0040A000; /* 0x007BC7AB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BC7B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BC7B0u);

L_007BC7B0:
    ecx = ebp + 0x20; /* 0x007BC7B0: lea ecx, [ebp + 0x20] */
    goto L_0040A000; /* 0x007BC7B3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}
