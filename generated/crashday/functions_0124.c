#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_007934F3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007934F3u);

L_007934F3:
    ecx = ebp + (-0x310); /* 0x007934F3: lea ecx, [ebp - 0x310] */
    goto L_0040A000; /* 0x007934F9: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007934FE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007934FEu);

L_007934FE:
    ecx = ebp + (-0x3B8); /* 0x007934FE: lea ecx, [ebp - 0x3b8] */
    goto L_0040A000; /* 0x00793504: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00793509(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00793509u);

L_00793509:
    ecx = ebp + (-0x328); /* 0x00793509: lea ecx, [ebp - 0x328] */
    goto L_0040A000; /* 0x0079350F: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00793514(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00793514u);

L_00793514:
    ecx = ebp + (-0x370); /* 0x00793514: lea ecx, [ebp - 0x370] */
    goto L_0040A000; /* 0x0079351A: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079351F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079351Fu);

L_0079351F:
    ecx = ebp + (-0x388); /* 0x0079351F: lea ecx, [ebp - 0x388] */
    goto L_0040A000; /* 0x00793525: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079352A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079352Au);

L_0079352A:
    eax = MEM32(ebp + (-0x460)); /* 0x0079352A: mov eax, dword ptr [ebp - 0x460] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x00793530: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0079354B; /* 0x00793533: je 0x79354b */
L_00793539:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x460))); _flag_b = (uint32_t)(0xFFFFFFFEu);
    MEM32(ebp + (-0x460)) = MEM32(ebp + (-0x460)) & 0xFFFFFFFEu; /* 0x00793539: and dword ptr [ebp - 0x460], 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x1A8); /* 0x00793540: lea ecx, [ebp - 0x1a8] */
    goto L_0040A000; /* 0x00793546: jmp 0x40a000 */
L_0079354B:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0079354B: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079354C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079354Cu);

L_0079354C:
    ecx = ebp + (-0x12C); /* 0x0079354C: lea ecx, [ebp - 0x12c] */
    goto L_0040A000; /* 0x00793552: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00793557(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00793557u);

L_00793557:
    ecx = ebp + (-0x160); /* 0x00793557: lea ecx, [ebp - 0x160] */
    goto L_004E2470; /* 0x0079355D: jmp 0x4e2470 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_004E2470: RECOMP_ITAIL(0x004E2470u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00793562(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00793562u);

L_00793562:
    ecx = ebp + (-0x12C); /* 0x00793562: lea ecx, [ebp - 0x12c] */
    goto L_0040A000; /* 0x00793568: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079356D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079356Du);

    goto L_0079356D;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_0079356D:
    edx = MEM32(esp + 0x8); /* 0x0079356D: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x00793571: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x46C)); /* 0x00793574: mov ecx, dword ptr [edx - 0x46c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0079357A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0079357C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x00793581: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x00793584: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00793586: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0081E808u; /* 0x0079358B: mov eax, 0x81e808 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x00793590: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007935A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007935A0u);

L_007935A0:
    ecx = MEM32(ebp + (-0x10)); /* 0x007935A0: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x007935A3: add ecx, 4 */
    _flag_k = FK_ADD;
    goto L_0040A000; /* 0x007935A6: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007935AB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007935ABu);

L_007935AB:
    ecx = MEM32(ebp + (-0x10)); /* 0x007935AB: mov ecx, dword ptr [ebp - 0x10] */
    goto L_004872C0; /* 0x007935AE: jmp 0x4872c0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_004872C0: RECOMP_ITAIL(0x004872C0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007935B3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007935B3u);

    goto L_007935B3;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007935B3:
    edx = MEM32(esp + 0x8); /* 0x007935B3: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007935B7: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xC)); /* 0x007935BA: mov ecx, dword ptr [edx - 0xc] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007935BD: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007935BF: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0081E940u; /* 0x007935C4: mov eax, 0x81e940 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007935C9: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007935D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007935D0u);

L_007935D0:
    ecx = MEM32(ebp + (-0x10)); /* 0x007935D0: mov ecx, dword ptr [ebp - 0x10] */
    goto L_004872C0; /* 0x007935D3: jmp 0x4872c0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_004872C0: RECOMP_ITAIL(0x004872C0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007935D8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007935D8u);

L_007935D8:
    ecx = MEM32(ebp + (-0x10)); /* 0x007935D8: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x007935DB: add ecx, 4 */
    _flag_k = FK_ADD;
    goto L_0040A000; /* 0x007935DE: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007935E3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007935E3u);

    goto L_007935E3;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007935E3:
    edx = MEM32(esp + 0x8); /* 0x007935E3: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007935E7: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xC)); /* 0x007935EA: mov ecx, dword ptr [edx - 0xc] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007935ED: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007935EF: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0081E974u; /* 0x007935F4: mov eax, 0x81e974 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007935F9: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00793600(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00793600u);

L_00793600:
    ecx = ebp + (-0x360); /* 0x00793600: lea ecx, [ebp - 0x360] */
    goto L_00429560; /* 0x00793606: jmp 0x429560 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00429560: RECOMP_ITAIL(0x00429560u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079360B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079360Bu);

L_0079360B:
    ecx = MEM32(ebp + (-0x3B4)); /* 0x0079360B: mov ecx, dword ptr [ebp - 0x3b4] */
    goto L_0040A000; /* 0x00793611: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00793616(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00793616u);

L_00793616:
    ecx = MEM32(ebp + (-0x3B0)); /* 0x00793616: mov ecx, dword ptr [ebp - 0x3b0] */
    goto L_0040A000; /* 0x0079361C: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00793621(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00793621u);

L_00793621:
    eax = MEM32(ebp + (-0x3B4)); /* 0x00793621: mov eax, dword ptr [ebp - 0x3b4] */
    PUSH32(esp, eax); /* 0x00793627: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x00793628: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0079362E: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0079362F: ret  */
    RECOMP_REGS_OUT();
}

