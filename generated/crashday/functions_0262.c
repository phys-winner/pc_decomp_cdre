#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_007BE2ED(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE2EDu);

L_007BE2ED:
    eax = MEM32(ebp + (-0x34)); /* 0x007BE2ED: mov eax, dword ptr [ebp - 0x34] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x007BE2F0: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007BE305; /* 0x007BE2F3: je 0x7be305 */
L_007BE2F9:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x34))); _flag_b = (uint32_t)(0xFFFFFFFEu);
    MEM32(ebp + (-0x34)) = MEM32(ebp + (-0x34)) & 0xFFFFFFFEu; /* 0x007BE2F9: and dword ptr [ebp - 0x34], 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0x44)); /* 0x007BE2FD: mov ecx, dword ptr [ebp - 0x44] */
    goto L_0040A000; /* 0x007BE300: jmp 0x40a000 */
L_007BE305:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007BE305: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BE306(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE306u);

    goto L_007BE306;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BE306:
    edx = MEM32(esp + 0x8); /* 0x007BE306: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BE30A: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x48)); /* 0x007BE30D: mov ecx, dword ptr [edx - 0x48] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BE310: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BE312: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x8)); /* 0x007BE317: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BE31A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BE31C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00847E68u; /* 0x007BE321: mov eax, 0x847e68 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BE326: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BE330(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE330u);

L_007BE330:
    ecx = ebp + 0x8; /* 0x007BE330: lea ecx, [ebp + 8] */
    goto L_0040A000; /* 0x007BE333: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BE338(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE338u);

L_007BE338:
    eax = MEM32(ebp + (-0x14)); /* 0x007BE338: mov eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x007BE33B: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007BE350; /* 0x007BE33E: je 0x7be350 */
L_007BE344:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0xFFFFFFFEu);
    MEM32(ebp + (-0x14)) = MEM32(ebp + (-0x14)) & 0xFFFFFFFEu; /* 0x007BE344: and dword ptr [ebp - 0x14], 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0x18)); /* 0x007BE348: mov ecx, dword ptr [ebp - 0x18] */
    goto L_0040A000; /* 0x007BE34B: jmp 0x40a000 */
L_007BE350:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007BE350: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BE351(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE351u);

L_007BE351:
    goto L_00409980; /* 0x007BE351: jmp 0x409980 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00409980: RECOMP_ITAIL(0x00409980u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BE356(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE356u);

    goto L_007BE356;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BE356:
    edx = MEM32(esp + 0x8); /* 0x007BE356: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BE35A: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x1C)); /* 0x007BE35D: mov ecx, dword ptr [edx - 0x1c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BE360: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BE362: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00847EC4u; /* 0x007BE367: mov eax, 0x847ec4 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BE36C: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BE380(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE380u);

L_007BE380:
    eax = MEM32(ebp + (-0x38)); /* 0x007BE380: mov eax, dword ptr [ebp - 0x38] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x007BE383: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007BE398; /* 0x007BE386: je 0x7be398 */
L_007BE38C:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x38))); _flag_b = (uint32_t)(0xFFFFFFFEu);
    MEM32(ebp + (-0x38)) = MEM32(ebp + (-0x38)) & 0xFFFFFFFEu; /* 0x007BE38C: and dword ptr [ebp - 0x38], 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0x3C)); /* 0x007BE390: mov ecx, dword ptr [ebp - 0x3c] */
    goto L_0040A000; /* 0x007BE393: jmp 0x40a000 */
L_007BE398:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007BE398: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BE399(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE399u);

L_007BE399:
    ecx = ebp + (-0x28); /* 0x007BE399: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007BE39C: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BE3A1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE3A1u);

    goto L_007BE3A1;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BE3A1:
    edx = MEM32(esp + 0x8); /* 0x007BE3A1: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BE3A5: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x3C)); /* 0x007BE3A8: mov ecx, dword ptr [edx - 0x3c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BE3AB: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BE3AD: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x007BE3B2: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BE3B5: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BE3B7: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00847F00u; /* 0x007BE3BC: mov eax, 0x847f00 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BE3C1: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BE3D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE3D0u);

L_007BE3D0:
    ecx = ebp + 0x8; /* 0x007BE3D0: lea ecx, [ebp + 8] */
    goto L_0040A000; /* 0x007BE3D3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BE3D8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE3D8u);

L_007BE3D8:
    eax = MEM32(ebp + (-0x38)); /* 0x007BE3D8: mov eax, dword ptr [ebp - 0x38] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x007BE3DB: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007BE3F0; /* 0x007BE3DE: je 0x7be3f0 */
