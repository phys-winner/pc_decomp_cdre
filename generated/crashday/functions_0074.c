#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_00782865(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782865u);

    goto L_00782865;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_00782865:
    edx = MEM32(esp + 0x8); /* 0x00782865: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x00782869: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x0078286C: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0078286F: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00782871: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0080FBA0u; /* 0x00782876: mov eax, 0x80fba0 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0078287B: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00782880(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782880u);

    goto L_00782880;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_00782880:
    edx = MEM32(esp + 0x8); /* 0x00782880: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x00782884: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x1C)); /* 0x00782887: mov ecx, dword ptr [edx - 0x1c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0078288A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0078288C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0080FC00u; /* 0x00782891: mov eax, 0x80fc00 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x00782896: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007828A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007828A0u);

L_007828A0:
    eax = MEM32(ebp + 0x8); /* 0x007828A0: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x007828A3: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007828A4: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007828AA: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007828AB: ret  */
    RECOMP_REGS_OUT();
}

void sub_007828AC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007828ACu);

L_007828AC:
    ecx = MEM32(ebp + 0x8); /* 0x007828AC: mov ecx, dword ptr [ebp + 8] */
    goto L_00419B40; /* 0x007828AF: jmp 0x419b40 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00419B40: RECOMP_ITAIL(0x00419B40u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007828B4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007828B4u);

L_007828B4:
    ecx = MEM32(ebp + 0x8); /* 0x007828B4: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x007828B7: add ecx, 4 */
    _flag_k = FK_ADD;
    goto L_0040A000; /* 0x007828BA: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007828BF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007828BFu);

    goto L_007828BF;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007828BF:
    edx = MEM32(esp + 0x8); /* 0x007828BF: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007828C3: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x10)); /* 0x007828C6: mov ecx, dword ptr [edx - 0x10] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007828C9: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007828CB: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0080FC58u; /* 0x007828D0: mov eax, 0x80fc58 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007828D5: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007828E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007828E0u);

L_007828E0:
    goto L_00409980; /* 0x007828E0: jmp 0x409980 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00409980: RECOMP_ITAIL(0x00409980u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007828E5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007828E5u);

    goto L_007828E5;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007828E5:
    edx = MEM32(esp + 0x8); /* 0x007828E5: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007828E9: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x007828EC: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007828EF: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007828F1: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0080FC94u; /* 0x007828F6: mov eax, 0x80fc94 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007828FB: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00782900(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782900u);

L_00782900:
    ecx = 0x00864AA8u; /* 0x00782900: mov ecx, 0x864aa8 */
    goto L_0040A000; /* 0x00782905: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_0078290A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x0078290Au);

L_0078290A:
    ecx = 0x00864AC0u; /* 0x0078290A: mov ecx, 0x864ac0 */
    goto L_0040A000; /* 0x0078290F: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00782914(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782914u);

    goto L_00782914;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_00782914:
    edx = MEM32(esp + 0x8); /* 0x00782914: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x00782918: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x4)); /* 0x0078291B: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0078291E: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00782920: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0080FCF4u; /* 0x00782925: mov eax, 0x80fcf4 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x0078292A: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00782930(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782930u);

L_00782930:
    ecx = MEM32(ebp + (-0x10)); /* 0x00782930: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040A000; /* 0x00782933: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00782938(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782938u);

L_00782938:
    ecx = MEM32(ebp + (-0x14)); /* 0x00782938: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040A000; /* 0x0078293B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00782940(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782940u);

    goto L_00782940;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_00782940:
    edx = MEM32(esp + 0x8); /* 0x00782940: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x00782944: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x00782947: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x0078294A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x0078294C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0080FD28u; /* 0x00782951: mov eax, 0x80fd28 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x00782956: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00782960(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782960u);

L_00782960:
    ecx = ebp + (-0x20); /* 0x00782960: lea ecx, [ebp - 0x20] */
    goto L_0040B140; /* 0x00782963: jmp 0x40b140 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B140: RECOMP_ITAIL(0x0040B140u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00782968(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782968u);

L_00782968:
    ecx = ebp + (-0x20); /* 0x00782968: lea ecx, [ebp - 0x20] */
    goto L_0040B330; /* 0x0078296B: jmp 0x40b330 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B330: RECOMP_ITAIL(0x0040B330u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00782970(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782970u);

L_00782970:
    ecx = ebp + (-0x20); /* 0x00782970: lea ecx, [ebp - 0x20] */
    goto L_0040B140; /* 0x00782973: jmp 0x40b140 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B140: RECOMP_ITAIL(0x0040B140u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00782978(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782978u);

L_00782978:
    ecx = ebp + (-0x20); /* 0x00782978: lea ecx, [ebp - 0x20] */
    goto L_0040B330; /* 0x0078297B: jmp 0x40b330 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B330: RECOMP_ITAIL(0x0040B330u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00782980(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782980u);

L_00782980:
    ecx = MEM32(ebp + (-0x14)); /* 0x00782980: mov ecx, dword ptr [ebp - 0x14] */
    goto L_0040A000; /* 0x00782983: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00782988(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782988u);

L_00782988:
    ecx = MEM32(ebp + (-0x1C)); /* 0x00782988: mov ecx, dword ptr [ebp - 0x1c] */
    goto L_0040A000; /* 0x0078298B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00782990(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782990u);

L_00782990:
    ecx = ebp + (-0x1C); /* 0x00782990: lea ecx, [ebp - 0x1c] */
    goto L_0040B340; /* 0x00782993: jmp 0x40b340 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B340: RECOMP_ITAIL(0x0040B340u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00782998(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782998u);

L_00782998:
    ecx = ebp + (-0x1C); /* 0x00782998: lea ecx, [ebp - 0x1c] */
    goto L_0040B2E0; /* 0x0078299B: jmp 0x40b2e0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B2E0: RECOMP_ITAIL(0x0040B2E0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007829A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007829A0u);

L_007829A0:
    ecx = ebp + (-0x1C); /* 0x007829A0: lea ecx, [ebp - 0x1c] */
    goto L_0040B290; /* 0x007829A3: jmp 0x40b290 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B290: RECOMP_ITAIL(0x0040B290u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007829A8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007829A8u);

L_007829A8:
    ecx = ebp + (-0x1C); /* 0x007829A8: lea ecx, [ebp - 0x1c] */
    goto L_0040B220; /* 0x007829AB: jmp 0x40b220 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B220: RECOMP_ITAIL(0x0040B220u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007829B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007829B0u);

L_007829B0:
    ecx = ebp + (-0x1C); /* 0x007829B0: lea ecx, [ebp - 0x1c] */
    goto L_0040A700; /* 0x007829B3: jmp 0x40a700 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A700: RECOMP_ITAIL(0x0040A700u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007829B8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007829B8u);

L_007829B8:
    ecx = ebp + (-0x1C); /* 0x007829B8: lea ecx, [ebp - 0x1c] */
    goto L_0040B220; /* 0x007829BB: jmp 0x40b220 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B220: RECOMP_ITAIL(0x0040B220u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007829C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007829C0u);

L_007829C0:
    ecx = ebp + (-0x1C); /* 0x007829C0: lea ecx, [ebp - 0x1c] */
    goto L_0040B290; /* 0x007829C3: jmp 0x40b290 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B290: RECOMP_ITAIL(0x0040B290u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007829C8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007829C8u);

L_007829C8:
    ecx = ebp + (-0x1C); /* 0x007829C8: lea ecx, [ebp - 0x1c] */
    goto L_0040B2E0; /* 0x007829CB: jmp 0x40b2e0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B2E0: RECOMP_ITAIL(0x0040B2E0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007829D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007829D0u);

L_007829D0:
    ecx = ebp + (-0x1C); /* 0x007829D0: lea ecx, [ebp - 0x1c] */
    goto L_0040B340; /* 0x007829D3: jmp 0x40b340 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B340: RECOMP_ITAIL(0x0040B340u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007829D8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007829D8u);

    goto L_007829D8;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007829D8:
    edx = MEM32(esp + 0x8); /* 0x007829D8: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0x24); /* 0x007829DC: lea eax, [edx - 0x24] */
    ecx = MEM32(edx + (-0x28)); /* 0x007829DF: mov ecx, dword ptr [edx - 0x28] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007829E2: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007829E4: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0080FD60u; /* 0x007829E9: mov eax, 0x80fd60 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007829EE: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00782A00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782A00u);

L_00782A00:
    ecx = 0x00864AF0u; /* 0x00782A00: mov ecx, 0x864af0 */
    goto L_0040A000; /* 0x00782A05: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00782A0A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782A0Au);

L_00782A0A:
    ecx = 0x00864B08u; /* 0x00782A0A: mov ecx, 0x864b08 */
    goto L_0040A000; /* 0x00782A0F: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00782A14(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782A14u);

    goto L_00782A14;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_00782A14:
    edx = MEM32(esp + 0x8); /* 0x00782A14: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x00782A18: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x4)); /* 0x00782A1B: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x00782A1E: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00782A20: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0080FE00u; /* 0x00782A25: mov eax, 0x80fe00 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x00782A2A: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00782A30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782A30u);

L_00782A30:
    ecx = ebp + (-0x14); /* 0x00782A30: lea ecx, [ebp - 0x14] */
    goto L_0040B140; /* 0x00782A33: jmp 0x40b140 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B140: RECOMP_ITAIL(0x0040B140u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00782A38(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782A38u);

L_00782A38:
    ecx = ebp + (-0x14); /* 0x00782A38: lea ecx, [ebp - 0x14] */
    goto L_0040B330; /* 0x00782A3B: jmp 0x40b330 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B330: RECOMP_ITAIL(0x0040B330u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00782A40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782A40u);

    goto L_00782A40;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_00782A40:
    edx = MEM32(esp + 0x8); /* 0x00782A40: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x00782A44: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x28)); /* 0x00782A47: mov ecx, dword ptr [edx - 0x28] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x00782A4A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00782A4C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0080FE34u; /* 0x00782A51: mov eax, 0x80fe34 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x00782A56: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00782A60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782A60u);

L_00782A60:
    ecx = 0x00864B38u; /* 0x00782A60: mov ecx, 0x864b38 */
    goto L_0040A000; /* 0x00782A65: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00782A6A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782A6Au);

L_00782A6A:
    ecx = 0x00864B50u; /* 0x00782A6A: mov ecx, 0x864b50 */
    goto L_0040A000; /* 0x00782A6F: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00782A74(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782A74u);

    goto L_00782A74;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_00782A74:
    edx = MEM32(esp + 0x8); /* 0x00782A74: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x00782A78: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x4)); /* 0x00782A7B: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x00782A7E: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00782A80: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0080FE68u; /* 0x00782A85: mov eax, 0x80fe68 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x00782A8A: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00782A90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782A90u);

L_00782A90:
    ecx = ebp + (-0x10); /* 0x00782A90: lea ecx, [ebp - 0x10] */
    goto L_0040B140; /* 0x00782A93: jmp 0x40b140 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B140: RECOMP_ITAIL(0x0040B140u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00782A98(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782A98u);

L_00782A98:
    ecx = ebp + (-0x10); /* 0x00782A98: lea ecx, [ebp - 0x10] */
    goto L_0040B330; /* 0x00782A9B: jmp 0x40b330 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B330: RECOMP_ITAIL(0x0040B330u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00782AA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782AA0u);

    goto L_00782AA0;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_00782AA0:
    edx = MEM32(esp + 0x8); /* 0x00782AA0: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x00782AA4: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x24)); /* 0x00782AA7: mov ecx, dword ptr [edx - 0x24] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x00782AAA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00782AAC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0080FE9Cu; /* 0x00782AB1: mov eax, 0x80fe9c */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x00782AB6: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00782AC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782AC0u);