void sub_00793630(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00793630u);

L_00793630:
    ecx = MEM32(ebp + (-0x3B4)); /* 0x00793630: mov ecx, dword ptr [ebp - 0x3b4] */
    goto L_0040A000; /* 0x00793636: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079363B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079363Bu);

L_0079363B:
    ecx = MEM32(ebp + (-0x3B0)); /* 0x0079363B: mov ecx, dword ptr [ebp - 0x3b0] */
    goto L_0040A000; /* 0x00793641: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00793646(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00793646u);

L_00793646:
    ecx = MEM32(ebp + (-0x3B4)); /* 0x00793646: mov ecx, dword ptr [ebp - 0x3b4] */
    goto L_0040A000; /* 0x0079364C: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00793651(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00793651u);

L_00793651:
    ecx = ebp + (-0x398); /* 0x00793651: lea ecx, [ebp - 0x398] */
    goto L_0040A000; /* 0x00793657: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079365C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079365Cu);

L_0079365C:
    ecx = ebp + (-0x380); /* 0x0079365C: lea ecx, [ebp - 0x380] */
    goto L_0040A000; /* 0x00793662: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00793667(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00793667u);

L_00793667:
    ecx = MEM32(ebp + (-0x3B4)); /* 0x00793667: mov ecx, dword ptr [ebp - 0x3b4] */
    goto L_0040A000; /* 0x0079366D: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00793672(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00793672u);

L_00793672:
    ecx = MEM32(ebp + (-0x3B4)); /* 0x00793672: mov ecx, dword ptr [ebp - 0x3b4] */
    goto L_0040A000; /* 0x00793678: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079367D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079367Du);

L_0079367D:
    ecx = MEM32(ebp + (-0x3B4)); /* 0x0079367D: mov ecx, dword ptr [ebp - 0x3b4] */
    goto L_0040A000; /* 0x00793683: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00793688(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00793688u);

L_00793688:
    ecx = MEM32(ebp + (-0x3B0)); /* 0x00793688: mov ecx, dword ptr [ebp - 0x3b0] */
    goto L_0040A000; /* 0x0079368E: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00793693(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00793693u);

L_00793693:
    ecx = ebp + (-0x398); /* 0x00793693: lea ecx, [ebp - 0x398] */
    goto L_0040A000; /* 0x00793699: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079369E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079369Eu);

L_0079369E:
    eax = MEM32(ebp + (-0x3B4)); /* 0x0079369E: mov eax, dword ptr [ebp - 0x3b4] */
    PUSH32(esp, eax); /* 0x007936A4: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007936A5: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007936AB: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007936AC: ret  */
    RECOMP_REGS_OUT();
}