L_007BE3E4:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x38))); _flag_b = (uint32_t)(0xFFFFFFFEu);
    MEM32(ebp + (-0x38)) = MEM32(ebp + (-0x38)) & 0xFFFFFFFEu; /* 0x007BE3E4: and dword ptr [ebp - 0x38], 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0x3C)); /* 0x007BE3E8: mov ecx, dword ptr [ebp - 0x3c] */
    goto L_0040A000; /* 0x007BE3EB: jmp 0x40a000 */
L_007BE3F0:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007BE3F0: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BE3F1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE3F1u);

L_007BE3F1:
    ecx = ebp + (-0x28); /* 0x007BE3F1: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007BE3F4: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BE3F9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE3F9u);

    goto L_007BE3F9;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BE3F9:
    edx = MEM32(esp + 0x8); /* 0x007BE3F9: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BE3FD: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x44)); /* 0x007BE400: mov ecx, dword ptr [edx - 0x44] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BE403: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BE405: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x007BE40A: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BE40D: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BE40F: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00847F34u; /* 0x007BE414: mov eax, 0x847f34 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BE419: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BE420(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE420u);

L_007BE420:
    ecx = ebp + (-0xC0); /* 0x007BE420: lea ecx, [ebp - 0xc0] */
    goto L_0043D6D0; /* 0x007BE426: jmp 0x43d6d0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0043D6D0: RECOMP_ITAIL(0x0043D6D0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BE42B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE42Bu);

    goto L_007BE42B;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BE42B:
    edx = MEM32(esp + 0x8); /* 0x007BE42B: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0xBC); /* 0x007BE42F: lea eax, [edx - 0xbc] */
    ecx = MEM32(edx + (-0xC0)); /* 0x007BE435: mov ecx, dword ptr [edx - 0xc0] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BE43B: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BE43D: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00847F70u; /* 0x007BE442: mov eax, 0x847f70 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BE447: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BE450(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE450u);

L_007BE450:
    ecx = ebp + (-0x100); /* 0x007BE450: lea ecx, [ebp - 0x100] */
    goto L_0043D6D0; /* 0x007BE456: jmp 0x43d6d0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0043D6D0: RECOMP_ITAIL(0x0043D6D0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BE45B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE45Bu);

L_007BE45B:
    eax = MEM32(ebp + (-0x44)); /* 0x007BE45B: mov eax, dword ptr [ebp - 0x44] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x007BE45E: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007BE473; /* 0x007BE461: je 0x7be473 */
L_007BE467:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x44))); _flag_b = (uint32_t)(0xFFFFFFFEu);
    MEM32(ebp + (-0x44)) = MEM32(ebp + (-0x44)) & 0xFFFFFFFEu; /* 0x007BE467: and dword ptr [ebp - 0x44], 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0x4C)); /* 0x007BE46B: mov ecx, dword ptr [ebp - 0x4c] */
    goto L_0040A000; /* 0x007BE46E: jmp 0x40a000 */
L_007BE473:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007BE473: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BE474(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE474u);