L_00782AC0:
    ecx = 0x00864B80u; /* 0x00782AC0: mov ecx, 0x864b80 */
    goto L_0040A000; /* 0x00782AC5: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00782ACA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782ACAu);

L_00782ACA:
    ecx = 0x00864B98u; /* 0x00782ACA: mov ecx, 0x864b98 */
    goto L_0040A000; /* 0x00782ACF: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00782AD4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782AD4u);

    goto L_00782AD4;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_00782AD4:
    edx = MEM32(esp + 0x8); /* 0x00782AD4: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x00782AD8: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x4)); /* 0x00782ADB: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x00782ADE: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00782AE0: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0080FED0u; /* 0x00782AE5: mov eax, 0x80fed0 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x00782AEA: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00782AF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782AF0u);

L_00782AF0:
    ecx = MEM32(ebp + (-0x10)); /* 0x00782AF0: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040C940; /* 0x00782AF3: jmp 0x40c940 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040C940: RECOMP_ITAIL(0x0040C940u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00782AF8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782AF8u);

L_00782AF8:
    ecx = MEM32(ebp + (-0x10)); /* 0x00782AF8: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x0003AE68u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x0003AE68u; /* 0x00782AFB: add ecx, 0x3ae68 */
    _flag_k = FK_ADD;
    goto L_00426460; /* 0x00782B01: jmp 0x426460 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00426460: RECOMP_ITAIL(0x00426460u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00782B06(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782B06u);

    goto L_00782B06;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_00782B06:
    edx = MEM32(esp + 0x8); /* 0x00782B06: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x00782B0A: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x10)); /* 0x00782B0D: mov ecx, dword ptr [edx - 0x10] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x00782B10: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00782B12: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0080FF04u; /* 0x00782B17: mov eax, 0x80ff04 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x00782B1C: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00782B30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782B30u);

L_00782B30:
    ecx = ebp + (-0x98); /* 0x00782B30: lea ecx, [ebp - 0x98] */
    goto L_0040B330; /* 0x00782B36: jmp 0x40b330 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B330: RECOMP_ITAIL(0x0040B330u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00782B3B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782B3Bu);

L_00782B3B:
    ecx = ebp + (-0x98); /* 0x00782B3B: lea ecx, [ebp - 0x98] */
    goto L_0040B140; /* 0x00782B41: jmp 0x40b140 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B140: RECOMP_ITAIL(0x0040B140u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00782B46(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782B46u);

L_00782B46:
    ecx = ebp + (-0x98); /* 0x00782B46: lea ecx, [ebp - 0x98] */
    goto L_0040B330; /* 0x00782B4C: jmp 0x40b330 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B330: RECOMP_ITAIL(0x0040B330u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00782B51(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782B51u);

L_00782B51:
    ecx = ebp + (-0x84); /* 0x00782B51: lea ecx, [ebp - 0x84] */
    goto L_0040B340; /* 0x00782B57: jmp 0x40b340 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B340: RECOMP_ITAIL(0x0040B340u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00782B5C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782B5Cu);

L_00782B5C:
    ecx = ebp + (-0x84); /* 0x00782B5C: lea ecx, [ebp - 0x84] */
    goto L_0040B2E0; /* 0x00782B62: jmp 0x40b2e0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B2E0: RECOMP_ITAIL(0x0040B2E0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00782B67(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782B67u);

L_00782B67:
    ecx = ebp + (-0x84); /* 0x00782B67: lea ecx, [ebp - 0x84] */
    goto L_0040B290; /* 0x00782B6D: jmp 0x40b290 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B290: RECOMP_ITAIL(0x0040B290u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00782B72(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782B72u);

L_00782B72:
    ecx = ebp + (-0x84); /* 0x00782B72: lea ecx, [ebp - 0x84] */
    goto L_0040B220; /* 0x00782B78: jmp 0x40b220 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B220: RECOMP_ITAIL(0x0040B220u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00782B7D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782B7Du);

L_00782B7D:
    eax = MEM32(ebp + (-0x78)); /* 0x00782B7D: mov eax, dword ptr [ebp - 0x78] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x00782B80: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_00782B98; /* 0x00782B83: je 0x782b98 */
