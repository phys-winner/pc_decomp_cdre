#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_007A2970(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A2970u);

L_007A2970:
    ecx = MEM32(ebp + (-0x14)); /* 0x007A2970: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040A000; /* 0x007A2973: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A2978(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A2978u);

L_007A2978:
    ecx = MEM32(ebp + (-0x18)); /* 0x007A2978: mov ecx, dword ptr [ebp - 0x18] */
    goto L_0040A000; /* 0x007A297B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A2980(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A2980u);

L_007A2980:
    ecx = MEM32(ebp + (-0x18)); /* 0x007A2980: mov ecx, dword ptr [ebp - 0x18] */
    goto L_0040A000; /* 0x007A2983: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A2988(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A2988u);

L_007A2988:
    ecx = MEM32(ebp + (-0x14)); /* 0x007A2988: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040A000; /* 0x007A298B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A2990(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A2990u);

    goto L_007A2990;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007A2990:
    edx = MEM32(esp + 0x8); /* 0x007A2990: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007A2994: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x007A2997: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007A299A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007A299C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0082D7C8u; /* 0x007A29A1: mov eax, 0x82d7c8 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007A29A6: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007A29B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A29B0u);

L_007A29B0:
    ecx = ebp + (-0xE8); /* 0x007A29B0: lea ecx, [ebp - 0xe8] */
    goto L_0040A000; /* 0x007A29B6: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A29BB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A29BBu);

L_007A29BB:
    ecx = MEM32(ebp + (-0xF8)); /* 0x007A29BB: mov ecx, dword ptr [ebp - 0xf8] */
    goto L_0040A000; /* 0x007A29C1: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A29C6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A29C6u);

L_007A29C6:
    eax = MEM32(ebp + (-0xF8)); /* 0x007A29C6: mov eax, dword ptr [ebp - 0xf8] */
    PUSH32(esp, eax); /* 0x007A29CC: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007A29CD: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007A29D3: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007A29D4: ret  */
    RECOMP_REGS_OUT();
}

void sub_007A29D5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A29D5u);