L_007BE474:
    ecx = ebp + (-0x28); /* 0x007BE474: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007BE477: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BE47C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE47Cu);

L_007BE47C:
    ecx = ebp + (-0x40); /* 0x007BE47C: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x007BE47F: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BE484(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE484u);

L_007BE484:
    ecx = MEM32(ebp + (-0x50)); /* 0x007BE484: mov ecx, dword ptr [ebp - 0x50] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x48u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 0x48u; /* 0x007BE487: sub ecx, 0x48 */
    _flag_k = FK_CMP;
    { _itail_tgt = (uint32_t)(MEM32(0x7CC434)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BE490(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE490u);

L_007BE490:
    ecx = MEM32(ebp + (-0x50)); /* 0x007BE490: mov ecx, dword ptr [ebp - 0x50] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x50u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 0x50u; /* 0x007BE493: sub ecx, 0x50 */
    _flag_k = FK_CMP;
    goto L_0044DD90; /* 0x007BE496: jmp 0x44dd90 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0044DD90: RECOMP_ITAIL(0x0044DD90u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BE49B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE49Bu);

L_007BE49B:
    ecx = MEM32(ebp + (-0x48)); /* 0x007BE49B: mov ecx, dword ptr [ebp - 0x48] */
    { _itail_tgt = (uint32_t)(MEM32(0x7CC3D0)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BE4A4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE4A4u);

    goto L_007BE4A4;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BE4A4:
    edx = MEM32(esp + 0x8); /* 0x007BE4A4: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BE4A8: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x104)); /* 0x007BE4AB: mov ecx, dword ptr [edx - 0x104] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BE4B1: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BE4B3: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x007BE4B8: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BE4BB: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BE4BD: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00847F9Cu; /* 0x007BE4C2: mov eax, 0x847f9c */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BE4C7: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BE4D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE4D0u);

L_007BE4D0:
    eax = MEM32(ebp + (-0x2C)); /* 0x007BE4D0: mov eax, dword ptr [ebp - 0x2c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x007BE4D3: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007BE4E8; /* 0x007BE4D6: je 0x7be4e8 */
L_007BE4DC:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(0xFFFFFFFEu);
    MEM32(ebp + (-0x2C)) = MEM32(ebp + (-0x2C)) & 0xFFFFFFFEu; /* 0x007BE4DC: and dword ptr [ebp - 0x2c], 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0x34)); /* 0x007BE4E0: mov ecx, dword ptr [ebp - 0x34] */
    goto L_0040A000; /* 0x007BE4E3: jmp 0x40a000 */
L_007BE4E8:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007BE4E8: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BE4E9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE4E9u);

L_007BE4E9:
    ecx = ebp + (-0x28); /* 0x007BE4E9: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007BE4EC: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BE4F1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE4F1u);

L_007BE4F1:
    goto L_00409980; /* 0x007BE4F1: jmp 0x409980 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00409980: RECOMP_ITAIL(0x00409980u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BE4F6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE4F6u);

    goto L_007BE4F6;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BE4F6:
    edx = MEM32(esp + 0x8); /* 0x007BE4F6: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BE4FA: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x3C)); /* 0x007BE4FD: mov ecx, dword ptr [edx - 0x3c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BE500: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BE502: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x007BE507: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BE50A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BE50C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00847FF8u; /* 0x007BE511: mov eax, 0x847ff8 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BE516: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BE520(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE520u);

L_007BE520:
    eax = MEM32(ebp + (-0x40)); /* 0x007BE520: mov eax, dword ptr [ebp - 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x007BE523: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007BE538; /* 0x007BE526: je 0x7be538 */
L_007BE52C:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x40))); _flag_b = (uint32_t)(0xFFFFFFFEu);
    MEM32(ebp + (-0x40)) = MEM32(ebp + (-0x40)) & 0xFFFFFFFEu; /* 0x007BE52C: and dword ptr [ebp - 0x40], 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0x44)); /* 0x007BE530: mov ecx, dword ptr [ebp - 0x44] */
    goto L_0040A000; /* 0x007BE533: jmp 0x40a000 */
L_007BE538:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007BE538: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BE539(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE539u);

