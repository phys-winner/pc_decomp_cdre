#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_007BD76B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BD76Bu);

L_007BD76B:
    ecx = MEM32(ebp + (-0x10)); /* 0x007BD76B: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x18u; /* 0x007BD76E: add ecx, 0x18 */
    _flag_k = FK_ADD;
    goto L_0066D600; /* 0x007BD771: jmp 0x66d600 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0066D600: RECOMP_ITAIL(0x0066D600u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BD776(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BD776u);

    goto L_007BD776;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BD776:
    edx = MEM32(esp + 0x8); /* 0x007BD776: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BD77A: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x007BD77D: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BD780: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BD782: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00847314u; /* 0x007BD787: mov eax, 0x847314 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BD78C: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BD7A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BD7A0u);

    goto L_007BD7A0;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BD7A0:
    edx = MEM32(esp + 0x8); /* 0x007BD7A0: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BD7A4: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x007BD7A7: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BD7AA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BD7AC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00847358u; /* 0x007BD7B1: mov eax, 0x847358 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BD7B6: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BD7C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BD7C0u);

L_007BD7C0:
    goto L_00409980; /* 0x007BD7C0: jmp 0x409980 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00409980: RECOMP_ITAIL(0x00409980u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BD7C5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BD7C5u);

    goto L_007BD7C5;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BD7C5:
    edx = MEM32(esp + 0x8); /* 0x007BD7C5: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BD7C9: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x007BD7CC: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BD7CF: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BD7D1: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x008473B0u; /* 0x007BD7D6: mov eax, 0x8473b0 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BD7DB: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BD7E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BD7E0u);

    goto L_007BD7E0;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BD7E0:
    edx = MEM32(esp + 0x8); /* 0x007BD7E0: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BD7E4: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x20)); /* 0x007BD7E7: mov ecx, dword ptr [edx - 0x20] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BD7EA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BD7EC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00847410u; /* 0x007BD7F1: mov eax, 0x847410 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BD7F6: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BD800(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BD800u);

    goto L_007BD800;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BD800:
    edx = MEM32(esp + 0x8); /* 0x007BD800: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BD804: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x18)); /* 0x007BD807: mov ecx, dword ptr [edx - 0x18] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BD80A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BD80C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00847468u; /* 0x007BD811: mov eax, 0x847468 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BD816: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BD820(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BD820u);

    goto L_007BD820;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BD820:
    edx = MEM32(esp + 0x8); /* 0x007BD820: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BD824: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x1C)); /* 0x007BD827: mov ecx, dword ptr [edx - 0x1c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BD82A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BD82C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x008474C0u; /* 0x007BD831: mov eax, 0x8474c0 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BD836: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BD840(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BD840u);

L_007BD840:
    goto L_00409980; /* 0x007BD840: jmp 0x409980 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00409980: RECOMP_ITAIL(0x00409980u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BD845(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BD845u);

    goto L_007BD845;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BD845:
    edx = MEM32(esp + 0x8); /* 0x007BD845: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BD849: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x1C)); /* 0x007BD84C: mov ecx, dword ptr [edx - 0x1c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BD84F: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BD851: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00847518u; /* 0x007BD856: mov eax, 0x847518 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BD85B: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BD860(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BD860u);

L_007BD860:
    ecx = ebp + (-0x5C); /* 0x007BD860: lea ecx, [ebp - 0x5c] */
    goto L_004A74F0; /* 0x007BD863: jmp 0x4a74f0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_004A74F0: RECOMP_ITAIL(0x004A74F0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BD868(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BD868u);

    goto L_007BD868;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BD868:
    edx = MEM32(esp + 0x8); /* 0x007BD868: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BD86C: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x60)); /* 0x007BD86F: mov ecx, dword ptr [edx - 0x60] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BD872: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BD874: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x007BD879: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BD87C: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BD87E: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00847578u; /* 0x007BD883: mov eax, 0x847578 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BD888: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BD890(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BD890u);

L_007BD890:
    ecx = MEM32(ebp + (-0x50)); /* 0x007BD890: mov ecx, dword ptr [ebp - 0x50] */
    goto L_005E3540; /* 0x007BD893: jmp 0x5e3540 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005E3540: RECOMP_ITAIL(0x005E3540u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BD898(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BD898u);

L_007BD898:
    eax = MEM32(ebp + (-0x48)); /* 0x007BD898: mov eax, dword ptr [ebp - 0x48] */
    PUSH32(esp, eax); /* 0x007BD89B: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007BD89C: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007BD8A2: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007BD8A3: ret  */
    RECOMP_REGS_OUT();
}