void sub_007936AD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007936ADu);

L_007936AD:
    ecx = MEM32(ebp + (-0x3B0)); /* 0x007936AD: mov ecx, dword ptr [ebp - 0x3b0] */
    goto L_0040A000; /* 0x007936B3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007936B8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007936B8u);

L_007936B8:
    ecx = MEM32(ebp + (-0x3A8)); /* 0x007936B8: mov ecx, dword ptr [ebp - 0x3a8] */
    goto L_0040A000; /* 0x007936BE: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007936C3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007936C3u);

L_007936C3:
    ecx = ebp + (-0x398); /* 0x007936C3: lea ecx, [ebp - 0x398] */
    goto L_0040A000; /* 0x007936C9: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007936CE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007936CEu);

L_007936CE:
    eax = MEM32(ebp + (-0x3B4)); /* 0x007936CE: mov eax, dword ptr [ebp - 0x3b4] */
    PUSH32(esp, eax); /* 0x007936D4: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007936D5: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007936DB: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007936DC: ret  */
    RECOMP_REGS_OUT();
}

void sub_007936DD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007936DDu);

L_007936DD:
    ecx = MEM32(ebp + (-0x3B0)); /* 0x007936DD: mov ecx, dword ptr [ebp - 0x3b0] */
    goto L_0040A000; /* 0x007936E3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007936E8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007936E8u);

L_007936E8:
    ecx = MEM32(ebp + (-0x3A8)); /* 0x007936E8: mov ecx, dword ptr [ebp - 0x3a8] */
    goto L_0040A000; /* 0x007936EE: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007936F3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007936F3u);

    goto L_007936F3;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007936F3:
    edx = MEM32(esp + 0x8); /* 0x007936F3: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0x3B4); /* 0x007936F7: lea eax, [edx - 0x3b4] */
    ecx = MEM32(edx + (-0x3B8)); /* 0x007936FD: mov ecx, dword ptr [edx - 0x3b8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x00793703: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00793705: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x0079370A: add eax, 0xc */
    _flag_k = FK_ADD;
    ecx = MEM32(edx + (-0x8)); /* 0x0079370D: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x00793710: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00793712: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0081E9A8u; /* 0x00793717: mov eax, 0x81e9a8 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0079371C: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00793730(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00793730u);

L_00793730:
    ecx = MEM32(ebp + (-0x48)); /* 0x00793730: mov ecx, dword ptr [ebp - 0x48] */
    goto L_0040A000; /* 0x00793733: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00793738(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00793738u);

L_00793738:
    ecx = MEM32(ebp + (-0x4C)); /* 0x00793738: mov ecx, dword ptr [ebp - 0x4c] */
    goto L_0040A000; /* 0x0079373B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00793740(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00793740u);

L_00793740:
    ecx = MEM32(ebp + (-0x4C)); /* 0x00793740: mov ecx, dword ptr [ebp - 0x4c] */
    goto L_0040A000; /* 0x00793743: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00793748(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00793748u);

L_00793748:
    ecx = MEM32(ebp + (-0x48)); /* 0x00793748: mov ecx, dword ptr [ebp - 0x48] */
    goto L_0040A000; /* 0x0079374B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00793750(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00793750u);

L_00793750:
    ecx = MEM32(ebp + (-0x4C)); /* 0x00793750: mov ecx, dword ptr [ebp - 0x4c] */
    goto L_0040A000; /* 0x00793753: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00793758(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00793758u);

L_00793758:
    ecx = MEM32(ebp + (-0x48)); /* 0x00793758: mov ecx, dword ptr [ebp - 0x48] */
    goto L_0040A000; /* 0x0079375B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00793760(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00793760u);

L_00793760:
    ecx = ebp + (-0x44); /* 0x00793760: lea ecx, [ebp - 0x44] */
    goto L_0040A000; /* 0x00793763: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00793768(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00793768u);

L_00793768:
    ecx = ebp + (-0x2C); /* 0x00793768: lea ecx, [ebp - 0x2c] */
    goto L_0040A000; /* 0x0079376B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00793770(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00793770u);

    goto L_00793770;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_00793770:
    edx = MEM32(esp + 0x8); /* 0x00793770: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0x4C); /* 0x00793774: lea eax, [edx - 0x4c] */
    ecx = MEM32(edx + (-0x50)); /* 0x00793777: mov ecx, dword ptr [edx - 0x50] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0079377A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0079377C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x00793781: add eax, 8 */
    _flag_k = FK_ADD;
    ecx = MEM32(edx + (-0x8)); /* 0x00793784: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x00793787: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00793789: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0081EAB8u; /* 0x0079378E: mov eax, 0x81eab8 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x00793793: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007937A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007937A0u);

L_007937A0:
    ecx = MEM32(ebp + (-0x1C)); /* 0x007937A0: mov ecx, dword ptr [ebp - 0x1c] */
    goto L_0040A000; /* 0x007937A3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007937A8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007937A8u);

L_007937A8:
    ecx = MEM32(ebp + (-0x18)); /* 0x007937A8: mov ecx, dword ptr [ebp - 0x18] */
    goto L_0040A000; /* 0x007937AB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007937B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007937B0u);

    goto L_007937B0;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007937B0:
    edx = MEM32(esp + 0x8); /* 0x007937B0: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007937B4: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x20)); /* 0x007937B7: mov ecx, dword ptr [edx - 0x20] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007937BA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007937BC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0081EB20u; /* 0x007937C1: mov eax, 0x81eb20 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007937C6: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007937D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007937D0u);

L_007937D0:
    ecx = MEM32(ebp + (-0x64)); /* 0x007937D0: mov ecx, dword ptr [ebp - 0x64] */
    goto L_0040A000; /* 0x007937D3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007937D8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007937D8u);

L_007937D8:
    ecx = MEM32(ebp + (-0x6C)); /* 0x007937D8: mov ecx, dword ptr [ebp - 0x6c] */
    goto L_0040A000; /* 0x007937DB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007937E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007937E0u);

L_007937E0:
    ecx = MEM32(ebp + (-0x6C)); /* 0x007937E0: mov ecx, dword ptr [ebp - 0x6c] */
    goto L_0040A000; /* 0x007937E3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007937E8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007937E8u);

L_007937E8:
    ecx = MEM32(ebp + (-0x64)); /* 0x007937E8: mov ecx, dword ptr [ebp - 0x64] */
    goto L_0040A000; /* 0x007937EB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007937F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007937F0u);

L_007937F0:
    ecx = MEM32(ebp + (-0x6C)); /* 0x007937F0: mov ecx, dword ptr [ebp - 0x6c] */
    goto L_0040A000; /* 0x007937F3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007937F8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007937F8u);

L_007937F8:
    ecx = MEM32(ebp + (-0x64)); /* 0x007937F8: mov ecx, dword ptr [ebp - 0x64] */
    goto L_0040A000; /* 0x007937FB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00793800(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00793800u);

L_00793800:
    ecx = ebp + (-0x44); /* 0x00793800: lea ecx, [ebp - 0x44] */
    goto L_0040A000; /* 0x00793803: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00793808(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00793808u);

L_00793808:
    eax = MEM32(ebp + (-0x6C)); /* 0x00793808: mov eax, dword ptr [ebp - 0x6c] */
    PUSH32(esp, eax); /* 0x0079380B: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x0079380C: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x00793812: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00793813: ret  */
    RECOMP_REGS_OUT();
}