L_007BE539:
    ecx = ebp + (-0x2C); /* 0x007BE539: lea ecx, [ebp - 0x2c] */
    goto L_0040A000; /* 0x007BE53C: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BE541(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE541u);

    goto L_007BE541;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BE541:
    edx = MEM32(esp + 0x8); /* 0x007BE541: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BE545: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x48)); /* 0x007BE548: mov ecx, dword ptr [edx - 0x48] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BE54B: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BE54D: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x8)); /* 0x007BE552: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BE555: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BE557: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00848034u; /* 0x007BE55C: mov eax, 0x848034 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BE561: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BE570(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE570u);

L_007BE570:
    ecx = ebp + (-0x2C); /* 0x007BE570: lea ecx, [ebp - 0x2c] */
    goto L_00558880; /* 0x007BE573: jmp 0x558880 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00558880: RECOMP_ITAIL(0x00558880u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BE578(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE578u);

L_007BE578:
    ecx = ebp + (-0x44); /* 0x007BE578: lea ecx, [ebp - 0x44] */
    goto L_00558880; /* 0x007BE57B: jmp 0x558880 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00558880: RECOMP_ITAIL(0x00558880u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BE580(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE580u);

L_007BE580:
    ecx = ebp + (-0x2C); /* 0x007BE580: lea ecx, [ebp - 0x2c] */
    goto L_00558880; /* 0x007BE583: jmp 0x558880 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00558880: RECOMP_ITAIL(0x00558880u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BE588(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE588u);

    goto L_007BE588;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BE588:
    edx = MEM32(esp + 0x8); /* 0x007BE588: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BE58C: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x58)); /* 0x007BE58F: mov ecx, dword ptr [edx - 0x58] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BE592: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BE594: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x8)); /* 0x007BE599: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BE59C: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BE59E: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00848068u; /* 0x007BE5A3: mov eax, 0x848068 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BE5A8: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BE5B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE5B0u);

L_007BE5B0:
    ecx = ebp + (-0x40); /* 0x007BE5B0: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x007BE5B3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BE5B8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE5B8u);

L_007BE5B8:
    ecx = ebp + (-0x28); /* 0x007BE5B8: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007BE5BB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BE5C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE5C0u);

L_007BE5C0:
    eax = MEM32(ebp + (-0x44)); /* 0x007BE5C0: mov eax, dword ptr [ebp - 0x44] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x007BE5C3: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007BE5D8; /* 0x007BE5C6: je 0x7be5d8 */
L_007BE5CC:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x44))); _flag_b = (uint32_t)(0xFFFFFFFEu);
    MEM32(ebp + (-0x44)) = MEM32(ebp + (-0x44)) & 0xFFFFFFFEu; /* 0x007BE5CC: and dword ptr [ebp - 0x44], 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0x4C)); /* 0x007BE5D0: mov ecx, dword ptr [ebp - 0x4c] */
    goto L_0040A000; /* 0x007BE5D3: jmp 0x40a000 */