void sub_007BD8A4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BD8A4u);

L_007BD8A4:
    ecx = ebp + (-0x2C); /* 0x007BD8A4: lea ecx, [ebp - 0x2c] */
    goto L_0040A000; /* 0x007BD8A7: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BD8AC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BD8ACu);

L_007BD8AC:
    ecx = MEM32(ebp + (-0x48)); /* 0x007BD8AC: mov ecx, dword ptr [ebp - 0x48] */
    goto L_0040A000; /* 0x007BD8AF: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BD8B4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BD8B4u);

L_007BD8B4:
    ecx = MEM32(ebp + (-0x4C)); /* 0x007BD8B4: mov ecx, dword ptr [ebp - 0x4c] */
    goto L_0040A000; /* 0x007BD8B7: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BD8BC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BD8BCu);

L_007BD8BC:
    ecx = ebp + (-0x2C); /* 0x007BD8BC: lea ecx, [ebp - 0x2c] */
    goto L_0040A000; /* 0x007BD8BF: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BD8C4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BD8C4u);

L_007BD8C4:
    ecx = ebp + (-0x44); /* 0x007BD8C4: lea ecx, [ebp - 0x44] */
    goto L_0040A000; /* 0x007BD8C7: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BD8CC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BD8CCu);

L_007BD8CC:
    ecx = MEM32(ebp + (-0x4C)); /* 0x007BD8CC: mov ecx, dword ptr [ebp - 0x4c] */
    goto L_0040A000; /* 0x007BD8CF: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BD8D4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BD8D4u);

L_007BD8D4:
    ecx = MEM32(ebp + (-0x48)); /* 0x007BD8D4: mov ecx, dword ptr [ebp - 0x48] */
    goto L_0040A000; /* 0x007BD8D7: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BD8DC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BD8DCu);

    goto L_007BD8DC;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BD8DC:
    edx = MEM32(esp + 0x8); /* 0x007BD8DC: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BD8E0: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x58)); /* 0x007BD8E3: mov ecx, dword ptr [edx - 0x58] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BD8E6: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BD8E8: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x8)); /* 0x007BD8ED: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BD8F0: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BD8F2: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x008475A8u; /* 0x007BD8F7: mov eax, 0x8475a8 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BD8FC: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BD910(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BD910u);

L_007BD910:
    ecx = MEM32(ebp + (-0x10)); /* 0x007BD910: mov ecx, dword ptr [ebp - 0x10] */
    goto L_005E3540; /* 0x007BD913: jmp 0x5e3540 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005E3540: RECOMP_ITAIL(0x005E3540u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BD918(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BD918u);

L_007BD918:
    ecx = MEM32(ebp + (-0x10)); /* 0x007BD918: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x58u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 0x58u; /* 0x007BD91B: sub ecx, 0x58 */
    _flag_k = FK_CMP;
    { _itail_tgt = (uint32_t)(MEM32(0x7CC434)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BD924(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BD924u);

L_007BD924:
    ecx = MEM32(ebp + (-0x10)); /* 0x007BD924: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x60u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 0x60u; /* 0x007BD927: sub ecx, 0x60 */
    _flag_k = FK_CMP;
    goto L_0053BD90; /* 0x007BD92A: jmp 0x53bd90 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0053BD90: RECOMP_ITAIL(0x0053BD90u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BD92F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BD92Fu);

    goto L_007BD92F;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BD92F:
    edx = MEM32(esp + 0x8); /* 0x007BD92F: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BD933: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x14)); /* 0x007BD936: mov ecx, dword ptr [edx - 0x14] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BD939: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BD93B: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00847618u; /* 0x007BD940: mov eax, 0x847618 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BD945: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BD950(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BD950u);

L_007BD950:
    ecx = ebp + (-0x38); /* 0x007BD950: lea ecx, [ebp - 0x38] */
    goto L_005CD8D0; /* 0x007BD953: jmp 0x5cd8d0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005CD8D0: RECOMP_ITAIL(0x005CD8D0u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BD958(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BD958u);

L_007BD958:
    ecx = ebp + (-0x38); /* 0x007BD958: lea ecx, [ebp - 0x38] */
    goto L_005CD940; /* 0x007BD95B: jmp 0x5cd940 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_005CD940: RECOMP_ITAIL(0x005CD940u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BD960(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BD960u);

    goto L_007BD960;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BD960:
    edx = MEM32(esp + 0x8); /* 0x007BD960: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BD964: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x3C)); /* 0x007BD967: mov ecx, dword ptr [edx - 0x3c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BD96A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BD96C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00847654u; /* 0x007BD971: mov eax, 0x847654 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BD976: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BD980(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BD980u);

L_007BD980:
    ecx = MEM32(ebp + (-0x34)); /* 0x007BD980: mov ecx, dword ptr [ebp - 0x34] */
    goto L_00558880; /* 0x007BD983: jmp 0x558880 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00558880: RECOMP_ITAIL(0x00558880u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BD988(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BD988u);

L_007BD988:
    ecx = MEM32(ebp + (-0x34)); /* 0x007BD988: mov ecx, dword ptr [ebp - 0x34] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x18u; /* 0x007BD98B: add ecx, 0x18 */
    _flag_k = FK_ADD;
    goto L_00558880; /* 0x007BD98E: jmp 0x558880 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00558880: RECOMP_ITAIL(0x00558880u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BD993(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BD993u);

L_007BD993:
    ecx = MEM32(ebp + (-0x34)); /* 0x007BD993: mov ecx, dword ptr [ebp - 0x34] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x30u; /* 0x007BD996: add ecx, 0x30 */
    _flag_k = FK_ADD;
    goto L_00558880; /* 0x007BD999: jmp 0x558880 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00558880: RECOMP_ITAIL(0x00558880u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BD99E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BD99Eu);

L_007BD99E:
    ecx = MEM32(ebp + (-0x2C)); /* 0x007BD99E: mov ecx, dword ptr [ebp - 0x2c] */
    goto L_0040A000; /* 0x007BD9A1: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BD9A6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BD9A6u);

L_007BD9A6:
    ecx = MEM32(ebp + (-0x30)); /* 0x007BD9A6: mov ecx, dword ptr [ebp - 0x30] */
    goto L_0040A000; /* 0x007BD9A9: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BD9AE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BD9AEu);

L_007BD9AE:
    ecx = ebp + (-0x28); /* 0x007BD9AE: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007BD9B1: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BD9B6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BD9B6u);

    goto L_007BD9B6;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BD9B6:
    edx = MEM32(esp + 0x8); /* 0x007BD9B6: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BD9BA: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x34)); /* 0x007BD9BD: mov ecx, dword ptr [edx - 0x34] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BD9C0: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BD9C2: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x007BD9C7: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BD9CA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BD9CC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x008476BCu; /* 0x007BD9D1: mov eax, 0x8476bc */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BD9D6: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BD9E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BD9E0u);

L_007BD9E0:
    ecx = MEM32(ebp + (-0x10)); /* 0x007BD9E0: mov ecx, dword ptr [ebp - 0x10] */
    goto L_00558880; /* 0x007BD9E3: jmp 0x558880 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00558880: RECOMP_ITAIL(0x00558880u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BD9E8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BD9E8u);

L_007BD9E8:
    ecx = MEM32(ebp + (-0x10)); /* 0x007BD9E8: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x18u; /* 0x007BD9EB: add ecx, 0x18 */
    _flag_k = FK_ADD;
    goto L_00558880; /* 0x007BD9EE: jmp 0x558880 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00558880: RECOMP_ITAIL(0x00558880u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BD9F3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BD9F3u);

L_007BD9F3:
    ecx = MEM32(ebp + (-0x10)); /* 0x007BD9F3: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x30u; /* 0x007BD9F6: add ecx, 0x30 */
    _flag_k = FK_ADD;
    goto L_00558880; /* 0x007BD9F9: jmp 0x558880 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00558880: RECOMP_ITAIL(0x00558880u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BD9FE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BD9FEu);

    goto L_007BD9FE;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BD9FE:
    edx = MEM32(esp + 0x8); /* 0x007BD9FE: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BDA02: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x10)); /* 0x007BDA05: mov ecx, dword ptr [edx - 0x10] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BDA08: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BDA0A: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00847710u; /* 0x007BDA0F: mov eax, 0x847710 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BDA14: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BDA20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BDA20u);

L_007BDA20:
    ecx = ebp + (-0x28); /* 0x007BDA20: lea ecx, [ebp - 0x28] */
    goto L_00558880; /* 0x007BDA23: jmp 0x558880 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00558880: RECOMP_ITAIL(0x00558880u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BDA28(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BDA28u);

L_007BDA28:
    ecx = ebp + (-0x28); /* 0x007BDA28: lea ecx, [ebp - 0x28] */
    goto L_00558880; /* 0x007BDA2B: jmp 0x558880 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00558880: RECOMP_ITAIL(0x00558880u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BDA30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BDA30u);

    goto L_007BDA30;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BDA30:
    edx = MEM32(esp + 0x8); /* 0x007BDA30: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BDA34: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x34)); /* 0x007BDA37: mov ecx, dword ptr [edx - 0x34] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BDA3A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BDA3C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x007BDA41: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BDA44: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BDA46: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0084774Cu; /* 0x007BDA4B: mov eax, 0x84774c */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BDA50: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BDA60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BDA60u);