L_007A29D5:
    ecx = MEM32(ebp + (-0xF8)); /* 0x007A29D5: mov ecx, dword ptr [ebp - 0xf8] */
    goto L_0040A000; /* 0x007A29DB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A29E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A29E0u);

L_007A29E0:
    ecx = MEM32(ebp + (-0xF8)); /* 0x007A29E0: mov ecx, dword ptr [ebp - 0xf8] */
    goto L_0040A000; /* 0x007A29E6: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A29EB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A29EBu);

L_007A29EB:
    ecx = ebp + (-0xB8); /* 0x007A29EB: lea ecx, [ebp - 0xb8] */
    goto L_0040A000; /* 0x007A29F1: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A29F6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A29F6u);

L_007A29F6:
    ecx = MEM32(ebp + (-0xF8)); /* 0x007A29F6: mov ecx, dword ptr [ebp - 0xf8] */
    goto L_0040A000; /* 0x007A29FC: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A2A01(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A2A01u);

L_007A2A01:
    ecx = MEM32(ebp + (-0xFC)); /* 0x007A2A01: mov ecx, dword ptr [ebp - 0xfc] */
    goto L_0040A000; /* 0x007A2A07: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A2A0C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A2A0Cu);

L_007A2A0C:
    ecx = ebp + (-0x88); /* 0x007A2A0C: lea ecx, [ebp - 0x88] */
    goto L_0040A000; /* 0x007A2A12: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A2A17(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A2A17u);

L_007A2A17:
    ecx = ebp + (-0x58); /* 0x007A2A17: lea ecx, [ebp - 0x58] */
    goto L_0040A000; /* 0x007A2A1A: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A2A1F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A2A1Fu);

L_007A2A1F:
    ecx = ebp + (-0x70); /* 0x007A2A1F: lea ecx, [ebp - 0x70] */
    goto L_0040A000; /* 0x007A2A22: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A2A27(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A2A27u);

L_007A2A27:
    ecx = ebp + (-0x88); /* 0x007A2A27: lea ecx, [ebp - 0x88] */
    goto L_0040A000; /* 0x007A2A2D: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A2A32(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A2A32u);

L_007A2A32:
    ecx = MEM32(ebp + (-0xFC)); /* 0x007A2A32: mov ecx, dword ptr [ebp - 0xfc] */
    goto L_0040A000; /* 0x007A2A38: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A2A3D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A2A3Du);

L_007A2A3D:
    ecx = ebp + (-0x40); /* 0x007A2A3D: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x007A2A40: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A2A45(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A2A45u);

L_007A2A45:
    ecx = ebp + (-0x40); /* 0x007A2A45: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x007A2A48: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A2A4D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A2A4Du);

L_007A2A4D:
    ecx = ebp + (-0xD0); /* 0x007A2A4D: lea ecx, [ebp - 0xd0] */
    goto L_0040A000; /* 0x007A2A53: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A2A58(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A2A58u);

L_007A2A58:
    ecx = MEM32(ebp + (-0xFC)); /* 0x007A2A58: mov ecx, dword ptr [ebp - 0xfc] */
    goto L_0040A000; /* 0x007A2A5E: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A2A63(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A2A63u);

L_007A2A63:
    ecx = ebp + (-0x40); /* 0x007A2A63: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x007A2A66: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A2A6B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A2A6Bu);

L_007A2A6B:
    ecx = MEM32(ebp + (-0xFC)); /* 0x007A2A6B: mov ecx, dword ptr [ebp - 0xfc] */
    goto L_0040A000; /* 0x007A2A71: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A2A76(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A2A76u);

L_007A2A76:
    ecx = MEM32(ebp + (-0xF8)); /* 0x007A2A76: mov ecx, dword ptr [ebp - 0xf8] */
    goto L_0040A000; /* 0x007A2A7C: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A2A81(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A2A81u);

L_007A2A81:
    ecx = MEM32(ebp + (-0x104)); /* 0x007A2A81: mov ecx, dword ptr [ebp - 0x104] */
    goto L_0040A000; /* 0x007A2A87: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A2A8C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A2A8Cu);

L_007A2A8C:
    ecx = MEM32(ebp + (-0xF4)); /* 0x007A2A8C: mov ecx, dword ptr [ebp - 0xf4] */
    goto L_0040A000; /* 0x007A2A92: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A2A97(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A2A97u);

L_007A2A97:
    ecx = MEM32(ebp + (-0xF4)); /* 0x007A2A97: mov ecx, dword ptr [ebp - 0xf4] */
    goto L_0040A000; /* 0x007A2A9D: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A2AA2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A2AA2u);

L_007A2AA2:
    ecx = ebp + (-0x40); /* 0x007A2AA2: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x007A2AA5: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A2AAA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A2AAAu);

L_007A2AAA:
    ecx = ebp + (-0x58); /* 0x007A2AAA: lea ecx, [ebp - 0x58] */
    goto L_0040A000; /* 0x007A2AAD: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A2AB2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A2AB2u);

L_007A2AB2:
    ecx = MEM32(ebp + (-0xF4)); /* 0x007A2AB2: mov ecx, dword ptr [ebp - 0xf4] */
    goto L_0040A000; /* 0x007A2AB8: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A2ABD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A2ABDu);

L_007A2ABD:
    ecx = ebp + (-0xA0); /* 0x007A2ABD: lea ecx, [ebp - 0xa0] */
    goto L_0040A000; /* 0x007A2AC3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A2AC8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A2AC8u);

L_007A2AC8:
    ecx = ebp + (-0x28); /* 0x007A2AC8: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007A2ACB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A2AD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A2AD0u);

L_007A2AD0:
    ecx = MEM32(ebp + (-0xF4)); /* 0x007A2AD0: mov ecx, dword ptr [ebp - 0xf4] */
    goto L_0040A000; /* 0x007A2AD6: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A2ADB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A2ADBu);

L_007A2ADB:
    ecx = ebp + (-0x70); /* 0x007A2ADB: lea ecx, [ebp - 0x70] */
    goto L_0040A000; /* 0x007A2ADE: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A2AE3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A2AE3u);

L_007A2AE3:
    ecx = ebp + (-0x88); /* 0x007A2AE3: lea ecx, [ebp - 0x88] */
    goto L_0040A000; /* 0x007A2AE9: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A2AEE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A2AEEu);

L_007A2AEE:
    ecx = ebp + (-0x70); /* 0x007A2AEE: lea ecx, [ebp - 0x70] */
    goto L_0040A000; /* 0x007A2AF1: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A2AF6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A2AF6u);

L_007A2AF6:
    ecx = ebp + (-0x58); /* 0x007A2AF6: lea ecx, [ebp - 0x58] */
    goto L_0040A000; /* 0x007A2AF9: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A2AFE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A2AFEu);

L_007A2AFE:
    ecx = ebp + (-0xD0); /* 0x007A2AFE: lea ecx, [ebp - 0xd0] */
    goto L_0040A000; /* 0x007A2B04: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A2B09(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A2B09u);

L_007A2B09:
    ecx = ebp + (-0x40); /* 0x007A2B09: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x007A2B0C: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A2B11(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A2B11u);

L_007A2B11:
    ecx = MEM32(ebp + (-0xF4)); /* 0x007A2B11: mov ecx, dword ptr [ebp - 0xf4] */
    goto L_0040A000; /* 0x007A2B17: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A2B1C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A2B1Cu);

L_007A2B1C:
    ecx = MEM32(ebp + (-0xF4)); /* 0x007A2B1C: mov ecx, dword ptr [ebp - 0xf4] */
    goto L_0040A000; /* 0x007A2B22: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A2B27(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A2B27u);

L_007A2B27:
    ecx = ebp + (-0x40); /* 0x007A2B27: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x007A2B2A: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A2B2F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A2B2Fu);

L_007A2B2F:
    ecx = MEM32(ebp + (-0xF4)); /* 0x007A2B2F: mov ecx, dword ptr [ebp - 0xf4] */
    goto L_0040A000; /* 0x007A2B35: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A2B3A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A2B3Au);

L_007A2B3A:
    ecx = MEM32(ebp + (-0xF4)); /* 0x007A2B3A: mov ecx, dword ptr [ebp - 0xf4] */
    goto L_0040A000; /* 0x007A2B40: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A2B45(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A2B45u);

L_007A2B45:
    ecx = MEM32(ebp + (-0x104)); /* 0x007A2B45: mov ecx, dword ptr [ebp - 0x104] */
    goto L_0040A000; /* 0x007A2B4B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A2B50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A2B50u);

L_007A2B50:
    eax = MEM32(ebp + (-0xF0)); /* 0x007A2B50: mov eax, dword ptr [ebp - 0xf0] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x007A2B56: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007A2B6E; /* 0x007A2B59: je 0x7a2b6e */