L_007BE5D8:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007BE5D8: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BE5D9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE5D9u);

    goto L_007BE5D9;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BE5D9:
    edx = MEM32(esp + 0x8); /* 0x007BE5D9: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BE5DD: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x54)); /* 0x007BE5E0: mov ecx, dword ptr [edx - 0x54] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BE5E3: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BE5E5: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x007BE5EA: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BE5ED: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BE5EF: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x008480A4u; /* 0x007BE5F4: mov eax, 0x8480a4 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BE5F9: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BE600(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE600u);

L_007BE600:
    ecx = MEM32(ebp + (-0x18)); /* 0x007BE600: mov ecx, dword ptr [ebp - 0x18] */
    goto L_0040A000; /* 0x007BE603: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BE608(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE608u);

L_007BE608:
    ecx = MEM32(ebp + (-0x1C)); /* 0x007BE608: mov ecx, dword ptr [ebp - 0x1c] */
    goto L_0040A000; /* 0x007BE60B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BE610(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE610u);

    goto L_007BE610;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BE610:
    edx = MEM32(esp + 0x8); /* 0x007BE610: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BE614: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x38)); /* 0x007BE617: mov ecx, dword ptr [edx - 0x38] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BE61A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BE61C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x008480E0u; /* 0x007BE621: mov eax, 0x8480e0 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BE626: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BE630(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE630u);

L_007BE630:
    ecx = ebp + (-0x28); /* 0x007BE630: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007BE633: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BE638(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE638u);

L_007BE638:
    ecx = MEM32(ebp + (-0x34)); /* 0x007BE638: mov ecx, dword ptr [ebp - 0x34] */
    goto L_0040A000; /* 0x007BE63B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BE640(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE640u);

L_007BE640:
    ecx = MEM32(ebp + (-0x38)); /* 0x007BE640: mov ecx, dword ptr [ebp - 0x38] */
    goto L_0040A000; /* 0x007BE643: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BE648(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE648u);

L_007BE648:
    ecx = MEM32(ebp + (-0x38)); /* 0x007BE648: mov ecx, dword ptr [ebp - 0x38] */
    goto L_0040A000; /* 0x007BE64B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BE650(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE650u);

L_007BE650:
    ecx = MEM32(ebp + (-0x34)); /* 0x007BE650: mov ecx, dword ptr [ebp - 0x34] */
    goto L_0040A000; /* 0x007BE653: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BE658(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE658u);

L_007BE658:
    ecx = MEM32(ebp + (-0x38)); /* 0x007BE658: mov ecx, dword ptr [ebp - 0x38] */
    goto L_0040A000; /* 0x007BE65B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BE660(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE660u);

L_007BE660:
    ecx = MEM32(ebp + (-0x34)); /* 0x007BE660: mov ecx, dword ptr [ebp - 0x34] */
    goto L_0040A000; /* 0x007BE663: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BE668(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE668u);

L_007BE668:
    ecx = MEM32(ebp + (-0x38)); /* 0x007BE668: mov ecx, dword ptr [ebp - 0x38] */
    goto L_0040A000; /* 0x007BE66B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BE670(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE670u);

L_007BE670:
    ecx = MEM32(ebp + (-0x34)); /* 0x007BE670: mov ecx, dword ptr [ebp - 0x34] */
    goto L_0040A000; /* 0x007BE673: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BE678(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE678u);

L_007BE678:
    ecx = MEM32(ebp + (-0x38)); /* 0x007BE678: mov ecx, dword ptr [ebp - 0x38] */
    goto L_0040A000; /* 0x007BE67B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BE680(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE680u);

L_007BE680:
    ecx = MEM32(ebp + (-0x34)); /* 0x007BE680: mov ecx, dword ptr [ebp - 0x34] */
    goto L_0040A000; /* 0x007BE683: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BE688(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE688u);

    goto L_007BE688;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BE688:
    edx = MEM32(esp + 0x8); /* 0x007BE688: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BE68C: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x34)); /* 0x007BE68F: mov ecx, dword ptr [edx - 0x34] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BE692: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BE694: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x007BE699: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BE69C: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BE69E: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00848118u; /* 0x007BE6A3: mov eax, 0x848118 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BE6A8: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BE6B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE6B0u);

L_007BE6B0:
    ecx = MEM32(ebp + (-0x10)); /* 0x007BE6B0: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x2630u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x2630u; /* 0x007BE6B3: add ecx, 0x2630 */
    _flag_k = FK_ADD;
    goto L_0040A000; /* 0x007BE6B9: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BE6BE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE6BEu);

L_007BE6BE:
    ecx = MEM32(ebp + (-0x10)); /* 0x007BE6BE: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x2648u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x2648u; /* 0x007BE6C1: add ecx, 0x2648 */
    _flag_k = FK_ADD;
    goto L_0040A000; /* 0x007BE6C7: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BE6CC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE6CCu);

    goto L_007BE6CC;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BE6CC:
    edx = MEM32(esp + 0x8); /* 0x007BE6CC: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BE6D0: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x10)); /* 0x007BE6D3: mov ecx, dword ptr [edx - 0x10] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BE6D6: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BE6D8: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00848198u; /* 0x007BE6DD: mov eax, 0x848198 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BE6E2: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BE6F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE6F0u);

L_007BE6F0:
    ecx = MEM32(ebp + (-0x14)); /* 0x007BE6F0: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0067C250; /* 0x007BE6F3: jmp 0x67c250 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0067C250: RECOMP_ITAIL(0x0067C250u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BE6F8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE6F8u);

L_007BE6F8:
    ecx = MEM32(ebp + (-0x14)); /* 0x007BE6F8: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x20u; /* 0x007BE6FB: add ecx, 0x20 */
    _flag_k = FK_ADD;
    goto L_0044E450; /* 0x007BE6FE: jmp 0x44e450 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0044E450: RECOMP_ITAIL(0x0044E450u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BE703(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE703u);

    goto L_007BE703;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BE703:
    edx = MEM32(esp + 0x8); /* 0x007BE703: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BE707: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x007BE70A: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BE70D: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BE70F: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x008481CCu; /* 0x007BE714: mov eax, 0x8481cc */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BE719: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BE720(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE720u);