void sub_00793814(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00793814u);

L_00793814:
    ecx = ebp + (-0x2C); /* 0x00793814: lea ecx, [ebp - 0x2c] */
    goto L_0040A000; /* 0x00793817: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079381C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079381Cu);

L_0079381C:
    ecx = ebp + (-0x2C); /* 0x0079381C: lea ecx, [ebp - 0x2c] */
    goto L_0040A000; /* 0x0079381F: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00793824(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00793824u);

L_00793824:
    ecx = ebp + (-0x5C); /* 0x00793824: lea ecx, [ebp - 0x5c] */
    goto L_0040A000; /* 0x00793827: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079382C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079382Cu);

L_0079382C:
    ecx = ebp + (-0x2C); /* 0x0079382C: lea ecx, [ebp - 0x2c] */
    goto L_0040A000; /* 0x0079382F: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00793834(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00793834u);

L_00793834:
    eax = MEM32(ebp + (-0x64)); /* 0x00793834: mov eax, dword ptr [ebp - 0x64] */
    PUSH32(esp, eax); /* 0x00793837: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x00793838: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x0079383E: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0079383F: ret  */
    RECOMP_REGS_OUT();
}

void sub_00793840(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00793840u);

L_00793840:
    ecx = MEM32(ebp + (-0x6C)); /* 0x00793840: mov ecx, dword ptr [ebp - 0x6c] */
    goto L_0040A000; /* 0x00793843: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00793848(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00793848u);

L_00793848:
    eax = MEM32(ebp + (-0x70)); /* 0x00793848: mov eax, dword ptr [ebp - 0x70] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x0079384B: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00793860; /* 0x0079384E: je 0x793860 */
