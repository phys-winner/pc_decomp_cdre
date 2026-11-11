#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_007B2365(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2365u);

L_007B2365:
    ecx = MEM32(ebp + (-0x38)); /* 0x007B2365: mov ecx, dword ptr [ebp - 0x38] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xF0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xF0u; /* 0x007B2368: add ecx, 0xf0 */
    _flag_k = FK_ADD;
    goto L_00419790; /* 0x007B236E: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2373(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2373u);

L_007B2373:
    ecx = MEM32(ebp + (-0x2C)); /* 0x007B2373: mov ecx, dword ptr [ebp - 0x2c] */
    goto L_0040A000; /* 0x007B2376: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B237B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B237Bu);

L_007B237B:
    ecx = MEM32(ebp + (-0x30)); /* 0x007B237B: mov ecx, dword ptr [ebp - 0x30] */
    goto L_0040A000; /* 0x007B237E: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2383(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2383u);

L_007B2383:
    ecx = ebp + (-0x28); /* 0x007B2383: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007B2386: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B238B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B238Bu);

L_007B238B:
    ecx = ebp + (-0x28); /* 0x007B238B: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007B238E: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2393(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2393u);

L_007B2393:
    eax = MEM32(ebp + (-0x2C)); /* 0x007B2393: mov eax, dword ptr [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x007B2396: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007B2397: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007B239D: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007B239E: ret  */
    RECOMP_REGS_OUT();
}

void sub_007B239F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B239Fu);

    goto L_007B239F;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B239F:
    edx = MEM32(esp + 0x8); /* 0x007B239F: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B23A3: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x3C)); /* 0x007B23A6: mov ecx, dword ptr [edx - 0x3c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B23A9: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B23AB: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x007B23B0: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B23B3: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B23B5: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083C130u; /* 0x007B23BA: mov eax, 0x83c130 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B23BF: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B23D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B23D0u);

L_007B23D0:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B23D0: mov ecx, dword ptr [ebp - 0x10] */
    goto L_005F31B0; /* 0x007B23D3: jmp 0x5f31b0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005F31B0: RECOMP_ITAIL(0x005F31B0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B23D8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B23D8u);

    goto L_007B23D8;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B23D8:
    edx = MEM32(esp + 0x8); /* 0x007B23D8: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B23DC: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x8)); /* 0x007B23DF: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B23E2: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B23E4: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083C1F0u; /* 0x007B23E9: mov eax, 0x83c1f0 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B23EE: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B2400(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2400u);

L_007B2400:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B2400: mov ecx, dword ptr [ebp - 0x10] */
    goto L_005F06D0; /* 0x007B2403: jmp 0x5f06d0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005F06D0: RECOMP_ITAIL(0x005F06D0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2408(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2408u);

    goto L_007B2408;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B2408:
    edx = MEM32(esp + 0x8); /* 0x007B2408: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B240C: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x8)); /* 0x007B240F: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B2412: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B2414: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083C21Cu; /* 0x007B2419: mov eax, 0x83c21c */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B241E: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B2430(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2430u);