L_007BE720:
    ecx = ebp + (-0x2760); /* 0x007BE720: lea ecx, [ebp - 0x2760] */
    goto L_0040A000; /* 0x007BE726: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BE72B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE72Bu);

L_007BE72B:
    ecx = MEM32(ebp + (-0x2768)); /* 0x007BE72B: mov ecx, dword ptr [ebp - 0x2768] */
    goto L_0040A000; /* 0x007BE731: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BE736(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE736u);

L_007BE736:
    ecx = MEM32(ebp + (-0x2764)); /* 0x007BE736: mov ecx, dword ptr [ebp - 0x2764] */
    goto L_0040A000; /* 0x007BE73C: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BE741(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE741u);

    goto L_007BE741;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BE741:
    edx = MEM32(esp + 0x8); /* 0x007BE741: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0x276C); /* 0x007BE745: lea eax, [edx - 0x276c] */
    ecx = MEM32(edx + (-0x2770)); /* 0x007BE74B: mov ecx, dword ptr [edx - 0x2770] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BE751: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BE753: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x007BE758: add eax, 0xc */
    _flag_k = FK_ADD;
    ecx = MEM32(edx + (-0x8)); /* 0x007BE75B: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BE75E: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BE760: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00848200u; /* 0x007BE765: mov eax, 0x848200 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BE76A: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BE770(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE770u);

L_007BE770:
    goto L_0067C240; /* 0x007BE770: jmp 0x67c240 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0067C240: RECOMP_ITAIL(0x0067C240u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BE775(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE775u);

L_007BE775:
    ecx = MEM32(ebp + (-0x10)); /* 0x007BE775: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x007BE778: add ecx, 8 */
    _flag_k = FK_ADD;
    goto L_00419790; /* 0x007BE77B: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BE780(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE780u);

    goto L_007BE780;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BE780:
    edx = MEM32(esp + 0x8); /* 0x007BE780: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BE784: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x8)); /* 0x007BE787: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BE78A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BE78C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0084823Cu; /* 0x007BE791: mov eax, 0x84823c */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BE796: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BE7A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE7A0u);

L_007BE7A0:
    goto L_0067C240; /* 0x007BE7A0: jmp 0x67c240 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0067C240: RECOMP_ITAIL(0x0067C240u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BE7A5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE7A5u);

L_007BE7A5:
    ecx = MEM32(ebp + (-0x14)); /* 0x007BE7A5: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x007BE7A8: add ecx, 8 */
    _flag_k = FK_ADD;
    goto L_00419790; /* 0x007BE7AB: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BE7B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE7B0u);

    goto L_007BE7B0;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BE7B0:
    edx = MEM32(esp + 0x8); /* 0x007BE7B0: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BE7B4: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x007BE7B7: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BE7BA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BE7BC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00848270u; /* 0x007BE7C1: mov eax, 0x848270 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BE7C6: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BE7D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE7D0u);

L_007BE7D0:
    ecx = MEM32(ebp + (-0x10)); /* 0x007BE7D0: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x2630u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x2630u; /* 0x007BE7D3: add ecx, 0x2630 */
    _flag_k = FK_ADD;
    goto L_0040A000; /* 0x007BE7D9: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BE7DE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE7DEu);

L_007BE7DE:
    ecx = MEM32(ebp + (-0x10)); /* 0x007BE7DE: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x2648u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x2648u; /* 0x007BE7E1: add ecx, 0x2648 */
    _flag_k = FK_ADD;
    goto L_0040A000; /* 0x007BE7E7: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BE7EC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE7ECu);

    goto L_007BE7EC;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BE7EC:
    edx = MEM32(esp + 0x8); /* 0x007BE7EC: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BE7F0: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xC)); /* 0x007BE7F3: mov ecx, dword ptr [edx - 0xc] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BE7F6: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BE7F8: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x008482A4u; /* 0x007BE7FD: mov eax, 0x8482a4 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BE802: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BE810(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE810u);

L_007BE810:
    eax = MEM32(ebp + (-0x42C)); /* 0x007BE810: mov eax, dword ptr [ebp - 0x42c] */
    PUSH32(esp, eax); /* 0x007BE816: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007BE817: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007BE81D: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007BE81E: ret  */
    RECOMP_REGS_OUT();
}

void sub_007BE81F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE81Fu);

L_007BE81F:
    eax = MEM32(ebp + (-0x434)); /* 0x007BE81F: mov eax, dword ptr [ebp - 0x434] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x007BE825: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007BE840; /* 0x007BE828: je 0x7be840 */
L_007BE82E:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x434))); _flag_b = (uint32_t)(0xFFFFFFFEu);
    MEM32(ebp + (-0x434)) = MEM32(ebp + (-0x434)) & 0xFFFFFFFEu; /* 0x007BE82E: and dword ptr [ebp - 0x434], 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x428); /* 0x007BE835: lea ecx, [ebp - 0x428] */
    goto L_0040A000; /* 0x007BE83B: jmp 0x40a000 */