L_00782B89:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x78))); _flag_b = (uint32_t)(0xFFFFFFFEu);
    MEM32(ebp + (-0x78)) = MEM32(ebp + (-0x78)) & 0xFFFFFFFEu; /* 0x00782B89: and dword ptr [ebp - 0x78], 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x84); /* 0x00782B8D: lea ecx, [ebp - 0x84] */
    goto L_0040A700; /* 0x00782B93: jmp 0x40a700 */
L_00782B98:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x00782B98: ret  */
    L_0040A700: RECOMP_ITAIL(0x0040A700u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00782B99(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782B99u);

L_00782B99:
    ecx = ebp + (-0x84); /* 0x00782B99: lea ecx, [ebp - 0x84] */
    goto L_0040B220; /* 0x00782B9F: jmp 0x40b220 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B220: RECOMP_ITAIL(0x0040B220u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00782BA4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782BA4u);

L_00782BA4:
    ecx = ebp + (-0x84); /* 0x00782BA4: lea ecx, [ebp - 0x84] */
    goto L_0040B290; /* 0x00782BAA: jmp 0x40b290 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B290: RECOMP_ITAIL(0x0040B290u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00782BAF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782BAFu);

L_00782BAF:
    ecx = ebp + (-0x84); /* 0x00782BAF: lea ecx, [ebp - 0x84] */
    goto L_0040B2E0; /* 0x00782BB5: jmp 0x40b2e0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B2E0: RECOMP_ITAIL(0x0040B2E0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00782BBA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782BBAu);

L_00782BBA:
    ecx = ebp + (-0x84); /* 0x00782BBA: lea ecx, [ebp - 0x84] */
    goto L_0040B340; /* 0x00782BC0: jmp 0x40b340 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B340: RECOMP_ITAIL(0x0040B340u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00782BC5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782BC5u);

L_00782BC5:
    ecx = ebp + (-0x98); /* 0x00782BC5: lea ecx, [ebp - 0x98] */
    goto L_0040B330; /* 0x00782BCB: jmp 0x40b330 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B330: RECOMP_ITAIL(0x0040B330u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00782BD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782BD0u);

L_00782BD0:
    ecx = ebp + (-0x98); /* 0x00782BD0: lea ecx, [ebp - 0x98] */
    goto L_0040B140; /* 0x00782BD6: jmp 0x40b140 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B140: RECOMP_ITAIL(0x0040B140u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00782BDB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782BDBu);

L_00782BDB:
    ecx = ebp + (-0x98); /* 0x00782BDB: lea ecx, [ebp - 0x98] */
    goto L_0040B330; /* 0x00782BE1: jmp 0x40b330 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B330: RECOMP_ITAIL(0x0040B330u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00782BE6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782BE6u);

L_00782BE6:
    ecx = ebp + (-0x98); /* 0x00782BE6: lea ecx, [ebp - 0x98] */
    goto L_0040B330; /* 0x00782BEC: jmp 0x40b330 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B330: RECOMP_ITAIL(0x0040B330u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00782BF1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782BF1u);

L_00782BF1:
    ecx = ebp + (-0x98); /* 0x00782BF1: lea ecx, [ebp - 0x98] */
    goto L_0040B140; /* 0x00782BF7: jmp 0x40b140 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B140: RECOMP_ITAIL(0x0040B140u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00782BFC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782BFCu);

L_00782BFC:
    ecx = ebp + (-0x98); /* 0x00782BFC: lea ecx, [ebp - 0x98] */
    goto L_0040B330; /* 0x00782C02: jmp 0x40b330 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B330: RECOMP_ITAIL(0x0040B330u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00782C07(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782C07u);

L_00782C07:
    ecx = ebp + (-0x98); /* 0x00782C07: lea ecx, [ebp - 0x98] */
    goto L_0040B140; /* 0x00782C0D: jmp 0x40b140 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B140: RECOMP_ITAIL(0x0040B140u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00782C12(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782C12u);

L_00782C12:
    ecx = ebp + (-0x98); /* 0x00782C12: lea ecx, [ebp - 0x98] */
    goto L_0040B330; /* 0x00782C18: jmp 0x40b330 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B330: RECOMP_ITAIL(0x0040B330u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00782C1D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782C1Du);

L_00782C1D:
    ecx = ebp + (-0x98); /* 0x00782C1D: lea ecx, [ebp - 0x98] */
    goto L_0040B140; /* 0x00782C23: jmp 0x40b140 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B140: RECOMP_ITAIL(0x0040B140u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00782C28(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782C28u);

L_00782C28:
    ecx = ebp + (-0x98); /* 0x00782C28: lea ecx, [ebp - 0x98] */
    goto L_0040B330; /* 0x00782C2E: jmp 0x40b330 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B330: RECOMP_ITAIL(0x0040B330u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00782C33(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782C33u);

L_00782C33:
    ecx = ebp + (-0x98); /* 0x00782C33: lea ecx, [ebp - 0x98] */
    goto L_0040B330; /* 0x00782C39: jmp 0x40b330 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B330: RECOMP_ITAIL(0x0040B330u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00782C3E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782C3Eu);

L_00782C3E:
    ecx = ebp + (-0x98); /* 0x00782C3E: lea ecx, [ebp - 0x98] */
    goto L_0040B140; /* 0x00782C44: jmp 0x40b140 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B140: RECOMP_ITAIL(0x0040B140u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00782C49(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782C49u);

L_00782C49:
    ecx = ebp + (-0x98); /* 0x00782C49: lea ecx, [ebp - 0x98] */
    goto L_0040B330; /* 0x00782C4F: jmp 0x40b330 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B330: RECOMP_ITAIL(0x0040B330u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00782C54(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782C54u);

L_00782C54:
    ecx = ebp + (-0x98); /* 0x00782C54: lea ecx, [ebp - 0x98] */
    goto L_0040B140; /* 0x00782C5A: jmp 0x40b140 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B140: RECOMP_ITAIL(0x0040B140u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00782C5F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782C5Fu);

L_00782C5F:
    ecx = ebp + (-0x98); /* 0x00782C5F: lea ecx, [ebp - 0x98] */
    goto L_0040B330; /* 0x00782C65: jmp 0x40b330 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B330: RECOMP_ITAIL(0x0040B330u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00782C6A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782C6Au);

    goto L_00782C6A;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_00782C6A:
    edx = MEM32(esp + 0x8); /* 0x00782C6A: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0x9C); /* 0x00782C6E: lea eax, [edx - 0x9c] */
    ecx = MEM32(edx + (-0xA0)); /* 0x00782C74: mov ecx, dword ptr [edx - 0xa0] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x00782C7A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00782C7C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0080FF38u; /* 0x00782C81: mov eax, 0x80ff38 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x00782C86: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00782C90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782C90u);

L_00782C90:
    ecx = 0x00864BC8u; /* 0x00782C90: mov ecx, 0x864bc8 */
    goto L_0040A000; /* 0x00782C95: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00782C9A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782C9Au);

L_00782C9A:
    ecx = 0x00864BE0u; /* 0x00782C9A: mov ecx, 0x864be0 */
    goto L_0040A000; /* 0x00782C9F: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00782CA4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782CA4u);

    goto L_00782CA4;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_00782CA4:
    edx = MEM32(esp + 0x8); /* 0x00782CA4: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x00782CA8: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x4)); /* 0x00782CAB: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x00782CAE: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x00782CB0: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00810038u; /* 0x00782CB5: mov eax, 0x810038 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x00782CBA: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_00782CC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782CC0u);

L_00782CC0:
    ecx = ebp + (-0x28); /* 0x00782CC0: lea ecx, [ebp - 0x28] */
    goto L_0040B330; /* 0x00782CC3: jmp 0x40b330 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B330: RECOMP_ITAIL(0x0040B330u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00782CC8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782CC8u);

L_00782CC8:
    ecx = ebp + (-0x28); /* 0x00782CC8: lea ecx, [ebp - 0x28] */
    goto L_0040B140; /* 0x00782CCB: jmp 0x40b140 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B140: RECOMP_ITAIL(0x0040B140u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00782CD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782CD0u);

L_00782CD0:
    ecx = ebp + (-0x28); /* 0x00782CD0: lea ecx, [ebp - 0x28] */
    goto L_0040B330; /* 0x00782CD3: jmp 0x40b330 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B330: RECOMP_ITAIL(0x0040B330u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00782CD8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782CD8u);

L_00782CD8:
    ecx = ebp + (-0x34); /* 0x00782CD8: lea ecx, [ebp - 0x34] */
    goto L_0040B340; /* 0x00782CDB: jmp 0x40b340 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B340: RECOMP_ITAIL(0x0040B340u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00782CE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782CE0u);

L_00782CE0:
    ecx = ebp + (-0x34); /* 0x00782CE0: lea ecx, [ebp - 0x34] */
    goto L_0040B2E0; /* 0x00782CE3: jmp 0x40b2e0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B2E0: RECOMP_ITAIL(0x0040B2E0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00782CE8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782CE8u);

L_00782CE8:
    ecx = ebp + (-0x34); /* 0x00782CE8: lea ecx, [ebp - 0x34] */
    goto L_0040B290; /* 0x00782CEB: jmp 0x40b290 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B290: RECOMP_ITAIL(0x0040B290u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00782CF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782CF0u);

L_00782CF0:
    ecx = ebp + (-0x34); /* 0x00782CF0: lea ecx, [ebp - 0x34] */
    goto L_0040B220; /* 0x00782CF3: jmp 0x40b220 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B220: RECOMP_ITAIL(0x0040B220u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00782CF8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782CF8u);

L_00782CF8:
    ecx = ebp + (-0x34); /* 0x00782CF8: lea ecx, [ebp - 0x34] */
    goto L_0040A700; /* 0x00782CFB: jmp 0x40a700 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A700: RECOMP_ITAIL(0x0040A700u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00782D00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782D00u);

L_00782D00:
    ecx = ebp + (-0x34); /* 0x00782D00: lea ecx, [ebp - 0x34] */
    goto L_0040B220; /* 0x00782D03: jmp 0x40b220 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B220: RECOMP_ITAIL(0x0040B220u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00782D08(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782D08u);

L_00782D08:
    ecx = ebp + (-0x34); /* 0x00782D08: lea ecx, [ebp - 0x34] */
    goto L_0040B290; /* 0x00782D0B: jmp 0x40b290 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B290: RECOMP_ITAIL(0x0040B290u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00782D10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782D10u);

L_00782D10:
    ecx = ebp + (-0x34); /* 0x00782D10: lea ecx, [ebp - 0x34] */
    goto L_0040B2E0; /* 0x00782D13: jmp 0x40b2e0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B2E0: RECOMP_ITAIL(0x0040B2E0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00782D18(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782D18u);

L_00782D18:
    ecx = ebp + (-0x34); /* 0x00782D18: lea ecx, [ebp - 0x34] */
    goto L_0040B340; /* 0x00782D1B: jmp 0x40b340 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B340: RECOMP_ITAIL(0x0040B340u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00782D20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782D20u);

L_00782D20:
    ecx = ebp + (-0x28); /* 0x00782D20: lea ecx, [ebp - 0x28] */
    goto L_0040A700; /* 0x00782D23: jmp 0x40a700 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A700: RECOMP_ITAIL(0x0040A700u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00782D28(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782D28u);

L_00782D28:
    ecx = ebp + (-0x28); /* 0x00782D28: lea ecx, [ebp - 0x28] */
    goto L_0040A700; /* 0x00782D2B: jmp 0x40a700 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A700: RECOMP_ITAIL(0x0040A700u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00782D30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782D30u);

L_00782D30:
    ecx = ebp + (-0x34); /* 0x00782D30: lea ecx, [ebp - 0x34] */
    goto L_0040B140; /* 0x00782D33: jmp 0x40b140 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B140: RECOMP_ITAIL(0x0040B140u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00782D38(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782D38u);

L_00782D38:
    ecx = ebp + (-0x34); /* 0x00782D38: lea ecx, [ebp - 0x34] */
    goto L_0040B330; /* 0x00782D3B: jmp 0x40b330 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B330: RECOMP_ITAIL(0x0040B330u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00782D40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782D40u);

L_00782D40:
    ecx = ebp + (-0x28); /* 0x00782D40: lea ecx, [ebp - 0x28] */
    goto L_0040B330; /* 0x00782D43: jmp 0x40b330 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B330: RECOMP_ITAIL(0x0040B330u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00782D48(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782D48u);

L_00782D48:
    ecx = ebp + (-0x28); /* 0x00782D48: lea ecx, [ebp - 0x28] */
    goto L_0040B140; /* 0x00782D4B: jmp 0x40b140 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B140: RECOMP_ITAIL(0x0040B140u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00782D50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782D50u);

L_00782D50:
    ecx = ebp + (-0x28); /* 0x00782D50: lea ecx, [ebp - 0x28] */
    goto L_0040B330; /* 0x00782D53: jmp 0x40b330 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B330: RECOMP_ITAIL(0x0040B330u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00782D58(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782D58u);

L_00782D58:
    ecx = ebp + (-0x34); /* 0x00782D58: lea ecx, [ebp - 0x34] */
    goto L_0040B140; /* 0x00782D5B: jmp 0x40b140 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B140: RECOMP_ITAIL(0x0040B140u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_00782D60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x00782D60u);

L_00782D60:
    ecx = ebp + (-0x34); /* 0x00782D60: lea ecx, [ebp - 0x34] */
    goto L_0040B330; /* 0x00782D63: jmp 0x40b330 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040B330: RECOMP_ITAIL(0x0040B330u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}