L_00793854:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x70))); _flag_b = (uint32_t)(0xFFFFFFFEu);
    MEM32(ebp + (-0x70)) = MEM32(ebp + (-0x70)) & 0xFFFFFFFEu; /* 0x00793854: and dword ptr [ebp - 0x70], 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x5C); /* 0x00793858: lea ecx, [ebp - 0x5c] */
    goto L_0040A000; /* 0x0079385B: jmp 0x40a000 */
L_00793860:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00793860: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00793861(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00793861u);

L_00793861:
    ecx = MEM32(ebp + (-0x68)); /* 0x00793861: mov ecx, dword ptr [ebp - 0x68] */
    goto L_0040A000; /* 0x00793864: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00793869(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00793869u);

    goto L_00793869;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_00793869:
    edx = MEM32(esp + 0x8); /* 0x00793869: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x0079386D: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x78)); /* 0x00793870: mov ecx, dword ptr [edx - 0x78] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x00793873: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00793875: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x8)); /* 0x0079387A: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0079387D: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0079387F: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0081EB78u; /* 0x00793884: mov eax, 0x81eb78 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x00793889: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00793890(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00793890u);

L_00793890:
    ecx = MEM32(ebp + (-0x30)); /* 0x00793890: mov ecx, dword ptr [ebp - 0x30] */
    goto L_0040A000; /* 0x00793893: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00793898(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00793898u);

L_00793898:
    ecx = MEM32(ebp + (-0x2C)); /* 0x00793898: mov ecx, dword ptr [ebp - 0x2c] */
    goto L_0040A000; /* 0x0079389B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007938A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007938A0u);

L_007938A0:
    ecx = ebp + (-0x28); /* 0x007938A0: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007938A3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007938A8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007938A8u);

    goto L_007938A8;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007938A8:
    edx = MEM32(esp + 0x8); /* 0x007938A8: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007938AC: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x34)); /* 0x007938AF: mov ecx, dword ptr [edx - 0x34] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007938B2: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007938B4: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x007938B9: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007938BC: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007938BE: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0081EC30u; /* 0x007938C3: mov eax, 0x81ec30 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007938C8: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007938D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007938D0u);

L_007938D0:
    ecx = MEM32(ebp + (-0x60)); /* 0x007938D0: mov ecx, dword ptr [ebp - 0x60] */
    goto L_0040A000; /* 0x007938D3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007938D8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007938D8u);

L_007938D8:
    ecx = MEM32(ebp + (-0x5C)); /* 0x007938D8: mov ecx, dword ptr [ebp - 0x5c] */
    goto L_0040A000; /* 0x007938DB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007938E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007938E0u);

    goto L_007938E0;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007938E0:
    edx = MEM32(esp + 0x8); /* 0x007938E0: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007938E4: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x64)); /* 0x007938E7: mov ecx, dword ptr [edx - 0x64] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007938EA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007938EC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x007938F1: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007938F4: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007938F6: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0081EC70u; /* 0x007938FB: mov eax, 0x81ec70 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x00793900: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00793910(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00793910u);

L_00793910:
    eax = MEM32(ebp + (-0x118)); /* 0x00793910: mov eax, dword ptr [ebp - 0x118] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x00793916: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00793931; /* 0x00793919: je 0x793931 */
