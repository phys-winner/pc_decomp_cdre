#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_007A027F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A027Fu);

L_007A027F:
    ecx = ebp + (-0x88); /* 0x007A027F: lea ecx, [ebp - 0x88] */
    goto L_0040A000; /* 0x007A0285: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A028A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A028Au);

L_007A028A:
    ecx = ebp + (-0x58); /* 0x007A028A: lea ecx, [ebp - 0x58] */
    goto L_0040A000; /* 0x007A028D: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A0292(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A0292u);

L_007A0292:
    ecx = ebp + (-0x28); /* 0x007A0292: lea ecx, [ebp - 0x28] */
    goto L_0040A000; /* 0x007A0295: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A029A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A029Au);

L_007A029A:
    ecx = MEM32(ebp + (-0x8C)); /* 0x007A029A: mov ecx, dword ptr [ebp - 0x8c] */
    goto L_0040A000; /* 0x007A02A0: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A02A5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A02A5u);

L_007A02A5:
    ecx = MEM32(ebp + (-0x90)); /* 0x007A02A5: mov ecx, dword ptr [ebp - 0x90] */
    goto L_0040A000; /* 0x007A02AB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A02B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A02B0u);

L_007A02B0:
    ecx = MEM32(ebp + (-0x94)); /* 0x007A02B0: mov ecx, dword ptr [ebp - 0x94] */
    goto L_0040A000; /* 0x007A02B6: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A02BB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A02BBu);

    goto L_007A02BB;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007A02BB:
    edx = MEM32(esp + 0x8); /* 0x007A02BB: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007A02BF: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x9C)); /* 0x007A02C2: mov ecx, dword ptr [edx - 0x9c] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007A02C8: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007A02CA: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edx + (-0x4)); /* 0x007A02CF: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007A02D2: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007A02D4: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0082B460u; /* 0x007A02D9: mov eax, 0x82b460 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007A02DE: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007A02F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A02F0u);

L_007A02F0:
    ecx = ebp + (-0x2C); /* 0x007A02F0: lea ecx, [ebp - 0x2c] */
    goto L_0040A000; /* 0x007A02F3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A02F8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A02F8u);

L_007A02F8:
    eax = MEM32(ebp + (-0x30)); /* 0x007A02F8: mov eax, dword ptr [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x007A02FB: push eax */
    RECOMP_ICALL(MEM32(0x7CC694)); /* 0x007A02FC: call dword ptr [0x7cc694] */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x007A0302: pop ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x007A0303: ret  */
    RECOMP_REGS_OUT();
}