L_007A2B5F:
    _flag_a = (uint32_t)(MEM32(ebp + (-0xF0))); _flag_b = (uint32_t)(0xFFFFFFFEu);
    MEM32(ebp + (-0xF0)) = MEM32(ebp + (-0xF0)) & 0xFFFFFFFEu; /* 0x007A2B5F: and dword ptr [ebp - 0xf0], 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x28); /* 0x007A2B66: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007A2B69: jmp 0x40a000 */
L_007A2B6E:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007A2B6E: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A2B6F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A2B6Fu);

L_007A2B6F:
    eax = MEM32(ebp + (-0xF0)); /* 0x007A2B6F: mov eax, dword ptr [ebp - 0xf0] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    eax = eax & 2; /* 0x007A2B75: and eax, 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007A2B8D; /* 0x007A2B78: je 0x7a2b8d */
L_007A2B7E:
    _flag_a = (uint32_t)(MEM32(ebp + (-0xF0))); _flag_b = (uint32_t)(0xFFFFFFFDu);
    MEM32(ebp + (-0xF0)) = MEM32(ebp + (-0xF0)) & 0xFFFFFFFDu; /* 0x007A2B7E: and dword ptr [ebp - 0xf0], 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x40); /* 0x007A2B85: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x007A2B88: jmp 0x40a000 */