L_007B2430:
    ecx = MEM32(ebp + (-0x18)); /* 0x007B2430: mov ecx, dword ptr [ebp - 0x18] */
    goto L_0040A000; /* 0x007B2433: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2438(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2438u);

L_007B2438:
    ecx = MEM32(ebp + (-0x18)); /* 0x007B2438: mov ecx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x20u; /* 0x007B243B: add ecx, 0x20 */
    _flag_k = FK_ADD;
    goto L_0048A1D0; /* 0x007B243E: jmp 0x48a1d0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0048A1D0: RECOMP_ITAIL(0x0048A1D0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2443(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2443u);

L_007B2443:
    ecx = MEM32(ebp + (-0x18)); /* 0x007B2443: mov ecx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x34u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x34u; /* 0x007B2446: add ecx, 0x34 */
    _flag_k = FK_ADD;
    goto L_005E4020; /* 0x007B2449: jmp 0x5e4020 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005E4020: RECOMP_ITAIL(0x005E4020u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B244E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B244Eu);

L_007B244E:
    ecx = MEM32(ebp + (-0x18)); /* 0x007B244E: mov ecx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x48u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x48u; /* 0x007B2451: add ecx, 0x48 */
    _flag_k = FK_ADD;
    goto L_005F0D00; /* 0x007B2454: jmp 0x5f0d00 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005F0D00: RECOMP_ITAIL(0x005F0D00u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2459(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2459u);

L_007B2459:
    ecx = MEM32(ebp + (-0x18)); /* 0x007B2459: mov ecx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x5Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x5Cu; /* 0x007B245C: add ecx, 0x5c */
    _flag_k = FK_ADD;
    goto L_0048A1D0; /* 0x007B245F: jmp 0x48a1d0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0048A1D0: RECOMP_ITAIL(0x0048A1D0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2464(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2464u);

L_007B2464:
    ecx = MEM32(ebp + (-0x18)); /* 0x007B2464: mov ecx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x70u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x70u; /* 0x007B2467: add ecx, 0x70 */
    _flag_k = FK_ADD;
    goto L_005F0D60; /* 0x007B246A: jmp 0x5f0d60 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005F0D60: RECOMP_ITAIL(0x005F0D60u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B246F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B246Fu);

L_007B246F:
    ecx = MEM32(ebp + (-0x18)); /* 0x007B246F: mov ecx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x84u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x84u; /* 0x007B2472: add ecx, 0x84 */
    _flag_k = FK_ADD;
    goto L_005E4020; /* 0x007B2478: jmp 0x5e4020 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005E4020: RECOMP_ITAIL(0x005E4020u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B247D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B247Du);

L_007B247D:
    ecx = MEM32(ebp + (-0x18)); /* 0x007B247D: mov ecx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x98u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x98u; /* 0x007B2480: add ecx, 0x98 */
    _flag_k = FK_ADD;
    goto L_005E4080; /* 0x007B2486: jmp 0x5e4080 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005E4080: RECOMP_ITAIL(0x005E4080u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B248B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B248Bu);

L_007B248B:
    ecx = MEM32(ebp + (-0x18)); /* 0x007B248B: mov ecx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xB8u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xB8u; /* 0x007B248E: add ecx, 0xb8 */
    _flag_k = FK_ADD;
    goto L_0040A000; /* 0x007B2494: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2499(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2499u);

L_007B2499:
    ecx = MEM32(ebp + (-0x18)); /* 0x007B2499: mov ecx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xD0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xD0u; /* 0x007B249C: add ecx, 0xd0 */
    _flag_k = FK_ADD;
    goto L_005E3C10; /* 0x007B24A2: jmp 0x5e3c10 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005E3C10: RECOMP_ITAIL(0x005E3C10u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B24A7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B24A7u);

L_007B24A7:
    ecx = MEM32(ebp + (-0x18)); /* 0x007B24A7: mov ecx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xE4u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xE4u; /* 0x007B24AA: add ecx, 0xe4 */
    _flag_k = FK_ADD;
    goto L_00419790; /* 0x007B24B0: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B24B5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B24B5u);

L_007B24B5:
    ecx = MEM32(ebp + (-0x18)); /* 0x007B24B5: mov ecx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xF0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xF0u; /* 0x007B24B8: add ecx, 0xf0 */
    _flag_k = FK_ADD;
    goto L_00419790; /* 0x007B24BE: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B24C3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B24C3u);

L_007B24C3:
    ecx = ebp + (-0x24); /* 0x007B24C3: lea ecx, [ebp - 0x24] */
    goto L_00419790; /* 0x007B24C6: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B24CB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B24CBu);

L_007B24CB:
    ecx = ebp + (-0x38); /* 0x007B24CB: lea ecx, [ebp - 0x38] */
    goto L_005F3D00; /* 0x007B24CE: jmp 0x5f3d00 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005F3D00: RECOMP_ITAIL(0x005F3D00u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B24D3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B24D3u);

L_007B24D3:
    ecx = ebp + (-0x24); /* 0x007B24D3: lea ecx, [ebp - 0x24] */
    goto L_00419790; /* 0x007B24D6: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B24DB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B24DBu);

L_007B24DB:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B24DB: mov ecx, dword ptr [ebp - 0x14] */
    goto L_005EC0F0; /* 0x007B24DE: jmp 0x5ec0f0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005EC0F0: RECOMP_ITAIL(0x005EC0F0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B24E3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B24E3u);

L_007B24E3:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B24E3: mov ecx, dword ptr [ebp - 0x14] */
    goto L_005EC870; /* 0x007B24E6: jmp 0x5ec870 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005EC870: RECOMP_ITAIL(0x005EC870u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B24EB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B24EBu);

L_007B24EB:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B24EB: mov ecx, dword ptr [ebp - 0x14] */
    goto L_005EC940; /* 0x007B24EE: jmp 0x5ec940 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005EC940: RECOMP_ITAIL(0x005EC940u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B24F3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B24F3u);

L_007B24F3:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B24F3: mov ecx, dword ptr [ebp - 0x14] */
    { _itail_tgt = (uint32_t)(MEM32(0x7CC278)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B24FC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B24FCu);

L_007B24FC:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B24FC: mov ecx, dword ptr [ebp - 0x14] */
    goto L_005EB980; /* 0x007B24FF: jmp 0x5eb980 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005EB980: RECOMP_ITAIL(0x005EB980u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2504(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2504u);

L_007B2504:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B2504: mov ecx, dword ptr [ebp - 0x14] */
    goto L_005EB960; /* 0x007B2507: jmp 0x5eb960 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005EB960: RECOMP_ITAIL(0x005EB960u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B250C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B250Cu);

L_007B250C:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B250C: mov ecx, dword ptr [ebp - 0x14] */
    goto L_005F06D0; /* 0x007B250F: jmp 0x5f06d0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005F06D0: RECOMP_ITAIL(0x005F06D0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2514(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2514u);

L_007B2514:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B2514: mov ecx, dword ptr [ebp - 0x14] */
    goto L_00496470; /* 0x007B2517: jmp 0x496470 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00496470: RECOMP_ITAIL(0x00496470u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B251C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B251Cu);

L_007B251C:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B251C: mov ecx, dword ptr [ebp - 0x14] */
    goto L_005F31B0; /* 0x007B251F: jmp 0x5f31b0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005F31B0: RECOMP_ITAIL(0x005F31B0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2524(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2524u);

L_007B2524:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B2524: mov ecx, dword ptr [ebp - 0x14] */
    goto L_005EB960; /* 0x007B2527: jmp 0x5eb960 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005EB960: RECOMP_ITAIL(0x005EB960u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B252C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B252Cu);

L_007B252C:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B252C: mov ecx, dword ptr [ebp - 0x14] */
    goto L_00496470; /* 0x007B252F: jmp 0x496470 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00496470: RECOMP_ITAIL(0x00496470u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2534(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2534u);

    goto L_007B2534;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B2534:
    edx = MEM32(esp + 0x8); /* 0x007B2534: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B2538: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x3C)); /* 0x007B253B: mov ecx, dword ptr [edx - 0x3c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B253E: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B2540: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083C248u; /* 0x007B2545: mov eax, 0x83c248 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B254A: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B2550(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2550u);

L_007B2550:
    ecx = ebp + (-0x1C); /* 0x007B2550: lea ecx, [ebp - 0x1c] */
    goto L_005EB8A0; /* 0x007B2553: jmp 0x5eb8a0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005EB8A0: RECOMP_ITAIL(0x005EB8A0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2558(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2558u);

    goto L_007B2558;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B2558:
    edx = MEM32(esp + 0x8); /* 0x007B2558: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0x1C); /* 0x007B255C: lea eax, [edx - 0x1c] */
    ecx = MEM32(edx + (-0x20)); /* 0x007B255F: mov ecx, dword ptr [edx - 0x20] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B2562: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B2564: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083C340u; /* 0x007B2569: mov eax, 0x83c340 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B256E: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B2580(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2580u);

L_007B2580:
    ecx = ebp + (-0x1C); /* 0x007B2580: lea ecx, [ebp - 0x1c] */
    goto L_00419790; /* 0x007B2583: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2588(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2588u);

L_007B2588:
    ecx = ebp + (-0x30); /* 0x007B2588: lea ecx, [ebp - 0x30] */
    goto L_005F3D00; /* 0x007B258B: jmp 0x5f3d00 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005F3D00: RECOMP_ITAIL(0x005F3D00u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2590(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2590u);

L_007B2590:
    ecx = ebp + (-0x1C); /* 0x007B2590: lea ecx, [ebp - 0x1c] */
    goto L_00419790; /* 0x007B2593: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2598(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2598u);

L_007B2598:
    ecx = ebp + (-0x30); /* 0x007B2598: lea ecx, [ebp - 0x30] */
    goto L_005F3D00; /* 0x007B259B: jmp 0x5f3d00 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005F3D00: RECOMP_ITAIL(0x005F3D00u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B25A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B25A0u);

L_007B25A0:
    ecx = ebp + (-0x1C); /* 0x007B25A0: lea ecx, [ebp - 0x1c] */
    goto L_00419790; /* 0x007B25A3: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B25A8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B25A8u);

    goto L_007B25A8;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B25A8:
    edx = MEM32(esp + 0x8); /* 0x007B25A8: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0x34); /* 0x007B25AC: lea eax, [edx - 0x34] */
    ecx = MEM32(edx + (-0x38)); /* 0x007B25AF: mov ecx, dword ptr [edx - 0x38] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B25B2: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B25B4: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083C36Cu; /* 0x007B25B9: mov eax, 0x83c36c */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B25BE: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B25D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B25D0u);