L_007BDA60:
    ecx = ebp + (-0x44); /* 0x007BDA60: lea ecx, [ebp - 0x44] */
    goto L_00558880; /* 0x007BDA63: jmp 0x558880 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00558880: RECOMP_ITAIL(0x00558880u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BDA68(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BDA68u);

L_007BDA68:
    ecx = ebp + (-0x2C); /* 0x007BDA68: lea ecx, [ebp - 0x2c] */
    goto L_0040A000; /* 0x007BDA6B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BDA70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BDA70u);

L_007BDA70:
    ecx = ebp + (-0x5C); /* 0x007BDA70: lea ecx, [ebp - 0x5c] */
    goto L_00558880; /* 0x007BDA73: jmp 0x558880 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00558880: RECOMP_ITAIL(0x00558880u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BDA78(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BDA78u);

L_007BDA78:
    ecx = ebp + (-0x44); /* 0x007BDA78: lea ecx, [ebp - 0x44] */
    goto L_00558880; /* 0x007BDA7B: jmp 0x558880 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00558880: RECOMP_ITAIL(0x00558880u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BDA80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BDA80u);

    goto L_007BDA80;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BDA80:
    edx = MEM32(esp + 0x8); /* 0x007BDA80: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BDA84: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x68)); /* 0x007BDA87: mov ecx, dword ptr [edx - 0x68] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BDA8A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BDA8C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x8)); /* 0x007BDA91: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BDA94: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BDA96: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00847780u; /* 0x007BDA9B: mov eax, 0x847780 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BDAA0: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BDAB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BDAB0u);

L_007BDAB0:
    ecx = ebp + (-0x44); /* 0x007BDAB0: lea ecx, [ebp - 0x44] */
    goto L_00558880; /* 0x007BDAB3: jmp 0x558880 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00558880: RECOMP_ITAIL(0x00558880u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BDAB8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BDAB8u);

L_007BDAB8:
    ecx = ebp + (-0x5C); /* 0x007BDAB8: lea ecx, [ebp - 0x5c] */
    goto L_0040A000; /* 0x007BDABB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BDAC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BDAC0u);

L_007BDAC0:
    ecx = ebp + (-0x2C); /* 0x007BDAC0: lea ecx, [ebp - 0x2c] */
    goto L_00558880; /* 0x007BDAC3: jmp 0x558880 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00558880: RECOMP_ITAIL(0x00558880u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BDAC8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BDAC8u);

L_007BDAC8:
    ecx = ebp + (-0x44); /* 0x007BDAC8: lea ecx, [ebp - 0x44] */
    goto L_00558880; /* 0x007BDACB: jmp 0x558880 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00558880: RECOMP_ITAIL(0x00558880u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BDAD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BDAD0u);

    goto L_007BDAD0;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BDAD0:
    edx = MEM32(esp + 0x8); /* 0x007BDAD0: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0x64); /* 0x007BDAD4: lea eax, [edx - 0x64] */
    ecx = MEM32(edx + (-0x68)); /* 0x007BDAD7: mov ecx, dword ptr [edx - 0x68] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BDADA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BDADC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x007BDAE1: add eax, 0xc */
    _flag_k = FK_ADD;
    ecx = MEM32(edx + (-0x8)); /* 0x007BDAE4: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BDAE7: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BDAE9: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x008477C4u; /* 0x007BDAEE: mov eax, 0x8477c4 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BDAF3: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BDB00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BDB00u);

L_007BDB00:
    ecx = ebp + (-0xBC); /* 0x007BDB00: lea ecx, [ebp - 0xbc] */
    goto L_00429F40; /* 0x007BDB06: jmp 0x429f40 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00429F40: RECOMP_ITAIL(0x00429F40u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BDB0B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BDB0Bu);

L_007BDB0B:
    ecx = ebp + (-0x8C); /* 0x007BDB0B: lea ecx, [ebp - 0x8c] */
    goto L_00558880; /* 0x007BDB11: jmp 0x558880 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00558880: RECOMP_ITAIL(0x00558880u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BDB16(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BDB16u);

L_007BDB16:
    ecx = ebp + (-0x74); /* 0x007BDB16: lea ecx, [ebp - 0x74] */
    goto L_00558880; /* 0x007BDB19: jmp 0x558880 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00558880: RECOMP_ITAIL(0x00558880u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BDB1E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BDB1Eu);

L_007BDB1E:
    ecx = ebp + (-0x5C); /* 0x007BDB1E: lea ecx, [ebp - 0x5c] */
    goto L_00558880; /* 0x007BDB21: jmp 0x558880 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00558880: RECOMP_ITAIL(0x00558880u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BDB26(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BDB26u);

L_007BDB26:
    ecx = ebp + (-0x44); /* 0x007BDB26: lea ecx, [ebp - 0x44] */
    goto L_00558880; /* 0x007BDB29: jmp 0x558880 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00558880: RECOMP_ITAIL(0x00558880u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BDB2E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BDB2Eu);

L_007BDB2E:
    ecx = ebp + (-0xA4); /* 0x007BDB2E: lea ecx, [ebp - 0xa4] */
    goto L_0040A000; /* 0x007BDB34: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BDB39(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BDB39u);

L_007BDB39:
    ecx = ebp + (-0x8C); /* 0x007BDB39: lea ecx, [ebp - 0x8c] */
    goto L_0040A000; /* 0x007BDB3F: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BDB44(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BDB44u);

L_007BDB44:
    ecx = MEM32(ebp + (-0xA8)); /* 0x007BDB44: mov ecx, dword ptr [ebp - 0xa8] */
    goto L_0040A000; /* 0x007BDB4A: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BDB4F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BDB4Fu);

L_007BDB4F:
    ecx = ebp + (-0x2C); /* 0x007BDB4F: lea ecx, [ebp - 0x2c] */
    goto L_0040A000; /* 0x007BDB52: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BDB57(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BDB57u);

L_007BDB57:
    ecx = ebp + (-0x74); /* 0x007BDB57: lea ecx, [ebp - 0x74] */
    goto L_0040A000; /* 0x007BDB5A: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BDB5F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BDB5Fu);

    goto L_007BDB5F;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BDB5F:
    edx = MEM32(esp + 0x8); /* 0x007BDB5F: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0xC4); /* 0x007BDB63: lea eax, [edx - 0xc4] */
    ecx = MEM32(edx + (-0xC8)); /* 0x007BDB69: mov ecx, dword ptr [edx - 0xc8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BDB6F: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BDB71: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x007BDB76: add eax, 0xc */
    _flag_k = FK_ADD;
    ecx = MEM32(edx + (-0x8)); /* 0x007BDB79: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BDB7C: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BDB7E: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00847808u; /* 0x007BDB83: mov eax, 0x847808 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BDB88: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BDB90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BDB90u);

L_007BDB90:
    ecx = ebp + (-0x58); /* 0x007BDB90: lea ecx, [ebp - 0x58] */
    goto L_00558880; /* 0x007BDB93: jmp 0x558880 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00558880: RECOMP_ITAIL(0x00558880u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BDB98(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BDB98u);

L_007BDB98:
    ecx = ebp + (-0x40); /* 0x007BDB98: lea ecx, [ebp - 0x40] */
    goto L_00558880; /* 0x007BDB9B: jmp 0x558880 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00558880: RECOMP_ITAIL(0x00558880u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BDBA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BDBA0u);

L_007BDBA0:
    ecx = ebp + (-0x70); /* 0x007BDBA0: lea ecx, [ebp - 0x70] */
    goto L_00558880; /* 0x007BDBA3: jmp 0x558880 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00558880: RECOMP_ITAIL(0x00558880u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BDBA8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BDBA8u);

L_007BDBA8:
    ecx = ebp + (-0x58); /* 0x007BDBA8: lea ecx, [ebp - 0x58] */
    goto L_00558880; /* 0x007BDBAB: jmp 0x558880 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00558880: RECOMP_ITAIL(0x00558880u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BDBB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BDBB0u);

L_007BDBB0:
    ecx = ebp + (-0x28); /* 0x007BDBB0: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007BDBB3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BDBB8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BDBB8u);

L_007BDBB8:
    ecx = ebp + (-0x40); /* 0x007BDBB8: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x007BDBBB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BDBC0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BDBC0u);

    goto L_007BDBC0;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BDBC0:
    edx = MEM32(esp + 0x8); /* 0x007BDBC0: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BDBC4: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x74)); /* 0x007BDBC7: mov ecx, dword ptr [edx - 0x74] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BDBCA: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BDBCC: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x007BDBD1: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BDBD4: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BDBD6: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00847898u; /* 0x007BDBDB: mov eax, 0x847898 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BDBE0: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BDBF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BDBF0u);

L_007BDBF0:
    ecx = MEM32(ebp + (-0x68)); /* 0x007BDBF0: mov ecx, dword ptr [ebp - 0x68] */
    goto L_0040A000; /* 0x007BDBF3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BDBF8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BDBF8u);

L_007BDBF8:
    ecx = ebp + (-0x2C); /* 0x007BDBF8: lea ecx, [ebp - 0x2c] */
    goto L_0040A000; /* 0x007BDBFB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BDC00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BDC00u);

L_007BDC00:
    ecx = MEM32(ebp + (-0x68)); /* 0x007BDC00: mov ecx, dword ptr [ebp - 0x68] */
    goto L_0040A000; /* 0x007BDC03: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BDC08(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BDC08u);

L_007BDC08:
    ecx = ebp + (-0x5C); /* 0x007BDC08: lea ecx, [ebp - 0x5c] */
    goto L_0040A000; /* 0x007BDC0B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BDC10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BDC10u);

L_007BDC10:
    ecx = ebp + (-0x44); /* 0x007BDC10: lea ecx, [ebp - 0x44] */
    goto L_0040A000; /* 0x007BDC13: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BDC18(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BDC18u);

    goto L_007BDC18;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BDC18:
    edx = MEM32(esp + 0x8); /* 0x007BDC18: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0x6C); /* 0x007BDC1C: lea eax, [edx - 0x6c] */
    ecx = MEM32(edx + (-0x70)); /* 0x007BDC1F: mov ecx, dword ptr [edx - 0x70] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BDC22: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BDC24: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x007BDC29: add eax, 0xc */
    _flag_k = FK_ADD;
    ecx = MEM32(edx + (-0x8)); /* 0x007BDC2C: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BDC2F: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BDC31: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00847908u; /* 0x007BDC36: mov eax, 0x847908 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BDC3B: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BDC40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BDC40u);

L_007BDC40:
    eax = MEM32(ebp + (-0xB4)); /* 0x007BDC40: mov eax, dword ptr [ebp - 0xb4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x007BDC46: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_007BDC61; /* 0x007BDC49: je 0x7bdc61 */