L_007A2B8D:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007A2B8D: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A2B8E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A2B8Eu);

L_007A2B8E:
    eax = MEM32(ebp + (-0xF0)); /* 0x007A2B8E: mov eax, dword ptr [ebp - 0xf0] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    eax = eax & 4; /* 0x007A2B94: and eax, 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007A2BAC; /* 0x007A2B97: je 0x7a2bac */
L_007A2B9D:
    _flag_a = (uint32_t)(MEM32(ebp + (-0xF0))); _flag_b = (uint32_t)(0xFFFFFFFBu);
    MEM32(ebp + (-0xF0)) = MEM32(ebp + (-0xF0)) & 0xFFFFFFFBu; /* 0x007A2B9D: and dword ptr [ebp - 0xf0], 0xfffffffb */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x28); /* 0x007A2BA4: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007A2BA7: jmp 0x40a000 */
L_007A2BAC:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007A2BAC: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A2BAD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A2BADu);

L_007A2BAD:
    eax = MEM32(ebp + (-0xF0)); /* 0x007A2BAD: mov eax, dword ptr [ebp - 0xf0] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    eax = eax & 8; /* 0x007A2BB3: and eax, 8 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007A2BCB; /* 0x007A2BB6: je 0x7a2bcb */
L_007A2BBC:
    _flag_a = (uint32_t)(MEM32(ebp + (-0xF0))); _flag_b = (uint32_t)(0xFFFFFFF7u);
    MEM32(ebp + (-0xF0)) = MEM32(ebp + (-0xF0)) & 0xFFFFFFF7u; /* 0x007A2BBC: and dword ptr [ebp - 0xf0], 0xfffffff7 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x40); /* 0x007A2BC3: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x007A2BC6: jmp 0x40a000 */
L_007A2BCB:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007A2BCB: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A2BCC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A2BCCu);

L_007A2BCC:
    ecx = MEM32(ebp + (-0xF4)); /* 0x007A2BCC: mov ecx, dword ptr [ebp - 0xf4] */
    goto L_0040A000; /* 0x007A2BD2: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A2BD7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A2BD7u);

L_007A2BD7:
    ecx = ebp + (-0xA0); /* 0x007A2BD7: lea ecx, [ebp - 0xa0] */
    goto L_0040A000; /* 0x007A2BDD: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A2BE2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A2BE2u);

L_007A2BE2:
    ecx = ebp + (-0x58); /* 0x007A2BE2: lea ecx, [ebp - 0x58] */
    goto L_0040A000; /* 0x007A2BE5: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A2BEA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A2BEAu);

L_007A2BEA:
    ecx = ebp + (-0x88); /* 0x007A2BEA: lea ecx, [ebp - 0x88] */
    goto L_0040A000; /* 0x007A2BF0: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A2BF5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A2BF5u);

L_007A2BF5:
    ecx = ebp + (-0x70); /* 0x007A2BF5: lea ecx, [ebp - 0x70] */
    goto L_0040A000; /* 0x007A2BF8: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A2BFD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A2BFDu);

L_007A2BFD:
    ecx = ebp + (-0xD0); /* 0x007A2BFD: lea ecx, [ebp - 0xd0] */
    goto L_0040A000; /* 0x007A2C03: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A2C08(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A2C08u);

L_007A2C08:
    ecx = ebp + (-0x40); /* 0x007A2C08: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x007A2C0B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A2C10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A2C10u);

    goto L_007A2C10;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007A2C10:
    edx = MEM32(esp + 0x8); /* 0x007A2C10: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007A2C14: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x10C)); /* 0x007A2C17: mov ecx, dword ptr [edx - 0x10c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007A2C1D: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007A2C1F: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x007A2C24: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007A2C27: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007A2C29: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0082D820u; /* 0x007A2C2E: mov eax, 0x82d820 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007A2C33: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007A2C40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A2C40u);

L_007A2C40:
    ecx = MEM32(ebp + (-0x10)); /* 0x007A2C40: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040A000; /* 0x007A2C43: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A2C48(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A2C48u);

L_007A2C48:
    ecx = MEM32(ebp + (-0x10)); /* 0x007A2C48: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x18u; /* 0x007A2C4B: add ecx, 0x18 */
    _flag_k = FK_ADD;
    goto L_0040A000; /* 0x007A2C4E: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A2C53(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A2C53u);

L_007A2C53:
    ecx = MEM32(ebp + (-0x10)); /* 0x007A2C53: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x30u; /* 0x007A2C56: add ecx, 0x30 */
    _flag_k = FK_ADD;
    goto L_0040A000; /* 0x007A2C59: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A2C5E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A2C5Eu);

L_007A2C5E:
    ecx = MEM32(ebp + (-0x10)); /* 0x007A2C5E: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x4Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x4Cu; /* 0x007A2C61: add ecx, 0x4c */
    _flag_k = FK_ADD;
    goto L_0040A000; /* 0x007A2C64: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A2C69(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A2C69u);

L_007A2C69:
    PUSH32(esp, 0x0048A790u); /* 0x007A2C69: push 0x48a790 */
    PUSH32(esp, 5); /* 0x007A2C6E: push 5 */
    PUSH32(esp, 0x70u); /* 0x007A2C70: push 0x70 */
    eax = MEM32(ebp + (-0x10)); /* 0x007A2C72: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x64u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x64u; /* 0x007A2C75: add eax, 0x64 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x007A2C78: push eax */
    RECOMP_CALL(sub_0077F628); /* 0x007A2C79: call 0x77f628 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007A2C7E: ret  */
    RECOMP_REGS_OUT();
}