L_0079391F:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x118))); _flag_b = (uint32_t)(0xFFFFFFFEu);
    MEM32(ebp + (-0x118)) = MEM32(ebp + (-0x118)) & 0xFFFFFFFEu; /* 0x0079391F: and dword ptr [ebp - 0x118], 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0xF0); /* 0x00793926: lea ecx, [ebp - 0xf0] */
    goto L_0040A000; /* 0x0079392C: jmp 0x40a000 */
L_00793931:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00793931: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00793932(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00793932u);

L_00793932:
    eax = MEM32(ebp + (-0x118)); /* 0x00793932: mov eax, dword ptr [ebp - 0x118] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    eax = eax & 2; /* 0x00793938: and eax, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00793950; /* 0x0079393B: je 0x793950 */
L_00793941:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x118))); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ebp + (-0x118)) = MEM32(ebp + (-0x118)) & 0xFFFFFFFDu; /* 0x00793941: and dword ptr [ebp - 0x118], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x2C); /* 0x00793948: lea ecx, [ebp - 0x2c] */
    goto L_0040A000; /* 0x0079394B: jmp 0x40a000 */
L_00793950:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00793950: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00793951(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00793951u);

L_00793951:
    eax = MEM32(ebp + (-0x118)); /* 0x00793951: mov eax, dword ptr [ebp - 0x118] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    eax = eax & 4; /* 0x00793957: and eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0079396F; /* 0x0079395A: je 0x79396f */
L_00793960:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x118))); _flag_b = (uint32_t)(0xFFFFFFFBu);
    MEM32(ebp + (-0x118)) = MEM32(ebp + (-0x118)) & 0xFFFFFFFBu; /* 0x00793960: and dword ptr [ebp - 0x118], 0xfffffffb */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x44); /* 0x00793967: lea ecx, [ebp - 0x44] */
    goto L_0040A000; /* 0x0079396A: jmp 0x40a000 */
L_0079396F:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0079396F: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00793970(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00793970u);

L_00793970:
    eax = MEM32(ebp + (-0x118)); /* 0x00793970: mov eax, dword ptr [ebp - 0x118] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    eax = eax & 8; /* 0x00793976: and eax, 8 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_0079398E; /* 0x00793979: je 0x79398e */
L_0079397F:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x118))); _flag_b = (uint32_t)(0xFFFFFFF7u);
    MEM32(ebp + (-0x118)) = MEM32(ebp + (-0x118)) & 0xFFFFFFF7u; /* 0x0079397F: and dword ptr [ebp - 0x118], 0xfffffff7 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x2C); /* 0x00793986: lea ecx, [ebp - 0x2c] */
    goto L_0040A000; /* 0x00793989: jmp 0x40a000 */
L_0079398E:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x0079398E: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0079398F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0079398Fu);

