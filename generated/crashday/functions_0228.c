#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_007B2918(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2918u);

L_007B2918:
    ecx = MEM32(ebp + (-0x18)); /* 0x007B2918: mov ecx, dword ptr [ebp - 0x18] */
    goto L_0040A000; /* 0x007B291B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2920(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2920u);

    goto L_007B2920;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B2920:
    edx = MEM32(esp + 0x8); /* 0x007B2920: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0x2C); /* 0x007B2924: lea eax, [edx - 0x2c] */
    ecx = MEM32(edx + (-0x30)); /* 0x007B2927: mov ecx, dword ptr [edx - 0x30] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B292A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B292C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083C708u; /* 0x007B2931: mov eax, 0x83c708 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B2936: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B2940(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2940u);

L_007B2940:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B2940: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040A000; /* 0x007B2943: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2948(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2948u);

L_007B2948:
    ecx = MEM32(ebp + (-0x1C)); /* 0x007B2948: mov ecx, dword ptr [ebp - 0x1c] */
    goto L_0040A000; /* 0x007B294B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2950(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2950u);

L_007B2950:
    ecx = MEM32(ebp + (-0x1C)); /* 0x007B2950: mov ecx, dword ptr [ebp - 0x1c] */
    goto L_0040A000; /* 0x007B2953: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2958(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2958u);

L_007B2958:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B2958: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040A000; /* 0x007B295B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2960(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2960u);

L_007B2960:
    ecx = MEM32(ebp + (-0x1C)); /* 0x007B2960: mov ecx, dword ptr [ebp - 0x1c] */
    goto L_0040A000; /* 0x007B2963: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2968(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2968u);

L_007B2968:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B2968: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040A000; /* 0x007B296B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2970(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2970u);

L_007B2970:
    ecx = MEM32(ebp + (-0x1C)); /* 0x007B2970: mov ecx, dword ptr [ebp - 0x1c] */
    goto L_0040A000; /* 0x007B2973: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2978(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2978u);

L_007B2978:
    ecx = MEM32(ebp + (-0x18)); /* 0x007B2978: mov ecx, dword ptr [ebp - 0x18] */
    goto L_0040A000; /* 0x007B297B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2980(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2980u);

    goto L_007B2980;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B2980:
    edx = MEM32(esp + 0x8); /* 0x007B2980: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B2984: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x20)); /* 0x007B2987: mov ecx, dword ptr [edx - 0x20] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B298A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B298C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083C7B0u; /* 0x007B2991: mov eax, 0x83c7b0 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B2996: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B29A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B29A0u);

L_007B29A0:
    ecx = ebp + (-0x68); /* 0x007B29A0: lea ecx, [ebp - 0x68] */
    goto L_0041A4B0; /* 0x007B29A3: jmp 0x41a4b0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0041A4B0: RECOMP_ITAIL(0x0041A4B0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B29A8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B29A8u);

L_007B29A8:
    ecx = ebp + (-0x50); /* 0x007B29A8: lea ecx, [ebp - 0x50] */
    goto L_0041A4B0; /* 0x007B29AB: jmp 0x41a4b0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0041A4B0: RECOMP_ITAIL(0x0041A4B0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B29B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B29B0u);

L_007B29B0:
    ecx = ebp + (-0x44); /* 0x007B29B0: lea ecx, [ebp - 0x44] */
    goto L_0041A4B0; /* 0x007B29B3: jmp 0x41a4b0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0041A4B0: RECOMP_ITAIL(0x0041A4B0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B29B8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B29B8u);

L_007B29B8:
    ecx = ebp + (-0x2C); /* 0x007B29B8: lea ecx, [ebp - 0x2c] */
    goto L_0040A000; /* 0x007B29BB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B29C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B29C0u);

L_007B29C0:
    ecx = ebp + (-0x5C); /* 0x007B29C0: lea ecx, [ebp - 0x5c] */
    goto L_0041A4B0; /* 0x007B29C3: jmp 0x41a4b0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0041A4B0: RECOMP_ITAIL(0x0041A4B0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B29C8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B29C8u);

L_007B29C8:
    ecx = ebp + (-0x38); /* 0x007B29C8: lea ecx, [ebp - 0x38] */
    goto L_0041A4B0; /* 0x007B29CB: jmp 0x41a4b0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0041A4B0: RECOMP_ITAIL(0x0041A4B0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B29D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B29D0u);

    goto L_007B29D0;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B29D0:
    edx = MEM32(esp + 0x8); /* 0x007B29D0: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0x74); /* 0x007B29D4: lea eax, [edx - 0x74] */
    ecx = MEM32(edx + (-0x78)); /* 0x007B29D7: mov ecx, dword ptr [edx - 0x78] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B29DA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B29DC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x007B29E1: add eax, 8 */
    _flag_k = FK_ADD;
    ecx = MEM32(edx + (-0x8)); /* 0x007B29E4: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B29E7: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B29E9: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083C828u; /* 0x007B29EE: mov eax, 0x83c828 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B29F3: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B2A00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2A00u);

L_007B2A00:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B2A00: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040B330; /* 0x007B2A03: jmp 0x40b330 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B330: RECOMP_ITAIL(0x0040B330u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2A08(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2A08u);

L_007B2A08:
    eax = MEM32(ebp + (-0x14)); /* 0x007B2A08: mov eax, dword ptr [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x007B2A0B: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007B2A0C: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007B2A12: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007B2A13: ret  */
    RECOMP_REGS_OUT();
}