void sub_007A2C7F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A2C7Fu);

L_007A2C7F:
    PUSH32(esp, 0x0040A000u); /* 0x007A2C7F: push 0x40a000 */
    PUSH32(esp, 0x100u); /* 0x007A2C84: push 0x100 */
    PUSH32(esp, 0x18u); /* 0x007A2C89: push 0x18 */
    eax = MEM32(ebp + (-0x10)); /* 0x007A2C8B: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xC098u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xC098u; /* 0x007A2C8E: add eax, 0xc098 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x007A2C93: push eax */
    RECOMP_CALL(sub_0077F628); /* 0x007A2C94: call 0x77f628 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007A2C99: ret  */
    RECOMP_REGS_OUT();
}

void sub_007A2C9A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A2C9Au);

L_007A2C9A:
    PUSH32(esp, 0x0048A870u); /* 0x007A2C9A: push 0x48a870 */
    PUSH32(esp, 0x100u); /* 0x007A2C9F: push 0x100 */
    PUSH32(esp, 0xF4u); /* 0x007A2CA4: push 0xf4 */
    eax = MEM32(ebp + (-0x10)); /* 0x007A2CA9: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xD898u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xD898u; /* 0x007A2CAC: add eax, 0xd898 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x007A2CB1: push eax */
    RECOMP_CALL(sub_0077F628); /* 0x007A2CB2: call 0x77f628 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007A2CB7: ret  */
    RECOMP_REGS_OUT();
}

void sub_007A2CB8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A2CB8u);

L_007A2CB8:
    PUSH32(esp, 0x0040A000u); /* 0x007A2CB8: push 0x40a000 */
    PUSH32(esp, 0x100u); /* 0x007A2CBD: push 0x100 */
    PUSH32(esp, 0x18u); /* 0x007A2CC2: push 0x18 */
    eax = MEM32(ebp + (-0x10)); /* 0x007A2CC4: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x0001CC9Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x0001CC9Cu; /* 0x007A2CC7: add eax, 0x1cc9c */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x007A2CCC: push eax */
    RECOMP_CALL(sub_0077F628); /* 0x007A2CCD: call 0x77f628 */
    RECOMP_FLAGS_IN();
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007A2CD2: ret  */
    RECOMP_REGS_OUT();
}