L_007B25D0:
    ecx = ebp + (-0x30); /* 0x007B25D0: lea ecx, [ebp - 0x30] */
    goto L_005F3D00; /* 0x007B25D3: jmp 0x5f3d00 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005F3D00: RECOMP_ITAIL(0x005F3D00u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B25D8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B25D8u);

L_007B25D8:
    ecx = ebp + (-0x1C); /* 0x007B25D8: lea ecx, [ebp - 0x1c] */
    goto L_00419790; /* 0x007B25DB: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B25E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B25E0u);

L_007B25E0:
    ecx = ebp + (-0x50); /* 0x007B25E0: lea ecx, [ebp - 0x50] */
    goto L_005F3D00; /* 0x007B25E3: jmp 0x5f3d00 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005F3D00: RECOMP_ITAIL(0x005F3D00u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B25E8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B25E8u);

L_007B25E8:
    ecx = ebp + (-0x3C); /* 0x007B25E8: lea ecx, [ebp - 0x3c] */
    goto L_00419790; /* 0x007B25EB: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B25F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B25F0u);

    goto L_007B25F0;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B25F0:
    edx = MEM32(esp + 0x8); /* 0x007B25F0: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0x64); /* 0x007B25F4: lea eax, [edx - 0x64] */
    ecx = MEM32(edx + (-0x68)); /* 0x007B25F7: mov ecx, dword ptr [edx - 0x68] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B25FA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B25FC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083C3B8u; /* 0x007B2601: mov eax, 0x83c3b8 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B2606: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B2610(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2610u);

L_007B2610:
    ecx = ebp + (-0x444); /* 0x007B2610: lea ecx, [ebp - 0x444] */
    goto L_0044E450; /* 0x007B2616: jmp 0x44e450 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0044E450: RECOMP_ITAIL(0x0044E450u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B261B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B261Bu);

L_007B261B:
    ecx = ebp + (-0x440); /* 0x007B261B: lea ecx, [ebp - 0x440] */
    goto L_005F3D00; /* 0x007B2621: jmp 0x5f3d00 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005F3D00: RECOMP_ITAIL(0x005F3D00u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2626(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2626u);

L_007B2626:
    ecx = ebp + (-0x440); /* 0x007B2626: lea ecx, [ebp - 0x440] */
    goto L_005F3D00; /* 0x007B262C: jmp 0x5f3d00 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005F3D00: RECOMP_ITAIL(0x005F3D00u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2631(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2631u);

L_007B2631:
    ecx = ebp + (-0x464); /* 0x007B2631: lea ecx, [ebp - 0x464] */
    goto L_00419790; /* 0x007B2637: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B263C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B263Cu);

L_007B263C:
    ecx = ebp + (-0x478); /* 0x007B263C: lea ecx, [ebp - 0x478] */
    goto L_005F3D00; /* 0x007B2642: jmp 0x5f3d00 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005F3D00: RECOMP_ITAIL(0x005F3D00u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2647(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2647u);

L_007B2647:
    ecx = ebp + (-0x498); /* 0x007B2647: lea ecx, [ebp - 0x498] */
    goto L_005F3D00; /* 0x007B264D: jmp 0x5f3d00 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005F3D00: RECOMP_ITAIL(0x005F3D00u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2652(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2652u);

L_007B2652:
    ecx = ebp + (-0x464); /* 0x007B2652: lea ecx, [ebp - 0x464] */
    goto L_00419790; /* 0x007B2658: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B265D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B265Du);

L_007B265D:
    ecx = ebp + (-0x42C); /* 0x007B265D: lea ecx, [ebp - 0x42c] */
    goto L_00419790; /* 0x007B2663: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2668(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2668u);

L_007B2668:
    ecx = MEM32(ebp + (-0x458)); /* 0x007B2668: mov ecx, dword ptr [ebp - 0x458] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x14u; /* 0x007B266E: add ecx, 0x14 */
    _flag_k = FK_ADD;
    goto L_00419790; /* 0x007B2671: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2676(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2676u);

L_007B2676:
    eax = MEM32(ebp + (-0x44C)); /* 0x007B2676: mov eax, dword ptr [ebp - 0x44c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x007B267C: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007B2697; /* 0x007B267F: je 0x7b2697 */