void sub_007A0304(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A0304u);

    goto L_007A0304;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007A0304:
    edx = MEM32(esp + 0x8); /* 0x007A0304: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0x24); /* 0x007A0308: lea eax, [edx - 0x24] */
    ecx = MEM32(edx + (-0x28)); /* 0x007A030B: mov ecx, dword ptr [edx - 0x28] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007A030E: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007A0310: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0; /* 0x007A0315: add eax, 0 */
    _flag_k = FK_ADD;
    ecx = MEM32(edx + (-0x8)); /* 0x007A0318: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007A031B: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007A031D: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0082B518u; /* 0x007A0322: mov eax, 0x82b518 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007A0327: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007A0330(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A0330u);

L_007A0330:
    ecx = ebp + (-0x44); /* 0x007A0330: lea ecx, [ebp - 0x44] */
    goto L_0040A000; /* 0x007A0333: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A0338(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A0338u);

L_007A0338:
    ecx = ebp + (-0x2C); /* 0x007A0338: lea ecx, [ebp - 0x2c] */
    goto L_0040A000; /* 0x007A033B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A0340(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A0340u);

L_007A0340:
    ecx = MEM32(ebp + (-0x48)); /* 0x007A0340: mov ecx, dword ptr [ebp - 0x48] */
    goto L_0040A000; /* 0x007A0343: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A0348(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A0348u);

L_007A0348:
    ecx = MEM32(ebp + (-0x48)); /* 0x007A0348: mov ecx, dword ptr [ebp - 0x48] */
    goto L_0040A000; /* 0x007A034B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A0350(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A0350u);

    goto L_007A0350;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007A0350:
    edx = MEM32(esp + 0x8); /* 0x007A0350: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0x44); /* 0x007A0354: lea eax, [edx - 0x44] */
    ecx = MEM32(edx + (-0x48)); /* 0x007A0357: mov ecx, dword ptr [edx - 0x48] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007A035A: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007A035C: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x007A0361: add eax, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(edx + (-0x8)); /* 0x007A0364: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007A0367: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007A0369: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0082B574u; /* 0x007A036E: mov eax, 0x82b574 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007A0373: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007A0380(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A0380u);

L_007A0380:
    ecx = MEM32(ebp + (-0x30)); /* 0x007A0380: mov ecx, dword ptr [ebp - 0x30] */
    goto L_0040A000; /* 0x007A0383: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A0388(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A0388u);

L_007A0388:
    ecx = MEM32(ebp + (-0x34)); /* 0x007A0388: mov ecx, dword ptr [ebp - 0x34] */
    goto L_0040A000; /* 0x007A038B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A0390(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A0390u);

L_007A0390:
    ecx = MEM32(ebp + (-0x34)); /* 0x007A0390: mov ecx, dword ptr [ebp - 0x34] */
    goto L_0040A000; /* 0x007A0393: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A0398(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A0398u);

L_007A0398:
    ecx = MEM32(ebp + (-0x34)); /* 0x007A0398: mov ecx, dword ptr [ebp - 0x34] */
    goto L_0040A000; /* 0x007A039B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A03A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A03A0u);

L_007A03A0:
    ecx = MEM32(ebp + (-0x34)); /* 0x007A03A0: mov ecx, dword ptr [ebp - 0x34] */
    goto L_0040A000; /* 0x007A03A3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A03A8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A03A8u);

L_007A03A8:
    ecx = MEM32(ebp + (-0x34)); /* 0x007A03A8: mov ecx, dword ptr [ebp - 0x34] */
    goto L_0040A000; /* 0x007A03AB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A03B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A03B0u);

L_007A03B0:
    ecx = MEM32(ebp + (-0x34)); /* 0x007A03B0: mov ecx, dword ptr [ebp - 0x34] */
    goto L_0040A000; /* 0x007A03B3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A03B8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A03B8u);

L_007A03B8:
    ecx = MEM32(ebp + (-0x34)); /* 0x007A03B8: mov ecx, dword ptr [ebp - 0x34] */
    goto L_0040A000; /* 0x007A03BB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A03C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A03C0u);

L_007A03C0:
    ecx = MEM32(ebp + (-0x34)); /* 0x007A03C0: mov ecx, dword ptr [ebp - 0x34] */
    goto L_0040A000; /* 0x007A03C3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A03C8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A03C8u);

L_007A03C8:
    ecx = MEM32(ebp + (-0x34)); /* 0x007A03C8: mov ecx, dword ptr [ebp - 0x34] */
    goto L_0040A000; /* 0x007A03CB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A03D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A03D0u);

L_007A03D0:
    ecx = MEM32(ebp + (-0x34)); /* 0x007A03D0: mov ecx, dword ptr [ebp - 0x34] */
    goto L_0040A000; /* 0x007A03D3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A03D8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A03D8u);

L_007A03D8:
    ecx = MEM32(ebp + (-0x34)); /* 0x007A03D8: mov ecx, dword ptr [ebp - 0x34] */
    goto L_0040A000; /* 0x007A03DB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A03E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A03E0u);

L_007A03E0:
    ecx = MEM32(ebp + (-0x34)); /* 0x007A03E0: mov ecx, dword ptr [ebp - 0x34] */
    goto L_0040A000; /* 0x007A03E3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A03E8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A03E8u);

L_007A03E8:
    ecx = MEM32(ebp + (-0x34)); /* 0x007A03E8: mov ecx, dword ptr [ebp - 0x34] */
    goto L_0040A000; /* 0x007A03EB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A03F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A03F0u);

L_007A03F0:
    ecx = MEM32(ebp + (-0x34)); /* 0x007A03F0: mov ecx, dword ptr [ebp - 0x34] */
    goto L_0040A000; /* 0x007A03F3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A03F8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A03F8u);

L_007A03F8:
    ecx = MEM32(ebp + (-0x34)); /* 0x007A03F8: mov ecx, dword ptr [ebp - 0x34] */
    goto L_0040A000; /* 0x007A03FB: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A0400(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A0400u);

L_007A0400:
    ecx = MEM32(ebp + (-0x34)); /* 0x007A0400: mov ecx, dword ptr [ebp - 0x34] */
    goto L_0040A000; /* 0x007A0403: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A0408(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A0408u);

L_007A0408:
    ecx = MEM32(ebp + (-0x34)); /* 0x007A0408: mov ecx, dword ptr [ebp - 0x34] */
    goto L_0040A000; /* 0x007A040B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A0410(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A0410u);

L_007A0410:
    ecx = MEM32(ebp + (-0x34)); /* 0x007A0410: mov ecx, dword ptr [ebp - 0x34] */
    goto L_0040A000; /* 0x007A0413: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A0418(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A0418u);

L_007A0418:
    ecx = MEM32(ebp + (-0x34)); /* 0x007A0418: mov ecx, dword ptr [ebp - 0x34] */
    goto L_0040A000; /* 0x007A041B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A0420(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A0420u);

L_007A0420:
    ecx = MEM32(ebp + (-0x34)); /* 0x007A0420: mov ecx, dword ptr [ebp - 0x34] */
    goto L_0040A000; /* 0x007A0423: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A0428(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A0428u);

L_007A0428:
    ecx = MEM32(ebp + (-0x34)); /* 0x007A0428: mov ecx, dword ptr [ebp - 0x34] */
    goto L_0040A000; /* 0x007A042B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A0430(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A0430u);

L_007A0430:
    ecx = MEM32(ebp + (-0x34)); /* 0x007A0430: mov ecx, dword ptr [ebp - 0x34] */
    goto L_0040A000; /* 0x007A0433: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A0438(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A0438u);

L_007A0438:
    ecx = MEM32(ebp + (-0x34)); /* 0x007A0438: mov ecx, dword ptr [ebp - 0x34] */
    goto L_0040A000; /* 0x007A043B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A0440(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A0440u);

L_007A0440:
    ecx = MEM32(ebp + (-0x34)); /* 0x007A0440: mov ecx, dword ptr [ebp - 0x34] */
    goto L_0040A000; /* 0x007A0443: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A0448(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A0448u);

L_007A0448:
    ecx = MEM32(ebp + (-0x34)); /* 0x007A0448: mov ecx, dword ptr [ebp - 0x34] */
    goto L_0040A000; /* 0x007A044B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A0450(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A0450u);

L_007A0450:
    ecx = MEM32(ebp + (-0x34)); /* 0x007A0450: mov ecx, dword ptr [ebp - 0x34] */
    goto L_0040A000; /* 0x007A0453: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A0458(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A0458u);

L_007A0458:
    ecx = MEM32(ebp + (-0x34)); /* 0x007A0458: mov ecx, dword ptr [ebp - 0x34] */
    goto L_0040A000; /* 0x007A045B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A0460(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A0460u);

L_007A0460:
    ecx = MEM32(ebp + (-0x34)); /* 0x007A0460: mov ecx, dword ptr [ebp - 0x34] */
    goto L_0040A000; /* 0x007A0463: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A0468(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A0468u);

L_007A0468:
    ecx = MEM32(ebp + (-0x34)); /* 0x007A0468: mov ecx, dword ptr [ebp - 0x34] */
    goto L_0040A000; /* 0x007A046B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A0470(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A0470u);

L_007A0470:
    ecx = MEM32(ebp + (-0x34)); /* 0x007A0470: mov ecx, dword ptr [ebp - 0x34] */
    goto L_0040A000; /* 0x007A0473: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A0478(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A0478u);

L_007A0478:
    ecx = MEM32(ebp + (-0x34)); /* 0x007A0478: mov ecx, dword ptr [ebp - 0x34] */
    goto L_0040A000; /* 0x007A047B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A0480(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A0480u);

L_007A0480:
    ecx = MEM32(ebp + (-0x34)); /* 0x007A0480: mov ecx, dword ptr [ebp - 0x34] */
    goto L_0040A000; /* 0x007A0483: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A0488(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A0488u);

L_007A0488:
    ecx = MEM32(ebp + (-0x34)); /* 0x007A0488: mov ecx, dword ptr [ebp - 0x34] */
    goto L_0040A000; /* 0x007A048B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A0490(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A0490u);

L_007A0490:
    ecx = ebp + (-0x2C); /* 0x007A0490: lea ecx, [ebp - 0x2c] */
    goto L_0040A000; /* 0x007A0493: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A0498(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A0498u);

    goto L_007A0498;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007A0498:
    edx = MEM32(esp + 0x8); /* 0x007A0498: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0x34); /* 0x007A049C: lea eax, [edx - 0x34] */
    ecx = MEM32(edx + (-0x38)); /* 0x007A049F: mov ecx, dword ptr [edx - 0x38] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007A04A2: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007A04A4: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x007A04A9: add eax, 8 */
    _flag_k = FK_ADD;
    ecx = MEM32(edx + (-0x8)); /* 0x007A04AC: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007A04AF: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007A04B1: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0082B5C8u; /* 0x007A04B6: mov eax, 0x82b5c8 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007A04BB: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007A04C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A04C0u);

L_007A04C0:
    ecx = ebp + (-0xA4); /* 0x007A04C0: lea ecx, [ebp - 0xa4] */
    goto L_0040A000; /* 0x007A04C6: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A04CB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A04CBu);

L_007A04CB:
    ecx = ebp + (-0x2C); /* 0x007A04CB: lea ecx, [ebp - 0x2c] */
    goto L_0040A000; /* 0x007A04CE: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A04D3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A04D3u);

L_007A04D3:
    ecx = MEM32(ebp + (-0xB0)); /* 0x007A04D3: mov ecx, dword ptr [ebp - 0xb0] */
    goto L_0040A000; /* 0x007A04D9: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A04DE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A04DEu);

L_007A04DE:
    ecx = ebp + (-0x5C); /* 0x007A04DE: lea ecx, [ebp - 0x5c] */
    goto L_0040A000; /* 0x007A04E1: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A04E6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A04E6u);

L_007A04E6:
    ecx = ebp + (-0x74); /* 0x007A04E6: lea ecx, [ebp - 0x74] */
    goto L_0040A000; /* 0x007A04E9: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A04EE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A04EEu);

L_007A04EE:
    ecx = ebp + (-0x44); /* 0x007A04EE: lea ecx, [ebp - 0x44] */
    goto L_0040A000; /* 0x007A04F1: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A04F6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A04F6u);

L_007A04F6:
    ecx = ebp + (-0x8C); /* 0x007A04F6: lea ecx, [ebp - 0x8c] */
    goto L_0040A000; /* 0x007A04FC: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A0501(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A0501u);

L_007A0501:
    ecx = MEM32(ebp + (-0xB0)); /* 0x007A0501: mov ecx, dword ptr [ebp - 0xb0] */
    goto L_0040A000; /* 0x007A0507: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A050C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A050Cu);

L_007A050C:
    ecx = MEM32(ebp + (-0xAC)); /* 0x007A050C: mov ecx, dword ptr [ebp - 0xac] */
    goto L_0040A000; /* 0x007A0512: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A0517(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A0517u);

L_007A0517:
    ecx = MEM32(ebp + (-0xA8)); /* 0x007A0517: mov ecx, dword ptr [ebp - 0xa8] */
    goto L_0040A000; /* 0x007A051D: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A0522(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A0522u);

    goto L_007A0522;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007A0522:
    edx = MEM32(esp + 0x8); /* 0x007A0522: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0xAC); /* 0x007A0526: lea eax, [edx - 0xac] */
    ecx = MEM32(edx + (-0xB0)); /* 0x007A052C: mov ecx, dword ptr [edx - 0xb0] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007A0532: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007A0534: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x007A0539: add eax, 8 */
    _flag_k = FK_ADD;
    ecx = MEM32(edx + (-0x8)); /* 0x007A053C: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007A053F: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007A0541: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0082B708u; /* 0x007A0546: mov eax, 0x82b708 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007A054B: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007A0550(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A0550u);

L_007A0550:
    ecx = MEM32(ebp + (-0xE4)); /* 0x007A0550: mov ecx, dword ptr [ebp - 0xe4] */
    goto L_0040A000; /* 0x007A0556: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A055B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A055Bu);

L_007A055B:
    ecx = ebp + (-0x2C); /* 0x007A055B: lea ecx, [ebp - 0x2c] */
    goto L_0040A000; /* 0x007A055E: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A0563(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A0563u);

L_007A0563:
    ecx = ebp + (-0x5C); /* 0x007A0563: lea ecx, [ebp - 0x5c] */
    goto L_0040A000; /* 0x007A0566: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A056B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A056Bu);

L_007A056B:
    ecx = ebp + (-0x8C); /* 0x007A056B: lea ecx, [ebp - 0x8c] */
    goto L_0040A000; /* 0x007A0571: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A0576(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A0576u);

L_007A0576:
    ecx = ebp + (-0xBC); /* 0x007A0576: lea ecx, [ebp - 0xbc] */
    goto L_0040A000; /* 0x007A057C: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A0581(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A0581u);

L_007A0581:
    ecx = ebp + (-0x74); /* 0x007A0581: lea ecx, [ebp - 0x74] */
    goto L_0040A000; /* 0x007A0584: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A0589(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A0589u);

L_007A0589:
    ecx = ebp + (-0x44); /* 0x007A0589: lea ecx, [ebp - 0x44] */
    goto L_0040A000; /* 0x007A058C: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A0591(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A0591u);

L_007A0591:
    ecx = ebp + (-0xD4); /* 0x007A0591: lea ecx, [ebp - 0xd4] */
    goto L_0040A000; /* 0x007A0597: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A059C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A059Cu);

L_007A059C:
    ecx = ebp + (-0xA4); /* 0x007A059C: lea ecx, [ebp - 0xa4] */
    goto L_0040A000; /* 0x007A05A2: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A05A7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A05A7u);

L_007A05A7:
    ecx = MEM32(ebp + (-0xE4)); /* 0x007A05A7: mov ecx, dword ptr [ebp - 0xe4] */
    goto L_0040A000; /* 0x007A05AD: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A05B2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A05B2u);

L_007A05B2:
    ecx = MEM32(ebp + (-0xE0)); /* 0x007A05B2: mov ecx, dword ptr [ebp - 0xe0] */
    goto L_0040A000; /* 0x007A05B8: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A05BD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A05BDu);

L_007A05BD:
    ecx = MEM32(ebp + (-0xDC)); /* 0x007A05BD: mov ecx, dword ptr [ebp - 0xdc] */
    goto L_0040A000; /* 0x007A05C3: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A05C8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A05C8u);

L_007A05C8:
    ecx = MEM32(ebp + (-0xD8)); /* 0x007A05C8: mov ecx, dword ptr [ebp - 0xd8] */
    goto L_0040A000; /* 0x007A05CE: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A05D3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A05D3u);

    goto L_007A05D3;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007A05D3:
    edx = MEM32(esp + 0x8); /* 0x007A05D3: mov edx, dword ptr [esp + 8] */
    eax = edx + (-0xDC); /* 0x007A05D7: lea eax, [edx - 0xdc] */
    ecx = MEM32(edx + (-0xE0)); /* 0x007A05DD: mov ecx, dword ptr [edx - 0xe0] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007A05E3: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007A05E5: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x007A05EA: add eax, 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(edx + (-0x8)); /* 0x007A05ED: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007A05F0: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007A05F2: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0082B780u; /* 0x007A05F7: mov eax, 0x82b780 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007A05FC: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007A0610(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A0610u);

L_007A0610:
    ecx = MEM32(ebp + (-0x10)); /* 0x007A0610: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040A000; /* 0x007A0613: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A0618(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A0618u);

L_007A0618:
    ecx = MEM32(ebp + (-0x10)); /* 0x007A0618: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x1Cu; /* 0x007A061B: add ecx, 0x1c */
    _flag_k = FK_ADD;
    goto L_0040A000; /* 0x007A061E: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A0623(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A0623u);

    goto L_007A0623;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007A0623:
    edx = MEM32(esp + 0x8); /* 0x007A0623: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007A0627: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x8)); /* 0x007A062A: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007A062D: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007A062F: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0082B810u; /* 0x007A0634: mov eax, 0x82b810 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007A0639: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007A0640(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A0640u);

L_007A0640:
    ecx = MEM32(ebp + (-0x10)); /* 0x007A0640: mov ecx, dword ptr [ebp - 0x10] */
    goto L_0040A000; /* 0x007A0643: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A0648(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A0648u);

L_007A0648:
    ecx = MEM32(ebp + (-0x10)); /* 0x007A0648: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x1Cu; /* 0x007A064B: add ecx, 0x1c */
    _flag_k = FK_ADD;
    goto L_0040A000; /* 0x007A064E: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A0653(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A0653u);

    goto L_007A0653;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007A0653:
    edx = MEM32(esp + 0x8); /* 0x007A0653: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007A0657: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0xC)); /* 0x007A065A: mov ecx, dword ptr [edx - 0xc] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007A065D: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007A065F: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0082B844u; /* 0x007A0664: mov eax, 0x82b844 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007A0669: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007A0670(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A0670u);

L_007A0670:
    ecx = MEM32(ebp + (-0x10)); /* 0x007A0670: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x007A0673: add ecx, 4 */
    _flag_k = FK_ADD;
    goto L_0040A000; /* 0x007A0676: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A067B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A067Bu);

L_007A067B:
    ecx = MEM32(ebp + (-0x10)); /* 0x007A067B: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x1Cu; /* 0x007A067E: add ecx, 0x1c */
    _flag_k = FK_ADD;
    goto L_0040A000; /* 0x007A0681: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A0686(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A0686u);

L_007A0686:
    ecx = MEM32(ebp + (-0x10)); /* 0x007A0686: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x34u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x34u; /* 0x007A0689: add ecx, 0x34 */
    _flag_k = FK_ADD;
    goto L_0040A000; /* 0x007A068C: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A0691(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A0691u);

    goto L_007A0691;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007A0691:
    edx = MEM32(esp + 0x8); /* 0x007A0691: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007A0695: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x8)); /* 0x007A0698: mov ecx, dword ptr [edx - 8] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007A069B: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007A069D: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0082B878u; /* 0x007A06A2: mov eax, 0x82b878 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007A06A7: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007A06B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A06B0u);

L_007A06B0:
    ecx = 0x0086568Cu; /* 0x007A06B0: mov ecx, 0x86568c */
    goto L_0040A000; /* 0x007A06B5: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A06BA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A06BAu);

L_007A06BA:
    ecx = 0x008656A4u; /* 0x007A06BA: mov ecx, 0x8656a4 */
    goto L_0040A000; /* 0x007A06BF: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A06C4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A06C4u);

L_007A06C4:
    ecx = 0x008656BCu; /* 0x007A06C4: mov ecx, 0x8656bc */
    goto L_0040A000; /* 0x007A06C9: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A06CE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A06CEu);

    goto L_007A06CE;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007A06CE:
    edx = MEM32(esp + 0x8); /* 0x007A06CE: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007A06D2: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x4)); /* 0x007A06D5: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007A06D8: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007A06DA: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0082B8B4u; /* 0x007A06DF: mov eax, 0x82b8b4 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007A06E4: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007A06F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A06F0u);

L_007A06F0:
    ecx = 0x00865604u; /* 0x007A06F0: mov ecx, 0x865604 */
    goto L_0040A000; /* 0x007A06F5: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A06FA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A06FAu);

L_007A06FA:
    ecx = 0x0086561Cu; /* 0x007A06FA: mov ecx, 0x86561c */
    goto L_0040A000; /* 0x007A06FF: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A0704(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A0704u);

L_007A0704:
    ecx = 0x00865634u; /* 0x007A0704: mov ecx, 0x865634 */
    goto L_0040A000; /* 0x007A0709: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A070E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A070Eu);

    goto L_007A070E;
L_0078001C:
    { _itail_tgt = (uint32_t)(MEM32(0x7CC670)); goto _ljump; }
L_007A070E:
    edx = MEM32(esp + 0x8); /* 0x007A070E: mov edx, dword ptr [esp + 8] */
    eax = edx + 0xC; /* 0x007A0712: lea eax, [edx + 0xc] */
    ecx = MEM32(edx + (-0x4)); /* 0x007A0715: mov ecx, dword ptr [edx - 4] */
    _flag_a = (uint32_t)((ecx ^ eax)); _flag_b = (uint32_t)((ecx ^ eax));
    ecx = ecx ^ eax; /* 0x007A0718: xor ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_0077F4C2); /* 0x007A071A: call 0x77f4c2 */
    RECOMP_FLAGS_IN();
    eax = 0x0082B8F0u; /* 0x007A071F: mov eax, 0x82b8f0 */
    RECOMP_BACKEDGE();
    goto L_0078001C; /* 0x007A0724: jmp 0x78001c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_007A0730(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A0730u);

L_007A0730:
    ecx = MEM32(ebp + (-0x78)); /* 0x007A0730: mov ecx, dword ptr [ebp - 0x78] */
    goto L_0040A000; /* 0x007A0733: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A0738(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A0738u);

L_007A0738:
    ecx = MEM32(ebp + (-0x78)); /* 0x007A0738: mov ecx, dword ptr [ebp - 0x78] */
    goto L_0040A000; /* 0x007A073B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A0740(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A0740u);

L_007A0740:
    ecx = MEM32(ebp + (-0x78)); /* 0x007A0740: mov ecx, dword ptr [ebp - 0x78] */
    goto L_0040A000; /* 0x007A0743: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A0748(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A0748u);

L_007A0748:
    ecx = MEM32(ebp + (-0x78)); /* 0x007A0748: mov ecx, dword ptr [ebp - 0x78] */
    goto L_0040A000; /* 0x007A074B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A0750(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A0750u);

L_007A0750:
    ecx = MEM32(ebp + (-0x78)); /* 0x007A0750: mov ecx, dword ptr [ebp - 0x78] */
    goto L_0040A000; /* 0x007A0753: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}

void sub_007A0758(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x007A0758u);

L_007A0758:
    ecx = MEM32(ebp + (-0x78)); /* 0x007A0758: mov ecx, dword ptr [ebp - 0x78] */
    goto L_0040A000; /* 0x007A075B: jmp 0x40a000 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    L_0040A000: RECOMP_ITAIL(0x0040A000u); { RECOMP_REGS_OUT(); return; }
    RECOMP_REGS_OUT();
}