L_007BDC4F:
    _flag_a = (uint32_t)(MEM32(ebp + (-0xB4))); _flag_b = (uint32_t)(0xFFFFFFFEu);
    MEM32(ebp + (-0xB4)) = MEM32(ebp + (-0xB4)) & 0xFFFFFFFEu; /* 0x007BDC4F: and dword ptr [ebp - 0xb4], 0xfffffffe */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0xBC)); /* 0x007BDC56: mov ecx, dword ptr [ebp - 0xbc] */
    goto L_0040A000; /* 0x007BDC5C: jmp 0x40a000 */
L_007BDC61:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007BDC61: ret  */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BDC62(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BDC62u);

L_007BDC62:
    ecx = MEM32(ebp + (-0xA4)); /* 0x007BDC62: mov ecx, dword ptr [ebp - 0xa4] */
    goto L_0040A000; /* 0x007BDC68: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BDC6D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BDC6Du);

L_007BDC6D:
    ecx = ebp + (-0x58); /* 0x007BDC6D: lea ecx, [ebp - 0x58] */
    goto L_0040A000; /* 0x007BDC70: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BDC75(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BDC75u);

L_007BDC75:
    ecx = MEM32(ebp + (-0xA4)); /* 0x007BDC75: mov ecx, dword ptr [ebp - 0xa4] */
    goto L_0040A000; /* 0x007BDC7B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BDC80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BDC80u);

L_007BDC80:
    ecx = ebp + (-0x70); /* 0x007BDC80: lea ecx, [ebp - 0x70] */
    goto L_0040A000; /* 0x007BDC83: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BDC88(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BDC88u);

L_007BDC88:
    ecx = ebp + (-0xB0); /* 0x007BDC88: lea ecx, [ebp - 0xb0] */
    goto L_00429F40; /* 0x007BDC8E: jmp 0x429f40 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_00429F40: RECOMP_ITAIL(0x00429F40u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BDC93(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BDC93u);

L_007BDC93:
    ecx = ebp + (-0x40); /* 0x007BDC93: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x007BDC96: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BDC9B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BDC9Bu);

L_007BDC9B:
    ecx = ebp + (-0x28); /* 0x007BDC9B: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007BDC9E: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BDCA3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BDCA3u);

L_007BDCA3:
    ecx = ebp + (-0x88); /* 0x007BDCA3: lea ecx, [ebp - 0x88] */
    goto L_0040A000; /* 0x007BDCA9: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BDCAE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BDCAEu);

L_007BDCAE:
    ecx = ebp + (-0xA0); /* 0x007BDCAE: lea ecx, [ebp - 0xa0] */
    goto L_0040A000; /* 0x007BDCB4: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BDCB9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BDCB9u);

L_007BDCB9:
    ecx = ebp + (-0x28); /* 0x007BDCB9: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007BDCBC: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BDCC1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BDCC1u);

L_007BDCC1:
    ecx = ebp + (-0x40); /* 0x007BDCC1: lea ecx, [ebp - 0x40] */
    goto L_0040A000; /* 0x007BDCC4: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BDCC9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BDCC9u);

    goto L_007BDCC9;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BDCC9:
    edx = MEM32(esp + 0x8); /* 0x007BDCC9: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BDCCD: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xC0)); /* 0x007BDCD0: mov ecx, dword ptr [edx - 0xc0] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BDCD6: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BDCD8: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x007BDCDD: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BDCE0: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BDCE2: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x00847958u; /* 0x007BDCE7: mov eax, 0x847958 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BDCEC: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BDD00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BDD00u);

L_007BDD00:
    ecx = MEM32(ebp + (-0x54)); /* 0x007BDD00: mov ecx, dword ptr [ebp - 0x54] */
    goto L_0040A000; /* 0x007BDD03: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BDD08(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BDD08u);

L_007BDD08:
    ecx = MEM32(ebp + (-0x5C)); /* 0x007BDD08: mov ecx, dword ptr [ebp - 0x5c] */
    goto L_0040A000; /* 0x007BDD0B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BDD10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BDD10u);

L_007BDD10:
    ecx = MEM32(ebp + (-0x5C)); /* 0x007BDD10: mov ecx, dword ptr [ebp - 0x5c] */
    goto L_0040A000; /* 0x007BDD13: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BDD18(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BDD18u);

L_007BDD18:
    ecx = MEM32(ebp + (-0x54)); /* 0x007BDD18: mov ecx, dword ptr [ebp - 0x54] */
    goto L_0040A000; /* 0x007BDD1B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BDD20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BDD20u);

    goto L_007BDD20;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007BDD20:
    edx = MEM32(esp + 0x8); /* 0x007BDD20: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007BDD24: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x9C)); /* 0x007BDD27: mov ecx, dword ptr [edx - 0x9c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BDD2D: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BDD2F: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x007BDD34: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007BDD37: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007BDD39: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x008479E0u; /* 0x007BDD3E: mov eax, 0x8479e0 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007BDD43: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007BDD50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BDD50u);

L_007BDD50:
    ecx = ebp + (-0xA4); /* 0x007BDD50: lea ecx, [ebp - 0xa4] */
    goto L_0040A000; /* 0x007BDD56: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BDD5B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BDD5Bu);

L_007BDD5B:
    ecx = ebp + (-0x11C); /* 0x007BDD5B: lea ecx, [ebp - 0x11c] */
    goto L_0040A000; /* 0x007BDD61: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BDD66(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BDD66u);

L_007BDD66:
    ecx = ebp + (-0x8C); /* 0x007BDD66: lea ecx, [ebp - 0x8c] */
    goto L_0040A000; /* 0x007BDD6C: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BDD71(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BDD71u);

L_007BDD71:
    ecx = ebp + (-0x11C); /* 0x007BDD71: lea ecx, [ebp - 0x11c] */
    goto L_0040A000; /* 0x007BDD77: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007BDD7C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007BDD7Cu);

L_007BDD7C:
    ecx = MEM32(ebp + (-0x138)); /* 0x007BDD7C: mov ecx, dword ptr [ebp - 0x138] */
    goto L_0040A000; /* 0x007BDD82: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}