L_0079398F:
    eax = MEM32(ebp + (-0x118)); /* 0x0079398F: mov eax, dword ptr [ebp - 0x118] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    eax = eax & 0x10u; /* 0x00793995: and eax, 0x10 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007939B0; /* 0x00793998: je 0x7939b0 */
L_0079399E:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x118))); _flag_b = (uint32_t)(0xFFFFFFEFu);
    MEM32(ebp + (-0x118)) = MEM32(ebp + (-0x118)) & 0xFFFFFFEFu; /* 0x0079399E: and dword ptr [ebp - 0x118], 0xffffffef */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0xF0); /* 0x007939A5: lea ecx, [ebp - 0xf0] */
    goto L_0040A000; /* 0x007939AB: jmp 0x40a000 */
L_007939B0:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007939B0: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007939B1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007939B1u);

L_007939B1:
    eax = MEM32(ebp + (-0x118)); /* 0x007939B1: mov eax, dword ptr [ebp - 0x118] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    eax = eax & 0x20u; /* 0x007939B7: and eax, 0x20 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007939D2; /* 0x007939BA: je 0x7939d2 */
L_007939C0:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x118))); _flag_b = (uint32_t)(0xFFFFFFDFu);
    MEM32(ebp + (-0x118)) = MEM32(ebp + (-0x118)) & 0xFFFFFFDFu; /* 0x007939C0: and dword ptr [ebp - 0x118], 0xffffffdf */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0xF0); /* 0x007939C7: lea ecx, [ebp - 0xf0] */
    goto L_0040A000; /* 0x007939CD: jmp 0x40a000 */
L_007939D2:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007939D2: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007939D3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007939D3u);

L_007939D3:
    eax = MEM32(ebp + (-0x118)); /* 0x007939D3: mov eax, dword ptr [ebp - 0x118] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x40u);
    eax = eax & 0x40u; /* 0x007939D9: and eax, 0x40 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007939F1; /* 0x007939DC: je 0x7939f1 */
L_007939E2:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x118))); _flag_b = (uint32_t)(0xFFFFFFBFu);
    MEM32(ebp + (-0x118)) = MEM32(ebp + (-0x118)) & 0xFFFFFFBFu; /* 0x007939E2: and dword ptr [ebp - 0x118], 0xffffffbf */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x44); /* 0x007939E9: lea ecx, [ebp - 0x44] */
    goto L_0040A000; /* 0x007939EC: jmp 0x40a000 */
L_007939F1:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007939F1: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007939F2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007939F2u);

    goto L_007939F2;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007939F2:
    edx = MEM32(esp + 0x8); /* 0x007939F2: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0x11C); /* 0x007939F6: lea eax, [edx - 0x11c] */
    ecx = MEM32(edx + (-0x120)); /* 0x007939FC: mov ecx, dword ptr [edx - 0x120] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x00793A02: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00793A04: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x00793A09: add eax, 8 */
    _flag_k = FK_ADD;
    ecx = MEM32(edx + (-0x8)); /* 0x00793A0C: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x00793A0F: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00793A11: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0081ED08u; /* 0x00793A16: mov eax, 0x81ed08 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x00793A1B: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00793A20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00793A20u);

L_00793A20:
    eax = MEM32(ebp + (-0x10)); /* 0x00793A20: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x00793A23: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00793A38; /* 0x00793A26: je 0x793a38 */
L_00793A2C:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0xFFFFFFFEu);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & 0xFFFFFFFEu; /* 0x00793A2C: and dword ptr [ebp - 0x10], 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + 0x8); /* 0x00793A30: mov ecx, dword ptr [ebp + 8] */
    goto L_004F38E0; /* 0x00793A33: jmp 0x4f38e0 */