L_007B2685:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x44C))); _flag_b = (uint32_t)(0xFFFFFFFEu);
    MEM32(ebp + (-0x44C)) = MEM32(ebp + (-0x44C)) & 0xFFFFFFFEu; /* 0x007B2685: and dword ptr [ebp - 0x44c], 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0x458)); /* 0x007B268C: mov ecx, dword ptr [ebp - 0x458] */
    goto L_005F3D00; /* 0x007B2692: jmp 0x5f3d00 */
L_007B2697:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007B2697: ret  */
    L_005F3D00: RECOMP_ITAIL(0x005F3D00u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2698(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2698u);

L_007B2698:
    ecx = ebp + (-0x42C); /* 0x007B2698: lea ecx, [ebp - 0x42c] */
    goto L_00419790; /* 0x007B269E: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B26A3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B26A3u);

L_007B26A3:
    ecx = ebp + (-0x440); /* 0x007B26A3: lea ecx, [ebp - 0x440] */
    goto L_005F3D00; /* 0x007B26A9: jmp 0x5f3d00 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005F3D00: RECOMP_ITAIL(0x005F3D00u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B26AE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B26AEu);

L_007B26AE:
    ecx = MEM32(ebp + (-0x444)); /* 0x007B26AE: mov ecx, dword ptr [ebp - 0x444] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x14u; /* 0x007B26B4: add ecx, 0x14 */
    _flag_k = FK_ADD;
    goto L_00419790; /* 0x007B26B7: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B26BC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B26BCu);

L_007B26BC:
    ecx = MEM32(ebp + (-0x458)); /* 0x007B26BC: mov ecx, dword ptr [ebp - 0x458] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x14u; /* 0x007B26C2: add ecx, 0x14 */
    _flag_k = FK_ADD;
    goto L_00419790; /* 0x007B26C5: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B26CA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B26CAu);

L_007B26CA:
    ecx = ebp + (-0x42C); /* 0x007B26CA: lea ecx, [ebp - 0x42c] */
    goto L_00419790; /* 0x007B26D0: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B26D5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B26D5u);

    goto L_007B26D5;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B26D5:
    edx = MEM32(esp + 0x8); /* 0x007B26D5: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B26D9: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x4A8)); /* 0x007B26DC: mov ecx, dword ptr [edx - 0x4a8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B26E2: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B26E4: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x007B26E9: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B26EC: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B26EE: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083C400u; /* 0x007B26F3: mov eax, 0x83c400 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B26F8: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B2700(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2700u);

L_007B2700:
    ecx = ebp + (-0x28); /* 0x007B2700: lea ecx, [ebp - 0x28] */
    goto L_00419790; /* 0x007B2703: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2708(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2708u);

L_007B2708:
    ecx = ebp + (-0x3C); /* 0x007B2708: lea ecx, [ebp - 0x3c] */
    goto L_005F3D00; /* 0x007B270B: jmp 0x5f3d00 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005F3D00: RECOMP_ITAIL(0x005F3D00u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2710(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2710u);

L_007B2710:
    ecx = ebp + (-0x28); /* 0x007B2710: lea ecx, [ebp - 0x28] */
    goto L_00419790; /* 0x007B2713: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2718(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2718u);

    goto L_007B2718;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B2718:
    edx = MEM32(esp + 0x8); /* 0x007B2718: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B271C: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x40)); /* 0x007B271F: mov ecx, dword ptr [edx - 0x40] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B2722: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B2724: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083C4A0u; /* 0x007B2729: mov eax, 0x83c4a0 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B272E: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B2740(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2740u);

    goto L_007B2740;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B2740:
    edx = MEM32(esp + 0x8); /* 0x007B2740: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B2744: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x007B2747: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B274A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B274C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083C4DCu; /* 0x007B2751: mov eax, 0x83c4dc */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B2756: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B2760(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2760u);

    goto L_007B2760;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B2760:
    edx = MEM32(esp + 0x8); /* 0x007B2760: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B2764: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x007B2767: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B276A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B276C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083C534u; /* 0x007B2771: mov eax, 0x83c534 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B2776: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B2780(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2780u);

L_007B2780:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B2780: mov ecx, dword ptr [ebp - 0x10] */
    goto L_005EB960; /* 0x007B2783: jmp 0x5eb960 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005EB960: RECOMP_ITAIL(0x005EB960u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2788(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2788u);

    goto L_007B2788;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B2788:
    edx = MEM32(esp + 0x8); /* 0x007B2788: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B278C: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x10)); /* 0x007B278F: mov ecx, dword ptr [edx - 0x10] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B2792: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B2794: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083C58Cu; /* 0x007B2799: mov eax, 0x83c58c */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B279E: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B27B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B27B0u);