L_007BE840:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007BE840: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BE841(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE841u);

    goto L_007BE841;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BE841:
    edx = MEM32(esp + 0x8); /* 0x007BE841: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BE845: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x44C)); /* 0x007BE848: mov ecx, dword ptr [edx - 0x44c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BE84E: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BE850: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x007BE855: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BE858: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BE85A: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x008482D8u; /* 0x007BE85F: mov eax, 0x8482d8 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BE864: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BE870(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE870u);

L_007BE870:
    ecx = ebp + (-0x14); /* 0x007BE870: lea ecx, [ebp - 0x14] */
    goto L_0044E450; /* 0x007BE873: jmp 0x44e450 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0044E450: RECOMP_ITAIL(0x0044E450u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BE878(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE878u);

L_007BE878:
    eax = MEM32(ebp + (-0x10)); /* 0x007BE878: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x007BE87B: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007BE87C: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007BE882: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007BE883: ret  */
    RECOMP_REGS_OUT();
}

void sub_007BE884(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE884u);

    goto L_007BE884;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BE884:
    edx = MEM32(esp + 0x8); /* 0x007BE884: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BE888: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x1C)); /* 0x007BE88B: mov ecx, dword ptr [edx - 0x1c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BE88E: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BE890: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00848314u; /* 0x007BE895: mov eax, 0x848314 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BE89A: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BE8A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE8A0u);

L_007BE8A0:
    ecx = MEM32(ebp + (-0x10)); /* 0x007BE8A0: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0067C250; /* 0x007BE8A3: jmp 0x67c250 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0067C250: RECOMP_ITAIL(0x0067C250u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BE8A8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE8A8u);

L_007BE8A8:
    ecx = MEM32(ebp + (-0x10)); /* 0x007BE8A8: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x20u; /* 0x007BE8AB: add ecx, 0x20 */
    _flag_k = FK_ADD;
    goto L_0044E450; /* 0x007BE8AE: jmp 0x44e450 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0044E450: RECOMP_ITAIL(0x0044E450u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BE8B3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE8B3u);

    goto L_007BE8B3;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BE8B3:
    edx = MEM32(esp + 0x8); /* 0x007BE8B3: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BE8B7: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xC)); /* 0x007BE8BA: mov ecx, dword ptr [edx - 0xc] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BE8BD: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BE8BF: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00848348u; /* 0x007BE8C4: mov eax, 0x848348 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BE8C9: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BE8D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE8D0u);

L_007BE8D0:
    goto L_006832B0; /* 0x007BE8D0: jmp 0x6832b0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_006832B0: RECOMP_ITAIL(0x006832B0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BE8D5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE8D5u);

    goto L_007BE8D5;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BE8D5:
    edx = MEM32(esp + 0x8); /* 0x007BE8D5: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BE8D9: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x4)); /* 0x007BE8DC: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BE8DF: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BE8E1: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0084837Cu; /* 0x007BE8E6: mov eax, 0x84837c */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BE8EB: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BE8F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE8F0u);

L_007BE8F0:
    ecx = MEM32(ebp + (-0x18)); /* 0x007BE8F0: mov ecx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1100u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x1100u; /* 0x007BE8F3: add ecx, 0x1100 */
    _flag_k = FK_ADD;
    goto L_006367A0; /* 0x007BE8F9: jmp 0x6367a0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_006367A0: RECOMP_ITAIL(0x006367A0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BE8FE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE8FEu);

L_007BE8FE:
    eax = MEM32(ebp + (-0x1C)); /* 0x007BE8FE: mov eax, dword ptr [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x007BE901: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007BE902: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007BE908: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007BE909: ret  */
    RECOMP_REGS_OUT();
}

void sub_007BE90A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE90Au);

L_007BE90A:
    ecx = MEM32(ebp + (-0x1C)); /* 0x007BE90A: mov ecx, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x007BE90D: add ecx, 8 */
    _flag_k = FK_ADD;
    goto L_006367A0; /* 0x007BE910: jmp 0x6367a0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_006367A0: RECOMP_ITAIL(0x006367A0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BE915(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE915u);

L_007BE915:
    eax = MEM32(ebp + (-0x1C)); /* 0x007BE915: mov eax, dword ptr [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x007BE918: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007BE919: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007BE91F: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007BE920: ret  */
    RECOMP_REGS_OUT();
}