void sub_007B2A14(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2A14u);

L_007B2A14:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B2A14: mov ecx, dword ptr [ebp - 0x14] */
    goto L_00419B40; /* 0x007B2A17: jmp 0x419b40 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419B40: RECOMP_ITAIL(0x00419B40u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2A1C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2A1Cu);

L_007B2A1C:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B2A1C: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x007B2A1F: add ecx, 4 */
    _flag_k = FK_ADD;
    goto L_0040A000; /* 0x007B2A22: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2A27(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2A27u);

    goto L_007B2A27;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B2A27:
    edx = MEM32(esp + 0x8); /* 0x007B2A27: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B2A2B: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x007B2A2E: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B2A31: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B2A33: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083C87Cu; /* 0x007B2A38: mov eax, 0x83c87c */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B2A3D: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B2A50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2A50u);

L_007B2A50:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B2A50: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040B330; /* 0x007B2A53: jmp 0x40b330 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B330: RECOMP_ITAIL(0x0040B330u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2A58(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2A58u);

L_007B2A58:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B2A58: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040B140; /* 0x007B2A5B: jmp 0x40b140 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B140: RECOMP_ITAIL(0x0040B140u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2A60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2A60u);

L_007B2A60:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B2A60: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040B330; /* 0x007B2A63: jmp 0x40b330 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B330: RECOMP_ITAIL(0x0040B330u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2A68(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2A68u);

L_007B2A68:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B2A68: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x007B2A6B: add ecx, 4 */
    _flag_k = FK_ADD;
    goto L_0040B140; /* 0x007B2A6E: jmp 0x40b140 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B140: RECOMP_ITAIL(0x0040B140u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2A73(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2A73u);

L_007B2A73:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B2A73: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040B330; /* 0x007B2A76: jmp 0x40b330 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B330: RECOMP_ITAIL(0x0040B330u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2A7B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2A7Bu);

L_007B2A7B:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B2A7B: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x007B2A7E: add ecx, 8 */
    _flag_k = FK_ADD;
    goto L_0040B140; /* 0x007B2A81: jmp 0x40b140 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B140: RECOMP_ITAIL(0x0040B140u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2A86(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2A86u);

L_007B2A86:
    ecx = ebp + 0xC; /* 0x007B2A86: lea ecx, [ebp + 0xc] */
    goto L_0040B140; /* 0x007B2A89: jmp 0x40b140 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B140: RECOMP_ITAIL(0x0040B140u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2A8E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2A8Eu);

L_007B2A8E:
    ecx = ebp + 0xC; /* 0x007B2A8E: lea ecx, [ebp + 0xc] */
    goto L_0040B330; /* 0x007B2A91: jmp 0x40b330 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B330: RECOMP_ITAIL(0x0040B330u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2A96(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2A96u);

L_007B2A96:
    ecx = ebp + 0x10; /* 0x007B2A96: lea ecx, [ebp + 0x10] */
    goto L_0040B140; /* 0x007B2A99: jmp 0x40b140 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B140: RECOMP_ITAIL(0x0040B140u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2A9E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2A9Eu);

L_007B2A9E:
    ecx = ebp + 0x10; /* 0x007B2A9E: lea ecx, [ebp + 0x10] */
    goto L_0040B330; /* 0x007B2AA1: jmp 0x40b330 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B330: RECOMP_ITAIL(0x0040B330u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2AA6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2AA6u);

L_007B2AA6:
    ecx = ebp + 0x10; /* 0x007B2AA6: lea ecx, [ebp + 0x10] */
    goto L_0040B140; /* 0x007B2AA9: jmp 0x40b140 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B140: RECOMP_ITAIL(0x0040B140u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2AAE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2AAEu);

L_007B2AAE:
    ecx = ebp + 0x10; /* 0x007B2AAE: lea ecx, [ebp + 0x10] */
    goto L_0040B330; /* 0x007B2AB1: jmp 0x40b330 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B330: RECOMP_ITAIL(0x0040B330u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2AB6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2AB6u);

    goto L_007B2AB6;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B2AB6:
    edx = MEM32(esp + 0x8); /* 0x007B2AB6: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B2ABA: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x007B2ABD: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B2AC0: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B2AC2: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083C8C0u; /* 0x007B2AC7: mov eax, 0x83c8c0 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B2ACC: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B2AE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2AE0u);

L_007B2AE0:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B2AE0: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040B330; /* 0x007B2AE3: jmp 0x40b330 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B330: RECOMP_ITAIL(0x0040B330u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2AE8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2AE8u);

L_007B2AE8:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B2AE8: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040B140; /* 0x007B2AEB: jmp 0x40b140 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B140: RECOMP_ITAIL(0x0040B140u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2AF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2AF0u);

L_007B2AF0:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B2AF0: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040B330; /* 0x007B2AF3: jmp 0x40b330 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B330: RECOMP_ITAIL(0x0040B330u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2AF8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2AF8u);

L_007B2AF8:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B2AF8: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x007B2AFB: add ecx, 4 */
    _flag_k = FK_ADD;
    goto L_0040B140; /* 0x007B2AFE: jmp 0x40b140 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B140: RECOMP_ITAIL(0x0040B140u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2B03(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2B03u);

L_007B2B03:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B2B03: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040B330; /* 0x007B2B06: jmp 0x40b330 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B330: RECOMP_ITAIL(0x0040B330u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2B0B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2B0Bu);

L_007B2B0B:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B2B0B: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x007B2B0E: add ecx, 8 */
    _flag_k = FK_ADD;
    goto L_0040B140; /* 0x007B2B11: jmp 0x40b140 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B140: RECOMP_ITAIL(0x0040B140u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2B16(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2B16u);

L_007B2B16:
    ecx = ebp + (-0x10); /* 0x007B2B16: lea ecx, [ebp - 0x10] */
    goto L_0040B140; /* 0x007B2B19: jmp 0x40b140 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B140: RECOMP_ITAIL(0x0040B140u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2B1E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2B1Eu);

L_007B2B1E:
    ecx = ebp + (-0x10); /* 0x007B2B1E: lea ecx, [ebp - 0x10] */
    goto L_0040B330; /* 0x007B2B21: jmp 0x40b330 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B330: RECOMP_ITAIL(0x0040B330u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2B26(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2B26u);

L_007B2B26:
    ecx = ebp + 0x8; /* 0x007B2B26: lea ecx, [ebp + 8] */
    goto L_0040B140; /* 0x007B2B29: jmp 0x40b140 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B140: RECOMP_ITAIL(0x0040B140u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2B2E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2B2Eu);

L_007B2B2E:
    ecx = ebp + 0x8; /* 0x007B2B2E: lea ecx, [ebp + 8] */
    goto L_0040B330; /* 0x007B2B31: jmp 0x40b330 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B330: RECOMP_ITAIL(0x0040B330u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2B36(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2B36u);

L_007B2B36:
    ecx = ebp + 0x10; /* 0x007B2B36: lea ecx, [ebp + 0x10] */
    goto L_0040B140; /* 0x007B2B39: jmp 0x40b140 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B140: RECOMP_ITAIL(0x0040B140u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2B3E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2B3Eu);

L_007B2B3E:
    ecx = ebp + 0x10; /* 0x007B2B3E: lea ecx, [ebp + 0x10] */
    goto L_0040B330; /* 0x007B2B41: jmp 0x40b330 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B330: RECOMP_ITAIL(0x0040B330u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2B46(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2B46u);

    goto L_007B2B46;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B2B46:
    edx = MEM32(esp + 0x8); /* 0x007B2B46: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B2B4A: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x007B2B4D: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B2B50: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B2B52: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083C948u; /* 0x007B2B57: mov eax, 0x83c948 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B2B5C: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B2B70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2B70u);

L_007B2B70:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B2B70: mov ecx, dword ptr [ebp - 0x10] */
    goto L_005E4020; /* 0x007B2B73: jmp 0x5e4020 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005E4020: RECOMP_ITAIL(0x005E4020u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2B78(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2B78u);

L_007B2B78:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B2B78: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x14u; /* 0x007B2B7B: add ecx, 0x14 */
    _flag_k = FK_ADD;
    goto L_005E4080; /* 0x007B2B7E: jmp 0x5e4080 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005E4080: RECOMP_ITAIL(0x005E4080u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2B83(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2B83u);

L_007B2B83:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B2B83: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040B340; /* 0x007B2B86: jmp 0x40b340 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B340: RECOMP_ITAIL(0x0040B340u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2B8B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2B8Bu);

L_007B2B8B:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B2B8B: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040B2E0; /* 0x007B2B8E: jmp 0x40b2e0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B2E0: RECOMP_ITAIL(0x0040B2E0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2B93(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2B93u);

L_007B2B93:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B2B93: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040B290; /* 0x007B2B96: jmp 0x40b290 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B290: RECOMP_ITAIL(0x0040B290u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2B9B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2B9Bu);

L_007B2B9B:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B2B9B: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040B220; /* 0x007B2B9E: jmp 0x40b220 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B220: RECOMP_ITAIL(0x0040B220u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2BA3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2BA3u);

L_007B2BA3:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B2BA3: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x28u; /* 0x007B2BA6: add ecx, 0x28 */
    _flag_k = FK_ADD;
    goto L_0040A700; /* 0x007B2BA9: jmp 0x40a700 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A700: RECOMP_ITAIL(0x0040A700u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2BAE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2BAEu);

    goto L_007B2BAE;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B2BAE:
    edx = MEM32(esp + 0x8); /* 0x007B2BAE: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B2BB2: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x007B2BB5: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B2BB8: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B2BBA: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083C9D0u; /* 0x007B2BBF: mov eax, 0x83c9d0 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B2BC4: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B2BD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2BD0u);

L_007B2BD0:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B2BD0: mov ecx, dword ptr [ebp - 0x10] */
    goto L_005E4020; /* 0x007B2BD3: jmp 0x5e4020 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005E4020: RECOMP_ITAIL(0x005E4020u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2BD8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2BD8u);

L_007B2BD8:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B2BD8: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x14u; /* 0x007B2BDB: add ecx, 0x14 */
    _flag_k = FK_ADD;
    goto L_005E4080; /* 0x007B2BDE: jmp 0x5e4080 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005E4080: RECOMP_ITAIL(0x005E4080u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2BE3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2BE3u);

L_007B2BE3:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B2BE3: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x28u; /* 0x007B2BE6: add ecx, 0x28 */
    _flag_k = FK_ADD;
    goto L_0040A700; /* 0x007B2BE9: jmp 0x40a700 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A700: RECOMP_ITAIL(0x0040A700u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2BEE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2BEEu);

L_007B2BEE:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B2BEE: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040B220; /* 0x007B2BF1: jmp 0x40b220 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B220: RECOMP_ITAIL(0x0040B220u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2BF6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2BF6u);

L_007B2BF6:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B2BF6: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040B290; /* 0x007B2BF9: jmp 0x40b290 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B290: RECOMP_ITAIL(0x0040B290u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2BFE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2BFEu);

L_007B2BFE:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B2BFE: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040B2E0; /* 0x007B2C01: jmp 0x40b2e0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B2E0: RECOMP_ITAIL(0x0040B2E0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2C06(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2C06u);

L_007B2C06:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B2C06: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040B340; /* 0x007B2C09: jmp 0x40b340 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B340: RECOMP_ITAIL(0x0040B340u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2C0E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2C0Eu);

L_007B2C0E:
    ecx = MEM32(ebp + (-0x18)); /* 0x007B2C0E: mov ecx, dword ptr [ebp - 0x18] */
    goto L_005EB980; /* 0x007B2C11: jmp 0x5eb980 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005EB980: RECOMP_ITAIL(0x005EB980u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2C16(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2C16u);

L_007B2C16:
    ecx = MEM32(ebp + (-0x18)); /* 0x007B2C16: mov ecx, dword ptr [ebp - 0x18] */
    goto L_005EB960; /* 0x007B2C19: jmp 0x5eb960 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005EB960: RECOMP_ITAIL(0x005EB960u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2C1E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2C1Eu);

    goto L_007B2C1E;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B2C1E:
    edx = MEM32(esp + 0x8); /* 0x007B2C1E: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B2C22: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x007B2C25: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B2C28: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B2C2A: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083CA30u; /* 0x007B2C2F: mov eax, 0x83ca30 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B2C34: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B2C40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2C40u);

L_007B2C40:
    ecx = ebp + (-0x438); /* 0x007B2C40: lea ecx, [ebp - 0x438] */
    goto L_005F3D00; /* 0x007B2C46: jmp 0x5f3d00 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005F3D00: RECOMP_ITAIL(0x005F3D00u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2C4B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2C4Bu);

L_007B2C4B:
    ecx = ebp + (-0x424); /* 0x007B2C4B: lea ecx, [ebp - 0x424] */
    goto L_00419790; /* 0x007B2C51: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2C56(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2C56u);

    goto L_007B2C56;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B2C56:
    edx = MEM32(esp + 0x8); /* 0x007B2C56: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0x454); /* 0x007B2C5A: lea eax, [edx - 0x454] */
    ecx = MEM32(edx + (-0x458)); /* 0x007B2C60: mov ecx, dword ptr [edx - 0x458] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B2C66: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B2C68: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x007B2C6D: add eax, 0xc */
    _flag_k = FK_ADD;
    ecx = MEM32(edx + (-0x8)); /* 0x007B2C70: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B2C73: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B2C75: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083CAA0u; /* 0x007B2C7A: mov eax, 0x83caa0 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B2C7F: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B2C90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2C90u);

L_007B2C90:
    ecx = MEM32(ebp + (-0x18)); /* 0x007B2C90: mov ecx, dword ptr [ebp - 0x18] */
    goto L_0040A000; /* 0x007B2C93: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2C98(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2C98u);

L_007B2C98:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B2C98: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040A000; /* 0x007B2C9B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2CA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2CA0u);

    goto L_007B2CA0;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B2CA0:
    edx = MEM32(esp + 0x8); /* 0x007B2CA0: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0x24); /* 0x007B2CA4: lea eax, [edx - 0x24] */
    ecx = MEM32(edx + (-0x28)); /* 0x007B2CA7: mov ecx, dword ptr [edx - 0x28] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B2CAA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B2CAC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083CAD4u; /* 0x007B2CB1: mov eax, 0x83cad4 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B2CB6: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B2CC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2CC0u);

L_007B2CC0:
    ecx = ebp + (-0x30); /* 0x007B2CC0: lea ecx, [ebp - 0x30] */
    goto L_005F3D00; /* 0x007B2CC3: jmp 0x5f3d00 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005F3D00: RECOMP_ITAIL(0x005F3D00u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2CC8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2CC8u);

L_007B2CC8:
    ecx = ebp + (-0x1C); /* 0x007B2CC8: lea ecx, [ebp - 0x1c] */
    goto L_00419790; /* 0x007B2CCB: jmp 0x419790 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419790: RECOMP_ITAIL(0x00419790u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2CD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2CD0u);

L_007B2CD0:
    ecx = MEM32(ebp + (-0x34)); /* 0x007B2CD0: mov ecx, dword ptr [ebp - 0x34] */
    goto L_0040A000; /* 0x007B2CD3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2CD8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2CD8u);

L_007B2CD8:
    ecx = MEM32(ebp + (-0x3C)); /* 0x007B2CD8: mov ecx, dword ptr [ebp - 0x3c] */
    goto L_0040A000; /* 0x007B2CDB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2CE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2CE0u);

    goto L_007B2CE0;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B2CE0:
    edx = MEM32(esp + 0x8); /* 0x007B2CE0: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0x3C); /* 0x007B2CE4: lea eax, [edx - 0x3c] */
    ecx = MEM32(edx + (-0x40)); /* 0x007B2CE7: mov ecx, dword ptr [edx - 0x40] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B2CEA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B2CEC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083CB08u; /* 0x007B2CF1: mov eax, 0x83cb08 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B2CF6: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B2D00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2D00u);

L_007B2D00:
    goto L_00409980; /* 0x007B2D00: jmp 0x409980 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00409980: RECOMP_ITAIL(0x00409980u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2D05(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2D05u);

    goto L_007B2D05;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B2D05:
    edx = MEM32(esp + 0x8); /* 0x007B2D05: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B2D09: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x007B2D0C: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B2D0F: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B2D11: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083CB4Cu; /* 0x007B2D16: mov eax, 0x83cb4c */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B2D1B: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B2D20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2D20u);

    goto L_007B2D20;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B2D20:
    edx = MEM32(esp + 0x8); /* 0x007B2D20: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B2D24: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x20)); /* 0x007B2D27: mov ecx, dword ptr [edx - 0x20] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B2D2A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B2D2C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083CBACu; /* 0x007B2D31: mov eax, 0x83cbac */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B2D36: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B2D40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2D40u);

    goto L_007B2D40;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B2D40:
    edx = MEM32(esp + 0x8); /* 0x007B2D40: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B2D44: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x1C)); /* 0x007B2D47: mov ecx, dword ptr [edx - 0x1c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B2D4A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B2D4C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083CC04u; /* 0x007B2D51: mov eax, 0x83cc04 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B2D56: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B2D60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2D60u);

L_007B2D60:
    ecx = MEM32(ebp + (-0x18)); /* 0x007B2D60: mov ecx, dword ptr [ebp - 0x18] */
    goto L_0040A000; /* 0x007B2D63: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2D68(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2D68u);

L_007B2D68:
    ecx = MEM32(ebp + (-0x1C)); /* 0x007B2D68: mov ecx, dword ptr [ebp - 0x1c] */
    goto L_0040A000; /* 0x007B2D6B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2D70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2D70u);

L_007B2D70:
    ecx = MEM32(ebp + (-0x1C)); /* 0x007B2D70: mov ecx, dword ptr [ebp - 0x1c] */
    goto L_0040A000; /* 0x007B2D73: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2D78(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2D78u);

L_007B2D78:
    ecx = MEM32(ebp + (-0x18)); /* 0x007B2D78: mov ecx, dword ptr [ebp - 0x18] */
    goto L_0040A000; /* 0x007B2D7B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2D80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2D80u);

L_007B2D80:
    ecx = MEM32(ebp + (-0x1C)); /* 0x007B2D80: mov ecx, dword ptr [ebp - 0x1c] */
    goto L_0040A000; /* 0x007B2D83: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2D88(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2D88u);

L_007B2D88:
    ecx = MEM32(ebp + (-0x18)); /* 0x007B2D88: mov ecx, dword ptr [ebp - 0x18] */
    goto L_0040A000; /* 0x007B2D8B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2D90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2D90u);

    goto L_007B2D90;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B2D90:
    edx = MEM32(esp + 0x8); /* 0x007B2D90: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B2D94: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x1C)); /* 0x007B2D97: mov ecx, dword ptr [edx - 0x1c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B2D9A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B2D9C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083CC5Cu; /* 0x007B2DA1: mov eax, 0x83cc5c */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B2DA6: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B2DB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2DB0u);