L_007B27B0:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B27B0: mov ecx, dword ptr [ebp - 0x10] */
    goto L_005F31B0; /* 0x007B27B3: jmp 0x5f31b0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005F31B0: RECOMP_ITAIL(0x005F31B0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B27B8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B27B8u);

    goto L_007B27B8;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B27B8:
    edx = MEM32(esp + 0x8); /* 0x007B27B8: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B27BC: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x10)); /* 0x007B27BF: mov ecx, dword ptr [edx - 0x10] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B27C2: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B27C4: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083C5B8u; /* 0x007B27C9: mov eax, 0x83c5b8 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B27CE: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B27E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B27E0u);

L_007B27E0:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B27E0: mov ecx, dword ptr [ebp - 0x10] */
    goto L_005F06D0; /* 0x007B27E3: jmp 0x5f06d0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005F06D0: RECOMP_ITAIL(0x005F06D0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B27E8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B27E8u);

    goto L_007B27E8;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B27E8:
    edx = MEM32(esp + 0x8); /* 0x007B27E8: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B27EC: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x10)); /* 0x007B27EF: mov ecx, dword ptr [edx - 0x10] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B27F2: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B27F4: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083C5E4u; /* 0x007B27F9: mov eax, 0x83c5e4 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B27FE: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B2810(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2810u);

L_007B2810:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B2810: mov ecx, dword ptr [ebp - 0x10] */
    goto L_005EB980; /* 0x007B2813: jmp 0x5eb980 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005EB980: RECOMP_ITAIL(0x005EB980u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2818(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2818u);

    goto L_007B2818;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B2818:
    edx = MEM32(esp + 0x8); /* 0x007B2818: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B281C: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x10)); /* 0x007B281F: mov ecx, dword ptr [edx - 0x10] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B2822: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B2824: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083C610u; /* 0x007B2829: mov eax, 0x83c610 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B282E: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B2840(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2840u);

L_007B2840:
    goto L_00409980; /* 0x007B2840: jmp 0x409980 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00409980: RECOMP_ITAIL(0x00409980u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2845(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2845u);

    goto L_007B2845;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B2845:
    edx = MEM32(esp + 0x8); /* 0x007B2845: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B2849: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x007B284C: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B284F: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B2851: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083C63Cu; /* 0x007B2856: mov eax, 0x83c63c */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B285B: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B2860(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2860u);