void sub_007A2CD3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A2CD3u);

    goto L_007A2CD3;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007A2CD3:
    edx = MEM32(esp + 0x8); /* 0x007A2CD3: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007A2CD7: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xC)); /* 0x007A2CDA: mov ecx, dword ptr [edx - 0xc] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007A2CDD: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007A2CDF: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0082DA20u; /* 0x007A2CE4: mov eax, 0x82da20 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007A2CE9: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007A2CF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A2CF0u);

L_007A2CF0:
    ecx = MEM32(ebp + (-0x10)); /* 0x007A2CF0: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x007A2CF3: add ecx, 4 */
    _flag_k = FK_ADD;
    goto L_0040A000; /* 0x007A2CF6: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A2CFB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A2CFBu);

L_007A2CFB:
    ecx = MEM32(ebp + (-0x10)); /* 0x007A2CFB: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x20u; /* 0x007A2CFE: add ecx, 0x20 */
    _flag_k = FK_ADD;
    goto L_0040A000; /* 0x007A2D01: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A2D06(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A2D06u);

L_007A2D06:
    ecx = MEM32(ebp + (-0x10)); /* 0x007A2D06: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x3Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x3Cu; /* 0x007A2D09: add ecx, 0x3c */
    _flag_k = FK_ADD;
    goto L_0040A000; /* 0x007A2D0C: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A2D11(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A2D11u);

L_007A2D11:
    ecx = MEM32(ebp + (-0x10)); /* 0x007A2D11: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x58u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x58u; /* 0x007A2D14: add ecx, 0x58 */
    _flag_k = FK_ADD;
    goto L_0040A000; /* 0x007A2D17: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A2D1C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A2D1Cu);

    goto L_007A2D1C;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007A2D1C:
    edx = MEM32(esp + 0x8); /* 0x007A2D1C: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007A2D20: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x8)); /* 0x007A2D23: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007A2D26: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007A2D28: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0082DA88u; /* 0x007A2D2D: mov eax, 0x82da88 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007A2D32: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007A2D40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A2D40u);

L_007A2D40:
    ecx = ebp + (-0x28); /* 0x007A2D40: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007A2D43: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A2D48(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A2D48u);

L_007A2D48:
    ecx = ebp + (-0x58); /* 0x007A2D48: lea ecx, [ebp - 0x58] */
    goto L_0040A000; /* 0x007A2D4B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A2D50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A2D50u);

L_007A2D50:
    ecx = MEM32(ebp + (-0x60)); /* 0x007A2D50: mov ecx, dword ptr [ebp - 0x60] */
    goto L_0040A000; /* 0x007A2D53: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A2D58(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A2D58u);

L_007A2D58:
    ecx = MEM32(ebp + (-0x64)); /* 0x007A2D58: mov ecx, dword ptr [ebp - 0x64] */
    goto L_0040A000; /* 0x007A2D5B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A2D60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A2D60u);

L_007A2D60:
    ecx = MEM32(ebp + (-0x5C)); /* 0x007A2D60: mov ecx, dword ptr [ebp - 0x5c] */
    goto L_0040A000; /* 0x007A2D63: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A2D68(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A2D68u);

L_007A2D68:
    ecx = ebp + (-0x58); /* 0x007A2D68: lea ecx, [ebp - 0x58] */
    goto L_0040A000; /* 0x007A2D6B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A2D70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A2D70u);

L_007A2D70:
    ecx = ebp + (-0x28); /* 0x007A2D70: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007A2D73: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A2D78(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A2D78u);

L_007A2D78:
    ecx = MEM32(ebp + (-0x5C)); /* 0x007A2D78: mov ecx, dword ptr [ebp - 0x5c] */
    goto L_0040A000; /* 0x007A2D7B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A2D80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A2D80u);

L_007A2D80:
    ecx = MEM32(ebp + (-0x64)); /* 0x007A2D80: mov ecx, dword ptr [ebp - 0x64] */
    goto L_0040A000; /* 0x007A2D83: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A2D88(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A2D88u);

L_007A2D88:
    ecx = MEM32(ebp + (-0x60)); /* 0x007A2D88: mov ecx, dword ptr [ebp - 0x60] */
    goto L_0040A000; /* 0x007A2D8B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A2D90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A2D90u);

L_007A2D90:
    ecx = ebp + (-0x40); /* 0x007A2D90: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x007A2D93: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A2D98(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A2D98u);

L_007A2D98:
    ecx = ebp + (-0x28); /* 0x007A2D98: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007A2D9B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A2DA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A2DA0u);

L_007A2DA0:
    ecx = MEM32(ebp + (-0x5C)); /* 0x007A2DA0: mov ecx, dword ptr [ebp - 0x5c] */
    goto L_0040A000; /* 0x007A2DA3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A2DA8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A2DA8u);

L_007A2DA8:
    ecx = MEM32(ebp + (-0x64)); /* 0x007A2DA8: mov ecx, dword ptr [ebp - 0x64] */
    goto L_0040A000; /* 0x007A2DAB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A2DB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A2DB0u);

L_007A2DB0:
    ecx = MEM32(ebp + (-0x60)); /* 0x007A2DB0: mov ecx, dword ptr [ebp - 0x60] */
    goto L_0040A000; /* 0x007A2DB3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A2DB8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A2DB8u);

L_007A2DB8:
    ecx = ebp + (-0x28); /* 0x007A2DB8: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007A2DBB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A2DC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A2DC0u);

L_007A2DC0:
    ecx = ebp + (-0x40); /* 0x007A2DC0: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x007A2DC3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A2DC8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A2DC8u);

L_007A2DC8:
    ecx = MEM32(ebp + (-0x5C)); /* 0x007A2DC8: mov ecx, dword ptr [ebp - 0x5c] */
    goto L_0040A000; /* 0x007A2DCB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A2DD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A2DD0u);

L_007A2DD0:
    ecx = MEM32(ebp + (-0x64)); /* 0x007A2DD0: mov ecx, dword ptr [ebp - 0x64] */
    goto L_0040A000; /* 0x007A2DD3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A2DD8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A2DD8u);

L_007A2DD8:
    ecx = MEM32(ebp + (-0x60)); /* 0x007A2DD8: mov ecx, dword ptr [ebp - 0x60] */
    goto L_0040A000; /* 0x007A2DDB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A2DE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A2DE0u);

L_007A2DE0:
    ecx = ebp + (-0x58); /* 0x007A2DE0: lea ecx, [ebp - 0x58] */
    goto L_0040A000; /* 0x007A2DE3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A2DE8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A2DE8u);

L_007A2DE8:
    ecx = ebp + (-0x40); /* 0x007A2DE8: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x007A2DEB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A2DF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A2DF0u);

L_007A2DF0:
    ecx = MEM32(ebp + (-0x5C)); /* 0x007A2DF0: mov ecx, dword ptr [ebp - 0x5c] */
    goto L_0040A000; /* 0x007A2DF3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A2DF8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A2DF8u);

L_007A2DF8:
    ecx = MEM32(ebp + (-0x64)); /* 0x007A2DF8: mov ecx, dword ptr [ebp - 0x64] */
    goto L_0040A000; /* 0x007A2DFB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A2E00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A2E00u);

L_007A2E00:
    ecx = MEM32(ebp + (-0x60)); /* 0x007A2E00: mov ecx, dword ptr [ebp - 0x60] */
    goto L_0040A000; /* 0x007A2E03: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A2E08(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A2E08u);

L_007A2E08:
    ecx = ebp + (-0x28); /* 0x007A2E08: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007A2E0B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A2E10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A2E10u);

L_007A2E10:
    ecx = ebp + (-0x40); /* 0x007A2E10: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x007A2E13: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A2E18(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A2E18u);

L_007A2E18:
    ecx = MEM32(ebp + (-0x5C)); /* 0x007A2E18: mov ecx, dword ptr [ebp - 0x5c] */
    goto L_0040A000; /* 0x007A2E1B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}