L_007B2DB0:
    ecx = MEM32(ebp + (-0x18)); /* 0x007B2DB0: mov ecx, dword ptr [ebp - 0x18] */
    goto L_0040A000; /* 0x007B2DB3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2DB8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2DB8u);

L_007B2DB8:
    ecx = MEM32(ebp + (-0x1C)); /* 0x007B2DB8: mov ecx, dword ptr [ebp - 0x1c] */
    goto L_0040A000; /* 0x007B2DBB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2DC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2DC0u);

    goto L_007B2DC0;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B2DC0:
    edx = MEM32(esp + 0x8); /* 0x007B2DC0: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B2DC4: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x2C)); /* 0x007B2DC7: mov ecx, dword ptr [edx - 0x2c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B2DCA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B2DCC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083CCB0u; /* 0x007B2DD1: mov eax, 0x83ccb0 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B2DD6: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B2DE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2DE0u);

L_007B2DE0:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B2DE0: mov ecx, dword ptr [ebp - 0x10] */
    goto L_005FA9D0; /* 0x007B2DE3: jmp 0x5fa9d0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005FA9D0: RECOMP_ITAIL(0x005FA9D0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2DE8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2DE8u);

    goto L_007B2DE8;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B2DE8:
    edx = MEM32(esp + 0x8); /* 0x007B2DE8: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B2DEC: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xC)); /* 0x007B2DEF: mov ecx, dword ptr [edx - 0xc] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B2DF2: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B2DF4: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083CCE4u; /* 0x007B2DF9: mov eax, 0x83cce4 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B2DFE: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B2E10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2E10u);

L_007B2E10:
    ecx = 0x00865DF0u; /* 0x007B2E10: mov ecx, 0x865df0 */
    goto L_0040A000; /* 0x007B2E15: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2E1A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2E1Au);

L_007B2E1A:
    ecx = 0x00865E08u; /* 0x007B2E1A: mov ecx, 0x865e08 */
    goto L_0040A000; /* 0x007B2E1F: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2E24(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2E24u);

    goto L_007B2E24;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B2E24:
    edx = MEM32(esp + 0x8); /* 0x007B2E24: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B2E28: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x4)); /* 0x007B2E2B: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B2E2E: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B2E30: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083CD10u; /* 0x007B2E35: mov eax, 0x83cd10 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B2E3A: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007B2E40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2E40u);

L_007B2E40:
    ecx = MEM32(ebp + (-0x14)); /* 0x007B2E40: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040A000; /* 0x007B2E43: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2E48(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2E48u);

L_007B2E48:
    ecx = MEM32(ebp + (-0x10)); /* 0x007B2E48: mov ecx, dword ptr [ebp - 0x10] */
    goto L_005FA9D0; /* 0x007B2E4B: jmp 0x5fa9d0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005FA9D0: RECOMP_ITAIL(0x005FA9D0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007B2E50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007B2E50u);

    goto L_007B2E50;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007B2E50:
    edx = MEM32(esp + 0x8); /* 0x007B2E50: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007B2E54: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x10)); /* 0x007B2E57: mov ecx, dword ptr [edx - 0x10] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007B2E5A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007B2E5C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0083CD44u; /* 0x007B2E61: mov eax, 0x83cd44 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007B2E66: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}