L_00793A38:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00793A38: ret  */
    L_004F38E0: RECOMP_ITAIL(0x004F38E0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00793A39(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00793A39u);

    goto L_00793A39;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_00793A39:
    edx = MEM32(esp + 0x8); /* 0x00793A39: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x00793A3D: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x8)); /* 0x00793A40: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x00793A43: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00793A45: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0081ED64u; /* 0x00793A4A: mov eax, 0x81ed64 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x00793A4F: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00793A60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00793A60u);

L_00793A60:
    ecx = MEM32(ebp + (-0x48)); /* 0x00793A60: mov ecx, dword ptr [ebp - 0x48] */
    goto L_0040A000; /* 0x00793A63: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00793A68(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00793A68u);

L_00793A68:
    ecx = MEM32(ebp + (-0x44)); /* 0x00793A68: mov ecx, dword ptr [ebp - 0x44] */
    goto L_0040A000; /* 0x00793A6B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00793A70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00793A70u);

L_00793A70:
    ecx = ebp + (-0x40); /* 0x00793A70: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x00793A73: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00793A78(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00793A78u);

L_00793A78:
    ecx = ebp + (-0x28); /* 0x00793A78: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x00793A7B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00793A80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00793A80u);

    goto L_00793A80;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_00793A80:
    edx = MEM32(esp + 0x8); /* 0x00793A80: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x00793A84: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x4C)); /* 0x00793A87: mov ecx, dword ptr [edx - 0x4c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x00793A8A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00793A8C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x00793A91: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x00793A94: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00793A96: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0081ED90u; /* 0x00793A9B: mov eax, 0x81ed90 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x00793AA0: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00793AB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00793AB0u);

L_00793AB0:
    ecx = MEM32(ebp + (-0x18)); /* 0x00793AB0: mov ecx, dword ptr [ebp - 0x18] */
    goto L_0040A000; /* 0x00793AB3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00793AB8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00793AB8u);

L_00793AB8:
    ecx = MEM32(ebp + (-0x1C)); /* 0x00793AB8: mov ecx, dword ptr [ebp - 0x1c] */
    goto L_0040A000; /* 0x00793ABB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00793AC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00793AC0u);

L_00793AC0:
    ecx = MEM32(ebp + (-0x18)); /* 0x00793AC0: mov ecx, dword ptr [ebp - 0x18] */
    goto L_0040A000; /* 0x00793AC3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00793AC8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00793AC8u);

L_00793AC8:
    ecx = MEM32(ebp + (-0x14)); /* 0x00793AC8: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040A000; /* 0x00793ACB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00793AD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00793AD0u);

L_00793AD0:
    ecx = MEM32(ebp + (-0x14)); /* 0x00793AD0: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040A000; /* 0x00793AD3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00793AD8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00793AD8u);

    goto L_00793AD8;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_00793AD8:
    edx = MEM32(esp + 0x8); /* 0x00793AD8: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0x1C); /* 0x00793ADC: lea eax, [edx - 0x1c] */
    ecx = MEM32(edx + (-0x20)); /* 0x00793ADF: mov ecx, dword ptr [edx - 0x20] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x00793AE2: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00793AE4: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0081EDD4u; /* 0x00793AE9: mov eax, 0x81edd4 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x00793AEE: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00793B00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00793B00u);

L_00793B00:
    ecx = ebp + (-0x41C); /* 0x00793B00: lea ecx, [ebp - 0x41c] */
    goto L_0040A000; /* 0x00793B06: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00793B0B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00793B0Bu);

L_00793B0B:
    ecx = ebp + (-0x434); /* 0x00793B0B: lea ecx, [ebp - 0x434] */
    goto L_0040A000; /* 0x00793B11: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00793B16(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00793B16u);

L_00793B16:
    ecx = ebp + (-0x3D4); /* 0x00793B16: lea ecx, [ebp - 0x3d4] */
    goto L_0040A000; /* 0x00793B1C: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00793B21(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00793B21u);

L_00793B21:
    ecx = ebp + (-0x404); /* 0x00793B21: lea ecx, [ebp - 0x404] */
    goto L_0040A000; /* 0x00793B27: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00793B2C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00793B2Cu);

L_00793B2C:
    ecx = ebp + (-0x5C); /* 0x00793B2C: lea ecx, [ebp - 0x5c] */
    goto L_0040A000; /* 0x00793B2F: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}