L_007B2860:
    ecx = MEM32(ebp + (-0x1C)); /* 0x007B2860: mov ecx, dword ptr [ebp - 0x1c] */
    goto L_0040A000; /* 0x007B2863: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2868(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2868u);

L_007B2868:
    ecx = MEM32(ebp + (-0x20)); /* 0x007B2868: mov ecx, dword ptr [ebp - 0x20] */
    goto L_0040A000; /* 0x007B286B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2870(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2870u);

    goto L_007B2870;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B2870:
    edx = MEM32(esp + 0x8); /* 0x007B2870: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B2874: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x28)); /* 0x007B2877: mov ecx, dword ptr [edx - 0x28] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B287A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B287C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083C69Cu; /* 0x007B2881: mov eax, 0x83c69c */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B2886: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B2890(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2890u);

L_007B2890:
    ecx = MEM32(ebp + (-0x1C)); /* 0x007B2890: mov ecx, dword ptr [ebp - 0x1c] */
    goto L_0040A000; /* 0x007B2893: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2898(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2898u);

L_007B2898:
    ecx = MEM32(ebp + (-0x20)); /* 0x007B2898: mov ecx, dword ptr [ebp - 0x20] */
    goto L_0040A000; /* 0x007B289B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B28A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B28A0u);

    goto L_007B28A0;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B28A0:
    edx = MEM32(esp + 0x8); /* 0x007B28A0: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B28A4: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x20)); /* 0x007B28A7: mov ecx, dword ptr [edx - 0x20] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B28AA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B28AC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083C6D0u; /* 0x007B28B1: mov eax, 0x83c6d0 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B28B6: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B28C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B28C0u);

L_007B28C0:
    ecx = MEM32(ebp + (-0x18)); /* 0x007B28C0: mov ecx, dword ptr [ebp - 0x18] */
    goto L_0040A000; /* 0x007B28C3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B28C8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B28C8u);

L_007B28C8:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B28C8: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040A000; /* 0x007B28CB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B28D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B28D0u);

L_007B28D0:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B28D0: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040A000; /* 0x007B28D3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B28D8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B28D8u);

L_007B28D8:
    ecx = MEM32(ebp + (-0x18)); /* 0x007B28D8: mov ecx, dword ptr [ebp - 0x18] */
    goto L_0040A000; /* 0x007B28DB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B28E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B28E0u);

L_007B28E0:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B28E0: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040A000; /* 0x007B28E3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B28E8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B28E8u);

L_007B28E8:
    ecx = MEM32(ebp + (-0x18)); /* 0x007B28E8: mov ecx, dword ptr [ebp - 0x18] */
    goto L_0040A000; /* 0x007B28EB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B28F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B28F0u);

L_007B28F0:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B28F0: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040A000; /* 0x007B28F3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B28F8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B28F8u);

L_007B28F8:
    ecx = MEM32(ebp + (-0x18)); /* 0x007B28F8: mov ecx, dword ptr [ebp - 0x18] */
    goto L_0040A000; /* 0x007B28FB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2900(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2900u);

L_007B2900:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B2900: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040A000; /* 0x007B2903: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2908(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2908u);

L_007B2908:
    ecx = MEM32(ebp + (-0x18)); /* 0x007B2908: mov ecx, dword ptr [ebp - 0x18] */
    goto L_0040A000; /* 0x007B290B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2910(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2910u);

L_007B2910:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B2910: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040A000; /* 0x007B2913: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}