void sub_007BE921(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE921u);

L_007BE921:
    ecx = MEM32(ebp + (-0x1C)); /* 0x007BE921: mov ecx, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x007BE924: add ecx, 8 */
    _flag_k = FK_ADD;
    goto L_006367A0; /* 0x007BE927: jmp 0x6367a0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_006367A0: RECOMP_ITAIL(0x006367A0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BE92C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE92Cu);

L_007BE92C:
    eax = MEM32(ebp + (-0x1C)); /* 0x007BE92C: mov eax, dword ptr [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x007BE92F: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007BE930: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007BE936: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007BE937: ret  */
    RECOMP_REGS_OUT();
}

void sub_007BE938(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE938u);

    goto L_007BE938;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BE938:
    edx = MEM32(esp + 0x8); /* 0x007BE938: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BE93C: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x24)); /* 0x007BE93F: mov ecx, dword ptr [edx - 0x24] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BE942: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BE944: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x008483A8u; /* 0x007BE949: mov eax, 0x8483a8 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BE94E: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BE960(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE960u);

L_007BE960:
    ecx = MEM32(ebp + (-0x10)); /* 0x007BE960: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1100u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x1100u; /* 0x007BE963: add ecx, 0x1100 */
    _flag_k = FK_ADD;
    goto L_006367A0; /* 0x007BE969: jmp 0x6367a0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_006367A0: RECOMP_ITAIL(0x006367A0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BE96E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE96Eu);

    goto L_007BE96E;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BE96E:
    edx = MEM32(esp + 0x8); /* 0x007BE96E: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BE972: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x007BE975: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BE978: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BE97A: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x008483FCu; /* 0x007BE97F: mov eax, 0x8483fc */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BE984: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BE990(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE990u);

L_007BE990:
    ecx = MEM32(ebp + (-0x1C)); /* 0x007BE990: mov ecx, dword ptr [ebp - 0x1c] */
    goto L_0040A000; /* 0x007BE993: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BE998(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE998u);

L_007BE998:
    ecx = MEM32(ebp + (-0x20)); /* 0x007BE998: mov ecx, dword ptr [ebp - 0x20] */
    goto L_0040A000; /* 0x007BE99B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BE9A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE9A0u);

L_007BE9A0:
    eax = MEM32(ebp + (-0x20)); /* 0x007BE9A0: mov eax, dword ptr [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x007BE9A3: push eax */
    RECOMP_ICALL(MEM32(0x7CC6A8)); /* 0x007BE9A4: call dword ptr [0x7cc6a8] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007BE9AA: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007BE9AB: ret  */
    RECOMP_REGS_OUT();
}

void sub_007BE9AC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE9ACu);

    goto L_007BE9AC;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BE9AC:
    edx = MEM32(esp + 0x8); /* 0x007BE9AC: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BE9B0: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x24)); /* 0x007BE9B3: mov ecx, dword ptr [edx - 0x24] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BE9B6: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BE9B8: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00848428u; /* 0x007BE9BD: mov eax, 0x848428 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BE9C2: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BE9D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE9D0u);

L_007BE9D0:
    ecx = MEM32(ebp + (-0x24)); /* 0x007BE9D0: mov ecx, dword ptr [ebp - 0x24] */
    goto L_0040A000; /* 0x007BE9D3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BE9D8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE9D8u);

L_007BE9D8:
    ecx = MEM32(ebp + (-0x1C)); /* 0x007BE9D8: mov ecx, dword ptr [ebp - 0x1c] */
    goto L_0040A000; /* 0x007BE9DB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BE9E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BE9E0u);

    goto L_007BE9E0;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BE9E0:
    edx = MEM32(esp + 0x8); /* 0x007BE9E0: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BE9E4: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x28)); /* 0x007BE9E7: mov ecx, dword ptr [edx - 0x28] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BE9EA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BE9EC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00848464u; /* 0x007BE9F1: mov eax, 0x848464 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BE9F6: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BEA00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BEA00u);

L_007BEA00:
    eax = MEM32(ebp + (-0x14)); /* 0x007BEA00: mov eax, dword ptr [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x007BEA03: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007BEA04: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007BEA0A: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007BEA0B: ret  */
    RECOMP_REGS_OUT();
}
